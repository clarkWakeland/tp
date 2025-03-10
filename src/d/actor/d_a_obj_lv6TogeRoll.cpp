/**
 * @file d_a_obj_lv6TogeRoll.cpp
 * 
*/

#include "d/actor/d_a_obj_lv6TogeRoll.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__16daTogeRoll_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daTogeRoll_cFv();
extern "C" void CreateHeap__12daTogeRoll_cFv();
extern "C" void create__12daTogeRoll_cFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void Execute__12daTogeRoll_cFPPA3_A4_f();
extern "C" void moveTogeRoll__12daTogeRoll_cFv();
extern "C" void init_modeBound__12daTogeRoll_cFv();
extern "C" void modeBound__12daTogeRoll_cFv();
extern "C" void modeBound2__12daTogeRoll_cFv();
extern "C" void init_modeBoundWait__12daTogeRoll_cFv();
extern "C" void modeBoundWait__12daTogeRoll_cFv();
extern "C" void init_modeAcc__12daTogeRoll_cFv();
extern "C" void modeAcc__12daTogeRoll_cFv();
extern "C" void init_modeMove__12daTogeRoll_cFv();
extern "C" void modeMove__12daTogeRoll_cFv();
extern "C" void init_modeBrk__12daTogeRoll_cFv();
extern "C" void modeBrk__12daTogeRoll_cFv();
extern "C" void init_modeWaitInit__12daTogeRoll_cFv();
extern "C" void modeWaitInit__12daTogeRoll_cFv();
extern "C" void init_modeWait__12daTogeRoll_cFv();
extern "C" void modeWait__12daTogeRoll_cFv();
extern "C" void init_modeBreak__12daTogeRoll_cFv();
extern "C" void modeBreak__12daTogeRoll_cFv();
extern "C" void setNextPoint__12daTogeRoll_cFv();
extern "C" void Draw__12daTogeRoll_cFv();
extern "C" void Delete__12daTogeRoll_cFv();
extern "C" static void daTogeRoll_Draw__FP12daTogeRoll_c();
extern "C" static void daTogeRoll_Execute__FP12daTogeRoll_c();
extern "C" static void daTogeRoll_Delete__FP12daTogeRoll_c();
extern "C" static void daTogeRoll_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__16daTogeRoll_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv6TogeRoll_cpp();
extern "C" u8 const mCcDObjInfo__12daTogeRoll_c[48];
extern "C" u8 const mCcDObjInfo2__12daTogeRoll_c[48];
extern "C" u8 const mSpeed__12daTogeRoll_c[64];
extern "C" extern char const* const d_a_obj_lv6TogeRoll__stringBase0;
extern "C" u8 mCcDSph__12daTogeRoll_c[64];
extern "C" u8 mCcDCps__12daTogeRoll_c[76];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitObjSe__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalizeZP__4cXyzFv();
extern "C" bool __eq__4cXyzCFRC3Vec();
extern "C" void cM3d_InDivPos2__FPC3VecPC3VecfP3Vec();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void Set__8cM3dGCpsFRC9cM3dGCpsS();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C799E4-80C799E8 000000 0004+00 6/6 0/0 0/0 .rodata          @3651 */
SECTION_RODATA static f32 const lit_3651 = 10.0f;
COMPILER_STRIP_GATE(0x80C799E4, &lit_3651);

/* 80C799E8-80C799EC 000004 0004+00 0/2 0/0 0/0 .rodata          @3652 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3652 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C799E8, &lit_3652);
#pragma pop

/* 80C799EC-80C799F0 000008 0004+00 2/5 0/0 0/0 .rodata          @3653 */
SECTION_RODATA static f32 const lit_3653 = 50.0f;
COMPILER_STRIP_GATE(0x80C799EC, &lit_3653);

/* 80C79AEC-80C79AF8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C79AF8-80C79B0C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80C79B0C-80C79B4C 000020 0040+00 2/2 0/0 0/0 .data            mCcDSph__12daTogeRoll_c */
SECTION_DATA u8 daTogeRoll_c::mCcDSph[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C79B4C-80C79B98 000060 004C+00 2/2 0/0 0/0 .data            mCcDCps__12daTogeRoll_c */
SECTION_DATA u8 daTogeRoll_c::mCcDCps[76] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x89, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00,
};

