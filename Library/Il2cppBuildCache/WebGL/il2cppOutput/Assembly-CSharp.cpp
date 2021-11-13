﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Animation
struct Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// AntAnimator
struct AntAnimator_t3C8A4014466F3519627253016F6587A7E574E93A;
// AntController
struct AntController_tD6C13BA3B6C14BE9C33400486338CD1D76F37AF2;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Attack
struct Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED;
// Bound
struct Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Constants
struct Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02;
// Controller
struct Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC;
// Cooldown
struct Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50;
// Damageability
struct Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535;
// DownBound
struct DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11;
// EndOfMap
struct EndOfMap_t1CEAAC99420E9DDC11363F7FBA61A15E63E61236;
// EnemyAttack
struct EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2;
// EnemyController
struct EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GhostGround
struct GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// GrasshopperAnimator
struct GrasshopperAnimator_t6B1D7743FFD1F235DE2FC33710CCD494BDEAEC23;
// GrasshopperController
struct GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LeftBound
struct LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// MobMovement
struct MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Movement
struct Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Pendulum
struct Pendulum_tED761124130781291E1654C57275317CF04FBFD5;
// PlayerAnimation
struct PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856;
// PlayerAttack
struct PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// PlayerDamageability
struct PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// RightBound
struct RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// RottenBlock
struct RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TrapAttack
struct TrapAttack_tD0761091436D620B97EE8E3A71AB6DB4F05AC246;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UpBound
struct UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08459037BC14BBFB8FEA6538501D64E580CA6559;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral4DB9B3B0FD234EC27B05692E5C2D7E899699405D;
IL2CPP_EXTERN_C String_t* _stringLiteral50B6C76BB62E7F5AFC4588A2E78F4CA099D6852D;
IL2CPP_EXTERN_C String_t* _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral7598EFBF4A029BF0B3B286271D8C3B865F7A66FA;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE07A2F07AF3AE8A47350CFDD4941F5465C94F2;
IL2CPP_EXTERN_C String_t* _stringLiteral8A0CB0372CDAEF0E05244CA0FF4ACA2D282B2A22;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF46270501A8D06F28173E0692A7138A32864AA;
IL2CPP_EXTERN_C String_t* _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisDownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11_mE21CD900D34F29B952C778EACFBF3204C6FB3766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisLeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1_mB3D1743A50515737D65562203B24D64EACDC2928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisRightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD_mAC99B8244B20D6053B5BB0DCCF40FF7FF9F36366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisUpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5_mC2362DEE1AC867B8A0DF1232D55C98A21AB6C160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_tA64B0031D872E861F15C2C7B38175F2FB7A84786_mC727F47E6A56D9BC714312B7D6C2440C55750CB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mA95F9DFAE8D31034C4D8A5775206A1072F20172A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2_mA3422CE6D6F9FECCAC40BD538B78705A7D32CCFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_m51AA75B98504DC73BBC9EEF70C81AC28379085D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856_m8A716D38960B89DDA13376C60892D1ED8E2D501E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454_mE5BC2651CC4F6C294053C50FB5AD8D862DEB7B85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Movement_GiveForce_m7EDA945AAD4DAD6149B0E55FB963577CFF444D4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Movement_GiveVelocityAb_mBE8F0366F1B2F09BC12F010D1893E1851B0FCF83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Movement_GiveVelocity_m313055286CB88C72E085024E66CD491C8B1D7F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Movement_SetVelocityAb_mA5EEAAC58FE0E9C861D238590FD956A2AC10C758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
};


// Constants
struct Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02  : public RuntimeObject
{
public:

public:
};

struct Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields
{
public:
	// System.String Constants::playerTag
	String_t* ___playerTag_0;
	// System.String Constants::groundTag
	String_t* ___groundTag_1;
	// System.String Constants::antTag
	String_t* ___antTag_2;
	// System.String Constants::glasshopperTag
	String_t* ___glasshopperTag_3;
	// System.String Constants::changeDirectionTag
	String_t* ___changeDirectionTag_4;
	// System.Collections.ArrayList Constants::EnemyChangeDirection
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___EnemyChangeDirection_5;
	// System.Collections.ArrayList Constants::PlayerGiveDamage
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___PlayerGiveDamage_6;

public:
	inline static int32_t get_offset_of_playerTag_0() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___playerTag_0)); }
	inline String_t* get_playerTag_0() const { return ___playerTag_0; }
	inline String_t** get_address_of_playerTag_0() { return &___playerTag_0; }
	inline void set_playerTag_0(String_t* value)
	{
		___playerTag_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTag_0), (void*)value);
	}

	inline static int32_t get_offset_of_groundTag_1() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___groundTag_1)); }
	inline String_t* get_groundTag_1() const { return ___groundTag_1; }
	inline String_t** get_address_of_groundTag_1() { return &___groundTag_1; }
	inline void set_groundTag_1(String_t* value)
	{
		___groundTag_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundTag_1), (void*)value);
	}

	inline static int32_t get_offset_of_antTag_2() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___antTag_2)); }
	inline String_t* get_antTag_2() const { return ___antTag_2; }
	inline String_t** get_address_of_antTag_2() { return &___antTag_2; }
	inline void set_antTag_2(String_t* value)
	{
		___antTag_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___antTag_2), (void*)value);
	}

	inline static int32_t get_offset_of_glasshopperTag_3() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___glasshopperTag_3)); }
	inline String_t* get_glasshopperTag_3() const { return ___glasshopperTag_3; }
	inline String_t** get_address_of_glasshopperTag_3() { return &___glasshopperTag_3; }
	inline void set_glasshopperTag_3(String_t* value)
	{
		___glasshopperTag_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___glasshopperTag_3), (void*)value);
	}

	inline static int32_t get_offset_of_changeDirectionTag_4() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___changeDirectionTag_4)); }
	inline String_t* get_changeDirectionTag_4() const { return ___changeDirectionTag_4; }
	inline String_t** get_address_of_changeDirectionTag_4() { return &___changeDirectionTag_4; }
	inline void set_changeDirectionTag_4(String_t* value)
	{
		___changeDirectionTag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeDirectionTag_4), (void*)value);
	}

	inline static int32_t get_offset_of_EnemyChangeDirection_5() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___EnemyChangeDirection_5)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_EnemyChangeDirection_5() const { return ___EnemyChangeDirection_5; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_EnemyChangeDirection_5() { return &___EnemyChangeDirection_5; }
	inline void set_EnemyChangeDirection_5(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___EnemyChangeDirection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyChangeDirection_5), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerGiveDamage_6() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___PlayerGiveDamage_6)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_PlayerGiveDamage_6() const { return ___PlayerGiveDamage_6; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_PlayerGiveDamage_6() { return &___PlayerGiveDamage_6; }
	inline void set_PlayerGiveDamage_6(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___PlayerGiveDamage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerGiveDamage_6), (void*)value);
	}
};


// Cooldown
struct Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50  : public RuntimeObject
{
public:
	// System.Single Cooldown::cooldown
	float ___cooldown_0;
	// System.Diagnostics.Stopwatch Cooldown::stopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___stopwatch_1;

public:
	inline static int32_t get_offset_of_cooldown_0() { return static_cast<int32_t>(offsetof(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50, ___cooldown_0)); }
	inline float get_cooldown_0() const { return ___cooldown_0; }
	inline float* get_address_of_cooldown_0() { return &___cooldown_0; }
	inline void set_cooldown_0(float value)
	{
		___cooldown_0 = value;
	}

	inline static int32_t get_offset_of_stopwatch_1() { return static_cast<int32_t>(offsetof(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50, ___stopwatch_1)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_stopwatch_1() const { return ___stopwatch_1; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_stopwatch_1() { return &___stopwatch_1; }
	inline void set_stopwatch_1(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___stopwatch_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_1), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RigidbodyConstraints2D
struct RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Animation
struct Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator Animation::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_4;
	// System.Int32 Animation::code
	int32_t ___code_5;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786, ___animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_4() const { return ___animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}

	inline static int32_t get_offset_of_code_5() { return static_cast<int32_t>(offsetof(Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786, ___code_5)); }
	inline int32_t get_code_5() const { return ___code_5; }
	inline int32_t* get_address_of_code_5() { return &___code_5; }
	inline void set_code_5(int32_t value)
	{
		___code_5 = value;
	}
};


// Attack
struct Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Attack::attack
	bool ___attack_4;
	// System.Single Attack::tossing
	float ___tossing_5;
	// System.Single Attack::tossingUp
	float ___tossingUp_6;
	// System.Int32 Attack::attackPower
	int32_t ___attackPower_7;
	// System.Single Attack::cooldown
	float ___cooldown_8;
	// Cooldown Attack::attackCooldown
	Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * ___attackCooldown_9;
	// System.Boolean Attack::attackedFlag
	bool ___attackedFlag_10;

public:
	inline static int32_t get_offset_of_attack_4() { return static_cast<int32_t>(offsetof(Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED, ___attack_4)); }
	inline bool get_attack_4() const { return ___attack_4; }
	inline bool* get_address_of_attack_4() { return &___attack_4; }
	inline void set_attack_4(bool value)
	{
		___attack_4 = value;
	}

	inline static int32_t get_offset_of_tossing_5() { return static_cast<int32_t>(offsetof(Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED, ___tossing_5)); }
	inline float get_tossing_5() const { return ___tossing_5; }
	inline float* get_address_of_tossing_5() { return &___tossing_5; }
	inline void set_tossing_5(float value)
	{
		___tossing_5 = value;
	}

	inline static int32_t get_offset_of_tossingUp_6() { return static_cast<int32_t>(offsetof(Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED, ___tossingUp_6)); }
	inline float get_tossingUp_6() const { return ___tossingUp_6; }
	inline float* get_address_of_tossingUp_6() { return &___tossingUp_6; }
	inline void set_tossingUp_6(float value)
	{
		___tossingUp_6 = value;
	}

	inline static int32_t get_offset_of_attackPower_7() { return static_cast<int32_t>(offsetof(Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED, ___attackPower_7)); }
	inline int32_t get_attackPower_7() const { return ___attackPower_7; }
	inline int32_t* get_address_of_attackPower_7() { return &___attackPower_7; }
	inline void set_attackPower_7(int32_t value)
	{
		___attackPower_7 = value;
	}

	inline static int32_t get_offset_of_cooldown_8() { return static_cast<int32_t>(offsetof(Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED, ___cooldown_8)); }
	inline float get_cooldown_8() const { return ___cooldown_8; }
	inline float* get_address_of_cooldown_8() { return &___cooldown_8; }
	inline void set_cooldown_8(float value)
	{
		___cooldown_8 = value;
	}

	inline static int32_t get_offset_of_attackCooldown_9() { return static_cast<int32_t>(offsetof(Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED, ___attackCooldown_9)); }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * get_attackCooldown_9() const { return ___attackCooldown_9; }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 ** get_address_of_attackCooldown_9() { return &___attackCooldown_9; }
	inline void set_attackCooldown_9(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * value)
	{
		___attackCooldown_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackCooldown_9), (void*)value);
	}

	inline static int32_t get_offset_of_attackedFlag_10() { return static_cast<int32_t>(offsetof(Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED, ___attackedFlag_10)); }
	inline bool get_attackedFlag_10() const { return ___attackedFlag_10; }
	inline bool* get_address_of_attackedFlag_10() { return &___attackedFlag_10; }
	inline void set_attackedFlag_10(bool value)
	{
		___attackedFlag_10 = value;
	}
};


// Bound
struct Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.ArrayList Bound::contacts
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___contacts_4;
	// System.Boolean Bound::contactWithGround
	bool ___contactWithGround_5;

public:
	inline static int32_t get_offset_of_contacts_4() { return static_cast<int32_t>(offsetof(Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD, ___contacts_4)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_contacts_4() const { return ___contacts_4; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_contacts_4() { return &___contacts_4; }
	inline void set_contacts_4(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___contacts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contacts_4), (void*)value);
	}

	inline static int32_t get_offset_of_contactWithGround_5() { return static_cast<int32_t>(offsetof(Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD, ___contactWithGround_5)); }
	inline bool get_contactWithGround_5() const { return ___contactWithGround_5; }
	inline bool* get_address_of_contactWithGround_5() { return &___contactWithGround_5; }
	inline void set_contactWithGround_5(bool value)
	{
		___contactWithGround_5 = value;
	}
};


// Controller
struct Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Damageability
struct Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Damageability::maxHp
	int32_t ___maxHp_4;
	// System.Int32 Damageability::currentHp
	int32_t ___currentHp_5;
	// System.Boolean Damageability::alive
	bool ___alive_6;
	// System.Boolean Damageability::damagedFlag
	bool ___damagedFlag_7;
	// System.Boolean Damageability::damagedFlag2
	bool ___damagedFlag2_8;
	// System.Single Damageability::waitForDestroy
	float ___waitForDestroy_9;

public:
	inline static int32_t get_offset_of_maxHp_4() { return static_cast<int32_t>(offsetof(Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535, ___maxHp_4)); }
	inline int32_t get_maxHp_4() const { return ___maxHp_4; }
	inline int32_t* get_address_of_maxHp_4() { return &___maxHp_4; }
	inline void set_maxHp_4(int32_t value)
	{
		___maxHp_4 = value;
	}

	inline static int32_t get_offset_of_currentHp_5() { return static_cast<int32_t>(offsetof(Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535, ___currentHp_5)); }
	inline int32_t get_currentHp_5() const { return ___currentHp_5; }
	inline int32_t* get_address_of_currentHp_5() { return &___currentHp_5; }
	inline void set_currentHp_5(int32_t value)
	{
		___currentHp_5 = value;
	}

	inline static int32_t get_offset_of_alive_6() { return static_cast<int32_t>(offsetof(Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535, ___alive_6)); }
	inline bool get_alive_6() const { return ___alive_6; }
	inline bool* get_address_of_alive_6() { return &___alive_6; }
	inline void set_alive_6(bool value)
	{
		___alive_6 = value;
	}

	inline static int32_t get_offset_of_damagedFlag_7() { return static_cast<int32_t>(offsetof(Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535, ___damagedFlag_7)); }
	inline bool get_damagedFlag_7() const { return ___damagedFlag_7; }
	inline bool* get_address_of_damagedFlag_7() { return &___damagedFlag_7; }
	inline void set_damagedFlag_7(bool value)
	{
		___damagedFlag_7 = value;
	}

	inline static int32_t get_offset_of_damagedFlag2_8() { return static_cast<int32_t>(offsetof(Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535, ___damagedFlag2_8)); }
	inline bool get_damagedFlag2_8() const { return ___damagedFlag2_8; }
	inline bool* get_address_of_damagedFlag2_8() { return &___damagedFlag2_8; }
	inline void set_damagedFlag2_8(bool value)
	{
		___damagedFlag2_8 = value;
	}

	inline static int32_t get_offset_of_waitForDestroy_9() { return static_cast<int32_t>(offsetof(Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535, ___waitForDestroy_9)); }
	inline float get_waitForDestroy_9() const { return ___waitForDestroy_9; }
	inline float* get_address_of_waitForDestroy_9() { return &___waitForDestroy_9; }
	inline void set_waitForDestroy_9(float value)
	{
		___waitForDestroy_9 = value;
	}
};


// EndOfMap
struct EndOfMap_t1CEAAC99420E9DDC11363F7FBA61A15E63E61236  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GhostGround
struct GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Collider2D GhostGround::collider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider_4;
	// System.Single GhostGround::fixerF
	float ___fixerF_5;
	// System.Single GhostGround::fixer
	float ___fixer_6;

public:
	inline static int32_t get_offset_of_collider_4() { return static_cast<int32_t>(offsetof(GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74, ___collider_4)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_collider_4() const { return ___collider_4; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_collider_4() { return &___collider_4; }
	inline void set_collider_4(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___collider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_4), (void*)value);
	}

	inline static int32_t get_offset_of_fixerF_5() { return static_cast<int32_t>(offsetof(GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74, ___fixerF_5)); }
	inline float get_fixerF_5() const { return ___fixerF_5; }
	inline float* get_address_of_fixerF_5() { return &___fixerF_5; }
	inline void set_fixerF_5(float value)
	{
		___fixerF_5 = value;
	}

	inline static int32_t get_offset_of_fixer_6() { return static_cast<int32_t>(offsetof(GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74, ___fixer_6)); }
	inline float get_fixer_6() const { return ___fixer_6; }
	inline float* get_address_of_fixer_6() { return &___fixer_6; }
	inline void set_fixer_6(float value)
	{
		___fixer_6 = value;
	}
};


// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Menu::mainMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainMenu_4;
	// UnityEngine.GameObject Menu::options
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___options_5;

public:
	inline static int32_t get_offset_of_mainMenu_4() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___mainMenu_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainMenu_4() const { return ___mainMenu_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainMenu_4() { return &___mainMenu_4; }
	inline void set_mainMenu_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainMenu_4), (void*)value);
	}

	inline static int32_t get_offset_of_options_5() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___options_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_options_5() const { return ___options_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_options_5() { return &___options_5; }
	inline void set_options_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___options_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_5), (void*)value);
	}
};


// Movement
struct Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Movement::maxVelocity
	float ___maxVelocity_4;
	// System.Single Movement::acceleration
	float ___acceleration_5;
	// System.Single Movement::gravity
	float ___gravity_6;
	// System.Single Movement::friction
	float ___friction_7;
	// System.Single Movement::extraFriction
	float ___extraFriction_8;
	// System.Single Movement::fixer
	float ___fixer_9;
	// UnityEngine.Rigidbody2D Movement::rigidbody2D
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigidbody2D_10;
	// UnityEngine.Transform Movement::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_11;

public:
	inline static int32_t get_offset_of_maxVelocity_4() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___maxVelocity_4)); }
	inline float get_maxVelocity_4() const { return ___maxVelocity_4; }
	inline float* get_address_of_maxVelocity_4() { return &___maxVelocity_4; }
	inline void set_maxVelocity_4(float value)
	{
		___maxVelocity_4 = value;
	}

	inline static int32_t get_offset_of_acceleration_5() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___acceleration_5)); }
	inline float get_acceleration_5() const { return ___acceleration_5; }
	inline float* get_address_of_acceleration_5() { return &___acceleration_5; }
	inline void set_acceleration_5(float value)
	{
		___acceleration_5 = value;
	}

	inline static int32_t get_offset_of_gravity_6() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___gravity_6)); }
	inline float get_gravity_6() const { return ___gravity_6; }
	inline float* get_address_of_gravity_6() { return &___gravity_6; }
	inline void set_gravity_6(float value)
	{
		___gravity_6 = value;
	}

	inline static int32_t get_offset_of_friction_7() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___friction_7)); }
	inline float get_friction_7() const { return ___friction_7; }
	inline float* get_address_of_friction_7() { return &___friction_7; }
	inline void set_friction_7(float value)
	{
		___friction_7 = value;
	}

	inline static int32_t get_offset_of_extraFriction_8() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___extraFriction_8)); }
	inline float get_extraFriction_8() const { return ___extraFriction_8; }
	inline float* get_address_of_extraFriction_8() { return &___extraFriction_8; }
	inline void set_extraFriction_8(float value)
	{
		___extraFriction_8 = value;
	}

	inline static int32_t get_offset_of_fixer_9() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___fixer_9)); }
	inline float get_fixer_9() const { return ___fixer_9; }
	inline float* get_address_of_fixer_9() { return &___fixer_9; }
	inline void set_fixer_9(float value)
	{
		___fixer_9 = value;
	}

	inline static int32_t get_offset_of_rigidbody2D_10() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___rigidbody2D_10)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigidbody2D_10() const { return ___rigidbody2D_10; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigidbody2D_10() { return &___rigidbody2D_10; }
	inline void set_rigidbody2D_10(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigidbody2D_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidbody2D_10), (void*)value);
	}

	inline static int32_t get_offset_of_transform_11() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ___transform_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_11() const { return ___transform_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_11() { return &___transform_11; }
	inline void set_transform_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_11), (void*)value);
	}
};


// Pendulum
struct Pendulum_tED761124130781291E1654C57275317CF04FBFD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D Pendulum::rb2d
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2d_4;
	// System.Single Pendulum::moveSpeed
	float ___moveSpeed_5;
	// System.Single Pendulum::leftAngle
	float ___leftAngle_6;
	// System.Single Pendulum::rightAngle
	float ___rightAngle_7;
	// System.Boolean Pendulum::movingClockwise
	bool ___movingClockwise_8;

