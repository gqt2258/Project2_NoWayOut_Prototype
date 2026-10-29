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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF;
struct Action_1_t64127E4DD3E938737FD4F04E605CFE2A03708201;
struct Action_1_t66F20A50678273BCDE80B6C298A6521516E5D843;
struct Action_1_t42A8343A925FA227C9A30B3153BD9DFF00864DC0;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_6_t51807BC92A7C39F1B9981D2B9661C16BA7DDA854;
struct Action_8_tB8FB2317194ED06F8C20B32C70ABA34BC783A881;
struct Comparison_1_tF2EA38711BF4E71781108F0D7BD2B99D225BCE80;
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C;
struct Func_2_t27C3143CFF667DF7CEC4EF0BE641E847A3BCDDF7;
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D;
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IIndexedCollectionPropertyBagEnumerator_1_t6698B24AEBA9214B2DBB039BE8A7EA46E9BE08D2;
struct IIndexedProperties_1_t7CE945BFF2815E6F6108D665655CF8D19795CF01;
struct IKeyedProperties_2_tBE46502704E4D7FD11BB3F66792AE8E2C936E116;
struct INamedProperties_1_tB93133F4FE3CD580F759B88DF90FD9C1490AF9C3;
struct IObservable_1_t6A88B15915275CE92411906C989057BD5C18C20A;
struct IObservable_1_t901035633D48F4662F07B1CB3EA42409B32B9104;
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
struct IPropertyBag_1_tFBCE7A7420E0A61651C8A11A7451DC0876AC3988;
struct IProperty_1_t98878FD77D337872A4E5BC68C68B41F682CD3B6C;
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A;
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B;
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
struct ListPrivateFieldAccess_1_t3CA377CF981437D6017A7DABFA3012590E9CB7C0;
struct ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D;
struct ListPrivateFieldAccess_1_t00BC545BFEAE57206E86C27261C525A3FCF89F12;
struct ListPrivateFieldAccess_1_tF980AAD8B69DF7815F2357E4BB98475E43649C22;
struct ListPrivateFieldAccess_1_t7DA83A553850A3B0904D3892B2354EB8987C46EF;
struct ListPrivateFieldAccess_1_tA421351C258DAD130D1CC2A5D0243C07C272CDFB;
struct ListPrivateFieldAccess_1_t7B5E7FA669EA1424703E7403F572C54B4B507BBE;
struct ListPrivateFieldAccess_1_t4D6B58A16E0BE616E7086060C58C4DCAED98DE86;
struct ListPrivateFieldAccess_1_t24353F5042D683647F03CC37AACC38FC6C58743D;
struct ListPrivateFieldAccess_1_tE26E85246B37A70B775A173A88DDF86961E5E27F;
struct ListPrivateFieldAccess_1_t9757DE0ACB0822993775201582312F0C6E26D42C;
struct ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30;
struct ListPrivateFieldAccess_1_t3F800C1215FB9361A40A878A457EA06BE5FB1BA5;
struct ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69;
struct ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B;
struct ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65;
struct List_1_tFED1C27AA4B8AC9813FF4858B3ABB1B3F74558EF;
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452;
struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3;
struct List_1_t005866C9A942E85392723D93831723E1AB1D856E;
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
struct List_1_tC19CF9590EBD62041C53FB658F836FBCBEBB2D75;
struct List_1_t4EB7DA35FB6C543101A0C09A56EE4B652F4E1777;
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B;
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5;
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC;
struct SelectObservable_2_t7E31AABD1F8BB24043E97DD0D162EE1854F8335A;
struct SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
struct WhereObservable_1_t1FFDD1DADF220133CF2809DA4B8FBEC91102AFF0;
struct WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816;
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct PhysicsShape2DU5BU5D_tA1AB70893D21D57FB86D0DB946736CF973B9AA5B;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C;
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
struct OnScreenDeviceInfoU5BU5D_t0C70881971941DEFDD18CFFD3E4133B5CA0B7F30;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889;
struct IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NavMeshBuilderState_t7AD5D3CDEC34EAD44BD92A27070D5E45BAC41E33;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69;
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418;
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7;
IL2CPP_EXTERN_C String_t* _stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6D17034B21712EB7B5957FBBF819632D04221839;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628;
IL2CPP_EXTERN_C String_t* _stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54;
IL2CPP_EXTERN_C String_t* _stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37;
IL2CPP_EXTERN_C String_t* _stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F;
struct StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF  : public RuntimeObject
{
	RuntimeObject* ___subscription;
};
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys;
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values;
	RuntimeObject* ____syncRoot;
};
struct ListPrivateFieldAccess_1_t3CA377CF981437D6017A7DABFA3012590E9CB7C0  : public RuntimeObject
{
	BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t00BC545BFEAE57206E86C27261C525A3FCF89F12  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tF980AAD8B69DF7815F2357E4BB98475E43649C22  : public RuntimeObject
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t7DA83A553850A3B0904D3892B2354EB8987C46EF  : public RuntimeObject
{
	NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tA421351C258DAD130D1CC2A5D0243C07C272CDFB  : public RuntimeObject
{
	PhysicsShape2DU5BU5D_tA1AB70893D21D57FB86D0DB946736CF973B9AA5B* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t7B5E7FA669EA1424703E7403F572C54B4B507BBE  : public RuntimeObject
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t4D6B58A16E0BE616E7086060C58C4DCAED98DE86  : public RuntimeObject
{
	StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t24353F5042D683647F03CC37AACC38FC6C58743D  : public RuntimeObject
{
	StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tE26E85246B37A70B775A173A88DDF86961E5E27F  : public RuntimeObject
{
	UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t9757DE0ACB0822993775201582312F0C6E26D42C  : public RuntimeObject
{
	UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30  : public RuntimeObject
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t3F800C1215FB9361A40A878A457EA06BE5FB1BA5  : public RuntimeObject
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65  : public RuntimeObject
{
	BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF  : public RuntimeObject
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452  : public RuntimeObject
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3  : public RuntimeObject
{
	NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t005866C9A942E85392723D93831723E1AB1D856E  : public RuntimeObject
{
	PhysicsShape2DU5BU5D_tA1AB70893D21D57FB86D0DB946736CF973B9AA5B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tC19CF9590EBD62041C53FB658F836FBCBEBB2D75  : public RuntimeObject
{
	StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4EB7DA35FB6C543101A0C09A56EE4B652F4E1777  : public RuntimeObject
{
	StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B  : public RuntimeObject
{
	UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5  : public RuntimeObject
{
	UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A  : public RuntimeObject
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849  : public RuntimeObject
{
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___m_OnNext;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnCompleted;
};
struct SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___m_Filter;
};
struct SelectObservable_2_t7E31AABD1F8BB24043E97DD0D162EE1854F8335A  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t27C3143CFF667DF7CEC4EF0BE641E847A3BCDDF7* ___m_Filter;
};
struct SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___m_Filter;
};
struct TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	int32_t ___m_Count;
};
struct WhereObservable_1_t1FFDD1DADF220133CF2809DA4B8FBEC91102AFF0  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___m_Predicate;
};
struct WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___m_Predicate;
};
struct CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117  : public RuntimeObject
{
	bool ____disposed;
	List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* ___extraStates;
};
struct ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	Type_t* ___m_DeviceType;
};
struct InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};
struct NativeSortExtension_t69298E80751CF0D0DB847C79277B6E0A2C92A4F2  : public RuntimeObject
{
};
struct NoAllocHelpers_t5C2B43061F00675B5AD0044C341D0279E4F5F1ED  : public RuntimeObject
{
};
struct Observable_t74D8C01B38DEE3309AAA0204C87021D320DBEF47  : public RuntimeObject
{
};
struct OnceInScope_t6B4D8335D9FC5EF60351BBC7ECCC807663766FFD  : public RuntimeObject
{
};
struct ParallelSortExtensions_tF77646D72EE1C34AC6F6FB0B0F1FA70634084C8D  : public RuntimeObject
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
struct DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	int32_t ___length;
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue;
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues;
};
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	int32_t ___length;
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue;
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues;
};
struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	int32_t ___length;
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue;
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues;
};
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
typedef Il2CppFullySharedGenericStruct SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E;
typedef Il2CppFullySharedGenericStruct SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A;
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE 
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_pinvoke
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_com
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 
{
	int32_t ___Index;
	bool ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_pinvoke
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_com
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	String_t* ___m_InterfaceName;
	String_t* ___m_DeviceClass;
	String_t* ___m_Manufacturer;
	String_t* ___m_Product;
	String_t* ___m_Serial;
	String_t* ___m_Version;
	String_t* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName;
	char* ___m_DeviceClass;
	char* ___m_Manufacturer;
	char* ___m_Product;
	char* ___m_Serial;
	char* ___m_Version;
	char* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName;
	Il2CppChar* ___m_DeviceClass;
	Il2CppChar* ___m_Manufacturer;
	Il2CppChar* ___m_Product;
	Il2CppChar* ___m_Serial;
	Il2CppChar* ___m_Version;
	Il2CppChar* ___m_Capabilities;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B 
{
	int32_t ___U3CindexU3Ek__BackingField;
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
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	int32_t ___importedStyleSheetIndex;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	int32_t ___importedStyleSheetIndex;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	int32_t ___importedStyleSheetIndex;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 
{
	int32_t ___nameId;
	int32_t ___hash;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_pinvoke
{
	int32_t ___nameId;
	int32_t ___hash;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_com
{
	int32_t ___nameId;
	int32_t ___hash;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
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
struct int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 
{
	union
	{
		struct
		{
		};
		uint8_t Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9__padding[1];
	};
};
struct ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA 
{
	union
	{
		struct
		{
		};
		uint8_t ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA__padding[1];
	};
};
struct EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B 
{
	union
	{
		struct
		{
		};
		uint8_t EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B__padding[1];
	};
};
struct ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 
{
	intptr_t ____value;
};
struct ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF 
{
	intptr_t ____value;
};
struct ByReference_1_tEE7AA2C5164450CDD692EAA07021ED2A5C59A485 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED 
{
	intptr_t ____value;
};
struct ByReference_1_t9CADE410466BC270E5C6ADCD40217618DDC488D8 
{
	intptr_t ____value;
};
struct ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A 
{
	intptr_t ____value;
};
struct ByReference_1_tCB472E8204433C747D9B3882DBEEC3375436F7E3 
{
	intptr_t ____value;
};
struct ByReference_1_tB40D2C98D0CA57FD7CDE23E4F1509D24900D8101 
{
	intptr_t ____value;
};
struct ByReference_1_tCD6518F15D44935EFDC820F5ACCB8F718BDF1CCC 
{
	intptr_t ____value;
};
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	intptr_t ____value;
};
struct ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 
{
	intptr_t ____value;
};
struct ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 
{
	intptr_t ____value;
};
struct ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 
{
	intptr_t ____value;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 
{
	bool ___hasValue;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE ___value;
};
struct SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 
{
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
};
typedef Il2CppFullySharedGenericStruct SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A;
struct SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 
{
	int32_t* ___Data;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___Comp;
	int32_t ___Length;
};
struct SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 
{
	uint64_t* ___Data;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___Comp;
	int32_t ___Length;
};
struct SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD 
{
	Il2CppFullySharedGenericStruct* ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
	int32_t ___Length;
};
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 
{
	Il2CppFullySharedGenericStruct* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
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
struct FindObjectsInactive_t10C7BE036CAD0178142374F945283DA50D02B87A 
{
	int32_t ___value__;
};
struct FindObjectsSortMode_t3C83F8C6588F54EBB0CEB21F79D54CD19460AE9E 
{
	int32_t ___value__;
};
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	uint32_t ___m_ByteOffset;
	uint32_t ___U3CbitOffsetU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NavMeshBuildSourceShape_t0D044D75712305894A038997DAFB311723771268 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PhysicsShapeType2D_t44AE2DF9DE93C130AF36529B830CDCD34D55223B 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___prevPosition;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
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
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	int32_t ___value__;
};
struct DeviceFlags_tF02F85DA24FF16879A67B540FCA560EC955CE728 
{
	int32_t ___value__;
};
struct TransformTrackingType_t77039370A4171D17EFE0B606277B540732534FD4 
{
	int32_t ___value__;
};
struct TypeTrackingFlags_t56331E291FE0F180D59B5DB7ED12DD2C2A144053 
{
	int32_t ___value__;
};
struct ParallelSortValueType_t6D900B4D4AFD1A3DA76F4506E1C06A442F6388E4 
{
	int32_t ___value__;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
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
struct NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA 
{
	ByReference_1_tEE7AA2C5164450CDD692EAA07021ED2A5C59A485 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B 
{
	ByReference_1_t9CADE410466BC270E5C6ADCD40217618DDC488D8 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C 
{
	ByReference_1_tB40D2C98D0CA57FD7CDE23E4F1509D24900D8101 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 
{
	ByReference_1_tCD6518F15D44935EFDC820F5ACCB8F718BDF1CCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4 
{
	ByReference_1_tCB472E8204433C747D9B3882DBEEC3375436F7E3 ____pointer;
	int32_t ____length;
};
struct Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size;
	int32_t ___m_Shape;
	int32_t ___m_Area;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_ComponentID;
	int32_t ___m_GenerateLinks;
};
struct NavMeshBuilderState_t7AD5D3CDEC34EAD44BD92A27070D5E45BAC41E33  : public RuntimeObject
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToLocal;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___worldBounds;
	RuntimeObject* ___roots;
	CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117* ___disposable;
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___mExtraState;
	bool ____disposed;
};
struct PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E 
{
	int32_t ___m_ShapeType;
	float ___m_Radius;
	int32_t ___m_VertexStartIndex;
	int32_t ___m_VertexCount;
	int32_t ___m_UseAdjacentStart;
	int32_t ___m_UseAdjacentEnd;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AdjacentStart;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AdjacentEnd;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Func_2_t27C3143CFF667DF7CEC4EF0BE641E847A3BCDDF7  : public MulticastDelegate_t
{
};
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D  : public MulticastDelegate_t
{
};
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530 
{
	int32_t ___radix;
	int32_t ___jobsCount;
	int32_t ___signBitRadixIndex;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___counter;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indicesSum;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
};
struct RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16 
{
	int32_t ___radix;
	int32_t ___jobsCount;
	int32_t ___signBitRadixIndex;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___counter;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indicesSum;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
};
struct RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C 
{
	int32_t ___radix;
	int32_t ___jobsCount;
	int32_t ___signBitRadixIndex;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___counter;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indicesSum;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
};
struct RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
};
struct RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
};
struct RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___buckets;
};
struct RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___arraySorted;
};
struct RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___arraySorted;
};
struct RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D 
{
	int32_t ___radix;
	int32_t ___batchSize;
	int32_t ___valueType;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___array;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___arraySorted;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	String_t* ___m_Path;
	String_t* ___m_DisplayName;
	String_t* ___m_DisplayNameFromLayout;
	String_t* ___m_ShortDisplayName;
	String_t* ___m_ShortDisplayNameFromLayout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent;
	int32_t ___m_UsageCount;
	int32_t ___m_UsageStartIndex;
	int32_t ___m_AliasCount;
	int32_t ___m_AliasStartIndex;
	int32_t ___m_ChildCount;
	int32_t ___m_ChildStartIndex;
	int32_t ___m_ControlFlags;
	bool ___m_CachedValueIsStale;
	bool ___m_UnprocessedCachedValueIsStale;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___transformedID;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___parentID;
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___localToWorldMatrices;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___positions;
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 ___rotations;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___scales;
};
struct TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___changed;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___changedID;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___destroyedID;
};
struct TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshaled_pinvoke
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke* ___changed;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___changedID;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___destroyedID;
};
struct TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshaled_com
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com** ___changed;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___changedID;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___destroyedID;
};
struct UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC 
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_pinvoke
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_com
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 
{
	int32_t ___jobsCount;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indicesSum;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___indices;
};
struct InlinedArray_1_tC8A32AF03BC5EA969AD4315DC5E67BBAF2765992 
{
	int32_t ___length;
	OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC ___firstValue;
	OnScreenDeviceInfoU5BU5D_t0C70881971941DEFDD18CFFD3E4133B5CA0B7F30* ___additionalValues;
};
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack;
	float ___m_CachedValue;
	float ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CachedValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E {};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	int32_t ___m_DeviceFlags;
	int32_t ___m_DeviceId;
	int32_t ___m_ParticipantId;
	int32_t ___m_DeviceIndex;
	uint32_t ___m_CurrentProcessedEventBytesOnUpdate;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description;
	double ___m_LastUpdateTimeInternal;
	uint32_t ___m_CurrentUpdateStepCount;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_UpdatedButtons;
	List_1_tFED1C27AA4B8AC9813FF4858B3ABB1B3F74558EF* ___m_ButtonControlsCheckingPressState;
	bool ___m_UseCachePathForButtonPresses;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap;
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 
{
	UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 ___m_Stream;
};
struct ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	int32_t ___m_DispatchAllocator;
	TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F ___m_TypeDispatchData;
	TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 ___m_TransformDispatchData;
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ___m_TransformedComponents;
	Action_1_t42A8343A925FA227C9A30B3153BD9DFF00864DC0* ___m_TypeDataCallback;
	Action_1_t66F20A50678273BCDE80B6C298A6521516E5D843* ___m_TransformDataCallback;
	Action_1_t64127E4DD3E938737FD4F04E605CFE2A03708201* ___m_TransformComponentCallback;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Control;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___m_NextControlOnDevice;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_InputEventPtr;
};
struct ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 
{
	NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 ___Container;
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* ___List;
};
struct List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65_StaticFields
{
	BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___s_emptyArray;
};
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_StaticFields
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___s_emptyArray;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___s_emptyArray;
};
struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3_StaticFields
{
	NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ___s_emptyArray;
};
struct List_1_t005866C9A942E85392723D93831723E1AB1D856E_StaticFields
{
	PhysicsShape2DU5BU5D_tA1AB70893D21D57FB86D0DB946736CF973B9AA5B* ___s_emptyArray;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray;
};
struct List_1_tC19CF9590EBD62041C53FB658F836FBCBEBB2D75_StaticFields
{
	StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* ___s_emptyArray;
};
struct List_1_t4EB7DA35FB6C543101A0C09A56EE4B652F4E1777_StaticFields
{
	StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* ___s_emptyArray;
};
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B_StaticFields
{
	UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* ___s_emptyArray;
};
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5_StaticFields
{
	UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* ___s_emptyArray;
};
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_StaticFields
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___s_emptyArray;
};
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields
{
	RuntimeObject* ___s_Instance;
	double ___s_CurrentTimeOffsetToRealtimeSinceStartup;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_StaticFields
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___Invalid;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_StaticFields
{
	Comparison_1_tF2EA38711BF4E71781108F0D7BD2B99D225BCE80* ___Comparison;
	RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC* ___RefComparison;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert;
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
struct ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69_StaticFields
{
	Action_6_t51807BC92A7C39F1B9981D2B9661C16BA7DDA854* ___s_TypeDispatch;
	Action_8_tB8FB2317194ED06F8C20B32C70ABA34BC783A881* ___s_TransformDispatch;
};
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418_StaticFields
{
	int32_t ___s_nbActiveInstances;
	InlinedArray_1_tC8A32AF03BC5EA969AD4315DC5E67BBAF2765992 ___s_OnScreenDevices;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
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
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
struct NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A  : public RuntimeArray
{
	ALIGN_FIELD (8) NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD m_Items[1];

	inline NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 m_Items[1];

	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___handles), (void*)NULL);
		#endif
	}
	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___handles), (void*)NULL);
		#endif
	}
};
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
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
struct StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE m_Items[1];

	inline StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___complexSelector), (void*)NULL);
		#endif
	}
	inline StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___complexSelector), (void*)NULL);
		#endif
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
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 NativeArray_1_AsReadOnlySpan_mE326C38BEA21D76FFA2FC6277F03B691FD78BCBA (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mB748E41133FA648FD7D940AF0E971865BCA13E3F (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___0_roSpan, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA NativeArray_1_AsReadOnlySpan_mC63E5C016C3C07DDF18DFD9A02917222DDB21015 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_m3CEE3D91A42433B257641A0D31E5FD223FD3342A (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA ___0_roSpan, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 NativeArray_1_AsReadOnlySpan_m06264171851390A04DB013C77825476FA7254C9C (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_mCCD413733A610B9D8F9FC3C9B02FF7F74EDF310B (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_roSpan, uint32_t ___1_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mF045AD0E0A0315C9D98F9FD347EEEF6E24C73ADC (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_mF85FE315B6BD04F8B703C4EB4DDD36A9D24C2D8A (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_ptr, int32_t ___1_length, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_m336558E7336C81B8B72EFCB422A4275D0FD0F09F (uint32_t* ___0_ptr, int32_t ___1_length, uint32_t ___2_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m2B69906CEFD90B0F959BCBA26240427D5E34E237 (DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_x, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_mFC06C4A12E61CBB1E919D96EAA1B14B36829682A (DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6* __this, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___0_x, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m3D3D830C6ED5074DBB34AE5D0FD965358815B855 (DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1* __this, uint32_t ___0_x, uint32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316 (DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A (DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* __this, uint64_t ___0_x, uint64_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m447AB14969900EBF8D724FA0B06248EEC3C5BEE1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m54023D89607E52DAAF70FC0AC1566BE018C94951 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mA078BD6B0BDB0F4C3A6F227E4CA458FB10BF467D (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mE83B78A4E21385E054DAB6E54096B204E27CCF05 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m64966317ECC8D7CDB0D08299D54C0515AFA10BC7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mF3F91FD1CF91BB4367FD7C8CF287619B5166FFB7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m9E3D7E2805653AB57ACC999FCE41FD4C78A5FF31 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mC7889E64AB70C508749FF7769C180D3BED4BC4CF (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m964B018FFC885A109E0433749F04B5B34653958B (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m2F5777B14162A9539E616742C8D29AC1769517D0 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m52C7968B61CD160CE7276D6768B010C26565185A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m67CD3E816521190FB9EC7208099D2E5E393DBF7A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mE1E3E6FEAAF3E0DBBFC735EDC3267ECA2221A628 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m29CD0E18938F36295FC793E98250D48F9835B32F (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m659221DBCD9303407ACE89F7078861892495AD48 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mB34BF7D82E1E5889BE988B230C11EE6842993231 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m322E3D4D2DAD5DD1A61A78DCA08C5BE424E2BCAA (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m4809F01D470D4466F76AD547CCBB126B73C0DE04 (void* ___0_array, int32_t ___1_length, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mB6DC15F5849FB6406A1E060F37717E801CA1AA9C (void* ___0_array, int32_t ___1_length, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m9B0BEB44FDA36870CF47F7A7995FD97E953FE551 (void* ___0_array, int32_t ___1_length, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 NativeArray_1_AsSpan_mAFE9F40CE04C84DFB0D6C5C338015A226B0A3EB9 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m32C5AA6495C39886E9F10952078CDA9AB97ADECF (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___1_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 NativeArray_1_AsSpan_m52988A12DB01292F1C64E6786AA600A03601EF98 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA8CA6EFD2F7E8AEC5454721CD3338B95A4B706A8 (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_span, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___1_comp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF (ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mEB1F53213D9DBB5055E1D48D152CB9B8A5A10437_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m970F39957AA13F57797915183F66166CF35746AD_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m94C662286E6962E7D0D2333BE505C17AB72B0239_inline (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB67526D7521FC963E2F149D3D8626BB633F8249F_inline (ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B* __this, NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC2013143DC1227FA2243E83F9C385E5D3F48520D_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2C141C25072ADD535CDEEB08B6EF07359A550AF2_inline (ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C* __this, StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA3840C7226D793D4B75979B13B1A6B0B25342950_inline (ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m29132D51CA4DD7CE44F871A6DE4E62C10876DA34_inline (Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4* __this, StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 List_1_get_Item_mE919D8EE751161CD7B90064F8824F7C854D27E05 (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m6E1E0C1DB6A8DB66BBBB90512239A3CE2858FCC0 (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* __this, int32_t ___0_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B List_1_get_Item_m5ED2B6D8DA1CCEB2F9A6795D526AD1A33AFC35A3 (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m34A1FB42C4936A56731388B9305F38083212F317 (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, int32_t ___0_index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E List_1_get_Item_m8B7D206E4568469AFA6C023E6F4F6480BBF637B9 (List_1_t005866C9A942E85392723D93831723E1AB1D856E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m84AEDCF78C5C3163FDC7393B9B33BA288B76C0D0 (List_1_t005866C9A942E85392723D93831723E1AB1D856E* __this, int32_t ___0_index, PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD List_1_get_Item_m6D9BA633A3158DD900A8663E4235B61306A1854F (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7C1A44077208F55168FC96C286A0C2F10569B05A (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* __this, int32_t ___0_index, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC List_1_get_Item_mB24C78B30167CD784429FE75DDDE9DADA551808E (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mEA2D1EBF324845E705F85B2096A1489D5793989C (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* __this, int32_t ___0_index, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4512A91B4D4ABD38CA845D6E56F471390A4EC2E0 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___0_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectObservable_2__ctor_mC5488B7793116D4A34581D9981A5E23F20ACDB26_fshared (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* __this, RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_filter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereObservable_1__ctor_m6C7B01F3F1790F57E8A6CB4AA4B3C3FF98902286_fshared (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlExtensions_WriteValueIntoEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6846DBDEE718463B2788993E941703D5487D6AB3 (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___0_control, float ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlExtensions_WriteValueIntoEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB4F47D8692DF6A43F031850C600040CCAFBAA30C (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___0_control, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D18A3514F6D070AC8C047BBFCFC1659A67EE1E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787_mFCBFFDD3A70242F3FD93CB7ABAC68E6C834FCDEB (RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530_m56BAD1725265F12485D97AED622B58225457276E (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF (RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B_m9551F6E502909FC3D07BF6055C985ABF1D890462 (RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelSortExtensions_Swap_TisIl2CppFullySharedGenericStruct_m2B711BE52422A0F57CAEA7CABE48A47F62E232D1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_a, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E3417425C9B76FA372D6033A174ABAA465BFFAC (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJob_2_Schedule_m22719A523B631BE6909546A645D7FE71F71286E8 (SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2AFC4B45EECC2B6C4D08C1975119242CD448FF9B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA8531DC1B7696C5771660F84BEFAAD1B126030D1 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F_m2FFB988104525A51F97B8CC2ED54A81E3CF19E18 (RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16_m11ADB6F6B132D92CB2259D94067C713502FBD390 (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9_m1E47FA1ABDF4B8D0BD56EDC140FD68303AE7596D (RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NativeArray_1_Dispose_mA8367AAA886520AD7C054D6B2908E0A692CC0F7F (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m558724A75AB46A488295884665059D7611FECE27 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJob_2_Schedule_mFDC935A9492407CC030A6EB7E1985B02C9521349 (SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705 (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_inline (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_inline (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtilityInternal_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5AE01E222FB08F27EB26C6D2FE6F873A34BE8707_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m38B84F4395041C32077D6BD505700613A549E5B2_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtilityInternal_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBD52AD6E8736CB48656CFA0961D93E411266B81E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m3A3B9DFD873633E9078206152E40D232B1B0F8D2_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 NativeArray_1_AsReadOnlySpan_mE326C38BEA21D76FFA2FC6277F03B691FD78BCBA (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mB748E41133FA648FD7D940AF0E971865BCA13E3F (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___0_roSpan, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA NativeArray_1_AsReadOnlySpan_mC63E5C016C3C07DDF18DFD9A02917222DDB21015 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_m3CEE3D91A42433B257641A0D31E5FD223FD3342A (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA ___0_roSpan, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 NativeArray_1_AsReadOnlySpan_m06264171851390A04DB013C77825476FA7254C9C (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_mCCD413733A610B9D8F9FC3C9B02FF7F74EDF310B (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_roSpan, uint32_t ___1_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___2_comp, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_mF61164B41A8152ACB6105B33F27B617757703605_inline (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mF045AD0E0A0315C9D98F9FD347EEEF6E24C73ADC (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___3_comp, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m374611371AE053D62AD05BA8C8B9FFDF0B82B996_inline (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_mF85FE315B6BD04F8B703C4EB4DDD36A9D24C2D8A (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_ptr, int32_t ___1_length, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___3_comp, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_m336558E7336C81B8B72EFCB422A4275D0FD0F09F (uint32_t* ___0_ptr, int32_t ___1_length, uint32_t ___2_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m2B69906CEFD90B0F959BCBA26240427D5E34E237 (DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_x, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_mFC06C4A12E61CBB1E919D96EAA1B14B36829682A (DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6* __this, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___0_x, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m3D3D830C6ED5074DBB34AE5D0FD965358815B855 (DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1* __this, uint32_t ___0_x, uint32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316 (DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A (DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* __this, uint64_t ___0_x, uint64_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70 (ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76 (EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60 (Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* __this, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___0_a, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m447AB14969900EBF8D724FA0B06248EEC3C5BEE1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m54023D89607E52DAAF70FC0AC1566BE018C94951 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mA078BD6B0BDB0F4C3A6F227E4CA458FB10BF467D (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mE83B78A4E21385E054DAB6E54096B204E27CCF05 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m64966317ECC8D7CDB0D08299D54C0515AFA10BC7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mF3F91FD1CF91BB4367FD7C8CF287619B5166FFB7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m9E3D7E2805653AB57ACC999FCE41FD4C78A5FF31 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mC7889E64AB70C508749FF7769C180D3BED4BC4CF (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m964B018FFC885A109E0433749F04B5B34653958B (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m2F5777B14162A9539E616742C8D29AC1769517D0 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m52C7968B61CD160CE7276D6768B010C26565185A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m67CD3E816521190FB9EC7208099D2E5E393DBF7A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mE1E3E6FEAAF3E0DBBFC735EDC3267ECA2221A628 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m29CD0E18938F36295FC793E98250D48F9835B32F (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m659221DBCD9303407ACE89F7078861892495AD48 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mB34BF7D82E1E5889BE988B230C11EE6842993231 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m322E3D4D2DAD5DD1A61A78DCA08C5BE424E2BCAA (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m4809F01D470D4466F76AD547CCBB126B73C0DE04 (void* ___0_array, int32_t ___1_length, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mB6DC15F5849FB6406A1E060F37717E801CA1AA9C (void* ___0_array, int32_t ___1_length, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m9B0BEB44FDA36870CF47F7A7995FD97E953FE551 (void* ___0_array, int32_t ___1_length, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 NativeArray_1_AsSpan_mAFE9F40CE04C84DFB0D6C5C338015A226B0A3EB9 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m32C5AA6495C39886E9F10952078CDA9AB97ADECF (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___1_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 NativeArray_1_AsSpan_m52988A12DB01292F1C64E6786AA600A03601EF98 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA8CA6EFD2F7E8AEC5454721CD3338B95A4B706A8 (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_span, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___1_comp, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF (ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, const RuntimeMethod*))Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeDisposable__ctor_mFAC06D6F80E6655341ECA28D56FA9B7D21107FF7 (CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mEB1F53213D9DBB5055E1D48D152CB9B8A5A10437_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3 (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3_gshared)(method);
}
inline void Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m970F39957AA13F57797915183F66166CF35746AD_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeDisposable_Add_m1358A2F2ED5708FEDF96F69505D3657E4B5D891C (CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117* __this, RuntimeObject* ___0_dispose, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m94C662286E6962E7D0D2333BE505C17AB72B0239_inline (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB67526D7521FC963E2F149D3D8626BB633F8249F_inline (ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B* __this, NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC2013143DC1227FA2243E83F9C385E5D3F48520D_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2C141C25072ADD535CDEEB08B6EF07359A550AF2_inline (ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C* __this, StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA3840C7226D793D4B75979B13B1A6B0B25342950_inline (ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m29132D51CA4DD7CE44F871A6DE4E62C10876DA34_inline (Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4* __this, StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
inline void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_mB569369409DE67C7AF17A0405E9F1DB681D0D968_inline (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 List_1_get_Item_mE919D8EE751161CD7B90064F8824F7C854D27E05 (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m6E1E0C1DB6A8DB66BBBB90512239A3CE2858FCC0 (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* __this, int32_t ___0_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B List_1_get_Item_m5ED2B6D8DA1CCEB2F9A6795D526AD1A33AFC35A3 (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m34A1FB42C4936A56731388B9305F38083212F317 (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, int32_t ___0_index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mED734AE4CCCA800E3210B813A66929F46E734591_inline (List_1_t005866C9A942E85392723D93831723E1AB1D856E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t005866C9A942E85392723D93831723E1AB1D856E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E List_1_get_Item_m8B7D206E4568469AFA6C023E6F4F6480BBF637B9 (List_1_t005866C9A942E85392723D93831723E1AB1D856E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m84AEDCF78C5C3163FDC7393B9B33BA288B76C0D0 (List_1_t005866C9A942E85392723D93831723E1AB1D856E* __this, int32_t ___0_index, PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E ___1_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m29475DA858BCD0247327E13ECC38605BFA1CEE53_inline (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD List_1_get_Item_m6D9BA633A3158DD900A8663E4235B61306A1854F (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7C1A44077208F55168FC96C286A0C2F10569B05A (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* __this, int32_t ___0_index, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___1_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mBD21DFFF3DA5C693C2D72F9D050D5423A7FFF248_inline (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC List_1_get_Item_mB24C78B30167CD784429FE75DDDE9DADA551808E (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mEA2D1EBF324845E705F85B2096A1489D5793989C (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* __this, int32_t ___0_index, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___1_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___0_index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___1_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4512A91B4D4ABD38CA845D6E56F471390A4EC2E0 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___0_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Capacity_m0C3FDA53744AF9572488C5EFC5F0632D33DAAE0A (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t List_1_get_Capacity_mD1D84001E0B4C85B5C7F8B48796ED4B814779FB8 (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
inline int32_t List_1_get_Capacity_mEA90B3ECF08B37D790E51D0152F7CD5022A510BF (List_1_t005866C9A942E85392723D93831723E1AB1D856E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t005866C9A942E85392723D93831723E1AB1D856E*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
inline int32_t List_1_get_Capacity_m7B92303796B477EA0A27AF48F502382B2A85B213 (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
inline int32_t List_1_get_Capacity_m3BDCA1A17A3EF6EF6D0443961D6EDDF7165364F0 (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
inline int32_t List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
inline int32_t List_1_get_Capacity_mFC460C1FE9D413F41371C800ECB347D153264F69 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindAnyObjectByType_mAC0703A76C59FCA4BF15E13978ACF09667AD8FD2 (Type_t* ___0_type, int32_t ___1_findObjectsInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F (Type_t* ___0_type, int32_t ___1_findObjectsInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsByType_m2FD4029E94449E11B16018C0A42F53978722D980 (Type_t* ___0_type, int32_t ___1_findObjectsInactive, int32_t ___2_sortMode, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2 (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*, const RuntimeMethod*))Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared)(___0_rawObjects, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26 (RuntimeObject* ___0_arg, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312 (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDispatcher_EnableTransformTracking_m02C2084445E6ACB87BACF478E61FA597532044C1 (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_trackingType, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_types, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDispatcher_EnableTypeTracking_m6C28705689C0A395B418FC54AF3B94F79310A371 (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_typeTrackingMask, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_types, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 ObjectDispatcher_GetTransformChangesAndClear_mE189DCB6402D0E26D77A0C054E42A6C080B7BC23 (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, Type_t* ___0_type, int32_t ___1_trackingType, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F ObjectDispatcher_GetTypeChangesAndClear_mBE6304A78592FF8271D7CD8E26C57544CF1675B9 (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, Type_t* ___0_type, int32_t ___1_allocator, bool ___2_sortByInstanceID, bool ___3_noScriptingArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForDeviceEventObservable__ctor_mB1C31FA7E513DB5D377B8F95AB66DBA80A0B2EFC (ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889* __this, RuntimeObject* ___0_source, Type_t* ___1_deviceType, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___2_device, const RuntimeMethod* method) ;
inline void SelectObservable_2__ctor_m9009B89D18A7656A514E5EF153274188F82FCA25 (SelectObservable_2_t7E31AABD1F8BB24043E97DD0D162EE1854F8335A* __this, RuntimeObject* ___0_source, Func_2_t27C3143CFF667DF7CEC4EF0BE641E847A3BCDDF7* ___1_filter, const RuntimeMethod* method)
{
	((  void (*) (SelectObservable_2_t7E31AABD1F8BB24043E97DD0D162EE1854F8335A*, RuntimeObject*, Func_2_t27C3143CFF667DF7CEC4EF0BE641E847A3BCDDF7*, const RuntimeMethod*))SelectObservable_2__ctor_mC5488B7793116D4A34581D9981A5E23F20ACDB26_fshared)(__this, ___0_source, ___1_filter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void WhereObservable_1__ctor_m7DAA4045A205F49CE48D01F29B45AD52AAFD5525 (WhereObservable_1_t1FFDD1DADF220133CF2809DA4B8FBEC91102AFF0* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereObservable_1_t1FFDD1DADF220133CF2809DA4B8FBEC91102AFF0*, RuntimeObject*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereObservable_1__ctor_m6C7B01F3F1790F57E8A6CB4AA4B3C3FF98902286_fshared)(__this, ___0_source, ___1_predicate, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1 (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlExtensions_WriteValueIntoEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6846DBDEE718463B2788993E941703D5487D6AB3 (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___0_control, float ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_eventPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlExtensions_WriteValueIntoEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB4F47D8692DF6A43F031850C600040CCAFBAA30C (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___0_control, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* OnceInScope_OnceIn_m4F8C9FC123BFDFEE9BEAFA9EDB8F4AB95E83C813 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_todo, Type_t* ___1_scopeType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_JobWorkerCount_mECB1507F27193AB2B0FDF14D375C2913A78DC8B3 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D18A3514F6D070AC8C047BBFCFC1659A67EE1E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787_mFCBFFDD3A70242F3FD93CB7ABAC68E6C834FCDEB (RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530_m56BAD1725265F12485D97AED622B58225457276E (RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF (RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B_m9551F6E502909FC3D07BF6055C985ABF1D890462 (RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_ScheduleBatchedJobs_mCA0E146397E30E31FB57C96DAA1820451886DACA (const RuntimeMethod* method) ;
inline void ParallelSortExtensions_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m839630944EE0B64A28D49E4734782848470998C2 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___0_a, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___1_b, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))ParallelSortExtensions_Swap_TisIl2CppFullySharedGenericStruct_m2B711BE52422A0F57CAEA7CABE48A47F62E232D1_fshared)(___0_a, ___1_b, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E3417425C9B76FA372D6033A174ABAA465BFFAC (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJob_2_Schedule_m22719A523B631BE6909546A645D7FE71F71286E8 (SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2AFC4B45EECC2B6C4D08C1975119242CD448FF9B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA8531DC1B7696C5771660F84BEFAAD1B126030D1 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F_m2FFB988104525A51F97B8CC2ED54A81E3CF19E18 (RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16_m11ADB6F6B132D92CB2259D94067C713502FBD390 (RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobForExtensions_ScheduleParallel_TisRadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9_m1E47FA1ABDF4B8D0BD56EDC140FD68303AE7596D (RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9 ___0_jobData, int32_t ___1_arrayLength, int32_t ___2_innerloopBatchCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_dependency, const RuntimeMethod* method) ;
inline void ParallelSortExtensions_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m290CEB2407F3A0360548F9599A90F5C4D037F1FE (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___0_a, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___1_b, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, const RuntimeMethod*))ParallelSortExtensions_Swap_TisIl2CppFullySharedGenericStruct_m2B711BE52422A0F57CAEA7CABE48A47F62E232D1_fshared)(___0_a, ___1_b, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NativeArray_1_Dispose_mA8367AAA886520AD7C054D6B2908E0A692CC0F7F (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m558724A75AB46A488295884665059D7611FECE27 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 SortJob_2_Schedule_mFDC935A9492407CC030A6EB7E1985B02C9521349 (SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705 (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_inline (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_inline (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D (AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtilityInternal_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5AE01E222FB08F27EB26C6D2FE6F873A34BE8707_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m38B84F4395041C32077D6BD505700613A549E5B2_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtilityInternal_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBD52AD6E8736CB48656CFA0961D93E411266B81E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m3A3B9DFD873633E9078206152E40D232B1B0F8D2_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31703
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 31704
// Method Definition Index: 42762
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mFBA96C2F8E654CCDD8E763848FC9FE22A6B10AFD (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_array, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mE326C38BEA21D76FFA2FC6277F03B691FD78BCBA((&___0_array), NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___1_value;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8));
		DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 L_2 = V_0;
		int32_t L_3;
		L_3 = NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mB748E41133FA648FD7D940AF0E971865BCA13E3F(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 42762
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m70A23F9996288899EFD8F370B1759E06301828D2 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C ___0_array, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mC63E5C016C3C07DDF18DFD9A02917222DDB21015((&___0_array), NULL);
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_1 = ___1_value;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6));
		DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 L_2 = V_0;
		int32_t L_3;
		L_3 = NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_m3CEE3D91A42433B257641A0D31E5FD223FD3342A(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// Method Definition Index: 42762
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC9279282A45E664CC781D4F3C87B50FA575B81B8 (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___0_array, uint32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_m06264171851390A04DB013C77825476FA7254C9C((&___0_array), NULL);
		uint32_t L_1 = ___1_value;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1));
		DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 L_2 = V_0;
		int32_t L_3;
		L_3 = NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_mCCD413733A610B9D8F9FC3C9B02FF7F74EDF310B(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 42762
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m3A6F8C968B38411A4351D3E06251E4A6830BDE23_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 42766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mF37FF893F4B9859C00A38E0D8AABABE18D409F58_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 42772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mEED7C960744565E22ABDCF47B04BB4F1D3D4D3AF_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 42764
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mE00CC35601503008B6319F4E8011CE96782269AE_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 42770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mEA378A66FE40F4B2A3ABCCE3C5CCDC6B77EEAC99_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0 = ___0_roSpan;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 42768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m4BA2B56A0EB03E04AECC09FFCF0B4320A4788AD6_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 42760
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m0B57431881D9F67C3BDA5D83629DB00DCCDF1BC8_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, ___2_value, SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		int32_t L_4;
		L_4 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// Method Definition Index: 42771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mB748E41133FA648FD7D940AF0E971865BCA13E3F (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ___0_roSpan, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___2_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_mF61164B41A8152ACB6105B33F27B617757703605_inline((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_2;
		L_2 = il2cpp_span_get_item((EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((Il2CppByReference*)&(((&___0_roSpan))->____pointer))->value, (0), ((&___0_roSpan))->____length);
		V_1 = L_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___1_value;
		DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 L_7 = ___2_comp;
		int32_t L_8;
		L_8 = NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mF045AD0E0A0315C9D98F9FD347EEEF6E24C73ADC((EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		return (-1);
	}
}
// Method Definition Index: 42771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_m3CEE3D91A42433B257641A0D31E5FD223FD3342A (ReadOnlySpan_1_tC220B03984F68939D089A1AE074266FCC0EC16CA ___0_roSpan, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m374611371AE053D62AD05BA8C8B9FFDF0B82B996_inline((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_2;
		L_2 = il2cpp_span_get_item((InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)((Il2CppByReference*)&(((&___0_roSpan))->____pointer))->value, (0), ((&___0_roSpan))->____length);
		V_1 = L_2;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_6 = ___1_value;
		DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 L_7 = ___2_comp;
		int32_t L_8;
		L_8 = NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_mF85FE315B6BD04F8B703C4EB4DDD36A9D24C2D8A((InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_8;
	}

IL_0020:
	{
		return (-1);
	}
}
// Method Definition Index: 42771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_mCCD413733A610B9D8F9FC3C9B02FF7F74EDF310B (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_roSpan, uint32_t ___1_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___2_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		uint32_t* L_2;
		L_2 = il2cpp_span_get_item((uint32_t*)((Il2CppByReference*)&(((&___0_roSpan))->____pointer))->value, (0), ((&___0_roSpan))->____length);
		V_1 = L_2;
		uint32_t* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		uint32_t L_6 = ___1_value;
		DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 L_7 = ___2_comp;
		int32_t L_8;
		L_8 = NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_m336558E7336C81B8B72EFCB422A4275D0FD0F09F((uint32_t*)L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		return (-1);
	}
}
// Method Definition Index: 42763
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m18BDEFA9ACBD2B0621A230F42CA1190C13E40A59_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// Method Definition Index: 42767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEB3008F32EC83831765762622BBB11C6B7BC1D7C_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// Method Definition Index: 42773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mD435A28E9461F36F9490F8E0CF60763FE5B5EED3_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
	//<source_info:<no-source>:1>
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_container), NULL);
		il2cpp_codegen_memcpy(L_3, ___1_value, SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
// Method Definition Index: 42765
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m67CE23383C6721FDEF03FE37FD31C02F398B4C2B_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// Method Definition Index: 42771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_roSpan), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, ___1_value, SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
		int32_t L_8;
		L_8 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (Il2CppFullySharedGenericStruct*)L_4, L_5, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_7: *(void**)L_7));
		return L_8;
	}

IL_0020:
	{
		return (-1);
	}
}
// Method Definition Index: 42769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE55072B5E1ACDB3644FBC3A1E093674E369CBFFB_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
	//<source_info:<no-source>:1>
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// Method Definition Index: 42761
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisDefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8_mF045AD0E0A0315C9D98F9FD347EEEF6E24C73ADC (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, DefaultComparer_1_tC1A019F89436303DBF74FE9A5AEBA7CCBE80F4A8 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_7 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))));
		V_3 = L_7;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = ___2_value;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9 = V_3;
		int32_t L_10;
		L_10 = DefaultComparer_1_Compare_m2B69906CEFD90B0F959BCBA26240427D5E34E237((&___3_comp), L_8, L_9, NULL);
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0034:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0041:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)(L_16>>1));
	}

IL_0045:
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_18 = V_0;
		return ((~L_18));
	}
}
// Method Definition Index: 42761
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_TisDefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6_mF85FE315B6BD04F8B703C4EB4DDD36A9D24C2D8A (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_ptr, int32_t ___1_length, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_value, DefaultComparer_1_t3EB163AA9F21E455B84313C720D026D0E1D76AC6 ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B);
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_7 = (*(InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)((InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))));
		V_3 = L_7;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_8 = ___2_value;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_9 = V_3;
		int32_t L_10;
		L_10 = DefaultComparer_1_Compare_mFC06C4A12E61CBB1E919D96EAA1B14B36829682A((&___3_comp), L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0034:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0041:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)(L_16>>1));
	}

IL_0045:
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_18 = V_0;
		return ((~L_18));
	}
}
// Method Definition Index: 42761
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisDefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1_m336558E7336C81B8B72EFCB422A4275D0FD0F09F (uint32_t* ___0_ptr, int32_t ___1_length, uint32_t ___2_value, DefaultComparer_1_t1267744F40E78AC60B232E07670884E601399EA1 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		uint32_t* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(uint32_t);
		uint32_t L_7 = (*(uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))));
		V_3 = L_7;
		uint32_t L_8 = ___2_value;
		uint32_t L_9 = V_3;
		int32_t L_10;
		L_10 = DefaultComparer_1_Compare_m3D3D830C6ED5074DBB34AE5D0FD965358815B855((&___3_comp), L_8, L_9, NULL);
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0034:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0041:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)(L_16>>1));
	}

IL_0045:
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_18 = V_0;
		return ((~L_18));
	}
}
// Method Definition Index: 42761
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	memset(V_3, 0, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		Il2CppFullySharedGenericStruct* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D;
		il2cpp_codegen_memcpy(L_7, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))), SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(V_3, L_7, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(L_8, ___2_value, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_comp : &___3_comp), &L_11, L_10);
		int32_t L_13 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9);
		V_4 = L_13;
		int32_t L_14 = V_4;
		if (L_14)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_15 = V_2;
		return L_15;
	}

IL_0034:
	{
		int32_t L_16 = V_4;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_17 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0041:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)(L_19>>1));
	}

IL_0045:
	{
		int32_t L_20 = V_1;
		if (L_20)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_21 = V_0;
		return ((~L_21));
	}
}
// Method Definition Index: 42819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckComparer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m85F09B28E4C56532C553F26702140AD780B0C83F_fshared (Il2CppFullySharedGenericStruct* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_38 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_51 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_16 = L_2;
	const Il2CppFullySharedGenericStruct L_23 = L_2;
	const Il2CppFullySharedGenericStruct L_29 = L_2;
	const Il2CppFullySharedGenericStruct L_36 = L_2;
	const Il2CppFullySharedGenericStruct L_43 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_17 = L_3;
	const Il2CppFullySharedGenericStruct L_24 = L_3;
	const Il2CppFullySharedGenericStruct L_30 = L_3;
	const Il2CppFullySharedGenericStruct L_37 = L_3;
	const Il2CppFullySharedGenericStruct L_44 = L_3;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_18 = L_4;
	const Il2CppFullySharedGenericStruct L_49 = L_4;
	const Il2CppFullySharedGenericStruct L_50 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_0, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_3, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1 = ___0_array;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_6, L_5);
		int32_t L_8 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_7, L_6.method,L_6.thisPtr, L_3, L_4);
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002a:
	{
		V_1 = 1;
		int32_t L_10 = ___1_length;
		int32_t L_11;
		L_11 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(L_10, 8, NULL);
		V_2 = L_11;
		goto IL_00d3;
	}

IL_0039:
	{
		Il2CppFullySharedGenericStruct* L_12 = ___0_array;
		int32_t L_13 = V_1;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619;
		il2cpp_codegen_memcpy(L_16, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_3, L_16, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_17, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_18, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_20, L_19);
		int32_t L_22 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_21, L_20.method,L_20.thisPtr, L_17, L_18);
		if (L_22)
		{
			goto IL_006c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_23, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_26, L_25);
		int32_t L_28 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_27, L_26.method,L_26.thisPtr, L_23, L_24);
		if (!L_28)
		{
			goto IL_00cf;
		}
	}

IL_006c:
	{
		il2cpp_codegen_memcpy(L_29, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_32, L_31);
		int32_t L_34 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_33, L_32.method,L_32.thisPtr, L_29, L_30);
		if (L_34)
		{
			goto IL_0088;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_35 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}

IL_0088:
	{
		il2cpp_codegen_memcpy(L_36, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_37, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_39;
		Il2CppMethodPointer L_40 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_39, L_38);
		int32_t L_41 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_40, L_39.method,L_39.thisPtr, L_36, L_37);
		if (L_41)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_00a4:
	{
		il2cpp_codegen_memcpy(L_43, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_44, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_46;
		Il2CppMethodPointer L_47 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_46, L_45);
		int32_t L_48 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_47, L_46.method,L_46.thisPtr, L_43, L_44);
		il2cpp_codegen_memcpy(L_49, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_50, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_52;
		Il2CppMethodPointer L_53 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_52, L_51);
		int32_t L_54 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_53, L_52.method,L_52.thisPtr, L_49, L_50);
		if ((!(((uint32_t)L_48) == ((uint32_t)L_54))))
		{
			goto IL_00da;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_55 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_55, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
	}

IL_00cf:
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00d3:
	{
		int32_t L_57 = V_1;
		int32_t L_58 = V_2;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0039;
		}
	}

IL_00da:
	{
		return;
	}
}
// Method Definition Index: 42818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckStrideMatchesSize_TisIl2CppFullySharedGenericStruct_mA73CB99208E9AE13EAB0F7E1854579E56B98B6E1_fshared (int32_t ___0_stride, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1E4378C7A520A3CCB1C179FD37AC45442DD53E36 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_stride;
		uint32_t L_1 = SizeOf_T_t1E4378C7A520A3CCB1C179FD37AC45442DD53E36;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		return;
	}
}
// Method Definition Index: 42806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m54023D89607E52DAAF70FC0AC1566BE018C94951 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_7 = ___3_comp;
		NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37(L_3, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_18 = ___3_comp;
		NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m64966317ECC8D7CDB0D08299D54C0515AFA10BC7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_7 = ___3_comp;
		NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA(L_3, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_18 = ___3_comp;
		NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mC7889E64AB70C508749FF7769C180D3BED4BC4CF (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_7 = ___3_comp;
		NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2(L_3, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_18 = ___3_comp;
		NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m52C7968B61CD160CE7276D6768B010C26565185A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_7 = ___3_comp;
		NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3(L_3, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_18 = ___3_comp;
		NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
	const Il2CppFullySharedGenericAny L_18 = L_7;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_7: *(void**)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_18: *(void**)L_18));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m29CD0E18938F36295FC793E98250D48F9835B32F (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_7 = ___3_comp;
		NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC(L_3, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = V_2;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = ___1_lo;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_18 = ___3_comp;
		NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC(L_15, 1, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
	const Il2CppFullySharedGenericAny L_22 = L_9;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___2_hi;
		int32_t L_1 = *(L_0);
		int32_t* L_2 = ___1_lo;
		int32_t L_3 = *(L_2);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_1, L_3)), 1));
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_4/2));
		goto IL_001c;
	}

IL_000e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		int32_t* L_8 = ___1_lo;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_9: *(void**)L_9));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_001c:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0042;
	}

IL_0024:
	{
		void* L_13 = ___0_array;
		int32_t* L_14 = ___1_lo;
		int32_t L_15 = *(L_14);
		int32_t* L_16 = ___1_lo;
		int32_t L_17 = *(L_16);
		int32_t L_18 = V_2;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_17, L_18)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_19 = ___0_array;
		int32_t L_20 = V_2;
		int32_t* L_21 = ___1_lo;
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_19, 1, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_22: *(void**)L_22));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0042:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m95FBD7CAAE1997DE4D22F9D8D6AEC37EB2B26D37 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B4_0 = NULL;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		int32_t L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), NULL);
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		int32_t L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), NULL);
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		int32_t L_31;
		L_31 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), NULL);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, NULL);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		int32_t L_38 = V_0;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, NULL);
		return;
	}
}
// Method Definition Index: 42807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA1D6086C38D6952AA634FBC9BED57D65A58F68BA (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B4_0 = NULL;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		uint64_t L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		uint64_t L_11;
		L_11 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), NULL);
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		uint64_t L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), NULL);
		uint64_t L_23 = V_0;
		int32_t L_24;
		L_24 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		uint64_t L_31;
		L_31 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), NULL);
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, NULL);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		uint64_t L_38 = V_0;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, NULL);
		return;
	}
}
// Method Definition Index: 42807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1DB8637532087D9DDA1D1FA160D8396B23EE30D2 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B4_0 = NULL;
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), NULL);
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		int32_t L_24;
		L_24 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), NULL);
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, NULL);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_0;
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, NULL);
		return;
	}
}
// Method Definition Index: 42807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0E63AE9C4FFB1E0893D9A562072BAFF57BFF74A3 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B4_0 = NULL;
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), NULL);
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_0;
		int32_t L_24;
		L_24 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31;
		L_31 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), NULL);
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, NULL);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38 = V_0;
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, NULL);
		return;
	}
}
// Method Definition Index: 42807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	const Il2CppFullySharedGenericStruct L_29 = L_3;
	const Il2CppFullySharedGenericStruct L_41 = L_3;
	const Il2CppFullySharedGenericStruct L_48 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_30 = L_17;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_23 = L_7;
	const Il2CppFullySharedGenericAny L_25 = L_7;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	memset(V_0, 0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(V_2, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B4_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B3_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B8_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B7_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_8 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_7);
		if (L_8)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_0033;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_9, G_B3_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_0033:
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___3_lo;
		int32_t L_12 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1)), (Il2CppFullySharedGenericStruct*)L_13);
		void* L_14 = ___0_array;
		int32_t L_15 = ___3_lo;
		int32_t L_16 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), (Il2CppFullySharedGenericStruct*)L_17);
		Il2CppConstrainedCallData L_19;
		Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B4_0, &L_19, L_18);
		int32_t L_21 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_20, L_19.method,L_19.thisPtr, L_13, L_17);
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_23);
		if (L_24)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_0073;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_25, G_B7_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_2, L_25, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_0073:
	{
		void* L_26 = ___0_array;
		int32_t L_27 = ___3_lo;
		int32_t L_28 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_26, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_27, L_28)), 1)), (Il2CppFullySharedGenericStruct*)L_29);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B8_0, &L_32, L_31);
		int32_t L_34 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_33, L_32.method,L_32.thisPtr, L_29, L_30);
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		void* L_38 = ___0_array;
		int32_t L_39 = ___3_lo;
		int32_t L_40 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, L_40)), 1)), (Il2CppFullySharedGenericStruct*)L_41);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_41);
		int32_t L_42 = V_1;
		___1_i = L_42;
	}

IL_00a6:
	{
		int32_t L_43 = ___1_i;
		int32_t L_44 = ___2_n;
		if ((((int32_t)L_43) <= ((int32_t)((int32_t)(L_44/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_45 = ___0_array;
		int32_t L_46 = ___3_lo;
		int32_t L_47 = ___1_i;
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_45, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_46, L_47)), 1)), L_48);
		return;
	}
}
// Method Definition Index: 42807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mC9F6BFCA75B210DE7E56AF2CCAE5CFDC99E3F2CC (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B4_0 = NULL;
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B8_0 = NULL;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_3;
		L_3 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), NULL);
		V_0 = L_3;
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B4_0 = (&___4_comp);
		goto IL_0033;
	}

IL_0033:
	{
		void* L_8 = ___0_array;
		int32_t L_9 = ___3_lo;
		int32_t L_10 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_11;
		L_11 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), 1)), NULL);
		void* L_12 = ___0_array;
		int32_t L_13 = ___3_lo;
		int32_t L_14 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_12, ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B4_0, L_11, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B8_0 = (&___4_comp);
		goto IL_0073;
	}

IL_0073:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = ___3_lo;
		int32_t L_21 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_22;
		L_22 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1)), NULL);
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_23 = V_0;
		int32_t L_24;
		L_24 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B8_0, L_22, L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_25 = ___0_array;
		int32_t L_26 = ___3_lo;
		int32_t L_27 = ___1_i;
		void* L_28 = ___0_array;
		int32_t L_29 = ___3_lo;
		int32_t L_30 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_31;
		L_31 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1)), NULL);
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_26, L_27)), 1)), L_31, NULL);
		int32_t L_32 = V_1;
		___1_i = L_32;
	}

IL_00a6:
	{
		int32_t L_33 = ___1_i;
		int32_t L_34 = ___2_n;
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_38 = V_0;
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), L_38, NULL);
		return;
	}
}
// Method Definition Index: 42815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t* ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_15 = L_4;
	const Il2CppFullySharedGenericStruct L_33 = L_4;
	const Il2CppFullySharedGenericStruct L_47 = L_4;
	const Il2CppFullySharedGenericStruct L_55 = L_4;
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_34 = L_20;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_26 = L_8;
	const Il2CppFullySharedGenericAny L_28 = L_8;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	memset(V_0, 0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(V_2, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B4_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B3_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B8_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B7_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	{
		void* L_0 = ___0_array;
		int32_t* L_1 = ___3_lo;
		int32_t L_2 = *(L_1);
		int32_t L_3 = ___1_i;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1)), (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		goto IL_00ac;
	}

IL_0012:
	{
		int32_t L_5 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_5));
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_n;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_8);
		if (L_9)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
			goto IL_0034;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}
	{
		il2cpp_codegen_memcpy(L_10, G_B3_0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(V_2, L_10, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}

IL_0034:
	{
		void* L_11 = ___0_array;
		int32_t* L_12 = ___3_lo;
		int32_t L_13 = *(L_12);
		int32_t L_14 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_11, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), (Il2CppFullySharedGenericStruct*)L_15);
		void* L_16 = ___0_array;
		int32_t* L_17 = ___3_lo;
		int32_t L_18 = *(L_17);
		int32_t L_19 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_16, ((int32_t)il2cpp_codegen_add(L_18, L_19)), (Il2CppFullySharedGenericStruct*)L_20);
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B4_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_15, L_20);
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005c:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		bool L_27 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_26);
		if (L_27)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
			goto IL_0076;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}
	{
		il2cpp_codegen_memcpy(L_28, G_B7_0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(V_2, L_28, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}

IL_0076:
	{
		void* L_29 = ___0_array;
		int32_t* L_30 = ___3_lo;
		int32_t L_31 = *(L_30);
		int32_t L_32 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_29, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_31, L_32)), 1)), (Il2CppFullySharedGenericStruct*)L_33);
		il2cpp_codegen_memcpy(L_34, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B8_0, &L_36, L_35);
		int32_t L_38 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_37, L_36.method,L_36.thisPtr, L_33, L_34);
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		void* L_39 = ___0_array;
		int32_t* L_40 = ___3_lo;
		int32_t L_41 = *(L_40);
		int32_t L_42 = ___1_i;
		void* L_43 = ___0_array;
		int32_t* L_44 = ___3_lo;
		int32_t L_45 = *(L_44);
		int32_t L_46 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_43, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_45, L_46)), 1)), (Il2CppFullySharedGenericStruct*)L_47);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_39, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_42)), 1)), L_47);
		int32_t L_48 = V_1;
		___1_i = L_48;
	}

