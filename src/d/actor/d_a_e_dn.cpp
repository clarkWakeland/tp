/**
 * @file d_a_e_dn.cpp
 * 
*/

#include "d/actor/d_a_e_dn.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__12daE_DN_HIO_cFv();
extern "C" static void dn_disappear__FP10e_dn_class();
extern "C" static void anm_init__FP10e_dn_classifUcf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daE_DN_Draw__FP10e_dn_class();
extern "C" static void other_bg_check__FP10e_dn_classP10fopAc_ac_c();
extern "C" static void other_bg_check2__FP10e_dn_classP4cXyz();
extern "C" static void s_b_sub__FPvPv();
extern "C" static void search_bomb__FP10e_dn_classi();
extern "C" static void bomb_view_check__FP10e_dn_class();
extern "C" static void bomb_check__FP10e_dn_class();
extern "C" static void player_way_check__FP10e_dn_class();
extern "C" static void pl_check__FP10e_dn_classfs();
extern "C" static void move_gake_check__FP10e_dn_classfSc();
extern "C" static void jump_pos_check__FP10e_dn_classP4cXyz();
extern "C" static void e_dn_stay__FP10e_dn_class();
extern "C" static void e_dn_otoreac__FP10e_dn_class();
extern "C" static void e_dn_bomb_action__FP10e_dn_class();
extern "C" static void e_dn_normal__FP10e_dn_class();
extern "C" static void e_dn_drawback__FP10e_dn_class();
extern "C" static void e_dn_wolfbite__FP10e_dn_class();
extern "C" static void way_check__FP10e_dn_class();
extern "C" static void shot_s_sub__FPvPv();
extern "C" static void e_dn_fight_run__FP10e_dn_class();
extern "C" static void e_dn_jump__FP10e_dn_class();
extern "C" static void e_dn_gakejump__FP10e_dn_class();
extern "C" static void at_hit_check__FP10e_dn_class();
extern "C" static void e_dn_attack_0__FP10e_dn_class();
extern "C" static void e_dn_attack__FP10e_dn_class();
extern "C" static void tail_eff_set__FP10e_dn_class();
extern "C" static void e_dn_tail_attack__FP10e_dn_class();
extern "C" static void e_dn_guard__FP10e_dn_class();
extern "C" static void e_dn_s_damage__FP10e_dn_class();
extern "C" static void kado_check__FP10e_dn_class();
extern "C" static void body_gake__FP10e_dn_class();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" static void e_dn_damage__FP10e_dn_class();
extern "C" static void e_dn_backdrop__FP10e_dn_class();
extern "C" static void e_dn_water__FP10e_dn_class();
extern "C" static void e_dn_reg__FP10e_dn_class();
extern "C" static void wolfkick_damage__FP10e_dn_class();
extern "C" static void big_damage__FP10e_dn_class();
extern "C" static void small_damage__FP10e_dn_class();
extern "C" static void damage_check__FP10e_dn_class();
extern "C" static void action__FP10e_dn_class();
extern "C" static void anm_se_set__FP10e_dn_class();
extern "C" static void daE_DN_Execute__FP10e_dn_class();
extern "C" static bool daE_DN_IsDelete__FP10e_dn_class();
extern "C" static void daE_DN_Delete__FP10e_dn_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_DN_Create__FP10fopAc_ac_c();
extern "C" void __ct__10e_dn_classFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_DN_HIO_cFv();
extern "C" void __sinit_d_a_e_dn_cpp();
extern "C" static void func_804EE420();
extern "C" static void func_804EE428();
extern "C" static void func_804EE430();
extern "C" static void func_804EE438();
extern "C" static void func_804EE440();
extern "C" static void setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz();
extern "C" void __dt__5csXyzFv();
extern "C" extern char const* const d_a_e_dn__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleX__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_getTalkEventPartner__FPC10fopAc_ac_c();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_otoCheck__FPC10fopAc_ac_cf();
extern "C" void fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_wayBgCheck__FPC10fopAc_ac_cff();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fopKyM_createWpillar__FPC4cXyzfi();
extern "C" void fopKyM_createMpillar__FPC4cXyzf();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void checkStateCarry__7dBomb_cFv();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __ct__9dJntCol_cFv();
extern "C" void init__9dJntCol_cFP10fopAc_ac_cPC13dJntColData_cP8J3DModeli();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void addReal__21dDlst_shadowControl_cFUlP8J3DModel();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void GetAtHitObj__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void StartCAt__8dCcD_SphFR4cXyz();
extern "C" void MoveCAt__8dCcD_SphFR4cXyz();
extern "C" void cc_pl_cut_bit_get__Fv();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_Sound_set__F4cXyziUii();
extern "C" void dKy_Sound_get__Fv();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_802807E0();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" extern u8 pauseTimer__9dScnPly_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 804EE8AC-804EE8B0 000000 0004+00 35/35 0/0 0/0 .rodata          @3789 */
SECTION_RODATA static f32 const lit_3789 = 100.0f;
COMPILER_STRIP_GATE(0x804EE8AC, &lit_3789);

/* 804EE8B0-804EE8B4 000004 0004+00 2/29 0/0 0/0 .rodata          @3790 */
SECTION_RODATA static u8 const lit_3790[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804EE8B0, &lit_3790);

/* 804EE8B4-804EE8BC 000008 0004+04 2/22 0/0 0/0 .rodata          @3791 */
SECTION_RODATA static f32 const lit_3791[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x804EE8B4, &lit_3791);