public:
	inline static int32_t get_offset_of_rb2d_4() { return static_cast<int32_t>(offsetof(Pendulum_tED761124130781291E1654C57275317CF04FBFD5, ___rb2d_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2d_4() const { return ___rb2d_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2d_4() { return &___rb2d_4; }
	inline void set_rb2d_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2d_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2d_4), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(Pendulum_tED761124130781291E1654C57275317CF04FBFD5, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_leftAngle_6() { return static_cast<int32_t>(offsetof(Pendulum_tED761124130781291E1654C57275317CF04FBFD5, ___leftAngle_6)); }
	inline float get_leftAngle_6() const { return ___leftAngle_6; }
	inline float* get_address_of_leftAngle_6() { return &___leftAngle_6; }
	inline void set_leftAngle_6(float value)
	{
		___leftAngle_6 = value;
	}

	inline static int32_t get_offset_of_rightAngle_7() { return static_cast<int32_t>(offsetof(Pendulum_tED761124130781291E1654C57275317CF04FBFD5, ___rightAngle_7)); }
	inline float get_rightAngle_7() const { return ___rightAngle_7; }
	inline float* get_address_of_rightAngle_7() { return &___rightAngle_7; }
	inline void set_rightAngle_7(float value)
	{
		___rightAngle_7 = value;
	}

	inline static int32_t get_offset_of_movingClockwise_8() { return static_cast<int32_t>(offsetof(Pendulum_tED761124130781291E1654C57275317CF04FBFD5, ___movingClockwise_8)); }
	inline bool get_movingClockwise_8() const { return ___movingClockwise_8; }
	inline bool* get_address_of_movingClockwise_8() { return &___movingClockwise_8; }
	inline void set_movingClockwise_8(bool value)
	{
		___movingClockwise_8 = value;
	}
};


// RottenBlock
struct RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Cooldown RottenBlock::dropCooldown
	Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * ___dropCooldown_4;
	// Cooldown RottenBlock::destroyCooldown
	Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * ___destroyCooldown_5;
	// System.Boolean RottenBlock::drop
	bool ___drop_6;
	// System.Single RottenBlock::shakeSpeed
	float ___shakeSpeed_7;
	// System.Single RottenBlock::dropSpeed
	float ___dropSpeed_8;
	// System.Boolean RottenBlock::playerDetected
	bool ___playerDetected_9;

public:
	inline static int32_t get_offset_of_dropCooldown_4() { return static_cast<int32_t>(offsetof(RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45, ___dropCooldown_4)); }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * get_dropCooldown_4() const { return ___dropCooldown_4; }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 ** get_address_of_dropCooldown_4() { return &___dropCooldown_4; }
	inline void set_dropCooldown_4(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * value)
	{
		___dropCooldown_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dropCooldown_4), (void*)value);
	}

	inline static int32_t get_offset_of_destroyCooldown_5() { return static_cast<int32_t>(offsetof(RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45, ___destroyCooldown_5)); }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * get_destroyCooldown_5() const { return ___destroyCooldown_5; }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 ** get_address_of_destroyCooldown_5() { return &___destroyCooldown_5; }
	inline void set_destroyCooldown_5(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * value)
	{
		___destroyCooldown_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyCooldown_5), (void*)value);
	}

	inline static int32_t get_offset_of_drop_6() { return static_cast<int32_t>(offsetof(RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45, ___drop_6)); }
	inline bool get_drop_6() const { return ___drop_6; }
	inline bool* get_address_of_drop_6() { return &___drop_6; }
	inline void set_drop_6(bool value)
	{
		___drop_6 = value;
	}

	inline static int32_t get_offset_of_shakeSpeed_7() { return static_cast<int32_t>(offsetof(RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45, ___shakeSpeed_7)); }
	inline float get_shakeSpeed_7() const { return ___shakeSpeed_7; }
	inline float* get_address_of_shakeSpeed_7() { return &___shakeSpeed_7; }
	inline void set_shakeSpeed_7(float value)
	{
		___shakeSpeed_7 = value;
	}

	inline static int32_t get_offset_of_dropSpeed_8() { return static_cast<int32_t>(offsetof(RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45, ___dropSpeed_8)); }
	inline float get_dropSpeed_8() const { return ___dropSpeed_8; }
	inline float* get_address_of_dropSpeed_8() { return &___dropSpeed_8; }
	inline void set_dropSpeed_8(float value)
	{
		___dropSpeed_8 = value;
	}

	inline static int32_t get_offset_of_playerDetected_9() { return static_cast<int32_t>(offsetof(RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45, ___playerDetected_9)); }
	inline bool get_playerDetected_9() const { return ___playerDetected_9; }
	inline bool* get_address_of_playerDetected_9() { return &___playerDetected_9; }
	inline void set_playerDetected_9(bool value)
	{
		___playerDetected_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// AntAnimator
struct AntAnimator_t3C8A4014466F3519627253016F6587A7E574E93A  : public Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786
{
public:

public:
};


// DownBound
struct DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11  : public Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD
{
public:

public:
};


// EnemyAttack
struct EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2  : public Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED
{
public:

public:
};


// EnemyController
struct EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB  : public Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC
{
public:
	// MobMovement EnemyController::movement
	MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * ___movement_4;
	// Damageability EnemyController::damageability
	Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * ___damageability_5;
	// Animation EnemyController::animation
	Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * ___animation_6;
	// Attack EnemyController::attack
	Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * ___attack_7;
	// System.Int32 EnemyController::direction
	int32_t ___direction_8;
	// Cooldown EnemyController::changeDirectionCooldown
	Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * ___changeDirectionCooldown_9;
	// System.Int32 EnemyController::dir
	int32_t ___dir_10;

public:
	inline static int32_t get_offset_of_movement_4() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___movement_4)); }
	inline MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * get_movement_4() const { return ___movement_4; }
	inline MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 ** get_address_of_movement_4() { return &___movement_4; }
	inline void set_movement_4(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * value)
	{
		___movement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movement_4), (void*)value);
	}

	inline static int32_t get_offset_of_damageability_5() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___damageability_5)); }
	inline Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * get_damageability_5() const { return ___damageability_5; }
	inline Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 ** get_address_of_damageability_5() { return &___damageability_5; }
	inline void set_damageability_5(Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * value)
	{
		___damageability_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___damageability_5), (void*)value);
	}

	inline static int32_t get_offset_of_animation_6() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___animation_6)); }
	inline Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * get_animation_6() const { return ___animation_6; }
	inline Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 ** get_address_of_animation_6() { return &___animation_6; }
	inline void set_animation_6(Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * value)
	{
		___animation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animation_6), (void*)value);
	}

	inline static int32_t get_offset_of_attack_7() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___attack_7)); }
	inline Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * get_attack_7() const { return ___attack_7; }
	inline Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED ** get_address_of_attack_7() { return &___attack_7; }
	inline void set_attack_7(Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * value)
	{
		___attack_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attack_7), (void*)value);
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___direction_8)); }
	inline int32_t get_direction_8() const { return ___direction_8; }
	inline int32_t* get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(int32_t value)
	{
		___direction_8 = value;
	}

	inline static int32_t get_offset_of_changeDirectionCooldown_9() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___changeDirectionCooldown_9)); }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * get_changeDirectionCooldown_9() const { return ___changeDirectionCooldown_9; }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 ** get_address_of_changeDirectionCooldown_9() { return &___changeDirectionCooldown_9; }
	inline void set_changeDirectionCooldown_9(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * value)
	{
		___changeDirectionCooldown_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeDirectionCooldown_9), (void*)value);
	}

	inline static int32_t get_offset_of_dir_10() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___dir_10)); }
	inline int32_t get_dir_10() const { return ___dir_10; }
	inline int32_t* get_address_of_dir_10() { return &___dir_10; }
	inline void set_dir_10(int32_t value)
	{
		___dir_10 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// GrasshopperAnimator
struct GrasshopperAnimator_t6B1D7743FFD1F235DE2FC33710CCD494BDEAEC23  : public Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786
{
public:

public:
};


// LeftBound
struct LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1  : public Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD
{
public:

public:
};


// MobMovement
struct MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525  : public Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C
{
public:
	// System.Single MobMovement::jump
	float ___jump_12;
	// System.Single MobMovement::jumpCD
	float ___jumpCD_13;
	// System.Single MobMovement::minSpeed
	float ___minSpeed_14;
	// System.Int32 MobMovement::direction
	int32_t ___direction_15;
	// System.Boolean MobMovement::goLeftFlag
	bool ___goLeftFlag_16;
	// System.Boolean MobMovement::goRightFlag
	bool ___goRightFlag_17;
	// System.Boolean MobMovement::jumpFlag
	bool ___jumpFlag_18;
	// Bound MobMovement::leftBound
	Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * ___leftBound_19;
	// Bound MobMovement::rightBound
	Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * ___rightBound_20;
	// Bound MobMovement::upBound
	Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * ___upBound_21;
	// Bound MobMovement::downBound
	Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * ___downBound_22;
	// Cooldown MobMovement::jumpCooldown
	Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * ___jumpCooldown_23;
	// System.Boolean MobMovement::secondJump
	bool ___secondJump_24;
	// System.Single MobMovement::fixer2
	float ___fixer2_25;

public:
	inline static int32_t get_offset_of_jump_12() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___jump_12)); }
	inline float get_jump_12() const { return ___jump_12; }
	inline float* get_address_of_jump_12() { return &___jump_12; }
	inline void set_jump_12(float value)
	{
		___jump_12 = value;
	}

	inline static int32_t get_offset_of_jumpCD_13() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___jumpCD_13)); }
	inline float get_jumpCD_13() const { return ___jumpCD_13; }
	inline float* get_address_of_jumpCD_13() { return &___jumpCD_13; }
	inline void set_jumpCD_13(float value)
	{
		___jumpCD_13 = value;
	}

	inline static int32_t get_offset_of_minSpeed_14() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___minSpeed_14)); }
	inline float get_minSpeed_14() const { return ___minSpeed_14; }
	inline float* get_address_of_minSpeed_14() { return &___minSpeed_14; }
	inline void set_minSpeed_14(float value)
	{
		___minSpeed_14 = value;
	}

	inline static int32_t get_offset_of_direction_15() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___direction_15)); }
	inline int32_t get_direction_15() const { return ___direction_15; }
	inline int32_t* get_address_of_direction_15() { return &___direction_15; }
	inline void set_direction_15(int32_t value)
	{
		___direction_15 = value;
	}

	inline static int32_t get_offset_of_goLeftFlag_16() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___goLeftFlag_16)); }
	inline bool get_goLeftFlag_16() const { return ___goLeftFlag_16; }
	inline bool* get_address_of_goLeftFlag_16() { return &___goLeftFlag_16; }
	inline void set_goLeftFlag_16(bool value)
	{
		___goLeftFlag_16 = value;
	}

	inline static int32_t get_offset_of_goRightFlag_17() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___goRightFlag_17)); }
	inline bool get_goRightFlag_17() const { return ___goRightFlag_17; }
	inline bool* get_address_of_goRightFlag_17() { return &___goRightFlag_17; }
	inline void set_goRightFlag_17(bool value)
	{
		___goRightFlag_17 = value;
	}

	inline static int32_t get_offset_of_jumpFlag_18() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___jumpFlag_18)); }
	inline bool get_jumpFlag_18() const { return ___jumpFlag_18; }
	inline bool* get_address_of_jumpFlag_18() { return &___jumpFlag_18; }
	inline void set_jumpFlag_18(bool value)
	{
		___jumpFlag_18 = value;
	}

	inline static int32_t get_offset_of_leftBound_19() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___leftBound_19)); }
	inline Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * get_leftBound_19() const { return ___leftBound_19; }
	inline Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD ** get_address_of_leftBound_19() { return &___leftBound_19; }
	inline void set_leftBound_19(Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * value)
	{
		___leftBound_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftBound_19), (void*)value);
	}

	inline static int32_t get_offset_of_rightBound_20() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___rightBound_20)); }
	inline Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * get_rightBound_20() const { return ___rightBound_20; }
	inline Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD ** get_address_of_rightBound_20() { return &___rightBound_20; }
	inline void set_rightBound_20(Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * value)
	{
		___rightBound_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightBound_20), (void*)value);
	}

	inline static int32_t get_offset_of_upBound_21() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___upBound_21)); }
	inline Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * get_upBound_21() const { return ___upBound_21; }
	inline Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD ** get_address_of_upBound_21() { return &___upBound_21; }
	inline void set_upBound_21(Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * value)
	{
		___upBound_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___upBound_21), (void*)value);
	}

	inline static int32_t get_offset_of_downBound_22() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___downBound_22)); }
	inline Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * get_downBound_22() const { return ___downBound_22; }
	inline Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD ** get_address_of_downBound_22() { return &___downBound_22; }
	inline void set_downBound_22(Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * value)
	{
		___downBound_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___downBound_22), (void*)value);
	}

	inline static int32_t get_offset_of_jumpCooldown_23() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___jumpCooldown_23)); }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * get_jumpCooldown_23() const { return ___jumpCooldown_23; }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 ** get_address_of_jumpCooldown_23() { return &___jumpCooldown_23; }
	inline void set_jumpCooldown_23(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * value)
	{
		___jumpCooldown_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpCooldown_23), (void*)value);
	}

	inline static int32_t get_offset_of_secondJump_24() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___secondJump_24)); }
	inline bool get_secondJump_24() const { return ___secondJump_24; }
	inline bool* get_address_of_secondJump_24() { return &___secondJump_24; }
	inline void set_secondJump_24(bool value)
	{
		___secondJump_24 = value;
	}

	inline static int32_t get_offset_of_fixer2_25() { return static_cast<int32_t>(offsetof(MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525, ___fixer2_25)); }
	inline float get_fixer2_25() const { return ___fixer2_25; }
	inline float* get_address_of_fixer2_25() { return &___fixer2_25; }
	inline void set_fixer2_25(float value)
	{
		___fixer2_25 = value;
	}
};


// PlayerAnimation
struct PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856  : public Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786
{
public:
	// PlayerController PlayerAnimation::playerController
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___playerController_6;
	// Cooldown PlayerAnimation::blinkCooldown
	Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * ___blinkCooldown_7;

public:
	inline static int32_t get_offset_of_playerController_6() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856, ___playerController_6)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_playerController_6() const { return ___playerController_6; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_playerController_6() { return &___playerController_6; }
	inline void set_playerController_6(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___playerController_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerController_6), (void*)value);
	}

	inline static int32_t get_offset_of_blinkCooldown_7() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856, ___blinkCooldown_7)); }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * get_blinkCooldown_7() const { return ___blinkCooldown_7; }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 ** get_address_of_blinkCooldown_7() { return &___blinkCooldown_7; }
	inline void set_blinkCooldown_7(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * value)
	{
		___blinkCooldown_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blinkCooldown_7), (void*)value);
	}
};


// PlayerAttack
struct PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614  : public Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED
{
public:
	// DownBound PlayerAttack::downBound
	DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * ___downBound_11;
	// PlayerMovement PlayerAttack::playerMovement
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___playerMovement_12;

public:
	inline static int32_t get_offset_of_downBound_11() { return static_cast<int32_t>(offsetof(PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614, ___downBound_11)); }
	inline DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * get_downBound_11() const { return ___downBound_11; }
	inline DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 ** get_address_of_downBound_11() { return &___downBound_11; }
	inline void set_downBound_11(DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * value)
	{
		___downBound_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___downBound_11), (void*)value);
	}

	inline static int32_t get_offset_of_playerMovement_12() { return static_cast<int32_t>(offsetof(PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614, ___playerMovement_12)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_playerMovement_12() const { return ___playerMovement_12; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_playerMovement_12() { return &___playerMovement_12; }
	inline void set_playerMovement_12(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___playerMovement_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerMovement_12), (void*)value);
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC
{
public:
	// PlayerMovement PlayerController::movement
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___movement_4;
	// PlayerDamageability PlayerController::damageability
	PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * ___damageability_5;
	// PlayerAnimation PlayerController::animation
	PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * ___animation_6;
	// System.Single PlayerController::cdJump
	float ___cdJump_8;
	// Cooldown PlayerController::jumpCooldown
	Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * ___jumpCooldown_9;
	// System.Single PlayerController::cdInput
	float ___cdInput_10;
	// Cooldown PlayerController::inputCooldown
	Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * ___inputCooldown_11;
	// System.Boolean PlayerController::waitForinput
	bool ___waitForinput_12;

public:
	inline static int32_t get_offset_of_movement_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___movement_4)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_movement_4() const { return ___movement_4; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_movement_4() { return &___movement_4; }
	inline void set_movement_4(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___movement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movement_4), (void*)value);
	}

	inline static int32_t get_offset_of_damageability_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___damageability_5)); }
	inline PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * get_damageability_5() const { return ___damageability_5; }
	inline PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 ** get_address_of_damageability_5() { return &___damageability_5; }
	inline void set_damageability_5(PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * value)
	{
		___damageability_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___damageability_5), (void*)value);
	}

	inline static int32_t get_offset_of_animation_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___animation_6)); }
	inline PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * get_animation_6() const { return ___animation_6; }
	inline PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 ** get_address_of_animation_6() { return &___animation_6; }
	inline void set_animation_6(PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * value)
	{
		___animation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animation_6), (void*)value);
	}

	inline static int32_t get_offset_of_cdJump_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___cdJump_8)); }
	inline float get_cdJump_8() const { return ___cdJump_8; }
	inline float* get_address_of_cdJump_8() { return &___cdJump_8; }
	inline void set_cdJump_8(float value)
	{
		___cdJump_8 = value;
	}

	inline static int32_t get_offset_of_jumpCooldown_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___jumpCooldown_9)); }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * get_jumpCooldown_9() const { return ___jumpCooldown_9; }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 ** get_address_of_jumpCooldown_9() { return &___jumpCooldown_9; }
	inline void set_jumpCooldown_9(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * value)
	{
		___jumpCooldown_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpCooldown_9), (void*)value);
	}

	inline static int32_t get_offset_of_cdInput_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___cdInput_10)); }
	inline float get_cdInput_10() const { return ___cdInput_10; }
	inline float* get_address_of_cdInput_10() { return &___cdInput_10; }
	inline void set_cdInput_10(float value)
	{
		___cdInput_10 = value;
	}

	inline static int32_t get_offset_of_inputCooldown_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___inputCooldown_11)); }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * get_inputCooldown_11() const { return ___inputCooldown_11; }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 ** get_address_of_inputCooldown_11() { return &___inputCooldown_11; }
	inline void set_inputCooldown_11(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * value)
	{
		___inputCooldown_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputCooldown_11), (void*)value);
	}

	inline static int32_t get_offset_of_waitForinput_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___waitForinput_12)); }
	inline bool get_waitForinput_12() const { return ___waitForinput_12; }
	inline bool* get_address_of_waitForinput_12() { return &___waitForinput_12; }
	inline void set_waitForinput_12(bool value)
	{
		___waitForinput_12 = value;
	}
};

struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields
{
public:
	// System.Int32 PlayerController::CurrentHp
	int32_t ___CurrentHp_7;
	// System.Single PlayerController::dampTime
	float ___dampTime_13;
	// UnityEngine.Vector3 PlayerController::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_14;
	// UnityEngine.Camera PlayerController::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_15;

public:
	inline static int32_t get_offset_of_CurrentHp_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___CurrentHp_7)); }
	inline int32_t get_CurrentHp_7() const { return ___CurrentHp_7; }
	inline int32_t* get_address_of_CurrentHp_7() { return &___CurrentHp_7; }
	inline void set_CurrentHp_7(int32_t value)
	{
		___CurrentHp_7 = value;
	}

	inline static int32_t get_offset_of_dampTime_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___dampTime_13)); }
	inline float get_dampTime_13() const { return ___dampTime_13; }
	inline float* get_address_of_dampTime_13() { return &___dampTime_13; }
	inline void set_dampTime_13(float value)
	{
		___dampTime_13 = value;
	}

	inline static int32_t get_offset_of_velocity_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___velocity_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_14() const { return ___velocity_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_14() { return &___velocity_14; }
	inline void set_velocity_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_14 = value;
	}

	inline static int32_t get_offset_of_camera_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___camera_15)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_15() const { return ___camera_15; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_15() { return &___camera_15; }
	inline void set_camera_15(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_15), (void*)value);
	}
};


// PlayerDamageability
struct PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454  : public Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535
{
public:

public:
};


// RightBound
struct RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD  : public Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD
{
public:

public:
};


// TrapAttack
struct TrapAttack_tD0761091436D620B97EE8E3A71AB6DB4F05AC246  : public Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED
{
public:

public:
};


// UpBound
struct UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5  : public Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD
{
public:

public:
};


// AntController
struct AntController_tD6C13BA3B6C14BE9C33400486338CD1D76F37AF2  : public EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB
{
public:

public:
};