IL_00ac:
	{
		int32_t L_49 = ___1_i;
		int32_t L_50 = ___2_n;
		if ((((int32_t)L_49) <= ((int32_t)((int32_t)(L_50/2)))))
		{
			goto IL_0012;
		}
	}

IL_00b5:
	{
		void* L_51 = ___0_array;
		int32_t* L_52 = ___3_lo;
		int32_t L_53 = *(L_52);
		int32_t L_54 = ___1_i;
		il2cpp_codegen_memcpy(L_55, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_51, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_53, L_54)), 1)), L_55);
		return;
	}
}
// Method Definition Index: 42804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m447AB14969900EBF8D724FA0B06248EEC3C5BEE1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_7, L_8, NULL);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mE83B78A4E21385E054DAB6E54096B204E27CCF05 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		uint64_t L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		uint64_t L_9;
		L_9 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_7, L_8, NULL);
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		uint64_t L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		uint64_t L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		uint64_t L_21 = V_2;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m9E3D7E2805653AB57ACC999FCE41FD4C78A5FF31 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA V_3;
	memset((&V_3), 0, sizeof(V_3));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_7, L_8, NULL);
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_2;
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m2F5777B14162A9539E616742C8D29AC1769517D0 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B V_3;
	memset((&V_3), 0, sizeof(V_3));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_7, L_8, NULL);
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = V_2;
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_16 = L_4;
	const Il2CppFullySharedGenericStruct L_26 = L_4;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	const Il2CppFullySharedGenericAny L_15 = L_13;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	memset(V_2, 0, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(V_3, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B6_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B5_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(L_13, V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_13);
		if (L_14)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
			goto IL_0044;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}
	{
		il2cpp_codegen_memcpy(L_15, G_B5_0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(V_3, L_15, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_16, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		void* L_17 = ___0_array;
		int32_t L_18 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_17, L_18, (Il2CppFullySharedGenericStruct*)L_19);
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_21, L_20);
		int32_t L_23 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_22, L_21.method,L_21.thisPtr, L_16, L_19);
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_24 = ___0_array;
		int32_t L_25 = V_1;
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0068:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = ___2_hi;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mE1E3E6FEAAF3E0DBBFC735EDC3267ECA2221A628 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B6_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_4;
		L_4 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_9;
		L_9 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_7, L_8, NULL);
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0026:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_lo;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B6_0 = (&___3_comp);
		goto IL_0044;
	}

