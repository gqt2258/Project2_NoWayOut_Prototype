#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

struct ICollection_1_tAF59B88C5E14AF9ADDE6A1E1A9624DED1B2DE17D;
struct ICollection_1_t58D5B5A564BF08CD3C8EE106100AC0D7B8C4508B;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IDictionary_2_t5E7487197D99D73B6A537401DBADD60587F2596A;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t3BDF573B3D01D6EAA86E7C1A8529CF529732809E;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_t2AE5E199CB93D17B1E27686CC16B6667521C4040;
struct IEnumerator_1_tBF6C47FD132BC760EB3FDF790E0FE91FD3053E9B;
struct IEnumerator_1_t9BAC5B5F88A0B1402733E2E2AA7CDE94AAFFA628;
struct IEnumerator_1_tDA7EC6DD9C7B117D360F4F267DE1AF00D78E8A69;
struct IEnumerator_1_t795CE62572C33D602EE9162EFF1F8EB4430DAD53;
struct IEnumerator_1_t3EEE9F125377475C3703132A819F02052CF21AFE;
struct IEnumerator_1_t7BCCF276AC30D3D187A762A3D4C55F4DA5CF0A12;
struct IEnumerator_1_t039FD1F79231873CA31A318A129D0F6366AE3729;
struct IEnumerator_1_tA64CB30F779A737F032BA0D0CA682AC54394FFA9;
struct IList_1_tCC943A0042E6BB5B3A81CD3BE47F5757992D48D0;
struct IList_1_t508D5DFA2AB2A294AE3394E462C1CAD77F2661CB;
struct IList_1_t36B65C5A0703C973E0430B86757444E48EB4FB33;
struct IList_1_t003E5AFD433AB8547CCEE560E2BED50D6AD222BD;
struct IList_1_tDE5A2CD28934CB598C6F11B9F1968099A5148F4C;
struct IList_1_tE3897FF146787D9898848BA6072D0A5ACF74AF62;
struct IList_1_tC43AD077B5DBEFD836CDC2D1D0F3257315EB484F;
struct IList_1_t45147F5693AC2CD8E1FC02E6C69D23EC082D597B;
struct IList_1_t9603583555C8EAF0519028F467C9AD34BFEE4011;
struct KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334;
struct KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221;
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65;
struct ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF;
struct ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227;
struct ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC;
struct ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247;
struct ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D;
struct ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4;
struct ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235;
struct ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434;
struct ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248;
struct ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734;
struct ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C;
struct ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849;
struct ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E;
struct ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85;
struct ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F;
struct ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257;
struct ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD;
struct ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13;
struct ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885;
struct ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931;
struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA;
struct Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF;
struct Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA;
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5;
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
struct KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C;
struct UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A;
struct UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B;
struct UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC;
struct UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1;
struct UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3;
struct UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6;
struct UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8;
struct UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6;
struct UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64;
struct PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA;
struct VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F;
struct ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279;
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E;
struct PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC;
struct ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317;
struct AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct Entry_t475ED76E31923970E7F7A6522E570E7577C487B9;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D;
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73;
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
struct unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80;
struct BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57;
struct TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3;
struct NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F;
struct ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E;
struct ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85;
struct ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F;
struct ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257;
struct ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD;
struct ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13;
struct ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885;
struct ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931;
struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA;
struct Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF;
struct Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA;
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5;
struct KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C;
struct UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A;
struct UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B;
struct UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC;
struct UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1;
struct UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3;
struct UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6;
struct UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8;
struct UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6;
struct UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64;
struct PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA;
struct VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F;
struct ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279;
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E;
struct PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC;
struct ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_t5645AFD0E8443842BF722C48FE084A0AD8FB9C3F  : public RuntimeObject
{
};
struct EmptyArray_1_t80380D195D0EA1035062D1FC1D4A1A0C1FB2A452  : public RuntimeObject
{
};
struct EmptyArray_1_t326678ECDD356906907BCD03308AE05FCBB14738  : public RuntimeObject
{
};
struct EmptyArray_1_t5DA3D6F58CFF7067A4473CC5C94140F6B0BB1383  : public RuntimeObject
{
};
struct EmptyArray_1_tD03B86572C4D1451C9314D535A6E0F8CA5939999  : public RuntimeObject
{
};
struct EmptyArray_1_t0FF66F0AD14209D95E74DC5AE956BC83003DBC4A  : public RuntimeObject
{
};
struct EmptyArray_1_t26C7C247835B54DC3E87DB46010E7758BC6655DB  : public RuntimeObject
{
};
struct EmptyArray_1_t38E96CD689D1FFA2AF9EABCEFD08457D8D280F4D  : public RuntimeObject
{
};
struct EmptyArray_1_tBCCAE4080E81992F81CEC3B682CED9E81A3B4D67  : public RuntimeObject
{
};
struct EmptyArray_1_t301F50E763B634BAEF1898CFD644478791477A24  : public RuntimeObject
{
};
struct EmptyArray_1_t0884D77AB362266D3E9298E3E595AB5806A358F4  : public RuntimeObject
{
};
struct EmptyArray_1_tF44AD9BD1A58C47BDCB13A8D4D22873C785CC3F8  : public RuntimeObject
{
};
struct EmptyArray_1_t4505232400AEC5D181E96238357D9ACD1C992762  : public RuntimeObject
{
};
struct EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867  : public RuntimeObject
{
};
struct EmptyArray_1_tC9589F12F2382131419143780EC4B16F75839727  : public RuntimeObject
{
};
struct EmptyArray_1_t39CC4801B12BC59D744D8F2F14920ED998228BE1  : public RuntimeObject
{
};
struct EmptyArray_1_t8F16BED9A16610B0610D3B8977C56192C7CE8275  : public RuntimeObject
{
};
struct EmptyArray_1_tE873052363E5FFF3E3324D48BF2E70EABF9FBA3E  : public RuntimeObject
{
};
struct EmptyArray_1_tE694D0227F619BC5A10811AC94E5B6D8EE0CBD57  : public RuntimeObject
{
};
struct EmptyArray_1_tA05DBCB91EE064FE54203B7543F218C61D4C292D  : public RuntimeObject
{
};
struct EmptyArray_1_tFEE1A4E0C8058B54F07835CFB63F231873095076  : public RuntimeObject
{
};
struct EmptyArray_1_t8505E6935DD4C58400550971BB8321BD8CE9D6CF  : public RuntimeObject
{
};
struct EmptyArray_1_tA0B73630739AC85F81DDEFE547CAFB1C84FB72C6  : public RuntimeObject
{
};
struct EmptyArray_1_t1347A16AC3E72AFF909DAA98EED1FA11A4470068  : public RuntimeObject
{
};
struct KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334  : public RuntimeObject
{
	RuntimeObject* ____collection;
	RuntimeObject* ____syncRoot;
};
struct KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221  : public RuntimeObject
{
	RuntimeObject* ____collection;
	RuntimeObject* ____syncRoot;
};
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};
struct MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487  : public RuntimeObject
{
};
struct ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248  : public RuntimeObject
{
	RuntimeObject* ___m_dictionary;
	RuntimeObject* ____syncRoot;
	KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* ____keys;
	ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* ____values;
};
struct ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734  : public RuntimeObject
{
	RuntimeObject* ___m_dictionary;
	RuntimeObject* ____syncRoot;
	KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* ____keys;
	ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* ____values;
};
struct ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C  : public RuntimeObject
{
	RuntimeObject* ____collection;
	RuntimeObject* ____syncRoot;
};
struct ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849  : public RuntimeObject
{
	RuntimeObject* ____collection;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct DictionaryEnumerator_t521F5E252B311C00E1DC36A7487E9D81BE68C8BC 
{
	RuntimeObject* ____dictionary;
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77 
{
	RuntimeObject* ____dictionary;
	RuntimeObject* ____enumerator;
};
struct Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC 
{
	uint64_t ___Value;
};
struct Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF 
{
	uint64_t ___Value;
};
struct HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	Il2CppSharedGenericObject* ___compiledGraph;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB 
{
	int32_t ___Id;
	int32_t ___Version;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C 
{
	int32_t ___U3CTypeIndexU3Ek__BackingField;
	int32_t ___U3CEnumValueU3Ek__BackingField;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct U3CValueU3Ee__FixedBuffer_t69BFA289EC1CC537A6BECE4C3783CFE49B78077F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t69BFA289EC1CC537A6BECE4C3783CFE49B78077F__padding[8];
	};
};
struct DTLSConnectionData_t826F3755B5988EFB0472E317D12DDD6A088379FF 
{
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___UnityTLSClientPtr;
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___ReconnectionClientPtr;
	int64_t ___LastHandshakeUpdate;
	int64_t ___LastReceive;
};
struct ConnectionData_t047259821C45CA9102A1337567BA69F793E7C336 
{
	int64_t ___LastConnectAttempt;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 
{
	RuntimeObject* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_pinvoke
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_com
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 
{
	String_t* ___displayName;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_pinvoke
{
	char* ___displayName;
	Il2CppMethodPointer ___action;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_com
{
	Il2CppChar* ___displayName;
	Il2CppMethodPointer ___action;
};
struct NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4 
{
	String_t* ___name;
	String_t* ___tooltip;
};
struct NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_pinvoke
{
	char* ___name;
	char* ___tooltip;
};
struct NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___tooltip;
};
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31 
{
	String_t* ___filePath;
	int32_t ___line;
};
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_pinvoke
{
	char* ___filePath;
	int32_t ___line;
};
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_com
{
	Il2CppChar* ___filePath;
	int32_t ___line;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 
{
	String_t* ___name;
	bool ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	bool ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_marshaled_pinvoke
{
	char* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	int32_t ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	int32_t ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct U3CDecryptBufferU3Ee__FixedBuffer_t99EFBE0AEE5F594B833AF7CE45BB275855C78596 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDecryptBufferU3Ee__FixedBuffer_t99EFBE0AEE5F594B833AF7CE45BB275855C78596__padding[2944];
	};
};
struct U3CDataU3Ee__FixedBuffer_t1D35629FEF74B6CCE225C6E300D965BC6E60A179 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t1D35629FEF74B6CCE225C6E300D965BC6E60A179__padding[2944];
	};
};
struct U3CKeyU3Ee__FixedBuffer_t0A5EBC1ABD67AE7DB30E930A11B038355758D32E 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CKeyU3Ee__FixedBuffer_t0A5EBC1ABD67AE7DB30E930A11B038355758D32E__padding[16];
	};
};
struct U3CDataU3Ee__FixedBuffer_t8D146C336A688DCDD5E4A4153B9A8FA93347AC91 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t8D146C336A688DCDD5E4A4153B9A8FA93347AC91__padding[1458];
	};
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 
{
	String_t* ___message;
	bool ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_pinvoke
{
	char* ___message;
	int32_t ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_com
{
	Il2CppChar* ___message;
	int32_t ___isCompatible;
};
struct ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 
{
	intptr_t ____value;
};
struct ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 
{
	intptr_t ____value;
};
struct ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 
{
	intptr_t ____value;
};
struct ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 
{
	intptr_t ____value;
};
struct ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 
{
	intptr_t ____value;
};
struct ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C 
{
	intptr_t ____value;
};
struct ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C 
{
	intptr_t ____value;
};
struct ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 
{
	intptr_t ____value;
};
struct ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 
{
	intptr_t ____value;
};
struct ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 
{
	intptr_t ____value;
};
struct ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B 
{
	intptr_t ____value;
};
struct ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A 
{
	intptr_t ____value;
};
struct ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 
{
	intptr_t ____value;
};
struct ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F 
{
	intptr_t ____value;
};
struct ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F 
{
	intptr_t ____value;
};
struct ByReference_1_tC71D682DBC538763066DF671429413D25394012A 
{
	intptr_t ____value;
};
struct ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D 
{
	intptr_t ____value;
};
struct ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD 
{
	intptr_t ____value;
};
struct ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 
{
	intptr_t ____value;
};
struct ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E 
{
	intptr_t ____value;
};
struct ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA 
{
	intptr_t ____value;
};
struct ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 
{
	intptr_t ____value;
};
struct ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 
{
	intptr_t ____value;
};
struct ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 
{
	intptr_t ____value;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF 
{
	int32_t ___Version;
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___Value;
};
struct ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 
{
	int32_t ___Version;
	DTLSConnectionData_t826F3755B5988EFB0472E317D12DDD6A088379FF ___Value;
};
struct ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 
{
	int32_t ___Version;
	ConnectionData_t047259821C45CA9102A1337567BA69F793E7C336 ___Value;
};
struct KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE 
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___key;
	Il2CppSharedGenericObject* ___value;
};
struct ReadOnlyNativeVector_1_t0DE13C6BA89CEDB2D828D3F45AA93F7EC7AD4A0E 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Count;
};
struct ReadOnlyNativeVector_1_t53A6814B9ECC2D21CA860DE85D9AEB86D11F6F17 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Count;
};
struct ReadOnlyNativeVector_1_tE45C179B8DFEAD70E1F59D744D5C6999873C0FFC 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Count;
};
struct UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD 
{
	AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D 
{
	uint8_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 
{
	EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 
{
	int16_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF 
{
	InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 
{
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 
{
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A 
{
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct ConnectionToken_tC4332AD93CD9451E95FE2AD7805E547B2A2A9F52 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			U3CValueU3Ee__FixedBuffer_t69BFA289EC1CC537A6BECE4C3783CFE49B78077F ___Value;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CValueU3Ee__FixedBuffer_t69BFA289EC1CC537A6BECE4C3783CFE49B78077F ___Value_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___m_ValueLongWorkaround;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___m_ValueLongWorkaround_forAlignmentOnly;
		};
	};
};
struct DisconnectReason_tFE5B10DED724BFDB7E71A454B809E0CC73B6C36C 
{
	uint8_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779__padding[32];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1__padding[64];
	};
};
#pragma pack(pop, tp)
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SelectorAccelerationTableType_t29E86C4FCF992B838F757327FF6002927A251B9A 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 
{
	intptr_t ___handle;
};
struct State_t58277D770B48C86476C47DA7091149AE7927FAFE 
{
	int32_t ___value__;
};
struct ConnectionState_t482E5F413BDC06FDEBE98C5BBA778142B597F137 
{
	int32_t ___value__;
};
struct TLSConnectionData_tFC3A9A0934E0286BB1220A5984FAC6EFD55AC6DD 
{
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___UnityTLSClientPtr;
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnection;
	int64_t ___LastHandshakeUpdate;
	U3CDecryptBufferU3Ee__FixedBuffer_t99EFBE0AEE5F594B833AF7CE45BB275855C78596 ___DecryptBuffer;
	int32_t ___DecryptBufferLength;
};
struct Buffer_tABA3AFC724DBB678EE82E9C77F9340F0E5C89571 
{
	U3CDataU3Ee__FixedBuffer_t1D35629FEF74B6CCE225C6E300D965BC6E60A179 ___Data;
	int32_t ___Length;
};
struct Keys_t0341510CDC4CCC1D4F1EEA2DD45AA94F984975A3 
{
	U3CKeyU3Ee__FixedBuffer_t0A5EBC1ABD67AE7DB30E930A11B038355758D32E ___Key;
};
struct Payload_t7A64623BF132C6AF0FA8FD8E5FC5DD042F2A5758 
{
	U3CDataU3Ee__FixedBuffer_t8D146C336A688DCDD5E4A4153B9A8FA93347AC91 ___Data;
	int32_t ___Length;
};
struct Role_t8E1886B2C39FB839AB5EF48887B183978F82845E 
{
	int32_t ___value__;
};
struct State_t57AA1DD540C133D1BD727601B455DEFC644D0AEE 
{
	int32_t ___value__;
};
struct PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	int32_t ___type;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___intensity;
	int32_t ___castShadows;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward;
	int32_t ___contributesToDirectLighting;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___attenuation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up;
	float ___width;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___right;
	float ___height;
	uint32_t ___layerMask;
	float ___indirectScale;
	float ___spotAngle;
	float ___innerSpotAngle;
	float ___range;
	int32_t ___shadowMaskChannel;
	int32_t ___falloffIndex;
	float ___shadowRadius;
	int32_t ___cookieIndex;
};
struct VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E 
{
	NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4 ___nameAndTooltip;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___volumeProfile;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___volumeComponent;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume;
};
struct VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E_marshaled_pinvoke
{
	NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_pinvoke ___nameAndTooltip;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___volumeProfile;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___volumeComponent;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume;
};
struct VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E_marshaled_com
{
	NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_com ___nameAndTooltip;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___volumeProfile;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___volumeComponent;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com ___deviceMatcher;
};
struct VisualsProcessingType_t19983E0076886C15ED2761057B9992989A710ECC 
{
	int32_t ___value__;
};
struct ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 
{
	int32_t ___Version;
	TLSConnectionData_tFC3A9A0934E0286BB1220A5984FAC6EFD55AC6DD ___Value;
};
struct FixedList32Bytes_1_t02D797FE0EF11E83016BA95DD7B282490C8A472E 
{
	alignas(8) FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 ___data;
};
struct FixedList64Bytes_1_t137BDA0D26652E438404CA31731069295DAC8E1C 
{
	alignas(8) FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 ___data;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C 
{
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 
{
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 
{
	int32_t ___type;
	int32_t ___uniqueStringId;
};
struct Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 ____pointer;
	int32_t ____length;
};
struct Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 ____pointer;
	int32_t ____length;
};
struct Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 ____pointer;
	int32_t ____length;
};
struct Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 ____pointer;
	int32_t ____length;
};
struct Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C ____pointer;
	int32_t ____length;
};
struct Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C ____pointer;
	int32_t ____length;
};
struct Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 ____pointer;
	int32_t ____length;
};
struct Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 ____pointer;
	int32_t ____length;
};
struct Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 
{
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 ____pointer;
	int32_t ____length;
};
struct Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A 
{
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B ____pointer;
	int32_t ____length;
};
struct Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A ____pointer;
	int32_t ____length;
};
struct Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 ____pointer;
	int32_t ____length;
};
struct Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F ____pointer;
	int32_t ____length;
};
struct Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F ____pointer;
	int32_t ____length;
};
struct Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A ____pointer;
	int32_t ____length;
};
struct Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D ____pointer;
	int32_t ____length;
};
struct Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD ____pointer;
	int32_t ____length;
};
struct Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 ____pointer;
	int32_t ____length;
};
struct Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E ____pointer;
	int32_t ____length;
};
struct Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA ____pointer;
	int32_t ____length;
};
struct Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 ____pointer;
	int32_t ____length;
};
struct Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 ____pointer;
	int32_t ____length;
};
struct Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct SimpleConnectionData_t9DF6B0F90ADE109C095852276716C03D3B397BE4 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnection;
	ConnectionToken_tC4332AD93CD9451E95FE2AD7805E547B2A2A9F52 ___Token;
	int32_t ___State;
	int64_t ___LastReceiveTime;
	int64_t ___LastSendTime;
	int64_t ___LastMtuSendTime;
	int32_t ___ConnectionAttempts;
	bool ___IsLocal;
	bool ___ReceivedMtuAck;
};
struct SimpleConnectionData_t9DF6B0F90ADE109C095852276716C03D3B397BE4_marshaled_pinvoke
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnection;
	ConnectionToken_tC4332AD93CD9451E95FE2AD7805E547B2A2A9F52 ___Token;
	int32_t ___State;
	int64_t ___LastReceiveTime;
	int64_t ___LastSendTime;
	int64_t ___LastMtuSendTime;
	int32_t ___ConnectionAttempts;
	int32_t ___IsLocal;
	int32_t ___ReceivedMtuAck;
};
struct SimpleConnectionData_t9DF6B0F90ADE109C095852276716C03D3B397BE4_marshaled_com
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnection;
	ConnectionToken_tC4332AD93CD9451E95FE2AD7805E547B2A2A9F52 ___Token;
	int32_t ___State;
	int64_t ___LastReceiveTime;
	int64_t ___LastSendTime;
	int64_t ___LastMtuSendTime;
	int32_t ___ConnectionAttempts;
	int32_t ___IsLocal;
	int32_t ___ReceivedMtuAck;
};
struct ConnectionData_t3BEBDF28C0A7A2F719E5F6D298735DCC6B0AE8F5 
{
	Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 ___Socket;
	int64_t ___ConnectTime;
	int64_t ___LastConnectAttemptTime;
	int32_t ___LastConnectAttempt;
	bool ___HasPendingSends;
};
struct ConnectionData_t3BEBDF28C0A7A2F719E5F6D298735DCC6B0AE8F5_marshaled_pinvoke
{
	Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 ___Socket;
	int64_t ___ConnectTime;
	int64_t ___LastConnectAttemptTime;
	int32_t ___LastConnectAttempt;
	int32_t ___HasPendingSends;
};
struct ConnectionData_t3BEBDF28C0A7A2F719E5F6D298735DCC6B0AE8F5_marshaled_com
{
	Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 ___Socket;
	int64_t ___ConnectTime;
	int64_t ___LastConnectAttemptTime;
	int32_t ___LastConnectAttempt;
	int32_t ___HasPendingSends;
};
struct ConnectionData_t008EEAA99771DD2346A073E3F59B0121482F46F6 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnectionId;
	int32_t ___WebSocketState;
	int32_t ___Role;
	Buffer_tABA3AFC724DBB678EE82E9C77F9340F0E5C89571 ___SendBuffer;
	Buffer_tABA3AFC724DBB678EE82E9C77F9340F0E5C89571 ___RecvBuffer;
	Payload_t7A64623BF132C6AF0FA8FD8E5FC5DD042F2A5758 ___RecvPayload;
	uint8_t ___isReceivingPayload;
	uint8_t ___isWaitingForPong;
	Keys_t0341510CDC4CCC1D4F1EEA2DD45AA94F984975A3 ___Keys;
	int64_t ___CreateTimeStamp;
	int64_t ___CloseTimeStamp;
	int64_t ___ReceiveTimeStamp;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F 
{
	String_t* ___name;
	int32_t ___type;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceReadLists;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceWriteLists;
	bool ___culled;
	bool ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31 ___scriptInfo;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_marshaled_pinvoke
{
	char* ___name;
	int32_t ___type;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceReadLists;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_pinvoke ___scriptInfo;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___type;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceReadLists;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_com ___scriptInfo;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_pinvoke
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_com
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 
{
	int32_t ___Version;
	SimpleConnectionData_t9DF6B0F90ADE109C095852276716C03D3B397BE4 ___Value;
};
struct ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 
{
	int32_t ___Version;
	ConnectionData_t3BEBDF28C0A7A2F719E5F6D298735DCC6B0AE8F5 ___Value;
};
struct ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB 
{
	int32_t ___Version;
	ConnectionData_t008EEAA99771DD2346A073E3F59B0121482F46F6 ___Value;
};
struct EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 
{
	FixedList32Bytes_1_t02D797FE0EF11E83016BA95DD7B282490C8A472E ___m_FixedArray;
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B ___m_List;
	int32_t ___m_Length;
	bool ___m_Created;
	bool ___m_IsEmbedded;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct TransferrableData_tE4092BB2D19869881CCCD6B9B3E54FDC904B3197 
{
	FixedList64Bytes_1_t137BDA0D26652E438404CA31731069295DAC8E1C ___m_RawAddressContainer;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct NetworkEndpoint_t0F60A2EF4E82ED5F26845E5537772D24C32426AC 
{
	TransferrableData_tE4092BB2D19869881CCCD6B9B3E54FDC904B3197 ___Transferrable;
};
struct ConnectionData_tC8FFF2547B5E7AC5023FBF19644E71C20A62B7ED 
{
	NetworkEndpoint_t0F60A2EF4E82ED5F26845E5537772D24C32426AC ___Endpoint;
	int32_t ___State;
	int32_t ___PathMtu;
	bool ___NewlyDisconnecting;
	bool ___NewlyConnectedByRemote;
	bool ___NewlyConnectedByLocal;
	uint8_t ___DisconnectReason;
};
struct ConnectionData_tC8FFF2547B5E7AC5023FBF19644E71C20A62B7ED_marshaled_pinvoke
{
	NetworkEndpoint_t0F60A2EF4E82ED5F26845E5537772D24C32426AC ___Endpoint;
	int32_t ___State;
	int32_t ___PathMtu;
	int32_t ___NewlyDisconnecting;
	int32_t ___NewlyConnectedByRemote;
	int32_t ___NewlyConnectedByLocal;
	uint8_t ___DisconnectReason;
};
struct ConnectionData_tC8FFF2547B5E7AC5023FBF19644E71C20A62B7ED_marshaled_com
{
	NetworkEndpoint_t0F60A2EF4E82ED5F26845E5537772D24C32426AC ___Endpoint;
	int32_t ___State;
	int32_t ___PathMtu;
	int32_t ___NewlyDisconnecting;
	int32_t ___NewlyConnectedByRemote;
	int32_t ___NewlyConnectedByLocal;
	uint8_t ___DisconnectReason;
};
struct ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 
{
	int32_t ___Version;
	ConnectionData_tC8FFF2547B5E7AC5023FBF19644E71C20A62B7ED ___Value;
};
struct EmptyArray_1_t5645AFD0E8443842BF722C48FE084A0AD8FB9C3F_StaticFields
{
	ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___Value;
};
struct EmptyArray_1_t80380D195D0EA1035062D1FC1D4A1A0C1FB2A452_StaticFields
{
	ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___Value;
};
struct EmptyArray_1_t326678ECDD356906907BCD03308AE05FCBB14738_StaticFields
{
	ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___Value;
};
struct EmptyArray_1_t5DA3D6F58CFF7067A4473CC5C94140F6B0BB1383_StaticFields
{
	ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___Value;
};
struct EmptyArray_1_tD03B86572C4D1451C9314D535A6E0F8CA5939999_StaticFields
{
	ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___Value;
};
struct EmptyArray_1_t0FF66F0AD14209D95E74DC5AE956BC83003DBC4A_StaticFields
{
	ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___Value;
};
struct EmptyArray_1_t26C7C247835B54DC3E87DB46010E7758BC6655DB_StaticFields
{
	ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___Value;
};
struct EmptyArray_1_t38E96CD689D1FFA2AF9EABCEFD08457D8D280F4D_StaticFields
{
	ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___Value;
};
struct EmptyArray_1_tBCCAE4080E81992F81CEC3B682CED9E81A3B4D67_StaticFields
{
	EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___Value;
};
struct EmptyArray_1_t301F50E763B634BAEF1898CFD644478791477A24_StaticFields
{
	Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* ___Value;
};
struct EmptyArray_1_t0884D77AB362266D3E9298E3E595AB5806A358F4_StaticFields
{
	Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* ___Value;
};
struct EmptyArray_1_tF44AD9BD1A58C47BDCB13A8D4D22873C785CC3F8_StaticFields
{
	HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___Value;
};
struct EmptyArray_1_t4505232400AEC5D181E96238357D9ACD1C992762_StaticFields
{
	NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___Value;
};
struct EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867_StaticFields
{
	SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___Value;
};
struct EmptyArray_1_tC9589F12F2382131419143780EC4B16F75839727_StaticFields
{
	UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___Value;
};
struct EmptyArray_1_t39CC4801B12BC59D744D8F2F14920ED998228BE1_StaticFields
{
	UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___Value;
};
struct EmptyArray_1_t8F16BED9A16610B0610D3B8977C56192C7CE8275_StaticFields
{
	UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___Value;
};
struct EmptyArray_1_tE873052363E5FFF3E3324D48BF2E70EABF9FBA3E_StaticFields
{
	UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___Value;
};
struct EmptyArray_1_tE694D0227F619BC5A10811AC94E5B6D8EE0CBD57_StaticFields
{
	UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___Value;
};
struct EmptyArray_1_tA05DBCB91EE064FE54203B7543F218C61D4C292D_StaticFields
{
	UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___Value;
};
struct EmptyArray_1_tFEE1A4E0C8058B54F07835CFB63F231873095076_StaticFields
{
	UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___Value;
};
struct EmptyArray_1_t8505E6935DD4C58400550971BB8321BD8CE9D6CF_StaticFields
{
	UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___Value;
};
struct EmptyArray_1_tA0B73630739AC85F81DDEFE547CAFB1C84FB72C6_StaticFields
{
	UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___Value;
};
struct EmptyArray_1_t1347A16AC3E72AFF909DAA98EED1FA11A4470068_StaticFields
{
	UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___Value;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_StaticFields
{
	Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC ___Invalid;
};
struct Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticFields
{
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___Invalid;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64  : public RuntimeArray
{
	ALIGN_FIELD (8) VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 m_Items[1];

	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___source), (void*)NULL);
	}
	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___source), (void*)NULL);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA  : public RuntimeArray
{
	ALIGN_FIELD (8) PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 m_Items[1];

	inline PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 value)
	{
		m_Items[index] = value;
	}
};
struct VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F  : public RuntimeArray
{
	ALIGN_FIELD (8) VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E m_Items[1];

	inline VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___nameAndTooltip))->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___nameAndTooltip))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volumeProfile), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volumeComponent), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volume), (void*)NULL);
		#endif
	}
	inline VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___nameAndTooltip))->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___nameAndTooltip))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volumeProfile), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volumeComponent), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volume), (void*)NULL);
		#endif
	}
};
struct ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279  : public RuntimeArray
{
	ALIGN_FIELD (8) ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 m_Items[1];