/* 80C79B98-80C79BA4 -00001 000C+00 0/1 0/0 0/0 .data            @3971 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3971[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeAcc__12daTogeRoll_cFv,
};
#pragma pop

/* 80C79BA4-80C79BB0 -00001 000C+00 0/1 0/0 0/0 .data            @3972 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3972[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMove__12daTogeRoll_cFv,
};
#pragma pop

/* 80C79BB0-80C79BBC -00001 000C+00 0/1 0/0 0/0 .data            @3973 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3973[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBrk__12daTogeRoll_cFv,
};
#pragma pop

/* 80C79BBC-80C79BC8 -00001 000C+00 0/1 0/0 0/0 .data            @3974 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3974[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__12daTogeRoll_cFv,
};
#pragma pop

/* 80C79BC8-80C79BD4 -00001 000C+00 0/1 0/0 0/0 .data            @3975 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3975[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWaitInit__12daTogeRoll_cFv,
};
#pragma pop

/* 80C79BD4-80C79BE0 -00001 000C+00 0/1 0/0 0/0 .data            @3976 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3976[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBreak__12daTogeRoll_cFv,
};
#pragma pop

/* 80C79BE0-80C79BEC -00001 000C+00 0/1 0/0 0/0 .data            @3977 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3977[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBound__12daTogeRoll_cFv,
};
#pragma pop

/* 80C79BEC-80C79BF8 -00001 000C+00 0/1 0/0 0/0 .data            @3978 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3978[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBound2__12daTogeRoll_cFv,
};
#pragma pop

/* 80C79BF8-80C79C04 -00001 000C+00 0/1 0/0 0/0 .data            @3979 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3979[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBoundWait__12daTogeRoll_cFv,
};
#pragma pop

/* 80C79C04-80C79C70 000118 006C+00 0/1 0/0 0/0 .data            mode_proc$3970 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[108] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C79C70-80C79C90 -00001 0020+00 1/0 0/0 0/0 .data            l_daTogeRoll_Method */
static actor_method_class l_daTogeRoll_Method = {
    (process_method_func)daTogeRoll_Create__FP10fopAc_ac_c,
    (process_method_func)daTogeRoll_Delete__FP12daTogeRoll_c,
    (process_method_func)daTogeRoll_Execute__FP12daTogeRoll_c,
    0,
    (process_method_func)daTogeRoll_Draw__FP12daTogeRoll_c,
};

/* 80C79C90-80C79CC0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv6TogeRoll */
extern actor_process_profile_definition g_profile_Obj_Lv6TogeRoll = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Lv6TogeRoll,   // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daTogeRoll_c),   // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  621,                    // mPriority
  &l_daTogeRoll_Method,   // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C79CC0-80C79CCC 0001D4 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C79CCC-80C79CD8 0001E0 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C79CD8-80C79CE4 0001EC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C79CE4-80C79CF0 0001F8 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C79CF0-80C79D18 000204 0028+00 1/1 0/0 0/0 .data            __vt__12daTogeRoll_c */
SECTION_DATA extern void* __vt__12daTogeRoll_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__12daTogeRoll_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__12daTogeRoll_cFPPA3_A4_f,
    (void*)Draw__12daTogeRoll_cFv,
    (void*)Delete__12daTogeRoll_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C79D18-80C79D24 00022C 000C+00 2/2 0/0 0/0 .data            __vt__16daTogeRoll_HIO_c */
SECTION_DATA extern void* __vt__16daTogeRoll_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daTogeRoll_HIO_cFv,
};

/* 80C79D24-80C79D30 000238 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C77C2C-80C77C80 0000EC 0054+00 1/1 0/0 0/0 .text            __ct__16daTogeRoll_HIO_cFv */
daTogeRoll_HIO_c::daTogeRoll_HIO_c() {
    // NONMATCHING
}

/* 80C77C80-80C77CC8 000140 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
// mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" void __dt__14mDoHIO_entry_cFv() {
    // NONMATCHING
}

/* 80C77CC8-80C77D50 000188 0088+00 2/2 0/0 0/0 .text            setBaseMtx__12daTogeRoll_cFv */
void daTogeRoll_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C79AE4-80C79AE4 000100 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C79AE4 = "togeRol";
#pragma pop