// GrasshopperController
struct GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856  : public EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB
{
public:
	// Cooldown GrasshopperController::jumpCooldown
	Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * ___jumpCooldown_11;
	// System.Single GrasshopperController::jumpCD
	float ___jumpCD_12;

public:
	inline static int32_t get_offset_of_jumpCooldown_11() { return static_cast<int32_t>(offsetof(GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856, ___jumpCooldown_11)); }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * get_jumpCooldown_11() const { return ___jumpCooldown_11; }
	inline Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 ** get_address_of_jumpCooldown_11() { return &___jumpCooldown_11; }
	inline void set_jumpCooldown_11(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * value)
	{
		___jumpCooldown_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpCooldown_11), (void*)value);
	}

	inline static int32_t get_offset_of_jumpCD_12() { return static_cast<int32_t>(offsetof(GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856, ___jumpCD_12)); }
	inline float get_jumpCD_12() const { return ___jumpCD_12; }
	inline float* get_address_of_jumpCD_12() { return &___jumpCD_12; }
	inline void set_jumpCD_12(float value)
	{
		___jumpCD_12 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525
{
public:

public:
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Animation::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Init_m8E1EC12415EDBAEB610CF7271089C89CD9CDA0B6 (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, const RuntimeMethod* method);
// System.Void Animation::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Tick_m0421EA59A21E1077BE4D49370699FCA52FF758D7 (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, const RuntimeMethod* method);
// System.Void Animation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation__ctor_mEBDE93F61306BFECB31EA0739662BDC15AB3B5D4 (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, const RuntimeMethod* method);
// System.Void EnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController__ctor_m547F49905D505F962CBC708846F8E8A3B0838F70 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// System.Void Cooldown::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, float ___cooldown0, const RuntimeMethod* method);
// System.Void Attack::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_Init_m6784A2AC26AB22EC1D565DA54E21120182E6EBCD (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method);
// System.Void Attack::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_Tick_mE0CD86B2FCB2DC941D4502E527B5348AD1C8E991 (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Damageability>()
inline Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// Cooldown Attack::GetAttackCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * Attack_GetAttackCooldown_m6377088C4D66E35B27C8D293778342B46FB21116 (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method);
// System.Boolean Cooldown::Control()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, const RuntimeMethod* method);
// System.Void Damageability::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_TakeDamage_m1D4421310BE4703DB3129463AABC7BA233D00761 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, int32_t ___val0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MobMovement>()
inline MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Movement::SetVelocity(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___velocity1, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Cooldown::SetCooldown(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cooldown_SetCooldown_m5460B4884EC89E1780A50D9153A21FA25025411A_inline (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, float ___cooldown0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Single Cooldown::ElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cooldown_ElapsedTime_mE05101D2333A31B8D67D7D199E2BFF22E311A5FB (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Damageability::ControlAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_ControlAlive_m123D0270E1A853D3E7EE6C01D508C177353AD2B3 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method);
// System.Void Damageability::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_Init_mE6DF306574851C28AC97BC1E03F409BA81782813 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method);
// System.Void Damageability::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_Tick_m02485F5511642E2A2B05D28B2A0C080CFEFE7443 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Collider2D::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Bound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bound__ctor_m985536D2D5F293A9894CC0B6EFF7B77AA4C2FDFA (Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * __this, const RuntimeMethod* method);
// System.Boolean Damageability::get_Alive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Damageability_get_Alive_mE96F5ED945B35AABBEE387ACE46DC2D67EB23C0C_inline (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method);
// System.Int32 Damageability::get_CurrentHp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Damageability_get_CurrentHp_m765EAE02816923C177F851FD674622B8DB9C02C2_inline (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<MobMovement>()
inline MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * Component_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_m51AA75B98504DC73BBC9EEF70C81AC28379085D1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// Bound MobMovement::get_UpBound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_UpBound_mCC28D16220E184550ADBC3B22E9903B7A4F1ED25_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Movement>()
inline Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Attack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack__ctor_m42BFE85BF380263583A584B3ED06A83726960FED (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Damageability>()
inline Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * Component_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mA95F9DFAE8D31034C4D8A5775206A1072F20172A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Animation>()
inline Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * Component_GetComponent_TisAnimation_tA64B0031D872E861F15C2C7B38175F2FB7A84786_mC727F47E6A56D9BC714312B7D6C2440C55750CB0 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<EnemyAttack>()
inline EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * Component_GetComponent_TisEnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2_mA3422CE6D6F9FECCAC40BD538B78705A7D32CCFB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Animation::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void EnemyController::BasicAI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_BasicAI_m6546F72E170778A1168B1AEBF2DCB2D340CA3B5E (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// System.Void EnemyController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Init_m3A65060654F8A1DBFC93C9916909DA5D0B3F5D7B (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// System.Void EnemyController::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Tick_mCEC4C6DC7D4761CC6613B843C85AC7A3F8C0C448 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// System.Int32 MobMovement::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MobMovement_get_Direction_m78D550873829FA8049B2885471559D223771ACBF_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// Cooldown EnemyController::GetchangeDirectionCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * EnemyController_GetchangeDirectionCooldown_m51649322321F9943C32B0106D95CE85DB0701104 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// Bound MobMovement::get_LeftBound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_LeftBound_m5016CAE4264231819A64822610D414DBC2EC65AA_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// System.Collections.ArrayList Constants::GetEnemyChangeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * Constants_GetEnemyChangeDirection_m6F6031BED50C6E4D88567B855C9D6F4B2B2A6C68 (const RuntimeMethod* method);
// System.Boolean Constants::ContainsList(System.Collections.ArrayList,System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Constants_ContainsList_mA1FFB129B1B1B2AC4F4E465D8E9D6A4E5DC099B4 (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list0, ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list21, const RuntimeMethod* method);
// Bound MobMovement::get_RightBound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_RightBound_m012BD3DF4D1A36FEF81A2D26EBFCD07D6E6EBEA7_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// System.Void Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller__ctor_m50D06C2CAE9B5496780A83ABCF68C529A44EE9F7 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Void GrasshopperController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController_Init_m93E4BC272DC7FE5EA54F6F2670388673D505AB5D (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method);
// System.Void GrasshopperController::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController_Tick_m700BB8045801DD63F86371A2BB6076B43BCC00AA (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method);
// System.Void GrasshopperController::AnimatorMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController_AnimatorMethod_m5D00F9888EA03BA7E67E27DCFCD11829E672CBC8 (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method);
// Damageability EnemyController::get_Damageability()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * EnemyController_get_Damageability_m25609FE20A2DB85D976F14EEE918660B9A694B28_inline (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// Animation EnemyController::get_Animation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * EnemyController_get_Animation_mAFB8A83EF20EA5878E20D81ED896E64FDD652441_inline (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// MobMovement EnemyController::get_Movement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// Bound MobMovement::get_DownBound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_DownBound_m5074915401741B46CA6BA9D4A7E4D0F7D2C777D5_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Movement::GetVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Movement_GetVelocity_m53C37B32219E0943AB5EFBB156D284E8DF5AC1CC (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// System.Boolean MobMovement::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobMovement_OnGround_mD071BBC23083434CD96D76DA8C084010C9ABAD42 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// Cooldown GrasshopperController::GetjumpCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * GrasshopperController_GetjumpCooldown_m6A6A5193F6A46107FA1E9EC340F5C33CC8FE4AF4 (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method);
// System.Void MobMovement::set_JumpFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobMovement_set_JumpFlag_m7C4DFAE77E321C1D096908E1FAA64518286A3A71_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void MobMovement::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_Init_mDBD14905E3B1700FA121DAE25B482164487AD5D2 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// System.Void MobMovement::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_Tick_mC3D887CF36E7126A3D5AE83FFC1B89CFA1C02382 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// System.Void Movement::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Init_m8EC89489C359EC379BA5BFD04AB0317F30B1B97A (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<LeftBound>()
inline LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1 * Component_GetComponentInChildren_TisLeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1_mB3D1743A50515737D65562203B24D64EACDC2928 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<RightBound>()
inline RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD * Component_GetComponentInChildren_TisRightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD_mAC99B8244B20D6053B5BB0DCCF40FF7FF9F36366 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<UpBound>()
inline UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5 * Component_GetComponentInChildren_TisUpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5_mC2362DEE1AC867B8A0DF1232D55C98A21AB6C160 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<DownBound>()
inline DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * Component_GetComponentInChildren_TisDownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11_mE21CD900D34F29B952C778EACFBF3204C6FB3766 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void MobMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_Move_m41E8F6FC82F9A3FCBC905BFF33BF9B1B0D65603A (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// System.Void Movement::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Tick_mFE5158FDDD2753EBC96182C2CB648DA981245D7F (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// System.Void Movement::set_ExtraFriction(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Movement_set_ExtraFriction_mC121CF49197FF575D5EEAE572E050EFF718F5D00_inline (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, float ___value0, const RuntimeMethod* method);
// System.Void MobMovement::GoLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_GoLeft_mF9CD487BE2ECCF5139B7AEC2300E5A3E944F24F5 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// System.Void MobMovement::GoRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_GoRight_m64E4CAADC938D3575DF98B437E8DC4256CC57C3F (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// System.Boolean MobMovement::CanJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobMovement_CanJump_m43BCC9F792B2EAA782AFE9FBF3B21CE54BA4DCA8 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// System.Void MobMovement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_Jump_mDE7B1B2A53AD01AE2F466441286BDA0BB76983E6 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// System.Void MobMovement::ArrangeScale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_ArrangeScale_mD82AD34DF29167802AE25A1721A3B1F8BC5F805E (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, int32_t ___direction0, const RuntimeMethod* method);
// System.Void Movement::GiveVelocity(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_GiveVelocity_m313055286CB88C72E085024E66CD491C8B1D7F14 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___velocity1, const RuntimeMethod* method);
// System.Void Movement::GiveForce(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_GiveForce_m7EDA945AAD4DAD6149B0E55FB963577CFF444D4F (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___force1, const RuntimeMethod* method);
// Cooldown MobMovement::GetJumpCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * MobMovement_GetJumpCooldown_m43ACFE0FE062EE7F6146125532738095AAC79EA5 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mEA4800F5BE98787C0ACA8CDF85918B56DE62A2AB (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Movement::PhysicFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_PhysicFunc_m93FF6E12BB9468ACCE6C43D17C3072DC9A66590E (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// System.Void Movement::ControlMaxVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_ControlMaxVelocity_m9E01CA1FDF42BED5C23C4997E3AC1BF15360F1C0 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void Movement::SetVelocityAb(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_SetVelocityAb_mA5EEAAC58FE0E9C861D238590FD956A2AC10C758 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___velocity1, const RuntimeMethod* method);
// System.Void Movement::GiveVelocityAb(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_GiveVelocityAb_mBE8F0366F1B2F09BC12F010D1893E1851B0FCF83 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___velocity1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Void Pendulum::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pendulum_Move_m8EAD3EB176D6454E40A4209DEE82BBD46E8CD6C1 (Pendulum_tED761124130781291E1654C57275317CF04FBFD5 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Pendulum::ChangeMoveDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pendulum_ChangeMoveDir_mDF733D69D577D958C29A739F507A9E3EB0F91DEE (Pendulum_tED761124130781291E1654C57275317CF04FBFD5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_angularVelocity_m53F03D07251B600A01A05A27F16D2D8C0D3C5A66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerController>()
inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// PlayerDamageability PlayerController::get_Damageability()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * PlayerController_get_Damageability_mDB3A0FE7A4BD99EC6379ED9F412C04CDEAEE401F_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerAnimation::Blink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_Blink_m2A51BE55249DC95894226E61D77CF06F95F56525 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method);
// Cooldown PlayerAnimation::GetBlinkCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * PlayerAnimation_GetBlinkCooldown_mC52D859982C2648CD879F999E7D8C86AABDBCF41 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void PlayerAttack::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAttack_Init_m36721479630CBA6D40D0FB2456E90C1D4820F158 (PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614 * __this, const RuntimeMethod* method);
// System.Collections.ArrayList Constants::GetPlayerGiveDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * Constants_GetPlayerGiveDamage_m7343694332AA31351E235E836FE65B255F512710 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerDamageability>()
inline PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * Component_GetComponent_TisPlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454_mE5BC2651CC4F6C294053C50FB5AD8D862DEB7B85 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<PlayerAnimation>()
inline PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * Component_GetComponent_TisPlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856_m8A716D38960B89DDA13376C60892D1ED8E2D501E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void PlayerController::AnimatorMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AnimatorMethod_m3E75D70D2A09307A85528CD15BE23E0E6AFD0E8A (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::UpdateHpBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_UpdateHpBar_m7CB5C181AAC39CA47A29CC0598D876CAA77893A5 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// Cooldown PlayerController::GetInputCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * PlayerController_GetInputCooldown_m24ACF536966DB5B685D5A101E7B309BF42562A90 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::InputMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_InputMethod_mF876ED920C31578A20117A39E2649AA2AB994ADD (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C (String_t* ___name0, const RuntimeMethod* method);
// System.Void MobMovement::set_GoLeftFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobMovement_set_GoLeftFlag_m6F93C69BC5314C690742B4BC520172A9E61E54D3_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void MobMovement::set_GoRightFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobMovement_set_GoRightFlag_m146A69A365F267C01D0614666A8B7D9C7CA500D5_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, bool ___value0, const RuntimeMethod* method);
// Cooldown PlayerController::GetJumpCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * PlayerController_GetJumpCooldown_m112636D91695262AA2668EBBE26385998E1ED7BB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void Damageability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability__ctor_m986CE18C9856EC91C2EB00DDC17EBD85A6892186 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method);
// System.Void MobMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement__ctor_m0FF9CC37BEFC640E798BD2FF68CA8D4284CF8A68 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method);
// Cooldown RottenBlock::GetDropCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * RottenBlock_GetDropCooldown_mEA89F7806FA92B260FC18762401AEC622DA9A487 (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method);
// System.Void RottenBlock::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RottenBlock_Shake_mC99E65B051282D0F9EA8FBCD4946A681834BD311 (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method);
// System.Void RottenBlock::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RottenBlock_Drop_m4812D15B016F1B45C527B281BEF7692655098CD8 (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method);
// Cooldown RottenBlock::GetDestroyCooldownn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * RottenBlock_GetDestroyCooldownn_m324E33007642F02659C315F671B4C7203CA29FEE (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method);
// System.Void TrapAttack::AttackWithContact(Damageability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrapAttack_AttackWithContact_mE5D3505D84C331A84CAE262D7C279944C38EB46B (TrapAttack_tD0761091436D620B97EE8E3A71AB6DB4F05AC246 * __this, Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * ___destination0, const RuntimeMethod* method);
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
// System.Int32 Animation::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_get_Code_mE29A88344EF42D882E2EDC4A46DDC5397CE09B98 (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, const RuntimeMethod* method)
{
	{
		// public int Code { get => code; set => code = value; }
		int32_t L_0 = __this->get_code_5();
		return L_0;
	}
}
// System.Void Animation::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0 (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Code { get => code; set => code = value; }
		int32_t L_0 = ___value0;
		__this->set_code_5(L_0);
		return;
	}
}
// System.Void Animation::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Init_m8E1EC12415EDBAEB610CF7271089C89CD9CDA0B6 (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_4(L_0);
		// }
		return;
	}
}
// System.Void Animation::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Tick_m0421EA59A21E1077BE4D49370699FCA52FF758D7 (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, const RuntimeMethod* method)
{
	{
		// AnimatorContor(code);
		int32_t L_0 = __this->get_code_5();
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Animation::AnimatorContor(System.Int32) */, __this, L_0);
		// }
		return;
	}
}
// System.Void Animation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation__ctor_mEBDE93F61306BFECB31EA0739662BDC15AB3B5D4 (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AntAnimator::AnimatorContor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntAnimator_AnimatorContor_m9254844D197BCFB8913D93069699F17A3AA11F64 (AntAnimator_t3C8A4014466F3519627253016F6587A7E574E93A * __this, int32_t ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (code == 1)
		int32_t L_0 = ___code0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// this.animator.SetTrigger("hurt");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void AntAnimator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntAnimator_Start_m4364C4C3D9BEDA97057F29B2AA4FA619EC569FA9 (AntAnimator_t3C8A4014466F3519627253016F6587A7E574E93A * __this, const RuntimeMethod* method)
{
	{
		// Init();
		Animation_Init_m8E1EC12415EDBAEB610CF7271089C89CD9CDA0B6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntAnimator::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntAnimator_FixedUpdate_mA611855C4F90BC69E7AE6C659DF502D58400BE4E (AntAnimator_t3C8A4014466F3519627253016F6587A7E574E93A * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		Animation_Tick_m0421EA59A21E1077BE4D49370699FCA52FF758D7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AntAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntAnimator__ctor_mCC607B2D57816BDBD46B1A0858340D5F0213F1B5 (AntAnimator_t3C8A4014466F3519627253016F6587A7E574E93A * __this, const RuntimeMethod* method)
{
	{
		Animation__ctor_mEBDE93F61306BFECB31EA0739662BDC15AB3B5D4(__this, /*hidden argument*/NULL);
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
// System.Void AntController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntController__ctor_m32B88C302EA595EE244BC21347EE91BB936C0892 (AntController_tD6C13BA3B6C14BE9C33400486338CD1D76F37AF2 * __this, const RuntimeMethod* method)
{
	{
		EnemyController__ctor_m547F49905D505F962CBC708846F8E8A3B0838F70(__this, /*hidden argument*/NULL);
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
// System.Void Attack::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_Init_m6784A2AC26AB22EC1D565DA54E21120182E6EBCD (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attackCooldown = new Cooldown(cooldown);
		float L_0 = __this->get_cooldown_8();
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_1 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_1, L_0, /*hidden argument*/NULL);
		__this->set_attackCooldown_9(L_1);
		// }
		return;
	}
}
// System.Void Attack::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_Tick_mE0CD86B2FCB2DC941D4502E527B5348AD1C8E991 (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Attack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_Start_mCC8B555A1E9A80952B41E800244AB9A763B2D182 (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method)
{
	{
		// Init();
		Attack_Init_m6784A2AC26AB22EC1D565DA54E21120182E6EBCD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Attack::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_FixedUpdate_mD5ABE721CCB435A3F68FD2F856598DA9EB3DE3DA (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		Attack_Tick_mE0CD86B2FCB2DC941D4502E527B5348AD1C8E991(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Attack::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_OnTriggerStay2D_m3DD912CFE338459D2CB491E4FF2DCA1ADD30E6DC (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * V_1 = NULL;
	{
		// if (attack)
		bool L_0 = __this->get_attack_4();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// string tag = collision.gameObject.tag;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (GiveDamageTag(tag))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean Attack::GiveDamageTag(System.String) */, __this, L_4);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// Damageability damageability = collision.gameObject.GetComponent<Damageability>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_8;
		L_8 = GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909(L_7, /*hidden argument*/GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		V_1 = L_8;
		// AttackWithContact(damageability);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_9 = V_1;
		VirtActionInvoker1< Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * >::Invoke(7 /* System.Void Attack::AttackWithContact(Damageability) */, __this, L_9);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Attack::AttackWithContact(Damageability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_AttackWithContact_m8F03F431D4B6EA767B579544C3D74A961CBADDFB (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * ___destination0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * V_0 = NULL;
	{
		// if (GetAttackCooldown().Control())
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0;
		L_0 = Attack_GetAttackCooldown_m6377088C4D66E35B27C8D293778342B46FB21116(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		// destination.TakeDamage(attackPower);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_2 = ___destination0;
		int32_t L_3 = __this->get_attackPower_7();
		Damageability_TakeDamage_m1D4421310BE4703DB3129463AABC7BA233D00761(L_2, L_3, /*hidden argument*/NULL);
		// MobMovement movement = destination.gameObject.GetComponent<MobMovement>();
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_4 = ___destination0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_6;
		L_6 = GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD(L_5, /*hidden argument*/GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD_RuntimeMethod_var);
		V_0 = L_6;
		// float temp = this.transform.position.x - movement.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_10 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		// if (temp > 0)
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_13))) > ((float)(0.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		// movement.SetVelocity(0, tossing);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_14 = V_0;
		float L_15 = __this->get_tossing_5();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_14, 0, L_15, /*hidden argument*/NULL);
		// }
		goto IL_0069;
	}

IL_005c:
	{
		// movement.SetVelocity(1, tossing);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_16 = V_0;
		float L_17 = __this->get_tossing_5();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_16, 1, L_17, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// movement.SetVelocity(3,tossingUp);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_18 = V_0;
		float L_19 = __this->get_tossingUp_6();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_18, 3, L_19, /*hidden argument*/NULL);
		// attackedFlag = true;
		__this->set_attackedFlag_10((bool)1);
	}

IL_007d:
	{
		// }
		return;
	}
}
// Cooldown Attack::GetAttackCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * Attack_GetAttackCooldown_m6377088C4D66E35B27C8D293778342B46FB21116 (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (attackCooldown == null)
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0 = __this->get_attackCooldown_9();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// attackCooldown = new Cooldown(cooldown);
		float L_1 = __this->get_cooldown_8();
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_2, L_1, /*hidden argument*/NULL);
		__this->set_attackCooldown_9(L_2);
	}

IL_0019:
	{
		// return attackCooldown;
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_3 = __this->get_attackCooldown_9();
		return L_3;
	}
}
// System.Void Attack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack__ctor_m42BFE85BF380263583A584B3ED06A83726960FED (Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * __this, const RuntimeMethod* method)
{
	{
		// public bool attack = true;
		__this->set_attack_4((bool)1);
		// public float cooldown = 1000;
		__this->set_cooldown_8((1000.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Bound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bound__ctor_m985536D2D5F293A9894CC0B6EFF7B77AA4C2FDFA (Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ArrayList contacts = new ArrayList();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_0, /*hidden argument*/NULL);
		__this->set_contacts_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Collections.ArrayList Constants::GetEnemyChangeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * Constants_GetEnemyChangeDirection_m6F6031BED50C6E4D88567B855C9D6F4B2B2A6C68 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EnemyChangeDirection != null)
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_EnemyChangeDirection_5();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return EnemyChangeDirection;
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_1 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_EnemyChangeDirection_5();
		return L_1;
	}

IL_000d:
	{
		// EnemyChangeDirection = new ArrayList();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_2 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_EnemyChangeDirection_5(L_2);
		// EnemyChangeDirection.Add(groundTag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_EnemyChangeDirection_5();
		String_t* L_4 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_groundTag_1();
		int32_t L_5;
		L_5 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_4);
		// EnemyChangeDirection.Add(changeDirectionTag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_6 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_EnemyChangeDirection_5();
		String_t* L_7 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_changeDirectionTag_4();
		int32_t L_8;
		L_8 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_6, L_7);
		// EnemyChangeDirection.Add(antTag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_9 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_EnemyChangeDirection_5();
		String_t* L_10 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_antTag_2();
		int32_t L_11;
		L_11 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_9, L_10);
		// EnemyChangeDirection.Add(glasshopperTag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_EnemyChangeDirection_5();
		String_t* L_13 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_glasshopperTag_3();
		int32_t L_14;
		L_14 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_13);
		// return EnemyChangeDirection;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_15 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_EnemyChangeDirection_5();
		return L_15;
	}
}
// System.Collections.ArrayList Constants::GetPlayerGiveDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * Constants_GetPlayerGiveDamage_m7343694332AA31351E235E836FE65B255F512710 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerGiveDamage != null)
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_PlayerGiveDamage_6();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return PlayerGiveDamage;
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_1 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_PlayerGiveDamage_6();
		return L_1;
	}

IL_000d:
	{
		// PlayerGiveDamage = new ArrayList();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_2 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_PlayerGiveDamage_6(L_2);
		// PlayerGiveDamage.Add(antTag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_PlayerGiveDamage_6();
		String_t* L_4 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_antTag_2();
		int32_t L_5;
		L_5 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_4);
		// PlayerGiveDamage.Add(glasshopperTag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_6 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_PlayerGiveDamage_6();
		String_t* L_7 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_glasshopperTag_3();
		int32_t L_8;
		L_8 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_6, L_7);
		// return PlayerGiveDamage;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_9 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_PlayerGiveDamage_6();
		return L_9;
	}
}
// System.Boolean Constants::ContainsList(System.Collections.ArrayList,System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Constants_ContainsList_mA1FFB129B1B1B2AC4F4E465D8E9D6A4E5DC099B4 (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list0, ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < list2.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// if (list.Contains(list2[i]))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = ___list0;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_1 = ___list21;
		int32_t L_2 = V_0;
		RuntimeObject * L_3;
		L_3 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_1, L_2);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_0, L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0015:
	{
		// for(int i = 0; i < list2.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0019:
	{
		// for(int i = 0; i < list2.Count; i++)
		int32_t L_6 = V_0;
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ___list21;
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_7);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Constants::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constants__ctor_m0EA1262B0E2FEAFEEA315AD5C2CF86C2B64DF6AF (Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Constants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constants__cctor_m89B40C11188D8A59C77A27ADDDA950493F7F0904 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08459037BC14BBFB8FEA6538501D64E580CA6559);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DB9B3B0FD234EC27B05692E5C2D7E899699405D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A0CB0372CDAEF0E05244CA0FF4ACA2D282B2A22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly static string playerTag = "Player";
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_playerTag_0(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		// public readonly static string groundTag = "Ground";
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_groundTag_1(_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		// public readonly static string antTag = "Ant";
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_antTag_2(_stringLiteral08459037BC14BBFB8FEA6538501D64E580CA6559);
		// public readonly static string glasshopperTag = "Glasshooper";
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_glasshopperTag_3(_stringLiteral8A0CB0372CDAEF0E05244CA0FF4ACA2D282B2A22);
		// public readonly static string changeDirectionTag = "ChangeDirection";
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_changeDirectionTag_4(_stringLiteral4DB9B3B0FD234EC27B05692E5C2D7E899699405D);
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
// System.Void Controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Start_mD256D29928E12349C2565BD046108EE5A3537157 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Controller::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_FixedUpdate_m20A3E96B437C41EBBDCE6787C2B1DE6DA18B74DA (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Controller::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Init_mAAF62B00B9ED76939CA03782C693AF23A8389B74 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Controller::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Tick_m7CFF73C33D5567C1842A2CCE67322C7F0D97C760 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller__ctor_m50D06C2CAE9B5496780A83ABCF68C529A44EE9F7 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Cooldown::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, float ___cooldown0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Stopwatch stopwatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_0, /*hidden argument*/NULL);
		__this->set_stopwatch_1(L_0);
		// public Cooldown(float cooldown)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// SetCooldown(cooldown);
		float L_1 = ___cooldown0;
		Cooldown_SetCooldown_m5460B4884EC89E1780A50D9153A21FA25025411A_inline(__this, L_1, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_2 = __this->get_stopwatch_1();
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Cooldown::SetCooldown(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cooldown_SetCooldown_m5460B4884EC89E1780A50D9153A21FA25025411A (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, float ___cooldown0, const RuntimeMethod* method)
{
	{
		// this.cooldown = cooldown;
		float L_0 = ___cooldown0;
		__this->set_cooldown_0(L_0);
		// }
		return;
	}
}
// System.Boolean Cooldown::Control()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, const RuntimeMethod* method)
{
	{
		// if (ElapsedTime() >= cooldown)
		float L_0;
		L_0 = Cooldown_ElapsedTime_mE05101D2333A31B8D67D7D199E2BFF22E311A5FB(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_cooldown_0();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_001b;
		}
	}
	{
		// stopwatch.Restart();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_2 = __this->get_stopwatch_1();
		Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B(L_2, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Single Cooldown::ElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cooldown_ElapsedTime_mE05101D2333A31B8D67D7D199E2BFF22E311A5FB (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, const RuntimeMethod* method)
{
	{
		// stopwatch.Stop();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_stopwatch_1();
		Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63(L_0, /*hidden argument*/NULL);
		// float et = stopwatch.ElapsedMilliseconds;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = __this->get_stopwatch_1();
		int64_t L_2;
		L_2 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_1, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = __this->get_stopwatch_1();
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_3, /*hidden argument*/NULL);
		// return et;
		return ((float)((float)L_2));
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
// System.Void Damageability::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_Init_mE6DF306574851C28AC97BC1E03F409BA81782813 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Damageability::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_Tick_m02485F5511642E2A2B05D28B2A0C080CFEFE7443 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// ControlAlive();
		Damageability_ControlAlive_m123D0270E1A853D3E7EE6C01D508C177353AD2B3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Damageability::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_Start_m9A9A02F273429291C62B416D3AC3783F58DB8F5B (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		Damageability_Init_mE6DF306574851C28AC97BC1E03F409BA81782813(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Damageability::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_FixedUpdate_m5EC0FE5E73B57967249B8A160645E1E45578A268 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		Damageability_Tick_m02485F5511642E2A2B05D28B2A0C080CFEFE7443(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Damageability::ControlAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_ControlAlive_m123D0270E1A853D3E7EE6C01D508C177353AD2B3 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (this.currentHp <= 0)
		int32_t L_0 = __this->get_currentHp_5();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		// alive = false;
		__this->set_alive_6((bool)0);
		// waitForDestroy -= Time.deltaTime;
		float L_1 = __this->get_waitForDestroy_9();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_waitForDestroy_9(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// if(GetComponent<Collider2D>() != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3;
		L_3 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// GetComponent<Collider2D>().isTrigger = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5;
		L_5 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// if (waitForDestroy <= 0)
		float L_6 = __this->get_waitForDestroy_9();
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_008c;
		}
	}
	{
		// if(this.gameObject.tag!="Player")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_8, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		return;
	}

IL_006f:
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_11;
		L_11 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12;
		L_12 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_12, /*hidden argument*/NULL);
		// PlayerController.CurrentHp = this.maxHp;
		int32_t L_13 = __this->get_maxHp_4();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_CurrentHp_7(L_13);
	}

IL_008c:
	{
		// return;
		return;
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Damageability::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_TakeDamage_m1D4421310BE4703DB3129463AABC7BA233D00761 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, int32_t ___val0, const RuntimeMethod* method)
{
	{
		// if (val <= 0)
		int32_t L_0 = ___val0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		// alive = false;
		__this->set_alive_6((bool)0);
		// return;
		return;
	}

IL_000c:
	{
		// currentHp -= val;
		int32_t L_1 = __this->get_currentHp_5();
		int32_t L_2 = ___val0;
		__this->set_currentHp_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		// damagedFlag = true;
		__this->set_damagedFlag_7((bool)1);
		// damagedFlag2 = true;
		__this->set_damagedFlag2_8((bool)1);
		// }
		return;
	}
}
// System.Int32 Damageability::get_CurrentHp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Damageability_get_CurrentHp_m765EAE02816923C177F851FD674622B8DB9C02C2 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// public int CurrentHp { get => currentHp; set => currentHp = value; }
		int32_t L_0 = __this->get_currentHp_5();
		return L_0;
	}
}
// System.Void Damageability::set_CurrentHp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_set_CurrentHp_m2A4B460592E241D65B88081A9DE53B9F0E149E96 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CurrentHp { get => currentHp; set => currentHp = value; }
		int32_t L_0 = ___value0;
		__this->set_currentHp_5(L_0);
		return;
	}
}
// System.Int32 Damageability::get_MaxHp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Damageability_get_MaxHp_m21565DCC6F844E4343DA4089F2FED56D4CC30C72 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxHp { get => maxHp; set => maxHp = value; }
		int32_t L_0 = __this->get_maxHp_4();
		return L_0;
	}
}
// System.Void Damageability::set_MaxHp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_set_MaxHp_m1BF0DA2CC2879D549F450951335DA4F3FF89C08E (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxHp { get => maxHp; set => maxHp = value; }
		int32_t L_0 = ___value0;
		__this->set_maxHp_4(L_0);
		return;
	}
}
// System.Boolean Damageability::get_Alive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Damageability_get_Alive_mE96F5ED945B35AABBEE387ACE46DC2D67EB23C0C (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// public bool Alive { get => alive; set => alive = value; }
		bool L_0 = __this->get_alive_6();
		return L_0;
	}
}
// System.Void Damageability::set_Alive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_set_Alive_m1A8B9174C5A77C39D532FB895EFE0988F8D4634F (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Alive { get => alive; set => alive = value; }
		bool L_0 = ___value0;
		__this->set_alive_6(L_0);
		return;
	}
}
// System.Boolean Damageability::get_Alive1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Damageability_get_Alive1_mC4869D6789539C0E765F0F1D4213F2625ECE90BA (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// public bool Alive1 { get => alive; set => alive = value; }
		bool L_0 = __this->get_alive_6();
		return L_0;
	}
}
// System.Void Damageability::set_Alive1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability_set_Alive1_mA56BC07F74D936AEF96CD78C1544FA35B3070460 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Alive1 { get => alive; set => alive = value; }
		bool L_0 = ___value0;
		__this->set_alive_6(L_0);
		return;
	}
}
// System.Void Damageability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageability__ctor_m986CE18C9856EC91C2EB00DDC17EBD85A6892186 (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// public int maxHp = 3;
		__this->set_maxHp_4(3);
		// public int currentHp = 3;
		__this->set_currentHp_5(3);
		// private bool alive = true;
		__this->set_alive_6((bool)1);
		// public float waitForDestroy = 10f;
		__this->set_waitForDestroy_9((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DownBound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownBound_Start_m8FCD96EAED1A21D646039F9B7004E80213C842C3 (DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DownBound::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownBound_Update_mD1D741AD93DD265A1EB36453F9CD8C7DA6CBAA6D (DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DownBound::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownBound_OnTriggerEnter2D_m3D1DFDAC984613F369AE37B39ECDA5238D4C9D2F (DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" || (collision.gameObject.layer == 7))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0033;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)7))))
		{
			goto IL_003a;
		}
	}

IL_0033:
	{
		// contactWithGround = true;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)1);
	}

IL_003a:
	{
		// if (!contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_10 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_10, L_13);
		if (L_14)
		{
			goto IL_0069;
		}
	}
	{
		// contacts.Add(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_15 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		int32_t L_19;
		L_19 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_15, L_18);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void DownBound::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownBound_OnTriggerStay2D_m1ED1F5F167DA06792F5B17AA2CED274F63F0CFE4 (DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" || (collision.gameObject.layer == 7))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0033;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)7))))
		{
			goto IL_003a;
		}
	}

IL_0033:
	{
		// contactWithGround = true;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)1);
	}

IL_003a:
	{
		// if (!contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_10 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_10, L_13);
		if (L_14)
		{
			goto IL_0069;
		}
	}
	{
		// contacts.Add(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_15 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		int32_t L_19;
		L_19 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_15, L_18);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void DownBound::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownBound_OnTriggerExit2D_mBDEA8CBBC385884DF77DB562261B91126C977ED0 (DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" || (collision.gameObject.layer == 7))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0033;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)7))))
		{
			goto IL_003a;
		}
	}

IL_0033:
	{
		// contactWithGround = false;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)0);
	}

IL_003a:
	{
		// if (contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_10 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_10, L_13);
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		// contacts.Remove(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_15 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(34 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_15, L_18);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void DownBound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownBound__ctor_mAD87ADA5B3C60FD46B5E9322B6B719ED8EF0D93E (DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * __this, const RuntimeMethod* method)
{
	{
		Bound__ctor_m985536D2D5F293A9894CC0B6EFF7B77AA4C2FDFA(__this, /*hidden argument*/NULL);
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
// System.Void EndOfMap::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfMap_Start_mF0089FC1983974B01061EFB27C68CB713B7050AF (EndOfMap_t1CEAAC99420E9DDC11363F7FBA61A15E63E61236 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EndOfMap::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfMap_FixedUpdate_m66C4418A6A68749C862E0774A6CD867864E60A5A (EndOfMap_t1CEAAC99420E9DDC11363F7FBA61A15E63E61236 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EndOfMap::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfMap_OnTriggerEnter2D_m08FBEA9FE590FE7B765A0D94F201F5BC7EA6DF48 (EndOfMap_t1CEAAC99420E9DDC11363F7FBA61A15E63E61236 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * V_0 = NULL;
	MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * V_1 = NULL;
	{
		// Damageability damageability = collision.gameObject.GetComponent<Damageability>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_2;
		L_2 = GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909(L_1, /*hidden argument*/GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		V_0 = L_2;
		// if (damageability != null)
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// MobMovement movementModule = collision.gameObject.GetComponent<MobMovement>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_7;
		L_7 = GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD(L_6, /*hidden argument*/GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD_RuntimeMethod_var);
		V_1 = L_7;
		// if(damageability.Alive)
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_8 = V_0;
		bool L_9;
		L_9 = Damageability_get_Alive_mE96F5ED945B35AABBEE387ACE46DC2D67EB23C0C_inline(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0035;
		}
	}
	{
		// movementModule.SetVelocity(3, 4);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_10 = V_1;
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_10, 3, (4.0f), /*hidden argument*/NULL);
	}

IL_0035:
	{
		// damageability.TakeDamage(damageability.CurrentHp);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_11 = V_0;
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_12 = V_0;
		int32_t L_13;
		L_13 = Damageability_get_CurrentHp_m765EAE02816923C177F851FD674622B8DB9C02C2_inline(L_12, /*hidden argument*/NULL);
		Damageability_TakeDamage_m1D4421310BE4703DB3129463AABC7BA233D00761(L_11, L_13, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void EndOfMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfMap__ctor_m41F6A176F008D376AFD31F3596C12FD24F723082 (EndOfMap_t1CEAAC99420E9DDC11363F7FBA61A15E63E61236 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyAttack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAttack_Start_mF6EC413D7F5A8F9CA9C6197BEF713C804AD43BB5 (EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		Attack_Init_m6784A2AC26AB22EC1D565DA54E21120182E6EBCD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyAttack::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAttack_FixedUpdate_m4EA23C4838F791834D377E886AC7EB478805CDB3 (EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		Attack_Tick_mE0CD86B2FCB2DC941D4502E527B5348AD1C8E991(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyAttack::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAttack_OnTriggerStay2D_m42D314304CDE6DC5044590631A46098B5DF51EBC (EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_m51AA75B98504DC73BBC9EEF70C81AC28379085D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * V_1 = NULL;
	{
		// if (attack)
		bool L_0 = ((Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED *)__this)->get_attack_4();
		if (!L_0)
		{
			goto IL_005d;
		}
	}
	{
		// string tag = collision.gameObject.tag;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (GiveDamageTag(tag) &&
		//     !GetComponent<MobMovement>().UpBound.contacts.Contains("Player"))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean Attack::GiveDamageTag(System.String) */, __this, L_4);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_6;
		L_6 = Component_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_m51AA75B98504DC73BBC9EEF70C81AC28379085D1(__this, /*hidden argument*/Component_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_m51AA75B98504DC73BBC9EEF70C81AC28379085D1_RuntimeMethod_var);
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_7;
		L_7 = MobMovement_get_UpBound_mCC28D16220E184550ADBC3B22E9903B7A4F1ED25_inline(L_6, /*hidden argument*/NULL);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_8 = L_7->get_contacts_4();
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_8, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		// Damageability damageability = collision.gameObject.GetComponent<Damageability>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_12;
		L_12 = GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909(L_11, /*hidden argument*/GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		V_1 = L_12;
		// AttackWithContact(damageability);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_13 = V_1;
		VirtActionInvoker1< Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * >::Invoke(7 /* System.Void Attack::AttackWithContact(Damageability) */, __this, L_13);
		// GetComponent<Movement>().SetVelocity(0, 0);
		Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * L_14;
		L_14 = Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54(__this, /*hidden argument*/Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54_RuntimeMethod_var);
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_14, 0, (0.0f), /*hidden argument*/NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Boolean EnemyAttack::GiveDamageTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyAttack_GiveDamageTag_m8D5F149618F5F7C1F9BCB3381CCE7A513D57D05F (EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tag == "Player";
		String_t* L_0 = ___tag0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void EnemyAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAttack__ctor_mC9F235199C3D3A8DE4EB00B0AD46F796B241FE08 (EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * __this, const RuntimeMethod* method)
{
	{
		Attack__ctor_m42BFE85BF380263583A584B3ED06A83726960FED(__this, /*hidden argument*/NULL);
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
// MobMovement EnemyController::get_Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// public MobMovement Movement { get => movement; set => movement = value; }
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_0 = __this->get_movement_4();
		return L_0;
	}
}
// System.Void EnemyController::set_Movement(MobMovement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_set_Movement_m184F7323E9C7CD5ABBF11CA7611696E78223AFF4 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * ___value0, const RuntimeMethod* method)
{
	{
		// public MobMovement Movement { get => movement; set => movement = value; }
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_0 = ___value0;
		__this->set_movement_4(L_0);
		return;
	}
}
// Damageability EnemyController::get_Damageability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * EnemyController_get_Damageability_m25609FE20A2DB85D976F14EEE918660B9A694B28 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// public Damageability Damageability { get => damageability; set => damageability = value; }
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_0 = __this->get_damageability_5();
		return L_0;
	}
}
// System.Void EnemyController::set_Damageability(Damageability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_set_Damageability_mFFDBEECB8D316018FD1C0E2DA93D8A5A6033D579 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * ___value0, const RuntimeMethod* method)
{
	{
		// public Damageability Damageability { get => damageability; set => damageability = value; }
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_0 = ___value0;
		__this->set_damageability_5(L_0);
		return;
	}
}
// Animation EnemyController::get_Animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * EnemyController_get_Animation_mAFB8A83EF20EA5878E20D81ED896E64FDD652441 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// public Animation Animation { get => animation; set => animation = value; }
		Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * L_0 = __this->get_animation_6();
		return L_0;
	}
}
// System.Void EnemyController::set_Animation(Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_set_Animation_mFBD919EB4E7DDAAC51D9B54BDB74967ABEF18711 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * ___value0, const RuntimeMethod* method)
{
	{
		// public Animation Animation { get => animation; set => animation = value; }
		Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * L_0 = ___value0;
		__this->set_animation_6(L_0);
		return;
	}
}
// Attack EnemyController::get_Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * EnemyController_get_Attack_m833E214B05021847B77728C4975AA1603D51DDCF (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// public Attack Attack { get => attack; set => attack = value; }
		Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * L_0 = __this->get_attack_7();
		return L_0;
	}
}
// System.Void EnemyController::set_Attack(Attack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_set_Attack_mDB52753D2A90F2237A95C56ED549AE5AD9ED3223 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * ___value0, const RuntimeMethod* method)
{
	{
		// public Attack Attack { get => attack; set => attack = value; }
		Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * L_0 = ___value0;
		__this->set_attack_7(L_0);
		return;
	}
}
// System.Void EnemyController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Init_m3A65060654F8A1DBFC93C9916909DA5D0B3F5D7B (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_tA64B0031D872E861F15C2C7B38175F2FB7A84786_mC727F47E6A56D9BC714312B7D6C2440C55750CB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mA95F9DFAE8D31034C4D8A5775206A1072F20172A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2_mA3422CE6D6F9FECCAC40BD538B78705A7D32CCFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_m51AA75B98504DC73BBC9EEF70C81AC28379085D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement = GetComponent<MobMovement>();
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_0;
		L_0 = Component_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_m51AA75B98504DC73BBC9EEF70C81AC28379085D1(__this, /*hidden argument*/Component_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_m51AA75B98504DC73BBC9EEF70C81AC28379085D1_RuntimeMethod_var);
		__this->set_movement_4(L_0);
		// damageability = GetComponent<Damageability>();
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_1;
		L_1 = Component_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mA95F9DFAE8D31034C4D8A5775206A1072F20172A(__this, /*hidden argument*/Component_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mA95F9DFAE8D31034C4D8A5775206A1072F20172A_RuntimeMethod_var);
		__this->set_damageability_5(L_1);
		// animation = GetComponent<Animation>();
		Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * L_2;
		L_2 = Component_GetComponent_TisAnimation_tA64B0031D872E861F15C2C7B38175F2FB7A84786_mC727F47E6A56D9BC714312B7D6C2440C55750CB0(__this, /*hidden argument*/Component_GetComponent_TisAnimation_tA64B0031D872E861F15C2C7B38175F2FB7A84786_mC727F47E6A56D9BC714312B7D6C2440C55750CB0_RuntimeMethod_var);
		__this->set_animation_6(L_2);
		// attack = GetComponent<EnemyAttack>();
		EnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2 * L_3;
		L_3 = Component_GetComponent_TisEnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2_mA3422CE6D6F9FECCAC40BD538B78705A7D32CCFB(__this, /*hidden argument*/Component_GetComponent_TisEnemyAttack_t770C16819BCC010CF374A277F60DBE4B3F8467E2_mA3422CE6D6F9FECCAC40BD538B78705A7D32CCFB_RuntimeMethod_var);
		__this->set_attack_7(L_3);
		// }
		return;
	}
}
// System.Void EnemyController::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Tick_mCEC4C6DC7D4761CC6613B843C85AC7A3F8C0C448 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!damageability.Alive)
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_0 = __this->get_damageability_5();
		bool L_1;
		L_1 = Damageability_get_Alive_mE96F5ED945B35AABBEE387ACE46DC2D67EB23C0C_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_004a;
		}
	}
	{
		// GetComponent<Rigidbody2D>().constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezePositionY;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263(L_2, 3, /*hidden argument*/NULL);
		// animation.Code = 1;
		Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * L_3 = __this->get_animation_6();
		Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline(L_3, 1, /*hidden argument*/NULL);
		// attack.attack = false;
		Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * L_4 = __this->get_attack_7();
		L_4->set_attack_4((bool)0);
		// movement.goLeftFlag = false;
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_5 = __this->get_movement_4();
		L_5->set_goLeftFlag_16((bool)0);
		// movement.goRightFlag = false;
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_6 = __this->get_movement_4();
		L_6->set_goRightFlag_17((bool)0);
		// return;
		return;
	}

IL_004a:
	{
		// BasicAI();
		EnemyController_BasicAI_m6546F72E170778A1168B1AEBF2DCB2D340CA3B5E(__this, /*hidden argument*/NULL);
		// SetFlags();
		VirtActionInvoker0::Invoke(4 /* System.Void EnemyController::SetFlags() */, __this);
		// }
		return;
	}
}
// System.Void EnemyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Start_mC1ABE2BC43CD0B05455128E0D6FEA2AB2CE1DE0F (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// Init();
		EnemyController_Init_m3A65060654F8A1DBFC93C9916909DA5D0B3F5D7B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_FixedUpdate_mC336D31B992677C821C70D06C429298AAA428CCE (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		EnemyController_Tick_mCEC4C6DC7D4761CC6613B843C85AC7A3F8C0C448(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyController::BasicAI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_BasicAI_m6546F72E170778A1168B1AEBF2DCB2D340CA3B5E (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (movement.Direction == 0)
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_0 = __this->get_movement_4();
		int32_t L_1;
		L_1 = MobMovement_get_Direction_m78D550873829FA8049B2885471559D223771ACBF_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0057;
		}
	}
	{
		// if (attack.attackedFlag ||(GetchangeDirectionCooldown().Control() &&
		//     Constants.ContainsList(movement.LeftBound.contacts, Constants.GetEnemyChangeDirection())))
		Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * L_2 = __this->get_attack_7();
		bool L_3 = L_2->get_attackedFlag_10();
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_4;
		L_4 = EnemyController_GetchangeDirectionCooldown_m51649322321F9943C32B0106D95CE85DB0701104(__this, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00a0;
		}
	}
	{
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_6 = __this->get_movement_4();
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_7;
		L_7 = MobMovement_get_LeftBound_m5016CAE4264231819A64822610D414DBC2EC65AA_inline(L_6, /*hidden argument*/NULL);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_8 = L_7->get_contacts_4();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_9;
		L_9 = Constants_GetEnemyChangeDirection_m6F6031BED50C6E4D88567B855C9D6F4B2B2A6C68(/*hidden argument*/NULL);
		bool L_10;
		L_10 = Constants_ContainsList_mA1FFB129B1B1B2AC4F4E465D8E9D6A4E5DC099B4(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00a0;
		}
	}

IL_0043:
	{
		// dir = 1;
		__this->set_dir_10(1);
		// attack.attackedFlag = false;
		Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * L_11 = __this->get_attack_7();
		L_11->set_attackedFlag_10((bool)0);
		// }
		return;
	}

IL_0057:
	{
		// if (attack.attackedFlag || (GetchangeDirectionCooldown().Control() &&
		//     Constants.ContainsList(movement.RightBound.contacts, Constants.GetEnemyChangeDirection())))
		Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * L_12 = __this->get_attack_7();
		bool L_13 = L_12->get_attackedFlag_10();
		if (L_13)
		{
			goto IL_008d;
		}
	}
	{
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_14;
		L_14 = EnemyController_GetchangeDirectionCooldown_m51649322321F9943C32B0106D95CE85DB0701104(__this, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a0;
		}
	}
	{
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_16 = __this->get_movement_4();
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_17;
		L_17 = MobMovement_get_RightBound_m012BD3DF4D1A36FEF81A2D26EBFCD07D6E6EBEA7_inline(L_16, /*hidden argument*/NULL);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_18 = L_17->get_contacts_4();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_19;
		L_19 = Constants_GetEnemyChangeDirection_m6F6031BED50C6E4D88567B855C9D6F4B2B2A6C68(/*hidden argument*/NULL);
		bool L_20;
		L_20 = Constants_ContainsList_mA1FFB129B1B1B2AC4F4E465D8E9D6A4E5DC099B4(L_18, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a0;
		}
	}

IL_008d:
	{
		// dir = 0;
		__this->set_dir_10(0);
		// attack.attackedFlag = false;
		Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED * L_21 = __this->get_attack_7();
		L_21->set_attackedFlag_10((bool)0);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void EnemyController::SetFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_SetFlags_mE3DC8CCC19099E4D335CEB6120B3E3DC1D78B84C (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// if (dir == 0)
		int32_t L_0 = __this->get_dir_10();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// movement.goLeftFlag = true;
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_1 = __this->get_movement_4();
		L_1->set_goLeftFlag_16((bool)1);
		// }
		return;
	}

IL_0015:
	{
		// else if (dir == 1)
		int32_t L_2 = __this->get_dir_10();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		// movement.goRightFlag = true;
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_3 = __this->get_movement_4();
		L_3->set_goRightFlag_17((bool)1);
	}

IL_002a:
	{
		// }
		return;
	}
}
// Cooldown EnemyController::GetchangeDirectionCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * EnemyController_GetchangeDirectionCooldown_m51649322321F9943C32B0106D95CE85DB0701104 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (changeDirectionCooldown == null)
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0 = __this->get_changeDirectionCooldown_9();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// changeDirectionCooldown = new Cooldown(10);
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_1 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_1, (10.0f), /*hidden argument*/NULL);
		__this->set_changeDirectionCooldown_9(L_1);
	}

IL_0018:
	{
		// return changeDirectionCooldown;
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2 = __this->get_changeDirectionCooldown_9();
		return L_2;
	}
}
// System.Void EnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController__ctor_m547F49905D505F962CBC708846F8E8A3B0838F70 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		Controller__ctor_m50D06C2CAE9B5496780A83ABCF68C529A44EE9F7(__this, /*hidden argument*/NULL);
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
// System.Void GhostGround::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostGround_Start_m23378064FB0EEBF4F518E81FCF0ED4D9D3C0A72A (GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collider = GetComponent<Collider2D>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0;
		L_0 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		__this->set_collider_4(L_0);
		// }
		return;
	}
}
// System.Void GhostGround::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostGround_FixedUpdate_m07C4DEBBADEFE5A5E459A39E0B3CD7031AE9C66D (GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GhostGround::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostGround_OnTriggerEnter2D_m9419914AED66566161EBBC84F0238E0650130360 (GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50B6C76BB62E7F5AFC4588A2E78F4CA099D6852D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string tag = collision.gameObject.tag;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		// if (tag == "DownBound")
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral50B6C76BB62E7F5AFC4588A2E78F4CA099D6852D, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// collider.isTrigger = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = __this->get_collider_4();
		Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void GhostGround::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostGround_OnTriggerStay2D_m5A8359315FE314DB6A81B6DA6118C7C74F40C130 (GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		// string tag = collision.gameObject.tag;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		// if (tag == "Player")
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// Transform ts = collision.gameObject.GetComponent<Transform>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_5, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		V_0 = L_6;
		// ts.position = new Vector2(ts.position.x, ts.position.y + 0.02f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_14), L_10, ((float)il2cpp_codegen_add((float)L_13, (float)(0.0199999996f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_14, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_15, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void GhostGround::OnCollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostGround_OnCollisionStay2D_m1D50EE6CCC8E3A9966EB137CAE987E07F25A848D (GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		// string tag = collision.gameObject.tag;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		// if (tag == "Player")
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0062;
		}
	}
	{
		// Transform ts = collision.gameObject.GetComponent<Transform>();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_4 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_5, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		V_0 = L_6;
		// ts.position = new Vector2(ts.position.x, ts.position.y + fixer);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		float L_14 = __this->get_fixer_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_15), L_10, ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_15, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_16, /*hidden argument*/NULL);
		// fixer /= 1.6f;
		float L_17 = __this->get_fixer_6();
		__this->set_fixer_6(((float)((float)L_17/(float)(1.60000002f))));
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void GhostGround::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostGround_OnCollisionExit2D_mEFB3EF27A41C7F3F58B51D5DF1322A3AE983B66A (GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50B6C76BB62E7F5AFC4588A2E78F4CA099D6852D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string tag = collision.gameObject.tag;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		// if (tag == "DownBound")
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral50B6C76BB62E7F5AFC4588A2E78F4CA099D6852D, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// collider.isTrigger = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = __this->get_collider_4();
		Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52(L_4, (bool)1, /*hidden argument*/NULL);
		// fixer = fixerF;
		float L_5 = __this->get_fixerF_5();
		__this->set_fixer_6(L_5);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void GhostGround::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostGround_OnTriggerExit2D_mAD61E843D886F6A79E0E889D1F7F5E3FA5C63B03 (GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50B6C76BB62E7F5AFC4588A2E78F4CA099D6852D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string tag = collision.gameObject.tag;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		// if (tag == "DownBound")
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral50B6C76BB62E7F5AFC4588A2E78F4CA099D6852D, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// collider.isTrigger = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = __this->get_collider_4();
		Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52(L_4, (bool)1, /*hidden argument*/NULL);
		// fixer = fixerF;
		float L_5 = __this->get_fixerF_5();
		__this->set_fixer_6(L_5);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void GhostGround::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GhostGround__ctor_mAE8F5D32AFA3F09FB2F0C2B2E0424B3AD39CEA11 (GhostGround_t11FD2321A0F020EB42DDC60F1E41E7F01E9A7D74 * __this, const RuntimeMethod* method)
{
	{
		// private float fixerF = 0.02f;
		__this->set_fixerF_5((0.0199999996f));
		// private float fixer = 0.02f;
		__this->set_fixer_6((0.0199999996f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GrasshopperAnimator::AnimatorContor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperAnimator_AnimatorContor_m9AB7519E43B2FDBE68F387E9F4B161130B49B4D1 (GrasshopperAnimator_t6B1D7743FFD1F235DE2FC33710CCD494BDEAEC23 * __this, int32_t ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7598EFBF4A029BF0B3B286271D8C3B865F7A66FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (code == 1)
		int32_t L_0 = ___code0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// this.animator.SetTrigger("hurt");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// else if(code == 2)
		int32_t L_2 = ___code0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_002a;
		}
	}
	{
		// this.animator.SetTrigger("idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_3, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002a:
	{
		// else if(code == 3)
		int32_t L_4 = ___code0;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_003f;
		}
	}
	{
		// this.animator.SetTrigger("jump");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_5, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003f:
	{
		// else if (code == 4)
		int32_t L_6 = ___code0;
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0053;
		}
	}
	{
		// this.animator.SetTrigger("fall");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_7, _stringLiteral7598EFBF4A029BF0B3B286271D8C3B865F7A66FA, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void GrasshopperAnimator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperAnimator_Start_mD53A8BF7D726346EA40E4F8F22B8B2AFD9B4426B (GrasshopperAnimator_t6B1D7743FFD1F235DE2FC33710CCD494BDEAEC23 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		Animation_Init_m8E1EC12415EDBAEB610CF7271089C89CD9CDA0B6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GrasshopperAnimator::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperAnimator_FixedUpdate_m0EC20B9C376F75A653238AA216B2F0CDDB0D8EAF (GrasshopperAnimator_t6B1D7743FFD1F235DE2FC33710CCD494BDEAEC23 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		Animation_Tick_m0421EA59A21E1077BE4D49370699FCA52FF758D7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GrasshopperAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperAnimator__ctor_mE615C9BC848CFACA69119DEFBC4B6D4E734AEA77 (GrasshopperAnimator_t6B1D7743FFD1F235DE2FC33710CCD494BDEAEC23 * __this, const RuntimeMethod* method)
{
	{
		Animation__ctor_mEBDE93F61306BFECB31EA0739662BDC15AB3B5D4(__this, /*hidden argument*/NULL);
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
// System.Void GrasshopperController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController_Start_m21ACD513D782B94BDC5F731D7F56C8F4CACAFB8D (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		GrasshopperController_Init_m93E4BC272DC7FE5EA54F6F2670388673D505AB5D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GrasshopperController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController_FixedUpdate_m17BB6AC2558560A255382B66FE1E75D583668D39 (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		GrasshopperController_Tick_m700BB8045801DD63F86371A2BB6076B43BCC00AA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GrasshopperController::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController_Tick_m700BB8045801DD63F86371A2BB6076B43BCC00AA (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method)
{
	{
		// base.Tick();
		EnemyController_Tick_mCEC4C6DC7D4761CC6613B843C85AC7A3F8C0C448(__this, /*hidden argument*/NULL);
		// AnimatorMethod();
		GrasshopperController_AnimatorMethod_m5D00F9888EA03BA7E67E27DCFCD11829E672CBC8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GrasshopperController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController_Init_m93E4BC272DC7FE5EA54F6F2670388673D505AB5D (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method)
{
	{
		// base.Init();
		EnemyController_Init_m3A65060654F8A1DBFC93C9916909DA5D0B3F5D7B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GrasshopperController::AnimatorMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController_AnimatorMethod_m5D00F9888EA03BA7E67E27DCFCD11829E672CBC8 (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method)
{
	{
		// if (!Damageability.Alive)
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_0;
		L_0 = EnemyController_get_Damageability_m25609FE20A2DB85D976F14EEE918660B9A694B28_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Damageability_get_Alive_mE96F5ED945B35AABBEE387ACE46DC2D67EB23C0C_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Animation.Code = 1;
		Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * L_2;
		L_2 = EnemyController_get_Animation_mAFB8A83EF20EA5878E20D81ED896E64FDD652441_inline(__this, /*hidden argument*/NULL);
		Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline(L_2, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if (!Movement.DownBound.contactWithGround)
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_3;
		L_3 = EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline(__this, /*hidden argument*/NULL);
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_4;
		L_4 = MobMovement_get_DownBound_m5074915401741B46CA6BA9D4A7E4D0F7D2C777D5_inline(L_3, /*hidden argument*/NULL);
		bool L_5 = L_4->get_contactWithGround_5();
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		// if(Movement.GetVelocity().y>0)
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_6;
		L_6 = EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Movement_GetVelocity_m53C37B32219E0943AB5EFBB156D284E8DF5AC1CC(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_1();
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// Animation.Code = 3;
		Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * L_9;
		L_9 = EnemyController_get_Animation_mAFB8A83EF20EA5878E20D81ED896E64FDD652441_inline(__this, /*hidden argument*/NULL);
		Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline(L_9, 3, /*hidden argument*/NULL);
		return;
	}

IL_0050:
	{
		// Animation.Code = 4;
		Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * L_10;
		L_10 = EnemyController_get_Animation_mAFB8A83EF20EA5878E20D81ED896E64FDD652441_inline(__this, /*hidden argument*/NULL);
		Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline(L_10, 4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005d:
	{
		// Animation.Code = 2;
		Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * L_11;
		L_11 = EnemyController_get_Animation_mAFB8A83EF20EA5878E20D81ED896E64FDD652441_inline(__this, /*hidden argument*/NULL);
		Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline(L_11, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GrasshopperController::SetFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController_SetFlags_m65D959C09E01DDA05E98C75D7C6C4EFC46C1B542 (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method)
{
	{
		// if (dir == 0 && !Movement.OnGround())
		int32_t L_0 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB *)__this)->get_dir_10();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_1;
		L_1 = EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline(__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = MobMovement_OnGround_mD071BBC23083434CD96D76DA8C084010C9ABAD42(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Movement.goLeftFlag = true;
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_3;
		L_3 = EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline(__this, /*hidden argument*/NULL);
		L_3->set_goLeftFlag_16((bool)1);
		// }
		goto IL_0045;
	}

IL_0023:
	{
		// else if (dir == 1 && !Movement.OnGround())
		int32_t L_4 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB *)__this)->get_dir_10();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0045;
		}
	}
	{
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_5;
		L_5 = EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline(__this, /*hidden argument*/NULL);
		bool L_6;
		L_6 = MobMovement_OnGround_mD071BBC23083434CD96D76DA8C084010C9ABAD42(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		// Movement.goRightFlag = true;
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_7;
		L_7 = EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline(__this, /*hidden argument*/NULL);
		L_7->set_goRightFlag_17((bool)1);
	}

IL_0045:
	{
		// if (Movement.OnGround()&&GetjumpCooldown().Control())
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_8;
		L_8 = EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline(__this, /*hidden argument*/NULL);
		bool L_9;
		L_9 = MobMovement_OnGround_mD071BBC23083434CD96D76DA8C084010C9ABAD42(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_10;
		L_10 = GrasshopperController_GetjumpCooldown_m6A6A5193F6A46107FA1E9EC340F5C33CC8FE4AF4(__this, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// Movement.JumpFlag = true;
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_12;
		L_12 = EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline(__this, /*hidden argument*/NULL);
		MobMovement_set_JumpFlag_m7C4DFAE77E321C1D096908E1FAA64518286A3A71_inline(L_12, (bool)1, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// Cooldown GrasshopperController::GetjumpCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * GrasshopperController_GetjumpCooldown_m6A6A5193F6A46107FA1E9EC340F5C33CC8FE4AF4 (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (jumpCooldown == null)
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0 = __this->get_jumpCooldown_11();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// jumpCooldown = new Cooldown(jumpCD);
		float L_1 = __this->get_jumpCD_12();
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_2, L_1, /*hidden argument*/NULL);
		__this->set_jumpCooldown_11(L_2);
	}

IL_0019:
	{
		// return jumpCooldown;
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_3 = __this->get_jumpCooldown_11();
		return L_3;
	}
}
// System.Void GrasshopperController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrasshopperController__ctor_mB307D9D72B5A62E3180426E387DA417919E45212 (GrasshopperController_t9FE4966D76A71179F0D357592AF2DD97CD6A2856 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField]private float jumpCD = 1000;
		__this->set_jumpCD_12((1000.0f));
		EnemyController__ctor_m547F49905D505F962CBC708846F8E8A3B0838F70(__this, /*hidden argument*/NULL);
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
// System.Void LeftBound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftBound_Start_m401F2FC35E2AA03FA8F0BA0D0AC094BAE9CA4E66 (LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LeftBound::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftBound_Update_mD3E27EEAC947F9194EDEFA524A98EF4FEC61FD33 (LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LeftBound::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftBound_OnTriggerEnter2D_mEB3403D4E0F34FAD9EB6F49F33DEB12383FED010 (LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" )
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// contactWithGround = true;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)1);
	}

IL_002c:
	{
		// if (!contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		// contacts.Add(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_15);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void LeftBound::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftBound_OnTriggerStay2D_m6500FC9DA22F0D6A55A107453E172E6C6E650A9A (LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// contactWithGround = true;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)1);
	}

IL_002c:
	{
		// if (!contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		// contacts.Add(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_15);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void LeftBound::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftBound_OnTriggerExit2D_m25D0601EA8A59F92AC215F4D7FB995FBE51A71EB (LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" )
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// contactWithGround = false;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)0);
	}

IL_002c:
	{
		// if (contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_10);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// contacts.Remove(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(34 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_12, L_15);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void LeftBound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftBound__ctor_mED7A5153C4576C6A6BCCEC9E0FB12778034AA85B (LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1 * __this, const RuntimeMethod* method)
{
	{
		Bound__ctor_m985536D2D5F293A9894CC0B6EFF7B77AA4C2FDFA(__this, /*hidden argument*/NULL);
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
// System.Void Menu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StartGame_m6B2E9CA9AE74433EA78DE12BADAAFA800B15DFC0 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ExitGame_mB22BA3021E594AA4F1EBA69FE4C845D31A6D1ECF (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Apply_mEA4565AA8E18852DEA0E3ABE6012CE0CA5BF0CD4 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// options.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_options_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// mainMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_mainMenu_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Options_m5C75768711AC2FC65695448F8B2DDF314F9DAB60 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// options.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_options_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// mainMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_mainMenu_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Load_mE43D5D41672108EF7EA8D4725A174589DF974350 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF46270501A8D06F28173E0692A7138A32864AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(" not working ");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9BF46270501A8D06F28173E0692A7138A32864AA, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MobMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_Start_m4D2065BB5C160C04541B3508311997C3F31CDDAD (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		MobMovement_Init_mDBD14905E3B1700FA121DAE25B482164487AD5D2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MobMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_FixedUpdate_m46485B05366A98757D68AB48029CD6E14330A8B1 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		MobMovement_Tick_mC3D887CF36E7126A3D5AE83FFC1B89CFA1C02382(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MobMovement::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_Init_mDBD14905E3B1700FA121DAE25B482164487AD5D2 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisDownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11_mE21CD900D34F29B952C778EACFBF3204C6FB3766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisLeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1_mB3D1743A50515737D65562203B24D64EACDC2928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD_mAC99B8244B20D6053B5BB0DCCF40FF7FF9F36366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisUpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5_mC2362DEE1AC867B8A0DF1232D55C98A21AB6C160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Init();
		Movement_Init_m8EC89489C359EC379BA5BFD04AB0317F30B1B97A(__this, /*hidden argument*/NULL);
		// jumpCooldown = new Cooldown(jumpCD);
		float L_0 = __this->get_jumpCD_13();
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_1 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_1, L_0, /*hidden argument*/NULL);
		__this->set_jumpCooldown_23(L_1);
		// leftBound = GetComponentInChildren<LeftBound>();
		LeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1 * L_2;
		L_2 = Component_GetComponentInChildren_TisLeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1_mB3D1743A50515737D65562203B24D64EACDC2928(__this, /*hidden argument*/Component_GetComponentInChildren_TisLeftBound_t6D0A6DD22D2759AB4F635A8D60C5663831D2ACC1_mB3D1743A50515737D65562203B24D64EACDC2928_RuntimeMethod_var);
		__this->set_leftBound_19(L_2);
		// rightBound = GetComponentInChildren<RightBound>();
		RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD * L_3;
		L_3 = Component_GetComponentInChildren_TisRightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD_mAC99B8244B20D6053B5BB0DCCF40FF7FF9F36366(__this, /*hidden argument*/Component_GetComponentInChildren_TisRightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD_mAC99B8244B20D6053B5BB0DCCF40FF7FF9F36366_RuntimeMethod_var);
		__this->set_rightBound_20(L_3);
		// upBound = GetComponentInChildren<UpBound>();
		UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5 * L_4;
		L_4 = Component_GetComponentInChildren_TisUpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5_mC2362DEE1AC867B8A0DF1232D55C98A21AB6C160(__this, /*hidden argument*/Component_GetComponentInChildren_TisUpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5_mC2362DEE1AC867B8A0DF1232D55C98A21AB6C160_RuntimeMethod_var);
		__this->set_upBound_21(L_4);
		// downBound = GetComponentInChildren<DownBound>();
		DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * L_5;
		L_5 = Component_GetComponentInChildren_TisDownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11_mE21CD900D34F29B952C778EACFBF3204C6FB3766(__this, /*hidden argument*/Component_GetComponentInChildren_TisDownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11_mE21CD900D34F29B952C778EACFBF3204C6FB3766_RuntimeMethod_var);
		__this->set_downBound_22(L_5);
		// }
		return;
	}
}
// System.Void MobMovement::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_Tick_mC3D887CF36E7126A3D5AE83FFC1B89CFA1C02382 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// Move();
		MobMovement_Move_m41E8F6FC82F9A3FCBC905BFF33BF9B1B0D65603A(__this, /*hidden argument*/NULL);
		// base.Tick();
		Movement_Tick_mFE5158FDDD2753EBC96182C2CB648DA981245D7F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MobMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_Move_m41E8F6FC82F9A3FCBC905BFF33BF9B1B0D65603A (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// if (!OnGround() && (leftBound.contactWithGround || rightBound.contactWithGround))
		bool L_0;
		L_0 = MobMovement_OnGround_mD071BBC23083434CD96D76DA8C084010C9ABAD42(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_00de;
		}
	}
	{
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_1 = __this->get_leftBound_19();
		bool L_2 = L_1->get_contactWithGround_5();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_3 = __this->get_rightBound_20();
		bool L_4 = L_3->get_contactWithGround_5();
		if (!L_4)
		{
			goto IL_00de;
		}
	}

IL_0028:
	{
		// if(GetVelocity().y==0 && leftBound.contactWithGround)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Movement_GetVelocity_m53C37B32219E0943AB5EFBB156D284E8DF5AC1CC(__this, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_7 = __this->get_leftBound_19();
		bool L_8 = L_7->get_contactWithGround_5();
		if (!L_8)
		{
			goto IL_0083;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x + fixer2, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		float L_13 = __this->get_fixer2_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_17), ((float)il2cpp_codegen_add((float)L_12, (float)L_13)), L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_17, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_18, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// if (GetVelocity().y == 0 && rightBound.contactWithGround)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Movement_GetVelocity_m53C37B32219E0943AB5EFBB156D284E8DF5AC1CC(__this, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_1();
		if ((!(((float)L_20) == ((float)(0.0f)))))
		{
			goto IL_00de;
		}
	}
	{
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_21 = __this->get_rightBound_20();
		bool L_22 = L_21->get_contactWithGround_5();
		if (!L_22)
		{
			goto IL_00de;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x - fixer2, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		float L_27 = __this->get_fixer2_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_31), ((float)il2cpp_codegen_subtract((float)L_26, (float)L_27)), L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_31, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_23, L_32, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// if (!OnGround())
		bool L_33;
		L_33 = MobMovement_OnGround_mD071BBC23083434CD96D76DA8C084010C9ABAD42(__this, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00fa;
		}
	}
	{
		// ExtraFriction = 1.4f * friction;
		float L_34 = ((Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C *)__this)->get_friction_7();
		Movement_set_ExtraFriction_mC121CF49197FF575D5EEAE572E050EFF718F5D00_inline(__this, ((float)il2cpp_codegen_multiply((float)(1.39999998f), (float)L_34)), /*hidden argument*/NULL);
		// }
		goto IL_0105;
	}

IL_00fa:
	{
		// ExtraFriction = 0;
		Movement_set_ExtraFriction_mC121CF49197FF575D5EEAE572E050EFF718F5D00_inline(__this, (0.0f), /*hidden argument*/NULL);
	}

IL_0105:
	{
		// if (goLeftFlag)
		bool L_35 = __this->get_goLeftFlag_16();
		if (!L_35)
		{
			goto IL_0113;
		}
	}
	{
		// GoLeft();
		MobMovement_GoLeft_mF9CD487BE2ECCF5139B7AEC2300E5A3E944F24F5(__this, /*hidden argument*/NULL);
	}

IL_0113:
	{
		// if (goRightFlag)
		bool L_36 = __this->get_goRightFlag_17();
		if (!L_36)
		{
			goto IL_0121;
		}
	}
	{
		// GoRight();
		MobMovement_GoRight_m64E4CAADC938D3575DF98B437E8DC4256CC57C3F(__this, /*hidden argument*/NULL);
	}

IL_0121:
	{
		// if (CanJump())
		bool L_37;
		L_37 = MobMovement_CanJump_m43BCC9F792B2EAA782AFE9FBF3B21CE54BA4DCA8(__this, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_012f;
		}
	}
	{
		// Jump();
		MobMovement_Jump_mDE7B1B2A53AD01AE2F466441286BDA0BB76983E6(__this, /*hidden argument*/NULL);
	}

IL_012f:
	{
		// ArrangeScale(direction);
		int32_t L_38 = __this->get_direction_15();
		MobMovement_ArrangeScale_mD82AD34DF29167802AE25A1721A3B1F8BC5F805E(__this, L_38, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MobMovement::GoLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_GoLeft_mF9CD487BE2ECCF5139B7AEC2300E5A3E944F24F5 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// if (leftBound.contactWithGround)
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_leftBound_19();
		bool L_1 = L_0->get_contactWithGround_5();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// goLeftFlag = false;
		__this->set_goLeftFlag_16((bool)0);
		// direction = 0;
		__this->set_direction_15(0);
		// return;
		return;
	}

IL_001c:
	{
		// if (GetVelocity().x > -minSpeed)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Movement_GetVelocity_m53C37B32219E0943AB5EFBB156D284E8DF5AC1CC(__this, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		float L_4 = __this->get_minSpeed_14();
		if ((!(((float)L_3) > ((float)((-L_4))))))
		{
			goto IL_003d;
		}
	}
	{
		// GiveVelocity(0,minSpeed);
		float L_5 = __this->get_minSpeed_14();
		Movement_GiveVelocity_m313055286CB88C72E085024E66CD491C8B1D7F14(__this, 0, L_5, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// GiveForce(0,this.acceleration);
		float L_6 = ((Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C *)__this)->get_acceleration_5();
		Movement_GiveForce_m7EDA945AAD4DAD6149B0E55FB963577CFF444D4F(__this, 0, L_6, /*hidden argument*/NULL);
		// direction = 0;
		__this->set_direction_15(0);
		// goLeftFlag = false;
		__this->set_goLeftFlag_16((bool)0);
		// }
		return;
	}
}
// System.Void MobMovement::GoRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_GoRight_m64E4CAADC938D3575DF98B437E8DC4256CC57C3F (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// if (rightBound.contactWithGround)
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_rightBound_20();
		bool L_1 = L_0->get_contactWithGround_5();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// goRightFlag = false;
		__this->set_goRightFlag_17((bool)0);
		// direction = 1;
		__this->set_direction_15(1);
		// return;
		return;
	}

IL_001c:
	{
		// if (GetVelocity().x < minSpeed)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Movement_GetVelocity_m53C37B32219E0943AB5EFBB156D284E8DF5AC1CC(__this, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		float L_4 = __this->get_minSpeed_14();
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_003c;
		}
	}
	{
		// GiveVelocity(1, minSpeed);
		float L_5 = __this->get_minSpeed_14();
		Movement_GiveVelocity_m313055286CB88C72E085024E66CD491C8B1D7F14(__this, 1, L_5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// GiveForce(1, this.acceleration);
		float L_6 = ((Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C *)__this)->get_acceleration_5();
		Movement_GiveForce_m7EDA945AAD4DAD6149B0E55FB963577CFF444D4F(__this, 1, L_6, /*hidden argument*/NULL);
		// direction = 1;
		__this->set_direction_15(1);
		// goRightFlag = false;
		__this->set_goRightFlag_17((bool)0);
		// }
		return;
	}
}
// System.Boolean MobMovement::CanJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobMovement_CanJump_m43BCC9F792B2EAA782AFE9FBF3B21CE54BA4DCA8 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// if ((jumpFlag && this.OnGround() && GetJumpCooldown().Control()))
		bool L_0 = __this->get_jumpFlag_18();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = MobMovement_OnGround_mD071BBC23083434CD96D76DA8C084010C9ABAD42(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2;
		L_2 = MobMovement_GetJumpCooldown_m43ACFE0FE062EE7F6146125532738095AAC79EA5(__this, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// secondJump = true;
		__this->set_secondJump_24((bool)1);
		// return true;
		return (bool)1;
	}

IL_0026:
	{
		// else if(secondJump && jumpFlag && GetJumpCooldown().Control()) {
		bool L_4 = __this->get_secondJump_24();
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = __this->get_jumpFlag_18();
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_6;
		L_6 = MobMovement_GetJumpCooldown_m43ACFE0FE062EE7F6146125532738095AAC79EA5(__this, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// secondJump = false;
		__this->set_secondJump_24((bool)0);
		// return true;
		return (bool)1;
	}

IL_004c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void MobMovement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_Jump_mDE7B1B2A53AD01AE2F466441286BDA0BB76983E6 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// if (GetVelocity().y==0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Movement_GetVelocity_m53C37B32219E0943AB5EFBB156D284E8DF5AC1CC(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_y_1();
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// SetVelocity(3,this.jump);
		float L_2 = __this->get_jump_12();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(__this, 3, L_2, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_0021:
	{
		// SetVelocity(3,this.jump / 1.2f);
		float L_3 = __this->get_jump_12();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(__this, 3, ((float)((float)L_3/(float)(1.20000005f))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		// jumpFlag = false;
		__this->set_jumpFlag_18((bool)0);
		// }
		return;
	}
}
// System.Void MobMovement::ArrangeScale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_ArrangeScale_mD82AD34DF29167802AE25A1721A3B1F8BC5F805E (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, int32_t ___direction0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (direction == 0)
		int32_t L_0 = ___direction0;
		if (L_0)
		{
			goto IL_00b4;
		}
	}
	{
		// if (this.transform.localScale.x > 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0168;
		}
	}
	{
		// this.transform.localScale = new Vector2(-1 * this.transform.localScale.x, this.transform.localScale.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_7)), L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_11, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_4, L_12, /*hidden argument*/NULL);
		// Vector2 posLeft = this.leftBound.transform.position;
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_13 = __this->get_leftBound_19();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// Vector2 posRight = this.rightBound.transform.position;
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_17 = __this->get_rightBound_20();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// this.leftBound.transform.position = posRight;
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_21 = __this->get_leftBound_19();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_23, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_24, /*hidden argument*/NULL);
		// this.rightBound.transform.position = posLeft;
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_25 = __this->get_rightBound_20();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_27, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_28, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b4:
	{
		// else if (direction == 1)
		int32_t L_29 = ___direction0;
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_0168;
		}
	}
	{
		// if (this.transform.localScale.x < 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		if ((!(((float)L_32) < ((float)(0.0f)))))
		{
			goto IL_0168;
		}
	}
	{
		// this.transform.localScale = new Vector2(-1 * this.transform.localScale.x, this.transform.localScale.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_40), ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_36)), L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_40, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_33, L_41, /*hidden argument*/NULL);
		// Vector2 posLeft = this.leftBound.transform.position;
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_42 = __this->get_leftBound_19();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_44, /*hidden argument*/NULL);
		V_2 = L_45;
		// Vector2 posRight = this.rightBound.transform.position;
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_46 = __this->get_rightBound_20();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_48, /*hidden argument*/NULL);
		V_3 = L_49;
		// this.leftBound.transform.position = posRight;
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_50 = __this->get_leftBound_19();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_52, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_51, L_53, /*hidden argument*/NULL);
		// this.rightBound.transform.position = posLeft;
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_54 = __this->get_rightBound_20();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_54, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_56, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_55, L_57, /*hidden argument*/NULL);
	}

IL_0168:
	{
		// }
		return;
	}
}
// System.Boolean MobMovement::OnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobMovement_OnGround_mD071BBC23083434CD96D76DA8C084010C9ABAD42 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// return downBound.contactWithGround;
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_downBound_22();
		bool L_1 = L_0->get_contactWithGround_5();
		return L_1;
	}
}
// System.Boolean MobMovement::get_GoLeftFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobMovement_get_GoLeftFlag_m81DE6E792DAF7BFBD817CB066AA0780DEB17DA73 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public bool GoLeftFlag { get => goLeftFlag; set => goLeftFlag = value; }
		bool L_0 = __this->get_goLeftFlag_16();
		return L_0;
	}
}
// System.Void MobMovement::set_GoLeftFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_set_GoLeftFlag_m6F93C69BC5314C690742B4BC520172A9E61E54D3 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GoLeftFlag { get => goLeftFlag; set => goLeftFlag = value; }
		bool L_0 = ___value0;
		__this->set_goLeftFlag_16(L_0);
		return;
	}
}
// System.Boolean MobMovement::get_GoRightFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobMovement_get_GoRightFlag_mD4EC24B39E2E113B7FC7151EC401565C34C81C57 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public bool GoRightFlag { get => goRightFlag; set => goRightFlag = value; }
		bool L_0 = __this->get_goRightFlag_17();
		return L_0;
	}
}
// System.Void MobMovement::set_GoRightFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_set_GoRightFlag_m146A69A365F267C01D0614666A8B7D9C7CA500D5 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GoRightFlag { get => goRightFlag; set => goRightFlag = value; }
		bool L_0 = ___value0;
		__this->set_goRightFlag_17(L_0);
		return;
	}
}
// System.Boolean MobMovement::get_JumpFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobMovement_get_JumpFlag_m9F659E7161BD33F74C43DB8813D5E2332CD01A4A (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public bool JumpFlag { get => jumpFlag; set => jumpFlag = value; }
		bool L_0 = __this->get_jumpFlag_18();
		return L_0;
	}
}
// System.Void MobMovement::set_JumpFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_set_JumpFlag_m7C4DFAE77E321C1D096908E1FAA64518286A3A71 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool JumpFlag { get => jumpFlag; set => jumpFlag = value; }
		bool L_0 = ___value0;
		__this->set_jumpFlag_18(L_0);
		return;
	}
}
// System.Int32 MobMovement::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MobMovement_get_Direction_m78D550873829FA8049B2885471559D223771ACBF (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public int Direction { get => direction; set => direction = value; }
		int32_t L_0 = __this->get_direction_15();
		return L_0;
	}
}
// System.Void MobMovement::set_Direction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_set_Direction_mD2E99B5675C5FD75A2A4FFD3AB381DCB3DA9A5D8 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Direction { get => direction; set => direction = value; }
		int32_t L_0 = ___value0;
		__this->set_direction_15(L_0);
		return;
	}
}
// Bound MobMovement::get_UpBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_UpBound_mCC28D16220E184550ADBC3B22E9903B7A4F1ED25 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public Bound UpBound { get => upBound; set => upBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_upBound_21();
		return L_0;
	}
}
// System.Void MobMovement::set_UpBound(Bound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_set_UpBound_m350B47DF8C4E765A113A90531A2C5BF5065F51EF (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * ___value0, const RuntimeMethod* method)
{
	{
		// public Bound UpBound { get => upBound; set => upBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = ___value0;
		__this->set_upBound_21(L_0);
		return;
	}
}
// Bound MobMovement::get_RightBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_RightBound_m012BD3DF4D1A36FEF81A2D26EBFCD07D6E6EBEA7 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public Bound RightBound { get => rightBound; set => rightBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_rightBound_20();
		return L_0;
	}
}
// System.Void MobMovement::set_RightBound(Bound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_set_RightBound_mF7E28AA306B47C74550A65CF492536E0E91F77C1 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * ___value0, const RuntimeMethod* method)
{
	{
		// public Bound RightBound { get => rightBound; set => rightBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = ___value0;
		__this->set_rightBound_20(L_0);
		return;
	}
}
// Bound MobMovement::get_LeftBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_LeftBound_m5016CAE4264231819A64822610D414DBC2EC65AA (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public Bound LeftBound { get => leftBound; set => leftBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_leftBound_19();
		return L_0;
	}
}
// System.Void MobMovement::set_LeftBound(Bound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_set_LeftBound_m54D48C7A403AA7EDA4A304F215DD976F1D6F21E9 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * ___value0, const RuntimeMethod* method)
{
	{
		// public Bound LeftBound { get => leftBound; set => leftBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = ___value0;
		__this->set_leftBound_19(L_0);
		return;
	}
}
// Bound MobMovement::get_DownBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_DownBound_m5074915401741B46CA6BA9D4A7E4D0F7D2C777D5 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public Bound DownBound { get => downBound; set => downBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_downBound_22();
		return L_0;
	}
}
// System.Void MobMovement::set_DownBound(Bound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement_set_DownBound_mCA9CAD2AED93D26275927A5A917220FDB6D0858D (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * ___value0, const RuntimeMethod* method)
{
	{
		// public Bound DownBound { get => downBound; set => downBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = ___value0;
		__this->set_downBound_22(L_0);
		return;
	}
}
// Cooldown MobMovement::GetJumpCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * MobMovement_GetJumpCooldown_m43ACFE0FE062EE7F6146125532738095AAC79EA5 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (jumpCooldown == null)
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0 = __this->get_jumpCooldown_23();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// jumpCooldown = new Cooldown(jumpCD);
		float L_1 = __this->get_jumpCD_13();
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_2, L_1, /*hidden argument*/NULL);
		__this->set_jumpCooldown_23(L_2);
	}

