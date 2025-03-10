/**
 * @file d_a_obj_Y_taihou.cpp
 * 
*/

#include "d/actor/d_a_obj_Y_taihou.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
#include "d/actor/d_a_obj_carry.h"

//
// Forward References:
//

extern "C" static void ccHitCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void pushPullcallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel();
extern "C" void __dt__4cXyzFv();
extern "C" static void searchIronBallCallback__FPvPv();
extern "C" void create1st__14daObjYtaihou_cFv();
extern "C" void setIronBall__14daObjYtaihou_cFP12daObjCarry_c();
extern "C" void getEvent__14daObjYtaihou_cFUc();
extern "C" void loadAngle__14daObjYtaihou_cFv();
extern "C" void saveAngle__14daObjYtaihou_cFv();
extern "C" void setNextAngle__14daObjYtaihou_cFv();
extern "C" void setMtx__14daObjYtaihou_cFv();
extern "C" void rotateCheck__14daObjYtaihou_cFv();
extern "C" void shotCheck__14daObjYtaihou_cFv();
extern "C" void eventStart__14daObjYtaihou_cFv();
extern "C" void CreateHeap__14daObjYtaihou_cFv();
extern "C" void Create__14daObjYtaihou_cFv();
extern "C" void Execute__14daObjYtaihou_cFPPA3_A4_f();
extern "C" void Draw__14daObjYtaihou_cFv();
extern "C" void Delete__14daObjYtaihou_cFv();
extern "C" static void daObjYtaihou_create1st__FP14daObjYtaihou_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" static void daObjYtaihou_MoveBGDelete__FP14daObjYtaihou_c();
extern "C" static void daObjYtaihou_MoveBGExecute__FP14daObjYtaihou_c();
extern "C" static void daObjYtaihou_MoveBGDraw__FP14daObjYtaihou_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__14daObjYtaihou_cFv();
extern "C" void func_80BA1118(void* _this, s16*);
extern "C" static void func_80BA1134();
extern "C" static void func_80BA113C();
extern "C" extern char const* const d_a_obj_Y_taihou__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void orderEvent__17dEvLib_callback_cFiii();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_distanceAngleS__Fss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BA1154-80BA1158 000000 0004+00 4/4 0/0 0/0 .rodata          @3695 */
SECTION_RODATA static f32 const lit_3695 = 150.0f;
COMPILER_STRIP_GATE(0x80BA1154, &lit_3695);

/* 80BA1158-80BA115C 000004 0004+00 0/1 0/0 0/0 .rodata          @3696 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3696 = 200.0f;
COMPILER_STRIP_GATE(0x80BA1158, &lit_3696);
#pragma pop

/* 80BA115C-80BA1160 000008 0004+00 0/3 0/0 0/0 .rodata          @3697 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3697 = 1.0f;
COMPILER_STRIP_GATE(0x80BA115C, &lit_3697);
#pragma pop

/* 80BA1160-80BA1164 00000C 0004+00 0/3 0/0 0/0 .rodata          @3698 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3698 = -1.0f;
COMPILER_STRIP_GATE(0x80BA1160, &lit_3698);
#pragma pop

/* 80B9FAEC-80B9FC40 0000EC 0154+00 1/1 0/0 0/0 .text
 * ccHitCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void ccHitCallback(fopAc_ac_c* param_0, dCcD_GObjInf* param_1, fopAc_ac_c* param_2,
                              dCcD_GObjInf* param_3) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA1164-80BA1168 000010 0004+00 1/3 0/0 0/0 .rodata          @3733 */
SECTION_RODATA static u8 const lit_3733[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BA1164, &lit_3733);

/* 80B9FC40-80B9FD20 000240 00E0+00 1/1 0/0 0/0 .text
 * pushPullcallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel */
static void pushPullcallBack(fopAc_ac_c* param_0, fopAc_ac_c* param_1, s16 param_2,
                                 dBgW_Base::PushPullLabel param_3) {
    // NONMATCHING
}

/* 80B9FD20-80B9FD5C 000320 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA1168-80BA116C 000014 0004+00 1/1 0/0 0/0 .rodata          @3749 */
SECTION_RODATA static f32 const lit_3749 = 40000.0f;
COMPILER_STRIP_GATE(0x80BA1168, &lit_3749);

