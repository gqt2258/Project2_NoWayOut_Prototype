// Co-op state that has to survive scene loads (the disconnect screen and SceneLoader use it).
public static class CoopSession
{
    // The host's address from the last Join, used by Reconnect.
    public static string LastHostAddress;

    // Open the co-op lobby when the Main Menu scene loads (host ended the job, or guest reconnected).
    public static bool ReturnToLobby;

    // Show "Connection Restored" when the next scene's disconnect screen starts.
    public static bool JustReconnected;

    // This device is leaving on purpose, so its own disconnect is not treated as a lost connection.
    public static bool LeavingOnPurpose;
}