IL_0019:
	{
		// return jumpCooldown;
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_3 = __this->get_jumpCooldown_23();
		return L_3;
	}
}
// System.Void MobMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobMovement__ctor_m0FF9CC37BEFC640E798BD2FF68CA8D4284CF8A68 (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField]private float jumpCD = 300; // cannot change dynamic
		__this->set_jumpCD_13((300.0f));
		// private float fixer2=0.02f;
		__this->set_fixer2_25((0.0199999996f));
		Movement__ctor_mEA4800F5BE98787C0ACA8CDF85918B56DE62A2AB(__this, /*hidden argument*/NULL);
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
// System.Void Movement::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Init_m8EC89489C359EC379BA5BFD04AB0317F30B1B97A (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody2D = this.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rigidbody2D_10(L_0);
		// transform = this.GetComponent<Transform>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		__this->set_transform_11(L_1);
		// }
		return;
	}
}
// System.Void Movement::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Tick_mFE5158FDDD2753EBC96182C2CB648DA981245D7F (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// PhysicFunc();
		Movement_PhysicFunc_m93FF6E12BB9468ACCE6C43D17C3072DC9A66590E(__this, /*hidden argument*/NULL);
		// ControlMaxVelocity();
		Movement_ControlMaxVelocity_m9E01CA1FDF42BED5C23C4997E3AC1BF15360F1C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Movement::PhysicFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_PhysicFunc_m93FF6E12BB9468ACCE6C43D17C3072DC9A66590E (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// SetVelocityAb(3,rigidbody2D.velocity.y-gravity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rigidbody2D_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_1();
		float L_3 = __this->get_gravity_6();
		Movement_SetVelocityAb_mA5EEAAC58FE0E9C861D238590FD956A2AC10C758(__this, 3, ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		// if (Mathf.Abs(rigidbody2D.velocity.x) > 0.1f)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rigidbody2D_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_0();
		float L_7;
		L_7 = fabsf(L_6);
		if ((!(((float)L_7) > ((float)(0.100000001f)))))
		{
			goto IL_00d5;
		}
	}
	{
		// if (rigidbody2D.velocity.x > 0)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = __this->get_rigidbody2D_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_0();
		if ((!(((float)L_10) > ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// if (rigidbody2D.velocity.x <= friction+extraFriction)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = __this->get_rigidbody2D_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		float L_14 = __this->get_friction_7();
		float L_15 = __this->get_extraFriction_8();
		if ((!(((float)L_13) <= ((float)((float)il2cpp_codegen_add((float)L_14, (float)L_15))))))
		{
			goto IL_0080;
		}
	}
	{
		// SetVelocityAb(0, 0);
		Movement_SetVelocityAb_mA5EEAAC58FE0E9C861D238590FD956A2AC10C758(__this, 0, (0.0f), /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		// GiveVelocityAb(0, friction + extraFriction);
		float L_16 = __this->get_friction_7();
		float L_17 = __this->get_extraFriction_8();
		Movement_GiveVelocityAb_mBE8F0366F1B2F09BC12F010D1893E1851B0FCF83(__this, 0, ((float)il2cpp_codegen_add((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0095:
	{
		// if (rigidbody2D.velocity.x >= friction + extraFriction)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_18 = __this->get_rigidbody2D_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_0();
		float L_21 = __this->get_friction_7();
		float L_22 = __this->get_extraFriction_8();
		if ((!(((float)L_20) >= ((float)((float)il2cpp_codegen_add((float)L_21, (float)L_22))))))
		{
			goto IL_00c1;
		}
	}
	{
		// SetVelocityAb(1, 0);
		Movement_SetVelocityAb_mA5EEAAC58FE0E9C861D238590FD956A2AC10C758(__this, 1, (0.0f), /*hidden argument*/NULL);
		return;
	}

IL_00c1:
	{
		// GiveVelocityAb(1, friction + extraFriction);
		float L_23 = __this->get_friction_7();
		float L_24 = __this->get_extraFriction_8();
		Movement_GiveVelocityAb_mBE8F0366F1B2F09BC12F010D1893E1851B0FCF83(__this, 1, ((float)il2cpp_codegen_add((float)L_23, (float)L_24)), /*hidden argument*/NULL);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void Movement::ControlMaxVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_ControlMaxVelocity_m9E01CA1FDF42BED5C23C4997E3AC1BF15360F1C0 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.GetComponent<Rigidbody2D>().velocity.x < -maxVelocity)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_0();
		float L_3 = __this->get_maxVelocity_4();
		if ((!(((float)L_2) < ((float)((-L_3))))))
		{
			goto IL_0028;
		}
	}
	{
		// SetVelocity(0, maxVelocity);
		float L_4 = __this->get_maxVelocity_4();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(__this, 0, L_4, /*hidden argument*/NULL);
		// }
		goto IL_004d;
	}

IL_0028:
	{
		// else if (this.GetComponent<Rigidbody2D>().velocity.x > maxVelocity)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5;
		L_5 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_0();
		float L_8 = __this->get_maxVelocity_4();
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_004d;
		}
	}
	{
		// SetVelocity(1, maxVelocity);
		float L_9 = __this->get_maxVelocity_4();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(__this, 1, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (this.GetComponent<Rigidbody2D>().velocity.y < -maxVelocity)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_1();
		float L_13 = __this->get_maxVelocity_4();
		if ((!(((float)L_12) < ((float)((-L_13))))))
		{
			goto IL_0074;
		}
	}
	{
		// SetVelocity(2, maxVelocity);
		float L_14 = __this->get_maxVelocity_4();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(__this, 2, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// else if (this.GetComponent<Rigidbody2D>().velocity.y > maxVelocity)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15;
		L_15 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_1();
		float L_18 = __this->get_maxVelocity_4();
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_0099;
		}
	}
	{
		// SetVelocity(3, maxVelocity);
		float L_19 = __this->get_maxVelocity_4();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(__this, 3, L_19, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void Movement::GiveVelocity(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_GiveVelocity_m313055286CB88C72E085024E66CD491C8B1D7F14 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___velocity1, const RuntimeMethod* method)
{
	{
		// if (direction == 0)
		int32_t L_0 = ___direction0;
		if (L_0)
		{
			goto IL_0062;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x - fixer, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		float L_5 = __this->get_fixer_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_10, /*hidden argument*/NULL);
		// rigidbody2D.velocity += new Vector2(-velocity, 0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_12 = L_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_12, /*hidden argument*/NULL);
		float L_14 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_15), ((-L_14)), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_13, L_15, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_12, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0062:
	{
		// else if(direction == 1)
		int32_t L_17 = ___direction0;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x + fixer, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		float L_22 = __this->get_fixer_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), ((float)il2cpp_codegen_add((float)L_21, (float)L_22)), L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_26, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_27, /*hidden argument*/NULL);
		// rigidbody2D.velocity += new Vector2(velocity, 0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_28 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_29 = L_28;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_29, /*hidden argument*/NULL);
		float L_31 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_32), L_31, (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_30, L_32, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_29, L_33, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c4:
	{
		// else if(direction == 2)
		int32_t L_34 = ___direction0;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_0127;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x, transform.position.y - fixer);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_y_3();
		float L_42 = __this->get_fixer_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_43), L_38, ((float)il2cpp_codegen_subtract((float)L_41, (float)L_42)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_43, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_44, /*hidden argument*/NULL);
		// rigidbody2D.velocity += new Vector2(0, -velocity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_45 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_46 = L_45;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_46, /*hidden argument*/NULL);
		float L_48 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_49), (0.0f), ((-L_48)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_47, L_49, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_46, L_50, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0127:
	{
		// else if (direction == 3)
		int32_t L_51 = ___direction0;
		if ((!(((uint32_t)L_51) == ((uint32_t)3))))
		{
			goto IL_0189;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x, transform.position.y + fixer);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_y_3();
		float L_59 = __this->get_fixer_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_60), L_55, ((float)il2cpp_codegen_add((float)L_58, (float)L_59)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_60, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_52, L_61, /*hidden argument*/NULL);
		// rigidbody2D.velocity += new Vector2(0, velocity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_62 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_63 = L_62;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_63, /*hidden argument*/NULL);
		float L_65 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_66), (0.0f), L_65, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		L_67 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_64, L_66, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_63, L_67, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0189:
	{
		// throw new System.Exception("unknown direction");
		Exception_t * L_68 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_68, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE07A2F07AF3AE8A47350CFDD4941F5465C94F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Movement_GiveVelocity_m313055286CB88C72E085024E66CD491C8B1D7F14_RuntimeMethod_var)));
	}
}
// System.Void Movement::GiveVelocityAb(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_GiveVelocityAb_mBE8F0366F1B2F09BC12F010D1893E1851B0FCF83 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___velocity1, const RuntimeMethod* method)
{
	{
		// if (direction == 0)
		int32_t L_0 = ___direction0;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// rigidbody2D.velocity += new Vector2(-velocity, 0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_2, /*hidden argument*/NULL);
		float L_4 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), ((-L_4)), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_3, L_5, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_2, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// else if (direction == 1)
		int32_t L_7 = ___direction0;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// rigidbody2D.velocity += new Vector2(velocity, 0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = L_8;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_9, /*hidden argument*/NULL);
		float L_11 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), L_11, (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_10, L_12, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_9, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004c:
	{
		// else if (direction == 2)
		int32_t L_14 = ___direction0;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// rigidbody2D.velocity += new Vector2(0, -velocity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_16 = L_15;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_16, /*hidden argument*/NULL);
		float L_18 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_19), (0.0f), ((-L_18)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_17, L_19, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_16, L_20, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0073:
	{
		// else if (direction == 3)
		int32_t L_21 = ___direction0;
		if ((!(((uint32_t)L_21) == ((uint32_t)3))))
		{
			goto IL_0099;
		}
	}
	{
		// rigidbody2D.velocity += new Vector2(0, velocity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_22 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_23 = L_22;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_23, /*hidden argument*/NULL);
		float L_25 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), (0.0f), L_25, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_24, L_26, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_23, L_27, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0099:
	{
		// throw new System.Exception("unknown direction");
		Exception_t * L_28 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE07A2F07AF3AE8A47350CFDD4941F5465C94F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Movement_GiveVelocityAb_mBE8F0366F1B2F09BC12F010D1893E1851B0FCF83_RuntimeMethod_var)));
	}
}
// System.Void Movement::SetVelocity(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___velocity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (direction == 0)
		int32_t L_0 = ___direction0;
		if (L_0)
		{
			goto IL_0062;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x - fixer, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		float L_5 = __this->get_fixer_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_10, /*hidden argument*/NULL);
		// rigidbody2D.velocity = new Vector2(-velocity, this.GetComponent<Rigidbody2D>().velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = __this->get_rigidbody2D_10();
		float L_12 = ___velocity1;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_13;
		L_13 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((-L_12)), L_15, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_11, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0062:
	{
		// else if (direction == 1)
		int32_t L_17 = ___direction0;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x + fixer, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		float L_22 = __this->get_fixer_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), ((float)il2cpp_codegen_add((float)L_21, (float)L_22)), L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_26, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_27, /*hidden argument*/NULL);
		// rigidbody2D.velocity = new Vector2(velocity, this.GetComponent<Rigidbody2D>().velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_28 = __this->get_rigidbody2D_10();
		float L_29 = ___velocity1;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_30;
		L_30 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_33), L_29, L_32, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_28, L_33, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c4:
	{
		// else if (direction == 2)
		int32_t L_34 = ___direction0;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_0127;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x, transform.position.y - fixer);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_y_3();
		float L_42 = __this->get_fixer_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_43), L_38, ((float)il2cpp_codegen_subtract((float)L_41, (float)L_42)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_43, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_44, /*hidden argument*/NULL);
		// rigidbody2D.velocity = new Vector2(this.GetComponent<Rigidbody2D>().velocity.x, -velocity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_45 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_46;
		L_46 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_x_0();
		float L_49 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_50), L_48, ((-L_49)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_45, L_50, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0127:
	{
		// else if (direction == 3)
		int32_t L_51 = ___direction0;
		if ((!(((uint32_t)L_51) == ((uint32_t)3))))
		{
			goto IL_0189;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x, transform.position.y + fixer );
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_y_3();
		float L_59 = __this->get_fixer_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_60), L_55, ((float)il2cpp_codegen_add((float)L_58, (float)L_59)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_60, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_52, L_61, /*hidden argument*/NULL);
		// rigidbody2D.velocity = new Vector2(this.GetComponent<Rigidbody2D>().velocity.x, velocity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_62 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_63;
		L_63 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_63, /*hidden argument*/NULL);
		float L_65 = L_64.get_x_0();
		float L_66 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_67), L_65, L_66, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_62, L_67, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0189:
	{
		// throw new System.Exception("unknown direction");
		Exception_t * L_68 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_68, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE07A2F07AF3AE8A47350CFDD4941F5465C94F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012_RuntimeMethod_var)));
	}
}
// System.Void Movement::SetVelocityAb(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_SetVelocityAb_mA5EEAAC58FE0E9C861D238590FD956A2AC10C758 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___velocity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (direction == 0)
		int32_t L_0 = ___direction0;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// rigidbody2D.velocity = new Vector2(-velocity, this.GetComponent<Rigidbody2D>().velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rigidbody2D_10();
		float L_2 = ___velocity1;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((-L_2)), L_5, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_1, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// else if (direction == 1)
		int32_t L_7 = ___direction0;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// rigidbody2D.velocity = new Vector2(velocity, this.GetComponent<Rigidbody2D>().velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = __this->get_rigidbody2D_10();
		float L_9 = ___velocity1;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), L_9, L_12, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_8, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004c:
	{
		// else if (direction == 2)
		int32_t L_14 = ___direction0;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// rigidbody2D.velocity = new Vector2(this.GetComponent<Rigidbody2D>().velocity.x, -velocity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_16;
		L_16 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_0();
		float L_19 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_20), L_18, ((-L_19)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_15, L_20, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0073:
	{
		// else if (direction == 3)
		int32_t L_21 = ___direction0;
		if ((!(((uint32_t)L_21) == ((uint32_t)3))))
		{
			goto IL_0099;
		}
	}
	{
		// rigidbody2D.velocity = new Vector2(this.GetComponent<Rigidbody2D>().velocity.x, velocity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_22 = __this->get_rigidbody2D_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_23;
		L_23 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_x_0();
		float L_26 = ___velocity1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), L_25, L_26, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_22, L_27, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0099:
	{
		// throw new System.Exception("unknown direction");
		Exception_t * L_28 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE07A2F07AF3AE8A47350CFDD4941F5465C94F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Movement_SetVelocityAb_mA5EEAAC58FE0E9C861D238590FD956A2AC10C758_RuntimeMethod_var)));
	}
}
// System.Void Movement::GiveForce(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_GiveForce_m7EDA945AAD4DAD6149B0E55FB963577CFF444D4F (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, int32_t ___direction0, float ___force1, const RuntimeMethod* method)
{
	{
		// if (direction == 0)
		int32_t L_0 = ___direction0;
		if (L_0)
		{
			goto IL_0057;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x - fixer, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		float L_5 = __this->get_fixer_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_10, /*hidden argument*/NULL);
		// rigidbody2D.AddForce(new Vector2(-force, 0));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = __this->get_rigidbody2D_10();
		float L_12 = ___force1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), ((-L_12)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0057:
	{
		// else if (direction == 1)
		int32_t L_14 = ___direction0;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_00ae;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x + fixer, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		float L_19 = __this->get_fixer_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_23), ((float)il2cpp_codegen_add((float)L_18, (float)L_19)), L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_23, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_24, /*hidden argument*/NULL);
		// rigidbody2D.AddForce(new Vector2(force, 0));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get_rigidbody2D_10();
		float L_26 = ___force1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), L_26, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_25, L_27, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ae:
	{
		// else if (direction == 2)
		int32_t L_28 = ___direction0;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0106;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x, transform.position.y - fixer);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		float L_36 = __this->get_fixer_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_37), L_32, ((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_37, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_29, L_38, /*hidden argument*/NULL);
		// rigidbody2D.AddForce(new Vector2(0, -force));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_39 = __this->get_rigidbody2D_10();
		float L_40 = ___force1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_41), (0.0f), ((-L_40)), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_39, L_41, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0106:
	{
		// else if (direction == 3)
		int32_t L_42 = ___direction0;
		if ((!(((uint32_t)L_42) == ((uint32_t)3))))
		{
			goto IL_015d;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x, transform.position.y + fixer);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = __this->get_transform_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = __this->get_transform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_y_3();
		float L_50 = __this->get_fixer_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_51), L_46, ((float)il2cpp_codegen_add((float)L_49, (float)L_50)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_51, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_52, /*hidden argument*/NULL);
		// rigidbody2D.AddForce(new Vector2(0, force));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_53 = __this->get_rigidbody2D_10();
		float L_54 = ___force1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_55), (0.0f), L_54, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_53, L_55, /*hidden argument*/NULL);
		// }
		return;
	}