/* 80B9FD5C-80B9FDE8 00035C 008C+00 1/1 0/0 0/0 .text            searchIronBallCallback__FPvPv */
static void searchIronBallCallback(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA11D4-80BA11D4 000080 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BA11D4 = "Y_taihou";
#pragma pop

/* 80BA11E0-80BA11E4 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_Y_taihou__stringBase0;

/* 80B9FDE8-80B9FEB0 0003E8 00C8+00 1/1 0/0 0/0 .text            create1st__14daObjYtaihou_cFv */
void daObjYtaihou_c::create1st() {
    // NONMATCHING
}

/* 80B9FEB0-80B9FF08 0004B0 0058+00 3/3 0/0 0/0 .text
 * setIronBall__14daObjYtaihou_cFP12daObjCarry_c                */
void daObjYtaihou_c::setIronBall(daObjCarry_c* param_0) {
    // NONMATCHING
}

/* 80B9FF08-80B9FF1C 000508 0014+00 1/1 0/0 0/0 .text            getEvent__14daObjYtaihou_cFUc */
void daObjYtaihou_c::getEvent(u8 param_0) {
    // NONMATCHING
}

/* 80B9FF1C-80B9FFAC 00051C 0090+00 1/1 0/0 0/0 .text            loadAngle__14daObjYtaihou_cFv */
void daObjYtaihou_c::loadAngle() {
    // NONMATCHING
}

/* 80B9FFAC-80BA0060 0005AC 00B4+00 1/1 0/0 0/0 .text            saveAngle__14daObjYtaihou_cFv */
void daObjYtaihou_c::saveAngle() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA11E4-80BA1228 000004 0044+00 1/1 0/0 0/0 .data            l_cc_cyl_src */
static dCcD_SrcCyl l_cc_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x79}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        120.0f, // mRadius
        200.0f // mHeight
    } // mCyl
};

/* 80BA1228-80BA1230 000048 0008+00 1/1 0/0 0/0 .data            l_offsetAngle$3829 */
SECTION_DATA static u8 l_offsetAngle[8] = {
    0x00, 0x00, 0xC0, 0x00, 0x80, 0x00, 0x40, 0x00,
};

/* 80BA0060-80BA0084 000660 0024+00 2/2 0/0 0/0 .text            setNextAngle__14daObjYtaihou_cFv */
void daObjYtaihou_c::setNextAngle() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA116C-80BA1170 000018 0004+00 0/1 0/0 0/0 .rodata          @3852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3852 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BA116C, &lit_3852);
#pragma pop

/* 80BA1170-80BA1174 00001C 0004+00 0/1 0/0 0/0 .rodata          @3853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3853 = 60.0f;
COMPILER_STRIP_GATE(0x80BA1170, &lit_3853);
#pragma pop

/* 80BA1174-80BA1178 000020 0004+00 0/1 0/0 0/0 .rodata          @3854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3854 = 59.0f;
COMPILER_STRIP_GATE(0x80BA1174, &lit_3854);
#pragma pop

/* 80BA1178-80BA117C 000024 0004+00 0/1 0/0 0/0 .rodata          @3855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3855 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BA1178, &lit_3855);
#pragma pop

/* 80BA117C-80BA1184 000028 0004+04 0/1 0/0 0/0 .rodata          @3856 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3856[1 + 1 /* padding */] = {
    2.0f / 5.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BA117C, &lit_3856);
#pragma pop

/* 80BA1184-80BA118C 000030 0008+00 0/1 0/0 0/0 .rodata          @3858 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3858[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BA1184, &lit_3858);
#pragma pop

/* 80BA1318-80BA131C 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80BA131C-80BA1320 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80BA1320-80BA1324 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80BA1324-80BA1328 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80BA1328-80BA132C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80BA132C-80BA1330 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80BA1330-80BA1334 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80BA1334-80BA1338 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80BA1338-80BA133C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80BA133C-80BA1340 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80BA1340-80BA1344 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80BA1344-80BA1348 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80BA1348-80BA134C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80BA134C-80BA1350 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80BA1350-80BA1354 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80BA1354-80BA1358 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80BA1358-80BA135C 000048 0004+00 1/1 0/0 0/0 .bss             l_wheelMinR$3836 */
static u8 l_wheelMinR[4];