	inline ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___displayName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___action), (void*)NULL);
		#endif
	}
	inline ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___displayName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___action), (void*)NULL);
		#endif
	}
};
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E  : public RuntimeArray
{
	ALIGN_FIELD (8) LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 m_Items[1];

	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___deviceMatcher))->___m_Patterns), (void*)NULL);
		#endif
	}
	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___deviceMatcher))->___m_Patterns), (void*)NULL);
		#endif
	}
};
struct PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC  : public RuntimeArray
{
	ALIGN_FIELD (8) PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F m_Items[1];

	inline PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceReadLists), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceWriteLists), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___nrpInfo), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___scriptInfo))->___filePath), (void*)NULL);
		#endif
	}
	inline PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceReadLists), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceWriteLists), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___nrpInfo), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___scriptInfo))->___filePath), (void*)NULL);
		#endif
	}
};
struct ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B  : public RuntimeArray
{
	ALIGN_FIELD (8) ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 m_Items[1];

	inline ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___consumerList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___producerList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textureData), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___bufferData), (void*)NULL);
		#endif
	}
	inline ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___consumerList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___producerList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textureData), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___bufferData), (void*)NULL);
		#endif
	}
};
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B  : public RuntimeArray
{
	ALIGN_FIELD (8) EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 m_Items[1];

	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
};
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317  : public RuntimeArray
{
	ALIGN_FIELD (8) PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 m_Items[1];

	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___message), (void*)NULL);
	}
	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___message), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE m_Items[1];

	inline KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF m_Items[1];

	inline ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 m_Items[1];

	inline ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 m_Items[1];

	inline ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 m_Items[1];

	inline ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 m_Items[1];

	inline ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 m_Items[1];

	inline ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 m_Items[1];

	inline ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB m_Items[1];

	inline ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB value)
	{
		m_Items[index] = value;
	}
};
struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA  : public RuntimeArray
{
	ALIGN_FIELD (8) EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 m_Items[1];

	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 value)
	{
		m_Items[index] = value;
	}
};
struct Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF  : public RuntimeArray
{
	ALIGN_FIELD (8) Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC m_Items[1];

	inline Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC value)
	{
		m_Items[index] = value;
	}
};
struct Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA  : public RuntimeArray
{
	ALIGN_FIELD (8) Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF m_Items[1];