IL_0044:
	{
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_14 = V_2;
		void* L_15 = ___0_array;
		int32_t L_16 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B6_0, L_14, L_17, NULL);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_21 = V_2;
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), L_21, NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_22 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	const Il2CppFullySharedGenericStruct L_10 = L_5;
	const Il2CppFullySharedGenericStruct L_18 = L_5;
	const Il2CppFullySharedGenericStruct L_28 = L_5;
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	memset(V_2, 0, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(V_3, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(G_B6_0, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(G_B5_0, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	{
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		goto IL_006a;
	}

IL_0005:
	{
		int32_t L_2 = V_0;
		V_1 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), (Il2CppFullySharedGenericStruct*)L_5);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		goto IL_0027;
	}

IL_0013:
	{
		void* L_6 = ___0_array;
		int32_t L_7 = V_1;
		void* L_8 = ___0_array;
		int32_t L_9 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0027:
	{
		int32_t L_12 = V_1;
		int32_t* L_13 = ___1_lo;
		int32_t L_14 = *(L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(L_15, V_3, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_15);
		if (L_16)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
			goto IL_0046;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(V_3, L_17, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	}

IL_0046:
	{
		il2cpp_codegen_memcpy(L_18, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		void* L_19 = ___0_array;
		int32_t L_20 = V_1;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_19, L_20, (Il2CppFullySharedGenericStruct*)L_21);
		Il2CppConstrainedCallData L_23;
		Il2CppMethodPointer L_24 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_23, L_22);
		int32_t L_25 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_24, L_23.method,L_23.thisPtr, L_18, L_21);
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}

IL_005c:
	{
		void* L_26 = ___0_array;
		int32_t L_27 = V_1;
		il2cpp_codegen_memcpy(L_28, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_26, ((int32_t)il2cpp_codegen_add(L_27, 1)), L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_006a:
	{
		int32_t L_30 = V_0;
		int32_t* L_31 = ___2_hi;
		int32_t L_32 = *(L_31);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mB34BF7D82E1E5889BE988B230C11EE6842993231 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m322E3D4D2DAD5DD1A61A78DCA08C5BE424E2BCAA (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m4809F01D470D4466F76AD547CCBB126B73C0DE04 (void* ___0_array, int32_t ___1_length, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mB6DC15F5849FB6406A1E060F37717E801CA1AA9C (void* ___0_array, int32_t ___1_length, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_4: *(void**)L_4));
		return;
	}
}
// Method Definition Index: 42802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m9B0BEB44FDA36870CF47F7A7995FD97E953FE551 (void* ___0_array, int32_t ___1_length, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_4 = ___2_comp;
		NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		void* L_0 = ___0_array;
		V_0 = 0;
		int32_t L_1 = ___1_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
		InvokerActionInvoker5< void*, int32_t*, int32_t*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, (&V_0), (&V_1), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_4: *(void**)L_4));
		return;
	}
}
// Method Definition Index: 42811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2__hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_18 = L_12;
	const Il2CppFullySharedGenericAny L_30 = L_12;
	const Il2CppFullySharedGenericAny L_34 = L_12;
	const Il2CppFullySharedGenericAny L_38 = L_12;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_43 = L_23;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___2__hi;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		goto IL_0093;
	}