/* 80BA135C-80BA1360 00004C 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80BA135C[4];

/* 80BA0084-80BA0208 000684 0184+00 2/2 0/0 0/0 .text            setMtx__14daObjYtaihou_cFv */
void daObjYtaihou_c::setMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA118C-80BA1190 000038 0004+00 0/1 0/0 0/0 .rodata          @3915 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3915 = 10.0f;
COMPILER_STRIP_GATE(0x80BA118C, &lit_3915);
#pragma pop

/* 80BA0208-80BA045C 000808 0254+00 1/1 0/0 0/0 .text            rotateCheck__14daObjYtaihou_cFv */
void daObjYtaihou_c::rotateCheck() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA1190-80BA119C 00003C 000C+00 0/1 0/0 0/0 .rodata          l_hibanaOffset$3954 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_hibanaOffset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BA1190, &l_hibanaOffset);
#pragma pop

/* 80BA119C-80BA11A8 000048 000C+00 0/1 0/0 0/0 .rodata          l_shotOffset$3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_shotOffset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x43, 0x02, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BA119C, &l_shotOffset);
#pragma pop

/* 80BA11A8-80BA11B4 000054 000C+00 0/1 0/0 0/0 .rodata          l_shotSmokeOffset$3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_shotSmokeOffset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BA11A8, &l_shotSmokeOffset);
#pragma pop

/* 80BA11B4-80BA11B8 000060 0004+00 0/1 0/0 0/0 .rodata          @4105 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4105 = 55.0f;
COMPILER_STRIP_GATE(0x80BA11B4, &lit_4105);
#pragma pop

/* 80BA11B8-80BA11BC 000064 0004+00 0/1 0/0 0/0 .rodata          @4106 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4106 = 95.0f;
COMPILER_STRIP_GATE(0x80BA11B8, &lit_4106);
#pragma pop

/* 80BA11BC-80BA11C0 000068 0004+00 0/1 0/0 0/0 .rodata          @4107 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4107 = 9.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BA11BC, &lit_4107);
#pragma pop

/* 80BA11C0-80BA11C4 00006C 0004+00 0/1 0/0 0/0 .rodata          @4108 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4108 = 210.0f;
COMPILER_STRIP_GATE(0x80BA11C0, &lit_4108);
#pragma pop

/* 80BA11C4-80BA11C8 000070 0004+00 0/1 0/0 0/0 .rodata          @4109 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4109 = 40.0f;
COMPILER_STRIP_GATE(0x80BA11C4, &lit_4109);
#pragma pop

/* 80BA1360-80BA1370 000050 000C+04 0/1 0/0 0/0 .bss             @3951 */
#pragma push
#pragma force_active on
static u8 lit_3951[12 + 4 /* padding */];
#pragma pop

/* 80BA1370-80BA137C 000060 000C+00 0/1 0/0 0/0 .bss             l_effectScale$3950 */
#pragma push
#pragma force_active on
static u8 l_effectScale[12];
#pragma pop

/* 80BA045C-80BA0964 000A5C 0508+00 1/1 0/0 0/0 .text            shotCheck__14daObjYtaihou_cFv */
void daObjYtaihou_c::shotCheck() {
    // NONMATCHING
}

/* 80BA0964-80BA0974 000F64 0010+00 2/1 0/0 0/0 .text            eventStart__14daObjYtaihou_cFv */
void daObjYtaihou_c::eventStart() {
    // NONMATCHING
}

/* 80BA0974-80BA09E4 000F74 0070+00 1/0 0/0 0/0 .text            CreateHeap__14daObjYtaihou_cFv */
void daObjYtaihou_c::CreateHeap() {
    // NONMATCHING
}

/* 80BA09E4-80BA0A94 000FE4 00B0+00 1/0 0/0 0/0 .text            Create__14daObjYtaihou_cFv */
void daObjYtaihou_c::Create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA11C8-80BA11D4 000074 000C+00 1/1 0/0 0/0 .rodata          l_cc_offset$4147 */
SECTION_RODATA static u8 const l_cc_offset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BA11C8, &l_cc_offset);

