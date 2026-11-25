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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899;
struct Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1;
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD;
struct IEnumerable_1_t46F3B5E3A267684D65A117AEA1C7A010A75366F6;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_tB7BC87667C78593ECB7349D950AA35F0C07A5951;
struct List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C;
struct SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32;
struct SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946;
struct SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B;
struct SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98;
struct ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312;
struct ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E;
struct ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85;
struct ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F;
struct ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257;
struct ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD;
struct ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13;
struct ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885;
struct ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931;
struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA;
struct EntryU5BU5D_t4825D8B6926355B02E574ECB2C34A0855C2F0756;
struct Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF;
struct Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA;
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5;
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
struct SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137;
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
struct UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00;
struct UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB;
struct UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D;
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73;
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct Type_t;
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B31AB38360ECF9683ADAB607974B916C9663192;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963;
IL2CPP_EXTERN_C String_t* _stringLiteral575B4BE92F0D75E69C018C6AA4FBC530DDD4B595;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral920B6B05D1EF9E61AEC546EDC66550B870075C4B;
IL2CPP_EXTERN_C String_t* _stringLiteral96DF4500E5408A7ED26D010DF5824289A767048E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
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
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137;
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
struct UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00;
struct UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB;
struct UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3  : public RuntimeObject
{
};
struct Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4825D8B6926355B02E574ECB2C34A0855C2F0756* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB7BC87667C78593ECB7349D950AA35F0C07A5951* ____keys;
	ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* ____values;
	RuntimeObject* ____syncRoot;
};
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
struct EmptyArray_1_t5058CECA8099AD79767245351D26A5CB48C84746  : public RuntimeObject
{
};
struct EmptyArray_1_t47AB7FAF9E162BBE81FCF7964F3209ECF415B0A4  : public RuntimeObject
{
};
struct EmptyArray_1_t410AE8CFE5DA7B6BD5DA6669225E54549802E603  : public RuntimeObject
{
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C  : public RuntimeObject
{
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32  : public RuntimeObject
{
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* ___m_Subsystems;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_InitDelegates;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_CleanupDelegates;
};
struct SpanDebugView_1_t6B249F4737457563D0548242B2E940C385BF66E5  : public RuntimeObject
{
};
struct SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98 : public RuntimeObject {};
struct ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312  : public RuntimeObject
{
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* ____dictionary;
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
struct Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 
{
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ____currentValue;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222;
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
struct ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 
{
	intptr_t ____value;
};
struct ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 
{
	intptr_t ____value;
};
struct ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
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
struct UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 
{
	float* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 
{
	uint16_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB 
{
	uint64_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
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
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
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
struct Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 
{
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 ____pointer;
	int32_t ____length;
};
struct Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB 
{
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 ____pointer;
	int32_t ____length;
};
struct Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 
{
	ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
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
struct Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899  : public MulticastDelegate_t
{
};
struct Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1  : public MulticastDelegate_t
{
};
struct SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946  : public MulticastDelegate_t
{
};
struct SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct TransferrableData_tE4092BB2D19869881CCCD6B9B3E54FDC904B3197 
{
	FixedList64Bytes_1_t137BDA0D26652E438404CA31731069295DAC8E1C ___m_RawAddressContainer;
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
struct U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields
{
	U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* ___U3CU3E9;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* ___U3CU3E9__10_0;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* ___U3CU3E9__10_1;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* ___U3CU3E9__10_2;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* ___U3CU3E9__10_3;
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
struct EmptyArray_1_t5058CECA8099AD79767245351D26A5CB48C84746_StaticFields
{
	UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ___Value;
};
struct EmptyArray_1_t47AB7FAF9E162BBE81FCF7964F3209ECF415B0A4_StaticFields
{
	UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ___Value;
};
struct EmptyArray_1_t410AE8CFE5DA7B6BD5DA6669225E54549802E603_StaticFields
{
	UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* ___Value;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C_StaticFields
{
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* ___s_emptyArray;
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
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137  : public RuntimeArray
{
	ALIGN_FIELD (8) SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* m_Items[1];

	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
struct UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 m_Items[1];

	inline UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 m_Items[1];

	inline UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB m_Items[1];

	inline UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB value)
	{
		m_Items[index] = value;
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_fshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C (ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_destination, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F (ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_destination, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7 (ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_destination, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298 (ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_destination, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018 (ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_destination, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1 (ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_destination, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25 (ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_destination, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602 (ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_destination, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880 (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_destination, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m93E4FED2707AE3A8DD40F47B3166D6DC9212B3E1 (Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___0_destination, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* Array_Empty_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m7AFB8836C09DB8ED329614A1BC844AB4204E9557_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFDBEBB20A191516170E90D11FC9A037266CE2078_inline (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_mC1E4A42FCB2DEE71916523FFA2786E1A528DB811 (Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___0_destination, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* Array_Empty_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_m40657B5BE432C571329372CFB2E22223CA589563_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD980D71272460B0567A3773AF344FE4B6EC41EE9_inline (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05_gshared (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_destination, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_gshared_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197 (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_destination, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32 (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_destination, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2 (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_destination, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_destination, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_destination, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0 (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_destination, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_destination, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645 (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_destination, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724 (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_destination, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_destination, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543 (UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___0_destination, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* Array_Empty_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_m38077BA7106C32737B0A147A292DAA166A65A743_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9D5FDF8706092E4A0C75BF1002102EDB1776DEED_inline (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2 (UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___0_destination, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* Array_Empty_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m2559F4EE41A1BC5F7F6D91695D46A1FFB8292C19_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9036D3AF3E5DC7C42EB4A45230668F9C2F8C0D1E_inline (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB_m12DF3FA9D7727285D808AAECE8E2786E166C62EC (UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___0_destination, UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* Array_Empty_TisUnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB_m198A5A706220D5563451F5718452BA9A56A72461_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m707396BBF13E35FD489C7B2BF5D9BFBCD343BF6B_inline (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* ___0_array, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared)(__this, method);
}
inline void Enumerator_Dispose_m928A92DBC85A23CCAEDE32082D8964C44D495578 (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04*, const RuntimeMethod*))Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_fshared)(__this, method);
}
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared)(__this, ___0_item, method);
}
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
inline bool HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___0_b, uint64_t ___1_byteLength, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C (ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_destination, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3*, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F (ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_destination, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E*, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7 (ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_destination, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389*, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298 (ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_destination, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801*, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018 (ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_destination, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0*, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1 (ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_destination, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6*, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25 (ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_destination, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2*, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602 (ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_destination, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2*, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mFAB3C81B4C721D97D620490285A98D10429F2C64_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880 (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_destination, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m404C8D000CBA5F757D0982610F73FE084C81D208_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435*, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m8209849831B18D330C2C09547CD0B51428C80BB6_inline (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m93E4FED2707AE3A8DD40F47B3166D6DC9212B3E1 (Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___0_destination, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_mE001F295981C3C0ED5A3A305D8BCB200E2E808CC_inline (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970*, Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* Array_Empty_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m7AFB8836C09DB8ED329614A1BC844AB4204E9557_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFDBEBB20A191516170E90D11FC9A037266CE2078_inline (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m8037C084812257D2D9BB26DBCB121D4A7DEE8EEF_inline (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_mC1E4A42FCB2DEE71916523FFA2786E1A528DB811 (Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___0_destination, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m1C7F454F11448128528682F91972DF577FF39F85_inline (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A*, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* Array_Empty_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_m40657B5BE432C571329372CFB2E22223CA589563_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD980D71272460B0567A3773AF344FE4B6EC41EE9_inline (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430 (intptr_t* ___0_ip, uint64_t ___1_pointerSizeLength, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m70ECF63AA57B2B62F767D7B9290E6F6FD35B8E9E_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05 (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_destination, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
inline void Span_1__ctor_m6155FEFF9D1ED3BEFB59AD09C85726773DDF93B8_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_inline (const RuntimeMethod* method)
{
	return ((  HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* (*) (const RuntimeMethod*))Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_gshared_inline)(method);
}
inline void Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575*, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*, const RuntimeMethod*))Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mCBA967D766B41C6F7A5A958282339CC12C808833_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197 (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_destination, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m6F9AD212C5B66737445B1DF6C4F0CA7389714683_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428*, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m764553AEFD6BC88DF9ACBDB153A1B2F390F345EA_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8*, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mAE734F1E7D866942E70763D9232D006153CC93C8_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32 (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_destination, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m75C44EF3448A75BC5A7F2F55234E5942B61EC136_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A*, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m757FB90F888A97214E70C7D7DB66DCBB57ED9317_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2 (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_destination, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_mC7F51584BCC29D5FFC34B030A66E3BD7BB3CC1CF_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176*, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m9A18653FCB90AB3ACEBA696165B559FB2BC04AD7_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_destination, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_mDE271D9C61A54E84DF1147AC9CB9CD0C7DD5EC49_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB*, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m64759923EC787AC67D237C126B1F9912A0757B25_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_destination, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m8999409384FA9CB77163485B0CA6E8E661F8A5A0_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3*, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m25AA5DB60DDFA74CDC6FC67BCE440F807F40C824_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0 (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_destination, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m0AFDAF2851C62510441729AD03DDAD3F885CE919_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506*, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mFD0E4725CBEC468524ED6C42354367A9A7359B95_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m6C79FDD9CF4874F31512B09FA549A87AE1BDCB7B_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298*, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m796AE228F2062910CC25672EFEBF8E6F196B79BB_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_destination, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m5226151E7563D0A66ED571261D440B586FFCDD2F_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034*, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mEF91E66E45055A28639FAA49F9338605E2E05F7C_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645 (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_destination, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m7AA4D2DF6CB6D0B400BBDD79DE188410C9010D38_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7*, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mB346D5ACE2098245EF5F8BDB45CD7299937039AA_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724 (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_destination, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m5651C53E50085A171A2D1AD856B133BE630338A0_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6*, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m28C5FEE9DBE03CF72CF72C3E0CC494D3A9E9C233_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_destination, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m35E566097D06C4ACC15E14F8D61686EAACCDE086_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381*, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m9BA78DAEE8653BAD2B9ADFFE2B50A419DBA0E47E_inline (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543 (UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___0_destination, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m97768C55D46276EA599BBC99462DC71A42BD9569_inline (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05*, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* Array_Empty_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_m38077BA7106C32737B0A147A292DAA166A65A743_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9D5FDF8706092E4A0C75BF1002102EDB1776DEED_inline (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m45281C7FCFF81C6F91B1E8B0897FDFC91AB9AB2E_inline (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2 (UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___0_destination, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_mFD1291B45D62B1A9256F47E2C05D30FC8782CDF8_inline (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB*, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* Array_Empty_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m2559F4EE41A1BC5F7F6D91695D46A1FFB8292C19_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9036D3AF3E5DC7C42EB4A45230668F9C2F8C0D1E_inline (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ___0_array, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mA59EA29AF3DD0FC655679A6085EE47B82CF64D41_inline (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB_m12DF3FA9D7727285D808AAECE8E2786E166C62EC (UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___0_destination, UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m5895771A737A08062EAA7802D67B197A3FEB0E82_inline (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32*, UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* Array_Empty_TisUnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB_m198A5A706220D5563451F5718452BA9A56A72461_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m707396BBF13E35FD489C7B2BF5D9BFBCD343BF6B_inline (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* ___0_array, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 63510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSubsystemGroup_2_get_Frozen_mB70A61B14C8E51064385759618692E2A8DE747D1_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_InitDelegates;
		return (bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 63511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_RegisterSubsystem_m623E4ED8B163C9FDB1A8E97B5E278099BE27C2C6_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, String_t* ___0_name, Il2CppFullySharedGenericAny ___1_initDelegate, Il2CppFullySharedGenericAny ___2_cleanupDelegate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_dependencies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	//<source_info:<no-source>:1>
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_0 = NULL;
	Il2CppFullySharedGenericAny G_B6_1 = alloca(SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	memset(G_B6_1, 0, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	Il2CppFullySharedGenericAny G_B6_2 = alloca(SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	memset(G_B6_2, 0, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	String_t* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* G_B6_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_0 = NULL;
	Il2CppFullySharedGenericAny G_B5_1 = alloca(SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	memset(G_B5_1, 0, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	Il2CppFullySharedGenericAny G_B5_2 = alloca(SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	memset(G_B5_2, 0, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* G_B5_5 = NULL;
	{
		bool L_0;
		L_0 = ((  bool (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral920B6B05D1EF9E61AEC546EDC66550B870075C4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_2 = __this->___m_Subsystems;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), L_2, L_3);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_5 = ___0_name;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B31AB38360ECF9683ADAB607974B916C9663192)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_8 = __this->___m_Subsystems;
		String_t* L_9 = ___0_name;
		String_t* L_10 = ___0_name;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_initDelegate : &___1_initDelegate), SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___2_cleanupDelegate : &___2_cleanupDelegate), SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___3_dependencies;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		if (L_14)
		{
			G_B6_0 = L_14;
			il2cpp_codegen_memcpy(G_B6_1, L_12, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
			il2cpp_codegen_memcpy(G_B6_2, L_11, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
			G_B6_3 = L_10;
			G_B6_4 = L_9;
			G_B6_5 = L_8;
			goto IL_004c;
		}
		G_B5_0 = L_14;
		il2cpp_codegen_memcpy(G_B5_1, L_12, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
		il2cpp_codegen_memcpy(G_B5_2, L_11, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
		G_B5_3 = L_10;
		G_B5_4 = L_9;
		G_B5_5 = L_8;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		G_B6_0 = L_15;
		il2cpp_codegen_memcpy(G_B6_1, G_B5_1, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
		il2cpp_codegen_memcpy(G_B6_2, G_B5_2, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
		G_B6_5 = G_B5_5;
	}

IL_004c:
	{
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_16 = (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		InvokerActionInvoker4< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_16, G_B6_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? G_B6_2: *(void**)G_B6_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? G_B6_1: *(void**)G_B6_1), G_B6_0);
		NullCheck(G_B6_5);
		InvokerActionInvoker2< String_t*, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), G_B6_5, G_B6_4, L_16);
		return;
	}
}
// Method Definition Index: 63512
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SortedSubsystemGroup_2_get_SortedInitCallbacks_m79DB0BEF575C22B876AAFA3CE9D2FD04F698CB33_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_InitDelegates;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_InitDelegates;
		return L_1;
	}
}
// Method Definition Index: 63513
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SortedSubsystemGroup_2_get_SortedCleanupCallbacks_mF8275ACDA283F7AD879E7D40CD8E7AE607AADCB3_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_CleanupDelegates;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_CleanupDelegates;
		return L_1;
	}
}
// Method Definition Index: 63514
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_SortAndFreeze_m1FCBB2ED33FA5A550ACD53F361221A8515D86886_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit);
	//<source_info:<no-source>:1>
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* V_0 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B2_0 = NULL;
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* G_B2_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B2_2 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B1_0 = NULL;
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* G_B1_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B1_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B4_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B3_2 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B6_2 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B5_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B8_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B7_2 = NULL;
	{
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_0;
		L_0 = ((  SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_0;
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_1 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_2 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_0;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0028;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_4 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_5 = (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		((  void (*) (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_6 = L_5;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_0), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0028:
	{
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))((RuntimeObject*)G_B2_1, G_B2_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_8 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_1;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_9 = L_8;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			G_B4_2 = G_B2_2;
			goto IL_004c;
		}
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		G_B3_2 = G_B2_2;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_10 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_11 = (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
		((  void (*) (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_11, (RuntimeObject*)L_10, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), NULL);
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_12 = L_11;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_1), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_004c:
	{
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(G_B4_1, G_B4_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14;
		L_14 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		NullCheck(G_B4_2);
		G_B4_2->___m_InitDelegates = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___m_InitDelegates), (void*)L_14);
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_15 = V_0;
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))((RuntimeObject*)L_15, NULL);
		RuntimeObject* L_17;
		L_17 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(L_16, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_18 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_2;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_19 = L_18;
		if (L_19)
		{
			G_B6_0 = L_19;
			G_B6_1 = L_17;
			G_B6_2 = __this;
			goto IL_0086;
		}
		G_B5_0 = L_19;
		G_B5_1 = L_17;
		G_B5_2 = __this;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_20 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_21 = (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		((  void (*) (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(L_21, (RuntimeObject*)L_20, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), NULL);
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_22 = L_21;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_2), (void*)L_22);
		G_B6_0 = L_22;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0086:
	{
		RuntimeObject* L_23;
		L_23 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(G_B6_1, G_B6_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_24 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_3;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_25 = L_24;
		if (L_25)
		{
			G_B8_0 = L_25;
			G_B8_1 = L_23;
			G_B8_2 = G_B6_2;
			goto IL_00aa;
		}
		G_B7_0 = L_25;
		G_B7_1 = L_23;
		G_B7_2 = G_B6_2;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_26 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_27 = (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		((  void (*) (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)))(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)), NULL);
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_28 = L_27;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_3), (void*)L_28);
		G_B8_0 = L_28;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_00aa:
	{
		RuntimeObject* L_29;
		L_29 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)))(G_B8_1, G_B8_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30;
		L_30 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_29, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		NullCheck(G_B8_2);
		G_B8_2->___m_CleanupDelegates = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___m_CleanupDelegates), (void*)L_30);
		return;
	}
}
// Method Definition Index: 63515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* SortedSubsystemGroup_2_TopologicalSort_m4EF1485E9F3D436AD318FFE4C3961A2F9ABF22D8_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_0 = NULL;
	List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* V_1 = NULL;
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_2 = NULL;
	Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* V_4 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_1 = (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27));
		((  void (*) (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_1 = L_1;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_2 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_2, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		V_2 = L_2;
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_3 = __this->___m_Subsystems;
		NullCheck(L_3);
		ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* L_4;
		L_4 = ((  ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* (*) (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		NullCheck(L_4);
		Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 L_5;
		L_5 = InvokerFuncInvoker0< Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), L_4);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				Enumerator_Dispose_m928A92DBC85A23CCAEDE32082D8964C44D495578((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0039_1;
			}

IL_0025_1:
			{
				SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_6;
				L_6 = InvokerFuncInvoker0< SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31), (&V_3));
				V_4 = L_6;
				SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_7 = V_4;
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = V_0;
				List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_9 = V_1;
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_10 = V_2;
				((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))(__this, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
			}

IL_0039_1:
			{
				bool L_11;
				L_11 = ((  bool (*) (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))((&V_3), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
				if (L_11)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0052;
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

IL_0052:
	{
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_12 = V_1;
		NullCheck(L_12);
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_13;
		L_13 = ((  SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* (*) (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35)))(L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return L_13;
	}
}
// Method Definition Index: 63516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_Visit_m357521131CFFCC13DD1F795FEB39EC17133A5A9B_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ___0_subsystem, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___1_visited, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* ___2_sorted, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___3_pendingDependencies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* V_3 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = ___1_visited;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_1 = ___0_subsystem;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_0, L_2, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = ___1_visited;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_5 = ___0_subsystem;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		NullCheck(L_4);
		bool L_7;
		L_7 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_4, L_6, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = ___3_pendingDependencies;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_9 = ___0_subsystem;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		NullCheck(L_8);
		bool L_11;
		L_11 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_8, L_10, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_12 = ___0_subsystem;
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)))(L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		V_0 = L_13;
		V_1 = 0;
		goto IL_009a;
	}

IL_0035:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_18 = __this->___m_Subsystems;
		String_t* L_19 = V_2;
		NullCheck(L_18);
		bool L_20;
		L_20 = InvokerFuncInvoker2< bool, String_t*, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38), L_18, L_19, (&V_3));
		if (L_20)
		{
			goto IL_0065;
		}
	}
	{
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_21 = ___0_subsystem;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		String_t* L_23 = V_2;
		String_t* L_24;
		L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral96DF4500E5408A7ED26D010DF5824289A767048E)), L_23, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0065:
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_26 = ___3_pendingDependencies;
		String_t* L_27 = V_2;
		NullCheck(L_26);
		bool L_28;
		L_28 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_26, L_27, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_008b;
		}
	}
	{
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_29 = ___0_subsystem;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_29, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		String_t* L_31 = V_2;
		String_t* L_32;
		L_32 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral575B4BE92F0D75E69C018C6AA4FBC530DDD4B595)), L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719)), L_31, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_33 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_008b:
	{
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_34 = V_3;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_35 = ___1_visited;
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_36 = ___2_sorted;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_37 = ___3_pendingDependencies;
		((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))(__this, L_34, L_35, L_36, L_37, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009a:
	{
		int32_t L_39 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_42 = ___3_pendingDependencies;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_43 = ___0_subsystem;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_43, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		NullCheck(L_42);
		bool L_45;
		L_45 = HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA(L_42, L_44, HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_46 = ___2_sorted;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_47 = ___0_subsystem;
		NullCheck(L_46);
		InvokerActionInvoker1< SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39), L_46, L_47);
		return;
	}
}
// Method Definition Index: 63517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2__ctor_m4971314A2748C765A98BF0C41A60B618A69F87B6_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_0 = (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40));
		((  void (*) (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		__this->___m_Subsystems = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystems), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
void SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206_Multicast(SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* currentDelegate = reinterpret_cast<SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206_OpenStatic(SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
// Method Definition Index: 9443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m96DB983F9AFF7705E7BE7235169719F05CAFBCEF (SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206_Multicast;
}
// Method Definition Index: 9444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206 (SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ___1_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_Multicast(SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* currentDelegate = reinterpret_cast<SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_OpenStatic(SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
// Method Definition Index: 9443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m005FD8E991161EFBD88B2290FB010B44764C1F8C_gshared (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_Multicast;
}
// Method Definition Index: 9444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_gshared (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* currentDelegate = reinterpret_cast<SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
// Method Definition Index: 9443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m52B80F2401AFC1EDA0C92BDEC3320FB33A9FEB85 (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast;
}
// Method Definition Index: 9444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 9443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_mDA3D51C491A1F13D8CC15EB34D552737FFAE68E4_fshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_closed_static;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
	}
	__this->___extra_arg = (intptr_t)il2cpp_codegen_delegate_invoke_multicast;
}
// Method Definition Index: 9444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_fshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	void* args[3];
	args[1] = (&___0_span);
	args[2] = ___1_arg;
	((InvokerMethod)(__this->___invoke_impl))((Il2CppMethodPointer)__this->___method_ptr, (const MethodInfo*)__this->___method, (RuntimeObject*)__this->___method_code, args+1, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>(L_3);
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mAE78CED8A7F80A5176ECBFCC018818AC6E4CE904 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_13;
		L_13 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>(L_12);
		int32_t L_14 = ___1_start;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_15;
		L_15 = il2cpp_unsafe_add<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,int32_t>(L_13, L_14, sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m55C55F93D8AF10CF269BD9A00A37CEB86BEEA3E8 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* Span_1_get_Item_mE286FCA60FE0B4DAF2DDF5FA21CAF4CBAEDADA7A (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE0E1920C90808D250022F090EC289C4386B0F5A9 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m63C456656628E779A8500F8CBBE1157BBA96EEA3 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m2973E1B9DDD06F47C08E63D2CEAD68C783105862 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mDAF2FDCB362C3BDA46F28FB98F38201FE8C81F36 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 Span_1_Slice_m9A401C53CEA77D05976939724AF49A4D248FE07E (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 Span_1_Slice_m3704114055D41FD2CD49E6568148C9AD15F28528 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Span_1_ToArray_m9868B14AC485494DDE053AEB7C0F88FD7AA7BD5D (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_3 = (ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E*)(ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mD6062D3D7805F692EF406774A839A30253F3CB73 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mA0B400852DF6D253C83D451048EAFF8B20BF5B50 (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 Span_1_op_Implicit_mDCAA72116DDE12BB276E84AE54C2E20B7DF4895F (ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ___0_array;
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>(L_3);
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6FCD3079647BFBE244F769CF3FAFBDA49A372172 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_13;
		L_13 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>(L_12);
		int32_t L_14 = ___1_start;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_15;
		L_15 = il2cpp_unsafe_add<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,int32_t>(L_13, L_14, sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m34FB394D94EAE8C621DB5ADAA2575CDFD24FC332 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* Span_1_get_Item_mBD303234A7E9B753184D757EC24A06FF04A8E5AE (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mC521241CDA15620D238576515F9BB45FEE425C97 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mC80A60121A9D2BAAEF45247B6B3C4CF623E83547 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m9269E77EE12D8EC5560B3365FB1719C7693C60F0 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m30CCED276E225BF8FD8AD50F2F743E677C7BBBF0 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E Span_1_Slice_m01F1F664A4746BAFB934A64802D98367C91A97B9 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E Span_1_Slice_m07C422D3B656A2BDE018D4219242753088B8F9A4 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Span_1_ToArray_mDB79A4A53BACAF323A00DD2D38DD3E9CF65463CF (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_3 = (ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85*)(ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m284F37151401DB45FA134AF8DA0F7CD0EC25C62B (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m271B76F16679472890726605D94206698FF54DD3 (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E Span_1_op_Implicit_mCC5DE035D560A0B712F0A504C62F932249494DA1 (ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ___0_array;
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>(L_3);
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mADE2AEBB7C3D2FBFF33E7E422E8203C832203E28 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_13;
		L_13 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>(L_12);
		int32_t L_14 = ___1_start;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_15;
		L_15 = il2cpp_unsafe_add<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,int32_t>(L_13, L_14, sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB139A873BA87F40A24427804F2F31C106E055EE4 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* Span_1_get_Item_m88F98C0E18FAB1D3BB592A3F3612B3F0A1189B76 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mF89623E796627913E0F0B5CFE1555DC09A916332 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m8A236A232CA205797669FAD508412B6752E7BC62 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m00D7FFF409DA079506FDDC7023F53CF492449325 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m4BFB824E24A3831CB21595359FB94FCF091A3957 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 Span_1_Slice_m993DC1FE369BC64665715FDE0BF9733E03EA1F87 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 Span_1_Slice_m74912E46EFB63B51BF31271491E8780B705957C5 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Span_1_ToArray_mBA5546049EB448632E503D3E34DCFE3499D306EF (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_3 = (ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F*)(ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mD9997FEB1175FCE7C1C672C8165A5564CD31362B (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mE94AE0685AEA474E6D500440FFB64FBD4F7F41C3 (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 Span_1_op_Implicit_mD40611EF95BD13FC5FC2C95625751F5B4E77449A (ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ___0_array;
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3 (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>(L_3);
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m4587ECB93C291373BD50F102CC858DFD82415B6A (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_13;
		L_13 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>(L_12);
		int32_t L_14 = ___1_start;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_15;
		L_15 = il2cpp_unsafe_add<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,int32_t>(L_13, L_14, sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA681DC9E059FDD25BA3A03DBC25F43DCE861B392 (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* Span_1_get_Item_m5E1E11AA5E8AF9C49950B23F8B5CCD12CFC81D0E (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mCEFC77AACCE118F65E7ED0D4E31A4CF89547C9D9 (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m42E9C7A600011495FD6F0B2010CAC2BE97A2532D (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mBD7A41436DC0CE7CE5976BE763BC4658F448C68F (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m84C896977355D1614F97685460F590C10A614E63 (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 Span_1_Slice_m1C3C2C4D5574AE1A20DB29F356034A05D3CE78F0 (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 Span_1_Slice_mAA339F7DDD4AEFA70643BC48EF0AA966F8BE46D5 (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Span_1_ToArray_mBA18ABF477FEF417A431B2637AD3B3CDC978B9F3 (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_3 = (ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257*)(ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m8A1BD62C36E76D7B416A9E664D3599FA48E6BAA4 (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m22461099C3CAE9B1208C2B904529469A33C6A930 (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 Span_1_op_Implicit_mBA0FA337777821BB38E7B269E5FE737CA64F41EF (ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ___0_array;
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>(L_3);
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7963C8C2BB2BDF5D2029232ACF1071D9B8D5F76D (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_13;
		L_13 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>(L_12);
		int32_t L_14 = ___1_start;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_15;
		L_15 = il2cpp_unsafe_add<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,int32_t>(L_13, L_14, sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1F8390129D136D7B2379294CDB3EC704E4B3B4DD (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* Span_1_get_Item_m3B4836296385C837101C67BD31972D40ACDA7783 (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m043D21F663F984E4CB70BDCA4065F892B29650FD (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m138241886D789A88F4F4672329A40B0985BCD44E (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFEB0E87463316F899F30419CEE901A94F9CFA415 (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m535501D0994F9BBFBAEEA6B74B3718BC28D19BB1 (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 Span_1_Slice_mE19FF3B85E362F4E50DFDBF637069A8A5388C3B7 (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 Span_1_Slice_m14E9331C4343A0F3D495CE5E4164395CAF06EF23 (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Span_1_ToArray_mF67339C4C3807F5EA8B10BE58A4D592D5E440BCF (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_3 = (ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD*)(ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m362660374890B1B609CD3ADCC5EE35A96C30FCC7 (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m917C4618E9A6507F538B967C56F88FE6A90295B6 (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 Span_1_op_Implicit_m20043CA32C568A371E32ADC2A53ABF534517AA28 (ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ___0_array;
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4 (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>(L_3);
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2C8DC4F59B93DC89880FB0CDC1ED0014EB9662BC (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_13;
		L_13 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>(L_12);
		int32_t L_14 = ___1_start;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_15;
		L_15 = il2cpp_unsafe_add<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,int32_t>(L_13, L_14, sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7622D193EC24E0C2F72015ADCD4D80DBC22B839C (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* Span_1_get_Item_m527D5C26342D9D634651F4255F5A190D32D3C6CF (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE971DE8F7FBC3FDABB91E590246095E5B2BF5959 (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA05AD0DC0F6AEA4A322CBFE97A0FAEBFEF029F41 (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m65A774F4891F26014FD264D92037DAC258E1726E (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mB2E6B63179C292CC46DF3E4408F76214E232F4B4 (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 Span_1_Slice_m1F1AF7380AC4E39426980C6B85066C0DA35056B5 (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 Span_1_Slice_m2AB4990B59A49C82593A4B79CE642219B361B312 (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Span_1_ToArray_m68E68AEF610408894D41450567BE6EF6633C16AA (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_3 = (ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13*)(ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m30F088F4385C9140B3EB71BBB1C10C824F6DB6EA (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m12CBECA3CA5D0BBFF6E4F1E50E4405E22CABDE05 (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 Span_1_op_Implicit_m19556EEEE335B5D124A4A4A3655220856DD730B0 (ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ___0_array;
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>(L_3);
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE202C0BF66D1B90557261BBF7E49AEBC563AEC0B (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_13;
		L_13 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>(L_12);
		int32_t L_14 = ___1_start;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_15;
		L_15 = il2cpp_unsafe_add<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,int32_t>(L_13, L_14, sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m84D64B79439718C114CD0BE716813179D3B40F5E (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* Span_1_get_Item_mDA105C9F226EE831CEDAAA87E26F6310F584ED76 (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDA677C68D19B00A3C7F1CB9958AEF42284468D94 (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m86690A98A08A4E02559D5C1C90221E02DD4E2073 (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mF6EE2638BC83053FD4927FC6196ED4898B8D6D04 (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m552B96DF329A7AD5B8D3776DE4F41513F5E4CB21 (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 Span_1_Slice_m383DBBEBFD0852D831DEAF09F5D4500733FBBA49 (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 Span_1_Slice_m106D95FE5B210303F185C478F7ED3F3354F73E17 (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Span_1_ToArray_m97EF347F61CB22662DAFCB4653CE499107C815CE (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_3 = (ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885*)(ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mF43D0A9F72ED6E90D0CB71E871A26469218072EE (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m15AF83111097C4CA3F5F0EF958D8D08C53318D2F (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 Span_1_op_Implicit_m0EC5F027065C715AECB362A17AD0D8ED44BE7019 (ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ___0_array;
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>(L_3);
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2A3D7278F00E3E54B872AC140EAF4E7B6B5F1819 (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_13;
		L_13 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>(L_12);
		int32_t L_14 = ___1_start;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_15;
		L_15 = il2cpp_unsafe_add<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,int32_t>(L_13, L_14, sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD747FC46BBD31A05E715646C2E425B372461A11C (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* Span_1_get_Item_mE7D311EE835A9DB090555D850FDE2B122E11578E (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6493B7BB5AC5F53438F14C4A85363AC34A378BB3 (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m4B48971A61380BDA06907037F673964707BFF86A (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mA25DCB18666DB601406F447CCB669117B54C9282 (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m72E8BA9B870F18FBF9F60E8ECEF2B6F4A9C0BF96 (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 Span_1_Slice_m47A4152F3B90B66A03656DC588C95B120A46AC32 (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 Span_1_Slice_mABCFD7CB0A6360832A85B773813448567CE013E2 (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Span_1_ToArray_m6FA877603F5C58FA6CF6C62B9922FDA63DE9533A (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_3 = (ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931*)(ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m763F899FACCE281C13F43298223A09D1ACAC3A35 (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m1E6DC5431A2D3458E075DF80E348E1C11FDE2F67 (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 Span_1_op_Implicit_m71065A14DC84B1B0A014243A394CC709B42B0B1A (ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ___0_array;
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		goto IL_0037;
	}

IL_0037:
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_3);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m765FCB0680C21585CA68C2AAF4134CAF0B0B8CDA (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_13;
		L_13 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_12);
		int32_t L_14 = ___1_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_15;
		L_15 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_13, L_14, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m91AC385C0D20CF2681930B42F725514728A692BC (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* Span_1_get_Item_m8E8969268E64F976EF39518F59AB065259D5C0DE (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m8AEAC2155626AE78035F937131FD538E199D4E91 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_0 = __this->____pointer;
		V_0 = L_0;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m63CD6C06EA07F5469BCDE5B322F5729ADE6B6E38 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mE7C2573E0029C270D75B0F4784C8F76BC6C48BFF (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mD618DB2C245429ACF8A75C832187D8B9C709356F (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 Span_1_Slice_m0F99DBF5F2310808011038A0623EE5E04A3B68D1 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m404C8D000CBA5F757D0982610F73FE084C81D208_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 Span_1_Slice_m402DB446506FEEE48F616D7E02810941135AC380 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m404C8D000CBA5F757D0982610F73FE084C81D208_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Span_1_ToArray_mAF807AFED1580F08F72F5B33920501D4B2379999 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_3 = (EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA*)(EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m18DE1E7CA6BC2FFED2F42746BCCE00B28E06B24F (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m551D600E13A9CFE41959D21D8C48791838F7EEEF (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 Span_1_op_Implicit_m33DF9CAF0F5D0B6F32BF23A4746C8E070387F42F (EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ___0_array;
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mFDBEBB20A191516170E90D11FC9A037266CE2078 (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC));
		goto IL_0037;
	}

IL_0037:
	{
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_4;
		L_4 = il2cpp_unsafe_as_ref<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC>(L_3);
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD8ED9616D71066FA6F6E86F372B13156C135EC2F (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_13;
		L_13 = il2cpp_unsafe_as_ref<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC>(L_12);
		int32_t L_14 = ___1_start;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_15;
		L_15 = il2cpp_unsafe_add<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC,int32_t>(L_13, L_14, sizeof(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC));
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m13B7A2C6F6FAD8314058E8E6EA2A9BD371AE852B (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* Span_1_get_Item_m8D295E3899DF2AB0F0E099830F2DD89475CE29D2 (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6240B03B77520BEDE954A4AF207B0FA887CA3510 (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_0 = __this->____pointer;
		V_0 = L_0;
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA4825372FBD717A42805D1FEB20FA58272915EAC (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m54B8707118983DB9DEA36C1458705C527E58ECD2 (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mDE074CFEF2A9447A2FC51423C6797D3AD9401BD9 (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 Span_1_Slice_m01560771DDD367DDFF7EF1CFABF363108E0D031B (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mE001F295981C3C0ED5A3A305D8BCB200E2E808CC_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 Span_1_Slice_mF76BA221540806732EAFB7CA349ACD13998CC3D9 (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mE001F295981C3C0ED5A3A305D8BCB200E2E808CC_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* Span_1_ToArray_m3835728C95C00D32BA6105540E5D97325B042B65 (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisHandle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC_m7AFB8836C09DB8ED329614A1BC844AB4204E9557_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_3 = (Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF*)(Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mE1DBDA98E5319DC52FA58A79DE65A411F40AA75C (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m74A4B9F1FFFA592501AE8355B39BA58350244A18 (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 Span_1_op_Implicit_mE4913EA6FF6F4FE02BA528F5F4645DE6EB419429 (Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_0 = ___0_array;
		Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mFDBEBB20A191516170E90D11FC9A037266CE2078_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD980D71272460B0567A3773AF344FE4B6EC41EE9 (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		goto IL_0037;
	}

IL_0037:
	{
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_4;
		L_4 = il2cpp_unsafe_as_ref<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF>(L_3);
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE66FD44C1F41DCF03B285790E8A38159A8697E3C (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_13;
		L_13 = il2cpp_unsafe_as_ref<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF>(L_12);
		int32_t L_14 = ___1_start;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_15;
		L_15 = il2cpp_unsafe_add<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF,int32_t>(L_13, L_14, sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE7366BC1D490E8493600CA769F1B1F4500E62FA1 (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* Span_1_get_Item_m32BBCF132AAF02D60EC2C551260A75A245383A35 (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m8853B68F8D62A0B9E5C4019AA103BC20038606E1 (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_0 = __this->____pointer;
		V_0 = L_0;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m5D92F76B59AA615D3F25720008B94AD813AA983A (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mE65554A980802D694644AB6D1DAAA8D56A48C7F1 (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m435F318E5F1B49D4206CEA4796C322341AA33C41 (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A Span_1_Slice_m5D5A6C0108912F7C9D61E5C16E6DED4E26E39F59 (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m1C7F454F11448128528682F91972DF577FF39F85_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A Span_1_Slice_mDEE06BAE6E79F61C7B5AAAFA4DCA0F39785F5B7B (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m1C7F454F11448128528682F91972DF577FF39F85_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* Span_1_ToArray_mC73BE694C1B4783635C3B54000663ACA6BF969FA (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisHandle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_m40657B5BE432C571329372CFB2E22223CA589563_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_3 = (Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA*)(Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mF0F3F590D24642998162B9418B2240B0212C96CE (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mCE143871332A289CE394BD55142E4BDA123D3C60 (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A Span_1_op_Implicit_mED1F94B04E171F0B99B3DB763612419278B46CB3 (Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_0 = ___0_array;
		Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD980D71272460B0567A3773AF344FE4B6EC41EE9_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9281853CEBD9A6003A40E179A340A790E331B575));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		goto IL_0037;
	}

IL_0037:
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_3);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m08360408C8B3B9666E867E387E979F7F15B465AC_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9281853CEBD9A6003A40E179A340A790E331B575));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_13;
		L_13 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_12);
		int32_t L_14 = ___1_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_15;
		L_15 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_13, L_14, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6F3BA031C5C2D8471B4D3CB5E554E2B4B7FA2954_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* Span_1_get_Item_m86E693DDFF462254F4C6DC492ED47261FA7D10D6_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDC78745117146595231057168D2FE11F2885F84C_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_0 = __this->____pointer;
		V_0 = L_0;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		intptr_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<intptr_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>();
		int32_t L_6;
		L_6 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)(L_5/L_6)),NULL));
		SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_7)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mF4EDEDD7BE5ACADC8FBF7BD8B17A2547C4990F14_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_destination, const RuntimeMethod* method) 
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
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFAF3AFA2C625E8A2C58B57A3A45DDA5A48B8DBA7_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_destination, const RuntimeMethod* method) 
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
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m8BFCFE2C513EA233A5823829446274762552CB57_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_10, L_13, NULL);
		return L_14;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 Span_1_Slice_mD970CA25323040A5DBCDF2A9EDEEE1CCA3A08A9B_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6155FEFF9D1ED3BEFB59AD09C85726773DDF93B8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 Span_1_Slice_m3F12F86E7D9B71FD13A3CC63C1BDE13C41313AA4_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6155FEFF9D1ED3BEFB59AD09C85726773DDF93B8_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Span_1_ToArray_mCF414B56D9F8FEC8E3F500EFBB7272DCF3CFF6C0_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_3 = (HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*)(HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_6, L_8, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_4;
	}
}
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m81DAC70E97EE5A77DFDB307A4115705555B181AC_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m547C83D126590FA3D5EBA6E0227BEAB3BC0686D4_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 Span_1_op_Implicit_m3C13024F2F0B9FEC8D2F3B3EB92C70E40E780F2F_gshared (HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ___0_array;
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		goto IL_0037;
	}

IL_0037:
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_3);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m52A3645F38CA8049D5985DFF9831EBB9604BC617 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_13;
		L_13 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_12);
		int32_t L_14 = ___1_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_15;
		L_15 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_13, L_14, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE34AF47CA1AEF88F324DB36E58EBCC83DF97B25D (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* Span_1_get_Item_mE96EC5B175A7C900958E79B54132B1CFE2BD4012 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m32A1E46B057FB6188C351016E6844798D3AAA35E (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_0 = __this->____pointer;
		V_0 = L_0;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m560497662D4E96B1B3A3FA76B1FE5560245240DB (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m4A70ADE735DF78F4862A31B9F120CF227AFE9D28 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mCB26AAAB3CD6F3F19C6964A94BF19D047D804749 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 Span_1_Slice_mC81FE88119F9DB7560AF0A0410944EFD9513BDA4 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6F9AD212C5B66737445B1DF6C4F0CA7389714683_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 Span_1_Slice_m1B4A62321477663C571B32972A406CA0BCB47B60 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6F9AD212C5B66737445B1DF6C4F0CA7389714683_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Span_1_ToArray_mBA64C5BA2AE3746C9D7DD4AEA0F955BDFDD21373 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_3 = (NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0*)(NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m3DF14EB1C77DB92F4AEF91C3F30A7CDBD5A409EC (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mCB6A8495FD2FC93E1AF0D0BE96724B3B41F1DD6B (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 Span_1_op_Implicit_mE95BBBA20715AAE237BDB5386108375A02F2818B (NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ___0_array;
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		goto IL_0037;
	}

IL_0037:
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_3);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC8E70D60C33F5FC7E1EAAC9F3A37C5FE37FEDF14 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_13;
		L_13 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_12);
		int32_t L_14 = ___1_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_15;
		L_15 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_13, L_14, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m93EC666905AFE7358AEA8B00C5E74BD9B022A97C (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* Span_1_get_Item_m3FA98F14F73E0ED771694C1F52968D5F01FD3F39 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDA0245EA87A6C895EC8FB84F5228EBEB74A1C7BC (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_0 = __this->____pointer;
		V_0 = L_0;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mC1169A2A7C0E4BD357661A55B140EF10EC25C5D4 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mCC90877220856C91553F4517E2286650781D13E4 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mA05759AA6B2489741B18990E6B52AF862DF3ABD4 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 Span_1_Slice_mFE8F9E3631646358417C73821E05E760F7D466D5 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m764553AEFD6BC88DF9ACBDB153A1B2F390F345EA_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 Span_1_Slice_m326EDB8A15D0CB3BE202BE86CCFFF36934F9E4CF (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m764553AEFD6BC88DF9ACBDB153A1B2F390F345EA_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Span_1_ToArray_m94A34B711250B4D635D2D9FDBDB6774D7A298D82 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_3 = (SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)(SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m3B40E6EB6E44517B9F6EFBE3E5C92DF157169055 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mF790494540820D9E4F21DB0EED7A61366582C4FD (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 Span_1_op_Implicit_m3532EC1A5C91E4AE0FB4EFA26A2FFF213279AD34 (SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_3);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mEB120F63D087165AB27CF9998D5AC1C20BF06E25 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_13, L_14, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCD760E76D1D60CE0C91D05CA08F85E9F47199601 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* Span_1_get_Item_mE59F157EA3C2A061068840E75C902BD2E4C06062 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6816B3283828B8F350B4323C441C70C4E3459726 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mF809E8C1C5A692BD8C019C762AE416FB10B9E7DC (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m869BAF8FA053DF64794436706B267873A623614D (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m6359F701CD51543C6A601C03C99CA288FE2634FB (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A Span_1_Slice_m82A22A6BF9C659698A52794685C855C14F82B5F7 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m75C44EF3448A75BC5A7F2F55234E5942B61EC136_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A Span_1_Slice_m25979DE05A978F880323B905794DE15D8FE6328E (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m75C44EF3448A75BC5A7F2F55234E5942B61EC136_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Span_1_ToArray_m0433E434C948C7486B1E02064A9A8D861ED49EB8 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_3 = (UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C*)(UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m29B87DCEF91003E93589A97104D36962288D6A32 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mEFC37120EDF5194C6F4DC4D9A520CC593D9FD6ED (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A Span_1_op_Implicit_m4ED63D3B7F6E43BFFDC5A0CEB3D3E9C4759856BC (UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ___0_array;
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_3);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3EAACC465F2728B3FCC097B9469A6C64BF3B9E8C (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC2DDBC7F1E4B1502E5E17A16F2F01C1C6F326A22 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* Span_1_get_Item_mBCD2C29CEC5F1D4514856B0AAD42D1E89B0B91D8 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m443DF86A389A626E83F7CA0A6165857F6258442C (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA6523702938C88C2EFB54A879F83529B0A8A69FC (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB44DCF9393E766A8A45F675625EA35E6C145D0AD (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mB4612DFCA3200E2A1534E408D3BB75FFDD61FC19 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 Span_1_Slice_m6685667D6B9F94BADBAA5985C96682F67D3BC11D (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC7F51584BCC29D5FFC34B030A66E3BD7BB3CC1CF_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 Span_1_Slice_mC6BE206F68B19C49044C5BAAF24C370C255BD70C (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC7F51584BCC29D5FFC34B030A66E3BD7BB3CC1CF_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Span_1_ToArray_mAAF470629CCF256E6649556B83C5220B03353D80 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_3 = (UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A*)(UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mEF401701143DE7BD63CEA1610B13C1F8E73D8871 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mFD62E46C0AAF57D3A594DFFF181972B37D860B76 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 Span_1_op_Implicit_m2D43EDAB4138CD3C27A34FD4B834EFD0D9356430 (UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ___0_array;
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_3);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m07A88B43B828D4D18F35C99D21396D45D954C68E (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA5A0BF5724450A9BDDFD382FFE25DBDE7F862180 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* Span_1_get_Item_mCF2043DA85E74A412B904F8DE43810CB8FD7E8B7 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE6270F4E9B1AB89BD2EBF7322F963ED199EE7C14 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m557F4422D0763106704F696E0CCF67C6A973899E (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB11D809DBAB321B85BC00358EA9B1F52BBC34B4A (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m1C727A965377D641FD1B1259751153C5177367A8 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB Span_1_Slice_m6F04677E01DFE3DA5458224D4182F47CB29773F6 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mDE271D9C61A54E84DF1147AC9CB9CD0C7DD5EC49_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB Span_1_Slice_m8A21E2C07ED55EE608C0BDE934F066EEDCD158F8 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mDE271D9C61A54E84DF1147AC9CB9CD0C7DD5EC49_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Span_1_ToArray_m1BD407B90493431BD682E3FDF4F788CFC181D4FC (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_3 = (UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B*)(UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mB07CCF4744D984F83A75FC2E232687736D7B2D0F (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m443329FC7B50D8FC3BD8AA8DCE57AAED68F34ACC (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB Span_1_op_Implicit_mD637169410FBFF42AB98D1F632560A627E7DDE53 (UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ___0_array;
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_3);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCFB55D0B65B28CE75479FD2A134B27656ECC0942 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6ADD331F0D92A3870D32BE1A7131D733CDCABE32 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* Span_1_get_Item_m23B3181B5A10E913A0BA14327C586AEC79239560 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m4A5A52C2A22AAD42249BDA3D20C4502C1E408DC9 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m3E3DD5F2EAEFF842AF476104A8A3F5310233FC1A (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m84DA35D8F1C9B4EDDD3E8742E1565D6BA1DA46B6 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m17AFE93C4FEDB4DCCEA0A11F7DE7861BCEB9132F (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 Span_1_Slice_mAEB6D2A76FD80238D94BFE1E661D77993C6947CA (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m8999409384FA9CB77163485B0CA6E8E661F8A5A0_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 Span_1_Slice_m421C7CA252D123CF803628EB5BBF3D6671D67709 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m8999409384FA9CB77163485B0CA6E8E661F8A5A0_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Span_1_ToArray_m926189B3634117CEB94039BA14B9826E6F014978 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_3 = (UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC*)(UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m92F4AECB665FB16515F9CA95FC3844FB561EB82C (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mFB8867308831A65DE86BED04484B21BFAD0F9660 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 Span_1_op_Implicit_mFAFC3CC51DDC4D0DF25F801AA859B608B5B32C24 (UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ___0_array;
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_3);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m4600F85579754891FAD58FAE38F6EE822B0BA6D5 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF6EAF5FC28EB6219AA09DF3755DA560BAF70D53A (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* Span_1_get_Item_m93D03F68F6583A141C969988B89A0E87624FB6A1 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mB0D3BE6A9C200D990BAA2338DAFA515047A034A9 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m937413E19EC9BDDF48E0A278EAED7692B88030FD (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mAD1A3BDD8A6980C2EDCAD424CCF2A8686E091CC3 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mAF55D74CCE1EF33A3042CFB18ACDBC86163A81B8 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 Span_1_Slice_mC13F579FEDB75708CC9AA630F2F615A1D98090E8 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m0AFDAF2851C62510441729AD03DDAD3F885CE919_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 Span_1_Slice_m5C314F2AC609C753A644364CEA160BB6562B9B7C (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m0AFDAF2851C62510441729AD03DDAD3F885CE919_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Span_1_ToArray_mD8D4A4F707FEDAA3C7CFD0F5AEDBEC3BDDDD0D6E (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_3 = (UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1*)(UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mE1049830D8BAC0AA27BDF774D42C39639A4EC6C1 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m86C158807C265E57FCDEF847BA75B782D5FB73D4 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 Span_1_op_Implicit_m52463DFE2B7FDCA3CF662D1DBFD055EEFA08CD7D (UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ___0_array;
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_3);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mAF1045013005353C5E4B019A07C8A8351FABD6DF (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m80BA689FBFEC7232D71296B875817FFE91763632 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* Span_1_get_Item_m9EBF959C5B6E53B21D02B051C49BAB381AC97ED6 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1A5EDBEDD5FDFB5CC99C271EA3DFE5A3FAAF0F13 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m966ADCD41107EA1A4C1E05007925917C542679B8 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m2AD106C32FD7F85941B40DC0D7293FB7B1FCCD2E (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m3BA4FB945922D4B4A251510A7C587E40757653DA (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 Span_1_Slice_mCA83584AB999DF0CB7A4560B9DB5DD660FB76365 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6C79FDD9CF4874F31512B09FA549A87AE1BDCB7B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 Span_1_Slice_mC9360F4AAB6E1C53AD165D7A2F284013F1D1A5D6 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6C79FDD9CF4874F31512B09FA549A87AE1BDCB7B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Span_1_ToArray_m7515C8C7E9738D790DE8384C47E6E3B3657F1A58 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_3 = (UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3*)(UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m50F5E19560069A015BD94846D98FBD2C60286A8B (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m34DE049BFA5AEFC6B523E5F6385E134C84C08770 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 Span_1_op_Implicit_mCD6AAEE2F9FF9FF00389CF2EF2A94F7452BA5B8A (UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ___0_array;
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_3);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5743CB5CE8BF7821A3C12F4D33CCDC2F79AEDBC4 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB5848FC89FF4FA4C840490F7B631C114712FDCEF (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* Span_1_get_Item_mB1CB402F28E73BD24387747491B1313432B9E926 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m3C92EA369D5849A1D4F66304AF3A6C3EA71917FC (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7DB365B4D4DC06FDC982C63D333EA2C686775234 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m82DE8940FF58AD1B0BBA0A7840AEFC4B2EB6BC8A (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mA208304745EC30E5DA111BB59BE441B468287495 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 Span_1_Slice_m09A5277285059A193F9FAAA0938413F396651742 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m5226151E7563D0A66ED571261D440B586FFCDD2F_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 Span_1_Slice_mA252F655049D5F4010FDEB61B3CDABFA9920E8A3 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m5226151E7563D0A66ED571261D440B586FFCDD2F_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Span_1_ToArray_m7D57138097F61B5BB72135219A89048D7B5D738A (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_3 = (UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6*)(UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m588E547E188D000EE81E81C20BE5236C9DCA2FE1 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m469AAB62A21E1B3ADADEF5753CBFFD1BDA88C547 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 Span_1_op_Implicit_m47E0D9DD43461FFDE2F8512B70088F324FA41E38 (UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ___0_array;
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_3);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2217586FA46E95239066E31BAEA80B7428DF97E4 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m86B90450AEECAC62E35ACB59CFC8E9725FC52FBD (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* Span_1_get_Item_m02648D5BFC1E18F28E93E9EC93092307E9667C4F (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m838A7E98430246C26C6083C6594571D9ECD5DE9E (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mCB7CBF4F54097610DD7E65CB47D45D86C42250ED (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mE2C99EFC1D088527613A152B85E6CEC2B89679AC (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mDB032014FDD0C4D4166F353A33DFBA9158BCBFD4 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 Span_1_Slice_m7B2ED9FA65B5EC296E3E7936F501CB25EC0C9A5B (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m7AA4D2DF6CB6D0B400BBDD79DE188410C9010D38_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 Span_1_Slice_m8B0215E2EBF985788BB6D0B2D15ACAC1DDDB0C59 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m7AA4D2DF6CB6D0B400BBDD79DE188410C9010D38_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Span_1_ToArray_m44AF167628E559E4683E5B0155808821B10A1ED0 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_3 = (UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8*)(UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m9227067ECC252360A23FB7ADF93574DAA2515BB3 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mCE754C4C383E5230F9257E91E1893489B778DEC6 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 Span_1_op_Implicit_mE19AC1282131147BD821FE0ABF1DD2509202C571 (UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ___0_array;
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_3);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mAB15C86FC76FA38665DCBC4288E89DAA705ED2CC (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC36B7168C49463F690CAA15E9E12C69665E48CC0 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* Span_1_get_Item_m690481E34FA1E8F653635F7801C3E901E709056E (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mD01E00136BAE0BEEB17B55ACBAE674FE400EBF13 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m9B3D55AB8FE56BC62F708B71F4BB99339F6D0BBE (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m363DBF1A3F3090E8C6B467E99BDC242526FF412E (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m1859E5835C5F9A3FC0576A2C908686C2A573BC24 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 Span_1_Slice_m82C46F92BD7DD431423FC0E2AD0568C9BC8E1CFA (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m5651C53E50085A171A2D1AD856B133BE630338A0_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 Span_1_Slice_m440CF563595FAC0BD7DE0D0BEB7E38BBDE78A8E1 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m5651C53E50085A171A2D1AD856B133BE630338A0_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Span_1_ToArray_m45EDBDE0E0DE926FC18D9136722082841F0DA15C (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_3 = (UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6*)(UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m68E7072A3882D69552B8836E89C9176EB5722871 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m92AC1F31E11EED5561A25DBAEB927D99F5E96814 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 Span_1_op_Implicit_mD8495AC74F4845EA707580BE42F60BCA1660FCC9 (UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ___0_array;
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_3);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m8438174C73ADB4EB54C6DAF0A9BF3B492578E71F (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m949C38ECF435BE7A0603891792356314B45422B7 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* Span_1_get_Item_mCCA3328CA077F08201A90E0B71D2F6FF51E5E49F (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mA6CC039E91CD79EB99BDD9C86EA5D0B17A6FFF19 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m60650BAE87F05458EDD2F64FAFB164FF828F3C64 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m86F13A2637A8C0738CD51237442005D2679A8F61 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 ___0_destination, const RuntimeMethod* method) 
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
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m59A1CCC412FF6CEF21304FD0380115D7B8931F29 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
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
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 Span_1_Slice_m1A1E5066AA843103D66061DF74B49734FE593520 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, int32_t ___0_start, const RuntimeMethod* method) 
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
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m35E566097D06C4ACC15E14F8D61686EAACCDE086_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 Span_1_Slice_m186E2207AA758E0E1C1A09F32A8379AEF62BA1A9 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
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
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m35E566097D06C4ACC15E14F8D61686EAACCDE086_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Span_1_ToArray_m3C1E72B3D590C2BCFCF00CC7CD0D69D2EC736ACE (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method) 
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
		L_1 = Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_3 = (UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD*)(UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
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
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m55A7A9F47699172834297CD001DCEEC83414DB8D (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m465E8FE22C3B730C8DB243F68F10AB9481CAC7D9 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 Span_1_op_Implicit_mE7E1A520B2ACB8728DFB246713096987C8134EFF (UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ___0_array;
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9D5FDF8706092E4A0C75BF1002102EDB1776DEED (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73>(L_3);
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m84A3C4D7494BEAE7ADF8A68006C592060D09EFFE (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6349D7986E040287F00F6E5042131CF83440236E (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73>((uint8_t*)L_1);
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* Span_1_get_Item_mB0F643310048F5325D4CD9359FB48035B0486408 (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
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
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		return L_5;
	}
}
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m5C2FB223D79C55AE66E1B9EDED7E9DEA980EEEC6 (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m3DDCDA79BDEE2BDEC5E567925261A0E59268A0B7 (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9BA78DAEE8653BAD2B9ADFFE2B50A419DBA0E47E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 L_2 = ___0_destination;
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m78B443D1223846E67FF2B972B6C773237EC2B5AF (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9BA78DAEE8653BAD2B9ADFFE2B50A419DBA0E47E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 L_2 = ___0_destination;
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_1));
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m456C7429558A820499DFF716EDC0BC394CA10AB9 (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 Span_1_Slice_m6C56CCF5C9B04CE8128057E5BAE802A1333AF9CB (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
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
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m97768C55D46276EA599BBC99462DC71A42BD9569_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 Span_1_Slice_mB58C348953E727DBFCA75AB9079034F1E1A3CC1E (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
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
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		int32_t L_9 = ___1_length;
		Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m97768C55D46276EA599BBC99462DC71A42BD9569_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* Span_1_ToArray_m7132DFDED3C59B9820F96E9B4C4C84B53F3080CA (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_m38077BA7106C32737B0A147A292DAA166A65A743_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_3 = (UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00*)(UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73>(L_5);
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m15CA5EB0ADE7CA23B896DB74CB3058438131B923 (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mB45ED20E14D8186576EE258D2F8E846149EBABE7 (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 Span_1_op_Implicit_mF1E81AF35D0FB3D2305EF0772EC95BFF4616FA6D (UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_0 = ___0_array;
		Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m9D5FDF8706092E4A0C75BF1002102EDB1776DEED_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9036D3AF3E5DC7C42EB4A45230668F9C2F8C0D1E (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516>(L_3);
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF619594AC9A673B83686EB24018B3DCC070125F2 (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE9AE0DDDAE662524389FA83EB20E08E166D88288 (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516>((uint8_t*)L_1);
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* Span_1_get_Item_m1320EDC7785D528669B5DF616731468C893329C9 (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
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
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		return L_5;
	}
}
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m407B92B14266CEFB510DBCE8107E9BF567DD8951 (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m6700E8A2745C17C2F64FC75C33F405AEA7EDA963 (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m45281C7FCFF81C6F91B1E8B0897FDFC91AB9AB2E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB L_2 = ___0_destination;
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mF30D6C5DA49FCCF5CCF9A8DA2C9DCDFD717D8A12 (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m45281C7FCFF81C6F91B1E8B0897FDFC91AB9AB2E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB L_2 = ___0_destination;
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_1));
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m0294565BBB00959955D26D26924BCA9DF3EC54BB (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB Span_1_Slice_mAE9E59E6CB898F3B692377C8AFA622CEAA4C1300 (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
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
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mFD1291B45D62B1A9256F47E2C05D30FC8782CDF8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB Span_1_Slice_mA2FAB0FEE7776FA0EED35CF40A848FAB12BC25F8 (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
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
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		int32_t L_9 = ___1_length;
		Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mFD1291B45D62B1A9256F47E2C05D30FC8782CDF8_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* Span_1_ToArray_m90E2AA013A3030F7A23DA58AEBAE03A8CC18CDFD (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m2559F4EE41A1BC5F7F6D91695D46A1FFB8292C19_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_3 = (UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB*)(UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516>(L_5);
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mBCDDB4CA402E35686E9BE47022E135955EEB662F (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m7C91E0E777365DC194485A20A7F132271FBA8BC0 (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB Span_1_op_Implicit_mC7D0E4A96CD9455E609E930DDAAFB7D790356033 (UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_0 = ___0_array;
		Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m9036D3AF3E5DC7C42EB4A45230668F9C2F8C0D1E_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m707396BBF13E35FD489C7B2BF5D9BFBCD343BF6B (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB>(L_3);
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2662DDD3630B216B1F29940D3D66C4842D23CD79 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB));
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5DF01C048DB130CDF73B464C79818E0BD2028109 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
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
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB>((uint8_t*)L_1);
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2009
// Method Definition Index: 2010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* Span_1_get_Item_m4159BCF26A3FE86962EAC3939D63887FE9F929FC (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 V_0;
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
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB));
		return L_5;
	}
}
// Method Definition Index: 2011
// Method Definition Index: 2012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE622794F60DFA0388DFEA949C65CFB89B6318378 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
// Method Definition Index: 2013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m31BDA40310EDF63378A30BC7D9FCB3ACF5025073 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mA59EA29AF3DD0FC655679A6085EE47B82CF64D41_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 L_2 = ___0_destination;
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB, (Il2CppByReference*)(&V_0));
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB_m12DF3FA9D7727285D808AAECE8E2786E166C62EC(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m51A430A525D59CF09F4D8BE5E3660AB7B465BFC7 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 ___0_destination, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mA59EA29AF3DD0FC655679A6085EE47B82CF64D41_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 L_2 = ___0_destination;
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB, (Il2CppByReference*)(&V_1));
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB_m12DF3FA9D7727285D808AAECE8E2786E166C62EC(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 2015
// Method Definition Index: 2016
// Method Definition Index: 2017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mB330763F25CE1DC1862D3A1E3065CC4BCBB5F886 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
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
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 2018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 Span_1_Slice_mA79DA46E189934D1C49794E7BE836C59313000AB (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 V_0;
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
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m5895771A737A08062EAA7802D67B197A3FEB0E82_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// Method Definition Index: 2019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 Span_1_Slice_mDD547C7ECF113860D61200ED5D5C6962021EF5F9 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 V_0;
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
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB));
		int32_t L_9 = ___1_length;
		Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m5895771A737A08062EAA7802D67B197A3FEB0E82_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* Span_1_ToArray_m0FE5C1B36842DBFCE4F978AE12D93C5F49BCFE84 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB_m198A5A706220D5563451F5718452BA9A56A72461_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_3 = (UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06*)(UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB>(L_5);
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB_m12DF3FA9D7727285D808AAECE8E2786E166C62EC(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 2021
// Method Definition Index: 2022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mF1F62E2A8ECAAEB99B19D8F698A7305B16077A98 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mC63D587794ED291A05B9563808D70F1C2AA7A869 (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 Span_1_op_Implicit_m031F142D58E5692C1768DFBCCEF2F9347F69A38C (UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_0 = ___0_array;
		Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m707396BBF13E35FD489C7B2BF5D9BFBCD343BF6B_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2025
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>(L_3);
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>(L_3);
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>(L_3);
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>(L_3);
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>(L_3);
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>(L_3);
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>(L_3);
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>(L_3);
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		goto IL_0037;
	}

IL_0037:
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_3);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFDBEBB20A191516170E90D11FC9A037266CE2078_inline (Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970* __this, Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCEAE4214025BE228D06B8F4F42D0D11C1A238970));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC));
		goto IL_0037;
	}

IL_0037:
	{
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC* L_4;
		L_4 = il2cpp_unsafe_as_ref<Handle_1_t6C3D9B4D43DA857F59545C824E9F9E60727C70EC>(L_3);
		ByReference_1_tF13E7B08F3EF8AE13F9345F165562DF769F10A67 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Handle_1U5BU5D_tEAE8FC76980432D460A62CE03BC2FE8B4C16DBCF* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD980D71272460B0567A3773AF344FE4B6EC41EE9_inline (Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A* __this, Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t250EE5EEE95F587CED5136DEE3091D5470194C1A));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		goto IL_0037;
	}

IL_0037:
	{
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_4;
		L_4 = il2cpp_unsafe_as_ref<Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF>(L_3);
		ByReference_1_tF5F16810AA27A9A91DF1FEF503770235BECB6A8B L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Handle_1U5BU5D_t8868F738042406A824BB405DDE93FDE6DD0C45CA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_gshared_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9281853CEBD9A6003A40E179A340A790E331B575));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		goto IL_0037;
	}

IL_0037:
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_3);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		goto IL_0037;
	}

IL_0037:
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_3);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		goto IL_0037;
	}

IL_0037:
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_3);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_3);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_3);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_3);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_3);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_3);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_3);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_3);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_3);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_3);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
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
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_3);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* Array_Empty_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_m38077BA7106C32737B0A147A292DAA166A65A743_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_0 = ((EmptyArray_1_t5058CECA8099AD79767245351D26A5CB48C84746_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9D5FDF8706092E4A0C75BF1002102EDB1776DEED_inline (Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05* __this, UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73>(L_3);
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* Array_Empty_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m2559F4EE41A1BC5F7F6D91695D46A1FFB8292C19_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_0 = ((EmptyArray_1_t47AB7FAF9E162BBE81FCF7964F3209ECF415B0A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9036D3AF3E5DC7C42EB4A45230668F9C2F8C0D1E_inline (Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB* __this, UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516>(L_3);
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 2716
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* Array_Empty_TisUnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB_m198A5A706220D5563451F5718452BA9A56A72461_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_0 = ((EmptyArray_1_t410AE8CFE5DA7B6BD5DA6669225E54549802E603_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2006
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m707396BBF13E35FD489C7B2BF5D9BFBCD343BF6B_inline (Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32* __this, UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t6BF1EBB3CB6E0BEE5E6E144F0324DFB047F18F32));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB>(L_3);
		ByReference_1_t9A5DCB50A02F4DA469C43B3E0FDD73D2663B7B82 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t6CAC8C8DBA8B49792EA525D6A221596C0985CC06* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