IL_0008:
	{
		int32_t L_2 = V_0;
		int32_t* L_3 = ___1_lo;
		int32_t L_4 = *(L_3);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, L_4)), 1));
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)16))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		void* L_8 = ___0_array;
		int32_t* L_9 = ___1_lo;
		int32_t L_10 = *(L_9);
		int32_t L_11 = V_0;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_8, L_10, L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_12: *(void**)L_12));
		return;
	}

IL_0029:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0052;
		}
	}
	{
		void* L_14 = ___0_array;
		int32_t* L_15 = ___1_lo;
		int32_t L_16 = *(L_15);
		int32_t L_17 = V_0;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_14, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_18: *(void**)L_18));
		void* L_19 = ___0_array;
		int32_t* L_20 = ___1_lo;
		int32_t L_21 = *(L_20);
		int32_t L_22 = V_0;
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_19, L_21, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_23: *(void**)L_23));
		void* L_24 = ___0_array;
		int32_t L_25 = V_0;
		int32_t L_26 = V_0;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_27: *(void**)L_27));
		return;
	}

IL_0052:
	{
		void* L_28 = ___0_array;
		int32_t* L_29 = ___1_lo;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_28, L_29, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_30: *(void**)L_30));
		return;
	}

IL_005e:
	{
		int32_t L_31 = ___3_depth;
		if (L_31)
		{
			goto IL_006d;
		}
	}
	{
		void* L_32 = ___0_array;
		int32_t* L_33 = ___1_lo;
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker4< void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_32, L_33, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_34: *(void**)L_34));
		return;
	}

IL_006d:
	{
		int32_t L_35 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		void* L_36 = ___0_array;
		int32_t* L_37 = ___1_lo;
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		int32_t L_39;
		L_39 = InvokerFuncInvoker4< int32_t, void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_36, L_37, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_38: *(void**)L_38));
		V_2 = L_39;
		void* L_40 = ___0_array;
		int32_t L_41 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = ___3_depth;
		il2cpp_codegen_memcpy(L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		InvokerActionInvoker5< void*, int32_t*, int32_t*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_40, (&V_3), (&V_0), L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_43: *(void**)L_43));
		int32_t L_44 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
	}

IL_0093:
	{
		int32_t L_45 = V_0;
		int32_t* L_46 = ___1_lo;
		int32_t L_47 = *(L_46);
		if ((((int32_t)L_45) > ((int32_t)L_47)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, NULL);
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_14, L_15, L_16, L_17, NULL);
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, NULL);
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m447AB14969900EBF8D724FA0B06248EEC3C5BEE1(L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_30 = ___4_comp;
		NativeSortExtension_HeapSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m54023D89607E52DAAF70FC0AC1566BE018C94951(L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mA078BD6B0BDB0F4C3A6F227E4CA458FB10BF467D(L_32, L_33, L_34, L_35, NULL);
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m7568EE94C3A5FC293CBBEDB556DC0DA15AAB9293(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, NULL);
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_14, L_15, L_16, L_17, NULL);
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, NULL);
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mE83B78A4E21385E054DAB6E54096B204E27CCF05(L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_30 = ___4_comp;
		NativeSortExtension_HeapSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m64966317ECC8D7CDB0D08299D54C0515AFA10BC7(L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mF3F91FD1CF91BB4367FD7C8CF287619B5166FFB7(L_32, L_33, L_34, L_35, NULL);
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m27590C9F0AEFCA1390119C115B59FA3F575C5654(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, NULL);
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_14, L_15, L_16, L_17, NULL);
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, NULL);
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m9E3D7E2805653AB57ACC999FCE41FD4C78A5FF31(L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_30 = ___4_comp;
		NativeSortExtension_HeapSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mC7889E64AB70C508749FF7769C180D3BED4BC4CF(L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m964B018FFC885A109E0433749F04B5B34653958B(L_32, L_33, L_34, L_35, NULL);
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_mCF9CF53D2E83C285F1321C27C69557E4651D6ACB(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, NULL);
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_14, L_15, L_16, L_17, NULL);
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, NULL);
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m2F5777B14162A9539E616742C8D29AC1769517D0(L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_30 = ___4_comp;
		NativeSortExtension_HeapSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m52C7968B61CD160CE7276D6768B010C26565185A(L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m67CD3E816521190FB9EC7208099D2E5E393DBF7A(L_32, L_33, L_34, L_35, NULL);
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF3782B93EC1497E345160D7FF8BFDA1E96A061B1(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	const Il2CppFullySharedGenericAny L_25 = L_8;
	const Il2CppFullySharedGenericAny L_30 = L_8;
	const Il2CppFullySharedGenericAny L_35 = L_8;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_41 = L_17;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_8: *(void**)L_8));
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_13: *(void**)L_13));
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_14, L_15, L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_17: *(void**)L_17));
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_21: *(void**)L_21));
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_23, L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_25: *(void**)L_25));
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_27, L_28, L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_30: *(void**)L_30));
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		int32_t L_36;
		L_36 = InvokerFuncInvoker4< int32_t, void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_32, L_33, L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_35: *(void**)L_35));
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		InvokerActionInvoker5< void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_41: *(void**)L_41));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_8 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lo;
		int32_t L_12 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_13 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), L_13, NULL);
		void* L_14 = ___0_array;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_17 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_14, L_15, L_16, L_17, NULL);
		void* L_18 = ___0_array;
		int32_t L_19 = ___2_hi;
		int32_t L_20 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_21 = ___4_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), L_20, L_21, NULL);
		return;
	}

IL_004b:
	{
		void* L_22 = ___0_array;
		int32_t L_23 = ___1_lo;
		int32_t L_24 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_25 = ___4_comp;
		NativeSortExtension_InsertionSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mE1E3E6FEAAF3E0DBBFC735EDC3267ECA2221A628(L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_0056:
	{
		int32_t L_26 = ___3_depth;
		if (L_26)
		{
			goto IL_0064;
		}
	}
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___1_lo;
		int32_t L_29 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_30 = ___4_comp;
		NativeSortExtension_HeapSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m29CD0E18938F36295FC793E98250D48F9835B32F(L_27, L_28, L_29, L_30, NULL);
		return;
	}

IL_0064:
	{
		int32_t L_31 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_35 = ___4_comp;
		int32_t L_36;
		L_36 = NativeSortExtension_Partition_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m659221DBCD9303407ACE89F7078861892495AD48(L_32, L_33, L_34, L_35, NULL);
		V_1 = L_36;
		void* L_37 = ___0_array;
		int32_t L_38 = V_1;
		int32_t L_39 = ___2_hi;
		int32_t L_40 = ___3_depth;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_41 = ___4_comp;
		NativeSortExtension_IntroSort_R_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_mF29182424CD96B8DA842ADD166D93482432E5A46(L_37, ((int32_t)il2cpp_codegen_add(L_38, 1)), L_39, L_40, L_41, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_42 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0086:
	{
		int32_t L_43 = ___2_hi;
		int32_t L_44 = ___1_lo;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 42805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mA078BD6B0BDB0F4C3A6F227E4CA458FB10BF467D (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B4_0 = NULL;
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_3, L_4, L_5, L_6, NULL);
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_7, L_8, L_9, L_10, NULL);
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55(L_11, L_12, L_13, L_14, NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_15, L_16, NULL);
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		int32_t L_30;
		L_30 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_27, L_29, NULL);
		int32_t L_31;
		L_31 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		int32_t L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		int32_t L_39;
		L_39 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_36, L_38, NULL);
		int32_t L_40;
		L_40 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_43, L_44, L_45, NULL);
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		int32_t L_51 = V_2;
		return L_51;
	}
}
// Method Definition Index: 42805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mF3F91FD1CF91BB4367FD7C8CF287619B5166FFB7 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B4_0 = NULL;
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_3, L_4, L_5, L_6, NULL);
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_7, L_8, L_9, L_10, NULL);
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B(L_11, L_12, L_13, L_14, NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		uint64_t L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_15, L_16, NULL);
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		uint64_t L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		uint64_t L_30;
		L_30 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_27, L_29, NULL);
		int32_t L_31;
		L_31 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		uint64_t L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		uint64_t L_39;
		L_39 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_36, L_38, NULL);
		int32_t L_40;
		L_40 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_43, L_44, L_45, NULL);
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		int32_t L_51 = V_2;
		return L_51;
	}
}
// Method Definition Index: 42805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m964B018FFC885A109E0433749F04B5B34653958B (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA V_4;
	memset((&V_4), 0, sizeof(V_4));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B4_0 = NULL;
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_3, L_4, L_5, L_6, NULL);
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_7, L_8, L_9, L_10, NULL);
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682(L_11, L_12, L_13, L_14, NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_15, L_16, NULL);
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_27, L_29, NULL);
		int32_t L_31;
		L_31 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_36, L_38, NULL);
		int32_t L_40;
		L_40 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_43, L_44, L_45, NULL);
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		int32_t L_51 = V_2;
		return L_51;
	}
}
// Method Definition Index: 42805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m67CD3E816521190FB9EC7208099D2E5E393DBF7A (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B V_4;
	memset((&V_4), 0, sizeof(V_4));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B4_0 = NULL;
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_3, L_4, L_5, L_6, NULL);
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_7, L_8, L_9, L_10, NULL);
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C(L_11, L_12, L_13, L_14, NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_15, L_16, NULL);
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30;
		L_30 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_27, L_29, NULL);
		int32_t L_31;
		L_31 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39;
		L_39 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_36, L_38, NULL);
		int32_t L_40;
		L_40 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_43, L_44, L_45, NULL);
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		int32_t L_51 = V_2;
		return L_51;
	}
}
// Method Definition Index: 42805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_33 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_28 = L_17;
	const Il2CppFullySharedGenericStruct L_42 = L_17;
	const Il2CppFullySharedGenericStruct L_32 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_46 = L_32;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_25 = L_6;
	const Il2CppFullySharedGenericAny L_27 = L_6;
	const Il2CppFullySharedGenericAny L_39 = L_6;
	const Il2CppFullySharedGenericAny L_41 = L_6;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	memset(V_1, 0, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(V_4, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B4_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B3_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B8_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B7_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_6: *(void**)L_6));
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_7, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_10: *(void**)L_10));
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_11, L_12, L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_14: *(void**)L_14));
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_15, L_16, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_25, V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_26 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_25);
		if (L_26)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_0060;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_27, G_B3_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_4, L_27, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_0060:
	{
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_29 = ___0_array;
		int32_t L_30 = V_2;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_2 = L_31;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_29, L_31, (Il2CppFullySharedGenericStruct*)L_32);
		Il2CppConstrainedCallData L_34;
		Il2CppMethodPointer L_35 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B4_0, &L_34, L_33);
		int32_t L_36 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_35, L_34.method,L_34.thisPtr, L_28, L_32);
		if ((((int32_t)L_36) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_39, V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_39);
		if (L_40)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_009a;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B7_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_4, L_41, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_009a:
	{
		il2cpp_codegen_memcpy(L_42, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_43 = ___0_array;
		int32_t L_44 = V_3;
		int32_t L_45 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		V_3 = L_45;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_43, L_45, (Il2CppFullySharedGenericStruct*)L_46);
		Il2CppConstrainedCallData L_48;
		Il2CppMethodPointer L_49 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B8_0, &L_48, L_47);
		int32_t L_50 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_49, L_48.method,L_48.thisPtr, L_42, L_46);
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_51 = V_2;
		int32_t L_52 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)L_52)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_53 = ___0_array;
		int32_t L_54 = V_2;
		int32_t L_55 = V_3;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_53, L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_00c0:
	{
		int32_t L_56 = V_2;
		int32_t L_57 = V_3;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_58 = ___0_array;
		int32_t L_59 = V_2;
		int32_t L_60 = ___2_hi;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_58, L_59, ((int32_t)il2cpp_codegen_subtract(L_60, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_61 = V_2;
		return L_61;
	}
}
// Method Definition Index: 42805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m659221DBCD9303407ACE89F7078861892495AD48 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B4_0 = NULL;
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B8_0 = NULL;
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_6 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_3, L_4, L_5, L_6, NULL);
		void* L_7 = ___0_array;
		int32_t L_8 = ___1_lo;
		int32_t L_9 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_10 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_7, L_8, L_9, L_10, NULL);
		void* L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_hi;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_14 = ___3_comp;
		NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023(L_11, L_12, L_13, L_14, NULL);
		void* L_15 = ___0_array;
		int32_t L_16 = V_0;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_17;
		L_17 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_15, L_16, NULL);
		V_1 = L_17;
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		int32_t L_20 = ___2_hi;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), NULL);
		int32_t L_21 = ___1_lo;
		V_2 = L_21;
		int32_t L_22 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___2_hi;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B4_0 = (&___3_comp);
		goto IL_0060;
	}

IL_0060:
	{
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_26 = V_1;
		void* L_27 = ___0_array;
		int32_t L_28 = V_2;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_2 = L_29;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_30;
		L_30 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_27, L_29, NULL);
		int32_t L_31;
		L_31 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B4_0, L_26, L_30, NULL);
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B8_0 = (&___3_comp);
		goto IL_009a;
	}

IL_009a:
	{
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_35 = V_1;
		void* L_36 = ___0_array;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_3 = L_38;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_39;
		L_39 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_36, L_38, NULL);
		int32_t L_40;
		L_40 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B8_0, L_35, L_39, NULL);
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_43, L_44, L_45, NULL);
	}

IL_00c0:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_48 = ___0_array;
		int32_t L_49 = V_2;
		int32_t L_50 = ___2_hi;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		int32_t L_51 = V_2;
		return L_51;
	}
}
// Method Definition Index: 42813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_58 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_39 = L_24;
	const Il2CppFullySharedGenericStruct L_53 = L_24;
	const Il2CppFullySharedGenericStruct L_43 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_57 = L_43;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_36 = L_10;
	const Il2CppFullySharedGenericAny L_38 = L_10;
	const Il2CppFullySharedGenericAny L_50 = L_10;
	const Il2CppFullySharedGenericAny L_52 = L_10;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	memset(V_1, 0, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(V_4, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B4_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B3_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B8_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B7_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	{
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = *(L_0);
		int32_t* L_2 = ___2_hi;
		int32_t L_3 = *(L_2);
		int32_t* L_4 = ___1_lo;
		int32_t L_5 = *(L_4);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, L_5))/2))));
		void* L_6 = ___0_array;
		int32_t* L_7 = ___1_lo;
		int32_t L_8 = *(L_7);
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_6, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_10: *(void**)L_10));
		void* L_11 = ___0_array;
		int32_t* L_12 = ___1_lo;
		int32_t L_13 = *(L_12);
		int32_t* L_14 = ___2_hi;
		int32_t L_15 = *(L_14);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_11, L_13, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_16: *(void**)L_16));
		void* L_17 = ___0_array;
		int32_t L_18 = V_0;
		int32_t* L_19 = ___2_hi;
		int32_t L_20 = *(L_19);
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_17, L_18, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_21: *(void**)L_21));
		void* L_22 = ___0_array;
		int32_t L_23 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_23, (Il2CppFullySharedGenericStruct*)L_24);
		il2cpp_codegen_memcpy(V_1, L_24, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_25 = ___0_array;
		int32_t L_26 = V_0;
		int32_t* L_27 = ___2_hi;
		int32_t L_28 = *(L_27);
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_25, L_26, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t* L_29 = ___1_lo;
		int32_t L_30 = *(L_29);
		V_2 = L_30;
		int32_t* L_31 = ___2_hi;
		int32_t L_32 = *(L_31);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		goto IL_00cb;
	}

IL_004a:
	{
		int32_t L_33 = V_2;
		int32_t* L_34 = ___2_hi;
		int32_t L_35 = *(L_34);
		if ((((int32_t)L_33) >= ((int32_t)L_35)))
		{
			goto IL_0085;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(L_36, V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		bool L_37 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_36);
		if (L_37)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
			goto IL_006b;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}
	{
		il2cpp_codegen_memcpy(L_38, G_B3_0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(V_4, L_38, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}

IL_006b:
	{
		il2cpp_codegen_memcpy(L_39, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_40 = ___0_array;
		int32_t L_41 = V_2;
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		V_2 = L_42;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_40, L_42, (Il2CppFullySharedGenericStruct*)L_43);
		Il2CppConstrainedCallData L_45;
		Il2CppMethodPointer L_46 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B4_0, &L_45, L_44);
		int32_t L_47 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_46, L_45.method,L_45.thisPtr, L_39, L_43);
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}

IL_0085:
	{
		int32_t L_48 = V_3;
		int32_t L_49 = V_2;
		if ((((int32_t)L_48) <= ((int32_t)L_49)))
		{
			goto IL_00bf;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(L_50, V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		bool L_51 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_50);
		if (L_51)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
			goto IL_00a5;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}
	{
		il2cpp_codegen_memcpy(L_52, G_B7_0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(V_4, L_52, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}

IL_00a5:
	{
		il2cpp_codegen_memcpy(L_53, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_54 = ___0_array;
		int32_t L_55 = V_3;
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		V_3 = L_56;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_54, L_56, (Il2CppFullySharedGenericStruct*)L_57);
		Il2CppConstrainedCallData L_59;
		Il2CppMethodPointer L_60 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B8_0, &L_59, L_58);
		int32_t L_61 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_60, L_59.method,L_59.thisPtr, L_53, L_57);
		if ((((int32_t)L_61) < ((int32_t)0)))
		{
			goto IL_0085;
		}
	}

IL_00bf:
	{
		int32_t L_62 = V_2;
		int32_t L_63 = V_3;
		if ((((int32_t)L_62) >= ((int32_t)L_63)))
		{
			goto IL_00d2;
		}
	}
	{
		void* L_64 = ___0_array;
		int32_t L_65 = V_2;
		int32_t L_66 = V_3;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_64, L_65, L_66, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_00cb:
	{
		int32_t L_67 = V_2;
		int32_t L_68 = V_3;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_004a;
		}
	}

IL_00d2:
	{
		void* L_69 = ___0_array;
		int32_t L_70 = V_2;
		int32_t* L_71 = ___2_hi;
		int32_t L_72 = *(L_71);
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_69, L_70, ((int32_t)il2cpp_codegen_subtract(L_72, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_73 = V_2;
		return L_73;
	}
}
// Method Definition Index: 42782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		InvokerActionInvoker2< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return;
	}
}
// Method Definition Index: 42786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m1859D96C5F86215E7A5E852801B9AE8C2B95E239_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m4FEF95715361F218DC8D173A80638DD74D4CF9DC_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		InvokerActionInvoker2< NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1);
		return;
	}
}
// Method Definition Index: 42778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_6 = V_2;
		InvokerActionInvoker3< void*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (void*)L_4, L_5, L_6);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_7;
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 42794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mB449135843E754594001B0EAD70A205709265163_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m197B30912ECA075B47D7BD7712A9F37F52EA5D8D_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		InvokerActionInvoker3< void*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (void*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 42783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m5E371D15E2A098907CED70FD190AB6E6A7A7286D_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
	//<source_info:<no-source>:1>
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
		InvokerActionInvoker2< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return;
	}
}
// Method Definition Index: 42787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m740CC60990F0F5017BED9F38F26CECFCC1BA78C1_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
	//<source_info:<no-source>:1>
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
		InvokerActionInvoker2< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return;
	}
}
// Method Definition Index: 42799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m201F2E16B83FD461CE57913123761F986C0F912D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_container), NULL);
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		int32_t L_4 = V_1;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (void*)L_3, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_5: *(void**)L_5));
		return;
	}
}
// Method Definition Index: 42779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (void*)L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_6: *(void**)L_6));
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_7;
	}