/* 80BA0A94-80BA0B4C 001094 00B8+00 1/0 0/0 0/0 .text            Execute__14daObjYtaihou_cFPPA3_A4_f
 */
void daObjYtaihou_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80BA0B4C-80BA0C1C 00114C 00D0+00 1/0 0/0 0/0 .text            Draw__14daObjYtaihou_cFv */
void daObjYtaihou_c::Draw() {
    // NONMATCHING
}

/* 80BA0C1C-80BA0C88 00121C 006C+00 1/0 0/0 0/0 .text            Delete__14daObjYtaihou_cFv */
void daObjYtaihou_c::Delete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA1230-80BA1250 -00001 0020+00 1/0 0/0 0/0 .data            daObjYtaihou_METHODS */
static actor_method_class daObjYtaihou_METHODS = {
    (process_method_func)daObjYtaihou_create1st__FP14daObjYtaihou_c,
    (process_method_func)daObjYtaihou_MoveBGDelete__FP14daObjYtaihou_c,
    (process_method_func)daObjYtaihou_MoveBGExecute__FP14daObjYtaihou_c,
    0,
    (process_method_func)daObjYtaihou_MoveBGDraw__FP14daObjYtaihou_c,
};

/* 80BA1250-80BA1280 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Ytaihou */
extern actor_process_profile_definition g_profile_Obj_Ytaihou = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Ytaihou,       // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjYtaihou_c), // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  635,                    // mPriority
  &daObjYtaihou_METHODS,  // sub_method
  0x00044100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80BA1280-80BA128C 0000A0 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BA128C-80BA1298 0000AC 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BA1298-80BA12A4 0000B8 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BA12A4-80BA12B0 0000C4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BA12B0-80BA12C8 0000D0 0018+00 3/3 0/0 0/0 .data            __vt__17dEvLib_callback_c */