IL_015d:
	{
		// throw new System.Exception("unknown direction");
		Exception_t * L_56 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_56, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE07A2F07AF3AE8A47350CFDD4941F5465C94F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Movement_GiveForce_m7EDA945AAD4DAD6149B0E55FB963577CFF444D4F_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector2 Movement::GetVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Movement_GetVelocity_m53C37B32219E0943AB5EFBB156D284E8DF5AC1CC (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// return rigidbody2D.velocity;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rigidbody2D_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Rigidbody2D Movement::get_Rigidbody2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Movement_get_Rigidbody2D_m684010A7AB0FF9CEF9EDC9018D4C3899521DE4B8 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// public Rigidbody2D Rigidbody2D { get => rigidbody2D; set => rigidbody2D = value; }
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rigidbody2D_10();
		return L_0;
	}
}
// System.Void Movement::set_Rigidbody2D(UnityEngine.Rigidbody2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_set_Rigidbody2D_mF06373255A375D3E05DBC38514088CA480C9C8C1 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___value0, const RuntimeMethod* method)
{
	{
		// public Rigidbody2D Rigidbody2D { get => rigidbody2D; set => rigidbody2D = value; }
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = ___value0;
		__this->set_rigidbody2D_10(L_0);
		return;
	}
}
// System.Single Movement::get_ExtraFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Movement_get_ExtraFriction_m299ACE9CE80825660AB6BDFAEDD279311C143859 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// public float ExtraFriction { get => extraFriction; set => extraFriction = value; }
		float L_0 = __this->get_extraFriction_8();
		return L_0;
	}
}
// System.Void Movement::set_ExtraFriction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_set_ExtraFriction_mC121CF49197FF575D5EEAE572E050EFF718F5D00 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float ExtraFriction { get => extraFriction; set => extraFriction = value; }
		float L_0 = ___value0;
		__this->set_extraFriction_8(L_0);
		return;
	}
}
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mEA4800F5BE98787C0ACA8CDF85918B56DE62A2AB (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// private float fixer = 0.001f;
		__this->set_fixer_9((0.00100000005f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Pendulum::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pendulum_Start_mA95458B552FB209AB3AE8249B204383E467179DB (Pendulum_tED761124130781291E1654C57275317CF04FBFD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb2d_4(L_0);
		// movingClockwise = true;
		__this->set_movingClockwise_8((bool)1);
		// }
		return;
	}
}
// System.Void Pendulum::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pendulum_Update_m03F024A83FA5EDAC42F55463572C085DD0B8465D (Pendulum_tED761124130781291E1654C57275317CF04FBFD5 * __this, const RuntimeMethod* method)
{
	{
		// if (leftAngle > 0) {
		float L_0 = __this->get_leftAngle_6();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		// leftAngle *= -1;
		float L_1 = __this->get_leftAngle_6();
		__this->set_leftAngle_6(((float)il2cpp_codegen_multiply((float)L_1, (float)(-1.0f))));
	}

IL_001f:
	{
		// Move();
		Pendulum_Move_m8EAD3EB176D6454E40A4209DEE82BBD46E8CD6C1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pendulum::ChangeMoveDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pendulum_ChangeMoveDir_mDF733D69D577D958C29A739F507A9E3EB0F91DEE (Pendulum_tED761124130781291E1654C57275317CF04FBFD5 * __this, const RuntimeMethod* method)
{
	{
		// if (transform.rotation.z > rightAngle)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_2();
		float L_3 = __this->get_rightAngle_7();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		// movingClockwise = false;
		__this->set_movingClockwise_8((bool)0);
	}

IL_001f:
	{
		// if (transform.rotation.z < leftAngle)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_z_2();
		float L_7 = __this->get_leftAngle_6();
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// movingClockwise = true;
		__this->set_movingClockwise_8((bool)1);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Pendulum::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pendulum_Move_m8EAD3EB176D6454E40A4209DEE82BBD46E8CD6C1 (Pendulum_tED761124130781291E1654C57275317CF04FBFD5 * __this, const RuntimeMethod* method)
{
	{
		// ChangeMoveDir();
		Pendulum_ChangeMoveDir_mDF733D69D577D958C29A739F507A9E3EB0F91DEE(__this, /*hidden argument*/NULL);
		// if (movingClockwise)
		bool L_0 = __this->get_movingClockwise_8();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// rb2d.angularVelocity = moveSpeed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb2d_4();
		float L_2 = __this->get_moveSpeed_5();
		Rigidbody2D_set_angularVelocity_m53F03D07251B600A01A05A27F16D2D8C0D3C5A66(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// if (!movingClockwise)
		bool L_3 = __this->get_movingClockwise_8();
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		// rb2d.angularVelocity = -1 * moveSpeed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rb2d_4();
		float L_5 = __this->get_moveSpeed_5();
		Rigidbody2D_set_angularVelocity_m53F03D07251B600A01A05A27F16D2D8C0D3C5A66(L_4, ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_5)), /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Pendulum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pendulum__ctor_m64F77990FEA1597D81DC9E3C0BB9870ADD39ED67 (Pendulum_tED761124130781291E1654C57275317CF04FBFD5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_Start_mB4F3F162C4F777E436706B3008561F22FE135429 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		Animation_Init_m8E1EC12415EDBAEB610CF7271089C89CD9CDA0B6(__this, /*hidden argument*/NULL);
		// playerController = GetComponent<PlayerController>();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0;
		L_0 = Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424(__this, /*hidden argument*/Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m2611A14D8742EC0C7500F70F3A886EE3EB823424_RuntimeMethod_var);
		__this->set_playerController_6(L_0);
		// }
		return;
	}
}
// System.Void PlayerAnimation::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_FixedUpdate_m0D0CE90B2B518374FACD3CF49DB0897ECF16A935 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		Animation_Tick_m0421EA59A21E1077BE4D49370699FCA52FF758D7(__this, /*hidden argument*/NULL);
		// if (playerController.Damageability.damagedFlag)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0 = __this->get_playerController_6();
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_1;
		L_1 = PlayerController_get_Damageability_mDB3A0FE7A4BD99EC6379ED9F412C04CDEAEE401F_inline(L_0, /*hidden argument*/NULL);
		bool L_2 = ((Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 *)L_1)->get_damagedFlag_7();
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Blink();
		PlayerAnimation_Blink_m2A51BE55249DC95894226E61D77CF06F95F56525(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// Cooldown PlayerAnimation::GetBlinkCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * PlayerAnimation_GetBlinkCooldown_mC52D859982C2648CD879F999E7D8C86AABDBCF41 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (blinkCooldown == null)
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0 = __this->get_blinkCooldown_7();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// blinkCooldown = new Cooldown(1000);
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_1 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_1, (1000.0f), /*hidden argument*/NULL);
		__this->set_blinkCooldown_7(L_1);
	}

IL_0018:
	{
		// return blinkCooldown;
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2 = __this->get_blinkCooldown_7();
		return L_2;
	}
}
// System.Void PlayerAnimation::Blink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_Blink_m2A51BE55249DC95894226E61D77CF06F95F56525 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GetBlinkCooldown().Control())
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0;
		L_0 = PlayerAnimation_GetBlinkCooldown_mC52D859982C2648CD879F999E7D8C86AABDBCF41(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		// GetComponent<SpriteRenderer>().color = new Color(1f, 0f, 0f, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0032:
	{
		// blinkCooldown = null;
		__this->set_blinkCooldown_7((Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)NULL);
		// GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_4, L_5, /*hidden argument*/NULL);
		// playerController.Damageability.damagedFlag = false;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_6 = __this->get_playerController_6();
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_7;
		L_7 = PlayerController_get_Damageability_mDB3A0FE7A4BD99EC6379ED9F412C04CDEAEE401F_inline(L_6, /*hidden argument*/NULL);
		((Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 *)L_7)->set_damagedFlag_7((bool)0);
		// }
		return;
	}
}
// System.Void PlayerAnimation::AnimatorContor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_AnimatorContor_m39A07B99ECCFDAB3831AA7BE65F77FD6AC15C19C (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, int32_t ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(code == 4)
		int32_t L_0 = ___code0;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0045;
		}
	}
	{
		// this.animator.ResetTrigger("idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_1, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, /*hidden argument*/NULL);
		// this.animator.ResetTrigger("run");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_2, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, /*hidden argument*/NULL);
		// this.animator.ResetTrigger("jump");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_3, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, /*hidden argument*/NULL);
		// this.animator.SetTrigger("hurt");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_4, _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0045:
	{
		// else if (code == 2)
		int32_t L_5 = ___code0;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_008a;
		}
	}
	{
		// this.animator.ResetTrigger("idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_6, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, /*hidden argument*/NULL);
		// this.animator.ResetTrigger("run");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_7, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, /*hidden argument*/NULL);
		// this.animator.SetTrigger("jump");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_8, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, /*hidden argument*/NULL);
		// this.animator.ResetTrigger("hurt");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_9, _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008a:
	{
		// else if (code == 1)
		int32_t L_10 = ___code0;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_00cf;
		}
	}
	{
		// this.animator.ResetTrigger("idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_11, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, /*hidden argument*/NULL);
		// this.animator.SetTrigger("run");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_12, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, /*hidden argument*/NULL);
		// this.animator.ResetTrigger("jump");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_13, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, /*hidden argument*/NULL);
		// this.animator.ResetTrigger("hurt");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_14, _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00cf:
	{
		// else if (code == 0)
		int32_t L_15 = ___code0;
		if (L_15)
		{
			goto IL_0112;
		}
	}
	{
		// this.animator.SetTrigger("idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_16 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_16, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, /*hidden argument*/NULL);
		// this.animator.ResetTrigger("run");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_17, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, /*hidden argument*/NULL);
		// this.animator.ResetTrigger("jump");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_18, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, /*hidden argument*/NULL);
		// this.animator.ResetTrigger("hurt");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = ((Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 *)__this)->get_animator_4();
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_19, _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C, /*hidden argument*/NULL);
	}

IL_0112:
	{
		// }
		return;
	}
}
// System.Void PlayerAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation__ctor_m6712BFFFBAA031003247E1E6F34C1D9C197CF268 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method)
{
	{
		Animation__ctor_mEBDE93F61306BFECB31EA0739662BDC15AB3B5D4(__this, /*hidden argument*/NULL);
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
// System.Void PlayerAttack::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAttack_Init_m36721479630CBA6D40D0FB2456E90C1D4820F158 (PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisDownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11_mE21CD900D34F29B952C778EACFBF3204C6FB3766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Init();
		Attack_Init_m6784A2AC26AB22EC1D565DA54E21120182E6EBCD(__this, /*hidden argument*/NULL);
		// downBound = GetComponentInChildren<DownBound>();
		DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * L_0;
		L_0 = Component_GetComponentInChildren_TisDownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11_mE21CD900D34F29B952C778EACFBF3204C6FB3766(__this, /*hidden argument*/Component_GetComponentInChildren_TisDownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11_mE21CD900D34F29B952C778EACFBF3204C6FB3766_RuntimeMethod_var);
		__this->set_downBound_11(L_0);
		// playerMovement = GetComponent<PlayerMovement>();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1;
		L_1 = Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C(__this, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		__this->set_playerMovement_12(L_1);
		// }
		return;
	}
}
// System.Void PlayerAttack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAttack_Start_mB5284599B58115B7632C518565D74319F6A7588C (PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		PlayerAttack_Init_m36721479630CBA6D40D0FB2456E90C1D4820F158(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerAttack::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAttack_FixedUpdate_mA8C4569CF878B257A6A53F78257FD1528E048D88 (PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		Attack_Tick_mE0CD86B2FCB2DC941D4502E527B5348AD1C8E991(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerAttack::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAttack_OnTriggerStay2D_mD25DCC699F4D6B6713E8DD1F628A21B0A76ABD26 (PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * V_1 = NULL;
	{
		// if (Constants.ContainsList(Constants.GetPlayerGiveDamage(),downBound.contacts))
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0;
		L_0 = Constants_GetPlayerGiveDamage_m7343694332AA31351E235E836FE65B255F512710(/*hidden argument*/NULL);
		DownBound_t0AC195E4304222BACB95EE7609EBE62DB1397F11 * L_1 = __this->get_downBound_11();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_2 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)L_1)->get_contacts_4();
		bool L_3;
		L_3 = Constants_ContainsList_mA1FFB129B1B1B2AC4F4E465D8E9D6A4E5DC099B4(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		// string tag = collision.gameObject.tag;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (Constants.GetPlayerGiveDamage().Contains(tag))
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7;
		L_7 = Constants_GetPlayerGiveDamage_m7343694332AA31351E235E836FE65B255F512710(/*hidden argument*/NULL);
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_8);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// Damageability damageability = collision.gameObject.GetComponent<Damageability>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_12;
		L_12 = GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909(L_11, /*hidden argument*/GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		V_1 = L_12;
		// AttackWithContact(damageability);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_13 = V_1;
		VirtActionInvoker1< Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * >::Invoke(7 /* System.Void Attack::AttackWithContact(Damageability) */, __this, L_13);
		// playerMovement.SetVelocity(3,playerMovement.jump);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_14 = __this->get_playerMovement_12();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_15 = __this->get_playerMovement_12();
		float L_16 = ((MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 *)L_15)->get_jump_12();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_14, 3, L_16, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Boolean PlayerAttack::GiveDamageTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerAttack_GiveDamageTag_m7021A6E89EDD5FBDDD55CC509DC5520891DDBEAF (PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614 * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Constants.GetPlayerGiveDamage().Contains(tag);
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0;
		L_0 = Constants_GetPlayerGiveDamage_m7343694332AA31351E235E836FE65B255F512710(/*hidden argument*/NULL);
		String_t* L_1 = ___tag0;
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void PlayerAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAttack__ctor_m22A9361E40ADE6308B3A0B08A38135385C3D62D0 (PlayerAttack_tED5EBB5EF47EDBFF39867AB2CD2AE5111B6D0614 * __this, const RuntimeMethod* method)
{
	{
		Attack__ctor_m42BFE85BF380263583A584B3ED06A83726960FED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856_m8A716D38960B89DDA13376C60892D1ED8E2D501E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454_mE5BC2651CC4F6C294053C50FB5AD8D862DEB7B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputCooldown = new Cooldown(cdInput);
		float L_0 = __this->get_cdInput_10();
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_1 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_1, L_0, /*hidden argument*/NULL);
		__this->set_inputCooldown_11(L_1);
		// jumpCooldown = new Cooldown(cdJump);
		float L_2 = __this->get_cdJump_8();
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_3 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_3, L_2, /*hidden argument*/NULL);
		__this->set_jumpCooldown_9(L_3);
		// movement = GetComponent<PlayerMovement>();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4;
		L_4 = Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C(__this, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		__this->set_movement_4(L_4);
		// damageability = GetComponent<PlayerDamageability>();
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_5;
		L_5 = Component_GetComponent_TisPlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454_mE5BC2651CC4F6C294053C50FB5AD8D862DEB7B85(__this, /*hidden argument*/Component_GetComponent_TisPlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454_mE5BC2651CC4F6C294053C50FB5AD8D862DEB7B85_RuntimeMethod_var);
		__this->set_damageability_5(L_5);
		// animation = GetComponent<PlayerAnimation>();
		PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * L_6;
		L_6 = Component_GetComponent_TisPlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856_m8A716D38960B89DDA13376C60892D1ED8E2D501E(__this, /*hidden argument*/Component_GetComponent_TisPlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856_m8A716D38960B89DDA13376C60892D1ED8E2D501E_RuntimeMethod_var);
		__this->set_animation_6(L_6);
		// damageability.currentHp = CurrentHp;
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_7 = __this->get_damageability_5();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_8 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_CurrentHp_7();
		((Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 *)L_7)->set_currentHp_5(L_8);
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m54EE3ADAA7597303B1F69849B233D1A68D880B14 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnimatorMethod();
		PlayerController_AnimatorMethod_m3E75D70D2A09307A85528CD15BE23E0E6AFD0E8A(__this, /*hidden argument*/NULL);
		// if (damageability.Alive == false) {
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_0 = __this->get_damageability_5();
		bool L_1;
		L_1 = Damageability_get_Alive_mE96F5ED945B35AABBEE387ACE46DC2D67EB23C0C_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// if (damageability.damagedFlag2)
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_2 = __this->get_damageability_5();
		bool L_3 = ((Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 *)L_2)->get_damagedFlag2_8();
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// UpdateHpBar();
		PlayerController_UpdateHpBar_m7CB5C181AAC39CA47A29CC0598D876CAA77893A5(__this, /*hidden argument*/NULL);
		// CurrentHp = damageability.currentHp;
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_4 = __this->get_damageability_5();
		int32_t L_5 = ((Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 *)L_4)->get_currentHp_5();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_CurrentHp_7(L_5);
		// waitForinput = true;
		__this->set_waitForinput_12((bool)1);
		// damageability.damagedFlag2 = false;
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_6 = __this->get_damageability_5();
		((Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 *)L_6)->set_damagedFlag2_8((bool)0);
		// inputCooldown = null;
		__this->set_inputCooldown_11((Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)NULL);
	}

IL_0051:
	{
		// if (waitForinput)
		bool L_7 = __this->get_waitForinput_12();
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// if (GetInputCooldown().Control())
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_8;
		L_8 = PlayerController_GetInputCooldown_m24ACF536966DB5B685D5A101E7B309BF42562A90(__this, /*hidden argument*/NULL);
		bool L_9;
		L_9 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		// waitForinput = false;
		__this->set_waitForinput_12((bool)0);
		// }
		return;
	}

IL_006e:
	{
		// InputMethod();
		PlayerController_InputMethod_mF876ED920C31578A20117A39E2649AA2AB994ADD(__this, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void PlayerController::InputMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_InputMethod_mF876ED920C31578A20117A39E2649AA2AB994ADD (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey("a"))
		bool L_0;
		L_0 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// movement.GoLeftFlag = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = __this->get_movement_4();
		MobMovement_set_GoLeftFlag_m6F93C69BC5314C690742B4BC520172A9E61E54D3_inline(L_1, (bool)1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (Input.GetKey("d"))
		bool L_2;
		L_2 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// movement.GoRightFlag = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_3 = __this->get_movement_4();
		MobMovement_set_GoRightFlag_m146A69A365F267C01D0614666A8B7D9C7CA500D5_inline(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if ((movement.OnGround() || movement.secondJump) && Input.GetKey("space") && GetJumpCooldown().Control())
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4 = __this->get_movement_4();
		bool L_5;
		L_5 = MobMovement_OnGround_mD071BBC23083434CD96D76DA8C084010C9ABAD42(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_6 = __this->get_movement_4();
		bool L_7 = ((MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 *)L_6)->get_secondJump_24();
		if (!L_7)
		{
			goto IL_006f;
		}
	}

IL_004a:
	{
		bool L_8;
		L_8 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_9;
		L_9 = PlayerController_GetJumpCooldown_m112636D91695262AA2668EBBE26385998E1ED7BB(__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// movement.JumpFlag = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_11 = __this->get_movement_4();
		MobMovement_set_JumpFlag_m7C4DFAE77E321C1D096908E1FAA64518286A3A71_inline(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void PlayerController::AnimatorMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AnimatorMethod_m3E75D70D2A09307A85528CD15BE23E0E6AFD0E8A (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!damageability.Alive)
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_0 = __this->get_damageability_5();
		bool L_1;
		L_1 = Damageability_get_Alive_mE96F5ED945B35AABBEE387ACE46DC2D67EB23C0C_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// animation.Code = 4;
		PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * L_2 = __this->get_animation_6();
		Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline(L_2, 4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// else if (!movement.DownBound.contactWithGround)
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_3 = __this->get_movement_4();
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_4;
		L_4 = MobMovement_get_DownBound_m5074915401741B46CA6BA9D4A7E4D0F7D2C777D5_inline(L_3, /*hidden argument*/NULL);
		bool L_5 = L_4->get_contactWithGround_5();
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		// animation.Code = 2;
		PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * L_6 = __this->get_animation_6();
		Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline(L_6, 2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// else if (movement.DownBound.contactWithGround &&
		//     Mathf.Abs(GetComponent<Rigidbody2D>().velocity.x) > 0.05f)
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_7 = __this->get_movement_4();
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_8;
		L_8 = MobMovement_get_DownBound_m5074915401741B46CA6BA9D4A7E4D0F7D2C777D5_inline(L_7, /*hidden argument*/NULL);
		bool L_9 = L_8->get_contactWithGround_5();
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_0();
		float L_13;
		L_13 = fabsf(L_12);
		if ((!(((float)L_13) > ((float)(0.0500000007f)))))
		{
			goto IL_0074;
		}
	}
	{
		// animation.Code = 1;
		PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * L_14 = __this->get_animation_6();
		Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline(L_14, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// animation.Code = 0;
		PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * L_15 = __this->get_animation_6();
		Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline(L_15, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mB31159CAD7DD2329859472554BC9154A83D8E794 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!damageability.Alive) {
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_0 = __this->get_damageability_5();
		bool L_1;
		L_1 = Damageability_get_Alive_mE96F5ED945B35AABBEE387ACE46DC2D67EB23C0C_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (camera == null)
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_camera_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// camera = Camera.current;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_camera_15(L_4);
		// }
		return;
	}

IL_0026:
	{
		// Transform transform = camera.transform;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_camera_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Transform target = this.transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		// if (target)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00b7;
		}
	}
	{
		// Vector3 point = camera.WorldToViewportPoint(target.position);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_camera_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D(L_10, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// Vector3 delta = target.position - camera.ViewportToWorldPoint(new Vector3(0.5f, 0.5f, point.z)); //(new Vector3(0.5, 0.5, point.z));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_camera_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		float L_18 = L_17.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.5f), (0.5f), L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_16, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_15, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// Vector3 destination = transform.position + delta;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		// destination.y += 0;
		float* L_26 = (&V_4)->get_address_of_y_3();
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		*((float*)L_27) = (float)((float)il2cpp_codegen_add((float)L_28, (float)(0.0f)));
		// transform.position = Vector3.SmoothDamp(transform.position, destination, ref velocity, dampTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_4;
		float L_33 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_dampTime_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_31, L_32, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_address_of_velocity_14()), L_33, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_29, L_34, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Void PlayerController::UpdateHpBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_UpdateHpBar_m7CB5C181AAC39CA47A29CC0598D876CAA77893A5 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int pix = 32;
		// int cHp = damageability.currentHp;
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_0 = __this->get_damageability_5();
		int32_t L_1 = ((Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 *)L_0)->get_currentHp_5();
		V_0 = L_1;
		// int w = pix * cHp;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)32), (int32_t)L_2));
		// Image hpBar = GetComponentInChildren<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3;
		L_3 = Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4(__this, /*hidden argument*/Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var);
		// hpBar.rectTransform.sizeDelta = new Vector2(w,32);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4;
		L_4 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_5)), (32.0f), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter2D_m1B1E3F94F29560C6CD4687C6556D74A092CC672E (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// string tag = collision.gameObject.tag;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		// if (tag == "Finish")
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// PlayerMovement PlayerController::get_Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * PlayerController_get_Movement_m870E73D49206C5F3567FC13F9A42D5D677A3935E (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerMovement Movement { get => movement; set => movement = value; }
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = __this->get_movement_4();
		return L_0;
	}
}
// System.Void PlayerController::set_Movement(PlayerMovement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_set_Movement_mCEA6A0827C7A9E91E56D57FE49BCDA3E0937EF93 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerMovement Movement { get => movement; set => movement = value; }
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = ___value0;
		__this->set_movement_4(L_0);
		return;
	}
}
// PlayerAnimation PlayerController::get_Animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * PlayerController_get_Animation_m192BBDE638B4F94B0F39C2F8150E6406703E1B92 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerAnimation Animation { get => animation; set => animation = value; }
		PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * L_0 = __this->get_animation_6();
		return L_0;
	}
}
// System.Void PlayerController::set_Animation(PlayerAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_set_Animation_m298CF05C7E9D65980295AB8E20A7EEC38D79EA0F (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerAnimation Animation { get => animation; set => animation = value; }
		PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * L_0 = ___value0;
		__this->set_animation_6(L_0);
		return;
	}
}
// PlayerDamageability PlayerController::get_Damageability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * PlayerController_get_Damageability_mDB3A0FE7A4BD99EC6379ED9F412C04CDEAEE401F (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerDamageability Damageability { get => damageability; set => damageability = value; }
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_0 = __this->get_damageability_5();
		return L_0;
	}
}
// System.Void PlayerController::set_Damageability(PlayerDamageability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_set_Damageability_m544A3C6901EB7ABF6F00836C95715B67CBA8278F (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerDamageability Damageability { get => damageability; set => damageability = value; }
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_0 = ___value0;
		__this->set_damageability_5(L_0);
		return;
	}
}
// Cooldown PlayerController::GetJumpCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * PlayerController_GetJumpCooldown_m112636D91695262AA2668EBBE26385998E1ED7BB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (jumpCooldown == null)
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0 = __this->get_jumpCooldown_9();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// jumpCooldown = new Cooldown(cdJump);
		float L_1 = __this->get_cdJump_8();
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_2, L_1, /*hidden argument*/NULL);
		__this->set_jumpCooldown_9(L_2);
	}