IL_0021:
	{
		return;
	}
}
// Method Definition Index: 42795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEA0AAB94EC7DADF99B56086E173D45DD63A2AF35_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
	//<source_info:<no-source>:1>
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
		InvokerActionInvoker2< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return;
	}
}
// Method Definition Index: 42775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m0344C3607D0847D8650FC8FA00506A1B1F86BE56 (int32_t* ___0_ptr, int32_t ___1_length, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_2 = ___2_comp;
		NativeSortExtension_IntroSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_mB34BF7D82E1E5889BE988B230C11EE6842993231((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mEA1E342C937F1CBF8B0D3DA4587287B30FEF3409 (uint64_t* ___0_ptr, int32_t ___1_length, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		uint64_t* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_2 = ___2_comp;
		NativeSortExtension_IntroSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m322E3D4D2DAD5DD1A61A78DCA08C5BE424E2BCAA((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m383B74DDD5F54C3E0E999F92EE2FFA16BC3382DB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA L_2 = ___2_comp;
		NativeSortExtension_IntroSort_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m4809F01D470D4466F76AD547CCBB126B73C0DE04((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mF83C5EC5250358209A4F74DFF2A8122AD780F310 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B L_2 = ___2_comp;
		NativeSortExtension_IntroSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_mB6DC15F5849FB6406A1E060F37717E801CA1AA9C((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
	//<source_info:<no-source>:1>
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_2: *(void**)L_2));
		return;
	}
}
// Method Definition Index: 42775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m833A76E2A3090F3B6BF62151EA680FE358D76D75 (int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* ___0_ptr, int32_t ___1_length, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 L_2 = ___2_comp;
		NativeSortExtension_IntroSort_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m9B0BEB44FDA36870CF47F7A7995FD97E953FE551((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 42789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_m8294508A624290C25F7FD9D80316080CE83309F8_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___0_indices;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_1 = ___1_values;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		InvokerActionInvoker3< Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 42788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF75387D15CB11681384340B94B35E7AF9D80662F_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, Il2CppFullySharedGenericStruct ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
	const SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E L_7 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E V_2 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	memset(V_2, 0, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___1_values), NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_values), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		Il2CppFullySharedGenericStruct* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_2,NULL));
		V_0 = (Il2CppFullySharedGenericStruct*)L_3;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_4 = ___0_indices;
		il2cpp_codegen_initobj((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_2, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
		Il2CppFullySharedGenericStruct* L_5 = V_0;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), L_5);
		il2cpp_codegen_memcpy(L_6, ___2_comp, SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
		il2cpp_codegen_write_field_data<true>((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 5), L_6, SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
		InvokerActionInvoker2< Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316, SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_4, L_7);
		uintptr_t L_8 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_8;
	}

IL_0038:
	{
		return;
	}
}
// Method Definition Index: 42784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E3417425C9B76FA372D6033A174ABAA465BFFAC (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0;
		L_0 = NativeArray_1_AsSpan_mAFE9F40CE04C84DFB0D6C5C338015A226B0A3EB9((&___0_container), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_1 = V_0;
		SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 L_2;
		L_2 = NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m32C5AA6495C39886E9F10952078CDA9AB97ADECF(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 42784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m558724A75AB46A488295884665059D7611FECE27 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_0;
		L_0 = NativeArray_1_AsSpan_m52988A12DB01292F1C64E6786AA600A03601EF98((&___0_container), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_1 = V_0;
		SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 L_2;
		L_2 = NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA8CA6EFD2F7E8AEC5454721CD3338B95A4B706A8(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 42784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m52C3084BCC423645720ECD04047E9DFF095C1E04_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = InvokerFuncInvoker2< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 42790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mB0EF9F438D8F4C889C4190D038616A751AD65191_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = InvokerFuncInvoker2< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 42800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m618668B901D3B28C9500C5AF37A84C0F064D750B_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_container), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_4;
		L_4 = InvokerFuncInvoker3< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Il2CppFullySharedGenericStruct*, int32_t, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, L_3);
		return L_4;
	}
}
// Method Definition Index: 42780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m0E2D3F6358F92058E2A1689788F26C5180DCA723_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0 = ___0_span;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = InvokerFuncInvoker2< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 42796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mAD15487126464DAE40F7F98A11708118DC89AA8D_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = InvokerFuncInvoker2< SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 42776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mCDB8D25250D9675E93E37552EA51A8CB24C09931_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD));
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		(&V_0)->___Data = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___Length = L_1;
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522* L_2 = (DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522*)(&(&V_0)->___Comp);
		il2cpp_codegen_initobj(L_2, sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 42781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m32C5AA6495C39886E9F10952078CDA9AB97ADECF (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___1_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_2;
		L_2 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (0), ((&___0_span))->____length);
		V_2 = L_2;
		int32_t* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(L_3,NULL));
		V_1 = (int32_t*)L_4;
		il2cpp_codegen_initobj((&V_3), sizeof(SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03));
		int32_t* L_5 = V_1;
		(&V_3)->___Data = L_5;
		int32_t L_6 = V_0;
		(&V_3)->___Length = L_6;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_7 = ___1_comp;
		(&V_3)->___Comp = L_7;
		SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 L_8 = V_3;
		return L_8;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03));
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		(&V_3)->___Data = (int32_t*)L_9;
		(&V_3)->___Length = 0;
		DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 L_10 = ___1_comp;
		(&V_3)->___Comp = L_10;
		SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 L_11 = V_3;
		return L_11;
	}
}
// Method Definition Index: 42781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_mA8CA6EFD2F7E8AEC5454721CD3338B95A4B706A8 (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_span, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___1_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	uint64_t* V_2 = NULL;
	SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		uint64_t* L_2;
		L_2 = il2cpp_span_get_item((uint64_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (0), ((&___0_span))->____length);
		V_2 = L_2;
		uint64_t* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(L_3,NULL));
		V_1 = (uint64_t*)L_4;
		il2cpp_codegen_initobj((&V_3), sizeof(SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478));
		uint64_t* L_5 = V_1;
		(&V_3)->___Data = L_5;
		int32_t L_6 = V_0;
		(&V_3)->___Length = L_6;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_7 = ___1_comp;
		(&V_3)->___Comp = L_7;
		SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 L_8 = V_3;
		return L_8;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478));
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		(&V_3)->___Data = (uint64_t*)L_9;
		(&V_3)->___Length = 0;
		DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 L_10 = ___1_comp;
		(&V_3)->___Comp = L_10;
		SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 L_11 = V_3;
		return L_11;
	}
}
// Method Definition Index: 42785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mDEDD35A24EC7064750CF9A006D9ED072EC9CC47A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_2 = alloca(SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
	//<source_info:<no-source>:1>
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
		InvokerActionInvoker3< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
		return;
	}
}
// Method Definition Index: 42791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mB3A64630AC80B0CD54DDB37DABCA63F03F45C57D_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_2 = alloca(SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
	//<source_info:<no-source>:1>
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
		InvokerActionInvoker3< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
		return;
	}
}
// Method Definition Index: 42801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m156DD6D59CA5B809BEFB0724A56CACE0B92B035D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_4 = alloca(SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
	//<source_info:<no-source>:1>
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_container), NULL);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
		InvokerActionInvoker4< Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (Il2CppFullySharedGenericStruct*)L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_3: *(void**)L_3), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
		return;
	}
}
// Method Definition Index: 42781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
	const Il2CppFullySharedGenericAny L_10 = L_7;
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_8 = alloca(SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_11 = L_8;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_3 = alloca(SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	memset(V_3, 0, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_4;
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		Il2CppFullySharedGenericStruct* L_5 = V_1;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), L_5);
		int32_t L_6 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),2), il2cpp_rgctx_offset(method->rgctx_data, 4), L_6);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 6), L_7, SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		return;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), (Il2CppFullySharedGenericStruct*)L_9);
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),2), il2cpp_rgctx_offset(method->rgctx_data, 4), 0);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 6), L_10, SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_memcpy(L_11, V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		return;
	}
}
// Method Definition Index: 42797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m803FCB042598C1E503C59013F0DD3E33DE8D5F04_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_2 = alloca(SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
	//<source_info:<no-source>:1>
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
		InvokerActionInvoker3< Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
		return;
	}
}
// Method Definition Index: 42777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	//<source_info:<no-source>:1>
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_0 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	memset(V_0, 0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	{
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), il2cpp_rgctx_offset(method->rgctx_data, 1), L_0);
		int32_t L_1 = ___1_length;
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2), il2cpp_rgctx_offset(method->rgctx_data, 2), L_1);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), il2cpp_rgctx_offset(method->rgctx_data, 4), L_2, SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		return;
	}
}
// Method Definition Index: 42792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_m32EF1EDFDD285088E68A52C9FA22CF962A0315F0_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 L_2;
		L_2 = InvokerFuncInvoker2< SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 42793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m08A07FE4FC0572B5AD96D95F043F26AD8020A463_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
	const SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A L_2 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	//<source_info:<no-source>:1>
	SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A V_0 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	memset(V_0, 0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	{
		il2cpp_codegen_initobj((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		il2cpp_codegen_write_field_data<NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, false>((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), il2cpp_rgctx_offset(method->rgctx_data, 1), L_0);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_write_field_data<true>((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), il2cpp_rgctx_offset(method->rgctx_data, 3), L_1, SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		return;
	}
}
// Method Definition Index: 42808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		int32_t L_2;
		L_2 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_0, L_1, NULL);
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		int32_t L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_5, L_6, NULL);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_3, L_4, L_7, NULL);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		int32_t L_10 = V_0;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline(L_8, L_9, L_10, NULL);
		return;
	}
}
// Method Definition Index: 42808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint64_t V_0 = 0;
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		uint64_t L_2;
		L_2 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_0, L_1, NULL);
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		uint64_t L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_5, L_6, NULL);
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_3, L_4, L_7, NULL);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		uint64_t L_10 = V_0;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline(L_8, L_9, L_10, NULL);
		return;
	}
}
// Method Definition Index: 42808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_0, L_1, NULL);
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_5, L_6, NULL);
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_3, L_4, L_7, NULL);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline(L_8, L_9, L_10, NULL);
		return;
	}
}
// Method Definition Index: 42808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_0, L_1, NULL);
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_5, L_6, NULL);
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_3, L_4, L_7, NULL);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_0;
		UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline(L_8, L_9, L_10, NULL);
		return;
	}
}
// Method Definition Index: 42808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	memset(V_0, 0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_3, L_4, L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9, L_10);
		return;
	}
}
// Method Definition Index: 42808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_0, L_1, NULL);
		V_0 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_7;
		L_7 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_5, L_6, NULL);
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_3, L_4, L_7, NULL);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_10 = V_0;
		UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline(L_8, L_9, L_10, NULL);
		return;
	}
}
// Method Definition Index: 42809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939_m2E6D9B5EA07821DABCEFA4B85DD48E1164B7DC55 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_t612242F4555E59390215CE9BFA23C8ECB894D939));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		int32_t L_5;
		L_5 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_3, L_4, NULL);
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		int32_t L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline(L_6, L_7, NULL);
		int32_t L_9;
		L_9 = DefaultComparer_1_Compare_m394F7F49471D14333A96E4D1609FF38B351FC316(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B32B9F06977E407E6CA99CA51A37F7DB63CC772(L_10, L_11, L_12, NULL);
	}

IL_0042:
	{
		return;
	}
}
// Method Definition Index: 42809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9_m32306F98F190471CE5FFF51A5B5DC5AC0CBCA87B (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tE151CB42B189B96417CECFCB8F3CEC934E69DDF9));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		uint64_t L_5;
		L_5 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_3, L_4, NULL);
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		uint64_t L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline(L_6, L_7, NULL);
		int32_t L_9;
		L_9 = DefaultComparer_1_Compare_mCE528A0DC7D946A4B73C6C1BA0BEF3EF89B13E1A(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m20CFAAEF92F2BF57192AC6AC6672D34DB0378730(L_10, L_11, L_12, NULL);
	}

IL_0042:
	{
		return;
	}
}
// Method Definition Index: 42809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA_m1FA1F41F025F787CA8D9C6A1F7B053556B2F6682 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA V_0;
	memset((&V_0), 0, sizeof(V_0));
	ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ActiveComparer_tF3D9FC659EF5E4F55F9D1682722BD389311C23AA));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_3, L_4, NULL);
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline(L_6, L_7, NULL);
		int32_t L_9;
		L_9 = ActiveComparer_Compare_mA14126C7E24C5A91BDFE79B275F2239D84D79E70(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7823FBF7870907C0FBB1EAA0FADD3DCF95A52217(L_10, L_11, L_12, NULL);
	}

IL_0042:
	{
		return;
	}
}
// Method Definition Index: 42809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisEventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B_m0D5C201A337A525CE82664BF10CB31AF56718F3C (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B V_0;
	memset((&V_0), 0, sizeof(V_0));
	EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EventComparer_tEA09DEC85C72EFA869F4C5C810861513BF4F795B));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_3, L_4, NULL);
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline(L_6, L_7, NULL);
		int32_t L_9;
		L_9 = EventComparer_Compare_m3302ED5566E32C3FD932FFBD21136DBCF17C2C76(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m559DA77F56AD4E1B2E028B54702A892A46109FA1(L_10, L_11, L_12, NULL);
	}

IL_0042:
	{
		return;
	}
}
// Method Definition Index: 42809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(V_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B3_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B2_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		if (L_3)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
			goto IL_001e;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B2_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}

IL_001e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B3_0, &L_12, L_11);
		int32_t L_14 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_13, L_12.method,L_12.thisPtr, L_7, L_10);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_15 = ___0_array;
		int32_t L_16 = ___1_lhs;
		int32_t L_17 = ___2_rhs;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_15, L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0042:
	{
		return;
	}
}
// Method Definition Index: 42809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_TisInt3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9_m736E99BE3788CBBE51B7EAF2EEDDB44ECEF8B023 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 ___3_comp, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Int3Compare_t10DC52848F4D5CAF82B3EFB41571C38672BB8AB9));
		G_B3_0 = (&___3_comp);
		goto IL_001e;
	}

IL_001e:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_5;
		L_5 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_3, L_4, NULL);
		void* L_6 = ___0_array;
		int32_t L_7 = ___2_rhs;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_8;
		L_8 = UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline(L_6, L_7, NULL);
		int32_t L_9;
		L_9 = Int3Compare_Compare_m7EFE1996FEDFA411A7DA01C7EB2AAC13398DFD60(G_B3_0, L_5, L_8, NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___1_lhs;
		int32_t L_12 = ___2_rhs;
		NativeSortExtension_Swap_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m085126CCA8F2FCA28586CEE9E724ADF65CCA476D(L_10, L_11, L_12, NULL);
	}

IL_0042:
	{
		return;
	}
}
// Method Definition Index: 42817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(V_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(G_B3_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(G_B2_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		if (L_3)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
			goto IL_001e;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B2_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	}

IL_001e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B3_0, &L_12, L_11);
		int32_t L_14 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_13, L_12.method,L_12.thisPtr, L_7, L_10);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_15 = ___0_array;
		int32_t L_16 = ___1_lhs;
		int32_t L_17 = ___2_rhs;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_15, L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0042:
	{
		return;
	}
}
// Method Definition Index: 42816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	memset(V_0, 0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_3, L_4, L_7);
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9, L_10);
		return;
	}
}
// Method Definition Index: 42829
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NativeStream_ScheduleConstruct_TisIl2CppFullySharedGenericStruct_m27645D3BD937891B0D2D164E55DCCD4A4F4D4E89_fshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_bufferCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___2_dependency, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_0 = ___0_stream;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___3_allocator;
		NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF(L_0, L_1, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_2;
		L_2 = ((  UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___1_bufferCount), NULL);
		(&V_0)->___List = (UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2*)L_2;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_3 = ___0_stream;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 L_4 = (*(NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376*)L_3);
		(&V_0)->___Container = L_4;
		ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 L_5 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = ___2_dependency;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_7;
		L_7 = IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF(L_5, L_6, IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		return L_7;
	}
}
// Method Definition Index: 42838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D_fshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* L_0 = (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*)(&__this->___m_Stream);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 58504
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* NavMeshBuilderState_GetExtraState_TisIl2CppSharedGenericObject_mE7847DCE7AA51301BEDA01E4CC5DD50B4196F2F8_gshared (NavMeshBuilderState_t7AD5D3CDEC34EAD44BD92A27070D5E45BAC41E33* __this, bool ___0_dispose, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = __this->___mExtraState;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_1 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)il2cpp_codegen_object_new(Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E(L_1, Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		__this->___mExtraState = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mExtraState), (void*)L_1);
		CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117* L_2 = (CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117*)il2cpp_codegen_object_new(CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117_il2cpp_TypeInfo_var);
		CompositeDisposable__ctor_mFAC06D6F80E6655341ECA28D56FA9B7D21107FF7(L_2, NULL);
		__this->___disposable = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___disposable), (void*)L_2);
	}

IL_001e:
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_3 = __this->___mExtraState;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128(L_3, L_5, (&V_0), Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0069;
		}
	}
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_7 = __this->___mExtraState;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		Il2CppSharedGenericObject* L_10;
		L_10 = Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3(il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppSharedGenericObject* L_11 = L_10;
		V_1 = (RuntimeObject*)L_11;
		NullCheck(L_7);
		Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_7, L_9, (RuntimeObject*)L_11, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		RuntimeObject* L_12 = V_1;
		V_0 = L_12;
		bool L_13 = ___0_dispose;
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		CompositeDisposable_t335B2DC7102F54D43523060566CD6FEB1196A117* L_14 = __this->___disposable;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_14);
		CompositeDisposable_Add_m1358A2F2ED5708FEDF96F69505D3657E4B5D891C(L_14, L_15, NULL);
	}