/* 804EE8BC-804EE8C4 000010 0008+00 0/5 0/0 0/0 .rodata          @3792 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3792[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804EE8BC, &lit_3792);
#pragma pop

/* 804EE8C4-804EE8CC 000018 0008+00 0/5 0/0 0/0 .rodata          @3793 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3793[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804EE8C4, &lit_3793);
#pragma pop

/* 804EE8CC-804EE8D4 000020 0008+00 0/5 0/0 0/0 .rodata          @3794 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3794[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804EE8CC, &lit_3794);
#pragma pop

/* 804EE8D4-804EE8D8 000028 0004+00 0/1 0/0 0/0 .rodata          @3795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3795 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x804EE8D4, &lit_3795);
#pragma pop

/* 804EE8D8-804EE8DC 00002C 0004+00 0/2 0/0 0/0 .rodata          @3810 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3810 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x804EE8D8, &lit_3810);
#pragma pop

/* 804EE8DC-804EE8E0 000030 0004+00 0/1 0/0 0/0 .rodata          @3811 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3811 = 7.5f;
COMPILER_STRIP_GATE(0x804EE8DC, &lit_3811);
#pragma pop

/* 804EE8E0-804EE8E4 000034 0004+00 1/4 0/0 0/0 .rodata          @3812 */
SECTION_RODATA static f32 const lit_3812 = 25.0f;
COMPILER_STRIP_GATE(0x804EE8E0, &lit_3812);

/* 804EE8E4-804EE8E8 000038 0004+00 0/5 0/0 0/0 .rodata          @3813 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3813 = 300.0f;
COMPILER_STRIP_GATE(0x804EE8E4, &lit_3813);
#pragma pop

/* 804EE8E8-804EE8EC 00003C 0004+00 0/1 0/0 0/0 .rodata          @3814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3814 = 350.0f;
COMPILER_STRIP_GATE(0x804EE8E8, &lit_3814);
#pragma pop

/* 804EEA40-804EEA4C 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804EEA4C-804EEA60 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 804EEA60-804EEA68 000020 0008+00 0/1 0/0 0/0 .data            e_prim$3668 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_prim[8] = {
    0xFF, 0x78, 0x00, 0x00, 0xFF, 0x64, 0x78, 0x00,
};
#pragma pop

/* 804EEA68-804EEA70 000028 0008+00 0/1 0/0 0/0 .data            e_env$3669 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_env[8] = {
    0x5A, 0x2D, 0x2D, 0x00, 0x3C, 0x1E, 0x1E, 0x00,
};
#pragma pop

/* 804EEA70-804EEA78 000030 0006+02 0/1 0/0 0/0 .data            eff_id$3677 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 eff_id[6 + 2 /* padding */] = {
    0x02,
    0x9D,
    0x02,
    0x9E,
    0x02,
    0x9F,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 804EEA78-804EEAA4 -00001 002C+00 1/1 0/0 0/0 .data            @4546 */
SECTION_DATA static void* lit_4546[11] = {
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x4C),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x78),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x158),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x1AC),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x230),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x280),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x2D4),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x330),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x3BC),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x40C),
    (void*)(((char*)e_dn_stay__FP10e_dn_class) + 0x3F8),
};

/* 804EEAA4-804EEAD4 -00001 0030+00 1/1 0/0 0/0 .data            @4719 */
SECTION_DATA static void* lit_4719[12] = {
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x98),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0xE4),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x11C),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x15C),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x1A8),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x2A0),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x4A4),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x4A4),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x4A4),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x4A4),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x310),
    (void*)(((char*)e_dn_bomb_action__FP10e_dn_class) + 0x3D0),
};

/* 804EEAD4-804EEAF8 -00001 0024+00 1/1 0/0 0/0 .data            @5544 */
SECTION_DATA static void* lit_5544[9] = {
    (void*)(((char*)e_dn_guard__FP10e_dn_class) + 0x50),
    (void*)(((char*)e_dn_guard__FP10e_dn_class) + 0x88),
    (void*)(((char*)e_dn_guard__FP10e_dn_class) + 0x1E0),
    (void*)(((char*)e_dn_guard__FP10e_dn_class) + 0x1E0),
    (void*)(((char*)e_dn_guard__FP10e_dn_class) + 0x1E0),
    (void*)(((char*)e_dn_guard__FP10e_dn_class) + 0xB8),
    (void*)(((char*)e_dn_guard__FP10e_dn_class) + 0xFC),
    (void*)(((char*)e_dn_guard__FP10e_dn_class) + 0x150),
    (void*)(((char*)e_dn_guard__FP10e_dn_class) + 0x1A4),
};

/* 804EEAF8-804EEB00 0000B8 0008+00 1/1 0/0 0/0 .data            kado_bit$5557 */
SECTION_DATA static u8 kado_bit[8] = {
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02,
};

/* 804EEB00-804EEB08 0000C0 0008+00 1/1 0/0 0/0 .data            kado_check_x$5558 */
SECTION_DATA static u8 kado_check_x[8] = {
    0x42, 0xA0, 0x00, 0x00, 0xC2, 0xA0, 0x00, 0x00,
};

/* 804EEB08-804EEB88 -00001 0080+00 1/1 0/0 0/0 .data            @5981 */
SECTION_DATA static void* lit_5981[32] = {
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0x1B8),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0x274),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0x514),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0x704),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0x844),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0x8F4),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0x998),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0x998),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xB00),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0x9F0),
    (void*)(((char*)e_dn_damage__FP10e_dn_class) + 0xAD4),
};

/* 804EEB88-804EEBA0 000148 0016+02 1/1 0/0 0/0 .data            j_spd$6416 */
SECTION_DATA static u8 j_spd[22 + 2 /* padding */] = {
    0x40,
    0x00,
    0x40,
    0x00,
    0x40,
    0x00,
    0x10,
    0x00,
    0x10,
    0x00,
    0x10,
    0x00,
    0x10,
    0x00,
    0x40,
    0x00,
    0x40,
    0x00,
    0x40,
    0x00,
    0x40,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 804EEBA0-804EEBA8 000160 0008+00 1/1 0/0 0/0 .data            foot_idx$6464 */
SECTION_DATA static u8 foot_idx[8] = {
    0x00, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0x1E,
};

/* 804EEBA8-804EEC9C -00001 00F4+00 1/1 0/0 0/0 .data            @6935 */
SECTION_DATA static void* lit_6935[61] = {
    (void*)(((char*)action__FP10e_dn_class) + 0xE4),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0xF0),
    (void*)(((char*)action__FP10e_dn_class) + 0x100),
    (void*)(((char*)action__FP10e_dn_class) + 0x110),
    (void*)(((char*)action__FP10e_dn_class) + 0x120),
    (void*)(((char*)action__FP10e_dn_class) + 0x130),
    (void*)(((char*)action__FP10e_dn_class) + 0x140),
    (void*)(((char*)action__FP10e_dn_class) + 0x150),
    (void*)(((char*)action__FP10e_dn_class) + 0x15C),
    (void*)(((char*)action__FP10e_dn_class) + 0x184),
    (void*)(((char*)action__FP10e_dn_class) + 0x168),
    (void*)(((char*)action__FP10e_dn_class) + 0x178),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x190),
    (void*)(((char*)action__FP10e_dn_class) + 0x19C),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1A8),
    (void*)(((char*)action__FP10e_dn_class) + 0x1B4),
    (void*)(((char*)action__FP10e_dn_class) + 0x1C4),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1DC),
    (void*)(((char*)action__FP10e_dn_class) + 0x1D4),
};

