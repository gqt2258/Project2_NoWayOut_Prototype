#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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

struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883;
struct Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578;
struct Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A;
struct Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA;
struct Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658;
struct EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3;
struct EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5;
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199;
struct ICollection_1_t9DC5E323A17493879663142650C7E7F28F054A20;
struct ICollection_1_t7C01DDD7CEFB91A6A8E394CCEDE9C33D769CEFE7;
struct ICollection_1_t1538615B8CEE675ECCEAFE8BA7690D82DD18F125;
struct ICollection_1_tB1B4E5C5F2A09018BFFF33895D877551D5A5A504;
struct IEnumerator_1_tC59CB14F57CD150C6992A89F8CC65D3BFFE66526;
struct IEnumerator_1_t448403DDC05D628B16D4CD6D8EF165F0E107472B;
struct IEnumerator_1_tE6FAA6331C564A8DAF1D87E63038FEE2953F6D4A;
struct IEnumerator_1_t1736F145E0BFB57EFBDC939CAC0820903E84C4DC;
struct IEnumerator_1_t1135742C0FC8D13CDEA98321AC4AB137712F9A9F;
struct IEqualityComparer_1_t862569E09B21465BF3E1BC8DBED14D85739199D8;
struct IEqualityComparer_1_t50DA659155C728030BF63DD00CF13A3EDB0A1CAE;
struct IEqualityComparer_1_t0245A747BBCC15163E67EAFE7C936727EE37C20B;
struct IEqualityComparer_1_t70B4AAA18830D58BB1710894036FB47010297104;
struct IEqualityComparer_1_t108077952846FC1EFB2A32FBC2B810B4206A538B;
struct IEqualityComparer_1_tC9ABF3D0CA43E60B65862983A56F4636626C69C3;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2;
struct KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9;
struct KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C;
struct KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9;
struct KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1;
struct KeyCollection_t28FA94D798683154019D389407AFEAD57389CA57;
struct KeyCollection_t0DE33B46F9C9378F95E9576EA68384EA741C88DA;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4;
struct Stack_1_t27BF66C1EF60140B55713EA795B1064F2DD2F5EA;
struct UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB;
struct ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754;
struct ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4;
struct ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0;
struct ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3;
struct ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16;
struct ValueCollection_tE510132A38D904B8EC4E98BD7E8FD8744CBFFF10;
struct ValueCollection_t9AD3DCFBED0F95738EEC66CECB200914A9D9905E;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9;
struct EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C;
struct EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8;
struct EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC;
struct EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B;
struct EntryU5BU5D_tCD48165EEA1ABE08E68B4558321C919ED8880630;
struct EntryU5BU5D_t19A7090EC277BA3E9B0EFB7AE45C7844976D1DE2;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71;
struct KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663;
struct KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E;
struct KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE;
struct KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9;
struct EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C;
struct EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8;
struct EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC;
struct EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B;
struct KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71;
struct KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663;
struct KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E;
struct KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE;
struct KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD  : public RuntimeObject
{
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DictionaryKeyCollectionDebugView_2_t11025E5862E2C4D0FD8923B7995FF3CA72AEC4B1  : public RuntimeObject
{
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_t6086817CC98620510D98FB742382358DA92C2D4C  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2* ____keys;
	ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9* ____keys;
	ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C* ____keys;
	ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* ____keys;
	ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1* ____keys;
	ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tECA510002AFF2F7309FEFDBD52922A22B7BEA245  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCD48165EEA1ABE08E68B4558321C919ED8880630* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t28FA94D798683154019D389407AFEAD57389CA57* ____keys;
	ValueCollection_tE510132A38D904B8EC4E98BD7E8FD8744CBFFF10* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t54C1839F4EE32A546D24F6AD598F3A048EE2AB9A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t19A7090EC277BA3E9B0EFB7AE45C7844976D1DE2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0DE33B46F9C9378F95E9576EA68384EA741C88DA* ____keys;
	ValueCollection_t9AD3DCFBED0F95738EEC66CECB200914A9D9905E* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658  : public RuntimeObject
{
};
struct EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3  : public RuntimeObject
{
};
struct EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5  : public RuntimeObject
{
};
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199  : public RuntimeObject
{
};
struct KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2  : public RuntimeObject
{
	Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* ____dictionary;
};
struct KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9  : public RuntimeObject
{
	Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* ____dictionary;
};
struct KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C  : public RuntimeObject
{
	Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* ____dictionary;
};
struct KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9  : public RuntimeObject
{
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ____dictionary;
};
struct KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1  : public RuntimeObject
{
	Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* ____dictionary;
};
struct ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4  : public RuntimeObject
{
	Stack_1_t27BF66C1EF60140B55713EA795B1064F2DD2F5EA* ___m_Stack;
	UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* ___m_ActionOnGet;
	UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* ___m_ActionOnRelease;
	bool ___m_CollectionCheck;
	int32_t ___U3CcountAllU3Ek__BackingField;
};
struct ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754  : public RuntimeObject
{
	Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* ____dictionary;
};
struct ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4  : public RuntimeObject
{
	Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* ____dictionary;
};
struct ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0  : public RuntimeObject
{
	Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* ____dictionary;
};
struct ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3  : public RuntimeObject
{
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ____dictionary;
};
struct ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16  : public RuntimeObject
{
	Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
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
struct Handle_1_t60B6B0B8BCE41E9402D7157A6201CC191E83E5E3 
{
	uint64_t ___Value;
};
struct Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 
{
	uint64_t ___Value;
};
struct Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF 
{
	uint64_t ___Value;
};
struct PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___m_ToReturn;
	ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* ___m_Pool;
};
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct Entry_t4D7286B3BC13C2911B092284802212F36AC5F401 
{
	int32_t ___hashCode;
	int32_t ___next;
	Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2 
{
	int32_t ___hashCode;
	int32_t ___next;
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___key;
	int32_t ___value;
};
struct Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 
{
	Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 
{
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___key;
	int32_t ___value;
};
struct KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C 
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___key;
	Il2CppSharedGenericObject* ___value;
};
struct ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___Item1;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___Item2;
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
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
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
struct Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC 
{
	int32_t ___hashCode;
	int32_t ___next;
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___key;
	PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___value;
};
struct Entry_tFFAB552450751427A4CC719868437AD752FB6E92 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0 
{
	Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B 
{
	Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78 
{
	Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 
{
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___key;
	PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___value;
};
struct KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 
{
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
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
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD 
{
	Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 
{
	Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB  : public MulticastDelegate_t
{
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD_StaticFields
{
	U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD* ___U3CU3E9;
};
struct DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields
{
	ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* ___s_Pool;
};
struct EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658_StaticFields
{
	EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* ___defaultComparer;
};
struct EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3_StaticFields
{
	EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* ___defaultComparer;
};
struct EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5_StaticFields
{
	EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* ___defaultComparer;
};
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51_StaticFields
{
	EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199_StaticFields
{
	EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Handle_1_t60B6B0B8BCE41E9402D7157A6201CC191E83E5E3_StaticFields
{
	Handle_1_t60B6B0B8BCE41E9402D7157A6201CC191E83E5E3 ___Invalid;
};
struct Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticFields
{
	Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___Invalid;
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
struct EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t4D7286B3BC13C2911B092284802212F36AC5F401 m_Items[1];

	inline Entry_t4D7286B3BC13C2911B092284802212F36AC5F401 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t4D7286B3BC13C2911B092284802212F36AC5F401 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t4D7286B3BC13C2911B092284802212F36AC5F401 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t4D7286B3BC13C2911B092284802212F36AC5F401 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 m_Items[1];

	inline KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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
struct EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2 m_Items[1];

	inline Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2 value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 m_Items[1];

	inline KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC m_Items[1];

	inline Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 m_Items[1];

	inline KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFFAB552450751427A4CC719868437AD752FB6E92 m_Items[1];

	inline Entry_tFFAB552450751427A4CC719868437AD752FB6E92 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFFAB552450751427A4CC719868437AD752FB6E92* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFFAB552450751427A4CC719868437AD752FB6E92 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_tFFAB552450751427A4CC719868437AD752FB6E92 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFFAB552450751427A4CC719868437AD752FB6E92* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFFAB552450751427A4CC719868437AD752FB6E92 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 m_Items[1];

	inline KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E m_Items[1];

	inline Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C m_Items[1];

	inline KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5325CEC4E1A2F2D1EBF3C2EBAE8FC2388B01A748_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mAD3283386AA39B80826F5BF99F47ED8D8988782D_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* EqualityComparer_1_get_Default_m1AE5384997F835E4C5466B6B2B86BE9560DDCE13_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m96B44BB7B29EC9AF6BB77DDC16B9518A5C4D066E_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mCE198A4DE418B8EBF07C59FCFCC1CDF00851E8E2_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_gshared_inline (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mAFEC1E24C1BE80F58DD2408F6C108BD2540B7256_gshared_inline (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m12DBB7E9DE71CD469D034F96907EB096111FE64E_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE26AB4C8A95C0892645E6659804304B3E1699192_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m003CA85743B2FD071145F92842E769A2C55ADCBB_gshared (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB1541EF978A06A2A10962CD1F35085BD2DA6234C_gshared (Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0* __this, Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m90091F561BEB959E198B7335A2FE946CC3109AE8_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Handle_1_GetHashCode_mAF864CE06875E10046E9B7B0F5B1B316D18546F5_fshared (Handle_1_t60B6B0B8BCE41E9402D7157A6201CC191E83E5E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCEF01E607D6A20ABE2C27BF536772EC43AB98B07_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4163560050BD9B09AC66858A84A4DFE17FF51733_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mABA04E1EEE41EA07DCA49EAB9AA7FA6E7D75BA7D_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m196ADBEFC46CCDE49E105F2CEE35333EFB65AC81 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7CF6B8343AF9B05F3B312E5E2FD188DC7C9C9FF9 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD452A47BE1C57829C08EBC6EF12FC5A8860D0D17 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mEAE6CF982060A9767F253ED2B30CE855427CFB17 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF KeyValuePair_2_get_Key_m439596F1629846F2A7506145DDCDF7708ACF6621_inline (KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m2FF41DEFC792515FBFDC6AE4533BEA47393BB483_inline (KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6E08F40018C66B63BB08D68489C66CD0032C7682 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m99C4E8257DD4BC602065D3E5CB402EE78B10B3C1 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m4250B4E57DD0E6B5CBD6B9C7C3E8D1464AA52EB3 (KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD4384161505A07C3579FC99A98EBB191AD5C978A (Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B* __this, Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7C39862E5CAFB522BF7475540F84735C2500C3FD (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6D86A7EB22695DA07549502397001B654C1710E (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m27EFA65A1FDEC356D75FD2B2A79F05E75C3FC161 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9479C0C59F724059C53CFCEA6F6E6984BCBC7FAB (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9F34F3A6996728D6EDC7B37F3F3D018265F7F38 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m30E4C9F4361AC978D7FFF4F5B8963B83683A35E2 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1DD7D262CD599A76502EB287186E6899D785E737 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7E2F02A90E77A197BB05E13AD479AE22A358B9A9 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF KeyValuePair_2_get_Key_m88567502A9386B23757AE743834112D30B7DD7A8_inline (KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 KeyValuePair_2_get_Value_m7A37AC32DA509C79BC2BDBBF5FFB598538075D98_inline (KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9A3922EA99841CAB14A9C9BA0784C3C7112EAB63 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* EqualityComparer_1_get_Default_mC46EE2E85148B46AF8D7A02245C3F74677C46E72_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C626C507F7BBB3CB9FD560D1B6B653FA88B6C5C (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m1334018D4D3F31F544642BC016400D0DEF8F0D90 (KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m622B7559673F73468DDA2BA1E80AED8BCF39ABCE (Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD* __this, Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF56EB9DDA6D11BA48A34FEFF65C2B8C927488D4C (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F09059FB7015A7E41A199F36DCFA1E1451402F3 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD8241F36448E379C042D3836261878EC0F274745 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778_m9259C4B19D883D9929942F4FFFA3DA74E25F82FA (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCC8A9CF805BFF311EC50FFB20359324B73795079 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_gshared_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_gshared_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295_gshared (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74_gshared (Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84* __this, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C (ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE6667B25D7B1092CD1D8084344CE4C23741F3C67_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6F854DE67C98DACDF06E591A4BE0BDCE1A9A6301_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m359EF56ADA4883DAA3A0DF74103F8CE3FA0FCDD0_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mD28618916570E74382EBC5031238EEB384DDB16D_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_gshared_inline (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mE848EA5C2CF1843D8A5D89CFCD8D643759374C7E_gshared_inline (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m03537965189C7E46344EB5B21FEA251453883907_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2598A56DB99B95A0264C5DE4F19ABEE8F6D87B1A_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mA4E28826B310ECF60D769760F8425AA3F32C98B5_gshared (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC725DA1F413695983C225CFA33899541311453B4_gshared (Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78* __this, Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE4C5AD97A61D2F3D1B03A6A2408119EEC6FF265B_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA15490FC135B82960989C3A4DC3E1DE429E58CBC_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m757217CA044AF4D0F708D019C9BD55A54BCAFE58_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCDC72AD994E3DAEFBFA2110F5E13D43751CE9D9B_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* EqualityComparer_1_CreateComparer_m490F6961D48A89FD8C8F74F6DDC2A214A5DC69F9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* EqualityComparer_1_CreateComparer_m463BF731A4F3741AFB84F0D736FBA4F60F715399 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* EqualityComparer_1_CreateComparer_mE97DF1F5401D3D2DD9F4A02D76FDBF96B5A0973A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_CreateComparer_mA52E4277838226FFABAEEB6001833A3AE12D11C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_CreateComparer_m98B8A4A80C7607630936A0CD427BF897A9F786C8 (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_m5325CEC4E1A2F2D1EBF3C2EBAE8FC2388B01A748 (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5325CEC4E1A2F2D1EBF3C2EBAE8FC2388B01A748_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_mAD3283386AA39B80826F5BF99F47ED8D8988782D (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mAD3283386AA39B80826F5BF99F47ED8D8988782D_gshared)(__this, ___0_capacity, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* EqualityComparer_1_get_Default_m1AE5384997F835E4C5466B6B2B86BE9560DDCE13_inline (const RuntimeMethod* method) ;
inline void KeyCollection__ctor_m0B7B8B77123F63781C9038EB050F468187FCBF4A (KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2* __this, Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2*, Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mBA5F0844782BEFCE1B7FBD957E146E7B8489ECBA (ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754* __this, Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754*, Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m96B44BB7B29EC9AF6BB77DDC16B9518A5C4D066E (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, const RuntimeMethod*))Dictionary_2_FindEntry_m96B44BB7B29EC9AF6BB77DDC16B9518A5C4D066E_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_mCE198A4DE418B8EBF07C59FCFCC1CDF00851E8E2 (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mCE198A4DE418B8EBF07C59FCFCC1CDF00851E8E2_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_inline (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* __this, const RuntimeMethod* method)
{
	return ((  Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 (*) (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347*, const RuntimeMethod*))KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mAFEC1E24C1BE80F58DD2408F6C108BD2540B7256_inline (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347*, const RuntimeMethod*))KeyValuePair_2_get_Value_mAFEC1E24C1BE80F58DD2408F6C108BD2540B7256_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m12DBB7E9DE71CD469D034F96907EB096111FE64E (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m12DBB7E9DE71CD469D034F96907EB096111FE64E_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mE26AB4C8A95C0892645E6659804304B3E1699192 (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, const RuntimeMethod*))Dictionary_2_Remove_mE26AB4C8A95C0892645E6659804304B3E1699192_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mE0723607B763AF5FA5B2CD29931E6F80BF54F896 (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m003CA85743B2FD071145F92842E769A2C55ADCBB (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347*, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m003CA85743B2FD071145F92842E769A2C55ADCBB_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mB1541EF978A06A2A10962CD1F35085BD2DA6234C (Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0* __this, Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0*, Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, int32_t, const RuntimeMethod*))Enumerator__ctor_mB1541EF978A06A2A10962CD1F35085BD2DA6234C_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m90091F561BEB959E198B7335A2FE946CC3109AE8 (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m90091F561BEB959E198B7335A2FE946CC3109AE8_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t Handle_1_GetHashCode_m56F354E020C6DE008CB2B696D86191755462BD97 (Handle_1_t78EA27F15D89081CB224A7229220EED408650D50* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Handle_1_t78EA27F15D89081CB224A7229220EED408650D50*, const RuntimeMethod*))Handle_1_GetHashCode_mAF864CE06875E10046E9B7B0F5B1B316D18546F5_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mCEF01E607D6A20ABE2C27BF536772EC43AB98B07 (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, const RuntimeMethod*))Dictionary_2_Resize_mCEF01E607D6A20ABE2C27BF536772EC43AB98B07_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m4163560050BD9B09AC66858A84A4DFE17FF51733 (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m4163560050BD9B09AC66858A84A4DFE17FF51733_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mABA04E1EEE41EA07DCA49EAB9AA7FA6E7D75BA7D (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883*, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_mABA04E1EEE41EA07DCA49EAB9AA7FA6E7D75BA7D_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m196ADBEFC46CCDE49E105F2CEE35333EFB65AC81 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7CF6B8343AF9B05F3B312E5E2FD188DC7C9C9FF9 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline (const RuntimeMethod* method) ;
inline void KeyCollection__ctor_m7C49F49D1E5D36BE0E737457943D7E4154CFB404 (KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9* __this, Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9*, Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mF9AB67030CBDBA965B44411C09E3F13F86E151B1 (ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4* __this, Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4*, Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD452A47BE1C57829C08EBC6EF12FC5A8860D0D17 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mEAE6CF982060A9767F253ED2B30CE855427CFB17 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF KeyValuePair_2_get_Key_m439596F1629846F2A7506145DDCDF7708ACF6621_inline (KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m2FF41DEFC792515FBFDC6AE4533BEA47393BB483_inline (KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6E08F40018C66B63BB08D68489C66CD0032C7682 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m99C4E8257DD4BC602065D3E5CB402EE78B10B3C1 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mD356AFE3B201D9BB1ACA90D6BA3E3EE298200A14 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m4250B4E57DD0E6B5CBD6B9C7C3E8D1464AA52EB3 (KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD4384161505A07C3579FC99A98EBB191AD5C978A (Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B* __this, Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7C39862E5CAFB522BF7475540F84735C2500C3FD (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
inline int32_t Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785 (Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF*, const RuntimeMethod*))Handle_1_GetHashCode_mAF864CE06875E10046E9B7B0F5B1B316D18546F5_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6D86A7EB22695DA07549502397001B654C1710E (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m27EFA65A1FDEC356D75FD2B2A79F05E75C3FC161 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9479C0C59F724059C53CFCEA6F6E6984BCBC7FAB (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9F34F3A6996728D6EDC7B37F3F3D018265F7F38 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m30E4C9F4361AC978D7FFF4F5B8963B83683A35E2 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void KeyCollection__ctor_mA47B524B4E82FF299F7E61A28202E0E3AD0B69F0 (KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C* __this, Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C*, Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mE6071AAFA0C7A506594F9B536357232DE2362E6B (ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0* __this, Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0*, Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1DD7D262CD599A76502EB287186E6899D785E737 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7E2F02A90E77A197BB05E13AD479AE22A358B9A9 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF KeyValuePair_2_get_Key_m88567502A9386B23757AE743834112D30B7DD7A8_inline (KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 KeyValuePair_2_get_Value_m7A37AC32DA509C79BC2BDBBF5FFB598538075D98_inline (KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9A3922EA99841CAB14A9C9BA0784C3C7112EAB63 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* EqualityComparer_1_get_Default_mC46EE2E85148B46AF8D7A02245C3F74677C46E72_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C626C507F7BBB3CB9FD560D1B6B653FA88B6C5C (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mB3E45DACAA461997AEED10DB5F9B46E75DDAA0CD (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m1334018D4D3F31F544642BC016400D0DEF8F0D90 (KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m622B7559673F73468DDA2BA1E80AED8BCF39ABCE (Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD* __this, Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF56EB9DDA6D11BA48A34FEFF65C2B8C927488D4C (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F09059FB7015A7E41A199F36DCFA1E1451402F3 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD8241F36448E379C042D3836261878EC0F274745 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778_m9259C4B19D883D9929942F4FFFA3DA74E25F82FA (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCC8A9CF805BFF311EC50FFB20359324B73795079 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624_gshared)(__this, ___0_capacity, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline (const RuntimeMethod* method) ;
inline void KeyCollection__ctor_mAEF553744A1793CB7F672575AE3068FA6E1B15AB (KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* __this, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9*, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mC03750B749463EFC7284DDAC2702598277B3E4E8 (ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* __this, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3*, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, const RuntimeMethod*))Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 (*) (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3*, const RuntimeMethod*))KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, const RuntimeMethod*))Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mA3809C26569628200F07EDDFE7C769ECA77EB3ED (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295 (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74 (Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84* __this, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84*, Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C (ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, const RuntimeMethod*))Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0 (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA*, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_mE6667B25D7B1092CD1D8084344CE4C23741F3C67 (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE6667B25D7B1092CD1D8084344CE4C23741F3C67_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m6F854DE67C98DACDF06E591A4BE0BDCE1A9A6301 (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m6F854DE67C98DACDF06E591A4BE0BDCE1A9A6301_gshared)(__this, ___0_capacity, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline (const RuntimeMethod* method) ;
inline void KeyCollection__ctor_m0C8B6E15C04D156A6DC704FF9A0DDD5F4BEC5648 (KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1* __this, Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1*, Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mB8445466984D3F2FC27542DFA7B2BE9CB15F48C2 (ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16* __this, Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16*, Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m359EF56ADA4883DAA3A0DF74103F8CE3FA0FCDD0 (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, const RuntimeMethod*))Dictionary_2_FindEntry_m359EF56ADA4883DAA3A0DF74103F8CE3FA0FCDD0_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mD28618916570E74382EBC5031238EEB384DDB16D (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mD28618916570E74382EBC5031238EEB384DDB16D_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_inline (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D (*) (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C*, const RuntimeMethod*))KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mE848EA5C2CF1843D8A5D89CFCD8D643759374C7E_inline (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C*, const RuntimeMethod*))KeyValuePair_2_get_Value_mE848EA5C2CF1843D8A5D89CFCD8D643759374C7E_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m03537965189C7E46344EB5B21FEA251453883907 (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m03537965189C7E46344EB5B21FEA251453883907_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m2598A56DB99B95A0264C5DE4F19ABEE8F6D87B1A (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, const RuntimeMethod*))Dictionary_2_Remove_m2598A56DB99B95A0264C5DE4F19ABEE8F6D87B1A_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m1EE9698B33BEFFAAB9BFD4A421AE2A601D0C7D61 (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mA4E28826B310ECF60D769760F8425AA3F32C98B5 (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mA4E28826B310ECF60D769760F8425AA3F32C98B5_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mC725DA1F413695983C225CFA33899541311453B4 (Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78* __this, Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78*, Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, int32_t, const RuntimeMethod*))Enumerator__ctor_mC725DA1F413695983C225CFA33899541311453B4_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mE4C5AD97A61D2F3D1B03A6A2408119EEC6FF265B (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mE4C5AD97A61D2F3D1B03A6A2408119EEC6FF265B_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mA15490FC135B82960989C3A4DC3E1DE429E58CBC (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, const RuntimeMethod*))Dictionary_2_Resize_mA15490FC135B82960989C3A4DC3E1DE429E58CBC_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m757217CA044AF4D0F708D019C9BD55A54BCAFE58 (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m757217CA044AF4D0F708D019C9BD55A54BCAFE58_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_set_Item_mCDC72AD994E3DAEFBFA2110F5E13D43751CE9D9B (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_mCDC72AD994E3DAEFBFA2110F5E13D43751CE9D9B_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* EqualityComparer_1_CreateComparer_m490F6961D48A89FD8C8F74F6DDC2A214A5DC69F9 (const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* EqualityComparer_1_CreateComparer_m463BF731A4F3741AFB84F0D736FBA4F60F715399 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* EqualityComparer_1_CreateComparer_mE97DF1F5401D3D2DD9F4A02D76FDBF96B5A0973A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_CreateComparer_mA52E4277838226FFABAEEB6001833A3AE12D11C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_CreateComparer_m98B8A4A80C7607630936A0CD427BF897A9F786C8 (const RuntimeMethod* method) ;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPool_2_Get_mEB0AE4A6875B6FF8955F907DA14A422892DD0003_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		NullCheck(L_0);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1;
		L_1 = InvokerFuncInvoker0< Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		return L_1;
	}
}
// Method Definition Index: 27680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 DictionaryPool_2_Get_mE67FD48FA0C54FD3B783CB3ED89BCBC4C4BB9E2A_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 L_2;
		L_2 = InvokerFuncInvoker1< PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 27681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPool_2_Release_mEE88BD2235C60774A51C490CE3550E97C48262B6_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_toRelease, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(DictionaryPool_2_t08056220DFADF3969DFA2CFB9CEAE6FC8D707676_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = ___0_toRelease;
		NullCheck(L_0);
		InvokerActionInvoker1< Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_0, L_1);
		return;
	}
}
// Method Definition Index: 27682
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPool_2__cctor_mDA7E85399F499BFD3ECCDFA845F7A6F19627B6C4_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t12171AE4C8145C70D97ABF478F6E34688B2EA070_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t12171AE4C8145C70D97ABF478F6E34688B2EA070_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD* L_0 = ((U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))->___U3CU3E9;
		UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* L_1 = (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		((  void (*) (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), NULL);
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_2 = (ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		((  void (*) (ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4*, UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_2, (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*)NULL, L_1, (bool)1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_Pool), (void*)L_2);
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
// Method Definition Index: 54319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryPropertyBag_2_get_InstantiationKind_m641573CD1323CD15A7F099323BA1B2546F063182_fshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (int32_t)(1);
	}
}
// Method Definition Index: 54320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPropertyBag_2_Instantiate_m7778199CDF045586687AB5A9F377D8FB3786C1E0_fshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_0;
	}
}
// Method Definition Index: 54321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_fshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))((KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
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
// Method Definition Index: 8786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m48696A12D9339FD82555B3A10BCF6512DBB7E4DC_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_m5325CEC4E1A2F2D1EBF3C2EBAE8FC2388B01A748(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFA01BEBBCA1F68436A8609FFEFF7A2DD87E6ED2C_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m5325CEC4E1A2F2D1EBF3C2EBAE8FC2388B01A748(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2FC25BAEB621BF4D53F605250E5F84D68DB13C5C_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m5325CEC4E1A2F2D1EBF3C2EBAE8FC2388B01A748(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5325CEC4E1A2F2D1EBF3C2EBAE8FC2388B01A748_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mAD3283386AA39B80826F5BF99F47ED8D8988782D(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_5;
		L_5 = EqualityComparer_1_get_Default_m1AE5384997F835E4C5466B6B2B86BE9560DDCE13_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 8790
// Method Definition Index: 8791
// Method Definition Index: 8792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2* Dictionary_2_get_Keys_m6F424EDF99B73022A3ED1D4F68094E1646CE36BC_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2* L_1 = (KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_m0B7B8B77123F63781C9038EB050F468187FCBF4A(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 8793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mCF4688B85BDD753BC2DB390D74437EA885025684_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2* L_1 = (KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_m0B7B8B77123F63781C9038EB050F468187FCBF4A(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t629378F4AA654AE5925BC8CB65293F2CD51C73E2* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754* Dictionary_2_get_Values_mA3530FC4EC2E85084DA56C0FC880679D96CB3D12_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754* L_1 = (ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		ValueCollection__ctor_mBA5F0844782BEFCE1B7FBD957E146E7B8489ECBA(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t86C6BD436EAE6462B566B5E5399210F0B5308754* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 8795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_mAD2408CAD40302C8A48F876D9D49C628B9359F93_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m96B44BB7B29EC9AF6BB77DDC16B9518A5C4D066E(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_6 = ___0_key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 8796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mABA04E1EEE41EA07DCA49EAB9AA7FA6E7D75BA7D_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mCE198A4DE418B8EBF07C59FCFCC1CDF00851E8E2(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m12DBB7E9DE71CD469D034F96907EB096111FE64E_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mCE198A4DE418B8EBF07C59FCFCC1CDF00851E8E2(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m557AB2BC7B7D2056BB1AF8053555329621BFF06B_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0;
		L_0 = KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mAFEC1E24C1BE80F58DD2408F6C108BD2540B7256_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m12DBB7E9DE71CD469D034F96907EB096111FE64E(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
// Method Definition Index: 8799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1A3BD1027BEDA27C5EDC36BBE928A69B072EA7E0_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0;
		L_0 = KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m96B44BB7B29EC9AF6BB77DDC16B9518A5C4D066E(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mAFEC1E24C1BE80F58DD2408F6C108BD2540B7256_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m5550A8F6361C1D3FB8C52F7842A85E6251C4D364_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0;
		L_0 = KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m96B44BB7B29EC9AF6BB77DDC16B9518A5C4D066E(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mAFEC1E24C1BE80F58DD2408F6C108BD2540B7256_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_9;
		L_9 = KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_mE26AB4C8A95C0892645E6659804304B3E1699192(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8801
// Method Definition Index: 8802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m435520D44FE1C677B0C95BF6641A9AC2E0B780EF_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m96B44BB7B29EC9AF6BB77DDC16B9518A5C4D066E(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 8803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m10E4D0F713E73125EDE0FFDEBD55419732C64447_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m90091F561BEB959E198B7335A2FE946CC3109AE8_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_0 = ___0_array;
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
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mE0723607B763AF5FA5B2CD29931E6F80BF54F896(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m003CA85743B2FD071145F92842E769A2C55ADCBB((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 8805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0 Dictionary_2_GetEnumerator_mBA2290F53986F980E18BC71950B53DD24C9042AC_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB1541EF978A06A2A10962CD1F35085BD2DA6234C((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 8806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB98D02F77CC5F6DFB60B3ED30065FC71B8B18F54_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB1541EF978A06A2A10962CD1F35085BD2DA6234C((&L_0), __this, 2, NULL);
		Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mBFAA10B2C0BF31A3F7BAEE550E96D563EBDE5B17_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_6;
		L_6 = EqualityComparer_1_get_Default_m1AE5384997F835E4C5466B6B2B86BE9560DDCE13_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mE0723607B763AF5FA5B2CD29931E6F80BF54F896(__this, NULL);
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_15 = (KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71*)(KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_16 = V_0;
		Dictionary_2_CopyTo_m90091F561BEB959E198B7335A2FE946CC3109AE8(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 8808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m96B44BB7B29EC9AF6BB77DDC16B9518A5C4D066E_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		CHECKED_LOCAL_INIT(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit,(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = Handle_1_GetHashCode_m56F354E020C6DE008CB2B696D86191755462BD97((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_21;
		L_21 = EqualityComparer_1_get_Default_m1AE5384997F835E4C5466B6B2B86BE9560DDCE13_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
// Method Definition Index: 8809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mAD3283386AA39B80826F5BF99F47ED8D8988782D_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_5 = (EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9*)(EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 8810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mCE198A4DE418B8EBF07C59FCFCC1CDF00851E8E2_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit);
	//<source_info:<no-source>:1>
	EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* V_10 = NULL;
	Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mAD3283386AA39B80826F5BF99F47ED8D8988782D(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		CHECKED_LOCAL_INIT(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit,(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_10;
		L_10 = Handle_1_GetHashCode_m56F354E020C6DE008CB2B696D86191755462BD97((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_26;
		L_26 = EqualityComparer_1_get_Default_m1AE5384997F835E4C5466B6B2B86BE9560DDCE13_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_37 = ___0_key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_65 = ___0_key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mCEF01E607D6A20ABE2C27BF536772EC43AB98B07(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_101 = V_10;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
// Method Definition Index: 8811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mA4AFDEAB123660C3D36A891D868CAABE9E2A2B5E_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mAD3283386AA39B80826F5BF99F47ED8D8988782D(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_21;
		L_21 = KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_24;
		L_24 = KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mAFEC1E24C1BE80F58DD2408F6C108BD2540B7256_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m12DBB7E9DE71CD469D034F96907EB096111FE64E(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 8812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCEF01E607D6A20ABE2C27BF536772EC43AB98B07_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m4163560050BD9B09AC66858A84A4DFE17FF51733(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		return;
	}
}
// Method Definition Index: 8813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4163560050BD9B09AC66858A84A4DFE17FF51733_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit);
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* V_1 = NULL;
	int32_t V_2 = 0;
	Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_3 = (EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9*)(EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_5 = __this->____entries;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50));
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50* L_17 = (Handle_1_t78EA27F15D89081CB224A7229220EED408650D50*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		CHECKED_LOCAL_INIT(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit,(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_18;
		L_18 = Handle_1_GetHashCode_m56F354E020C6DE008CB2B696D86191755462BD97(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 8814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE26AB4C8A95C0892645E6659804304B3E1699192_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		CHECKED_LOCAL_INIT(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit,(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4;
		L_4 = Handle_1_GetHashCode_m56F354E020C6DE008CB2B696D86191755462BD97((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_21;
		L_21 = EqualityComparer_1_get_Default_m1AE5384997F835E4C5466B6B2B86BE9560DDCE13_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_22 = V_4;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_23 = L_22->___key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_26 = V_4;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_27 = L_26->___key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m502BEDA240BBAEF72A21DFCAEC9A2817ED4D1673_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		CHECKED_LOCAL_INIT(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_StaticInit,(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4;
		L_4 = Handle_1_GetHashCode_m56F354E020C6DE008CB2B696D86191755462BD97((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_21;
		L_21 = EqualityComparer_1_get_Default_m1AE5384997F835E4C5466B6B2B86BE9560DDCE13_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_22 = V_4;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_23 = L_22->___key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_26 = V_4;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_27 = L_26->___key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_t4D7286B3BC13C2911B092284802212F36AC5F401* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 8816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0CA40362444114F40CA9064605829C489F3014C3_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m96B44BB7B29EC9AF6BB77DDC16B9518A5C4D066E(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 8817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mA1ECA456BD54C4B87B5FC974A196BA0E356199B1_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mCE198A4DE418B8EBF07C59FCFCC1CDF00851E8E2(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return L_2;
	}
}
// Method Definition Index: 8818
// Method Definition Index: 8819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mE47D7ED42CE8E5ADEBDAD9CE11C1632D7DD20913_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m90091F561BEB959E198B7335A2FE946CC3109AE8(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 8820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mD9D99F100438FD248708A7B174FEEC99BD36CB21_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* V_6 = NULL;
	int32_t V_7 = 0;
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
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mE0723607B763AF5FA5B2CD29931E6F80BF54F896(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8F432BF8AA411A30C5915B42281E872F7114BB71* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m90091F561BEB959E198B7335A2FE946CC3109AE8(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_28);
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m003CA85743B2FD071145F92842E769A2C55ADCBB((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 8821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mF83E38E63A6A9F779EE651E843CAAF08B5AB7F5E_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB1541EF978A06A2A10962CD1F35085BD2DA6234C((&L_0), __this, 2, NULL);
		Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m03C3B833DE2FCDDAA2F39BE7790EA9EDB782AC73_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t850E320A91A0D0D9BBC2FD8D0D8260A0E8DFC8C9* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mAD3283386AA39B80826F5BF99F47ED8D8988782D(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m4163560050BD9B09AC66858A84A4DFE17FF51733(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 8823
// Method Definition Index: 8824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB70F27675ED6931F36EBCB27BD6AB170DECB39C1_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Handle_1_t78EA27F15D89081CB224A7229220EED408650D50*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7))));
		}
		try
		{
			Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mABA04E1EEE41EA07DCA49EAB9AA7FA6E7D75BA7D(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 41)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 42)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 8825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m6F25359006F2017B635E0D2EE99C8469FBFD4757_gshared (Dictionary_2_t854848246C55619A0AF6873780FD5F2DCAD44883* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB1541EF978A06A2A10962CD1F35085BD2DA6234C((&L_0), __this, 1, NULL);
		Enumerator_tB69352C2DF1477211FA2A3B3FA618BADD0B8B7F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 8786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9784ED5FC5258ADF8EA76C242961DEF599C5B28 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_m196ADBEFC46CCDE49E105F2CEE35333EFB65AC81(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56D225FF22CBE8C6164DE1BEEB0F7E7F6701C291 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m196ADBEFC46CCDE49E105F2CEE35333EFB65AC81(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2B3893C2E225F921CD3E90AFA35D300AE19C9254 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m196ADBEFC46CCDE49E105F2CEE35333EFB65AC81(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m196ADBEFC46CCDE49E105F2CEE35333EFB65AC81 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7CF6B8343AF9B05F3B312E5E2FD188DC7C9C9FF9(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_5;
		L_5 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 8790
// Method Definition Index: 8791
// Method Definition Index: 8792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9* Dictionary_2_get_Keys_mF60DEFA1B6438DBA4BDD3C7C229C2F67AB78939D (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9* L_1 = (KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_m7C49F49D1E5D36BE0E737457943D7E4154CFB404(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 8793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mFE0031570611962AAFC70DF03FB876CF8D51C810 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9* L_1 = (KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_m7C49F49D1E5D36BE0E737457943D7E4154CFB404(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t4E78E12BCECAD100745C2DDC09157FC2AB393BA9* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 8794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4* Dictionary_2_get_Values_mEAD24B17211F029904C20F0909B1070E3618C3DE (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4* L_1 = (ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		ValueCollection__ctor_mF9AB67030CBDBA965B44411C09E3F13F86E151B1(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t83274A90EA4DACA9A6E25EE80311BC7789CBB2E4* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 8795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mE75EAA510B1500674E3535E7E5B10271657C01DA (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD452A47BE1C57829C08EBC6EF12FC5A8860D0D17(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_6 = ___0_key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 8796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9479C0C59F724059C53CFCEA6F6E6984BCBC7FAB (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mEAE6CF982060A9767F253ED2B30CE855427CFB17(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6E08F40018C66B63BB08D68489C66CD0032C7682 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mEAE6CF982060A9767F253ED2B30CE855427CFB17(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21DE106A54291EE7506AC669927641D62FEFDAE9 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0;
		L_0 = KeyValuePair_2_get_Key_m439596F1629846F2A7506145DDCDF7708ACF6621_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m2FF41DEFC792515FBFDC6AE4533BEA47393BB483_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m6E08F40018C66B63BB08D68489C66CD0032C7682(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
// Method Definition Index: 8799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD610993A9790C1984711D4D6DA332BD7D611BB1B (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0;
		L_0 = KeyValuePair_2_get_Key_m439596F1629846F2A7506145DDCDF7708ACF6621_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD452A47BE1C57829C08EBC6EF12FC5A8860D0D17(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m2FF41DEFC792515FBFDC6AE4533BEA47393BB483_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m193B3D3A1A068367189A5CFC589F43080FE997AC (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0;
		L_0 = KeyValuePair_2_get_Key_m439596F1629846F2A7506145DDCDF7708ACF6621_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD452A47BE1C57829C08EBC6EF12FC5A8860D0D17(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m2FF41DEFC792515FBFDC6AE4533BEA47393BB483_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_9;
		L_9 = KeyValuePair_2_get_Key_m439596F1629846F2A7506145DDCDF7708ACF6621_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m99C4E8257DD4BC602065D3E5CB402EE78B10B3C1(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8801
// Method Definition Index: 8802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE6C5AFB7B36A027EB2803D175DF1AEC7C1A2D315 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD452A47BE1C57829C08EBC6EF12FC5A8860D0D17(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 8803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m04321200437531091D5B3A317C8B73AA2EEA08BF (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7C39862E5CAFB522BF7475540F84735C2500C3FD (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_0 = ___0_array;
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
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mD356AFE3B201D9BB1ACA90D6BA3E3EE298200A14(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m4250B4E57DD0E6B5CBD6B9C7C3E8D1464AA52EB3((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 8805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B Dictionary_2_GetEnumerator_m9F380A9150B9F9EFF1077A59E7A65AA75217C051 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4384161505A07C3579FC99A98EBB191AD5C978A((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 8806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5F12356C84ABC042F336DE08474726C0C4BD21E9 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4384161505A07C3579FC99A98EBB191AD5C978A((&L_0), __this, 2, NULL);
		Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE3F753E8AFA6B1505D4ACD9ED240CE07F7C5D8E9 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_6;
		L_6 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mD356AFE3B201D9BB1ACA90D6BA3E3EE298200A14(__this, NULL);
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_15 = (KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663*)(KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_16 = V_0;
		Dictionary_2_CopyTo_m7C39862E5CAFB522BF7475540F84735C2500C3FD(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 8808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD452A47BE1C57829C08EBC6EF12FC5A8860D0D17 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_21;
		L_21 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
// Method Definition Index: 8809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7CF6B8343AF9B05F3B312E5E2FD188DC7C9C9FF9 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_5 = (EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C*)(EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 8810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mEAE6CF982060A9767F253ED2B30CE855427CFB17 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* V_10 = NULL;
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7CF6B8343AF9B05F3B312E5E2FD188DC7C9C9FF9(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_10;
		L_10 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_26;
		L_26 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_37 = ___0_key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_65 = ___0_key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mA6D86A7EB22695DA07549502397001B654C1710E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_101 = V_10;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_103 = V_10;
		int32_t L_104 = ___1_value;
		L_103->___value = L_104;
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
// Method Definition Index: 8811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m3870FCABE7FD64867A4F746A5B512068A2640903 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, __this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m7CF6B8343AF9B05F3B312E5E2FD188DC7C9C9FF9(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_21;
		L_21 = KeyValuePair_2_get_Key_m439596F1629846F2A7506145DDCDF7708ACF6621_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_24;
		L_24 = KeyValuePair_2_get_Key_m439596F1629846F2A7506145DDCDF7708ACF6621_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m2FF41DEFC792515FBFDC6AE4533BEA47393BB483_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m6E08F40018C66B63BB08D68489C66CD0032C7682(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, __this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 8812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6D86A7EB22695DA07549502397001B654C1710E (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m27EFA65A1FDEC356D75FD2B2A79F05E75C3FC161(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		return;
	}
}
// Method Definition Index: 8813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m27EFA65A1FDEC356D75FD2B2A79F05E75C3FC161 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* V_1 = NULL;
	int32_t V_2 = 0;
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_3 = (EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C*)(EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_5 = __this->____entries;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_17 = (Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_18;
		L_18 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 8814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m99C4E8257DD4BC602065D3E5CB402EE78B10B3C1 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4;
		L_4 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_21;
		L_21 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_22 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_23 = L_22->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_26 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_27 = L_26->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_42 = V_3;
		__this->____freeList = L_42;
		int32_t L_43 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_44, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_45 = V_3;
		V_2 = L_45;
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_46 = V_4;
		int32_t L_47 = L_46->___next;
		V_3 = L_47;
	}

IL_0142:
	{
		int32_t L_48 = V_3;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC717D4A3D7A162B8350E38D04BF449008223D954 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4;
		L_4 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_21;
		L_21 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_22 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_23 = L_22->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_26 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_27 = L_26->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		int32_t* L_39 = ___1_value;
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_40 = V_4;
		int32_t L_41 = L_40->___value;
		*(int32_t*)L_39 = L_41;
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t54C550914ECC69E811C208C1CA1D7897469E80C2* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_014f:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		int32_t* L_52 = ___1_value;
		il2cpp_codegen_initobj(L_52, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 8816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDB88A836A9E138F6B112A6F758B7DF234732C4FD (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD452A47BE1C57829C08EBC6EF12FC5A8860D0D17(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 8817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m0545FFA5BAB1878B6CFA6631A8B9BB17CB9205ED (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mEAE6CF982060A9767F253ED2B30CE855427CFB17(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return L_2;
	}
}
// Method Definition Index: 8818
// Method Definition Index: 8819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m83FBECA9CFF61065FE3509B97FA5F0E8DDEDF7AE (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m7C39862E5CAFB522BF7475540F84735C2500C3FD(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 8820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m783640DCA6D9797629DBC47E8F33DD9F39D897A9 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* V_6 = NULL;
	int32_t V_7 = 0;
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
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mD356AFE3B201D9BB1ACA90D6BA3E3EE298200A14(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t551EB1F8C086FE0B2AFE1C8BB979F8F64A8B4663* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m7C39862E5CAFB522BF7475540F84735C2500C3FD(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_28);
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m4250B4E57DD0E6B5CBD6B9C7C3E8D1464AA52EB3((&L_55), L_51, L_54, NULL);
			KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 8821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m62415726FEAA84E0DD1177834E367F309A32EC43 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4384161505A07C3579FC99A98EBB191AD5C978A((&L_0), __this, 2, NULL);
		Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mF30718E0E5BB3CD9BEA7DCC8D8D42D5E340BD02B (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tF287825D90A219763BC7142845238B0A9F07394C* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m7CF6B8343AF9B05F3B312E5E2FD188DC7C9C9FF9(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m27EFA65A1FDEC356D75FD2B2A79F05E75C3FC161(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 8823
// Method Definition Index: 8824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m4DBF0B479AC47A2E940D07FD469C709785BE173D (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7))));
		}
		try
		{
			Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m9479C0C59F724059C53CFCEA6F6E6984BCBC7FAB(__this, L_3, ((*(int32_t*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 41)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 42)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 8825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m06A2F031A7BB5DC99F2F0BE348C801132BE55FE7 (Dictionary_2_t2A8A5CCEF5D56C1B28F0BD6C7DD56F31ACABF578* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4384161505A07C3579FC99A98EBB191AD5C978A((&L_0), __this, 1, NULL);
		Enumerator_t8162094AC1440B081573E1E245F31EDB48A3209B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 8786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4A7F291F47B7C4A1DDC12A03938A38D2321A9C9A (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_mC9F34F3A6996728D6EDC7B37F3F3D018265F7F38(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD53AA9113D962D1BF7471458CF1599F71044E00E (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mC9F34F3A6996728D6EDC7B37F3F3D018265F7F38(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3AE4E8B8D8B3B75800E6C3D817C2086CD20B82E6 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mC9F34F3A6996728D6EDC7B37F3F3D018265F7F38(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9F34F3A6996728D6EDC7B37F3F3D018265F7F38 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m30E4C9F4361AC978D7FFF4F5B8963B83683A35E2(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_5;
		L_5 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 8790
// Method Definition Index: 8791
// Method Definition Index: 8792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C* Dictionary_2_get_Keys_mD1D1FF1D71C9DE5B35D9A117747519251882A314 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C* L_1 = (KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_mA47B524B4E82FF299F7E61A28202E0E3AD0B69F0(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 8793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mCE842ED92F8D03847BD4430BC5C14FE8911CEF4B (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C* L_1 = (KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_mA47B524B4E82FF299F7E61A28202E0E3AD0B69F0(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t4DFADF68A76BBEB3E173A33CDC68E792D2406F4C* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 8794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0* Dictionary_2_get_Values_m8D4EB76F851B0D6A535059CA4E4EF58FC70F9B98 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0* L_1 = (ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		ValueCollection__ctor_mE6071AAFA0C7A506594F9B536357232DE2362E6B(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tACC00F945F372335D958A0EA64141901CB5D6CA0* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 8795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 Dictionary_2_get_Item_mBC9AFF4F192688F22B934B7D6AE210213AC0B8F7 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1DD7D262CD599A76502EB287186E6899D785E737(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_6 = ___0_key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778));
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 8796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCC8A9CF805BFF311EC50FFB20359324B73795079 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7E2F02A90E77A197BB05E13AD479AE22A358B9A9(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9A3922EA99841CAB14A9C9BA0784C3C7112EAB63 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7E2F02A90E77A197BB05E13AD479AE22A358B9A9(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4729AC94A6088B2968F0690FA2013A6812B8612 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0;
		L_0 = KeyValuePair_2_get_Key_m88567502A9386B23757AE743834112D30B7DD7A8_inline((&___0_keyValuePair), NULL);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_1;
		L_1 = KeyValuePair_2_get_Value_m7A37AC32DA509C79BC2BDBBF5FFB598538075D98_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m9A3922EA99841CAB14A9C9BA0784C3C7112EAB63(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
// Method Definition Index: 8799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m74BE5FC6495498AB8E852D7B94AF5A072E81F3C2 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0;
		L_0 = KeyValuePair_2_get_Key_m88567502A9386B23757AE743834112D30B7DD7A8_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1DD7D262CD599A76502EB287186E6899D785E737(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* L_3;
		L_3 = EqualityComparer_1_get_Default_mC46EE2E85148B46AF8D7A02245C3F74677C46E72_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_7;
		L_7 = KeyValuePair_2_get_Value_m7A37AC32DA509C79BC2BDBBF5FFB598538075D98_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m685D8489346F88E1A457F9B34DB356C6F8790048 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0;
		L_0 = KeyValuePair_2_get_Key_m88567502A9386B23757AE743834112D30B7DD7A8_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1DD7D262CD599A76502EB287186E6899D785E737(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* L_3;
		L_3 = EqualityComparer_1_get_Default_mC46EE2E85148B46AF8D7A02245C3F74677C46E72_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_7;
		L_7 = KeyValuePair_2_get_Value_m7A37AC32DA509C79BC2BDBBF5FFB598538075D98_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_9;
		L_9 = KeyValuePair_2_get_Key_m88567502A9386B23757AE743834112D30B7DD7A8_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m5C626C507F7BBB3CB9FD560D1B6B653FA88B6C5C(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8801
// Method Definition Index: 8802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4C9FCA445827EFAABF219B649C93378CA418C006 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1DD7D262CD599A76502EB287186E6899D785E737(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 8803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m642CEBFA8122DB9EB30611D4C191027F5FBB988E (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* V_0 = NULL;
	int32_t V_1 = 0;
	PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* L_6;
		L_6 = EqualityComparer_1_get_Default_mC46EE2E85148B46AF8D7A02245C3F74677C46E72_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF56EB9DDA6D11BA48A34FEFF65C2B8C927488D4C (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_0 = ___0_array;
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
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mB3E45DACAA461997AEED10DB5F9B46E75DDAA0CD(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m1334018D4D3F31F544642BC016400D0DEF8F0D90((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 8805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD Dictionary_2_GetEnumerator_m900D8159985AF8CC8BD6BECE7F4EE19CC37F4F32 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m622B7559673F73468DDA2BA1E80AED8BCF39ABCE((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 8806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8614E88D106FFC62B070D0A4150F720BF2FFE3A1 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m622B7559673F73468DDA2BA1E80AED8BCF39ABCE((&L_0), __this, 2, NULL);
		Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m5CE53ECB891FFD44DEB6FE4FDE6FEF25A79BCB2C (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_6;
		L_6 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mB3E45DACAA461997AEED10DB5F9B46E75DDAA0CD(__this, NULL);
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_15 = (KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E*)(KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_16 = V_0;
		Dictionary_2_CopyTo_mF56EB9DDA6D11BA48A34FEFF65C2B8C927488D4C(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 8808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1DD7D262CD599A76502EB287186E6899D785E737 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_21;
		L_21 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
// Method Definition Index: 8809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m30E4C9F4361AC978D7FFF4F5B8963B83683A35E2 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_5 = (EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8*)(EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 8810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7E2F02A90E77A197BB05E13AD479AE22A358B9A9 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* V_10 = NULL;
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m30E4C9F4361AC978D7FFF4F5B8963B83683A35E2(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_10;
		L_10 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_26;
		L_26 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_37 = ___0_key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_65 = ___0_key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m3F09059FB7015A7E41A199F36DCFA1E1451402F3(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_101 = V_10;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_103 = V_10;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_104 = ___1_value;
		L_103->___value = L_104;
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
// Method Definition Index: 8811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m49D2870102C774041AF2F81DD105D2106BDDDAE1 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, __this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m30E4C9F4361AC978D7FFF4F5B8963B83683A35E2(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_21;
		L_21 = KeyValuePair_2_get_Key_m88567502A9386B23757AE743834112D30B7DD7A8_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_24;
		L_24 = KeyValuePair_2_get_Key_m88567502A9386B23757AE743834112D30B7DD7A8_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_27;
		L_27 = KeyValuePair_2_get_Value_m7A37AC32DA509C79BC2BDBBF5FFB598538075D98_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m9A3922EA99841CAB14A9C9BA0784C3C7112EAB63(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, __this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 8812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F09059FB7015A7E41A199F36DCFA1E1451402F3 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mD8241F36448E379C042D3836261878EC0F274745(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		return;
	}
}
// Method Definition Index: 8813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD8241F36448E379C042D3836261878EC0F274745 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* V_1 = NULL;
	int32_t V_2 = 0;
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_3 = (EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8*)(EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_5 = __this->____entries;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF));
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF* L_17 = (Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_18;
		L_18 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 8814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C626C507F7BBB3CB9FD560D1B6B653FA88B6C5C (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4;
		L_4 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_21;
		L_21 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_22 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_23 = L_22->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_26 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_27 = L_26->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_42 = V_3;
		__this->____freeList = L_42;
		int32_t L_43 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_44, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_45 = V_3;
		V_2 = L_45;
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_46 = V_4;
		int32_t L_47 = L_46->___next;
		V_3 = L_47;
	}

IL_0142:
	{
		int32_t L_48 = V_3;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mADE2440F63FBC146959D9ADECF0E10FEDA0E225F (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		CHECKED_LOCAL_INIT(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_StaticInit,(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_4;
		L_4 = Handle_1_GetHashCode_m00AA76C0280EB4BF0D1EAA4CC216C0A358838785((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_21;
		L_21 = EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_22 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_23 = L_22->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_26 = V_4;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_27 = L_26->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* L_39 = ___1_value;
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_40 = V_4;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_41 = L_40->___value;
		*(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778*)L_39 = L_41;
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t0DCBB0D1C3FEE17BFBC2E85596A98EE87EF7B0EC* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_014f:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* L_52 = ___1_value;
		il2cpp_codegen_initobj(L_52, sizeof(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778));
		return (bool)0;
	}
}
// Method Definition Index: 8816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m962D2119E0FF9D5A3CCC92FAF408F10DE0C095D7 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1DD7D262CD599A76502EB287186E6899D785E737(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* L_3 = ___1_value;
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778));
		return (bool)0;
	}
}
// Method Definition Index: 8817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m0DE3B48EE7FCC47D062C18CB8827BFFA1B3DD525 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF ___0_key, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = ___0_key;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7E2F02A90E77A197BB05E13AD479AE22A358B9A9(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return L_2;
	}
}
// Method Definition Index: 8818
// Method Definition Index: 8819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF787D6C9117C773843FD3DA3CDB94F9D441CA46D (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mF56EB9DDA6D11BA48A34FEFF65C2B8C927488D4C(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 8820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m70E08D6B2B62859E169C2C389DEECFC101A37228 (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* V_6 = NULL;
	int32_t V_7 = 0;
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
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mB3E45DACAA461997AEED10DB5F9B46E75DDAA0CD(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2CFAF90BB5D440983949554094DA545360A3071E* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mF56EB9DDA6D11BA48A34FEFF65C2B8C927488D4C(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_28);
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m1334018D4D3F31F544642BC016400D0DEF8F0D90((&L_55), L_51, L_54, NULL);
			KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 8821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8A962508C809A2844E34F8422675EF5CFE0DBF8B (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m622B7559673F73468DDA2BA1E80AED8BCF39ABCE((&L_0), __this, 2, NULL);
		Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mA6913BC64DC7435990DA1AC73FC18D85454D571C (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t0981EED4CD62B723A1E08D13510017E7CA33CDC8* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m30E4C9F4361AC978D7FFF4F5B8963B83683A35E2(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_mD8241F36448E379C042D3836261878EC0F274745(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 8823
// Method Definition Index: 8824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0E6C09B0C44E49EA495631B0D002B8340302F38A (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778_m9259C4B19D883D9929942F4FFFA3DA74E25F82FA(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7))));
		}
		try
		{
			Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mCC8A9CF805BFF311EC50FFB20359324B73795079(__this, L_3, ((*(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 41)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 42)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 8825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mBF4ECFF8AAB18EE4EA1EE4B2494765F00BB968EB (Dictionary_2_t5849F5B7879048D8019AD12A1471C48CEB9C4B3A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m622B7559673F73468DDA2BA1E80AED8BCF39ABCE((&L_0), __this, 1, NULL);
		Enumerator_t14551B0CCF5BF2364DB3720A296456BB22C84ECD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 8786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF7EE9B3C1F88ABD4FAF6DF5CF18CCC24FD1598E4_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA358128F8B3241363137A5E2C4A3FAB3B55AF5EB_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2D82D9EF66C6BB63DD5C8243C6948D728478CE29_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD28837C10402BC08B4D2706C7A4BEB03186700A7_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_5;
		L_5 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 8790
// Method Definition Index: 8791
// Method Definition Index: 8792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* Dictionary_2_get_Keys_m252A17215D266E7008BA17CC2C8F3F2A7B895847_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_1 = (KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_mAEF553744A1793CB7F672575AE3068FA6E1B15AB(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 8793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m39C4ADE91A5651C939D4A4297E6D944B6BE407D2_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_1 = (KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_mAEF553744A1793CB7F672575AE3068FA6E1B15AB(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA73A1DC23BE327EB409877F1C6B4A7283722E5F9* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* Dictionary_2_get_Values_mEA7F9A568798F678C6C85E9FE1C5824B3ECD640D_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_1 = (ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		ValueCollection__ctor_mC03750B749463EFC7284DDAC2702598277B3E4E8(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t45EA81962D4D8686FEA5ED98195F35170ACEE8B3* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 8795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_mE403A6AB66A327894DD9C5712BE4F5FF6194FAD4_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_6 = ___0_key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 8796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9B7C8B3113679DA4F593AD50BC9A9ABC43EE32E4_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0;
		L_0 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
// Method Definition Index: 8799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mF03EC825CD2A47C3D224AE41BFE3670892D192F2_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0;
		L_0 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mCC850DB64DE5F6E48BE2B8F8CDD34850FBE70C3D_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0;
		L_0 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_9;
		L_9 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8801
// Method Definition Index: 8802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5D6B3794541EF9B9F96A1DEE10C62143BBB366FB_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 8803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m562604FAB25A1D70534A2B81FCE08A9A6D6EBF86_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_0 = ___0_array;
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
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mA3809C26569628200F07EDDFE7C769ECA77EB3ED(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 8805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 Dictionary_2_GetEnumerator_mF5EAF3C93EE5DB6F55D9F5B8206C8F9CD5848C85_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 8806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m858DB354A19715E0FE9215763598A9B05471B660_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74((&L_0), __this, 2, NULL);
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m0BCE27D46EB8245FC47A30476154343F6981431F_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_6;
		L_6 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mA3809C26569628200F07EDDFE7C769ECA77EB3ED(__this, NULL);
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_15 = (KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*)(KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_16 = V_0;
		Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 8808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_21;
		L_21 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
// Method Definition Index: 8809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_5 = (EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC*)(EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 8810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFFAB552450751427A4CC719868437AD752FB6E92* V_10 = NULL;
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_26;
		L_26 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_37 = ___0_key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_65 = ___0_key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_101 = V_10;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
// Method Definition Index: 8811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m2D415A06A0F1E18664670377C70D829C1432DBA9_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_21;
		L_21 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_24;
		L_24 = KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m7861418717DF3431EB6133FEE69B185FF3E444CD(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 8812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3F14C718D4348E78BD966689332E3543FC7EA0F5_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		return;
	}
}
// Method Definition Index: 8813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_3 = (EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC*)(EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_5 = __this->____entries;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7));
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7* L_17 = (ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 8814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m144C65526C99B4D26336A99D05AB1C046F9C1B95_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFFAB552450751427A4CC719868437AD752FB6E92* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_21;
		L_21 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_22 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_23 = L_22->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_26 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_27 = L_26->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1D140CEDA3CAB1ED5005387AA5CDFD46185E68B3_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFFAB552450751427A4CC719868437AD752FB6E92* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m870BB6A23DC03D0BA7345FB0C4406B72A599D59C((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_21;
		L_21 = EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_22 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_23 = L_22->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_26 = V_4;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_27 = L_26->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tFFAB552450751427A4CC719868437AD752FB6E92* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 8816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mEC8136680E035B9F0AA4E41766651DDDBE6E0AF9_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1A3EBE7D4CC0693E0C8BB1E9D45EE3B73F78C1F5(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 8817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m609CC1BBFBA50B155ED0AD13824BFC68EFA99F66_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC02EA424BD4BE6B3634A3355A1F5C192A485685(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return L_2;
	}
}
// Method Definition Index: 8818
// Method Definition Index: 8819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA3A77A01289754BEBEDD0BBD63199EA9E291DE86_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 8820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m678E9354439761476972AABAB79F473A98CC2195_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* V_6 = NULL;
	int32_t V_7 = 0;
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
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mA3809C26569628200F07EDDFE7C769ECA77EB3ED(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t1B843722852780BEFA3F9A66C21454D6BBA383AE* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mABF4CBA7D7D403CB41BD5BE2186A8487982FE85F(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_28);
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m3286405460F46807C6C24FA7697FEC09A07FA295((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 8821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mDB3425886CA60379E76D7FA776BBE1408472926E_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74((&L_0), __this, 2, NULL);
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mDD8BE6C88B9A039DD34AB4B4D650BAA7FF90F780_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t5534D4085F0D1E6746B742EE8FE63B8D8E5CA5DC* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mD4D0897BF502656EFA4717D9DC762F473917A624(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m5ABD36115EB7C30FB547B6E98AF40D37477227A8(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 8823
// Method Definition Index: 8824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m89BBC06ED9389928FE919A10F9964FB1B7844166_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7))));
		}
		try
		{
			ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mD3269D5FCF05B4A833808B479C76E4AA96EABAA0(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 41)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 42)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 8825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m487F9785068361C5886317669D5321EBAE9D824B_gshared (Dictionary_2_t2337438FD31B9D6EE2879C8D52075B5534A258AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3243AD85D2C654E228D00AA9A929EE107A321E74((&L_0), __this, 1, NULL);
		Enumerator_t79EB23CA1A26E056AEAAFD43B0F521E411B1FE84 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 8786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD269F58400EB477D2A668E2F1FDC7F96303721E1_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_mE6667B25D7B1092CD1D8084344CE4C23741F3C67(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA504485285EEC7EBC8F5783E3141895FADA4D285_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mE6667B25D7B1092CD1D8084344CE4C23741F3C67(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m00B97821AEECB874FE8F1522BF0A073835621FB5_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mE6667B25D7B1092CD1D8084344CE4C23741F3C67(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 8789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE6667B25D7B1092CD1D8084344CE4C23741F3C67_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6F854DE67C98DACDF06E591A4BE0BDCE1A9A6301(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_5;
		L_5 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 8790
// Method Definition Index: 8791
// Method Definition Index: 8792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1* Dictionary_2_get_Keys_m2BA24C47B32BA498EF61F0F13C995BEB9A71343C_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1* L_1 = (KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_m0C8B6E15C04D156A6DC704FF9A0DDD5F4BEC5648(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 8793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mB29FBB3C90A76AB1EE5B27F16A350C07F9DC6072_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1* L_1 = (KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
		KeyCollection__ctor_m0C8B6E15C04D156A6DC704FF9A0DDD5F4BEC5648(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE0205F99EEC4A10A4BEA91B2B5F8A3CE5083C9F1* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16* Dictionary_2_get_Values_mF4CDD81BBD257C106B9548E5060C4481AE6EA145_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16* L_1 = (ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		ValueCollection__ctor_mB8445466984D3F2FC27542DFA7B2BE9CB15F48C2(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD3295CF178278BF6D27B46836F600C0C42251E16* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 8795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_mE1A6F5174AC9A74EC01BC7EF66D47D2724831322_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m359EF56ADA4883DAA3A0DF74103F8CE3FA0FCDD0(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_6 = ___0_key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 8796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCDC72AD994E3DAEFBFA2110F5E13D43751CE9D9B_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mD28618916570E74382EBC5031238EEB384DDB16D(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m03537965189C7E46344EB5B21FEA251453883907_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mD28618916570E74382EBC5031238EEB384DDB16D(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}
}
// Method Definition Index: 8798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m7EA2DA532E419352062C2A077DCB5A127839AFC9_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0;
		L_0 = KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mE848EA5C2CF1843D8A5D89CFCD8D643759374C7E_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m03537965189C7E46344EB5B21FEA251453883907(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
// Method Definition Index: 8799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA5680C24FEC1677C513EAB70333F5CDB7F9E55C6_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0;
		L_0 = KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m359EF56ADA4883DAA3A0DF74103F8CE3FA0FCDD0(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mE848EA5C2CF1843D8A5D89CFCD8D643759374C7E_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m5476DDACAD7097098EBEC995DC514B9AF24217A8_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0;
		L_0 = KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m359EF56ADA4883DAA3A0DF74103F8CE3FA0FCDD0(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mE848EA5C2CF1843D8A5D89CFCD8D643759374C7E_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_9;
		L_9 = KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m2598A56DB99B95A0264C5DE4F19ABEE8F6D87B1A(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8801
// Method Definition Index: 8802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9506B72D13E97FCE8D96408E2E65D28D6D7B77C6_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m359EF56ADA4883DAA3A0DF74103F8CE3FA0FCDD0(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 8803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m95D08B0524648FC983FA1B292DB94631DCF32D3F_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE4C5AD97A61D2F3D1B03A6A2408119EEC6FF265B_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_0 = ___0_array;
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
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m1EE9698B33BEFFAAB9BFD4A421AE2A601D0C7D61(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mA4E28826B310ECF60D769760F8425AA3F32C98B5((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 8805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78 Dictionary_2_GetEnumerator_mCDE5EE126314C7C8C482A7FE6C2771FC40A934D5_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC725DA1F413695983C225CFA33899541311453B4((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 8806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA8AFF72D0AD05404DC220B512BA8B8CD3DA5AF26_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC725DA1F413695983C225CFA33899541311453B4((&L_0), __this, 2, NULL);
		Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m53E1446FA2D35DDA1ECC91B4A7F344E2C24A718D_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_6;
		L_6 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m1EE9698B33BEFFAAB9BFD4A421AE2A601D0C7D61(__this, NULL);
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_15 = (KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862*)(KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_16 = V_0;
		Dictionary_2_CopyTo_mE4C5AD97A61D2F3D1B03A6A2408119EEC6FF265B(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 8808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m359EF56ADA4883DAA3A0DF74103F8CE3FA0FCDD0_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_21;
		L_21 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_35 = ___0_key;
		NullCheck(L_34);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_60 = V_2;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
// Method Definition Index: 8809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6F854DE67C98DACDF06E591A4BE0BDCE1A9A6301_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_5 = (EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B*)(EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 8810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mD28618916570E74382EBC5031238EEB384DDB16D_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* V_10 = NULL;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6F854DE67C98DACDF06E591A4BE0BDCE1A9A6301(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_26;
		L_26 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_37 = ___0_key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_55 = V_0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_57 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_58 = ___0_key;
		NullCheck(L_54);
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_65 = ___0_key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_68 = V_0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mA15490FC135B82960989C3A4DC3E1DE429E58CBC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		NullCheck(L_89);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		NullCheck(L_87);
		G_B51_0 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_91 = V_0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		V_10 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_101 = V_10;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
// Method Definition Index: 8811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mB54292EC24ACB41A1074012C7CF0FFA20937CE55_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 25)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 26))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m6F854DE67C98DACDF06E591A4BE0BDCE1A9A6301(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 29)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_21;
		L_21 = KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_24;
		L_24 = KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mE848EA5C2CF1843D8A5D89CFCD8D643759374C7E_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m03537965189C7E46344EB5B21FEA251453883907(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 8812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA15490FC135B82960989C3A4DC3E1DE429E58CBC_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m757217CA044AF4D0F708D019C9BD55A54BCAFE58(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		return;
	}
}
// Method Definition Index: 8813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m757217CA044AF4D0F708D019C9BD55A54BCAFE58_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_3 = (EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B*)(EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 34), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_5 = __this->____entries;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D));
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* L_17 = (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 8814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2598A56DB99B95A0264C5DE4F19ABEE8F6D87B1A_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_21;
		L_21 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_22 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_23 = L_22->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_26 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_27 = L_26->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 8815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mEFA517EDD162B77337A23AE0CF9DB80E15B7234E_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_21;
		L_21 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_22 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_23 = L_22->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_26 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_27 = L_26->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 26), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tBC47467B5A5A61C0EED279B0A3AD89826082D31E* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 8816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m92F9BFDEB955079FE1A6335E3BA26F122C169B0F_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m359EF56ADA4883DAA3A0DF74103F8CE3FA0FCDD0(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 8817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mB3CF554D6C5002438734D41AEC0C09065729BB01_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mD28618916570E74382EBC5031238EEB384DDB16D(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return L_2;
	}
}
// Method Definition Index: 8818
// Method Definition Index: 8819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m97741D080F39B8EF29305D09871EF9AC12DE7F4B_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mE4C5AD97A61D2F3D1B03A6A2408119EEC6FF265B(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 8820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mCD904ABF299406AF1FCBA9B303FBDBC8B825DF28_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* V_6 = NULL;
	int32_t V_7 = 0;
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
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m1EE9698B33BEFFAAB9BFD4A421AE2A601D0C7D61(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDBE93C1BE750A9472C1D44C6B8FC13136227F862* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mE4C5AD97A61D2F3D1B03A6A2408119EEC6FF265B(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), &L_28);
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mA4E28826B310ECF60D769760F8425AA3F32C98B5((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 8821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8D6C19145FD503C71A728D86B297459B1E3298E4_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC725DA1F413695983C225CFA33899541311453B4((&L_0), __this, 2, NULL);
		Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 8822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m72A0759A338B0237D154BE16B7610850627337AC_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t23F60401800DED313A0F113F31509C395C2A880B* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m6F854DE67C98DACDF06E591A4BE0BDCE1A9A6301(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m757217CA044AF4D0F708D019C9BD55A54BCAFE58(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 8823
// Method Definition Index: 8824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m883961E8EE9D97AD8C1784B88817ECB2C0CBDD1B_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7))));
		}
		try
		{
			ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mCDC72AD994E3DAEFBFA2110F5E13D43751CE9D9B(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 41)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 42)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 8825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mA6E4459026BE0A784212B33AC5506F3B4AF7CEDA_gshared (Dictionary_2_t24D84C73B25562F847FB77E15C6BF99B413EB08F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC725DA1F413695983C225CFA33899541311453B4((&L_0), __this, 1, NULL);
		Enumerator_t20140F4F15409AD5311EC5ECB4AF944887F77C78 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 8786
// Method Definition Index: 8787
// Method Definition Index: 8788
// Method Definition Index: 8789
// Method Definition Index: 8790
// Method Definition Index: 8791
// Method Definition Index: 8792
// Method Definition Index: 8793
// Method Definition Index: 8794
// Method Definition Index: 8795
// Method Definition Index: 8796
// Method Definition Index: 8797
// Method Definition Index: 8798
// Method Definition Index: 8799
// Method Definition Index: 8800
// Method Definition Index: 8801
// Method Definition Index: 8802
// Method Definition Index: 8803
// Method Definition Index: 8804
// Method Definition Index: 8805
// Method Definition Index: 8806
// Method Definition Index: 8807
// Method Definition Index: 8808
// Method Definition Index: 8809
// Method Definition Index: 8810
// Method Definition Index: 8811
// Method Definition Index: 8812
// Method Definition Index: 8813
// Method Definition Index: 8814
// Method Definition Index: 8815
// Method Definition Index: 8816
// Method Definition Index: 8817
// Method Definition Index: 8818
// Method Definition Index: 8819
// Method Definition Index: 8820
// Method Definition Index: 8821
// Method Definition Index: 8822
// Method Definition Index: 8823
// Method Definition Index: 8824
// Method Definition Index: 8825
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8786
// Method Definition Index: 8787
// Method Definition Index: 8788
// Method Definition Index: 8789
// Method Definition Index: 8790
// Method Definition Index: 8791
// Method Definition Index: 8792
// Method Definition Index: 8793
// Method Definition Index: 8794
// Method Definition Index: 8795
// Method Definition Index: 8796
// Method Definition Index: 8797
// Method Definition Index: 8798
// Method Definition Index: 8799
// Method Definition Index: 8800
// Method Definition Index: 8801
// Method Definition Index: 8802
// Method Definition Index: 8803
// Method Definition Index: 8804
// Method Definition Index: 8805
// Method Definition Index: 8806
// Method Definition Index: 8807
// Method Definition Index: 8808
// Method Definition Index: 8809
// Method Definition Index: 8810
// Method Definition Index: 8811
// Method Definition Index: 8812
// Method Definition Index: 8813
// Method Definition Index: 8814
// Method Definition Index: 8815
// Method Definition Index: 8816
// Method Definition Index: 8817
// Method Definition Index: 8818
// Method Definition Index: 8819
// Method Definition Index: 8820
// Method Definition Index: 8821
// Method Definition Index: 8822
// Method Definition Index: 8823
// Method Definition Index: 8824
// Method Definition Index: 8825
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 9123
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* EqualityComparer_1_get_Default_m1AE5384997F835E4C5466B6B2B86BE9560DDCE13_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* V_0 = NULL;
	{
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_0 = ((EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m490F6961D48A89FD8C8F74F6DDC2A214A5DC69F9(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tB50496F0642D2D793FDFA69C3EE6813F13341658* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8904
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 KeyValuePair_2_get_Key_m8D14403AC889729AC2D3941CD4779880E43A03E5_gshared_inline (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_t78EA27F15D89081CB224A7229220EED408650D50 L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 8905
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mAFEC1E24C1BE80F58DD2408F6C108BD2540B7256_gshared_inline (KeyValuePair_2_t74BCF28B05B6BD4827E473D765BDCBDB831DC347* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 9123
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 9123
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* EqualityComparer_1_get_Default_mD2636828B0ACEF00CC985F45D1E5FF306BABD59D_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* V_0 = NULL;
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_0 = ((EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m463BF731A4F3741AFB84F0D736FBA4F60F715399(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6DF2E8E58FAF7C5E9E38E7C408CEE691C004CDD3* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8904
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF KeyValuePair_2_get_Key_m439596F1629846F2A7506145DDCDF7708ACF6621_inline (KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 8905
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m2FF41DEFC792515FBFDC6AE4533BEA47393BB483_inline (KeyValuePair_2_t5983FF105A14D8704CA46C2C96E4BE6EFA82F2C5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 9123
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8904
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF KeyValuePair_2_get_Key_m88567502A9386B23757AE743834112D30B7DD7A8_inline (KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Handle_1_tE2D3875A6BB5B9878CCD9582982E7BDA7D42F4CF L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 8905
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 KeyValuePair_2_get_Value_m7A37AC32DA509C79BC2BDBBF5FFB598538075D98_inline (KeyValuePair_2_t4A53BA87D4CB781413DDB7297458542DABE77EB0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 9123
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* EqualityComparer_1_get_Default_mC46EE2E85148B46AF8D7A02245C3F74677C46E72_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* V_0 = NULL;
	{
		EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* L_0 = ((EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE97DF1F5401D3D2DD9F4A02D76FDBF96B5A0973A(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tDDA51DED8FB7DC8131B6E6B9639C663816B40199* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 9123
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* EqualityComparer_1_get_Default_m578832CC36C18F32E3AA42E25F6500CFD90EC61C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* V_0 = NULL;
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_0 = ((EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mA52E4277838226FFABAEEB6001833A3AE12D11C0(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7F25AB620C9BC07C9A0F61C2A20298495734C5E5* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8904
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 KeyValuePair_2_get_Key_m46E1E11EEBAAE16AC6C2D5CC7CB88A955FB7333B_gshared_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 8905
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mD130D08ACEFF17D5D661124C457C5CDE2375A910_gshared_inline (KeyValuePair_2_t27DDA7B4A407DE711BDF77A39C29CAB68FD94FA3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 9123
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* V_0 = NULL;
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_0 = ((EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m98B8A4A80C7607630936A0CD427BF897A9F786C8(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 8904
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D KeyValuePair_2_get_Key_mCEB51E1F0C29E7EC3E15AECFB429B23F4331BB7B_gshared_inline (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 8905
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mE848EA5C2CF1843D8A5D89CFCD8D643759374C7E_gshared_inline (KeyValuePair_2_t70CE8D45AF7A17BBCC44CA12D8E4B3B1BD90101C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