	inline Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF value)
	{
		m_Items[index] = value;
	}
};
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5  : public RuntimeArray
{
	ALIGN_FIELD (8) HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 m_Items[1];

	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___compiledGraph), (void*)NULL);
	}
	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___compiledGraph), (void*)NULL);
	}
};
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 m_Items[1];

	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 value)
	{
		m_Items[index] = value;
	}
};
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06  : public RuntimeArray
{
	ALIGN_FIELD (8) SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 m_Items[1];

	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD m_Items[1];

	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D m_Items[1];

	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 m_Items[1];

	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B m_Items[1];

	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 m_Items[1];

	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 m_Items[1];

	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF m_Items[1];

	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 m_Items[1];

	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 m_Items[1];

	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A m_Items[1];

	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m95888730659343F372198CD5B3EE35B001150127 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m25DB18C9E908096B821F4C692B9190E3B812A1FA (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D6C6D23DE1E2EE6057F94BDBD946631CC5B2EBC (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8458978F11950358DAF515D9793F94E96E164867 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE296E176CF781CFBEDEA890CD7B7438707C5CBC2 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m25AC6AFADC9DA3C7616FB3DF2538489069FE82FF (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCFEB25EF1344B976A050CB6937362A3F5DF0199A (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3CAC4C8BA133B39A5BA9FA0A1E0E711E09BD7694 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE8080B23EA1AD670E7D7D77D172A6973A222ED2C (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m818A3E47FE33091DD1275D2DFDF70695E715E185 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3006B42AEF364FAED734490926CA034ED5348569 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D42E127F9A2F6A6D223785F8CA656A4930B87C2 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0730B9BAC8092A41B1C48042F79C306FD18E553F (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD6916963F70388076B4D8A005C8C1AC7DB630642 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mEAC3EE66A5CB94BE471210EA64A682C55D8463D0 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5BD62585103C935CC4B20021B610D1D480BE6F19 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC061A8BAB0855DF9F3365468CFE7C6897B27DB66 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m91DD8D51560F4B4A6690B2B4DCF114816973A693 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mA191F982698CD244673A9FE68457EDF06D7AB5DC_gshared (KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mBD0001ADA4BCF5DFB919D1DBA880F1EE260A5BBC_gshared (ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* ReadOnlyDictionary_2_get_Keys_mC439BFA2AD6AB29C27DC2C8AB69317BB57D61407_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* ReadOnlyDictionary_2_get_Values_mE3E21F0463F4B827414A3F991FD7F67E223AC6A0_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_m8A51C083725D66429D563C326FCD44562CB5492A_gshared (DictionaryEnumerator_t521F5E252B311C00E1DC36A7487E9D81BE68C8BC* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyDictionary_2_get_Count_m447F71DF5E67C0AE79B0336712EF676A188A53D5_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C KeyValuePair_2_get_Key_m710897944C3B6E373FE118DC3691602831A70264_gshared_inline (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mAA0E95CE578DE8ACC4FCF8491DB9275D9C9C8849_gshared_inline (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD0004ACD6682C48530FEB46D2E5CA175CBB29EC4_gshared (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_mC20EA69C2706DE824529A0506BD45837E26C6980 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_m74D5DE9AF0CCB1FF7B88058328C835DBD981C568_fshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C (ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_destination, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_left, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F (ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_destination, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7 (ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_destination, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298 (ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_destination, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018 (ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_destination, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1 (ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_destination, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25 (ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_destination, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602 (ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_destination, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880 (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_destination, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m93E4FED2707AE3A8DD40F47B3166D6DC9212B3E1 (Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___0_destination, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* Array_Empty_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m7AFB8836C09DB8ED329614A1BC844AB4204E9557_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_mC1E4A42FCB2DEE71916523FFA2786E1A528DB811 (Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___0_destination, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* Array_Empty_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_m40657B5BE432C571329372CFB2E22223CA589563_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05_gshared (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_destination, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197 (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_destination, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32 (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_destination, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2 (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_destination, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_destination, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_destination, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0 (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_destination, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_destination, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645 (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_destination, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724 (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_destination, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_destination, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m95888730659343F372198CD5B3EE35B001150127 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m25DB18C9E908096B821F4C692B9190E3B812A1FA (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D6C6D23DE1E2EE6057F94BDBD946631CC5B2EBC (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8458978F11950358DAF515D9793F94E96E164867 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE296E176CF781CFBEDEA890CD7B7438707C5CBC2 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m25AC6AFADC9DA3C7616FB3DF2538489069FE82FF (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCFEB25EF1344B976A050CB6937362A3F5DF0199A (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3CAC4C8BA133B39A5BA9FA0A1E0E711E09BD7694 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE8080B23EA1AD670E7D7D77D172A6973A222ED2C (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m818A3E47FE33091DD1275D2DFDF70695E715E185 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3006B42AEF364FAED734490926CA034ED5348569 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D42E127F9A2F6A6D223785F8CA656A4930B87C2 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0730B9BAC8092A41B1C48042F79C306FD18E553F (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD6916963F70388076B4D8A005C8C1AC7DB630642 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mEAC3EE66A5CB94BE471210EA64A682C55D8463D0 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5BD62585103C935CC4B20021B610D1D480BE6F19 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC061A8BAB0855DF9F3365468CFE7C6897B27DB66 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m91DD8D51560F4B4A6690B2B4DCF114816973A693 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void KeyCollection__ctor_mA191F982698CD244673A9FE68457EDF06D7AB5DC (KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334*, RuntimeObject*, const RuntimeMethod*))KeyCollection__ctor_mA191F982698CD244673A9FE68457EDF06D7AB5DC_gshared)(__this, ___0_collection, method);
}
inline void ValueCollection__ctor_mBD0001ADA4BCF5DFB919D1DBA880F1EE260A5BBC (ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C*, RuntimeObject*, const RuntimeMethod*))ValueCollection__ctor_mBD0001ADA4BCF5DFB919D1DBA880F1EE260A5BBC_gshared)(__this, ___0_collection, method);
}
inline KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* ReadOnlyDictionary_2_get_Keys_mC439BFA2AD6AB29C27DC2C8AB69317BB57D61407 (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* (*) (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248*, const RuntimeMethod*))ReadOnlyDictionary_2_get_Keys_mC439BFA2AD6AB29C27DC2C8AB69317BB57D61407_gshared)(__this, method);
}
inline ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* ReadOnlyDictionary_2_get_Values_mE3E21F0463F4B827414A3F991FD7F67E223AC6A0 (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* (*) (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248*, const RuntimeMethod*))ReadOnlyDictionary_2_get_Values_mE3E21F0463F4B827414A3F991FD7F67E223AC6A0_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void DictionaryEnumerator__ctor_m8A51C083725D66429D563C326FCD44562CB5492A (DictionaryEnumerator_t521F5E252B311C00E1DC36A7487E9D81BE68C8BC* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_t521F5E252B311C00E1DC36A7487E9D81BE68C8BC*, RuntimeObject*, const RuntimeMethod*))DictionaryEnumerator__ctor_m8A51C083725D66429D563C326FCD44562CB5492A_gshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
inline int32_t ReadOnlyDictionary_2_get_Count_m447F71DF5E67C0AE79B0336712EF676A188A53D5 (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248*, const RuntimeMethod*))ReadOnlyDictionary_2_get_Count_m447F71DF5E67C0AE79B0336712EF676A188A53D5_gshared)(__this, method);
}
inline MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C KeyValuePair_2_get_Key_m710897944C3B6E373FE118DC3691602831A70264_inline (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* __this, const RuntimeMethod* method)
{
	return ((  MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C (*) (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE*, const RuntimeMethod*))KeyValuePair_2_get_Key_m710897944C3B6E373FE118DC3691602831A70264_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mAA0E95CE578DE8ACC4FCF8491DB9275D9C9C8849_inline (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE*, const RuntimeMethod*))KeyValuePair_2_get_Value_mAA0E95CE578DE8ACC4FCF8491DB9275D9C9C8849_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD0004ACD6682C48530FEB46D2E5CA175CBB29EC4 (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mD0004ACD6682C48530FEB46D2E5CA175CBB29EC4_gshared)(__this, ___0_key, ___1_value, method);
}
inline void DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, RuntimeObject*, const RuntimeMethod*))DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED_fshared)(__this, ___0_dictionary, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared)(___0_span, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
inline bool ReadOnlyMemory_1_Equals_mC3969DE0744A246E0576FEDE51191A0D3F5F69A9 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399, const RuntimeMethod*))ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared)(__this, ___0_other, method);
}
inline ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_memory, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, const RuntimeMethod*))Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared)(___0_memory, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_mC20EA69C2706DE824529A0506BD45837E26C6980 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
inline int32_t ReadOnlyMemory_1_CombineHashCodes_mAD75C6BDDB231C42D8A846F50E2B081E244108DA (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))ReadOnlyMemory_1_CombineHashCodes_m74D5DE9AF0CCB1FF7B88058328C835DBD981C568_fshared)(___0_left, ___1_right, method);
}
inline String_t* ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857 (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
inline String_t* ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, const RuntimeMethod*))ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline bool ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, RuntimeObject*, const RuntimeMethod*))ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888_fshared)(__this, ___0_obj, method);
}
inline bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4, const RuntimeMethod*))ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared)(__this, ___0_other, method);
}
inline int32_t ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, const RuntimeMethod*))ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C (ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_destination, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m486814B04933AE0AD908A6E84F054E69E593F519_inline (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C*, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mC80880311ADA2CF0907EF2CCEA1B1C0E871EFE08 (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C ___0_left, ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C, ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F (ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_destination, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mB5D26FA83D7E73B9FE0DA2358AFEC25DCD334136_inline (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75*, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m72F5F7802DC1E9310EC683C11760C78C01F399B1 (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 ___0_left, ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75, ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7 (ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_destination, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m091B9228C833C805E0E66BCD0A4FB8099569AAB5_inline (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF*, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mC592FFE35374C1A5D870BE19DB27CB0AC8EB602C (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF ___0_left, ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF, ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298 (ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_destination, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m55CEB560D31889797B918E4F6954706A137E80CB_inline (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E*, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m51A1FC89CD86D4B0C321AB12BDCC3F8617BA20A6 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E ___0_left, ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E, ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018 (ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_destination, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m3E9BB899D766CC925C9E1A881252171272EF2825_inline (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14*, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mD35ED073D68DAECE20C2F7A20B8852601529DA91 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 ___0_left, ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14, ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1 (ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_destination, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m19748547A24A1E73F0E008F1B10E99E211AB1743_inline (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC*, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mE9E1437DED4C538FBA4C43CB4B7D731A5BA82BE8 (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC ___0_left, ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC, ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25 (ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_destination, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mD3A1B337389DF31530D83D99CA02CB50613F9C03_inline (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026*, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mB28FD065DA175B326FEE5C8C153159C19E5B45F1 (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 ___0_left, ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026, ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602 (ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_destination, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m9E826A6B5D5571A8B7ADA227155903C0470343DD_inline (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E*, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m8215F432625881896F278A4D4BDCA8E0D3458669 (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E ___0_left, ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E, ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mFAB3C81B4C721D97D620490285A98D10429F2C64_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880 (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_destination, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m2310FC0E91B7ECFAE542316434BB4C9D6782042B_inline (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000*, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mBDAC100928A2A40355010648140EA50C37DE399E (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ___0_left, ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000, ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m8209849831B18D330C2C09547CD0B51428C80BB6_inline (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m93E4FED2707AE3A8DD40F47B3166D6DC9212B3E1 (Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___0_destination, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mE597474EFB84B99FC2DA815FDCCF1EF8D4A85744_inline (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C*, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* Array_Empty_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m7AFB8836C09DB8ED329614A1BC844AB4204E9557_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mB77DC20EF20262A9E067EF2B7874B56A7FD82DC1 (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C ___0_left, ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C, ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m8037C084812257D2D9BB26DBCB121D4A7DEE8EEF_inline (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_mC1E4A42FCB2DEE71916523FFA2786E1A528DB811 (Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___0_destination, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m73B9A07190CA2FB2B6B0290D44964057684D770F_inline (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4*, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* Array_Empty_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_m40657B5BE432C571329372CFB2E22223CA589563_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mA4E2BD1FC033567FCB7716AB748DC98B7EED5783 (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 ___0_left, ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4, ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m70ECF63AA57B2B62F767D7B9290E6F6FD35B8E9E_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05 (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_destination, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m61A414D4F9636EAC0C3689FCCF1A7EA5ECD32F53_inline (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_inline (const RuntimeMethod* method)
{
	return ((  HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* (*) (const RuntimeMethod*))Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_gshared_inline)(method);
}
inline bool ReadOnlySpan_1_op_Equality_m3E5BDB77835A736157FA2EC596A124328094905D (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ___0_left, ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57, ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mCBA967D766B41C6F7A5A958282339CC12C808833_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197 (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_destination, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mB77B497E05DB783A900DCEAD111F61A3F27C7D35_inline (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA*, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m1C315B0091ADD10B08153159755014876AB3A48B (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ___0_left, ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA, ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m68B11A5CBD341B71C3B49A184D9A4A0F68B2BC1B_inline (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84*, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m273AE2A699A7739E89673154DA9E3BE6B08A180D (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___0_left, ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84, ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mAE734F1E7D866942E70763D9232D006153CC93C8_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32 (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_destination, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mE74E20E42241965E7A458DF5E23A7FA9058C4F4E_inline (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724*, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mF3F15A8AA6E17FA6D014FF4ABE0086AD06B6D198 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ___0_left, ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724, ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m757FB90F888A97214E70C7D7DB66DCBB57ED9317_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2 (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_destination, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mE51F6529B403BD5E3C8AAE7BAE04BC3F93F7C31F_inline (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085*, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mAA0D16E0236C8BED9AB454299585D774E815A4A8 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ___0_left, ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085, ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m9A18653FCB90AB3ACEBA696165B559FB2BC04AD7_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_destination, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m199E5AF4F96498C11635398C59864ECAB82E7455_inline (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7*, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mBCAD4291296A130D084599C071B39A72441A6041 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ___0_left, ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7, ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m64759923EC787AC67D237C126B1F9912A0757B25_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_destination, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m3F71A8FCBA59B8D461F3B6CA8F89B020499102F8_inline (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E*, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mE6044990D7E1998FCBA25CBD93EC07FB978178A3 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ___0_left, ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E, ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m25AA5DB60DDFA74CDC6FC67BCE440F807F40C824_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0 (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_destination, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0A622A67EF6097E611538708F12B2AFCDBD113A1_inline (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974*, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mE014CA0F1BF433B90328F47079B9D6A39F491376 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ___0_left, ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974, ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mFD0E4725CBEC468524ED6C42354367A9A7359B95_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mA8962BCDAF15875BAA1631B9B69E1AC9230C568A_inline (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44*, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m876FCAB5A193A17183A4C1055D7D78BF713D1E18 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ___0_left, ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44, ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m796AE228F2062910CC25672EFEBF8E6F196B79BB_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_destination, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m66392F19D65D8E37FF8EFFBBA237A8B3CDBD1E3A_inline (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71*, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mE483F93046822C9468678DB29F761D3F06FF3C7E (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ___0_left, ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71, ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mEF91E66E45055A28639FAA49F9338605E2E05F7C_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645 (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_destination, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m6C812749CD726114A53FA991ED2B2081E6A42C54_inline (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185*, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_m795ADA90BB856BC321715377F80986612F556D4C (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ___0_left, ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185, ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_mB346D5ACE2098245EF5F8BDB45CD7299937039AA_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724 (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_destination, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mC0D0EA7EE88DAA315FBD8A84318719AB5E2BAA66_inline (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB*, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mD76E07AC17F959B55344C6E355DB9D0CEC31FC0C (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ___0_left, ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB, ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline int32_t Span_1_get_Length_m28C5FEE9DBE03CF72CF72C3E0CC494D3A9E9C233_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_destination, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m05FAEE8A43921FFBDAA0B10C45DF7B413F8B7795_inline (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357*, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline (const RuntimeMethod* method) ;
inline bool ReadOnlySpan_1_op_Equality_mB157614B5969EB80F641D18A4DB33C3D8FC885C1 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ___0_left, ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357, ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8944
// Method Definition Index: 8945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 8946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ReadOnlyCollection_1_get_Item_mFD65FE8672CF437F4E56553136F3296603743E5B (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2;
		L_2 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m373BF4F61459CBD0614937565D50D38211EC389D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m627A159A926F95C24D2FC6C0A665BAE6B31C6210 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 8950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8951
// Method Definition Index: 8952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF2CBAC673542C78C4E66A0B63AB25F7E23E426F4 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2;
		L_2 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8953
// Method Definition Index: 8954
// Method Definition Index: 8955
// Method Definition Index: 8956
// Method Definition Index: 8957
// Method Definition Index: 8958
// Method Definition Index: 8959
// Method Definition Index: 8960
// Method Definition Index: 8961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mB9E303B104B18F639A07B580FCDCB916D8C5F43A (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_35;
			L_35 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 8962
// Method Definition Index: 8963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m7FF73F40502F4224B0A39DC1C6E21D7F62ED5320 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2;
		L_2 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 8964
// Method Definition Index: 8965
// Method Definition Index: 8966
// Method Definition Index: 8967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8));
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 8968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m21250661C6C1891AA59CA1F5DB154974346EB45E (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D(__this, ((*(VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mBDF6671029CE751A5B90318650A9E1266C9FFBAC (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442(__this, ((*(VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 8970
// Method Definition Index: 8971
// Method Definition Index: 8972
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8944
// Method Definition Index: 8945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m95888730659343F372198CD5B3EE35B001150127 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 8946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ReadOnlyCollection_1_get_Item_m7CD152BDDD7716D36C1C41279EC65D85E8CB336E (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_2;
		L_2 = InterfaceFuncInvoker1< PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m25DB18C9E908096B821F4C692B9190E3B812A1FA (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB72E3ECC1BD7BE6EF41EAB69D61D4D551D5D7B89 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m25FE1E3664407CBA72B82B60D79E2295FAC8291E (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 8950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D6C6D23DE1E2EE6057F94BDBD946631CC5B2EBC (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8951
// Method Definition Index: 8952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mA5BE02C34F89A35C9EB327E73EB8E920D45F7AD0 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_2;
		L_2 = InterfaceFuncInvoker1< PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8953
// Method Definition Index: 8954
// Method Definition Index: 8955
// Method Definition Index: 8956
// Method Definition Index: 8957
// Method Definition Index: 8958
// Method Definition Index: 8959
// Method Definition Index: 8960
// Method Definition Index: 8961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m4D2D02DA14D0D7C5D53BFB7522B954AD7F0258D9 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m95888730659343F372198CD5B3EE35B001150127(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_35;
			L_35 = InterfaceFuncInvoker1< PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 8962
// Method Definition Index: 8963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m0ED2777C1644BA763D2847C20D0EB95164641148 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_2;
		L_2 = InterfaceFuncInvoker1< PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 8964
// Method Definition Index: 8965
// Method Definition Index: 8966
// Method Definition Index: 8967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778));
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 8968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m37A23B07BDB72251DDBBBA222C1B0C5A82E3F8CF (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m25DB18C9E908096B821F4C692B9190E3B812A1FA(__this, ((*(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mDC3A7E0D7DDCBBAA2C8CDC52F00594BB83BED3F2 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m4D6C6D23DE1E2EE6057F94BDBD946631CC5B2EBC(__this, ((*(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 8970
// Method Definition Index: 8971
// Method Definition Index: 8972
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8944
// Method Definition Index: 8945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8458978F11950358DAF515D9793F94E96E164867 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 8946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ReadOnlyCollection_1_get_Item_m27C60ADC9D3F27B6DE1E527CB213B2F315F09971 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_2;
		L_2 = InterfaceFuncInvoker1< VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE296E176CF781CFBEDEA890CD7B7438707C5CBC2 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m242D80A80BCA864DE06422CE7A0AD846E91870C3 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mBCFE48F26F4626AE0ECC7E048A8CE902E619C243 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 8950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m25AC6AFADC9DA3C7616FB3DF2538489069FE82FF (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8951
// Method Definition Index: 8952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m79AFAF6B4C025D04CED3F7A6CEEE4C0AEDF09FC0 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_2;
		L_2 = InterfaceFuncInvoker1< VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8953
// Method Definition Index: 8954
// Method Definition Index: 8955
// Method Definition Index: 8956
// Method Definition Index: 8957
// Method Definition Index: 8958
// Method Definition Index: 8959
// Method Definition Index: 8960
// Method Definition Index: 8961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC52C7CC07686EB43525D65DC943ACD1CF6E38106 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m8458978F11950358DAF515D9793F94E96E164867(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_35;
			L_35 = InterfaceFuncInvoker1< VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 8962
// Method Definition Index: 8963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m1B4F3750ED4A1C2557520A532E4AE71F1F78870E (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_2;
		L_2 = InterfaceFuncInvoker1< VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 8964
// Method Definition Index: 8965
// Method Definition Index: 8966
// Method Definition Index: 8967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E));
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 8968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m30D3408DB81CC07D32C804A176F112FD8627B192 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE296E176CF781CFBEDEA890CD7B7438707C5CBC2(__this, ((*(VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m70B38A80F2FAF67F7336339F89B2A3851478DA77 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m25AC6AFADC9DA3C7616FB3DF2538489069FE82FF(__this, ((*(VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 8970
// Method Definition Index: 8971
// Method Definition Index: 8972
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8944
// Method Definition Index: 8945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCFEB25EF1344B976A050CB6937362A3F5DF0199A (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 8946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ReadOnlyCollection_1_get_Item_mB4FBA6653B45B885F77168D2A31246E86A61239C (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_2;
		L_2 = InterfaceFuncInvoker1< ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3CAC4C8BA133B39A5BA9FA0A1E0E711E09BD7694 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m98B2AA9918F58E13BC7615C283CD2A2B5AC5BA2F (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mAA1BF20823EFD08F455F9177A2BADBCF07470285 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 8950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE8080B23EA1AD670E7D7D77D172A6973A222ED2C (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8951
// Method Definition Index: 8952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mD2A608FF40630292908E8D69A6102C27001FC717 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_2;
		L_2 = InterfaceFuncInvoker1< ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8953
// Method Definition Index: 8954
// Method Definition Index: 8955
// Method Definition Index: 8956
// Method Definition Index: 8957
// Method Definition Index: 8958
// Method Definition Index: 8959
// Method Definition Index: 8960
// Method Definition Index: 8961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mCF1AC1CDAFDA110866DACF9EE9A70AEC9AA0BE4D (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mCFEB25EF1344B976A050CB6937362A3F5DF0199A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_35;
			L_35 = InterfaceFuncInvoker1< ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 8962
// Method Definition Index: 8963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m8EAA569D28A7BEE2BF68701BDCE7E3F7230F0A39 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_2;
		L_2 = InterfaceFuncInvoker1< ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 8964
// Method Definition Index: 8965
// Method Definition Index: 8966
// Method Definition Index: 8967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9));
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 8968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m67E991E768D997905AAE39961F6EE846E0859535 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3CAC4C8BA133B39A5BA9FA0A1E0E711E09BD7694(__this, ((*(ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mDE2CF32E3C5F436DD6FA819744A0876F36859728 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mE8080B23EA1AD670E7D7D77D172A6973A222ED2C(__this, ((*(ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 8970
// Method Definition Index: 8971
// Method Definition Index: 8972
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8944
// Method Definition Index: 8945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 8946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ReadOnlyCollection_1_get_Item_m0A91A846BBC91E711D2FD276F926C8622F725207 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2;
		L_2 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m2E2F7FE9FE98257542D040CCB5A505040BB765DD (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m77826D7B702325BB85B22D685A41A3BDBF2E6DFE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 8950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8951
// Method Definition Index: 8952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m00749260A028B5DAE550D78E7C08AA80CB178383 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2;
		L_2 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8953
// Method Definition Index: 8954
// Method Definition Index: 8955
// Method Definition Index: 8956
// Method Definition Index: 8957
// Method Definition Index: 8958
// Method Definition Index: 8959
// Method Definition Index: 8960
// Method Definition Index: 8961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m97E025565D89BA957D0D7595F9930CB1EBA802FD (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_35;
			L_35 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 8962
// Method Definition Index: 8963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m91FB5557DA051340EECCD4F9A13275A509B5379B (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2;
		L_2 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 8964
// Method Definition Index: 8965
// Method Definition Index: 8966
// Method Definition Index: 8967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6));
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 8968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m07AAC581ACA363E09C760153D0F5634069AAEF43 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE(__this, ((*(LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m28EE46B044CC3F881E8EEF91F1FB3C37C601376C (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15(__this, ((*(LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 8970
// Method Definition Index: 8971
// Method Definition Index: 8972
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8944
// Method Definition Index: 8945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m818A3E47FE33091DD1275D2DFDF70695E715E185 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 8946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ReadOnlyCollection_1_get_Item_m6EB60D34CA0BE21AE6C2908D8CE1058DEFEC7ACC (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_2;
		L_2 = InterfaceFuncInvoker1< PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3006B42AEF364FAED734490926CA034ED5348569 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m2D5B34537E9E88D61CE6DE65DA8E4ED641EB3412 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m21221C7CFD70D8A1E5963C9CDB0967B1361B8862 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 8950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D42E127F9A2F6A6D223785F8CA656A4930B87C2 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8951
// Method Definition Index: 8952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF564FD5A7A7060A271DCFBBC8A415AB7A76F20C1 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_2;
		L_2 = InterfaceFuncInvoker1< PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8953
// Method Definition Index: 8954
// Method Definition Index: 8955
// Method Definition Index: 8956
// Method Definition Index: 8957
// Method Definition Index: 8958
// Method Definition Index: 8959
// Method Definition Index: 8960
// Method Definition Index: 8961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF9EA85ACDC0EF457938D363BAFC351F38291161D (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m818A3E47FE33091DD1275D2DFDF70695E715E185(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_35;
			L_35 = InterfaceFuncInvoker1< PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 8962
// Method Definition Index: 8963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB766727BF7DB38B182F8140AA0BFF30A2876EE26 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_2;
		L_2 = InterfaceFuncInvoker1< PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 8964
// Method Definition Index: 8965
// Method Definition Index: 8966
// Method Definition Index: 8967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F));
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 8968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mBB60F8752EE0A063BE174C1034872A826F05E331 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3006B42AEF364FAED734490926CA034ED5348569(__this, ((*(PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mEAFE167288B6716BC550C1AEDEC66E25A61C8E18 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m4D42E127F9A2F6A6D223785F8CA656A4930B87C2(__this, ((*(PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 8970
// Method Definition Index: 8971
// Method Definition Index: 8972
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8944
// Method Definition Index: 8945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0730B9BAC8092A41B1C48042F79C306FD18E553F (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 8946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ReadOnlyCollection_1_get_Item_mF9FA72847D5DA338D66D016E4FB297385FB9A42E (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_2;
		L_2 = InterfaceFuncInvoker1< ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD6916963F70388076B4D8A005C8C1AC7DB630642 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mA42C7EDA1BAF578D320D80F48E0647C110ADD681 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mB84E20F8BA5119B21FD4984601C9A70C64C57C52 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 8950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mEAC3EE66A5CB94BE471210EA64A682C55D8463D0 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8951
// Method Definition Index: 8952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mA1A935A7DA00C54303DF2E52B8AFCFC4BA64E51A (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_2;
		L_2 = InterfaceFuncInvoker1< ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8953
// Method Definition Index: 8954
// Method Definition Index: 8955
// Method Definition Index: 8956
// Method Definition Index: 8957
// Method Definition Index: 8958
// Method Definition Index: 8959
// Method Definition Index: 8960
// Method Definition Index: 8961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m3CC70612B859C690D9C3531703CE753DF1B647EC (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m0730B9BAC8092A41B1C48042F79C306FD18E553F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_35;
			L_35 = InterfaceFuncInvoker1< ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 8962
// Method Definition Index: 8963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB71CAA326A4ACDF03E75906564872A478196DBF9 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_2;
		L_2 = InterfaceFuncInvoker1< ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 8964
// Method Definition Index: 8965
// Method Definition Index: 8966
// Method Definition Index: 8967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3));
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 8968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mCE36C4978C8E258E0C77969A66E4C55E374D1CB8 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD6916963F70388076B4D8A005C8C1AC7DB630642(__this, ((*(ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m5DADB45967A9C3E8795B4E777233868592A3956E (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mEAC3EE66A5CB94BE471210EA64A682C55D8463D0(__this, ((*(ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 8970
// Method Definition Index: 8971
// Method Definition Index: 8972
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8944
// Method Definition Index: 8945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 8946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ReadOnlyCollection_1_get_Item_m586F777658B145682E70A3FCE202B5FEE78F8F18 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2;
		L_2 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mF318B9F02EA7AE7C2734AC064B64ED94C16F8798 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7C08CE459BEEDC1DF2952F054F69A3482C2433F6 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 8950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8951
// Method Definition Index: 8952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m5D48D4159D5115984C187FE5B07D9140556FDA49 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2;
		L_2 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8953
// Method Definition Index: 8954
// Method Definition Index: 8955
// Method Definition Index: 8956
// Method Definition Index: 8957
// Method Definition Index: 8958
// Method Definition Index: 8959
// Method Definition Index: 8960
// Method Definition Index: 8961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m8958097E6E660BACA1709F0424DE966BF89439FD (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_35;
			L_35 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 8962
// Method Definition Index: 8963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mAC7741CB7BECB294DA1E38E3745C58853F0A197A (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2;
		L_2 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 8964
// Method Definition Index: 8965
// Method Definition Index: 8966
// Method Definition Index: 8967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 8968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mC6029EF4ADA5CF37C75A5D189C30F6EEF696996C (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E(__this, ((*(EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF634A5AA11D90AB73EE09FC2DA892D8C98BD76E1 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416(__this, ((*(EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 8970
// Method Definition Index: 8971
// Method Definition Index: 8972
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8944
// Method Definition Index: 8945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5BD62585103C935CC4B20021B610D1D480BE6F19 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 8946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ReadOnlyCollection_1_get_Item_mDB5391F21C03A541CD55AAEEDE20775B401A9B0F (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_2;
		L_2 = InterfaceFuncInvoker1< PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC061A8BAB0855DF9F3365468CFE7C6897B27DB66 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mDCD28C7482420D9DBA17845A440A0928A68429FA (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD96010D6ACA8DBED4391371570F48D8592665CE9 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 8950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m91DD8D51560F4B4A6690B2B4DCF114816973A693 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8951
// Method Definition Index: 8952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mFDAFCF3888D2F84E5825B20EB17C904A41553B12 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_2;
		L_2 = InterfaceFuncInvoker1< PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8953
// Method Definition Index: 8954
// Method Definition Index: 8955
// Method Definition Index: 8956
// Method Definition Index: 8957
// Method Definition Index: 8958
// Method Definition Index: 8959
// Method Definition Index: 8960
// Method Definition Index: 8961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m47B9326BE9528881CB7336D37DFE3226E23E55FE (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m5BD62585103C935CC4B20021B610D1D480BE6F19(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_35;
			L_35 = InterfaceFuncInvoker1< PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 8962
// Method Definition Index: 8963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mFB260CCC81131D42BBC60B530874B1242ACE93FB (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_2;
		L_2 = InterfaceFuncInvoker1< PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 8964
// Method Definition Index: 8965
// Method Definition Index: 8966
// Method Definition Index: 8967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 8968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8711E20808D5FAEED1F14B95371E43C309AD8B31 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mC061A8BAB0855DF9F3365468CFE7C6897B27DB66(__this, ((*(PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m3A46C0E6A81DD7844E346E5E9A60C5AB27538505 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m91DD8D51560F4B4A6690B2B4DCF114816973A693(__this, ((*(PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 8970
// Method Definition Index: 8971
// Method Definition Index: 8972
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m908104C8D9933636100567D0D2A995E56A85BB29_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_dictionary;
		__this->___m_dictionary = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_dictionary), (void*)L_2);
		return;
	}
}
// Method Definition Index: 8974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* ReadOnlyDictionary_2_get_Keys_mC439BFA2AD6AB29C27DC2C8AB69317BB57D61407_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* L_3 = (KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
		KeyCollection__ctor_mA191F982698CD244673A9FE68457EDF06D7AB5DC(L_3, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		__this->____keys = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_3);
	}

IL_001e:
	{
		KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* L_4 = __this->____keys;
		return L_4;
	}
}
// Method Definition Index: 8975
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* ReadOnlyDictionary_2_get_Values_mE3E21F0463F4B827414A3F991FD7F67E223AC6A0_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* L_3 = (ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		ValueCollection__ctor_mBD0001ADA4BCF5DFB919D1DBA880F1EE260A5BBC(L_3, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		__this->____values = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_3);
	}

IL_001e:
	{
		ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* L_4 = __this->____values;
		return L_4;
	}
}
// Method Definition Index: 8976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_ContainsKey_m0A9B00AD09DAA194557DC0E25A0739F75BEE00CB_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8977
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m4C0B2B6E45C5C517C9B2FFABF674BF049C437AF1_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t0421E2B8ACA5E1713B6475C32AC8973C30F50334* L_0;
		L_0 = ReadOnlyDictionary_2_get_Keys_mC439BFA2AD6AB29C27DC2C8AB69317BB57D61407(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 8978
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_TryGetValue_m49A2BB9E0C5A0A9AC29C215E0DC05CC711968B4C_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1 = ___0_key;
		Il2CppSharedGenericObject** L_2 = ___1_value;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, Il2CppSharedGenericObject** >::Invoke(7, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 8979
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8EDEC03030E13A4ACD1224FE4891E0836C4AC4C9_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* L_0;
		L_0 = ReadOnlyDictionary_2_get_Values_mE3E21F0463F4B827414A3F991FD7F67E223AC6A0(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 8980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyDictionary_2_get_Item_m38E39B2444BC89A68FD35898C4014C57B5EBC342_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1 = ___0_key;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_mEA8E51B5A32103ECA5F99FFBA1917EE475141CA6_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m3C7833885101AC6756B1C28BF20E68D2249D6281_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Item_m7FA212762EAC814E7EAB157DD87E4FCB03FFB62F_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1 = ___0_key;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_set_Item_m5D809E7F86C45C526AC27950438B3F2F3BF0F97E_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyDictionary_2_get_Count_m447F71DF5E67C0AE79B0336712EF676A188A53D5_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 8986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3952A6F84B11E23B3B3AAB8BCD5D3CA3364675BB_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE L_1 = ___0_item;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1A1139DAEE9B63CCD3F9BE1E0E1CE25CF1D0A73C_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8988
// Method Definition Index: 8989
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m76C69E1542CF3EB2FF3EBB34F6235DFE1A2704CC_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8990
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_mA36AF8C373277B1CC5F89C9C213AF3AA35F63CE9_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8991
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1C406A887837DD405B7D57F42A22AF119911A97B_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8992
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_GetEnumerator_m8963472685D9F872C542F796769183E0163F77E6_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 8993
// Method Definition Index: 8994
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_IDictionary_GetEnumerator_m06F1B21EFB5F071F6875BBD92FB76FBE2734F090_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->___m_dictionary;
		DictionaryEnumerator_t521F5E252B311C00E1DC36A7487E9D81BE68C8BC L_5;
		memset((&L_5), 0, sizeof(L_5));
		DictionaryEnumerator__ctor_m8A51C083725D66429D563C326FCD44562CB5492A((&L_5), L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		DictionaryEnumerator_t521F5E252B311C00E1DC36A7487E9D81BE68C8BC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22), &L_6);
		return (RuntimeObject*)L_7;
	}
}
// Method Definition Index: 8995
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_IDictionary_set_Item_mBE9449BA931EC8E271131BF9DFC62480D748ABE2_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8996
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_mEA6D3960772479407A5F092ED585A9750571E698_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE V_3;
	memset((&V_3), 0, sizeof(V_3));
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE V_5;
	memset((&V_5), 0, sizeof(V_5));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0036:
	{
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_9 = ___1_index;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = il2cpp_codegen_array_get_length(L_10);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0053;
		}
	}

IL_0043:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0053:
	{
		RuntimeArray* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = il2cpp_codegen_array_get_length(L_13);
		int32_t L_15 = ___1_index;
		int32_t L_16;
		L_16 = ReadOnlyDictionary_2_get_Count_m447F71DF5E67C0AE79B0336712EF676A188A53D5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) >= ((int32_t)L_16)))
		{
			goto IL_006e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_006e:
	{
		RuntimeArray* L_18 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987*)IsInstSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24)));
		KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987* L_19 = V_0;
		if (!L_19)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_20 = __this->___m_dictionary;
		KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987* L_21 = V_0;
		int32_t L_22 = ___1_index;
		NullCheck((RuntimeObject*)L_20);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t067466F6AC5D1DDB2AFA7CE4AC58858E842B1987*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_20, L_21, L_22);
		return;
	}

IL_0086:
	{
		RuntimeArray* L_23 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_23, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_24 = V_1;
		if (!L_24)
		{
			goto IL_00e2;
		}
	}
	{
		RuntimeObject* L_25 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), (RuntimeObject*)L_25);
		V_2 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d8:
			{
				{
					RuntimeObject* L_27 = V_2;
					if (!L_27)
					{
						goto IL_00e1;
					}
				}
				{
					RuntimeObject* L_28 = V_2;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00e1:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ce_1;
			}

IL_009e_1:
			{
				RuntimeObject* L_29 = V_2;
				NullCheck(L_29);
				KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE L_30;
				L_30 = InterfaceFuncInvoker0< KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 25), L_29);
				V_3 = L_30;
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_31 = V_1;
				int32_t L_32 = ___1_index;
				int32_t L_33 = L_32;
				___1_index = ((int32_t)il2cpp_codegen_add(L_33, 1));
				MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_34;
				L_34 = KeyValuePair_2_get_Key_m710897944C3B6E373FE118DC3691602831A70264_inline((&V_3), NULL);
				MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_35 = L_34;
				RuntimeObject* L_36 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_35);
				Il2CppSharedGenericObject* L_37;
				L_37 = KeyValuePair_2_get_Value_mAA0E95CE578DE8ACC4FCF8491DB9275D9C9C8849_inline((&V_3), NULL);
				DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_38;
				memset((&L_38), 0, sizeof(L_38));
				DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_38), L_36, (RuntimeObject*)L_37, NULL);
				NullCheck(L_31);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_38);
			}

IL_00ce_1:
			{
				RuntimeObject* L_39 = V_2;
				NullCheck((RuntimeObject*)L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
				if (L_40)
				{
					goto IL_009e_1;
				}
			}
			{
				goto IL_0153;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		RuntimeArray* L_41 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_41, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_4;
		if (L_42)
		{
			goto IL_00f9;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_43 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_43, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
	}

IL_00f9:
	{
	}
	try
	{
		{
			RuntimeObject* L_44 = __this->___m_dictionary;
			NullCheck((RuntimeObject*)L_44);
			RuntimeObject* L_45;
			L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), (RuntimeObject*)L_44);
			V_2 = L_45;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_013b_1:
				{
					{
						RuntimeObject* L_46 = V_2;
						if (!L_46)
						{
							goto IL_0144_1;
						}
					}
					{
						RuntimeObject* L_47 = V_2;
						NullCheck((RuntimeObject*)L_47);
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_47);
					}

IL_0144_1:
					{
						return;
					}
				}
			});
			try
			{
				{
					goto IL_0131_2;
				}

IL_0108_2:
				{
					RuntimeObject* L_48 = V_2;
					NullCheck(L_48);
					KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE L_49;
					L_49 = InterfaceFuncInvoker0< KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 25), L_48);
					V_5 = L_49;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = V_4;
					int32_t L_51 = ___1_index;
					int32_t L_52 = L_51;
					___1_index = ((int32_t)il2cpp_codegen_add(L_52, 1));
					MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_53;
					L_53 = KeyValuePair_2_get_Key_m710897944C3B6E373FE118DC3691602831A70264_inline((&V_5), NULL);
					Il2CppSharedGenericObject* L_54;
					L_54 = KeyValuePair_2_get_Value_mAA0E95CE578DE8ACC4FCF8491DB9275D9C9C8849_inline((&V_5), NULL);
					KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE L_55;
					memset((&L_55), 0, sizeof(L_55));
					KeyValuePair_2__ctor_mD0004ACD6682C48530FEB46D2E5CA175CBB29EC4((&L_55), L_53, L_54, NULL);
					KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE L_56 = L_55;
					RuntimeObject* L_57 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16), &L_56);
					NullCheck(L_50);
					ArrayElementTypeCheck (L_50, L_57);
					(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (RuntimeObject*)L_57);
				}

IL_0131_2:
				{
					RuntimeObject* L_58 = V_2;
					NullCheck((RuntimeObject*)L_58);
					bool L_59;
					L_59 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
					if (L_59)
					{
						goto IL_0108_2;
					}
				}
				{
					goto IL_0145_1;
				}
			}
			catch(Il2CppNativeThreadAbortException&)
			{
				__finallyBlock.SetNativeThreadAbortOccurred();
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0145_1:
		{
			goto IL_0153;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0147;
		}
		throw e;
	}

CATCH_0147:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_60 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, method);
	}

IL_0153:
	{
		return;
	}
}
// Method Definition Index: 8997
// Method Definition Index: 8998
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mC132AA3D079ED37B983C9980A82AA2250D729B5A_gshared (ReadOnlyDictionary_2_tCCD8FB166CD66414DCC3E6DAB2611034C97F9248* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t9E7098FF95A2048778346D37BE601747BA1E0A7C* L_0;
		L_0 = ReadOnlyDictionary_2_get_Values_mE3E21F0463F4B827414A3F991FD7F67E223AC6A0(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return (RuntimeObject*)L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_mECB74EEF9C2FA0299B42692B797C10A9A817070E_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_dictionary;
		__this->___m_dictionary = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_dictionary), (void*)L_2);
		return;
	}
}
// Method Definition Index: 8974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* ReadOnlyDictionary_2_get_Keys_m3D38C4849A0CBA72A3BEC65E1F8DBBEA252E34F0_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_3 = (KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
		((  void (*) (KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(L_3, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		__this->____keys = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_3);
	}

IL_001e:
	{
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_4 = __this->____keys;
		return L_4;
	}
}
// Method Definition Index: 8975
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* ReadOnlyDictionary_2_get_Values_m8896F49C0945D79E3B09562D2CDC7582F2FD7328_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_3 = (ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		((  void (*) (ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(L_3, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		__this->____values = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_3);
	}

IL_001e:
	{
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_4 = __this->____values;
		return L_4;
	}
}
// Method Definition Index: 8976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_ContainsKey_mE23701A23F87A60B1BCF98D9292D94BB14ADE64C_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_key : &___0_key), SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 8977
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mBEBC84C1F5E1B11D0450837253B41C389D74FABF_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_0;
		L_0 = ((  KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 8978
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_TryGetValue_m1E53DEAAC0A4FA6EA9A62FD6CAE08C28094D206B_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_key : &___0_key), SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
		Il2CppFullySharedGenericAny* L_2 = ___1_value;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1), L_2);
		return L_3;
	}
}
// Method Definition Index: 8979
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m48CD0FA2868BA87C697AA1271790FCFD0D38ED69_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_0;
		L_0 = ((  ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 8980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_get_Item_m7C1B738861802341266E872538431A816B1507A2_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_key : &___0_key), SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
		return;
	}
}
// Method Definition Index: 8981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m760232769BCF4D542ADC3675CDFB72C49999896D_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_mD8EBB6AFBE0B504354FA2AD3C925191E6609F731_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Item_m9574ECF6ECDBFB0B78285A7C8AFF03FD2B4013D6_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_key : &___0_key), SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
		return;
	}
}
// Method Definition Index: 8984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_set_Item_m04BE92540AEBDD07DF1A30D6736F68317A8086B1_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyDictionary_2_get_Count_m570BC218FBF8EE3D7E5551E874DF20638F397CA7_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 8986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1911E89A7546D2C7F1DD67B61404C8B3D00A36EE_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, ___0_item, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 8987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF57A320EF60929F01E8B81CEA0B003EFF819CB79_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 8988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m95064FB8DE29991E11D317B1112868234B687EB6_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 8989
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE36881BC770002B4BFB810CDD84B88FE8500A55F_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8990
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_mFB7C727CCCA77F742773A4537B99A5042C48DBF3_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8991
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mD21C9806294C21C66C48BBCC7124FF9F72753A08_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8992
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_GetEnumerator_m3FFC97D7546675C2514644991A7E196D5039E5AB_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 8993
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_mE28E564A8649570EA9A1CE7107DF7E5FE7A21EFD_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 8994
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_IDictionary_GetEnumerator_m0285CEE9474EAA483097CF2480942BC24E6E3BF7_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->___m_dictionary;
		DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77 L_5;
		memset((&L_5), 0, sizeof(L_5));
		DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED((&L_5), L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22), &L_6);
		return (RuntimeObject*)L_7;
	}
}
// Method Definition Index: 8995
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_IDictionary_set_Item_mCFEB082FB514C3C58C6C908B833CC7FF5B5A6D6A_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 8996
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_mB747FA5969557062AD3E00EF54BC5185C08504E7_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13));
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	const Il2CppFullySharedGenericAny L_53 = L_34;
	const Il2CppFullySharedGenericAny L_55 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
	const Il2CppFullySharedGenericAny L_54 = L_36;
	const Il2CppFullySharedGenericAny L_56 = alloca(SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_30 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_49 = L_30;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_57 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_3 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	memset(V_3, 0, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_5 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	memset(V_5, 0, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0036:
	{
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_9 = ___1_index;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = il2cpp_codegen_array_get_length(L_10);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0053;
		}
	}

IL_0043:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0053:
	{
		RuntimeArray* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = il2cpp_codegen_array_get_length(L_13);
		int32_t L_15 = ___1_index;
		int32_t L_16;
		L_16 = ((  int32_t (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) >= ((int32_t)L_16)))
		{
			goto IL_006e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_006e:
	{
		RuntimeArray* L_18 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInstSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_0;
		if (!L_19)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_20 = __this->___m_dictionary;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_21 = V_0;
		int32_t L_22 = ___1_index;
		NullCheck((RuntimeObject*)L_20);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_20, L_21, L_22);
		return;
	}

IL_0086:
	{
		RuntimeArray* L_23 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_23, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_24 = V_1;
		if (!L_24)
		{
			goto IL_00e2;
		}
	}
	{
		RuntimeObject* L_25 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), (RuntimeObject*)L_25);
		V_2 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d8:
			{
				{
					RuntimeObject* L_27 = V_2;
					if (!L_27)
					{
						goto IL_00e1;
					}
				}
				{
					RuntimeObject* L_28 = V_2;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00e1:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ce_1;
			}

IL_009e_1:
			{
				RuntimeObject* L_29 = V_2;
				NullCheck(L_29);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 25), L_29, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_30);
				il2cpp_codegen_memcpy(V_3, L_30, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_31 = V_1;
				int32_t L_32 = ___1_index;
				int32_t L_33 = L_32;
				___1_index = ((int32_t)il2cpp_codegen_add(L_33, 1));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_3, (Il2CppFullySharedGenericAny*)L_34);
				RuntimeObject* L_35 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_34);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_3, (Il2CppFullySharedGenericAny*)L_36);
				RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13), L_36);
				DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_38;
				memset((&L_38), 0, sizeof(L_38));
				DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_38), L_35, L_37, NULL);
				NullCheck(L_31);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_38);
			}

IL_00ce_1:
			{
				RuntimeObject* L_39 = V_2;
				NullCheck((RuntimeObject*)L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
				if (L_40)
				{
					goto IL_009e_1;
				}
			}
			{
				goto IL_0153;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		RuntimeArray* L_41 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_41, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_4;
		if (L_42)
		{
			goto IL_00f9;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_43 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_43, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
	}

IL_00f9:
	{
	}
	try
	{
		{
			RuntimeObject* L_44 = __this->___m_dictionary;
			NullCheck((RuntimeObject*)L_44);
			RuntimeObject* L_45;
			L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), (RuntimeObject*)L_44);
			V_2 = L_45;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_013b_1:
				{
					{
						RuntimeObject* L_46 = V_2;
						if (!L_46)
						{
							goto IL_0144_1;
						}
					}
					{
						RuntimeObject* L_47 = V_2;
						NullCheck((RuntimeObject*)L_47);
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_47);
					}

IL_0144_1:
					{
						return;
					}
				}
			});
			try
			{
				{
					goto IL_0131_2;
				}

IL_0108_2:
				{
					RuntimeObject* L_48 = V_2;
					NullCheck(L_48);
					InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 25), L_48, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_49);
					il2cpp_codegen_memcpy(V_5, L_49, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = V_4;
					int32_t L_51 = ___1_index;
					int32_t L_52 = L_51;
					___1_index = ((int32_t)il2cpp_codegen_add(L_52, 1));
					InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_5, (Il2CppFullySharedGenericAny*)L_53);
					InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_5, (Il2CppFullySharedGenericAny*)L_54);
					memset(L_57, 0, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
					KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? il2cpp_codegen_memcpy(L_55, L_53, SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3): *(void**)L_53), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13)) ? il2cpp_codegen_memcpy(L_56, L_54, SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1): *(void**)L_54), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
					RuntimeObject* L_58 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16), L_57);
					NullCheck(L_50);
					ArrayElementTypeCheck (L_50, L_58);
					(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (RuntimeObject*)L_58);
				}

IL_0131_2:
				{
					RuntimeObject* L_59 = V_2;
					NullCheck((RuntimeObject*)L_59);
					bool L_60;
					L_60 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_59);
					if (L_60)
					{
						goto IL_0108_2;
					}
				}
				{
					goto IL_0145_1;
				}
			}
			catch(Il2CppNativeThreadAbortException&)
			{
				__finallyBlock.SetNativeThreadAbortOccurred();
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0145_1:
		{
			goto IL_0153;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0147;
		}
		throw e;
	}

CATCH_0147:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_62 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, method);
	}

IL_0153:
	{
		return;
	}
}
// Method Definition Index: 8997
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_mE06D92F6EEC7E9C3245A31B7B75DE348212F59F7_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_dictionary;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
// Method Definition Index: 8998
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mFD4DE52E42982BE1C72AB6314736968DEA611E37_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_0;
		L_0 = ((  ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return (RuntimeObject*)L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1908
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = ((int32_t)(L_3&((int32_t)2147483647LL)));
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399>(__this);
	String_t* _returnValue;
	_returnValue = ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 1909
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_5, NULL);
		return L_6;
	}

IL_0039:
	{
		goto IL_008e;
	}

IL_008e:
	{
		RuntimeObject* L_7 = __this->____object;
		if (!L_7)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_8 = __this->____object;
		int32_t L_9 = __this->____index;
		int32_t L_10 = __this->____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&L_11), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9))), L_9, ((int32_t)(L_10&((int32_t)2147483647LL))), NULL);
		return L_11;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_12 = V_2;
		return L_12;
	}
}
// Method Definition Index: 1910
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))));
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_2 = V_0;
		bool L_3;
		L_3 = ReadOnlyMemory_1_Equals_mC3969DE0744A246E0576FEDE51191A0D3F5F69A9(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13))))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = ___0_obj;
		V_1 = ((*(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)UnBox(L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13))));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_6 = V_1;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_7;
		L_7 = Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD(L_6, NULL);
		bool L_8;
		L_8 = ReadOnlyMemory_1_Equals_mC3969DE0744A246E0576FEDE51191A0D3F5F69A9(__this, L_7, NULL);
		return L_8;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 1911
// Method Definition Index: 1912
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____object;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		int32_t* L_3 = (int32_t*)(&__this->____index);
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_3, NULL);
		int32_t* L_5 = (int32_t*)(&__this->____length);
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_5, NULL);
		int32_t L_7;
		L_7 = ReadOnlyMemory_1_CombineHashCodes_mC20EA69C2706DE824529A0506BD45837E26C6980(L_2, L_4, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 1913
// Method Definition Index: 1914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_mC20EA69C2706DE824529A0506BD45837E26C6980 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___1_h2;
		int32_t L_2;
		L_2 = ReadOnlyMemory_1_CombineHashCodes_mAD75C6BDDB231C42D8A846F50E2B081E244108DA(L_0, L_1, NULL);
		int32_t L_3 = ___2_h3;
		int32_t L_4;
		L_4 = ReadOnlyMemory_1_CombineHashCodes_mAD75C6BDDB231C42D8A846F50E2B081E244108DA(L_2, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1908
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_3;
		L_3 = ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_1 = L_3;
		String_t* L_4;
		L_4 = ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857((&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return L_4;
	}

IL_003f:
	{
		String_t* L_5 = V_0;
		int32_t L_6 = __this->____index;
		int32_t L_7 = __this->____length;
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, L_6, ((int32_t)(L_7&((int32_t)2147483647LL))), NULL);
		return L_8;
	}

IL_0058:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_10);
		int32_t L_12 = __this->____length;
		int32_t L_13 = ((int32_t)(L_12&((int32_t)2147483647LL)));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E, L_11, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>(__this);
	String_t* _returnValue;
	_returnValue = ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 1909
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlyMemory_1_get_Span_m3BBCF2EFAFAB7DAA8882208AF319487E00DC3895_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 >::Invoke(4, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_5;
		L_5 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_6;
		L_6 = ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))(L_5, NULL);
		return L_6;
	}

IL_0039:
	{
		bool L_7 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_7)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_8 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		String_t* L_9 = V_1;
		if (!L_9)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_10 = V_1;
		NullCheck(L_10);
		Il2CppChar* L_11;
		L_11 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_10, NULL);
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_11);
		String_t* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_15;
		memset((&L_15), 0, sizeof(L_15));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_15), L_12, L_14, NULL);
		V_2 = L_15;
		int32_t L_16 = __this->____index;
		int32_t L_17 = __this->____length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_18;
		L_18 = ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))((&V_2), L_16, L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_18;
	}

IL_008e:
	{
		RuntimeObject* L_19 = __this->____object;
		if (!L_19)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_20 = __this->____object;
		int32_t L_21 = __this->____index;
		int32_t L_22 = __this->____length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_23;
		memset((&L_23), 0, sizeof(L_23));
		ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline((&L_23), ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_20, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9))), L_21, ((int32_t)(L_22&((int32_t)2147483647LL))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_23;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_24 = V_2;
		return L_24;
	}
}
// Method Definition Index: 1910
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))));
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_2 = V_0;
		bool L_3;
		L_3 = ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13))))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = ___0_obj;
		V_1 = ((*(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*)UnBox(L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13))));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_6 = V_1;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_7;
		L_7 = ((  ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(L_6, NULL);
		bool L_8;
		L_8 = ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_7, NULL);
		return L_8;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 1911
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____object;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_1 = ___0_other;
		RuntimeObject* L_2 = L_1.____object;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = __this->____index;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_4 = ___0_other;
		int32_t L_5 = L_4.____index;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = __this->____length;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_7 = ___0_other;
		int32_t L_8 = L_7.____length;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_AdjustorThunk (RuntimeObject* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 1912
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____object;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		int32_t* L_3 = (int32_t*)(&__this->____index);
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_3, NULL);
		int32_t* L_5 = (int32_t*)(&__this->____length);
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_5, NULL);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)))(L_2, L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 1913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_m74D5DE9AF0CCB1FF7B88058328C835DBD981C568_fshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_left;
		int32_t L_1 = ___0_left;
		int32_t L_2 = ___1_right;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_0<<5)), L_1))^L_2));
	}
}
// Method Definition Index: 1914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_m1F4667745BEC8579517F436310474B5FEE8379E6_fshared (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___1_h2;
		int32_t L_2;
		L_2 = ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(L_0, L_1, NULL);
		int32_t L_3 = ___2_h3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(L_2, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67903
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67903
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 67903
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeVector_1__ctor_m64EB14620E394C425562A5F9AD826C959C29BD96_fshared (ReadOnlyNativeVector_1_tE45C179B8DFEAD70E1F59D744D5C6999873C0FFC* __this, intptr_t ___0_ptr, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_ptr;
		__this->___m_Ptr = L_0;
		int32_t L_1 = ___1_size;
		__this->___m_Count = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2CC9B73F68FE98D2563F8B512D75EEA593CD0A2F (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>(L_11);
		int32_t L_13 = ___1_start;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_14;
		L_14 = il2cpp_unsafe_add<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,int32_t>(L_12, L_13, sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA2BE59D156D8828C6785A95DC0B15BC2F96B7909 (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>((uint8_t*)L_1);
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ReadOnlySpan_1_get_Item_m5339FA799896CB0C8742675B2C784A3692845DD3 (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,int32_t>(L_3, L_4, sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m1B5D6297306DDB0A2ED9246FF28984F6D9F5F72B (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_2 = ___0_destination;
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m9C76F1DAB20B847360D0552FE3D4729EDE3674A7 (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_2 = ___0_destination;
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_1));
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m0309C9E49E385CCEDE0230676950F45BBD1C001F (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C ReadOnlySpan_1_Slice_m82ABEAF83B309963556C3613AB10D0AC876D1293 (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,int32_t>(L_3, L_4, sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m486814B04933AE0AD908A6E84F054E69E593F519_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C ReadOnlySpan_1_Slice_m8814A62E4A636EDFBF39D1BB6A6BF50D15C11F64 (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,int32_t>(L_6, L_7, sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m486814B04933AE0AD908A6E84F054E69E593F519_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ReadOnlySpan_1_ToArray_m7D2B93E58E6712C4D99C54F7E2785E5378571393 (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_1;
		L_1 = Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_3 = (ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E*)(ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>(L_5);
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m244EE24DCAF023E68772525E955FA0B38FC2A8FB (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C ___0_left, ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C L_0 = ___0_left;
		ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mC80880311ADA2CF0907EF2CCEA1B1C0E871EFE08(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF26761CEA928E56563C41643407FBCC144DAF578 (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m79BB5CCC670C61333553A68D58C4087E3B4AD6F3 (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCDCD7D83BA7C5A06B82ABC1C5F904E246B5ABD66 (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>(L_11);
		int32_t L_13 = ___1_start;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_14;
		L_14 = il2cpp_unsafe_add<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,int32_t>(L_12, L_13, sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB1DBE926CA5450BB84F2FE23E09F288AEC7FDBCB (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>((uint8_t*)L_1);
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ReadOnlySpan_1_get_Item_m7E40950872498FF6AC7712D6A5FE42D7B7892112 (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD34CE76F85939A675B28F2F61725C23A258F76CE (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_2 = ___0_destination;
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m785C9ED46A851BC45330D3C5418379751F83B888 (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_2 = ___0_destination;
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_1));
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mD1AA7BBC49FEF8C46C247FAD1C713FC4A11A7B38 (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 ReadOnlySpan_1_Slice_m200EF7E88C0FA769200C7F196539A052CC74D631 (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB5D26FA83D7E73B9FE0DA2358AFEC25DCD334136_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 ReadOnlySpan_1_Slice_m0854BB8813F36AF808BCB89862A1C677562970BC (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,int32_t>(L_6, L_7, sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mB5D26FA83D7E73B9FE0DA2358AFEC25DCD334136_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ReadOnlySpan_1_ToArray_m49808ADA44F8ACA748D69DA3407922479FBA112D (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_3 = (ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85*)(ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>(L_5);
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m8CD4A4A43FC2C81C46A72700FC0BBB8C27F5BEE5 (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 ___0_left, ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 L_0 = ___0_left;
		ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m72F5F7802DC1E9310EC683C11760C78C01F399B1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m4FA71E78144C54D7452ACFAA3EE945238F4FB978 (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m5BDBACB8684A5BB99C3C83D59E3A838F8FE4D3AA (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mEB53632CC4874E9BDBF97881FE81E7983E62D6CC (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>(L_11);
		int32_t L_13 = ___1_start;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_14;
		L_14 = il2cpp_unsafe_add<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,int32_t>(L_12, L_13, sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDACBD9067D7752AA74BB02929E3B25B6F55748CA (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>((uint8_t*)L_1);
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ReadOnlySpan_1_get_Item_m13684C5FD01FDD4BF090ADD8AD20D1D005CA1550 (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,int32_t>(L_3, L_4, sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m6F05C80C95152C5FE1C54276BFFA5488EC85ADDD (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_2 = ___0_destination;
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m4632D643A58CD7CA8321AF3A95479DFD341BA54A (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_2 = ___0_destination;
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_1));
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m452B4A5E46587FAFAEDEF5CAAFB8961DF01B1878 (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF ReadOnlySpan_1_Slice_mB7F14DF54346771098F6B21F3CD7DEB4AB6906DC (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,int32_t>(L_3, L_4, sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m091B9228C833C805E0E66BCD0A4FB8099569AAB5_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF ReadOnlySpan_1_Slice_mE8A216A65EBADBD7F52C104FD0EA2DF7C4ADA59A (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,int32_t>(L_6, L_7, sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m091B9228C833C805E0E66BCD0A4FB8099569AAB5_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ReadOnlySpan_1_ToArray_m14F1D604F1A30CD3B1DE752B971E56A6BF30A65D (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_1;
		L_1 = Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_3 = (ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F*)(ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>(L_5);
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mC30F0C083D7CF5FB42CC9A97B25FAEAEC8A266D5 (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF ___0_left, ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF L_0 = ___0_left;
		ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mC592FFE35374C1A5D870BE19DB27CB0AC8EB602C(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mFCA6B53F8AB5566989D9F54DF87062CAA233640F (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m9203ED6815040784F008916D920D0CD244374989 (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m17BA0F1AB131B3ABA09F04C7C9B51FA07E640E4B (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>(L_11);
		int32_t L_13 = ___1_start;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_14;
		L_14 = il2cpp_unsafe_add<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,int32_t>(L_12, L_13, sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m19595C131C53001CC95704FCD3B1C00F1A0FCCE7 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>((uint8_t*)L_1);
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ReadOnlySpan_1_get_Item_m23B7CE0B2A7C173BB530E1F718AD14B4322F8F11 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mAFEF19A8D5BE7EAB89FF376C2117097C1D7517B4 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_2 = ___0_destination;
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m6DB5513AB2A2E450ED2E267D94E62F41CBB6E42A (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_2 = ___0_destination;
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_1));
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mB16A8CF6322E2CBD39BF48D734A772F696C15BF4 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E ReadOnlySpan_1_Slice_m085C62D0EAEEF83B1AA8C054675887EE3AE3A422 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m55CEB560D31889797B918E4F6954706A137E80CB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E ReadOnlySpan_1_Slice_m2EEAF86428781CF47989F3A1E742B380F0D74503 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,int32_t>(L_6, L_7, sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m55CEB560D31889797B918E4F6954706A137E80CB_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ReadOnlySpan_1_ToArray_m44D5331D2DD9CC61ECBCF0AC7563412FB84BA829 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_3 = (ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257*)(ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>(L_5);
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mDAD7D09BB3D01F45B7225BD46CEF120DEBC45C41 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E ___0_left, ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E L_0 = ___0_left;
		ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m51A1FC89CD86D4B0C321AB12BDCC3F8617BA20A6(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m0B44446DB163E864A8A712A60C219F26728EBE95 (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m41D0C6D77B3273B7330E6EDAD4AC15B30FFF667E (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m208241FB981CABBE0E5309CD37FDA200F54E9624 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>(L_11);
		int32_t L_13 = ___1_start;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_14;
		L_14 = il2cpp_unsafe_add<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,int32_t>(L_12, L_13, sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE4AC50DFE2A02F615B182EA963D453DBDD8BF6E0 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>((uint8_t*)L_1);
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ReadOnlySpan_1_get_Item_m65B53249F464E74EA14DDBB53D123AF24CAC7B13 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,int32_t>(L_3, L_4, sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m1BAFD3D303902DCC5859E410E656D2852AA24E86 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_2 = ___0_destination;
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m02CCA58AF258BF9464988F452CD8AD3208C1CD68 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_2 = ___0_destination;
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_1));
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF60C647EE1CB5726056C7A2F873F21F6B7234649 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 ReadOnlySpan_1_Slice_mEC6A7A46C62F630F07E01F1947DD414A0A436C8C (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,int32_t>(L_3, L_4, sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m3E9BB899D766CC925C9E1A881252171272EF2825_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 ReadOnlySpan_1_Slice_mAAAC828D5295F64367BF8253CE9A12D2658E6951 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,int32_t>(L_6, L_7, sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m3E9BB899D766CC925C9E1A881252171272EF2825_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ReadOnlySpan_1_ToArray_m3BFE607AB03AA07387CE32A421673D1126ECF695 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_1;
		L_1 = Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_3 = (ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD*)(ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>(L_5);
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m55EA0477C4EE1BF9B19C674F4AF4D88B1E9BF169 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 ___0_left, ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 L_0 = ___0_left;
		ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mD35ED073D68DAECE20C2F7A20B8852601529DA91(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF21CC3D92736E6CDC51F935D8FA5BDE032DC1F16 (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m3856A3ABB52225E416681A832CC7C431EEF4108E (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m65F87AB994792F50D0B9B259ABD6970D621ACDED (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>(L_11);
		int32_t L_13 = ___1_start;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_14;
		L_14 = il2cpp_unsafe_add<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,int32_t>(L_12, L_13, sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m8F13A3CF0BEBE1F75E93B9B9830A3BB70428847D (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>((uint8_t*)L_1);
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ReadOnlySpan_1_get_Item_m28F20EB26298B89C4CDCFF8740AAB6857ADD9EBF (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m763332110340A28B83E9CCC72E1A9C4B6B706119 (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_2 = ___0_destination;
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m1FF1FE19EEC0EFF99D1F0E45A3BE542167C7910A (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_2 = ___0_destination;
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_1));
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m7E7CD941D19817E6929239F2553C2D40212C99F3 (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC ReadOnlySpan_1_Slice_m5EA3502D80AB753363E8B12E5A145529D848C16E (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m19748547A24A1E73F0E008F1B10E99E211AB1743_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC ReadOnlySpan_1_Slice_m7F906B4EC9567CEF38C8B25E8795CF54F897ED1F (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,int32_t>(L_6, L_7, sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m19748547A24A1E73F0E008F1B10E99E211AB1743_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ReadOnlySpan_1_ToArray_mCE40A0E5CC61B797AF969E6F0748F729FADE3810 (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_3 = (ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13*)(ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>(L_5);
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m116FB8B3638A7956B080F21753D8FEE65B334216 (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC ___0_left, ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC L_0 = ___0_left;
		ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE9E1437DED4C538FBA4C43CB4B7D731A5BA82BE8(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m499B8C2DFB6CB112559D61E88D9FD1FD7D7F1EDD (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m2E9443ED3E0E8676FA2766845FEE3FD708987569 (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3399C43482378C013B28C6063BA36A0553153A88 (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>(L_11);
		int32_t L_13 = ___1_start;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_14;
		L_14 = il2cpp_unsafe_add<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,int32_t>(L_12, L_13, sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD10D7C5914F96120C469E4E5B4CE9CC13ED821A1 (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>((uint8_t*)L_1);
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ReadOnlySpan_1_get_Item_m80CA39AC4916E695A1F499453A63F2225595A42E (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m27CF6185D276639B4465F109B6A6FC43B843DDC3 (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_2 = ___0_destination;
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mE69C0187661486824E2FE0AA1BCFEDE412B9C036 (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_2 = ___0_destination;
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_1));
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m11C8BAEB50D5CE5B70E62ED43EC9F4B285A4BC0E (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 ReadOnlySpan_1_Slice_m4E2C4F31BB821165C6AB1103DFE4B9E35D6306BB (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mD3A1B337389DF31530D83D99CA02CB50613F9C03_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 ReadOnlySpan_1_Slice_mFD5A39BC595BF7880C0D5BA054D29D64489594C4 (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,int32_t>(L_6, L_7, sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mD3A1B337389DF31530D83D99CA02CB50613F9C03_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ReadOnlySpan_1_ToArray_m74066B510B282B9E4574E99EE937694A92EFE847 (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_3 = (ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885*)(ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>(L_5);
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m2DD6E1281D89085320D6097E5FBF35930BFEEB8E (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 ___0_left, ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 L_0 = ___0_left;
		ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mB28FD065DA175B326FEE5C8C153159C19E5B45F1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m201F4EFE73D6FB854C3EA9B498B2E9C5D3DB89CF (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m7809DF7E36E5CF2DF64E09B23A8A30BA6B78AA67 (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBE56CDEE0F2961AA720A702920A8F147FF8B1D79 (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_12;
		L_12 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>(L_11);
		int32_t L_13 = ___1_start;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_14;
		L_14 = il2cpp_unsafe_add<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,int32_t>(L_12, L_13, sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC584F419D9D42152547B16E73E04B1E8926CCED2 (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>((uint8_t*)L_1);
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ReadOnlySpan_1_get_Item_mC3F99D99FB6C822DE3124D5BC769CCAF2A9682F3 (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mBE9D4428B04393DA1495904FB5F42B9EB1FD7B4D (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_2 = ___0_destination;
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mCE567789BD64AC82694DCD5E67AF8BC968EB221C (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_2 = ___0_destination;
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_1));
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m0EC7469638D3B97D820B206AFFE6251B0A78225A (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E ReadOnlySpan_1_Slice_m997B1FA9137F2121A4CA621120EF3253059F6EBC (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,int32_t>(L_3, L_4, sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m9E826A6B5D5571A8B7ADA227155903C0470343DD_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E ReadOnlySpan_1_Slice_m257A6875CAEED5F43946744BAC53E8F76B30B12C (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,int32_t>(L_6, L_7, sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m9E826A6B5D5571A8B7ADA227155903C0470343DD_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ReadOnlySpan_1_ToArray_mF460273FDECE4116B769E8103C19034BE0A22AAA (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_3 = (ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931*)(ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>(L_5);
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mCBE499006259B635A713B17C8823379158A9C4DA (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E ___0_left, ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E L_0 = ___0_left;
		ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m8215F432625881896F278A4D4BDCA8E0D3458669(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF01E0F0C7FB1D212130F6E73DD4F59BA131C0A35 (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m22B1A672B690741E37907B2A0ACF4DE375E978A8 (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m570BAA2FA6B3B2F7F152D6619D1CF100D9349FAF (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_12;
		L_12 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_11);
		int32_t L_13 = ___1_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_14;
		L_14 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_12, L_13, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF2ADB2B548C4E7719F88D0ABC14770AE5E4DE14E (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_2;
		L_2 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>((uint8_t*)L_1);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ReadOnlySpan_1_get_Item_m6A5C732A45AE02479171B621A148DBC2399CC0E5 (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_3, L_4, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m7183D13AD806FDB2EC0884762F77A4C86FE4602A (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFAB3C81B4C721D97D620490285A98D10429F2C64_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_2 = ___0_destination;
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_3 = L_2.____pointer;
		V_0 = L_3;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m033324D7B7BD7BAF8F65DE0934269BDDDB71EF5F (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFAB3C81B4C721D97D620490285A98D10429F2C64_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_2 = ___0_destination;
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_3 = L_2.____pointer;
		V_1 = L_3;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_1));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5 = __this->____pointer;
		V_1 = L_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mCA881F846F1762D5AE214F0AAA740E7CA119C7EC (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ReadOnlySpan_1_Slice_m7C47F3D3EA3870649051BCE9293B3938931EF55F (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_3, L_4, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m2310FC0E91B7ECFAE542316434BB4C9D6782042B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ReadOnlySpan_1_Slice_m80AC0C5A0EBBFE2438C2D42F6048AC07AF86697D (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_8;
		L_8 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_6, L_7, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m2310FC0E91B7ECFAE542316434BB4C9D6782042B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ReadOnlySpan_1_ToArray_m32FED539B1AE3E7D80E2C647267628D88C95851A (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_1;
		L_1 = Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_3 = (EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA*)(EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_5);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_7 = __this->____pointer;
		V_0 = L_7;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m410F5EE92CACE44CC4DE5DCC7D5D143EEA37EF03 (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ___0_left, ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 L_0 = ___0_left;
		ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mBDAC100928A2A40355010648140EA50C37DE399E(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m65967C64A7A6961BD33CDE60AF90ABA8EFB3E9A0 (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m3C18BC4937635B9FCA7A528656359E4BF954CA99 (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA4AF34335BFCB7E59FCF8FF2B03B86A1453F1E44 (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_12;
		L_12 = il2cpp_unsafe_as_ref<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC>(L_11);
		int32_t L_13 = ___1_start;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_14;
		L_14 = il2cpp_unsafe_add<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC,int32_t>(L_12, L_13, sizeof(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC));
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m02E43C902E0C6A599B43863C6D28966CE071024E (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_2;
		L_2 = il2cpp_unsafe_as_ref<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC>((uint8_t*)L_1);
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ReadOnlySpan_1_get_Item_mB7B2E4A04CE381D79CFA9FDB17764E74B87F8781 (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_2 = __this->____pointer;
		V_0 = L_2;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_5;
		L_5 = il2cpp_unsafe_add<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC,int32_t>(L_3, L_4, sizeof(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m180B9061C7EF933B70B1872B9B92C2B64B85A1BA (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8209849831B18D330C2C09547CD0B51428C80BB6_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 L_2 = ___0_destination;
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_3 = L_2.____pointer;
		V_0 = L_3;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC, (Il2CppByReference*)(&V_0));
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_5 = __this->____pointer;
		V_0 = L_5;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m93E4FED2707AE3A8DD40F47B3166D6DC9212B3E1(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m762DBB5F890322F8FA804BDF991DFBE2CBF35D99 (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8209849831B18D330C2C09547CD0B51428C80BB6_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 L_2 = ___0_destination;
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_3 = L_2.____pointer;
		V_1 = L_3;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC, (Il2CppByReference*)(&V_1));
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_5 = __this->____pointer;
		V_1 = L_5;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m93E4FED2707AE3A8DD40F47B3166D6DC9212B3E1(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m47ABF564271B536DB2E83222C77A142DA2CF8AA2 (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C ReadOnlySpan_1_Slice_mBBCF414FB69DB178CF948F240CDEC2BE855AF234 (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_2 = __this->____pointer;
		V_0 = L_2;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_5;
		L_5 = il2cpp_unsafe_add<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC,int32_t>(L_3, L_4, sizeof(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mE597474EFB84B99FC2DA815FDCCF1EF8D4A85744_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C ReadOnlySpan_1_Slice_mC3742640EEE9AE177D49473E6464DE2C3760FB18 (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_5 = __this->____pointer;
		V_0 = L_5;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_8;
		L_8 = il2cpp_unsafe_add<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC,int32_t>(L_6, L_7, sizeof(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mE597474EFB84B99FC2DA815FDCCF1EF8D4A85744_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* ReadOnlySpan_1_ToArray_m47ADC5A902B6849CEF92927A64091A18A63F784E (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_1;
		L_1 = Array_Empty_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m7AFB8836C09DB8ED329614A1BC844AB4204E9557_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_3 = (Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF*)(Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_6;
		L_6 = il2cpp_unsafe_as_ref<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC>(L_5);
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_7 = __this->____pointer;
		V_0 = L_7;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m93E4FED2707AE3A8DD40F47B3166D6DC9212B3E1(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m96AFA5272EC9016971C2F2DA78A80460BE26BB2D (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C ___0_left, ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C L_0 = ___0_left;
		ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mB77DC20EF20262A9E067EF2B7874B56A7FD82DC1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m94F021F9CAFCAFE77F6AE5D47DDB5DDB8907E03B (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mB32EE99E2837B40BE69C4D8C08617C13BFE6316D (ReadOnlySpan_1_t3F83682C3461C8CA6E8D45BE8A2603B66CFD701C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mEB46690E00A74F761B674462932ED94D063585C0 (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_12;
		L_12 = il2cpp_unsafe_as_ref<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF>(L_11);
		int32_t L_13 = ___1_start;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_14;
		L_14 = il2cpp_unsafe_add<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF,int32_t>(L_12, L_13, sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDCFA6BF48D1161D2078C94C43EB44808E3CA3272 (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_2;
		L_2 = il2cpp_unsafe_as_ref<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF>((uint8_t*)L_1);
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ReadOnlySpan_1_get_Item_m829BA21A9C829B1E2CEF18B99A9AFF3538BB8EB8 (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_2 = __this->____pointer;
		V_0 = L_2;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_5;
		L_5 = il2cpp_unsafe_add<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF,int32_t>(L_3, L_4, sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD810712253C51360135BED430CB9BB007DE82C30 (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8037C084812257D2D9BB26DBCB121D4A7DEE8EEF_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A L_2 = ___0_destination;
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_3 = L_2.____pointer;
		V_0 = L_3;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, (Il2CppByReference*)(&V_0));
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_5 = __this->____pointer;
		V_0 = L_5;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_mC1E4A42FCB2DEE71916523FFA2786E1A528DB811(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m2D4BBD1A993DCB677545B49EBC5B7F18685EAAAD (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8037C084812257D2D9BB26DBCB121D4A7DEE8EEF_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A L_2 = ___0_destination;
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_3 = L_2.____pointer;
		V_1 = L_3;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, (Il2CppByReference*)(&V_1));
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_5 = __this->____pointer;
		V_1 = L_5;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_mC1E4A42FCB2DEE71916523FFA2786E1A528DB811(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF8984F46F177C036CABD2537385D6FB65B91E101 (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 ReadOnlySpan_1_Slice_m72A7C32D972FCD7D80ECDB660999120CA4BFFC6C (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_2 = __this->____pointer;
		V_0 = L_2;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_5;
		L_5 = il2cpp_unsafe_add<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF,int32_t>(L_3, L_4, sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m73B9A07190CA2FB2B6B0290D44964057684D770F_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 ReadOnlySpan_1_Slice_m1F0C417CB6151B77A8227941D4627D18CEE329CF (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_5 = __this->____pointer;
		V_0 = L_5;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_8;
		L_8 = il2cpp_unsafe_add<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF,int32_t>(L_6, L_7, sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m73B9A07190CA2FB2B6B0290D44964057684D770F_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* ReadOnlySpan_1_ToArray_m6B5E93CC14302E46B414CB158543A12920B4E4EA (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_1;
		L_1 = Array_Empty_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_m40657B5BE432C571329372CFB2E22223CA589563_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_3 = (Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA*)(Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_6;
		L_6 = il2cpp_unsafe_as_ref<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF>(L_5);
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_7 = __this->____pointer;
		V_0 = L_7;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_mC1E4A42FCB2DEE71916523FFA2786E1A528DB811(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mD92A88C223B1F7447ECB06EA446A35588AA984C2 (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 ___0_left, ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 L_0 = ___0_left;
		ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mA4E2BD1FC033567FCB7716AB748DC98B7EED5783(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m1122DFB09C1138FBCFBC4CBAD1630CB441CFB894 (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m7C532E1FBF0D20CBB42CFFF59F9144A2C882A705 (ReadOnlySpan_1_tC909A17640151B0B3D7880C8C707C8FE613F53E4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m52859FE79EBD2B8DECF3E13A88DCA05F0BBEC0D5_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_12;
		L_12 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_11);
		int32_t L_13 = ___1_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_14;
		L_14 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_12, L_13, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4F3AAB57F39E2E2579C12537324356199712C995_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>((uint8_t*)L_3);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		int32_t L_6 = ___1_length;
		__this->____length = L_6;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ReadOnlySpan_1_get_Item_m54C6853793A297EC8E291814DE88BEB8A7CE3E51_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_2 = __this->____pointer;
		V_0 = L_2;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_5;
		L_5 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_3, L_4, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mCC42376BE7A3B0B3FA269BB7B746C2A0E139C7CE_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m70ECF63AA57B2B62F767D7B9290E6F6FD35B8E9E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_2 = ___0_destination;
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_3 = L_2.____pointer;
		V_0 = L_3;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5 = __this->____pointer;
		V_0 = L_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m1F29665F008B75D3A568BCBB9C2C5A85D085F7E2_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m70ECF63AA57B2B62F767D7B9290E6F6FD35B8E9E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_2 = ___0_destination;
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_3 = L_2.____pointer;
		V_1 = L_3;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_1));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5 = __this->____pointer;
		V_1 = L_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m24869D7EE38C2A3AF6EB662716D082145E19E488_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_1 = __this->____pointer;
		V_1 = L_1;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppChar>(L_2);
		V_0 = L_3;
		Il2CppChar* L_4 = V_0;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppChar*,intptr_t,false,false>(L_4,NULL));
		int32_t L_6 = __this->____length;
		String_t* L_7;
		L_7 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)L_5, 0, L_6, NULL);
		return L_7;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_9);
		int32_t L_11 = __this->____length;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_10, L_13, NULL);
		return L_14;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ReadOnlySpan_1_Slice_mC99246C639C1C0F9BBF0C1F65B9A048B13049AA4_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_2 = __this->____pointer;
		V_0 = L_2;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_5;
		L_5 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_3, L_4, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m61A414D4F9636EAC0C3689FCCF1A7EA5ECD32F53_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ReadOnlySpan_1_Slice_m068A228D6A88F930B6917158C335F7964B9B16ED_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5 = __this->____pointer;
		V_0 = L_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_8;
		L_8 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_6, L_7, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m61A414D4F9636EAC0C3689FCCF1A7EA5ECD32F53_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ReadOnlySpan_1_ToArray_m3EAFADE1D32F93E52A5C68335CEEBDB840D7580A_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_1;
		L_1 = Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_3 = (HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*)(HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_5);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_7 = __this->____pointer;
		V_0 = L_7;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_6, L_8, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m7F618D95C6871AD1E1E7CB4BFF6DA57AF103E484_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ___0_left, ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 L_0 = ___0_left;
		ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m3E5BDB77835A736157FA2EC596A124328094905D(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m0BA22FF13C56D3EE51C779C23D705DC5FFD10783_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m4E42154AB110E3CF06C3A6D6E839B10EC4758644_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m608B0D10A71E6646CFC375049BEE1BD4A91E42D8 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_12;
		L_12 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_11);
		int32_t L_13 = ___1_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_14;
		L_14 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_12, L_13, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA00771A913574E450B7709FFE23409830DB02E45 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_2;
		L_2 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>((uint8_t*)L_1);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ReadOnlySpan_1_get_Item_m700CC33B3C856FED3CCC86C3ED00E982364740EE (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_3, L_4, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m95C90CC8DDDFB4AF85F92507CEC7AE3E1CB452C2 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mCBA967D766B41C6F7A5A958282339CC12C808833_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_2 = ___0_destination;
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_3 = L_2.____pointer;
		V_0 = L_3;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mC5E1BDB5173850E33F2CFD3639E9121CE51BC2DD (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mCBA967D766B41C6F7A5A958282339CC12C808833_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_2 = ___0_destination;
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_3 = L_2.____pointer;
		V_1 = L_3;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_1));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5 = __this->____pointer;
		V_1 = L_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mA3FD0ADDF9145E4C17E97DAF1747D1C5FB02CD88 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ReadOnlySpan_1_Slice_mCC37A7202F48A6418256606101B999C623E89A32 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_3, L_4, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB77B497E05DB783A900DCEAD111F61A3F27C7D35_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ReadOnlySpan_1_Slice_m51C8F4D23DD6380A637AEED12D9D6FBB9D661934 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_8;
		L_8 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_6, L_7, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mB77B497E05DB783A900DCEAD111F61A3F27C7D35_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ReadOnlySpan_1_ToArray_m7B7801DA2AD817458514F0E76FB154378963B3D1 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_1;
		L_1 = Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_3 = (NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0*)(NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_5);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_7 = __this->____pointer;
		V_0 = L_7;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m56807FF5E068AE9B6D327B3F1D0797B54D179E23 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ___0_left, ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA L_0 = ___0_left;
		ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m1C315B0091ADD10B08153159755014876AB3A48B(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD43FB77B142634D2E86E0FE099E74A56DB9C9020 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m65BE3303AD5CA8A8C18952615D5A45C5B270B3C7 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0C325927D022A4794D0573B41E1BAC18B83DB914 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_12;
		L_12 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_11);
		int32_t L_13 = ___1_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_14;
		L_14 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_12, L_13, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAAA13269ECF8F777B3D66AA1381ABAF562ECAFAD (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_2;
		L_2 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>((uint8_t*)L_1);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ReadOnlySpan_1_get_Item_m2D69BC4DF6C72A65AF6044FD5D9A1DA836E581CC (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_2 = __this->____pointer;
		V_0 = L_2;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_5;
		L_5 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_3, L_4, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mC13BF984D3064FAB75E9F31240A0D461090D28B5 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_2 = ___0_destination;
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3 = L_2.____pointer;
		V_0 = L_3;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_0 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m69C0DC7A9642D41BA974889DBF468384BE169D08 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_2 = ___0_destination;
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3 = L_2.____pointer;
		V_1 = L_3;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_1));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_1 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mFD9D2B3920E4AFC4709C68A4404CD723A0ED8A19 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ReadOnlySpan_1_Slice_m76C587257127EDB2661E9B2E077F2D6C2904394C (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_2 = __this->____pointer;
		V_0 = L_2;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_5;
		L_5 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_3, L_4, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m68B11A5CBD341B71C3B49A184D9A4A0F68B2BC1B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ReadOnlySpan_1_Slice_m31FCCE32E3D3F2C5C6059960D7F47D3C0D63FAB6 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_0 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_8;
		L_8 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_6, L_7, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m68B11A5CBD341B71C3B49A184D9A4A0F68B2BC1B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ReadOnlySpan_1_ToArray_m935765D78782E0DA24C534996DA3AF27448E26F6 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_1;
		L_1 = Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_3 = (SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)(SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_5);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_7 = __this->____pointer;
		V_0 = L_7;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mD43349D875DC6D0FB0535BE3B3830C1450435420 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___0_left, ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_0 = ___0_left;
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m273AE2A699A7739E89673154DA9E3BE6B08A180D(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m721EBEC6C55EAE29C1D18E357CBE1B795B121355 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m5003E9917221426C5BF4F1DD6CCD9F9C627F8CB2 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5E675F5E8D162043F87E2E91F1A8D105D7D6C805 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_12, L_13, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE81A67141DF0778695C0ED7D4B8CD743D3D9937A (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>((uint8_t*)L_1);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ReadOnlySpan_1_get_Item_m5AD40C70CAAA66F55544EAC5853562624CEDD4EE (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_3, L_4, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m462FF7C791121DD80E6F704DB2D83D2C2ACFC393 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAE734F1E7D866942E70763D9232D006153CC93C8_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_2 = ___0_destination;
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mEF58D18A89697D8ABD7CBF3429385673C7761681 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAE734F1E7D866942E70763D9232D006153CC93C8_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_2 = ___0_destination;
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_1));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m0A37625A3D8AD5F461CF2313B575BFA3733E2101 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ReadOnlySpan_1_Slice_m1A17102D00964F8C9CAA5228E1BDEE0B6E117306 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_3, L_4, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mE74E20E42241965E7A458DF5E23A7FA9058C4F4E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ReadOnlySpan_1_Slice_m686B172296E5F07DD0F950F9CC4BEAACA8803F5E (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_6, L_7, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mE74E20E42241965E7A458DF5E23A7FA9058C4F4E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ReadOnlySpan_1_ToArray_m4DAE4DF83F97F2C213CF0F4123E98C8EC177E78D (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_3 = (UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C*)(UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_5);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m76CC706E0DC452534C66712C378BE8BC1C6FB5EB (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ___0_left, ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 L_0 = ___0_left;
		ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mF3F15A8AA6E17FA6D014FF4ABE0086AD06B6D198(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m76978FAF00A8E3252E8313F55DFC9F929D49DFAC (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m43C6A9CCE77A1684A388D45472B151BC1E9E2FB5 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2F11BBDD5F40B3226343C8301D11CC6E963E6AA6 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6D5420C8A93291544AE831713247C1704DF9BD52 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>((uint8_t*)L_1);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ReadOnlySpan_1_get_Item_m98B57C2A5E139669314D54C37555841CBDE6B522 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mACF46BD6440A3D12A9E678D67489845FB950A350 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m757FB90F888A97214E70C7D7DB66DCBB57ED9317_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_2 = ___0_destination;
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mD02B4DAC081D1126CCAFF03C10856E9499F4FD75 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m757FB90F888A97214E70C7D7DB66DCBB57ED9317_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_2 = ___0_destination;
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_1));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF1043B2E0ED0B5BDDE0B51B193FACBE22DDA8DD9 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ReadOnlySpan_1_Slice_m21882D8D2EB4B8F82D2C107BE2C24206DB7F4009 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mE51F6529B403BD5E3C8AAE7BAE04BC3F93F7C31F_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ReadOnlySpan_1_Slice_m3871F3E7E821A4EC6AF2A9C5A1D4596CAFB68983 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mE51F6529B403BD5E3C8AAE7BAE04BC3F93F7C31F_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ReadOnlySpan_1_ToArray_m6E1A66F46B330789396D8C37C0E94F05B67372A9 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_3 = (UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A*)(UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_5);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m1438CC85E8FE3070B8950EC1DF36DD564AB671C7 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ___0_left, ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 L_0 = ___0_left;
		ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mAA0D16E0236C8BED9AB454299585D774E815A4A8(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m3660C302C942FD77049B0CAD4AC68EB137DDA8A5 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m727A5786C807A6259D66FE3A64E0D1F5B3B593AA (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAA7A1052208657A7111E40B70FDCA2A68B1A0947 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m33DDE487056A39B3BC9C2E571A2CEA7E13D55B1E (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>((uint8_t*)L_1);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ReadOnlySpan_1_get_Item_m8ED7F37A0082EDBAB853E9946CBA1F644CEC31AF (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m0D2DD6C54E7953D98BE0C9063E11CE5F6E204AE6 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9A18653FCB90AB3ACEBA696165B559FB2BC04AD7_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_2 = ___0_destination;
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m6EEA709B6D29E6703041EAF8412D7BAFE54D9D60 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9A18653FCB90AB3ACEBA696165B559FB2BC04AD7_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_2 = ___0_destination;
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_1));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mAAA5018256445B0A1B95AA7213E518CEFD28FA52 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ReadOnlySpan_1_Slice_m508AAB58F2C24C123188E44363B6E7BD9CCF61B7 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m199E5AF4F96498C11635398C59864ECAB82E7455_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ReadOnlySpan_1_Slice_mEDFF49D53D3CD81EAF4E97B62985909F2B1CC9FD (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m199E5AF4F96498C11635398C59864ECAB82E7455_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ReadOnlySpan_1_ToArray_m708CF60D3276EC800AC6035D5CBAE8C7F449968B (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_3 = (UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B*)(UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_5);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m8CA3ACF501717BD5F9131EABF09D05D540CAE146 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ___0_left, ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 L_0 = ___0_left;
		ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mBCAD4291296A130D084599C071B39A72441A6041(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m75BDD2461A1FFD7278388A31C55D84A5B604D5A1 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m92CDF0BFB26B1ECFBC53061EC8FE3DACE549987C (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE418BAFE8F76B4E12877C45D607567B3F59BFBC8 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCA18A92CD10111753DACA7E015842930111D8CB2 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>((uint8_t*)L_1);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ReadOnlySpan_1_get_Item_m532749192F7E0DCDAD1DDA8415C52D1B25BF5AA3 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD224A407D0BB9254768A5B562AF61FD5F4C72B60 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m64759923EC787AC67D237C126B1F9912A0757B25_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_2 = ___0_destination;
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m422F9A851A2C1A4FF5E6A81A46F4A64D27A5AB64 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m64759923EC787AC67D237C126B1F9912A0757B25_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_2 = ___0_destination;
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_1));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mD029C64D210A944CE10F606D7746BFE758BE1E83 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ReadOnlySpan_1_Slice_m0EFC5D7F3C3C50BC9BC997C24FA7E0225C77E4B5 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m3F71A8FCBA59B8D461F3B6CA8F89B020499102F8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ReadOnlySpan_1_Slice_mDE1C92A75905CE447C0E91872495892163285242 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m3F71A8FCBA59B8D461F3B6CA8F89B020499102F8_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ReadOnlySpan_1_ToArray_m68FF07494DFCC75CA7B9A37374E671C3E8778FF7 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_3 = (UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC*)(UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_5);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mD9C6F9460372638CF531AC5345C89547E37694A7 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ___0_left, ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E L_0 = ___0_left;
		ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE6044990D7E1998FCBA25CBD93EC07FB978178A3(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m1561401F7190CD7EA7E7BCA79EB608779FC3EEAC (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m8B91F1E659BB530A8A4BBFBA9599BD143BDA6DD2 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mEB5134B131D0E170994F7494CF7B926025DB115D (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD410A300E402FE08E89132BFAB0DCF881D3A4578 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>((uint8_t*)L_1);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ReadOnlySpan_1_get_Item_m161FDA2AF27E9551881AF5113CC0DB16CD228A22 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4481713E73C1C2D87CA4427A52238E9FFE94C3EB (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m25AA5DB60DDFA74CDC6FC67BCE440F807F40C824_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_2 = ___0_destination;
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m482AAA43086A659D3B44458010B23AFAA06FAE72 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m25AA5DB60DDFA74CDC6FC67BCE440F807F40C824_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_2 = ___0_destination;
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_1));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m364E1785B96B2251A8440C3BAC04C660E3479CEB (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ReadOnlySpan_1_Slice_mA6CFAB3B79A8C4796C3ABE6658206A3C22936085 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0A622A67EF6097E611538708F12B2AFCDBD113A1_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ReadOnlySpan_1_Slice_m33DD63C018A322555D2CBBBE10758907E6371125 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0A622A67EF6097E611538708F12B2AFCDBD113A1_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ReadOnlySpan_1_ToArray_mECE62226B3A5EE00DED45C53014CFDF63E149BAE (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_3 = (UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1*)(UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_5);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mFF252618100520D5459BBB026D18309BA70258C2 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ___0_left, ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 L_0 = ___0_left;
		ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE014CA0F1BF433B90328F47079B9D6A39F491376(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m0D0DEA968CE25B4D93F60AE55FAF300165A6F3B6 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mB312A1CB4929D78F97971315202646EEC20F2C8D (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m57B50A119CB5C15D895BE4D8AE7AD0EC3DB2AE1C (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA20344976D826FC2C274A834141568E60CF1C41 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>((uint8_t*)L_1);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ReadOnlySpan_1_get_Item_m9FA1BC0E559A238DB85D6C394431613EF6D1C912 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m36269F94D96E64B8C76A76A5A81F98732BDAA1ED (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFD0E4725CBEC468524ED6C42354367A9A7359B95_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_2 = ___0_destination;
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m6B3E3BC9772DF6300E69BC1D29668E5D7E9F2DFE (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFD0E4725CBEC468524ED6C42354367A9A7359B95_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_2 = ___0_destination;
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_1));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m25F6F75A5F83A7718391D78ABAA79AC113834BA8 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ReadOnlySpan_1_Slice_m281B5F126175A24079897CAE694CBEB012476B75 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mA8962BCDAF15875BAA1631B9B69E1AC9230C568A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ReadOnlySpan_1_Slice_m5B38060FD3E682A7F9E63884F09373040AA01C2F (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mA8962BCDAF15875BAA1631B9B69E1AC9230C568A_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ReadOnlySpan_1_ToArray_m96B6D7BB4635BCDCAC0664D9DEEB80B666275D65 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_3 = (UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3*)(UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_5);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mCF84881D054EAB14DC95F42E72F8B77B1AAF79FE (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ___0_left, ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 L_0 = ___0_left;
		ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m876FCAB5A193A17183A4C1055D7D78BF713D1E18(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD9D8965F7459C54F3B5D270C08D9045FCE5D3A9F (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m0441F743AE7A7D6E633E6914C58A5833448BE5A0 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3CE2144C56D797A26A410A0E721647C49F1C7911 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m729EEF0D26B094E266E97D2363E9AE019C5111C2 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>((uint8_t*)L_1);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ReadOnlySpan_1_get_Item_mB6E7B868E780FD750B8D126D693BC21D70891C59 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4D629049AA36AECB1CC99ED29CA62B07DD71A479 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m796AE228F2062910CC25672EFEBF8E6F196B79BB_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_2 = ___0_destination;
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m081261D096219E736EB4704994639CA61A9A15F3 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m796AE228F2062910CC25672EFEBF8E6F196B79BB_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_2 = ___0_destination;
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_1));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m4FC4F99F9CE75AF1962CD853CBA05704DB24E740 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ReadOnlySpan_1_Slice_m6141C6014D7DB6661E415A349F85CFC24AD39E29 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m66392F19D65D8E37FF8EFFBBA237A8B3CDBD1E3A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ReadOnlySpan_1_Slice_mFB1FD51F619CED37AB98FE11ADA12E1A248CA654 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m66392F19D65D8E37FF8EFFBBA237A8B3CDBD1E3A_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ReadOnlySpan_1_ToArray_m5C43083C5EA83FFA854CE1025FE7BB19084088A6 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_3 = (UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6*)(UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_5);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m5EA646D572B2CB430D29682121D2E767D0FC0E10 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ___0_left, ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 L_0 = ___0_left;
		ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE483F93046822C9468678DB29F761D3F06FF3C7E(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mDFB15E52356B7B5B0BBC5DD55D37E73949CD4951 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m9E81D896EA507DF702BD1FF2F16365A0B0964CC6 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5CC9461EEA62E6AFAF192130729ED899D96B29B3 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB6C538A745906E2EEE476700D4A6CF9A9A92EB5D (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>((uint8_t*)L_1);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ReadOnlySpan_1_get_Item_m11A070F8C669DF00BEBBAFCCE308167A62CE2414 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m9C9BB2ADE31A5E9AE88B1DC117EE7A21DA034566 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mEF91E66E45055A28639FAA49F9338605E2E05F7C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_2 = ___0_destination;
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m541B7430479FF42C6E99B081967334D54EAE91B4 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mEF91E66E45055A28639FAA49F9338605E2E05F7C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_2 = ___0_destination;
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_1));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m2E4F1A19AB1855334C1547CF9ACE15DCD5F19115 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ReadOnlySpan_1_Slice_mFA719902E1959E981FA51B31A52B996B8F6BE910 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m6C812749CD726114A53FA991ED2B2081E6A42C54_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ReadOnlySpan_1_Slice_m3F1CDD84C47D5AC4C38D0DDC665D6C9057C2A134 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m6C812749CD726114A53FA991ED2B2081E6A42C54_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ReadOnlySpan_1_ToArray_mE9BF1873C7223539CB354D755DF3E755893C1FA3 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_3 = (UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8*)(UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_5);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m347BD1CD824074BBC26EB1051075ECD277168123 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ___0_left, ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 L_0 = ___0_left;
		ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m795ADA90BB856BC321715377F80986612F556D4C(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mDEE0D8A5A525E6E8D8DF700D22F05FE391C20BF7 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m743C71EDA03D628765DAEBB14012ECAA95546ACC (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE4CAB4D57E4C6E471E6A60C4799A21D30FB02B2D (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFBFA9E1B046147D3C522901F21C3C5F95F96C3A9 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>((uint8_t*)L_1);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ReadOnlySpan_1_get_Item_m5BAB7F8367BFD56799C9DAB924319B29C849EFAA (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mBFE5760589371B72B121A0657E7DE957833CF600 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB346D5ACE2098245EF5F8BDB45CD7299937039AA_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_2 = ___0_destination;
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mB232D471E0491EC6B2B5B62ECD7745CE9FCF5917 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB346D5ACE2098245EF5F8BDB45CD7299937039AA_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_2 = ___0_destination;
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_1));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m36141D2BD434E4019FE80411CD822DDE9FD76D94 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ReadOnlySpan_1_Slice_m6CE825274F8FB27E8FB35C7DFD51D5E851B2BD6B (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC0D0EA7EE88DAA315FBD8A84318719AB5E2BAA66_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ReadOnlySpan_1_Slice_m3881951A18DF66F1782D779BB8EE5EC9D06FF08A (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mC0D0EA7EE88DAA315FBD8A84318719AB5E2BAA66_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ReadOnlySpan_1_ToArray_mC89AF6BAE06006D4CAA441423BA863BB00C55DA4 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_3 = (UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6*)(UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_5);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m0335BE2D9DC8BC4528C9B72341862BBC11C45771 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ___0_left, ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB L_0 = ___0_left;
		ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mD76E07AC17F959B55344C6E355DB9D0CEC31FC0C(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m21A8FEDE18AF0F567A556E08E29F117929D7BDB7 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mDC82A3E60B9B2B00D89C73168BB8E9434EB111B8 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 1915
// Method Definition Index: 1916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1B5DCEC898FA002743A46CAE3EF79478280F2495 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC063A887117628AF77F776F879E95FC3BF8CBE59 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>((uint8_t*)L_1);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1918
// Method Definition Index: 1919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ReadOnlySpan_1_get_Item_m22ADF866AFD450445C3D2F486B708A4576F31579 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		return L_5;
	}
}
// Method Definition Index: 1920
// Method Definition Index: 1921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mB69C78875838F393BDF5BB034069DA2320BC3A35 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m28C5FEE9DBE03CF72CF72C3E0CC494D3A9E9C233_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_2 = ___0_destination;
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 1922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m40AB691564D0BD700021FED7BB8FA32FC357FBD7 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m28C5FEE9DBE03CF72CF72C3E0CC494D3A9E9C233_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_2 = ___0_destination;
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_1));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 1923
// Method Definition Index: 1924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m63875ED1586E2AEA4E20F492EC777F59915B5873 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 1925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ReadOnlySpan_1_Slice_m3C1994A1FB731B0263CA40C3B80EB49AA8F6A5BA (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m05FAEE8A43921FFBDAA0B10C45DF7B413F8B7795_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 1926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ReadOnlySpan_1_Slice_mA22892A878DC4FF0A3F8C88DC34693C975450D5C (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m05FAEE8A43921FFBDAA0B10C45DF7B413F8B7795_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ReadOnlySpan_1_ToArray_mDBBC462A167BABADD2E16326C5753AE64187F1CE (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_3 = (UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD*)(UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_5);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 1928
// Method Definition Index: 1929
// Method Definition Index: 1930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m49286FADA0F2B5C4A32BC6C39F788EB03BDD7A6F (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ___0_left, ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 L_0 = ___0_left;
		ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mB157614B5969EB80F641D18A4DB33C3D8FC885C1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 1931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m9B50B4F9892CB22144594508E242DB52CB78D11D (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mA8AF62B0E177AAB66CE75AE6DC16854B9EC68618 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 1933
// Method Definition Index: 1934
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 432
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 2667
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
// Method Definition Index: 9160
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C KeyValuePair_2_get_Key_m710897944C3B6E373FE118DC3691602831A70264_gshared_inline (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 9161
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mAA0E95CE578DE8ACC4FCF8491DB9275D9C9C8849_gshared_inline (KeyValuePair_2_t80B3927E46D96989F576F0B1084086CE791DA5BE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 2019
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7, sizeof(uint8_t));
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 1916
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<uint8_t>(L_11);
		int32_t L_13 = ___1_start;
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_add<uint8_t,int32_t>(L_12, L_13, sizeof(uint8_t));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1918
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 1916
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_12, L_13, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 2021
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ((EmptyArray_1_t5645AFD0E8443842BF722C48FE084A0AD8FB9C3F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ((EmptyArray_1_t80380D195D0EA1035062D1FC1D4A1A0C1FB2A452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ((EmptyArray_1_t326678ECDD356906907BCD03308AE05FCBB14738_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ((EmptyArray_1_t5DA3D6F58CFF7067A4473CC5C94140F6B0BB1383_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ((EmptyArray_1_tD03B86572C4D1451C9314D535A6E0F8CA5939999_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ((EmptyArray_1_t0FF66F0AD14209D95E74DC5AE956BC83003DBC4A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ((EmptyArray_1_t26C7C247835B54DC3E87DB46010E7758BC6655DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ((EmptyArray_1_t38E96CD689D1FFA2AF9EABCEFD08457D8D280F4D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ((EmptyArray_1_tBCCAE4080E81992F81CEC3B682CED9E81A3B4D67_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* Array_Empty_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m7AFB8836C09DB8ED329614A1BC844AB4204E9557_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_0 = ((EmptyArray_1_t301F50E763B634BAEF1898CFD644478791477A24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* Array_Empty_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_m40657B5BE432C571329372CFB2E22223CA589563_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_0 = ((EmptyArray_1_t0884D77AB362266D3E9298E3E595AB5806A358F4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ((EmptyArray_1_tF44AD9BD1A58C47BDCB13A8D4D22873C785CC3F8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ((EmptyArray_1_t4505232400AEC5D181E96238357D9ACD1C992762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ((EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ((EmptyArray_1_tC9589F12F2382131419143780EC4B16F75839727_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ((EmptyArray_1_t39CC4801B12BC59D744D8F2F14920ED998228BE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ((EmptyArray_1_t8F16BED9A16610B0610D3B8977C56192C7CE8275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ((EmptyArray_1_tE873052363E5FFF3E3324D48BF2E70EABF9FBA3E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ((EmptyArray_1_tE694D0227F619BC5A10811AC94E5B6D8EE0CBD57_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ((EmptyArray_1_tA05DBCB91EE064FE54203B7543F218C61D4C292D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ((EmptyArray_1_tFEE1A4E0C8058B54F07835CFB63F231873095076_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ((EmptyArray_1_t8505E6935DD4C58400550971BB8321BD8CE9D6CF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ((EmptyArray_1_tA0B73630739AC85F81DDEFE547CAFB1C84FB72C6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ((EmptyArray_1_t1347A16AC3E72AFF909DAA98EED1FA11A4470068_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2009
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