/* 80C77D50-80C77DBC 000210 006C+00 1/0 0/0 0/0 .text            CreateHeap__12daTogeRoll_cFv */
void daTogeRoll_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C799F0-80C79A20 00000C 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo__12daTogeRoll_c */
SECTION_RODATA u8 const daTogeRoll_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
    0xDA, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x0A, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C799F0, &daTogeRoll_c::mCcDObjInfo);

/* 80C79A20-80C79A50 00003C 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo2__12daTogeRoll_c */
SECTION_RODATA u8 const daTogeRoll_c::mCcDObjInfo2[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xDA, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C79A20, &daTogeRoll_c::mCcDObjInfo2);

/* 80C79A50-80C79A90 00006C 0040+00 1/1 0/0 0/0 .rodata          mSpeed__12daTogeRoll_c */
SECTION_RODATA u8 const daTogeRoll_c::mSpeed[64] = {
    0x41, 0x20, 0x00, 0x00, 0x41, 0x85, 0x55, 0x55, 0x41, 0xBA, 0xAA, 0xAB, 0x41, 0xC8, 0x00, 0x00,
    0x41, 0xD5, 0x55, 0x55, 0x41, 0xE2, 0xAA, 0xAB, 0x41, 0xF0, 0x00, 0x00, 0x41, 0xFD, 0x55, 0x55,
    0x42, 0x05, 0x55, 0x55, 0x42, 0x20, 0x00, 0x00, 0x42, 0x3A, 0xAA, 0xAB, 0x42, 0x55, 0x55, 0x55,
    0x42, 0x70, 0x00, 0x00, 0x42, 0x85, 0x55, 0x55, 0x42, 0xA6, 0xAA, 0xAB, 0x40, 0x55, 0x55, 0x55,
};
COMPILER_STRIP_GATE(0x80C79A50, &daTogeRoll_c::mSpeed);

/* 80C77DBC-80C78058 00027C 029C+00 1/1 0/0 0/0 .text            create__12daTogeRoll_cFv */
void daTogeRoll_c::create() {
    // NONMATCHING
}

/* 80C78058-80C780A0 000518 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80C780A0-80C7816C 000560 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80C7816C-80C781F0 00062C 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80C781F0-80C78238 0006B0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80C78238-80C78294 0006F8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C79A90-80C79A94 0000AC 0004+00 4/8 0/0 0/0 .rodata          @3958 */
SECTION_RODATA static u8 const lit_3958[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C79A90, &lit_3958);

/* 80C79A94-80C79A98 0000B0 0004+00 0/1 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3959 = 70.0f;
COMPILER_STRIP_GATE(0x80C79A94, &lit_3959);
#pragma pop

/* 80C79A98-80C79A9C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = 248.0f;
COMPILER_STRIP_GATE(0x80C79A98, &lit_3960);
#pragma pop

/* 80C79A9C-80C79AA0 0000B8 0004+00 0/1 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961 = 270.0f;
COMPILER_STRIP_GATE(0x80C79A9C, &lit_3961);
#pragma pop

/* 80C79AA0-80C79AA4 0000BC 0004+00 0/2 0/0 0/0 .rodata          @3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3962 = 30.0f;
COMPILER_STRIP_GATE(0x80C79AA0, &lit_3962);
#pragma pop

/* 80C79AA4-80C79AAC 0000C0 0008+00 0/2 0/0 0/0 .rodata          @3964 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3964[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C79AA4, &lit_3964);
#pragma pop

/* 80C78294-80C78638 000754 03A4+00 1/0 0/0 0/0 .text            Execute__12daTogeRoll_cFPPA3_A4_f
 */
void daTogeRoll_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C79AAC-80C79AB4 0000C8 0008+00 0/3 0/0 0/0 .rodata          @4071 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4071[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C79AAC, &lit_4071);
#pragma pop