IL_0069:
	{
		RuntimeObject* L_16 = V_0;
		return ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC NoAllocHelpers_CreateReadOnlySpan_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3ADA698ED211EF7349438FEA595912327CB78BF8 (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D* V_0 = NULL;
	ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC));
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_2 = ___0_list;
		ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D* L_4 = V_0;
		NullCheck(L_4);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 NoAllocHelpers_CreateReadOnlySpan_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BA0E604448220F9372F86741FCDBA1370C33DCA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t00BC545BFEAE57206E86C27261C525A3FCF89F12* V_0 = NULL;
	ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t00BC545BFEAE57206E86C27261C525A3FCF89F12* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t00BC545BFEAE57206E86C27261C525A3FCF89F12*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t00BC545BFEAE57206E86C27261C525A3FCF89F12* L_4 = V_0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t00BC545BFEAE57206E86C27261C525A3FCF89F12* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 NoAllocHelpers_CreateReadOnlySpan_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mA2FC7A1C293C5275741EB50A6A18FC9825C75BED (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_tF980AAD8B69DF7815F2357E4BB98475E43649C22* V_0 = NULL;
	ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48));
		ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* L_2 = ___0_list;
		ListPrivateFieldAccess_1_tF980AAD8B69DF7815F2357E4BB98475E43649C22* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_tF980AAD8B69DF7815F2357E4BB98475E43649C22*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_tF980AAD8B69DF7815F2357E4BB98475E43649C22* L_4 = V_0;
		NullCheck(L_4);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_tF980AAD8B69DF7815F2357E4BB98475E43649C22* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m94C662286E6962E7D0D2333BE505C17AB72B0239_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B NoAllocHelpers_CreateReadOnlySpan_TisNavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD_mC90E99D077775A6DD3A5D430BCA42092CF8AF978 (List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t7DA83A553850A3B0904D3892B2354EB8987C46EF* V_0 = NULL;
	ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B));
		ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t7DA83A553850A3B0904D3892B2354EB8987C46EF* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t7DA83A553850A3B0904D3892B2354EB8987C46EF*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t7DA83A553850A3B0904D3892B2354EB8987C46EF* L_4 = V_0;
		NullCheck(L_4);
		NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t7DA83A553850A3B0904D3892B2354EB8987C46EF* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB67526D7521FC963E2F149D3D8626BB633F8249F_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D NoAllocHelpers_CreateReadOnlySpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3D2E52A8041B7AA0E3901A304037B2969787EBCD (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t7B5E7FA669EA1424703E7403F572C54B4B507BBE* V_0 = NULL;
	ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D));
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t7B5E7FA669EA1424703E7403F572C54B4B507BBE* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t7B5E7FA669EA1424703E7403F572C54B4B507BBE*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t7B5E7FA669EA1424703E7403F572C54B4B507BBE* L_4 = V_0;
		NullCheck(L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t7B5E7FA669EA1424703E7403F572C54B4B507BBE* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC2013143DC1227FA2243E83F9C385E5D3F48520D_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C NoAllocHelpers_CreateReadOnlySpan_TisStyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_m603588A4FA6AFA705FBEB45211F58186F2703432 (List_1_t4EB7DA35FB6C543101A0C09A56EE4B652F4E1777* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t24353F5042D683647F03CC37AACC38FC6C58743D* V_0 = NULL;
	ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t4EB7DA35FB6C543101A0C09A56EE4B652F4E1777* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C));
		ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t4EB7DA35FB6C543101A0C09A56EE4B652F4E1777* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t24353F5042D683647F03CC37AACC38FC6C58743D* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t24353F5042D683647F03CC37AACC38FC6C58743D*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t24353F5042D683647F03CC37AACC38FC6C58743D* L_4 = V_0;
		NullCheck(L_4);
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t24353F5042D683647F03CC37AACC38FC6C58743D* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m2C141C25072ADD535CDEEB08B6EF07359A550AF2_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 NoAllocHelpers_CreateReadOnlySpan_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m857FC65677452177A1FAD5ED5B6D05B990867F75 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30* V_0 = NULL;
	ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55));
		ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30* L_4 = V_0;
		NullCheck(L_4);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mA3840C7226D793D4B75979B13B1A6B0B25342950_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE NoAllocHelpers_CreateReadOnlySpan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBDB961B90425C6054FEB4B88320DF7BFC2C5BA81 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69* V_0 = NULL;
	ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE));
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69* L_4 = V_0;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 NoAllocHelpers_CreateReadOnlySpan_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4FFB047BEB151B782A7B584B7A2F3F310FCD1623 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* V_0 = NULL;
	ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6));
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_2 = ___0_list;
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_4 = V_0;
		NullCheck(L_4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC NoAllocHelpers_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_m8B09F58B1533EE5889930503D32D66FA43EA49DB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* V_0 = NULL;
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_8;
	}
}
// Method Definition Index: 59572
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4 NoAllocHelpers_CreateSpan_TisStyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_m8D8650D129D723D60A17C51AB677E623C00D1930 (List_1_tC19CF9590EBD62041C53FB658F836FBCBEBB2D75* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t4D6B58A16E0BE616E7086060C58C4DCAED98DE86* V_0 = NULL;
	Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tC19CF9590EBD62041C53FB658F836FBCBEBB2D75* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4));
		Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tC19CF9590EBD62041C53FB658F836FBCBEBB2D75* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t4D6B58A16E0BE616E7086060C58C4DCAED98DE86* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t4D6B58A16E0BE616E7086060C58C4DCAED98DE86*>(L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t4D6B58A16E0BE616E7086060C58C4DCAED98DE86* L_4 = V_0;
		NullCheck(L_4);
		StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t4D6B58A16E0BE616E7086060C58C4DCAED98DE86* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m29132D51CA4DD7CE44F871A6DE4E62C10876DA34_inline((&L_8), L_5, 0, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 59572
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 NoAllocHelpers_CreateSpan_TisIl2CppFullySharedGenericAny_m8FA189A6CDBD9B7477A87CEE776826340CDEE909_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* V_0 = NULL;
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_8;
	}
}
// Method Definition Index: 59568
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF184B0198F599328261F68379CF3B6B19E1301DB (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_4 = ___0_list;
		NullCheck(L_4);
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_4, NULL);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_5 = ___0_list;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9(L_5, NULL);
		int32_t L_7 = ___1_count;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_8 = ___0_list;
		int32_t L_9 = ___1_count;
		NullCheck(L_8);
		List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0038:
	{
		int32_t L_10 = ___1_count;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_11 = ___0_list;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_11, NULL);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B** L_13;
		L_13 = il2cpp_unsafe_as_ref<ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B*>((&___0_list));
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_14 = *(L_13);
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_15 = L_14;
		int32_t L_16 = ___1_count;
		NullCheck(L_15);
		L_15->____size = L_16;
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_17 = L_15;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005d:
	{
		return;
	}
}
// Method Definition Index: 59568
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m74270910BAB663797ED6E0784FA1669689B9CAB9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = ___0_list;
		NullCheck(L_4);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___0_list;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, NULL);
		int32_t L_7 = ___1_count;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_8 = ___0_list;
		int32_t L_9 = ___1_count;
		NullCheck(L_8);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0038:
	{
		int32_t L_10 = ___1_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = ___0_list;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_11, NULL);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE** L_13;
		L_13 = il2cpp_unsafe_as_ref<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((&___0_list));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_14 = *(L_13);
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_15 = L_14;
		int32_t L_16 = ___1_count;
		NullCheck(L_15);
		L_15->____size = L_16;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_17 = L_15;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005d:
	{
		return;
	}
}
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
// Method Definition Index: 59571
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m939A9FD04DDB2C021F8F2A09A8A13816556D8F2A_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0005:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_2;
		L_2 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_1);
		NullCheck(L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = L_2->____items;
		return L_3;
	}
}
// Method Definition Index: 59571
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mAA18CF8F932D0DD8034D38BBD494D406B641194E (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB569369409DE67C7AF17A0405E9F1DB681D0D968_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_2 = ___0_list;
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_3 = ___0_list;
		NullCheck(L_3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4;
		L_4 = List_1_get_Item_mE919D8EE751161CD7B90064F8824F7C854D27E05(L_3, 0, NULL);
		NullCheck(L_2);
		List_1_set_Item_m6E1E0C1DB6A8DB66BBBB90512239A3CE2858FCC0(L_2, 0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDF8EDAB0F602DD39F21FF5FBF424C6576B8C4119 (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_2 = ___0_list;
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_3 = ___0_list;
		NullCheck(L_3);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4;
		L_4 = List_1_get_Item_m5ED2B6D8DA1CCEB2F9A6795D526AD1A33AFC35A3(L_3, 0, NULL);
		NullCheck(L_2);
		List_1_set_Item_m34A1FB42C4936A56731388B9305F38083212F317(L_2, 0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisPhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E_mF4D43990405CD7A649630260CE412559951AC3A3 (List_1_t005866C9A942E85392723D93831723E1AB1D856E* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t005866C9A942E85392723D93831723E1AB1D856E* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mED734AE4CCCA800E3210B813A66929F46E734591_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t005866C9A942E85392723D93831723E1AB1D856E* L_2 = ___0_list;
		List_1_t005866C9A942E85392723D93831723E1AB1D856E* L_3 = ___0_list;
		NullCheck(L_3);
		PhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E L_4;
		L_4 = List_1_get_Item_m8B7D206E4568469AFA6C023E6F4F6480BBF637B9(L_3, 0, NULL);
		NullCheck(L_2);
		List_1_set_Item_m84AEDCF78C5C3163FDC7393B9B33BA288B76C0D0(L_2, 0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m49E0F9010527C9439325836B1394D842E45C0426 (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m29475DA858BCD0247327E13ECC38605BFA1CEE53_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_2 = ___0_list;
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_3 = ___0_list;
		NullCheck(L_3);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_4;
		L_4 = List_1_get_Item_m6D9BA633A3158DD900A8663E4235B61306A1854F(L_3, 0, NULL);
		NullCheck(L_2);
		List_1_set_Item_m7C1A44077208F55168FC96C286A0C2F10569B05A(L_2, 0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_mBBB2E7BEA35C6B399D2D33A164780FD95094402A (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mBD21DFFF3DA5C693C2D72F9D050D5423A7FFF248_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_2 = ___0_list;
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_3 = ___0_list;
		NullCheck(L_3);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_4;
		L_4 = List_1_get_Item_mB24C78B30167CD784429FE75DDDE9DADA551808E(L_3, 0, NULL);
		NullCheck(L_2);
		List_1_set_Item_mEA2D1EBF324845E705F85B2096A1489D5793989C(L_2, 0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mC51D3600C86F66318C08082FAE1B97DD0EE98545 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = ___0_list;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_3 = ___0_list;
		NullCheck(L_3);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_4;
		L_4 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_3, 0, NULL);
		NullCheck(L_2);
		List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33(L_2, 0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5157B64B1AB168B57ECD877DC02408026D6C2EA2 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_2 = ___0_list;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_3 = ___0_list;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_3, 0, NULL);
		NullCheck(L_2);
		List_1_set_Item_m4512A91B4D4ABD38CA845D6E56F471390A4EC2E0(L_2, 0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB09B0EC05A0299B2CC6B5C828E219E5E002E6459 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___0_list;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ___0_list;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_3, 0, NULL);
		NullCheck(L_2);
		List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(L_2, 0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m68FE58E9B4A98A8B5374DC7297593AC88A53B4DA (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_2 = ___0_list;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_3 = ___0_list;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4(L_3, 0, NULL);
		NullCheck(L_2);
		List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F(L_2, 0, L_4, NULL);
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisIl2CppFullySharedGenericAny_m424A09D93D30AB352CCB19CE0ABBC404A8DB060F_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF720B3B545B9EB09FECC078AAFA8A26C14F666BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tF720B3B545B9EB09FECC078AAFA8A26C14F666BD);
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = ___0_list;
		NullCheck(L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_3, 0, (Il2CppFullySharedGenericAny*)L_4);
		NullCheck(L_2);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_2, 0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_4: *(void**)L_4));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m28E4D8739AD94C18F9CE8091C2F70281A44426EF (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t3CA377CF981437D6017A7DABFA3012590E9CB7C0* V_0 = NULL;
	{
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m0C3FDA53744AF9572488C5EFC5F0632D33DAAE0A(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m0C3FDA53744AF9572488C5EFC5F0632D33DAAE0A(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t3CA377CF981437D6017A7DABFA3012590E9CB7C0* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t3CA377CF981437D6017A7DABFA3012590E9CB7C0*>(L_12);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t3CA377CF981437D6017A7DABFA3012590E9CB7C0* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t3CA377CF981437D6017A7DABFA3012590E9CB7C0* L_16 = V_0;
		ListPrivateFieldAccess_1_t3CA377CF981437D6017A7DABFA3012590E9CB7C0* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m458D7CB3764D4015B7A7F6B7E12EA25182AACA65 (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D* V_0 = NULL;
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mD1D84001E0B4C85B5C7F8B48796ED4B814779FB8(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_mD1D84001E0B4C85B5C7F8B48796ED4B814779FB8(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_12 = ___0_list;
		ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D*>(L_12);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D* L_16 = V_0;
		ListPrivateFieldAccess_1_tAE15B37E9DCDF883772B29F201599F075A86F40D* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisPhysicsShape2D_t443155710C4DE7DE8C48EADA86BC4DC7EA70226E_m5EC542D0DBD21CE9C3B987756005D20BF2670F36 (List_1_t005866C9A942E85392723D93831723E1AB1D856E* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_tA421351C258DAD130D1CC2A5D0243C07C272CDFB* V_0 = NULL;
	{
		List_1_t005866C9A942E85392723D93831723E1AB1D856E* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mEA90B3ECF08B37D790E51D0152F7CD5022A510BF(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_t005866C9A942E85392723D93831723E1AB1D856E* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_mEA90B3ECF08B37D790E51D0152F7CD5022A510BF(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t005866C9A942E85392723D93831723E1AB1D856E* L_12 = ___0_list;
		ListPrivateFieldAccess_1_tA421351C258DAD130D1CC2A5D0243C07C272CDFB* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_tA421351C258DAD130D1CC2A5D0243C07C272CDFB*>(L_12);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_tA421351C258DAD130D1CC2A5D0243C07C272CDFB* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_tA421351C258DAD130D1CC2A5D0243C07C272CDFB* L_16 = V_0;
		ListPrivateFieldAccess_1_tA421351C258DAD130D1CC2A5D0243C07C272CDFB* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m5DA3D6A1D2D56C7485AD5F7809B157F7186A0152 (List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_tE26E85246B37A70B775A173A88DDF86961E5E27F* V_0 = NULL;
	{
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m7B92303796B477EA0A27AF48F502382B2A85B213(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m7B92303796B477EA0A27AF48F502382B2A85B213(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* L_12 = ___0_list;
		ListPrivateFieldAccess_1_tE26E85246B37A70B775A173A88DDF86961E5E27F* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_tE26E85246B37A70B775A173A88DDF86961E5E27F*>(L_12);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_tE26E85246B37A70B775A173A88DDF86961E5E27F* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_tE26E85246B37A70B775A173A88DDF86961E5E27F* L_16 = V_0;
		ListPrivateFieldAccess_1_tE26E85246B37A70B775A173A88DDF86961E5E27F* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m078A63D576A84D2E1FE1E26F7E5EB04143AE623C (List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t9757DE0ACB0822993775201582312F0C6E26D42C* V_0 = NULL;
	{
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m3BDCA1A17A3EF6EF6D0443961D6EDDF7165364F0(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m3BDCA1A17A3EF6EF6D0443961D6EDDF7165364F0(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t9757DE0ACB0822993775201582312F0C6E26D42C* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t9757DE0ACB0822993775201582312F0C6E26D42C*>(L_12);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t9757DE0ACB0822993775201582312F0C6E26D42C* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t9757DE0ACB0822993775201582312F0C6E26D42C* L_16 = V_0;
		ListPrivateFieldAccess_1_t9757DE0ACB0822993775201582312F0C6E26D42C* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m6E6BD5C7F3503FC7656F8DFA0E8A3391959E60B2 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30* V_0 = NULL;
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m56718A2202E1BCBA0CDB1E01212A939E9E3D1D96(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30*>(L_12);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30* L_16 = V_0;
		ListPrivateFieldAccess_1_t690E603AB23DEE4AB76EE0C176416330A0C20F30* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0FEDAAB63A711F61F9C5B76EF46307256D1D9D33 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t3F800C1215FB9361A40A878A457EA06BE5FB1BA5* V_0 = NULL;
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mFC460C1FE9D413F41371C800ECB347D153264F69(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_mFC460C1FE9D413F41371C800ECB347D153264F69(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t3F800C1215FB9361A40A878A457EA06BE5FB1BA5* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t3F800C1215FB9361A40A878A457EA06BE5FB1BA5*>(L_12);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t3F800C1215FB9361A40A878A457EA06BE5FB1BA5* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t3F800C1215FB9361A40A878A457EA06BE5FB1BA5* L_16 = V_0;
		ListPrivateFieldAccess_1_t3F800C1215FB9361A40A878A457EA06BE5FB1BA5* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m78118F1E80B3CD087BA1B17B31C189FA60602119 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69* V_0 = NULL;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69*>(L_12);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69* L_16 = V_0;
		ListPrivateFieldAccess_1_t2EC3936340D242C9CC392D495F7C338FD9EF2F69* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mE0070EEA3F389AD1A1E5592375B946A09093303B (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* V_0 = NULL;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_12 = ___0_list;
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B*>(L_12);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_14 = V_0;
		int32_t L_15 = ___1_size;
		NullCheck(L_14);
		L_14->____size = L_15;
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_16 = V_0;
		ListPrivateFieldAccess_1_tE6A6EC2B20A3ADC686F28AE64E8010D062AB0B5B* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisIl2CppFullySharedGenericAny_mCA382D116436816B791F79BB84B5F2D335F17A64_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* V_0 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = ___0_list;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_6, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_12 = ___0_list;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_12);
		V_0 = L_13;
		bool L_14;
		L_14 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->____size;
		int32_t L_17 = ___1_size;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0055;
		}
	}
	{
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_18 = V_0;
		NullCheck(L_18);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = L_18->____items;
		int32_t L_20 = ___1_size;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->____size;
		int32_t L_23 = ___1_size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), NULL);
	}

IL_0055:
	{
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_24 = V_0;
		int32_t L_25 = ___1_size;
		NullCheck(L_24);
		L_24->____size = L_25;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_26 = V_0;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_27 = L_26;
		NullCheck(L_27);
		int32_t L_28 = L_27->____version;
		NullCheck(L_27);
		L_27->____version = ((int32_t)il2cpp_codegen_add(L_28, 1));
		return;
	}
}
// Method Definition Index: 59570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m825F163A54CF1C3DB291F3F5386F8417C1DD92D4 (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___0_values, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 59570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDD651BBFEB2A49412F6F35997FCC727D6067209C (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_values, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 59570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F9C6D4A9996DAC3BC840AE223D7D320A499EB1E (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_values, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 59570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m75CFF394EF8FFE477E13A68AEE82C1C2ED00ED2C (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_values, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 59570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFA755DC284FE28655FB0DE02C17D9AE5F654DE3E (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_values, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 59570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDF8A326E0310FBE8109C3CF97BB133417BCCA9E2 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_values, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 59570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericAny_mB18CEBDDF0A538A97CF6A7A38894F8094351E7B9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 34565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_FindAnyObjectByType_TisIl2CppSharedGenericObject_m5A9F0A9B2072C8A5989356217B8EFD02E7063F90_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindAnyObjectByType_mAC0703A76C59FCA4BF15E13978ACF09667AD8FD2(L_1, 0, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// Method Definition Index: 34564
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_FindFirstObjectByType_TisIl2CppSharedGenericObject_mA16B025BD06FE39DECFD2AD43581FDB75BF18371_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F(L_1, 0, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// Method Definition Index: 34563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Object_FindObjectsByType_TisIl2CppSharedGenericObject_m7121DFBE7D65E8B410E78D111580087B59B2A0B6_gshared (int32_t ___0_sortMode, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___0_sortMode;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3;
		L_3 = Object_FindObjectsByType_m2FD4029E94449E11B16018C0A42F53978722D980(L_1, 0, L_2, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4;
		L_4 = Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
// Method Definition Index: 34553
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_Instantiate_TisIl2CppSharedGenericObject_mF0D359599A496A8B6523AA2B27AB24A4270153CD_gshared (Il2CppSharedGenericObject* ___0_original, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* G_B2_0 = NULL;
	Il2CppSharedGenericObject* G_B1_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_original;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26((RuntimeObject*)L_0, _stringLiteralF704B54D833421164E45E576DFD279921246BCEA, NULL);
		Il2CppSharedGenericObject* L_1 = ___0_original;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, NULL);
		Il2CppSharedGenericObject* L_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			G_B2_0 = L_3;
			goto IL_0039;
		}
		G_B1_0 = L_3;
	}
	{
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_5 = (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)));
		UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0039:
	{
		return G_B2_0;
	}
}
// Method Definition Index: 34072
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDispatcher_EnableTransformTracking_TisIl2CppSharedGenericObject_mF20B6818C25684E27FFB35D4D08E75EABB5A262A_gshared (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_trackingType, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_trackingType;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		ObjectDispatcher_EnableTransformTracking_m02C2084445E6ACB87BACF478E61FA597532044C1(__this, L_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 34071
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDispatcher_EnableTypeTracking_TisIl2CppSharedGenericObject_m40B7F2B8AF8EA725166B6E58465A6F3B21726699_gshared (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_typeTrackingMask, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_typeTrackingMask;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		ObjectDispatcher_EnableTypeTracking_m6C28705689C0A395B418FC54AF3B94F79310A371(__this, L_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 34070
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 ObjectDispatcher_GetTransformChangesAndClear_TisIl2CppSharedGenericObject_m5EC258349D90292FFCE2D21783CBE4155D3C8C36_gshared (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_trackingType, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___0_trackingType;
		int32_t L_3 = ___1_allocator;
		TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 L_4;
		L_4 = ObjectDispatcher_GetTransformChangesAndClear_mE189DCB6402D0E26D77A0C054E42A6C080B7BC23(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 34069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F ObjectDispatcher_GetTypeChangesAndClear_TisIl2CppSharedGenericObject_m893D3B309DC70E2BF44C3E3619A234772D65A61F_gshared (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_allocator, bool ___1_sortByInstanceID, bool ___2_noScriptingArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___0_allocator;
		bool L_3 = ___1_sortByInstanceID;
		bool L_4 = ___2_noScriptingArray;
		TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F L_5;
		L_5 = ObjectDispatcher_GetTypeChangesAndClear_mBE6304A78592FF8271D7CD8E26C57544CF1675B9(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 26058
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Call_TisIl2CppFullySharedGenericAny_m98BA218FB32F6BD71591145929AD70307A2080A5_fshared (RuntimeObject* ___0_source, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = ___1_action;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_5 = ___1_action;
		Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849* L_6 = (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, L_5, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), L_4, (RuntimeObject*)L_6);
		return L_7;
	}
}
// Method Definition Index: 26057
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_CallOnce_TisIl2CppFullySharedGenericAny_m967FE7E3F2B0865DA091FE0114DF9C5E39027B3B_fshared (RuntimeObject* ___0_source, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___1_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_0 = (U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_source;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_3 = ___1_action;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_5 = V_0;
		NullCheck(L_5);
		L_5->___subscription = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___subscription), (void*)(RuntimeObject*)NULL);
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_6 = V_0;
		RuntimeObject* L_7 = ___0_source;
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, 1, il2cpp_rgctx_method(method->rgctx_data, 2));
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_9 = ___1_action;
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_10 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, (RuntimeObject*)L_10, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849* L_12 = (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 4));
		((  void (*) (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_12, L_9, L_11, NULL);
		NullCheck(L_8);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 6), L_8, (RuntimeObject*)L_12);
		NullCheck(L_6);
		L_6->___subscription = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___subscription), (void*)L_13);
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___subscription;
		return L_15;
	}
}
// Method Definition Index: 26056
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_ForDevice_TisIl2CppSharedGenericObject_mB85DBDCF01454C35AB6DCCA294D17FCCBB31F3A8_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_source;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889* L_5 = (ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889*)il2cpp_codegen_object_new(ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889_il2cpp_TypeInfo_var);
		ForDeviceEventObservable__ctor_mB1C31FA7E513DB5D377B8F95AB66DBA80A0B2EFC(L_5, L_2, L_4, (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)NULL, NULL);
		return L_5;
	}
}
// Method Definition Index: 26052
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Select_TisInputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0_TisIl2CppSharedGenericObject_m1F1730D221ED86362934933210DCC06EDAE79F21_gshared (RuntimeObject* ___0_source, Func_2_t27C3143CFF667DF7CEC4EF0BE641E847A3BCDDF7* ___1_filter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_t27C3143CFF667DF7CEC4EF0BE641E847A3BCDDF7* L_2 = ___1_filter;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_t27C3143CFF667DF7CEC4EF0BE641E847A3BCDDF7* L_5 = ___1_filter;
		SelectObservable_2_t7E31AABD1F8BB24043E97DD0D162EE1854F8335A* L_6 = (SelectObservable_2_t7E31AABD1F8BB24043E97DD0D162EE1854F8335A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		SelectObservable_2__ctor_m9009B89D18A7656A514E5EF153274188F82FCA25(L_6, L_4, L_5, NULL);
		return (RuntimeObject*)L_6;
	}
}
// Method Definition Index: 26052
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1D4CDBCC87BAAB5B21B32BE27B7A5DCB226F6E71_fshared (RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_filter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___1_filter;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_5 = ___1_filter;
		SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* L_6 = (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383*, RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, L_4, L_5, NULL);
		return (RuntimeObject*)L_6;
	}
}
// Method Definition Index: 26053
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_SelectMany_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m6B8B7ECD69CDB004D46D0E106F7740644C2C15E3_fshared (RuntimeObject* ___0_source, Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___1_filter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_2 = ___1_filter;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_5 = ___1_filter;
		SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* L_6 = (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8*, RuntimeObject*, Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, L_4, L_5, NULL);
		return (RuntimeObject*)L_6;
	}
}
// Method Definition Index: 26054
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Take_TisIl2CppFullySharedGenericAny_m3193EEC4711789816ADFE2B254FB5833764C6377_fshared (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___0_source;
		int32_t L_5 = ___1_count;
		TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D* L_6 = (TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, L_4, L_5, NULL);
		return (RuntimeObject*)L_6;
	}
}
// Method Definition Index: 26051
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Where_TisIl2CppSharedGenericObject_mD680300523E1C85771D436D1266A810304A64044_gshared (RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = ___1_predicate;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_5 = ___1_predicate;
		WhereObservable_1_t1FFDD1DADF220133CF2809DA4B8FBEC91102AFF0* L_6 = (WhereObservable_1_t1FFDD1DADF220133CF2809DA4B8FBEC91102AFF0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		WhereObservable_1__ctor_m7DAA4045A205F49CE48D01F29B45AD52AAFD5525(L_6, L_4, L_5, NULL);
		return (RuntimeObject*)L_6;
	}
}
// Method Definition Index: 26051
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Where_TisIl2CppFullySharedGenericAny_mA2778DBF842AD108A115A4BCF0D6D30F7F4F5B32_fshared (RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___1_predicate;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_5 = ___1_predicate;
		WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* L_6 = (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, L_4, L_5, NULL);
		return (RuntimeObject*)L_6;
	}
}
// Method Definition Index: 24171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenControl_SendValueToControl_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB2DC79F1724A6E638E35C2AFB3CC7E6B5951745 (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, float ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit);
	//<source_info:<no-source>:1>
	InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* V_0 = NULL;
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___m_Control;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_1 = __this->___m_Control;
		V_0 = ((InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0)));
		InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* L_2 = V_0;
		if (L_2)
		{
			goto IL_0074;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1(__this, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_9 = __this->___m_Control;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = il2cpp_codegen_object_get_type(L_9);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_15);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0074:
	{
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* L_19 = (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*)(&__this->___m_InputEventPtr);
		RuntimeObject* L_20 = ((InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields*)il2cpp_codegen_static_fields_for(InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var))->___s_Instance;
		NullCheck(L_20);
		double L_21;
		L_21 = InterfaceFuncInvoker0< double >::Invoke(20, IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var, L_20);
		InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810(L_19, L_21, NULL);
		InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* L_22 = V_0;
		float L_23 = ___0_value;
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_24 = __this->___m_InputEventPtr;
		InputControlExtensions_WriteValueIntoEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6846DBDEE718463B2788993E941703D5487D6AB3(L_22, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 3));
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_25 = __this->___m_InputEventPtr;
		CHECKED_LOCAL_INIT(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit,(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996(L_25, NULL);
		return;
	}
}
// Method Definition Index: 24171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenControl_SendValueToControl_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m671D355740E4BC40EBDDECE5204680E0E605C664 (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit);
	//<source_info:<no-source>:1>
	InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* V_0 = NULL;
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___m_Control;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_1 = __this->___m_Control;
		V_0 = ((InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0)));
		InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* L_2 = V_0;
		if (L_2)
		{
			goto IL_0074;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1(__this, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_9 = __this->___m_Control;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = il2cpp_codegen_object_get_type(L_9);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_15);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0074:
	{
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* L_19 = (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*)(&__this->___m_InputEventPtr);
		RuntimeObject* L_20 = ((InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields*)il2cpp_codegen_static_fields_for(InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var))->___s_Instance;
		NullCheck(L_20);
		double L_21;
		L_21 = InterfaceFuncInvoker0< double >::Invoke(20, IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var, L_20);
		InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810(L_19, L_21, NULL);
		InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* L_22 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ___0_value;
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_24 = __this->___m_InputEventPtr;
		InputControlExtensions_WriteValueIntoEvent_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB4F47D8692DF6A43F031850C600040CCAFBAA30C(L_22, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 3));
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_25 = __this->___m_InputEventPtr;
		CHECKED_LOCAL_INIT(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit,(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996(L_25, NULL);
		return;
	}
}
// Method Definition Index: 24171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenControl_SendValueToControl_TisIl2CppFullySharedGenericStruct_m5CF45A210F89CBADDC0AA576A7E7FDF653A63CCA_fshared (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	CHECKED_LOCAL(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit);
	const Il2CppFullySharedGenericStruct L_23 = alloca(SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292);
	//<source_info:<no-source>:1>
	InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* V_0 = NULL;
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___m_Control;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_1 = __this->___m_Control;
		V_0 = ((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0)));
		InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* L_2 = V_0;
		if (L_2)
		{
			goto IL_0074;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1(__this, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_9 = __this->___m_Control;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = il2cpp_codegen_object_get_type(L_9);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_15);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0074:
	{
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* L_19 = (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*)(&__this->___m_InputEventPtr);
		RuntimeObject* L_20 = ((InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields*)il2cpp_codegen_static_fields_for(InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var))->___s_Instance;
		NullCheck(L_20);
		double L_21;
		L_21 = InterfaceFuncInvoker0< double >::Invoke(20, IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var, L_20);
		InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810(L_19, L_21, NULL);
		InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* L_22 = V_0;
		il2cpp_codegen_memcpy(L_23, ___0_value, SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292);
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_24 = __this->___m_InputEventPtr;
		InvokerActionInvoker3< InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*, Il2CppFullySharedGenericStruct, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_22, L_23, L_24);
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_25 = __this->___m_InputEventPtr;
		CHECKED_LOCAL_INIT(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit,(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996(L_25, NULL);
		return;
	}
}
// Method Definition Index: 56603
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* OnceInScope_OnceIn_TisIl2CppFullySharedGenericAny_m13092BD953F8DD37AB75320678FF09A4834DA6AC_fshared (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_todo, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_todo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = OnceInScope_OnceIn_m4F8C9FC123BFDFEE9BEAFA9EDB8F4AB95E83C813(L_0, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 48075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ParallelSortExtensions_ParallelSort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m307293057FA42B55A54406370369701F6AB505FE (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	//<source_info:<no-source>:1>
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_9;
	memset((&V_9), 0, sizeof(V_9));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_10;
	memset((&V_10), 0, sizeof(V_10));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_11;
	memset((&V_11), 0, sizeof(V_11));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_12;
	memset((&V_12), 0, sizeof(V_12));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787 V_16;
	memset((&V_16), 0, sizeof(V_16));
	RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530 V_17;
	memset((&V_17), 0, sizeof(V_17));
	RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 V_18;
	memset((&V_18), 0, sizeof(V_18));
	RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787 V_19;
	memset((&V_19), 0, sizeof(V_19));
	RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530 V_20;
	memset((&V_20), 0, sizeof(V_20));
	RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 V_21;
	memset((&V_21), 0, sizeof(V_21));
	RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B V_22;
	memset((&V_22), 0, sizeof(V_22));
	SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 V_23;
	memset((&V_23), 0, sizeof(V_23));
	int32_t G_B6_0 = 0;
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if ((((int32_t)L_0) > ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = V_1;
		return L_1;
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)2048))))
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_3;
		L_3 = JobsUtility_get_JobWorkerCount_mECB1507F27193AB2B0FDF14D375C2913A78DC8B3(NULL);
		int32_t L_4;
		L_4 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)il2cpp_codegen_add(L_3, 1)), 1, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		float L_6 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_5,NULL));
		int32_t L_7 = V_2;
		float L_8 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_7,NULL));
		int32_t L_9;
		L_9 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(L_6/L_8)), NULL);
		int32_t L_10;
		L_10 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)256), L_9, NULL);
		V_3 = L_10;
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		float L_12 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_11,NULL));
		int32_t L_13 = V_3;
		float L_14 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_13,NULL));
		int32_t L_15;
		L_15 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(L_12/L_14)), NULL);
		V_4 = L_15;
		CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_16;
		L_16 = Marshal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D18A3514F6D070AC8C047BBFCFC1659A67EE1E(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_5 = L_16;
		int32_t L_17 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		int32_t L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_7), L_18, 3, 0, NULL);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_8), 1, 3, 1, NULL);
		int32_t L_19 = V_4;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_9), ((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)256))), 3, 1, NULL);
		int32_t L_20 = V_4;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_10), ((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)256))), 3, 0, NULL);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_11), ((int32_t)16), 3, 0, NULL);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_21 = ___0_array;
		V_12 = L_21;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_22 = V_7;
		V_13 = L_22;
		goto IL_00e1;
	}