/* 804EEC9C-804EECA8 00025C 000C+00 1/0 0/0 0/0 .data            jv_offset */
SECTION_DATA static u8 jv_offset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804EECA8-804EED38 -00001 0090+00 1/1 0/0 0/0 .data            jc_data */
SECTION_DATA static void* jc_data[36] = {
    (void*)0x00010002, (void*)0x42200000, (void*)&jv_offset, (void*)0x00010003, (void*)0x41F00000,
    (void*)&jv_offset, (void*)0x00010016, (void*)0x42200000, (void*)&jv_offset, (void*)0x0001000B,
    (void*)0x41700000, (void*)&jv_offset, (void*)0x0001000C, (void*)0x41200000, (void*)&jv_offset,
    (void*)0x00010011, (void*)0x41700000, (void*)&jv_offset, (void*)0x00010012, (void*)0x41200000,
    (void*)&jv_offset, (void*)0x00010017, (void*)0x41A00000, (void*)&jv_offset, (void*)0x00010018,
    (void*)0x41700000, (void*)&jv_offset, (void*)0x0001001B, (void*)0x41A00000, (void*)&jv_offset,
    (void*)0x0001001C, (void*)0x41700000, (void*)&jv_offset, (void*)0x00010020, (void*)0x41A00000,
    (void*)&jv_offset,
};

/* 804EED38-804EED78 0002F8 0040+00 0/1 0/0 0/0 .data            cc_sph_src$7459 */
#pragma push
#pragma force_active on
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 804EED78-804EEDB8 000338 0040+00 0/1 0/0 0/0 .data            at_sph_src$7460 */
#pragma push
#pragma force_active on
static dCcD_SrcSph at_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x1, 0xd}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_METAL, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 35.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 804EEDB8-804EEDF8 000378 0040+00 0/1 0/0 0/0 .data            tate_sph_src$7461 */
#pragma push
#pragma force_active on
static dCcD_SrcSph tate_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_STONE, 0x5, 0x0, 0x0, 0x3}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 100.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 804EEDF8-804EEE18 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_DN_Method */
static actor_method_class l_daE_DN_Method = {
    (process_method_func)daE_DN_Create__FP10fopAc_ac_c,
    (process_method_func)daE_DN_Delete__FP10e_dn_class,
    (process_method_func)daE_DN_Execute__FP10e_dn_class,
    (process_method_func)daE_DN_IsDelete__FP10e_dn_class,
    (process_method_func)daE_DN_Draw__FP10e_dn_class,
};

/* 804EEE18-804EEE48 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_DN */
extern actor_process_profile_definition g_profile_E_DN = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_DN,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(e_dn_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  118,                    // mPriority
  &l_daE_DN_Method,       // sub_method
  0x00040000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 804EEE48-804EEE54 000408 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 804EEE54-804EEE60 000414 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 804EEE60-804EEE6C 000420 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 804EEE6C-804EEE78 00042C 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 804EEE78-804EEE84 000438 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804EEE84-804EEEA8 000444 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804EE440,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804EE438,
};

/* 804EEEA8-804EEED8 000468 0030+00 3/3 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804EE420,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804EE430,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804EE428,
};

/* 804EEED8-804EEEE4 000498 000C+00 2/2 0/0 0/0 .data            __vt__12daE_DN_HIO_c */
SECTION_DATA extern void* __vt__12daE_DN_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_DN_HIO_cFv,
};

/* 804E51AC-804E5220 0000EC 0074+00 1/1 0/0 0/0 .text            __ct__12daE_DN_HIO_cFv */
daE_DN_HIO_c::daE_DN_HIO_c() {
    // NONMATCHING
}