/* 80C79AB4-80C79ABC 0000D0 0008+00 0/3 0/0 0/0 .rodata          @4072 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4072[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C79AB4, &lit_4072);
#pragma pop

/* 80C79ABC-80C79AC4 0000D8 0008+00 0/3 0/0 0/0 .rodata          @4073 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4073[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C79ABC, &lit_4073);
#pragma pop

/* 80C79AC4-80C79AC8 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4074 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4074 = 0x43360B61;
COMPILER_STRIP_GATE(0x80C79AC4, &lit_4074);
#pragma pop

/* 80C79AC8-80C79ACC 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4075 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4075 = 360.0f;
COMPILER_STRIP_GATE(0x80C79AC8, &lit_4075);
#pragma pop

/* 80C79ACC-80C79AD0 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4076 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4076 = 0x439D1463;
COMPILER_STRIP_GATE(0x80C79ACC, &lit_4076);
#pragma pop

/* 80C79D38-80C79D44 000008 000C+00 1/1 0/0 0/0 .bss             @3645 */
static u8 lit_3645[12];

/* 80C79D44-80C79D58 000014 0014+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[20];

/* 80C79D58-80C79D5C 000028 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80C79D58[4];

/* 80C78638-80C78A8C 000AF8 0454+00 1/1 0/0 0/0 .text            moveTogeRoll__12daTogeRoll_cFv */
void daTogeRoll_c::moveTogeRoll() {
    // NONMATCHING
}

/* 80C78A8C-80C78B7C 000F4C 00F0+00 1/1 0/0 0/0 .text            init_modeBound__12daTogeRoll_cFv */
void daTogeRoll_c::init_modeBound() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C79AD0-80C79AD4 0000EC 0004+00 4/7 0/0 0/0 .rodata          @4110 */
SECTION_RODATA static f32 const lit_4110 = 1.0f;
COMPILER_STRIP_GATE(0x80C79AD0, &lit_4110);

/* 80C78B7C-80C78BD8 00103C 005C+00 1/0 0/0 0/0 .text            modeBound__12daTogeRoll_cFv */
void daTogeRoll_c::modeBound() {
    // NONMATCHING
}

/* 80C78BD8-80C78C34 001098 005C+00 1/0 0/0 0/0 .text            modeBound2__12daTogeRoll_cFv */
void daTogeRoll_c::modeBound2() {
    // NONMATCHING
}

/* 80C78C34-80C78C50 0010F4 001C+00 2/2 0/0 0/0 .text init_modeBoundWait__12daTogeRoll_cFv */
void daTogeRoll_c::init_modeBoundWait() {
    // NONMATCHING
}

/* 80C78C50-80C78CA8 001110 0058+00 1/0 0/0 0/0 .text            modeBoundWait__12daTogeRoll_cFv */
void daTogeRoll_c::modeBoundWait() {
    // NONMATCHING
}

/* 80C78CA8-80C78CB4 001168 000C+00 1/1 0/0 0/0 .text            init_modeAcc__12daTogeRoll_cFv */
void daTogeRoll_c::init_modeAcc() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C79AD4-80C79AD8 0000F0 0004+00 0/3 0/0 0/0 .rodata          @4156 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4156 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C79AD4, &lit_4156);
#pragma pop

/* 80C79AD8-80C79ADC 0000F4 0004+00 1/4 0/0 0/0 .rodata          @4157 */
SECTION_RODATA static f32 const lit_4157 = -1.0f;
COMPILER_STRIP_GATE(0x80C79AD8, &lit_4157);

/* 80C78CB4-80C78DA0 001174 00EC+00 1/0 0/0 0/0 .text            modeAcc__12daTogeRoll_cFv */
void daTogeRoll_c::modeAcc() {
    // NONMATCHING
}

/* 80C78DA0-80C78DAC 001260 000C+00 1/1 0/0 0/0 .text            init_modeMove__12daTogeRoll_cFv */
void daTogeRoll_c::init_modeMove() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C79ADC-80C79AE0 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4239 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4239 = 300.0f;
COMPILER_STRIP_GATE(0x80C79ADC, &lit_4239);
#pragma pop

/* 80C78DAC-80C790C4 00126C 0318+00 1/0 0/0 0/0 .text            modeMove__12daTogeRoll_cFv */
void daTogeRoll_c::modeMove() {
    // NONMATCHING
}