SECTION_DATA extern void* __vt__17dEvLib_callback_c[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dEvLib_callback_cFv,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80BA12C8-80BA1310 0000E8 0048+00 2/2 0/0 0/0 .data            __vt__14daObjYtaihou_c */
SECTION_DATA extern void* __vt__14daObjYtaihou_c[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__14daObjYtaihou_cFv,
    (void*)Create__14daObjYtaihou_cFv,
    (void*)Execute__14daObjYtaihou_cFPPA3_A4_f,
    (void*)Draw__14daObjYtaihou_cFv,
    (void*)Delete__14daObjYtaihou_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BA113C,
    (void*)func_80BA1134,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
    (void*)eventStart__14daObjYtaihou_cFv,
    (void*)__dt__14daObjYtaihou_cFv,
};

/* 80BA0C88-80BA0DA4 001288 011C+00 1/0 0/0 0/0 .text daObjYtaihou_create1st__FP14daObjYtaihou_c
 */
static void daObjYtaihou_create1st(daObjYtaihou_c* param_0) {
    // NONMATCHING
}

/* 80BA0DA4-80BA0DEC 0013A4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80BA0DEC-80BA0E34 0013EC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80BA0E34-80BA0E90 001434 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80BA0E90-80BA0EB0 001490 0020+00 1/0 0/0 0/0 .text
 * daObjYtaihou_MoveBGDelete__FP14daObjYtaihou_c                */
static void daObjYtaihou_MoveBGDelete(daObjYtaihou_c* param_0) {
    // NONMATCHING
}

/* 80BA0EB0-80BA0ED0 0014B0 0020+00 1/0 0/0 0/0 .text
 * daObjYtaihou_MoveBGExecute__FP14daObjYtaihou_c               */
static void daObjYtaihou_MoveBGExecute(daObjYtaihou_c* param_0) {
    // NONMATCHING
}

/* 80BA0ED0-80BA0EFC 0014D0 002C+00 1/0 0/0 0/0 .text daObjYtaihou_MoveBGDraw__FP14daObjYtaihou_c
 */
static void daObjYtaihou_MoveBGDraw(daObjYtaihou_c* param_0) {
    // NONMATCHING
}

/* 80BA0EFC-80BA0F44 0014FC 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80BA0F44-80BA0F8C 001544 0048+00 1/0 0/0 0/0 .text            __dt__17dEvLib_callback_cFv */
// dEvLib_callback_c::~dEvLib_callback_c() {
extern "C" void __dt__17dEvLib_callback_cFv() {
    // NONMATCHING
}

/* 80BA0F8C-80BA0F94 00158C 0008+00 1/0 0/0 0/0 .text            eventStart__17dEvLib_callback_cFv
 */
// bool dEvLib_callback_c::eventStart() {
extern "C" bool eventStart__17dEvLib_callback_cFv() {
    return true;
}

/* 80BA0F94-80BA0F9C 001594 0008+00 2/0 0/0 0/0 .text            eventRun__17dEvLib_callback_cFv */
// bool dEvLib_callback_c::eventRun() {
extern "C" bool eventRun__17dEvLib_callback_cFv() {
    return true;
}

/* 80BA0F9C-80BA0FA4 00159C 0008+00 2/0 0/0 0/0 .text            eventEnd__17dEvLib_callback_cFv */
// bool dEvLib_callback_c::eventEnd() {
extern "C" bool eventEnd__17dEvLib_callback_cFv() {
    return true;
}

/* 80BA0FA4-80BA1118 0015A4 0174+00 2/1 0/0 0/0 .text            __dt__14daObjYtaihou_cFv */
daObjYtaihou_c::~daObjYtaihou_c() {
    // NONMATCHING
}

/* 80BA1118-80BA1134 001718 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<s>__FPs */
extern "C" void func_80BA1118(void* _this, s16* param_0) {
    // NONMATCHING
}

/* 80BA1134-80BA113C 001734 0008+00 1/0 0/0 0/0 .text @1448@eventStart__14daObjYtaihou_cFv */
static void func_80BA1134() {
    // NONMATCHING
}

/* 80BA113C-80BA1144 00173C 0008+00 1/0 0/0 0/0 .text            @1448@__dt__14daObjYtaihou_cFv */
static void func_80BA113C() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BA137C-80BA1380 00006C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80BA137C[4];
#pragma pop

/* 80BA1380-80BA1384 000070 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80BA1380[4];
#pragma pop

/* 80BA1384-80BA1388 000074 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80BA1384[4];
#pragma pop

/* 80BA1388-80BA138C 000078 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80BA1388[4];
#pragma pop

/* 80BA138C-80BA1390 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BA138C[4];
#pragma pop

/* 80BA1390-80BA1394 000080 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BA1390[4];
#pragma pop

/* 80BA1394-80BA1398 000084 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80BA1394[4];
#pragma pop

/* 80BA1398-80BA139C 000088 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80BA1398[4];
#pragma pop

/* 80BA139C-80BA13A0 00008C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80BA139C[4];
#pragma pop

/* 80BA13A0-80BA13A4 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80BA13A0[4];
#pragma pop

/* 80BA13A4-80BA13A8 000094 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80BA13A4[4];
#pragma pop

/* 80BA13A8-80BA13AC 000098 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80BA13A8[4];
#pragma pop

/* 80BA13AC-80BA13B0 00009C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80BA13AC[4];
#pragma pop

/* 80BA13B0-80BA13B4 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BA13B0[4];
#pragma pop

/* 80BA13B4-80BA13B8 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80BA13B4[4];
#pragma pop

/* 80BA13B8-80BA13BC 0000A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80BA13B8[4];
#pragma pop

/* 80BA13BC-80BA13C0 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80BA13BC[4];
#pragma pop

/* 80BA13C0-80BA13C4 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80BA13C0[4];
#pragma pop

/* 80BA13C4-80BA13C8 0000B4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80BA13C4[4];
#pragma pop

/* 80BA13C8-80BA13CC 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80BA13C8[4];
#pragma pop

/* 80BA13CC-80BA13D0 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80BA13CC[4];
#pragma pop

/* 80BA13D0-80BA13D4 0000C0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BA13D0[4];
#pragma pop

/* 80BA13D4-80BA13D8 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BA13D4[4];
#pragma pop

/* 80BA13D8-80BA13DC 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BA13D8[4];
#pragma pop

/* 80BA13DC-80BA13E0 0000CC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80BA13DC[4];
#pragma pop

/* 80BA11D4-80BA11D4 000080 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