/* 804E5220-804E52D0 000160 00B0+00 2/2 0/0 0/0 .text            dn_disappear__FP10e_dn_class */
static void dn_disappear(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE8EC-804EE8F0 000040 0004+00 1/4 0/0 0/0 .rodata          @3854 */
SECTION_RODATA static f32 const lit_3854 = -1.0f;
COMPILER_STRIP_GATE(0x804EE8EC, &lit_3854);

/* 804EEA34-804EEA34 000188 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804EEA34 = "E_dn";
#pragma pop

/* 804E52D0-804E537C 000210 00AC+00 18/18 0/0 0/0 .text            anm_init__FP10e_dn_classifUcf */
static void anm_init(e_dn_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* 804E537C-804E5838 0002BC 04BC+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE8F0-804EE8F4 000044 0004+00 0/11 0/0 0/0 .rodata          @4094 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4094 = 50.0f;
COMPILER_STRIP_GATE(0x804EE8F0, &lit_4094);
#pragma pop

/* 804EE8F4-804EE8F8 000048 0004+00 0/1 0/0 0/0 .rodata          @4095 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4095 = 950.0f;
COMPILER_STRIP_GATE(0x804EE8F4, &lit_4095);
#pragma pop

/* 804E5838-804E5B20 000778 02E8+00 1/0 0/0 0/0 .text            daE_DN_Draw__FP10e_dn_class */
static void daE_DN_Draw(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E5B20-804E5BF8 000A60 00D8+00 2/2 0/0 0/0 .text other_bg_check__FP10e_dn_classP10fopAc_ac_c
 */
static void other_bg_check(e_dn_class* param_0, fopAc_ac_c* param_1) {
    // NONMATCHING
}

/* 804E5BF8-804E5CD0 000B38 00D8+00 1/1 0/0 0/0 .text other_bg_check2__FP10e_dn_classP4cXyz */
static void other_bg_check2(e_dn_class* param_0, cXyz* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EEEF0-804EEEF4 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 804EEEF4-804EEEF8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 804EEEF8-804EEEFC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 804EEEFC-804EEF00 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 804EEF00-804EEF04 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 804EEF04-804EEF08 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 804EEF08-804EEF0C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 804EEF0C-804EEF10 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 804EEF10-804EEF14 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 804EEF14-804EEF18 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 804EEF18-804EEF1C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 804EEF1C-804EEF20 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 804EEF20-804EEF24 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 804EEF24-804EEF28 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 804EEF28-804EEF2C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 804EEF2C-804EEF30 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 804EEF2C 0001+00 data_804EEF2C @1009 */
/* 804EEF2D 0003+00 data_804EEF2D None */
static u8 struct_804EEF2C[4];

/* 804EEF30-804EEF3C 000048 000C+00 1/1 0/0 0/0 .bss             @3805 */
static u8 lit_3805[12];

/* 804EEF3C-804EEF64 000054 0028+00 10/11 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[40];

/* 804EEF64-804EEF8C 00007C 0028+00 2/2 0/0 0/0 .bss             target_info */
static u8 target_info[40];

/* 804EEF8C-804EEF90 0000A4 0004+00 2/2 0/0 0/0 .bss             target_info_count */
static u8 target_info_count[4];

/* 804E5CD0-804E5D4C 000C10 007C+00 1/1 0/0 0/0 .text            s_b_sub__FPvPv */
static void s_b_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE8F8-804EE8FC 00004C 0004+00 0/5 0/0 0/0 .rodata          @4322 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4322 = 30.0f;
COMPILER_STRIP_GATE(0x804EE8F8, &lit_4322);
#pragma pop

/* 804EE8FC-804EE900 000050 0004+00 0/1 0/0 0/0 .rodata          @4323 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4323 = 500.0f;
COMPILER_STRIP_GATE(0x804EE8FC, &lit_4323);
#pragma pop

/* 804EE900-804EE904 000054 0004+00 0/1 0/0 0/0 .rodata          @4324 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4324 = -125.0f;
COMPILER_STRIP_GATE(0x804EE900, &lit_4324);
#pragma pop

/* 804EE904-804EE908 000058 0004+00 0/1 0/0 0/0 .rodata          @4325 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4325 = 1500.0f;
COMPILER_STRIP_GATE(0x804EE904, &lit_4325);
#pragma pop

/* 804E5D4C-804E61D8 000C8C 048C+00 2/2 0/0 0/0 .text            search_bomb__FP10e_dn_classi */
static void search_bomb(e_dn_class* param_0, int param_1) {
    // NONMATCHING
}

/* 804E61D8-804E61FC 001118 0024+00 4/4 0/0 0/0 .text            bomb_view_check__FP10e_dn_class */
static void bomb_view_check(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E61FC-804E6220 00113C 0024+00 1/1 0/0 0/0 .text            bomb_check__FP10e_dn_class */
static void bomb_check(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E6220-804E6264 001160 0044+00 1/1 0/0 0/0 .text            player_way_check__FP10e_dn_class */
static void player_way_check(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E6264-804E6340 0011A4 00DC+00 4/4 0/0 0/0 .text            pl_check__FP10e_dn_classfs */
static void pl_check(e_dn_class* param_0, f32 param_1, s16 param_2) {
    // NONMATCHING
}

/* 804E6340-804E6448 001280 0108+00 3/3 0/0 0/0 .text            move_gake_check__FP10e_dn_classfSc
 */
static void move_gake_check(e_dn_class* param_0, f32 param_1, s8 param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE908-804EE90C 00005C 0004+00 0/4 0/0 0/0 .rodata          @4435 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4435 = 200.0f;
COMPILER_STRIP_GATE(0x804EE908, &lit_4435);
#pragma pop

/* 804E6448-804E6608 001388 01C0+00 1/1 0/0 0/0 .text jump_pos_check__FP10e_dn_classP4cXyz */
static void jump_pos_check(e_dn_class* param_0, cXyz* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE90C-804EE910 000060 0004+00 0/8 0/0 0/0 .rodata          @4535 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4535 = 10.0f;
COMPILER_STRIP_GATE(0x804EE90C, &lit_4535);
#pragma pop

/* 804EE910-804EE914 000064 0004+00 0/2 0/0 0/0 .rodata          @4536 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4536 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x804EE910, &lit_4536);
#pragma pop

/* 804EE914-804EE918 000068 0004+00 0/3 0/0 0/0 .rodata          @4537 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4537 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x804EE914, &lit_4537);
#pragma pop

/* 804EE918-804EE91C 00006C 0004+00 0/3 0/0 0/0 .rodata          @4538 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4538 = 2000.0f;
COMPILER_STRIP_GATE(0x804EE918, &lit_4538);
#pragma pop

/* 804E6608-804E6A8C 001548 0484+00 2/1 0/0 0/0 .text            e_dn_stay__FP10e_dn_class */
static void e_dn_stay(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE91C-804EE920 000070 0004+00 0/11 0/0 0/0 .rodata          @4539 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4539 = 3.0f;
COMPILER_STRIP_GATE(0x804EE91C, &lit_4539);
#pragma pop

/* 804EE920-804EE924 000074 0004+00 0/3 0/0 0/0 .rodata          @4540 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4540 = 1.5f;
COMPILER_STRIP_GATE(0x804EE920, &lit_4540);
#pragma pop

/* 804EE924-804EE928 000078 0004+00 0/4 0/0 0/0 .rodata          @4541 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4541 = 20.0f;
COMPILER_STRIP_GATE(0x804EE924, &lit_4541);
#pragma pop

/* 804EE928-804EE92C 00007C 0004+00 0/12 0/0 0/0 .rodata          @4542 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4542 = 5.0f;
COMPILER_STRIP_GATE(0x804EE928, &lit_4542);
#pragma pop

/* 804EE92C-804EE930 000080 0004+00 0/1 0/0 0/0 .rodata          @4543 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4543 = 40.0f;
COMPILER_STRIP_GATE(0x804EE92C, &lit_4543);
#pragma pop

/* 804EE930-804EE934 000084 0004+00 0/0 0/0 0/0 .rodata          @4544 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4544 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x804EE930, &lit_4544);
#pragma pop

/* 804EE934-804EE93C 000088 0004+04 0/0 0/0 0/0 .rodata          @4545 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4545[1 + 1 /* padding */] = {
    75.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x804EE934, &lit_4545);
#pragma pop

/* 804EE93C-804EE944 000090 0008+00 0/1 0/0 0/0 .rodata          @4550 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4550[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804EE93C, &lit_4550);
#pragma pop

/* 804EE944-804EE948 000098 0004+00 0/1 0/0 0/0 .rodata          @4611 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4611 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x804EE944, &lit_4611);
#pragma pop

/* 804EE948-804EE94C 00009C 0004+00 0/3 0/0 0/0 .rodata          @4612 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4612 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x804EE948, &lit_4612);
#pragma pop

/* 804EE94C-804EE950 0000A0 0004+00 0/2 0/0 0/0 .rodata          @4613 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4613 = 250.0f;
COMPILER_STRIP_GATE(0x804EE94C, &lit_4613);
#pragma pop

/* 804E6A8C-804E6DBC 0019CC 0330+00 1/1 0/0 0/0 .text            e_dn_otoreac__FP10e_dn_class */
static void e_dn_otoreac(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E6DBC-804E72C8 001CFC 050C+00 2/1 0/0 0/0 .text            e_dn_bomb_action__FP10e_dn_class */
static void e_dn_bomb_action(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE950-804EE954 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4715 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4715 = 600.0f;
COMPILER_STRIP_GATE(0x804EE950, &lit_4715);
#pragma pop

/* 804EE954-804EE958 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4716 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4716 = -30.0f;
COMPILER_STRIP_GATE(0x804EE954, &lit_4716);
#pragma pop

/* 804EE958-804EE95C 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4717 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4717 = 60.0f;
COMPILER_STRIP_GATE(0x804EE958, &lit_4717);
#pragma pop

/* 804EE95C-804EE960 0000B0 0004+00 0/2 0/0 0/0 .rodata          @4718 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4718 = 15.0f;
COMPILER_STRIP_GATE(0x804EE95C, &lit_4718);
#pragma pop

/* 804EE960-804EE964 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4783 = 32768.0f;
COMPILER_STRIP_GATE(0x804EE960, &lit_4783);
#pragma pop

/* 804EE964-804EE968 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4784 = 10000.0f;
COMPILER_STRIP_GATE(0x804EE964, &lit_4784);
#pragma pop

/* 804E72C8-804E7620 002208 0358+00 1/1 0/0 0/0 .text            e_dn_normal__FP10e_dn_class */
static void e_dn_normal(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE968-804EE96C 0000BC 0004+00 0/2 0/0 0/0 .rodata          @4811 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4811 = -5.0f;
COMPILER_STRIP_GATE(0x804EE968, &lit_4811);
#pragma pop

/* 804E7620-804E77A8 002560 0188+00 1/1 0/0 0/0 .text            e_dn_drawback__FP10e_dn_class */
static void e_dn_drawback(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE96C-804EE970 0000C0 0004+00 0/3 0/0 0/0 .rodata          @4872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4872 = 2.0f;
COMPILER_STRIP_GATE(0x804EE96C, &lit_4872);
#pragma pop

/* 804EE970-804EE974 0000C4 0004+00 1/6 0/0 0/0 .rodata          @4873 */
SECTION_RODATA static f32 const lit_4873 = 150.0f;
COMPILER_STRIP_GATE(0x804EE970, &lit_4873);

/* 804E77A8-804E7B34 0026E8 038C+00 1/1 0/0 0/0 .text            e_dn_wolfbite__FP10e_dn_class */
static void e_dn_wolfbite(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E7B34-804E7B74 002A74 0040+00 1/1 0/0 0/0 .text            way_check__FP10e_dn_class */
static void way_check(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE974-804EE978 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4933 = 1000.0f;
COMPILER_STRIP_GATE(0x804EE974, &lit_4933);
#pragma pop

/* 804EEF90-804EEF94 0000A8 0004+00 2/2 0/0 0/0 .bss             learn_check */
static u8 learn_check[4];

/* 804E7B74-804E7D18 002AB4 01A4+00 1/1 0/0 0/0 .text            shot_s_sub__FPvPv */
static void shot_s_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE978-804EE97C 0000CC 0004+00 0/2 0/0 0/0 .rodata          @5115 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5115 = 120.0f;
COMPILER_STRIP_GATE(0x804EE978, &lit_5115);
#pragma pop

/* 804EE97C-804EE980 0000D0 0004+00 0/1 0/0 0/0 .rodata          @5116 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5116 = 32763.0f;
COMPILER_STRIP_GATE(0x804EE97C, &lit_5116);
#pragma pop

/* 804EE980-804EE984 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5117 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5117 = 0.75f;
COMPILER_STRIP_GATE(0x804EE980, &lit_5117);
#pragma pop

/* 804EE984-804EE988 0000D8 0004+00 0/4 0/0 0/0 .rodata          @5118 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5118 = 0.5f;
COMPILER_STRIP_GATE(0x804EE984, &lit_5118);
#pragma pop

/* 804EE988-804EE98C 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5119 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5119 = 19.0f / 10.0f;
COMPILER_STRIP_GATE(0x804EE988, &lit_5119);
#pragma pop

/* 804E7D18-804E8620 002C58 0908+00 1/1 0/0 0/0 .text            e_dn_fight_run__FP10e_dn_class */
static void e_dn_fight_run(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E8620-804E8848 003560 0228+00 1/1 0/0 0/0 .text            e_dn_jump__FP10e_dn_class */
static void e_dn_jump(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE98C-804EE990 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5272 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5272 = 35.0f;
COMPILER_STRIP_GATE(0x804EE98C, &lit_5272);
#pragma pop

/* 804E8848-804E8D78 003788 0530+00 1/1 0/0 0/0 .text            e_dn_gakejump__FP10e_dn_class */
static void e_dn_gakejump(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E8D78-804E8DD8 003CB8 0060+00 2/2 0/0 0/0 .text            at_hit_check__FP10e_dn_class */
static void at_hit_check(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE990-804EE994 0000E4 0004+00 0/2 0/0 0/0 .rodata          @5333 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5333 = 6.0f;
COMPILER_STRIP_GATE(0x804EE990, &lit_5333);
#pragma pop

/* 804E8DD8-804E8F78 003D18 01A0+00 1/1 0/0 0/0 .text            e_dn_attack_0__FP10e_dn_class */
static void e_dn_attack_0(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E8F78-804E91D4 003EB8 025C+00 1/1 0/0 0/0 .text            e_dn_attack__FP10e_dn_class */
static void e_dn_attack(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E91D4-804E9354 004114 0180+00 1/1 0/0 0/0 .text            tail_eff_set__FP10e_dn_class */
static void tail_eff_set(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E9354-804E9544 004294 01F0+00 1/1 0/0 0/0 .text            e_dn_tail_attack__FP10e_dn_class */
static void e_dn_tail_attack(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE994-804EE998 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5542 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5542 = -8.0f;
COMPILER_STRIP_GATE(0x804EE994, &lit_5542);
#pragma pop

/* 804E9544-804E973C 004484 01F8+00 2/1 0/0 0/0 .text            e_dn_guard__FP10e_dn_class */
static void e_dn_guard(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E973C-804E97EC 00467C 00B0+00 1/1 0/0 0/0 .text            e_dn_s_damage__FP10e_dn_class */
static void e_dn_s_damage(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE998-804EE99C 0000EC 0004+00 0/0 0/0 0/0 .rodata          @5543 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5543 = 8.0f;
COMPILER_STRIP_GATE(0x804EE998, &lit_5543);
#pragma pop

/* 804EE99C-804EE9A0 0000F0 0004+00 0/2 0/0 0/0 .rodata          @5592 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5592 = 70.0f;
COMPILER_STRIP_GATE(0x804EE99C, &lit_5592);
#pragma pop

/* 804EE9A0-804EE9A4 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5593 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5593 = -150.0f;
COMPILER_STRIP_GATE(0x804EE9A0, &lit_5593);
#pragma pop

/* 804E97EC-804E99A0 00472C 01B4+00 1/1 0/0 0/0 .text            kado_check__FP10e_dn_class */
static void kado_check(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E99A0-804E9AF0 0048E0 0150+00 1/1 0/0 0/0 .text            body_gake__FP10e_dn_class */
static void body_gake(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804E9AF0-804E9B68 004A30 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
// dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" void __dt__14dBgS_ObjGndChkFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE9A4-804EE9A8 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5977 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5977 = 8000.0f;
COMPILER_STRIP_GATE(0x804EE9A4, &lit_5977);
#pragma pop

/* 804E9B68-804EA700 004AA8 0B98+00 2/1 0/0 0/0 .text            e_dn_damage__FP10e_dn_class */
static void e_dn_damage(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE9A8-804EE9AC 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5978 = -100.0f;
COMPILER_STRIP_GATE(0x804EE9A8, &lit_5978);
#pragma pop

/* 804EE9AC-804EE9B0 000100 0004+00 0/0 0/0 0/0 .rodata          @5979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5979 = 9.0f / 5.0f;
COMPILER_STRIP_GATE(0x804EE9AC, &lit_5979);
#pragma pop

/* 804EE9B0-804EE9B4 000104 0004+00 0/3 0/0 0/0 .rodata          @5980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5980 = -20.0f;
COMPILER_STRIP_GATE(0x804EE9B0, &lit_5980);
#pragma pop

/* 804EE9B4-804EE9B8 000108 0004+00 0/1 0/0 0/0 .rodata          @6004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6004 = -3.0f;
COMPILER_STRIP_GATE(0x804EE9B4, &lit_6004);
#pragma pop

/* 804EE9B8-804EE9BC 00010C 0004+00 0/1 0/0 0/0 .rodata          @6005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6005 = -6.0f;
COMPILER_STRIP_GATE(0x804EE9B8, &lit_6005);
#pragma pop

/* 804EA700-804EA854 005640 0154+00 1/1 0/0 0/0 .text            e_dn_backdrop__FP10e_dn_class */
static void e_dn_backdrop(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804EA854-804EA9F4 005794 01A0+00 1/1 0/0 0/0 .text            e_dn_water__FP10e_dn_class */
static void e_dn_water(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE9BC-804EE9C0 000110 0004+00 0/1 0/0 0/0 .rodata          @6097 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6097 = -8613.0f;
COMPILER_STRIP_GATE(0x804EE9BC, &lit_6097);
#pragma pop

/* 804EE9C0-804EE9C4 000114 0004+00 0/1 0/0 0/0 .rodata          @6098 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6098 = 8017.0f;
COMPILER_STRIP_GATE(0x804EE9C0, &lit_6098);
#pragma pop

/* 804EE9C4-804EE9C8 000118 0004+00 0/1 0/0 0/0 .rodata          @6099 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6099 = -8044.0f;
COMPILER_STRIP_GATE(0x804EE9C4, &lit_6099);
#pragma pop

/* 804EE9C8-804EE9CC 00011C 0004+00 0/1 0/0 0/0 .rodata          @6100 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6100 = 8616.0f;
COMPILER_STRIP_GATE(0x804EE9C8, &lit_6100);
#pragma pop

/* 804EE9CC-804EE9D0 000120 0004+00 0/2 0/0 0/0 .rodata          @6101 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6101 = 3000.0f;
COMPILER_STRIP_GATE(0x804EE9CC, &lit_6101);
#pragma pop

/* 804EE9D0-804EE9D4 000124 0004+00 0/2 0/0 0/0 .rodata          @6102 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6102 = 800.0f;
COMPILER_STRIP_GATE(0x804EE9D0, &lit_6102);
#pragma pop

/* 804EA9F4-804EAD1C 005934 0328+00 1/1 0/0 0/0 .text            e_dn_reg__FP10e_dn_class */
static void e_dn_reg(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804EAD1C-804EADD4 005C5C 00B8+00 1/1 0/0 0/0 .text            wolfkick_damage__FP10e_dn_class */
static void wolfkick_damage(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE9D4-804EE9D8 000128 0004+00 0/1 0/0 0/0 .rodata          @6120 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6120 = 700.0f;
COMPILER_STRIP_GATE(0x804EE9D4, &lit_6120);
#pragma pop

/* 804EADD4-804EAEE4 005D14 0110+00 1/1 0/0 0/0 .text            big_damage__FP10e_dn_class */
static void big_damage(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804EAEE4-804EAF94 005E24 00B0+00 1/1 0/0 0/0 .text            small_damage__FP10e_dn_class */
static void small_damage(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804EAF94-804EB344 005ED4 03B0+00 1/1 0/0 0/0 .text            damage_check__FP10e_dn_class */
static void damage_check(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804EB344-804EC854 006284 1510+00 2/1 0/0 0/0 .text            action__FP10e_dn_class */
static void action(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804EC854-804ECB50 007794 02FC+00 1/1 0/0 0/0 .text            anm_se_set__FP10e_dn_class */
static void anm_se_set(e_dn_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EE9D8-804EE9DC 00012C 0004+00 0/0 0/0 0/0 .rodata          @6928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6928 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x804EE9D8, &lit_6928);
#pragma pop

/* 804EE9DC-804EE9E0 000130 0004+00 0/0 0/0 0/0 .rodata          @6929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6929 = -4.0f;
COMPILER_STRIP_GATE(0x804EE9DC, &lit_6929);
#pragma pop

/* 804EE9E0-804EE9E4 000134 0004+00 0/0 0/0 0/0 .rodata          @6930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6930 = 7.0f;
COMPILER_STRIP_GATE(0x804EE9E0, &lit_6930);
#pragma pop

/* 804EE9E4-804EE9E8 000138 0004+00 0/0 0/0 0/0 .rodata          @6931 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6931 = 2500.0f;
COMPILER_STRIP_GATE(0x804EE9E4, &lit_6931);
#pragma pop

/* 804EE9E8-804EE9EC 00013C 0004+00 0/0 0/0 0/0 .rodata          @6932 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6932 = 15000.0f;
COMPILER_STRIP_GATE(0x804EE9E8, &lit_6932);
#pragma pop

/* 804EE9EC-804EE9F0 000140 0004+00 0/0 0/0 0/0 .rodata          @6933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6933 = 12000.0f;
COMPILER_STRIP_GATE(0x804EE9EC, &lit_6933);
#pragma pop

/* 804EE9F0-804EE9F4 000144 0004+00 0/0 0/0 0/0 .rodata          @6934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6934 = -1000000000.0f;
COMPILER_STRIP_GATE(0x804EE9F0, &lit_6934);
#pragma pop

/* 804EE9F4-804EE9F8 000148 0004+00 0/1 0/0 0/0 .rodata          @7355 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7355 = -10.0f;
COMPILER_STRIP_GATE(0x804EE9F4, &lit_7355);
#pragma pop

/* 804EE9F8-804EE9FC 00014C 0004+00 0/2 0/0 0/0 .rodata          @7356 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7356 = -200.0f;
COMPILER_STRIP_GATE(0x804EE9F8, &lit_7356);
#pragma pop

/* 804EE9FC-804EEA00 000150 0004+00 0/1 0/0 0/0 .rodata          @7357 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7357 = -20000.0f;
COMPILER_STRIP_GATE(0x804EE9FC, &lit_7357);
#pragma pop

/* 804EEA00-804EEA04 000154 0004+00 0/1 0/0 0/0 .rodata          @7358 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7358 = 200000.0f;
COMPILER_STRIP_GATE(0x804EEA00, &lit_7358);
#pragma pop

/* 804EEA04-804EEA08 000158 0004+00 0/1 0/0 0/0 .rodata          @7359 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7359 = 30000.0f;
COMPILER_STRIP_GATE(0x804EEA04, &lit_7359);
#pragma pop

/* 804EEA08-804EEA0C 00015C 0004+00 0/1 0/0 0/0 .rodata          @7360 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7360 = 45.0f;
COMPILER_STRIP_GATE(0x804EEA08, &lit_7360);
#pragma pop

/* 804EEA0C-804EEA10 000160 0004+00 0/2 0/0 0/0 .rodata          @7361 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7361 = 80.0f;
COMPILER_STRIP_GATE(0x804EEA0C, &lit_7361);
#pragma pop

/* 804EEA10-804EEA14 000164 0004+00 0/1 0/0 0/0 .rodata          @7362 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7362 = -23500.0f;
COMPILER_STRIP_GATE(0x804EEA10, &lit_7362);
#pragma pop

/* 804EEA14-804EEA18 000168 0004+00 0/1 0/0 0/0 .rodata          @7363 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7363 = -50000.0f;
COMPILER_STRIP_GATE(0x804EEA14, &lit_7363);
#pragma pop

/* 804EEA18-804EEA1C 00016C 0004+00 0/1 0/0 0/0 .rodata          @7364 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7364 = -30000.0f;
COMPILER_STRIP_GATE(0x804EEA18, &lit_7364);
#pragma pop

/* 804EEA1C-804EEA20 000170 0004+00 0/1 0/0 0/0 .rodata          @7365 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7365 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x804EEA1C, &lit_7365);
#pragma pop

/* 804EEA20-804EEA24 000174 0004+00 0/1 0/0 0/0 .rodata          @7366 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7366 = 180.0f;
COMPILER_STRIP_GATE(0x804EEA20, &lit_7366);
#pragma pop

/* 804EEA24-804EEA28 000178 0004+00 0/1 0/0 0/0 .rodata          @7367 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7367 = -5000.0f;
COMPILER_STRIP_GATE(0x804EEA24, &lit_7367);
#pragma pop

/* 804EEA28-804EEA2C 00017C 0004+00 0/1 0/0 0/0 .rodata          @7368 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7368 = -300.0f;
COMPILER_STRIP_GATE(0x804EEA28, &lit_7368);
#pragma pop

/* 804EEA34-804EEA34 000188 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804EEA39 = "D_MN07";
#pragma pop

/* 804EEF94-804EEF98 0000AC 0004+00 1/2 0/0 0/0 .bss             c_start */
static u8 c_start[4];

/* 804ECB50-804ED83C 007A90 0CEC+00 2/1 0/0 0/0 .text            daE_DN_Execute__FP10e_dn_class */
static void daE_DN_Execute(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804ED83C-804ED844 00877C 0008+00 1/0 0/0 0/0 .text            daE_DN_IsDelete__FP10e_dn_class */
static bool daE_DN_IsDelete(e_dn_class* param_0) {
    return true;
}

/* 804ED844-804ED8AC 008784 0068+00 1/0 0/0 0/0 .text            daE_DN_Delete__FP10e_dn_class */
static void daE_DN_Delete(e_dn_class* param_0) {
    // NONMATCHING
}

/* 804ED8AC-804EDAEC 0087EC 0240+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EEA2C-804EEA30 000180 0004+00 0/1 0/0 0/0 .rodata          @7548 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7548 = 100000.0f;
COMPILER_STRIP_GATE(0x804EEA2C, &lit_7548);
#pragma pop

/* 804EEA30-804EEA34 000184 0004+00 0/1 0/0 0/0 .rodata          @7549 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7549 = 65535.0f;
COMPILER_STRIP_GATE(0x804EEA30, &lit_7549);
#pragma pop

/* 804EDAEC-804EDE58 008A2C 036C+00 1/0 0/0 0/0 .text            daE_DN_Create__FP10fopAc_ac_c */
static void daE_DN_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 804EDE58-804EE034 008D98 01DC+00 1/1 0/0 0/0 .text            __ct__10e_dn_classFv */
e_dn_class::e_dn_class() {
    // NONMATCHING
}

/* 804EE034-804EE07C 008F74 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 804EE07C-804EE0C4 008FBC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 804EE0C4-804EE190 009004 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 804EE190-804EE214 0090D0 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 804EE214-804EE270 009154 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 804EE270-804EE2E0 0091B0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 804EE2E0-804EE350 009220 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 804EE350-804EE354 009290 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 804EE354-804EE39C 009294 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 804EE39C-804EE3E4 0092DC 0048+00 2/1 0/0 0/0 .text            __dt__12daE_DN_HIO_cFv */
daE_DN_HIO_c::~daE_DN_HIO_c() {
    // NONMATCHING
}

/* 804EE3E4-804EE420 009324 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_dn_cpp */
void __sinit_d_a_e_dn_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x804EE3E4, __sinit_d_a_e_dn_cpp);
#pragma pop

/* 804EE420-804EE428 009360 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
static void func_804EE420() {
    // NONMATCHING
}

/* 804EE428-804EE430 009368 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
static void func_804EE428() {
    // NONMATCHING
}

/* 804EE430-804EE438 009370 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
static void func_804EE430() {
    // NONMATCHING
}

/* 804EE438-804EE440 009378 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_804EE438() {
    // NONMATCHING
}

/* 804EE440-804EE448 009380 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_804EE440() {
    // NONMATCHING
}

/* 804EE448-804EE85C 009388 0414+00 1/1 0/0 0/0 .text
 * setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz */
static void setMidnaBindEffect(fopEn_enemy_c* param_0, Z2CreatureEnemy* param_1, cXyz* param_2,
                                   cXyz* param_3) {
    // NONMATCHING
}

/* 804EE85C-804EE898 00979C 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804EEF98-804EEF9C 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_804EEF98[4];
#pragma pop

/* 804EEF9C-804EEFA0 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_804EEF9C[4];
#pragma pop

/* 804EEFA0-804EEFA4 0000B8 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_804EEFA0[4];
#pragma pop

/* 804EEFA4-804EEFA8 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804EEFA4[4];
#pragma pop

/* 804EEFA8-804EEFAC 0000C0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804EEFA8[4];
#pragma pop

/* 804EEFAC-804EEFB0 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804EEFAC[4];
#pragma pop

/* 804EEFB0-804EEFB4 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_804EEFB0[4];
#pragma pop

/* 804EEFB4-804EEFB8 0000CC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_804EEFB4[4];
#pragma pop

/* 804EEFB8-804EEFBC 0000D0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_804EEFB8[4];
#pragma pop

/* 804EEFBC-804EEFC0 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_804EEFBC[4];
#pragma pop

/* 804EEFC0-804EEFC4 0000D8 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_804EEFC0[4];
#pragma pop

/* 804EEFC4-804EEFC8 0000DC 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804EEFC4[4];
#pragma pop

/* 804EEFC8-804EEFCC 0000E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_804EEFC8[4];
#pragma pop

/* 804EEFCC-804EEFD0 0000E4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804EEFCC[4];
#pragma pop

/* 804EEFD0-804EEFD4 0000E8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804EEFD0[4];
#pragma pop

/* 804EEFD4-804EEFD8 0000EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_804EEFD4[4];
#pragma pop

/* 804EEFD8-804EEFDC 0000F0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_804EEFD8[4];
#pragma pop

/* 804EEFDC-804EEFE0 0000F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804EEFDC[4];
#pragma pop

/* 804EEFE0-804EEFE4 0000F8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_804EEFE0[4];
#pragma pop

/* 804EEFE4-804EEFE8 0000FC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_804EEFE4[4];
#pragma pop

/* 804EEFE8-804EEFEC 000100 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_804EEFE8[4];
#pragma pop

/* 804EEFEC-804EEFF0 000104 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804EEFEC[4];
#pragma pop

/* 804EEFF0-804EEFF4 000108 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804EEFF0[4];
#pragma pop

/* 804EEFF4-804EEFF8 00010C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804EEFF4[4];
#pragma pop

/* 804EEFF8-804EEFFC 000110 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_804EEFF8[4];
#pragma pop

/* 804EEA34-804EEA34 000188 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
