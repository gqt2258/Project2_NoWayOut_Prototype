#include "pch-cpp.hpp"





struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};

struct List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IContext_t20E0E10A55E1F1C214B258084FAE0B0D95BC44EC;
struct IEditorSetupHandler_tD984B7D2F35111D49E1C6827202B27BDFA54EBED;
struct IRuntimeSetupHandler_tCB79F0BCB39149D38CA4FFEAD4ACF51C4A4A0FD7;
struct IRuntimeUpdater_tCBB5631EBF90E5CA59A5FD4B4286461147B49AE9;
struct MethodInfo_t;
struct RuntimeUpdater_t7537D59DF47998E67F0589195F728AE6AE15D062;
struct RuntimeUpdaterBehaviour_t256D9FB4B909FD0E42BDDFF31FBD6B01FA87D263;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEditorSetupHandler_tD984B7D2F35111D49E1C6827202B27BDFA54EBED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRuntimeSetupHandler_tCB79F0BCB39149D38CA4FFEAD4ACF51C4A4A0FD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeUpdater_t7537D59DF47998E67F0589195F728AE6AE15D062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContextsInitializer_DisableRuntimeContexts_mD007C46B7C34B2311167F70AAE6A3FA436AF5ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m76486973DF88B024079A852D514956779D48366E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCF641A561BC4A151420D1FC3A10DF2CD3CD319E8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tEC7D25DDAF832BD244649F287ADF5A79248E7949 
{
};
struct List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA  : public RuntimeObject
{
	IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ContextsDefinition_tE54D5502AFD02027CB5A93C0CD93618412B09AF6  : public RuntimeObject
{
};
struct ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0  : public RuntimeObject
{
};
struct RuntimeUpdater_t7537D59DF47998E67F0589195F728AE6AE15D062  : public RuntimeObject
{
	RuntimeUpdaterBehaviour_t256D9FB4B909FD0E42BDDFF31FBD6B01FA87D263* ___m_Component;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAwake;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnStart;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnUpdate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnFixedUpdate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnLateUpdate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnDestroyed;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA_StaticFields
{
	IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* ___s_emptyArray;
};
struct ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields
{
	IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* ___s_Contexts;
	bool ___s_RuntimeContextsEnabled;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* List_1_ToArray_m90E6D9E57256EC0FB6B36FDC40F65B0F59D7B671_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;

inline void List_1__ctor_mCF641A561BC4A151420D1FC3A10DF2CD3CD319E8 (List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUpdater__ctor_m82FEF4E89D649CAB15C8699351D020621955C66C (RuntimeUpdater_t7537D59DF47998E67F0589195F728AE6AE15D062* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextsDefinition_InitializeNetVisContexts_m50604EC7CC64F5B9B401486E7C02AB1A0C6067AB (RuntimeObject* ___0_runtimeUpdater, List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA* ___1_contexts, const RuntimeMethod* method) ;
inline IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* List_1_ToArray_m76486973DF88B024079A852D514956779D48366E (List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA* __this, const RuntimeMethod* method)
{
	return ((  IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* (*) (List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA*, const RuntimeMethod*))List_1_ToArray_m90E6D9E57256EC0FB6B36FDC40F65B0F59D7B671_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_quitting_m9DC9D4165EDB0FD93AB893655E26BF73566D2C1B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextsInitializer_DisableRuntimeContexts_mD007C46B7C34B2311167F70AAE6A3FA436AF5ABD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* ContextsDefinition_GetContextsDefinitions_m601F9E5C49C5C39E4B7CEF0722842AA4E97018E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextsInitializer_ReinitializeEditorContexts_mF744268221B3C95417B37B67A0B9B986E20CB6A8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
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
// Method Definition Index: 68994
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* ContextsDefinition_GetContextsDefinitions_m601F9E5C49C5C39E4B7CEF0722842AA4E97018E6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m76486973DF88B024079A852D514956779D48366E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCF641A561BC4A151420D1FC3A10DF2CD3CD319E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUpdater_t7537D59DF47998E67F0589195F728AE6AE15D062_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA* V_0 = NULL;
	{
		List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA* L_0 = (List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA*)il2cpp_codegen_object_new(List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA_il2cpp_TypeInfo_var);
		List_1__ctor_mCF641A561BC4A151420D1FC3A10DF2CD3CD319E8(L_0, List_1__ctor_mCF641A561BC4A151420D1FC3A10DF2CD3CD319E8_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeUpdater_t7537D59DF47998E67F0589195F728AE6AE15D062* L_1 = (RuntimeUpdater_t7537D59DF47998E67F0589195F728AE6AE15D062*)il2cpp_codegen_object_new(RuntimeUpdater_t7537D59DF47998E67F0589195F728AE6AE15D062_il2cpp_TypeInfo_var);
		RuntimeUpdater__ctor_m82FEF4E89D649CAB15C8699351D020621955C66C(L_1, NULL);
		List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA* L_2 = V_0;
		ContextsDefinition_InitializeNetVisContexts_m50604EC7CC64F5B9B401486E7C02AB1A0C6067AB(L_1, L_2, NULL);
		List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA* L_3 = V_0;
		NullCheck(L_3);
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_4;
		L_4 = List_1_ToArray_m76486973DF88B024079A852D514956779D48366E(L_3, List_1_ToArray_m76486973DF88B024079A852D514956779D48366E_RuntimeMethod_var);
		return L_4;
	}
}
// Method Definition Index: 68995
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextsDefinition_InitializeNetVisContexts_m50604EC7CC64F5B9B401486E7C02AB1A0C6067AB (RuntimeObject* ___0_runtimeUpdater, List_1_tA808473BFCDF119C60D65DAAE2190C66214412CA* ___1_contexts, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
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
// Method Definition Index: 68996
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextsInitializer_ReinitializeEditorContexts_mF744268221B3C95417B37B67A0B9B986E20CB6A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextsInitializer_DisableRuntimeContexts_mD007C46B7C34B2311167F70AAE6A3FA436AF5ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit);
	CHECKED_LOCAL(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit,(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_0 = ((ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields*)il2cpp_codegen_static_fields_for(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var))->___s_Contexts;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CHECKED_LOCAL_INIT(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit,(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields*)il2cpp_codegen_static_fields_for(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var))->___s_RuntimeContextsEnabled;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, NULL, (intptr_t)((void*)ContextsInitializer_DisableRuntimeContexts_mD007C46B7C34B2311167F70AAE6A3FA436AF5ABD_RuntimeMethod_var), NULL);
		CHECKED_LOCAL_INIT(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_StaticInit,(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Application_remove_quitting_m9DC9D4165EDB0FD93AB893655E26BF73566D2C1B(L_2, NULL);
		CHECKED_LOCAL_INIT(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit,(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ContextsInitializer_DisableRuntimeContexts_mD007C46B7C34B2311167F70AAE6A3FA436AF5ABD(NULL);
	}

IL_0024:
	{
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_3;
		L_3 = ContextsDefinition_GetContextsDefinitions_m601F9E5C49C5C39E4B7CEF0722842AA4E97018E6(NULL);
		CHECKED_LOCAL_INIT(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit,(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		((ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields*)il2cpp_codegen_static_fields_for(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var))->___s_Contexts = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields*)il2cpp_codegen_static_fields_for(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var))->___s_Contexts), (void*)L_3);
		return;
	}
}
// Method Definition Index: 68997
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextsInitializer__cctor_mE74764BE541A446B919854A4DE1EE0CE1FDB58FB (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ContextsInitializer_ReinitializeEditorContexts_mF744268221B3C95417B37B67A0B9B986E20CB6A8(NULL);
		return;
	}
}
// Method Definition Index: 68998
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextsInitializer_EnableEditorContexts_m8FC064FA2B08C4E3DECFF0F9C05C9812E4FD8B10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEditorSetupHandler_tD984B7D2F35111D49E1C6827202B27BDFA54EBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit);
	//<source_info:<no-source>:1>
	IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		CHECKED_LOCAL_INIT(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit,(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_0 = ((ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields*)il2cpp_codegen_static_fields_for(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var))->___s_Contexts;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000a:
	{
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IEditorSetupHandler_tD984B7D2F35111D49E1C6827202B27BDFA54EBED_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_2;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_6 = V_2;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0, IEditorSetupHandler_tD984B7D2F35111D49E1C6827202B27BDFA54EBED_il2cpp_TypeInfo_var, L_6);
	}

IL_001c:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 68999
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextsInitializer_EnableRuntimeContexts_m73426613931500F441DCC7C3948F4980D0D2E3FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextsInitializer_DisableRuntimeContexts_mD007C46B7C34B2311167F70AAE6A3FA436AF5ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRuntimeSetupHandler_tCB79F0BCB39149D38CA4FFEAD4ACF51C4A4A0FD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_StaticInit);
	CHECKED_LOCAL(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit);
	//<source_info:<no-source>:1>
	IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, NULL, (intptr_t)((void*)ContextsInitializer_DisableRuntimeContexts_mD007C46B7C34B2311167F70AAE6A3FA436AF5ABD_RuntimeMethod_var), NULL);
		CHECKED_LOCAL_INIT(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_StaticInit,(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5(L_0, NULL);
		CHECKED_LOCAL_INIT(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit,(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		((ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields*)il2cpp_codegen_static_fields_for(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var))->___s_RuntimeContextsEnabled = (bool)1;
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_1 = ((ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields*)il2cpp_codegen_static_fields_for(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var))->___s_Contexts;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0037;
	}

IL_0021:
	{
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IRuntimeSetupHandler_tCB79F0BCB39149D38CA4FFEAD4ACF51C4A4A0FD7_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_7 = V_2;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(0, IRuntimeSetupHandler_tCB79F0BCB39149D38CA4FFEAD4ACF51C4A4A0FD7_il2cpp_TypeInfo_var, L_7);
	}

IL_0033:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0037:
	{
		int32_t L_9 = V_1;
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 69000
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextsInitializer_DisableRuntimeContexts_mD007C46B7C34B2311167F70AAE6A3FA436AF5ABD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRuntimeSetupHandler_tCB79F0BCB39149D38CA4FFEAD4ACF51C4A4A0FD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit);
	//<source_info:<no-source>:1>
	IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		CHECKED_LOCAL_INIT(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticInit,(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		((ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields*)il2cpp_codegen_static_fields_for(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var))->___s_RuntimeContextsEnabled = (bool)0;
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_0 = ((ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_StaticFields*)il2cpp_codegen_static_fields_for(ContextsInitializer_t561A8E6B0DB7A4873B2B17A176FE1DDC8ABC1FA0_il2cpp_TypeInfo_var))->___s_Contexts;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_0010:
	{
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IRuntimeSetupHandler_tCB79F0BCB39149D38CA4FFEAD4ACF51C4A4A0FD7_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_2;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = V_2;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(1, IRuntimeSetupHandler_tCB79F0BCB39149D38CA4FFEAD4ACF51C4A4A0FD7_il2cpp_TypeInfo_var, L_6);
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0026:
	{
		int32_t L_8 = V_1;
		IContextU5BU5D_t30E49896A3808DE7DACDCDB1F4039D0085E68343* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
