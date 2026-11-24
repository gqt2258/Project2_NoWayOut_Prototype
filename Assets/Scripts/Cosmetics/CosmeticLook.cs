using System;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using System.Linq;
using UnityEditor;
#endif

// Which animation and direction a frame belongs to. Same 6 as the player's animations.
public enum CharacterPose { IdleFront, IdleBack, IdleSide, WalkFront, WalkBack, WalkSide }

// Where a cosmetic goes on the character. Drawn in this order: Body, Shirt, Hat.
public enum CosmeticSlot { None, Shirt, Hat, FlashlightSkin }

// The frames of one look, for all 6 animations: the player's body, or one hat / shirt.
// Every look must have the SAME number of frames, frame size and pivot as the body,
// so frame 3 of the hat sits on frame 3 of the body.
//
// Create: Project window > right-click > Create > Cosmetics > Cosmetic Look.
// Fill it quickly: drag the 6 sliced sheets into the "Sheets" slots, then click the
// menu at the top right of the Inspector > "Fill Frames From Sheets".
[CreateAssetMenu(menuName = "Cosmetics/Cosmetic Look")]
public class CosmeticLook : ScriptableObject
{
    [Header("Frames (12 each, in order)")]
    public Sprite[] idleFront;
    public Sprite[] idleBack;
    public Sprite[] idleSide;
    public Sprite[] walkFront;
    public Sprite[] walkBack;
    public Sprite[] walkSide;

    [Header("Sheets (only used to fill the frames above)")]
    public Texture2D idleFrontSheet;
    public Texture2D idleBackSheet;
    public Texture2D idleSideSheet;
    public Texture2D walkFrontSheet;
    public Texture2D walkBackSheet;
    public Texture2D walkSideSheet;

    public Sprite[] Get(CharacterPose pose)
    {
        switch (pose)
        {
            case CharacterPose.IdleFront: return idleFront;
            case CharacterPose.IdleBack: return idleBack;
            case CharacterPose.IdleSide: return idleSide;
            case CharacterPose.WalkFront: return walkFront;
            case CharacterPose.WalkBack: return walkBack;
            default: return walkSide;
        }
    }

    // The same frame in this look (null if this look doesn't have it).
    public Sprite Frame(CharacterPose pose, int index)
    {
        Sprite[] frames = Get(pose);
        return frames != null && index >= 0 && index < frames.Length ? frames[index] : null;
    }

    // Body sprite -> which pose and frame it is. Used to put cosmetics on the right frame.
    Dictionary<Sprite, (CharacterPose, int)> lookup;

    public bool TryFind(Sprite bodySprite, out CharacterPose pose, out int index)
    {
        if (lookup == null)
        {
            lookup = new Dictionary<Sprite, (CharacterPose, int)>();
            foreach (CharacterPose p in Enum.GetValues(typeof(CharacterPose)))
            {
                Sprite[] frames = Get(p);
                if (frames == null) continue;
                for (int i = 0; i < frames.Length; i++)
                    if (frames[i] != null && !lookup.ContainsKey(frames[i]))
                        lookup.Add(frames[i], (p, i));
            }
        }

        pose = CharacterPose.IdleFront;
        index = 0;
        if (bodySprite == null || !lookup.TryGetValue(bodySprite, out var found))
            return false;
        (pose, index) = found;
        return true;
    }

    void OnValidate()
    {
        lookup = null;   // frames changed in the Inspector
    }

#if UNITY_EDITOR
    [ContextMenu("Fill Frames From Sheets")]
    void FillFromSheets()
    {
        idleFront = Slice(idleFrontSheet, idleFront);
        idleBack = Slice(idleBackSheet, idleBack);
        idleSide = Slice(idleSideSheet, idleSide);
        walkFront = Slice(walkFrontSheet, walkFront);
        walkBack = Slice(walkBackSheet, walkBack);
        walkSide = Slice(walkSideSheet, walkSide);
        lookup = null;
        EditorUtility.SetDirty(this);
        Debug.Log($"{name}: frames filled. Idle {Count(idleFront)}/{Count(idleBack)}/{Count(idleSide)}, " +
                  $"Walk {Count(walkFront)}/{Count(walkBack)}/{Count(walkSide)} (front/back/side).", this);
    }

    static int Count(Sprite[] frames) => frames != null ? frames.Length : 0;

    // All sprites sliced from the sheet, in order (name_0, name_1, ... name_11).
    static Sprite[] Slice(Texture2D sheet, Sprite[] keep)
    {
        if (sheet == null)
            return keep;
        return AssetDatabase.LoadAllAssetsAtPath(AssetDatabase.GetAssetPath(sheet))
            .OfType<Sprite>()
            .OrderBy(sprite => FrameNumber(sprite.name))
            .ToArray();
    }

    static int FrameNumber(string spriteName)
    {
        int underscore = spriteName.LastIndexOf('_');
        return underscore >= 0 && int.TryParse(spriteName.Substring(underscore + 1), out int number) ? number : 0;
    }
#endif
}