/* 80C790C4-80C790D0 001584 000C+00 1/1 0/0 0/0 .text            init_modeBrk__12daTogeRoll_cFv */
void daTogeRoll_c::init_modeBrk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C79AE0-80C79AE4 0000FC 0004+00 0/1 0/0 0/0 .rodata          @4285 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4285 = 0.5f;
COMPILER_STRIP_GATE(0x80C79AE0, &lit_4285);
#pragma pop

/* 80C790D0-80C792CC 001590 01FC+00 1/0 0/0 0/0 .text            modeBrk__12daTogeRoll_cFv */
void daTogeRoll_c::modeBrk() {
    // NONMATCHING
}

/* 80C792CC-80C792E4 00178C 0018+00 2/2 0/0 0/0 .text            init_modeWaitInit__12daTogeRoll_cFv
 */
void daTogeRoll_c::init_modeWaitInit() {
    // NONMATCHING
}

/* 80C792E4-80C79318 0017A4 0034+00 1/0 0/0 0/0 .text            modeWaitInit__12daTogeRoll_cFv */
void daTogeRoll_c::modeWaitInit() {
    // NONMATCHING
}

/* 80C79318-80C79324 0017D8 000C+00 2/2 0/0 0/0 .text            init_modeWait__12daTogeRoll_cFv */
void daTogeRoll_c::init_modeWait() {
    // NONMATCHING
}

/* 80C79324-80C79344 0017E4 0020+00 1/0 0/0 0/0 .text            modeWait__12daTogeRoll_cFv */
void daTogeRoll_c::modeWait() {
    // NONMATCHING
}

/* 80C79344-80C793C8 001804 0084+00 1/1 0/0 0/0 .text            init_modeBreak__12daTogeRoll_cFv */
void daTogeRoll_c::init_modeBreak() {
    // NONMATCHING
}

/* 80C793C8-80C795E8 001888 0220+00 1/0 0/0 0/0 .text            modeBreak__12daTogeRoll_cFv */
void daTogeRoll_c::modeBreak() {
    // NONMATCHING
}

/* 80C795E8-80C79714 001AA8 012C+00 2/2 0/0 0/0 .text            setNextPoint__12daTogeRoll_cFv */
void daTogeRoll_c::setNextPoint() {
    // NONMATCHING
}

/* 80C79714-80C797B8 001BD4 00A4+00 1/0 0/0 0/0 .text            Draw__12daTogeRoll_cFv */
void daTogeRoll_c::Draw() {
    // NONMATCHING
}

/* 80C797B8-80C797FC 001C78 0044+00 1/0 0/0 0/0 .text            Delete__12daTogeRoll_cFv */
void daTogeRoll_c::Delete() {
    // NONMATCHING
}

/* 80C797FC-80C79828 001CBC 002C+00 1/0 0/0 0/0 .text            daTogeRoll_Draw__FP12daTogeRoll_c
 */
static void daTogeRoll_Draw(daTogeRoll_c* param_0) {
    // NONMATCHING
}

/* 80C79828-80C79848 001CE8 0020+00 1/0 0/0 0/0 .text daTogeRoll_Execute__FP12daTogeRoll_c */
static void daTogeRoll_Execute(daTogeRoll_c* param_0) {
    // NONMATCHING
}

/* 80C79848-80C79868 001D08 0020+00 1/0 0/0 0/0 .text            daTogeRoll_Delete__FP12daTogeRoll_c
 */
static void daTogeRoll_Delete(daTogeRoll_c* param_0) {
    // NONMATCHING
}

/* 80C79868-80C79888 001D28 0020+00 1/0 0/0 0/0 .text            daTogeRoll_Create__FP10fopAc_ac_c
 */
static void daTogeRoll_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80C79888-80C798D0 001D48 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80C798D0-80C7992C 001D90 005C+00 2/1 0/0 0/0 .text            __dt__16daTogeRoll_HIO_cFv */
daTogeRoll_HIO_c::~daTogeRoll_HIO_c() {
    // NONMATCHING
}

/* 80C7992C-80C799D0 001DEC 00A4+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lv6TogeRoll_cpp */
void __sinit_d_a_obj_lv6TogeRoll_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C7992C, __sinit_d_a_obj_lv6TogeRoll_cpp);
#pragma pop

/* 80C79AE4-80C79AE4 000100 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