IL_0019:
	{
		// return jumpCooldown;
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_3 = __this->get_jumpCooldown_9();
		return L_3;
	}
}
// Cooldown PlayerController::GetInputCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * PlayerController_GetInputCooldown_m24ACF536966DB5B685D5A101E7B309BF42562A90 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputCooldown == null)
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0 = __this->get_inputCooldown_11();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// inputCooldown = new Cooldown(cdInput);
		float L_1 = __this->get_cdInput_10();
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_2, L_1, /*hidden argument*/NULL);
		__this->set_inputCooldown_11(L_2);
	}

IL_0019:
	{
		// return inputCooldown;
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_3 = __this->get_inputCooldown_11();
		return L_3;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// private float cdJump = 200;
		__this->set_cdJump_8((200.0f));
		// private float cdInput = 400;
		__this->set_cdInput_10((400.0f));
		Controller__ctor_m50D06C2CAE9B5496780A83ABCF68C529A44EE9F7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__cctor_m85342AF0280476580815CF892EC4D72DAC42C5CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int CurrentHp=3;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_CurrentHp_7(3);
		// public static float dampTime = 0.15f;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_dampTime_13((0.150000006f));
		// private static Vector3 velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_velocity_14(L_0);
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
// System.Void PlayerDamageability::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDamageability_Start_mE207FD0BDD5F814B3A9CFA88C937BD0E45286AC3 (PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		Damageability_Init_mE6DF306574851C28AC97BC1E03F409BA81782813(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerDamageability::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDamageability_FixedUpdate_mC0ABF96C75B9313FDCF80940E385905EE250F179 (PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		Damageability_Tick_m02485F5511642E2A2B05D28B2A0C080CFEFE7443(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerDamageability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDamageability__ctor_mE3E37D58A300BAC5166E71B698F9AFB3BCB71979 (PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * __this, const RuntimeMethod* method)
{
	{
		Damageability__ctor_m986CE18C9856EC91C2EB00DDC17EBD85A6892186(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		MobMovement_Init_mDBD14905E3B1700FA121DAE25B482164487AD5D2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FixedUpdate_m774280268A537B6ED9D9171CEAE67E9A0C3A9499 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		MobMovement_Tick_mC3D887CF36E7126A3D5AE83FFC1B89CFA1C02382(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		MobMovement__ctor_m0FF9CC37BEFC640E798BD2FF68CA8D4284CF8A68(__this, /*hidden argument*/NULL);
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
// System.Void RightBound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightBound_Start_m1684131D4FC9A918511CF5F12B308C99CAFEA801 (RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RightBound::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightBound_Update_m12E6F5D05FCC8A547B69E198C8340BEE84DCDA44 (RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RightBound::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightBound_OnTriggerEnter2D_mC9D47B39CB34FCE387353CB5749F8CE68AB9B214 (RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// contactWithGround = true;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)1);
	}

IL_002c:
	{
		// if (!contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		// contacts.Add(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_15);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void RightBound::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightBound_OnTriggerStay2D_m8169883CB85DEE2463327BA5F416E3E1929F8FCE (RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" )
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// contactWithGround = true;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)1);
	}

IL_002c:
	{
		// if (!contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		// contacts.Add(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_15);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void RightBound::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightBound_OnTriggerExit2D_m9D17E86B7EC876A1BE4E99AE1C383BE614EE05BC (RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" )
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// contactWithGround = false;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)0);
	}

IL_002c:
	{
		// if (contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_10);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// contacts.Remove(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(34 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_12, L_15);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void RightBound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightBound__ctor_mEC7C9A282D8DE46D21E8C508BBA944CA8962E6AE (RightBound_t1C857DA1A849AABF634A49964EDFCBFF12BA6DAD * __this, const RuntimeMethod* method)
{
	{
		Bound__ctor_m985536D2D5F293A9894CC0B6EFF7B77AA4C2FDFA(__this, /*hidden argument*/NULL);
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
// System.Void RottenBlock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RottenBlock_Start_mC8A37238DCD2B3BAD0E221597D51F1E24A15256C (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RottenBlock::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RottenBlock_FixedUpdate_m1A18B50CB65EE75E3A8E6A136AD832446E1D3469 (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerDetected)
		bool L_0 = __this->get_playerDetected_9();
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		// if (!drop&&GetDropCooldown().Control())
		bool L_1 = __this->get_drop_6();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2;
		L_2 = RottenBlock_GetDropCooldown_mEA89F7806FA92B260FC18762401AEC622DA9A487(__this, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// drop = true;
		__this->set_drop_6((bool)1);
		// }
		return;
	}

IL_0025:
	{
		// else if(!drop)
		bool L_4 = __this->get_drop_6();
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		// Shake();
		RottenBlock_Shake_mC99E65B051282D0F9EA8FBCD4946A681834BD311(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// Drop();
		RottenBlock_Drop_m4812D15B016F1B45C527B281BEF7692655098CD8(__this, /*hidden argument*/NULL);
		// if (GetDestroyCooldownn().Control())
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_5;
		L_5 = RottenBlock_GetDestroyCooldownn_m324E33007642F02659C315F671B4C7203CA29FEE(__this, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void RottenBlock::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RottenBlock_Shake_mC99E65B051282D0F9EA8FBCD4946A681834BD311 (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = new Vector2(transform.position.x + shakeSpeed, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_shakeSpeed_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_3, (float)L_4)), L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_8, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_9, /*hidden argument*/NULL);
		// shakeSpeed *= -1;
		float L_10 = __this->get_shakeSpeed_7();
		__this->set_shakeSpeed_7(((float)il2cpp_codegen_multiply((float)L_10, (float)(-1.0f))));
		// }
		return;
	}
}
// System.Void RottenBlock::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RottenBlock_Drop_m4812D15B016F1B45C527B281BEF7692655098CD8 (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = new Vector2(transform.position.x,transform.position.y-dropSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		float L_7 = __this->get_dropSpeed_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), L_3, ((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_8, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Cooldown RottenBlock::GetDropCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * RottenBlock_GetDropCooldown_mEA89F7806FA92B260FC18762401AEC622DA9A487 (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dropCooldown == null)
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0 = __this->get_dropCooldown_4();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// dropCooldown = new Cooldown(1500);
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_1 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_1, (1500.0f), /*hidden argument*/NULL);
		__this->set_dropCooldown_4(L_1);
	}

IL_0018:
	{
		// return dropCooldown;
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2 = __this->get_dropCooldown_4();
		return L_2;
	}
}
// Cooldown RottenBlock::GetDestroyCooldownn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * RottenBlock_GetDestroyCooldownn_m324E33007642F02659C315F671B4C7203CA29FEE (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (destroyCooldown == null)
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0 = __this->get_destroyCooldown_5();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// destroyCooldown = new Cooldown(4000);
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_1 = (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 *)il2cpp_codegen_object_new(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50_il2cpp_TypeInfo_var);
		Cooldown__ctor_m6C8F7B5B6901AFCD1AB1614D638B2C9F7D2CD51E(L_1, (4000.0f), /*hidden argument*/NULL);
		__this->set_destroyCooldown_5(L_1);
	}

IL_0018:
	{
		// return dropCooldown;
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_2 = __this->get_dropCooldown_4();
		return L_2;
	}
}
// System.Void RottenBlock::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RottenBlock_OnCollisionEnter2D_mEA0E2846C84806094C3C5025714D50F9B89F2249 (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string tag = collision.gameObject.tag;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		// if (tag == Constants.playerTag)
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_playerTag_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// playerDetected = true;
		__this->set_playerDetected_9((bool)1);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void RottenBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RottenBlock__ctor_m4981A9587608D62041D9F8E405D2B9C897987BF3 (RottenBlock_tF666776DADA9FFB9409FC7DEB683BDD97CC7EE45 * __this, const RuntimeMethod* method)
{
	{
		// private float shakeSpeed = 0.012f;
		__this->set_shakeSpeed_7((0.0120000001f));
		// private float dropSpeed = 0.1f;
		__this->set_dropSpeed_8((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean TrapAttack::GiveDamageTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrapAttack_GiveDamageTag_mC1679429DB09442C6F752E6463F641558C4BEB2C (TrapAttack_tD0761091436D620B97EE8E3A71AB6DB4F05AC246 * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tag == "Player";
		String_t* L_0 = ___tag0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TrapAttack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrapAttack_Start_mAF1FAAFCC7ED1458AAF3B179DCF938664A2CF11A (TrapAttack_tD0761091436D620B97EE8E3A71AB6DB4F05AC246 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		Attack_Init_m6784A2AC26AB22EC1D565DA54E21120182E6EBCD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrapAttack::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrapAttack_FixedUpdate_m87DABF5F705ABBA835244AC0A04CAF9D8314B1F3 (TrapAttack_tD0761091436D620B97EE8E3A71AB6DB4F05AC246 * __this, const RuntimeMethod* method)
{
	{
		// Tick();
		Attack_Tick_mE0CD86B2FCB2DC941D4502E527B5348AD1C8E991(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrapAttack::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrapAttack_OnTriggerStay2D_m6A16747A57ACA53EEE0B98AFFE22BA3942E3F608 (TrapAttack_tD0761091436D620B97EE8E3A71AB6DB4F05AC246 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * V_1 = NULL;
	{
		// if (attack)
		bool L_0 = ((Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED *)__this)->get_attack_4();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// string tag = collision.gameObject.tag;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (GiveDamageTag(tag))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean Attack::GiveDamageTag(System.String) */, __this, L_4);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// Damageability damageModule = collision.gameObject.GetComponent<Damageability>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_8;
		L_8 = GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909(L_7, /*hidden argument*/GameObject_GetComponent_TisDamageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535_mC40C170D2C6851AA8C6E70DB05EF3A8B5F687909_RuntimeMethod_var);
		V_1 = L_8;
		// AttackWithContact(damageModule);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_9 = V_1;
		TrapAttack_AttackWithContact_mE5D3505D84C331A84CAE262D7C279944C38EB46B(__this, L_9, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void TrapAttack::AttackWithContact(Damageability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrapAttack_AttackWithContact_mE5D3505D84C331A84CAE262D7C279944C38EB46B (TrapAttack_tD0761091436D620B97EE8E3A71AB6DB4F05AC246 * __this, Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * ___destination0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * V_0 = NULL;
	MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * V_1 = NULL;
	{
		// if (GetAttackCooldown().Control())
		Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * L_0;
		L_0 = Attack_GetAttackCooldown_m6377088C4D66E35B27C8D293778342B46FB21116(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Cooldown_Control_mC46200578255F7BF7DF62D36E9B1064216C7253A(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0077;
		}
	}
	{
		// destination.TakeDamage(attackPower);
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_2 = ___destination0;
		int32_t L_3 = ((Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED *)__this)->get_attackPower_7();
		Damageability_TakeDamage_m1D4421310BE4703DB3129463AABC7BA233D00761(L_2, L_3, /*hidden argument*/NULL);
		// MobMovement movement = destination.gameObject.GetComponent<MobMovement>();
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_4 = ___destination0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_6;
		L_6 = GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD(L_5, /*hidden argument*/GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD_RuntimeMethod_var);
		V_0 = L_6;
		// float temp = this.transform.position.x - movement.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_10 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		// if (temp > 0)
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_13))) > ((float)(0.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		// movement.SetVelocity(0, tossing);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_14 = V_0;
		float L_15 = ((Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED *)__this)->get_tossing_5();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_14, 0, L_15, /*hidden argument*/NULL);
		// }
		goto IL_0069;
	}

IL_005c:
	{
		// movement.SetVelocity(1, tossing);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_16 = V_0;
		float L_17 = ((Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED *)__this)->get_tossing_5();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_16, 1, L_17, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// movement.SetVelocity(3, tossingUp);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_18 = V_0;
		float L_19 = ((Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED *)__this)->get_tossingUp_6();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_18, 3, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0077:
	{
		// MobMovement movement = destination.gameObject.GetComponent<MobMovement>();
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_20 = ___destination0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_22;
		L_22 = GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD(L_21, /*hidden argument*/GameObject_GetComponent_TisMobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525_mDE946F70774A69C80013293D7373E86C440B9FAD_RuntimeMethod_var);
		V_1 = L_22;
		// float temp = this.transform.position.x - movement.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_x_2();
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_26 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_x_2();
		// if (temp > 0)
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_29))) > ((float)(0.0f)))))
		{
			goto IL_00ba;
		}
	}
	{
		// movement.SetVelocity(0, tossing);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_30 = V_1;
		float L_31 = ((Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED *)__this)->get_tossing_5();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_30, 0, L_31, /*hidden argument*/NULL);
		// }
		goto IL_00c7;
	}

IL_00ba:
	{
		// movement.SetVelocity(1, tossing);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_32 = V_1;
		float L_33 = ((Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED *)__this)->get_tossing_5();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_32, 1, L_33, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		// movement.SetVelocity(3, tossingUp);
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_34 = V_1;
		float L_35 = ((Attack_t8F1ED17DA3AC88895F5E97B7881891543DD452ED *)__this)->get_tossingUp_6();
		Movement_SetVelocity_mBD248A6A6A5478B21C803A47E65C2453D0586012(L_34, 3, L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrapAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrapAttack__ctor_m67A81E3B3E0AE507DFF4561AB814B62C6614072A (TrapAttack_tD0761091436D620B97EE8E3A71AB6DB4F05AC246 * __this, const RuntimeMethod* method)
{
	{
		Attack__ctor_m42BFE85BF380263583A584B3ED06A83726960FED(__this, /*hidden argument*/NULL);
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
// System.Void UpBound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpBound_Start_m74A3EC926AAE01EABA7F8FC2576326F8687C45E9 (UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UpBound::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpBound_Update_m3C3CD4B2ACAF1ADB655F3A2947DF985EF653E030 (UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UpBound::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpBound_OnTriggerEnter2D_m295CC2CAF27DCA20B86F8ECA017651893621D63C (UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// contactWithGround = true;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)1);
	}

IL_002c:
	{
		// if (!contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		// contacts.Add(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_15);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void UpBound::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpBound_OnTriggerStay2D_m09C017FFB3E9F1EA26DA9B4A113E63D28BFBA6D6 (UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" )
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// contactWithGround = true;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)1);
	}

IL_002c:
	{
		// if (!contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		// contacts.Add(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_15);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void UpBound::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpBound_OnTriggerExit2D_mA9D1778016A89F5AAFF75B453141F3A2B714090F (UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == 3 || collision.gameObject.tag == "Enemy" )
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// contactWithGround = false;
		((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->set_contactWithGround_5((bool)0);
	}

IL_002c:
	{
		// if (contacts.Contains(collision.gameObject.tag))
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(28 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_7, L_10);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// contacts.Remove(collision.gameObject.tag);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_12 = ((Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD *)__this)->get_contacts_4();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject * >::Invoke(34 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_12, L_15);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void UpBound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpBound__ctor_m7880D83FA6EB57D755EE1DE4766655F30FB3B147 (UpBound_t66D47FF7C1FFB11B493DF56A9BD5756C07C8F3C5 * __this, const RuntimeMethod* method)
{
	{
		Bound__ctor_m985536D2D5F293A9894CC0B6EFF7B77AA4C2FDFA(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cooldown_SetCooldown_m5460B4884EC89E1780A50D9153A21FA25025411A_inline (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, float ___cooldown0, const RuntimeMethod* method)
{
	{
		// this.cooldown = cooldown;
		float L_0 = ___cooldown0;
		__this->set_cooldown_0(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Damageability_get_Alive_mE96F5ED945B35AABBEE387ACE46DC2D67EB23C0C_inline (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// public bool Alive { get => alive; set => alive = value; }
		bool L_0 = __this->get_alive_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Damageability_get_CurrentHp_m765EAE02816923C177F851FD674622B8DB9C02C2_inline (Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * __this, const RuntimeMethod* method)
{
	{
		// public int CurrentHp { get => currentHp; set => currentHp = value; }
		int32_t L_0 = __this->get_currentHp_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_UpBound_mCC28D16220E184550ADBC3B22E9903B7A4F1ED25_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public Bound UpBound { get => upBound; set => upBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_upBound_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Animation_set_Code_m8599D7BD54D9FF854FC51B11F65BEED903420BB0_inline (Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Code { get => code; set => code = value; }
		int32_t L_0 = ___value0;
		__this->set_code_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MobMovement_get_Direction_m78D550873829FA8049B2885471559D223771ACBF_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public int Direction { get => direction; set => direction = value; }
		int32_t L_0 = __this->get_direction_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_LeftBound_m5016CAE4264231819A64822610D414DBC2EC65AA_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public Bound LeftBound { get => leftBound; set => leftBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_leftBound_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_RightBound_m012BD3DF4D1A36FEF81A2D26EBFCD07D6E6EBEA7_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public Bound RightBound { get => rightBound; set => rightBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_rightBound_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * EnemyController_get_Damageability_m25609FE20A2DB85D976F14EEE918660B9A694B28_inline (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// public Damageability Damageability { get => damageability; set => damageability = value; }
		Damageability_tEB1B9F5937D93561A377DB9B72E4311AC6141535 * L_0 = __this->get_damageability_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * EnemyController_get_Animation_mAFB8A83EF20EA5878E20D81ED896E64FDD652441_inline (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// public Animation Animation { get => animation; set => animation = value; }
		Animation_tA64B0031D872E861F15C2C7B38175F2FB7A84786 * L_0 = __this->get_animation_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * EnemyController_get_Movement_m04B22D28D4BEAE97147ED01520E854525AF0CEF2_inline (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// public MobMovement Movement { get => movement; set => movement = value; }
		MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * L_0 = __this->get_movement_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * MobMovement_get_DownBound_m5074915401741B46CA6BA9D4A7E4D0F7D2C777D5_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, const RuntimeMethod* method)
{
	{
		// public Bound DownBound { get => downBound; set => downBound = value; }
		Bound_t146DA79B9D82F1A9009A24F7E74160B43DA28BDD * L_0 = __this->get_downBound_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobMovement_set_JumpFlag_m7C4DFAE77E321C1D096908E1FAA64518286A3A71_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool JumpFlag { get => jumpFlag; set => jumpFlag = value; }
		bool L_0 = ___value0;
		__this->set_jumpFlag_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Movement_set_ExtraFriction_mC121CF49197FF575D5EEAE572E050EFF718F5D00_inline (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float ExtraFriction { get => extraFriction; set => extraFriction = value; }
		float L_0 = ___value0;
		__this->set_extraFriction_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * PlayerController_get_Damageability_mDB3A0FE7A4BD99EC6379ED9F412C04CDEAEE401F_inline (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerDamageability Damageability { get => damageability; set => damageability = value; }
		PlayerDamageability_t50C530B4261B5BB93A34A270B4D85A9EB00B6454 * L_0 = __this->get_damageability_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobMovement_set_GoLeftFlag_m6F93C69BC5314C690742B4BC520172A9E61E54D3_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GoLeftFlag { get => goLeftFlag; set => goLeftFlag = value; }
		bool L_0 = ___value0;
		__this->set_goLeftFlag_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MobMovement_set_GoRightFlag_m146A69A365F267C01D0614666A8B7D9C7CA500D5_inline (MobMovement_tB4B959C7DDEA2A66E365C18374DAD16E0BCFB525 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GoRightFlag { get => goRightFlag; set => goRightFlag = value; }
		bool L_0 = ___value0;
		__this->set_goRightFlag_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
