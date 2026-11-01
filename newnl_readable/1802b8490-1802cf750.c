/* ===== 1802b8490 FUN_1802b8490 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1802b8490(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  float local_130;
  float local_128;
  float local_120;
  undefined4 local_118;
  undefined8 ***local_110;
  undefined1 local_108;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 ***local_c8 [3];
  ulonglong local_b0;
  ulonglong local_a8;
  
  lVar2 = DAT_180ca0a50;
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_158;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x14f8);
  *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)param_3;
  *(undefined1 *)(lVar2 + 0x159) = 1;
  uVar6 = FUN_180415e30("##field",param_4,0);
  cVar7 = FUN_1803dd930(0);
  fVar4 = DAT_1808ac34c;
  if (cVar7 == '\0') {
    fVar11 = 0.0;
  }
  else {
    fVar11 = DAT_1808ac34c;
  }
  _local_f8 = CONCAT44(fStack_f4,*(undefined4 *)(DAT_180ca0a50 + 0x1ee8));
  local_d4 = 0;
  local_d0 = 0xffffffff;
  local_e0 = fVar11;
  local_dc = fVar11;
  local_d8 = fVar11;
  FUN_18034a380(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),&local_f0,&local_f8,&local_e0);
  uVar12 = FUN_1802b3660(local_f0 + 0x14,fVar11,DAT_1808ac118,0);
  lVar2 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x14f8) + 0x2c8);
  local_f8 = (float)*(undefined8 *)param_3 + (float)*(undefined8 *)param_4;
  fStack_f4 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) +
              (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  uVar8 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4,uVar12);
  fVar11 = DAT_1808ac7ac;
  local_130 = 0.0;
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,DAT_1808ac7ac);
  FUN_1803fe590(uVar3,param_3,&local_f8,uVar8);
  local_f0 = _DAT_1808adcf0;
  uStack_e8 = _UNK_1808adcf8;
  local_128 = fVar4;
  local_130 = 0.0;
  local_138 = &local_f0;
  FUN_18036bcb0(uVar3,param_3,&local_f8,DAT_180960eec);
  FUN_1802b3fe0(local_c8,param_2);
  fVar5 = DAT_1808ac880;
  fVar14 = (*param_4 - DAT_1808ac880) - DAT_1808ac934;
  local_108 = FUN_1803dd930(0);
  fVar10 = DAT_1808ac930;
  local_110 = local_c8;
  if (0xf < local_b0) {
    local_110 = local_c8[0];
  }
  fVar1 = param_3[1];
  fVar13 = *param_3 + fVar11;
  local_f0 = CONCAT44(local_f0._4_4_,fVar13);
  fVar9 = (float)FUN_18053f0d0((param_4[1] - DAT_1808ac930) * DAT_1808ac1f4);
  local_130 = fVar13 + fVar14;
  local_118 = DAT_180960ec0;
  local_120 = fStack_f4;
  local_138 = &local_f0;
  local_128 = fVar1;
  local_f0._4_4_ = fVar9 + fVar1;
  FUN_1802b80b0(uVar3,*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),
                *(undefined8 *)(DAT_180ca0a50 + 0x11f0),fVar10);
  fVar10 = (float)FUN_18053fc00();
  local_f0 = CONCAT44(local_f0._4_4_,(local_f8 - fVar11) - fVar10);
  fVar11 = (float)FUN_18053f0d0((param_4[1] - DAT_1808ac8fc) * DAT_1808ac1f4 + param_3[1]);
  local_f0 = CONCAT44(fVar11 + fVar4,(undefined4)local_f0);
  local_128 = (float)DAT_180960ec0;
  local_130 = fVar5;
  local_138 = &local_f0;
  FUN_180322fd0(uVar3,"nl_glyph_angle_down",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M201 343C213 356 234 356 246 343L406 183C419 171 419 150 406 138C394 125 373 125 361 138L224 275L86 138C74 125 53 125 41 138C28 150 28 171 41 183L201 343L201 343ZM201 343Z\"/></svg>"
                ,DAT_1808acbe4);
  FUN_18000f890(local_c8);
  return uVar6;
}



/* ===== 1802b8820 FUN_1802b8820 ===== */

void FUN_1802b8820(float *param_1,float *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
  lVar2 = DAT_180ca0a50;
  fVar5 = *param_2;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
  *(float *)(lVar2 + 0x1f84) = fVar5;
  *(undefined4 *)(lVar2 + 0x1f88) = 0;
  *(undefined4 *)(lVar2 + 0x1f8c) = 0x7f7fffff;
  *(undefined4 *)(lVar2 + 0x1f90) = 0x43513c6a;
  *(undefined8 *)(lVar2 + 0x1f98) = 0;
  *(undefined8 *)(lVar2 + 0x1fa0) = 0;
  uVar1 = FUN_1803e8900(*(undefined8 *)(lVar2 + 0x14f8),"##list");
  lVar2 = FUN_1802b4e80(uVar1);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0xcd) != '\0')) && ('\0' < *(char *)(lVar2 + 0xec))) {
    local_res10 = 0;
    lVar3 = lVar2;
    FUN_1803e24d0(lVar2,local_res18,&local_res10);
    FUN_1803e25f0(local_res18,lVar3,&local_res10,0xffffffff);
    FUN_1803e2390(&local_res10,lVar2,local_res18);
    lVar2 = DAT_180ca0a50;
    fVar5 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
    fVar4 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
    if (fVar5 <= DAT_1808ac7ac) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = DAT_1808ac658;
    }
    fVar6 = DAT_1808ac658;
    if (fVar4 <= DAT_1808ac7ac) {
      fVar6 = 0.0;
    }
    fVar8 = ((*param_2 * DAT_1808ac1f4 + *param_1) - (float)local_res10 * DAT_1808ac1f4) +
            (float)local_res10;
    fVar9 = ((param_2[1] * DAT_1808ac1f4 + param_1[1]) - local_res10._4_4_ * DAT_1808ac1f4) +
            local_res10._4_4_;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    fVar5 = fVar5 - fVar7;
    fVar4 = fVar4 - fVar6;
    *(undefined8 *)(lVar2 + 0x1f50) = 0;
    *(undefined4 *)(lVar2 + 0x1f3c) = 1;
    if (fVar8 <= fVar5) {
      fVar5 = fVar8;
    }
    if (fVar9 <= fVar4) {
      fVar4 = fVar9;
    }
    fVar8 = fVar5 - (float)local_res10;
    if (fVar5 - (float)local_res10 <= fVar7) {
      fVar8 = fVar7;
    }
    fVar5 = fVar4 - local_res10._4_4_;
    if (fVar4 - local_res10._4_4_ <= fVar6) {
      fVar5 = fVar6;
    }
    *(float *)(lVar2 + 0x1f48) = fVar8;
    *(float *)(lVar2 + 0x1f4c) = fVar5;
  }
  DAT_180cd04ad = 1;
  DAT_180cd04ab = 1;
  local_res10 = 0x40c0000040c00000;
  FUN_1802b5260("##list",&local_res10);
  return;
}



/* ===== 1802b8a20 FUN_1802b8a20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b8a20(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar2 = DAT_180ca0a50;
  if (param_1 <= 0.0) {
    param_1 = DAT_180ca0940;
  }
  uVar5 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  DAT_181107168 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  DAT_18110717c = 0.0 < param_1;
  if (!(bool)DAT_18110717c) {
    lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if ((*(longlong *)(lVar1 + 0x1c8) != 0) ||
       (lVar4 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
      lVar4 = 0x250;
    }
    param_1 = (((*(float *)(lVar4 + lVar1) - *(float *)(lVar1 + 0x118)) - 0.0) - DAT_1808ac864) *
              DAT_1808ac1f4;
  }
  _DAT_18110716c = uVar5;
  DAT_181107170 = FUN_18053f0d0(param_1);
  uVar3 = DAT_1811073d4;
  if (DAT_180cd0f09 != '\0') {
    DAT_181107168 = DAT_1811073d0;
    _DAT_18110716c = DAT_1811073d4;
    DAT_18110717c = 1;
    DAT_181107170 = FUN_18053f0d0(DAT_1811074a0);
    uVar5 = uVar3;
  }
  DAT_181107180 = 0;
  DAT_181107174 = uVar5;
  DAT_181107178 = uVar5;
  *(undefined1 *)(*(longlong *)(lVar2 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x14f8) + 0x2c8);
  FUN_180401570(lVar2 + 0x88);
  FUN_180401a80(lVar2 + 0x88,lVar2,1);
  return;
}



/* ===== 1802b8b90 FUN_1802b8b90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b8b90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float local_res14;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_1802b9bd0();
  if (DAT_1809f72e0 != '\0') {
    if ((DAT_180cd0f09 != '\0') && (DAT_180cd040d != '\0')) {
      DAT_1809f72e0 = 0;
      DAT_180cd040d = 0;
      FUN_1803e0390();
      return;
    }
    FUN_180321ea0();
    lVar1 = DAT_180ca0a50;
    local_res14 = DAT_1809f72f8;
    fVar5 = DAT_1809f72fc - DAT_1809f72f8;
    DAT_1809f72e0 = '\0';
    local_res10 = DAT_1809f72f4 + DAT_1809f72f0;
    local_res8 = DAT_1809f72f0;
    fStackX_c = DAT_1809f72f8;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    local_res14 = fVar5 + local_res14;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8);
    FUN_180401a80(lVar1 + 0x88,lVar1,0);
    uVar2 = DAT_180960eec;
    fVar4 = DAT_1808ac34c;
    local_38 = _DAT_1808addb0;
    uStack_30 = _UNK_1808addb8;
    if (0xffffff < DAT_180960f60) {
      FUN_18036b940(lVar1,&local_res8,&local_res10,DAT_180960f60,&local_38,DAT_1808ac34c);
    }
    FUN_18036bcb0(lVar1,&local_res8,&local_res10,uVar2,&local_38,fVar4,fVar4);
    FUN_180401a80(lVar1 + 0x88,lVar1,1);
    lVar1 = DAT_180ca0a50;
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar1 = *(longlong *)(lVar1 + 0x14f8);
    *(ulonglong *)(lVar1 + 0x118) = CONCAT44(fStackX_c,local_res8);
    *(undefined1 *)(lVar1 + 0x159) = 1;
    local_res8 = DAT_1809f72f4;
    fStackX_c = fVar4;
    FUN_1804174f0(&local_res8);
    bVar3 = DAT_180cd0f09 != '\0';
    (&DAT_181107174)[DAT_1809f72e8] = local_res14 + DAT_1808ac924;
    if ((bVar3) && (DAT_180cd0fa4 != '\0')) {
      DAT_18110727c = local_res14;
      DAT_180cd0fa4 = 0;
      FUN_1803e0390();
      return;
    }
  }
  return;
}



/* ===== 1802b8df0 FUN_1802b8df0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802b8df0(char *param_1)

{
  char *pcVar1;
  code *pcVar2;
  byte ****ppppbVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  size_t sVar8;
  ulonglong uVar9;
  byte ****ppppbVar10;
  char **ppcVar11;
  byte ****ppppbVar12;
  undefined1 auStack_138 [32];
  byte ****local_118;
  undefined8 uStack_110;
  size_t local_108;
  ulonglong local_100;
  char *local_f8 [7];
  char *local_c0;
  char *local_b8 [13];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_138;
  if (param_1 == (char *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    local_118 = (byte ****)0x0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    sVar7 = strlen(param_1);
    FUN_1800133a0(&local_118,param_1,sVar7);
    ppppbVar10 = (byte ****)&local_118;
    if (0xf < local_100) {
      ppppbVar10 = local_118;
    }
    ppppbVar12 = (byte ****)((longlong)ppppbVar10 + local_108);
    ppppbVar3 = local_118;
    sVar7 = local_108;
    uVar4 = local_100;
    while( true ) {
      local_118 = ppppbVar3;
      local_108 = sVar7;
      local_100 = uVar4;
      if (ppppbVar10 == ppppbVar12) break;
      iVar5 = tolower((uint)*(byte *)ppppbVar10);
      *(byte *)ppppbVar10 = (byte)iVar5;
      ppppbVar10 = (byte ****)((longlong)ppppbVar10 + 1);
      ppppbVar3 = local_118;
      sVar7 = local_108;
      uVar4 = local_100;
    }
    local_b8[0] = "main";
    local_b8[1] = "selection";
    local_b8[2] = "aimbot";
    local_b8[3] = "view";
    local_b8[4] = "world esp";
    local_b8[5] = "movement";
    local_b8[6] = "enemy";
    local_b8[7] = "enemy model";
    local_b8[8] = "enemy esp";
    local_b8[9] = "teammate";
    local_b8[10] = "teammate model";
    local_b8[0xb] = "local player model";
    local_b8[0xc] = "teammate esp";
    local_f8[0] = "other";
    local_f8[1] = "anti aim";
    local_f8[2] = "anti-aim";
    local_f8[3] = "triggerbot";
    local_f8[4] = "hud";
    local_f8[5] = "miscellaneous";
    local_f8[6] = "features";
    ppcVar11 = local_b8;
    do {
      pcVar1 = *ppcVar11;
      sVar8 = strlen(pcVar1);
      ppppbVar10 = (byte ****)&local_118;
      if (0xf < uVar4) {
        ppppbVar10 = ppppbVar3;
      }
      if ((sVar7 == sVar8) &&
         ((sVar7 == 0 || (iVar5 = memcmp(ppppbVar10,pcVar1,sVar7), iVar5 == 0)))) {
        uVar6 = 0;
        goto LAB_1802b9024;
      }
      ppcVar11 = ppcVar11 + 1;
    } while (ppcVar11 != local_b8 + 0xd);
    ppcVar11 = local_f8;
    do {
      pcVar1 = *ppcVar11;
      sVar8 = strlen(pcVar1);
      ppppbVar10 = (byte ****)&local_118;
      if (0xf < uVar4) {
        ppppbVar10 = ppppbVar3;
      }
      if ((sVar7 == sVar8) &&
         ((sVar7 == 0 || (iVar5 = memcmp(ppppbVar10,pcVar1,sVar7), iVar5 == 0)))) {
        uVar6 = 1;
        goto LAB_1802b9024;
      }
      ppcVar11 = ppcVar11 + 1;
    } while (ppcVar11 != local_f8 + 7);
    uVar6 = 0xffffffff;
LAB_1802b9024:
    if (0xf < uVar4) {
      uVar9 = uVar4 + 1;
      ppppbVar10 = ppppbVar3;
      if (0xfff < uVar9) {
        ppppbVar10 = (byte ****)ppppbVar3[-1];
        if ((byte *)0x1f < (byte *)((longlong)ppppbVar3 + (-8 - (longlong)ppppbVar10))) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
        uVar9 = uVar4 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppbVar10,uVar9);
    }
  }
  return uVar6;
}



/* ===== 1802b9090 FUN_1802b9090 ===== */

ulonglong FUN_1802b9090(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 extraout_var;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar4 = param_1[2];
  if (uVar4 != param_2[2]) {
LAB_1802b90fe:
    return uVar4 & 0xffffffffffffff00;
  }
  uVar6 = 0;
  bVar7 = uVar4 != 0;
  uVar4 = 0;
  if (bVar7) {
    do {
      if ((ulonglong)param_1[3] < 0x10) {
        puVar5 = param_1;
      }
      else {
        puVar5 = (undefined8 *)*param_1;
      }
      if ((ulonglong)param_2[3] < 0x10) {
        puVar3 = param_2;
      }
      else {
        puVar3 = (undefined8 *)*param_2;
      }
      iVar1 = tolower((uint)*(byte *)((longlong)puVar3 + uVar6));
      iVar2 = tolower((uint)*(byte *)(uVar6 + (longlong)puVar5));
      uVar4 = CONCAT44(extraout_var,iVar2);
      if (iVar2 != iVar1) goto LAB_1802b90fe;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_1[2]);
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



/* ===== 1802b9110 FUN_1802b9110 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b9110(char *param_1)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  size_t sVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_168 [32];
  uint local_148;
  undefined8 *local_140;
  char *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 local_e8;
  undefined1 local_e6;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [32];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_168;
  if ((DAT_1809f72e0 != '\0') && (DAT_1809f72e2 == '\0')) {
    if ((DAT_1809f72ec == 0) ||
       ((DAT_181107150 == DAT_181107158 || (*(float *)(DAT_181107158 + -0x28) < 0.0)))) {
      if (DAT_1809f72ec != 0) {
        FUN_1802bc470();
      }
    }
    else {
      FUN_1802b9bd0();
      cVar3 = *(char *)(DAT_181107158 + -0x14);
      FUN_1802bb4d0();
      fVar2 = DAT_1808ac7ec;
      FUN_1802bace0(DAT_1809f72fc + DAT_1808ac7ec);
      DAT_1809f72fc = DAT_1809f72fc + DAT_1808ac8e4;
      *(float *)(DAT_181107158 + -0x28) = DAT_1809f72fc;
      DAT_1809f72fc = DAT_1809f72fc + fVar2;
      if (cVar3 != '\0') {
        FUN_1802bb210();
      }
    }
    puVar9 = (undefined4 *)FUN_1802b9e90(&local_108,&DAT_18058b643);
    uVar1 = *puVar9;
    fVar2 = (float)puVar9[1];
    fVar16 = (float)puVar9[3];
    pcVar10 = (char *)FUN_1811be200(local_98,param_1);
    lVar4 = DAT_180ca0a50;
    uVar8 = DAT_180960ec4;
    fVar5 = DAT_1808ac8dc;
    if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
      pcVar10 = *(char **)pcVar10;
    }
    local_118 = CONCAT44((fVar16 - DAT_1808ac8dc) * DAT_1808ac1f4 + fVar2,uVar1);
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    if ((((uVar8 & 0xff000000) != 0) && (pcVar10 != (char *)0x0)) && (*pcVar10 != '\0')) {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8);
      local_108 = *(undefined8 *)(lVar4 + 0x60);
      uStack_100 = *(undefined4 *)(lVar4 + 0x68);
      uStack_fc = *(undefined4 *)(lVar4 + 0x6c);
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_140 = &local_108;
      local_148 = uVar8;
      local_138 = pcVar10;
      FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,fVar5,&local_118);
    }
    FUN_18000f890(local_98);
    FUN_180312320(param_1);
    return;
  }
  FUN_1802b8b90();
  fVar2 = DAT_1808ac8e4;
  local_e8 = 0x100;
  local_e6 = 1;
  local_e4 = DAT_1808ac8e4;
  uVar14 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c4 = DAT_1808aca44;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xf;
  local_c0 = 0;
  _DAT_1809f72e0 = 0x100;
  DAT_1809f72e2 = 1;
  DAT_1809f72e4 = DAT_1808ac8e4;
  _DAT_1809f72e8 = 0;
  DAT_1809f72f0 = 0.0;
  DAT_1809f72f4 = 0.0;
  DAT_1809f72f8 = 0.0;
  DAT_1809f72fc = 0.0;
  DAT_1809f7300 = 0;
  DAT_1809f7304 = DAT_1808aca44;
  FUN_18002ba60(&DAT_1809f7308,&local_c0);
  FUN_18000f890(&local_c0);
  _DAT_1809f72e0 = CONCAT11(DAT_1809f72e1,1);
  if (DAT_180cd048f == '\0') {
    uVar8 = FUN_1802b8df0(param_1);
  }
  else {
    uVar8 = 0xfffffffe;
  }
  lVar4 = DAT_180ca0a50;
  if (DAT_18110717c == '\0') {
    if (uVar8 == 0xfffffffe) {
      uVar8 = DAT_181107180 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
    }
    else if ((int)uVar8 < 0) {
      uVar8 = (uint)(DAT_181107178 < DAT_181107174 - DAT_1808ac1f4);
    }
    _DAT_1809f72e8 = CONCAT44(DAT_1809f72ec,uVar8);
    if (uVar8 != 0) {
      fVar16 = DAT_181107170 + DAT_1808ac864;
      goto LAB_1802b9418;
    }
  }
  else {
    _DAT_1809f72e8 = (ulonglong)DAT_1809f72ec << 0x20;
  }
  fVar16 = 0.0;
LAB_1802b9418:
  DAT_181107180 = DAT_181107180 + 1;
  DAT_1809f72f0 = fVar16 + DAT_181107168;
  DAT_1809f72f4 = DAT_181107170;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f7300 = *(undefined4 *)(*(longlong *)(lVar4 + 0x14f8) + 0x15c);
  pcVar10 = "";
  if (param_1 != (char *)0x0) {
    pcVar10 = param_1;
  }
  sVar11 = strlen(pcVar10);
  FUN_180029840(&DAT_1809f7308,pcVar10,sVar11);
  lVar13 = DAT_180ca0a50;
  fVar16 = (&DAT_181107174)[DAT_1809f72e8];
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(*(longlong *)(lVar13 + 0x14f8) + 0x2c8);
  if (DAT_180cd0f09 == '\0') {
    pcVar10 = (char *)FUN_1811be200(local_98,param_1);
    if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
      pcVar10 = *(char **)pcVar10;
    }
    local_108 = CONCAT44(fVar16,DAT_1809f72f0 + fVar2);
    lVar13 = DAT_181107a08;
    if (DAT_181107a08 == 0) {
      lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    if ((((DAT_180960ecc & 0xff000000) != 0) && (pcVar10 != (char *)0x0)) && (*pcVar10 != '\0')) {
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
      }
      local_118 = *(undefined8 *)(lVar4 + 0x60);
      uStack_110 = *(undefined4 *)(lVar4 + 0x68);
      uStack_10c = *(undefined4 *)(lVar4 + 0x6c);
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_140 = &local_118;
      local_148 = DAT_180960ecc;
      local_138 = pcVar10;
      FUN_18040a900(lVar13,lVar4,DAT_1808ac8dc,&local_108);
    }
    FUN_18000f890(local_98);
  }
  else {
    if (DAT_1809f7318 != DAT_1809f7168) {
LAB_1802b960c:
      DAT_180cd0fa4 = 0;
      DAT_180cd0d56 = 0;
      DAT_180cd040d = 1;
      local_118 = 0;
      local_108 = 0;
      FUN_1803e0300(&local_108,&local_118,0);
      DAT_1809f72f8 = fVar16;
      DAT_1809f72fc = fVar16;
      return;
    }
    if (DAT_1809f7318 != 0) {
      do {
        puVar15 = &DAT_1809f7308;
        if (0xf < DAT_1809f7320) {
          puVar15 = DAT_1809f7308;
        }
        puVar12 = &DAT_1809f7158;
        if (0xf < DAT_1809f7170) {
          puVar12 = DAT_1809f7158;
        }
        iVar6 = tolower((uint)*(byte *)((longlong)puVar12 + uVar14));
        iVar7 = tolower((uint)*(byte *)((longlong)puVar15 + uVar14));
        if (iVar7 != iVar6) goto LAB_1802b960c;
        uVar14 = uVar14 + 1;
      } while (uVar14 < DAT_1809f7318);
      lVar13 = DAT_180ca0a50;
    }
    DAT_180cd0fa4 = 1;
    DAT_180cd0d56 = 0;
    *(undefined1 *)(*(longlong *)(lVar13 + 0x14f8) + 0xce) = 1;
    FUN_1803e0300(*(longlong *)(lVar13 + 0x14f8) + 0x238,*(longlong *)(lVar13 + 0x14f8) + 0x240,0);
    local_118 = CONCAT44(fVar16,DAT_1809f72f0 + fVar2);
    FUN_1803307a0(lVar4,&local_118);
  }
  DAT_1809f72fc = fVar16 + _DAT_1808ac938;
  DAT_1809f72f8 = fVar16 + _DAT_1808ac938;
  return;
}



/* ===== 1802b9760 FUN_1802b9760 ===== */

void FUN_1802b9760(void)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_1802b8b90();
  uVar2 = DAT_181107168;
  lVar1 = DAT_180ca0a50;
  fVar3 = DAT_181107178;
  if (DAT_181107178 <= DAT_181107174) {
    fVar3 = DAT_181107174;
  }
  local_res8 = 0x3f800000;
  local_resc = 0x3f800000;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  *(undefined4 *)(lVar1 + 0x118) = uVar2;
  *(float *)(lVar1 + 0x11c) = fVar3;
  *(undefined1 *)(lVar1 + 0x159) = 1;
  FUN_1804174f0(&local_res8);
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  FUN_1804016a0(*(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8) + 0x88);
  return;
}



/* ===== 1802b9810 FUN_1802b9810 ===== */

ulonglong FUN_1802b9810(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_res10 [2];
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined4 local_78;
  float fStack_74;
  uint uStack_70;
  float fStack_6c;
  uint local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  FUN_1802b9bd0();
  uVar4 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
  fVar10 = DAT_1808ac34c;
  if (param_2 == '\0') {
    fVar9 = 0.0;
  }
  else {
    fVar9 = DAT_1808ac34c;
  }
  local_54 = 0;
  local_50 = 0xffffffff;
  local_res10[0] = uVar4;
  local_60 = fVar9;
  local_5c = fVar9;
  local_58 = fVar9;
  FUN_18034a380(extraout_XMM0_Da,&local_78,local_res10,&local_60);
  uVar5 = FUN_1802b3660(CONCAT44(fStack_74,local_78) + 0x14,fVar9,DAT_1808ac118,0);
  lVar7 = DAT_180ca0a50;
  if ((param_2 != '\0') || (0.0 < extraout_XMM0_Da_00)) {
    pcVar6 = "height";
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x14f8) + 0x2c8);
    local_78 = *(undefined4 *)(lVar1 + 0x20);
    bVar3 = 0x68;
    uStack_70 = ~uVar4;
    do {
      pcVar6 = pcVar6 + 1;
      if (((bVar3 == 0x23) && (*pcVar6 == 0x23)) && (pcVar6[1] == 0x23)) {
        pcVar6 = pcVar6 + 2;
        uStack_70 = ~uVar4;
      }
      else {
        uStack_70 = uStack_70 >> 8 ^
                    *(uint *)(&DAT_1806c25c0 +
                             ((ulonglong)(uStack_70 & 0xff) ^ (ulonglong)bVar3) * 4);
      }
      bVar3 = *pcVar6;
    } while (bVar3 != 0);
    uStack_70 = ~uStack_70;
    fStack_6c = DAT_1809f72fc;
    local_68 = local_68 & 0xffffff00;
    fVar9 = extraout_XMM0_Da_00;
    fStack_74 = extraout_XMM0_Da_00;
    if ((DAT_1809f72e0 != '\0') && (extraout_XMM0_Da_00 < fVar10)) {
      local_res18 = DAT_1809f72f4 + DAT_1809f72f0;
      fVar10 = DAT_1809f72f0;
      fVar9 = DAT_1809f72fc;
      fVar11 = extraout_XMM0_Da_00;
      fVar8 = (float)FUN_1803d82e0(*(undefined8 *)(*(longlong *)(lVar7 + 0x14f8) + 0x1c0),uStack_70,
                                   0);
      local_res1c = fVar8 * fVar11 + fVar9;
      local_res20 = fVar10;
      local_res24 = fVar9;
      fVar9 = (float)FUN_1803fc200(lVar1,&local_res20,&local_res18,1);
      local_68 = CONCAT31(local_68._1_3_,1);
      lVar7 = DAT_180ca0a50;
    }
    puVar2 = DAT_181107840;
    if (DAT_181107840 == DAT_181107848) {
      FUN_180354b80(fVar9,DAT_181107840,&local_78);
      lVar7 = DAT_180ca0a50;
    }
    else {
      *DAT_181107840 = CONCAT44(fStack_74,local_78);
      puVar2[1] = CONCAT44(fStack_6c,uStack_70);
      *(uint *)(puVar2 + 2) = local_68;
      DAT_181107840 = (undefined8 *)((longlong)DAT_181107840 + 0x14);
    }
    *(undefined1 *)(*(longlong *)(lVar7 + 0x14f8) + 0xce) = 1;
    lVar1 = *(longlong *)(lVar7 + 0x14f8);
    fVar10 = *(float *)(lVar1 + 0x15c) + *(float *)(lVar7 + 0xd0c);
    *(float *)(lVar1 + 0x15c) = fVar10;
    *(float *)(lVar1 + 0x118) = fVar10 + *(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x160);
    uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  else {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  return uVar5;
}



/* ===== 1802b9a70 FUN_1802b9a70 ===== */

void FUN_1802b9a70(void)

{
  int iVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  
  FUN_1802b9bd0();
  lVar10 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar7 = *(longlong *)(lVar10 + 0x14f8);
  fVar12 = *(float *)(lVar7 + 0x15c) - *(float *)(lVar10 + 0xd0c);
  *(float *)(lVar7 + 0x15c) = fVar12;
  *(float *)(lVar7 + 0x118) = fVar12 + *(float *)(lVar7 + 0x28) + *(float *)(lVar7 + 0x160);
  uVar4 = *(undefined4 *)((longlong)DAT_181107840 + -0x14);
  fVar12 = *(float *)((longlong)DAT_181107840 + -0x10);
  uVar5 = *(undefined4 *)((longlong)DAT_181107840 + -0xc);
  fVar2 = *(float *)((longlong)DAT_181107840 + -8);
  cVar3 = *(char *)((longlong)DAT_181107840 + -4);
  DAT_181107840 = (undefined4 *)((longlong)DAT_181107840 + -0x14);
  *(undefined1 *)(*(longlong *)(lVar10 + 0x14f8) + 0xce) = 1;
  lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8);
  if (DAT_1809f72e0 != '\0') {
    fVar13 = DAT_1809f72fc - fVar2;
    FUN_1803d83f0(*(undefined8 *)(*(longlong *)(lVar10 + 0x14f8) + 0x1c0),uVar5,fVar13);
    DAT_1809f72fc = fVar12 * fVar13 + fVar2;
  }
  if (cVar3 != '\0') {
    iVar6 = *(int *)(lVar7 + 0xa0);
    iVar1 = iVar6 + -1;
    *(int *)(lVar7 + 0xa0) = iVar1;
    if (iVar1 == 0) {
      puVar11 = (undefined4 *)(*(longlong *)(lVar7 + 0x38) + 0x34);
    }
    else {
      puVar11 = (undefined4 *)((longlong)(iVar6 + -2) * 0x10 + *(longlong *)(lVar7 + 0xa8));
    }
    uVar5 = puVar11[1];
    uVar8 = puVar11[2];
    uVar9 = puVar11[3];
    *(undefined4 *)(lVar7 + 0x60) = *puVar11;
    *(undefined4 *)(lVar7 + 100) = uVar5;
    *(undefined4 *)(lVar7 + 0x68) = uVar8;
    *(undefined4 *)(lVar7 + 0x6c) = uVar9;
    FUN_1803fbff0(lVar7);
  }
  FUN_1802b3c30(lVar7,uVar4,*(undefined4 *)(lVar7 + 0x20),fVar12);
  return;
}



/* ===== 1802b9bd0 FUN_1802b9bd0 ===== */

void FUN_1802b9bd0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  if (DAT_181107090 != '\0') {
    DAT_181107090 = '\0';
    FUN_1802b6f70(DAT_181107098,DAT_1811070a0,DAT_1811070a8,DAT_1811070b0,&DAT_1811070b4,
                  &DAT_1811070bc,DAT_1811070c4,DAT_1811070c8);
  }
  lVar3 = DAT_181106f08;
  lVar2 = DAT_180ca0a50;
  if ((DAT_181106f08 != 0) &&
     (*(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1,
     lVar3 == *(longlong *)(lVar2 + 0x14f8))) {
    FUN_1803e79e0();
    fVar9 = DAT_1808ac1f4;
    lVar2 = *(longlong *)(DAT_181106f08 + 0x2c8);
    iVar7 = DAT_181107518;
    if (DAT_181107518 < *(int *)(lVar2 + 0x20)) {
      do {
        iVar8 = iVar7 + 1;
        uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x28) + 0x10 + (longlong)iVar7 * 0x14);
        *(uint *)(*(longlong *)(lVar2 + 0x28) + 0x10 + (longlong)iVar7 * 0x14) =
             (int)(longlong)((float)(uVar1 >> 0x18) * fVar9 + fVar9) << 0x18 | uVar1 & 0xffffff;
        iVar7 = iVar8;
      } while (iVar8 < *(int *)(lVar2 + 0x20));
    }
    DAT_181106f08 = 0;
  }
  lVar2 = DAT_180ca0a50;
  if ((DAT_180cd048c != '\0') &&
     (*(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1,
     DAT_181107668 == *(longlong *)(lVar2 + 0x14f8))) {
    FUN_1803e0390();
    DAT_180cd048c = '\0';
  }
  if (DAT_1809f70c0 == '\0') {
    return;
  }
  DAT_1809f70c0 = 0;
  fVar9 = DAT_1809f70e4;
  if ((((DAT_1809f5b40 == DAT_1809f70d4) && (DAT_1809f5b44 == DAT_1809f70d8)) &&
      (DAT_1809f5b48 == DAT_1809f70e8)) &&
     (fVar9 = (float)DAT_1809f5b50, DAT_1809f70e4 <= (float)DAT_1809f5b50)) {
    fVar9 = DAT_1809f70e4;
  }
  if (DAT_1809f70f0 - *(float *)(DAT_180ca0a50 + 0xd04) <= *(float *)(DAT_180ca0a50 + 0x110)) {
    if (((DAT_1809f70e8 - *(float *)(DAT_180ca0a50 + 0xd08) <= *(float *)(DAT_180ca0a50 + 0x114)) &&
        (*(float *)(DAT_180ca0a50 + 0x110) < DAT_1809f70e4 + *(float *)(DAT_180ca0a50 + 0xd04))) &&
       ((*(float *)(DAT_180ca0a50 + 0x114) < DAT_1809f70ec + *(float *)(DAT_180ca0a50 + 0xd08) &&
        (cVar4 = FUN_1803e7af0(), cVar4 != '\0')))) {
      uVar6 = 1;
      goto LAB_1802b9df9;
    }
  }
  uVar6 = 0;
LAB_1802b9df9:
  puVar5 = &DAT_1809f70f8;
  if (0xf < DAT_1809f7110) {
    puVar5 = DAT_1809f70f8;
  }
  FUN_1802b80b0(DAT_1809f70c8,DAT_1809f70d0,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                *(undefined4 *)(DAT_180ca0a50 + 0x1200),&DAT_1809f70dc,fVar9,DAT_1809f70e8,
                DAT_1809f70ec,DAT_1809f70f4,puVar5,uVar6);
  return;
}



/* ===== 1802b9e90 FUN_1802b9e90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1802b9e90(float *param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 *puVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [124];
  undefined4 local_194;
  undefined1 local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  uint local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  ulonglong local_140;
  ulonglong local_138;
  char local_128;
  undefined4 uStack_127;
  undefined2 uStack_123;
  undefined1 uStack_121;
  ulonglong local_118;
  ulonglong local_110;
  float local_104;
  float fStack_100;
  undefined4 local_ec;
  ulonglong local_e8;
  
  uVar13 = DAT_1811074e0;
  lVar1 = DAT_1811074d8;
  uVar2 = DAT_1811074d0;
  lVar15 = DAT_181106f20;
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_218;
  DAT_1811074d0 = 0;
  DAT_1811074d8 = 0;
  DAT_1811074e0 = 0;
  _DAT_1811074e4 = local_194;
  DAT_181107030 = DAT_181106f20;
  DAT_181106f20 = 0;
  if (lVar15 == 0) {
LAB_1802b9ff7:
    FUN_1802b9bd0();
    lVar15 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    plVar10 = *(longlong **)(lVar15 + 0x14f8);
    if ((char)plVar10[0x2b] != '\0') {
      FUN_180417650();
    }
    cVar8 = FUN_180312460(param_2,0);
    puVar17 = auStack_218;
    puVar7 = auStack_218;
    if (cVar8 == '\0') goto LAB_1802ba0d1;
LAB_1802ba038:
    puVar17 = puVar7;
    *(undefined8 *)(puVar17 + 0x70) = 0;
    *(undefined8 *)(puVar17 + 0x60) = 0;
    *(undefined8 *)(puVar17 + -8) = 0x1802ba054;
    FUN_1803e0300(puVar17 + 0x60,puVar17 + 0x70,0);
    fVar20 = DAT_1809f72fc;
    fVar23 = DAT_1809f72f0;
    fVar22 = DAT_1809f72e4;
    DAT_180cd048c = 1;
    fVar19 = (DAT_1809f72e4 + DAT_1809f72f0 + *(float *)((longlong)plVar10 + 0x15c)) - DAT_1809f7300
    ;
    DAT_181107668 = plVar10;
    *param_1 = fVar19;
    param_1[1] = fVar20;
    param_1[2] = (DAT_1809f72f4 + fVar23) - fVar22;
    param_1[3] = DAT_1809f7304;
    param_1[4] = fVar19;
    param_1[5] = 0.0;
  }
  else {
    plVar10 = (longlong *)FUN_1802b3fe0(&local_128);
    if (plVar10 == &DAT_1809f54f0) {
LAB_1802b9fee:
      FUN_18000f890(&local_128);
      goto LAB_1802b9ff7;
    }
    if (DAT_1809f5508 < 0x10) {
LAB_1802b9fb1:
      DAT_1809f54f0 = *plVar10;
      lRam00000001809f54f8 = plVar10[1];
      _DAT_1809f5500 = plVar10[2];
      DAT_1809f5508 = plVar10[3];
      plVar10[2] = 0;
      plVar10[3] = 0xf;
      *(undefined1 *)plVar10 = 0;
      goto LAB_1802b9fee;
    }
    uVar16 = DAT_1809f5508 + 1;
    lVar15 = DAT_1809f54f0;
    if (uVar16 < 0x1000) {
LAB_1802b9fac:
      thunk_FUN_1803d64e0(lVar15,uVar16);
      goto LAB_1802b9fb1;
    }
    lVar15 = *(longlong *)(DAT_1809f54f0 + -8);
    if ((DAT_1809f54f0 - lVar15) - 8U < 0x20) {
      uVar16 = DAT_1809f5508 + 0x28;
      goto LAB_1802b9fac;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar17 = auStack_210;
LAB_1802ba0d1:
    if (DAT_1809f72e0 != '\0') {
      *(undefined8 *)(puVar17 + -8) = 0x1802ba0e2;
      uVar16 = FUN_18031a710(param_2);
      puVar7 = puVar17;
      if ((uVar16 & 1) != 0) goto LAB_1802ba038;
      if ((uVar16 & 2) != 0) {
        DAT_181107518 = *(undefined4 *)(plVar10[0x59] + 0x20);
        *(undefined8 *)(puVar17 + -8) = 0x1802ba10c;
        DAT_181106f08 = plVar10;
        FUN_1803e7920(CONCAT71((uint7)(uint3)((uint)DAT_181107518 >> 8),1));
      }
    }
    fVar23 = DAT_1809f7304;
    fVar22 = DAT_1808ac34c;
    lVar15 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if ((*(longlong *)(lVar15 + 0x1c8) != 0) ||
       (lVar18 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
      lVar18 = 0x250;
    }
    if (DAT_1809f72e0 == '\0') {
      fVar23 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) +
               *(float *)(DAT_180ca0a50 + 0x1200);
      fVar20 = *(float *)(lVar15 + 0x118);
      fVar22 = *(float *)(lVar15 + 0x11c);
      fVar19 = (*(float *)(lVar18 + lVar15) - fVar20) + fVar20;
    }
    else {
      fVar19 = (DAT_1809f72f4 + DAT_1809f72f0) - DAT_1809f72e4;
      fVar20 = (DAT_1809f72e4 + DAT_1809f72f0 + *(float *)((longlong)plVar10 + 0x15c)) -
               DAT_1809f7300;
      if ((DAT_1809f72e1 != '\0') && (0 < DAT_1809f72ec)) {
        *(float *)(puVar17 + 0x70) = (DAT_1809f72f4 + DAT_1809f72f0) - DAT_1808ac7ec;
        *(float *)(puVar17 + 0x74) = DAT_1809f72fc + DAT_1808ac34c;
        *(float *)(puVar17 + 0x60) = DAT_1809f72f0 + DAT_1808ac7ec;
        *(float *)(puVar17 + 100) = DAT_1809f72fc;
        *(undefined4 *)(puVar17 + 0x28) = 0;
        *(undefined4 *)(puVar17 + 0x20) = 0;
        lVar15 = plVar10[0x59];
        *(undefined8 *)(puVar17 + -8) = 0x1802ba20c;
        FUN_1803fe590(lVar15,puVar17 + 0x60,puVar17 + 0x70,DAT_180960f48);
        DAT_1809f72fc = DAT_1809f72fc + fVar22;
      }
      DAT_1809f72ec = DAT_1809f72ec + 1;
      fVar22 = DAT_1809f72fc;
      DAT_1809f72fc = fVar23 + DAT_1809f72fc;
    }
    fVar25 = 0.0;
    fVar21 = fVar20;
    if (((lVar1 != 0) && (DAT_1809f72e0 != '\0')) && (DAT_1809f72e2 == '\0')) {
      uVar9 = DAT_1811074b0;
      if (DAT_1811074b0 == 0) {
        uVar4 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
        uVar5 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
        fVar21 = *(float *)(DAT_180ca0a50 + 0xdec);
        *(undefined4 *)(puVar17 + 0x70) = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
        *(undefined4 *)(puVar17 + 0x74) = uVar4;
        *(undefined4 *)(puVar17 + 0x78) = uVar5;
        *(float *)(puVar17 + 0x7c) = fVar21;
        *(float *)(puVar17 + 0x7c) = fVar21 * *(float *)(DAT_180ca0a50 + 0xc9c);
        *(undefined8 *)(puVar17 + -8) = 0x1802ba2d0;
        uVar9 = FUN_1803d7f30(puVar17 + 0x70);
      }
      DAT_181107098 = plVar10[0x59];
      DAT_181107090 = 1;
      _DAT_181107091 = uStack_127;
      _DAT_181107095 = uStack_123;
      DAT_181107097 = uStack_121;
      DAT_1811070a0 = uVar2;
      DAT_1811070a8 = lVar1;
      DAT_1811070b0 = uVar13;
      _DAT_1811070b4 = CONCAT44(fVar22,fVar20);
      _DAT_1811070bc = fVar20 + DAT_1808ac950;
      _DAT_1811070c0 = fVar22 + fVar23;
      DAT_1811070c4 = 0x41500000;
      _DAT_1811070cc = local_ec;
      fVar21 = fVar20 + DAT_1808ac9fc;
      fVar25 = DAT_1808ac9fc;
      DAT_1811070c8 = uVar9;
      local_104 = fVar20;
      fStack_100 = fVar22;
    }
    pcVar11 = param_2;
    fVar20 = fVar21;
    if (param_2 != (char *)0xffffffffffffffff) {
      do {
        if ((*pcVar11 == '\0') || ((*pcVar11 == '#' && (pcVar11[1] == '#')))) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != (char *)0xffffffffffffffff);
      if (pcVar11 != param_2) {
        *(undefined8 *)(puVar17 + -8) = 0x1802ba3bf;
        FUN_1802b3fe0(&local_128,param_2);
        *(undefined8 *)(puVar17 + -8) = 0x1802ba3d9;
        fVar20 = (float)FUN_18053f0d0((fVar23 - DAT_1808ac930) * DAT_1808ac1f4);
        fVar20 = fVar20 + fVar22;
        *(float *)(puVar17 + 0x70) = fVar21;
        *(float *)(puVar17 + 0x74) = fVar20;
        uVar9 = DAT_1811074b0;
        if (DAT_1811074b0 == 0) {
          uVar13 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
          uVar4 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
          fVar6 = *(float *)(DAT_180ca0a50 + 0xdec);
          *(undefined4 *)(puVar17 + 0x60) = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
          *(undefined4 *)(puVar17 + 100) = uVar13;
          *(undefined4 *)(puVar17 + 0x68) = uVar4;
          *(float *)(puVar17 + 0x6c) = fVar6;
          *(float *)(puVar17 + 0x6c) = fVar6 * *(float *)(DAT_180ca0a50 + 0xc9c);
          *(undefined8 *)(puVar17 + -8) = 0x1802ba428;
          uVar9 = FUN_1803d7f30(puVar17 + 0x60);
        }
        lVar15 = plVar10[0x59];
        if (DAT_1809f72e0 == '\0') {
          pcVar11 = &local_128;
          if (0xf < local_110) {
            pcVar11 = (char *)CONCAT17(uStack_121,
                                       CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
          }
          if ((((uVar9 & 0xff000000) != 0) && (pcVar11 != (char *)0x0)) &&
             (lVar1 = *(longlong *)(lVar15 + 0x38), *pcVar11 != '\0')) {
            uVar2 = *(undefined8 *)(lVar15 + 0x68);
            *(undefined8 *)(puVar17 + 0x60) = *(undefined8 *)(lVar15 + 0x60);
            *(undefined8 *)(puVar17 + 0x68) = uVar2;
            *(undefined4 *)(puVar17 + 0x48) = 0;
            *(undefined4 *)(puVar17 + 0x40) = 0;
            *(undefined8 *)(puVar17 + 0x38) = 0;
            *(char **)(puVar17 + 0x30) = pcVar11;
            *(undefined1 **)(puVar17 + 0x28) = puVar17 + 0x60;
            *(uint *)(puVar17 + 0x20) = uVar9;
            uVar13 = *(undefined4 *)(lVar1 + 0x20);
            uVar2 = *(undefined8 *)(lVar1 + 0x18);
            *(undefined8 *)(puVar17 + -8) = 0x1802ba61e;
            FUN_18040a900(uVar2,lVar15,uVar13,puVar17 + 0x70);
          }
        }
        else {
          local_188 = 1;
          *(undefined8 *)(puVar17 + -8) = 0x1802ba452;
          local_180 = lVar15;
          local_178 = FUN_1803e8900(plVar10,param_2);
          fVar6 = DAT_1809f72f0;
          local_174 = (undefined4)plVar10[2];
          *(undefined4 *)(puVar17 + 0x70) = local_174;
          uVar13 = *(undefined4 *)(DAT_180ca0a50 + 4);
          *(undefined4 *)(puVar17 + 0x60) = uVar13;
          fVar24 = fVar22 + fVar23;
          local_158 = DAT_1809f72f0;
          local_150 = 0;
          uStack_148 = 0;
          pcVar11 = &local_128;
          if (0xf < local_110) {
            pcVar11 = (char *)CONCAT17(uStack_121,
                                       CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
          }
          local_170 = uVar13;
          local_16c = fVar21;
          local_168 = fVar20;
          local_164 = fVar19;
          local_160 = fVar22;
          local_15c = fVar24;
          local_154 = uVar9;
          if (0x7fffffffffffffff < local_118) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar17 + -8) = &UNK_1802ba77c;
            FUN_180011990();
          }
          if (local_118 < 0x10) {
            local_140 = local_118;
            local_138 = 0xf;
            local_150 = *(undefined8 *)pcVar11;
            uStack_148 = *(undefined8 *)(pcVar11 + 8);
          }
          else {
            uVar12 = local_118 | 0xf;
            uVar16 = 0x7fffffffffffffff;
            if ((uVar12 < 0x8000000000000000) && (uVar16 = uVar12, uVar12 < 0x16)) {
              uVar16 = 0x16;
            }
            *(undefined8 *)(puVar17 + -8) = 0x1802ba515;
            local_150 = FUN_18000fb70(uVar16 + 1);
            local_140 = local_118;
            *(undefined8 *)(puVar17 + -8) = 0x1802ba530;
            local_138 = uVar16;
            FUN_180540530(local_150,pcVar11,local_118 + 1);
            uVar13 = *(undefined4 *)(puVar17 + 0x60);
          }
          DAT_1809f70c0 = 1;
          DAT_1809f70d4 = *(undefined4 *)(puVar17 + 0x70);
          DAT_1809f70f0 = fVar6;
          *(undefined8 *)(puVar17 + -8) = 0x1802ba5a6;
          DAT_1809f70c8 = lVar15;
          DAT_1809f70d0 = local_178;
          DAT_1809f70d8 = uVar13;
          _DAT_1809f70dc = fVar21;
          _DAT_1809f70e0 = fVar20;
          DAT_1809f70e4 = fVar19;
          DAT_1809f70e8 = fVar22;
          DAT_1809f70ec = fVar24;
          DAT_1809f70f4 = uVar9;
          FUN_18002ba60(&DAT_1809f70f8,&local_150);
          *(undefined8 *)(puVar17 + -8) = 0x1802ba5af;
          FUN_18000f890(&local_150);
        }
        if (((DAT_180cd0f08 != '\0') && (DAT_1809f72e0 != '\0')) && (DAT_1809f72e2 != '\0')) {
          *(undefined8 *)(puVar17 + -8) = 0x1802ba642;
          FUN_180326c40(&local_128);
        }
        if (((DAT_180cd04aa != '\0') && (DAT_1809f72e0 != '\0')) && (DAT_1809f72e2 == '\0')) {
          *(undefined8 *)(puVar17 + -8) = 0x1802ba665;
          FUN_180327720(param_2);
        }
        pcVar11 = &local_128;
        if (0xf < local_110) {
          pcVar11 = (char *)CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)))
          ;
        }
        if (pcVar11 == (char *)0x0) {
          fVar20 = 0.0;
        }
        else {
          *(undefined4 *)(puVar17 + 0x50) = 0;
          *(undefined8 *)(puVar17 + 0x40) = 0;
          *(undefined8 *)(puVar17 + 0x38) = 0;
          *(undefined8 *)(puVar17 + 0x30) = 0;
          *(char **)(puVar17 + 0x28) = pcVar11;
          *(undefined4 *)(puVar17 + 0x20) = DAT_1808acda0;
          uVar13 = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
          uVar2 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
          *(undefined8 *)(puVar17 + -8) = 0x1802ba6cc;
          FUN_18040a2f0(puVar17 + 0x70,uVar2,uVar13,DAT_1808acd08);
          iVar14 = (int)*(float *)(puVar17 + 0x70);
          fVar20 = (float)(int)((uint)((float)iVar14 < *(float *)(puVar17 + 0x70)) + iVar14);
        }
        fVar20 = fVar20 + fVar21;
        *(undefined8 *)(puVar17 + -8) = 0x1802ba6fc;
        FUN_18000f890(&local_128);
      }
    }
    *param_1 = fVar21;
    param_1[1] = fVar22;
    param_1[2] = fVar19;
    param_1[3] = fVar23;
    param_1[4] = fVar20;
    param_1[5] = fVar25;
  }
  *(undefined8 *)(puVar17 + -8) = 0x1802ba72c;
  return param_1;
}



/* ===== 1802ba780 FUN_1802ba780 ===== */

float * FUN_1802ba780(float *param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_res8;
  undefined8 local_res18;
  
  FUN_1802b9bd0();
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  if (*(char *)(lVar1 + 0x158) != '\0') {
    FUN_180417650();
  }
  cVar3 = FUN_180312460(0,1);
  if (cVar3 == '\0') {
    lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if ((*(longlong *)(lVar2 + 0x1c8) != 0) ||
       (lVar4 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
      lVar4 = 0x250;
    }
    if (DAT_1809f72e0 == '\0') {
      fVar7 = *(float *)(lVar2 + 0x118);
      fVar5 = *(float *)(lVar2 + 0x11c);
      fVar6 = (*(float *)(lVar4 + lVar2) - *(float *)(lVar2 + 0x118)) + fVar7;
      local_res8 = CONCAT44(param_2,fVar6 - fVar7);
      FUN_1804174f0(&local_res8);
    }
    else {
      fVar6 = (DAT_1809f72f4 + DAT_1809f72f0) - DAT_1809f72e4;
      fVar7 = (DAT_1809f72e4 + DAT_1809f72f0 + *(float *)(lVar1 + 0x15c)) - DAT_1809f7300;
      if ((DAT_1809f72e1 != '\0') && (0 < DAT_1809f72ec)) {
        local_res8 = CONCAT44(DAT_1809f72fc + DAT_1808ac34c,
                              (DAT_1809f72f4 + DAT_1809f72f0) - DAT_1808ac7ec);
        local_res18 = CONCAT44(DAT_1809f72fc,DAT_1809f72f0 + DAT_1808ac7ec);
        FUN_1803fe590(*(undefined8 *)(lVar1 + 0x2c8),&local_res18,&local_res8,DAT_180960f48,0,0);
        DAT_1809f72fc = DAT_1809f72fc + DAT_1808ac34c;
      }
      DAT_1809f72ec = DAT_1809f72ec + 1;
      fVar5 = DAT_1809f72fc;
      DAT_1809f72fc = DAT_1809f72fc + param_2;
    }
    *param_1 = fVar7;
    param_1[1] = fVar5;
    param_1[2] = fVar6;
    param_1[4] = fVar7;
  }
  else {
    local_res8 = 0;
    local_res18 = 0;
    FUN_1803e0300(&local_res18,&local_res8,0);
    fVar7 = DAT_1809f72e4;
    fVar6 = DAT_1809f72e4 + DAT_1809f72f0;
    fVar5 = DAT_1809f72f4 + DAT_1809f72f0;
    param_1[1] = DAT_1809f72fc;
    DAT_180cd048c = 1;
    fVar6 = (fVar6 + *(float *)(lVar1 + 0x15c)) - DAT_1809f7300;
    DAT_181107668 = lVar1;
    param_1[2] = fVar5 - fVar7;
    *param_1 = fVar6;
    param_1[4] = fVar6;
  }
  param_1[3] = param_2;
  param_1[5] = 0.0;
  return param_1;
}



/* ===== 1802baa50 FUN_1802baa50 ===== */

void FUN_1802baa50(float *param_1)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  char cVar5;
  byte *pbVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  pbVar2 = DAT_181107030;
  if (DAT_181107030 == (byte *)0x0) {
    return;
  }
  fVar12 = param_1[1];
  local_res18 = *param_1 - DAT_1809f72e4;
  fVar14 = fVar12 + param_1[3];
  fVar13 = DAT_1809f72e4 + param_1[2];
  lVar11 = *(longlong *)(DAT_180ca0a50 + 0x1500);
  DAT_181107030 = (byte *)0x0;
  lVar10 = DAT_180ca0a50;
  local_res10 = fVar13;
  local_res14 = fVar14;
  local_res1c = fVar12;
  if ((lVar11 != 0) && (lVar11 == *(longlong *)(DAT_180ca0a50 + 0x14f8))) {
    cVar5 = '\0';
    cVar3 = FUN_1803dd8c0(lVar11);
    if ((cVar3 != '\0') &&
       (((*(int *)(lVar10 + 0x1578) == 0 || (*(char *)(lVar10 + 0x1587) != cVar5)) ||
        (*(int *)(lVar10 + 0x1578) == *(int *)(lVar11 + 0x8c))))) {
      if (extraout_XMM0_Da - *(float *)(lVar10 + 0xd04) <= *(float *)(lVar10 + 0x110)) {
        if (((fVar12 - *(float *)(lVar10 + 0xd08) <= *(float *)(lVar10 + 0x114)) &&
            (*(float *)(lVar10 + 0x110) < *(float *)(lVar10 + 0xd04) + fVar13)) &&
           (*(float *)(lVar10 + 0x114) < *(float *)(lVar10 + 0xd08) + fVar14)) {
          uVar7 = 1;
          goto LAB_1802bab50;
        }
      }
    }
  }
  uVar7 = 0;
LAB_1802bab50:
  *(undefined1 *)(*(longlong *)(lVar10 + 0x14f8) + 0xce) = 1;
  uVar9 = ~*(uint *)(*(longlong *)(lVar10 + 0x14f8) + 0x10);
  bVar1 = *pbVar2;
  uVar8 = uVar9;
  pbVar4 = pbVar2;
  while (bVar1 != 0) {
    pbVar6 = pbVar4 + 1;
    if (((bVar1 == 0x23) && (*pbVar6 == 0x23)) && (pbVar4[2] == 0x23)) {
      pbVar6 = pbVar4 + 3;
      uVar8 = uVar9;
    }
    else {
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar8 & 0xff) ^ (ulonglong)bVar1) * 4);
    }
    pbVar4 = pbVar6;
    bVar1 = *pbVar6;
  }
  pbVar4 = (byte *)&DAT_1809f54f0;
  if (0xf < DAT_1809f5508) {
    pbVar4 = DAT_1809f54f0;
  }
  bVar1 = *pbVar4;
  uVar9 = uVar8;
  while (bVar1 != 0) {
    pbVar6 = pbVar4 + 1;
    if (((bVar1 == 0x23) && (*pbVar6 == 0x23)) && (pbVar4[2] == 0x23)) {
      pbVar6 = pbVar4 + 3;
      uVar9 = uVar8;
    }
    else {
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)uVar9 & 0xff ^ (ulonglong)bVar1) * 4);
    }
    pbVar4 = pbVar6;
    bVar1 = *pbVar6;
  }
  pbVar4 = (byte *)&DAT_1809f54f0;
  if (0xf < DAT_1809f5508) {
    pbVar4 = DAT_1809f54f0;
  }
  FUN_1802b56a0(pbVar4,pbVar2,uVar7,&local_res18,&local_res10,~uVar9);
  return;
}



/* ===== 1802bac70 FUN_1802bac70 ===== */

void FUN_1802bac70(undefined4 *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar1 + 4);
  DAT_1809f5b48 = param_1[1];
  DAT_1809f5b4c = param_1[3];
  DAT_1809f5b50._4_4_ = *param_1;
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar1 + 0x14f8) + 0x10);
  DAT_1809f5b50._0_4_ = param_2;
  FUN_1802baa50();
  return;
}



/* ===== 1802bace0 FUN_1802bace0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802bace0(undefined4 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  float local_res10;
  undefined4 local_res14;
  float local_res18;
  float local_res1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar2 = DAT_180ca0a50;
  uVar1 = DAT_180960eec;
  if ((DAT_181107150 != DAT_181107158) &&
     (local_res1c = *(float *)(DAT_181107158 + -0x28), 0.0 <= local_res1c)) {
    local_res18 = DAT_1809f72f0 - DAT_1808ac7ec;
    local_res10 = DAT_1809f72f4 + DAT_1809f72f0 + DAT_1808ac7ec;
    local_18 = _DAT_1808addb0;
    uStack_10 = _UNK_1808addb8;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    local_res14 = param_1;
    FUN_18036bcb0(*(undefined8 *)(*(longlong *)(lVar2 + 0x14f8) + 0x2c8),&local_res18,&local_res10,
                  uVar1,&local_18,DAT_1808ac34c,DAT_1808ac34c);
  }
  return;
}



/* ===== 1802badc0 FUN_1802badc0 ===== */

longlong FUN_1802badc0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined8 in_stack_fffffffffffffef8;
  float local_e8 [4];
  undefined8 local_d8;
  longlong local_d0 [2];
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  
  cVar4 = DAT_180cd0f0d;
  lVar10 = DAT_180ca0a50;
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  DAT_180cd0f0d = 0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar8 = *(longlong *)(lVar10 + 0x14f8);
  uVar1 = *(uint *)(lVar8 + 0x10);
  if ((DAT_1809f5b40 != uVar1) || (uVar1 = *(uint *)(lVar10 + 4), DAT_1809f5b44 != uVar1)) {
    return (ulonglong)(uVar1 >> 8) << 8;
  }
  DAT_180cd0d54 = cVar4 == '\0';
  DAT_1809f4bb8 = 0x7f7fffff;
  fVar11 = (float)FUN_18053fc00(DAT_1808ac8c0);
  fVar2 = DAT_1808ac1f4;
  fVar11 = fVar11 + DAT_1808ac8b0;
  fVar14 = DAT_1809f5b4c;
  if (DAT_1808ac97c <= DAT_1809f5b4c) {
    fVar14 = DAT_1808ac97c;
  }
  fVar15 = (float)DAT_1809f5b50 - fVar11;
  local_res18 = fVar11;
  local_res1c = fVar14;
  fVar12 = (float)FUN_18053f0d0((DAT_1809f5b4c - fVar14) * DAT_1808ac1f4 + DAT_1809f5b48);
  fVar3 = DAT_1808ac7ac;
  local_res24 = fVar14 + fVar12;
  DAT_1809f5b50._0_4_ = fVar15 - DAT_1808ac7ac;
  local_res20 = fVar15 + fVar11;
  FUN_1803e89e0(param_1);
  lVar10 = DAT_180ca0a50;
  local_d8 = CONCAT44(fVar12,fVar15);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar10 = *(longlong *)(lVar10 + 0x14f8);
  *(ulonglong *)(lVar10 + 0x118) = CONCAT44(fVar12,fVar15);
  *(undefined1 *)(lVar10 + 0x159) = 1;
  cVar4 = FUN_180415e30("##dots",&local_res18,0);
  if (cVar4 == '\0') {
    cVar4 = FUN_180312960(param_2);
    if (cVar4 != '\0') {
      FUN_180312de0();
    }
  }
  else {
    FUN_1802b4d80("##options");
  }
  iVar5 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##options");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar10 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar10 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar5) ||
       (*(char *)(lVar10 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_1802bafd4;
  }
  else {
LAB_1802bafd4:
    if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
       (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) {
      cVar4 = FUN_1803dd930(0);
      if (cVar4 == '\0') {
        fVar13 = 0.0;
      }
      else {
        fVar13 = fVar2;
      }
      goto LAB_1802bb004;
    }
  }
  fVar13 = DAT_1808ac34c;
LAB_1802bb004:
  local_res18 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  local_b4 = 0;
  local_b0 = 0xffffffff;
  local_c0 = fVar13;
  local_bc = fVar13;
  local_b8 = fVar13;
  FUN_18034a380(local_res18,local_d0,&local_res18,&local_c0);
  fVar13 = (float)FUN_1802b3660(local_d0[0] + 0x14,fVar13,DAT_1808ac118,0);
  if (0.0 < fVar13) {
    local_e8[2] = 1.0;
    local_e8[0] = 0.0;
    local_e8[1] = fVar13 * DAT_1808ac1b0 * DAT_1808ac2cc;
    pfVar9 = local_e8;
    if (0.0 <= local_e8[1]) {
      pfVar9 = local_e8 + 1;
    }
    pfVar7 = local_e8 + 2;
    if (local_e8[1] <= DAT_1808ac34c) {
      pfVar7 = pfVar9;
    }
    FUN_1803fe590(*(undefined8 *)(lVar8 + 0x2c8),&local_d8,&local_res20,
                  (int)(longlong)(*pfVar7 * DAT_1808acb94 + fVar2) << 0x18 |
                  DAT_180960f44 & 0xffffff,CONCAT44(uVar6,fVar3),0);
  }
  local_res18 = fVar11 * fVar2 + fVar15;
  fVar12 = fVar14 * fVar2 + fVar12;
  local_res1c = fVar12;
  uVar6 = FUN_1802b38e0(DAT_180960ec0,DAT_180960ec8,fVar13);
  FUN_1802b6e90(*(undefined8 *)(lVar8 + 0x2c8),"nl_glyph_ellipsis",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M8 256C8 236 18 218 36 208C53 198 74 198 92 208C109 218 120 236 120 256C120 277 109 295 92 305C74 315 53 315 36 305C18 295 8 277 8 256ZM168 256C168 236 178 218 196 208C213 198 234 198 252 208C269 218 280 236 280 256C280 277 269 295 252 305C234 315 213 315 196 305C178 295 168 277 168 256ZM384 200C404 200 422 211 432 228C442 246 442 267 432 284C422 302 404 312 384 312C363 312 345 302 335 284C325 267 325 246 335 228C345 211 363 200 384 200Z\"/></svg>"
                ,DAT_1808acbe4,&local_res18,DAT_1808ac8d4,uVar6);
  local_res18 = fVar15 + fVar11 + DAT_1808ac7ec;
  local_res1c = fVar12;
  lVar8 = FUN_1802bb650(param_2,&local_res18,1);
  return lVar8;
}



/* ===== 1802bb210 FUN_1802bb210 ===== */

void FUN_1802bb210(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8 [2];
  
  lVar3 = DAT_181107158;
  lVar2 = DAT_180ca0a50;
  fVar10 = DAT_1809f72f0 - DAT_1808ac710;
  fVar9 = DAT_1809f72fc - DAT_1808ac710;
  fVar11 = DAT_1809f72f4 + DAT_1808ac838;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar6 = *(longlong *)(lVar2 + 0x14f8);
  *(float *)(lVar6 + 0x118) = fVar10;
  *(float *)(lVar6 + 0x11c) = fVar9;
  *(undefined1 *)(lVar6 + 0x159) = 1;
  *(uint *)(lVar2 + 0x1f38) = *(uint *)(lVar2 + 0x1f38) | 0x10;
  *(float *)(lVar2 + 0x1f84) = fVar11;
  *(undefined4 *)(lVar2 + 0x1f88) = 0;
  *(float *)(lVar2 + 0x1f8c) = fVar11;
  *(undefined4 *)(lVar2 + 0x1f90) = 0x43ae8000;
  *(undefined8 *)(lVar2 + 0x1f98) = 0;
  *(undefined8 *)(lVar2 + 0x1fa0) = 0;
  *(int *)(lVar3 + -0xc) = *(int *)(lVar3 + -0xc) + 1;
  FUN_1803e8a70();
  uVar4 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##section_scroll");
  *(uint *)(lVar3 + -8) = uVar4;
  uVar8 = (((((ulonglong)(byte)uVar4 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(uVar4 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar4 >> 0x10 & 0xff)) *
           0x100000001b3 ^ (ulonglong)(uVar4 >> 0x18)) * 0x100000001b3 & DAT_1811077a0;
  lVar6 = *(longlong *)(DAT_181107788 + 8 + uVar8 * 0x10);
  if (lVar6 != DAT_181107778) {
    uVar1 = *(uint *)(lVar6 + 0x10);
    while (uVar4 != uVar1) {
      if (lVar6 == *(longlong *)(DAT_181107788 + uVar8 * 0x10)) goto LAB_1802bb383;
      lVar6 = *(longlong *)(lVar6 + 8);
      uVar1 = *(uint *)(lVar6 + 0x10);
    }
    if (lVar6 != 0) goto LAB_1802bb386;
  }
LAB_1802bb383:
  lVar6 = DAT_181107778;
LAB_1802bb386:
  if (lVar6 == DAT_181107778) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
  }
  FUN_1802b6190(uVar4,uVar7);
  local_res8[0] = 4.0;
  local_res8[1] = 4.0;
  FUN_1803d89a0(2,local_res8);
  lVar6 = DAT_180ca0a50;
  local_res8[1] = 0.0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_res8[0] = fVar11;
  uVar5 = FUN_1803e8900(*(undefined8 *)(lVar6 + 0x14f8),"##section");
  FUN_1803e1800("##section",uVar5,local_res8,0x22,0x98);
  FUN_1803d8a40(1);
  FUN_1802b6490(uVar4,0,0,0);
  lVar6 = DAT_180ca0a50;
  *(undefined1 *)(lVar3 + -0x13) = 1;
  DAT_1809f72fc = *(float *)(*(longlong *)(lVar6 + 0x14f8) + 0x11c);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x14f8) + 0xce) = 1;
  DAT_1809f7300 = *(undefined4 *)(*(longlong *)(lVar6 + 0x14f8) + 0x15c);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x14f8) + 0xce) = 1;
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x2c8);
  FUN_180401570(lVar6 + 0x88);
  FUN_180401a80(lVar6 + 0x88,lVar6,1);
  return;
}



/* ===== 1802bb4d0 FUN_1802bb4d0 ===== */

void FUN_1802bb4d0(void)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((DAT_181107150 != DAT_181107158) && (*(char *)(DAT_181107158 + -0x13) != '\0')) {
    FUN_1802b9bd0();
    lVar4 = DAT_180ca0a50;
    fVar3 = DAT_1809f72fc;
    uVar2 = DAT_1809f72f0;
    local_resc = 0;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar4 = *(longlong *)(lVar4 + 0x14f8);
    *(undefined4 *)(lVar4 + 0x118) = uVar2;
    *(float *)(lVar4 + 0x11c) = fVar3;
    *(undefined1 *)(lVar4 + 0x159) = 1;
    local_res8 = DAT_1809f72f4;
    FUN_1804174f0(&local_res8);
    lVar4 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x14f8) + 0x2c8);
    FUN_180401a80(lVar4 + 0x88,lVar4,0);
    FUN_1804016a0(lVar4 + 0x88,lVar4);
    FUN_1802b6cd0(*(undefined4 *)(DAT_181107158 + -8));
    FUN_1803e1bc0();
    lVar4 = DAT_180ca0a50;
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      lVar4 = DAT_180ca0a50;
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    *(undefined1 *)(DAT_181107158 + -0x13) = 0;
    DAT_1809f72fc = *(float *)(lVar4 + 0x1f00) - DAT_1808ac710;
    *(undefined1 *)(*(longlong *)(lVar4 + 0x14f8) + 0xce) = 1;
    DAT_1809f7300 = *(undefined4 *)(*(longlong *)(lVar4 + 0x14f8) + 0x15c);
  }
  return;
}



/* ===== 1802bb650 FUN_1802bb650 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802bb650(char *param_1,float *param_2,char param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1c8 [32];
  uint local_1a8;
  undefined8 *local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_180;
  float local_178;
  float local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_158;
  undefined1 local_156;
  float local_154;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_c8 [32];
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  uVar9 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##options");
  cVar7 = DAT_180cd0d54;
  fVar20 = DAT_1809f513c;
  fVar19 = DAT_1809f5138;
  uVar5 = DAT_1809f4bb8;
  fVar16 = DAT_1809f36bc;
  uVar4 = DAT_1809f36b8;
  DAT_1809f36b8 = 0x438e8000;
  DAT_1809f36bc = 3.4028235e+38;
  DAT_1809f5138 = -3.4028235e+38;
  DAT_1809f513c = -3.4028235e+38;
  DAT_1809f4bb8 = 0x43b18000;
  DAT_180cd0d54 = 0;
  cVar8 = FUN_180312740(param_1);
  lVar11 = DAT_180ca0a50;
  if (cVar8 == '\0') {
    if (DAT_180cd0f0c != '\0') {
      uVar10 = FUN_180314340(param_1);
      return uVar10;
    }
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
    *(undefined4 *)(lVar11 + 0x1f84) = uVar4;
    *(undefined4 *)(lVar11 + 0x1f88) = 0;
    *(undefined4 *)(lVar11 + 0x1f8c) = uVar4;
    *(undefined4 *)(lVar11 + 0x1f90) = uVar5;
    *(undefined8 *)(lVar11 + 0x1f98) = 0;
    *(undefined8 *)(lVar11 + 0x1fa0) = 0;
    lVar11 = FUN_1802b4e80(uVar9);
    if (lVar11 == 0) {
      local_174 = 0.0;
      local_178 = 0.0;
    }
    else {
      FUN_1803e2890(&local_178,lVar11);
    }
    lVar12 = FUN_1802b4e80(uVar9);
    lVar11 = DAT_180ca0a50;
    fVar2 = DAT_1808ac7ec;
    if (lVar12 == 0) {
      *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
      *(undefined8 *)(lVar11 + 0x1f48) = 0;
      *(undefined8 *)(lVar11 + 0x1f50) = 0;
      *(undefined4 *)(lVar11 + 0x1f3c) = 1;
    }
    else {
      if (fVar19 <= DAT_1808aceb0) {
        if (param_3 == '\0') {
          fVar20 = ((local_174 * DAT_1808ac1f4 + param_2[1] + param_2[1]) * DAT_1808ac1f4 -
                   local_174 * DAT_1808ac1f4) + local_174 * DAT_1808ac140;
          fVar19 = (*param_2 - DAT_1808ac7ec) + DAT_1808ac7ec;
          fVar16 = (*(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10) - local_178) -
                   DAT_1808ac864;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          fVar15 = (*(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14) - local_174) -
                   DAT_1808ac864;
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          if ((fVar19 <= fVar16) && (fVar16 = fVar19, fVar19 <= 0.0)) {
            fVar16 = 0.0;
          }
          if ((fVar20 <= fVar15) && (fVar15 = fVar20, fVar20 <= 0.0)) {
            fVar15 = 0.0;
          }
          *(float *)(DAT_180ca0a50 + 0x1f48) = fVar16;
          *(float *)(lVar11 + 0x1f4c) = fVar15;
        }
        else {
          if (fVar16 == DAT_1808acd08) {
            fVar16 = *param_2;
          }
          else {
            fVar16 = fVar16 + DAT_1808ac864;
          }
          fVar19 = ((param_2[1] + param_2[1]) * DAT_1808ac1f4 - local_174 * DAT_1808ac1f4) +
                   local_174 * DAT_1808ac140;
          fVar20 = (fVar16 - DAT_1808ac7ec) + DAT_1808ac7ec;
          fVar16 = (*(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10) - local_178) -
                   DAT_1808ac864;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          fVar15 = (*(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14) - local_174) -
                   DAT_1808ac864;
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          if ((fVar20 <= fVar16) && (fVar16 = fVar20, fVar20 <= 0.0)) {
            fVar16 = 0.0;
          }
          if ((fVar19 <= fVar15) && (fVar15 = fVar19, fVar19 <= 0.0)) {
            fVar15 = 0.0;
          }
          *(float *)(DAT_180ca0a50 + 0x1f48) = fVar16;
          *(float *)(lVar11 + 0x1f4c) = fVar15;
        }
      }
      else {
        fVar16 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
        fVar15 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
        if (fVar16 <= DAT_1808ac7ac) {
          fVar18 = 0.0;
        }
        else {
          fVar18 = DAT_1808ac658;
        }
        if (fVar15 <= DAT_1808ac7ac) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = DAT_1808ac658;
        }
        fVar19 = fVar19 + local_178;
        fVar16 = fVar16 - fVar18;
        if (fVar19 <= fVar16) {
          fVar16 = fVar19;
        }
        fVar19 = fVar16 - local_178;
        if (fVar16 - local_178 <= fVar18) {
          fVar19 = fVar18;
        }
        *(float *)(DAT_180ca0a50 + 0x1f48) = fVar19;
        fVar15 = fVar15 - fVar17;
        if (fVar20 + local_174 <= fVar15) {
          fVar15 = fVar20 + local_174;
        }
        fVar16 = fVar15 - local_174;
        if (fVar15 - local_174 <= fVar17) {
          fVar16 = fVar17;
        }
        *(float *)(lVar11 + 0x1f4c) = fVar16;
      }
      *(uint *)(lVar11 + 0x1f38) = *(uint *)(lVar11 + 0x1f38) | 1;
      *(undefined8 *)(lVar11 + 0x1f50) = 0;
      *(undefined4 *)(lVar11 + 0x1f3c) = 1;
    }
    local_178 = 7.0;
    local_174 = 7.0;
    cVar8 = FUN_1802b5260("##options",&local_178);
    if (cVar8 == '\0') {
      iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar1 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
        return 0;
      }
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
      return 0;
    }
    local_158 = (undefined2)_DAT_1809f72e0;
    local_156 = DAT_1809f72e2;
    local_154 = DAT_1809f72e4;
    local_150 = _DAT_1809f72e8;
    local_148 = CONCAT44(DAT_1809f72f4,DAT_1809f72f0);
    uStack_140 = CONCAT44(DAT_1809f72fc,DAT_1809f72f8);
    local_138 = DAT_1809f7300;
    local_134 = DAT_1809f7304;
    FUN_180024b50(local_130,&DAT_1809f7308);
    local_110 = _DAT_1809f5b40;
    uStack_108 = _DAT_1809f5b48;
    local_100 = DAT_1809f5b50;
    local_f8 = _DAT_1808ad2d0;
    uStack_f0 = _UNK_1808ad2d8;
    local_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 0;
    if (DAT_181107158 == DAT_181107160) {
      FUN_180354940(DAT_181107158,DAT_181107158,&local_158);
    }
    else {
      FUN_1803598d0(DAT_181107158,&local_158);
      DAT_181107158 = DAT_181107158 + 0x88;
    }
    FUN_18000f890(local_130);
    FUN_180312140(param_1);
    lVar6 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar11 = *(longlong *)(lVar6 + 0x14f8);
    lVar12 = *(longlong *)(lVar11 + 0x2c8);
    fVar16 = *(float *)(lVar11 + 0x118);
    fVar19 = *(float *)(lVar11 + 0x11c);
    if ((*(longlong *)(lVar11 + 0x1c8) != 0) || (lVar14 = 0x280, *(longlong *)(lVar6 + 0x2360) != 0)
       ) {
      lVar14 = 0x250;
    }
    fVar20 = *(float *)(lVar14 + lVar11) - fVar16;
    if ((param_1 != (char *)0x0) && (pcVar13 = param_1, param_1 != (char *)0xffffffffffffffff)) {
      while (*pcVar13 != '\0') {
        if (((*pcVar13 == '#') && (pcVar13[1] == '#')) ||
           (pcVar13 = pcVar13 + 1, pcVar13 == (char *)0xffffffffffffffff)) break;
      }
      if (pcVar13 != param_1) {
        pcVar13 = (char *)FUN_1802b3fe0(local_c8,param_1);
        uVar3 = DAT_180960ec8;
        if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
          pcVar13 = *(char **)pcVar13;
        }
        local_178 = fVar16 + fVar2;
        local_174 = (float)FUN_18053f0d0();
        local_174 = local_174 + fVar19;
        lVar11 = DAT_181107a18;
        if ((DAT_181107a18 == 0) && (lVar11 = DAT_181107a08, DAT_181107a08 == 0)) {
          lVar11 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
        }
        if ((((uVar3 & 0xff000000) != 0) && (pcVar13 != (char *)0x0)) && (*pcVar13 != '\0')) {
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x38) + 0x18);
          }
          local_170 = *(undefined8 *)(lVar12 + 0x60);
          uStack_168 = *(undefined8 *)(lVar12 + 0x68);
          local_180 = 0;
          local_188 = 0;
          local_190 = 0;
          local_1a0 = &local_170;
          local_1a8 = uVar3;
          local_198 = pcVar13;
          FUN_18040a900(lVar11,lVar12,DAT_1808ac940,&local_178);
        }
        FUN_18000f890(local_c8);
        lVar11 = DAT_181107158;
        *(float *)(DAT_181107158 + -0x24) = fVar16;
        *(float *)(lVar11 + -0x20) = fVar19;
        lVar11 = DAT_181107158;
        *(float *)(DAT_181107158 + -0x1c) = fVar20 + fVar16;
        *(float *)(lVar11 + -0x18) = fVar19 + _DAT_1808ac98c;
        local_174 = 25.068;
        local_178 = fVar20;
        FUN_1804174f0(&local_178);
        fVar19 = fVar19 + _DAT_1808aca08;
      }
    }
    fVar15 = DAT_1808ac8e4;
    local_158 = 0x100;
    local_156 = 1;
    local_154 = DAT_1808ac8e4;
    local_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_134 = DAT_1808aca44;
    local_120 = 0;
    local_118 = 0xf;
    local_130._11_5_ = 0;
    local_130._0_11_ = SUB1211(ZEXT812(0),1);
    local_130 = local_130 << 8;
    _DAT_1809f72e0 = 0x10100;
    DAT_1809f72e4 = DAT_1808ac8e4;
    _DAT_1809f72e8 = 0;
    DAT_1809f72f0 = 0.0;
    DAT_1809f72f4 = 0.0;
    DAT_1809f72f8 = 0.0;
    DAT_1809f72fc = 0.0;
    DAT_1809f7300 = 0;
    DAT_1809f7304 = DAT_1808aca44;
    FUN_18002ba60(&DAT_1809f7308,local_130);
    FUN_18000f890(local_130);
    lVar11 = DAT_180ca0a50;
    _DAT_1809f72e0 = 1;
    DAT_1809f72e4 = 12.0;
    DAT_1809f7304 = 0x41fda5e3;
    DAT_1809f72f0 = fVar16 + fVar2;
    DAT_1809f72f4 = fVar20 - fVar15;
    DAT_1809f72f8 = fVar19 + fVar2;
    DAT_1809f72fc = DAT_1809f72f8;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    DAT_1809f7300 = *(undefined4 *)(*(longlong *)(lVar11 + 0x14f8) + 0x15c);
    *(float *)(DAT_181107158 + -0x28) = fVar19;
    *(float *)(DAT_181107158 + -0x10) = DAT_1809f72f8;
    *(char *)(DAT_181107158 + -0x14) = cVar7;
    FUN_180401570(lVar12 + 0x88);
    FUN_180401a80(lVar12 + 0x88,lVar12,1);
    if (cVar7 != '\0') {
      FUN_1802bb210();
    }
  }
  else {
    FUN_1802b9bd0();
    local_158 = (undefined2)_DAT_1809f72e0;
    local_156 = DAT_1809f72e2;
    local_154 = DAT_1809f72e4;
    local_150 = _DAT_1809f72e8;
    local_148 = CONCAT44(DAT_1809f72f4,DAT_1809f72f0);
    uStack_140 = CONCAT44(DAT_1809f72fc,DAT_1809f72f8);
    local_138 = DAT_1809f7300;
    local_134 = DAT_1809f7304;
    FUN_180024b50(local_130,&DAT_1809f7308);
    local_110 = _DAT_1809f5b40;
    uStack_108 = _DAT_1809f5b48;
    local_100 = DAT_1809f5b50;
    local_f8 = _DAT_1808ad2d0;
    uStack_f0 = _UNK_1808ad2d8;
    local_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 0;
    if (DAT_181107158 == DAT_181107160) {
      FUN_180354940(DAT_181107158,DAT_181107158,&local_158);
    }
    else {
      FUN_1803598d0(DAT_181107158,&local_158);
      DAT_181107158 = DAT_181107158 + 0x88;
    }
    FUN_18000f890(local_130);
    *(undefined1 *)(DAT_181107158 + -4) = 1;
    FUN_180312140(param_1);
    _DAT_1809f72e0 = _DAT_1809f72e0 & 0xff;
    DAT_1809f7304 = 0x41fda5e3;
    _DAT_1809f72e8 = _DAT_1809f72e8 & 0xffffffff;
  }
  return 1;
}



/* ===== 1802bc070 FUN_1802bc070 ===== */

void FUN_1802bc070(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res18;
  float local_res1c;
  longlong local_78 [3];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 local_50;
  
  pfVar10 = (float *)FUN_1802b9e90(local_78);
  fVar15 = *pfVar10;
  fVar17 = pfVar10[1];
  fVar3 = pfVar10[2];
  fVar4 = pfVar10[3];
  uVar2 = *(undefined8 *)(pfVar10 + 4);
  fVar16 = (float)((ulonglong)uVar2 >> 0x20);
  local_60 = fVar15;
  fStack_5c = fVar17;
  fStack_58 = fVar3;
  fStack_54 = fVar4;
  FUN_1803e89e0(param_1);
  lVar11 = DAT_180ca0a50;
  fVar13 = (fVar15 - fVar16) - DAT_1809f72e4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(lVar11 + 0x14f8);
  *(float *)(lVar11 + 0x118) = fVar13;
  *(float *)(lVar11 + 0x11c) = fVar17;
  *(undefined1 *)(lVar11 + 0x159) = 1;
  local_res18 = (fVar3 - fVar15) + fVar16 + DAT_1809f72e4 * DAT_1808ac540;
  local_res1c = fVar4;
  local_50 = uVar2;
  cVar6 = FUN_180415e30("##row",&local_res18,0);
  if (cVar6 == '\0') {
    cVar6 = FUN_180312960(param_2);
    if (cVar6 != '\0') {
      FUN_180312de0();
    }
  }
  else {
    FUN_1802b4d80("##options");
  }
  FUN_1802baa50(&local_60);
  iVar7 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##options");
  fVar15 = 0.0;
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar11 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar11 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar7) ||
       (*(char *)(lVar11 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_1802bc1dd;
LAB_1802bc1ef:
    fVar15 = DAT_1808ac34c;
  }
  else {
LAB_1802bc1dd:
    if ((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
       (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) goto LAB_1802bc1ef;
    cVar6 = FUN_1803dd930(0);
    if (cVar6 != '\0') {
      fVar15 = DAT_1808ac1f4;
    }
  }
  local_res18 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  fStack_54 = 0.0;
  local_50 = CONCAT44(local_50._4_4_,0xffffffff);
  local_60 = fVar15;
  fStack_5c = fVar15;
  fStack_58 = fVar15;
  FUN_18034a380(local_res18,local_78,&local_res18,&local_60);
  uVar14 = FUN_1802b3660(local_78[0] + 0x14,fVar15,DAT_1808ac118,0);
  uVar8 = FUN_1802b38e0(DAT_180960ec0,DAT_180960ec8,uVar14);
  fVar15 = (float)FUN_18053fc00(DAT_1808ac84c);
  lVar11 = DAT_180ca0a50;
  uVar5 = DAT_1808acbc0;
  uVar14 = DAT_1808ac8d4;
  local_res18 = fVar3 - fVar15 * DAT_1808ac1f4;
  fVar17 = fVar4 * DAT_1808ac1f4 + fVar17;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_res1c = fVar17;
  FUN_1802b6e90(*(undefined8 *)(*(longlong *)(lVar11 + 0x14f8) + 0x2c8),"nl_glyph_angle_right",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
                ,uVar5,&local_res18,uVar14,uVar8);
  DAT_1809f36b8 = 0x43848000;
  uVar9 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##options");
  uVar12 = (((((ulonglong)(uVar9 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar9 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar9 >> 0x10 & 0xff)) *
            0x100000001b3 ^ (ulonglong)(uVar9 >> 0x18)) * 0x100000001b3 & DAT_180ca1870;
  lVar11 = *(longlong *)(DAT_180ca1858 + 8 + uVar12 * 0x10);
  if (lVar11 != DAT_180ca1848) {
    uVar1 = *(uint *)(lVar11 + 0x10);
    while (uVar9 != uVar1) {
      if (lVar11 == *(longlong *)(DAT_180ca1858 + uVar12 * 0x10)) goto LAB_1802bc3d9;
      lVar11 = *(longlong *)(lVar11 + 8);
      uVar1 = *(uint *)(lVar11 + 0x10);
    }
    if (lVar11 != 0) goto LAB_1802bc3dc;
  }
LAB_1802bc3d9:
  lVar11 = DAT_180ca1848;
LAB_1802bc3dc:
  DAT_1809f36bc = DAT_1808acd08;
  if (lVar11 != DAT_180ca1848) {
    DAT_1809f36bc = *(undefined4 *)(lVar11 + 0x14);
  }
  DAT_1809f4bb8 = 0x7f7fffff;
  DAT_180cd0d54 = 1;
  local_res18 = DAT_1809f72e4 + fVar3 + DAT_1808ac7ec;
  local_res1c = fVar17;
  FUN_1802bb650(param_2,&local_res18,1);
  return;
}



/* ===== 1802bc470 FUN_1802bc470 ===== */

void FUN_1802bc470(void)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [56];
  
  FUN_180312320(0);
  uVar2 = DAT_1809f7304;
  DAT_1809f7304 = 0x40e00000;
  lVar4 = FUN_1802b9e90(local_38,&DAT_18058b643);
  lVar3 = DAT_180ca0a50;
  fVar1 = *(float *)(lVar4 + 4);
  DAT_1809f7304 = uVar2;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  if ((DAT_180960f48 & 0xff000000) != 0) {
    local_44 = fVar1 + DAT_1808ac658 + DAT_1808ac1f4;
    local_48 = DAT_1809f72e4 + DAT_1809f72f0 + DAT_1808ac1f4;
    local_40 = ((DAT_1809f72f4 + DAT_1809f72f0) - DAT_1809f72e4) + DAT_1808ac1f4;
    local_3c = local_44;
    FUN_1803fc600(*(undefined8 *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8),&local_48,2,DAT_180960f48,
                  DAT_1808ac34c,0);
  }
  return;
}



/* ===== 1802bc580 FUN_1802bc580 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bc580(void)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 ***pppuVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  float local_a4;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 ***local_70 [2];
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  FUN_1802b9bd0();
  if ((DAT_181107150 == DAT_181107158) || (*(char *)(DAT_181107158 + -4) == '\0')) {
    FUN_180322790();
    FUN_1802b9bd0();
    FUN_1802bb4d0();
    fVar3 = DAT_1808ac7ec;
    DAT_1809f72f8 = *(float *)(DAT_181107158 + -0x10);
    if ((DAT_181107150 == DAT_181107158) || (*(float *)(DAT_181107158 + -0x28) < 0.0)) {
      FUN_1802bace0(DAT_1809f72fc + DAT_1808ac7ec);
    }
    else {
      FUN_1802bace0(DAT_1809f72fc + DAT_1808ac7ec);
      DAT_1809f72fc = DAT_1809f72fc + fVar3;
    }
    lVar2 = DAT_180ca0a50;
    fVar3 = DAT_1809f72f8;
    uVar4 = DAT_1809f72f0;
    fVar8 = DAT_1809f72fc - DAT_1809f72f8;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x14f8) + 0x2c8);
    FUN_180401a80(lVar2 + 0x88,lVar2,0);
    FUN_1804016a0(lVar2 + 0x88,lVar2);
    lVar2 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar2 + 0x14f8);
    *(undefined4 *)(lVar2 + 0x118) = uVar4;
    *(float *)(lVar2 + 0x11c) = fVar3;
    *(undefined1 *)(lVar2 + 0x159) = 1;
    local_a8 = DAT_1809f72f4;
    local_a4 = DAT_1808ac34c;
    if (DAT_1808ac34c <= fVar8) {
      local_a4 = fVar8;
    }
    FUN_1804174f0(&local_a8);
    DAT_1809f72e0 = *(undefined1 *)(DAT_181107158 + -0x88);
    DAT_1809f72e1 = *(undefined1 *)(DAT_181107158 + -0x87);
    DAT_1809f72e2 = *(undefined1 *)(DAT_181107158 + -0x86);
    DAT_1809f72e4 = *(undefined4 *)(DAT_181107158 + -0x84);
    DAT_1809f72e8 = *(undefined4 *)(DAT_181107158 + -0x80);
    DAT_1809f72ec = *(int *)(DAT_181107158 + -0x7c);
    DAT_1809f72f0 = *(undefined4 *)(DAT_181107158 + -0x78);
    DAT_1809f72f4 = *(undefined4 *)(DAT_181107158 + -0x74);
    DAT_1809f72f8 = *(float *)(DAT_181107158 + -0x70);
    DAT_1809f72fc = *(float *)(DAT_181107158 + -0x6c);
    DAT_1809f7300 = *(undefined4 *)(DAT_181107158 + -0x68);
    DAT_1809f7304 = *(undefined4 *)(DAT_181107158 + -100);
    puVar7 = (undefined8 *)(DAT_181107158 + -0x60);
    if (puVar7 != &DAT_1809f7308) {
      if (0xf < *(ulonglong *)(DAT_181107158 + -0x48)) {
        puVar7 = (undefined8 *)*puVar7;
      }
      FUN_180029840(&DAT_1809f7308,puVar7,*(undefined8 *)(DAT_181107158 + -0x50));
    }
    DAT_1809f5b40 = *(undefined4 *)(DAT_181107158 + -0x40);
    DAT_1809f5b44 = *(undefined4 *)(DAT_181107158 + -0x3c);
    DAT_1809f5b48 = *(undefined4 *)(DAT_181107158 + -0x38);
    DAT_1809f5b4c = *(undefined4 *)(DAT_181107158 + -0x34);
    DAT_1809f5b50 = *(undefined8 *)(DAT_181107158 + -0x30);
    FUN_18000f890(DAT_181107158 + -0x60);
    DAT_181107158 = DAT_181107158 + -0x88;
    cVar5 = FUN_180312290();
    if (cVar5 == '\0') {
      FUN_1802b5590();
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
  }
  else {
    local_98 = *(undefined1 *)(DAT_181107158 + -0x88);
    local_97 = *(undefined1 *)(DAT_181107158 + -0x87);
    local_96 = *(undefined1 *)(DAT_181107158 + -0x86);
    local_94 = *(undefined4 *)(DAT_181107158 + -0x84);
    local_90 = *(undefined4 *)(DAT_181107158 + -0x80);
    local_8c = *(int *)(DAT_181107158 + -0x7c);
    local_88 = *(undefined8 *)(DAT_181107158 + -0x78);
    uStack_80 = *(undefined8 *)(DAT_181107158 + -0x70);
    local_78 = *(undefined4 *)(DAT_181107158 + -0x68);
    local_74 = *(undefined4 *)(DAT_181107158 + -100);
    FUN_180024b50(local_70,DAT_181107158 + -0x60);
    uStack_80 = CONCAT44(DAT_1809f72fc,(undefined4)uStack_80);
    DAT_1809f72ec = local_8c + DAT_1809f72ec;
    DAT_1809f72e0 = local_98;
    DAT_1809f72e1 = local_97;
    DAT_1809f72e2 = local_96;
    DAT_1809f72e4 = local_94;
    DAT_1809f72e8 = local_90;
    DAT_1809f72f0 = (undefined4)local_88;
    DAT_1809f72f4 = local_88._4_4_;
    DAT_1809f72f8 = (float)(undefined4)uStack_80;
    DAT_1809f7300 = local_78;
    DAT_1809f7304 = local_74;
    pppuVar6 = local_70;
    if (0xf < local_58) {
      pppuVar6 = local_70[0];
    }
    local_8c = DAT_1809f72ec;
    FUN_180029840(&DAT_1809f7308,pppuVar6,local_60);
    DAT_1809f5b40 = *(undefined4 *)(DAT_181107158 + -0x40);
    DAT_1809f5b44 = *(undefined4 *)(DAT_181107158 + -0x3c);
    DAT_1809f5b48 = *(undefined4 *)(DAT_181107158 + -0x38);
    DAT_1809f5b4c = *(undefined4 *)(DAT_181107158 + -0x34);
    DAT_1809f5b50 = *(undefined8 *)(DAT_181107158 + -0x30);
    FUN_18000f890(DAT_181107158 + -0x60);
    DAT_181107158 = DAT_181107158 + -0x88;
    FUN_180312290();
    iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar1 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
    }
    FUN_18000f890(local_70);
  }
  return;
}



/* ===== 1802bca00 FUN_1802bca00 ===== */

float FUN_1802bca00(undefined8 *param_1)

{
  float fVar1;
  float local_res8 [8];
  
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_18040a2f0(local_res8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08,0,
                param_1,0,0,0);
  fVar1 = (float)FUN_18053fc00(local_res8[0] + DAT_1808ac2f0);
  return fVar1 + DAT_1808aca90;
}



/* ===== 1802bca80 FUN_1802bca80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bca80(undefined8 *param_1)

{
  size_t _Size;
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *_Str;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  ulonglong *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_108;
  float local_f8 [2];
  undefined8 local_f0;
  char cStack_e8;
  char cStack_e7;
  char cStack_e6;
  undefined1 uStack_e5;
  undefined4 uStack_e4;
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  ulonglong local_70;
  
  local_70 = DAT_180919500 ^ (ulonglong)auStack_158;
  iVar9 = 0;
  _Str = &DAT_18095d530;
  do {
    if (*_Str != '\0') {
      sVar4 = strlen(_Str);
      _Size = param_1[2];
      if ((ulonglong)param_1[3] < 0x10) {
        _Buf1 = param_1;
      }
      else {
        _Buf1 = (undefined8 *)*param_1;
      }
      if (_Size == sVar4) {
        if (_Size != 0) {
          iVar3 = memcmp(_Buf1,_Str,_Size);
          if (iVar3 != 0) goto LAB_1802bcb00;
        }
        iVar9 = iVar9 + 1;
      }
    }
LAB_1802bcb00:
    _Str = _Str + 0xe4;
  } while (_Str != &DAT_180960e30);
  if (0x10 < iVar9) {
    iVar9 = 0x10;
  }
  if (iVar9 < 1) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = DAT_1808acb34;
  }
  uStack_e4 = 0;
  local_e0 = 0xb;
  local_d8 = 0xf;
  local_f0._0_4_ = s_All_Hotkeys_18075c1f8._0_4_;
  local_f0._4_1_ = s_All_Hotkeys_18075c1f8[4];
  local_f0._5_1_ = s_All_Hotkeys_18075c1f8[5];
  local_f0._6_1_ = s_All_Hotkeys_18075c1f8[6];
  local_f0._7_1_ = s_All_Hotkeys_18075c1f8[7];
  cStack_e8 = s_All_Hotkeys_18075c1f8[8];
  cStack_e7 = s_All_Hotkeys_18075c1f8[9];
  cStack_e6 = s_All_Hotkeys_18075c1f8[10];
  uStack_e5 = 0;
  uVar5 = FUN_18035eb30(local_b0,&local_f0);
  fVar10 = (float)FUN_1802bca00(uVar5);
  FUN_18000f890(local_b0);
  if (0xf < local_d8) {
    uVar7 = local_d8 + 1;
    lVar2 = CONCAT17(local_f0._7_1_,
                     CONCAT16(local_f0._6_1_,
                              CONCAT15(local_f0._5_1_,CONCAT14(local_f0._4_1_,(undefined4)local_f0))
                             ));
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1802bce76;
      uVar7 = local_d8 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar6,uVar7);
  }
  if (fVar10 <= fVar12) {
    fVar10 = fVar12;
  }
  fVar12 = fVar10;
  if (iVar9 < 0x10) {
    local_c0 = 10;
    local_b8 = 0xf;
    local_d0._0_1_ = s_New_Hotkey_18075c1e8[0];
    local_d0._1_1_ = s_New_Hotkey_18075c1e8[1];
    local_d0._2_1_ = s_New_Hotkey_18075c1e8[2];
    local_d0._3_1_ = s_New_Hotkey_18075c1e8[3];
    local_d0._4_1_ = s_New_Hotkey_18075c1e8[4];
    local_d0._5_1_ = s_New_Hotkey_18075c1e8[5];
    local_d0._6_1_ = s_New_Hotkey_18075c1e8[6];
    local_d0._7_1_ = s_New_Hotkey_18075c1e8[7];
    uStack_c8 = (ulonglong)(ushort)s_New_Hotkey_18075c1e8._8_2_;
    local_130 = &local_d0;
    local_108 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    local_138 = 0;
    FUN_18040a2f0(local_f8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
    fVar11 = (float)FUN_18053fc00(local_f8[0] + DAT_1808ac2f0);
    if (0xf < local_b8) {
      uVar8 = local_b8 + 1;
      uVar7 = local_d0;
      if (0xfff < uVar8) {
        uVar7 = *(ulonglong *)(local_d0 - 8);
        if (0x1f < (local_d0 - uVar7) - 8) goto LAB_1802bce76;
        uVar8 = local_b8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar7,uVar8);
    }
    fVar12 = fVar11 + DAT_1808aca90;
    if (fVar11 + DAT_1808aca90 <= fVar10) {
      fVar12 = fVar10;
    }
    local_c0 = 0;
    local_b8 = 0xf;
    local_d0 = local_d0 & 0xffffffffffffff00;
  }
  fVar10 = fVar12;
  if (DAT_18091a1de != '\0') {
    cStack_e6 = '\0';
    uStack_e5 = 0;
    uStack_e4 = 0;
    local_e0 = 9;
    local_d8 = 0xf;
    local_f0._0_4_ = s_Copy_Path_18075c298._0_4_;
    local_f0._4_1_ = s_Copy_Path_18075c298[4];
    local_f0._5_1_ = s_Copy_Path_18075c298[5];
    local_f0._6_1_ = s_Copy_Path_18075c298[6];
    local_f0._7_1_ = s_Copy_Path_18075c298[7];
    cStack_e8 = s_Copy_Path_18075c298[8];
    cStack_e7 = '\0';
    uVar5 = FUN_18035eb30(local_90,&local_f0);
    fVar10 = (float)FUN_1802bca00(uVar5);
    if (fVar10 <= fVar12) {
      fVar10 = fVar12;
    }
    FUN_18000f890(local_90);
    if (0xf < local_d8) {
      uVar7 = local_d8 + 1;
      lVar2 = CONCAT17(local_f0._7_1_,
                       CONCAT16(local_f0._6_1_,
                                CONCAT15(local_f0._5_1_,
                                         CONCAT14(local_f0._4_1_,(undefined4)local_f0))));
      lVar6 = lVar2;
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1802bce76;
        uVar7 = local_d8 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar6,uVar7);
    }
  }
  local_f0._6_1_ = '\0';
  local_f0._7_1_ = '\0';
  cStack_e8 = '\0';
  cStack_e7 = '\0';
  cStack_e6 = '\0';
  uStack_e5 = 0;
  uStack_e4 = 0;
  local_e0 = 5;
  local_d8 = 0xf;
  local_f0._0_1_ = s_Reset_18075c28c[0];
  local_f0._1_1_ = s_Reset_18075c28c[1];
  local_f0._2_1_ = s_Reset_18075c28c[2];
  local_f0._3_1_ = s_Reset_18075c28c[3];
  local_f0._4_1_ = s_Reset_18075c28c[4];
  local_f0._5_1_ = '\0';
  local_130 = &local_f0;
  local_108 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  FUN_18040a2f0(local_f8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
  fVar12 = (float)FUN_18053fc00(local_f8[0] + DAT_1808ac2f0);
  if (0xf < local_d8) {
    uVar7 = local_d8 + 1;
    lVar2 = CONCAT17(local_f0._7_1_,
                     CONCAT16(local_f0._6_1_,
                              CONCAT15(local_f0._5_1_,CONCAT14(local_f0._4_1_,(undefined4)local_f0))
                             ));
    lVar6 = lVar2;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar6) - 8U) {
LAB_1802bce76:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = local_d8 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar6,uVar7);
  }
  fVar11 = fVar12 + DAT_1808aca90;
  if (fVar12 + DAT_1808aca90 <= fVar10) {
    fVar11 = fVar10;
  }
  FUN_18053fc00(fVar11 + DAT_1808ac8e4 + DAT_1808ac1f4);
  return;
}



/* ===== 1802bce80 FUN_1802bce80 ===== */

void FUN_1802bce80(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_3 != '\0') {
    FUN_1802b4d80();
    lVar1 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(undefined8 *)(lVar1 + 0x1f48) = *(undefined8 *)(lVar1 + 0x110);
    *(undefined8 *)(lVar1 + 0x1f50) = 0;
    *(undefined4 *)(lVar1 + 0x1f3c) = 1;
  }
  uVar2 = FUN_1802bca80(param_4);
  lVar1 = DAT_180ca0a50;
  DAT_180cd04ad = 1;
  DAT_180cd04ab = 1;
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 2;
  *(undefined4 *)(lVar1 + 0x1f58) = uVar2;
  *(undefined4 *)(lVar1 + 0x1f5c) = 0;
  *(undefined4 *)(lVar1 + 8000) = 1;
  local_res10[0] = 0x40e0000040e00000;
  FUN_1802b5260(param_1,local_res10);
  return;
}



/* ===== 1802bcf40 FUN_1802bcf40 ===== */

float FUN_1802bcf40(undefined8 *param_1)

{
  size_t _Size;
  float fVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *_Buf1;
  char *_Str;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_1808ac34c;
  _Str = &DAT_18095d530;
  fVar4 = 0.0;
  do {
    fVar5 = fVar4;
    if (*_Str != '\0') {
      sVar3 = strlen(_Str);
      _Size = param_1[2];
      if ((ulonglong)param_1[3] < 0x10) {
        _Buf1 = param_1;
      }
      else {
        _Buf1 = (undefined8 *)*param_1;
      }
      if ((_Size == sVar3) &&
         (((_Size == 0 || (iVar2 = memcmp(_Buf1,_Str,_Size), iVar2 == 0)) &&
          (fVar5 = *(float *)(_Str + 0x6c) + fVar1, *(float *)(_Str + 0x6c) + fVar1 <= fVar4)))) {
        fVar5 = fVar4;
      }
    }
    _Str = _Str + 0xe4;
    fVar4 = fVar5;
  } while (_Str != &DAT_180960e30);
  return fVar5;
}



/* ===== 1802bcff0 FUN_1802bcff0 ===== */

void FUN_1802bcff0(undefined8 param_1,float param_2,char *param_3)

{
  longlong lVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong lVar4;
  size_t sVar5;
  float *pfVar6;
  float local_res10 [2];
  char *local_res18;
  undefined1 local_28 [32];
  
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    local_res10[0] = param_2;
    local_res18 = param_3;
    plVar3 = (longlong *)FUN_18034e840(param_1,local_28,param_1);
    lVar1 = *plVar3;
    lVar4 = FUN_1804ef420(param_3,0x25);
    if (lVar4 == 0) {
      pfVar2 = *(float **)(lVar1 + 0x58);
      for (pfVar6 = *(float **)(lVar1 + 0x50); pfVar6 != pfVar2; pfVar6 = pfVar6 + 10) {
        if (*pfVar6 == param_2) {
          sVar5 = strlen(param_3);
          FUN_180029840(pfVar6 + 2,param_3,sVar5);
          return;
        }
      }
      if (pfVar2 == *(float **)(lVar1 + 0x60)) {
        FUN_18034feb0(lVar1 + 0x50,pfVar2,local_res10,&local_res18);
      }
      else {
        *pfVar2 = param_2;
        pfVar6 = pfVar2 + 2;
        pfVar6[0] = 0.0;
        pfVar6[1] = 0.0;
        pfVar2[4] = 0.0;
        pfVar2[5] = 0.0;
        pfVar2[6] = 0.0;
        pfVar2[7] = 0.0;
        pfVar2[8] = 0.0;
        pfVar2[9] = 0.0;
        sVar5 = strlen(param_3);
        FUN_1800133a0(pfVar6,param_3,sVar5);
        *(longlong *)(lVar1 + 0x58) = *(longlong *)(lVar1 + 0x58) + 0x28;
      }
    }
    else {
      sVar5 = strlen(param_3);
      FUN_180029840(lVar1 + 0x30,param_3,sVar5);
    }
  }
  return;
}



/* ===== 1802bd110 FUN_1802bd110 ===== */

undefined8 *
FUN_1802bd110(undefined8 *param_1,undefined8 *param_2,float param_3,char *param_4,char param_5)

{
  byte *pbVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 local_30 [40];
  
  if ((ulonglong)param_2[3] < 0x10) {
    puVar7 = param_2;
  }
  else {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar6 + (longlong)puVar7);
      uVar6 = uVar6 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < (ulonglong)param_2[2]);
  }
  lVar2 = FUN_180354860(uVar6,local_30,param_2,uVar8);
  lVar4 = DAT_181107428;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar4 = *(longlong *)(lVar2 + 8);
  }
  if (lVar4 != DAT_181107428) {
    for (pfVar3 = *(float **)(lVar4 + 0x50); pfVar3 != *(float **)(lVar4 + 0x58);
        pfVar3 = pfVar3 + 10) {
      if (*pfVar3 == param_3) {
        FUN_180024b50(param_1,pfVar3 + 2);
        return param_1;
      }
    }
    if (*(longlong *)(lVar4 + 0x40) != 0) {
      FUN_180024b50(param_1,lVar4 + 0x30);
      return param_1;
    }
  }
  if (((param_4 == (char *)0x0) || (lVar4 = FUN_1804ef420(param_4,0x25), lVar4 == 0)) &&
     (param_4 = "%.1f", param_5 != '\0')) {
    param_4 = "%d";
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar5 = strlen(param_4);
  FUN_1800133a0(param_1,param_4,sVar5);
  return param_1;
}



/* ===== 1802bd260 FUN_1802bd260 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802bd260(undefined8 *param_1,longlong *param_2,int param_3)

{
  byte bVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 ****ppppuVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined1 local_68 [8];
  undefined8 *local_60 [2];
  undefined8 ****local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  puVar11 = auStack_88;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (0x17 < param_3 - 1U) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    goto LAB_1802bd473;
  }
  local_60[0] = param_1;
  puVar5 = (undefined8 *)FUN_1800fbe90(*param_2);
  puVar11 = auStack_88;
  if ((puVar5 != (undefined8 *)0x0) && (uVar2 = puVar5[2], puVar11 = auStack_88, 2 < uVar2)) {
    if (uVar2 < uVar2 - 2) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    puVar7 = puVar5;
    if (0xf < (ulonglong)puVar5[3]) {
      puVar7 = (undefined8 *)*puVar5;
    }
    bVar1 = *(byte *)((longlong)puVar7 + (uVar2 - 2));
    bVar13 = bVar1 < 0x23;
    if ((bVar1 == 0x23) &&
       (bVar1 = *(byte *)((longlong)puVar7 + (uVar2 - 1)), bVar13 = bVar1 < 0x30, bVar1 == 0x30)) {
      uVar9 = 0;
    }
    else {
      uVar9 = -(uint)bVar13 | 1;
    }
    puVar11 = auStack_88;
    if (uVar9 == 0) {
      local_50 = (undefined8 ****)0x0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1800133a0(&local_50,puVar5);
      if (DAT_180cc3e19 == '\0') {
        DAT_180cc3e19 = '\x01';
        FUN_1800ff4a0(local_68,&DAT_18091a190);
      }
      uVar2 = uStack_38;
      ppppuVar4 = local_50;
      ppppuVar10 = &local_50;
      if (0xf < uStack_38) {
        ppppuVar10 = local_50;
      }
      uVar12 = 0xcbf29ce484222325;
      uVar8 = 0;
      if (local_40 != 0) {
        do {
          uVar12 = (uVar12 ^ *(byte *)(uVar8 + (longlong)ppppuVar10)) * 0x100000001b3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_40);
      }
      lVar6 = FUN_18014a630(uVar8,local_60,&local_50,uVar12);
      puVar11 = auStack_88;
      lVar6 = *(longlong *)(lVar6 + 8);
      if ((((lVar6 != 0) && (lVar6 != DAT_180cd12c8)) && (*(int *)(lVar6 + 0x38) == 4)) &&
         ((*(int *)(lVar6 + 0x3c) == param_3 && (*(longlong *)(lVar6 + 0x30) == *param_2)))) {
        uVar8 = 1;
        if (1 < param_3) {
          do {
            if (param_2[uVar8] != uVar8 + *(longlong *)(lVar6 + 0x30)) goto LAB_1802bd3f6;
            uVar9 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar9;
          } while ((int)uVar9 < param_3);
        }
        *param_1 = local_50;
        param_1[1] = uStack_48;
        param_1[2] = local_40;
        param_1[3] = uStack_38;
        puVar11 = auStack_88;
        goto LAB_1802bd473;
      }
LAB_1802bd3f6:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      if (uVar2 < 0x10) goto LAB_1802bd473;
      uVar8 = uVar2 + 1;
      ppppuVar10 = ppppuVar4;
      if (0xfff < uVar8) {
        ppppuVar10 = (undefined8 ****)ppppuVar4[-1];
        if (0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar10))) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar11 = auStack_80;
          goto LAB_1802bd447;
        }
        uVar8 = uVar2 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppuVar10,uVar8);
      puVar11 = auStack_88;
      goto LAB_1802bd473;
    }
  }
LAB_1802bd447:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
LAB_1802bd473:
  *(undefined8 *)(puVar11 + -8) = 0x1802bd483;
  return param_1;
}



/* ===== 1802bd4a0 FUN_1802bd4a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1802bd4a0(undefined8 param_1,undefined8 param_2,char param_3,undefined8 *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  char *pcVar9;
  longlong lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_128 [32];
  float *local_108;
  undefined8 *local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  float local_c8 [4];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_128;
  lVar10 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_d8 = *(undefined8 *)(lVar10 + 0x118);
  if ((*(longlong *)(lVar10 + 0x1c8) != 0) ||
     (lVar7 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar7 = 0x250;
  }
  fVar13 = *(float *)(lVar7 + lVar10) - *(float *)(lVar10 + 0x118);
  local_cc = 31.706;
  local_d0 = fVar13;
  FUN_1803e89e0(param_1);
  uVar4 = FUN_180415e30("##item",&local_d0,0);
  cVar5 = FUN_1803dd930(0);
  local_d0 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(float *)(DAT_180ca0a50 + 0x1578) == 0.0) ||
     (*(float *)(DAT_180ca0a50 + 0x1578) != local_d0)) {
    if (cVar5 == '\0') {
      fVar12 = 0.0;
    }
    else {
      fVar12 = DAT_1808ac1f4;
    }
  }
  else {
    fVar12 = DAT_1808ac34c;
  }
  local_9c = 0;
  local_98 = 0xffffffff;
  local_a8 = fVar12;
  local_a4 = fVar12;
  local_a0 = fVar12;
  FUN_18034a380(local_d0,&local_b8,&local_d0,&local_a8);
  fVar12 = (float)FUN_1802b3660(CONCAT44(uStack_b4,local_b8) + 0x14,fVar12,DAT_1808ac118,0);
  lVar10 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar10 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar10 + 0x14f8) + 0xce) = 1;
  lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8);
  fVar3 = local_d8._4_4_;
  fVar2 = (float)local_d8;
  if (0.0 < fVar12) {
    local_c8[2] = 1.0;
    local_c8[0] = 0.0;
    local_c8[1] = fVar12 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_d0 = fVar13 + (float)local_d8;
    local_cc = local_d8._4_4_ + DAT_1808ac9f8;
    pfVar11 = local_c8;
    if (0.0 <= local_c8[1]) {
      pfVar11 = local_c8 + 1;
    }
    pfVar8 = local_c8 + 2;
    if (local_c8[1] <= DAT_1808ac34c) {
      pfVar8 = pfVar11;
    }
    local_100 = (undefined8 *)((ulonglong)local_100 & 0xffffffff00000000);
    local_108 = (float *)CONCAT44(local_108._4_4_,DAT_1808ac854);
    FUN_1803fe590(lVar10,&local_d8,&local_d0,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar8 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18);
  }
  if (param_3 == '\0') {
    uVar6 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,fVar12);
    fVar13 = DAT_1808ac8b0;
    if ((param_4 == (undefined8 *)0x0) || (param_4[1] == 0)) goto LAB_1802bd828;
    local_d8 = CONCAT44(fVar3 + DAT_1808ac9f8,fVar2 + DAT_1808ac9fc);
    local_d0 = fVar2 + DAT_1808ac8b0;
    local_cc = fVar3 + 0.0;
    local_f0 = CONCAT44(local_f0._4_4_,uVar6);
    local_f8 = (char *)CONCAT44(local_f8._4_4_,DAT_1808ac8d4);
    local_100 = &local_d8;
    local_108 = &local_d0;
    FUN_1802b6f70(lVar10,*param_4,param_4[1],*(undefined4 *)(param_4 + 2));
  }
  else {
    uVar6 = 0xff6163db;
    local_d8 = CONCAT44(fVar3 + DAT_1808ac910,fVar2 + DAT_1808ac8b0 + DAT_1808ac864);
    local_f8 = (char *)CONCAT44(local_f8._4_4_,0xff6163db);
    local_100 = (undefined8 *)CONCAT44(local_100._4_4_,DAT_1808ac8d4);
    local_108 = (float *)&local_d8;
    FUN_1802b6e90(lVar10,"nl_glyph_trash",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                  ,DAT_1808acbe4);
  }
  fVar13 = DAT_1808aca64;
LAB_1802bd828:
  pcVar9 = (char *)FUN_1802b3fe0(&local_a8,param_1);
  if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
    pcVar9 = *(char **)pcVar9;
  }
  local_d8 = CONCAT44(local_d8._4_4_,fVar2 + fVar13);
  fVar13 = (float)FUN_18053f0d0(DAT_1808ac7ec);
  local_d8 = CONCAT44(fVar13 + fVar3,(float)local_d8);
  if ((((uVar6 & 0xff000000) != 0) && (pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) {
    local_b8 = *(undefined4 *)(lVar10 + 0x60);
    uStack_b4 = *(undefined4 *)(lVar10 + 100);
    uStack_b0 = *(undefined4 *)(lVar10 + 0x68);
    uStack_ac = *(undefined4 *)(lVar10 + 0x6c);
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0;
    local_100 = (undefined8 *)&local_b8;
    local_108 = (float *)CONCAT44(local_108._4_4_,uVar6);
    local_f8 = pcVar9;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar10 + 0x38) + 0x18),lVar10,DAT_1808ac930,
                  &local_d8);
  }
  FUN_18000f890(&local_a8);
  return uVar4;
}



/* ===== 1802bd910 FUN_1802bd910 ===== */

undefined1 FUN_1802bd910(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  longlong lVar13;
  float *pfVar14;
  undefined8 uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_res8;
  float local_res10;
  float local_res14;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar20;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 uVar21;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar23;
  undefined8 uVar22;
  undefined4 uVar24;
  float local_b8 [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  lVar16 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_res8 = *(undefined8 *)(lVar16 + 0x118);
  if ((*(longlong *)(lVar16 + 0x1c8) != 0) ||
     (lVar13 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar13 = 0x250;
  }
  fVar18 = *(float *)(lVar13 + lVar16) - *(float *)(lVar16 + 0x118);
  local_res14 = 31.706;
  local_res10 = fVar18;
  FUN_1803e89e0(&DAT_1806e5064);
  uVar7 = FUN_180415e30("##bind",&local_res10,0);
  iVar9 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##hotkey");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar16 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar16 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == iVar9) &&
       (*(char *)(lVar16 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == '\0')) {
      bVar4 = true;
      goto LAB_1802bda22;
    }
  }
  bVar4 = false;
LAB_1802bda22:
  uVar8 = FUN_1803dd930(0);
  iVar9 = *(int *)(DAT_180ca0a50 + 0x1578);
  if (((iVar9 != 0) && (iVar9 == *(int *)(DAT_180ca0a50 + 0x1ee8))) || (bVar4)) {
    uVar15 = CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),1);
  }
  else {
    uVar15 = 0;
  }
  fVar17 = (float)FUN_1802b3850(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),uVar15,uVar8);
  lVar16 = DAT_180ca0a50;
  iVar9 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar9 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar16 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar9 + -1;
  }
  uVar21 = (undefined4)(in_stack_ffffffffffffff20 >> 0x20);
  *(undefined1 *)(*(longlong *)(lVar16 + 0x14f8) + 0xce) = 1;
  lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x14f8) + 0x2c8);
  fVar6 = local_res8._4_4_;
  fVar5 = (float)local_res8;
  if (0.0 < fVar17) {
    local_b8[2] = 1.0;
    local_b8[0] = 0.0;
    in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
    local_res14 = local_res8._4_4_ + DAT_1808ac9f8;
    local_b8[1] = fVar17 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_res10 = (float)local_res8 + fVar18;
    pfVar14 = local_b8;
    if (0.0 <= local_b8[1]) {
      pfVar14 = local_b8 + 1;
    }
    pfVar11 = local_b8 + 2;
    if (local_b8[1] <= DAT_1808ac34c) {
      pfVar11 = pfVar14;
    }
    FUN_1803fe590(lVar16,&local_res8,&local_res10,
                  (int)(longlong)(*pfVar11 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                  DAT_180960f44 & 0xffffff,CONCAT44(uVar20,DAT_1808ac854),in_stack_ffffffffffffff20)
    ;
    uVar21 = (undefined4)(in_stack_ffffffffffffff20 >> 0x20);
  }
  uVar10 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,fVar17);
  uVar20 = DAT_1808ac8d4;
  fVar17 = DAT_1808ac8b0;
  uVar22 = CONCAT44(uVar23,uVar10);
  uVar15 = CONCAT44(uVar21,DAT_1808ac8d4);
  fVar19 = fVar6 + DAT_1808ac910;
  pfVar14 = &local_res10;
  local_res10 = fVar5 + DAT_1808ac8b0 + DAT_1808ac864;
  local_res14 = fVar19;
  FUN_1802b6e90(lVar16,"nl_glyph_key_e1c0",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 640 512\" width=\"640\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M134 154C122 141 101 141 89 154C76 166 76 187 89 199L153 263C165 276 186 276 198 263C211 251 211 230 198 218L134 154L134 154ZM134 154ZM288 192C288 210 302 224 320 224C337 224 352 210 352 192L352 96C352 79 337 64 320 64C302 64 288 79 288 96L288 192ZM441 218C428 230 428 251 441 263C453 276 474 276 486 263L550 199C563 187 563 166 550 154C538 141 517 141 505 154L441 218L441 218ZM441 218ZM0 384C0 402 14 416 32 416L96 416C113 416 128 402 128 384C128 367 113 352 96 352L32 352C14 352 0 367 0 384ZM224 352C206 352 192 367 192 384C192 402 206 416 224 416L416 416C433 416 448 402 448 384C448 367 433 352 416 352L224 352ZM544 352C526 352 512 367 512 384C512 402 526 416 544 416L608 416C625 416 640 402 640 384C640 367 625 352 608 352L544 352Z\"/></svg>"
                ,DAT_1808acc20,pfVar14,uVar15,uVar22);
  uVar21 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar24 = (undefined4)((ulonglong)uVar22 >> 0x20);
  uVar23 = (undefined4)((ulonglong)pfVar14 >> 0x20);
  fVar17 = (fVar5 + fVar18) - fVar17;
  local_res10 = fVar17 - DAT_1808ac880;
  local_res14 = fVar6 + DAT_1808ac9f8;
  FUN_1803fc200(lVar16,&local_res8,&local_res10,1);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  local_res8 = CONCAT44(local_res8._4_4_,fVar5 + DAT_1808aca64);
  fVar18 = (float)FUN_18053f0d0(DAT_1808ac7ec);
  local_res8 = CONCAT44(fVar18 + fVar6,(float)local_res8);
  if ((((uVar10 & 0xff000000) != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    puVar12 = &local_a8;
    local_a8 = *(undefined4 *)(lVar16 + 0x60);
    uStack_a4 = *(undefined4 *)(lVar16 + 100);
    uStack_a0 = *(undefined4 *)(lVar16 + 0x68);
    uStack_9c = *(undefined4 *)(lVar16 + 0x6c);
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar16 + 0x38) + 0x18),lVar16,DAT_1808ac930,
                  &local_res8,CONCAT44(uVar23,uVar10),puVar12,param_2,0,0,0);
    uVar21 = (undefined4)((ulonglong)puVar12 >> 0x20);
    uVar24 = (undefined4)((ulonglong)param_2 >> 0x20);
  }
  iVar1 = *(int *)(lVar16 + 0xa0);
  iVar9 = iVar1 + -1;
  *(int *)(lVar16 + 0xa0) = iVar9;
  if (iVar9 == 0) {
    puVar12 = (undefined4 *)(*(longlong *)(lVar16 + 0x38) + 0x34);
  }
  else {
    puVar12 = (undefined4 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(lVar16 + 0xa8));
  }
  uVar23 = puVar12[1];
  uVar2 = puVar12[2];
  uVar3 = puVar12[3];
  *(undefined4 *)(lVar16 + 0x60) = *puVar12;
  *(undefined4 *)(lVar16 + 100) = uVar23;
  *(undefined4 *)(lVar16 + 0x68) = uVar2;
  *(undefined4 *)(lVar16 + 0x6c) = uVar3;
  FUN_1803fbff0(lVar16);
  fVar18 = (float)FUN_18053fc00(DAT_1808ac84c);
  local_res8 = CONCAT44(fVar19,fVar17 - fVar18 * DAT_1808ac1f4);
  FUN_1802b6e90(lVar16,"nl_glyph_angle_right",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
                ,DAT_1808acbc0,&local_res8,CONCAT44(uVar21,uVar20),CONCAT44(uVar24,DAT_180960ec0));
  return uVar7;
}



/* ===== 1802bddb0 FUN_1802bddb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_1802bddb0(void)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  float *local_118;
  undefined8 *local_110;
  char *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  float local_e8;
  float local_e4;
  float local_e0 [4];
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  char local_c0 [7];
  char acStack_b9 [4];
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_a0 [32];
  ulonglong local_80;
  
  local_80 = DAT_180919500 ^ (ulonglong)auStack_138;
  pcVar15 = &DAT_18095d530;
  pcVar8 = &DAT_18095d530;
  do {
    if (*pcVar8 != '\0') {
      bVar2 = true;
      goto LAB_1802bde18;
    }
    pcVar8 = pcVar8 + 0xe4;
  } while (pcVar8 != &DAT_180960e30);
  bVar2 = false;
LAB_1802bde18:
  lVar10 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_d0 = *(undefined8 *)(lVar10 + 0x118);
  if ((*(longlong *)(lVar10 + 0x1c8) != 0) ||
     (lVar11 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar11 = 0x250;
  }
  fVar20 = *(float *)(lVar11 + lVar10) - *(float *)(lVar10 + 0x118);
  local_e4 = 31.706;
  local_e8 = fVar20;
  cVar4 = FUN_180415e30("##all_hotkeys",&local_e8,0);
  if ((cVar4 == '\0') || (!bVar2)) {
    cVar4 = '\0';
    if (bVar2) goto LAB_1802bde96;
LAB_1802bdea6:
    uVar18 = 0;
    if (bVar2) goto LAB_1802bdeae;
LAB_1802bded2:
    uVar13 = 0;
  }
  else {
    cVar4 = '\x01';
LAB_1802bde96:
    cVar5 = FUN_1803dd930(0);
    if (cVar5 == '\0') goto LAB_1802bdea6;
    uVar18 = 1;
LAB_1802bdeae:
    if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
       (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) goto LAB_1802bded2;
    uVar13 = 1;
  }
  fVar19 = (float)FUN_1802b3850(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),uVar13,uVar18);
  lVar10 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8);
  fVar3 = (float)local_d0;
  if (0.0 < fVar19) {
    local_e0[2] = 1.0;
    local_e0[0] = 0.0;
    local_e0[1] = fVar19 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_e8 = (float)local_d0 + fVar20;
    local_e4 = local_d0._4_4_ + DAT_1808ac9f8;
    pfVar12 = local_e0;
    if (0.0 <= local_e0[1]) {
      pfVar12 = local_e0 + 1;
    }
    pfVar9 = local_e0 + 2;
    if (local_e0[1] <= DAT_1808ac34c) {
      pfVar9 = pfVar12;
    }
    local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffff00000000);
    local_118 = (float *)CONCAT44(local_118._4_4_,DAT_1808ac854);
    FUN_1803fe590(lVar10,&local_d0,&local_e8,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar9 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18);
  }
  if (bVar2) {
    uVar7 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,fVar19);
  }
  else {
    uVar7 = (int)(longlong)((float)(DAT_180960ef8 >> 0x18) * DAT_1808ac1f4 + DAT_1808ac1f4) << 0x18
            | DAT_180960ef8 & 0xffffff;
  }
  local_e8 = fVar3 + DAT_1808ac8b0 + DAT_1808ac864;
  local_e4 = local_d0._4_4_ + DAT_1808ac910;
  local_108 = (char *)CONCAT44(local_108._4_4_,uVar7);
  local_110 = (undefined8 *)CONCAT44(local_110._4_4_,DAT_1808ac8d4);
  local_118 = &local_e8;
  FUN_1802b6e90(lVar10,"nl_glyph_list",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M40 48C26 48 16 59 16 72L16 120C16 134 26 144 40 144L88 144C101 144 112 134 112 120L112 72C112 59 101 48 88 48L40 48ZM192 64C174 64 160 79 160 96C160 114 174 128 192 128L480 128C497 128 512 114 512 96C512 79 497 64 480 64L192 64ZM192 224C174 224 160 239 160 256C160 274 174 288 192 288L480 288C497 288 512 274 512 256C512 239 497 224 480 224L192 224ZM192 384C174 384 160 399 160 416C160 434 174 448 192 448L480 448C497 448 512 434 512 416C512 399 497 384 480 384L192 384ZM16 232L16 280C16 294 26 304 40 304L88 304C101 304 112 294 112 280L112 232C112 219 101 208 88 208L40 208C26 208 16 219 16 232ZM40 368C26 368 16 379 16 392L16 440C16 453 26 464 40 464L88 464C101 464 112 453 112 440L112 392C112 379 101 368 88 368L40 368Z\"/></svg>"
                ,DAT_1808acc00);
  uStack_b4 = 0;
  local_b0 = 0xb;
  local_a8 = 0xf;
  local_c0[0] = s_All_Hotkeys_18075c1f8[0];
  local_c0[1] = s_All_Hotkeys_18075c1f8[1];
  local_c0[2] = s_All_Hotkeys_18075c1f8[2];
  local_c0[3] = s_All_Hotkeys_18075c1f8[3];
  local_c0[4] = s_All_Hotkeys_18075c1f8[4];
  local_c0[5] = s_All_Hotkeys_18075c1f8[5];
  local_c0[6] = s_All_Hotkeys_18075c1f8[6];
  acStack_b9[0] = s_All_Hotkeys_18075c1f8[7];
  acStack_b9[1] = s_All_Hotkeys_18075c1f8[8];
  acStack_b9[2] = s_All_Hotkeys_18075c1f8[9];
  acStack_b9[3] = s_All_Hotkeys_18075c1f8[10];
  uStack_b5 = 0;
  pcVar8 = (char *)FUN_18035eb30(local_a0,local_c0);
  if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
    pcVar8 = *(char **)pcVar8;
  }
  local_e8 = fVar3 + DAT_1808aca64;
  local_e4 = (float)FUN_18053f0d0(DAT_1808ac7ec);
  local_e4 = local_e4 + local_d0._4_4_;
  if ((((uVar7 & 0xff000000) != 0) && (pcVar8 != (char *)0x0)) && (*pcVar8 != '\0')) {
    local_d0 = *(undefined8 *)(lVar10 + 0x60);
    uStack_c8 = *(undefined4 *)(lVar10 + 0x68);
    uStack_c4 = *(undefined4 *)(lVar10 + 0x6c);
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_110 = &local_d0;
    local_118 = (float *)CONCAT44(local_118._4_4_,uVar7);
    local_108 = pcVar8;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar10 + 0x38) + 0x18),lVar10,DAT_1808ac930,
                  &local_e8);
  }
  FUN_18000f890(local_a0);
  if (0xf < local_a8) {
    uVar14 = local_a8 + 1;
    lVar11 = CONCAT17(acStack_b9[0],local_c0);
    lVar10 = lVar11;
    if (0xfff < uVar14) {
      lVar10 = *(longlong *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar10) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar16 = auStack_130;
LAB_1802be1bd:
        puVar17 = puVar16;
        if (DAT_180cd0f05 == '\0') {
          DAT_180cd0f05 = '\x01';
        }
        else {
          uVar14 = 0xffffffff;
          pcVar8 = "##all_hotkeys";
          bVar6 = 0x23;
          do {
            pcVar8 = pcVar8 + 1;
            if (((bVar6 == 0x23) && (*pcVar8 == 0x23)) && (pcVar8[1] == 0x23)) {
              uVar14 = 0xffffffff;
              pcVar8 = pcVar8 + 2;
            }
            else {
              uVar14 = (ulonglong)
                       ((uint)(uVar14 >> 8) ^
                       *(uint *)(&DAT_1806c25c0 + (uVar14 & 0xff ^ (ulonglong)bVar6) * 4));
            }
            bVar6 = *pcVar8;
          } while (bVar6 != 0);
          *(undefined8 *)(puVar16 + -8) = 0x1802be21c;
          lVar10 = FUN_1803e1e50(~(uint)uVar14);
          if (lVar10 != 0) {
            *(undefined8 *)(puVar16 + -8) = 0x1802be22b;
            FUN_1803ef030(lVar10,0);
          }
        }
        goto LAB_1802be234;
      }
      uVar14 = local_a8 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar10,uVar14);
  }
  puVar16 = auStack_138;
  puVar17 = auStack_138;
  if (cVar4 != '\0') {
    do {
      if (*pcVar15 != '\0') goto LAB_1802be1bd;
      pcVar15 = pcVar15 + 0xe4;
      puVar17 = auStack_138;
    } while (pcVar15 != &DAT_180960e30);
  }
LAB_1802be234:
  *(undefined8 *)(puVar17 + -8) = 0x1802be244;
  return cVar4;
}



/* ===== 1802be270 FUN_1802be270 ===== */

undefined1 FUN_1802be270(void)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8;
  float local_resc;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar10;
  ulonglong in_stack_ffffffffffffff60;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar12;
  float local_78 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_res10 = *(undefined8 *)(lVar1 + 0x118);
  if ((*(longlong *)(lVar1 + 0x1c8) != 0) ||
     (lVar5 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar5 = 0x250;
  }
  fVar9 = *(float *)(lVar5 + lVar1) - *(float *)(lVar1 + 0x118);
  local_resc = 31.706;
  local_res8 = fVar9;
  uVar2 = FUN_180415e30("##reset_value",&local_res8,0);
  cVar3 = FUN_1803dd930(0);
  local_res8 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(float *)(DAT_180ca0a50 + 0x1578) == 0.0) ||
     (*(float *)(DAT_180ca0a50 + 0x1578) != local_res8)) {
    if (cVar3 == '\0') {
      fVar8 = 0.0;
    }
    else {
      fVar8 = DAT_1808ac1f4;
    }
  }
  else {
    fVar8 = DAT_1808ac34c;
  }
  local_4c = 0;
  local_48 = 0xffffffff;
  local_58 = fVar8;
  local_54 = fVar8;
  local_50 = fVar8;
  FUN_18034a380(local_res8,&local_68,&local_res8,&local_58);
  fVar7 = (float)FUN_1802b3660(CONCAT44(uStack_64,local_68) + 0x14,fVar8,DAT_1808ac118,0);
  lVar1 = DAT_180ca0a50;
  uVar11 = (undefined4)(in_stack_ffffffffffffff60 >> 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar8 = (float)local_res10;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8);
  if (0.0 < fVar7) {
    local_resc = local_res10._4_4_ + DAT_1808ac9f8;
    local_78[1] = fVar7 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_res8 = (float)local_res10 + fVar9;
    local_78[2] = 1.0;
    local_78[0] = 0.0;
    in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffffff00000000;
    pfVar6 = local_78;
    if (0.0 <= local_78[1]) {
      pfVar6 = local_78 + 1;
    }
    pfVar4 = local_78 + 2;
    if (local_78[1] <= DAT_1808ac34c) {
      pfVar4 = pfVar6;
    }
    FUN_1803fe590(lVar1,&local_res10,&local_res8,
                  (int)(longlong)(*pfVar4 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                  DAT_180960f44 & 0xffffff,CONCAT44(uVar10,DAT_1808ac854),in_stack_ffffffffffffff60)
    ;
    uVar11 = (undefined4)(in_stack_ffffffffffffff60 >> 0x20);
  }
  pfVar6 = &local_res8;
  local_res8 = fVar8 + DAT_1808ac8b0 + DAT_1808ac864;
  local_resc = local_res10._4_4_ + DAT_1808ac910;
  FUN_1802b6e90(lVar1,"picker_reset",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M48 224L40 224C26 224 16 214 16 200L16 72C16 63 21 54 30 50C39 47 50 49 57 55L98 97C186 11 327 11 414 98C501 186 501 327 414 415C326 501 185 501 97 415C85 402 85 382 97 370C110 357 130 357 142 370C205 432 306 432 369 370C431 307 431 206 369 143C307 81 206 81 143 142L185 183C191 190 193 201 190 210C186 219 177 224 168 224L48 224L48 224Z\"/></svg>"
                ,DAT_1808acc00,pfVar6,CONCAT44(uVar11,DAT_1808ac8d4),CONCAT44(uVar12,0xff6163db));
  uVar10 = (undefined4)((ulonglong)pfVar6 >> 0x20);
  local_res8 = fVar8 + DAT_1808aca64;
  local_resc = (float)FUN_18053f0d0(DAT_1808ac7ec);
  local_resc = local_resc + local_res10._4_4_;
  local_68 = *(undefined4 *)(lVar1 + 0x60);
  uStack_64 = *(undefined4 *)(lVar1 + 100);
  uStack_60 = *(undefined4 *)(lVar1 + 0x68);
  uStack_5c = *(undefined4 *)(lVar1 + 0x6c);
  FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x18),lVar1,DAT_1808ac930,&local_res8,
                CONCAT44(uVar10,0xff6163db),&local_68,"Reset",0,0,0);
  return uVar2;
}



/* ===== 1802be590 FUN_1802be590 ===== */

undefined1 FUN_1802be590(void)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar11;
  ulonglong in_stack_ffffffffffffff40;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar13;
  float local_98 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_res10 = *(undefined8 *)(lVar1 + 0x118);
  if ((*(longlong *)(lVar1 + 0x1c8) != 0) ||
     (lVar6 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar6 = 0x250;
  }
  fVar10 = *(float *)(lVar6 + lVar1) - *(float *)(lVar1 + 0x118);
  local_resc = 31.706;
  local_res8 = fVar10;
  uVar2 = FUN_180415e30("##new_hotkey",&local_res8,0);
  cVar3 = FUN_1803dd930(0);
  local_res8 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  if ((*(float *)(DAT_180ca0a50 + 0x1578) == 0.0) ||
     (*(float *)(DAT_180ca0a50 + 0x1578) != local_res8)) {
    if (cVar3 == '\0') {
      fVar9 = 0.0;
    }
    else {
      fVar9 = DAT_1808ac1f4;
    }
  }
  else {
    fVar9 = DAT_1808ac34c;
  }
  local_6c = 0;
  local_68 = 0xffffffff;
  local_78 = fVar9;
  local_74 = fVar9;
  local_70 = fVar9;
  FUN_18034a380(local_res8,&local_88,&local_res8,&local_78);
  fVar8 = (float)FUN_1802b3660(CONCAT44(uStack_84,local_88) + 0x14,fVar9,DAT_1808ac118,0);
  lVar1 = DAT_180ca0a50;
  uVar12 = (undefined4)(in_stack_ffffffffffffff40 >> 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar9 = (float)local_res10;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8);
  if (0.0 < fVar8) {
    local_resc = local_res10._4_4_ + DAT_1808ac9f8;
    local_98[2] = 1.0;
    local_98[0] = 0.0;
    in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffffff00000000;
    local_res8 = (float)local_res10 + fVar10;
    local_98[1] = fVar8 * DAT_1808ac1b0 * DAT_1808ac2cc;
    pfVar7 = local_98;
    if (0.0 <= local_98[1]) {
      pfVar7 = local_98 + 1;
    }
    pfVar5 = local_98 + 2;
    if (local_98[1] <= DAT_1808ac34c) {
      pfVar5 = pfVar7;
    }
    FUN_1803fe590(lVar1,&local_res10,&local_res8,
                  (int)(longlong)(*pfVar5 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                  DAT_180960f44 & 0xffffff,CONCAT44(uVar11,DAT_1808ac854),in_stack_ffffffffffffff40)
    ;
    uVar12 = (undefined4)(in_stack_ffffffffffffff40 >> 0x20);
  }
  uVar4 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,fVar8);
  pfVar7 = &local_res8;
  local_res8 = fVar9 + DAT_1808ac8b0 + DAT_1808ac864;
  local_resc = local_res10._4_4_ + DAT_1808ac910;
  FUN_1802b6e90(lVar1,"nl_glyph_circle_plus",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M256 512C347 512 431 463 477 384C523 305 523 208 477 128C431 49 347 0 256 0C164 0 80 49 34 128C-11 208 -11 305 34 384C80 463 164 512 256 512ZM232 344L232 280L168 280C154 280 144 270 144 256C144 243 154 232 168 232L232 232L232 168C232 155 242 144 256 144C269 144 280 155 280 168L280 232L344 232C357 232 368 243 368 256C368 270 357 280 344 280L280 280L280 344C280 358 269 368 256 368C242 368 232 358 232 344Z\"/></svg>"
                ,DAT_1808acc00,pfVar7,CONCAT44(uVar12,DAT_1808ac8d4),CONCAT44(uVar13,uVar4));
  uVar11 = (undefined4)((ulonglong)pfVar7 >> 0x20);
  local_res8 = fVar9 + DAT_1808aca64;
  local_resc = (float)FUN_18053f0d0(DAT_1808ac7ec);
  local_resc = local_resc + local_res10._4_4_;
  if ((uVar4 & 0xff000000) != 0) {
    local_88 = *(undefined4 *)(lVar1 + 0x60);
    uStack_84 = *(undefined4 *)(lVar1 + 100);
    uStack_80 = *(undefined4 *)(lVar1 + 0x68);
    uStack_7c = *(undefined4 *)(lVar1 + 0x6c);
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x18),lVar1,DAT_1808ac930,
                  &local_res8,CONCAT44(uVar11,uVar4),&local_88,"New Hotkey",0,0,0);
  }
  return uVar2;
}



/* ===== 1802be8d0 FUN_1802be8d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1802be8d0(char *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined1 auStack_f8 [40];
  char *local_d0;
  ulonglong local_c8 [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if ((*(int *)(param_2 + 0x60) < 1) && (*(int *)(param_2 + 100) != 2)) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\a';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *(undefined4 *)param_1 = s_Unbound_18075c2e0._0_4_;
    *(undefined2 *)(param_1 + 4) = s_Unbound_18075c2e0._4_2_;
    param_1[6] = s_Unbound_18075c2e0[6];
    param_1[7] = '\0';
  }
  else {
    iVar1 = *(int *)(param_2 + 100);
    local_d0 = param_1;
    if (iVar1 == 0) {
      pcVar14 = "Hold";
    }
    else {
      pcVar14 = "Always";
      if (iVar1 == 1) {
        pcVar14 = "Toggle";
      }
      if (iVar1 == 2) {
        param_1[0] = '\0';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        param_1[0x18] = '\0';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
        sVar9 = strlen(pcVar14);
        FUN_1800133a0(param_1,pcVar14,sVar9);
        return param_1;
      }
    }
    puVar7 = (undefined8 *)FUN_1801c6760(local_48,*(int *)(param_2 + 0x60));
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    uVar8 = FUN_1802b3fe0(local_68,puVar7);
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    sVar9 = strlen(pcVar14);
    FUN_1800133a0(local_c8,pcVar14,sVar9);
    puVar10 = (undefined4 *)FUN_1800134a0(local_c8,&DAT_18075c39c,2);
    local_a8 = *puVar10;
    uStack_a4 = puVar10[1];
    uStack_a0 = puVar10[2];
    uStack_9c = puVar10[3];
    local_98 = puVar10[4];
    uStack_94 = puVar10[5];
    uStack_90 = puVar10[6];
    uStack_8c = puVar10[7];
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar10 + 6) = 0xf;
    *(undefined1 *)puVar10 = 0;
    uVar8 = FUN_180066820(local_88,&local_a8,uVar8);
    puVar10 = (undefined4 *)FUN_1800134a0(uVar8,&DAT_1806dfffc,1);
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    uVar3 = puVar10[1];
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    *(undefined4 *)param_1 = *puVar10;
    *(undefined4 *)(param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    uVar3 = puVar10[5];
    uVar4 = puVar10[6];
    uVar5 = puVar10[7];
    *(undefined4 *)(param_1 + 0x10) = puVar10[4];
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar10 + 6) = 0xf;
    *(undefined1 *)puVar10 = 0;
    FUN_18000f890(local_88);
    uVar12 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVar12) {
      uVar13 = uVar12 + 1;
      lVar6 = CONCAT44(uStack_a4,local_a8);
      lVar11 = lVar6;
      if (0xfff < uVar13) {
        lVar11 = *(longlong *)(lVar6 + -8);
        if (0x1f < (lVar6 - lVar11) - 8U) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          goto LAB_1802beb5e;
        }
        uVar13 = uVar12 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar11,uVar13);
    }
    if (0xf < local_c8[3]) {
      uVar13 = local_c8[3] + 1;
      uVar12 = local_c8[0];
      if (0xfff < uVar13) {
        uVar12 = *(ulonglong *)(local_c8[0] - 8);
        if (0x1f < (local_c8[0] - uVar12) - 8) {
LAB_1802beb5e:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          pcVar14 = (char *)(*pcVar2)();
          return pcVar14;
        }
        uVar13 = local_c8[3] + 0x28;
      }
      thunk_FUN_1803d64e0(uVar12,uVar13);
    }
    local_c8[2] = 0;
    local_c8[3] = 0xf;
    local_c8[0] = local_c8[0] & 0xffffffffffffff00;
    FUN_18000f890(local_68);
    FUN_18000f890(local_48);
  }
  return param_1;
}



/* ===== 1802beb70 FUN_1802beb70 ===== */

float FUN_1802beb70(longlong param_1,longlong param_2,float *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  uint local_res20 [2];
  undefined8 in_stack_fffffffffffffed8;
  longlong lVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  float local_e8 [4];
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  
  uVar9 = (uint)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar5 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),*(undefined8 *)(param_2 + 8));
  if (param_4 == '\0') {
    fVar14 = 0.0;
  }
  else {
    fVar14 = DAT_1808ac34c;
  }
  uVar5 = ~uVar5;
  pcVar10 = "##mode_tab_label";
  bVar4 = 0x23;
  local_res20[0] = uVar5;
  do {
    pcVar10 = pcVar10 + 1;
    if (((bVar4 == 0x23) && (*pcVar10 == 0x23)) && (pcVar10[1] == 0x23)) {
      pcVar10 = pcVar10 + 2;
      local_res20[0] = uVar5;
    }
    else {
      local_res20[0] =
           local_res20[0] >> 8 ^
           *(uint *)(&DAT_1806c25c0 + ((ulonglong)(local_res20[0] & 0xff) ^ (ulonglong)bVar4) * 4);
    }
    bVar4 = *pcVar10;
  } while (bVar4 != 0);
  local_res20[0] = ~local_res20[0];
  uStack_bc = 0;
  local_b8 = 0xffffffff;
  local_c8 = fVar14;
  fStack_c4 = fVar14;
  fStack_c0 = fVar14;
  FUN_18034a380(extraout_XMM0_Da,&local_d8,local_res20,&local_c8);
  fVar11 = (float)FUN_1802b3660(CONCAT44(fStack_d4,local_d8) + 0x14,fVar14,DAT_1808ac118,0);
  fVar3 = DAT_1808ac930;
  uVar17 = *(ulonglong *)(param_2 + 8);
  uVar20 = 0;
  uVar19 = 0;
  uVar18 = 0;
  lVar15 = (ulonglong)uVar9 << 0x20;
  FUN_18040a2f0(&local_res10,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08,
                lVar15,uVar17,0,0,0);
  uVar16 = (undefined4)((ulonglong)lVar15 >> 0x20);
  fVar12 = (float)FUN_18053fc00(local_res10 + DAT_1808ac2f0);
  fVar14 = param_3[1];
  local_d8 = *param_3;
  local_cc = fVar14 + DAT_1808ac97c;
  fVar12 = ((fVar12 + DAT_1808ac8b0 + fVar3 + DAT_1808ac7ac) - DAT_1808ac9dc) * fVar11 +
           DAT_1808ac9dc;
  local_d0 = fVar12 + *param_3;
  if (param_4 == '\0') {
    fVar13 = 0.0;
  }
  else {
    fVar13 = DAT_1808ac1f4;
  }
  pcVar10 = "##mode_tab_hover";
  bVar4 = 0x23;
  local_res20[0] = uVar5;
  do {
    pcVar10 = pcVar10 + 1;
    if (((bVar4 == 0x23) && (*pcVar10 == 0x23)) && (pcVar10[1] == 0x23)) {
      pcVar10 = pcVar10 + 2;
      local_res20[0] = uVar5;
    }
    else {
      local_res20[0] =
           local_res20[0] >> 8 ^
           *(uint *)(&DAT_1806c25c0 + ((ulonglong)(local_res20[0] & 0xff) ^ (ulonglong)bVar4) * 4);
    }
    bVar4 = *pcVar10;
  } while (bVar4 != 0);
  local_res20[0] = ~local_res20[0];
  local_a4 = 0;
  local_a0 = 0xffffffff;
  fStack_d4 = fVar14;
  local_b0 = fVar13;
  local_ac = fVar13;
  local_a8 = fVar13;
  FUN_18034a380(local_d0,&local_c8,local_res20,&local_b0);
  fVar13 = (float)FUN_1802b3660(CONCAT44(fStack_c4,local_c8) + 0x14,fVar13,DAT_1808ac118,0);
  if (0.0 < fVar13) {
    local_e8[2] = 1.0;
    local_e8[0] = 0.0;
    local_e8[1] = fVar13 * DAT_1808ac1b0 * DAT_1808ac2cc;
    pfVar8 = local_e8;
    if (0.0 <= local_e8[1]) {
      pfVar8 = local_e8 + 1;
    }
    pfVar6 = local_e8 + 2;
    if (local_e8[1] <= DAT_1808ac34c) {
      pfVar6 = pfVar8;
    }
    FUN_1803fe590(param_1,&local_d8,&local_d0,
                  (int)(longlong)(*pfVar6 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                  DAT_180960f44 & 0xffffff,CONCAT44(uVar16,DAT_1808ac828),
                  uVar17 & 0xffffffff00000000);
  }
  uVar5 = DAT_180960ec0;
  if (param_4 != '\0') {
    uVar5 = DAT_1809f54bc;
  }
  fVar13 = (float)FUN_180519080(*param_3 + DAT_1808ac7ac);
  local_res10 = fVar13;
  local_res14 = (float)FUN_180519080(param_3[1] + DAT_1808ac658);
  local_res18 = fVar13 + fVar3;
  local_res1c = local_res14 + fVar3;
  pfVar8 = &local_res10;
  FUN_1802b6f70(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined4 *)(param_2 + 0x20),pfVar8,&local_res18,CONCAT44(uVar18,DAT_1808ac8d4),
                CONCAT44(uVar19,uVar5));
  uVar16 = (undefined4)((ulonglong)pfVar8 >> 0x20);
  if (0.0 < fVar11) {
    fVar13 = local_res10 + fVar3 + DAT_1808ac7ac;
    local_res10 = fVar13;
    local_res14 = fVar14;
    FUN_1803fc200(param_1,&local_res10,&local_d0,1);
    uVar9 = (int)(longlong)((float)(uVar5 >> 0x18) * fVar11 + DAT_1808ac1f4) << 0x18;
    local_res10 = fVar13;
    local_res14 = (float)FUN_18053f0d0(fVar14 + DAT_1808ac658);
    if (((uVar9 != 0) && (pcVar10 = *(char **)(param_2 + 8), pcVar10 != (char *)0x0)) &&
       (*pcVar10 != '\0')) {
      local_c8 = *(float *)(param_1 + 0x60);
      fStack_c4 = *(float *)(param_1 + 100);
      fStack_c0 = *(float *)(param_1 + 0x68);
      uStack_bc = *(undefined4 *)(param_1 + 0x6c);
      FUN_18040a900(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,fVar3,&local_res10
                    ,CONCAT44(uVar16,uVar5 & 0xffffff | uVar9),&local_c8,pcVar10,0,
                    uVar20 & 0xffffffff00000000,0);
    }
    iVar2 = *(int *)(param_1 + 0xa0);
    iVar1 = iVar2 + -1;
    *(int *)(param_1 + 0xa0) = iVar1;
    if (iVar1 == 0) {
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
    }
    else {
      puVar7 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
    }
    uVar16 = puVar7[1];
    uVar18 = puVar7[2];
    uVar19 = puVar7[3];
    *(undefined4 *)(param_1 + 0x60) = *puVar7;
    *(undefined4 *)(param_1 + 100) = uVar16;
    *(undefined4 *)(param_1 + 0x68) = uVar18;
    *(undefined4 *)(param_1 + 0x6c) = uVar19;
    FUN_1803fbff0(param_1);
  }
  return fVar12;
}



/* ===== 1802bf070 FUN_1802bf070 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802bf070(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  undefined4 local_resc;
  char *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  int local_c8 [2];
  char *local_c0;
  char *local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined *local_98;
  char *local_90;
  char *local_88;
  undefined4 local_80;
  undefined4 local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined4 local_58;
  
  local_b8 = "fa_toggle_on";
  local_c0 = "Toggle";
  local_68 = "fa_toggle_on";
  local_98 = &DAT_18075c2d8;
  local_90 = "icon_e1c2";
  local_c8[0] = 1;
  local_88 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M64 0C28 0 0 29 0 64L0 224C0 260 28 288 64 288L512 288C547 288 576 260 576 224L576 64C576 29 547 0 512 0L64 0ZM80 64L112 64C120 64 128 72 128 80L128 112C128 121 120 128 112 128L80 128C71 128 64 121 64 112L64 80C64 72 71 64 80 64ZM64 176C64 168 71 160 80 160L112 160C120 160 128 168 128 176L128 208C128 217 120 224 112 224L80 224C71 224 64 217 64 208L64 176ZM176 160L400 160C408 160 416 168 416 176L416 208C416 217 408 224 400 224L176 224C167 224 160 217 160 208L160 176C160 168 167 160 176 160ZM448 176C448 168 455 160 464 160L496 160C504 160 512 168 512 176L512 208C512 217 504 224 496 224L464 224C455 224 448 217 448 208L448 176ZM176 64L208 64C216 64 224 72 224 80L224 112C224 121 216 128 208 128L176 128C167 128 160 121 160 112L160 80C160 72 167 64 176 64ZM256 80C256 72 263 64 272 64L304 64C312 64 320 72 320 80L320 112C320 121 312 128 304 128L272 128C263 128 256 121 256 112L256 80ZM368 64L400 64C408 64 416 72 416 80L416 112C416 121 408 128 400 128L368 128C359 128 352 121 352 112L352 80C352 72 359 64 368 64ZM448 80C448 72 455 64 464 64L496 64C504 64 512 72 512 80L512 112C512 121 504 128 496 128L464 128C455 128 448 121 448 112L448 80ZM153 367C150 376 152 387 158 393L271 505C280 514 295 514 304 505L417 393C423 387 425 376 422 367C418 358 409 352 400 352L176 352C166 352 157 358 153 367L153 367Z\"/></svg>"
  ;
  iVar7 = (*(int *)(param_1 + 100) == 2) + 2;
  local_b0 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M192 64C86 64 0 150 0 256C0 362 86 448 192 448L384 448C490 448 576 362 576 256C576 150 490 64 384 64L192 64ZM384 160C418 160 449 179 467 208C484 238 484 275 467 304C449 334 418 352 384 352C349 352 318 334 300 304C283 275 283 238 300 208C318 179 349 160 384 160Z\"/></svg>"
  ;
  local_70 = "Always";
  local_a8 = 0x44100000;
  iVar4 = 0;
  local_a0 = 0;
  local_80 = 0x44100000;
  local_78 = 2;
  local_60 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 576 512\" width=\"576\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M192 64C86 64 0 150 0 256C0 362 86 448 192 448L384 448C490 448 576 362 576 256C576 150 490 64 384 64L192 64ZM384 160C418 160 449 179 467 208C484 238 484 275 467 304C449 334 418 352 384 352C349 352 318 334 300 304C283 275 283 238 300 208C318 179 349 160 384 160Z\"/></svg>"
  ;
  local_58 = 0x44100000;
  iVar6 = 0;
  do {
    iVar5 = iVar4;
    if (local_c8[(longlong)iVar4 * 10] != *(int *)(param_1 + 100)) {
      iVar5 = iVar6;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar5;
  } while (iVar4 < iVar7);
  local_d8 = 0x44100000;
  local_e8 = "nl_glyph_keyboard";
  local_e0 = &DAT_1806ee990;
  cVar2 = FUN_1802bd4a0(&DAT_1806e044c,iVar4,0,&local_e8);
  if (cVar2 != '\0') {
    iVar5 = (iVar5 + 1) % iVar7;
    *(int *)(param_1 + 100) = local_c8[(longlong)iVar5 * 10];
  }
  lVar3 = DAT_180ca0a50;
  fVar10 = *(float *)(DAT_180ca0a50 + 0x1ef8);
  fVar9 = *(float *)(DAT_180ca0a50 + 0x1f00);
  fVar11 = *(float *)(DAT_180ca0a50 + 0x1efc) - _DAT_181107290;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar11 = fVar11 - DAT_1808ac8b0;
  uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8);
  uVar8 = FUN_18053f0d0((fVar9 + fVar10) * DAT_1808ac1f4 - DAT_1808ac8ac);
  iVar6 = 0;
  fVar10 = fVar11;
  while( true ) {
    FUN_1803e8a70(iVar6);
    local_res8 = fVar10;
    local_resc = uVar8;
    fVar9 = (float)FUN_1802beb70(uVar1,local_c8 + (longlong)iVar6 * 10,&local_res8,iVar6 == iVar5);
    lVar3 = DAT_180ca0a50;
    iVar4 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar4 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      lVar3 = DAT_180ca0a50;
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar4 + -1;
    }
    iVar6 = iVar6 + 1;
    if (iVar7 <= iVar6) break;
    fVar10 = fVar9 + fVar10 + *(float *)(lVar3 + 0xcec);
  }
  _DAT_181107290 = (float)FUN_180519080((fVar9 + fVar10) - fVar11);
  return;
}



/* ===== 1802bf2c0 FUN_1802bf2c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bf2c0(undefined8 param_1,undefined8 *param_2,char param_3,float param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  size_t _Size;
  bool bVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *_Str;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 extraout_XMM0_Da;
  float fVar13;
  float fVar14;
  float fVar15;
  char local_res18 [16];
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1a8 [8];
  float local_1a0 [2];
  undefined8 local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  undefined1 *local_158;
  longlong local_148 [33];
  
  local_148[0x10] = DAT_180919500 ^ (ulonglong)auStack_1d8;
  local_190 = param_7;
  local_1a8[0] = param_8;
  local_res18[0] = param_3;
  local_198 = param_1;
  cVar4 = FUN_1802bce80("##bind_menu",param_2,param_10,param_2);
  if (cVar4 != '\0') {
    local_148[0] = 0;
    local_148[1] = 0;
    local_148[2] = 0;
    local_148[3] = 0;
    local_148[4] = 0;
    local_148[5] = 0;
    local_148[6] = 0;
    local_148[7] = 0;
    local_148[8] = 0;
    local_148[9] = 0;
    local_148[10] = 0;
    local_148[0xb] = 0;
    local_148[0xc] = 0;
    local_148[0xd] = 0;
    local_148[0xe] = 0;
    local_148[0xf] = 0;
    iVar10 = 0;
    _Str = &DAT_18095d530;
    do {
      if (*_Str != '\0') {
        sVar6 = strlen(_Str);
        _Size = param_2[2];
        if ((ulonglong)param_2[3] < 0x10) {
          puVar7 = param_2;
        }
        else {
          puVar7 = (undefined8 *)*param_2;
        }
        if ((_Size == sVar6) && ((_Size == 0 || (iVar5 = memcmp(puVar7,_Str,_Size), iVar5 == 0)))) {
          if (iVar10 < 0x10) {
            local_148[iVar10] = (longlong)_Str;
          }
          iVar10 = iVar10 + 1;
        }
      }
      fVar3 = DAT_1808ac7ec;
      fVar2 = DAT_1808ac1f4;
      _Str = _Str + 0xe4;
    } while (_Str != &DAT_180960e30);
    if (0x10 < iVar10) {
      iVar10 = 0x10;
    }
    bVar1 = false;
    fVar15 = 0.0;
    fVar14 = 0.0;
    uVar12 = 0;
    if (0 < iVar10) {
      do {
        iVar5 = DAT_180cd1300;
        lVar9 = local_148[uVar12];
        if ((lVar9 != 0) && (DAT_180cd1868 == lVar9)) {
          LOCK();
          DAT_180cd1868 = 0;
          UNLOCK();
          if ((DAT_180cd1300 != -1) &&
             ((DAT_180cd1300 != 1 || (cVar4 = FUN_1803e7af0(1), cVar4 == '\0')))) {
            *(int *)(lVar9 + 0x60) = iVar5;
          }
        }
        if (*(char *)(lVar9 + 0x70) == '\0') {
          snprintf((char *)(lVar9 + 0x70),0x30,&DAT_1806d3198,local_198);
        }
        if (local_res18[0] != '\0') {
          local_1b8 = local_1a8[0];
          puVar7 = (undefined8 *)
                   FUN_1802bd110(&local_188,param_2,*(undefined4 *)(lVar9 + 0x6c),local_190);
          if (0xf < (ulonglong)puVar7[3]) {
            puVar7 = (undefined8 *)*puVar7;
          }
          snprintf(lVar9 + 0xd0,0x10,&DAT_1806d3198,puVar7);
          FUN_18000f890(&local_188);
          *(undefined1 *)(lVar9 + 0xe0) = local_1a8[0];
        }
        FUN_1803e8a70(uVar12);
        uVar8 = FUN_1802be8d0(&local_188,lVar9);
        cVar4 = FUN_1802bd910(extraout_XMM0_Da,uVar8);
        FUN_18000f890(&local_188);
        if (cVar4 != '\0') {
          bVar1 = true;
          fVar15 = *(float *)(DAT_180ca0a50 + 0x1efc) + fVar3;
          fVar14 = (*(float *)(DAT_180ca0a50 + 0x1f00) + *(float *)(DAT_180ca0a50 + 0x1ef8)) * fVar2
          ;
          DAT_1811071c0 = lVar9;
        }
        iVar5 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar5 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar5 + -1;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < iVar10);
    }
    FUN_1802bddb0();
    if ((iVar10 < 0x10) && (cVar4 = FUN_1802be590(), cVar4 != '\0')) {
      if (local_res18[0] == '\0') {
        param_4 = DAT_1808ac34c;
      }
      local_1a0[0] = 0.0;
      cVar4 = FUN_1800fca00(param_2,local_1a0);
      if (cVar4 != '\0') {
        param_4 = local_1a0[0];
      }
      if (local_res18[0] == '\0') {
        fVar13 = (float)FUN_1802bcf40(param_2);
      }
      else {
        fVar13 = param_4;
      }
      lVar9 = FUN_1802bfdf0(param_2,fVar13,1);
      if (lVar9 != 0) {
        snprintf(lVar9 + 0x70,0x30,&DAT_1806d3198,local_198);
        if (local_res18[0] == '\0') {
          *(bool *)(lVar9 + 0x68) = param_4 != 0.0;
        }
        else {
          local_1b8 = local_1a8[0];
          puVar7 = (undefined8 *)FUN_1802bd110(&local_188,param_2,fVar13,local_190);
          if (0xf < (ulonglong)puVar7[3]) {
            puVar7 = (undefined8 *)*puVar7;
          }
          snprintf(lVar9 + 0xd0,0x10,&DAT_1806d3198,puVar7);
          FUN_18000f890(&local_188);
        }
        *(undefined1 *)(lVar9 + 0xe0) = local_1a8[0];
        LOCK();
        DAT_180cd1868 = 0;
        UNLOCK();
        LOCK();
        UNLOCK();
        bVar1 = true;
        fVar15 = *(float *)(DAT_180ca0a50 + 0x1efc) + fVar3;
        fVar14 = (*(float *)(DAT_180ca0a50 + 0x1f00) + *(float *)(DAT_180ca0a50 + 0x1ef8)) * fVar2;
        DAT_180cd1360 = lVar9;
        DAT_1811071c0 = lVar9;
      }
    }
    FUN_1802b7f90();
    FUN_18031aaf0(param_2);
    cVar4 = FUN_1802be270();
    if (cVar4 != '\0') {
      FUN_1800fc6b0(param_2);
      FUN_1803ee1f0();
    }
    if (bVar1) {
      FUN_1802b4d80("##hotkey");
      DAT_1811074a8 = fVar15;
      DAT_1811074ac = fVar14;
    }
    local_188 = local_res18;
    local_180 = &local_198;
    local_170 = &param_5;
    local_168 = &param_6;
    local_160 = &local_190;
    local_158 = local_1a8;
    local_178 = param_2;
    FUN_18033db20(DAT_1811071c0);
    FUN_1802b5590();
  }
  return;
}



/* ===== 1802bf7c0 FUN_1802bf7c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bf7c0(undefined8 *param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_118 [32];
  undefined8 ****local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [4];
  int local_e4;
  float local_e0 [2];
  undefined8 ****local_d8 [3];
  ulonglong local_c0;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_118;
  if (*(char *)*param_1 == '\0') {
    uVar1 = *(undefined8 *)param_1[1];
    FUN_1802c3290(local_b8,&PTR_s_nl_glyph_link_1806a08c0);
    local_e8[0] = param_2[0x68];
    cVar4 = FUN_1802c0a60(uVar1,local_e8);
    bVar9 = cVar4 != '\0';
    if (bVar9) {
      param_2[0x68] = local_e8[0];
    }
    FUN_1802c3560(local_b8);
  }
  else {
    cVar4 = *(char *)param_1[6];
    uVar1 = *(undefined8 *)param_1[5];
    uVar5 = *(undefined4 *)param_1[4];
    uVar6 = *(undefined4 *)param_1[3];
    uVar2 = param_1[2];
    uVar3 = *(undefined8 *)param_1[1];
    FUN_1802c3290(local_b8,&PTR_s_nl_glyph_link_1806a08c0);
    local_f8 = (undefined8 ****)CONCAT71(local_f8._1_7_,cVar4);
    FUN_1802bd110(local_d8,uVar2,*(undefined4 *)(param_2 + 0x6c),uVar1);
    if (cVar4 == '\0') {
      local_f8 = local_d8;
      if (0xf < local_c0) {
        local_f8 = local_d8[0];
      }
      local_f0 = 0;
      local_e0[0] = *(float *)(param_2 + 0x6c);
      cVar4 = FUN_1802c12a0(uVar3,local_e0,uVar6,uVar5);
      if (cVar4 == '\0') {
        FUN_18000f890(local_d8);
        FUN_1802c3560(local_b8);
        bVar9 = false;
        goto LAB_1802bf98d;
      }
      fVar10 = local_e0[0];
    }
    else {
      local_e4 = FUN_1804f3280();
      ppppuVar8 = local_d8;
      if (0xf < local_c0) {
        ppppuVar8 = local_d8[0];
      }
      uVar5 = FUN_1804f3280();
      uVar6 = FUN_1804f3280();
      local_f0 = 0;
      local_f8 = ppppuVar8;
      cVar4 = FUN_18033fa10(uVar3,&local_e4,uVar6,uVar5);
      if (cVar4 == '\0') {
        FUN_18000f890(local_d8);
        FUN_1802c3560(local_b8);
        bVar9 = false;
        goto LAB_1802bf98d;
      }
      fVar10 = (float)local_e4;
    }
    *(float *)(param_2 + 0x6c) = fVar10;
    FUN_18000f890(local_d8);
    FUN_1802c3560(local_b8);
    bVar9 = true;
  }
LAB_1802bf98d:
  if (bVar9) {
    if (*(char *)*param_1 != '\0') {
      local_f8 = (undefined8 ****)CONCAT71(local_f8._1_7_,*(undefined1 *)param_1[6]);
      puVar7 = (undefined8 *)
               FUN_1802bd110(local_d8,param_1[2],*(undefined4 *)(param_2 + 0x6c),
                             *(undefined8 *)param_1[5]);
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      snprintf(param_2 + 0xd0,0x10,&DAT_1806d3198,puVar7);
      FUN_18000f890(local_d8);
    }
    if (((undefined *)((longlong)&DAT_18095d52c + 3) < param_2) && (param_2 < &DAT_180960e30)) {
      FUN_1801c4b90((longlong)(param_2 + -0x18095d530) / 0xe4);
    }
  }
  return;
}



/* ===== 1802bfa60 FUN_1802bfa60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bfa60(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff88;
  uint uVar8;
  undefined8 auStack_58 [2];
  longlong lStack_48;
  longlong local_30 [5];
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_30[4] = DAT_180919500 ^ (ulonglong)auStack_58;
  if (0 < DAT_181107580) {
    FUN_1801c6320();
  }
  if (DAT_180cd04ae != '\0') {
    puVar2 = (undefined8 *)FUN_1800fbe90(param_1);
    if (puVar2 != (undefined8 *)0x0) {
      puVar6 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar6 = (undefined8 *)*puVar2;
      }
      uVar3 = FUN_1800ba730(puVar6,puVar2[2]);
      local_30[2] = 0;
      local_30[0] = 0;
      local_30[1] = 0;
      if (uVar3 == 0xffffffffffffffff) {
        local_30[3] = 0xf;
        local_30[0] = 0;
      }
      else {
        local_30[3] = 0;
        if ((ulonglong)puVar2[2] < uVar3) {
          uVar3 = puVar2[2];
        }
        if (0xf < (ulonglong)puVar2[3]) {
          puVar2 = (undefined8 *)*puVar2;
        }
        FUN_1800133a0(local_30,puVar2,uVar3);
      }
      lVar5 = DAT_1811076e8;
      lVar4 = FUN_180026970(DAT_1811076e0,DAT_1811076e8,local_30);
      if (lVar4 == lVar5) {
        if (lVar5 == DAT_1811076f0) {
          FUN_180028f00(&DAT_1811076e0,lVar5,local_30);
        }
        else {
          FUN_180024b50(lVar5,local_30);
          DAT_1811076e8 = DAT_1811076e8 + 0x20;
        }
      }
      if (0xf < (ulonglong)local_30[3]) {
        uVar3 = local_30[3] + 1;
        lVar4 = local_30[0];
        if (0xfff < uVar3) {
          lVar4 = *(longlong *)(local_30[0] + -8);
          if (0x1f < (local_30[0] - lVar4) - 8U) {
            uVar7 = 5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            lStack_48 = lVar5;
            auStack_58[0] = 0;
            FUN_1802bfa60(uVar3);
            lVar5 = FUN_1800fbe90(uVar3);
            if (lVar5 != 0) {
              uVar3 = 0;
              FUN_180313700(uVar7,lVar5,1,0,in_stack_ffffffffffffff78 & 0xffffff00,0,
                            (ulonglong)uVar8 << 0x20);
              FUN_1802bf2c0(uVar7,lVar5,0,0,0,uVar3 & 0xffffffff00000000,&DAT_18058b643,0);
            }
            return;
          }
          uVar3 = local_30[3] + 0x28;
        }
        thunk_FUN_1803d64e0(lVar4,uVar3);
      }
    }
  }
  return;
}



/* ===== 1802bfbc0 FUN_1802bfbc0 ===== */

void FUN_1802bfbc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  uint in_stack_ffffffffffffffc8;
  ulonglong uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  uint uVar3;
  
  uVar3 = (uint)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  FUN_1802bfa60(param_2);
  lVar1 = FUN_1800fbe90(param_2);
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_180313700(param_1,lVar1,1,0,in_stack_ffffffffffffffc8 & 0xffffff00,0,
                  (ulonglong)uVar3 << 0x20);
    FUN_1802bf2c0(param_1,lVar1,0,0,0,uVar2 & 0xffffffff00000000,&DAT_18058b643,0);
  }
  return;
}



/* ===== 1802bfc60 FUN_1802bfc60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1802bfc60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                    undefined1 param_9)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 in_RDX;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uStack_180;
  undefined4 uStack_108;
  longlong alStack_e8 [2];
  ulonglong uStack_d8;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_a0;
  uint local_98;
  longlong local_90 [4];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)alStack_e8;
  local_98 = 0;
  FUN_1802bfa60(in_RDX);
  lVar2 = FUN_1800fbe90(in_RDX);
  if (lVar2 == 0) {
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0xf;
    local_90[0] = 0;
    plVar3 = local_90;
    uVar8 = 2;
  }
  else {
    plVar3 = (longlong *)FUN_180024b50(local_70,lVar2);
    uVar8 = 1;
  }
  local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
  local_c0 = 0;
  local_c8 = CONCAT31(local_c8._1_3_,param_7);
  uVar9 = 2;
  local_98 = (uint)uVar8;
  pcVar4 = (char *)FUN_180313700(param_1,plVar3,2,param_6);
  if (((uVar8 & 2) != 0) &&
     (uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd), 0xf < (ulonglong)local_90[3])) {
    uVar7 = local_90[3] + 1;
    lVar5 = local_90[0];
    if (0xfff < uVar7) {
      lVar5 = *(longlong *)(local_90[0] + -8);
      if (0x1f < (local_90[0] - lVar5) - 8U) {
        puVar6 = (undefined8 *)&DAT_00000005;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        if ((ulonglong)puVar6[2] < 0x60) {
          pcVar4 = &DAT_18095d530;
          do {
            if (*pcVar4 == '\0') {
              uStack_180 = CONCAT31(uStack_180._1_3_,1);
              pcVar4[0] = '\0';
              pcVar4[1] = '\0';
              pcVar4[2] = '\0';
              pcVar4[3] = '\0';
              pcVar4[4] = '\0';
              pcVar4[5] = '\0';
              pcVar4[6] = '\0';
              pcVar4[7] = '\0';
              pcVar4[8] = '\0';
              pcVar4[9] = '\0';
              pcVar4[10] = '\0';
              pcVar4[0xb] = '\0';
              pcVar4[0xc] = '\0';
              pcVar4[0xd] = '\0';
              pcVar4[0xe] = '\0';
              pcVar4[0xf] = '\0';
              uStack_108 = CONCAT22(uStack_108._2_2_,0x100);
              pcVar4[0x10] = '\0';
              pcVar4[0x11] = '\0';
              pcVar4[0x12] = '\0';
              pcVar4[0x13] = '\0';
              pcVar4[0x14] = '\0';
              pcVar4[0x15] = '\0';
              pcVar4[0x16] = '\0';
              pcVar4[0x17] = '\0';
              pcVar4[0x18] = '\0';
              pcVar4[0x19] = '\0';
              pcVar4[0x1a] = '\0';
              pcVar4[0x1b] = '\0';
              pcVar4[0x1c] = '\0';
              pcVar4[0x1d] = '\0';
              pcVar4[0x1e] = '\0';
              pcVar4[0x1f] = '\0';
              pcVar4[0x20] = '\0';
              pcVar4[0x21] = '\0';
              pcVar4[0x22] = '\0';
              pcVar4[0x23] = '\0';
              pcVar4[0x24] = '\0';
              pcVar4[0x25] = '\0';
              pcVar4[0x26] = '\0';
              pcVar4[0x27] = '\0';
              pcVar4[0x28] = '\0';
              pcVar4[0x29] = '\0';
              pcVar4[0x2a] = '\0';
              pcVar4[0x2b] = '\0';
              pcVar4[0x2c] = '\0';
              pcVar4[0x2d] = '\0';
              pcVar4[0x2e] = '\0';
              pcVar4[0x2f] = '\0';
              pcVar4[0x30] = '\0';
              pcVar4[0x31] = '\0';
              pcVar4[0x32] = '\0';
              pcVar4[0x33] = '\0';
              pcVar4[0x34] = '\0';
              pcVar4[0x35] = '\0';
              pcVar4[0x36] = '\0';
              pcVar4[0x37] = '\0';
              pcVar4[0x38] = '\0';
              pcVar4[0x39] = '\0';
              pcVar4[0x3a] = '\0';
              pcVar4[0x3b] = '\0';
              pcVar4[0x3c] = '\0';
              pcVar4[0x3d] = '\0';
              pcVar4[0x3e] = '\0';
              pcVar4[0x3f] = '\0';
              pcVar4[0x40] = '\0';
              pcVar4[0x41] = '\0';
              pcVar4[0x42] = '\0';
              pcVar4[0x43] = '\0';
              pcVar4[0x44] = '\0';
              pcVar4[0x45] = '\0';
              pcVar4[0x46] = '\0';
              pcVar4[0x47] = '\0';
              pcVar4[0x48] = '\0';
              pcVar4[0x49] = '\0';
              pcVar4[0x4a] = '\0';
              pcVar4[0x4b] = '\0';
              pcVar4[0x4c] = '\0';
              pcVar4[0x4d] = '\0';
              pcVar4[0x4e] = '\0';
              pcVar4[0x4f] = '\0';
              pcVar4[0x50] = '\0';
              pcVar4[0x51] = '\0';
              pcVar4[0x52] = '\0';
              pcVar4[0x53] = '\0';
              pcVar4[0x54] = '\0';
              pcVar4[0x55] = '\0';
              pcVar4[0x56] = '\0';
              pcVar4[0x57] = '\0';
              pcVar4[0x58] = '\0';
              pcVar4[0x59] = '\0';
              pcVar4[0x5a] = '\0';
              pcVar4[0x5b] = '\0';
              pcVar4[0x5c] = '\0';
              pcVar4[0x5d] = '\0';
              pcVar4[0x5e] = '\0';
              pcVar4[0x5f] = '\0';
              pcVar4[0x60] = '\0';
              pcVar4[0x61] = '\0';
              pcVar4[0x62] = '\0';
              pcVar4[99] = '\0';
              pcVar4[100] = '\0';
              pcVar4[0x65] = '\0';
              pcVar4[0x66] = '\0';
              pcVar4[0x67] = '\0';
              *(undefined4 *)(pcVar4 + 0x68) = uStack_180;
              pcVar4[0x6c] = '\0';
              pcVar4[0x6d] = '\0';
              pcVar4[0x6e] = '\0';
              pcVar4[0x6f] = '\0';
              pcVar4[0x70] = '\0';
              pcVar4[0x71] = '\0';
              pcVar4[0x72] = '\0';
              pcVar4[0x73] = '\0';
              pcVar4[0x74] = '\0';
              pcVar4[0x75] = '\0';
              pcVar4[0x76] = '\0';
              pcVar4[0x77] = '\0';
              pcVar4[0x78] = '\0';
              pcVar4[0x79] = '\0';
              pcVar4[0x7a] = '\0';
              pcVar4[0x7b] = '\0';
              pcVar4[0x7c] = '\0';
              pcVar4[0x7d] = '\0';
              pcVar4[0x7e] = '\0';
              pcVar4[0x7f] = '\0';
              pcVar4[0x80] = '\0';
              pcVar4[0x81] = '\0';
              pcVar4[0x82] = '\0';
              pcVar4[0x83] = '\0';
              pcVar4[0x84] = '\0';
              pcVar4[0x85] = '\0';
              pcVar4[0x86] = '\0';
              pcVar4[0x87] = '\0';
              pcVar4[0x88] = '\0';
              pcVar4[0x89] = '\0';
              pcVar4[0x8a] = '\0';
              pcVar4[0x8b] = '\0';
              pcVar4[0x8c] = '\0';
              pcVar4[0x8d] = '\0';
              pcVar4[0x8e] = '\0';
              pcVar4[0x8f] = '\0';
              pcVar4[0x90] = '\0';
              pcVar4[0x91] = '\0';
              pcVar4[0x92] = '\0';
              pcVar4[0x93] = '\0';
              pcVar4[0x94] = '\0';
              pcVar4[0x95] = '\0';
              pcVar4[0x96] = '\0';
              pcVar4[0x97] = '\0';
              pcVar4[0x98] = '\0';
              pcVar4[0x99] = '\0';
              pcVar4[0x9a] = '\0';
              pcVar4[0x9b] = '\0';
              pcVar4[0x9c] = '\0';
              pcVar4[0x9d] = '\0';
              pcVar4[0x9e] = '\0';
              pcVar4[0x9f] = '\0';
              pcVar4[0xa0] = '\0';
              pcVar4[0xa1] = '\0';
              pcVar4[0xa2] = '\0';
              pcVar4[0xa3] = '\0';
              pcVar4[0xa4] = '\0';
              pcVar4[0xa5] = '\0';
              pcVar4[0xa6] = '\0';
              pcVar4[0xa7] = '\0';
              pcVar4[0xa8] = '\0';
              pcVar4[0xa9] = '\0';
              pcVar4[0xaa] = '\0';
              pcVar4[0xab] = '\0';
              pcVar4[0xac] = '\0';
              pcVar4[0xad] = '\0';
              pcVar4[0xae] = '\0';
              pcVar4[0xaf] = '\0';
              pcVar4[0xb0] = '\0';
              pcVar4[0xb1] = '\0';
              pcVar4[0xb2] = '\0';
              pcVar4[0xb3] = '\0';
              pcVar4[0xb4] = '\0';
              pcVar4[0xb5] = '\0';
              pcVar4[0xb6] = '\0';
              pcVar4[0xb7] = '\0';
              pcVar4[0xb8] = '\0';
              pcVar4[0xb9] = '\0';
              pcVar4[0xba] = '\0';
              pcVar4[0xbb] = '\0';
              pcVar4[0xbc] = '\0';
              pcVar4[0xbd] = '\0';
              pcVar4[0xbe] = '\0';
              pcVar4[0xbf] = '\0';
              pcVar4[0xc0] = '\0';
              pcVar4[0xc1] = '\0';
              pcVar4[0xc2] = '\0';
              pcVar4[0xc3] = '\0';
              pcVar4[0xc4] = '\0';
              pcVar4[0xc5] = '\0';
              pcVar4[0xc6] = '\0';
              pcVar4[199] = '\0';
              pcVar4[200] = '\0';
              pcVar4[0xc9] = '\0';
              pcVar4[0xca] = '\0';
              pcVar4[0xcb] = '\0';
              pcVar4[0xcc] = '\0';
              pcVar4[0xcd] = '\0';
              pcVar4[0xce] = '\0';
              pcVar4[0xcf] = '\0';
              pcVar4[0xd0] = '\0';
              pcVar4[0xd1] = '\0';
              pcVar4[0xd2] = '\0';
              pcVar4[0xd3] = '\0';
              pcVar4[0xd4] = '\0';
              pcVar4[0xd5] = '\0';
              pcVar4[0xd6] = '\0';
              pcVar4[0xd7] = '\0';
              pcVar4[0xd8] = '\0';
              pcVar4[0xd9] = '\0';
              pcVar4[0xda] = '\0';
              pcVar4[0xdb] = '\0';
              pcVar4[0xdc] = '\0';
              pcVar4[0xdd] = '\0';
              pcVar4[0xde] = '\0';
              pcVar4[0xdf] = '\0';
              *(undefined4 *)(pcVar4 + 0xe0) = uStack_108;
              if (0xf < (ulonglong)puVar6[3]) {
                puVar6 = (undefined8 *)*puVar6;
              }
              alStack_e8[0] = lVar2;
              uStack_d8 = uVar8;
              snprintf(pcVar4,0x60,&DAT_1806d3198,puVar6);
              *(undefined4 *)(pcVar4 + 0x6c) = param_2;
              *(undefined4 *)(pcVar4 + 100) = uVar9;
              pcVar4[0xe1] = '\0';
              return pcVar4;
            }
            pcVar4 = pcVar4 + 0xe4;
          } while (pcVar4 != &DAT_180960e30);
        }
        return (char *)0x0;
      }
      uVar7 = local_90[3] + 0x28;
    }
    pcVar4 = (char *)thunk_FUN_1803d64e0(lVar5,uVar7);
  }
  if ((uVar8 & 1) != 0) {
    pcVar4 = (char *)FUN_18000f890(local_70);
  }
  if (lVar2 != 0) {
    local_a0 = param_9;
    local_b0 = param_7;
    local_b8 = param_6;
    local_c0 = CONCAT44(local_c0._4_4_,param_5);
    local_c8 = param_4;
    pcVar4 = (char *)FUN_1802bf2c0(param_1,lVar2,1,param_3);
  }
  return pcVar4;
}



/* ===== 1802bfdf0 FUN_1802bfdf0 ===== */

char * FUN_1802bfdf0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uStack_a0;
  undefined4 local_28;
  
  if ((ulonglong)param_1[2] < 0x60) {
    pcVar1 = &DAT_18095d530;
    do {
      if (*pcVar1 == '\0') {
        uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar1[8] = '\0';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        pcVar1[0xc] = '\0';
        pcVar1[0xd] = '\0';
        pcVar1[0xe] = '\0';
        pcVar1[0xf] = '\0';
        local_28 = CONCAT22(local_28._2_2_,0x100);
        pcVar1[0x10] = '\0';
        pcVar1[0x11] = '\0';
        pcVar1[0x12] = '\0';
        pcVar1[0x13] = '\0';
        pcVar1[0x14] = '\0';
        pcVar1[0x15] = '\0';
        pcVar1[0x16] = '\0';
        pcVar1[0x17] = '\0';
        pcVar1[0x18] = '\0';
        pcVar1[0x19] = '\0';
        pcVar1[0x1a] = '\0';
        pcVar1[0x1b] = '\0';
        pcVar1[0x1c] = '\0';
        pcVar1[0x1d] = '\0';
        pcVar1[0x1e] = '\0';
        pcVar1[0x1f] = '\0';
        pcVar1[0x20] = '\0';
        pcVar1[0x21] = '\0';
        pcVar1[0x22] = '\0';
        pcVar1[0x23] = '\0';
        pcVar1[0x24] = '\0';
        pcVar1[0x25] = '\0';
        pcVar1[0x26] = '\0';
        pcVar1[0x27] = '\0';
        pcVar1[0x28] = '\0';
        pcVar1[0x29] = '\0';
        pcVar1[0x2a] = '\0';
        pcVar1[0x2b] = '\0';
        pcVar1[0x2c] = '\0';
        pcVar1[0x2d] = '\0';
        pcVar1[0x2e] = '\0';
        pcVar1[0x2f] = '\0';
        pcVar1[0x30] = '\0';
        pcVar1[0x31] = '\0';
        pcVar1[0x32] = '\0';
        pcVar1[0x33] = '\0';
        pcVar1[0x34] = '\0';
        pcVar1[0x35] = '\0';
        pcVar1[0x36] = '\0';
        pcVar1[0x37] = '\0';
        pcVar1[0x38] = '\0';
        pcVar1[0x39] = '\0';
        pcVar1[0x3a] = '\0';
        pcVar1[0x3b] = '\0';
        pcVar1[0x3c] = '\0';
        pcVar1[0x3d] = '\0';
        pcVar1[0x3e] = '\0';
        pcVar1[0x3f] = '\0';
        pcVar1[0x40] = '\0';
        pcVar1[0x41] = '\0';
        pcVar1[0x42] = '\0';
        pcVar1[0x43] = '\0';
        pcVar1[0x44] = '\0';
        pcVar1[0x45] = '\0';
        pcVar1[0x46] = '\0';
        pcVar1[0x47] = '\0';
        pcVar1[0x48] = '\0';
        pcVar1[0x49] = '\0';
        pcVar1[0x4a] = '\0';
        pcVar1[0x4b] = '\0';
        pcVar1[0x4c] = '\0';
        pcVar1[0x4d] = '\0';
        pcVar1[0x4e] = '\0';
        pcVar1[0x4f] = '\0';
        pcVar1[0x50] = '\0';
        pcVar1[0x51] = '\0';
        pcVar1[0x52] = '\0';
        pcVar1[0x53] = '\0';
        pcVar1[0x54] = '\0';
        pcVar1[0x55] = '\0';
        pcVar1[0x56] = '\0';
        pcVar1[0x57] = '\0';
        pcVar1[0x58] = '\0';
        pcVar1[0x59] = '\0';
        pcVar1[0x5a] = '\0';
        pcVar1[0x5b] = '\0';
        pcVar1[0x5c] = '\0';
        pcVar1[0x5d] = '\0';
        pcVar1[0x5e] = '\0';
        pcVar1[0x5f] = '\0';
        pcVar1[0x60] = '\0';
        pcVar1[0x61] = '\0';
        pcVar1[0x62] = '\0';
        pcVar1[99] = '\0';
        pcVar1[100] = '\0';
        pcVar1[0x65] = '\0';
        pcVar1[0x66] = '\0';
        pcVar1[0x67] = '\0';
        *(undefined4 *)(pcVar1 + 0x68) = uStack_a0;
        pcVar1[0x6c] = '\0';
        pcVar1[0x6d] = '\0';
        pcVar1[0x6e] = '\0';
        pcVar1[0x6f] = '\0';
        pcVar1[0x70] = '\0';
        pcVar1[0x71] = '\0';
        pcVar1[0x72] = '\0';
        pcVar1[0x73] = '\0';
        pcVar1[0x74] = '\0';
        pcVar1[0x75] = '\0';
        pcVar1[0x76] = '\0';
        pcVar1[0x77] = '\0';
        pcVar1[0x78] = '\0';
        pcVar1[0x79] = '\0';
        pcVar1[0x7a] = '\0';
        pcVar1[0x7b] = '\0';
        pcVar1[0x7c] = '\0';
        pcVar1[0x7d] = '\0';
        pcVar1[0x7e] = '\0';
        pcVar1[0x7f] = '\0';
        pcVar1[0x80] = '\0';
        pcVar1[0x81] = '\0';
        pcVar1[0x82] = '\0';
        pcVar1[0x83] = '\0';
        pcVar1[0x84] = '\0';
        pcVar1[0x85] = '\0';
        pcVar1[0x86] = '\0';
        pcVar1[0x87] = '\0';
        pcVar1[0x88] = '\0';
        pcVar1[0x89] = '\0';
        pcVar1[0x8a] = '\0';
        pcVar1[0x8b] = '\0';
        pcVar1[0x8c] = '\0';
        pcVar1[0x8d] = '\0';
        pcVar1[0x8e] = '\0';
        pcVar1[0x8f] = '\0';
        pcVar1[0x90] = '\0';
        pcVar1[0x91] = '\0';
        pcVar1[0x92] = '\0';
        pcVar1[0x93] = '\0';
        pcVar1[0x94] = '\0';
        pcVar1[0x95] = '\0';
        pcVar1[0x96] = '\0';
        pcVar1[0x97] = '\0';
        pcVar1[0x98] = '\0';
        pcVar1[0x99] = '\0';
        pcVar1[0x9a] = '\0';
        pcVar1[0x9b] = '\0';
        pcVar1[0x9c] = '\0';
        pcVar1[0x9d] = '\0';
        pcVar1[0x9e] = '\0';
        pcVar1[0x9f] = '\0';
        pcVar1[0xa0] = '\0';
        pcVar1[0xa1] = '\0';
        pcVar1[0xa2] = '\0';
        pcVar1[0xa3] = '\0';
        pcVar1[0xa4] = '\0';
        pcVar1[0xa5] = '\0';
        pcVar1[0xa6] = '\0';
        pcVar1[0xa7] = '\0';
        pcVar1[0xa8] = '\0';
        pcVar1[0xa9] = '\0';
        pcVar1[0xaa] = '\0';
        pcVar1[0xab] = '\0';
        pcVar1[0xac] = '\0';
        pcVar1[0xad] = '\0';
        pcVar1[0xae] = '\0';
        pcVar1[0xaf] = '\0';
        pcVar1[0xb0] = '\0';
        pcVar1[0xb1] = '\0';
        pcVar1[0xb2] = '\0';
        pcVar1[0xb3] = '\0';
        pcVar1[0xb4] = '\0';
        pcVar1[0xb5] = '\0';
        pcVar1[0xb6] = '\0';
        pcVar1[0xb7] = '\0';
        pcVar1[0xb8] = '\0';
        pcVar1[0xb9] = '\0';
        pcVar1[0xba] = '\0';
        pcVar1[0xbb] = '\0';
        pcVar1[0xbc] = '\0';
        pcVar1[0xbd] = '\0';
        pcVar1[0xbe] = '\0';
        pcVar1[0xbf] = '\0';
        pcVar1[0xc0] = '\0';
        pcVar1[0xc1] = '\0';
        pcVar1[0xc2] = '\0';
        pcVar1[0xc3] = '\0';
        pcVar1[0xc4] = '\0';
        pcVar1[0xc5] = '\0';
        pcVar1[0xc6] = '\0';
        pcVar1[199] = '\0';
        pcVar1[200] = '\0';
        pcVar1[0xc9] = '\0';
        pcVar1[0xca] = '\0';
        pcVar1[0xcb] = '\0';
        pcVar1[0xcc] = '\0';
        pcVar1[0xcd] = '\0';
        pcVar1[0xce] = '\0';
        pcVar1[0xcf] = '\0';
        pcVar1[0xd0] = '\0';
        pcVar1[0xd1] = '\0';
        pcVar1[0xd2] = '\0';
        pcVar1[0xd3] = '\0';
        pcVar1[0xd4] = '\0';
        pcVar1[0xd5] = '\0';
        pcVar1[0xd6] = '\0';
        pcVar1[0xd7] = '\0';
        pcVar1[0xd8] = '\0';
        pcVar1[0xd9] = '\0';
        pcVar1[0xda] = '\0';
        pcVar1[0xdb] = '\0';
        pcVar1[0xdc] = '\0';
        pcVar1[0xdd] = '\0';
        pcVar1[0xde] = '\0';
        pcVar1[0xdf] = '\0';
        *(undefined4 *)(pcVar1 + 0xe0) = local_28;
        if (0xf < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        snprintf(pcVar1,0x60,&DAT_1806d3198,param_1);
        *(undefined4 *)(pcVar1 + 0x6c) = param_2;
        *(undefined4 *)(pcVar1 + 100) = param_3;
        pcVar1[0xe1] = '\0';
        return pcVar1;
      }
      pcVar1 = pcVar1 + 0xe4;
    } while (pcVar1 != &DAT_180960e30);
  }
  return (char *)0x0;
}



/* ===== 1802bff20 FUN_1802bff20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bff20(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  size_t _Size;
  bool bVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *_Buf1;
  float *pfVar10;
  float *pfVar11;
  char *_Str;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 extraout_XMM0_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_res20 [2];
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  longlong local_180;
  int local_178;
  float local_168 [2];
  float local_160 [2];
  undefined8 local_158;
  longlong local_150;
  undefined8 *local_148;
  longlong *local_140;
  int *local_138;
  longlong local_128 [29];
  
  local_128[0x10] = DAT_180919500 ^ (ulonglong)auStack_1a8;
  local_res20[0] = param_4;
  local_158 = param_1;
  local_150 = param_3;
  FUN_1802bfa60(param_2);
  puVar6 = (undefined8 *)FUN_1800fbe90(param_2);
  if ((puVar6 != (undefined8 *)0x0) && (0 < local_res20[0])) {
    local_178 = local_res20[0];
    local_180 = local_150;
    local_188 = 0;
    FUN_180313700(local_158,puVar6,3,0);
    cVar4 = FUN_1802bce80("##combo_bind");
    if (cVar4 != '\0') {
      local_128[0] = 0;
      local_128[1] = 0;
      local_128[2] = 0;
      local_128[3] = 0;
      local_128[4] = 0;
      local_128[5] = 0;
      local_128[6] = 0;
      local_128[7] = 0;
      local_128[8] = 0;
      local_128[9] = 0;
      local_128[10] = 0;
      local_128[0xb] = 0;
      local_128[0xc] = 0;
      local_128[0xd] = 0;
      local_128[0xe] = 0;
      local_128[0xf] = 0;
      iVar12 = 0;
      _Str = &DAT_18095d530;
      do {
        if (*_Str != '\0') {
          sVar7 = strlen(_Str);
          _Size = puVar6[2];
          if ((ulonglong)puVar6[3] < 0x10) {
            _Buf1 = puVar6;
          }
          else {
            _Buf1 = (undefined8 *)*puVar6;
          }
          if (_Size == sVar7) {
            if (_Size != 0) {
              iVar5 = memcmp(_Buf1,_Str,_Size);
              if (iVar5 != 0) goto LAB_1802c0065;
            }
            if (iVar12 < 0x10) {
              local_128[iVar12] = (longlong)_Str;
            }
            iVar12 = iVar12 + 1;
          }
        }
LAB_1802c0065:
        fVar3 = DAT_1808ac7ec;
        fVar2 = DAT_1808ac1f4;
        _Str = _Str + 0xe4;
      } while (_Str != &DAT_180960e30);
      if (0x10 < iVar12) {
        iVar12 = 0x10;
      }
      bVar1 = false;
      fVar16 = 0.0;
      fVar15 = 0.0;
      uVar14 = 0;
      if (0 < iVar12) {
        do {
          iVar5 = DAT_180cd1300;
          lVar9 = local_128[uVar14];
          if ((lVar9 != 0) && (DAT_180cd1868 == lVar9)) {
            LOCK();
            DAT_180cd1868 = 0;
            UNLOCK();
            if (DAT_180cd1300 != -1) {
              if (DAT_180cd1300 == 1) {
                cVar4 = FUN_1803e7af0(1);
                if (cVar4 != '\0') goto LAB_1802c00de;
              }
              *(int *)(lVar9 + 0x60) = iVar5;
            }
          }
LAB_1802c00de:
          iVar5 = local_res20[0] + -1;
          local_168[0] = 0.0;
          local_160[0] = (float)iVar5;
          local_168[1] = (float)FUN_1804f3280(*(undefined4 *)(lVar9 + 0x6c));
          pfVar11 = local_168;
          if (-1 < (int)local_168[1]) {
            pfVar11 = local_168 + 1;
          }
          pfVar10 = local_168 + 2;
          if ((int)local_168[1] <= iVar5) {
            pfVar10 = pfVar11;
          }
          snprintf(lVar9 + 0xa0,0x30,&DAT_1806d3198,
                   *(undefined8 *)(local_150 + (longlong)(int)*pfVar10 * 8));
          if (*(char *)(lVar9 + 0x70) == '\0') {
            snprintf((char *)(lVar9 + 0x70),0x30,&DAT_1806d3198,local_158);
          }
          FUN_1803e8a70(uVar14);
          uVar8 = FUN_1802be8d0(&local_148,lVar9);
          cVar4 = FUN_1802bd910(extraout_XMM0_Da,uVar8);
          FUN_18000f890(&local_148);
          if (cVar4 != '\0') {
            bVar1 = true;
            fVar16 = *(float *)(DAT_180ca0a50 + 0x1efc) + fVar3;
            fVar15 = (*(float *)(DAT_180ca0a50 + 0x1f00) + *(float *)(DAT_180ca0a50 + 0x1ef8)) *
                     fVar2;
            DAT_1811071c0 = lVar9;
          }
          iVar5 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar5 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar5 + -1;
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while ((int)uVar13 < iVar12);
      }
      FUN_1802bddb0();
      if (iVar12 < 0x10) {
        cVar4 = FUN_1802be590();
        if (cVar4 != '\0') {
          iVar12 = *param_2;
          local_168[0] = 0.0;
          cVar4 = FUN_1800fca00(puVar6,local_168);
          if (cVar4 == '\0') {
            fVar17 = (float)iVar12;
          }
          else {
            fVar17 = local_168[0];
          }
          lVar9 = FUN_1802bfdf0(puVar6,fVar17,1);
          if (lVar9 != 0) {
            snprintf(lVar9 + 0x70,0x30,&DAT_1806d3198,local_158);
            fVar15 = (float)(local_res20[0] + -1);
            local_160[0] = 0.0;
            local_168[0] = fVar15;
            local_168[1] = (float)FUN_1804f3280(fVar17);
            pfVar11 = local_168 + 2;
            if (-1 < (int)local_168[1]) {
              pfVar11 = local_168 + 1;
            }
            pfVar10 = local_168;
            if ((int)local_168[1] <= (int)fVar15) {
              pfVar10 = pfVar11;
            }
            snprintf(lVar9 + 0xa0,0x30,&DAT_1806d3198,
                     *(undefined8 *)(local_150 + (longlong)(int)*pfVar10 * 8));
            LOCK();
            DAT_180cd1868 = 0;
            UNLOCK();
            LOCK();
            UNLOCK();
            bVar1 = true;
            fVar16 = *(float *)(DAT_180ca0a50 + 0x1efc) + fVar3;
            fVar15 = (*(float *)(DAT_180ca0a50 + 0x1f00) + *(float *)(DAT_180ca0a50 + 0x1ef8)) *
                     fVar2;
            DAT_180cd1360 = lVar9;
            DAT_1811071c0 = lVar9;
          }
        }
      }
      FUN_1802b7f90();
      FUN_18031aaf0(puVar6);
      cVar4 = FUN_1802be270();
      if (cVar4 != '\0') {
        FUN_1800fc6b0(puVar6);
        FUN_1803ee1f0();
      }
      if (bVar1) {
        FUN_1802b4d80("##hotkey");
        DAT_1811074a8 = fVar16;
        DAT_1811074ac = fVar15;
      }
      local_148 = &local_158;
      local_140 = &local_150;
      local_138 = local_res20;
      FUN_18033dda0(DAT_1811071c0);
      FUN_1802b5590();
    }
  }
  return;
}



/* ===== 1802c03e0 FUN_1802c03e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c03e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  size_t _Size;
  float *pfVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  char *_Str;
  int iVar13;
  uint uVar14;
  undefined4 extraout_XMM0_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_178 [32];
  undefined4 local_158 [2];
  float local_150 [2];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined4 *local_128;
  longlong local_118 [28];
  
  local_118[0x10] = DAT_180919500 ^ (ulonglong)auStack_178;
  local_158[0] = param_4;
  local_148 = param_1;
  local_140 = param_3;
  cVar5 = FUN_1802bce80("##multi_bind",param_2,param_6,param_2);
  if (cVar5 != '\0') {
    local_118[0] = 0;
    local_118[1] = 0;
    local_118[2] = 0;
    local_118[3] = 0;
    local_118[4] = 0;
    local_118[5] = 0;
    local_118[6] = 0;
    local_118[7] = 0;
    local_118[8] = 0;
    local_118[9] = 0;
    local_118[10] = 0;
    local_118[0xb] = 0;
    local_118[0xc] = 0;
    local_118[0xd] = 0;
    local_118[0xe] = 0;
    local_118[0xf] = 0;
    iVar13 = 0;
    _Str = &DAT_18095d530;
    do {
      if (*_Str != '\0') {
        sVar7 = strlen(_Str);
        _Size = param_2[2];
        if ((ulonglong)param_2[3] < 0x10) {
          puVar8 = param_2;
        }
        else {
          puVar8 = (undefined8 *)*param_2;
        }
        if ((_Size == sVar7) && ((_Size == 0 || (iVar6 = memcmp(puVar8,_Str,_Size), iVar6 == 0)))) {
          if (iVar13 < 0x10) {
            local_118[iVar13] = (longlong)_Str;
          }
          iVar13 = iVar13 + 1;
        }
      }
      fVar4 = DAT_1808ac7ec;
      fVar3 = DAT_1808ac1f4;
      _Str = _Str + 0xe4;
    } while (_Str != &DAT_180960e30);
    if (0x10 < iVar13) {
      iVar13 = 0x10;
    }
    bVar2 = false;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar15 = 0.0;
    uVar12 = 0;
    if (0 < iVar13) {
      do {
        iVar6 = DAT_180cd1300;
        lVar10 = local_118[uVar12];
        if ((lVar10 != 0) && (DAT_180cd1868 == lVar10)) {
          LOCK();
          DAT_180cd1868 = 0;
          UNLOCK();
          if ((DAT_180cd1300 != -1) &&
             ((DAT_180cd1300 != 1 || (cVar5 = FUN_1803e7af0(1), cVar5 == '\0')))) {
            *(int *)(lVar10 + 0x60) = iVar6;
          }
        }
        puVar8 = (undefined8 *)
                 FUN_1802c36f0(&local_138,local_140,local_158[0],*(undefined4 *)(lVar10 + 0x6c));
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        snprintf(lVar10 + 0xa0,0x30,&DAT_1806d3198,puVar8);
        FUN_18000f890(&local_138);
        if (*(char *)(lVar10 + 0x70) == '\0') {
          snprintf((char *)(lVar10 + 0x70),0x30,&DAT_1806d3198,local_148);
        }
        FUN_1803e8a70(uVar12);
        uVar9 = FUN_1802be8d0(&local_138,lVar10);
        cVar5 = FUN_1802bd910(extraout_XMM0_Da,uVar9);
        FUN_18000f890(&local_138);
        if (cVar5 != '\0') {
          bVar2 = true;
          fVar17 = *(float *)(DAT_180ca0a50 + 0x1efc) + fVar4;
          fVar15 = (*(float *)(DAT_180ca0a50 + 0x1f00) + *(float *)(DAT_180ca0a50 + 0x1ef8)) * fVar3
          ;
          DAT_1811071c0 = lVar10;
        }
        iVar6 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar6 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar6 + -1;
        }
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
      } while ((int)uVar14 < iVar13);
    }
    FUN_1802bddb0();
    if ((iVar13 < 0x10) && (cVar5 = FUN_1802be590(), cVar5 != '\0')) {
      local_150[0] = 0.0;
      cVar5 = FUN_1800fca00(param_2,local_150);
      if (cVar5 == '\0') {
        puVar8 = (undefined8 *)FUN_1800fbdb0(&local_138,param_2);
        pfVar1 = (float *)*puVar8;
        if (pfVar1 != (float *)0x0) {
          iVar13 = *(int *)(puVar8 + 1);
          if (iVar13 == 1) {
            if (*(char *)pfVar1 != '\0') {
              fVar16 = DAT_1808ac34c;
            }
          }
          else if (iVar13 == 2) {
            fVar16 = (float)(int)*pfVar1;
          }
          else if (iVar13 == 3) {
            fVar16 = *pfVar1;
          }
          else if (iVar13 == 4) {
            uVar14 = 0;
            uVar12 = 0;
            if (0 < *(int *)((longlong)puVar8 + 0xc)) {
              do {
                uVar11 = (uint)uVar12;
                if (0x17 < uVar11) break;
                if (*(char *)((longlong)pfVar1 + uVar12) != '\0') {
                  uVar14 = uVar14 | 1 << (uVar11 & 0x1f);
                }
                uVar12 = (ulonglong)(uVar11 + 1);
              } while ((int)(uVar11 + 1) < *(int *)((longlong)puVar8 + 0xc));
            }
            fVar16 = (float)(int)uVar14;
          }
        }
      }
      else {
        fVar16 = local_150[0];
      }
      lVar10 = FUN_1802bfdf0(param_2,fVar16,1);
      if (lVar10 != 0) {
        snprintf(lVar10 + 0x70,0x30,&DAT_1806d3198,local_148);
        puVar8 = (undefined8 *)FUN_1802c36f0(&local_138,local_140,local_158[0],fVar16);
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        snprintf(lVar10 + 0xa0,0x30,&DAT_1806d3198,puVar8);
        FUN_18000f890(&local_138);
        *(undefined1 *)(lVar10 + 0xe0) = 1;
        LOCK();
        DAT_180cd1868 = 0;
        UNLOCK();
        LOCK();
        UNLOCK();
        bVar2 = true;
        fVar17 = *(float *)(DAT_180ca0a50 + 0x1efc) + fVar4;
        fVar15 = (*(float *)(DAT_180ca0a50 + 0x1f00) + *(float *)(DAT_180ca0a50 + 0x1ef8)) * fVar3;
        DAT_180cd1360 = lVar10;
        DAT_1811071c0 = lVar10;
      }
    }
    FUN_1802b7f90();
    FUN_18031aaf0(param_2);
    cVar5 = FUN_1802be270();
    if (cVar5 != '\0') {
      FUN_1800fc6b0(param_2);
      FUN_1803ee1f0();
    }
    if (bVar2) {
      FUN_1802b4d80("##hotkey");
      DAT_1811074a8 = fVar17;
      DAT_1811074ac = fVar15;
    }
    local_138 = &local_148;
    local_130 = &local_140;
    local_128 = local_158;
    FUN_18033e120(DAT_1811071c0);
    FUN_1802b5590();
  }
  return;
}



/* ===== 1802c0880 FUN_1802c0880 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c0880(undefined8 *param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_1b8 [32];
  longlong local_198 [24];
  char local_d8 [64];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  iVar1 = *(int *)param_1[2];
  iVar7 = iVar1;
  if (0x18 < iVar1) {
    iVar7 = 0x18;
  }
  if (0 < iVar7) {
    uVar2 = *(undefined8 *)param_1[1];
    uVar3 = *(undefined8 *)*param_1;
    FUN_1802c3290(local_98,&PTR_s_nl_glyph_link_1806a08c0);
    uVar5 = FUN_1804f3280();
    local_d8[0] = '\0';
    local_d8[1] = '\0';
    local_d8[2] = '\0';
    local_d8[3] = '\0';
    local_d8[4] = '\0';
    local_d8[5] = '\0';
    local_d8[6] = '\0';
    local_d8[7] = '\0';
    local_d8[8] = '\0';
    local_d8[9] = '\0';
    local_d8[10] = '\0';
    local_d8[0xb] = '\0';
    local_d8[0xc] = '\0';
    local_d8[0xd] = '\0';
    local_d8[0xe] = '\0';
    local_d8[0xf] = '\0';
    local_d8[0x10] = '\0';
    local_d8[0x11] = '\0';
    local_d8[0x12] = '\0';
    local_d8[0x13] = '\0';
    local_d8[0x14] = '\0';
    local_d8[0x15] = '\0';
    local_d8[0x16] = '\0';
    local_d8[0x17] = '\0';
    FUN_180540170(local_198,0,0xc0);
    uVar9 = 0;
    uVar8 = 1;
    do {
      local_d8[uVar9] = (uVar5 & uVar8) != 0;
      local_198[uVar9] = (longlong)(local_d8 + uVar9);
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    } while ((int)uVar10 < iVar7);
    cVar4 = FUN_1802c2b30(uVar3,uVar2,local_198);
    if (cVar4 != '\0') {
      uVar5 = 0;
      uVar9 = 0;
      do {
        if (local_d8[uVar9] != '\0') {
          uVar5 = uVar5 | 1 << ((uint)uVar9 & 0x1f);
        }
        uVar8 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar7);
      *(float *)(param_2 + 0x6c) = (float)(int)uVar5;
    }
    puVar6 = (undefined8 *)
             FUN_1802c36f0(local_d8 + 0x18,uVar2,iVar1,*(undefined4 *)(param_2 + 0x6c));
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    snprintf(param_2 + 0xa0,0x30,&DAT_1806d3198,puVar6);
    FUN_18000f890(local_d8 + 0x18);
    FUN_1802c3560(local_98);
    if (((cVar4 != '\0') && ((undefined *)((longlong)&DAT_18095d52c + 3) < param_2)) &&
       (param_2 < &DAT_180960e30)) {
      FUN_1801c4b90((longlong)(param_2 + -0x18095d530) / 0xe4);
    }
  }
  return;
}



/* ===== 1802c0a60 FUN_1802c0a60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1802c0a60(undefined8 param_1,byte *param_2)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  float fVar10;
  undefined4 uVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  ulonglong in_stack_fffffffffffffeb0;
  ulonglong in_stack_fffffffffffffeb8;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_110 [4];
  longlong local_100 [2];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  
  FUN_1803e89e0();
  fVar6 = DAT_1808ac34c;
  if (*param_2 == 0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = DAT_1808ac34c;
  }
  local_res10 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##switch");
  local_11c = 0;
  local_118 = 0xffffffff;
  local_128 = fVar18;
  local_124 = fVar18;
  local_120 = fVar18;
  FUN_18034a380(extraout_XMM0_Qa,local_100,&local_res10,&local_128);
  fVar18 = (float)FUN_1802b3660(local_100[0] + 0x14,fVar18,DAT_1808ac118,1);
  if ((DAT_1809f72e0 == '\0') || (DAT_1809f72e2 != '\0')) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  fVar10 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##lit");
  uVar16 = (((((ulonglong)((uint)fVar10 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)((uint)fVar10 >> 8 & 0xff)) * 0x100000001b3 ^
            (ulonglong)((uint)fVar10 >> 0x10 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((uint)fVar10 >> 0x18)) * 0x100000001b3 & DAT_181107640;
  lVar15 = *(longlong *)(DAT_181107628 + 8 + uVar16 * 0x10);
  if (lVar15 != DAT_181107618) {
    fVar23 = *(float *)(lVar15 + 0x10);
    while (fVar10 != fVar23) {
      if (lVar15 == *(longlong *)(DAT_181107628 + uVar16 * 0x10)) goto LAB_1802c0c24;
      lVar15 = *(longlong *)(lVar15 + 8);
      fVar23 = *(float *)(lVar15 + 0x10);
    }
    if (lVar15 != 0) goto LAB_1802c0c27;
  }
LAB_1802c0c24:
  lVar15 = DAT_181107618;
LAB_1802c0c27:
  if (lVar15 == DAT_181107618) {
    if (*param_2 == 0) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = fVar6;
    }
  }
  else {
    fVar23 = *(float *)(lVar15 + 0x14);
  }
  if (bVar17) {
    uVar11 = DAT_180960ef8;
  }
  else {
    fVar23 = fVar18;
    uVar11 = DAT_180960ec0;
  }
  DAT_1811074b0 = FUN_1802b38e0(uVar11,DAT_180960ec8,fVar23);
  pfVar13 = (float *)FUN_1802b9e90(&local_128,param_1);
  lVar7 = DAT_180ca0a50;
  DAT_1811074b0 = 0;
  fVar23 = *pfVar13;
  fVar3 = pfVar13[1];
  fVar4 = pfVar13[2];
  fVar5 = pfVar13[3];
  local_e0 = *(undefined8 *)(pfVar13 + 4);
  fVar20 = (float)((ulonglong)local_e0 >> 0x20);
  fVar24 = fVar23 - fVar20;
  fVar19 = fVar24 - DAT_1809f72e4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar15 = *(longlong *)(lVar7 + 0x14f8);
  *(float *)(lVar15 + 0x118) = fVar19;
  *(float *)(lVar15 + 0x11c) = fVar3;
  *(undefined1 *)(lVar15 + 0x159) = 1;
  puVar1 = (uint *)(lVar7 + 0x1eb4);
  *puVar1 = *puVar1 | 0x4000;
  local_res10 = (fVar4 - fVar23) + fVar20 + DAT_1809f72e4 * DAT_1808ac540;
  local_res14 = fVar5;
  local_f0 = fVar23;
  fStack_ec = fVar3;
  fStack_e8 = fVar4;
  fStack_e4 = fVar5;
  cVar8 = FUN_180415e30("##row",&local_res10,0);
  local_res10 = (float)CONCAT31(local_res10._1_3_,cVar8);
  cVar9 = FUN_1803e9690(1,0,0);
  if (cVar9 != '\0') {
    FUN_1803dd930(0);
  }
  if (cVar8 != '\0') {
    *param_2 = *param_2 == 0;
  }
  lVar7 = DAT_180ca0a50;
  fVar19 = DAT_1808ac1f4;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar15 = *(longlong *)(*(longlong *)(lVar7 + 0x14f8) + 0x2c8);
  if (bVar17) {
    if (*(int *)(lVar7 + 0x1578) == 0) {
      bVar17 = false;
    }
    else {
      bVar17 = *(int *)(lVar7 + 0x1578) == *(int *)(lVar7 + 0x1ee8);
    }
    cVar8 = FUN_1803dd930(0);
    if ((bVar17 | *param_2) == 0) {
      if (cVar8 == '\0') {
        fVar20 = 0.0;
      }
      else {
        fVar20 = fVar19;
      }
    }
    else {
      fVar20 = fVar6;
    }
    local_11c = 0;
    local_118 = 0xffffffff;
    local_res18 = fVar10;
    local_128 = fVar20;
    local_124 = fVar20;
    local_120 = fVar20;
    FUN_18034a380(bVar17 | *param_2,local_100,&local_res18,&local_128);
    FUN_1802b3660(local_100[0] + 0x14,fVar20,DAT_1808ac118,0);
    uVar11 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##row_hover");
    fVar10 = (float)FUN_1802b3850(uVar11,bVar17,cVar8);
    if (0.0 < fVar10) {
      local_res20 = fVar24 - DAT_1809f72e4;
      local_110[2] = 1.0;
      local_110[0] = 0.0;
      local_res18 = DAT_1809f72e4 + fVar4;
      local_110[1] = fVar10 * DAT_1808ac1b0 * DAT_1808ac2cc;
      local_res1c = fVar5 + fVar3;
      pfVar13 = local_110;
      if (0.0 <= local_110[1]) {
        pfVar13 = local_110 + 1;
      }
      pfVar14 = local_110 + 2;
      if (local_110[1] <= fVar6) {
        pfVar14 = pfVar13;
      }
      in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffff00000000;
      local_res24 = fVar3;
      FUN_1803fe590(lVar15,&local_res20,&local_res18,
                    (int)(longlong)(*pfVar14 * DAT_1808acb94 + fVar19) << 0x18 |
                    DAT_180960f44 & 0xffffff,DAT_1808ac854,in_stack_fffffffffffffeb0);
      cVar8 = local_res10._0_1_;
    }
    else {
      cVar8 = local_res10._0_1_;
    }
  }
  fVar10 = DAT_1808ac948;
  auVar21._4_4_ = fVar5;
  auVar21._0_4_ = fVar5;
  auVar21._8_4_ = fVar5;
  auVar21._12_4_ = fVar5;
  auVar22._4_12_ = auVar21._4_12_;
  fVar24 = fVar4 - DAT_1808ac9fc;
  auVar22._0_4_ = (fVar5 - DAT_1808ac948) * fVar19 + fVar3;
  local_res18 = fVar24;
  fVar20 = (float)FUN_18053f0d0(auVar22._0_8_);
  fVar6 = DAT_1808ac85c;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffff00000000;
  local_res14 = fVar20 + fVar10;
  local_res10 = fVar4;
  local_res1c = fVar20;
  fVar10 = DAT_1808ac85c;
  FUN_1803fe590(lVar15,&local_res18,&local_res10,DAT_180960f18,DAT_1808ac85c,
                in_stack_fffffffffffffeb0);
  uVar11 = (undefined4)(in_stack_fffffffffffffeb0 >> 0x20);
  if (0.0 < fVar18) {
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffff00000000;
    fVar10 = fVar6;
    FUN_1803fe590(lVar15,&local_res18,&local_res10,
                  (int)(longlong)((float)(DAT_1809f54bc >> 0x18) * fVar18 + fVar19) << 0x18 |
                  DAT_1809f54bc & 0xffffff,fVar6,in_stack_fffffffffffffeb0);
    uVar11 = (undefined4)(in_stack_fffffffffffffeb0 >> 0x20);
  }
  uVar12 = FUN_1802b38e0(DAT_180960f10,DAT_180960f14,fVar18);
  local_res14 = fVar20 + fVar6;
  local_res10 = fVar24 + DAT_1808ac540 + DAT_1808ac830 + fVar18 * _DAT_1808ac8bc;
  if ((uVar12 & 0xff000000) != 0) {
    fVar10 = DAT_1808ac7b8;
    FUN_1803fddf0(lVar15,&local_res10,DAT_1808ac830,0,DAT_1808ac7b8,CONCAT44(uVar11,0x17));
    FUN_1803fd460(lVar15,*(undefined8 *)(lVar15 + 0x58),*(undefined4 *)(lVar15 + 0x50),uVar12);
    *(undefined4 *)(lVar15 + 0x50) = 0;
  }
  FUN_1802bfa60(param_2);
  lVar15 = FUN_1800fbe90(param_2);
  if (lVar15 != 0) {
    uVar16 = 0;
    FUN_180313700(param_1,lVar15,1,0,(uint)fVar10 & 0xffffff00,0,
                  in_stack_fffffffffffffeb8 & 0xffffffff00000000);
    FUN_1802bf2c0(param_1,lVar15,0,0,0,uVar16 & 0xffffffff00000000,&DAT_18058b643,0);
  }
  lVar15 = DAT_180ca0a50;
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar15 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  DAT_1809f5b50._0_4_ = fVar24 - DAT_1808ac7ac;
  *(undefined1 *)(*(longlong *)(lVar15 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar15 + 4);
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar15 + 0x14f8) + 0x10);
  DAT_1809f5b48 = fVar3;
  DAT_1809f5b4c = fVar5;
  DAT_1809f5b50._4_4_ = fVar23;
  FUN_1802baa50(&local_f0);
  FUN_180322470(param_1);
  return cVar8;
}



/* ===== 1802c12a0 FUN_1802c12a0 ===== */

void FUN_1802c12a0(void)

{
  undefined4 uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  FUN_18033e3a0();
  return;
}



/* ===== 1802c12b0 FUN_1802c12b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1802c12b0(float *param_1,undefined8 param_2,float param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined1 local_80 [120];
  
  pfVar6 = (float *)FUN_1802b9e90(local_80);
  fVar8 = *pfVar6;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  fVar4 = pfVar6[3];
  uVar1 = *(undefined8 *)(pfVar6 + 4);
  if ((DAT_180cd0e6d == '\0') || ((float)uVar1 <= fVar8)) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = DAT_1808ac9bc;
  }
  DAT_180cd0e6d = 0;
  local_98 = fVar8;
  fStack_94 = fVar2;
  fStack_90 = fVar3;
  fStack_8c = fVar4;
  local_88 = uVar1;
  if (param_3 < 0.0) {
    if (DAT_180cd048d == '\0') {
      if (DAT_1809f72e0 == '\0') {
        fVar7 = fVar8;
      }
      else {
        fVar7 = DAT_1809f72e4 + DAT_1809f72f0;
      }
      fVar7 = (fVar3 - fVar7) / _DAT_1808ac590 + DAT_1808ac8b0;
    }
    else {
      fVar7 = fVar3 - fVar8;
    }
    param_3 = (float)FUN_18053f0d0(fVar7);
  }
  lVar5 = DAT_180ca0a50;
  param_3 = param_3 - DAT_181107670;
  DAT_181107670 = 0.0;
  param_3 = param_3 - fVar9;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar5 + 4);
  fVar7 = fVar3 - param_3;
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar5 + 0x14f8) + 0x10);
  DAT_1809f5b50._0_4_ = fVar7 - DAT_1808ac7ac;
  DAT_1809f5b48 = fVar2;
  DAT_1809f5b4c = fVar4;
  DAT_1809f5b50._4_4_ = fVar8;
  FUN_1802baa50(&local_98);
  fVar9 = fVar4 - DAT_1808ac97c;
  *param_1 = fVar8;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar4;
  param_1[6] = fVar7;
  *(undefined8 *)(param_1 + 4) = uVar1;
  fVar8 = (float)FUN_18053f0d0(fVar9 * DAT_1808ac1f4 + fVar2);
  param_1[8] = param_3;
  param_1[7] = fVar8;
  param_1[9] = 23.706;
  return param_1;
}



/* ===== 1802c1490 FUN_1802c1490 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1802c1490(longlong *param_1,int param_2)

{
  longlong *_Str;
  undefined **ppuVar1;
  longlong lVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined8 *******pppppppuVar5;
  size_t sVar6;
  ulonglong uVar7;
  char *_Str_00;
  longlong **pplVar8;
  undefined1 auStack_a8 [32];
  size_t local_88;
  longlong *local_70;
  char *local_68;
  longlong *local_60;
  undefined8 *******local_58;
  longlong lStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a8;
  ppuVar1 = (undefined **)&DAT_1805e7ab0;
  do {
    local_60 = param_1;
    if (*(int *)ppuVar1 == param_2) {
      _Str_00 = ppuVar1[1];
      if (_Str_00 != (char *)0x0) goto LAB_1802c1659;
      break;
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != &PTR_DAT_1805e7ce0);
  ppuVar1 = (undefined **)&DAT_1806599b0;
  while (*(int *)ppuVar1 != param_2) {
    ppuVar1 = ppuVar1 + 2;
    if (ppuVar1 == &PTR_DAT_180659a10) {
      lVar2 = FUN_180280c60(param_2);
      if (lVar2 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_180024b50(&local_58,lVar2 + 8);
        local_70 = (longlong *)0x1806de5e0;
        local_68 = "item_";
        pplVar8 = &local_70;
        do {
          _Str = *pplVar8;
          sVar3 = strlen((char *)_Str);
          pppppppuVar5 = &local_58;
          if (0xf < uStack_40) {
            pppppppuVar5 = local_58;
          }
          local_88 = sVar3;
          for (uVar4 = FUN_180068d80(pppppppuVar5,local_48,0,_Str); uVar4 != 0xffffffffffffffff;
              uVar4 = FUN_180068d80(pppppppuVar5,uVar7,uVar4,_Str)) {
            if (local_48 < uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_18002a1a0();
            }
            sVar6 = sVar3;
            if (local_48 - uVar4 < sVar3) {
              sVar6 = local_48 - uVar4;
            }
            pppppppuVar5 = &local_58;
            if (0xf < uStack_40) {
              pppppppuVar5 = local_58;
            }
            uVar7 = local_48 - sVar6;
            FUN_180540530((longlong)pppppppuVar5 + uVar4,sVar6 + (longlong)pppppppuVar5 + uVar4,
                          (uVar7 - uVar4) + 1);
            local_48 = uVar7;
            local_88 = strlen((char *)_Str);
            pppppppuVar5 = &local_58;
            if (0xf < uStack_40) {
              pppppppuVar5 = local_58;
            }
          }
          pplVar8 = pplVar8 + 1;
        } while (pplVar8 != &local_60);
        *param_1 = (longlong)local_58;
        param_1[1] = lStack_50;
        param_1[2] = local_48;
        param_1[3] = uStack_40;
      }
      return param_1;
    }
  }
  _Str_00 = ppuVar1[1];
LAB_1802c1659:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar3 = strlen(_Str_00);
  FUN_1800133a0(param_1,_Str_00,sVar3);
  return param_1;
}



/* ===== 1802c16b0 FUN_1802c16b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1802c16b0(longlong *param_1,undefined8 param_2,float param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [24];
  undefined1 local_b0 [16];
  longlong local_a0;
  ulonglong local_90;
  
  local_90 = DAT_180919500 ^ (ulonglong)auStack_e8;
  FUN_1802c1490(local_b0);
  fVar9 = DAT_1808ac34c;
  if (local_a0 != 0) {
    if (DAT_180cd0fd8 == '\0') {
      fVar7 = DAT_1808ac34c;
    }
    else {
      fVar7 = DAT_1809f7440;
    }
    fVar8 = fVar7 * DAT_1808ac3d4;
    if (fVar7 * DAT_1808ac3d4 <= DAT_1808ac540) {
      fVar8 = DAT_1808ac540;
    }
    plVar5 = (longlong *)FUN_18039f3d0(local_c8,local_b0,(int)(fVar8 * param_3 + DAT_1808ac1f4));
    lVar2 = *plVar5;
    if ((((lVar2 != 0) && (lVar3 = plVar5[1], 0 < (int)lVar3)) &&
        (iVar1 = *(int *)((longlong)plVar5 + 0xc), 0 < iVar1)) &&
       ((fVar7 = *(float *)(plVar5 + 2), 0.0 < fVar7 &&
        (fVar8 = *(float *)((longlong)plVar5 + 0x14), 0.0 < fVar8)))) {
      if (DAT_180cd0fd8 != '\0') {
        fVar9 = DAT_1809f7440;
      }
      fVar11 = DAT_1808ac000;
      if (DAT_1808ac000 <= fVar9) {
        fVar11 = fVar9;
      }
      iVar6 = (int)(fVar11 * param_3 + DAT_1808ac1f4);
      iVar4 = 1;
      if (1 < iVar6) {
        iVar4 = iVar6;
      }
      fVar10 = (float)iVar4;
      fVar9 = (float)FUN_18053ef70((fVar10 * fVar7) / fVar8);
      if (param_4 <= 0.0) {
        fVar9 = fVar9 / fVar11;
        param_4 = fVar10 / fVar11;
      }
      else {
        fVar9 = (fVar9 * param_4) / fVar10;
      }
      *param_1 = lVar2;
      *(int *)(param_1 + 1) = (int)lVar3;
      *(int *)((longlong)param_1 + 0xc) = iVar1;
      *(float *)(param_1 + 2) = fVar7;
      *(float *)((longlong)param_1 + 0x14) = fVar8;
      *(float *)(param_1 + 3) = fVar9;
      *(float *)((longlong)param_1 + 0x1c) = param_4;
      goto LAB_1802c184e;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
LAB_1802c184e:
  FUN_18000f890(local_b0);
  return param_1;
}



/* ===== 1802c18a0 FUN_1802c18a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1802c18a0(byte *param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  byte *******pppppppbVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  byte *local_70;
  byte *******local_68 [2];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_98;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0xf;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = 0;
  local_78 = 1;
  iVar7 = 0;
  local_70 = param_1;
  do {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
      pbVar1 = param_1;
    }
    else {
      pbVar1 = *(byte **)param_1;
    }
    *pbVar1 = 0;
    bVar8 = false;
    uVar4 = 0;
    if (param_4 < 1) {
      return param_1;
    }
    do {
      if (bVar8) goto LAB_1802c1a6b;
      if (**(char **)(param_3 + uVar4 * 8) != '\0') {
        if (*(longlong *)(param_1 + 0x10) != 0) {
          FUN_1800134a0(param_1,&DAT_1806f0594);
        }
        FUN_1802b3fe0(local_68,*(undefined8 *)(param_2 + uVar4 * 8));
        if (iVar7 == 1) {
          if (local_58 != 0) {
            pppppppbVar2 = (byte *******)local_68;
            if (0xf < local_50) {
              pppppppbVar2 = local_68[0];
            }
            FUN_1800134a0(param_1,pppppppbVar2);
          }
        }
        else {
          pppppppbVar2 = (byte *******)local_68;
          if (0xf < local_50) {
            pppppppbVar2 = local_68[0];
          }
          FUN_1800134a0(param_1,pppppppbVar2);
          uVar5 = 0;
          if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
            pbVar1 = param_1;
          }
          else {
            pbVar1 = *(byte **)param_1;
          }
          pbVar6 = pbVar1 + *(longlong *)(param_1 + 0x10);
          for (; pbVar1 != pbVar6; pbVar1 = pbVar1 + 1) {
            uVar5 = uVar5 + ((*pbVar1 & 0xc0) != 0x80);
          }
          bVar8 = 0xe < uVar5;
        }
        FUN_18000f890(local_68);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < param_4);
    if (!bVar8) {
      return param_1;
    }
LAB_1802c1a6b:
    iVar7 = iVar7 + 1;
    if (1 < iVar7) {
      return param_1;
    }
  } while( true );
}



/* ===== 1802c1ab0 FUN_1802c1ab0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802c1ab0(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  char ****ppppcVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1e8 [32];
  float *local_1c8;
  char ****local_1c0;
  char ****local_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  float local_188;
  float local_184;
  float local_180;
  undefined8 local_178;
  float local_170 [4];
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined8 local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  longlong local_128 [2];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  char ****local_e0 [2];
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  FUN_1803e89e0();
  DAT_180cd0e6d = 0;
  fVar9 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##row_hover");
  uVar16 = (((((ulonglong)((uint)fVar9 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)((uint)fVar9 >> 8 & 0xff)) * 0x100000001b3 ^
            (ulonglong)((uint)fVar9 >> 0x10 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((uint)fVar9 >> 0x18)) * 0x100000001b3 & DAT_181107640;
  lVar13 = *(longlong *)(DAT_181107628 + 8 + uVar16 * 0x10);
  if (lVar13 == DAT_181107618) {
LAB_1802c1bcb:
    lVar13 = DAT_181107618;
  }
  else {
    fVar21 = *(float *)(lVar13 + 0x10);
    while (fVar9 != fVar21) {
      if (lVar13 == *(longlong *)(DAT_181107628 + uVar16 * 0x10)) goto LAB_1802c1bcb;
      lVar13 = *(longlong *)(lVar13 + 8);
      fVar21 = *(float *)(lVar13 + 0x10);
    }
    if (lVar13 == 0) goto LAB_1802c1bcb;
  }
  if (lVar13 == DAT_181107618) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined4 *)(lVar13 + 0x14);
  }
  DAT_1811074b0 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar18);
  pfVar11 = (float *)FUN_1802b9e90(&local_160,param_1);
  lVar6 = DAT_180ca0a50;
  local_108 = *pfVar11;
  local_138 = pfVar11[1];
  fStack_100 = pfVar11[2];
  local_184 = pfVar11[3];
  local_148 = *(undefined8 *)(pfVar11 + 4);
  DAT_1811074b0 = 0;
  local_188 = (local_108 - (float)((ulonglong)local_148 >> 0x20)) - DAT_1809f72e4;
  local_180 = local_184 + local_138;
  fVar21 = DAT_1809f72e4 + fStack_100;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar6 + 0x14f8);
  local_178 = CONCAT44(local_138,local_188);
  *(ulonglong *)(lVar13 + 0x118) = CONCAT44(local_138,local_188);
  *(undefined1 *)(lVar13 + 0x159) = 1;
  puVar1 = (uint *)(lVar6 + 0x1eb4);
  *puVar1 = *puVar1 | 0x4000;
  local_188 = fVar21 - local_188;
  fStack_134 = local_138;
  fStack_130 = local_138;
  fStack_12c = local_138;
  local_118 = local_184;
  fStack_114 = local_184;
  fStack_110 = local_184;
  fStack_10c = local_184;
  fStack_104 = local_138;
  fStack_fc = local_184;
  local_f8 = local_108;
  fStack_f4 = local_138;
  fStack_f0 = fStack_100;
  fStack_ec = local_184;
  local_e8 = local_148;
  cVar7 = FUN_180415e30("##row",&local_188,0);
  iVar10 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##list");
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar13 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar13 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar10) ||
       (*(char *)(lVar13 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_1802c1d27;
  }
  else {
LAB_1802c1d27:
    cVar8 = FUN_1803dd930(0);
    bVar2 = false;
    if (cVar8 == '\0') goto LAB_1802c1d34;
  }
  bVar2 = true;
LAB_1802c1d34:
  fVar4 = DAT_1808ac34c;
  fVar3 = DAT_1808ac1f4;
  if ((*(int *)(DAT_180ca0a50 + 0x1578) == 0) ||
     (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) {
    if (bVar2) {
      fVar17 = DAT_1808ac1f4;
    }
    else {
      fVar17 = 0.0;
    }
  }
  else {
    fVar17 = DAT_1808ac34c;
  }
  local_154 = 0;
  local_150 = 0xffffffff;
  local_188 = fVar9;
  local_160 = fVar17;
  local_15c = fVar17;
  local_158 = fVar17;
  FUN_18034a380(DAT_180ca0a50,local_128,&local_188,&local_160);
  fVar9 = (float)FUN_1802b3660(local_128[0] + 0x14,fVar17,DAT_1808ac118,0);
  cVar8 = FUN_1803e9690(1,0,0);
  if ((cVar8 == '\0') || (cVar8 = FUN_1803dd930(0), cVar8 == '\0')) {
    DAT_180cd0ebc = 0;
  }
  else {
    DAT_180cd0ebc = 1;
  }
  lVar13 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x14f8) + 0x2c8);
  fVar17 = (float)FUN_18053fc00(DAT_1808ac84c);
  FUN_1802b3fe0(local_e0,param_2);
  uVar18 = DAT_1808acd08;
  if (local_d0 == 0) {
    fVar20 = 0.0;
  }
  else {
    local_1c0 = (char ****)local_e0;
    if (0xf < local_c8) {
      local_1c0 = local_e0[0];
    }
    local_198 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1b8 = (char ****)0x0;
    local_1c8 = (float *)((ulonglong)local_1c8 & 0xffffffff00000000);
    FUN_18040a2f0(&local_188,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
    fVar20 = (float)FUN_18053fc00(local_188 + DAT_1808ac2f0);
  }
  fVar19 = fVar21 - DAT_1809f72e4;
  if (0.0 < fVar9) {
    local_170[2] = 1.0;
    local_170[0] = 0.0;
    local_170[1] = fVar9 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_184 = local_180;
    pfVar11 = local_170;
    if (0.0 <= local_170[1]) {
      pfVar11 = local_170 + 1;
    }
    pfVar12 = local_170 + 2;
    if (local_170[1] <= fVar4) {
      pfVar12 = pfVar11;
    }
    local_1c0 = (char ****)((ulonglong)local_1c0 & 0xffffffff00000000);
    local_1c8 = (float *)CONCAT44(local_1c8._4_4_,DAT_1808ac854);
    local_188 = fVar21;
    FUN_1803fe590(lVar13,&local_178,&local_188,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar12 * DAT_1808acb94 + fVar3) << 0x18);
  }
  fVar4 = local_118;
  fVar9 = local_138;
  local_188 = fVar19 - fVar17 * fVar3;
  local_184 = local_118 * fVar3 + local_138;
  local_1b8 = (char ****)CONCAT44(local_1b8._4_4_,DAT_180960ef8);
  local_1c0 = (char ****)CONCAT44(local_1c0._4_4_,DAT_1808ac8d4);
  local_1c8 = &local_188;
  FUN_1802b6e90(lVar13,"nl_glyph_angle_right",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 320 512\" width=\"320\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M278 234C291 246 291 267 278 279L118 439C106 451 85 451 73 439C60 427 60 406 73 394L210 256L73 119C60 107 60 86 73 74C85 61 106 61 118 74L278 234L278 234ZM278 234Z\"/></svg>"
                ,DAT_1808acbc0);
  uVar5 = DAT_180960ef8;
  if (local_d0 == 0) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = fVar20 + DAT_1808ac658;
  }
  fVar20 = (fVar19 - fVar17) - fVar20;
  if (local_d0 != 0) {
    ppppcVar14 = (char ****)local_e0;
    if (0xf < local_c8) {
      ppppcVar14 = local_e0[0];
    }
    local_188 = fVar20;
    local_184 = (float)FUN_18053f0d0((fVar4 - DAT_1808ac930) * fVar3);
    local_184 = local_184 + fVar9;
    if ((((uVar5 & 0xff000000) != 0) && (ppppcVar14 != (char ****)0x0)) &&
       (*(char *)ppppcVar14 != '\0')) {
      local_138 = *(float *)(lVar13 + 0x60);
      fStack_134 = *(float *)(lVar13 + 100);
      fStack_130 = *(float *)(lVar13 + 0x68);
      fStack_12c = *(float *)(lVar13 + 0x6c);
      local_1a0 = 0;
      local_1a8 = local_1a8 & 0xffffffff00000000;
      local_1b0 = 0;
      local_1c0 = (char ****)&local_138;
      local_1c8 = (float *)CONCAT44(local_1c8._4_4_,uVar5);
      local_1b8 = ppppcVar14;
      FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar13 + 0x38) + 0x18),lVar13,DAT_1808ac930,
                    &local_188);
    }
  }
  lVar13 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(undefined4 *)(lVar13 + 4);
  DAT_1809f5b40 = *(undefined4 *)(*(longlong *)(lVar13 + 0x14f8) + 0x10);
  DAT_1809f5b48 = fVar9;
  DAT_1809f5b4c = fVar4;
  DAT_1809f5b50._0_4_ = (float)FUN_18053ef70(fVar20);
  DAT_1809f5b50._4_4_ = local_108;
  FUN_1802baa50(&local_f8);
  FUN_1802b9bd0();
  DAT_1809f5b50._0_4_ = fVar20 - DAT_1808ac7ac;
  DAT_181106f00 = 0;
  _DAT_181107080 = (float)local_148 + DAT_1808ac838;
  _DAT_181107084 = local_180;
  if (cVar7 != '\0') {
    FUN_1802b4d80("##list");
  }
  cVar8 = DAT_180cd0f07;
  cVar7 = DAT_180cd0d55;
  lVar13 = DAT_180ca0a50;
  DAT_180cd0d55 = 0;
  DAT_180cd0f07 = 0;
  if (cVar8 == '\0') {
    if (cVar7 != '\0') {
      uVar18 = DAT_1808acbb4;
    }
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 0x10;
    *(undefined8 *)(lVar13 + 0x1f84) = 0x430c0000;
    *(undefined4 *)(lVar13 + 0x1f8c) = 0x7f7fffff;
    *(undefined4 *)(lVar13 + 0x1f90) = uVar18;
    *(undefined8 *)(lVar13 + 0x1f98) = 0;
    *(undefined8 *)(lVar13 + 0x1fa0) = 0;
  }
  local_188 = fVar21;
  local_184 = local_180;
  FUN_1802b5160("##list",&local_178,&local_188);
  DAT_180cd04ac = 1;
  DAT_180cd04ad = 1;
  local_178 = 0x40c0000040c00000;
  cVar7 = FUN_1802b5260("##list",&local_178);
  if (cVar7 == '\0') {
    iVar10 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar10 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar10 + -1;
    }
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  FUN_18000f890(local_e0);
  return uVar15;
}



/* ===== 1802c22b0 FUN_1802c22b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802c22b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  uint local_res18 [4];
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined8 local_30;
  
  if ((DAT_1809f72e0 != '\0') && (DAT_1809f72e2 == '\0')) {
    uVar6 = FUN_1802c1ab0();
    return uVar6;
  }
  FUN_1803e89e0();
  local_res18[0] = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##label_hover");
  uVar10 = (((((ulonglong)(local_res18[0] & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(local_res18[0] >> 8 & 0xff)) * 0x100000001b3 ^
            (ulonglong)(local_res18[0] >> 0x10 & 0xff)) * 0x100000001b3 ^
           (ulonglong)(local_res18[0] >> 0x18)) * 0x100000001b3 & DAT_181107640;
  lVar7 = *(longlong *)(DAT_181107628 + 8 + uVar10 * 0x10);
  if (lVar7 == DAT_181107618) {
LAB_1802c23b3:
    lVar7 = DAT_181107618;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0x10);
    while (local_res18[0] != uVar2) {
      if (lVar7 == *(longlong *)(DAT_181107628 + uVar10 * 0x10)) goto LAB_1802c23b3;
      lVar7 = *(longlong *)(lVar7 + 8);
      uVar2 = *(uint *)(lVar7 + 0x10);
    }
    if (lVar7 == 0) goto LAB_1802c23b3;
  }
  if (lVar7 == DAT_181107618) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(lVar7 + 0x14);
  }
  DAT_1811074b0 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar11);
  puVar8 = (undefined8 *)FUN_1802c12b0(&local_78,param_1,DAT_1808acda0);
  DAT_1811074b0 = 0;
  local_50 = *puVar8;
  uStack_48 = puVar8[1];
  local_40 = *(undefined4 *)(puVar8 + 2);
  uStack_3c = *(undefined4 *)((longlong)puVar8 + 0x14);
  uStack_38 = *(undefined4 *)(puVar8 + 3);
  fStack_34 = *(float *)((longlong)puVar8 + 0x1c);
  local_30 = puVar8[4];
  cVar3 = FUN_1802b8490((int)local_30,param_2,&uStack_38,&local_30);
  cVar4 = FUN_1803dd930(0);
  if (cVar4 == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = DAT_1808ac34c;
  }
  local_68 = 0xffffffff;
  local_6c = 0;
  local_78 = uVar11;
  local_74 = uVar11;
  local_70 = uVar11;
  FUN_18034a380(extraout_XMM0_Da,local_88,local_res18,&local_78);
  FUN_1802b3660(local_88[0] + 0x14,uVar11,DAT_1808ac118,0);
  DAT_181106f00 = 0;
  if (cVar4 != '\0') {
    iVar5 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##list");
    lVar7 = DAT_180ca0a50;
    if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
      lVar9 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
      if ((*(int *)(lVar9 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == iVar5) &&
         (*(char *)(lVar9 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == '\0'))
      goto LAB_1802c2546;
    }
    if (*(float *)(DAT_180ca0a50 + 0x120) != 0.0) {
      DAT_181106f00 = 1;
      if (0.0 < *(float *)(DAT_180ca0a50 + 0x120)) {
        DAT_181106f00 = 0xffffffff;
      }
      puVar1 = (undefined4 *)(DAT_180ca0a50 + 0x1ee8);
      *(undefined4 *)(DAT_180ca0a50 + 0x1d08) = *puVar1;
      *(undefined4 *)(lVar7 + 0x1d04) = *puVar1;
      *(undefined2 *)(lVar7 + 0x1d0c) = 0;
    }
  }
LAB_1802c2546:
  if (cVar3 != '\0') {
    FUN_1802b4d80("##list");
  }
  cVar3 = FUN_1803e9690(1,0,0);
  if ((cVar3 == '\0') || (cVar3 = FUN_1803dd930(0), cVar3 == '\0')) {
    DAT_180cd0ebc = 0;
  }
  else {
    DAT_180cd0ebc = 1;
  }
  _DAT_181107080 = uStack_38;
  _DAT_181107084 = local_30._4_4_ + fStack_34 + DAT_1808ac710;
  cVar3 = FUN_1802b8820(&uStack_38,&local_30);
  if (cVar3 != '\0') {
    return 1;
  }
  iVar5 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar5 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    return 0;
  }
  *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar5 + -1;
  return 0;
}



/* ===== 1802c2640 FUN_1802c2640 ===== */

undefined8 FUN_1802c2640(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [64];
  
  lVar3 = DAT_1811071b0;
  iVar8 = *param_2;
  if ((iVar8 < 0) || (param_4 <= iVar8)) {
    puVar7 = &DAT_18058b643;
  }
  else {
    puVar7 = *(undefined1 **)(param_3 + (longlong)iVar8 * 8);
  }
  iVar8 = 0;
  DAT_1811071b0 = 0;
  cVar4 = FUN_1802c22b0(param_1,puVar7);
  uVar9 = 0;
  if ((DAT_181106f00 != 0) && (0 < param_4)) {
    uVar9 = 1;
    iVar5 = *param_2 + DAT_181106f00;
    DAT_181106f00 = 0;
    *param_2 = (iVar5 % param_4 + param_4) % param_4;
  }
  uVar2 = DAT_1808aca80;
  uVar1 = DAT_1808ac8b0;
  if (cVar4 != '\0') {
    if (0 < param_4) {
      if (lVar3 == 0) {
        do {
          FUN_1803e8a70(iVar8);
          cVar4 = FUN_1802b74f0(*(undefined8 *)(param_3 + (longlong)iVar8 * 8),iVar8 == *param_2,0,0
                               );
          if (cVar4 != '\0') {
            *param_2 = iVar8;
            uVar9 = 1;
            FUN_1803ee1f0();
          }
          iVar5 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar5 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar5 + -1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_4);
      }
      else {
        uVar10 = 0;
        do {
          iVar8 = (int)uVar10;
          FUN_1803e8a70(uVar10);
          puVar6 = (undefined4 *)FUN_1802c16b0(local_68,*(undefined4 *)(lVar3 + uVar10 * 4),uVar1,0)
          ;
          local_78 = *(undefined8 *)(puVar6 + 4);
          uStack_70 = *(undefined8 *)(puVar6 + 6);
          local_88 = *puVar6;
          uStack_84 = puVar6[1];
          uStack_80 = puVar6[2];
          uStack_7c = puVar6[3];
          FUN_1803320b0(&local_88,uVar2);
          FUN_1803ec6c0(0,0);
          DAT_1811071a8 = 0x42480000;
          cVar4 = FUN_1802b74f0(*(undefined8 *)(param_3 + uVar10 * 8),iVar8 == *param_2,0,0);
          if (cVar4 != '\0') {
            *param_2 = iVar8;
            uVar9 = 1;
            FUN_1803ee1f0();
          }
          iVar5 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar5 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar5 + -1;
          }
          uVar10 = (ulonglong)(iVar8 + 1U);
        } while ((int)(iVar8 + 1U) < param_4);
      }
    }
    FUN_1802b5590();
    iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar8 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
    }
  }
  DAT_180cd0ebc = 0;
  FUN_1803e89e0(param_1);
  FUN_1802bff20(param_1,param_2,param_3,param_4);
  iVar8 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar8 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar8 + -1;
  }
  FUN_180322470(param_1);
  return uVar9;
}



/* ===== 1802c2910 FUN_1802c2910 ===== */

undefined1 FUN_1802c2910(undefined8 param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  char cVar2;
  code *pcVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  size_t sVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  
  puVar13 = auStack_88;
  local_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
  cVar2 = *param_3;
  do {
    if (cVar2 == '\0') {
LAB_1802c2a91:
      *(undefined8 *)(puVar13 + -8) = 0x1802c2aab;
      uVar4 = FUN_1802c2640(param_1,param_2,*(longlong *)(puVar13 + 0x20),
                            (longlong)puVar7 - *(longlong *)(puVar13 + 0x20) >> 3 & 0xffffffff);
      uVar14 = *(ulonglong *)(puVar13 + 0x20);
      if (uVar14 == 0) {
        return uVar4;
      }
      uVar11 = ((longlong)(*(longlong *)(puVar13 + 0x30) - uVar14) >> 3) * 8;
      if (0xfff < uVar11) {
        puVar1 = (ulonglong *)(uVar14 - 8);
        uVar14 = (uVar14 - *puVar1) - 8;
        if (uVar14 < 0x20) {
          uVar11 = uVar11 + 0x27;
          uVar14 = *puVar1;
        }
        else {
          uVar11 = 5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar13 = puVar13 + 8;
        }
      }
      *(undefined8 *)(puVar13 + -8) = 0x1802c2b01;
      thunk_FUN_1803d64e0(uVar14,uVar11);
      return uVar4;
    }
    if (puVar7 == puVar6) {
      uVar14 = (longlong)puVar7 - (longlong)local_68;
      lVar5 = (longlong)uVar14 >> 3;
      if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      uVar11 = lVar5 + 1;
      uVar15 = (longlong)puVar6 - (longlong)local_68 >> 3;
      if (0x1fffffffffffffff - (uVar15 >> 1) < uVar15) {
        uVar9 = 0x1fffffffffffffff;
      }
      else {
        uVar15 = (uVar15 >> 1) + uVar15;
        uVar9 = uVar11;
        if (uVar11 <= uVar15) {
          uVar9 = uVar15;
        }
        if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_18000d840();
        }
      }
      puVar6 = (undefined8 *)FUN_18000fb70(uVar9 * 8);
      uVar14 = uVar14 & 0xfffffffffffffff8;
      *(char **)((longlong)puVar6 + uVar14) = param_3;
      if (puVar7 == puStack_60) {
        lVar5 = (longlong)puStack_60 - (longlong)local_68;
        puVar10 = puVar6;
        puVar12 = local_68;
      }
      else {
        FUN_180540530(puVar6,local_68,(longlong)puVar7 - (longlong)local_68);
        lVar5 = (longlong)puStack_60 - (longlong)puVar7;
        puVar10 = (undefined8 *)(uVar14 + 8 + (longlong)puVar6);
        puVar12 = puVar7;
      }
      FUN_180540530(puVar10,puVar12,lVar5);
      if (local_68 != (undefined8 *)0x0) {
        uVar14 = ((longlong)local_58 - (longlong)local_68 >> 3) * 8;
        if (uVar14 < 0x1000) {
          puVar7 = local_68;
        }
        else {
          if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)local_68[-1]))) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar13 = auStack_80;
            goto LAB_1802c2a91;
          }
          uVar14 = uVar14 + 0x27;
          puVar7 = (undefined8 *)local_68[-1];
        }
        thunk_FUN_1803d64e0(puVar7,uVar14);
      }
      puVar7 = puVar6 + uVar11;
      local_58 = puVar6 + uVar9;
      local_68 = puVar6;
    }
    else {
      *puVar7 = param_3;
      puVar7 = puStack_60 + 1;
    }
    puVar6 = local_58;
    puStack_60 = puVar7;
    sVar8 = strlen(param_3);
    param_3 = param_3 + sVar8 + 1;
    cVar2 = *param_3;
  } while( true );
}



/* ===== 1802c2b30 FUN_1802c2b30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802c2b30(ulonglong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  size_t sVar11;
  undefined4 *puVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *******pppppppuVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined8 uVar21;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM7_Da;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [40];
  char local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined1 local_d0 [32];
  undefined8 *******local_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******local_a0;
  undefined8 ******ppppppuStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  puVar19 = auStack_118;
  puVar18 = auStack_118;
  local_70 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_d8 = DAT_181106e98;
  uVar21 = 0;
  DAT_181106e98 = 0;
  uVar16 = 0;
  local_e0 = param_1;
  if (0 < param_4) {
    do {
      FUN_1802bfa60(*(undefined8 *)(param_3 + uVar16 * 8));
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < param_4);
  }
  FUN_180313b40(param_1,param_2,param_3,param_4);
  if ((DAT_1809f72e0 == '\0') || (DAT_1809f72e2 != '\0')) {
    local_e8 = '\0';
  }
  else {
    local_e8 = '\x01';
  }
  ppppppuStack_a8 = (undefined8 ******)0x0;
  ppppppuVar13 = (undefined8 ******)0x0;
  local_a0 = (undefined8 ******)0x0;
  ppppppuStack_98 = (undefined8 ******)0xf;
  local_b0 = (undefined8 *******)0x0;
  bVar8 = 0;
  if (param_4 < 1) {
LAB_1802c2c79:
    iVar20 = (int)param_1;
    if (local_e8 != '\0') {
      pppppppuVar17 = (undefined8 *******)FUN_1802c18a0(&local_90,param_2,param_3,param_4);
      if (&local_b0 != (undefined8 ********)pppppppuVar17) {
        if ((undefined8 ******)0xf < ppppppuStack_98) {
          ppppppuVar13 = (undefined8 ******)((longlong)ppppppuStack_98 + 1);
          pppppppuVar14 = local_b0;
          if ((undefined8 ******)0xfff < ppppppuVar13) {
            pppppppuVar14 = (undefined8 *******)local_b0[-1];
            if (0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pppppppuVar14))) {
              pcVar7 = (code *)swi(0x29);
              (*pcVar7)(5);
              puVar18 = auStack_110;
              goto LAB_1802c2e45;
            }
            ppppppuVar13 = ppppppuStack_98 + 5;
          }
          thunk_FUN_1803d64e0(pppppppuVar14,ppppppuVar13);
        }
        local_b0 = (undefined8 *******)*pppppppuVar17;
        ppppppuStack_a8 = pppppppuVar17[1];
        local_a0 = pppppppuVar17[2];
        ppppppuStack_98 = pppppppuVar17[3];
        pppppppuVar17[2] = (undefined8 ******)0x0;
        pppppppuVar17[3] = (undefined8 ******)0xf;
        *(undefined1 *)pppppppuVar17 = 0;
      }
      FUN_18000f890(&local_90);
      ppppppuVar13 = local_a0;
      goto LAB_1802c2d16;
    }
  }
  else {
    param_1 = 0;
    bVar9 = 0;
    if (local_e8 != '\0') {
      iVar20 = 0;
      do {
        if (**(char **)(param_3 + (longlong)iVar20 * 8) != '\0') {
          bVar8 = 1;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < param_4);
      goto LAB_1802c2c79;
    }
    do {
      bVar8 = bVar9;
      if (**(char **)(param_3 + param_1 * 8) != '\0') {
        bVar8 = 1;
        if (ppppppuVar13 != (undefined8 ******)0x0) {
          FUN_1800134a0(&local_b0,&DAT_1806f0594,2);
        }
        pcVar4 = *(char **)(param_2 + param_1 * 8);
        sVar11 = strlen(pcVar4);
        FUN_1800134a0(&local_b0,pcVar4,sVar11);
        ppppppuVar13 = local_a0;
      }
      uVar15 = (int)param_1 + 1;
      param_1 = (ulonglong)uVar15;
      bVar9 = bVar8;
    } while ((int)uVar15 < param_4);
LAB_1802c2d16:
    if (ppppppuVar13 != (undefined8 ******)0x0) goto LAB_1802c2d31;
  }
  FUN_180029840(&local_b0,"select",6);
LAB_1802c2d31:
  uVar16 = local_e0;
  uVar21 = 0;
  DAT_180cd0d55 = local_e8;
  pppppppuVar17 = &local_b0;
  if ((undefined8 ******)0xf < ppppppuStack_98) {
    pppppppuVar17 = local_b0;
  }
  cVar10 = FUN_1802c22b0(local_e0,pppppppuVar17);
  if (cVar10 != '\0') {
    puVar19 = auStack_118;
    if (0 < param_4) {
      iVar20 = 0;
      pppppppuVar17 = (undefined8 *******)0x0;
      if (local_d8 == 0) {
        do {
          FUN_1803e8a70(iVar20);
          if (local_e8 != '\0') {
            DAT_1809f6f58 = (uint)bVar8;
          }
          cVar10 = FUN_1802b74f0(*(undefined8 *)(param_2 + (longlong)pppppppuVar17 * 8),0,
                                 **(undefined1 **)(param_3 + (longlong)pppppppuVar17 * 8),1);
          if (cVar10 != '\0') {
            pcVar4 = *(char **)(param_3 + (longlong)pppppppuVar17 * 8);
            *pcVar4 = *pcVar4 == '\0';
            uVar21 = 1;
          }
          cVar10 = FUN_1803e9690(1,0,0);
          if (cVar10 != '\0') {
            FUN_1803dd930(0);
          }
          FUN_1802bfbc0(*(undefined8 *)(param_2 + (longlong)pppppppuVar17 * 8));
          iVar3 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar3 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar3 + -1;
          }
          iVar20 = iVar20 + 1;
          pppppppuVar17 = (undefined8 *******)((longlong)pppppppuVar17 + 1);
        } while (iVar20 < param_4);
      }
      else {
        puVar18 = auStack_118;
        unaff_XMM6_Da = DAT_1808ac8b0;
        unaff_XMM7_Da = DAT_1808aca5c;
        do {
          *(undefined8 *)(puVar18 + -8) = 0x1802c2d97;
          FUN_1803e8a70(iVar20);
          uVar2 = *(undefined4 *)(local_d8 + (longlong)pppppppuVar17 * 4);
          *(undefined8 *)(puVar18 + -8) = 0x1802c2dad;
          puVar12 = (undefined4 *)FUN_1802c16b0(local_d0,uVar2,unaff_XMM6_Da,0);
          local_90 = *puVar12;
          uStack_8c = puVar12[1];
          uStack_88 = puVar12[2];
          uStack_84 = puVar12[3];
          local_80 = *(longlong *)(puVar12 + 4);
          uStack_78 = *(undefined8 *)(puVar12 + 6);
          *(undefined8 *)(puVar18 + -8) = 0x1802c2dc8;
          FUN_1803320b0(&local_90,unaff_XMM7_Da);
          *(undefined8 *)(puVar18 + -8) = 0x1802c2dd3;
          FUN_1803ec6c0(0,0);
          DAT_1811071a8 = 0x42280000;
          if (puVar18[0x30] != '\0') {
            DAT_1809f6f58 = (uint)bVar8;
          }
          uVar1 = **(undefined1 **)(param_3 + (longlong)pppppppuVar17 * 8);
          uVar5 = *(undefined8 *)(param_2 + (longlong)pppppppuVar17 * 8);
          *(undefined8 *)(puVar18 + -8) = 0x1802c2e08;
          cVar10 = FUN_1802b74f0(uVar5,0,uVar1,1);
          if (cVar10 != '\0') {
            pcVar4 = *(char **)(param_3 + (longlong)pppppppuVar17 * 8);
            *pcVar4 = *pcVar4 == '\0';
            uVar21 = 1;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1802c2e2a;
          cVar10 = FUN_1803e9690(1,0,0);
          if (cVar10 == '\0') {
LAB_1802c2e45:
          }
          else {
            *(undefined8 *)(puVar18 + -8) = 0x1802c2e35;
            cVar10 = FUN_1803dd930(0);
            if (cVar10 == '\0') goto LAB_1802c2e45;
          }
          uVar5 = *(undefined8 *)(param_3 + (longlong)pppppppuVar17 * 8);
          uVar6 = *(undefined8 *)(param_2 + (longlong)pppppppuVar17 * 8);
          *(undefined8 *)(puVar18 + -8) = 0x1802c2e55;
          FUN_1802bfbc0(uVar6,uVar5);
          iVar3 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar3 < 2) {
            *(undefined8 *)(puVar18 + -8) = 0x1802c2e7a;
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar3 + -1;
          }
          iVar20 = iVar20 + 1;
          pppppppuVar17 = (undefined8 *******)((longlong)pppppppuVar17 + 1);
        } while (iVar20 < param_4);
      }
      uVar16 = *(ulonglong *)(puVar18 + 0x38);
      puVar19 = puVar18;
    }
    *(undefined8 *)(puVar19 + -8) = 0x1802c2f56;
    FUN_1802b5590();
    iVar20 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar20 < 2) {
      *(undefined8 *)(puVar19 + -8) = 0x1802c2f7b;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar20 + -1;
    }
  }
  uVar1 = DAT_180cd0ebc;
  DAT_180cd0ebc = 0;
  *(undefined8 *)(puVar19 + -8) = 0x1802c2fa2;
  FUN_1802bd260(&local_90,param_3,param_4);
  if (local_80 != 0) {
    *(undefined8 *)(puVar19 + -8) = 0x1802c2fb2;
    FUN_1803e89e0(uVar16);
    puVar19[0x28] = uVar1;
    *(undefined8 *)(puVar19 + -8) = 0x1802c2fc8;
    FUN_1802c03e0(uVar16,&local_90,param_2,param_4);
    iVar20 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar20 < 2) {
      *(undefined8 *)(puVar19 + -8) = 0x1802c2fee;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar20 + -1;
    }
  }
  *(undefined8 *)(puVar19 + -8) = 0x1802c3002;
  FUN_18000f890(&local_90);
  *(undefined8 *)(puVar19 + -8) = 0x1802c300a;
  FUN_180322470(uVar16);
  *(undefined8 *)(puVar19 + -8) = 0x1802c3014;
  FUN_18000f890(&local_b0);
  *(undefined8 *)(puVar19 + -8) = 0x1802c3024;
  return uVar21;
}



/* ===== 1802c3050 FUN_1802c3050 ===== */

ulonglong FUN_1802c3050(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  
  local_58 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  uVar13 = 0;
  if (0 < param_4) {
    do {
      plVar7 = plStack_50;
      if (plStack_50 == local_48) {
        uVar8 = (longlong)plStack_50 - (longlong)local_58;
        lVar4 = (longlong)uVar8 >> 3;
        if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_1800118d0();
        }
        uVar1 = lVar4 + 1;
        uVar14 = (longlong)local_48 - (longlong)local_58 >> 3;
        if (0x1fffffffffffffff - (uVar14 >> 1) < uVar14) {
          uVar6 = 0x1fffffffffffffff;
        }
        else {
          uVar14 = (uVar14 >> 1) + uVar14;
          uVar6 = uVar1;
          if (uVar1 <= uVar14) {
            uVar6 = uVar14;
          }
          if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_18000d840();
          }
        }
        plVar5 = (longlong *)FUN_18000fb70(uVar6 * 8);
        uVar8 = uVar8 & 0xfffffffffffffff8;
        *(ulonglong *)((longlong)plVar5 + uVar8) = (ulonglong)uVar13 + param_3;
        if (plVar7 == plStack_50) {
          lVar4 = (longlong)plStack_50 - (longlong)local_58;
          plVar10 = plVar5;
          plVar9 = local_58;
        }
        else {
          FUN_180540530(plVar5,local_58,(longlong)plVar7 - (longlong)local_58);
          lVar4 = (longlong)plStack_50 - (longlong)plVar7;
          plVar10 = (longlong *)(uVar8 + 8 + (longlong)plVar5);
          plVar9 = plVar7;
        }
        FUN_180540530(plVar10,plVar9,lVar4);
        if (local_58 != (longlong *)0x0) {
          plVar10 = (longlong *)(((longlong)local_48 - (longlong)local_58 >> 3) * 8);
          if (plVar10 < (longlong *)0x1000) {
            plVar7 = local_58;
          }
          else {
            if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_58 + (-8 - local_58[-1]))) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar11 = auStack_70;
              goto LAB_1802c3252;
            }
            plVar10 = (longlong *)((longlong)plVar10 + 0x27);
            plVar7 = (longlong *)local_58[-1];
          }
          thunk_FUN_1803d64e0(plVar7,plVar10);
        }
        plStack_50 = plVar5 + uVar1;
        local_48 = plVar5 + uVar6;
        local_58 = plVar5;
      }
      else {
        *plStack_50 = (ulonglong)uVar13 + param_3;
        plStack_50 = plStack_50 + 1;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < param_4);
  }
  bVar3 = FUN_1802c2b30(param_1,param_2,local_58,param_4);
  puVar12 = auStack_78;
  puVar11 = auStack_78;
  plVar7 = (longlong *)(ulonglong)bVar3;
  if (local_58 != (longlong *)0x0) {
    uVar8 = ((longlong)local_48 - (longlong)local_58 >> 3) * 8;
    plVar10 = local_58;
    if (0xfff < uVar8) {
      plVar10 = (longlong *)((longlong)local_58 + (-8 - local_58[-1]));
      if (&DAT_0000001f < plVar10) {
LAB_1802c3252:
        uVar8 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar12 = puVar11 + 8;
      }
      else {
        uVar8 = uVar8 + 0x27;
        puVar12 = auStack_78;
        plVar10 = (longlong *)local_58[-1];
      }
    }
    *(undefined8 *)(puVar12 + -8) = 0x1802c3267;
    thunk_FUN_1803d64e0(plVar10,uVar8);
  }
  return (ulonglong)plVar7 & 0xff;
}



/* ===== 1802c3290 FUN_1802c3290 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1802c3290(undefined1 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined2 local_88;
  undefined1 local_86;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
  *param_1 = DAT_1809f72e0;
  param_1[1] = DAT_1809f72e1;
  param_1[2] = DAT_1809f72e2;
  *(undefined4 *)(param_1 + 4) = DAT_1809f72e4;
  *(undefined4 *)(param_1 + 8) = DAT_1809f72e8;
  *(undefined4 *)(param_1 + 0xc) = DAT_1809f72ec;
  *(undefined4 *)(param_1 + 0x10) = DAT_1809f72f0;
  *(float *)(param_1 + 0x14) = DAT_1809f72f4;
  *(undefined4 *)(param_1 + 0x18) = DAT_1809f72f8;
  *(undefined4 *)(param_1 + 0x1c) = DAT_1809f72fc;
  *(undefined4 *)(param_1 + 0x20) = DAT_1809f7300;
  *(undefined4 *)(param_1 + 0x24) = DAT_1809f7304;
  local_98 = param_1;
  FUN_180024b50(param_1 + 0x28,&DAT_1809f7308);
  uVar4 = DAT_1809f5b4c;
  uVar2 = DAT_1809f5b48;
  uVar1 = DAT_1809f5b44;
  *(undefined4 *)(param_1 + 0x48) = DAT_1809f5b40;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = DAT_1809f5b50;
  FUN_1802b9bd0();
  uVar1 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
  uVar2 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
  local_88 = 0x100;
  local_86 = 1;
  local_84 = DAT_1808ac8e4;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_64 = DAT_1808aca44;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_60 = 0;
  _DAT_1809f72e0 = 0x100;
  DAT_1809f72e2 = 1;
  DAT_1809f72e4 = DAT_1808ac8e4;
  _DAT_1809f72e8 = 0;
  DAT_1809f72f0 = 0;
  DAT_1809f72f4 = 0.0;
  DAT_1809f72f8 = 0;
  DAT_1809f72fc = 0;
  DAT_1809f7300 = 0;
  DAT_1809f7304 = DAT_1808aca44;
  FUN_18002ba60(&DAT_1809f7308,&local_60);
  FUN_18000f890(&local_60);
  lVar5 = DAT_180ca0a50;
  _DAT_1809f72e0 = 1;
  DAT_1809f72e2 = 0;
  DAT_1809f72e4 = 0x41400000;
  DAT_1809f7304 = 0x41fda5e3;
  lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((*(longlong *)(lVar3 + 0x1c8) != 0) ||
     (lVar6 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar6 = 0x250;
  }
  DAT_1809f72f4 = *(float *)(lVar6 + lVar3) - *(float *)(lVar3 + 0x118);
  DAT_1809f72f0 = uVar1;
  DAT_1809f72f8 = uVar2;
  DAT_1809f72fc = uVar2;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f7300 = *(undefined4 *)(*(longlong *)(lVar5 + 0x14f8) + 0x15c);
  DAT_180cd0e6e = 1;
  DAT_1811074d0 = *param_2;
  DAT_1811074d8 = param_2[1];
  _DAT_1811074e0 = param_2[2];
  return param_1;
}



/* ===== 1802c3560 FUN_1802c3560 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c3560(undefined1 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 local_res8;
  float local_resc;
  undefined4 local_14;
  
  FUN_1802b9bd0();
  lVar2 = DAT_180ca0a50;
  fVar4 = DAT_1809f72f8;
  uVar3 = DAT_1809f72f0;
  DAT_1811074d0 = 0;
  DAT_1811074d8 = 0;
  DAT_1811074e0 = 0;
  _DAT_1811074e4 = local_14;
  DAT_180cd0e6e = 0;
  fVar6 = DAT_1809f72fc - DAT_1809f72f8;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x14f8);
  *(undefined4 *)(lVar2 + 0x118) = uVar3;
  *(float *)(lVar2 + 0x11c) = fVar4;
  *(undefined1 *)(lVar2 + 0x159) = 1;
  local_res8 = DAT_1809f72f4;
  local_resc = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar6) {
    local_resc = fVar6;
  }
  FUN_1804174f0(&local_res8);
  DAT_1809f72e0 = *param_1;
  DAT_1809f72e1 = param_1[1];
  DAT_1809f72e2 = param_1[2];
  DAT_1809f72e4 = *(undefined4 *)(param_1 + 4);
  DAT_1809f72e8 = *(undefined4 *)(param_1 + 8);
  DAT_1809f72ec = *(undefined4 *)(param_1 + 0xc);
  DAT_1809f72f0 = *(undefined4 *)(param_1 + 0x10);
  DAT_1809f72f4 = *(undefined4 *)(param_1 + 0x14);
  DAT_1809f72f8 = *(float *)(param_1 + 0x18);
  DAT_1809f72fc = *(float *)(param_1 + 0x1c);
  DAT_1809f7300 = *(undefined4 *)(param_1 + 0x20);
  DAT_1809f7304 = *(undefined4 *)(param_1 + 0x24);
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (puVar1 != &DAT_1809f7308) {
    if (*(ulonglong *)(param_1 + 0x40) < 0x10) {
      puVar5 = puVar1;
    }
    else {
      puVar5 = (undefined8 *)*puVar1;
    }
    FUN_180029840(&DAT_1809f7308,puVar5,*(undefined8 *)(param_1 + 0x38));
  }
  DAT_1809f5b40 = *(undefined4 *)(param_1 + 0x48);
  DAT_1809f5b44 = *(undefined4 *)(param_1 + 0x4c);
  DAT_1809f5b48 = *(undefined4 *)(param_1 + 0x50);
  DAT_1809f5b4c = *(undefined4 *)(param_1 + 0x54);
  DAT_1809f5b50 = *(undefined8 *)(param_1 + 0x58);
  FUN_18000f890(puVar1);
  return;
}



/* ===== 1802c36f0 FUN_1802c36f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802c36f0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  longlong local_120;
  longlong local_118 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_128 = 0;
  local_120 = param_1;
  uVar1 = FUN_1804f3280(param_4);
  if (0x18 < param_3) {
    param_3 = 0x18;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_180540170(local_118,0,0xc0);
  if (0 < param_3) {
    uVar6 = 0;
    uVar4 = 1;
    do {
      lVar3 = (longlong)local_118 + uVar6 + 0xc0;
      *(bool *)lVar3 = (uVar1 & uVar4) != 0;
      local_118[uVar6] = lVar3;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    } while ((int)uVar5 < param_3);
  }
  FUN_1802c18a0(param_1,param_2,local_118,param_3);
  local_128 = 1;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar2 = FUN_1802b3fe0(local_40,"select");
    FUN_18002ba60(param_1,uVar2);
    FUN_18000f890(local_40);
  }
  return param_1;
}



/* ===== 1802c3810 FUN_1802c3810 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c3810(longlong *param_1)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float *pfVar12;
  float *pfVar13;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  
  puVar11 = auStack_88;
  local_68 = 0;
  lStack_60 = 0;
  pfVar13 = (float *)0x0;
  local_58 = 0;
  uVar5 = param_1[1] - *param_1 >> 3;
  if (uVar5 == 0) {
    pfVar6 = (float *)0x0;
    goto LAB_1802c38f5;
  }
  if (0x1fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  pfVar6 = (float *)FUN_18000fb70(uVar5 * 8);
  FUN_180540530(pfVar6,local_68,lStack_60 - local_68);
  puVar9 = auStack_88;
  puVar10 = auStack_88;
  puVar11 = auStack_88;
  if (local_68 != 0) {
    lVar7 = local_68;
    if ((ulonglong)((local_58 - local_68 >> 3) * 8) < 0x1000) {
LAB_1802c38cb:
      puVar10 = puVar9;
    }
    else {
      lVar7 = *(longlong *)(local_68 + -8);
      if (0x1f < (local_68 - lVar7) - 8U) {
        pcVar2 = (code *)swi(0x29);
        lVar7 = (*pcVar2)(5);
        puVar9 = auStack_80;
        goto LAB_1802c38cb;
      }
    }
    *(undefined8 *)(puVar10 + -8) = 0x1802c38d3;
    thunk_FUN_1803d64e0(lVar7);
    puVar11 = puVar10;
  }
  *(float **)(puVar11 + 0x20) = pfVar6;
  *(float **)(puVar11 + 0x28) = pfVar6;
  pfVar13 = pfVar6 + uVar5 * 2;
  *(float **)(puVar11 + 0x30) = pfVar13;
LAB_1802c38f5:
  uVar4 = _DAT_1808ade90;
  fVar3 = DAT_1808ac000;
  pfVar1 = (float *)param_1[1];
  pfVar8 = (float *)*param_1;
  pfVar12 = pfVar6;
  if (pfVar8 != pfVar1) {
    do {
      if (((pfVar12 == pfVar6) || (fVar3 <= (float)((uint)(pfVar6[-2] - *pfVar8) & uVar4))) ||
         (fVar3 <= (float)((uint)(pfVar6[-1] - pfVar8[1]) & uVar4))) {
        *(undefined8 *)(puVar11 + -8) = 0x1802c3946;
        FUN_18008b8c0(puVar11 + 0x20,pfVar8);
        pfVar6 = *(float **)(puVar11 + 0x28);
        pfVar12 = *(float **)(puVar11 + 0x20);
      }
      pfVar8 = pfVar8 + 2;
    } while (pfVar8 != pfVar1);
    pfVar13 = *(float **)(puVar11 + 0x30);
  }
  if (1 < (ulonglong)((longlong)pfVar6 - (longlong)pfVar12 >> 3)) {
    do {
      if ((fVar3 <= (float)((uint)(pfVar6[-2] - *pfVar12) & uVar4)) ||
         (fVar3 <= (float)((uint)(pfVar6[-1] - pfVar12[1]) & uVar4))) break;
      pfVar6 = pfVar6 + -2;
      *(float **)(puVar11 + 0x28) = pfVar6;
    } while (1 < (ulonglong)((longlong)pfVar6 - (longlong)pfVar12 >> 3));
  }
  if (param_1 != (longlong *)(puVar11 + 0x20)) {
    lVar7 = *param_1;
    *param_1 = (longlong)pfVar12;
    *(longlong *)(puVar11 + 0x20) = lVar7;
    lVar7 = param_1[1];
    param_1[1] = (longlong)pfVar6;
    *(longlong *)(puVar11 + 0x28) = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (longlong)pfVar13;
    *(longlong *)(puVar11 + 0x30) = lVar7;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1802c39ff;
  FUN_1800132b0(puVar11 + 0x20);
  return;
}



/* ===== 1802c3a20 FUN_1802c3a20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c3a20(float *param_1,float *param_2,float param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  float local_res18 [2];
  float local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0 [38];
  
  if (*param_4 != param_4[1]) {
    param_4[1] = *param_4;
  }
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar9 = param_2[1];
  fVar3 = *param_2;
  fVar10 = fVar9 - fVar1;
  fVar8 = fVar3 - fVar2;
  if (fVar8 <= fVar10) {
    fVar10 = fVar8;
  }
  local_c8[0] = fVar10 * DAT_1808ac1f4;
  pfVar4 = local_c8;
  if (param_3 <= fVar10 * DAT_1808ac1f4) {
    pfVar4 = local_res18;
  }
  fVar10 = *pfVar4;
  if (*pfVar4 <= 0.0) {
    fVar10 = 0.0;
  }
  local_res18[0] = param_3;
  if (0.0 < fVar10) {
    fVar8 = (float)FUN_18053ef70(fVar10 * DAT_1808ac27c);
    local_b0[0] = fVar2 + fVar10;
    local_b0[1] = fVar1 + fVar10;
    local_b0[2] = fVar3 - fVar10;
    local_b0[5] = fVar9 - fVar10;
    local_b0[6] = local_b0[0];
    local_c0 = _DAT_1808adc70;
    uStack_b8 = _UNK_1808adc78;
    iVar6 = 3;
    if (3 < (int)fVar8) {
      iVar6 = (int)fVar8;
    }
    lVar7 = 0;
    local_b0[3] = local_b0[1];
    local_b0[4] = local_b0[2];
    local_b0[7] = local_b0[5];
    do {
      if (-1 < iVar6) {
        iVar5 = 0;
        fVar1 = local_b0[lVar7 * 2];
        fVar2 = local_b0[lVar7 * 2 + 1];
        do {
          fVar9 = (float)FUN_180517200();
          local_res8 = fVar9 * fVar10 + fVar1;
          fVar9 = (float)FUN_180517790();
          local_resc = fVar9 * fVar10 + fVar2;
          FUN_18008b8c0(param_4,&local_res8);
          iVar5 = iVar5 + 1;
        } while (iVar5 <= iVar6);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 4);
    FUN_1802c3810(param_4);
  }
  else {
    FUN_18008b8c0(param_4,param_1);
    local_res8 = *param_2;
    local_resc = param_1[1];
    FUN_18008b8c0(param_4,&local_res8);
    FUN_18008b8c0(param_4,param_2);
    local_res8 = *param_1;
    local_resc = param_2[1];
    FUN_18008b8c0(param_4,&local_res8);
  }
  return;
}



/* ===== 1802c3c80 FUN_1802c3c80 ===== */

void FUN_1802c3c80(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fStack_10c;
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  
  FUN_18008b7d0(param_3);
  local_f0 = 0;
  lStack_e8 = 0;
  local_e0 = 0;
  uVar18 = param_2[1] - *param_2 >> 3;
  uVar17 = 0;
  if (uVar18 != 0) {
    lVar19 = 0;
    lVar20 = 0;
    do {
      lVar8 = *param_3;
      lVar9 = param_3[1];
      if (lVar8 == lVar9) break;
      lVar12 = *param_2;
      fVar1 = *(float *)(lVar12 + uVar17 * 8);
      fVar2 = *(float *)(lVar12 + 4 + uVar17 * 8);
      uVar17 = uVar17 + 1;
      fVar3 = *(float *)(lVar12 + (uVar17 % uVar18) * 8);
      fVar4 = *(float *)(lVar12 + 4 + (uVar17 % uVar18) * 8);
      if (&local_f0 == param_3) {
        lVar12 = lVar8;
        lVar13 = lVar9;
      }
      else {
        *param_3 = lVar20;
        param_3[1] = lVar19;
        lVar10 = param_3[2];
        param_3[2] = local_e0;
        lVar12 = lVar20;
        lVar13 = lVar19;
        lVar19 = lVar9;
        lVar20 = lVar8;
        local_f0 = lVar8;
        lStack_e8 = lVar9;
        local_e0 = lVar10;
      }
      if (lVar12 != lVar13) {
        param_3[1] = lVar12;
      }
      uVar16 = lVar19 - lVar20 >> 3;
      if (uVar16 != 0) {
        uVar15 = 0;
        do {
          uVar7 = *(undefined8 *)(lVar20 + uVar15 * 8);
          uVar15 = uVar15 + 1;
          uVar14 = uVar15 % (ulonglong)(lVar19 - lVar20 >> 3);
          fVar5 = *(float *)(lVar20 + uVar14 * 8);
          fVar6 = *(float *)(lVar20 + 4 + uVar14 * 8);
          fVar22 = fVar4 - fVar2;
          fVar21 = fVar3 - fVar1;
          fStack_10c = (float)((ulonglong)uVar7 >> 0x20);
          bVar11 = 0.0 <= fVar21 * (fStack_10c - fVar2) - fVar22 * ((float)uVar7 - fVar1);
          if (bVar11) {
            FUN_18008b8c0(param_3);
          }
          if (bVar11 != 0.0 <= fVar21 * (fVar6 - fVar2) - fVar22 * (fVar5 - fVar1)) {
            FUN_18008b8c0(param_3);
          }
        } while (uVar15 < uVar16);
      }
    } while (uVar17 < uVar18);
  }
  FUN_1802c3810(param_3);
  FUN_1800132b0(&local_f0);
  return;
}



/* ===== 1802c3fb0 FUN_1802c3fb0 ===== */

void FUN_1802c3fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint local_res20 [2];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  uint *local_28;
  longlong local_20 [3];
  
  if ((param_4 & 0xff000000) != 0) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_res20[0] = param_4;
    FUN_1802c3a20(param_2,param_3,param_5,local_20);
    local_28 = local_res20;
    FUN_180341080(param_1,local_20,&local_28);
    puVar3 = auStack_48;
    if (local_20[0] != 0) {
      uVar1 = (local_20[2] - local_20[0] >> 3) * 8;
      if (0xfff < uVar1) {
        if ((local_20[0] - *(longlong *)(local_20[0] + -8)) - 8U < 0x20) {
          thunk_FUN_1803d64e0(*(longlong *)(local_20[0] + -8),uVar1 + 0x27);
          return;
        }
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar3 = auStack_40;
      }
      *(undefined8 *)(puVar3 + -8) = 0x1802c406b;
      thunk_FUN_1803d64e0();
    }
  }
  return;
}



/* ===== 1802c4080 FUN_1802c4080 ===== */

void FUN_1802c4080(undefined8 *param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float local_res8 [6];
  float local_48 [16];
  
  fVar1 = DAT_1808ac34c;
  pfVar5 = (float *)*param_1;
  local_48[2] = 1.0;
  local_48[1] = (*param_2 - *pfVar5) / *(float *)param_1[1];
  local_48[0] = 0.0;
  local_res8[4] = 1.0;
  local_res8[0] = 0.0;
  pfVar4 = local_48;
  if (0.0 <= local_48[1]) {
    pfVar4 = local_48 + 1;
  }
  pfVar3 = local_48 + 2;
  if (local_48[1] <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  local_res8[2] = *pfVar3;
  pfVar4 = local_res8;
  if (0.0 <= local_res8[2]) {
    pfVar4 = local_res8 + 2;
  }
  pfVar3 = local_res8 + 4;
  if (local_res8[2] <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  uVar2 = FUN_1802b38e0(*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],*pfVar3);
  local_48[5] = 1.0;
  local_48[3] = 0.0;
  local_res8[4] = 1.0;
  local_48[4] = (param_2[1] - pfVar5[1]) / *(float *)param_1[4];
  local_res8[0] = 0.0;
  pfVar5 = local_48 + 3;
  if (0.0 <= local_48[4]) {
    pfVar5 = local_48 + 4;
  }
  pfVar4 = local_48 + 5;
  if (local_48[4] <= fVar1) {
    pfVar4 = pfVar5;
  }
  local_res8[2] = *pfVar4;
  pfVar5 = local_res8;
  if (0.0 <= local_res8[2]) {
    pfVar5 = local_res8 + 2;
  }
  pfVar4 = local_res8 + 4;
  if (local_res8[2] <= fVar1) {
    pfVar4 = pfVar5;
  }
  FUN_1802b38e0(uVar2 & 0xffffff,uVar2,*pfVar4);
  return;
}



/* ===== 1802c41d0 FUN_1802c41d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c41d0(undefined8 param_1,float *param_2,float *param_3,longlong param_4)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong local_res20;
  undefined1 auStack_198 [32];
  int local_178 [2];
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158 [2];
  undefined8 *local_150;
  undefined8 *puStack_148;
  longlong local_140;
  float *local_138;
  float *local_130;
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_178[0] = 7;
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  local_res20 = param_4;
  local_170 = param_1;
  local_138 = param_3;
  local_130 = param_2;
  FUN_1802c3a20(param_2,param_3,param_3,&local_128);
  fVar16 = DAT_1808ac34c;
  local_150 = (undefined8 *)0x0;
  puStack_148 = (undefined8 *)0x0;
  local_140 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  fVar14 = *param_3 - *param_2;
  iVar11 = 0;
  if (1 < local_178[0]) {
    do {
      puVar5 = puStack_148;
      puVar4 = local_150;
      local_160 = ((float)iVar11 * fVar14) / (float)(local_178[0] + -1) + *param_2;
      local_15c = ((float)(iVar11 + 1) * fVar14) / (float)(local_178[0] + -1) + *param_2;
      fVar12 = param_2[1] - fVar16;
      local_e0 = (float *)CONCAT44(fVar12,local_160);
      uStack_d8 = (float *)CONCAT44(fVar12,local_15c);
      fVar12 = param_3[1] + fVar16;
      local_d0 = (float *)CONCAT44(fVar12,local_15c);
      uStack_c8 = (float *)CONCAT44(fVar12,local_160);
      if ((ulonglong)(local_140 - (longlong)local_150 >> 3) < 4) {
        FUN_18008c6d0(&local_150,4);
        *local_150 = local_e0;
        local_150[1] = uStack_d8;
        local_150[2] = local_d0;
        local_150[3] = uStack_c8;
        puStack_148 = local_150 + 4;
      }
      else {
        uVar8 = (longlong)puStack_148 - (longlong)local_150 >> 3;
        if (uVar8 < 4) {
          FUN_180540530(local_150,&local_e0,uVar8 * 8);
          FUN_180540530(puVar5,&local_e0 + uVar8,(4 - uVar8) * 8);
          puStack_148 = puVar5 + (4 - uVar8);
          param_2 = local_130;
        }
        else {
          FUN_180540530(local_150,&local_e0,0x20);
          puStack_148 = puVar4 + 4;
        }
        param_3 = local_138;
      }
      FUN_1802c3c80(&local_150,&local_128,&local_f8);
      local_168 = *(undefined4 *)(local_res20 + (longlong)iVar11 * 4);
      local_164 = *(undefined4 *)(local_res20 + 4 + (longlong)iVar11 * 4);
      local_e0 = (float *)&local_168;
      uStack_d8 = (float *)&local_164;
      local_d0 = &local_160;
      uStack_c8 = &local_15c;
      FUN_180342b70(local_170,&local_f8,&local_e0);
      iVar1 = iVar11 + 2;
      iVar11 = iVar11 + 1;
    } while (iVar1 < local_178[0]);
    param_1 = local_170;
  }
  uVar3 = _DAT_1808ade90;
  local_158[0] = DAT_1808abfbc;
  if (DAT_1808abfbc <= fVar14) {
    local_158[0] = fVar14;
  }
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  fVar16 = local_158[0] / (float)(local_178[0] * 4 + -4);
  lVar9 = local_128;
  lVar10 = lStack_120;
  uVar8 = 0;
  if (lStack_120 - local_128 >> 3 != 0) {
    do {
      fVar14 = *(float *)(lVar9 + uVar8 * 8);
      fVar12 = *(float *)(lVar9 + 4 + uVar8 * 8);
      uVar8 = uVar8 + 1;
      uVar6 = uVar8 % (ulonglong)(lVar10 - lVar9 >> 3);
      fVar2 = *(float *)(lVar9 + 4 + uVar6 * 8);
      fVar15 = *(float *)(lVar9 + uVar6 * 8) - fVar14;
      fVar13 = (float)FUN_18053ef70((float)((uint)fVar15 & uVar3) / fVar16);
      iVar11 = 1;
      if (1 < (int)fVar13) {
        iVar11 = (int)fVar13;
      }
      if (0 < iVar11) {
        uVar6 = 0;
        do {
          fVar13 = (float)(int)uVar6 / (float)iVar11;
          local_170 = CONCAT44((fVar2 - fVar12) * fVar13 + fVar12,fVar15 * fVar13 + fVar14);
          FUN_18008b8c0(&local_110);
          uVar7 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
        } while ((int)uVar7 < iVar11);
        lVar9 = local_128;
        lVar10 = lStack_120;
      }
    } while (uVar8 < (ulonglong)(lVar10 - lVar9 >> 3));
  }
  local_e0 = local_130;
  uStack_d8 = local_158;
  local_d0 = (float *)local_178;
  uStack_c8 = (float *)&local_res20;
  FUN_180342d40(param_1,&local_110,&local_e0);
  FUN_1800132b0(&local_110);
  FUN_1800132b0(&local_f8);
  FUN_1800132b0(&local_150);
  FUN_1800132b0(&local_128);
  return;
}



/* ===== 1802c4640 FUN_1802c4640 ===== */

void FUN_1802c4640(longlong *param_1,float param_2,longlong *param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  
  lVar5 = param_1[1];
  lVar6 = *param_1;
  FUN_18008b7d0(param_3,param_1);
  iVar12 = (int)(lVar5 - lVar6 >> 3);
  if (2 < iVar12) {
    uVar9 = (ulonglong)iVar12;
    local_98 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    puVar4 = (undefined8 *)FUN_18000fb70(uVar9 * 8);
    local_98 = puVar4 + uVar9;
    puStack_a0 = puVar4;
    do {
      *puStack_a0 = 0;
      uVar2 = DAT_1808adec0;
      fVar1 = DAT_1808ac34c;
      puStack_a0 = puStack_a0 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    iVar11 = iVar12 + -1;
    iVar8 = 0;
    local_a8 = puVar4;
    iVar10 = iVar11;
    if (iVar12 < 4) goto LAB_1802c495d;
    do {
      lVar5 = *param_1;
      lVar6 = (longlong)iVar8;
      lVar7 = (longlong)iVar10;
      fVar18 = *(float *)(lVar5 + lVar6 * 8) - *(float *)(lVar5 + lVar7 * 8);
      fVar19 = *(float *)(lVar5 + 4 + lVar6 * 8) - *(float *)(lVar5 + 4 + lVar7 * 8);
      fVar13 = fVar19 * fVar19 + fVar18 * fVar18;
      if (0.0 < fVar13) {
        if (fVar13 < 0.0) {
          fVar13 = (float)FUN_18051af10(fVar13);
        }
        else {
          fVar13 = SQRT(fVar13);
        }
        fVar19 = (fVar1 / fVar13) * fVar19;
        fVar18 = (fVar1 / fVar13) * fVar18;
      }
      *(float *)(puVar4 + lVar7) = fVar19;
      *(uint *)((longlong)puVar4 + lVar7 * 8 + 4) = (uint)fVar18 ^ uVar2;
      lVar5 = *param_1;
      fVar18 = *(float *)(lVar5 + 8 + lVar6 * 8) - *(float *)(lVar5 + lVar6 * 8);
      fVar19 = *(float *)(lVar5 + 0xc + lVar6 * 8) - *(float *)(lVar5 + 4 + lVar6 * 8);
      fVar13 = fVar19 * fVar19 + fVar18 * fVar18;
      if (0.0 < fVar13) {
        if (fVar13 < 0.0) {
          fVar13 = (float)FUN_18051af10(fVar13);
        }
        else {
          fVar13 = SQRT(fVar13);
        }
        fVar19 = (fVar1 / fVar13) * fVar19;
        fVar18 = (fVar1 / fVar13) * fVar18;
      }
      *(float *)(puVar4 + lVar6) = fVar19;
      *(uint *)((longlong)puVar4 + lVar6 * 8 + 4) = (uint)fVar18 ^ uVar2;
      lVar5 = *param_1;
      fVar18 = *(float *)(lVar5 + 0x10 + lVar6 * 8) - *(float *)(lVar5 + 8 + lVar6 * 8);
      fVar19 = *(float *)(lVar5 + 0x14 + lVar6 * 8) - *(float *)(lVar5 + 0xc + lVar6 * 8);
      fVar13 = fVar19 * fVar19 + fVar18 * fVar18;
      if (0.0 < fVar13) {
        if (fVar13 < 0.0) {
          fVar13 = (float)FUN_18051af10(fVar13);
        }
        else {
          fVar13 = SQRT(fVar13);
        }
        fVar19 = (fVar1 / fVar13) * fVar19;
        fVar18 = (fVar1 / fVar13) * fVar18;
      }
      *(float *)(puVar4 + lVar6 + 1) = fVar19;
      *(uint *)((longlong)puVar4 + lVar6 * 8 + 0xc) = (uint)fVar18 ^ uVar2;
      lVar5 = *param_1;
      fVar18 = *(float *)(lVar5 + 0x18 + lVar6 * 8) - *(float *)(lVar5 + 0x10 + lVar6 * 8);
      fVar19 = *(float *)(lVar5 + 0x1c + lVar6 * 8) - *(float *)(lVar5 + 0x14 + lVar6 * 8);
      fVar13 = fVar19 * fVar19 + fVar18 * fVar18;
      if (0.0 < fVar13) {
        if (fVar13 < 0.0) {
          fVar13 = (float)FUN_18051af10(fVar13);
        }
        else {
          fVar13 = SQRT(fVar13);
        }
        fVar19 = (fVar1 / fVar13) * fVar19;
        fVar18 = (fVar1 / fVar13) * fVar18;
      }
      iVar10 = iVar8 + 3;
      *(float *)(puVar4 + lVar6 + 2) = fVar19;
      iVar8 = iVar8 + 4;
      *(uint *)((longlong)puVar4 + lVar6 * 8 + 0x14) = (uint)fVar18 ^ uVar2;
      iVar3 = iVar8;
      fVar13 = DAT_1808abf8c;
      fVar18 = DAT_1808ac1f4;
      fVar19 = DAT_1808acb08;
    } while (iVar8 < iVar12 + -3);
    while( true ) {
      iVar8 = iVar3;
      DAT_1808abf8c = fVar13;
      DAT_1808ac1f4 = fVar18;
      DAT_1808acb08 = fVar19;
      if (iVar12 <= iVar8) break;
LAB_1802c495d:
      lVar5 = *param_1;
      lVar6 = (longlong)iVar10;
      fVar18 = *(float *)(lVar5 + (longlong)iVar8 * 8) - *(float *)(lVar5 + lVar6 * 8);
      fVar19 = *(float *)(lVar5 + 4 + (longlong)iVar8 * 8) - *(float *)(lVar5 + 4 + lVar6 * 8);
      fVar13 = fVar19 * fVar19 + fVar18 * fVar18;
      if (0.0 < fVar13) {
        if (fVar13 < 0.0) {
          fVar13 = (float)FUN_18051af10(fVar13);
        }
        else {
          fVar13 = SQRT(fVar13);
        }
        fVar19 = (fVar1 / fVar13) * fVar19;
        fVar18 = (fVar1 / fVar13) * fVar18;
      }
      *(float *)(puVar4 + lVar6) = fVar19;
      *(uint *)((longlong)puVar4 + lVar6 * 8 + 4) = (uint)fVar18 ^ uVar2;
      iVar3 = iVar8 + 1;
      iVar10 = iVar8;
      fVar13 = DAT_1808abf8c;
      fVar18 = DAT_1808ac1f4;
      fVar19 = DAT_1808acb08;
    }
    iVar10 = 0;
    if (iVar12 < 4) goto LAB_1802c4c6f;
    do {
      lVar5 = (longlong)iVar10;
      fVar14 = (*(float *)(puVar4 + lVar5) + *(float *)(puVar4 + iVar11)) * fVar18;
      fVar15 = (*(float *)((longlong)puVar4 + lVar5 * 8 + 4) +
               *(float *)((longlong)puVar4 + (longlong)iVar11 * 8 + 4)) * fVar18;
      fVar17 = fVar15 * fVar15 + fVar14 * fVar14;
      if (fVar13 < fVar17) {
        fVar17 = fVar1 / fVar17;
        fVar16 = fVar19;
        if (fVar17 <= fVar19) {
          fVar16 = fVar17;
        }
        fVar15 = fVar16 * fVar15;
        fVar14 = fVar16 * fVar14;
      }
      lVar6 = *param_3;
      fVar17 = *(float *)(*param_1 + 4 + lVar5 * 8);
      *(float *)(lVar6 + lVar5 * 8) = *(float *)(*param_1 + lVar5 * 8) - fVar14 * param_2;
      *(float *)(lVar6 + 4 + lVar5 * 8) = fVar17 - fVar15 * param_2;
      fVar15 = (*(float *)(puVar4 + lVar5 + 1) + *(float *)(puVar4 + lVar5)) * fVar18;
      fVar14 = (*(float *)((longlong)puVar4 + lVar5 * 8 + 0xc) +
               *(float *)((longlong)puVar4 + lVar5 * 8 + 4)) * fVar18;
      fVar17 = fVar14 * fVar14 + fVar15 * fVar15;
      if (fVar13 < fVar17) {
        fVar17 = fVar1 / fVar17;
        fVar16 = fVar19;
        if (fVar17 <= fVar19) {
          fVar16 = fVar17;
        }
        fVar14 = fVar16 * fVar14;
        fVar15 = fVar16 * fVar15;
      }
      lVar6 = *param_3;
      fVar17 = *(float *)(*param_1 + 0xc + lVar5 * 8);
      *(float *)(lVar6 + 8 + lVar5 * 8) = *(float *)(*param_1 + 8 + lVar5 * 8) - fVar15 * param_2;
      *(float *)(lVar6 + 0xc + lVar5 * 8) = fVar17 - fVar14 * param_2;
      fVar15 = (*(float *)(puVar4 + lVar5 + 2) + *(float *)(puVar4 + lVar5 + 1)) * fVar18;
      fVar14 = (*(float *)((longlong)puVar4 + lVar5 * 8 + 0x14) +
               *(float *)((longlong)puVar4 + lVar5 * 8 + 0xc)) * fVar18;
      fVar17 = fVar14 * fVar14 + fVar15 * fVar15;
      if (fVar13 < fVar17) {
        fVar17 = fVar1 / fVar17;
        fVar16 = fVar19;
        if (fVar17 <= fVar19) {
          fVar16 = fVar17;
        }
        fVar14 = fVar16 * fVar14;
        fVar15 = fVar16 * fVar15;
      }
      lVar6 = *param_3;
      fVar17 = *(float *)(*param_1 + 0x14 + lVar5 * 8);
      *(float *)(lVar6 + 0x10 + lVar5 * 8) =
           *(float *)(*param_1 + 0x10 + lVar5 * 8) - fVar15 * param_2;
      *(float *)(lVar6 + 0x14 + lVar5 * 8) = fVar17 - fVar14 * param_2;
      fVar15 = (*(float *)(puVar4 + lVar5 + 3) + *(float *)(puVar4 + lVar5 + 2)) * fVar18;
      fVar14 = (*(float *)((longlong)puVar4 + lVar5 * 8 + 0x1c) +
               *(float *)((longlong)puVar4 + lVar5 * 8 + 0x14)) * fVar18;
      fVar17 = fVar14 * fVar14 + fVar15 * fVar15;
      if (fVar13 < fVar17) {
        fVar17 = fVar1 / fVar17;
        fVar16 = fVar19;
        if (fVar17 <= fVar19) {
          fVar16 = fVar17;
        }
        fVar14 = fVar16 * fVar14;
        fVar15 = fVar16 * fVar15;
      }
      iVar11 = iVar10 + 3;
      lVar6 = *param_3;
      iVar10 = iVar10 + 4;
      fVar17 = *(float *)(*param_1 + 0x1c + lVar5 * 8);
      *(float *)(lVar6 + 0x18 + lVar5 * 8) =
           *(float *)(*param_1 + 0x18 + lVar5 * 8) - fVar15 * param_2;
      *(float *)(lVar6 + 0x1c + lVar5 * 8) = fVar17 - fVar14 * param_2;
    } while (iVar10 < iVar12 + -3);
    for (; iVar10 < iVar12; iVar10 = iVar10 + 1) {
LAB_1802c4c6f:
      lVar5 = (longlong)iVar10;
      fVar14 = (*(float *)(puVar4 + lVar5) + *(float *)(puVar4 + iVar11)) * fVar18;
      fVar15 = (*(float *)((longlong)puVar4 + lVar5 * 8 + 4) +
               *(float *)((longlong)puVar4 + (longlong)iVar11 * 8 + 4)) * fVar18;
      fVar17 = fVar15 * fVar15 + fVar14 * fVar14;
      if (fVar13 < fVar17) {
        fVar17 = fVar1 / fVar17;
        fVar16 = fVar19;
        if (fVar17 <= fVar19) {
          fVar16 = fVar17;
        }
        fVar15 = fVar16 * fVar15;
        fVar14 = fVar16 * fVar14;
      }
      lVar6 = *param_3;
      fVar17 = *(float *)(*param_1 + 4 + lVar5 * 8);
      *(float *)(lVar6 + lVar5 * 8) = *(float *)(*param_1 + lVar5 * 8) - fVar14 * param_2;
      *(float *)(lVar6 + 4 + lVar5 * 8) = fVar17 - fVar15 * param_2;
      iVar11 = iVar10;
    }
    FUN_1800132b0(&local_a8);
  }
  return;
}



/* ===== 1802c4d70 FUN_1802c4d70 ===== */

undefined8 *
FUN_1802c4d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1802c3a20(param_2,param_3,param_4,param_1,1);
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  FUN_1802c4640(param_1,*(float *)(*(longlong *)(*(longlong *)(lVar1 + 0x14f8) + 0x2c8) + 0xd0) *
                        DAT_1808ac1f4,param_1 + 3);
  return param_1;
}



/* ===== 1802c4e20 FUN_1802c4e20 ===== */

void FUN_1802c4e20(longlong param_1)

{
  FUN_180349c50(param_1 + 0x30);
  FUN_1800132b0(param_1 + 0x18);
  FUN_1800132b0(param_1);
  return;
}



/* ===== 1802c4e50 FUN_1802c4e50 ===== */

uint FUN_1802c4e50(longlong param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res18 [2];
  float local_res20 [2];
  float local_f8 [2];
  float local_f0 [2];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc [45];
  
  fVar14 = DAT_1808abfe4;
  fVar18 = 0.0;
  piVar7 = *(int **)(param_1 + 0x38);
  piVar12 = *(int **)(param_1 + 0x30);
  fVar17 = 0.0;
  fVar19 = 0.0;
  fVar21 = 0.0;
  if (piVar12 != piVar7) {
    pfVar1 = param_2 + 1;
    fVar15 = *param_2;
    fVar22 = DAT_1808ac000;
    do {
      fVar20 = DAT_1808abfbc;
      fVar13 = (float)piVar12[1];
      local_f0[0] = (float)piVar12[7];
      if (fVar13 - fVar22 <= fVar15) {
        fVar2 = (float)piVar12[2];
        fVar3 = *pfVar1;
        if (fVar3 < fVar2 - fVar22) {
LAB_1802c51f9:
          fVar15 = *param_2;
        }
        else {
          fVar4 = (float)piVar12[3];
          fVar15 = *param_2;
          if (fVar4 + fVar22 < fVar15) goto LAB_1802c51fe;
          fVar5 = (float)piVar12[4];
          if (fVar5 + fVar22 < fVar3) goto LAB_1802c51f9;
          fVar22 = fVar4 - fVar13;
          fVar15 = fVar5 - fVar2;
          if (fVar22 <= fVar5 - fVar2) {
            fVar15 = fVar22;
          }
          local_f8[0] = fVar15 * DAT_1808ac1f4;
          pfVar9 = local_f8;
          if ((float)piVar12[7] <= fVar15 * DAT_1808ac1f4) {
            pfVar9 = local_f0;
          }
          fVar16 = *pfVar9;
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          if (fVar16 <= 0.0) {
            fVar15 = *param_2;
LAB_1802c506b:
            iVar6 = *piVar12;
            if (iVar6 == 0) {
              uVar8 = piVar12[5];
              fVar13 = (float)(uVar8 >> 0x18) * fVar14;
              fVar22 = (DAT_1808ac34c - fVar13) * fVar18;
              fVar18 = fVar13 + fVar22;
              if (0.0 < fVar18) {
                fVar21 = fVar13 * (float)(uVar8 & 0xff) * fVar14 + fVar22 * fVar21;
                fVar20 = fVar13 * (float)(uVar8 >> 8 & 0xff) * fVar14;
LAB_1802c5425:
                fVar21 = fVar21 / fVar18;
                fVar19 = (fVar20 + fVar22 * fVar19) / fVar18;
                fVar17 = (fVar13 * (float)(uVar8 >> 0x10 & 0xff) * fVar14 + fVar22 * fVar17) /
                         fVar18;
                goto LAB_1802c544d;
              }
              fVar21 = 0.0;
              fVar19 = 0.0;
              fVar17 = 0.0;
              fVar18 = 0.0;
              fVar22 = DAT_1808ac000;
            }
            else {
              if (iVar6 != 1) {
                if (iVar6 == 2) {
                  uVar8 = piVar12[5];
                  fVar15 = (float)(uVar8 >> 0x18) * fVar14;
                  fVar22 = (DAT_1808ac34c - fVar15) * fVar18;
                  fVar18 = fVar15 + fVar22;
                  if (0.0 < fVar18) {
                    fVar21 = (fVar22 * fVar21 + fVar15 * (float)(uVar8 & 0xff) * fVar14) / fVar18;
                    fVar19 = (fVar22 * fVar19 + fVar15 * (float)(uVar8 >> 8 & 0xff) * fVar14) /
                             fVar18;
                    fVar17 = (fVar22 * fVar17 + fVar15 * (float)(uVar8 >> 0x10 & 0xff) * fVar14) /
                             fVar18;
                  }
                  else {
                    fVar21 = 0.0;
                    fVar19 = 0.0;
                    fVar17 = 0.0;
                    fVar18 = 0.0;
                  }
                  fVar15 = (float)piVar12[8];
                  fVar22 = fVar5 - DAT_1808abfbc;
                  if (*pfVar1 <= fVar5 - DAT_1808abfbc) {
                    fVar22 = *pfVar1;
                  }
                  fVar13 = (float)FUN_18053f0d0((fVar22 - (float)piVar12[2]) / fVar15);
                  fVar22 = fVar4 - fVar20;
                  if (*param_2 <= fVar4 - fVar20) {
                    fVar22 = *param_2;
                  }
                  fVar15 = (float)FUN_18053f0d0((fVar22 - (float)piVar12[1]) / fVar15);
                  if (((int)fVar13 + (int)fVar15 & 1U) == 0) {
                    uVar8 = piVar12[6];
                    fVar15 = (float)(uVar8 >> 0x18) * fVar14;
                    fVar22 = (DAT_1808ac34c - fVar15) * fVar18;
                    fVar18 = fVar15 + fVar22;
                    if (0.0 < fVar18) {
                      fVar21 = (fVar22 * fVar21 + fVar15 * (float)(uVar8 & 0xff) * fVar14) / fVar18;
                      fVar19 = (fVar22 * fVar19 + fVar15 * (float)(uVar8 >> 8 & 0xff) * fVar14) /
                               fVar18;
                      fVar17 = (fVar22 * fVar17 + fVar15 * (float)(uVar8 >> 0x10 & 0xff) * fVar14) /
                               fVar18;
                    }
                    else {
                      fVar21 = 0.0;
                      fVar19 = 0.0;
                      fVar17 = 0.0;
                      fVar18 = 0.0;
                    }
                  }
                  fVar22 = DAT_1808ac000;
                  goto LAB_1802c51f9;
                }
                goto LAB_1802c544d;
              }
              local_res20[0] = DAT_1808abfbc;
              if (DAT_1808abfbc <= fVar22) {
                local_res20[0] = fVar22;
              }
              local_dc[1] = 1.0;
              local_res18[0] = 0.0;
              local_res20[0] = (fVar15 - fVar13) / local_res20[0];
              pfVar9 = local_res18;
              if (0.0 <= local_res20[0]) {
                pfVar9 = local_res20;
              }
              pfVar11 = local_dc + 1;
              if (local_res20[0] <= DAT_1808ac34c) {
                pfVar11 = pfVar9;
              }
              uVar8 = FUN_1802b38e0(piVar12[5],piVar12[6],*pfVar11);
              fVar13 = (float)(uVar8 >> 0x18) * fVar14;
              fVar22 = (DAT_1808ac34c - fVar13) * fVar18;
              fVar18 = fVar13 + fVar22;
              if (0.0 < fVar18) {
                fVar21 = fVar13 * (float)(uVar8 & 0xff) * fVar14 + fVar22 * fVar21;
                fVar20 = fVar13 * (float)(uVar8 >> 8 & 0xff) * fVar14;
                goto LAB_1802c5425;
              }
              fVar21 = 0.0;
              fVar19 = 0.0;
              fVar17 = 0.0;
              fVar18 = 0.0;
              fVar22 = DAT_1808ac000;
            }
          }
          else {
            fVar15 = *param_2;
            local_e8 = fVar16 + fVar13;
            pfVar9 = &local_e8;
            if (fVar16 + fVar13 <= fVar15) {
              pfVar9 = param_2;
            }
            local_e4 = fVar4 - fVar16;
            local_dc[0] = fVar5 - fVar16;
            local_e0 = fVar16 + fVar2;
            pfVar11 = &local_e4;
            if (fVar15 <= fVar4 - fVar16) {
              pfVar11 = pfVar9;
            }
            pfVar9 = &local_e0;
            if (fVar16 + fVar2 <= fVar3) {
              pfVar9 = pfVar1;
            }
            pfVar10 = local_dc;
            if (fVar3 <= fVar5 - fVar16) {
              pfVar10 = pfVar9;
            }
            if ((fVar3 - *pfVar10) * (fVar3 - *pfVar10) + (fVar15 - *pfVar11) * (fVar15 - *pfVar11)
                <= fVar16 * fVar16 + DAT_1808ac000) {
              fVar13 = (float)piVar12[1];
              goto LAB_1802c506b;
            }
LAB_1802c544d:
            fVar22 = DAT_1808ac000;
          }
        }
      }
LAB_1802c51fe:
      piVar12 = piVar12 + 9;
    } while (piVar12 != piVar7);
  }
  if (0.0 <= fVar21) {
    fVar14 = DAT_1808ac34c;
    if (fVar21 <= DAT_1808ac34c) {
      fVar14 = fVar21;
    }
  }
  else {
    fVar14 = 0.0;
  }
  if (0.0 <= fVar19) {
    fVar21 = DAT_1808ac34c;
    if (fVar19 <= DAT_1808ac34c) {
      fVar21 = fVar19;
    }
  }
  else {
    fVar21 = 0.0;
  }
  if (0.0 <= fVar17) {
    fVar19 = DAT_1808ac34c;
    if (fVar17 <= DAT_1808ac34c) {
      fVar19 = fVar17;
    }
  }
  else {
    fVar19 = 0.0;
  }
  fVar17 = 0.0;
  if ((0.0 <= fVar18) && (fVar17 = DAT_1808ac34c, fVar18 <= DAT_1808ac34c)) {
    fVar17 = fVar18;
  }
  return (int)(fVar17 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
         (int)(fVar19 * DAT_1808acb94 + DAT_1808ac1f4) << 0x10 |
         (int)(fVar21 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
         (int)(fVar14 * DAT_1808acb94 + DAT_1808ac1f4);
}



/* ===== 1802c55d0 FUN_1802c55d0 ===== */

void FUN_1802c55d0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5,float param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  float fVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined4 *local_b8;
  longlong local_b0 [6];
  undefined4 local_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  uint uStack_68;
  float fStack_64;
  undefined4 local_60;
  
  fVar3 = param_6;
  if ((param_5 & 0xff000000) == 0) {
    return;
  }
  local_b0[3] = 0;
  local_b0[4] = 0;
  local_b0[5] = 0;
  FUN_1802c3a20(param_3,param_4,param_6,local_b0 + 3);
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  lVar4 = param_2;
  if (fVar3 <= 0.0) {
    lVar4 = param_2 + 0x18;
  }
  FUN_1802c3c80(local_b0 + 3,lVar4,local_b0);
  local_b8 = &param_5;
  FUN_180343a60(param_1,local_b0,&local_b8,0.0 < fVar3);
  local_80 = 0;
  uStack_7c = *param_3;
  uStack_74 = (undefined4)*param_4;
  uStack_70 = (undefined4)((ulonglong)*param_4 >> 0x20);
  uStack_6c = param_5;
  uStack_68 = param_5;
  fStack_64 = fVar3;
  local_60 = 0;
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  if (puVar1 == *(undefined4 **)(param_2 + 0x40)) {
    FUN_180354370(param_2 + 0x30,puVar1,&local_80);
  }
  else {
    uStack_7c._4_4_ = (undefined4)((ulonglong)uStack_7c >> 0x20);
    *puVar1 = 0;
    puVar1[1] = (undefined4)uStack_7c;
    puVar1[2] = uStack_7c._4_4_;
    puVar1[3] = uStack_74;
    *(ulonglong *)(puVar1 + 4) = CONCAT44(param_5,uStack_70);
    *(ulonglong *)(puVar1 + 6) = CONCAT44(fVar3,param_5);
    puVar1[8] = 0;
    *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x24;
  }
  puVar5 = auStack_d8;
  puVar6 = auStack_d8;
  puVar7 = auStack_d8;
  if (local_b0[0] == 0) goto LAB_1802c572c;
  lVar4 = local_b0[0];
  if ((ulonglong)((local_b0[2] - local_b0[0] >> 3) * 8) < 0x1000) {
LAB_1802c5715:
    puVar6 = puVar5;
  }
  else {
    lVar4 = *(longlong *)(local_b0[0] + -8);
    if (0x1f < (local_b0[0] - lVar4) - 8U) {
      lVar4 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar5 = auStack_d0;
      goto LAB_1802c5715;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x1802c5720;
  thunk_FUN_1803d64e0(lVar4);
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  puVar7 = puVar6;
LAB_1802c572c:
  if (local_b0[3] == 0) {
    return;
  }
  lVar4 = local_b0[3];
  if ((0xfff < (ulonglong)((local_b0[5] - local_b0[3] >> 3) * 8)) &&
     (lVar4 = *(longlong *)(local_b0[3] + -8), 0x1f < (local_b0[3] - lVar4) - 8U)) {
    lVar4 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar7 = puVar7 + 8;
  }
  *(undefined8 *)(puVar7 + -8) = 0x1802c577a;
  thunk_FUN_1803d64e0(lVar4);
  return;
}



/* ===== 1802c57a0 FUN_1802c57a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c57a0(longlong param_1,longlong param_2,float *param_3,float *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  short sVar5;
  float fVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auStack_138 [32];
  float local_118 [6];
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined8 uStack_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_c8 = *param_3;
  fStack_c4 = param_3[1];
  fStack_c0 = *param_4;
  fStack_b4 = param_4[1];
  uStack_ac = CONCAT44(uStack_ac._4_4_,fStack_b4);
  fStack_bc = fStack_c4;
  local_b8 = fStack_c0;
  fStack_b0 = local_c8;
  local_e0 = (undefined8 *)FUN_18000fb70(0x20);
  local_d8 = local_e0 + 4;
  *local_e0 = CONCAT44(fStack_c4,local_c8);
  local_e0[1] = CONCAT44(fStack_bc,fStack_c0);
  *(float *)(local_e0 + 2) = local_b8;
  *(float *)((longlong)local_e0 + 0x14) = fStack_b4;
  *(float *)(local_e0 + 3) = fStack_b0;
  *(undefined4 *)((longlong)local_e0 + 0x1c) = (undefined4)uStack_ac;
  local_100 = 0;
  lStack_f8 = 0;
  local_f0 = 0;
  local_d0 = local_d8;
  FUN_1802c3c80(&local_e0,param_2 + 0x18,&local_100);
  uVar13 = lStack_f8 - local_100 >> 3;
  iVar12 = (int)uVar13;
  if (2 < iVar12) {
    fVar17 = DAT_1808abfbc;
    if (DAT_1808abfbc <= *param_4 - *param_3) {
      fVar17 = *param_4 - *param_3;
    }
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
    FUN_1803fc3a0(param_1,(iVar12 + -2) * 3,uVar13 & 0xffffffff);
    fVar6 = DAT_1808ac34c;
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x34);
    uVar16 = 0;
    do {
      uVar7 = *(undefined4 *)(local_100 + 4 + uVar16 * 8);
      puVar3 = *(undefined4 **)(param_1 + 0x40);
      *puVar3 = *(undefined4 *)(local_100 + uVar16 * 8);
      puVar3[1] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar10 + 8) = uVar1;
      *(undefined4 *)(lVar10 + 0xc) = uVar2;
      local_118[2] = (*(float *)(local_100 + uVar16 * 8) - *param_3) / fVar17;
      local_118[4] = 1.0;
      local_118[0] = 0.0;
      pfVar9 = local_118;
      if (0.0 <= local_118[2]) {
        pfVar9 = local_118 + 2;
      }
      pfVar8 = local_118 + 4;
      if (local_118[2] <= fVar6) {
        pfVar8 = pfVar9;
      }
      uVar7 = FUN_1802b38e0(param_5,param_6,*pfVar8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar7;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < iVar12);
    iVar14 = 2;
    do {
      **(short **)(param_1 + 0x48) = (short)uVar13;
      sVar5 = (short)uVar13 + (short)iVar14;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar5 + -1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar5;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar12);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar12;
  }
  local_c8 = 1.4013e-45;
  fStack_c4 = *param_3;
  fStack_c0 = param_3[1];
  fStack_bc = *param_4;
  local_b8 = param_4[1];
  fStack_b4 = (float)param_5;
  fStack_b0 = (float)param_6;
  uStack_ac = 0;
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  if (puVar3 == *(undefined4 **)(param_2 + 0x40)) {
    FUN_180354370(param_2 + 0x30,puVar3,&local_c8);
  }
  else {
    *puVar3 = 1;
    puVar3[1] = fStack_c4;
    puVar3[2] = fStack_c0;
    puVar3[3] = fStack_bc;
    puVar3[4] = local_b8;
    puVar3[5] = param_5;
    puVar3[6] = param_6;
    *(undefined8 *)(puVar3 + 7) = 0;
    *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x24;
  }
  if (local_100 != 0) {
    uVar13 = (local_f0 - local_100 >> 3) * 8;
    lVar10 = local_100;
    if (0xfff < uVar13) {
      lVar10 = *(longlong *)(local_100 + -8);
      if (0x1f < (local_100 - lVar10) - 8U) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        goto LAB_1802c5b27;
      }
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar10,uVar13);
    local_100 = 0;
    lStack_f8 = 0;
    local_f0 = 0;
  }
  if (local_e0 != (undefined8 *)0x0) {
    uVar13 = ((longlong)local_d0 - (longlong)local_e0 >> 3) * 8;
    puVar11 = local_e0;
    if (0xfff < uVar13) {
      puVar11 = (undefined8 *)local_e0[-1];
      if (0x1f < (ulonglong)((longlong)local_e0 + (-8 - (longlong)puVar11))) {
LAB_1802c5b27:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_1803d64e0(puVar11,uVar13);
  }
  return;
}



/* ===== 1802c5b30 FUN_1802c5b30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c5b30(longlong param_1,longlong param_2,float *param_3,float *param_4,float param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  longlong local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  ulonglong local_d0;
  
  fVar19 = DAT_1808ac1f4;
  local_d0 = DAT_180919500 ^ (ulonglong)auStack_158;
  fStack_f4 = param_3[1];
  fStack_e4 = param_4[1];
  if (fStack_f4 < fStack_e4) {
    local_f8 = *param_3;
    fStack_f0 = *param_4;
    if (local_f8 < fStack_f0) {
      fVar17 = *(float *)(DAT_180ca0a50 + 0xc9c);
      if (param_5 == 0.0) {
        param_5 = (fStack_e4 - fStack_f4) * DAT_1808ac1f4;
      }
      fStack_ec = fStack_f4;
      local_e8 = fStack_f0;
      fStack_e0 = local_f8;
      fStack_dc = fStack_e4;
      local_120 = (undefined8 *)FUN_18000fb70(0x20);
      local_118 = local_120 + 4;
      *local_120 = CONCAT44(fStack_f4,local_f8);
      local_120[1] = CONCAT44(fStack_ec,fStack_f0);
      *(float *)(local_120 + 2) = local_e8;
      *(float *)((longlong)local_120 + 0x14) = fStack_e4;
      *(float *)(local_120 + 3) = fStack_e0;
      *(float *)((longlong)local_120 + 0x1c) = fStack_dc;
      uVar14 = (int)(longlong)(fVar17 * _DAT_1808acb68 + fVar19) << 0x18 | 0xffffff;
      uVar15 = (int)(longlong)(fVar17 * DAT_1808acb94 + fVar19) << 0x18 | 0xe0e0e0;
      local_138 = 0;
      lStack_130 = 0;
      local_128 = 0;
      local_100 = param_2 + 0x18;
      local_110 = local_118;
      FUN_1802c3c80(&local_120,local_100,&local_138);
      iVar9 = (int)(lStack_130 - local_138 >> 3);
      if (2 < iVar9) {
        uVar1 = **(undefined4 **)(param_1 + 0x38);
        uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
        FUN_1803fc3a0(param_1,(iVar9 + -2) * 3);
        uVar4 = *(undefined4 *)(param_1 + 0x34);
        uVar12 = 0;
        do {
          uVar3 = *(undefined4 *)(local_138 + 4 + uVar12 * 8);
          puVar5 = *(undefined4 **)(param_1 + 0x40);
          *puVar5 = *(undefined4 *)(local_138 + uVar12 * 8);
          puVar5[1] = uVar3;
          lVar6 = *(longlong *)(param_1 + 0x40);
          *(undefined4 *)(lVar6 + 8) = uVar1;
          *(undefined4 *)(lVar6 + 0xc) = uVar2;
          *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar14;
          *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
          uVar10 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar10;
        } while ((int)uVar10 < iVar9);
        iVar11 = 2;
        do {
          sVar13 = (short)uVar4;
          **(short **)(param_1 + 0x48) = sVar13;
          sVar13 = sVar13 + (short)iVar11;
          *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar13 + -1;
          *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar13;
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar9);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar9;
      }
      FUN_1800132b0(&local_138);
      FUN_1800132b0(&local_120);
      local_f8 = 2.8026e-45;
      fStack_f4 = *param_3;
      fStack_f0 = param_3[1];
      fStack_ec = *param_4;
      local_e8 = param_4[1];
      fStack_dc = 0.0;
      puVar5 = *(undefined4 **)(param_2 + 0x38);
      local_d8 = param_5;
      if (puVar5 == *(undefined4 **)(param_2 + 0x40)) {
        fStack_e4 = (float)uVar14;
        fStack_e0 = (float)uVar15;
        FUN_180354370(param_2 + 0x30,puVar5,&local_f8);
      }
      else {
        *puVar5 = 2;
        puVar5[1] = fStack_f4;
        puVar5[2] = fStack_f0;
        puVar5[3] = fStack_ec;
        puVar5[4] = local_e8;
        puVar5[5] = uVar14;
        puVar5[6] = uVar15;
        puVar5[7] = 0;
        puVar5[8] = param_5;
        *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 0x24;
      }
      lVar6 = local_100;
      fVar19 = param_3[1];
      fVar17 = param_4[1];
      if (fVar19 < fVar17) {
        bVar8 = 0;
        do {
          fVar18 = param_3[1];
          if (param_3[1] <= fVar19) {
            fVar18 = fVar19;
          }
          fVar19 = fVar19 + param_5;
          if (fVar19 <= fVar17) {
            fVar17 = fVar19;
          }
          if (fVar18 < fVar17) {
            fVar16 = (float)bVar8 * param_5 + *param_3;
            fStack_f0 = *param_4;
            if (fVar16 < fStack_f0) {
              do {
                local_f8 = *param_3;
                if (*param_3 <= fVar16) {
                  local_f8 = fVar16;
                }
                if (fVar16 + param_5 <= fStack_f0) {
                  fStack_f0 = fVar16 + param_5;
                }
                if (local_f8 < fStack_f0) {
                  fStack_f4 = fVar18;
                  fStack_ec = fVar18;
                  local_e8 = fStack_f0;
                  fStack_e4 = fVar17;
                  fStack_e0 = local_f8;
                  fStack_dc = fVar17;
                  local_120 = (undefined8 *)FUN_18000fb70(0x20);
                  local_118 = local_120 + 4;
                  *local_120 = CONCAT44(fStack_f4,local_f8);
                  local_120[1] = CONCAT44(fStack_ec,fStack_f0);
                  *(float *)(local_120 + 2) = local_e8;
                  *(float *)((longlong)local_120 + 0x14) = fStack_e4;
                  *(float *)(local_120 + 3) = fStack_e0;
                  *(float *)((longlong)local_120 + 0x1c) = fStack_dc;
                  local_138 = 0;
                  lStack_130 = 0;
                  local_128 = 0;
                  local_110 = local_118;
                  FUN_1802c3c80(&local_120,lVar6,&local_138);
                  iVar9 = (int)(lStack_130 - local_138 >> 3);
                  if (2 < iVar9) {
                    uVar1 = **(undefined4 **)(param_1 + 0x38);
                    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
                    FUN_1803fc3a0(param_1,(iVar9 + -2) * 3);
                    uVar4 = *(undefined4 *)(param_1 + 0x34);
                    uVar12 = 0;
                    do {
                      uVar3 = *(undefined4 *)(local_138 + 4 + uVar12 * 8);
                      puVar5 = *(undefined4 **)(param_1 + 0x40);
                      *puVar5 = *(undefined4 *)(local_138 + uVar12 * 8);
                      puVar5[1] = uVar3;
                      lVar7 = *(longlong *)(param_1 + 0x40);
                      *(undefined4 *)(lVar7 + 8) = uVar1;
                      *(undefined4 *)(lVar7 + 0xc) = uVar2;
                      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar15;
                      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
                      uVar14 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar14;
                    } while ((int)uVar14 < iVar9);
                    iVar11 = 2;
                    do {
                      sVar13 = (short)uVar4;
                      **(short **)(param_1 + 0x48) = sVar13;
                      sVar13 = sVar13 + (short)iVar11;
                      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar13 + -1;
                      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar13;
                      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < iVar9);
                    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar9;
                  }
                  FUN_1800132b0(&local_138);
                  FUN_1800132b0(&local_120);
                }
                fVar16 = fVar16 + param_5 + param_5;
                fStack_f0 = *param_4;
              } while (fVar16 < fStack_f0);
            }
          }
          bVar8 = bVar8 ^ 1;
          fVar17 = param_4[1];
        } while (fVar19 < fVar17);
      }
    }
  }
  return;
}



/* ===== 1802c60a0 FUN_1802c60a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c60a0(undefined8 param_1,char *param_2,undefined8 param_3,float param_4,float *param_5,
                  float param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_88 [12];
  
  local_88[4] = DAT_180919500 ^ (ulonglong)auStack_108;
  fVar10 = DAT_1808ac34c;
  if (DAT_180cd0fd8 != '\0') {
    fVar10 = DAT_1809f7440;
  }
  fVar9 = fVar10 * DAT_1808ac3d4;
  if (fVar10 * DAT_1808ac3d4 <= DAT_1808ac540) {
    fVar9 = DAT_1808ac540;
  }
  fVar10 = fVar9 * param_6 + DAT_1808ac1f4;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  sVar5 = strlen(param_2);
  FUN_1800133a0(local_88,param_2,sVar5);
  plVar6 = (longlong *)FUN_18039ed80(&local_a8,local_88,param_3,(int)fVar10);
  lVar2 = *plVar6;
  lVar4 = plVar6[1];
  iVar1 = *(int *)((longlong)plVar6 + 0xc);
  if (0xf < (ulonglong)local_88[3]) {
    uVar8 = local_88[3] + 1;
    lVar7 = local_88[0];
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(local_88[0] + -8);
      if (0x1f < (local_88[0] - lVar7) - 8U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = local_88[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar7,uVar8);
  }
  if (((lVar2 != 0) && (0 < (int)lVar4)) && (0 < iVar1)) {
    fVar10 = *param_5;
    local_b0 = fVar10;
    local_ac = (float)FUN_180519080(param_6 * _DAT_1808ac10c);
    local_ac = local_ac + param_5[1];
    local_c8 = 0x3f800000;
    local_c4 = 0x3f800000;
    local_c0 = 0;
    local_b8 = param_6 * param_4 * DAT_1808abfc4 + fVar10;
    local_b4 = local_ac + param_6;
    local_a8 = 0;
    local_d8 = param_7;
    local_e0 = &local_c8;
    local_e8 = &local_c0;
    local_a0 = lVar2;
    FUN_1803fea90(param_1,&local_a8,&local_b0,&local_b8);
  }
  return;
}



/* ===== 1802c6290 FUN_1802c6290 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c6290(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  local_20 = *param_1;
  uStack_1c = param_1[1];
  uStack_18 = param_1[2];
  uStack_14 = param_1[3];
  local_38 = (undefined4 *)FUN_18000fb70(0x10);
  local_30 = local_38 + 4;
  *local_38 = local_20;
  local_38[1] = uStack_1c;
  local_38[2] = uStack_18;
  local_38[3] = uStack_14;
  local_28 = local_30;
  FUN_180349d30();
  puVar3 = auStack_58;
  puVar4 = auStack_58;
  puVar5 = auStack_58;
  if (local_38 == (undefined4 *)0x0) goto LAB_1802c6320;
  puVar2 = local_38;
  if (((longlong)local_28 - (longlong)local_38 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1802c6318:
    puVar4 = puVar3;
  }
  else {
    puVar2 = *(undefined4 **)(local_38 + -2);
    if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)puVar2))) {
      pcVar1 = (code *)swi(0x29);
      puVar2 = (undefined4 *)(*pcVar1)(5);
      puVar3 = auStack_50;
      goto LAB_1802c6318;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x1802c6320;
  thunk_FUN_1803d64e0(puVar2);
  puVar5 = puVar4;
LAB_1802c6320:
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + -8) = 0x1802c6333;
  FUN_18034a0e0();
  DAT_181106f18 = 0;
  *(undefined8 *)(puVar5 + -8) = 0x1802c634a;
  return;
}



/* ===== 1802c6350 FUN_1802c6350 ===== */

ulonglong FUN_1802c6350(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *in_RAX;
  int *piVar2;
  int *piVar3;
  int local_18;
  int local_14 [5];
  
  piVar3 = &local_18;
  if (DAT_181107558 != DAT_181107560) {
    local_18 = 0;
    local_14[0] = (int)(DAT_181107560 - DAT_181107558 >> 3) * -0x55555555 + -1;
    if (-1 < DAT_181106f18) {
      piVar3 = &DAT_181106f18;
    }
    piVar2 = local_14;
    if (DAT_181106f18 <= local_14[0]) {
      piVar2 = piVar3;
    }
    in_RAX = *(undefined8 **)(DAT_181107558 + (longlong)*piVar2 * 0x18);
    if (in_RAX != *(undefined8 **)(DAT_181107558 + 8 + (longlong)*piVar2 * 0x18)) {
      uVar1 = in_RAX[1];
      *param_1 = *in_RAX;
      param_1[1] = uVar1;
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



/* ===== 1802c63e0 FUN_1802c63e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1802c63e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,char param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  char ****ppppcVar10;
  longlong lVar11;
  float *pfVar12;
  bool bVar13;
  float fVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar15;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  char ****local_160;
  char ****local_158;
  undefined8 local_150;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_104 [5];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  char ****local_e0 [3];
  ulonglong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_180919500 ^ (ulonglong)auStack_188;
  local_104[3] = param_4;
  FUN_1802b3fe0(local_e0,param_1);
  local_160 = (char ****)local_e0;
  if (0xf < local_c8) {
    local_160 = local_e0[0];
  }
  local_138 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = (char ****)0x0;
  local_168 = (undefined8 *)((ulonglong)local_168._4_4_ << 0x20);
  FUN_18040a2f0(&local_128,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
  fVar19 = (float)local_128 + DAT_1808aca64 + DAT_1808ac8b0;
  lVar11 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_128 = *(undefined8 *)(lVar11 + 0x118);
  if ((*(longlong *)(lVar11 + 0x1c8) != 0) ||
     (lVar8 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar8 = 0x250;
  }
  fVar14 = *(float *)(lVar8 + lVar11) - *(float *)(lVar11 + 0x118);
  if (fVar19 <= fVar14) {
    fVar19 = fVar14;
  }
  local_11c = 31.706;
  local_120 = fVar19;
  FUN_1803e89e0(param_1);
  uVar5 = FUN_180415e30("##row",&local_120,0);
  fVar3 = DAT_1808ac34c;
  fVar14 = DAT_1808ac1f4;
  iVar1 = *(int *)(DAT_180ca0a50 + 0x1578);
  if (iVar1 == 0) {
    bVar13 = false;
    cVar6 = FUN_1803dd930(0);
    local_120 = *(float *)(DAT_180ca0a50 + 0x1ee8);
    uVar16 = extraout_XMM0_Da_00;
  }
  else {
    iVar2 = *(int *)(DAT_180ca0a50 + 0x1ee8);
    bVar13 = iVar1 == iVar2;
    cVar6 = FUN_1803dd930(0);
    local_120 = *(float *)(DAT_180ca0a50 + 0x1ee8);
    uVar16 = extraout_XMM0_Da;
    if (iVar1 == iVar2) {
      fVar15 = fVar3;
      goto LAB_1802c65c2;
    }
  }
  if (cVar6 == '\0') {
    fVar15 = 0.0;
  }
  else {
    fVar15 = fVar14;
  }
LAB_1802c65c2:
  local_10c = 0;
  local_108 = 0xffffffff;
  local_118 = fVar15;
  local_114 = fVar15;
  local_110 = fVar15;
  FUN_18034a380(uVar16,&local_f0,&local_120,&local_118);
  uVar16 = DAT_1808ac118;
  fVar15 = (float)FUN_1802b3660(CONCAT44(uStack_ec,local_f0) + 0x14,fVar15,DAT_1808ac118,0);
  if (bVar13) {
    fVar20 = fVar3;
  }
  else if (cVar6 == '\0') {
    fVar20 = 0.0;
  }
  else {
    fVar20 = fVar14;
  }
  local_120 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##lit");
  local_10c = 0;
  local_108 = 0xffffffff;
  local_118 = fVar20;
  local_114 = fVar20;
  local_110 = fVar20;
  FUN_18034a380(extraout_XMM0_Da_01,&local_f0,&local_120,&local_118);
  uVar16 = FUN_1802b3660(CONCAT44(uStack_ec,local_f0) + 0x14,fVar20,uVar16,0);
  lVar11 = DAT_180ca0a50;
  iVar1 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar1 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar11 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar1 + -1;
  }
  *(undefined1 *)(*(longlong *)(lVar11 + 0x14f8) + 0xce) = 1;
  lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x14f8) + 0x2c8);
  fVar4 = local_128._4_4_;
  fVar20 = (float)local_128;
  if (0.0 < fVar15) {
    local_104[2] = 1.0;
    local_104[0] = 0.0;
    local_104[1] = fVar15 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_120 = (float)local_128 + fVar19;
    local_11c = local_128._4_4_ + DAT_1808ac9f8;
    pfVar12 = local_104;
    if (0.0 <= local_104[1]) {
      pfVar12 = local_104 + 1;
    }
    pfVar9 = local_104 + 2;
    if (local_104[1] <= fVar3) {
      pfVar9 = pfVar12;
    }
    local_160 = (char ****)((ulonglong)local_160 & 0xffffffff00000000);
    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,DAT_1808ac854);
    FUN_1803fe590(lVar11,&local_128,&local_120,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar9 * DAT_1808acb94 + fVar14) << 0x18);
  }
  if (param_5 == '\0') {
    uVar7 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar16);
  }
  else {
    uVar7 = 0xff6163db;
  }
  fVar17 = (float)FUN_18053f0d0(DAT_1808ac7ec);
  fVar15 = local_104[3];
  fVar19 = DAT_1808ac8d4;
  fVar20 = fVar20 + DAT_1808ac8b0;
  fVar18 = (float)FUN_18053fc00(local_104[3] * DAT_1808abfc4 * DAT_1808ac8d4 + DAT_1808ac2f0);
  fVar3 = DAT_1808ac950;
  fVar14 = (float)FUN_18053fc00((DAT_1808ac950 - fVar18) * fVar14 + fVar20);
  if (fVar14 <= fVar20) {
    fVar14 = fVar20;
  }
  local_128 = CONCAT44(local_128._4_4_,fVar14);
  uVar16 = FUN_18053fc00(fVar17 + fVar4);
  local_128 = CONCAT44(uVar16,(float)local_128);
  local_158 = (char ****)CONCAT44(local_158._4_4_,uVar7);
  local_160 = (char ****)CONCAT44(local_160._4_4_,fVar19);
  local_168 = &local_128;
  FUN_1802c60a0(lVar11,param_2,param_3,fVar15);
  ppppcVar10 = (char ****)local_e0;
  if (0xf < local_c8) {
    ppppcVar10 = local_e0[0];
  }
  local_128 = CONCAT44(fVar17 + fVar4,fVar20 + fVar3 + DAT_1808ac8b0);
  if ((((uVar7 & 0xff000000) != 0) && (ppppcVar10 != (char ****)0x0)) &&
     (*(char *)ppppcVar10 != '\0')) {
    local_f0 = *(undefined4 *)(lVar11 + 0x60);
    uStack_ec = *(undefined4 *)(lVar11 + 100);
    uStack_e8 = *(undefined4 *)(lVar11 + 0x68);
    uStack_e4 = *(undefined4 *)(lVar11 + 0x6c);
    local_140 = 0;
    local_148 = local_148 & 0xffffffff00000000;
    local_150 = 0;
    local_160 = (char ****)&local_f0;
    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,uVar7);
    local_158 = ppppcVar10;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x18),lVar11,DAT_1808ac930,
                  &local_128);
  }
  FUN_18000f890(local_e0);
  return uVar5;
}



/* ===== 1802c6980 FUN_1802c6980 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1802c6980(undefined8 param_1,longlong *param_2,longlong param_3,char param_4,float param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  char *****pppppcVar8;
  float *pfVar9;
  undefined4 *puVar10;
  uint uVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  char *******pppppppcVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  longlong lVar23;
  bool bVar24;
  undefined4 extraout_XMM0_Da;
  float fVar25;
  float fVar26;
  undefined4 extraout_XMM0_Da_00;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [24];
  uint local_238;
  char *******local_230;
  char *******local_228;
  undefined8 local_220;
  ulonglong local_218;
  undefined4 local_210;
  undefined4 local_208;
  char local_1f8;
  char local_1f7 [7];
  undefined8 local_1f0;
  char local_1e8;
  float local_1e0 [2];
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  char ******local_1c0;
  undefined8 uStack_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198 [2];
  char *****local_190;
  longlong lStack_188;
  longlong local_180;
  float local_178 [4];
  longlong local_168;
  longlong local_160;
  undefined1 local_150 [24];
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong local_118 [3];
  char *******local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  
  lVar13 = DAT_180ca0a50;
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_258;
  uVar21 = 0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x14f8);
  if (param_3 == 0) {
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0xf;
    local_100 = (char *******)0x0;
  }
  else {
    FUN_1802b3fe0(&local_100,param_3);
  }
  bVar24 = local_f0 != 0;
  local_1e8 = bVar24;
  iVar6 = FUN_1803e8900(lVar13,"##tab");
  fVar30 = DAT_1808ac34c;
  uVar7 = DAT_1808ac118;
  if (bVar24) {
    if (param_4 == '\0') {
      fVar25 = 0.0;
    }
    else {
      fVar25 = DAT_1808ac34c;
    }
    local_1e0[0] = (float)(iVar6 + 1);
    local_1d8 = CONCAT44(fVar25,fVar25);
    uStack_1d0 = (ulonglong)(uint)fVar25;
    local_1c8 = CONCAT44(local_1c8._4_4_,0xffffffff);
    FUN_18034a380(extraout_XMM0_Da,&local_1c0,local_1e0,&local_1d8);
    fVar25 = (float)FUN_1802b3660((longlong)local_1c0 + 0x14,fVar25,uVar7,0);
    local_230 = (char *******)&local_100;
    if (0xf < local_e8) {
      local_230 = local_100;
    }
    local_208 = 0;
    local_218 = 0;
    local_220 = 0;
    local_228 = (char *******)0x0;
    local_238 = 0;
    FUN_18040a2f0(&local_1f0,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
    fVar26 = (float)FUN_18053f0d0((float)local_1f0 + DAT_1808ac2f0);
  }
  else {
    fVar25 = 0.0;
    fVar26 = 0.0;
  }
  fVar29 = *(float *)(lVar13 + 0x118);
  fVar28 = *(float *)(lVar13 + 0x11c);
  local_19c = fVar28 + param_5;
  local_1a0 = fVar29 + ((fVar26 + DAT_1808ac8b0 + DAT_1808ac950) - DAT_1808ac9ac) * fVar25 +
                       DAT_1808ac9ac;
  local_1f0 = (float *)CONCAT44(local_19c - fVar28,local_1a0 - fVar29);
  local_1a8 = fVar29;
  local_1a4 = fVar28;
  FUN_1803ec550(&local_1f0,DAT_1808acda0);
  cVar5 = FUN_1803ec2f0(&local_1a8,iVar6,0,0);
  puVar18 = auStack_258;
  if (cVar5 == '\0') {
    uVar22 = 0;
    goto LAB_1802c72b0;
  }
  local_1f7[0] = '\0';
  local_1f8 = '\0';
  local_238 = 0;
  uVar22 = FUN_180415270(&local_1a8,iVar6,local_1f7,&local_1f8);
  fVar26 = DAT_1808ac1f4;
  if (local_1f8 == '\0') {
    if (local_1f7[0] == '\0') {
      if (param_4 == '\0') {
        fVar27 = 0.0;
      }
      else {
        fVar27 = DAT_1808ac1f4;
      }
    }
    else {
      fVar27 = DAT_1808ac27c;
    }
  }
  else {
    fVar27 = fVar30;
  }
  local_1e0[0] = (float)(iVar6 + 2);
  local_1d8 = CONCAT44(fVar27,fVar27);
  uStack_1d0 = (ulonglong)(uint)fVar27;
  local_1c8 = CONCAT44(local_1c8._4_4_,0xffffffff);
  FUN_18034a380(extraout_XMM0_Da_00,&local_1c0,local_1e0,&local_1d8);
  fVar27 = (float)FUN_1802b3660((longlong)local_1c0 + 0x14,fVar27,uVar7,0);
  lVar13 = *(longlong *)(lVar13 + 0x2c8);
  uVar11 = (int)(longlong)
                (fVar27 * DAT_1808ac1b0 * *(float *)(DAT_180ca0a50 + 0xc9c) *
                 (float)(DAT_180960f44 >> 0x18) + fVar26) << 0x18;
  local_1e0[0] = (float)(uVar11 | DAT_180960f44 & 0xffffff);
  if (uVar11 == 0) {
LAB_1802c6d84:
    fVar27 = DAT_1808ac8e4;
    fVar28 = (float)FUN_180519080((param_5 - DAT_1808ac8e4) * fVar26 + fVar28);
    local_1b0 = (float)FUN_180519080(fVar29 + DAT_1808ac7ac);
    local_1f0 = (float *)CONCAT44(fVar28 + fVar27,local_1b0 + fVar27);
    local_1ac = fVar28;
    FUN_1802c4d70(&local_168,&local_1b0,&local_1f0,DAT_1808ac710);
    local_238 = DAT_1808ac748;
    FUN_1802c5b30(lVar13,&local_168,&local_1b0,&local_1f0);
    local_178[0] = *(float *)((longlong)param_2 + 0xc);
    local_198[0] = 1.0;
    local_1e0[0] = 0.0;
    local_1c0 = (char ******)*param_2;
    uStack_1b8 = (float *)CONCAT44(uStack_1b8._4_4_,(int)param_2[1]);
    pfVar12 = local_1e0;
    if (0.0 <= local_178[0]) {
      pfVar12 = local_178;
    }
    pfVar9 = local_198;
    if (local_178[0] <= fVar30) {
      pfVar9 = pfVar12;
    }
    uStack_1b8 = (float *)CONCAT44(*pfVar9 * *(float *)(DAT_180ca0a50 + 0xc9c),(int)param_2[1]);
    local_238 = FUN_1803d7f30(&local_1c0);
    local_230 = (char *******)((ulonglong)local_230 & 0xffffffff00000000);
    FUN_1802c55d0(lVar13,&local_168,&local_1b0,&local_1f0);
    puVar18 = auStack_258;
    puVar17 = auStack_258;
    if ((local_138 != lStack_130) && (2 < (ulonglong)(local_160 - local_168 >> 3))) {
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      lVar19 = local_168;
      lVar23 = local_160;
      do {
        uVar1 = *(undefined8 *)(lVar19 + uVar21 * 8);
        fVar30 = (float)uVar1;
        fVar28 = (float)((ulonglong)uVar1 >> 0x20);
        uVar21 = uVar21 + 1;
        uVar1 = *(undefined8 *)(lVar19 + (uVar21 % (ulonglong)(lVar23 - lVar19 >> 3)) * 8);
        fVar31 = (float)uVar1;
        fVar32 = (float)((ulonglong)uVar1 >> 0x20);
        fVar27 = fVar32 - fVar28;
        fVar29 = fVar31 - fVar30;
        fVar29 = fVar27 * fVar27 + fVar29 * fVar29;
        if (fVar29 < 0.0) {
          fVar29 = (float)FUN_18051af10(fVar29);
        }
        else {
          fVar29 = SQRT(fVar29);
        }
        fVar29 = (float)FUN_18053ef70(fVar29);
        iVar6 = 1;
        if (1 < (int)fVar29) {
          iVar6 = (int)fVar29;
        }
        iVar15 = 0;
        if (0 < iVar6) {
          do {
            local_1f0 = (float *)CONCAT44((fVar32 - fVar28) * ((float)iVar15 / (float)iVar6) +
                                          fVar28,(fVar31 - fVar30) * ((float)iVar15 / (float)iVar6)
                                                 + fVar30);
            FUN_18008b8c0(&local_1d8);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar6);
          lVar19 = local_168;
          lVar23 = local_160;
        }
      } while (uVar21 < (ulonglong)(lVar23 - lVar19 >> 3));
      local_118[0] = 0;
      local_118[1] = 0;
      local_118[2] = 0;
      FUN_1802c4640(&local_1d8,*(float *)(lVar13 + 0xd0) * fVar26,local_118);
      local_190 = (char *****)0x0;
      lStack_188 = 0;
      local_180 = 0;
      if (uStack_1d0 - local_1d8 != 0) {
        uVar21 = (longlong)(uStack_1d0 - local_1d8) >> 3;
        if (0x3fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_1800118d0();
        }
        lVar23 = uVar21 * 4;
        local_190 = (char *****)FUN_18000fb70(lVar23);
        lVar19 = (longlong)local_190 + lVar23;
        local_180 = lVar19;
        FUN_180540170(local_190,0,lVar23);
        lStack_188 = lVar19;
      }
      lVar19 = local_118[0];
      uVar21 = 0;
      if ((longlong)(uStack_1d0 - local_1d8) >> 3 != 0) {
        do {
          uVar7 = FUN_1802c4e50(&local_168,lVar19 + uVar21 * 8);
          *(undefined4 *)((longlong)local_190 + uVar21 * 4) = uVar7;
          uVar21 = uVar21 + 1;
        } while (uVar21 < (ulonglong)((longlong)(uStack_1d0 - local_1d8) >> 3));
      }
      local_198[0] = 0.0;
      local_198[1] = 0.0;
      local_1c0 = &local_190;
      uStack_1b8 = local_198;
      FUN_180343440(lVar13,&local_1d8,&local_1c0);
      FUN_180068f30(&local_190);
      FUN_1800132b0(local_118);
      FUN_1800132b0(&local_1d8);
    }
    if ((local_1e8 != '\0') && (0.0 < fVar25)) {
      uVar11 = DAT_1809f54bc & 0xffffff;
      uVar20 = (int)(longlong)
                    ((float)(DAT_1809f54bc >> 0x18) * fVar25 * *(float *)(DAT_180ca0a50 + 0xc9c) +
                    fVar26) << 0x18;
      fVar30 = local_1b0 + DAT_1808ac950;
      local_1f0._4_4_ = local_1a4;
      local_1f0._0_4_ = fVar30;
      FUN_1803fc200(lVar13,&local_1f0,&local_1a0,1);
      pppppppcVar16 = (char *******)&local_100;
      if (0xf < local_e8) {
        pppppppcVar16 = local_100;
      }
      local_1f0 = (float *)CONCAT44(local_1f0._4_4_,fVar30);
      fVar30 = (float)FUN_18053f0d0((param_5 - DAT_1808ac930) * fVar26);
      local_1f0 = (float *)CONCAT44(fVar30 + local_1a4,(float)local_1f0);
      if (((uVar20 != 0) && (pppppppcVar16 != (char *******)0x0)) &&
         (*(char *)pppppppcVar16 != '\0')) {
        local_1c0 = *(char *******)(lVar13 + 0x60);
        uStack_1b8 = *(float **)(lVar13 + 0x68);
        local_210 = 0;
        local_218 = local_218 & 0xffffffff00000000;
        local_220 = 0;
        local_230 = &local_1c0;
        local_238 = uVar20 | uVar11;
        local_228 = pppppppcVar16;
        FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar13 + 0x38) + 0x18),lVar13,DAT_1808ac930,
                      &local_1f0);
      }
      iVar15 = *(int *)(lVar13 + 0xa0);
      iVar6 = iVar15 + -1;
      *(int *)(lVar13 + 0xa0) = iVar6;
      if (iVar6 == 0) {
        puVar10 = (undefined4 *)(*(longlong *)(lVar13 + 0x38) + 0x34);
      }
      else {
        puVar10 = (undefined4 *)((longlong)(iVar15 + -2) * 0x10 + *(longlong *)(lVar13 + 0xa8));
      }
      uVar7 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      *(undefined4 *)(lVar13 + 0x60) = *puVar10;
      *(undefined4 *)(lVar13 + 100) = uVar7;
      *(undefined4 *)(lVar13 + 0x68) = uVar3;
      *(undefined4 *)(lVar13 + 0x6c) = uVar4;
      FUN_1803fbff0(lVar13);
    }
    if (local_138 != 0) {
      lVar13 = local_138;
      if ((ulonglong)((local_128 - local_138 >> 2) * 4) < 0x1000) goto LAB_1802c7286;
      lVar13 = *(longlong *)(local_138 + -8);
      puVar18 = auStack_258;
      if (0x1f < (local_138 - lVar13) - 8U) goto LAB_1802c727f;
      goto LAB_1802c7289;
    }
  }
  else {
    local_190 = (char *****)0x0;
    lStack_188 = 0;
    local_180 = 0;
    FUN_1802c3a20(&local_1a8,&local_1a0,DAT_1808ac828,&local_190);
    local_1f0 = local_1e0;
    FUN_180341080(lVar13,&local_190,&local_1f0);
    if (local_190 == (char *****)0x0) goto LAB_1802c6d84;
    uVar14 = (local_180 - (longlong)local_190 >> 3) * 8;
    if (uVar14 < 0x1000) {
      pppppcVar8 = local_190;
LAB_1802c6d7c:
      thunk_FUN_1803d64e0(pppppcVar8,uVar14);
      goto LAB_1802c6d84;
    }
    if ((ulonglong)((longlong)local_190 + (-8 - (longlong)local_190[-1])) < 0x20) {
      uVar14 = uVar14 + 0x27;
      pppppcVar8 = (char *****)local_190[-1];
      goto LAB_1802c6d7c;
    }
LAB_1802c727f:
    lVar13 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar17 = auStack_250;
LAB_1802c7286:
    puVar18 = puVar17;
LAB_1802c7289:
    *(undefined8 *)(puVar18 + -8) = 0x1802c7291;
    thunk_FUN_1803d64e0(lVar13);
    local_138 = 0;
    lStack_130 = 0;
    local_128 = 0;
  }
  *(undefined8 *)(puVar18 + -8) = 0x1802c72a6;
  FUN_1800132b0(local_150);
  *(undefined8 *)(puVar18 + -8) = 0x1802c72af;
  FUN_1800132b0(&local_168);
LAB_1802c72b0:
  *(undefined8 *)(puVar18 + -8) = 0x1802c72b9;
  FUN_18000f890(&local_100);
  *(undefined8 *)(puVar18 + -8) = 0x1802c72c9;
  return uVar22;
}



/* ===== 1802c7320 FUN_1802c7320 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802c7320(undefined8 param_1,char *param_2,undefined8 *param_3,char param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined8 param_9,longlong param_10,float param_11,float param_12)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  float fVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 extraout_XMM0_Da;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined4 local_138;
  char local_f8;
  char local_f7 [7];
  uint local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  uint *local_d8 [2];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  
  lVar2 = DAT_180ca0a50;
  local_98 = DAT_180919500 ^ (ulonglong)auStack_158;
  local_c8 = param_9;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x14f8);
  iVar8 = FUN_1803e8900(lVar2,param_1);
  local_e8 = *(undefined8 *)(lVar2 + 0x118);
  local_e0 = CONCAT44((float)((ulonglong)local_e8 >> 0x20) + (float)((ulonglong)*param_3 >> 0x20),
                      (float)local_e8 + (float)*param_3);
  FUN_1803ec550(param_3,*(undefined4 *)(DAT_180ca0a50 + 0xce0));
  uVar9 = FUN_1803ec2f0(&local_e8,iVar8,0,0);
  puVar15 = auStack_158;
  if ((char)uVar9 == '\0') goto LAB_1802c7922;
  local_f7[0] = '\0';
  local_f8 = '\0';
  local_138 = 0;
  bVar7 = FUN_180415270(&local_e8,iVar8,local_f7,&local_f8);
  fVar19 = DAT_1808ac34c;
  fVar6 = DAT_1808ac1f4;
  if (local_f8 == '\0') {
    if (local_f7[0] == '\0') {
      fVar17 = 0.0;
    }
    else {
      fVar17 = DAT_1808ac1f4;
    }
  }
  else {
    fVar17 = DAT_1808ac34c;
  }
  local_f0[0] = iVar8 + 1;
  local_b8 = (char *)CONCAT44(fVar17,fVar17);
  uStack_b0 = (ulonglong)(uint)fVar17;
  local_a8._0_4_ = 0xffffffff;
  FUN_18034a380(extraout_XMM0_Da,local_d8,local_f0,&local_b8);
  uVar18 = DAT_1808ac118;
  fVar17 = (float)FUN_1802b3660(local_d8[0] + 5,fVar17,DAT_1808ac118,0);
  if (local_f8 == '\0') {
    if (local_f7[0] == '\0') {
      fVar19 = 0.0;
    }
    else {
      fVar19 = fVar6;
    }
  }
  local_f0[0] = iVar8 + 2;
  local_b8 = (char *)CONCAT44(fVar19,fVar19);
  uStack_b0 = (ulonglong)(uint)fVar19;
  local_a8 = CONCAT44(local_a8._4_4_,0xffffffff);
  FUN_18034a380(fVar17,local_d8,local_f0,&local_b8);
  uVar21 = FUN_1802b3660(local_d8[0] + 5,fVar19,uVar18,0);
  lVar2 = *(longlong *)(lVar2 + 0x2c8);
  fVar19 = *(float *)(DAT_180ca0a50 + 0xc9c);
  if (param_4 == '\0') {
    uVar11 = FUN_1802b38e0(param_7,param_8,uVar21);
    puVar15 = auStack_158;
    uVar16 = (int)(longlong)((float)(uVar11 >> 0x18) * fVar19 + fVar6) << 0x18;
    local_f0[0] = uVar16 | uVar11 & 0xffffff;
    if (uVar16 != 0) {
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      FUN_1802c3a20(&local_e8,&local_e0,DAT_1808ac828,&local_b8);
      local_d8[0] = local_f0;
      FUN_180341080(lVar2,&local_b8,local_d8);
      goto LAB_1802c764f;
    }
  }
  else {
    uVar11 = (int)(longlong)
                  (fVar17 * DAT_1808ac1b0 * fVar19 * (float)(DAT_180960f44 >> 0x18) + fVar6) << 0x18
    ;
    local_f0[0] = uVar11 | DAT_180960f44 & 0xffffff;
    puVar15 = auStack_158;
    if (uVar11 != 0) {
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      FUN_1802c3a20(&local_e8,&local_e0,DAT_1808ac7ac,&local_b8);
      local_d8[0] = local_f0;
      FUN_180341080(lVar2,&local_b8,local_d8);
LAB_1802c764f:
      puVar13 = auStack_158;
      puVar14 = auStack_158;
      puVar15 = auStack_158;
      if (local_b8 != (char *)0x0) {
        pcVar12 = local_b8;
        if ((ulonglong)((local_a8 - (longlong)local_b8 >> 3) * 8) < 0x1000) {
LAB_1802c7692:
          puVar14 = puVar13;
        }
        else {
          pcVar12 = *(char **)(local_b8 + -8);
          if ((char *)0x1f < local_b8 + (-8 - (longlong)pcVar12)) {
            pcVar12 = &DAT_00000005;
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar13 = auStack_150;
            goto LAB_1802c7692;
          }
        }
        *(undefined8 *)(puVar14 + -8) = 0x1802c769d;
        thunk_FUN_1803d64e0(pcVar12);
        puVar15 = puVar14;
      }
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x1802c76b2;
  uVar11 = FUN_1802b38e0(param_5,param_6,uVar21);
  uVar16 = (int)(longlong)((float)(uVar11 >> 0x18) * fVar19 + fVar6) << 0x18;
  uVar11 = uVar16 | uVar11 & 0xffffff;
  if (param_10 != 0) {
    *(undefined8 *)(puVar15 + -8) = 0x1802c7714;
    uVar18 = FUN_18053fc00((*(float *)(puVar15 + 0x7c) + *(float *)(puVar15 + 0x74)) * fVar6 -
                           param_12 * DAT_1808ac404 * fVar6);
    *(undefined8 *)(puVar15 + -8) = 0x1802c773c;
    fVar19 = (float)FUN_18053fc00(param_11 * DAT_1808abfc4 * param_12 + DAT_1808ac2f0);
    *(undefined8 *)(puVar15 + -8) = 0x1802c775e;
    uVar20 = FUN_18053fc00((*(float *)(puVar15 + 0x78) + *(float *)(puVar15 + 0x70)) * fVar6 -
                           fVar19 * fVar6);
    *(undefined4 *)(puVar15 + 0x68) = uVar20;
    *(undefined4 *)(puVar15 + 0x6c) = uVar18;
    *(uint *)(puVar15 + 0x30) = uVar11;
    *(float *)(puVar15 + 0x28) = param_12;
    *(undefined1 **)(puVar15 + 0x20) = puVar15 + 0x68;
    *(undefined8 *)(puVar15 + -8) = 0x1802c7791;
    FUN_1802c60a0(lVar2,local_c8,param_10,param_11);
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    *(undefined8 *)(puVar15 + -8) = 0x1802c77af;
    FUN_1802b3fe0(&local_b8,param_2);
    fVar19 = DAT_1808ac930;
    pcVar12 = (char *)&local_b8;
    if (0xf < local_a0) {
      pcVar12 = local_b8;
    }
    *(undefined4 *)(puVar15 + 0x50) = 0;
    *(undefined8 *)(puVar15 + 0x40) = 0;
    *(undefined8 *)(puVar15 + 0x38) = 0;
    *(undefined8 *)(puVar15 + 0x30) = 0;
    *(char **)(puVar15 + 0x28) = pcVar12;
    *(undefined4 *)(puVar15 + 0x20) = 0;
    uVar21 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
    *(undefined8 *)(puVar15 + -8) = 0x1802c7808;
    FUN_18040a2f0(&local_c8,uVar21,DAT_1808ac930,DAT_1808acd08);
    *(undefined8 *)(puVar15 + -8) = 0x1802c7822;
    uVar18 = FUN_18053f0d0(((*(float *)(puVar15 + 0x7c) + *(float *)(puVar15 + 0x74)) - fVar19) *
                           fVar6);
    *(undefined8 *)(puVar15 + -8) = 0x1802c7837;
    fVar17 = (float)FUN_18053f0d0((float)local_c8 + DAT_1808ac2f0);
    *(undefined8 *)(puVar15 + -8) = 0x1802c7854;
    uVar20 = FUN_18053f0d0(((*(float *)(puVar15 + 0x78) + *(float *)(puVar15 + 0x70)) - fVar17) *
                           fVar6);
    *(undefined4 *)(puVar15 + 0x68) = uVar20;
    *(undefined4 *)(puVar15 + 0x6c) = uVar18;
    *(undefined8 *)(puVar15 + -8) = 0x1802c7875;
    FUN_1803fc200(lVar2,puVar15 + 0x70,puVar15 + 0x78,1);
    pcVar12 = (char *)&local_b8;
    if (0xf < local_a0) {
      pcVar12 = local_b8;
    }
    if (((uVar16 != 0) && (pcVar12 != (char *)0x0)) && (*pcVar12 != '\0')) {
      local_c8 = *(undefined8 *)(lVar2 + 0x60);
      uStack_c0 = *(undefined4 *)(lVar2 + 0x68);
      uStack_bc = *(undefined4 *)(lVar2 + 0x6c);
      lVar3 = *(longlong *)(lVar2 + 0x38);
      *(undefined4 *)(puVar15 + 0x48) = 0;
      *(undefined4 *)(puVar15 + 0x40) = 0;
      *(undefined8 *)(puVar15 + 0x38) = 0;
      *(char **)(puVar15 + 0x30) = pcVar12;
      *(undefined8 **)(puVar15 + 0x28) = &local_c8;
      *(uint *)(puVar15 + 0x20) = uVar11;
      uVar21 = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 *)(puVar15 + -8) = 0x1802c78d8;
      FUN_18040a900(uVar21,lVar2,fVar19,puVar15 + 0x68);
    }
    iVar1 = *(int *)(lVar2 + 0xa0);
    iVar8 = iVar1 + -1;
    *(int *)(lVar2 + 0xa0) = iVar8;
    if (iVar8 == 0) {
      puVar10 = (undefined4 *)(*(longlong *)(lVar2 + 0x38) + 0x34);
    }
    else {
      puVar10 = (undefined4 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(lVar2 + 0xa8));
    }
    uVar18 = puVar10[1];
    uVar20 = puVar10[2];
    uVar5 = puVar10[3];
    *(undefined4 *)(lVar2 + 0x60) = *puVar10;
    *(undefined4 *)(lVar2 + 100) = uVar18;
    *(undefined4 *)(lVar2 + 0x68) = uVar20;
    *(undefined4 *)(lVar2 + 0x6c) = uVar5;
    *(undefined8 *)(puVar15 + -8) = 0x1802c7914;
    FUN_1803fbff0(lVar2);
    *(undefined8 *)(puVar15 + -8) = 0x1802c791e;
    FUN_18000f890(&local_b8);
  }
  uVar9 = (ulonglong)bVar7;
LAB_1802c7922:
  *(undefined8 *)(puVar15 + -8) = 0x1802c792e;
  return uVar9;
}



/* ===== 1802c7970 FUN_1802c7970 ===== */

undefined1 FUN_1802c7970(undefined4 param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  int iVar14;
  float fVar15;
  float local_res10 [2];
  
  iVar2 = (int)param_2[1];
  uVar12 = 0;
  uVar13 = 0;
  FUN_1803ec830();
  fVar15 = (float)FUN_18053f0d0();
  uVar8 = DAT_1808acc00;
  uVar7 = DAT_1808ac8d4;
  fVar6 = DAT_1808ac1f4;
  fVar5 = DAT_1808ac1b0;
  fVar4 = DAT_1808ac118;
  iVar14 = 0;
  fVar1 = *(float *)(DAT_180ca0a50 + 0xcec);
  if (0 < iVar2) {
    do {
      uVar11 = DAT_180960ec0;
      if (*(int *)param_2[2] == iVar14) {
        uVar11 = DAT_1809f54bc;
      }
      FUN_1803e8a70(param_1);
      FUN_1803e8a70(iVar14);
      local_res10[1] = 25.0;
      local_res10[0] = (fVar15 - (float)(iVar2 + -1) * fVar1) / (float)iVar2;
      cVar9 = FUN_1802c7320("##mode",*(undefined8 *)(*param_2 + (longlong)iVar14 * 0x18),local_res10
                            ,0,uVar11,uVar11,
                            (int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar4 + fVar6) << 0x18
                            | DAT_180960f44 & 0xffffff,
                            (int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar5 + fVar6) << 0x18
                            | DAT_180960f44 & 0xffffff,0,0,uVar8,uVar7);
      if (cVar9 != '\0') {
        iVar3 = *(int *)param_2[2];
        *(int *)param_2[2] = iVar14;
        uVar13 = uVar12;
        if (iVar3 != iVar14) {
          uVar13 = 1;
          uVar12 = 1;
        }
      }
      lVar10 = DAT_180ca0a50;
      iVar3 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
      if (iVar3 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
        lVar10 = DAT_180ca0a50;
      }
      else {
        *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar3 + -1;
      }
      iVar3 = *(int *)(*(longlong *)(lVar10 + 0x14f8) + 0x108);
      if (iVar3 < 2) {
        FUN_1803ebc00("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(lVar10 + 0x14f8) + 0x108) = iVar3 + -1;
      }
      if (iVar14 != (int)param_2[1] + -1) {
        FUN_1803ec6c0(0);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)param_2[1]);
  }
  return uVar13;
}



/* ===== 1802c7c10 FUN_1802c7c10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1802c7c10(longlong *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  int *piVar12;
  char ****ppppcVar13;
  undefined1 *puVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  char ****local_180;
  char ****local_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined4 local_160;
  undefined4 local_158;
  float local_148;
  float local_144;
  float local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  int local_128;
  int local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  char ****local_100 [3];
  ulonglong local_e8;
  ulonglong local_e0;
  
  lVar20 = DAT_180ca0a50;
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  uVar18 = 0;
  uVar19 = 0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar20 + 0x14f8);
  lVar5 = *(longlong *)(lVar4 + 0x2c8);
  fVar1 = *(float *)(lVar20 + 0xc9c);
  lVar20 = *(longlong *)(lVar20 + 0x11f0);
  local_124 = (int)param_1[1] + -1;
  local_128 = 0;
  iVar2 = *(int *)param_1[2];
  piVar15 = &local_128;
  if (-1 < iVar2) {
    piVar15 = (int *)param_1[2];
  }
  piVar12 = &local_124;
  if (iVar2 <= local_124) {
    piVar12 = piVar15;
  }
  iVar2 = *piVar12;
  puVar6 = *(undefined1 **)(*param_1 + (longlong)iVar2 * 0x18);
  puVar14 = &DAT_18058b643;
  if (puVar6 != (undefined1 *)0x0) {
    puVar14 = puVar6;
  }
  FUN_1802b3fe0(local_100,puVar14);
  uVar8 = DAT_1808acd08;
  uVar7 = DAT_1808ac930;
  local_180 = (char ****)local_100;
  if (0xf < local_e8) {
    local_180 = local_100[0];
  }
  if (lVar20 == 0) {
    lVar16 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  else {
    lVar16 = lVar20;
  }
  local_158 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = (char ****)0x0;
  local_188 = (float *)((ulonglong)local_188._4_4_ << 0x20);
  FUN_18040a2f0(&local_140,lVar16,DAT_1808ac930,DAT_1808acd08);
  fVar21 = (float)FUN_18053f0d0(local_140 + DAT_1808ac2f0);
  fVar22 = (float)FUN_18053f0d0(DAT_1808ac920);
  fVar21 = fVar22 + fVar21 + DAT_1808ac900;
  local_130 = *(undefined8 *)(lVar4 + 0x118);
  fVar22 = (float)local_130;
  FUN_1803e89e0("##mode_combo");
  local_144 = 23.706;
  local_148 = fVar21;
  cVar9 = FUN_180415e30("##frame",&local_148,0);
  cVar10 = FUN_1803dd930(0);
  if ((cVar10 == '\0') &&
     ((*(int *)(DAT_180ca0a50 + 0x1578) == 0 ||
      (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))))) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = DAT_1808ac34c;
  }
  local_148 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  local_114 = 0;
  local_110 = 0xffffffff;
  local_120 = fVar26;
  local_11c = fVar26;
  local_118 = fVar26;
  FUN_18034a380(extraout_XMM0_Da,&local_140,&local_148,&local_120);
  fVar24 = DAT_1808ac118;
  uVar23 = FUN_1802b3660(CONCAT44(uStack_13c,local_140) + 0x14,fVar26,DAT_1808ac118,0);
  fVar26 = DAT_1808ac1f4;
  local_144 = local_130._4_4_ + DAT_1808ac97c;
  local_148 = fVar22 + fVar21;
  uVar23 = FUN_1802b38e0((int)(longlong)
                              ((float)(DAT_180960f44 >> 0x18) * fVar1 * fVar24 + DAT_1808ac1f4) <<
                         0x18 | DAT_180960f44 & 0xffffff,
                         (int)(longlong)((float)(DAT_180960ef4 >> 0x18) * fVar1 + DAT_1808ac1f4) <<
                         0x18 | DAT_180960ef4 & 0xffffff,uVar23);
  fVar24 = DAT_1808ac7ac;
  local_180 = (char ****)((ulonglong)local_180 & 0xffffffff00000000);
  local_188._0_4_ = DAT_1808ac7ac;
  FUN_1803fe590(lVar5,&local_130,&local_148,uVar23);
  ppppcVar13 = (char ****)local_100;
  if (0xf < local_e8) {
    ppppcVar13 = local_100[0];
  }
  uVar11 = (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * fVar1 + fVar26) << 0x18;
  local_148 = fVar22 + fVar24;
  fVar24 = local_130._4_4_;
  local_144 = local_130._4_4_ + DAT_1808ac658;
  if (((uVar11 != 0) && (ppppcVar13 != (char ****)0x0)) && (*(char *)ppppcVar13 != '\0')) {
    local_188._0_4_ = (float)(DAT_180960ec0 & 0xffffff | uVar11);
    if (lVar20 == 0) {
      lVar20 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x18);
    }
    local_140 = *(float *)(lVar5 + 0x60);
    uStack_13c = *(undefined4 *)(lVar5 + 100);
    uStack_138 = *(undefined4 *)(lVar5 + 0x68);
    uStack_134 = *(undefined4 *)(lVar5 + 0x6c);
    local_160 = 0;
    local_168 = local_168 & 0xffffffff00000000;
    local_170 = 0;
    local_180 = (char ****)&local_140;
    local_178 = ppppcVar13;
    FUN_18040a900(lVar20,lVar5,uVar7,&local_148);
  }
  uVar11 = DAT_180960ec0;
  local_148 = ((fVar22 + fVar21) - DAT_1808ac7ac) - _DAT_1808ac858;
  local_144 = (float)FUN_18053f0d0(fVar24 + DAT_1808ac728);
  local_144 = local_144 + DAT_1808ac34c;
  local_178 = (char ****)
              CONCAT44(local_178._4_4_,
                       (int)(longlong)((float)(uVar11 >> 0x18) * fVar1 + fVar26) << 0x18 |
                       uVar11 & 0xffffff);
  local_180 = (char ****)CONCAT44(local_180._4_4_,DAT_1808ac880);
  local_188 = &local_148;
  FUN_1802c60a0(lVar5,"picker_chevron",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M201 343C213 356 234 356 246 343L406 183C419 171 419 150 406 138C394 125 373 125 361 138L224 275L86 138C74 125 53 125 41 138C28 150 28 171 41 183L201 343L201 343ZM201 343Z\"/></svg>"
                ,DAT_1808acbe4);
  if (cVar9 != '\0') {
    FUN_1802b4d80("##list");
  }
  fVar1 = DAT_1808ac980;
  iVar17 = 0;
  fVar24 = fVar21;
  fVar25 = fVar21;
  if (0 < (int)param_1[1]) {
    do {
      puVar6 = *(undefined1 **)(*param_1 + (longlong)iVar17 * 0x18);
      puVar14 = &DAT_18058b643;
      if (puVar6 != (undefined1 *)0x0) {
        puVar14 = puVar6;
      }
      local_180 = (char ****)FUN_1802b3fe0(&local_120,puVar14);
      if (0xf < local_180[3]) {
        local_180 = (char ****)*local_180;
      }
      local_158 = 0;
      local_168 = 0;
      local_170 = 0;
      local_178 = (char ****)0x0;
      local_188 = (float *)((ulonglong)local_188 & 0xffffffff00000000);
      FUN_18040a2f0(&local_140,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),uVar7,uVar8);
      fVar24 = local_140 + fVar1;
      if (local_140 + fVar1 <= fVar25) {
        fVar24 = fVar25;
      }
      FUN_18000f890(&local_120);
      iVar17 = iVar17 + 1;
      fVar25 = fVar24;
    } while (iVar17 < (int)param_1[1]);
  }
  local_144 = 23.706;
  local_140 = (fVar21 - fVar24) * fVar26 + fVar22;
  uStack_13c = local_130._4_4_;
  local_148 = fVar24;
  cVar9 = FUN_1802b8820(&local_140,&local_148);
  if (cVar9 != '\0') {
    iVar17 = 0;
    if (0 < (int)param_1[1]) {
      do {
        FUN_1803e8a70(iVar17);
        puVar6 = *(undefined1 **)(*param_1 + (longlong)iVar17 * 0x18);
        puVar14 = &DAT_18058b643;
        if (puVar6 != (undefined1 *)0x0) {
          puVar14 = puVar6;
        }
        cVar9 = FUN_1802b74f0(puVar14,iVar17 == iVar2,0,0);
        if (cVar9 != '\0') {
          uVar19 = uVar18;
          if (*(int *)param_1[2] != iVar17) {
            uVar19 = 1;
          }
          *(int *)param_1[2] = iVar17;
          FUN_1803ee1f0();
          uVar18 = uVar19;
        }
        iVar3 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar3 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar3 + -1;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)param_1[1]);
    }
    FUN_1802b5590();
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  FUN_18000f890(local_100);
  return uVar19;
}



/* ===== 1802c82e0 FUN_1802c82e0 ===== */

void FUN_1802c82e0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  lVar5 = DAT_180ca0a50;
  uVar4 = DAT_1808acda0;
  local_res8 = 0.0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x14f8);
  local_resc = 1.0;
  fVar1 = *(float *)(lVar5 + 0x28);
  fVar2 = *(float *)(lVar5 + 0x11c);
  fVar3 = *(float *)(lVar5 + 0x30);
  FUN_1803ec550(&local_res8,uVar4);
  local_resc = fVar2 + DAT_1808ac34c;
  local_res8 = fVar1 + fVar3;
  local_res10 = fVar1;
  local_res14 = fVar2;
  FUN_1803fe590(*(undefined8 *)(lVar5 + 0x2c8),&local_res10,&local_res8,
                (int)(longlong)
                     ((float)(DAT_180960f48 >> 0x18) * *(float *)(DAT_180ca0a50 + 0xc9c) +
                     DAT_1808ac1f4) << 0x18 | DAT_180960f48 & 0xffffff,0,0);
  return;
}



/* ===== 1802c8420 FUN_1802c8420 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802c8420(int param_1,float *param_2,char param_3,undefined1 *param_4)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  float *pfVar9;
  byte *_Src;
  uint7 uVar12;
  longlong lVar10;
  float *pfVar11;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_2a8 [32];
  float *local_288;
  float *local_280;
  undefined *local_278;
  ulonglong local_270;
  char *local_268;
  char *local_260;
  undefined4 local_258;
  float local_250;
  char local_248;
  float local_240 [2];
  char local_238;
  float local_230 [2];
  float local_228;
  float local_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  float local_208;
  float local_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  float local_1e0 [2];
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  int local_1c0 [2];
  undefined8 local_1b8;
  float local_1b0;
  float local_1ac [4];
  float local_19c;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined1 *local_180;
  longlong local_178 [4];
  longlong local_158;
  longlong local_150;
  undefined1 local_140 [24];
  longlong local_128;
  longlong local_120;
  float local_108;
  undefined1 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  ulonglong local_e0;
  
  fVar1 = DAT_1808acb94;
  fVar3 = DAT_1808ac1f4;
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_2a8;
  local_238 = param_3;
  local_1e0[1] = 3.57331e-43;
  local_1e0[0] = 0.0;
  if (*param_2 < 0.0) {
    fVar21 = DAT_1808acd84;
  }
  else {
    fVar21 = DAT_1808ac1f4;
  }
  local_224 = (float)(int)(*param_2 * DAT_1808acb94 + fVar21);
  pfVar11 = local_1e0;
  if (-1 < (int)local_224) {
    pfVar11 = &local_224;
  }
  pfVar9 = local_1e0 + 1;
  if ((int)local_224 < 0x100) {
    pfVar9 = pfVar11;
  }
  local_230[0] = *pfVar9;
  if (param_2[1] < 0.0) {
    fVar21 = DAT_1808acd84;
  }
  else {
    fVar21 = DAT_1808ac1f4;
  }
  local_224 = (float)(int)(param_2[1] * DAT_1808acb94 + fVar21);
  pfVar11 = local_1e0;
  if (-1 < (int)local_224) {
    pfVar11 = &local_224;
  }
  pfVar9 = local_1e0 + 1;
  if ((int)local_224 < 0x100) {
    pfVar9 = pfVar11;
  }
  fVar21 = *pfVar9;
  if (param_2[2] < 0.0) {
    fVar24 = DAT_1808acd84;
  }
  else {
    fVar24 = DAT_1808ac1f4;
  }
  local_224 = (float)(int)(param_2[2] * DAT_1808acb94 + fVar24);
  pfVar11 = local_1e0;
  if (-1 < (int)local_224) {
    pfVar11 = &local_224;
  }
  pfVar9 = local_1e0 + 1;
  if ((int)local_224 < 0x100) {
    pfVar9 = pfVar11;
  }
  fVar24 = *pfVar9;
  fVar25 = DAT_1808acd84;
  if (0.0 <= param_2[3]) {
    fVar25 = DAT_1808ac1f4;
  }
  local_224 = (float)(int)(param_2[3] * DAT_1808acb94 + fVar25);
  pfVar11 = local_1e0;
  if (-1 < (int)local_224) {
    pfVar11 = &local_224;
  }
  pfVar9 = local_1e0 + 1;
  if ((int)local_224 < 0x100) {
    pfVar9 = pfVar11;
  }
  local_228 = *pfVar9;
  local_100 = 0;
  local_f8 = 0;
  local_1c0[0] = param_1;
  local_180 = param_4;
  if (param_3 == '\0') {
    local_280 = (float *)CONCAT44(local_280._4_4_,fVar24);
    local_288 = (float *)CONCAT44(local_288._4_4_,fVar21);
    snprintf(&local_100,9,"%02X%02X%02X",local_230[0]);
  }
  else {
    local_278 = (undefined *)CONCAT44(local_278._4_4_,local_228);
    local_280 = (float *)CONCAT44(local_280._4_4_,fVar24);
    local_288 = (float *)CONCAT44(local_288._4_4_,fVar21);
    snprintf(&local_100,9,"%02X%02X%02X%02X",local_230[0]);
  }
  lVar10 = DAT_180ca0a50;
  fVar29 = DAT_1808ac91c;
  fVar25 = DAT_1808ac2f0;
  lVar18 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar18 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar18 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_1e8 = DAT_180ca0a50 + 0xc90;
  fVar30 = 0.0;
  if (param_3 != '\0') {
    lVar13 = lVar18;
    if (lVar18 == 0) {
      lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_258 = 0;
    local_268 = (char *)0x0;
    local_270 = 0;
    local_278 = (undefined *)0x0;
    local_280 = (float *)&DAT_18075c458;
    local_288 = (float *)((ulonglong)local_288 & 0xffffffff00000000);
    FUN_18040a2f0(&local_200,lVar13);
    fVar30 = *(float *)(lVar10 + 0xcdc);
    fVar19 = (float)FUN_18053f0d0((float)local_200 + fVar25);
    fVar30 = fVar19 + fVar30 + fVar30 + *(float *)(lVar10 + 0xcec);
  }
  lVar13 = lVar18;
  if (lVar18 == 0) {
    lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_258 = 0;
  local_268 = (char *)0x0;
  local_270 = 0;
  local_278 = (undefined *)0x0;
  local_280 = (float *)&DAT_1806eabcc;
  local_288 = (float *)((ulonglong)local_288 & 0xffffffff00000000);
  FUN_18040a2f0(&local_200,lVar13);
  fVar19 = *(float *)(lVar10 + 0xcdc);
  fVar20 = (float)FUN_18053f0d0((float)local_200 + fVar25);
  fVar19 = fVar20 + DAT_1808ac8b0 + fVar19 + fVar19 + DAT_1808ac34c;
  if (lVar18 == 0) {
    lVar13 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  else {
    lVar13 = lVar18;
  }
  local_258 = 0;
  local_268 = (char *)0x0;
  local_270 = 0;
  local_278 = (undefined *)0x0;
  local_280 = (float *)&local_100;
  local_288 = (float *)((ulonglong)local_288 & 0xffffffff00000000);
  FUN_18040a2f0(&local_200,lVar13);
  uVar22 = FUN_18053f0d0((float)local_200 + fVar25);
  fVar25 = fVar19 + *(float *)(lVar10 + 0xcdc) + (float)uVar22;
  local_240[0] = (float)(local_1c0[0] + 0xb);
  plVar8 = (longlong *)FUN_18034f560(uVar22,&local_220,local_240);
  lVar10 = *plVar8;
  local_200 = *(longlong **)param_2;
  uStack_1f8 = *(undefined8 *)(param_2 + 2);
  iVar5 = FUN_1803d7f30(&local_200);
  plVar8 = (longlong *)FUN_18034e3d0(extraout_XMM0_Qa,&local_200,local_1c0);
  lVar16 = DAT_180ca0a50;
  lVar13 = *plVar8;
  if (iVar5 != *(int *)(lVar13 + 0x18)) {
    *(int *)(lVar13 + 0x18) = iVar5;
    *(double *)(lVar13 + 0x20) = *(double *)(lVar16 + 0x10) + DAT_1808ac448;
  }
  if (((*(char *)(*(longlong *)(lVar16 + 0x14f8) + 0xd3) != '\0') ||
      (fVar20 = *(float *)(lVar10 + 0x14), fVar20 < fVar25)) || (fVar20 == 0.0)) {
    *(float *)(lVar10 + 0x14) = fVar25;
    *(float *)(lVar10 + 0x18) = fVar25;
    *(float *)(lVar10 + 0x1c) = fVar25;
    *(undefined4 *)(lVar10 + 0x20) = 0x3e4ccccd;
    *(undefined4 *)(lVar10 + 0x24) = 0xffffffff;
    fVar20 = fVar25;
  }
  else if (*(double *)(lVar13 + 0x20) <= *(double *)(lVar16 + 0x10)) {
    local_240[0] = (float)(local_1c0[0] + 0xb);
    local_1d8 = CONCAT44(fVar25,fVar25);
    uStack_1d0 = (ulonglong)(uint)fVar25;
    local_1c8 = CONCAT44(local_1c8._4_4_,0xffffffff);
    FUN_18034a380(lVar13,&local_220,local_240,&local_1d8);
    fVar20 = (float)FUN_1802b3660((longlong)local_220 + 0x14);
    lVar16 = DAT_180ca0a50;
  }
  fVar29 = *(float *)(local_1e8 + 0x50) + *(float *)(local_1e8 + 0x50) + fVar29;
  *(undefined1 *)(*(longlong *)(lVar16 + 0x14f8) + 0xce) = 1;
  plVar8 = *(longlong **)(lVar16 + 0x14f8);
  fVar25 = (((*(float *)(plVar8 + 0x50) - fVar20) - fVar30) - fVar29) - *(float *)(local_1e8 + 0x5c)
  ;
  pfVar11 = (float *)(plVar8 + 0x23);
  *pfVar11 = fVar25;
  pfVar9 = (float *)(plVar8 + 0x26);
  if (*(float *)(plVar8 + 0x26) <= fVar25 && fVar25 != *(float *)(plVar8 + 0x26)) {
    pfVar9 = pfVar11;
  }
  *(float *)(plVar8 + 0x26) = *pfVar9;
  local_1f0 = *(longlong *)pfVar11;
  fVar25 = (float)local_1f0;
  local_f0 = local_100;
  local_e8 = local_f8;
  local_200 = plVar8;
  iVar5 = FUN_1803d7830("##Text",0,
                        *(undefined4 *)(plVar8[0x22] + -4 + (longlong)(int)plVar8[0x21] * 4));
  if (*(int *)(*plVar8 + 0x155c) == iVar5) {
    FUN_1803f5630(iVar5,0xb,"##Text");
    lVar16 = DAT_180ca0a50;
  }
  fVar26 = local_1f0._4_4_ + fVar29;
  fVar27 = fVar25 + fVar20;
  lVar10 = *(longlong *)(lVar16 + 0x14f8);
  if (fVar25 <= *(float *)(lVar10 + 0x268)) {
    fVar25 = *(float *)(lVar10 + 0x268);
  }
  if (*(float *)(lVar16 + 0x110) < fVar25 - *(float *)(lVar16 + 0xd04)) {
LAB_1802c8a6c:
    bVar2 = false;
  }
  else {
    fVar25 = local_1f0._4_4_;
    if (local_1f0._4_4_ <= *(float *)(lVar10 + 0x26c)) {
      fVar25 = *(float *)(lVar10 + 0x26c);
    }
    if (*(float *)(lVar16 + 0x114) < fVar25 - *(float *)(lVar16 + 0xd08)) goto LAB_1802c8a6c;
    fVar25 = fVar27;
    if (*(float *)(lVar10 + 0x270) <= fVar27) {
      fVar25 = *(float *)(lVar10 + 0x270);
    }
    if (*(float *)(lVar16 + 0xd04) + fVar25 <= *(float *)(lVar16 + 0x110)) goto LAB_1802c8a6c;
    fVar25 = fVar26;
    if (*(float *)(lVar10 + 0x274) <= fVar26) {
      fVar25 = *(float *)(lVar10 + 0x274);
    }
    if (*(float *)(lVar16 + 0xd08) + fVar25 <= *(float *)(lVar16 + 0x114)) goto LAB_1802c8a6c;
    bVar2 = true;
  }
  if (*(int *)(lVar16 + 0x1578) == iVar5) {
    fVar25 = DAT_1808ac34c;
  }
  else if (bVar2) {
    fVar25 = fVar3;
  }
  else {
    fVar25 = 0.0;
  }
  local_240[0] = (float)(iVar5 + 1);
  local_1d8 = CONCAT44(fVar25,fVar25);
  uStack_1d0 = (ulonglong)(uint)fVar25;
  local_1c8 = CONCAT44(local_1c8._4_4_,0xffffffff);
  FUN_18034a380();
  FUN_1802b3660((longlong)local_220 + 0x14);
  uVar6 = FUN_1802b38e0((int)(longlong)((float)(DAT_180960f44 >> 0x18) * DAT_1808ac118 + fVar3) <<
                        0x18 | DAT_180960f44 & 0xffffff,
                        (int)(longlong)((float)(DAT_180960f44 >> 0x18) * DAT_1808ac1b0 + fVar3) <<
                        0x18 | DAT_180960f44 & 0xffffff);
  lVar13 = local_1e8;
  local_210 = CONCAT44(fVar26,fVar27);
  local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
  local_288 = (float *)CONCAT44(local_288._4_4_,DAT_1808ac7ac);
  FUN_1803fe590(plVar8[0x59],&local_1f0,&local_210,
                (int)(longlong)((float)(uVar6 >> 0x18) * *(float *)(local_1e8 + 0xc) + fVar3) <<
                0x18 | uVar6 & 0xffffff);
  lVar10 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1eb0) = *(uint *)(DAT_180ca0a50 + 0x1eb0) | 1;
  *(float *)(lVar10 + 0x1ec8) = fVar20;
  local_210 = CONCAT44(*(undefined4 *)(lVar13 + 0x50),fVar19);
  FUN_1803d89a0(0xb,&local_210);
  FUN_1803d8730(7,0);
  FUN_1803d8730(8,0);
  FUN_1803d8730(9,0);
  FUN_1803d8730(0,(int)(longlong)((float)(DAT_180960ec0 >> 0x18) + fVar3) << 0x18 |
                  DAT_180960ec0 & 0xffffff);
  lVar10 = lVar18;
  if (lVar18 == 0) {
    lVar10 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_220 = *(longlong **)(DAT_180ca0a50 + 0x11f0);
  uStack_218 = (undefined8 *)
               CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                        *(undefined4 *)(DAT_180ca0a50 + 0x1204));
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_220);
  FUN_1803e8680(lVar10);
  local_248 = '\0';
  local_210 = 0;
  local_270 = 0;
  local_278 = (undefined *)0x0;
  local_280 = (float *)CONCAT44(local_280._4_4_,0x100a);
  local_288 = (float *)&local_210;
  cVar4 = FUN_18041c570("##Text",0,&local_f0,9);
  if (cVar4 == '\0') {
LAB_1802c8d73:
    fVar25 = local_228;
    fVar19 = local_230[0];
  }
  else {
    _Src = (byte *)&local_f0;
    while ((*_Src < 0x24 && ((0x900000200U >> ((longlong)(char)*_Src & 0x3fU) & 1) != 0))) {
      _Src = _Src + 1;
    }
    local_208 = 0.0;
    local_204 = 0.0;
    local_108 = 0.0;
    local_240[0] = 0.0;
    if (local_238 == '\0') {
      local_288 = &local_108;
      iVar5 = sscanf_s((char *)_Src,"%02X%02X%02X",&local_208,&local_204);
    }
    else {
      local_280 = local_240;
      local_288 = &local_108;
      iVar5 = sscanf_s((char *)_Src,"%02X%02X%02X%02X",&local_208,&local_204);
    }
    if (iVar5 < 1) goto LAB_1802c8d73;
    if (1 < iVar5) {
      fVar21 = local_204;
    }
    if (2 < iVar5) {
      fVar24 = local_108;
    }
    fVar25 = local_228;
    if (3 < iVar5) {
      fVar25 = local_240[0];
    }
    local_248 = '\x01';
    fVar19 = local_208;
  }
  lVar10 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    FUN_1803e8680(*(undefined8 *)
                   (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -0x10 +
                   (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) * 0x10));
    *(int *)(lVar10 + 0x1fe0) = *(int *)(lVar10 + 0x1fe0) + -1;
  }
  FUN_1803d87f0(4);
  FUN_1803d8a40(1);
  fVar28 = DAT_1808ac8b0;
  fVar20 = *(float *)(DAT_180ca0a50 + 0x1ef4);
  fVar26 = *(float *)(DAT_180ca0a50 + 0x1ef8);
  lVar10 = local_200[0x59];
  fVar23 = ((*(float *)(DAT_180ca0a50 + 0x1f00) - fVar26) - DAT_1808ac8b0) * fVar3 + fVar26;
  fVar27 = fVar20 + *(float *)(local_1e8 + 0x4c);
  local_1f0 = CONCAT44(fVar23,fVar27);
  local_1b8 = CONCAT44(fVar23 + DAT_1808ac8b0,fVar27 + DAT_1808ac8b0);
  local_210 = lVar10;
  local_204 = fVar20;
  local_108 = fVar26;
  FUN_1802c4d70(&local_158,&local_1f0,&local_1b8);
  fVar27 = DAT_1808ac34c;
  FUN_1803d8870(0);
  local_288._0_4_ = DAT_1808ac710;
  FUN_1802c5b30(lVar10,&local_158,&local_1f0,&local_1b8);
  local_208 = (float)(int)fVar19 / fVar1;
  local_1ac[3] = (float)(int)fVar21 / fVar1;
  local_19c = (float)(int)fVar24 / fVar1;
  local_1b0 = (float)(int)fVar25 / fVar1;
  local_240[0] = local_1b0;
  local_228 = 1.0;
  local_230[0] = 0.0;
  local_220 = (longlong *)CONCAT44(local_1ac[3],(float)(int)fVar19 / fVar1);
  uStack_218 = (undefined8 *)CONCAT44(uStack_218._4_4_,local_19c);
  pfVar11 = local_230;
  if (0.0 <= local_1b0) {
    pfVar11 = local_240;
  }
  pfVar9 = &local_228;
  if (local_1b0 <= fVar27) {
    pfVar9 = pfVar11;
  }
  uStack_218 = (undefined8 *)CONCAT44(*pfVar9 * *(float *)(DAT_180ca0a50 + 0xc9c),local_19c);
  uVar7 = FUN_1803d7f30(&local_220);
  local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
  local_288 = (float *)CONCAT44(local_288._4_4_,uVar7);
  FUN_1802c55d0(lVar10,&local_158,&local_1f0,&local_1b8);
  if ((local_128 != local_120) && (0x17 < (ulonglong)(local_150 - local_158))) {
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uVar17 = 0;
    lVar13 = local_158;
    lVar16 = local_150;
    if (local_150 - local_158 >> 3 != 0) {
      do {
        fVar1 = *(float *)(lVar13 + uVar17 * 8);
        fVar21 = *(float *)(lVar13 + 4 + uVar17 * 8);
        uVar17 = uVar17 + 1;
        uVar14 = uVar17 % (ulonglong)(lVar16 - lVar13 >> 3);
        fVar25 = *(float *)(lVar13 + uVar14 * 8) - fVar1;
        fVar19 = *(float *)(lVar13 + 4 + uVar14 * 8) - fVar21;
        fVar24 = fVar19 * fVar19 + fVar25 * fVar25;
        if (fVar24 < 0.0) {
          uVar14 = FUN_18051af10();
        }
        else {
          uVar14 = (ulonglong)(uint)SQRT(fVar24);
        }
        fVar24 = (float)FUN_18053ef70(uVar14);
        iVar5 = 1;
        if (1 < (int)fVar24) {
          iVar5 = (int)fVar24;
        }
        iVar15 = 0;
        if (0 < iVar5) {
          do {
            local_1f0 = CONCAT44(fVar19 * ((float)iVar15 / (float)iVar5) + fVar21,
                                 fVar25 * ((float)iVar15 / (float)iVar5) + fVar1);
            FUN_18008b8c0(&local_1d8);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar5);
          lVar13 = local_158;
          lVar16 = local_150;
        }
      } while (uVar17 < (ulonglong)(lVar16 - lVar13 >> 3));
      lVar10 = local_210;
      fVar26 = local_108;
      fVar20 = local_204;
      fVar28 = DAT_1808ac8b0;
    }
    local_178[0] = 0;
    local_178[1] = 0;
    local_178[2] = 0;
    FUN_1802c4640(&local_1d8,*(float *)(lVar10 + 0xd0) * fVar3,local_178);
    local_198 = 0;
    lStack_190 = 0;
    local_188 = 0;
    if (uStack_1d0 - local_1d8 != 0) {
      uVar17 = (longlong)(uStack_1d0 - local_1d8) >> 3;
      if (0x3fffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      lVar13 = uVar17 * 4;
      local_198 = FUN_18000fb70(lVar13);
      lVar10 = local_198 + lVar13;
      local_188 = lVar10;
      FUN_180540170(local_198,0,lVar13);
      lStack_190 = lVar10;
    }
    lVar10 = local_178[0];
    uVar17 = 0;
    if ((longlong)(uStack_1d0 - local_1d8) >> 3 != 0) {
      do {
        uVar7 = FUN_1802c4e50(&local_158,lVar10 + uVar17 * 8);
        *(undefined4 *)(local_198 + uVar17 * 4) = uVar7;
        uVar17 = uVar17 + 1;
      } while (uVar17 < (ulonglong)((longlong)(uStack_1d0 - local_1d8) >> 3));
    }
    lVar10 = local_210;
    local_1b8 = 0;
    local_220 = &local_198;
    uStack_218 = &local_1b8;
    FUN_180343440(local_210,&local_1d8,&local_220);
    FUN_180068f30(&local_198);
    FUN_1800132b0(local_178);
    FUN_1800132b0(&local_1d8);
  }
  uVar22 = 0;
  FUN_1803d8a40(1);
  lVar13 = local_1e8;
  uVar6 = (int)(longlong)((float)(DAT_180960ec4 >> 0x18) * *(float *)(local_1e8 + 0xc) + fVar3) <<
          0x18;
  local_1e8 = CONCAT44(fVar26 + *(float *)(local_1e8 + 0x50),
                       *(float *)(local_1e8 + 0x4c) + fVar20 + fVar28 + *(float *)(local_1e8 + 0x4c)
                      );
  if (uVar6 != 0) {
    if (lVar18 == 0) {
      lVar16 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 0x18);
    }
    else {
      lVar16 = lVar18;
    }
    local_220 = *(longlong **)(lVar10 + 0x60);
    uStack_218 = *(undefined8 **)(lVar10 + 0x68);
    local_260 = (char *)((ulonglong)local_260 & 0xffffffff00000000);
    local_268 = (char *)((ulonglong)local_268 & 0xffffffff00000000);
    local_270 = 0;
    local_278 = &DAT_1806eabcc;
    local_280 = (float *)&local_220;
    local_288 = (float *)CONCAT44(local_288._4_4_,DAT_180960ec4 & 0xffffff | uVar6);
    FUN_18040a900(lVar16,lVar10,lVar16,&local_1e8);
  }
  FUN_1803ec6c0();
  plVar8 = local_200;
  *(float *)(local_200 + 0x23) = (*(float *)(local_200 + 0x50) - fVar30) - fVar29;
  fVar1 = DAT_1808acb08;
  if (local_238 == '\0') {
    lVar10 = DAT_180ca0a50;
    goto LAB_1802c976b;
  }
  fVar21 = (float)FUN_180519080(param_2[3] * DAT_1808acb08);
  fVar21 = (float)(int)fVar21;
  local_108 = 0.0;
  local_104 = 0;
  local_228 = fVar21;
  snprintf(&local_108,5,&DAT_1806f0260,fVar21);
  local_1e8 = plVar8[0x23];
  fVar24 = (float)local_1e8;
  iVar5 = FUN_1803d7830("##Alpha",0,
                        *(undefined4 *)(plVar8[0x22] + -4 + (longlong)(int)plVar8[0x21] * 4));
  if (*(int *)(*plVar8 + 0x155c) == iVar5) {
    FUN_1803f5630(iVar5,0xb,"##Alpha");
  }
  fVar25 = local_1e8._4_4_ + fVar29;
  fVar19 = fVar24 + fVar30;
  lVar10 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if (fVar24 <= *(float *)(lVar10 + 0x268)) {
    fVar24 = *(float *)(lVar10 + 0x268);
  }
  uVar12 = (uint7)((ulonglong)lVar10 >> 8);
  if (*(float *)(DAT_180ca0a50 + 0x110) < fVar24 - *(float *)(DAT_180ca0a50 + 0xd04)) {
LAB_1802c940e:
    lVar10 = (ulonglong)uVar12 << 8;
  }
  else {
    fVar24 = local_1e8._4_4_;
    if (local_1e8._4_4_ <= *(float *)(lVar10 + 0x26c)) {
      fVar24 = *(float *)(lVar10 + 0x26c);
    }
    if (*(float *)(DAT_180ca0a50 + 0x114) < fVar24 - *(float *)(DAT_180ca0a50 + 0xd08))
    goto LAB_1802c940e;
    fVar24 = fVar19;
    if (*(float *)(lVar10 + 0x270) <= fVar19) {
      fVar24 = *(float *)(lVar10 + 0x270);
    }
    if (*(float *)(DAT_180ca0a50 + 0xd04) + fVar24 <= *(float *)(DAT_180ca0a50 + 0x110))
    goto LAB_1802c940e;
    fVar24 = fVar25;
    if (*(float *)(lVar10 + 0x274) <= fVar25) {
      fVar24 = *(float *)(lVar10 + 0x274);
    }
    if (*(float *)(DAT_180ca0a50 + 0xd08) + fVar24 <= *(float *)(DAT_180ca0a50 + 0x114))
    goto LAB_1802c940e;
    lVar10 = CONCAT71(uVar12,1);
  }
  if (*(int *)(DAT_180ca0a50 + 0x1578) == iVar5) {
    fVar24 = DAT_1808ac34c;
  }
  else if ((char)lVar10 == '\0') {
    fVar24 = 0.0;
  }
  else {
    fVar24 = fVar3;
  }
  local_230[0] = (float)(iVar5 + 1);
  local_1d8 = CONCAT44(fVar24,fVar24);
  uStack_1d0 = (ulonglong)(uint)fVar24;
  local_1c8 = CONCAT44(local_1c8._4_4_,0xffffffff);
  FUN_18034a380(lVar10,&local_220,local_230,&local_1d8);
  fVar24 = DAT_1808ac118;
  FUN_1802b3660((longlong)local_220 + 0x14);
  uVar6 = FUN_1802b38e0((int)(longlong)((float)(DAT_180960f44 >> 0x18) * fVar24 + fVar3) << 0x18 |
                        DAT_180960f44 & 0xffffff,
                        (int)(longlong)((float)(DAT_180960f44 >> 0x18) * DAT_1808ac1b0 + fVar3) <<
                        0x18 | DAT_180960f44 & 0xffffff);
  local_200 = (longlong *)CONCAT44(fVar25,fVar19);
  local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
  local_288 = (float *)CONCAT44(local_288._4_4_,DAT_1808ac7ac);
  FUN_1803fe590(local_210,&local_1e8,&local_200,
                (int)(longlong)((float)(uVar6 >> 0x18) * *(float *)(lVar13 + 0xc) + fVar3) << 0x18 |
                uVar6 & 0xffffff);
  lVar10 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1eb0) = *(uint *)(DAT_180ca0a50 + 0x1eb0) | 1;
  *(float *)(lVar10 + 0x1ec8) = fVar30;
  FUN_1803d8730(7,0);
  FUN_1803d8730(8,0);
  FUN_1803d8730(9,0);
  FUN_1803d8730(0,DAT_180960ec0);
  lVar10 = lVar18;
  if (lVar18 == 0) {
    lVar10 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_220 = *(longlong **)(DAT_180ca0a50 + 0x11f0);
  uStack_218 = (undefined8 *)
               CONCAT44(*(undefined4 *)(DAT_180ca0a50 + 0x1200),
                        *(undefined4 *)(DAT_180ca0a50 + 0x1204));
  FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_220);
  FUN_1803e8680(lVar10);
  local_200 = (longlong *)0x0;
  bVar2 = false;
  local_270 = 0;
  local_278 = (undefined *)0x0;
  local_280 = (float *)CONCAT44(local_280._4_4_,0x1000);
  local_288 = (float *)&local_200;
  cVar4 = FUN_18041c570("##Alpha",0,&local_108,5);
  if (cVar4 != '\0') {
    local_230[0] = 0.0;
    iVar5 = sscanf_s((char *)&local_108,"%d%%",(int *)local_230);
    if (0 < iVar5) {
      local_228 = local_230[0];
      bVar2 = true;
      fVar21 = local_230[0];
    }
  }
  lVar10 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    FUN_1803e8680(*(undefined8 *)
                   (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -0x10 +
                   (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) * 0x10));
    *(int *)(lVar10 + 0x1fe0) = *(int *)(lVar10 + 0x1fe0) + -1;
  }
  FUN_1803d87f0(4);
  cVar4 = FUN_1803dd930(0);
  lVar10 = DAT_180ca0a50;
  if (((cVar4 != '\0') ||
      ((*(int *)(DAT_180ca0a50 + 0x1578) != 0 &&
       (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))))) &&
     (*(float *)(DAT_180ca0a50 + 0x120) != 0.0)) {
    local_1ac[2] = 1.4013e-43;
    local_1ac[0] = 0.0;
    local_1ac[1] = (float)((int)*(float *)(DAT_180ca0a50 + 0x120) + (int)fVar21);
    pfVar11 = local_1ac;
    if (-1 < (int)local_1ac[1]) {
      pfVar11 = local_1ac + 1;
    }
    pfVar9 = local_1ac + 2;
    if ((int)local_1ac[1] < 0x65) {
      pfVar9 = pfVar11;
    }
    fVar21 = *pfVar9;
    local_228 = fVar21;
    bVar2 = true;
  }
  if (bVar2) {
    local_240[0] = 1.4013e-43;
    local_230[0] = 0.0;
    pfVar11 = local_230;
    if (-1 < (int)fVar21) {
      pfVar11 = &local_228;
    }
    pfVar9 = local_240;
    if ((int)fVar21 < 0x65) {
      pfVar9 = pfVar11;
    }
    param_2[3] = (float)(int)*pfVar9 / fVar1;
    uVar22 = 1;
    local_248 = '\0';
  }
  FUN_1803ec6c0();
  fVar28 = DAT_1808ac8b0;
LAB_1802c976b:
  *(float *)(plVar8 + 0x23) = *(float *)(plVar8 + 0x50) - fVar29;
  if (lVar18 == 0) {
    lVar18 = *(longlong *)(lVar10 + 0x11f0);
  }
  local_220 = *(longlong **)(lVar10 + 0x11f0);
  uStack_218 = (undefined8 *)
               CONCAT44(*(undefined4 *)(lVar10 + 0x1200),*(undefined4 *)(lVar10 + 0x1204));
  FUN_1803f6200(lVar10 + 0x1fe0,&local_220);
  FUN_1803e8680(lVar18);
  local_200 = (longlong *)CONCAT44(fVar29,fVar29);
  local_258 = DAT_1808acc00;
  local_260 = 
  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M80 32L176 32C202 32 224 54 224 80L224 176C224 203 202 224 176 224L80 224C53 224 32 203 32 176L32 80C32 54 53 32 80 32ZM80 288L176 288C202 288 224 310 224 336L224 432C224 458 202 480 176 480L80 480C53 480 32 458 32 432L32 336C32 310 53 288 80 288ZM288 80C288 54 309 32 336 32L432 32C458 32 480 54 480 80L480 176C480 203 458 224 432 224L336 224C309 224 288 203 288 176L288 80ZM384 272C397 272 408 283 408 296L408 360L472 360C485 360 496 371 496 384C496 398 485 408 472 408L408 408L408 472C408 485 397 496 384 496C370 496 360 485 360 472L360 408L296 408C282 408 272 398 272 384C272 371 282 360 296 360L360 360L360 296C360 283 370 272 384 272Z\"/></svg>"
  ;
  local_268 = "picker_save";
  local_270 = local_270 & 0xffffffff00000000;
  local_278 = (undefined *)((ulonglong)local_278 & 0xffffffff00000000);
  local_280 = (float *)CONCAT44(local_280._4_4_,DAT_180960f38);
  local_288 = (float *)CONCAT44(local_288._4_4_,
                                (int)(longlong)
                                     ((float)(DAT_180960f38 >> 0x18) * DAT_1808ac254 + fVar3) <<
                                0x18 | DAT_180960f38 & 0xffffff);
  local_250 = fVar28;
  cVar4 = FUN_1802c7320("##save",0,&local_200,1);
  if (cVar4 != '\0') {
    *local_180 = 1;
  }
  lVar18 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
    FUN_1803ebc00("Calling PopFont() too many times!");
  }
  else {
    FUN_1803e8680(*(undefined8 *)
                   (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -0x10 +
                   (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) * 0x10));
    *(int *)(lVar18 + 0x1fe0) = *(int *)(lVar18 + 0x1fe0) + -1;
  }
  if (local_248 != '\0') {
    *param_2 = local_208;
    param_2[1] = local_1ac[3];
    param_2[2] = local_19c;
    param_2[3] = local_1b0;
    uVar22 = 1;
  }
  FUN_180349c50(&local_128);
  FUN_1800132b0(local_140);
  FUN_1800132b0(&local_158);
  return uVar22;
}



/* ===== 1802c9980 FUN_1802c9980 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802c9980(float *param_1,uint param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  float *pfVar15;
  longlong lVar16;
  longlong *plVar17;
  uint7 uVar20;
  longlong lVar18;
  char *param0;
  float *pfVar19;
  int iVar21;
  int iVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_1e8 [32];
  float *local_1c8;
  float *local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  char *local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  char local_188;
  float local_180 [2];
  undefined8 local_178;
  float local_170;
  uint local_16c;
  float local_168;
  uint local_164;
  undefined8 local_160;
  undefined1 local_158 [8];
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  float *local_118;
  undefined1 *local_110;
  longlong local_108 [2];
  float local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  ulonglong local_e0;
  int aiStack_d8 [40];
  
  lVar18 = DAT_180ca0a50;
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  lVar16 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar16 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar16 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_16c = param_2 & 0xff;
  local_164 = local_16c + 3;
  uVar11 = local_164;
  local_138 = DAT_180ca0a50 + 0xc90;
  local_198 = 0;
  local_1a8 = (char *)0x0;
  local_1b0 = 0;
  fVar32 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) + DAT_1808ac91c;
  local_1b8 = 0;
  local_1c0 = (float *)&DAT_18075c51c;
  local_1c8 = (float *)((ulonglong)local_1c8 & 0xffffffff00000000);
  local_188 = (char)param_3;
  local_118 = param_1;
  local_110 = param_4;
  FUN_18040a2f0(&local_178,lVar16,param_3,DAT_1808acd08);
  fVar28 = *(float *)(lVar18 + 0xcdc);
  fVar23 = (float)FUN_18053f0d0((float)local_178 + DAT_1808ac2f0);
  lVar10 = DAT_180ca0a50;
  fVar23 = fVar23 + fVar28 + fVar28;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  plVar17 = *(longlong **)(lVar10 + 0x14f8);
  pfVar19 = (float *)(plVar17 + 0x23);
  fVar28 = ((*(float *)(plVar17 + 0x50) - (float)(int)uVar11 * fVar23) - fVar32) -
           (float)(int)uVar11 * *(float *)(lVar18 + 0xcec);
  *pfVar19 = fVar28;
  pfVar15 = (float *)(plVar17 + 0x26);
  if (*(float *)(plVar17 + 0x26) <= fVar28 && fVar28 != *(float *)(plVar17 + 0x26)) {
    pfVar15 = pfVar19;
  }
  *(float *)(plVar17 + 0x26) = *pfVar15;
  local_158 = *(undefined1 (*) [8])param_1;
  uStack_150 = *(undefined8 *)(param_1 + 2);
  fVar28 = *param_1;
  fVar30 = param_1[1];
  fVar31 = param_1[2];
  fVar29 = param_1[3];
  if ((char)param_3 != '\0') {
    local_1c0 = (float *)&uStack_150;
    local_1c8 = (float *)(local_158 + 4);
    FUN_1803d7ff0();
    fVar28 = (float)local_158._0_4_;
    fVar30 = (float)local_158._4_4_;
    fVar31 = (float)uStack_150;
    fVar29 = uStack_150._4_4_;
  }
  uVar9 = DAT_1808ac7ac;
  fVar8 = DAT_1808ac1f4;
  bVar7 = false;
  iVar22 = 0;
  local_f8 = (float)(int)(_DAT_1808ade30 * fVar28 +
                         (float)(~-(uint)(0.0 <= fVar28) & _DAT_1808aded0 |
                                _DAT_1808ad9f0 & -(uint)(0.0 <= fVar28)));
  iStack_f4 = (int)(_UNK_1808ade34 * fVar30 +
                   (float)(~-(uint)(0.0 <= fVar30) & _UNK_1808aded4 |
                          _UNK_1808ad9f4 & -(uint)(0.0 <= fVar30)));
  iStack_f0 = (int)(_UNK_1808ade38 * fVar31 +
                   (float)(~-(uint)(0.0 <= fVar31) & _UNK_1808aded8 |
                          _UNK_1808ad9f8 & -(uint)(0.0 <= fVar31)));
  iStack_ec = (int)(_UNK_1808ade3c * fVar29 +
                   (float)(~-(uint)(0.0 <= fVar29) & _UNK_1808adedc |
                          _UNK_1808ad9fc & -(uint)(0.0 <= fVar29)));
  do {
    local_e8 = 0;
    snprintf(&local_e8,8,&DAT_1806dfdd8,(&local_f8)[iVar22]);
    FUN_1803e8a70(iVar22);
    local_160 = *(longlong *)pfVar19;
    fVar28 = (float)local_160;
    iVar13 = FUN_1803d7830("##Channel",0,
                           *(undefined4 *)(plVar17[0x22] + -4 + (longlong)(int)plVar17[0x21] * 4));
    if (*(int *)(*plVar17 + 0x155c) == iVar13) {
      FUN_1803f5630(iVar13,0xb,"##Channel");
    }
    fVar31 = fVar28 + fVar23;
    fVar30 = local_160._4_4_ + fVar32;
    lVar18 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if (fVar28 <= *(float *)(lVar18 + 0x268)) {
      fVar28 = *(float *)(lVar18 + 0x268);
    }
    uVar20 = (uint7)((ulonglong)lVar18 >> 8);
    if (*(float *)(DAT_180ca0a50 + 0x110) < fVar28 - *(float *)(DAT_180ca0a50 + 0xd04)) {
LAB_1802c9d0a:
      lVar18 = (ulonglong)uVar20 << 8;
    }
    else {
      fVar28 = local_160._4_4_;
      if (local_160._4_4_ <= *(float *)(lVar18 + 0x26c)) {
        fVar28 = *(float *)(lVar18 + 0x26c);
      }
      if (*(float *)(DAT_180ca0a50 + 0x114) < fVar28 - *(float *)(DAT_180ca0a50 + 0xd08))
      goto LAB_1802c9d0a;
      fVar28 = fVar31;
      if (*(float *)(lVar18 + 0x270) <= fVar31) {
        fVar28 = *(float *)(lVar18 + 0x270);
      }
      if (*(float *)(DAT_180ca0a50 + 0xd04) + fVar28 <= *(float *)(DAT_180ca0a50 + 0x110))
      goto LAB_1802c9d0a;
      fVar28 = fVar30;
      if (*(float *)(lVar18 + 0x274) <= fVar30) {
        fVar28 = *(float *)(lVar18 + 0x274);
      }
      if (*(float *)(DAT_180ca0a50 + 0xd08) + fVar28 <= *(float *)(DAT_180ca0a50 + 0x114))
      goto LAB_1802c9d0a;
      lVar18 = CONCAT71(uVar20,1);
    }
    if (*(int *)(DAT_180ca0a50 + 0x1578) == iVar13) {
      local_130 = DAT_1808ac34c;
    }
    else if ((char)lVar18 == '\0') {
      local_130 = 0.0;
    }
    else {
      local_130 = fVar8;
    }
    local_180[0] = (float)(iVar13 + 1);
    local_124 = 0;
    local_120 = 0xffffffff;
    local_12c = local_130;
    local_128 = local_130;
    FUN_18034a380(lVar18,local_108,local_180,&local_130);
    FUN_1802b3660(local_108[0] + 0x14);
    uVar14 = FUN_1802b38e0((int)(longlong)((float)(DAT_180960f44 >> 0x18) * DAT_1808ac118 + fVar8)
                           << 0x18 | DAT_180960f44 & 0xffffff,
                           (int)(longlong)((float)(DAT_180960f44 >> 0x18) * DAT_1808ac1b0 + fVar8)
                           << 0x18 | DAT_180960f44 & 0xffffff);
    local_1c0 = (float *)((ulonglong)local_1c0 & 0xffffffff00000000);
    local_158._4_4_ = fVar30;
    local_158._0_4_ = fVar31;
    local_1c8 = (float *)CONCAT44(local_1c8._4_4_,uVar9);
    FUN_1803fe590(plVar17[0x59],&local_160,local_158,
                  (int)(longlong)((float)(uVar14 >> 0x18) * *(float *)(local_138 + 0xc) + fVar8) <<
                  0x18 | uVar14 & 0xffffff);
    lVar18 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1eb0) = *(uint *)(DAT_180ca0a50 + 0x1eb0) | 1;
    *(float *)(lVar18 + 0x1ec8) = fVar23;
    FUN_1803d8730(7,0);
    FUN_1803d8730(8,0);
    FUN_1803d8730(9,0);
    FUN_1803d8730(0,DAT_180960ec0);
    lVar18 = lVar16;
    if (lVar16 == 0) {
      lVar18 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
    }
    local_148 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
    local_140 = *(undefined4 *)(DAT_180ca0a50 + 0x1204);
    local_13c = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
    FUN_1803f6200(DAT_180ca0a50 + 0x1fe0,&local_148);
    FUN_1803e8680(lVar18);
    local_178 = 0;
    local_1b0 = 0;
    local_1c8 = (float *)&local_178;
    local_1b8 = 0;
    local_1c0 = (float *)CONCAT44(local_1c0._4_4_,0x1000);
    cVar12 = FUN_18041c570("##Channel",0,&local_e8,8);
    if (cVar12 != '\0') {
      for (param0 = (char *)&local_e8; (*param0 == ' ' || (*param0 == '\t')); param0 = param0 + 1) {
      }
      local_170 = 0.0;
      iVar13 = sscanf_s(param0,"%d",(int *)&local_170);
      if (0 < iVar13) {
        local_168 = 3.57331e-43;
        local_180[0] = 0.0;
        pfVar19 = local_180;
        if (-1 < (int)local_170) {
          pfVar19 = &local_170;
        }
        pfVar15 = &local_168;
        if ((int)local_170 < 0x100) {
          pfVar15 = pfVar19;
        }
        (&local_f8)[iVar22] = *pfVar15;
      }
      bVar7 = true;
    }
    lVar18 = DAT_180ca0a50;
    if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
      FUN_1803ebc00("Calling PopFont() too many times!");
    }
    else {
      FUN_1803e8680(*(undefined8 *)
                     (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -0x10 +
                     (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) * 0x10));
      *(int *)(lVar18 + 0x1fe0) = *(int *)(lVar18 + 0x1fe0) + -1;
    }
    lVar18 = DAT_180ca0a50;
    iVar13 = *(int *)(DAT_180ca0a50 + 0x1fc0);
    if (3 < iVar13) {
      iVar21 = 4;
      goto LAB_1802ca000;
    }
    FUN_1803ebc00("Calling PopStyleColor() too many times!");
    iVar21 = *(int *)(lVar18 + 0x1fc0);
    iVar13 = iVar21;
    for (; 0 < iVar21; iVar21 = iVar21 + -1) {
LAB_1802ca000:
      puVar1 = (undefined8 *)(*(longlong *)(lVar18 + 0x1fc8) + -0x10 + (longlong)iVar13 * 0x14);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)
               (lVar18 + 0xde0 +
               (longlong)*(int *)(*(longlong *)(lVar18 + 0x1fc8) + -0x14 + (longlong)iVar13 * 0x14)
               * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      iVar13 = *(int *)(lVar18 + 0x1fc0) + -1;
      *(int *)(lVar18 + 0x1fc0) = iVar13;
    }
    cVar12 = FUN_1803dd930(0);
    lVar18 = DAT_180ca0a50;
    if (((cVar12 != '\0') ||
        ((*(int *)(DAT_180ca0a50 + 0x1578) != 0 &&
         (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))))) &&
       (*(float *)(DAT_180ca0a50 + 0x120) != 0.0)) {
      local_160 = CONCAT44(local_160._4_4_,0xff);
      bVar7 = true;
      local_168 = 0.0;
      local_180[0] = (float)((int)(&local_f8)[iVar22] + (int)*(float *)(DAT_180ca0a50 + 0x120));
      pfVar19 = &local_168;
      if (-1 < (int)local_180[0]) {
        pfVar19 = local_180;
      }
      pfVar15 = (float *)&local_160;
      if ((int)local_180[0] < 0x100) {
        pfVar15 = pfVar19;
      }
      (&local_f8)[iVar22] = *pfVar15;
    }
    iVar13 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar13 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      lVar18 = DAT_180ca0a50;
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar13 + -1;
    }
    FUN_1803ec6c0();
    pfVar15 = local_118;
    iVar22 = iVar22 + 1;
    pfVar19 = (float *)(plVar17 + 0x23);
    if ((int)uVar11 <= iVar22) {
      auVar6._4_4_ = _UNK_1808ade34;
      auVar6._0_4_ = _DAT_1808ade30;
      auVar6._8_4_ = _UNK_1808ade38;
      auVar6._12_4_ = _UNK_1808ade3c;
      if (lVar16 == 0) {
        lVar16 = *(longlong *)(lVar18 + 0x11f0);
      }
      local_148 = *(undefined8 *)(lVar18 + 0x11f0);
      local_140 = *(undefined4 *)(lVar18 + 0x1204);
      local_13c = *(undefined4 *)(lVar18 + 0x1200);
      FUN_1803f6200(lVar18 + 0x1fe0,&local_148);
      FUN_1803e8680(lVar16);
      local_178 = CONCAT44(fVar32,fVar32);
      local_190 = DAT_1808ac8b0;
      local_198 = DAT_1808acc00;
      local_1a0 = 
      "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M80 32L176 32C202 32 224 54 224 80L224 176C224 203 202 224 176 224L80 224C53 224 32 203 32 176L32 80C32 54 53 32 80 32ZM80 288L176 288C202 288 224 310 224 336L224 432C224 458 202 480 176 480L80 480C53 480 32 458 32 432L32 336C32 310 53 288 80 288ZM288 80C288 54 309 32 336 32L432 32C458 32 480 54 480 80L480 176C480 203 458 224 432 224L336 224C309 224 288 203 288 176L288 80ZM384 272C397 272 408 283 408 296L408 360L472 360C485 360 496 371 496 384C496 398 485 408 472 408L408 408L408 472C408 485 397 496 384 496C370 496 360 485 360 472L360 408L296 408C282 408 272 398 272 384C272 371 282 360 296 360L360 360L360 296C360 283 370 272 384 272Z\"/></svg>"
      ;
      local_1a8 = "picker_save";
      local_1b0 = local_1b0 & 0xffffffff00000000;
      local_1b8 = local_1b8 & 0xffffffff00000000;
      local_1c0 = (float *)CONCAT44(local_1c0._4_4_,DAT_180960f38);
      local_1c8 = (float *)CONCAT44(local_1c8._4_4_,
                                    (int)(longlong)
                                         ((float)(DAT_180960f38 >> 0x18) * DAT_1808ac254 + fVar8) <<
                                    0x18 | DAT_180960f38 & 0xffffff);
      cVar12 = FUN_1802c7320("##save",0,&local_178,1);
      if (cVar12 != '\0') {
        *local_110 = 1;
      }
      lVar16 = DAT_180ca0a50;
      if (*(int *)(DAT_180ca0a50 + 0x1fe0) < 1) {
        FUN_1803ebc00("Calling PopFont() too many times!");
      }
      else {
        FUN_1803e8680(*(undefined8 *)
                       (*(longlong *)(DAT_180ca0a50 + 0x1fe8) + -0x10 +
                       (longlong)*(int *)(DAT_180ca0a50 + 0x1fe0) * 0x10));
        *(int *)(lVar16 + 0x1fe0) = *(int *)(lVar16 + 0x1fe0) + -1;
      }
      fVar28 = DAT_1808acb94;
      if (!bVar7) {
        return 0;
      }
      if (local_188 == '\0') {
        iVar22 = 0;
        if ((0xf < uVar11) &&
           ((&local_f8 + (local_16c | 2) < pfVar15 || (pfVar15 + (local_16c | 2) < &local_f8)))) {
          do {
            lVar16 = (longlong)iVar22;
            iVar22 = iVar22 + 0x10;
            auVar24._0_4_ = (float)(int)(&local_f8)[lVar16];
            auVar24._4_4_ = (float)(int)(&local_f8)[lVar16 + 1];
            auVar24._8_4_ = (float)(int)(&local_f8)[lVar16 + 2];
            auVar24._12_4_ = (float)(int)(&local_f8)[lVar16 + 3];
            iVar13 = *(int *)((longlong)&local_e8 + lVar16 * 4);
            iVar21 = *(int *)((longlong)&local_e8 + (lVar16 + 1) * 4);
            iVar3 = aiStack_d8[lVar16 + -2];
            iVar4 = aiStack_d8[lVar16 + -1];
            auVar24 = divps(auVar24,auVar6);
            *(undefined1 (*) [16])(pfVar15 + lVar16) = auVar24;
            auVar25._0_4_ = (float)iVar13;
            auVar25._4_4_ = (float)iVar21;
            auVar25._8_4_ = (float)iVar3;
            auVar25._12_4_ = (float)iVar4;
            iVar13 = aiStack_d8[lVar16];
            iVar21 = aiStack_d8[lVar16 + 1];
            iVar3 = aiStack_d8[lVar16 + 2];
            iVar4 = aiStack_d8[lVar16 + 3];
            auVar24 = divps(auVar25,auVar6);
            *(undefined1 (*) [16])(pfVar15 + lVar16 + 4) = auVar24;
            auVar26._0_4_ = (float)iVar13;
            auVar26._4_4_ = (float)iVar21;
            auVar26._8_4_ = (float)iVar3;
            auVar26._12_4_ = (float)iVar4;
            iVar13 = aiStack_d8[lVar16 + 4];
            iVar21 = aiStack_d8[lVar16 + 5];
            iVar3 = aiStack_d8[lVar16 + 6];
            iVar4 = aiStack_d8[lVar16 + 7];
            auVar24 = divps(auVar26,auVar6);
            *(undefined1 (*) [16])(pfVar15 + lVar16 + 8) = auVar24;
            auVar27._0_4_ = (float)iVar13;
            auVar27._4_4_ = (float)iVar21;
            auVar27._8_4_ = (float)iVar3;
            auVar27._12_4_ = (float)iVar4;
            auVar24 = divps(auVar27,auVar6);
            *(undefined1 (*) [16])(pfVar15 + lVar16 + 0xc) = auVar24;
          } while (iVar22 < 0);
        }
        fVar28 = DAT_1808acb94;
        if (iVar22 < (int)uVar11) {
          iVar13 = iVar22;
          if (3 < (int)(uVar11 - iVar22)) {
            do {
              iVar13 = iVar22 + 4;
              fVar23 = (&local_f8)[(longlong)iVar22 + 1];
              pfVar15[iVar22] = (float)(int)(&local_f8)[iVar22] / fVar28;
              fVar32 = (&local_f8)[(longlong)iVar22 + 2];
              pfVar15[(longlong)iVar22 + 1] = (float)(int)fVar23 / fVar28;
              fVar23 = (&local_f8)[(longlong)iVar22 + 3];
              pfVar15[(longlong)iVar22 + 2] = (float)(int)fVar32 / fVar28;
              pfVar15[(longlong)iVar22 + 3] = (float)(int)fVar23 / fVar28;
              iVar22 = iVar13;
            } while (iVar13 < (int)local_16c);
            if ((int)uVar11 <= iVar13) {
              return 1;
            }
          }
          do {
            iVar22 = iVar13 + 1;
            pfVar15[iVar13] = (float)(int)(&local_f8)[iVar13] / fVar28;
            iVar13 = iVar22;
          } while (iVar22 < (int)uVar11);
        }
      }
      else {
        local_1c0 = pfVar15 + 2;
        local_1c8 = pfVar15 + 1;
        FUN_1803d80a0((float)(int)local_f8 / DAT_1808acb94,(float)iStack_f4 / DAT_1808acb94,
                      (float)iStack_f0 / DAT_1808acb94,pfVar15);
        if (3 < local_164) {
          pfVar15[3] = (float)iStack_ec / fVar28;
          return 1;
        }
      }
      return 1;
    }
  } while( true );
}



/* ===== 1802ca460 FUN_1802ca460 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1802ca460(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  longlong lVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  undefined4 extraout_XMM0_Da;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 extraout_XMM0_Da_00;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  char local_res10 [8];
  char local_res18 [8];
  char local_res20;
  uint in_stack_fffffffffffffd88;
  char local_268;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  uint local_250 [2];
  undefined8 local_248;
  ulonglong uStack_240;
  undefined8 local_238;
  float local_230;
  undefined4 local_228 [2];
  float local_220;
  undefined8 local_21c;
  uint local_214;
  float local_210;
  undefined4 local_20c;
  undefined4 local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  ulonglong local_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong local_1a8;
  longlong lStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  longlong local_148;
  undefined8 local_140;
  longlong local_138 [3];
  longlong *local_120;
  undefined8 *local_118;
  longlong local_110 [2];
  longlong local_100 [24];
  
  lVar16 = DAT_180ca0a50;
  uVar19 = 0;
  local_250[0] = 0;
  cVar10 = '\0';
  local_268 = '\0';
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar30 = _DAT_1808ade90;
  fVar7 = DAT_1808acd08;
  fVar24 = DAT_1808ac864;
  fVar31 = DAT_1808ac34c;
  plVar3 = *(longlong **)(lVar16 + 0x14f8);
  fVar26 = *(float *)((longlong)plVar3 + 0x11c);
  if (DAT_1811077f0 != DAT_1811077f8) {
    local_210 = fVar26;
    FUN_1802c82e0();
    fVar28 = DAT_1808ac950;
    fVar32 = (*(float *)((longlong)plVar3 + 0x11c) - *(float *)((longlong)plVar3 + 0x2c)) +
             *(float *)((longlong)plVar3 + 0x9c);
    fVar33 = (*(float *)(plVar3 + 0x23) - *(float *)(plVar3 + 5)) + *(float *)(plVar3 + 0x13);
    local_230 = *(float *)(DAT_180ca0a50 + 0x40);
    uVar17 = (int)(DAT_1811077f8 - DAT_1811077f0 >> 5) - 1;
    if (-1 < (int)uVar17) {
      fVar26 = DAT_1808ac1f4;
      do {
        local_1d0 = (ulonglong)uVar17;
        lVar16 = local_1d0 * 0x20;
        puVar1 = (undefined4 *)(lVar16 + DAT_1811077f0);
        FUN_1803e8a70(puVar1[7]);
        if (*(char *)(puVar1 + 4) == '\0') {
          fVar21 = fVar31;
        }
        else {
          fVar21 = 0.0;
        }
        local_228[0] = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##visible");
        local_248 = CONCAT44(fVar21,fVar21);
        uStack_240 = (ulonglong)(uint)fVar21;
        local_238 = CONCAT44(local_238._4_4_,0xffffffff);
        FUN_18034a380(extraout_XMM0_Da,local_110,local_228,&local_248);
        fVar21 = (float)FUN_1802b3660(local_110[0] + 0x14,fVar21,DAT_1808ac118,0);
        if ((fVar21 == 0.0) && (*(char *)(puVar1 + 4) != '\0')) {
          iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar11 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
          }
          lVar16 = DAT_1811077f0 + lVar16;
          lVar20 = lVar16 + 0x20;
          FUN_180540530(lVar16,lVar20,DAT_1811077f8 - lVar20);
          DAT_1811077f8 = DAT_1811077f8 + -0x20;
        }
        else {
          if (*(float *)(plVar3 + 0x4a) - *(float *)(plVar3 + 0x23) < fVar28) {
            FUN_180417650();
          }
          fVar27 = ((*(float *)((longlong)plVar3 + 0x11c) - *(float *)((longlong)plVar3 + 0x2c)) +
                   *(float *)((longlong)plVar3 + 0x9c)) - fVar32;
          fVar25 = ((*(float *)(plVar3 + 0x23) - *(float *)(plVar3 + 5)) + *(float *)(plVar3 + 0x13)
                   ) - fVar33;
          fVar29 = (float)puVar1[5];
          if ((float)puVar1[5] == fVar7) {
            puVar1[5] = fVar25;
            fVar29 = fVar25;
          }
          if (fVar29 != fVar25) {
            fVar22 = (float)((uint)(fVar25 - fVar29) & uVar30) * local_230 * fVar24;
            fVar23 = fVar31;
            if (fVar31 <= fVar22) {
              fVar23 = fVar22;
            }
            if (fVar25 <= fVar29) {
              if (fVar25 <= fVar29 - fVar23) {
                fVar25 = fVar29 - fVar23;
              }
              puVar1[5] = fVar25;
            }
            else {
              if (fVar29 + fVar23 <= fVar25) {
                fVar25 = fVar29 + fVar23;
              }
              puVar1[5] = fVar25;
            }
          }
          fVar25 = (float)puVar1[6];
          if ((float)puVar1[6] == fVar7) {
            puVar1[6] = fVar27;
            fVar25 = fVar27;
          }
          if (fVar25 != fVar27) {
            fVar23 = (float)((uint)(fVar27 - fVar25) & uVar30) * local_230 * fVar24;
            fVar29 = fVar31;
            if (fVar31 <= fVar23) {
              fVar29 = fVar23;
            }
            if (fVar27 <= fVar25) {
              if (fVar27 <= fVar25 - fVar29) {
                fVar27 = fVar25 - fVar29;
              }
            }
            else if (fVar25 + fVar29 <= fVar27) {
              fVar27 = fVar25 + fVar29;
            }
            puVar1[6] = fVar27;
          }
          FUN_1803d8870(0,fVar21 * *(float *)(DAT_180ca0a50 + 0xc9c));
          iVar11 = FUN_1803d7830("##history",0,
                                 *(undefined4 *)
                                  (plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
          if (*(int *)(*plVar3 + 0x155c) == iVar11) {
            FUN_1803f5630(iVar11,0xb,"##history");
          }
          local_20c = 0x41a00000;
          local_208 = 0x41a00000;
          FUN_1803ec550(&local_20c,DAT_1808acda0);
          local_25c = (*(float *)((longlong)plVar3 + 0x2c) - *(float *)((longlong)plVar3 + 0x9c)) +
                      fVar32 + (float)puVar1[6];
          local_260 = (*(float *)(plVar3 + 5) - *(float *)(plVar3 + 0x13)) + fVar33 +
                      (float)puVar1[5];
          local_258 = local_260 + fVar28;
          local_254 = local_25c + fVar28;
          cVar10 = '\0';
          cVar9 = FUN_1803ec2f0(&local_260,iVar11,0,0);
          if (cVar9 != '\0') {
            local_res18[0] = '\0';
            local_res10[0] = '\0';
            cVar10 = FUN_180415270(&local_260,iVar11,local_res18,local_res10,0);
            if (local_res10[0] == '\0') {
              if (local_res18[0] == '\0') {
                fVar21 = 0.0;
              }
              else {
                fVar21 = fVar26;
              }
            }
            else {
              fVar21 = fVar31;
            }
            local_250[0] = iVar11 + 1;
            local_248 = CONCAT44(fVar21,fVar21);
            uStack_240 = (ulonglong)(uint)fVar21;
            local_238 = CONCAT44(local_238._4_4_,0xffffffff);
            local_res20 = cVar10;
            FUN_18034a380(extraout_XMM0_Da_00,local_100,local_250,&local_248);
            fVar21 = (float)FUN_1802b3660(local_100[0] + 0x14,fVar21,DAT_1808ac118,0);
            uVar12 = DAT_1808ac7ac;
            lVar16 = plVar3[0x59];
            local_204 = local_258 + DAT_1808ac710;
            local_200 = local_254 + DAT_1808ac710;
            local_1fc = local_260 - DAT_1808ac710;
            local_1f8 = local_25c - DAT_1808ac710;
            local_148 = lVar16;
            FUN_1802c3fb0(lVar16,&local_1fc,&local_204,
                          (int)(longlong)
                               (fVar21 * DAT_1808ac1b0 * *(float *)(DAT_180ca0a50 + 0xc9c) *
                                (float)(DAT_180960f44 >> 0x18) + fVar26) << 0x18 |
                          DAT_180960f44 & 0xffffff,DAT_1808ac7ac);
            local_1a8 = 0;
            lStack_1a0 = 0;
            local_198 = 0;
            uStack_190 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_178 = 0;
            lStack_170 = 0;
            local_168 = 0;
            uVar19 = uVar19 | 1;
            local_250[0] = uVar19;
            local_214 = uVar19;
            FUN_1802c3a20(&local_260,&local_258,uVar12,&local_1a8);
            lVar20 = DAT_180ca0a50;
            *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
            FUN_1802c4640(&local_1a8,
                          *(float *)(*(longlong *)(*(longlong *)(lVar20 + 0x14f8) + 0x2c8) + 0xd0) *
                          fVar26,&uStack_190);
            FUN_1803d8870(0,fVar31);
            FUN_1802c55d0(lVar16,&local_1a8,&local_260,&local_258,DAT_180960f38,0);
            FUN_1802c5b30(lVar16,&local_1a8,&local_260,&local_258,DAT_1808ac7e4);
            local_21c = CONCAT44(local_21c._4_4_,0x3f800000);
            local_220 = 0.0;
            fVar21 = (float)puVar1[3];
            local_158 = *puVar1;
            local_154 = puVar1[1];
            local_150 = puVar1[2];
            pfVar14 = &local_220;
            if (0.0 <= fVar21) {
              pfVar14 = (float *)(puVar1 + 3);
            }
            pfVar13 = (float *)&local_21c;
            if (fVar21 <= fVar31) {
              pfVar13 = pfVar14;
            }
            local_14c = *pfVar13;
            local_1f4 = local_258 - fVar31;
            local_1f0 = local_254 - fVar31;
            local_1ec = local_260 + fVar31;
            local_1e8 = local_25c + fVar31;
            in_stack_fffffffffffffd88 = FUN_1803d7f30(&local_158);
            FUN_1802c55d0(lVar16,&local_1a8,&local_1ec,&local_1f4,in_stack_fffffffffffffd88,uVar12);
            if (local_178 != lStack_170) {
              if (2 < (ulonglong)(lStack_1a0 - local_1a8 >> 3)) {
                local_248 = 0;
                uStack_240 = 0;
                local_238 = 0;
                uVar18 = 0;
                lVar16 = local_1a8;
                lVar20 = lStack_1a0;
                do {
                  uVar2 = *(undefined8 *)(lVar16 + uVar18 * 8);
                  fVar26 = (float)uVar2;
                  fVar21 = (float)((ulonglong)uVar2 >> 0x20);
                  uVar18 = uVar18 + 1;
                  uVar2 = *(undefined8 *)(lVar16 + (uVar18 % (ulonglong)(lVar20 - lVar16 >> 3)) * 8)
                  ;
                  fVar27 = (float)uVar2;
                  fVar29 = (float)((ulonglong)uVar2 >> 0x20);
                  fVar25 = fVar29 - fVar21;
                  fVar24 = fVar27 - fVar26;
                  fVar24 = fVar25 * fVar25 + fVar24 * fVar24;
                  if (fVar24 < 0.0) {
                    fVar24 = (float)FUN_18051af10(fVar24);
                  }
                  else {
                    fVar24 = SQRT(fVar24);
                  }
                  fVar24 = (float)FUN_18053ef70(fVar24);
                  iVar11 = 1;
                  if (1 < (int)fVar24) {
                    iVar11 = (int)fVar24;
                  }
                  iVar15 = 0;
                  if (0 < iVar11) {
                    do {
                      local_21c = CONCAT44((fVar29 - fVar21) * ((float)iVar15 / (float)iVar11) +
                                           fVar21,(fVar27 - fVar26) *
                                                  ((float)iVar15 / (float)iVar11) + fVar26);
                      FUN_18008b8c0(&local_248);
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < iVar11);
                    lVar16 = local_1a8;
                    lVar20 = lStack_1a0;
                  }
                  lVar8 = local_148;
                  fVar26 = DAT_1808ac1f4;
                } while (uVar18 < (ulonglong)(lVar20 - lVar16 >> 3));
                local_138[0] = 0;
                local_138[1] = 0;
                local_138[2] = 0;
                FUN_1802c4640(&local_248,*(float *)(local_148 + 0xd0) * DAT_1808ac1f4,local_138);
                local_1c8 = 0;
                lStack_1c0 = 0;
                local_1b8 = 0;
                if (uStack_240 - local_248 != 0) {
                  uVar18 = (longlong)(uStack_240 - local_248) >> 3;
                  if (0x3fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_1800118d0();
                  }
                  lVar20 = uVar18 * 4;
                  local_1c8 = FUN_18000fb70(lVar20);
                  lVar16 = lVar20 + local_1c8;
                  local_1b8 = lVar16;
                  FUN_180540170(local_1c8,0,lVar20);
                  lStack_1c0 = lVar16;
                }
                lVar16 = local_138[0];
                uVar18 = 0;
                if ((longlong)(uStack_240 - local_248) >> 3 != 0) {
                  do {
                    uVar12 = FUN_1802c4e50(&local_1a8,lVar16 + uVar18 * 8);
                    *(undefined4 *)(local_1c8 + uVar18 * 4) = uVar12;
                    uVar18 = uVar18 + 1;
                  } while (uVar18 < (ulonglong)((longlong)(uStack_240 - local_248) >> 3));
                }
                local_140 = 0;
                local_120 = &local_1c8;
                local_118 = &local_140;
                FUN_180343440(lVar8,&local_248,&local_120);
                FUN_180068f30(&local_1c8);
                FUN_1800132b0(local_138);
                FUN_1800132b0(&local_248);
                uVar17 = (uint)local_1d0;
                fVar24 = DAT_1808ac864;
                uVar19 = local_214;
                uVar30 = _DAT_1808ade90;
              }
              cVar10 = local_res20;
            }
            FUN_1803d8a40(1);
            uVar19 = uVar19 & 0xfffffffe;
            if (local_178 != 0) {
              uVar18 = (local_168 - local_178 >> 2) * 4;
              lVar16 = local_178;
              if (0xfff < uVar18) {
                lVar16 = *(longlong *)(local_178 + -8);
                if (0x1f < (local_178 - lVar16) - 8U) {
                  pcVar4 = (code *)swi(0x29);
                  (*pcVar4)(5);
                  break;
                }
                uVar18 = uVar18 + 0x27;
              }
              thunk_FUN_1803d64e0(lVar16,uVar18);
              local_178 = 0;
              lStack_170 = 0;
              local_168 = 0;
            }
            FUN_1800132b0(&uStack_190);
            FUN_1800132b0(&local_1a8);
          }
          FUN_1803d8a40(1);
          cVar9 = FUN_1803dd930(0);
          if ((cVar9 != '\0') && (cVar9 = FUN_1803e9690(1,0,0), cVar9 != '\0')) {
            FUN_1802b4d80("##history_context");
          }
          DAT_180cd04ab = 1;
          local_1e4 = 0x40e00000;
          local_1e0 = 0x40e00000;
          cVar9 = FUN_1802b5260("##history_context",&local_1e4);
          if (cVar9 != '\0') {
            local_1dc = 0;
            FUN_1803d89a0(0xe,&local_1dc);
            uVar12 = DAT_1808acbe4;
            in_stack_fffffffffffffd88 = in_stack_fffffffffffffd88 & 0xffffff00;
            cVar9 = FUN_1802c63e0(&DAT_18075c420,"picker_copy",
                                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
                                  ,DAT_1808acbe4,in_stack_fffffffffffffd88);
            if (cVar9 != '\0') {
              FUN_1802c6290(puVar1);
              FUN_1803ee1f0();
            }
            in_stack_fffffffffffffd88 = in_stack_fffffffffffffd88 & 0xffffff00;
            cVar9 = FUN_1802c63e0("paste","picker_paste",
                                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 0C136 0 115 13 104 32L47 32C21 32 0 54 0 80L0 400C0 427 21 448 47 448L191 448L191 176C191 132 227 96 272 96L320 96L320 80C320 54 298 32 272 32L215 32C204 13 183 0 160 0ZM272 128C245 128 224 150 224 176L224 448L224 464C224 490 245 512 272 512L464 512C490 512 512 490 512 464L512 244C512 232 506 219 497 210L430 143C421 134 408 128 396 128L320 128L272 128ZM160 40C173 40 184 51 184 64C184 78 173 88 160 88C146 88 136 78 136 64C136 51 146 40 160 40Z\"/></svg>"
                                  ,DAT_1808acc00,in_stack_fffffffffffffd88);
            if (cVar9 != '\0') {
              FUN_1802c6350(puVar1);
              FUN_1803ee1f0();
            }
            in_stack_fffffffffffffd88 = CONCAT31((int3)(in_stack_fffffffffffffd88 >> 8),1);
            cVar9 = FUN_1802c63e0("delete","picker_delete",
                                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M135 18C140 7 151 0 163 0L284 0C296 0 307 7 312 18L320 32L416 32C433 32 448 47 448 64C448 82 433 96 416 96L32 96C14 96 0 82 0 64C0 47 14 32 32 32L128 32L135 18ZM32 128L416 128L416 448C416 483 387 512 352 512L96 512C60 512 32 483 32 448L32 128ZM128 192C119 192 112 200 112 208L112 432C112 441 119 448 128 448C136 448 144 441 144 432L144 208C144 200 136 192 128 192ZM224 192C215 192 208 200 208 208L208 432C208 441 215 448 224 448C232 448 240 441 240 432L240 208C240 200 232 192 224 192ZM320 192C311 192 304 200 304 208L304 432C304 441 311 448 320 448C328 448 336 441 336 432L336 208C336 200 328 192 320 192Z\"/></svg>"
                                  ,uVar12,in_stack_fffffffffffffd88);
            if (cVar9 != '\0') {
              *(undefined1 *)(puVar1 + 4) = 1;
              FUN_1803ee1f0();
            }
            FUN_1803d8a40(1);
            FUN_1802b5590();
          }
          if (cVar10 != '\0') {
            uVar12 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *param_1 = *puVar1;
            param_1[1] = uVar12;
            param_1[2] = uVar5;
            param_1[3] = uVar6;
            local_268 = '\x01';
          }
          iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
          if (iVar11 < 2) {
            FUN_1803ebc00("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
          }
          cVar10 = local_268;
          if (uVar17 != 0) {
            FUN_1803ec6c0(0,DAT_1808acda0);
          }
        }
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
      fVar26 = local_210;
    }
  }
  fVar28 = *(float *)((longlong)plVar3 + 0x11c) - fVar26;
  if (DAT_1809f51dc == fVar7) {
    DAT_1809f51dc = fVar28;
  }
  if (DAT_1809f51dc != fVar28) {
    fVar24 = (float)((uint)(fVar28 - DAT_1809f51dc) & uVar30) * *(float *)(DAT_180ca0a50 + 0x40) *
             fVar24;
    if (fVar31 <= fVar24) {
      fVar31 = fVar24;
    }
    if (fVar28 <= DAT_1809f51dc) {
      fVar31 = DAT_1809f51dc - fVar31;
      DAT_1809f51dc = fVar28;
      if (fVar28 <= fVar31) {
        DAT_1809f51dc = fVar31;
      }
    }
    else {
      fVar31 = fVar31 + DAT_1809f51dc;
      DAT_1809f51dc = fVar28;
      if (fVar31 <= fVar28) {
        DAT_1809f51dc = fVar31;
      }
    }
  }
  fVar26 = DAT_1809f51dc + fVar26;
  *(float *)((longlong)plVar3 + 0x11c) = fVar26;
  *(float *)((longlong)plVar3 + 0x134) = fVar26;
  return cVar10;
}



/* ===== 1802cb180 FUN_1802cb180 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802cb180(code *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  float fVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 ***local_d0 [2];
  undefined8 local_c0;
  ulonglong local_b8;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  lVar1 = DAT_180ca0a50;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_128;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  local_108 = 0;
  FUN_1803d89a0(0xe,&local_108);
  FUN_1802c82e0();
  *(float *)(lVar1 + 0x11c) = *(float *)(lVar1 + 0x11c) + *(float *)(lVar1 + 0x5c);
  local_f8 = DAT_1809f72e0;
  local_f7 = DAT_1809f72e1;
  local_f6 = DAT_1809f72e2;
  local_f4 = DAT_1809f72e4;
  local_f0 = DAT_1809f72e8;
  local_ec = DAT_1809f72ec;
  local_e8 = _DAT_1809f72f0;
  uStack_e0 = _DAT_1809f72f8;
  local_d8 = DAT_1809f7300;
  local_d4 = DAT_1809f7304;
  FUN_180024b50(local_d0,&DAT_1809f7308);
  uVar5 = DAT_1809f5b50;
  uVar4 = _DAT_1809f5b48;
  uVar3 = _DAT_1809f5b40;
  local_a8 = 0x100;
  local_a6 = 1;
  local_a4 = DAT_1808ac8e4;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_84 = DAT_1808aca44;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = 0;
  _DAT_1809f72e0 = 0x100;
  DAT_1809f72e2 = 1;
  DAT_1809f72e4 = DAT_1808ac8e4;
  _DAT_1809f72e8 = 0;
  _DAT_1809f72f0 = 0;
  _DAT_1809f72f8 = 0;
  DAT_1809f7300 = 0;
  DAT_1809f7304 = DAT_1808aca44;
  FUN_18002ba60(&DAT_1809f7308,&local_80);
  FUN_18000f890(&local_80);
  _DAT_1809f72e0 = 1;
  DAT_1809f72e2 = 0;
  DAT_1809f72e4 = 0x41400000;
  DAT_1809f7304 = 0x41fda5e3;
  DAT_1809f72f0 = *(undefined4 *)(lVar1 + 0x118);
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((*(longlong *)(lVar2 + 0x1c8) != 0) ||
     (lVar7 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar7 = 0x250;
  }
  DAT_1809f72f4 = *(float *)(lVar7 + lVar2) - *(float *)(lVar2 + 0x118);
  DAT_1809f72f8 = *(float *)(lVar1 + 0x11c);
  DAT_1809f7300 = *(undefined4 *)(lVar1 + 0x15c);
  lVar1 = *(longlong *)(lVar1 + 0x2c8);
  DAT_1809f72fc = DAT_1809f72f8;
  FUN_180401570(lVar1 + 0x88,DAT_1809f72f8,2);
  FUN_180401a80(lVar1 + 0x88,lVar1,1);
  (*param_1)(param_2);
  FUN_180401a80(lVar1 + 0x88,lVar1,0);
  FUN_1804016a0(lVar1 + 0x88,lVar1);
  lVar1 = DAT_180ca0a50;
  fVar9 = DAT_1809f72f8;
  uVar6 = DAT_1809f72f0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  *(undefined4 *)(lVar1 + 0x118) = uVar6;
  *(float *)(lVar1 + 0x11c) = fVar9;
  *(undefined1 *)(lVar1 + 0x159) = 1;
  fVar9 = DAT_1808ac34c;
  if (DAT_1808ac34c <= DAT_1809f72fc - DAT_1809f72f8) {
    fVar9 = DAT_1809f72fc - DAT_1809f72f8;
  }
  local_108 = CONCAT44(fVar9,DAT_1809f72f4);
  FUN_1804174f0(&local_108);
  _DAT_1809f72e0 = CONCAT11(local_f7,local_f8);
  DAT_1809f72e2 = local_f6;
  DAT_1809f72e4 = local_f4;
  _DAT_1809f72e8 = CONCAT44(local_ec,local_f0);
  _DAT_1809f72f0 = local_e8;
  _DAT_1809f72f8 = uStack_e0;
  DAT_1809f7300 = local_d8;
  DAT_1809f7304 = local_d4;
  pppuVar8 = local_d0;
  if (0xf < local_b8) {
    pppuVar8 = local_d0[0];
  }
  FUN_180029840(&DAT_1809f7308,pppuVar8,local_c0);
  _DAT_1809f5b40 = uVar3;
  _DAT_1809f5b48 = uVar4;
  DAT_1809f5b50 = uVar5;
  FUN_1803d8a40(1);
  FUN_18000f890(local_d0);
  return;
}



/* ===== 1802cb5b0 FUN_1802cb5b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1802cb5b0(undefined4 param_1,longlong *param_2)

{
  float *pfVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  int *piVar18;
  float *pfVar19;
  uint *puVar20;
  undefined1 auVar21 [8];
  longlong lVar22;
  float *pfVar23;
  int *piVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong lVar27;
  undefined **ppuVar28;
  undefined1 (*pauVar29) [16];
  undefined1 *puVar30;
  undefined1 *puVar31;
  float fVar32;
  longlong lVar33;
  float fVar34;
  ulonglong uVar35;
  longlong lVar36;
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar48;
  undefined8 extraout_XMM0_Qa_00;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [24];
  undefined8 *local_308;
  undefined8 local_300;
  float local_2f8;
  undefined8 *local_2f0;
  byte local_2c8;
  undefined1 local_2c7;
  undefined1 local_2c6;
  undefined8 local_2c0;
  undefined4 local_2b8;
  float fStack_2b4;
  char local_2a8 [8];
  float local_2a0;
  float local_29c;
  undefined8 local_298;
  float local_290;
  float local_28c;
  float local_288 [2];
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270 [2];
  undefined8 local_268;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  longlong local_248 [2];
  undefined1 local_238 [8];
  undefined8 uStack_230;
  longlong local_228;
  float local_218 [2];
  float local_210;
  undefined8 local_208;
  float local_200;
  float fStack_1fc;
  undefined4 local_1f8;
  float local_1f4;
  longlong local_1f0;
  ulonglong uStack_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  float local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  int local_1b0 [5];
  float local_19c;
  float local_198;
  float local_194;
  longlong local_190;
  longlong lStack_188;
  undefined8 local_180;
  float local_178 [2];
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  longlong *local_160;
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong lStack_120;
  ulonglong local_118;
  float *local_108;
  float *pfStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  float *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_328;
  local_2a0 = 0.0;
  local_2c8 = 0;
  local_1b8 = param_1;
  local_160 = param_2;
  FUN_1803e8a70();
  local_248[0] = 0x40e0000040e00000;
  FUN_1803d89a0(0xe,local_248);
  local_248[0] = 0x4040000040c00000;
  FUN_1803d89a0(0xb,local_248);
  fVar42 = DAT_1808acda0;
  FUN_1803ec770();
  lVar36 = DAT_180ca0a50;
  local_248[0] = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_280 = *(ulonglong *)(lVar36 + 0x14f8);
  local_28c = (float)(int)param_2[1];
  if (1 < (int)param_2[1]) {
    if ((char)param_2[5] == '\0') {
      local_2c8 = FUN_1802c7970(param_1,param_2);
    }
    else {
      local_2c8 = FUN_1802c7c10(param_2);
    }
    lVar36 = DAT_180ca0a50;
  }
  local_1b0[0] = (int)param_2[1] + -1;
  local_1b4 = 0;
  iVar14 = *(int *)param_2[2];
  piVar24 = &local_1b4;
  if (-1 < iVar14) {
    piVar24 = (int *)param_2[2];
  }
  piVar18 = local_1b0;
  if (iVar14 <= local_1b0[0]) {
    piVar18 = piVar24;
  }
  iVar14 = *piVar18;
  lVar33 = (longlong)iVar14;
  cVar11 = (char)iVar14 * '\x03';
  lVar22 = *param_2;
  uVar40 = *(undefined8 *)(*(longlong *)(lVar36 + 0x14f8) + 0x1c0);
  local_208 = uVar40;
  iVar13 = FUN_1803e8900(*(longlong *)(lVar36 + 0x14f8),"##selected");
  local_260 = (float)(iVar14 + iVar13);
  local_1b0[1] = 0;
  iVar13 = *(int *)(lVar22 + 0x10 + lVar33 * 0x18);
  local_1b0[2] = iVar13 + -1;
  puVar26 = (uint *)(local_1b0 + 1);
  if (-1 < local_1b0[2]) {
    puVar26 = (uint *)(local_1b0 + 2);
  }
  local_1b0[3] = 0;
  local_1b0[4] = FUN_1803d8260(uVar40,local_260,0);
  uVar15 = DAT_1808acbe4;
  fVar51 = DAT_1808ac34c;
  fVar46 = DAT_1808ac1f4;
  puVar20 = (uint *)(local_1b0 + 3);
  if (-1 < local_1b0[4]) {
    puVar20 = (uint *)(local_1b0 + 4);
  }
  if ((int)*puVar26 < local_1b0[4]) {
    puVar20 = puVar26;
  }
  uVar35 = (ulonglong)*puVar20;
  if (iVar13 < 2) {
    uVar48 = local_280;
  }
  else {
    iVar13 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##tabs");
    local_288[0] = (float)(iVar13 + iVar14);
    fVar41 = (float)FUN_1803d82e0(uVar40,local_288[0],0);
    uVar48 = local_280;
    if (((int)local_28c < 2) || ((char)local_160[5] == '\0')) {
      fVar49 = (float)FUN_18053f0d0((*(float *)(local_280 + 0x30) - fVar41) * fVar46);
      fVar49 = fVar49 + (*(float *)(uVar48 + 0x28) - *(float *)(uVar48 + 0x98));
    }
    else {
      FUN_1803ec6c0();
      fVar49 = *(float *)(local_280 + 0x280) - fVar41;
      uVar48 = local_280;
    }
    lVar36 = local_248[0];
    pfVar1 = (float *)(uVar48 + 0x118);
    *pfVar1 = fVar49;
    pfVar23 = (float *)(uVar48 + 0x130);
    if (*(float *)(uVar48 + 0x130) <= fVar49 && fVar49 != *(float *)(uVar48 + 0x130)) {
      pfVar23 = pfVar1;
    }
    *(float *)(uVar48 + 0x130) = *pfVar23;
    fVar49 = *pfVar1;
    fVar52 = *(float *)(uVar48 + 0x28);
    fVar54 = *(float *)(uVar48 + 0x98);
    if (fVar41 == 0.0) {
      fVar41 = 0.0;
    }
    else {
      fVar41 = fVar51;
    }
    FUN_1803d8870(0,fVar41 * *(float *)(local_248[0] + 0xc9c));
    uVar7 = DAT_1808acc00;
    fVar41 = *(float *)(lVar36 + 0xce0) + *(float *)(lVar36 + 0xce0) + DAT_1808ac930;
    uVar25 = 0;
    if (0 < *(int *)(lVar22 + 0x10 + lVar33 * 0x18)) {
      do {
        iVar14 = (int)uVar25;
        uVar47 = FUN_1803e8a70(uVar25);
        lVar27 = (longlong)iVar14 * 0x20;
        lVar36 = *(longlong *)(lVar22 + 8 + lVar33 * 0x18);
        local_308 = (undefined8 *)CONCAT44(local_308._4_4_,fVar41);
        cVar9 = FUN_1802c6980(uVar47,*(undefined8 *)(lVar36 + lVar27),
                              *(undefined8 *)(lVar36 + 8 + lVar27),iVar14 == (int)uVar35);
        if (cVar9 != '\0') {
          FUN_1803d8350(uVar40,local_260,uVar25);
          uVar35 = uVar25;
        }
        cVar9 = FUN_1803dd930(0);
        if ((cVar9 != '\0') && (cVar9 = FUN_1803e9690(1,0,0), cVar9 != '\0')) {
          FUN_1802b4d80("##tab_context");
        }
        lVar36 = *(longlong *)(lVar22 + 8 + lVar33 * 0x18);
        puVar3 = *(undefined8 **)(lVar36 + 0x18 + lVar27);
        puVar4 = *(undefined8 **)(lVar36 + lVar27);
        DAT_180cd04ab = 1;
        local_2a0 = 7.0;
        local_29c = 7.0;
        cVar9 = FUN_1802b5260("##tab_context",&local_2a0);
        bVar10 = 0;
        if (cVar9 != '\0') {
          local_298 = 0;
          FUN_1803d89a0(0xe,&local_298);
          local_308 = (undefined8 *)((ulonglong)local_308 & 0xffffffffffffff00);
          cVar9 = FUN_1802c63e0(&DAT_18075c420,"picker_copy",
                                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
                                ,uVar15);
          if (cVar9 != '\0') {
            FUN_1802c6290(puVar4);
            FUN_1803ee1f0();
          }
          local_308 = (undefined8 *)((ulonglong)local_308 & 0xffffffffffffff00);
          cVar9 = FUN_1802c63e0("paste","picker_paste",
                                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 0C136 0 115 13 104 32L47 32C21 32 0 54 0 80L0 400C0 427 21 448 47 448L191 448L191 176C191 132 227 96 272 96L320 96L320 80C320 54 298 32 272 32L215 32C204 13 183 0 160 0ZM272 128C245 128 224 150 224 176L224 448L224 464C224 490 245 512 272 512L464 512C490 512 512 490 512 464L512 244C512 232 506 219 497 210L430 143C421 134 408 128 396 128L320 128L272 128ZM160 40C173 40 184 51 184 64C184 78 173 88 160 88C146 88 136 78 136 64C136 51 146 40 160 40Z\"/></svg>"
                                ,uVar7);
          bVar10 = 0;
          if (cVar9 != '\0') {
            bVar10 = FUN_1802c6350(puVar4);
            FUN_1803ee1f0();
          }
          local_308 = (undefined8 *)CONCAT71(local_308._1_7_,1);
          cVar9 = FUN_1802c63e0("reset","picker_reset",
                                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M48 224L40 224C26 224 16 214 16 200L16 72C16 63 21 54 30 50C39 47 50 49 57 55L98 97C186 11 327 11 414 98C501 186 501 327 414 415C326 501 185 501 97 415C85 402 85 382 97 370C110 357 130 357 142 370C205 432 306 432 369 370C431 307 431 206 369 143C307 81 206 81 143 142L185 183C191 190 193 201 190 210C186 219 177 224 168 224L48 224L48 224Z\"/></svg>"
                                ,uVar7);
          if (cVar9 != '\0') {
            if (puVar3 == (undefined8 *)0x0) {
              if (((undefined8 *)((longlong)&DAT_18091a18c + 3U) < puVar4) &&
                 (puVar4 + 2 < (undefined8 *)((longlong)&DAT_180960e34 + 1U))) {
                uVar40 = puVar4[-0x580b8];
                uVar47 = puVar4[-0x580b7];
                goto LAB_1802cba5a;
              }
            }
            else {
              uVar40 = *puVar3;
              uVar47 = puVar3[1];
LAB_1802cba5a:
              bVar10 = 1;
              *puVar4 = uVar40;
              puVar4[1] = uVar47;
            }
            FUN_1803ee1f0();
          }
          FUN_1803d8a40(1);
          FUN_1802b5590();
        }
        local_2c8 = local_2c8 | bVar10;
        iVar13 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
        if (iVar13 < 2) {
          FUN_1803ebc00("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar13 + -1;
        }
        if (iVar14 != *(int *)(lVar22 + 0x10 + lVar33 * 0x18) + -1) {
          FUN_1803ec6c0();
        }
        uVar25 = (ulonglong)(iVar14 + 1U);
        uVar40 = local_208;
      } while ((int)(iVar14 + 1U) < *(int *)(lVar22 + 0x10 + lVar33 * 0x18));
      uVar48 = local_280;
      fVar46 = DAT_1808ac1f4;
    }
    FUN_1803d8a40(1);
    FUN_1803d83f0(uVar40,local_288[0],
                  ((*(float *)(uVar48 + 0x120) - *(float *)(uVar48 + 0x28)) +
                  *(float *)(uVar48 + 0x98)) - ((fVar49 - fVar52) + fVar54));
    iVar13 = *(int *)(lVar22 + 0x10 + lVar33 * 0x18);
  }
  puVar31 = auStack_328;
  puVar30 = auStack_328;
  if ((1 < (int)local_28c) || (1 < iVar13)) {
    FUN_1802c82e0();
  }
  if (*(int *)(lVar22 + 0x10 + lVar33 * 0x18) < 1) {
    lVar36 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    iVar14 = *(int *)(lVar36 + 0x1f8);
    if (iVar14 < 1) {
      FUN_1803ebc00("Calling PopItemWidth() too many times!");
    }
    else {
      *(undefined4 *)(lVar36 + 0x1e8) =
           *(undefined4 *)(*(longlong *)(lVar36 + 0x200) + -4 + (longlong)iVar14 * 4);
      *(int *)(lVar36 + 0x1f8) = iVar14 + -1;
    }
    FUN_1803d8a40(2);
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      FUN_1803ebc00("Calling PopID() too many times!");
      puVar31 = auStack_328;
      bVar10 = local_2c8;
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
      bVar10 = local_2c8;
    }
    goto LAB_1802cd8c2;
  }
  lVar27 = (longlong)(int)uVar35 * 0x20;
  lVar36 = *(longlong *)(lVar22 + 8 + lVar33 * 0x18);
  pfVar1 = *(float **)(lVar27 + lVar36);
  local_2c6 = *(undefined1 *)(lVar27 + 0x10 + lVar36);
  FUN_1803ec9c0();
  local_2a0 = 12.0;
  local_29c = 12.0;
  FUN_1803d89a0(0xe,&local_2a0);
  fVar41 = pfVar1[2];
  fVar49 = pfVar1[1];
  local_28c = *pfVar1;
  local_1f0 = *(longlong *)pfVar1;
  if (fVar41 <= fVar49) {
    fVar42 = 0.0;
    fVar52 = fVar41;
  }
  else {
    fVar52 = fVar49;
    fVar49 = fVar41;
  }
  fVar54 = fVar49;
  if (local_28c < fVar49) {
    fVar42 = DAT_1808acd6c - fVar42;
    fVar54 = local_28c;
    local_28c = fVar49;
  }
  fVar55 = local_28c;
  fVar49 = fVar54;
  if (fVar52 <= fVar54) {
    fVar49 = fVar52;
  }
  fVar52 = (float)((uint)((fVar54 - fVar52) / ((local_28c - fVar49) * DAT_1808ac7ac + DAT_1808abf50)
                         + fVar42) & _DAT_1808ade90);
  fVar42 = (local_28c - fVar49) / (local_28c + DAT_1808abf50);
  local_268 = CONCAT44(local_268._4_4_,fVar42);
  uStack_1e8 = (ulonglong)(uint)fVar41;
  local_260 = local_28c;
  local_210 = fVar42;
  iVar14 = FUN_1803d7f30(&local_1f0);
  if (iVar14 == DAT_1811071c8) {
    if (fVar42 == 0.0) {
      fVar52 = DAT_18110747c;
    }
    else if ((fVar52 == 0.0) && (DAT_18110747c == fVar51)) {
      fVar52 = fVar51;
    }
    if (fVar55 == 0.0) {
      local_210 = DAT_181107584;
      local_268 = CONCAT44(local_268._4_4_,DAT_181107584);
      fVar42 = DAT_181107584;
    }
  }
  FUN_1803ec830();
  fVar43 = (float)FUN_18053f0d0();
  fVar53 = DAT_1808acb8c;
  lVar36 = *(longlong *)(uVar48 + 0x2c8);
  fVar41 = *(float *)(local_248[0] + 0xc9c);
  fVar49 = *(float *)(uVar48 + 0x118);
  fVar54 = *(float *)(uVar48 + 0x11c);
  local_2c0 = (float *)CONCAT44(0x43750000,fVar43);
  local_278 = 0;
  local_270[0] = 0;
  local_300 = local_270;
  local_308 = (undefined8 *)((longlong)&local_278 + 4);
  local_290 = fVar43;
  local_258 = fVar41;
  local_1f0 = lVar36;
  FUN_1803d80a0();
  fVar34 = (float)((int)(fVar41 * DAT_1808acb94 + fVar46) << 0x18);
  fVar32 = (float)((uint)fVar34 | 0xffffff);
  uVar48 = (ulonglong)(uint)fVar32;
  local_200 = (float)local_278;
  fStack_1fc = local_278._4_4_;
  local_1f8 = local_270[0];
  local_1f4 = fVar41;
  local_2a0 = (float)FUN_1803d7f30(&local_200);
  fVar46 = DAT_1808ac838;
  fVar50 = fVar54 + fVar53;
  fVar43 = fVar49 + fVar43;
  local_278 = CONCAT44(fVar50,fVar43);
  local_208 = CONCAT44(local_208._4_4_,fVar34);
  local_298 = CONCAT44(local_298._4_4_,fVar34) | 0xffffff;
  _local_238 = ZEXT816(0);
  local_228 = 0;
  fVar41 = fVar50 - fVar54;
  if (fVar43 - fVar49 <= fVar50 - fVar54) {
    fVar41 = fVar43 - fVar49;
  }
  fVar44 = fVar41 - fVar51;
  if (DAT_1808ac838 <= fVar41 - fVar51) {
    fVar44 = DAT_1808ac838;
  }
  local_218[0] = fVar34;
  local_200 = fVar49;
  fStack_1fc = fVar54;
  FUN_1802c3a20(&local_200,&local_278,fVar44,local_238);
  fVar43 = fVar43 - local_200;
  local_254 = fVar51;
  if (fVar51 <= fVar43) {
    local_254 = fVar43;
  }
  fVar50 = fVar50 - fStack_1fc;
  local_288[0] = fVar51;
  if (fVar51 <= fVar50) {
    local_288[0] = fVar50;
  }
  local_108 = (float *)&local_298;
  pfStack_100 = &local_2a0;
  local_f8 = &local_200;
  local_f0 = &local_254;
  FUN_1803416c0(lVar36,local_238,&local_108);
  if (local_218[0] == (float)local_208) {
    local_108 = local_218;
    pfStack_100 = &local_200;
    local_f8 = local_288;
    FUN_180341de0(lVar36,local_238,&local_108);
  }
  else {
    local_108 = &local_200;
    pfStack_100 = &local_254;
    local_f8 = local_218;
    local_f0 = (float *)&local_208;
    local_e8 = local_288;
    FUN_180342500(lVar36,local_238,&local_108);
  }
  if (local_238 == (undefined1  [8])0x0) {
LAB_1802cbfa8:
    cVar11 = '\0';
    local_2c7 = 0;
    fVar41 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
    fVar49 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
    FUN_180415e30(&DAT_18075c530,&local_2c0,0);
    fVar54 = fStack_1fc;
    lVar22 = DAT_180ca0a50;
    if ((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
       (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) {
      local_24c = (*(float *)(DAT_180ca0a50 + 0x114) - fVar49) / _DAT_1808acb88;
      local_250 = (*(float *)(DAT_180ca0a50 + 0x110) - fVar41) / (local_290 - fVar51);
      local_198 = 1.0;
      local_19c = 0.0;
      pfVar23 = &local_19c;
      if (0.0 <= local_250) {
        pfVar23 = &local_250;
      }
      pfVar19 = &local_198;
      if (local_250 <= fVar51) {
        pfVar19 = pfVar23;
      }
      fVar42 = *pfVar19;
      local_210 = fVar42;
      local_268 = CONCAT44(local_268._4_4_,fVar42);
      local_178[0] = 1.0;
      local_194 = 0.0;
      pfVar23 = &local_194;
      if (0.0 <= local_24c) {
        pfVar23 = &local_24c;
      }
      pfVar19 = local_178;
      if (local_24c <= fVar51) {
        pfVar19 = pfVar23;
      }
      fVar55 = fVar51 - *pfVar19;
      local_28c = fVar55;
      local_260 = fVar55;
      cVar11 = '\x01';
      local_2c7 = 1;
    }
    local_298._0_4_ = 1.0;
    local_2a0 = 0.0;
    pfVar23 = &local_2a0;
    if (0.0 <= fVar55) {
      pfVar23 = &local_260;
    }
    pfVar19 = (float *)&local_298;
    if (fVar55 <= fVar51) {
      pfVar19 = pfVar23;
    }
    fVar49 = (float)FUN_18053f0d0((fVar51 - *pfVar19) * fVar53 + fStack_1fc + DAT_1808ac1f4);
    fVar41 = local_200;
    local_298._0_4_ = 1.0;
    local_2a0 = 0.0;
    pfVar23 = &local_2a0;
    if (0.0 <= fVar42) {
      pfVar23 = (float *)&local_268;
    }
    pfVar19 = (float *)&local_298;
    if (fVar42 <= fVar51) {
      pfVar19 = pfVar23;
    }
    fVar44 = (float)FUN_18053f0d0(local_290 * *pfVar19 + local_200 + DAT_1808ac1f4);
    fVar50 = DAT_1808acb94;
    fVar43 = DAT_1808ac1f4;
    local_2a0 = fVar41 + DAT_1808ac540;
    if (local_2a0 <= fVar44) {
      fVar41 = (fVar41 + local_290) - DAT_1808ac540;
      local_2a0 = fVar44;
      if (fVar41 <= fVar44) {
        local_2a0 = fVar41;
      }
    }
    local_29c = fVar54 + DAT_1808ac540;
    if (local_29c <= fVar49) {
      fVar41 = (fVar54 + fVar53) - DAT_1808ac540;
      local_29c = fVar49;
      if (fVar41 <= fVar49) {
        local_29c = fVar41;
      }
    }
    local_2c0 = (float *)0x4000000040000000;
    local_300 = (undefined4 *)CONCAT44(local_300._4_4_,DAT_1808ac864);
    local_308 = &local_2c0;
    FUN_18036cb10(lVar36,&local_2a0,fVar46,
                  (int)(*(float *)(lVar22 + 0xc9c) * DAT_1808ac1f4 * DAT_1808acb94 + DAT_1808ac1f4)
                  << 0x18);
    FUN_18036c740(lVar36,&local_2a0,fVar46,fVar32);
    fVar41 = local_258;
    local_2c0 = (float *)0x0;
    local_2b8 = 0;
    fStack_2b4 = local_258;
    local_300 = &local_2b8;
    local_308 = (undefined8 *)((longlong)&local_2c0 + 4);
    FUN_1803d80a0();
    uVar15 = FUN_1803d7f30(&local_2c0);
    FUN_18036c740(lVar36,&local_2a0,DAT_1808ac7ac,uVar15);
    uVar35 = local_280;
    fVar53 = local_290;
    fVar54 = DAT_1808ac710;
    uVar40 = *(undefined8 *)(local_280 + 0x118);
    iVar14 = (int)(longlong)(fVar41 * fVar50 + fVar43) << 0x18;
    local_108 = (float *)(CONCAT44(iVar14,iVar14) | 0xffff000000ff);
    pfStack_100 = (float *)(CONCAT44(iVar14,iVar14) | 0xffff000000ff00);
    local_f8 = (float *)(CONCAT44(iVar14,iVar14) | 0xff00ff00ff0000);
    local_f0 = (float *)(CONCAT44(local_f0._4_4_,iVar14) | 0xff);
    local_1e0._4_4_ = (float)((ulonglong)uVar40 >> 0x20);
    local_2c0 = (float *)CONCAT44(local_1e0._4_4_ + fVar46,(float)uVar40 + local_290);
    local_300._0_4_ = DAT_1808ac710;
    local_1e0 = uVar40;
    FUN_1802c41d0(lVar36,&local_1e0,&local_2c0,&local_108);
    local_2c0 = (float *)CONCAT44(0x41000000,fVar53);
    fVar41 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
    fVar49 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
    FUN_180415e30("##hue",&local_2c0,0);
    lVar22 = DAT_180ca0a50;
    if ((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
       (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) {
      local_250 = (*(float *)(DAT_180ca0a50 + 0x110) - fVar41) / (fVar53 - fVar51);
      local_24c = (*(float *)(DAT_180ca0a50 + 0x114) - fVar49) / DAT_1808ac7ec;
      local_298._0_4_ = 1.0;
      local_2a0 = 0.0;
      pfVar23 = &local_2a0;
      if (0.0 <= local_250) {
        pfVar23 = &local_250;
      }
      pfVar19 = (float *)&local_298;
      if (local_250 <= fVar51) {
        pfVar19 = pfVar23;
      }
      fVar52 = *pfVar19;
      cVar11 = '\x01';
      local_2c7 = 1;
    }
    fVar50 = (float)FUN_180519080(fVar53 * fVar52 + (float)local_1e0);
    fVar49 = fVar50 - DAT_1808ac7ac;
    fVar53 = (local_1e0._4_4_ + fVar54) - DAT_1808ac864;
    fVar50 = fVar50 + DAT_1808ac7ac;
    fVar43 = local_1e0._4_4_ + fVar54 + DAT_1808ac864;
    local_298 = CONCAT44(fVar43,fVar50);
    uStack_230 = _UNK_1808add28;
    local_238 = (undefined1  [8])_DAT_1808add20;
    local_2c0 = (float *)0x4000000040000000;
    local_2f0 = &local_2c0;
    local_2f8 = DAT_1808ac864;
    local_300 = (undefined4 *)((ulonglong)local_300._4_4_ << 0x20);
    local_308 = (undefined8 *)local_238;
    fVar54 = DAT_1808ac864;
    local_260 = fVar49;
    local_25c = fVar53;
    FUN_18036c0d0(lVar36,&local_260,&local_298,
                  (int)(*(float *)(lVar22 + 0xc9c) * DAT_1808ac1f4 * DAT_1808acb94 + DAT_1808ac1f4)
                  << 0x18);
    uVar48 = 0;
    local_2a0 = fVar32;
    if (fVar34 != 0.0) {
      local_1d8 = 0;
      lStack_1d0 = 0;
      local_1c8 = 0;
      FUN_1802c3a20(&local_260,&local_298,fVar46,&local_1d8);
      local_2c0 = &local_2a0;
      FUN_180341080(lVar36,&local_1d8,&local_2c0);
      if (local_1d8 != 0) {
        uVar25 = (local_1c8 - local_1d8 >> 3) * 8;
        lVar22 = local_1d8;
        if (0xfff < uVar25) {
          lVar22 = *(longlong *)(local_1d8 + -8);
          if (0x1f < (local_1d8 - lVar22) - 8U) goto LAB_1802cc5e3;
          uVar25 = uVar25 + 0x27;
        }
        thunk_FUN_1803d64e0(lVar22,uVar25);
      }
    }
    local_2c0 = (float *)0x0;
    local_2b8 = 0;
    fStack_2b4 = local_258;
    local_300 = &local_2b8;
    local_308 = (undefined8 *)((longlong)&local_2c0 + 4);
    FUN_1803d80a0();
    fVar54 = (float)local_2c0;
    if (0.0 <= (float)local_2c0) goto LAB_1802cc5ea;
    puVar31 = auStack_328;
    fVar41 = 0.0;
  }
  else {
    uVar25 = (local_228 - (longlong)local_238 >> 3) * 8;
    auVar21 = local_238;
    if (uVar25 < 0x1000) {
LAB_1802cbf97:
      thunk_FUN_1803d64e0(auVar21,uVar25);
      local_228 = 0;
      _local_238 = ZEXT816(0);
      goto LAB_1802cbfa8;
    }
    auVar21 = *(undefined1 (*) [8])((longlong)local_238 + -8);
    if (((longlong)local_238 - (longlong)auVar21) - 8U < 0x20) {
      uVar25 = uVar25 + 0x27;
      goto LAB_1802cbf97;
    }
LAB_1802cc5e3:
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)(5);
    puVar30 = auStack_320;
LAB_1802cc5ea:
    puVar31 = puVar30;
    fVar41 = fVar51;
    if (fVar54 <= fVar51) {
      fVar41 = fVar54;
    }
  }
  fVar32 = DAT_1808acb94;
  fVar54 = *(float *)(puVar31 + 0x6c);
  if (0.0 <= fVar54) {
    fVar34 = fVar51;
    if (fVar54 <= fVar51) {
      fVar34 = fVar54;
    }
  }
  else {
    fVar34 = 0.0;
  }
  fVar54 = *(float *)(puVar31 + 0x70);
  if (0.0 <= fVar54) {
    fVar44 = fVar51;
    if (fVar54 <= fVar51) {
      fVar44 = fVar54;
    }
  }
  else {
    fVar44 = 0.0;
  }
  fVar54 = *(float *)(puVar31 + 0x74);
  if (0.0 <= fVar54) {
    fVar45 = fVar51;
    if (fVar54 <= fVar51) {
      fVar45 = fVar54;
    }
  }
  else {
    fVar45 = 0.0;
  }
  *(float *)(puVar31 + 0x68) = fVar50 - DAT_1808ac658;
  *(float *)(puVar31 + 0x6c) = fVar43 - DAT_1808ac658;
  local_278 = CONCAT44(fVar53 + DAT_1808ac658,fVar49 + DAT_1808ac658);
  *(float *)(puVar31 + 0x20) = fVar46;
  *(undefined8 *)(puVar31 + -8) = 0x1802cc6e3;
  FUN_1802c3fb0(lVar36,&local_278,puVar31 + 0x68,
                (int)(fVar45 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
                (int)(fVar44 * DAT_1808acb94 + DAT_1808ac1f4) << 0x10 |
                (int)(fVar34 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
                (int)(fVar41 * DAT_1808acb94 + DAT_1808ac1f4));
  cVar9 = puVar31[0x62];
  if (cVar9 == '\0') {
    fVar46 = 0.0;
  }
  else {
    fVar46 = fVar51;
  }
  uVar40 = *(undefined8 *)(DAT_180ca0a50 + 0x14f8);
  *(undefined8 *)(puVar31 + -8) = 0x1802cc710;
  local_2a0 = (float)FUN_1803e8900(uVar40,"##alpha_visible");
  *(float *)(puVar31 + 0x68) = fVar46;
  *(float *)(puVar31 + 0x6c) = fVar46;
  *(float *)(puVar31 + 0x70) = fVar46;
  *(undefined4 *)(puVar31 + 0x74) = 0;
  *(undefined4 *)(puVar31 + 0x78) = 0xffffffff;
  *(undefined8 *)(puVar31 + -8) = 0x1802cc747;
  FUN_18034a380(extraout_XMM0_Qa,local_238,&local_2a0,puVar31 + 0x68);
  uVar15 = DAT_1808ac118;
  *(undefined8 *)(puVar31 + -8) = 0x1802cc767;
  local_254 = (float)FUN_1802b3660((longlong)local_238 + 0x14,fVar46,DAT_1808ac118,0);
  if (0.0 < local_254) {
    local_170 = *pfVar1;
    fStack_16c = pfVar1[1];
    fStack_168 = pfVar1[2];
    fStack_164 = pfVar1[3];
    _local_238 = ZEXT416((uint)fStack_164);
    if (local_254 == fVar51) {
      _DAT_181107280 = *(longlong *)pfVar1;
      lRam0000000181107288 = *(longlong *)(pfVar1 + 2);
    }
    else {
      local_170 = _DAT_181107280;
      fStack_16c = DAT_181107280_4;
      fStack_168 = (float)lRam0000000181107288;
      fStack_164 = lRam0000000181107288._4_4_;
      local_238._4_4_ = lRam0000000181107288._4_4_;
      local_238._0_4_ = lRam0000000181107288._4_4_;
      uStack_230._0_4_ = lRam0000000181107288._4_4_;
      uStack_230._4_4_ = lRam0000000181107288._4_4_;
    }
    fVar55 = fStack_168;
    fVar54 = fStack_16c;
    fVar49 = local_170;
    *(undefined8 *)(puVar31 + -8) = 0x1802cc80a;
    FUN_1803d8870(0);
    fVar41 = local_290;
    fVar42 = *(float *)(DAT_180ca0a50 + 0xc9c);
    local_208 = CONCAT44(local_208._4_4_,*(undefined4 *)(uVar35 + 0x11c));
    uVar40 = *(undefined8 *)(uVar35 + 0x118);
    local_268._4_4_ = (float)((ulonglong)uVar40 >> 0x20);
    local_298 = CONCAT44(local_268._4_4_ + DAT_1808ac838,(float)uVar40 + local_290);
    local_158 = 0;
    lStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    lStack_120 = 0;
    local_2a0 = 2.8026e-45;
    *(undefined8 *)(puVar31 + -8) = 0x1802cc8ac;
    local_288[0] = fVar42;
    local_268 = uVar40;
    local_118 = uVar48;
    FUN_1802c3a20(&local_268,&local_298,DAT_1808ac710,&local_158);
    lVar22 = DAT_180ca0a50;
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    fVar46 = *(float *)(*(longlong *)(*(longlong *)(lVar22 + 0x14f8) + 0x2c8) + 0xd0);
    *(undefined8 *)(puVar31 + -8) = 0x1802cc8f2;
    FUN_1802c4640(&local_158,fVar46 * DAT_1808ac1f4,&uStack_140);
    *(undefined8 *)(puVar31 + -8) = 0x1802cc8fd;
    FUN_1803d8870(0,fVar51);
    *(undefined4 *)(puVar31 + 0x20) = 0;
    *(undefined8 *)(puVar31 + -8) = 0x1802cc91b;
    FUN_1802c5b30(lVar36,&local_158,&local_268,&local_298);
    *(undefined8 *)(puVar31 + -8) = 0x1802cc925;
    FUN_1803d8a40(1);
    *(float *)(puVar31 + 0x68) = fVar49;
    *(float *)(puVar31 + 0x6c) = fVar54;
    *(float *)(puVar31 + 0x70) = fVar55;
    *(float *)(puVar31 + 0x74) = fVar42;
    *(undefined8 *)(puVar31 + -8) = 0x1802cc94a;
    uVar16 = FUN_1803d7f30(puVar31 + 0x68);
    *(uint *)(puVar31 + 0x28) = uVar16;
    *(uint *)(puVar31 + 0x20) = uVar16 & 0xffffff;
    *(undefined8 *)(puVar31 + -8) = 0x1802cc971;
    FUN_1802c57a0(lVar36,&local_158,&local_268,&local_298);
    if (local_128 != lStack_120) {
      if (2 < (ulonglong)(lStack_150 - local_158 >> 3)) {
        local_190 = 0;
        lStack_188 = 0;
        local_180 = 0;
        uVar35 = 0;
        lVar22 = local_158;
        lVar33 = lStack_150;
        do {
          uVar40 = *(undefined8 *)(lVar22 + uVar35 * 8);
          fVar42 = (float)uVar40;
          fVar46 = (float)((ulonglong)uVar40 >> 0x20);
          uVar35 = uVar35 + 1;
          uVar40 = *(undefined8 *)(lVar22 + (uVar35 % (ulonglong)(lVar33 - lVar22 >> 3)) * 8);
          fVar32 = (float)uVar40;
          fVar34 = (float)((ulonglong)uVar40 >> 0x20);
          fVar53 = fVar32 - fVar42;
          fVar41 = fVar34 - fVar46;
          fVar41 = fVar53 * fVar53 + fVar41 * fVar41;
          if (fVar41 < 0.0) {
            *(undefined8 *)(puVar31 + -8) = 0x1802cca23;
            uVar48 = FUN_18051af10();
          }
          else {
            uVar48 = (ulonglong)(uint)SQRT(fVar41);
          }
          *(undefined8 *)(puVar31 + -8) = 0x1802cca28;
          fVar41 = (float)FUN_18053ef70(uVar48);
          iVar14 = 1;
          if (1 < (int)fVar41) {
            iVar14 = (int)fVar41;
          }
          iVar13 = 0;
          if (0 < iVar14) {
            do {
              *(ulonglong *)(puVar31 + 0x68) =
                   CONCAT44((fVar34 - fVar46) * ((float)iVar13 / (float)iVar14) + fVar46,
                            (fVar32 - fVar42) * ((float)iVar13 / (float)iVar14) + fVar42);
              *(undefined8 *)(puVar31 + -8) = 0x1802cca8b;
              FUN_18008b8c0(&local_190);
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar14);
            lVar22 = local_158;
            lVar33 = lStack_150;
          }
        } while (uVar35 < (ulonglong)(lVar33 - lVar22 >> 3));
        local_108 = (float *)0x0;
        pfStack_100 = (float *)0x0;
        local_f8 = (float *)0x0;
        fVar42 = *(float *)(lVar36 + 0xd0);
        *(undefined8 *)(puVar31 + -8) = 0x1802ccaeb;
        FUN_1802c4640(&local_190,fVar42 * DAT_1808ac1f4,&local_108);
        local_1d8 = 0;
        lStack_1d0 = 0;
        local_1c8 = 0;
        if (lStack_188 - local_190 != 0) {
          uVar35 = lStack_188 - local_190 >> 3;
          if (0x3fffffffffffffff < uVar35) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar31 + -8) = &UNK_1802cd929;
            FUN_1800118d0();
          }
          lVar33 = uVar35 * 4;
          *(undefined8 *)(puVar31 + -8) = 0x1802ccb34;
          local_1d8 = FUN_18000fb70(lVar33);
          lVar22 = lVar33 + local_1d8;
          *(undefined8 *)(puVar31 + -8) = 0x1802ccb4d;
          local_1c8 = lVar22;
          FUN_180540170(local_1d8,0,lVar33);
          lStack_1d0 = lVar22;
        }
        pfVar23 = local_108;
        uVar35 = 0;
        if (lStack_188 - local_190 >> 3 != 0) {
          do {
            *(undefined8 *)(puVar31 + -8) = 0x1802ccb90;
            uVar15 = FUN_1802c4e50(&local_158,pfVar23 + uVar35 * 2);
            *(undefined4 *)(local_1d8 + uVar35 * 4) = uVar15;
            uVar35 = uVar35 + 1;
          } while (uVar35 < (ulonglong)(lStack_188 - local_190 >> 3));
        }
        local_278 = 0;
        *(longlong **)(puVar31 + 0x68) = &local_1d8;
        *(undefined8 **)(puVar31 + 0x70) = &local_278;
        *(undefined8 *)(puVar31 + -8) = 0x1802ccbdb;
        FUN_180343440(lVar36,&local_190,puVar31 + 0x68);
        *(undefined8 *)(puVar31 + -8) = 0x1802ccbe5;
        FUN_180068f30(&local_1d8);
        *(undefined8 *)(puVar31 + -8) = 0x1802ccbf2;
        FUN_1800132b0(&local_108);
        *(undefined8 *)(puVar31 + -8) = 0x1802ccbff;
        FUN_1800132b0(&local_190);
        cVar9 = puVar31[0x62];
        uVar35 = local_280;
        fVar32 = DAT_1808acb94;
        fVar41 = local_290;
      }
      uVar48 = 0;
      cVar11 = puVar31[0x61];
    }
    *(float *)(puVar31 + 0x68) = fVar41;
    *(undefined4 *)(puVar31 + 0x6c) = 0x41000000;
    fVar42 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
    fVar46 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x11c);
    *(undefined8 *)(puVar31 + -8) = 0x1802ccc62;
    FUN_180415e30("##alpha",puVar31 + 0x68,0);
    lVar22 = DAT_180ca0a50;
    if ((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
       (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) {
      local_250 = (*(float *)(DAT_180ca0a50 + 0x110) - fVar42) / (fVar41 - fVar51);
      local_24c = (*(float *)(DAT_180ca0a50 + 0x114) - fVar46) / DAT_1808ac7ec;
      local_260 = 1.0;
      local_298 = local_298 & 0xffffffff00000000;
      pfVar23 = (float *)&local_298;
      if (0.0 <= local_250) {
        pfVar23 = &local_250;
      }
      pfVar19 = &local_260;
      if (local_250 <= fVar51) {
        pfVar19 = pfVar23;
      }
      pfVar1[3] = *pfVar19;
      cVar11 = '\x01';
    }
    local_1bc = 1.0;
    local_1c0 = 0.0;
    pfVar23 = &local_1c0;
    if (0.0 <= (float)local_238._0_4_) {
      pfVar23 = &fStack_164;
    }
    pfVar19 = &local_1bc;
    if ((float)local_238._0_4_ <= fVar51) {
      pfVar19 = pfVar23;
    }
    fVar42 = *pfVar19;
    fVar41 = (float)local_268;
    fVar34 = (float)local_268 + DAT_1808ac540;
    *(undefined8 *)(puVar31 + -8) = 0x1802ccd3d;
    fVar53 = (float)FUN_180519080(fVar42 * local_290 + (float)local_268);
    fVar46 = DAT_1808ac710;
    if (fVar53 <= fVar34) {
      fVar53 = fVar34;
    }
    fVar41 = (fVar41 + local_290) - DAT_1808ac540;
    if (fVar53 <= fVar41) {
      fVar41 = fVar53;
    }
    local_280 = CONCAT44(local_268._4_4_ + DAT_1808ac710,fVar41);
    *(undefined4 *)(puVar31 + 0x68) = 0x40000000;
    *(undefined4 *)(puVar31 + 0x6c) = 0x40000000;
    fVar41 = *(float *)(lVar22 + 0xc9c);
    *(float *)(puVar31 + 0x28) = DAT_1808ac864;
    *(undefined1 **)(puVar31 + 0x20) = puVar31 + 0x68;
    *(undefined8 *)(puVar31 + -8) = 0x1802ccdd3;
    FUN_18036cb10(lVar36,&local_280,DAT_1808ac7ec,
                  (int)(fVar41 * DAT_1808ac1f4 * fVar32 + DAT_1808ac1f4) << 0x18);
    fVar41 = local_288[0];
    *(undefined8 *)(puVar31 + -8) = 0x1802cce0c;
    FUN_18036c740(lVar36,&local_280,DAT_1808ac7ec,
                  (int)(local_288[0] * fVar32 + DAT_1808ac1f4) << 0x18 | 0xffffff);
    fVar55 = (fVar55 - fVar51) * fVar42 + fVar51;
    fVar54 = (fVar54 - fVar51) * fVar42 + fVar51;
    fVar42 = (fVar49 - fVar51) * fVar42 + fVar51;
    if (0.0 <= fVar42) {
      fVar49 = fVar51;
      if (fVar42 <= fVar51) {
        fVar49 = fVar42;
      }
    }
    else {
      fVar49 = 0.0;
    }
    if (0.0 <= fVar54) {
      fVar42 = fVar51;
      if (fVar54 <= fVar51) {
        fVar42 = fVar54;
      }
    }
    else {
      fVar42 = 0.0;
    }
    if (0.0 <= fVar55) {
      fVar54 = fVar51;
      if (fVar55 <= fVar51) {
        fVar54 = fVar55;
      }
    }
    else {
      fVar54 = 0.0;
    }
    if (0.0 <= fVar41) {
      fVar55 = fVar51;
      if (fVar41 <= fVar51) {
        fVar55 = fVar41;
      }
    }
    else {
      fVar55 = 0.0;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802ccee5;
    FUN_18036c740(lVar36,&local_280,fVar46,
                  (int)(fVar55 * fVar32 + DAT_1808ac1f4) << 0x18 |
                  (int)(fVar54 * fVar32 + DAT_1808ac1f4) << 0x10 |
                  (int)(fVar42 * fVar32 + DAT_1808ac1f4) << 8 |
                  (int)(fVar49 * fVar32 + DAT_1808ac1f4));
    *(undefined8 *)(puVar31 + -8) = 0x1802cceef;
    FUN_1803d8a40(1);
    *(float *)(uVar35 + 0x11c) =
         (*(float *)(uVar35 + 0x11c) - (float)local_208) * local_254 + (float)local_208;
    *(float *)(uVar35 + 0x134) =
         (*(float *)(uVar35 + 0x134) - (float)local_208) * local_254 + (float)local_208;
    *(undefined8 *)(puVar31 + -8) = 0x1802ccf41;
    FUN_180349c50(&local_128);
    *(undefined8 *)(puVar31 + -8) = 0x1802ccf4d;
    FUN_1800132b0(&uStack_140);
    *(undefined8 *)(puVar31 + -8) = 0x1802ccf59;
    FUN_1800132b0(&local_158);
    fVar42 = local_210;
    uVar15 = DAT_1808ac118;
    fVar55 = local_28c;
  }
  if (cVar9 == '\0') {
    pfVar1[3] = 1.0;
  }
  if (cVar11 != '\0') {
    *(float **)(puVar31 + 0x28) = pfVar1 + 2;
    *(float **)(puVar31 + 0x20) = pfVar1 + 1;
    *(undefined8 *)(puVar31 + -8) = 0x1802ccfa6;
    FUN_1803d80a0(pfVar1 + 1,fVar42,fVar55,pfVar1);
    *(float *)(puVar31 + 0x68) = *pfVar1;
    *(float *)(puVar31 + 0x6c) = pfVar1[1];
    *(float *)(puVar31 + 0x70) = pfVar1[2];
    *(undefined4 *)(puVar31 + 0x74) = 0;
    *(undefined8 *)(puVar31 + -8) = 0x1802ccfed;
    DAT_18110747c = fVar52;
    DAT_181107584 = fVar42;
    DAT_1811071c8 = FUN_1803d7f30(puVar31 + 0x68);
    puVar31[0x60] = 1;
  }
  *(undefined8 *)(puVar31 + -8) = 0x1802cd002;
  FUN_1803d8a40(1);
  *(undefined8 *)(puVar31 + -8) = 0x1802cd007;
  FUN_1803ecb10();
  lVar36 = local_248[0];
  *(undefined4 *)(puVar31 + 0x68) = *(undefined4 *)(local_248[0] + 0xcec);
  *(undefined4 *)(puVar31 + 0x6c) = 0x41100000;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd030;
  FUN_1803d89a0(0xe,puVar31 + 0x68);
  *(undefined8 *)(puVar31 + -8) = 0x1802cd035;
  FUN_1802c82e0();
  *(undefined4 *)(puVar31 + 0x68) = 0x40400000;
  *(undefined4 *)(puVar31 + 0x6c) = *(undefined4 *)(lVar36 + 0xcf0);
  *(undefined8 *)(puVar31 + -8) = 0x1802cd05a;
  FUN_1803d89a0(0xe,puVar31 + 0x68);
  uVar8 = DAT_1808acd08;
  uVar7 = DAT_1808ac91c;
  lVar36 = DAT_181107a18;
  if ((DAT_181107a18 == 0) && (lVar36 = DAT_181107a08, DAT_181107a08 == 0)) {
    lVar36 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  local_298 = CONCAT44(local_298._4_4_,2);
  local_2a0 = (float)uVar48;
  pfVar23 = &local_2a0;
  if (-1 < DAT_181107190) {
    pfVar23 = (float *)&DAT_181107190;
  }
  pfVar19 = (float *)&local_298;
  if (DAT_181107190 < 3) {
    pfVar19 = pfVar23;
  }
  ppuVar28 = &PTR_DAT_180659bb0;
  pcVar5 = (&PTR_DAT_180659bb0)[(int)*pfVar19];
  lVar22 = lVar36;
  if (lVar36 == 0) {
    lVar22 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
  }
  *(float *)(puVar31 + 0x50) = (float)uVar48;
  *(ulonglong *)(puVar31 + 0x40) = uVar48;
  *(ulonglong *)(puVar31 + 0x38) = uVar48;
  *(ulonglong *)(puVar31 + 0x30) = uVar48;
  *(char **)(puVar31 + 0x28) = pcVar5;
  *(undefined4 *)(puVar31 + 0x20) = 0;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd10c;
  FUN_18040a2f0(puVar31 + 0x68,lVar22,DAT_1808ac91c,DAT_1808acd08);
  *(undefined8 *)(puVar31 + -8) = 0x1802cd11f;
  fVar42 = (float)FUN_18053f0d0(*(float *)(puVar31 + 0x68) + DAT_1808ac2f0);
  *(undefined8 *)(puVar31 + -8) = 0x1802cd12f;
  fVar46 = (float)FUN_18053f0d0();
  fVar42 = fVar42 + fVar46 + DAT_1808ac900;
  local_278 = *(undefined8 *)(uVar35 + 0x118);
  fVar46 = (float)local_278;
  lVar22 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined8 *)(puVar31 + -8) = 0x1802cd167;
  uVar17 = FUN_1803e8900(lVar22,"##format");
  iVar14 = *(int *)(lVar22 + 0x10c);
  if (*(int *)(lVar22 + 0x108) == iVar14) {
    iVar13 = *(int *)(lVar22 + 0x108) + 1;
    if (iVar14 == 0) {
      iVar14 = 8;
    }
    else {
      iVar14 = iVar14 / 2 + iVar14;
    }
    if (iVar13 < iVar14) {
      iVar13 = iVar14;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802cd1a9;
    FUN_18007e1d0(lVar22 + 0x108,iVar13);
  }
  *(undefined4 *)(*(longlong *)(lVar22 + 0x110) + (longlong)*(int *)(lVar22 + 0x108) * 4) = uVar17;
  *(int *)(lVar22 + 0x108) = *(int *)(lVar22 + 0x108) + 1;
  *(float *)(puVar31 + 0x68) = fVar42;
  *(undefined4 *)(puVar31 + 0x6c) = 0x41b2c083;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd1e4;
  cVar11 = FUN_180415e30("##frame",puVar31 + 0x68,0);
  *(undefined8 *)(puVar31 + -8) = 0x1802cd1ef;
  cVar9 = FUN_1803dd930(0);
  if ((cVar9 == '\0') &&
     ((*(int *)(DAT_180ca0a50 + 0x1578) == 0 ||
      (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))))) {
    fVar41 = 0.0;
  }
  else {
    fVar41 = fVar51;
  }
  local_2a0 = *(float *)(DAT_180ca0a50 + 0x1ee8);
  *(float *)(puVar31 + 0x68) = fVar41;
  *(float *)(puVar31 + 0x6c) = fVar41;
  *(float *)(puVar31 + 0x70) = fVar41;
  *(undefined4 *)(puVar31 + 0x74) = 0;
  *(undefined4 *)(puVar31 + 0x78) = 0xffffffff;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd252;
  FUN_18034a380(extraout_XMM0_Qa_00,local_238,&local_2a0,puVar31 + 0x68);
  *(undefined8 *)(puVar31 + -8) = 0x1802cd269;
  uVar15 = FUN_1802b3660((longlong)local_238 + 0x14,fVar41,uVar15,0);
  fVar41 = DAT_1808ac1f4;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd2ac;
  uVar16 = FUN_1802b38e0(0,(int)(longlong)
                                ((float)(DAT_180960f44 >> 0x18) * DAT_1808ac1b0 + DAT_1808ac1f4) <<
                           0x18 | DAT_180960f44 & 0xffffff,uVar15);
  lVar22 = local_1f0;
  fVar52 = local_258;
  *(float *)(puVar31 + 0x68) = fVar46 + fVar42;
  fVar49 = local_278._4_4_;
  *(float *)(puVar31 + 0x6c) = local_278._4_4_ + _DAT_1808ac968;
  *(undefined4 *)(puVar31 + 0x28) = 0;
  *(float *)(puVar31 + 0x20) = DAT_1808ac7ac;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd32b;
  FUN_1803fe590(local_1f0,&local_278,puVar31 + 0x68,
                (int)(longlong)((float)(uVar16 >> 0x18) * local_258 + fVar41) << 0x18 |
                uVar16 & 0xffffff);
  uVar16 = (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * fVar52 + fVar41) << 0x18;
  *(float *)(puVar31 + 0x68) = fVar46 + DAT_1808ac7ac;
  *(float *)(puVar31 + 0x6c) = fVar49 + DAT_1808ac658;
  if (((uVar16 != 0) && (pcVar5 != (char *)0x0)) && (*pcVar5 != '\0')) {
    if (lVar36 == 0) {
      lVar36 = *(longlong *)(*(longlong *)(lVar22 + 0x38) + 0x18);
    }
    _local_238 = *(undefined1 (*) [16])(lVar22 + 0x60);
    *(undefined4 *)(puVar31 + 0x48) = 0;
    *(undefined4 *)(puVar31 + 0x40) = 0;
    *(undefined8 *)(puVar31 + 0x38) = 0;
    *(char **)(puVar31 + 0x30) = pcVar5;
    *(undefined1 **)(puVar31 + 0x28) = local_238;
    *(uint *)(puVar31 + 0x20) = uVar16 | DAT_180960ec0 & 0xffffff;
    *(undefined8 *)(puVar31 + -8) = 0x1802cd3d9;
    FUN_18040a900(lVar36,lVar22,uVar7,puVar31 + 0x68);
  }
  uVar16 = DAT_180960ec0;
  fVar55 = (fVar46 + fVar42) - DAT_1808ac7ac;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd3f4;
  fVar54 = (float)FUN_18053fc00();
  *(float *)(puVar31 + 0x68) = fVar55 - fVar54;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd40f;
  fVar54 = (float)FUN_18053f0d0(fVar49 + _DAT_1808ac6e0);
  *(float *)(puVar31 + 0x6c) = fVar54 + fVar51;
  *(uint *)(puVar31 + 0x30) =
       (int)(longlong)((float)(uVar16 >> 0x18) * fVar52 + fVar41) << 0x18 | uVar16 & 0xffffff;
  *(undefined4 *)(puVar31 + 0x28) = DAT_1808ac880;
  *(undefined1 **)(puVar31 + 0x20) = puVar31 + 0x68;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd47b;
  FUN_1802c60a0(lVar22,"picker_chevron",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M201 343C213 356 234 356 246 343L406 183C419 171 419 150 406 138C394 125 373 125 361 138L224 275L86 138C74 125 53 125 41 138C28 150 28 171 41 183L201 343L201 343ZM201 343Z\"/></svg>"
                ,DAT_1808acbe4);
  if (cVar11 != '\0') {
    *(undefined8 *)(puVar31 + -8) = 0x1802cd48c;
    FUN_1802b4d80("##list");
  }
  fVar54 = DAT_1808ac980;
  fVar52 = DAT_1808ac930;
  fVar51 = fVar42;
  do {
    *(undefined4 *)(puVar31 + 0x50) = 0;
    *(undefined8 *)(puVar31 + 0x40) = 0;
    *(undefined8 *)(puVar31 + 0x38) = 0;
    *(undefined8 *)(puVar31 + 0x30) = 0;
    *(undefined **)(puVar31 + 0x28) = *ppuVar28;
    *(undefined4 *)(puVar31 + 0x20) = 0;
    uVar40 = *(undefined8 *)(DAT_180ca0a50 + 0x11f0);
    *(undefined8 *)(puVar31 + -8) = 0x1802cd4f1;
    FUN_18040a2f0(&local_1f0,uVar40,fVar52,uVar8);
    fVar55 = (float)local_1f0 + fVar54;
    if ((float)local_1f0 + fVar54 <= fVar51) {
      fVar55 = fVar51;
    }
    fVar51 = fVar55;
    ppuVar28 = ppuVar28 + 1;
  } while (ppuVar28 != (undefined **)&DAT_180659bc8);
  *(float *)(puVar31 + 0x68) = fVar51;
  *(undefined4 *)(puVar31 + 0x6c) = 0x41b2c083;
  local_278 = CONCAT44(fVar49,(fVar42 - fVar51) * fVar41 + fVar46);
  *(undefined8 *)(puVar31 + -8) = 0x1802cd540;
  cVar11 = FUN_1802b8820(&local_278,puVar31 + 0x68);
  if (cVar11 != '\0') {
    *(undefined8 *)(puVar31 + -8) = 0x1802cd54f;
    FUN_1803e8a70(0);
    *(undefined8 *)(puVar31 + -8) = 0x1802cd56a;
    cVar11 = FUN_1802b74f0(PTR_DAT_180659bb0,DAT_181107190 == 0,0,0);
    if (cVar11 != '\0') {
      DAT_181107190 = 0;
      *(undefined8 *)(puVar31 + -8) = 0x1802cd579;
      FUN_1803ee1f0();
    }
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      *(undefined8 *)(puVar31 + -8) = 0x1802cd59e;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802cd5b2;
    FUN_1803e8a70(1);
    *(undefined8 *)(puVar31 + -8) = 0x1802cd5ce;
    cVar11 = FUN_1802b74f0(PTR_DAT_180659bb8,DAT_181107190 == 1,0,0);
    if (cVar11 != '\0') {
      DAT_181107190 = 1;
      *(undefined8 *)(puVar31 + -8) = 0x1802cd5e1;
      FUN_1803ee1f0();
    }
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      *(undefined8 *)(puVar31 + -8) = 0x1802cd606;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802cd61a;
    FUN_1803e8a70(2);
    *(undefined8 *)(puVar31 + -8) = 0x1802cd636;
    cVar11 = FUN_1802b74f0(PTR_DAT_180659bc0,DAT_181107190 == 2,0,0);
    if (cVar11 != '\0') {
      DAT_181107190 = 2;
      *(undefined8 *)(puVar31 + -8) = 0x1802cd649;
      FUN_1803ee1f0();
    }
    iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
    if (iVar14 < 2) {
      *(undefined8 *)(puVar31 + -8) = 0x1802cd66e;
      FUN_1803ebc00("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
    }
    *(undefined8 *)(puVar31 + -8) = 0x1802cd67d;
    FUN_1802b5590();
  }
  iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar14 < 2) {
    *(undefined8 *)(puVar31 + -8) = 0x1802cd6a2;
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
  }
  *(undefined8 *)(puVar31 + -8) = 0x1802cd6bc;
  FUN_1803ec6c0();
  local_2a8[0] = '\0';
  if (DAT_181107190 == 0) {
    *(undefined8 *)(puVar31 + -8) = 0x1802cd6df;
    bVar12 = FUN_1802c8420(local_1b8,pfVar1,puVar31[0x62]);
  }
  else {
    *(undefined8 *)(puVar31 + -8) = 0x1802cd6f5;
    bVar12 = FUN_1802c9980(pfVar1,puVar31[0x62],DAT_181107190 == 2,local_2a8);
  }
  bVar2 = puVar31[0x60];
  *(undefined8 *)(puVar31 + -8) = 0x1802cd707;
  FUN_1803d8a40(1);
  if (local_2a8[0] != '\0') {
    local_1f0 = *(longlong *)pfVar1;
    uStack_1e8 = *(ulonglong *)(pfVar1 + 2);
    *(undefined8 *)(puVar31 + -8) = 0x1802cd722;
    uVar16 = FUN_1803d7f30(&local_1f0);
    pauVar37 = DAT_1811077f8;
    uVar35 = (ulonglong)uVar16;
    pauVar29 = DAT_1811077f0;
    pauVar38 = DAT_1811077f8;
    if (DAT_1811077f0 != DAT_1811077f8) {
      do {
        _local_238 = *pauVar29;
        *(undefined8 *)(puVar31 + -8) = 0x1802cd750;
        iVar14 = FUN_1803d7f30(local_238);
        if (iVar14 == (int)uVar35) break;
        pauVar29 = pauVar29 + 2;
      } while (pauVar29 != pauVar38);
    }
    if (pauVar29 != pauVar38) {
      pauVar39 = pauVar29 + 2;
      if (pauVar39 != pauVar38) {
        do {
          _local_238 = *pauVar39;
          *(undefined8 *)(puVar31 + -8) = 0x1802cd781;
          iVar14 = FUN_1803d7f30(local_238);
          if (iVar14 != (int)uVar35) {
            uVar40 = *(undefined8 *)(*pauVar39 + 8);
            *(undefined8 *)*pauVar29 = *(undefined8 *)*pauVar39;
            *(undefined8 *)(*pauVar29 + 8) = uVar40;
            uVar40 = *(undefined8 *)(pauVar39[1] + 8);
            *(undefined8 *)pauVar29[1] = *(undefined8 *)pauVar39[1];
            *(undefined8 *)(pauVar29[1] + 8) = uVar40;
            pauVar29 = pauVar29 + 2;
          }
          pauVar39 = pauVar39 + 2;
        } while (pauVar39 != pauVar38);
        pauVar37 = DAT_1811077f8;
        if (pauVar29 == pauVar38) goto LAB_1802cd7cb;
      }
      *(undefined8 *)(puVar31 + -8) = 0x1802cd7c0;
      FUN_180540530(pauVar29,pauVar38,(longlong)pauVar37 - (longlong)pauVar38);
      DAT_1811077f8 =
           (undefined1 (*) [16])((longlong)pauVar29 + ((longlong)pauVar37 - (longlong)pauVar38));
    }
LAB_1802cd7cb:
    uVar16 = (uint)local_f8;
    local_f8 = (float *)CONCAT44(0x7f7fffff,uVar16 & 0xffffff00);
    local_108 = *(float **)pfVar1;
    pfStack_100 = *(float **)(pfVar1 + 2);
    local_f0 = (float *)CONCAT44(DAT_1809f3768,0x7f7fffff);
    DAT_1809f3768 = DAT_1809f3768 + 1;
    *(undefined8 *)(puVar31 + -8) = 0x1802cd811;
    FUN_18034e690();
  }
  *(undefined8 *)(puVar31 + -8) = 0x1802cd819;
  bVar10 = FUN_1802ca460(pfVar1);
  bVar10 = bVar10 | bVar12 | bVar2;
  *(undefined8 *)(puVar31 + -8) = 0x1802cd829;
  FUN_1803d8a40(1);
  lVar36 = local_160[3];
  if (lVar36 != 0) {
    lVar22 = local_160[4];
    *(undefined8 *)(puVar31 + -8) = 0x1802cd842;
    FUN_1802cb180(lVar36,lVar22);
  }
  lVar36 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  iVar14 = *(int *)(lVar36 + 0x1f8);
  if (iVar14 < 1) {
    *(undefined8 *)(puVar31 + -8) = 0x1802cd868;
    FUN_1803ebc00("Calling PopItemWidth() too many times!");
  }
  else {
    *(undefined4 *)(lVar36 + 0x1e8) =
         *(undefined4 *)(*(longlong *)(lVar36 + 0x200) + -4 + (longlong)iVar14 * 4);
    *(int *)(lVar36 + 0x1f8) = iVar14 + -1;
  }
  *(undefined8 *)(puVar31 + -8) = 0x1802cd890;
  FUN_1803d8a40(2);
  iVar14 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar14 < 2) {
    *(undefined8 *)(puVar31 + -8) = 0x1802cd8b5;
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar14 + -1;
  }
LAB_1802cd8c2:
  *(undefined8 *)(puVar31 + -8) = 0x1802cd8d1;
  return bVar10;
}



/* ===== 1802cd930 FUN_1802cd930 ===== */

undefined8 FUN_1802cd930(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *_Str1;
  char *_Str2;
  undefined4 *puVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int *piVar10;
  longlong lVar9;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_res8;
  int local_68;
  int local_64 [3];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  DAT_180cd04ab = 1;
  local_res8 = 0x40e0000040e00000;
  uVar7 = FUN_1802b5260("##swatch_context",&local_res8);
  if ((char)uVar7 == '\0') {
    return uVar7;
  }
  uVar7 = 0;
  local_res8 = 0;
  FUN_1803d89a0(0xe,&local_res8);
  cVar6 = FUN_1802c63e0(&DAT_18075c420,"picker_copy",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M208 0L332 0C344 0 357 6 366 15L433 82C442 91 448 104 448 116L448 336C448 363 426 384 400 384L208 384C181 384 160 363 160 336L160 48C160 22 181 0 208 0ZM48 128L128 128L128 192L64 192L64 448L256 448L256 416L320 416L320 464C320 490 298 512 272 512L48 512C21 512 0 490 0 464L0 176C0 150 21 128 48 128Z\"/></svg>"
                        ,DAT_1808acbe4,0);
  lVar11 = DAT_181107560;
  if (cVar6 != '\0') {
    lVar14 = DAT_181107558;
    if (DAT_181107558 != DAT_181107560) {
      do {
        FUN_1800244c0(lVar14);
        lVar14 = lVar14 + 0x18;
      } while (lVar14 != lVar11);
      DAT_181107560 = DAT_181107558;
    }
    if (DAT_181107710 != DAT_181107718) {
      DAT_181107718 = DAT_181107710;
    }
    iVar15 = 0;
    if (0 < (int)param_2[1]) {
      do {
        uVar16 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        lVar14 = (longlong)iVar15 * 0x18;
        lVar11 = *param_2;
        if (0 < *(int *)(lVar11 + 0x10 + lVar14)) {
          iVar13 = 0;
          do {
            puVar2 = *(undefined4 **)((longlong)iVar13 * 0x20 + *(longlong *)(lVar14 + 8 + lVar11));
            local_58 = *puVar2;
            uStack_54 = puVar2[1];
            uStack_50 = puVar2[2];
            uStack_4c = puVar2[3];
            uVar16 = FUN_18025d4d0(&local_48,&local_58);
            iVar13 = iVar13 + 1;
            lVar11 = *param_2;
          } while (iVar13 < *(int *)(lVar14 + 0x10 + lVar11));
        }
        if (DAT_181107560 == DAT_181107568) {
          FUN_180354530(uVar16,DAT_181107560,&local_48);
        }
        else {
          FUN_1803578a0();
          DAT_181107560 = DAT_181107560 + 0x18;
        }
        FUN_1800242d0(&DAT_181107710,*param_2 + lVar14);
        FUN_1800244c0(&local_48);
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)param_2[1]);
    }
    DAT_181106f18 = *(int *)param_2[2];
    FUN_1803ee1f0();
  }
  cVar6 = FUN_1802c63e0("paste","picker_paste",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M160 0C136 0 115 13 104 32L47 32C21 32 0 54 0 80L0 400C0 427 21 448 47 448L191 448L191 176C191 132 227 96 272 96L320 96L320 80C320 54 298 32 272 32L215 32C204 13 183 0 160 0ZM272 128C245 128 224 150 224 176L224 448L224 464C224 490 245 512 272 512L464 512C490 512 512 490 512 464L512 244C512 232 506 219 497 210L430 143C421 134 408 128 396 128L320 128L272 128ZM160 40C173 40 184 51 184 64C184 78 173 88 160 88C146 88 136 78 136 64C136 51 146 40 160 40Z\"/></svg>"
                        ,DAT_1808acc00,0);
  lVar11 = DAT_181107558;
  if (cVar6 == '\0') goto LAB_1802cdd0f;
  if (DAT_181107558 != DAT_181107560) {
    uVar8 = (DAT_181107560 - DAT_181107558 >> 3) * -0x5555555555555555;
    if (uVar8 < 2) {
      if ((int)param_2[1] < 2) {
        local_64[0] = (int)uVar8 + -1;
        local_68 = 0;
        piVar12 = &local_68;
        if (-1 < DAT_181106f18) {
          piVar12 = &DAT_181106f18;
        }
        piVar10 = local_64;
        if (DAT_181106f18 <= local_64[0]) {
          piVar10 = piVar12;
        }
        iVar15 = *piVar10;
        local_64[2] = (int)param_2[1] + -1;
        local_64[1] = 0;
        iVar13 = *(int *)param_2[2];
        piVar12 = local_64 + 1;
        if (-1 < iVar13) {
          piVar12 = (int *)param_2[2];
        }
        piVar10 = local_64 + 2;
        if (iVar13 <= local_64[2]) {
          piVar10 = piVar12;
        }
        lVar9 = (longlong)*piVar10;
        lVar14 = *param_2;
        iVar13 = 0;
        if (0 < *(int *)(lVar14 + 0x10 + lVar9 * 0x18)) {
          do {
            lVar3 = *(longlong *)(lVar11 + (longlong)iVar15 * 0x18);
            if ((int)(*(longlong *)(lVar11 + 8 + (longlong)iVar15 * 0x18) - lVar3 >> 4) <= iVar13)
            break;
            puVar4 = *(undefined8 **)
                      ((longlong)iVar13 * 0x20 + *(longlong *)(lVar14 + 8 + lVar9 * 0x18));
            puVar1 = (undefined8 *)(lVar3 + (longlong)iVar13 * 0x10);
            uVar7 = puVar1[1];
            *puVar4 = *puVar1;
            puVar4[1] = uVar7;
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(lVar14 + 0x10 + lVar9 * 0x18));
        }
      }
      else if (uVar8 != 0) goto LAB_1802cdc3f;
    }
    else {
LAB_1802cdc3f:
      uVar8 = 0;
      lVar11 = DAT_181107560;
      do {
        iVar15 = 0;
        if (0 < (int)param_2[1]) {
          do {
            _Str1 = *(char **)(DAT_181107710 + uVar8 * 8);
            lVar14 = (longlong)iVar15;
            lVar11 = *param_2;
            _Str2 = *(char **)(lVar11 + lVar14 * 0x18);
            if (((_Str1 == _Str2) ||
                (((_Str1 != (char *)0x0 && (_Str2 != (char *)0x0)) &&
                 (iVar13 = strcmp(_Str1,_Str2), iVar13 == 0)))) &&
               (0 < *(int *)(lVar11 + 0x10 + lVar14 * 0x18))) {
              iVar13 = 0;
              do {
                lVar9 = *(longlong *)(DAT_181107558 + uVar8 * 0x18);
                if ((int)(*(longlong *)(DAT_181107558 + 8 + uVar8 * 0x18) - lVar9 >> 4) <= iVar13)
                break;
                puVar4 = *(undefined8 **)
                          ((longlong)iVar13 * 0x20 + *(longlong *)(lVar11 + 8 + lVar14 * 0x18));
                puVar1 = (undefined8 *)(lVar9 + (longlong)iVar13 * 0x10);
                uVar7 = puVar1[1];
                *puVar4 = *puVar1;
                puVar4[1] = uVar7;
                iVar13 = iVar13 + 1;
                lVar11 = *param_2;
              } while (iVar13 < *(int *)(lVar11 + 0x10 + lVar14 * 0x18));
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)param_2[1]);
          lVar11 = DAT_181107560;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulonglong)((lVar11 - DAT_181107558 >> 3) * -0x5555555555555555));
    }
    uVar7 = 1;
  }
  FUN_1803ee1f0();
LAB_1802cdd0f:
  cVar6 = FUN_1802c63e0("reset","picker_reset",
                        "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M48 224L40 224C26 224 16 214 16 200L16 72C16 63 21 54 30 50C39 47 50 49 57 55L98 97C186 11 327 11 414 98C501 186 501 327 414 415C326 501 185 501 97 415C85 402 85 382 97 370C110 357 130 357 142 370C205 432 306 432 369 370C431 307 431 206 369 143C307 81 206 81 143 142L185 183C191 190 193 201 190 210C186 219 177 224 168 224L48 224L48 224Z\"/></svg>"
                        ,DAT_1808acc00,1);
  if (cVar6 != '\0') {
    iVar15 = 0;
    if (0 < (int)param_2[1]) {
      do {
        lVar14 = (longlong)iVar15;
        lVar11 = *param_2;
        if (0 < *(int *)(lVar11 + 0x10 + lVar14 * 0x18)) {
          iVar13 = 0;
          do {
            lVar11 = *(longlong *)(lVar11 + 8 + lVar14 * 0x18);
            puVar2 = *(undefined4 **)((longlong)iVar13 * 0x20 + 0x18 + lVar11);
            puVar5 = *(undefined4 **)((longlong)iVar13 * 0x20 + lVar11);
            if (puVar2 == (undefined4 *)0x0) {
              if (((undefined4 *)((longlong)&DAT_18091a18c + 3U) < puVar5) &&
                 (puVar5 + 4 < (undefined4 *)((longlong)&DAT_180960e34 + 1U))) {
                uVar16 = puVar5[-0xb0170];
                uVar17 = puVar5[-0xb016f];
                uVar18 = puVar5[-0xb016e];
                uVar19 = puVar5[-0xb016d];
                goto LAB_1802cddb8;
              }
            }
            else {
              uVar16 = *puVar2;
              uVar17 = puVar2[1];
              uVar18 = puVar2[2];
              uVar19 = puVar2[3];
LAB_1802cddb8:
              *puVar5 = uVar16;
              puVar5[1] = uVar17;
              puVar5[2] = uVar18;
              puVar5[3] = uVar19;
            }
            iVar13 = iVar13 + 1;
            lVar11 = *param_2;
          } while (iVar13 < *(int *)(lVar11 + 0x10 + lVar14 * 0x18));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)param_2[1]);
    }
    puVar2 = (undefined4 *)param_2[2];
    if (((undefined4 *)((longlong)&DAT_18091a18c + 3) < puVar2) &&
       (puVar2 + 1 < (undefined4 *)((longlong)&DAT_180960e34 + 1))) {
      *puVar2 = puVar2[-0xb0170];
    }
    uVar7 = 1;
    FUN_1803ee1f0();
  }
  FUN_1803d8a40(1);
  FUN_1802b5590();
  return uVar7;
}



/* ===== 1802cde40 FUN_1802cde40 ===== */

float * FUN_1802cde40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = DAT_1808ac34c;
  if (DAT_180cd0fd8 == '\0') {
    fVar1 = DAT_1808ac34c;
  }
  else {
    fVar1 = DAT_1809f7440;
  }
  fVar5 = DAT_1808ac000;
  if (DAT_1808ac000 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar1 = (float)FUN_180519080(fVar5 * DAT_1808ac918);
  fVar2 = (float)FUN_180519080(fVar5 * DAT_1808ac97c);
  if (((int)(fVar2 - fVar1) & 1U) != 0) {
    fVar2 = fVar2 + fVar3;
  }
  fVar4 = fVar1 * DAT_1808ac1f4;
  fVar3 = (float)FUN_180519080(fVar5 * *param_2 - fVar4);
  fVar4 = (float)FUN_180519080(fVar5 * param_2[1] - fVar4);
  fVar2 = (fVar2 - fVar1) * DAT_1808ac1f4;
  *param_1 = fVar3 / fVar5;
  param_1[2] = (fVar3 + fVar1) / fVar5;
  param_1[4] = (fVar3 - fVar2) / fVar5;
  param_1[7] = (fVar4 + fVar1 + fVar2) / fVar5;
  param_1[1] = fVar4 / fVar5;
  param_1[3] = (fVar4 + fVar1) / fVar5;
  param_1[5] = (fVar4 - fVar2) / fVar5;
  param_1[6] = (fVar3 + fVar1 + fVar2) / fVar5;
  return param_1;
}



/* ===== 1802cdfd0 FUN_1802cdfd0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802cdfd0(longlong param_1,undefined8 *param_2,longlong *param_3,float param_4)

{
  float fVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int *piVar7;
  longlong lVar6;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_res8;
  undefined8 local_res18;
  float local_res20 [2];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  float local_198;
  undefined4 local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined4 local_178;
  float local_174;
  undefined4 local_170;
  float local_16c;
  float local_168 [3];
  int local_15c;
  int local_158 [2];
  longlong local_150;
  longlong lStack_148;
  undefined8 local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e0 [24];
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_a8;
  float local_a0;
  
  fVar19 = DAT_1808ac34c;
  local_a8 = param_1;
  fVar1 = *(float *)(param_1 + 0xd0);
  local_a0 = fVar1;
  if (DAT_180cd0fd8 == '\0') {
    fVar22 = DAT_1808ac34c;
  }
  else {
    fVar22 = DAT_1809f7440;
  }
  fVar20 = DAT_1808ac000;
  if (DAT_1808ac000 <= fVar22) {
    fVar20 = fVar22;
  }
  *(float *)(param_1 + 0xd0) = fVar1 / fVar20;
  fVar20 = _UNK_1808add24;
  fVar22 = _DAT_1808add20;
  uVar4 = DAT_1808ac7ac;
  if (0.0 < param_4) {
    local_res8 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) + _UNK_1808add24,
                          (float)*param_2 + _DAT_1808add20);
    plVar5 = (longlong *)FUN_1802cde40(&local_118,&local_res8);
    local_138 = *plVar5;
    lStack_130 = plVar5[1];
    local_128 = plVar5[2];
    uStack_120 = (int)plVar5[3];
    uStack_11c = *(undefined4 *)((longlong)plVar5 + 0x1c);
    local_168[2] = 1.0;
    local_168[0] = 0.0;
    local_168[1] = param_4 * DAT_1808ac1b0 * DAT_1808ac2cc;
    pfVar10 = local_168;
    if (0.0 <= local_168[1]) {
      pfVar10 = local_168 + 1;
    }
    pfVar9 = local_168 + 2;
    if (local_168[1] <= fVar19) {
      pfVar9 = pfVar10;
    }
    local_190 = 0;
    local_198 = (float)uVar4;
    FUN_1803fe590(param_1,&local_128,&uStack_120,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar9 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18);
  }
  local_158[0] = (int)param_3[1] + -1;
  local_15c = 0;
  iVar16 = *(int *)param_3[2];
  piVar11 = &local_15c;
  if (-1 < iVar16) {
    piVar11 = (int *)param_3[2];
  }
  piVar7 = local_158;
  if (iVar16 <= local_158[0]) {
    piVar7 = piVar11;
  }
  lVar6 = (longlong)*piVar7;
  lVar17 = *param_3;
  if (*(int *)(lVar17 + 0x10 + lVar6 * 0x18) < 1) goto LAB_1802ce6a1;
  local_res8 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) + fVar20,(float)*param_2 + fVar22);
  puVar8 = (undefined8 *)FUN_1802cde40(&local_138,&local_res8);
  local_res18 = *puVar8;
  local_res8 = puVar8[1];
  local_16c = *(float *)((longlong)puVar8 + 0x14);
  local_178 = *(undefined4 *)(puVar8 + 3);
  local_174 = *(float *)((longlong)puVar8 + 0x1c);
  local_170 = *(undefined4 *)(puVar8 + 2);
  fVar22 = local_174 - local_16c;
  FUN_1802c4d70(&local_f8,&local_res18,&local_res8,uVar4);
  FUN_1803d8870(0,fVar19);
  local_198 = fVar22 / DAT_1808ac658;
  FUN_1802c5b30(param_1,&local_f8,&local_170,&local_178);
  puVar8 = *(undefined8 **)(lVar17 + 8 + lVar6 * 0x18);
  plVar5 = (longlong *)*puVar8;
  lVar17 = (longlong)*(int *)(lVar17 + 0x10 + lVar6 * 0x18);
  if (*(char *)(puVar8 + 2) == '\0') {
    fVar22 = fVar19;
  }
  else {
    fVar22 = *(float *)((longlong)plVar5 + 0xc);
  }
  local_res8._0_4_ = fVar22;
  local_res18._0_4_ = 1.0;
  local_res20[0] = 0.0;
  local_188 = (longlong *)*plVar5;
  fVar20 = *(float *)(DAT_180ca0a50 + 0xc9c);
  pfVar10 = local_res20;
  if (0.0 <= fVar22) {
    pfVar10 = (float *)&local_res8;
  }
  pfVar9 = (float *)&local_res18;
  if (fVar22 <= fVar19) {
    pfVar9 = pfVar10;
  }
  local_180 = (undefined8 *)CONCAT44(fVar20 * *pfVar9,(int)plVar5[1]);
  uVar4 = FUN_1803d7f30(&local_188);
  if ((int)lVar17 == 1) {
    local_190 = 0;
    local_198 = (float)uVar4;
    FUN_1802c55d0(param_1,&local_f8,&local_170,&local_178);
  }
  else {
    plVar5 = (longlong *)puVar8[(lVar17 + -1) * 4];
    if (*(char *)(puVar8 + (lVar17 + -1) * 4 + 2) == '\0') {
      local_res8._0_4_ = fVar19;
    }
    else {
      local_res8._0_4_ = *(float *)((longlong)plVar5 + 0xc);
    }
    local_res18._0_4_ = 1.0;
    local_res20[0] = 0.0;
    local_188 = (longlong *)*plVar5;
    pfVar10 = local_res20;
    if (0.0 <= (float)local_res8) {
      pfVar10 = (float *)&local_res8;
    }
    pfVar9 = (float *)&local_res18;
    if ((float)local_res8 <= fVar19) {
      pfVar9 = pfVar10;
    }
    local_180 = (undefined8 *)CONCAT44(fVar20 * *pfVar9,(int)plVar5[1]);
    local_190 = FUN_1803d7f30(&local_188);
    local_198 = (float)uVar4;
    FUN_1802c57a0(param_1,&local_f8,&local_170,&local_178);
  }
  puVar13 = auStack_1b8;
  puVar14 = auStack_1b8;
  if ((local_c8 != lStack_c0) && (2 < (ulonglong)(local_f0 - local_f8 >> 3))) {
    local_150 = 0;
    lStack_148 = 0;
    local_140 = 0;
    uVar18 = 0;
    lVar17 = local_f8;
    lVar6 = local_f0;
    do {
      uVar2 = *(undefined8 *)(lVar17 + uVar18 * 8);
      fVar19 = (float)uVar2;
      fVar20 = (float)((ulonglong)uVar2 >> 0x20);
      uVar18 = uVar18 + 1;
      uVar2 = *(undefined8 *)(lVar17 + (uVar18 % (ulonglong)(lVar6 - lVar17 >> 3)) * 8);
      fVar23 = (float)uVar2;
      fVar24 = (float)((ulonglong)uVar2 >> 0x20);
      fVar21 = fVar24 - fVar20;
      fVar22 = fVar23 - fVar19;
      fVar22 = fVar21 * fVar21 + fVar22 * fVar22;
      if (fVar22 < 0.0) {
        fVar22 = (float)FUN_18051af10(fVar22);
      }
      else {
        fVar22 = SQRT(fVar22);
      }
      fVar22 = (float)FUN_18053ef70(fVar22);
      iVar16 = 1;
      if (1 < (int)fVar22) {
        iVar16 = (int)fVar22;
      }
      iVar12 = 0;
      if (0 < iVar16) {
        do {
          local_res8._0_4_ = (fVar23 - fVar19) * ((float)iVar12 / (float)iVar16) + fVar19;
          local_res8._4_4_ = (fVar24 - fVar20) * ((float)iVar12 / (float)iVar16) + fVar20;
          FUN_18008b8c0(&local_150);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar16);
        lVar17 = local_f8;
        lVar6 = local_f0;
      }
    } while (uVar18 < (ulonglong)(lVar6 - lVar17 >> 3));
    local_138 = 0;
    lStack_130 = 0;
    local_128 = 0;
    FUN_1802c4640(&local_150,*(float *)(param_1 + 0xd0) * DAT_1808ac1f4,&local_138);
    local_118 = 0;
    lStack_110 = 0;
    local_108 = 0;
    if (lStack_148 - local_150 != 0) {
      uVar18 = lStack_148 - local_150 >> 3;
      if (0x3fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      lVar6 = uVar18 * 4;
      local_118 = FUN_18000fb70(lVar6);
      lVar17 = lVar6 + local_118;
      local_108 = lVar17;
      FUN_180540170(local_118,0,lVar6);
      lStack_110 = lVar17;
    }
    lVar17 = local_138;
    uVar18 = 0;
    if (lStack_148 - local_150 >> 3 != 0) {
      do {
        uVar4 = FUN_1802c4e50(&local_f8,lVar17 + uVar18 * 8);
        *(undefined4 *)(local_118 + uVar18 * 4) = uVar4;
        uVar18 = uVar18 + 1;
      } while (uVar18 < (ulonglong)(lStack_148 - local_150 >> 3));
    }
    local_res18._0_4_ = 0.0;
    local_res18._4_4_ = 0;
    local_188 = &local_118;
    local_180 = &local_res18;
    FUN_180343440(param_1,&local_150,&local_188);
    FUN_180068f30(&local_118);
    FUN_1800132b0(&local_138);
    FUN_1800132b0(&local_150);
  }
  FUN_1803d8a40(1);
  puVar15 = auStack_1b8;
  if (local_c8 != 0) {
    lVar17 = local_c8;
    if ((ulonglong)((local_b8 - local_c8 >> 2) * 4) < 0x1000) {
LAB_1802ce677:
      puVar14 = puVar13;
    }
    else {
      lVar17 = *(longlong *)(local_c8 + -8);
      if (0x1f < (local_c8 - lVar17) - 8U) {
        lVar17 = 5;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar13 = auStack_1b0;
        goto LAB_1802ce677;
      }
    }
    *(undefined8 *)(puVar14 + -8) = 0x1802ce682;
    thunk_FUN_1803d64e0(lVar17);
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    puVar15 = puVar14;
  }
  *(undefined8 *)(puVar15 + -8) = 0x1802ce697;
  FUN_1800132b0(local_e0);
  *(undefined8 *)(puVar15 + -8) = 0x1802ce6a0;
  FUN_1800132b0(&local_f8);
LAB_1802ce6a1:
  *(float *)(param_1 + 0xd0) = fVar1;
  return;
}



/* ===== 1802ce6f0 FUN_1802ce6f0 ===== */

byte FUN_1802ce6f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  longlong *plVar12;
  float *pfVar13;
  longlong lVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_res18;
  undefined4 local_res1c;
  float local_res20;
  float local_res24;
  float local_88;
  float afStack_84 [3];
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  FUN_1803e89e0();
  lVar14 = DAT_180ca0a50;
  local_res18 = 0x41bda5e3;
  local_res1c = 0x41bda5e3;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar14 = *(longlong *)(lVar14 + 0x14f8);
  *(undefined8 *)(lVar14 + 0x118) = *param_3;
  *(undefined1 *)(lVar14 + 0x159) = 1;
  FUN_180415e30("##swatch",&local_res18,3);
  uVar4 = *(undefined4 *)(DAT_180ca0a50 + 0x1ee8);
  cVar8 = FUN_1803e9690(0,0,0);
  if (cVar8 == '\0') {
LAB_1802ce7a8:
    bVar6 = false;
  }
  else {
    cVar8 = FUN_1803dd930(0);
    if (cVar8 == '\0') goto LAB_1802ce7a8;
    bVar6 = true;
  }
  cVar8 = FUN_1803e9690(1,0,0);
  if (cVar8 == '\0') {
LAB_1802ce7cd:
    bVar7 = false;
  }
  else {
    cVar8 = FUN_1803dd930(0);
    if (cVar8 == '\0') goto LAB_1802ce7cd;
    bVar7 = true;
  }
  iVar11 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##picker");
  fVar17 = DAT_1808ac1f4;
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar14 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar14 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == iVar11) &&
       (*(char *)(lVar14 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) == '\0')) {
      bVar5 = true;
      goto LAB_1802ce81e;
    }
  }
  bVar5 = false;
LAB_1802ce81e:
  if (((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
      (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) || (bVar5)) {
    uVar18 = extraout_XMM0_Qa;
    fVar21 = DAT_1808ac34c;
  }
  else {
    cVar8 = FUN_1803dd930(0);
    uVar18 = extraout_XMM0_Qa_00;
    if (cVar8 == '\0') {
      fVar21 = 0.0;
    }
    else {
      fVar21 = fVar17;
    }
  }
  local_6c = 0;
  local_68 = 0xffffffff;
  local_res18 = uVar4;
  local_78 = fVar21;
  local_74 = fVar21;
  local_70 = fVar21;
  FUN_18034a380(uVar18,&local_88,&local_res18,&local_78);
  uVar15 = FUN_1802b3660(CONCAT44(afStack_84[0],local_88) + 0x14,fVar21,DAT_1808ac118,0);
  lVar14 = DAT_180ca0a50;
  local_res20 = DAT_1808ac838;
  fVar21 = *(float *)(DAT_180ca0a50 + 0x1efc);
  fVar1 = *(float *)(DAT_180ca0a50 + 0x1ef4);
  fVar20 = (*(float *)(DAT_180ca0a50 + 0x1f00) + *(float *)(DAT_180ca0a50 + 0x1ef8)) * fVar17;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_res24 = fVar20 - local_res20;
  local_res20 = (fVar21 + fVar1) * fVar17 - local_res20;
  uVar18 = FUN_1802cdfd0(*(undefined8 *)(*(longlong *)(lVar14 + 0x14f8) + 0x2c8),&local_res20,
                         param_2,uVar15);
  if (bVar6) {
    uVar18 = FUN_1802b4d80("##picker");
  }
  if (bVar7) {
    uVar18 = FUN_1802b4d80("##swatch_context");
  }
  bVar9 = FUN_1802cd930(uVar18,param_2);
  local_res18 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##picker");
  plVar12 = (longlong *)FUN_18034f100(&DAT_180ca1800,&local_78,&local_res18);
  lVar14 = DAT_180ca0a50;
  fVar21 = fVar21 + DAT_1808ac7ec;
  DAT_180cd04ab = 1;
  fVar1 = *(float *)(*plVar12 + 0x18);
  fVar19 = fVar1 * DAT_1808ac140;
  fVar16 = *(float *)(DAT_180ca0a50 + 0x30);
  fVar2 = *(float *)(*plVar12 + 0x14);
  *(undefined4 *)(DAT_180ca0a50 + 0x1f3c) = 1;
  *(undefined8 *)(lVar14 + 0x1f58) = 0x43848000;
  *(undefined4 *)(lVar14 + 8000) = 1;
  fVar16 = (fVar16 - fVar2) - DAT_1808ac864;
  local_88 = 0.0;
  if (0.0 <= fVar16) {
    local_88 = fVar16;
  }
  fVar16 = (*(float *)(lVar14 + 0x34) - fVar1) - DAT_1808ac864;
  pfVar13 = &local_88;
  if (fVar21 <= local_88) {
    pfVar13 = &local_res20;
  }
  afStack_84[0] = 0.0;
  if (0.0 <= fVar16) {
    afStack_84[0] = fVar16;
  }
  fVar21 = *pfVar13;
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  pfVar13 = afStack_84;
  if ((fVar20 - fVar1 * fVar17) + fVar19 <= afStack_84[0]) {
    pfVar13 = &local_res24;
  }
  *(uint *)(lVar14 + 0x1f38) = *(uint *)(lVar14 + 0x1f38) | 3;
  fVar17 = *pfVar13;
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  *(undefined8 *)(lVar14 + 0x1f50) = 0;
  local_res20 = 10.0;
  local_res24 = 10.0;
  *(ulonglong *)(lVar14 + 0x1f48) = CONCAT44(fVar17,fVar21);
  cVar8 = FUN_1802b5260("##picker",&local_res20);
  if (cVar8 == '\0') {
    bVar10 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x30);
    uVar3 = *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x34);
    plVar12 = (longlong *)FUN_18034f100(&DAT_180ca1800,&local_78,&local_res18);
    lVar14 = *plVar12;
    *(undefined4 *)(lVar14 + 0x14) = uVar15;
    *(undefined4 *)(lVar14 + 0x18) = uVar3;
    bVar10 = FUN_1802cb5b0(uVar4,param_2);
    FUN_1802b5590();
  }
  iVar11 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar11 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar11 + -1;
  }
  return bVar10 | bVar9;
}



/* ===== 1802ceb60 FUN_1802ceb60 ===== */

float * FUN_1802ceb60(float *param_1,char *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined1 local_50 [72];
  
  lVar3 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar3 + 0x14f8);
  pcVar5 = param_2;
  if (param_2 != (char *)0xffffffffffffffff) {
    while (*pcVar5 != '\0') {
      if (((*pcVar5 == '#') && (pcVar5[1] == '#')) ||
         (pcVar5 = pcVar5 + 1, pcVar5 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (*(char *)(lVar1 + 0x158) == '\0') {
LAB_1802cebeb:
    bVar2 = false;
  }
  else {
    if ((*(float *)(lVar1 + 0x11c) <= DAT_1809f5b48 - DAT_1808ac1f4) ||
       (DAT_1809f5b4c + DAT_1809f5b48 <= *(float *)(lVar1 + 0x11c))) goto LAB_1802cebeb;
    bVar2 = true;
  }
  if (pcVar5 == param_2) {
    *(undefined1 *)(lVar1 + 0xce) = 1;
    if (((DAT_1809f5b40 == *(int *)(*(longlong *)(lVar3 + 0x14f8) + 0x10)) &&
        (DAT_1809f5b44 == *(int *)(lVar3 + 4))) && ((DAT_180cd0f0e != '\0' || (bVar2)))) {
      fVar7 = (float)DAT_1809f5b50 - DAT_1808ac97c;
      DAT_180cd0f0e = 0;
      fVar6 = (DAT_1809f5b4c - DAT_1808ac97c) * DAT_1808ac1f4;
      *param_1 = fVar7;
      fVar6 = (float)FUN_18053f0d0(fVar6 + DAT_1809f5b48);
      DAT_1809f5b50._0_4_ = fVar7 - DAT_1808ac7ac;
      goto LAB_1802ced8c;
    }
  }
  DAT_180cd0f0e = 0;
  if (pcVar5 == param_2) {
    *(undefined8 *)param_1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x14f8) + 0x118);
    return param_1;
  }
  puVar4 = (undefined4 *)FUN_1802b9e90(local_50);
  lVar1 = DAT_180ca0a50;
  DAT_1809f5b50._4_4_ = *puVar4;
  fVar6 = (float)puVar4[1];
  fStack_60 = (float)puVar4[2];
  fVar7 = (float)puVar4[3];
  local_58 = *(undefined8 *)(puVar4 + 4);
  fVar9 = fStack_60 - DAT_1808ac97c;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  DAT_1809f5b44 = *(int *)(lVar1 + 4);
  DAT_1809f5b50._0_4_ = fVar9 - DAT_1808ac7ac;
  DAT_1809f5b40 = *(int *)(*(longlong *)(lVar1 + 0x14f8) + 0x10);
  DAT_1809f5b48 = fVar6;
  DAT_1809f5b4c = fVar7;
  local_68 = DAT_1809f5b50._4_4_;
  fStack_64 = fVar6;
  fStack_5c = fVar7;
  FUN_1802baa50(&local_68);
  fVar8 = fVar7 - DAT_1808ac97c;
  *param_1 = fVar9;
  fVar6 = (float)FUN_18053f0d0(CONCAT44(fVar7,fVar8 * DAT_1808ac1f4 + fVar6));
LAB_1802ced8c:
  param_1[1] = fVar6;
  return param_1;
}



/* ===== 1802cedb0 FUN_1802cedb0 ===== */

void FUN_1802cedb0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  FUN_1802ceb60(local_res10,param_1);
  local_70 = &local_60;
  local_58 = 0;
  local_40 = &local_78;
  local_48 = 0;
  local_30 = local_res18;
  local_78 = 0;
  local_res18[0] = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_68 = 1;
  local_38 = 1;
  local_60 = param_2;
  local_50 = param_3;
  FUN_1802ce6f0(param_1,&local_40,local_res10);
  return;
}



/* ===== 1802cee70 FUN_1802cee70 ===== */

ulonglong FUN_1802cee70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined8 local_res8;
  undefined4 local_res20 [2];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  longlong local_78 [5];
  undefined4 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  lVar3 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar5 = *(ulonglong *)(lVar3 + 0x14f8);
  if ((DAT_1809f5b40 == *(int *)(uVar5 + 0x10)) &&
     (uVar1 = *(uint *)(lVar3 + 4), uVar5 = (ulonglong)uVar1, DAT_1809f5b44 == uVar1)) {
    local_res8 = param_1;
    local_res20[0] = param_4;
    uVar7 = FUN_18053f0d0((DAT_1809f5b4c - DAT_1808ac97c) * DAT_1808ac1f4 + DAT_1809f5b48);
    local_res8 = CONCAT44(uVar7,(float)DAT_1809f5b50 - DAT_1808ac97c);
    DAT_1809f5b50._0_4_ = ((float)DAT_1809f5b50 - DAT_1808ac97c) - DAT_1808ac7ac;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_98 = *param_3;
    if (param_2 == (undefined8 *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = *param_2;
    }
    local_88 = 0;
    local_80 = 0;
    FUN_180042d00(local_78,&local_98);
    local_98 = param_3[1];
    if (param_2 == (undefined8 *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = param_2[1];
    }
    local_88 = 0;
    local_80 = 0;
    FUN_180042d00(local_78,&local_98);
    local_98 = param_3[2];
    if (param_2 == (undefined8 *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = param_2[2];
    }
    local_88 = 0;
    local_80 = 0;
    FUN_180042d00(local_78,&local_98);
    local_98 = param_3[3];
    if (param_2 == (undefined8 *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = param_2[3];
    }
    local_88 = 0;
    local_80 = 0;
    FUN_180042d00(local_78,&local_98);
    local_98 = param_3[4];
    if (param_2 == (undefined8 *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = param_2[4];
    }
    local_88 = 0;
    local_80 = 0;
    FUN_180042d00(local_78,&local_98);
    local_78[3] = 0;
    local_78[4] = local_78[0];
    local_50 = 5;
    local_res20[0] = 0;
    local_48 = local_78 + 3;
    local_40 = 1;
    local_38 = local_res20;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    bVar4 = FUN_1802ce6f0("log_colors",&local_48,&local_res8);
    puVar6 = auStack_b8;
    if (local_78[0] != 0) {
      uVar5 = local_78[2] - local_78[0] & 0xffffffffffffffe0;
      if (0xfff < uVar5) {
        if ((local_78[0] - *(longlong *)(local_78[0] + -8)) - 8U < 0x20) {
          thunk_FUN_1803d64e0(*(longlong *)(local_78[0] + -8),uVar5 + 0x27);
          return (ulonglong)bVar4;
        }
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar6 = auStack_b0;
      }
      *(undefined8 *)(puVar6 + -8) = 0x1802cf0b7;
      thunk_FUN_1803d64e0();
    }
    uVar5 = (ulonglong)bVar4;
  }
  else {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  return uVar5;
}



/* ===== 1802cf0e0 FUN_1802cf0e0 ===== */

ulonglong FUN_1802cf0e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                       int *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 in_stack_00000048;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  ulonglong local_b8;
  undefined4 *puStack_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  lVar4 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar9 = *(ulonglong *)(lVar4 + 0x14f8);
  if ((DAT_1809f5b40 != *(int *)(uVar9 + 0x10)) ||
     (uVar3 = *(uint *)(lVar4 + 4), uVar9 = (ulonglong)uVar3, DAT_1809f5b44 != uVar3)) {
    return uVar9 & 0xffffffffffffff00;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  uVar16 = FUN_18053f0d0((DAT_1809f5b4c - DAT_1808ac97c) * DAT_1808ac1f4 + DAT_1809f5b48);
  local_res8 = CONCAT44(uVar16,(float)DAT_1809f5b50 - DAT_1808ac97c);
  DAT_1809f5b50._0_4_ = ((float)DAT_1809f5b50 - DAT_1808ac97c) - DAT_1808ac7ac;
  puVar8 = (undefined8 *)FUN_18000fb70(0x30);
  puVar14 = auStack_d8;
  puVar1 = puVar8 + 6;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar2 = puVar8 + 6;
  local_b8 = 0;
  puStack_b0 = (undefined4 *)0x0;
  local_a8 = (undefined4 *)0x0;
  iVar13 = 0;
  iVar10 = *param_5;
  local_50 = puVar8;
  local_48 = puVar2;
  local_40 = puVar1;
  if (0 < iVar10) {
    do {
      local_a0 = *(undefined8 *)(*param_4 + (longlong)iVar13 * 8);
      uStack_98 = 0;
      local_90 = CONCAT31(local_90._1_3_,1);
      local_88 = 0;
      FUN_180042d00(puVar8,&local_a0);
      iVar13 = iVar13 + 1;
      iVar10 = *param_5;
    } while (iVar13 < iVar10);
  }
  local_a0 = *local_res18;
  uStack_98 = *puVar8;
  local_90 = iVar10;
  if (puStack_b0 == local_a8) {
    FUN_1800435c0(&local_b8,puStack_b0,&local_a0);
  }
  else {
    local_a0._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
    uStack_98._4_4_ = (undefined4)((ulonglong)uStack_98 >> 0x20);
    *puStack_b0 = (undefined4)local_a0;
    puStack_b0[1] = local_a0._4_4_;
    puStack_b0[2] = (undefined4)uStack_98;
    puStack_b0[3] = uStack_98._4_4_;
    *(ulonglong *)(puStack_b0 + 4) = CONCAT44(uStack_8c,iVar10);
    puStack_b0 = puStack_b0 + 6;
  }
  iVar13 = 0;
  iVar10 = param_5[1];
  if (0 < iVar10) {
    do {
      local_a0 = *(undefined8 *)(param_4[1] + (longlong)iVar13 * 8);
      uStack_98 = 0;
      local_90 = CONCAT31(local_90._1_3_,1);
      local_88 = 0;
      FUN_180042d00(puVar8 + 3,&local_a0);
      iVar13 = iVar13 + 1;
      iVar10 = param_5[1];
    } while (iVar13 < iVar10);
  }
  local_a0 = local_res18[1];
  uStack_98 = puVar8[3];
  local_90 = iVar10;
  if (puStack_b0 == local_a8) {
    FUN_1800435c0(&local_b8,puStack_b0,&local_a0);
  }
  else {
    local_a0._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
    uStack_98._4_4_ = (undefined4)((ulonglong)uStack_98 >> 0x20);
    *puStack_b0 = (undefined4)local_a0;
    puStack_b0[1] = local_a0._4_4_;
    puStack_b0[2] = (undefined4)uStack_98;
    puStack_b0[3] = uStack_98._4_4_;
    *(ulonglong *)(puStack_b0 + 4) = CONCAT44(uStack_8c,iVar10);
    puStack_b0 = puStack_b0 + 6;
  }
  local_80 = local_b8;
  local_78 = 2;
  local_70 = local_res10;
  local_68 = FUN_1802fdbf0;
  local_60 = in_stack_00000048;
  local_58 = 1;
  bVar7 = FUN_1802ce6f0("scope_overlay_color",&local_80,&local_res8);
  puVar6 = puVar8;
  uVar9 = 0;
  puVar15 = auStack_d8;
  if (local_b8 != 0) {
    uVar9 = ((longlong)((longlong)local_a8 - local_b8) >> 3) * 8;
    uVar11 = local_b8;
    if (0xfff < uVar9) {
      uVar11 = *(ulonglong *)(local_b8 - 8);
      uVar12 = (local_b8 - uVar11) - 8;
      if (uVar12 < 0x20) {
        uVar9 = uVar9 + 0x27;
        puVar14 = auStack_d8;
      }
      else {
        pcVar5 = (code *)swi(0x29);
        uVar9 = (*pcVar5)(5);
        puVar14 = auStack_d0;
        uVar11 = uVar12;
      }
    }
    *(undefined8 *)(puVar14 + -8) = 0x1802cf3a3;
    thunk_FUN_1803d64e0(uVar11,uVar9);
    local_b8 = 0;
    puStack_b0 = (undefined4 *)0x0;
    local_a8 = (undefined4 *)0x0;
    uVar9 = local_b8;
    puVar15 = puVar14;
  }
  for (; local_b8 = uVar9, puVar6 != puVar2; puVar6 = puVar6 + 3) {
    *(undefined8 *)(puVar15 + -8) = 0x1802cf3c8;
    FUN_180043290(puVar6);
    uVar9 = local_b8;
  }
  uVar9 = ((longlong)puVar1 - (longlong)puVar8 >> 3) * 8;
  if (0xfff < uVar9) {
    lVar4 = puVar8[-1];
    puVar8 = (undefined8 *)((longlong)puVar8 + (-8 - lVar4));
    if (puVar8 < &DAT_00000020) {
      *(undefined8 *)(puVar15 + -8) = 0x1802cf40b;
      thunk_FUN_1803d64e0(lVar4,uVar9 + 0x27);
      return (ulonglong)bVar7;
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar15 = puVar15 + 8;
  }
  *(undefined8 *)(puVar15 + -8) = 0x1802cf420;
  thunk_FUN_1803d64e0(puVar8);
  return (ulonglong)bVar7;
}



/* ===== 1802cf450 FUN_1802cf450 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802cf450(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_24 = param_2[1];
  local_20 = param_2[2];
  local_1c = 0x3f800000;
  FUN_1802cedb0(local_20,&local_28,0);
  *param_2 = local_28;
  param_2[2] = local_20;
  param_2[1] = local_24;
  return;
}



/* ===== 1802cf4d0 FUN_1802cf4d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1802cf4d0(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  char *pcVar10;
  uint uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined8 *local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_f8;
  pfVar9 = (float *)FUN_1802b9e90(&local_a0,&DAT_18058b643);
  fVar1 = *pfVar9;
  fVar2 = pfVar9[1];
  fVar12 = pfVar9[2];
  fVar3 = pfVar9[3];
  FUN_1803e89e0(param_1);
  lVar5 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x14f8);
  *(float *)(lVar5 + 0x118) = fVar1;
  *(float *)(lVar5 + 0x11c) = fVar2;
  *(undefined1 *)(lVar5 + 0x159) = 1;
  local_a8 = fVar12 - fVar1;
  local_a4 = fVar3;
  uVar6 = FUN_180415e30("##link",&local_a8,0);
  cVar7 = FUN_1803dd930(0);
  if (cVar7 == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = DAT_1808ac34c;
  }
  fVar12 = (float)FUN_1802b35f0(*(undefined4 *)(DAT_180ca0a50 + 0x1ee8),uVar13);
  iVar4 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar4 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar4 + -1;
  }
  pcVar10 = (char *)FUN_1802b3fe0(local_88,param_1);
  uVar13 = DAT_1808ac930;
  if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
    pcVar10 = *(char **)pcVar10;
  }
  uVar11 = (int)(longlong)
                ((fVar12 * DAT_1808ac118 + DAT_1808ac294) * (float)(DAT_1809f54bc >> 0x18) +
                DAT_1808ac1f4) << 0x18;
  uVar8 = DAT_1809f54bc & 0xffffff;
  local_a8 = fVar1;
  local_a4 = (float)FUN_18053f0d0();
  lVar5 = DAT_180ca0a50;
  local_a4 = local_a4 + fVar2;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  if (((uVar11 != 0) && (pcVar10 != (char *)0x0)) && (*pcVar10 != '\0')) {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x14f8) + 0x2c8);
    local_a0 = *(undefined8 *)(lVar5 + 0x60);
    uStack_98 = *(undefined8 *)(lVar5 + 0x68);
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_d0 = &local_a0;
    local_d8 = uVar11 | uVar8;
    local_c8 = pcVar10;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x18),lVar5,uVar13,&local_a8);
  }
  FUN_18000f890(local_88);
  return uVar6;
}



/* ===== 1802cf750 FUN_1802cf750 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802cf750(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined8 *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  float local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  puVar11 = (undefined8 *)FUN_1802b9e90(local_68,&DAT_18058b643);
  lVar3 = DAT_180ca0a50;
  uVar4 = *(undefined4 *)puVar11;
  fVar5 = *(float *)((longlong)puVar11 + 4);
  local_80 = *puVar11;
  local_88 = *(undefined4 *)(puVar11 + 1);
  fVar6 = *(float *)((longlong)puVar11 + 0xc);
  uStack_78 = puVar11[1];
  local_70 = puVar11[2];
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8);
  local_84 = fVar6 + fVar5;
  FUN_1803fc200(lVar3,&local_80,&local_88,1);
  pcVar12 = (char *)FUN_1802b4530(local_68,param_1);
  uVar10 = DAT_180960ec4;
  fVar9 = DAT_1808ac930;
  if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
    pcVar12 = *(char **)pcVar12;
  }
  local_88 = uVar4;
  local_84 = (float)FUN_18053f0d0((fVar6 - DAT_1808ac930) * DAT_1808ac1f4);
  local_84 = local_84 + fVar5;
  if ((((uVar10 & 0xff000000) != 0) && (pcVar12 != (char *)0x0)) && (*pcVar12 != '\0')) {
    local_80 = *(undefined8 *)(lVar3 + 0x60);
    uStack_78 = *(undefined8 *)(lVar3 + 0x68);
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_b0 = &local_80;
    local_b8 = uVar10;
    local_a8 = pcVar12;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x18),lVar3,fVar9,&local_88);
  }
  FUN_18000f890(local_68);
  iVar2 = *(int *)(lVar3 + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(lVar3 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar13 = (undefined4 *)(*(longlong *)(lVar3 + 0x38) + 0x34);
  }
  else {
    puVar13 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar3 + 0xa8));
  }
  uVar4 = puVar13[1];
  uVar7 = puVar13[2];
  uVar8 = puVar13[3];
  *(undefined4 *)(lVar3 + 0x60) = *puVar13;
  *(undefined4 *)(lVar3 + 100) = uVar4;
  *(undefined4 *)(lVar3 + 0x68) = uVar7;
  *(undefined4 *)(lVar3 + 0x6c) = uVar8;
  FUN_1803fbff0(lVar3);
  return;
}