IL_00e1:
	{
		G_B6_0 = 0;
	}

IL_00e2:
	{
		V_14 = G_B6_0;
		int32_t L_23 = V_14;
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00ec;
		}
	}
	{
		V_6 = (-1);
	}

IL_00ec:
	{
		V_15 = 0;
		goto IL_0228;
	}

IL_00f4:
	{
		il2cpp_codegen_initobj((&V_19), sizeof(RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787));
		int32_t L_24 = V_15;
		(&V_19)->___radix = L_24;
		int32_t L_25 = V_3;
		(&V_19)->___batchSize = L_25;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_26 = V_9;
		(&V_19)->___buckets = L_26;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_27 = V_12;
		(&V_19)->___array = L_27;
		int32_t L_28 = V_14;
		(&V_19)->___valueType = L_28;
		RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787 L_29 = V_19;
		V_16 = L_29;
		il2cpp_codegen_initobj((&V_20), sizeof(RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530));
		int32_t L_30 = V_15;
		(&V_20)->___radix = L_30;
		int32_t L_31 = V_4;
		(&V_20)->___jobsCount = L_31;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_32 = V_12;
		(&V_20)->___array = L_32;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_33 = V_8;
		(&V_20)->___counter = L_33;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_34 = V_9;
		(&V_20)->___buckets = L_34;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_35 = V_10;
		(&V_20)->___indices = L_35;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_36 = V_11;
		(&V_20)->___indicesSum = L_36;
		int32_t L_37 = V_6;
		(&V_20)->___signBitRadixIndex = L_37;
		RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530 L_38 = V_20;
		V_17 = L_38;
		il2cpp_codegen_initobj((&V_21), sizeof(RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90));
		int32_t L_39 = V_4;
		(&V_21)->___jobsCount = L_39;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_40 = V_10;
		(&V_21)->___indices = L_40;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_41 = V_11;
		(&V_21)->___indicesSum = L_41;
		RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 L_42 = V_21;
		V_18 = L_42;
		il2cpp_codegen_initobj((&V_22), sizeof(RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B));
		int32_t L_43 = V_15;
		(&V_22)->___radix = L_43;
		int32_t L_44 = V_3;
		(&V_22)->___batchSize = L_44;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_45 = V_10;
		(&V_22)->___indices = L_45;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_46 = V_12;
		(&V_22)->___array = L_46;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_47 = V_13;
		(&V_22)->___arraySorted = L_47;
		int32_t L_48 = V_14;
		(&V_22)->___valueType = L_48;
		RadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B L_49 = V_22;
		RadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787 L_50 = V_16;
		int32_t L_51 = V_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_52 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_53;
		L_53 = IJobForExtensions_ScheduleParallel_TisRadixSortBucketCountJob_1_tC9AD33E5E839CE12B0A1C15F622220EEC637D787_mFCBFFDD3A70242F3FD93CB7ABAC68E6C834FCDEB(L_50, L_51, 1, L_52, il2cpp_rgctx_method(method->rgctx_data, 5));
		V_0 = L_53;
		RadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530 L_54 = V_17;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_55 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_56;
		L_56 = IJobForExtensions_ScheduleParallel_TisRadixSortBatchPrefixSumJob_1_tFCA504AFEF3CBEA61B4DD09B0FF86255FCD2F530_m56BAD1725265F12485D97AED622B58225457276E(L_54, ((int32_t)16), 1, L_55, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_0 = L_56;
		RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 L_57 = V_18;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_58 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_59;
		L_59 = IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF(L_57, ((int32_t)16), 1, L_58, IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF_RuntimeMethod_var);
		V_0 = L_59;
		int32_t L_60 = V_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_61 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_62;
		L_62 = IJobForExtensions_ScheduleParallel_TisRadixSortBucketSortJob_1_t4FAA58B1A9BB055721412769BB8AA45AF098845B_m9551F6E502909FC3D07BF6055C985ABF1D890462(L_49, L_60, 1, L_61, il2cpp_rgctx_method(method->rgctx_data, 7));
		V_0 = L_62;
		JobHandle_ScheduleBatchedJobs_mCA0E146397E30E31FB57C96DAA1820451886DACA(NULL);
		ParallelSortExtensions_Swap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m839630944EE0B64A28D49E4734782848470998C2((&V_12), (&V_13), NULL);
		int32_t L_63 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0228:
	{
		int32_t L_64 = V_15;
		int32_t L_65 = V_5;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_00f4;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_66 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_67;
		L_67 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_7), L_66, il2cpp_rgctx_method(method->rgctx_data, 9));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_68 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_69;
		L_69 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_8), L_68, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_70 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_71;
		L_71 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_9), L_70, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_72 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_73;
		L_73 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_10), L_72, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_74 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_75;
		L_75 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_11), L_74, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		goto IL_0279;
	}

IL_0260:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_76 = ___0_array;
		SortJob_2_tF5A8EBE6C2885BA7F056EE208E1F67DAB0B69B03 L_77;
		L_77 = NativeSortExtension_SortJob_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E3417425C9B76FA372D6033A174ABAA465BFFAC(L_76, NULL);
		V_23 = L_77;
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_78 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_79;
		L_79 = SortJob_2_Schedule_m22719A523B631BE6909546A645D7FE71F71286E8((&V_23), L_78, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_0 = L_79;
	}

IL_0279:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_80 = V_0;
		return L_80;
	}
}
// Method Definition Index: 48075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ParallelSortExtensions_ParallelSort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mE81FC6406D40D1BE7BD5ED0CFC5EC355F21FB853 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	//<source_info:<no-source>:1>
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_9;
	memset((&V_9), 0, sizeof(V_9));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_10;
	memset((&V_10), 0, sizeof(V_10));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_11;
	memset((&V_11), 0, sizeof(V_11));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_12;
	memset((&V_12), 0, sizeof(V_12));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F V_16;
	memset((&V_16), 0, sizeof(V_16));
	RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16 V_17;
	memset((&V_17), 0, sizeof(V_17));
	RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 V_18;
	memset((&V_18), 0, sizeof(V_18));
	RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F V_19;
	memset((&V_19), 0, sizeof(V_19));
	RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16 V_20;
	memset((&V_20), 0, sizeof(V_20));
	RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 V_21;
	memset((&V_21), 0, sizeof(V_21));
	RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 V_23;
	memset((&V_23), 0, sizeof(V_23));
	int32_t G_B6_0 = 0;
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if ((((int32_t)L_0) > ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = V_1;
		return L_1;
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)2048))))
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_3;
		L_3 = JobsUtility_get_JobWorkerCount_mECB1507F27193AB2B0FDF14D375C2913A78DC8B3(NULL);
		int32_t L_4;
		L_4 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)il2cpp_codegen_add(L_3, 1)), 1, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		float L_6 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_5,NULL));
		int32_t L_7 = V_2;
		float L_8 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_7,NULL));
		int32_t L_9;
		L_9 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(L_6/L_8)), NULL);
		int32_t L_10;
		L_10 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)256), L_9, NULL);
		V_3 = L_10;
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		float L_12 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_11,NULL));
		int32_t L_13 = V_3;
		float L_14 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_13,NULL));
		int32_t L_15;
		L_15 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(L_12/L_14)), NULL);
		V_4 = L_15;
		CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_16;
		L_16 = Marshal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2AFC4B45EECC2B6C4D08C1975119242CD448FF9B(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_5 = L_16;
		int32_t L_17 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		int32_t L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		NativeArray_1__ctor_mA8531DC1B7696C5771660F84BEFAAD1B126030D1((&V_7), L_18, 3, 0, NULL);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_8), 1, 3, 1, NULL);
		int32_t L_19 = V_4;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_9), ((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)256))), 3, 1, NULL);
		int32_t L_20 = V_4;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_10), ((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)256))), 3, 0, NULL);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_11), ((int32_t)16), 3, 0, NULL);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_21 = ___0_array;
		V_12 = L_21;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_22 = V_7;
		V_13 = L_22;
	}
	{
		G_B6_0 = 1;
		goto IL_00e2;
	}

IL_00e2:
	{
		V_14 = G_B6_0;
		int32_t L_23 = V_14;
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00ec;
		}
	}
	{
		V_6 = (-1);
	}

IL_00ec:
	{
		V_15 = 0;
		goto IL_0228;
	}

IL_00f4:
	{
		il2cpp_codegen_initobj((&V_19), sizeof(RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F));
		int32_t L_24 = V_15;
		(&V_19)->___radix = L_24;
		int32_t L_25 = V_3;
		(&V_19)->___batchSize = L_25;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_26 = V_9;
		(&V_19)->___buckets = L_26;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_27 = V_12;
		(&V_19)->___array = L_27;
		int32_t L_28 = V_14;
		(&V_19)->___valueType = L_28;
		RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F L_29 = V_19;
		V_16 = L_29;
		il2cpp_codegen_initobj((&V_20), sizeof(RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16));
		int32_t L_30 = V_15;
		(&V_20)->___radix = L_30;
		int32_t L_31 = V_4;
		(&V_20)->___jobsCount = L_31;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_32 = V_12;
		(&V_20)->___array = L_32;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_33 = V_8;
		(&V_20)->___counter = L_33;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_34 = V_9;
		(&V_20)->___buckets = L_34;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_35 = V_10;
		(&V_20)->___indices = L_35;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_36 = V_11;
		(&V_20)->___indicesSum = L_36;
		int32_t L_37 = V_6;
		(&V_20)->___signBitRadixIndex = L_37;
		RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16 L_38 = V_20;
		V_17 = L_38;
		il2cpp_codegen_initobj((&V_21), sizeof(RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90));
		int32_t L_39 = V_4;
		(&V_21)->___jobsCount = L_39;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_40 = V_10;
		(&V_21)->___indices = L_40;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_41 = V_11;
		(&V_21)->___indicesSum = L_41;
		RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 L_42 = V_21;
		V_18 = L_42;
		il2cpp_codegen_initobj((&V_22), sizeof(RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9));
		int32_t L_43 = V_15;
		(&V_22)->___radix = L_43;
		int32_t L_44 = V_3;
		(&V_22)->___batchSize = L_44;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_45 = V_10;
		(&V_22)->___indices = L_45;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_46 = V_12;
		(&V_22)->___array = L_46;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_47 = V_13;
		(&V_22)->___arraySorted = L_47;
		int32_t L_48 = V_14;
		(&V_22)->___valueType = L_48;
		RadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9 L_49 = V_22;
		RadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F L_50 = V_16;
		int32_t L_51 = V_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_52 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_53;
		L_53 = IJobForExtensions_ScheduleParallel_TisRadixSortBucketCountJob_1_tEAF81C7A5326AA523C221928ACEF94EE5E373D5F_m2FFB988104525A51F97B8CC2ED54A81E3CF19E18(L_50, L_51, 1, L_52, il2cpp_rgctx_method(method->rgctx_data, 5));
		V_0 = L_53;
		RadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16 L_54 = V_17;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_55 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_56;
		L_56 = IJobForExtensions_ScheduleParallel_TisRadixSortBatchPrefixSumJob_1_tA4E70A5EABABBB95B11A1B2B40F0335B5AA6ED16_m11ADB6F6B132D92CB2259D94067C713502FBD390(L_54, ((int32_t)16), 1, L_55, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_0 = L_56;
		RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 L_57 = V_18;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_58 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_59;
		L_59 = IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF(L_57, ((int32_t)16), 1, L_58, IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF_RuntimeMethod_var);
		V_0 = L_59;
		int32_t L_60 = V_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_61 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_62;
		L_62 = IJobForExtensions_ScheduleParallel_TisRadixSortBucketSortJob_1_t68C34425FDC909DF8A4C73E7BD80203D7EE84DA9_m1E47FA1ABDF4B8D0BD56EDC140FD68303AE7596D(L_49, L_60, 1, L_61, il2cpp_rgctx_method(method->rgctx_data, 7));
		V_0 = L_62;
		JobHandle_ScheduleBatchedJobs_mCA0E146397E30E31FB57C96DAA1820451886DACA(NULL);
		ParallelSortExtensions_Swap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m290CEB2407F3A0360548F9599A90F5C4D037F1FE((&V_12), (&V_13), NULL);
		int32_t L_63 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0228:
	{
		int32_t L_64 = V_15;
		int32_t L_65 = V_5;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_00f4;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_66 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_67;
		L_67 = NativeArray_1_Dispose_mA8367AAA886520AD7C054D6B2908E0A692CC0F7F((&V_7), L_66, il2cpp_rgctx_method(method->rgctx_data, 9));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_68 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_69;
		L_69 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_8), L_68, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_70 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_71;
		L_71 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_9), L_70, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_72 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_73;
		L_73 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_10), L_72, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_74 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_75;
		L_75 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_11), L_74, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		goto IL_0279;
	}

IL_0260:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_76 = ___0_array;
		SortJob_2_tBF90EE16531C6130D4A9D7E83722875B5BB00478 L_77;
		L_77 = NativeSortExtension_SortJob_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m558724A75AB46A488295884665059D7611FECE27(L_76, NULL);
		V_23 = L_77;
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_78 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_79;
		L_79 = SortJob_2_Schedule_mFDC935A9492407CC030A6EB7E1985B02C9521349((&V_23), L_78, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_0 = L_79;
	}

IL_0279:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_80 = V_0;
		return L_80;
	}
}
// Method Definition Index: 48075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ParallelSortExtensions_ParallelSort_TisIl2CppFullySharedGenericStruct_m36A59740F21F09538E3AAAF1C9C553095953BFFC_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	//<source_info:<no-source>:1>
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_9;
	memset((&V_9), 0, sizeof(V_9));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_10;
	memset((&V_10), 0, sizeof(V_10));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_11;
	memset((&V_11), 0, sizeof(V_11));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_12;
	memset((&V_12), 0, sizeof(V_12));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93 V_16;
	memset((&V_16), 0, sizeof(V_16));
	RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C V_17;
	memset((&V_17), 0, sizeof(V_17));
	RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 V_18;
	memset((&V_18), 0, sizeof(V_18));
	RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93 V_19;
	memset((&V_19), 0, sizeof(V_19));
	RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C V_20;
	memset((&V_20), 0, sizeof(V_20));
	RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 V_21;
	memset((&V_21), 0, sizeof(V_21));
	RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D V_22;
	memset((&V_22), 0, sizeof(V_22));
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_23;
	memset((&V_23), 0, sizeof(V_23));
	int32_t G_B6_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), NULL);
		if ((((int32_t)L_0) > ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = V_1;
		return L_1;
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), NULL);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)2048))))
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_3;
		L_3 = JobsUtility_get_JobWorkerCount_mECB1507F27193AB2B0FDF14D375C2913A78DC8B3(NULL);
		int32_t L_4;
		L_4 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)il2cpp_codegen_add(L_3, 1)), 1, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), NULL);
		float L_6 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_5,NULL));
		int32_t L_7 = V_2;
		float L_8 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_7,NULL));
		int32_t L_9;
		L_9 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(L_6/L_8)), NULL);
		int32_t L_10;
		L_10 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)256), L_9, NULL);
		V_3 = L_10;
		int32_t L_11;
		L_11 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), NULL);
		float L_12 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_11,NULL));
		int32_t L_13 = V_3;
		float L_14 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_13,NULL));
		int32_t L_15;
		L_15 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(L_12/L_14)), NULL);
		V_4 = L_15;
		CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_16;
		L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_5 = L_16;
		int32_t L_17 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		int32_t L_18;
		L_18 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_array), NULL);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&V_7), L_18, 3, 0, il2cpp_rgctx_method(method->rgctx_data, 2));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_8), 1, 3, 1, NULL);
		int32_t L_19 = V_4;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_9), ((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)256))), 3, 1, NULL);
		int32_t L_20 = V_4;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_10), ((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)256))), 3, 0, NULL);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_11), ((int32_t)16), 3, 0, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_21 = ___0_array;
		V_12 = L_21;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_22 = V_7;
		V_13 = L_22;
		bool L_23 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 4));
		if (L_23)
		{
			goto IL_00e1;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B6_0 = 0;
	}

IL_00e2:
	{
		V_14 = G_B6_0;
		int32_t L_24 = V_14;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_00ec;
		}
	}
	{
		V_6 = (-1);
	}

IL_00ec:
	{
		V_15 = 0;
		goto IL_0228;
	}

IL_00f4:
	{
		il2cpp_codegen_initobj((&V_19), sizeof(RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93));
		int32_t L_25 = V_15;
		(&V_19)->___radix = L_25;
		int32_t L_26 = V_3;
		(&V_19)->___batchSize = L_26;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_27 = V_9;
		(&V_19)->___buckets = L_27;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_28 = V_12;
		(&V_19)->___array = L_28;
		int32_t L_29 = V_14;
		(&V_19)->___valueType = L_29;
		RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93 L_30 = V_19;
		V_16 = L_30;
		il2cpp_codegen_initobj((&V_20), sizeof(RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C));
		int32_t L_31 = V_15;
		(&V_20)->___radix = L_31;
		int32_t L_32 = V_4;
		(&V_20)->___jobsCount = L_32;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_33 = V_12;
		(&V_20)->___array = L_33;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_34 = V_8;
		(&V_20)->___counter = L_34;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_35 = V_9;
		(&V_20)->___buckets = L_35;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_36 = V_10;
		(&V_20)->___indices = L_36;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_37 = V_11;
		(&V_20)->___indicesSum = L_37;
		int32_t L_38 = V_6;
		(&V_20)->___signBitRadixIndex = L_38;
		RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C L_39 = V_20;
		V_17 = L_39;
		il2cpp_codegen_initobj((&V_21), sizeof(RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90));
		int32_t L_40 = V_4;
		(&V_21)->___jobsCount = L_40;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_41 = V_10;
		(&V_21)->___indices = L_41;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_42 = V_11;
		(&V_21)->___indicesSum = L_42;
		RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 L_43 = V_21;
		V_18 = L_43;
		il2cpp_codegen_initobj((&V_22), sizeof(RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D));
		int32_t L_44 = V_15;
		(&V_22)->___radix = L_44;
		int32_t L_45 = V_3;
		(&V_22)->___batchSize = L_45;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_46 = V_10;
		(&V_22)->___indices = L_46;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_47 = V_12;
		(&V_22)->___array = L_47;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_48 = V_13;
		(&V_22)->___arraySorted = L_48;
		int32_t L_49 = V_14;
		(&V_22)->___valueType = L_49;
		RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D L_50 = V_22;
		RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93 L_51 = V_16;
		int32_t L_52 = V_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_53 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_54;
		L_54 = InvokerFuncInvoker4< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, RadixSortBucketCountJob_1_t8CE90196DB677E4A0C7AC9264121BF2D87493A93, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_51, L_52, 1, L_53);
		V_0 = L_54;
		RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C L_55 = V_17;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_56 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_57;
		L_57 = InvokerFuncInvoker4< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, RadixSortBatchPrefixSumJob_1_t38091553B87D103286CED2992CA2392E2C1DF80C, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_55, ((int32_t)16), 1, L_56);
		V_0 = L_57;
		RadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90 L_58 = V_18;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_59 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_60;
		L_60 = IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF(L_58, ((int32_t)16), 1, L_59, IJobForExtensions_ScheduleParallel_TisRadixSortPrefixSumJob_tB66E0848187F3DC6F5EB22FABD8D1E92852B5E90_m72EB23CC3227298124F559A369DA43A5A1C8BCBF_RuntimeMethod_var);
		V_0 = L_60;
		int32_t L_61 = V_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_62 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_63;
		L_63 = InvokerFuncInvoker4< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, RadixSortBucketSortJob_1_tBA53182D91917571DC0AE06FF99EF355D4E2DB5D, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_50, L_61, 1, L_62);
		V_0 = L_63;
		JobHandle_ScheduleBatchedJobs_mCA0E146397E30E31FB57C96DAA1820451886DACA(NULL);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))((&V_12), (&V_13), NULL);
		int32_t L_64 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0228:
	{
		int32_t L_65 = V_15;
		int32_t L_66 = V_5;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_00f4;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_67 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_68;
		L_68 = ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))((&V_7), L_67, il2cpp_rgctx_method(method->rgctx_data, 9));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_69 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_70;
		L_70 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_8), L_69, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_71 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_72;
		L_72 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_9), L_71, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_73 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_74;
		L_74 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_10), L_73, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_75 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_76;
		L_76 = NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89((&V_11), L_75, NativeArray_1_Dispose_m8CD1E89A6A2EDB0A6DF4C8F63C2AF3ACF22C1D89_RuntimeMethod_var);
		goto IL_0279;
	}

IL_0260:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_77 = ___0_array;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_78;
		L_78 = ((  SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))(L_77, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_23 = L_78;
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_79 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_80;
		L_80 = ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))((&V_23), L_79, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_0 = L_80;
	}

IL_0279:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_81 = V_0;
		return L_81;
	}
}
// Method Definition Index: 48074
// Method Definition Index: 48074
// Method Definition Index: 48074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelSortExtensions_Swap_TisIl2CppFullySharedGenericStruct_m2B711BE52422A0F57CAEA7CABE48A47F62E232D1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_a, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_a;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_0);
		V_0 = L_1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = ___0_a;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___1_b;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_3);
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_2 = L_4;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_5 = ___1_b;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_0;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_5 = L_6;
		return;
	}
}
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
// Method Definition Index: 54492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9FA8FBE8BFDA0B72B0086303FA5839F16D2AF7C9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 V_12;
	memset((&V_12), 0, sizeof(V_12));
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	RuntimeObject* V_14 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_01bc;
			}
		}
	}
	{
		goto IL_0213;
	}

IL_0041:
	{
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_10 = ___1_container;
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_9, L_10, L_11, (&V_1));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_14 = ___1_container;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_13, __this, L_14);
		return;
	}

IL_0069:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
		return;
	}

IL_0071:
	{
		RuntimeObject* L_15 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_16 = V_6;
		if (!L_16)
		{
			goto IL_01b4;
		}
	}
	{
		RuntimeObject* L_17 = ___0_properties;
		V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 5)));
		RuntimeObject* L_18 = V_7;
		if (!L_18)
		{
			goto IL_013f;
		}
	}
	{
		int32_t L_19;
		L_19 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		RuntimeObject* L_20 = V_7;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_21 = ___1_container;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker1< int32_t, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_20, L_21);
		if ((((int32_t)L_19) >= ((int32_t)L_22)))
		{
			goto IL_013f;
		}
	}
	{
		RuntimeObject* L_23 = V_7;
		NullCheck(L_23);
		IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 L_24;
		L_24 = InterfaceFuncInvoker0< IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 >::Invoke(2, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_23);
		V_8 = L_24;
		RuntimeObject* L_25 = V_7;
		il2cpp_codegen_initobj((&V_10), sizeof(IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79));
		int32_t L_26;
		L_26 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		(&V_10)->___Index = L_26;
		(&V_10)->___IsReadOnly = (bool)0;
		IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 L_27 = V_10;
		NullCheck(L_25);
		InterfaceActionInvoker1< IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 >::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_25, L_27);
		RuntimeObject* L_28 = V_7;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_28);
		V_9 = L_29;
		RuntimeObject* L_30 = V_9;
		RuntimeObject* L_31 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var));
		if (L_31)
		{
			G_B11_0 = L_31;
			goto IL_00f3;
		}
		G_B10_0 = L_31;
	}
	{
		il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748));
		Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 L_32 = V_12;
		G_B12_0 = L_32;
		goto IL_0108;
	}

IL_00f3:
	{
		RuntimeObject* L_33;
		L_33 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(G_B11_0);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_34;
		L_34 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, G_B11_0, ((RuntimeObject*)IsInst((RuntimeObject*)L_33, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705((&L_35), L_34, NULL);
		G_B12_0 = L_35;
	}

IL_0108:
	{
		V_11 = G_B12_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0115:
			{
				{
					bool L_36;
					L_36 = Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_inline((&V_11), NULL);
					if (!L_36)
					{
						goto IL_0134;
					}
				}
				{
					AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_37;
					L_37 = Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_inline((&V_11), NULL);
					V_13 = L_37;
					AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				}

IL_0134:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_38 = V_9;
			StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_39 = ___1_container;
			NullCheck((RuntimeObject*)L_38);
			InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_38, __this, L_39);
			goto IL_0135;
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

IL_0135:
	{
		RuntimeObject* L_40 = V_7;
		IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 L_41 = V_8;
		NullCheck(L_40);
		InterfaceActionInvoker1< IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 >::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_40, L_41);
		return;
	}

IL_013f:
	{
		RuntimeObject* L_42 = V_6;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_43 = ___1_container;
		int32_t L_44;
		L_44 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_42);
		bool L_45;
		L_45 = InterfaceFuncInvoker3< bool, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_42, L_43, L_44, (&V_1));
		if (!L_45)
		{
			goto IL_01ac;
		}
	}
	{
		RuntimeObject* L_46 = V_1;
		RuntimeObject* L_47 = ((RuntimeObject*)IsInst((RuntimeObject*)L_46, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var));
		if (L_47)
		{
			G_B21_0 = L_47;
			goto IL_0168;
		}
		G_B20_0 = L_47;
	}
	{
		il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748));
		Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 L_48 = V_12;
		G_B22_0 = L_48;
		goto IL_017d;
	}

IL_0168:
	{
		RuntimeObject* L_49;
		L_49 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(G_B21_0);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_50;
		L_50 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, G_B21_0, ((RuntimeObject*)IsInst((RuntimeObject*)L_49, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705((&L_51), L_50, NULL);
		G_B22_0 = L_51;
	}

IL_017d:
	{
		V_11 = G_B22_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_018c:
			{
				{
					bool L_52;
					L_52 = Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_inline((&V_11), NULL);
					if (!L_52)
					{
						goto IL_01ab;
					}
				}
				{
					AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_53;
					L_53 = Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_inline((&V_11), NULL);
					V_13 = L_53;
					AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				}

IL_01ab:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_54 = V_1;
			StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_55 = ___1_container;
			NullCheck((RuntimeObject*)L_54);
			InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_54, __this, L_55);
			goto IL_021a;
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

IL_01ac:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
		return;
	}

IL_01b4:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
		return;
	}

IL_01bc:
	{
		RuntimeObject* L_56 = ___0_properties;
		V_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 11)));
		RuntimeObject* L_57 = V_14;
		if (!L_57)
		{
			goto IL_020b;
		}
	}
	{
		RuntimeObject* L_58 = V_14;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_59 = ___1_container;
		RuntimeObject* L_60;
		L_60 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_58);
		bool L_61;
		L_61 = InterfaceFuncInvoker3< bool, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 11), L_58, L_59, L_60, (&V_1));
		if (!L_61)
		{
			goto IL_020b;
		}
	}
	{
		RuntimeObject* L_62 = V_1;
		RuntimeObject* L_63;
		L_63 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_62, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_64;
		L_64 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_62, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_63, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_64;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01fd:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_65 = V_1;
			StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_66 = ___1_container;
			NullCheck((RuntimeObject*)L_65);
			InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_65, __this, L_66);
			goto IL_021a;
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

IL_020b:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
		return;
	}

IL_0213:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
	}

IL_021a:
	{
		return;
	}
}
// Method Definition Index: 57185
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
// Method Definition Index: 33891
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
// Method Definition Index: 33900
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_f;
		double L_1 = (il2cpp_codegen_conv<double,float,float,false,false>(L_0,NULL));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		double L_2;
		L_2 = ceil(L_1);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,double,double,false,false>(L_2,NULL));
		return L_3;
	}
}
// Method Definition Index: 54483
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = __this->___U3CPathU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 54237
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Kind;
		return L_0;
	}
}
// Method Definition Index: 54491
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReturnCodeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 54486
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CPropertyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 1854
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 31741
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 31743
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 31741
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint64_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 31743
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint64_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 31741
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5AE01E222FB08F27EB26C6D2FE6F873A34BE8707_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 31743
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m38B84F4395041C32077D6BD505700613A549E5B2_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 31741
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 31743
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 31741
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBD52AD6E8736CB48656CFA0961D93E411266B81E_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 31743
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m3A3B9DFD873633E9078206152E40D232B1B0F8D2_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 1946
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 1842
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m541FC0E035DCC15F5DF08D213BB9F453046A4333_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = ___0_array;
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
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_12;
		L_12 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_11);
		int32_t L_13 = ___1_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_14;
		L_14 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_12, L_13, sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1842
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_array;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int32_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<int32_t>(L_11);
		int32_t L_13 = ___1_start;
		int32_t* L_14;
		L_14 = il2cpp_unsafe_add<int32_t,int32_t>(L_12, L_13, sizeof(int32_t));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1842
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m94C662286E6962E7D0D2333BE505C17AB72B0239_inline (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_7 = ___0_array;
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
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_12;
		L_12 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>(L_11);
		int32_t L_13 = ___1_start;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_14;
		L_14 = il2cpp_unsafe_add<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,int32_t>(L_12, L_13, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1842
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB67526D7521FC963E2F149D3D8626BB633F8249F_inline (ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B* __this, NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t5B9D201D351CEEF03827C160DCA08DBF31B1452B));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* L_7 = ___0_array;
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
		NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* L_12;
		L_12 = il2cpp_unsafe_as_ref<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD>(L_11);
		int32_t L_13 = ___1_start;
		NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* L_14;
		L_14 = il2cpp_unsafe_add<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD,int32_t>(L_12, L_13, sizeof(NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD));
		ByReference_1_t9CADE410466BC270E5C6ADCD40217618DDC488D8 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1842
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC2013143DC1227FA2243E83F9C385E5D3F48520D_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_array;
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
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		float* L_12;
		L_12 = il2cpp_unsafe_as_ref<float>(L_11);
		int32_t L_13 = ___1_start;
		float* L_14;
		L_14 = il2cpp_unsafe_add<float,int32_t>(L_12, L_13, sizeof(float));
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1842
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2C141C25072ADD535CDEEB08B6EF07359A550AF2_inline (ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C* __this, StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t99E6AD27606F3DF62F7E6A825AAD58B764C9801C));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_7 = ___0_array;
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
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* L_12;
		L_12 = il2cpp_unsafe_as_ref<StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269>(L_11);
		int32_t L_13 = ___1_start;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* L_14;
		L_14 = il2cpp_unsafe_add<StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269,int32_t>(L_12, L_13, sizeof(StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269));
		ByReference_1_tB40D2C98D0CA57FD7CDE23E4F1509D24900D8101 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1842
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA3840C7226D793D4B75979B13B1A6B0B25342950_inline (ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7F209BEB92ACAD70FF48E8A47CD55492BB699A55));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_7 = ___0_array;
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
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_12;
		L_12 = il2cpp_unsafe_as_ref<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207>(L_11);
		int32_t L_13 = ___1_start;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_14;
		L_14 = il2cpp_unsafe_add<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207,int32_t>(L_12, L_13, sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207));
		ByReference_1_tCD6518F15D44935EFDC820F5ACCB8F718BDF1CCC L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1842
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAD7DD079A06A764EF0EC1D0C2E3A78EB3B7CE4A5_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ___0_array;
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
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12;
		L_12 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_11);
		int32_t L_13 = ___1_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14;
		L_14 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_12, L_13, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1842
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m50D9A479573E152D695E7C9FFA1BE5A161ECB414_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = ___0_array;
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
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_12;
		L_12 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_11);
		int32_t L_13 = ___1_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_14;
		L_14 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_12, L_13, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 1842
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
// Method Definition Index: 1933
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m29132D51CA4DD7CE44F871A6DE4E62C10876DA34_inline (Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4* __this, StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* L_0 = ___0_array;
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t532986431ECB076ABA686C666AF8C40F4419ADF4));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* L_8 = ___0_array;
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
		StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* L_13;
		L_13 = il2cpp_unsafe_as_ref<StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE>(L_12);
		int32_t L_14 = ___1_start;
		StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* L_15;
		L_15 = il2cpp_unsafe_add<StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE,int32_t>(L_13, L_14, sizeof(StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE));
		ByReference_1_tCB472E8204433C747D9B3882DBEEC3375436F7E3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 1933
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
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
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type((RuntimeObject*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((!(((uint32_t)L_10) <= ((uint32_t)L_12))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))))
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
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		NullCheck((RuntimeArray*)L_17);
		uint8_t* L_18;
		L_18 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_17, NULL);
		Il2CppFullySharedGenericAny* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_18);
		int32_t L_20 = ___1_start;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_19, L_20, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_22;
		memset((&L_22), 0, sizeof(L_22));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_22), L_21);
		__this->____pointer = L_22;
		int32_t L_23 = ___2_length;
		__this->____length = L_23;
		return;
	}
}
// Method Definition Index: 8930
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 8913
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 1677
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_inline (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
// Method Definition Index: 1679
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_inline (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 2572
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
// Method Definition Index: 59540
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 59542
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 59540
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 59542
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = ___2_value;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 59540
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtilityInternal_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5AE01E222FB08F27EB26C6D2FE6F873A34BE8707_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 59542
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m38B84F4395041C32077D6BD505700613A549E5B2_inline (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___2_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 59540
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 59542
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___2_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 59540
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtilityInternal_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBD52AD6E8736CB48656CFA0961D93E411266B81E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_6 = (*(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 59542
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m3A3B9DFD873633E9078206152E40D232B1B0F8D2_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_6 = ___2_value;
		*(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
