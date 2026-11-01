/* ===== 1801e20e0 FUN_1801e20e0 ===== */

ulonglong FUN_1801e20e0(longlong *param_1,int param_2,ulonglong *param_3)

{
  char cVar1;
  int *in_RAX;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)param_2;
  if (0 < param_2) {
    lVar2 = lVar5 * 0x60;
    if (param_2 < 2) {
      lVar6 = *param_1;
    }
    else {
      lVar6 = lVar5 * 0x60 + 0x180cea370;
    }
    if (((((&DAT_180cea3d4)[lVar2] & 1) != 0) || ((&DAT_180cea3f5)[lVar2] != '\0')) ||
       ((&DAT_180cea3d8)[lVar2] == '\t')) {
LAB_1801e2164:
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
    if (*(int *)param_1[1] == 1) {
      cVar1 = FUN_1801e23c0();
      if (cVar1 != '\0') {
        in_RAX = (int *)param_1[2];
        *in_RAX = param_2 + -1;
        goto LAB_1801e2164;
      }
    }
    else {
      cVar1 = FUN_1801e22c0(lVar6,&DAT_180cea3d0 + lVar2);
      if (cVar1 == '\0') {
        in_RAX = (int *)param_1[4];
        if (0 < *in_RAX) goto LAB_1801e2164;
      }
      else {
        if (*(int *)param_1[2] < 0) {
          *(int *)param_1[2] = param_2 + -1;
        }
        *(int *)param_1[3] = *(int *)param_1[3] + 1;
        *(int *)param_1[4] = *(int *)param_1[4] + 1;
      }
    }
  }
  if ((*(int *)param_1[5] < 0) || (param_2 < *(int *)param_1[5])) {
    cVar1 = *(char *)(param_1[1] + 0x14);
  }
  else {
    cVar1 = *(char *)(param_1[1] + 0x14) == '\0';
  }
  uVar4 = *param_3 | 4;
  if (cVar1 == '\0') {
    uVar4 = *param_3 & 0xfffffffffffffffb;
  }
  *param_3 = uVar4;
  lVar2 = param_1[5];
  if (*(char *)(lVar2 + 0x10) != '\0') {
    *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(lVar2 + 4);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1[5] + 8);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(param_1[5] + 0xc);
    lVar2 = param_1[5];
    if (*(char *)(lVar2 + 0x11) != '\0') {
      if (param_2 < 1) {
        puVar3 = (undefined *)*param_1;
      }
      else {
        puVar3 = &DAT_180cea3d0 + lVar5 * 0x60;
      }
      FUN_1801e8cf0(puVar3 + 0x18,lVar2,*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                    (undefined4 *)((longlong)param_3 + 0x14),param_3 + 1);
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    *param_3 = *param_3 & 0xfffffffffffff9e7;
    uVar4 = *param_3;
    if (0.0 < *(float *)(param_1[5] + 8)) {
      uVar4 = uVar4 | 8;
      *param_3 = uVar4;
    }
    if (*(float *)(param_1[5] + 8) <= 0.0 && *(float *)(param_1[5] + 8) != 0.0) {
      uVar4 = uVar4 | 0x10;
      *param_3 = uVar4;
    }
    if (0.0 < *(float *)(param_1[5] + 0xc)) {
      uVar4 = uVar4 | 0x200;
      *param_3 = uVar4;
    }
    lVar2 = param_1[5];
    if (*(float *)(lVar2 + 0xc) <= 0.0 && *(float *)(lVar2 + 0xc) != 0.0) {
      *param_3 = uVar4 | 0x400;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



/* ===== 1801e22c0 FUN_1801e22c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1801e22c0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  
  if (((((*(byte *)(param_2 + 4) & 1) != 0) || (*(char *)(param_2 + 0x25) != '\0')) ||
      (*(char *)(param_2 + 8) == '\t')) ||
     (((fVar1 = *(float *)(param_1 + 0x14) - DAT_1808ac140,
       *(float *)(param_2 + 0x14) <= fVar1 && fVar1 != *(float *)(param_2 + 0x14) ||
       (_DAT_1808ac8c8 < *(float *)(param_2 + 0x20))) ||
      (*(float *)(param_2 + 0x20) < DAT_1808ace00)))) {
    return 0;
  }
  fVar1 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c) +
          *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18);
  if (fVar1 < 0.0) {
    fVar1 = (float)FUN_18051af10(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  if (DAT_1808aca54 <= fVar1) {
    fVar2 = *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) +
            *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c);
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_18051af10(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    if (fVar2 * DAT_1808ac30c <= fVar1) {
      return 1;
    }
  }
  return 0;
}



/* ===== 1801e23c0 FUN_1801e23c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1801e23c0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((((*(byte *)(param_2 + 4) & 1) == 0) && (*(char *)(param_2 + 0x25) == '\0')) &&
      (*(char *)(param_2 + 8) != '\t')) && (*(float *)(param_1 + 0x20) <= DAT_1808ace1c)) {
    fVar3 = *(float *)(param_2 + 0x20);
    if ((float)((uint)(fVar3 - _DAT_1808acdfc) & _DAT_1808ade90) < DAT_1808ac064) {
      return true;
    }
    if ((DAT_1808ace24 <= fVar3) && (*(float *)(param_1 + 0x20) + _DAT_1808ac7cc < fVar3)) {
      fVar3 = *(float *)(param_1 + 0x18);
      fVar1 = *(float *)(param_1 + 0x1c);
      fVar2 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c) +
              *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18);
      if (fVar2 < 0.0) {
        fVar2 = (float)FUN_18051af10(fVar2);
      }
      else {
        fVar2 = SQRT(fVar2);
      }
      fVar3 = fVar3 * fVar3 + fVar1 * fVar1;
      if (fVar3 < 0.0) {
        fVar3 = (float)FUN_18051af10(fVar3);
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      return fVar3 * DAT_1808ac1f4 <= fVar2;
    }
  }
  return false;
}



/* ===== 1801e24e0 FUN_1801e24e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801e24e0(longlong *param_1,float *param_2,undefined8 param_3,float param_4,
                       int param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  float local_res20 [2];
  float local_148 [2];
  undefined8 local_140;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  
  uVar5 = (uint)DAT_180ca09b0;
  puVar7 = (undefined1 *)register0x00000020;
  if ((((*param_1 != 0) && (puVar7 = (undefined1 *)(ulonglong)DAT_180ca0a3c, DAT_180ca0a3c != 0)) &&
      ((uint)DAT_180ca09b0 != 0)) &&
     (uVar12 = (ulonglong)DAT_180ca09b0._4_4_, DAT_180ca09b0._4_4_ != 0)) {
    local_res20[0] = param_4;
    lVar6 = FUN_18000f3a0(puVar7 + *param_1);
    puVar7 = (undefined1 *)0x7ffffffefffe;
    if (lVar6 - 0x10000U < 0x7ffffffeffff) {
      puVar8 = (undefined8 *)FUN_1800111b0(&local_120,(ulonglong)uVar5 + lVar6);
      local_110 = *puVar8;
      fVar14 = *(float *)(puVar8 + 1);
      local_108 = fVar14;
      puVar8 = (undefined8 *)FUN_1800111b0(&local_130,lVar6 + uVar12);
      local_118 = *(float *)(puVar8 + 1);
      local_120 = *puVar8;
      uVar5 = (uint)fVar14 & 0x7f800000;
      puVar7 = (undefined1 *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),uVar5 != 0x7f800000);
      if (((uVar5 != 0x7f800000) &&
          (uVar5 = (uint)local_118 & 0x7f800000,
          puVar7 = (undefined1 *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),uVar5 != 0x7f800000),
          uVar5 != 0x7f800000)) && (fVar14 < local_118)) {
        if (((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
           ((lVar6 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_1), lVar6 == 0 ||
            (DAT_180ca0950 == 0)))) {
          fVar14 = 0.0;
          local_140 = 0;
          local_138 = 0.0;
        }
        else {
          puVar8 = (undefined8 *)FUN_1800111b0(&local_130,lVar6 + (ulonglong)DAT_180ca0950);
          fVar14 = (float)*puVar8;
          local_140 = *puVar8;
          local_138 = *(float *)(puVar8 + 1);
        }
        fVar15 = local_138;
        fVar16 = param_2[1] * param_2[1] + *param_2 * *param_2;
        if (fVar16 < 0.0) {
          fVar16 = (float)FUN_18051af10();
        }
        else {
          fVar16 = SQRT(fVar16);
        }
        uVar5 = _DAT_1808ade90;
        fVar3 = DAT_1808aca94;
        fVar2 = DAT_1808ac34c;
        fVar1 = DAT_1808ac254;
        local_148[0] = 90.0;
        pfVar10 = local_res8;
        if (DAT_1808ac34c <= param_4) {
          pfVar10 = local_res20;
        }
        pfVar9 = local_148;
        if (param_4 <= DAT_1808acaf4) {
          pfVar9 = pfVar10;
        }
        uVar12 = 0;
        iVar11 = 0;
        fVar16 = fVar16 * (float)param_5 * DAT_1808ac00c + DAT_1808ac918;
        local_148[0] = *pfVar9 * DAT_1808ac1f4 + *pfVar9 * DAT_1808ac1f4;
        if (fVar16 <= DAT_1808ac9fc) {
          fVar16 = DAT_1808ac9fc;
        }
        local_res8[0] = fVar16 * 0.0;
        fVar17 = DAT_1808ac540;
        while( true ) {
          local_e0 = 0;
          local_d8 = 0;
          local_d4 = 0;
          local_d0 = 0x3f800000;
          local_100 = _DAT_1808ad2c0;
          uStack_f8 = _UNK_1808ad2c8;
          local_f0 = 0;
          uStack_e8 = 0;
          fVar13 = (float)FUN_180517200();
          local_130 = fVar16 * fVar13 + fVar14;
          fVar14 = (float)FUN_180517790();
          local_128 = local_res8[0] + fVar15;
          local_12c = fVar16 * fVar14 + local_140._4_4_;
          cVar4 = FUN_1802aed00(&local_140,&local_130,&local_110,&local_120,*param_1,0x1c1003,4,7,
                                &local_100,0);
          if ((((cVar4 != '\0') && ((char)local_d4 == '\0')) &&
              (fVar14 = (float)local_100, (float)local_100 < fVar2)) &&
             (((float)((uint)uStack_e8 & uVar5) <= fVar1 && ((float)local_100 < fVar17)))) {
            fVar15 = (float)FUN_180516b00();
            uVar12 = 1;
            *param_6 = fVar15 * fVar3;
            fVar17 = fVar14;
          }
          iVar11 = iVar11 + 1;
          if (8 < iVar11) break;
          fVar14 = (float)local_140;
          fVar15 = local_138;
        }
        return uVar12;
      }
    }
  }
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



/* ===== 1801e2990 FUN_1801e2990 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1801e2990(char *param_1,undefined8 param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_388 [32];
  uint local_368;
  float *local_360;
  float local_358;
  int local_354;
  int local_350 [2];
  ulonglong local_348;
  float local_340;
  undefined4 uStack_33c;
  int local_330;
  uint uStack_32c;
  int iStack_328;
  float fStack_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  uint local_2f8 [2];
  undefined8 local_2f0;
  undefined1 local_2e8 [4];
  undefined4 local_2e4;
  undefined1 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined2 local_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined **local_288;
  undefined1 *local_280;
  int *local_278;
  int *local_270;
  float *local_268;
  ulonglong *local_260;
  undefined8 *local_258;
  undefined ***local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined2 local_238;
  undefined2 local_236;
  undefined4 local_234 [4];
  undefined8 local_224;
  undefined4 local_21c;
  undefined2 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined2 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined2 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined2 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined2 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined2 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined2 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined2 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined2 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8 [16];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_388;
  local_2f0 = param_2;
  *param_1 = '\0';
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
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
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = 'z';
  param_1[0x1f] = 'C';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = -0x80;
  param_1[0x23] = '?';
  param_1[0x24] = -1;
  param_1[0x25] = -1;
  param_1[0x26] = -1;
  param_1[0x27] = -1;
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  uStack_32c = param_3[1];
  local_330 = *param_3;
  iStack_328 = param_3[2];
  fStack_324 = (float)param_3[3];
  local_320 = *(undefined8 *)(param_3 + 4);
  iVar14 = 2;
  local_2f8[0] = 2;
  puVar5 = local_2f8;
  if (1 < (int)uStack_32c) {
    puVar5 = &uStack_32c;
  }
  if (0x20 < (int)uStack_32c) {
    puVar5 = &DAT_1805aa488;
  }
  uStack_32c = *puVar5;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_340);
    DAT_181108a00 = CONCAT44(uStack_33c,local_340);
    DAT_1811089f8 = FUN_1803a0c50(&local_340);
    DAT_180cd1304 = '\x01';
    local_348 = DAT_1811089f8;
  }
  else {
    local_348 = DAT_1811089f8;
  }
  uVar16 = DAT_1811089f8;
  if (DAT_1811089f8 != 0) {
    local_2e8[0] = 0;
    local_2e4 = 0;
    local_2e0 = 0;
    local_2dc = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2c8 = 0;
    local_2c4 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_348 = DAT_1811089f8;
    if (((DAT_180ca09f8 == 0) || (lVar6 = FUN_18000f3a0(DAT_1811089f8 + DAT_180ca09f8), lVar6 == 0))
       || (DAT_180ca0950 == 0)) {
      local_2dc = 0;
      uVar19 = 0;
      uVar20 = 0;
    }
    else {
      puVar7 = (undefined4 *)FUN_1800111b0(&local_340,lVar6 + (ulonglong)DAT_180ca0950);
      local_2dc = *puVar7;
      uVar19 = puVar7[1];
      uVar20 = puVar7[2];
    }
    local_2d8 = CONCAT44(uVar20,uVar19);
    if (DAT_180ca0a1c == 0) {
      uStack_2d0._0_4_ = 0;
      uStack_2d0._4_4_ = 0;
      local_2c8 = 0;
    }
    else {
      puVar7 = (undefined4 *)FUN_1800111b0(&local_340,uVar16 + DAT_180ca0a1c);
      uStack_2d0._0_4_ = *puVar7;
      uStack_2d0._4_4_ = puVar7[1];
      local_2c8 = puVar7[2];
    }
    fVar1 = DAT_1808ac34c;
    local_c8[0] = -1;
    local_c8[1] = 0;
    iVar9 = 1;
    if (local_330 == 1) {
      if (1 < (int)uStack_32c) {
        do {
          if (0xf < iVar14) break;
          local_c8[iVar14] = iVar9;
          iVar14 = iVar14 + 1;
          iVar9 = iVar9 + (0xb < iVar9) + 1;
        } while (iVar9 < (int)uStack_32c);
      }
    }
    else if (1 < (int)uStack_32c) {
      do {
        if (7 < iVar14) break;
        local_c8[iVar14] = iVar9;
        iVar14 = iVar14 + 1;
        iVar4 = 1;
        if (1 < (int)uStack_32c / 6) {
          iVar4 = (int)uStack_32c / 6;
        }
        iVar9 = iVar9 + iVar4;
      } while (iVar9 < (int)uStack_32c);
    }
    local_234[3] = 0xffffffff;
    local_224 = 0;
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0x437a0000;
    local_20c = 0x3f800000;
    local_208 = 0xffffffff;
    local_204 = 0;
    local_1fc = 0;
    local_1f8 = 0;
    local_1f4 = 0;
    local_1f0 = 0x437a0000;
    local_1ec = 0x3f800000;
    local_1e8 = 0xffffffff;
    local_1e4 = 0;
    local_1dc = 0;
    local_1d8 = 0;
    local_1d4 = 0;
    local_1d0 = 0x437a0000;
    local_1cc = 0x3f800000;
    local_1c8 = 0xffffffff;
    local_1c4 = 0;
    local_1bc = 0;
    local_1b8 = 0;
    local_1b4 = 0;
    local_1b0 = 0x437a0000;
    local_1ac = 0x3f800000;
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_19c = 0;
    local_198 = 0;
    local_194 = 0;
    local_190 = 0x437a0000;
    local_18c = 0x3f800000;
    local_188 = 0xffffffff;
    local_184 = 0;
    local_17c = 0;
    local_178 = 0;
    local_174 = 0;
    local_170 = 0x437a0000;
    local_16c = 0x3f800000;
    local_168 = 0xffffffff;
    local_164 = 0;
    local_15c = 0;
    local_158 = 0;
    local_154 = 0;
    local_150 = 0x437a0000;
    local_14c = 0x3f800000;
    local_148 = 0xffffffff;
    local_144 = 0;
    local_13c = 0;
    local_138 = 0;
    local_134 = 0;
    local_130 = 0x437a0000;
    local_12c = 0x3f800000;
    local_128 = 0xffffffff;
    local_124 = 0;
    local_11c = 0;
    local_118 = 0;
    local_114 = 0;
    local_110 = 0x437a0000;
    local_10c = 0x3f800000;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_fc = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0x437a0000;
    local_ec = 0x3f800000;
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0x437a0000;
    local_cc = 0x3f800000;
    local_248 = 0xffffffff;
    local_244 = 0;
    local_23c = 0;
    local_238 = 0;
    local_236 = local_308._2_2_;
    local_234[0] = 0;
    local_234[1] = 0x437a0000;
    local_234[2] = 0x3f800000;
    local_350[0] = 1;
    if ((char)iStack_328 != '\0') {
      local_358 = 0.0;
      local_360 = &local_358;
      local_368 = uStack_32c;
      cVar3 = FUN_1801e24e0(&local_348,&uStack_2d0,(undefined4)local_320,fStack_324);
      fVar17 = (float)FUN_180516b00(uStack_2d0._4_4_,(undefined4)uStack_2d0);
      fVar17 = fVar17 * DAT_1808aca94;
      local_348 = CONCAT44(local_348._4_4_,0x42b40000);
      local_340 = 1.0;
      pfVar10 = &local_340;
      if (fVar1 <= fStack_324) {
        pfVar10 = &fStack_324;
      }
      pfVar8 = (float *)&local_348;
      if (fStack_324 <= DAT_1808acaf4) {
        pfVar8 = pfVar10;
      }
      local_340 = *pfVar8 * DAT_1808ac1f4;
      local_318 = local_350;
      uStack_310 = &local_330;
      local_308 = &local_340;
      uStack_300 = &local_248;
      if (cVar3 != '\0') {
        if ((((uint)(local_358 - fVar17) & 0x7f800000) == 0x7f800000) ||
           (fVar18 = (float)FUN_180516750(local_358 - fVar17,DAT_1808acbd0), fVar18 <= 0.0)) {
          fVar18 = DAT_1808acda0;
        }
        else {
          fVar18 = fVar1;
        }
        FUN_1801e32d0(&local_318,fVar17,fVar1,fVar18);
        FUN_1801e32d0(&local_318,fVar17,0,fVar18);
        FUN_1801e32d0(&local_318,local_358,fVar1,0);
        FUN_1801e32d0(&local_318,fVar18 * DAT_1808ac900 + fVar17,fVar1,fVar18);
      }
      FUN_1801e32d0(&local_318,fVar17,fVar1,0);
      FUN_1801e32d0(&local_318,(undefined4)local_320,fVar1,0);
    }
    local_340 = 0.0;
    uVar13 = uStack_32c;
    iVar9 = local_350[0];
    if (0 < local_350[0]) {
      do {
        uVar16 = 0;
        if (0 < iVar14) {
          lVar6 = (longlong)(int)local_340;
          do {
            uStack_310 = (int *)CONCAT44(local_234[lVar6 * 8 + -2],local_234[lVar6 * 8 + -3]);
            local_308 = (float *)CONCAT44(local_234[lVar6 * 8],local_234[lVar6 * 8 + -1]);
            uStack_300 = (undefined4 *)CONCAT44(local_234[lVar6 * 8 + 2],local_234[lVar6 * 8 + 1]);
            local_318 = (int *)CONCAT44(local_234[lVar6 * 8 + -4],local_c8[uVar16]);
            local_354 = -1;
            local_358 = 0.0;
            local_348 = local_348 & 0xffffffff00000000;
            local_288 = std::
                        _Func_impl_no_alloc<`int___cdecl_planner::_anon_1490CE0F::evaluate(sdk::usercmd*___ptr64,planner::request_const&___ptr64,planner::strategy_const&___ptr64,prediction::sim_tick_const&___ptr64,int&___ptr64)'::`2'::<lambda_1>,bool,int,prediction::sim_input&___ptr64>
                        ::vftable;
            local_280 = local_2e8;
            local_278 = &local_330;
            local_270 = &local_354;
            local_268 = &local_358;
            local_260 = &local_348;
            local_258 = &local_318;
            local_250 = &local_288;
            iVar9 = FUN_1801d95d0(param_2,uVar13,&local_288,&DAT_180cea430);
            if (local_250 != (undefined ***)0x0) {
              (*(code *)(*local_250)[4])(local_250,local_250 != &local_288);
            }
            iVar2 = local_330;
            iVar4 = local_354;
            if (iVar9 < 1) {
LAB_1801e31de:
              if (iVar2 == 1) goto LAB_1801e31e4;
            }
            else {
              iVar12 = iVar9 + -1;
              if (iVar9 < 2) {
                puVar11 = local_2e8;
              }
              else {
                puVar11 = &DAT_180cea430 + (longlong)(iVar9 + -2) * 0x60;
              }
              if (local_330 != 1) {
                cVar3 = FUN_1801e22c0(puVar11,&DAT_180cea430 + (longlong)iVar12 * 0x60);
                if ((cVar3 != '\0') && ((0 < (int)(float)local_348 || (local_358 == 0.0)))) {
                  if (local_354 < 0) {
                    local_354 = iVar12;
                  }
                  local_358 = (float)((int)local_358 + 1);
                }
                goto LAB_1801e31de;
              }
              local_354 = iVar4;
              if (local_354 < 0) {
                cVar3 = FUN_1801e23c0();
                local_354 = iVar4;
                if (cVar3 != '\0') {
                  local_354 = iVar12;
                }
              }
LAB_1801e31e4:
              local_358 = (float)(uint)(-1 < local_354);
            }
            if (0 < (int)local_358) {
              cVar3 = *param_1;
              if (cVar3 == '\0') {
LAB_1801e3216:
                *param_1 = '\x01';
                *(int **)(param_1 + 4) = local_318;
                *(int **)(param_1 + 0xc) = uStack_310;
                *(float **)(param_1 + 0x14) = local_308;
                *(undefined4 **)(param_1 + 0x1c) = uStack_300;
                *(float *)(param_1 + 0x28) = local_358;
                *(int *)(param_1 + 0x24) = local_354;
                cVar3 = '\x01';
              }
              else if (iVar2 == 1) {
                iVar9 = *(int *)(param_1 + 0x24);
joined_r0x0001801e3214:
                if (local_354 < iVar9) goto LAB_1801e3216;
              }
              else {
                if ((int)*(float *)(param_1 + 0x28) < (int)local_358) goto LAB_1801e3216;
                if (local_358 == *(float *)(param_1 + 0x28)) {
                  iVar9 = *(int *)(param_1 + 0x24);
                  goto joined_r0x0001801e3214;
                }
              }
              if ((((iVar2 == 1) && (cVar3 != '\0')) && (*(int *)(param_1 + 0x24) < 2)) &&
                 ((char)local_308 == '\0')) {
                return param_1;
              }
            }
            uVar15 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar15;
            param_2 = local_2f0;
            uVar13 = uStack_32c;
          } while ((int)uVar15 < iVar14);
          iVar9 = local_350[0];
        }
        local_340 = (float)((int)local_340 + 1);
      } while ((int)local_340 < iVar9);
    }
  }
  return param_1;
}



/* ===== 1801e32d0 FUN_1801e32d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e32d0(undefined8 *param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  float local_88;
  float local_84 [5];
  undefined2 local_6e;
  
  if (*(int *)*param_1 < 0xc) {
    uVar7 = 0;
    fVar5 = param_2 - *(float *)(param_1[1] + 0x10);
    if (((uint)fVar5 & 0x7f800000) == 0x7f800000) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_180516750(fVar5,DAT_1808acbd0);
    }
    pfVar1 = (float *)param_1[2];
    if (*pfVar1 + DAT_1808ac000 < (float)(uVar6 & _DAT_1808ade90)) {
      fVar5 = (float)((uint)*pfVar1 ^ DAT_1808adec0);
      local_88 = fVar5;
      param_2 = param_2 - *(float *)(param_1[1] + 0x10);
      if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
        local_84[0] = 0.0;
      }
      else {
        local_84[0] = (float)FUN_180516750(param_2,DAT_1808acbd0);
      }
      pfVar3 = &local_88;
      if (fVar5 <= local_84[0]) {
        pfVar3 = local_84;
      }
      if (*pfVar1 <= local_84[0] && local_84[0] != *pfVar1) {
        pfVar3 = pfVar1;
      }
      param_2 = *pfVar3 + *(float *)(param_1[1] + 0x10);
    }
    if (((uint)param_2 & 0x7f800000) != 0x7f800000) {
      uVar7 = FUN_180516750(param_2,DAT_1808acbd0);
    }
    lVar2 = param_1[3];
    lVar4 = (longlong)*(int *)*param_1 * 0x20;
    *(undefined4 *)(lVar4 + lVar2) = 0xffffffff;
    *(undefined4 *)(lVar4 + 4 + lVar2) = uVar7;
    *(undefined4 *)(lVar4 + 8 + lVar2) = param_3;
    *(undefined4 *)(lVar4 + 0xc + lVar2) = param_4;
    *(undefined2 *)(lVar4 + 0x10 + lVar2) = 1;
    *(undefined2 *)(lVar4 + 0x12 + lVar2) = local_6e;
    *(undefined4 *)(lVar4 + 0x14 + lVar2) = 0;
    *(undefined4 *)(lVar4 + 0x18 + lVar2) = 0x437a0000;
    *(undefined4 *)(lVar4 + 0x1c + lVar2) = 0x3f800000;
    *(int *)*param_1 = *(int *)*param_1 + 1;
  }
  return;
}



/* ===== 1801e3490 FUN_1801e3490 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1801e3490(char *param_1,longlong param_2,longlong param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  bool bVar4;
  float fVar5;
  ulonglong uVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined *puVar19;
  undefined4 uVar20;
  float fVar21;
  int iVar22;
  undefined2 uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_3b8 [32];
  undefined4 *local_398;
  undefined4 *local_390;
  int local_388;
  float local_380;
  char *local_378;
  char local_368;
  char local_367;
  float local_364;
  int local_360;
  float local_35c;
  float local_358 [2];
  ulonglong local_350;
  undefined4 local_348;
  undefined1 local_340;
  undefined2 uStack_33f;
  char cStack_33d;
  int iStack_33c;
  undefined8 uStack_338;
  float local_330;
  char cStack_32c;
  undefined1 uStack_32b;
  undefined2 uStack_32a;
  undefined4 uStack_328;
  byte bStack_324;
  undefined1 uStack_323;
  undefined2 uStack_322;
  undefined1 uStack_320;
  undefined2 uStack_31f;
  char cStack_31d;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  char local_300;
  char local_2ff;
  undefined2 local_2fe;
  undefined4 local_2fc;
  float local_2f8;
  undefined4 local_2f4;
  longlong local_2f0;
  undefined4 local_2e8;
  int iStack_2e4;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined2 local_274;
  undefined1 local_272;
  float local_270;
  undefined2 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined2 local_248;
  undefined1 local_246;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined2 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined1 local_228;
  undefined8 local_224;
  undefined1 local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e4;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined2 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [48];
  undefined **local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  int *local_100;
  float *local_f8;
  float *local_f0;
  undefined4 *local_e8;
  undefined ***local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_3b8;
  local_2f0 = param_2;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_350);
    DAT_181108a00 = local_350;
    local_350 = FUN_1803a0c50(&local_350);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_350 = DAT_1811089f8;
  }
  uVar6 = local_350;
  fVar21 = DAT_1808ac34c;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  uVar26 = 0;
  local_278 = 0;
  local_274 = 0;
  local_272 = 0;
  local_270 = 0.0;
  local_26c = 0;
  local_268 = _DAT_1808adb00;
  uStack_260 = _UNK_1808adb08;
  local_258 = _DAT_1808ade20;
  uStack_250 = _UNK_1808ade28;
  local_248 = 1;
  local_246 = 0;
  local_244 = 0x3f800000;
  local_240 = 0x437a0000;
  local_23c = 0x3f800000;
  local_238 = 0;
  local_234 = 0;
  local_22c = 0;
  local_228 = 0;
  cVar9 = '\0';
  local_224 = 0;
  local_21c = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 1;
  local_1e4 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  DAT_1811089f8 = local_350;
  if (((local_350 == 0) || (param_3 == 0)) ||
     (cVar8 = FUN_1801e67b0(&local_298,&local_350), cVar8 == '\0')) {
    *(undefined2 *)(param_1 + 1) = uStack_33f;
    param_1[3] = cStack_33d;
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
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
    *(undefined2 *)(param_1 + 0x16) = uStack_32a;
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = 'z';
    param_1[0x1f] = 'C';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = -0x80;
    param_1[0x23] = '?';
    param_1[0x24] = -1;
    param_1[0x25] = -1;
    param_1[0x26] = -1;
    param_1[0x27] = -1;
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    goto LAB_1801e3eb6;
  }
  iVar12 = *param_4;
  local_340 = iVar12 != 0;
  uStack_33f = 0;
  cStack_33d = '\0';
  iStack_33c = param_4[1];
  uStack_338 = CONCAT71(uStack_338._1_7_,(char)param_4[2]);
  uStack_338 = CONCAT44(param_4[3],(undefined4)uStack_338);
  local_330 = (float)param_4[4];
  uVar10 = *(undefined4 *)(param_3 + 0x58);
  cStack_32c = (char)uVar10;
  uStack_32b = (undefined1)((uint)uVar10 >> 8);
  uStack_32a = (undefined2)((uint)uVar10 >> 0x10);
  uStack_328 = *(undefined4 *)(param_3 + 0x5c);
  bStack_324 = (byte)((uint)*(undefined4 *)(param_2 + 0x60) >> 0x10) & 1;
  uStack_323 = (undefined1)param_4[5];
  uVar10 = 700;
  if ((char)param_4[2] != '\0') {
    uVar10 = 2000;
  }
  uStack_320 = (undefined1)uVar10;
  uStack_31f = (undefined2)((uint)uVar10 >> 8);
  cStack_31d = 0;
  pcVar14 = (char *)FUN_1801e95c0(&local_2e8,&local_298,&local_340);
  uVar10 = *(undefined4 *)(pcVar14 + 0x28);
  local_348 = uVar10;
  if (*pcVar14 == '\0') {
    uVar11 = DAT_18111508c & 0x8000003f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
    }
    DAT_18111508c = DAT_18111508c + 1;
    if (uVar11 == 0) {
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uVar26 = FUN_1801e8ff0(&local_298,&local_d8);
      pcVar14 = "edgebug";
      if (iVar12 == 0) {
        pcVar14 = "surf";
      }
      FUN_1801ec960("planner: engine %s none (walls %d, used %d)",pcVar14,uVar26,uVar10);
    }
    if (iVar12 == 0) {
      iStack_33c = 0xffffffff;
      uStack_338 = 0;
      local_330 = 0.0;
      cStack_32c = '\0';
      uStack_32b = 0;
      uStack_328 = 0;
      bStack_324 = 0;
      uStack_323 = 0;
      uStack_322 = 0x437a;
      uStack_320 = 0;
      uStack_31f = 0x8000;
      cStack_31d = '?';
      uStack_31c = 0xffffffff;
      uStack_318 = 0;
    }
    else {
      uStack_2e0 = *(undefined8 *)(param_4 + 2);
      local_2d8 = *(undefined8 *)(param_4 + 4);
      iVar12 = param_4[1];
      if (0x10 < iVar12) {
        iVar12 = 0x10;
      }
      local_2e8 = (undefined4)*(undefined8 *)param_4;
      _local_2e8 = CONCAT44(iVar12,local_2e8);
      pcVar14 = (char *)FUN_1801e2990(local_148,param_2,&local_2e8);
      cVar9 = *pcVar14;
      uVar3 = *(undefined2 *)(pcVar14 + 1);
      local_367 = pcVar14[3];
      uVar26 = *(undefined4 *)(pcVar14 + 4);
      uVar1 = *(undefined8 *)(pcVar14 + 8);
      local_35c = *(float *)(pcVar14 + 0x10);
      cVar8 = pcVar14[0x14];
      uVar2 = *(undefined8 *)(pcVar14 + 0x15);
      local_358[0] = *(float *)(pcVar14 + 0x1d);
      local_364._0_2_ = *(undefined2 *)(pcVar14 + 0x21);
      local_368 = pcVar14[0x23];
      uStack_31c = *(undefined4 *)(pcVar14 + 0x24);
      uStack_318 = *(undefined4 *)(pcVar14 + 0x28);
      if (cVar9 != '\0') {
        FUN_1801ec960("planner: game edgebug fallback flip=%d steer=%d event=%d",uVar26,cVar8,
                      uStack_31c);
      }
      uStack_32b = (undefined1)uVar2;
      uStack_32a = (undefined2)((ulonglong)uVar2 >> 8);
      uStack_328 = (undefined4)((ulonglong)uVar2 >> 0x18);
      bStack_324 = (byte)((ulonglong)uVar2 >> 0x38);
      uStack_323 = SUB41(local_358[0],0);
      uStack_322 = (undefined2)((uint)local_358[0] >> 8);
      uStack_320 = (undefined1)((uint)local_358[0] >> 0x18);
      uStack_33f = uVar3;
      cStack_33d = local_367;
      iStack_33c = uVar26;
      uStack_338 = uVar1;
      local_330 = local_35c;
      cStack_32c = cVar8;
      uStack_31f = local_364._0_2_;
      cStack_31d = local_368;
    }
    *(ulonglong *)param_1 = CONCAT44(iStack_33c,CONCAT13(cStack_33d,CONCAT21(uStack_33f,cVar9)));
    *(undefined8 *)(param_1 + 8) = uStack_338;
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT26(uStack_32a,CONCAT15(uStack_32b,CONCAT14(cStack_32c,local_330)));
    *(ulonglong *)(param_1 + 0x18) =
         CONCAT26(uStack_322,CONCAT15(uStack_323,CONCAT14(bStack_324,uStack_328)));
    *(ulonglong *)(param_1 + 0x1c) =
         CONCAT17(cStack_31d,
                  CONCAT25(uStack_31f,
                           CONCAT14(uStack_320,CONCAT22(uStack_322,CONCAT11(uStack_323,bStack_324)))
                          ));
    *(ulonglong *)(param_1 + 0x24) = CONCAT44(uStack_318,uStack_31c);
    return param_1;
  }
  local_350 = CONCAT44(local_350._4_4_,*(undefined4 *)(pcVar14 + 4));
  local_368 = pcVar14[8];
  iVar24 = *(int *)(pcVar14 + 0x20);
  local_310 = *(undefined4 *)(pcVar14 + 4);
  local_300 = local_368;
  local_30c = *(undefined4 *)(pcVar14 + 0xc);
  local_308 = *(undefined4 *)(pcVar14 + 0x10);
  local_304 = *(undefined4 *)(pcVar14 + 0x14);
  local_2ff = pcVar14[0x18];
  local_2fc = *(undefined4 *)(pcVar14 + 0x1c);
  if ((float)local_258 <= 0.0) {
    fVar5 = fVar21;
  }
  else {
    local_364 = 1.0;
    local_358[0] = 0.0;
    local_35c = fVar21 - (float)local_258 / DAT_1808acb08;
    pfVar16 = local_358;
    if (0.0 <= local_35c) {
      pfVar16 = &local_35c;
    }
    pfVar15 = &local_364;
    if (local_35c <= fVar21) {
      pfVar15 = pfVar16;
    }
    fVar5 = *pfVar15 * *pfVar15;
  }
  local_2f8 = ((local_270 * DAT_1808ac16c + fVar21) - local_270) * fVar5 * uStack_250._4_4_;
  local_2f4 = uStack_260._4_4_;
  if (pcVar14[0x18] != '\0') {
    local_390 = &local_308;
    local_398 = &local_30c;
    FUN_1801e8cf0((longlong)&uStack_290 + 4);
    local_304 = 0;
  }
  local_2b8 = *(undefined8 *)param_4;
  uStack_2b0 = *(undefined8 *)(param_4 + 2);
  local_2a8 = *(undefined8 *)(param_4 + 4);
  local_358[0] = 2.8026e-45;
  iVar13 = 2;
  if (iVar12 == 0) {
    iVar13 = 6;
  }
  local_35c = (float)(iVar13 + iVar24);
  pfVar16 = local_358;
  if (1 < (int)local_35c) {
    pfVar16 = &local_35c;
  }
  if (0x20 < (int)local_35c) {
    pfVar16 = (float *)&DAT_1805aa488;
  }
  local_2b8._0_4_ = (int)*(undefined8 *)param_4;
  local_2b8 = CONCAT44(*pfVar16,(int)local_2b8);
  local_1a8[0] = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (((uVar6 == 0) || (DAT_180ca09f8 == 0)) ||
     ((lVar17 = FUN_18000f3a0(uVar6 + DAT_180ca09f8), lVar17 == 0 || (DAT_180ca0950 == 0)))) {
    local_19c = 0;
    uVar10 = 0;
    uVar25 = 0;
  }
  else {
    puVar18 = (undefined4 *)FUN_1800111b0(&local_2e8,lVar17 + (ulonglong)DAT_180ca0950);
    local_19c = *puVar18;
    uVar10 = puVar18[1];
    uVar25 = puVar18[2];
  }
  local_198 = CONCAT44(uVar25,uVar10);
  if ((uVar6 == 0) || (DAT_180ca0a1c == 0)) {
    uVar10 = 0;
    local_188 = 0;
  }
  else {
    puVar18 = (undefined4 *)FUN_1800111b0(&local_2e8,uVar6 + DAT_180ca0a1c);
    uVar26 = *puVar18;
    uVar10 = puVar18[1];
    local_188 = puVar18[2];
  }
  uStack_190 = CONCAT44(uVar10,uVar26);
  local_360 = -1;
  local_364 = 0.0;
  local_35c = 0.0;
  local_118 = std::
              _Func_impl_no_alloc<`int___cdecl_planner::_anon_1490CE0F::evaluate(sdk::usercmd*___ptr64,planner::request_const&___ptr64,planner::strategy_const&___ptr64,prediction::sim_tick_const&___ptr64,int&___ptr64)'::`2'::<lambda_1>,bool,int,prediction::sim_input&___ptr64>
              ::vftable;
  local_110 = local_1a8;
  local_100 = &local_360;
  local_f8 = &local_364;
  local_f0 = &local_35c;
  local_e8 = &local_310;
  local_e0 = &local_118;
  local_108 = &local_2b8;
  iVar13 = FUN_1801d95d0(param_2,local_2b8 >> 0x20,&local_118,&DAT_180cea430);
  if (local_e0 != (undefined ***)0x0) {
    (*(code *)(*local_e0)[4])(local_e0,local_e0 != &local_118);
  }
  iVar7 = (int)local_2b8;
  if (iVar13 < 1) {
    fVar21 = local_364;
LAB_1801e3c68:
    if (iVar7 == 1) goto LAB_1801e3c6e;
  }
  else {
    iVar22 = iVar13 + -1;
    if (iVar13 < 2) {
      puVar19 = local_1a8;
    }
    else {
      puVar19 = &DAT_180cea430 + (longlong)(iVar13 + -2) * 0x60;
    }
    if ((int)local_2b8 != 1) {
      cVar9 = FUN_1801e22c0(puVar19,&DAT_180cea430 + (longlong)iVar22 * 0x60);
      fVar21 = local_364;
      if ((cVar9 != '\0') && ((0 < (int)local_35c || (local_364 == 0.0)))) {
        if (local_360 < 0) {
          local_360 = iVar22;
        }
        fVar21 = (float)((int)local_364 + 1);
      }
      goto LAB_1801e3c68;
    }
    if ((local_360 < 0) && (cVar9 = FUN_1801e23c0(), cVar9 != '\0')) {
      local_360 = iVar22;
    }
LAB_1801e3c6e:
    fVar21 = (float)(uint)(-1 < local_360);
  }
  if (iVar12 == 0) {
    bVar4 = 2 < (int)fVar21;
  }
  else {
    bVar4 = 0 < (int)fVar21;
  }
  local_378 = "mismatch";
  if (bVar4) {
    local_378 = "ok";
  }
  pcVar14 = "edgebug";
  if (iVar12 == 0) {
    pcVar14 = "surf";
  }
  local_388 = local_360;
  local_390 = (undefined4 *)CONCAT44(local_390._4_4_,local_348);
  local_398 = (undefined4 *)CONCAT44(local_398._4_4_,iVar24);
  local_380 = fVar21;
  FUN_1801ec960("planner: engine %s flip=%d steer=%d event=%d used=%d | game event=%d score=%d -> %s"
                ,pcVar14,local_350 & 0xffffffff,local_368);
  if ((bVar4) || (iVar12 == 0)) {
    *param_1 = '\x01';
    *(undefined2 *)(param_1 + 1) = uStack_33f;
    param_1[3] = cStack_33d;
    *(undefined4 *)(param_1 + 4) = local_310;
    *(undefined4 *)(param_1 + 8) = local_30c;
    *(undefined4 *)(param_1 + 0xc) = local_308;
    *(undefined4 *)(param_1 + 0x10) = local_304;
    param_1[0x14] = local_300;
    param_1[0x15] = local_2ff;
    *(undefined2 *)(param_1 + 0x16) = local_2fe;
    *(undefined4 *)(param_1 + 0x18) = local_2fc;
    *(float *)(param_1 + 0x1c) = local_2f8;
    *(undefined4 *)(param_1 + 0x20) = local_2f4;
    if (bVar4) {
      iVar24 = local_360;
    }
    *(int *)(param_1 + 0x24) = iVar24;
    *(float *)(param_1 + 0x28) = fVar21;
    return param_1;
  }
  uStack_2e0 = *(undefined8 *)(param_4 + 2);
  local_2d8 = *(undefined8 *)(param_4 + 4);
  iVar12 = param_4[1];
  if (0x10 < iVar12) {
    iVar12 = 0x10;
  }
  local_2e8 = (undefined4)*(undefined8 *)param_4;
  _local_2e8 = CONCAT44(iVar12,local_2e8);
  pcVar14 = (char *)FUN_1801e2990(local_148,local_2f0,&local_2e8);
  cVar9 = *pcVar14;
  uVar3 = *(undefined2 *)(pcVar14 + 1);
  local_368 = pcVar14[3];
  uVar26 = *(undefined4 *)(pcVar14 + 4);
  uVar1 = *(undefined8 *)(pcVar14 + 8);
  local_350 = CONCAT44(local_350._4_4_,*(undefined4 *)(pcVar14 + 0x10));
  cVar8 = pcVar14[0x14];
  uVar2 = *(undefined8 *)(pcVar14 + 0x15);
  local_348 = *(undefined4 *)(pcVar14 + 0x1d);
  local_364 = (float)CONCAT22(local_364._2_2_,*(undefined2 *)(pcVar14 + 0x21));
  local_367 = pcVar14[0x23];
  uVar10 = *(undefined4 *)(pcVar14 + 0x24);
  uVar25 = *(undefined4 *)(pcVar14 + 0x28);
  uVar20 = *(undefined4 *)(pcVar14 + 0x10);
  uVar23 = *(undefined2 *)(pcVar14 + 0x21);
  if (cVar9 != '\0') {
    FUN_1801ec960("planner: game edgebug fallback flip=%d steer=%d event=%d",uVar26,cVar8,uVar10);
    uVar20 = (undefined4)local_350;
    uVar23 = local_364._0_2_;
  }
  *(undefined2 *)(param_1 + 1) = uVar3;
  param_1[3] = local_368;
  *(undefined4 *)(param_1 + 4) = uVar26;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar20;
  param_1[0x14] = cVar8;
  *(undefined8 *)(param_1 + 0x15) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = local_348;
  *(undefined2 *)(param_1 + 0x21) = uVar23;
  param_1[0x23] = local_367;
  *(undefined4 *)(param_1 + 0x24) = uVar10;
  *(undefined4 *)(param_1 + 0x28) = uVar25;
LAB_1801e3eb6:
  *param_1 = cVar9;
  return param_1;
}



/* ===== 1801e3ef0 FUN_1801e3ef0 ===== */

void FUN_1801e3ef0(longlong param_1,longlong param_2,int *param_3,byte param_4,char param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  char *pcVar10;
  
  bVar9 = param_4 ^ 1;
  if (*param_3 != 0) {
    bVar9 = param_4;
  }
  FUN_1801ec5d0(param_2,4);
  if (param_1 != 0) {
    if (bVar9 == 0) {
      uVar5 = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffffffb;
      uVar7 = *(ulonglong *)(param_1 + 0x68) & 0xfffffffffffffffb;
      uVar8 = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffb;
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0x60) | 4;
      uVar7 = *(ulonglong *)(param_1 + 0x68) | 4;
      uVar8 = *(ulonglong *)(param_1 + 0x70) | 4;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar8;
    *(ulonglong *)(param_1 + 0x68) = uVar7;
    *(ulonglong *)(param_1 + 0x60) = uVar5;
  }
  if (*param_3 == 0) {
    lVar6 = FUN_180265420(param_2);
    if (lVar6 == 0) {
      DAT_181115098 = DAT_181115098 + 1;
      if (0x40 < (int)DAT_181115098) {
        uVar3 = DAT_181115098 & 0x8000003f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
        }
        if (uVar3 != 0) goto LAB_1801e3ff4;
      }
      if (param_2 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x20);
      }
      pcVar10 = "release";
      if (bVar9 != 0) {
        pcVar10 = "press";
      }
      FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",4,pcVar10,0,uVar4)
      ;
    }
    else {
      *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 7;
      *(undefined8 *)(lVar6 + 0x18) = 4;
      *(byte *)(lVar6 + 0x20) = bVar9;
      *(undefined4 *)(lVar6 + 0x24) = 0;
    }
  }
LAB_1801e3ff4:
  if ((char)param_3[4] != '\0') {
    FUN_1801ec3f0(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x18),param_3[1],1);
    if (param_5 != '\0') {
      DAT_180ceb098 = 2;
    }
    iVar1 = param_3[3];
    iVar2 = param_3[2];
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
    *(int *)(param_2 + 0x5c) = iVar1;
    *(int *)(param_2 + 0x58) = iVar2;
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffff9e7;
    uVar5 = *(ulonglong *)(param_1 + 0x60);
    if (0.0 < (float)param_3[2]) {
      uVar5 = uVar5 | 8;
      *(ulonglong *)(param_1 + 0x60) = uVar5;
    }
    if ((float)param_3[2] <= 0.0 && (float)param_3[2] != 0.0) {
      uVar5 = uVar5 | 0x10;
      *(ulonglong *)(param_1 + 0x60) = uVar5;
    }
    if (0.0 < (float)param_3[3]) {
      uVar5 = uVar5 | 0x200;
      *(ulonglong *)(param_1 + 0x60) = uVar5;
    }
    if ((float)param_3[3] <= 0.0 && (float)param_3[3] != 0.0) {
      *(ulonglong *)(param_1 + 0x60) = uVar5 | 0x400;
    }
  }
  return;
}



/* ===== 1801e40a0 FUN_1801e40a0 ===== */

TypeDescriptor * FUN_1801e40a0(void)

{
  return &`int___cdecl_planner::_anon_1490CE0F::evaluate(sdk::usercmd*___ptr64,planner::request_const&___ptr64,planner::strategy_const&___ptr64,prediction::sim_tick_const&___ptr64,int&___ptr64)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 1801e40b0 FUN_1801e40b0 ===== */

void FUN_1801e40b0(longlong param_1,undefined4 *param_2)

{
  FUN_1801e20e0(param_1 + 8,*param_2);
  return;
}



/* ===== 1801e40c0 FUN_1801e40c0 ===== */

undefined8 * FUN_1801e40c0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<`int___cdecl_planner::_anon_1490CE0F::evaluate(sdk::usercmd*___ptr64,planner::request_const&___ptr64,planner::strategy_const&___ptr64,prediction::sim_tick_const&___ptr64,int&___ptr64)'::`2'::<lambda_1>,bool,int,prediction::sim_input&___ptr64>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = uVar1;
  return param_2;
}



/* ===== 1801e40f0 FUN_1801e40f0 ===== */

undefined8 FUN_1801e40f0(float *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  fVar5 = (float)*(undefined8 *)param_1;
  fVar7 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  fVar1 = param_1[2];
  fVar11 = fVar7 * fVar7 + fVar5 * fVar5 + fVar1 * fVar1;
  if (fVar11 < 0.0) {
    uVar6 = FUN_18051af10(CONCAT44(fVar7,fVar11));
    fVar9 = (float)uVar6;
    uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  else {
    uVar10 = 0;
    fVar9 = SQRT(fVar11);
  }
  if ((fVar9 < DAT_1808abf54) || (DAT_1808accfc < fVar9)) {
    if (fVar11 == 0.0) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      return 0;
    }
    dVar2 = (double)fVar5;
    dVar3 = (double)fVar7;
    dVar4 = (double)fVar1;
    dVar8 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
    if (dVar8 < 0.0) {
      dVar8 = (double)FUN_18051ff20(dVar8);
    }
    else {
      dVar8 = SQRT(dVar8);
    }
    dVar8 = DAT_1808ac500 / dVar8;
    *param_1 = (float)(dVar2 * dVar8);
    param_1[1] = (float)(dVar3 * dVar8);
    param_1[2] = (float)(dVar4 * dVar8);
  }
  else {
    fVar11 = DAT_1808ac34c / fVar9;
    param_1[2] = fVar1 * fVar11;
    *(ulonglong *)param_1 = CONCAT44(fVar7 * fVar11,fVar5 * fVar11);
  }
  return CONCAT44(uVar10,fVar9);
}



/* ===== 1801e4270 FUN_1801e4270 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801e4270(longlong param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                       undefined1 *param_6)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  float local_38;
  
  *(undefined2 *)(param_6 + 1) = local_68._1_2_;
  param_6[3] = local_68._3_1_;
  *(undefined2 *)(param_6 + 0x2a) = local_40._2_2_;
  *param_6 = 0;
  *(undefined8 *)(param_6 + 4) = 0x3f800000;
  *(undefined8 *)(param_6 + 0xc) = 0;
  *(undefined8 *)(param_6 + 0x14) = 0;
  *(undefined4 *)(param_6 + 0x1c) = 0;
  *(undefined8 *)(param_6 + 0x20) = 0;
  *(undefined2 *)(param_6 + 0x28) = 0;
  *(undefined4 *)(param_6 + 0x2c) = 0x3f800000;
  fVar1 = DAT_1808ac34c;
  uVar2 = *param_2 & 0x7f800000;
  uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000);
  if (((((uVar2 != 0x7f800000) &&
        (uVar2 = param_2[1] & 0x7f800000,
        uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000), uVar2 != 0x7f800000))
       && (uVar2 = param_2[2] & 0x7f800000,
          uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000), uVar2 != 0x7f800000))
      && ((((uVar2 = *param_3 & 0x7f800000,
            uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000), uVar2 != 0x7f800000
            && (uVar2 = param_3[1] & 0x7f800000,
               uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000),
               uVar2 != 0x7f800000)) &&
           ((uVar2 = param_3[2] & 0x7f800000,
            uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000), uVar2 != 0x7f800000
            && ((uVar2 = *param_4 & 0x7f800000,
                uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000),
                uVar2 != 0x7f800000 &&
                (uVar2 = param_4[1] & 0x7f800000,
                uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000),
                uVar2 != 0x7f800000)))))) &&
          (uVar2 = param_4[2] & 0x7f800000,
          uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000), uVar2 != 0x7f800000))
         )) && (((uVar2 = *param_5 & 0x7f800000,
                 uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000),
                 uVar2 != 0x7f800000 &&
                 (uVar2 = param_5[1] & 0x7f800000,
                 uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000),
                 uVar2 != 0x7f800000)) &&
                (uVar2 = param_5[2] & 0x7f800000,
                uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000),
                uVar2 != 0x7f800000)))) {
    local_68 = _DAT_1808ad2c0;
    uStack_60 = _UNK_1808ad2c8;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = 1.0;
    uVar3 = FUN_1802aed00(param_2,param_3,param_4,param_5,*(undefined8 *)(param_1 + 0xa8),0x1c1003,4
                          ,7,&local_68,0);
    if ((char)uVar3 != '\0') {
      uVar2 = (uint)(float)local_68 & 0x7f800000;
      uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000);
      if (uVar2 != 0x7f800000) {
        uVar2 = local_68._4_4_ & 0x7f800000;
        uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000);
        if (uVar2 != 0x7f800000) {
          uVar2 = (uint)uStack_60 & 0x7f800000;
          uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000);
          if (uVar2 != 0x7f800000) {
            uVar2 = uStack_60._4_4_ & 0x7f800000;
            uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000);
            if (uVar2 != 0x7f800000) {
              uVar2 = (uint)local_58 & 0x7f800000;
              uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000);
              if (uVar2 != 0x7f800000) {
                uVar2 = local_58._4_4_ & 0x7f800000;
                uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000);
                if (uVar2 != 0x7f800000) {
                  uVar2 = (uint)uStack_50 & 0x7f800000;
                  uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000);
                  if (uVar2 != 0x7f800000) {
                    *(undefined8 *)(param_6 + 0x20) = local_48;
                    param_6[0x28] = local_3c._1_1_;
                    param_6[0x29] = (undefined1)local_3c;
                    *(float *)(param_6 + 4) = (float)local_68;
                    *(uint *)(param_6 + 8) = local_68._4_4_;
                    *param_6 = (float)local_68 < fVar1;
                    *(uint *)(param_6 + 0xc) = (uint)uStack_60;
                    *(uint *)(param_6 + 0x10) = uStack_60._4_4_;
                    *(uint *)(param_6 + 0x14) = (uint)local_58;
                    *(uint *)(param_6 + 0x18) = local_58._4_4_;
                    *(uint *)(param_6 + 0x1c) = (uint)uStack_50;
                    if (local_38 <= 0.0) {
                      local_38 = fVar1;
                    }
                    *(float *)(param_6 + 0x2c) = local_38;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



/* ===== 1801e45d0 FUN_1801e45d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e45d0(uint *param_1)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18 [4];
  
  local_18[0] = (float)FUN_1801ec8f0(&PTR_s_sv_maxvelocity_1809ee928,DAT_1808acc60);
  if (((uint)local_18[0] & 0x7f800000) != 0x7f800000) {
    fVar5 = 0.0;
    if (0.0 <= local_18[0]) {
      fVar5 = local_18[0];
    }
    local_18[0] = fVar5;
  }
  pfVar1 = (float *)(param_1 + 3);
  if ((param_1[3] & 0x7f800000) == 0x7f800000) {
    *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
    *pfVar1 = 0.0;
  }
  uVar2 = _DAT_1808ade90;
  fVar5 = DAT_1808acd04;
  if (((*param_1 & 0x7f800000) == 0x7f800000) ||
     (DAT_1808acd04 < (float)(*param_1 & _DAT_1808ade90))) {
    *param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  }
  fVar4 = (float)((uint)local_18[0] ^ DAT_1808adec0);
  pfVar3 = local_18;
  if (*pfVar1 <= local_18[0]) {
    pfVar3 = pfVar1;
  }
  fVar6 = fVar4;
  if (fVar4 <= *pfVar3) {
    fVar6 = *pfVar3;
  }
  if (fVar6 != *pfVar1) {
    *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  }
  *pfVar1 = fVar6;
  pfVar1 = (float *)(param_1 + 4);
  if (((uint)*pfVar1 & 0x7f800000) == 0x7f800000) {
    *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
    *pfVar1 = 0.0;
  }
  if (((param_1[1] & 0x7f800000) == 0x7f800000) || (fVar5 < (float)(param_1[1] & uVar2))) {
    param_1[1] = 0;
    *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  }
  pfVar3 = local_18;
  if (*pfVar1 <= local_18[0]) {
    pfVar3 = pfVar1;
  }
  fVar6 = fVar4;
  if (fVar4 <= *pfVar3) {
    fVar6 = *pfVar3;
  }
  if (fVar6 != *pfVar1) {
    *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  }
  *pfVar1 = fVar6;
  pfVar1 = (float *)(param_1 + 5);
  if (((uint)*pfVar1 & 0x7f800000) == 0x7f800000) {
    *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
    *pfVar1 = 0.0;
  }
  if (((param_1[2] & 0x7f800000) == 0x7f800000) || (fVar5 < (float)(param_1[2] & uVar2))) {
    param_1[2] = 0;
    *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  }
  pfVar3 = local_18;
  if (*pfVar1 <= local_18[0]) {
    pfVar3 = pfVar1;
  }
  if (fVar4 <= *pfVar3) {
    fVar4 = *pfVar3;
  }
  if (fVar4 != *pfVar1) {
    *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  }
  *pfVar1 = fVar4;
  return;
}



/* ===== 1801e47a0 FUN_1801e47a0 ===== */

void FUN_1801e47a0(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  float local_ec;
  undefined8 local_e8;
  uint local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_a8 [5];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78 [20];
  undefined8 local_64;
  float local_5c;
  longlong local_58;
  char local_50;
  float local_4c;
  
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  if (*(float *)((longlong)param_1 + 0x14) <= DAT_1808acb30) {
    fVar4 = (float)FUN_1801ec8f0(&PTR_s_sv_standable_normal_1809ee850,DAT_1808ac254);
    fVar6 = DAT_1808ac34c;
    local_118 = 0xc1800000;
    local_114 = 0xc1800000;
    local_110 = 0;
    if (*(char *)((longlong)param_1 + 0x25) == '\0') {
      fVar5 = DAT_1808acad0;
    }
    else {
      fVar5 = DAT_1808aca88;
    }
    fVar5 = fVar5 - DAT_1808ac710;
    local_c8 = *param_1;
    local_b0 = *(float *)(param_1 + 1) + DAT_1808ac710;
    local_d8 = 0x41800000;
    local_c0 = *(float *)(param_1 + 1) + DAT_1808acdc0;
    local_d4 = 0x41800000;
    local_f4 = 0;
    local_ec = 0.0;
    local_e8 = 0;
    local_e0 = local_e0 & 0xffffff00;
    local_dc = 1.0;
    local_d0 = fVar5;
    local_b8 = local_c8;
    cVar1 = FUN_1801e4270(param_1,&local_b8,&local_c8,&local_118,&local_d8,&local_108);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((longlong)param_1 + 0x24) = 0;
    }
    else if (((local_e8 == 0) || ((char)local_e0 != '\0')) || (local_ec < fVar4)) {
      uVar3 = 0;
      local_a8[0] = local_118;
      local_a8[1] = local_114;
      local_a8[2] = local_110;
      local_a8[4] = local_114;
      local_94 = local_110;
      local_90 = local_118;
      local_88 = local_110;
      local_7c = local_110;
      local_a8[3] = 0;
      local_8c = 0;
      local_84 = 0;
      local_108 = 0;
      local_fc = 0x41800000;
      local_f4 = (ulonglong)(uint)fVar5;
      local_ec = 16.0;
      local_e8 = CONCAT44(0x41800000,fVar5);
      local_e0 = 0x41800000;
      local_100 = fVar5;
      local_dc = fVar5;
      do {
        local_64 = 0;
        local_5c = 0.0;
        local_58 = 0;
        local_50 = '\0';
        local_4c = 1.0;
        cVar1 = FUN_1801e4270(param_1,&local_b8,&local_c8,local_a8 + uVar3 * 3,
                              (longlong)&local_108 + uVar3 * 0xc,local_78);
        if (cVar1 == '\0') {
          *(undefined1 *)(param_1 + 10) = 0;
          *(undefined1 *)(param_1 + 0x16) = 0;
          break;
        }
        if (((local_58 != 0) && (fVar4 <= local_5c)) && ((local_50 == '\0' && (fVar4 <= local_5c))))
        {
          *(undefined4 *)((longlong)param_1 + 0x9c) = (undefined4)local_64;
          local_4c = local_4c * DAT_1808ac3d4;
          *(undefined1 *)((longlong)param_1 + 0x24) = 1;
          *(undefined4 *)(param_1 + 0x14) = local_64._4_4_;
          *(float *)((longlong)param_1 + 0xa4) = local_5c;
          if (local_4c <= fVar6) {
            fVar6 = local_4c;
          }
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 9) = 0;
          *(float *)((longlong)param_1 + 0x3c) = fVar6;
          return;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while ((int)uVar2 < 4);
      *(undefined1 *)((longlong)param_1 + 0x24) = 0;
      if (0.0 < *(float *)((longlong)param_1 + 0x14)) {
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3e800000;
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x9c) = (undefined4)local_f4;
      local_dc = local_dc * DAT_1808ac3d4;
      *(undefined1 *)((longlong)param_1 + 0x24) = 1;
      *(undefined4 *)(param_1 + 0x14) = local_f4._4_4_;
      *(float *)((longlong)param_1 + 0xa4) = local_ec;
      if (local_dc <= fVar6) {
        fVar6 = local_dc;
      }
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 9) = 0;
      *(float *)((longlong)param_1 + 0x3c) = fVar6;
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  return;
}



/* ===== 1801e4b20 FUN_1801e4b20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801e4b20(float *param_1,undefined8 *param_2,float param_3)

{
  bool bVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  undefined1 *local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_180;
  float local_17c;
  float local_178;
  undefined1 local_170 [4];
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  float local_154;
  longlong local_150;
  undefined2 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_120 [16];
  ulonglong local_e0;
  
  uVar2 = DAT_1808ac254;
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  local_1a4 = param_3;
  local_17c = (float)FUN_1801ec8f0(&PTR_s_sv_standable_normal_1809ee850,DAT_1808ac254);
  local_178 = (float)FUN_1801ec8f0(&PTR_s_sv_walkable_normal_1809ee8f8,uVar2);
  uVar15 = FUN_1801ec8f0(&PTR_s_sv_bounce_1809ee880,0);
  if ((uVar15 & 0x7f800000) == 0x7f800000) {
    local_1c4 = 0.0;
  }
  else {
    local_1c4 = (float)FUN_1801ec8f0(&PTR_s_sv_bounce_1809ee880,0);
  }
  if (DAT_1809ee828 == 0) {
    if (DAT_1809ee830 == '\0') {
      DAT_1809ee828 = FUN_180264b70(PTR_s_sv_jump_precision_enable_1809ee820);
      DAT_1809ee830 = DAT_1809ee828 == 0;
      if (DAT_1809ee828 != 0) goto LAB_1801e4c4b;
    }
  }
  else {
LAB_1801e4c4b:
    cVar5 = FUN_180264d70(DAT_1809ee828);
    if ((cVar5 != '\0') && (*(char *)(param_1 + 9) == '\0')) {
      bVar1 = true;
      goto LAB_1801e4c65;
    }
  }
  bVar1 = false;
LAB_1801e4c65:
  fVar20 = param_1[3];
  fVar17 = param_1[4];
  fVar19 = param_1[5];
  fVar16 = fVar17 * fVar17 + fVar20 * fVar20 + fVar19 * fVar19;
  local_1a8 = fVar20;
  if (fVar16 < 0.0) {
    FUN_18051af10();
    fVar16 = extraout_XMM0_Da;
  }
  else {
    fVar16 = SQRT(fVar16);
  }
  local_130 = 0xc1800000;
  local_12c = 0xc1800000;
  local_128 = 0;
  if (*(char *)((longlong)param_1 + 0x25) == '\0') {
    local_138 = DAT_1808acad0;
  }
  else {
    local_138 = DAT_1808aca88;
  }
  local_120[4] = 0.0;
  local_120[5] = 0.0;
  local_120[6] = 0.0;
  local_120[7] = 0.0;
  local_140 = 0x41800000;
  local_1ac = param_1[4];
  local_1b0 = param_1[5];
  iVar14 = 0;
  iVar10 = 0;
  local_120[0] = 0.0;
  local_120[1] = 0.0;
  uVar4 = local_120._0_8_;
  local_120[2] = 0.0;
  local_120[3] = 0.0;
  local_13c = 0x41800000;
  iVar13 = 0;
  local_120[1] = 0.0;
  local_180 = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar16) {
    local_180 = fVar16;
  }
  local_120[0] = 0.0;
  local_120[8] = 0.0;
  local_120[9] = 0.0;
  local_120[10] = 0.0;
  local_120[0xb] = 0.0;
  local_120[0xc] = 0.0;
  local_120[0xd] = 0.0;
  local_120[0xe] = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar24 = local_120[1];
  fVar16 = local_120[0];
  local_120._0_8_ = uVar4;
  do {
    if (fVar17 * fVar17 + fVar20 * fVar20 + fVar19 * fVar19 == 0.0) break;
    fVar21 = param_1[2];
    fVar19 = fVar19 * param_3;
    local_198 = fVar21 + fVar19;
    local_1a0 = fVar20 * param_3 + *param_1;
    local_19c = fVar17 * param_3 + param_1[1];
    if ((bVar1) && (param_3 != 0.0)) {
      fVar20 = (fVar19 + DAT_1808accd0) - DAT_1808accd0;
      local_198 = (((fVar19 + param_1[0x12]) - fVar20) + fVar20 + DAT_1808accd0 + fVar21) -
                  DAT_1808accd0;
      param_1[0x12] = (fVar19 + param_1[0x12]) - (local_198 - fVar21);
    }
    fVar20 = DAT_1808ac040;
    if (iVar10 == 1) {
      local_1a0 = fVar16 * DAT_1808ac040 + local_1a0;
      local_19c = fVar24 * DAT_1808ac040 + local_19c;
      local_198 = fVar22 * DAT_1808ac040 + local_198;
    }
    local_1d0 = local_170;
    local_1d8 = &local_140;
    local_15c = 0;
    local_154 = 0.0;
    local_150 = 0;
    local_16c = _DAT_1808ad2c0;
    uStack_164 = _UNK_1808ad2c8;
    local_148 = 0;
    cVar5 = FUN_1801e4270(param_1,param_1,&local_1a0,&local_130);
    fVar19 = DAT_1808ac34c;
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
LAB_1801e55b2:
      param_1[3] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      return 0;
    }
    if (local_148._1_1_ != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xb2) = 1;
      goto LAB_1801e55b2;
    }
    fVar21 = (float)local_16c;
    if ((fVar23 == 0.0) && ((float)local_16c < DAT_1808ac34c)) {
      fVar17 = param_1[4] * param_1[4] + param_1[3] * param_1[3] + param_1[5] * param_1[5];
      if (fVar17 < 0.0) {
        FUN_18051af10();
        fVar17 = extraout_XMM0_Da_00;
      }
      else {
        fVar17 = SQRT(fVar17);
      }
      if ((fVar20 <= fVar17 * param_3) && (fVar17 * param_3 * fVar21 < fVar20)) {
        fVar21 = 0.0;
      }
    }
    fVar3 = local_154;
    local_1b8 = uStack_164._4_4_;
    local_1bc = (float)uStack_164;
    local_1c0 = local_16c._4_4_;
    iVar9 = iVar10;
    if (fVar20 < fVar21 * local_180) {
      local_1a8 = param_1[3];
      local_1ac = param_1[4];
      local_1b0 = param_1[5];
      *param_1 = local_16c._4_4_;
      param_1[1] = (float)uStack_164;
      param_1[2] = uStack_164._4_4_;
      iVar9 = 0;
      iVar14 = 0;
    }
    local_1c8 = fVar23 + fVar21;
    fVar23 = local_1c8;
    if (fVar21 == fVar19) break;
    param_1[0x2e] = (float)((int)param_1[0x2e] + 1);
    *(undefined1 *)((longlong)param_1 + 0xb3) = 1;
    if (4 < iVar9) goto LAB_1801e55b2;
    cVar5 = *(char *)(param_1 + 9);
    if (((((cVar5 == '\0') && (param_1[5] <= 0.0 && param_1[5] != 0.0)) && (local_17c <= local_154))
        && ((local_150 != 0 && ((char)local_148 == '\0')))) && (local_17c <= local_154)) {
      fVar20 = param_1[4] * param_1[4] + param_1[3] * param_1[3];
      if (fVar20 < 0.0) {
        fVar20 = (float)FUN_18051af10();
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      if (fVar20 < fVar19) {
        param_1[3] = 0.0;
        param_1[4] = 0.0;
        param_1[5] = 0.0;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 1) = 0;
        return 0;
      }
    }
    fVar20 = (float)local_15c;
    iVar14 = iVar14 + 1;
    fVar23 = param_1[5];
    lVar6 = (longlong)iVar9;
    iVar10 = iVar9 + 1;
    local_1b4 = local_15c._4_4_;
    local_120[lVar6 * 3] = (float)local_15c;
    local_120[lVar6 * 3 + 1] = local_15c._4_4_;
    local_120[lVar6 * 3 + 2] = fVar3;
    fVar22 = local_120[2];
    fVar16 = local_120[0];
    fVar24 = local_120[1];
    if ((iVar10 != 1) || (cVar5 != '\0')) {
      uVar12 = 0;
      if (0 < iVar10) {
        do {
          iVar11 = (int)uVar12;
          iVar7 = 0;
          fVar19 = (float)((uint)(local_120[uVar12 * 3 + 1] * param_1[4] +
                                  local_120[uVar12 * 3] * param_1[3] +
                                 local_120[uVar12 * 3 + 2] * fVar23) ^ DAT_1808adec0);
          fVar17 = 0.0;
          if (0.0 <= fVar19) {
            fVar17 = fVar19;
          }
          fVar17 = fVar17 + DAT_1808ac040;
          fVar19 = local_120[uVar12 * 3] * fVar17 + param_1[3];
          fVar18 = local_120[uVar12 * 3 + 1] * fVar17 + param_1[4];
          fVar17 = local_120[uVar12 * 3 + 2] * fVar17 + fVar23;
          if (iVar10 < 4) goto LAB_1801e5330;
          do {
            lVar6 = (longlong)iVar7;
            if ((((iVar7 != iVar11) &&
                 (iVar8 = iVar7,
                 fVar18 * local_120[lVar6 * 3 + 1] + fVar19 * local_120[lVar6 * 3] +
                 fVar17 * local_120[lVar6 * 3 + 2] < 0.0)) ||
                ((iVar8 = iVar7 + 1, iVar8 != iVar11 &&
                 (fVar18 * local_120[lVar6 * 3 + 4] + fVar19 * local_120[lVar6 * 3 + 3] +
                  fVar17 * local_120[lVar6 * 3 + 5] < 0.0)))) ||
               (((iVar8 = iVar7 + 2, iVar8 != iVar11 &&
                 (fVar18 * local_120[lVar6 * 3 + 7] + fVar19 * local_120[lVar6 * 3 + 6] +
                  fVar17 * local_120[lVar6 * 3 + 8] < 0.0)) ||
                ((iVar8 = iVar7 + 3, iVar8 != iVar11 &&
                 (fVar18 * local_120[lVar6 * 3 + 10] + fVar19 * local_120[lVar6 * 3 + 9] +
                  fVar17 * local_120[lVar6 * 3 + 0xb] < 0.0)))))) goto LAB_1801e536d;
            iVar7 = iVar7 + 4;
          } while (iVar7 < iVar9 + -2);
          for (; iVar8 = iVar7, iVar7 < iVar10; iVar7 = iVar7 + 1) {
LAB_1801e5330:
            if ((iVar7 != iVar11) &&
               (lVar6 = (longlong)iVar7,
               fVar18 * local_120[lVar6 * 3 + 1] + fVar19 * local_120[lVar6 * 3] +
               fVar17 * local_120[lVar6 * 3 + 2] < 0.0)) goto LAB_1801e5373;
          }
LAB_1801e536d:
          if (iVar8 == iVar10) {
            param_1[3] = fVar19;
            param_1[4] = fVar18;
            param_1[5] = fVar17;
            goto LAB_1801e5442;
          }
LAB_1801e5373:
          uVar12 = (ulonglong)(iVar11 + 1U);
        } while ((int)(iVar11 + 1U) < iVar10);
      }
      if ((int)uVar12 == iVar10) {
        if (iVar10 == 2) {
          local_190 = local_120[1] * local_120[5] - local_120[2] * local_120[4];
          local_18c = local_120[3] * local_120[2] - local_120[0] * local_120[5];
          local_188 = local_120[0] * local_120[4] - local_120[3] * local_120[1];
          FUN_1801e40f0(&local_190);
          fVar17 = local_190 * param_1[3] + local_18c * param_1[4] + local_188 * param_1[5];
          param_1[3] = local_190 * fVar17;
          param_1[4] = local_18c * fVar17;
          param_1[5] = local_188 * fVar17;
          goto LAB_1801e5442;
        }
      }
      else {
LAB_1801e5442:
        if (((0.0 < fVar3) && (fVar23 < 0.0)) && (DAT_1808abfa0 < param_1[5] - fVar23)) {
          param_1[0x31] = (float)((int)param_1[0x31] + 1);
          param_1[0x33] = local_1c0;
          param_1[0x32] = (param_1[5] - fVar23) + param_1[0x32];
          param_1[0x35] = local_1b8;
          param_1[0x37] = local_1b4;
          param_1[0x34] = local_1bc;
          param_1[0x36] = fVar20;
          param_1[0x38] = fVar3;
          *(undefined1 *)(param_1 + 0x30) = 1;
        }
        fVar20 = param_1[3];
        fVar17 = param_1[4];
        fVar19 = param_1[5];
        if (0.0 < fVar20 * local_1a8 + fVar17 * local_1ac + fVar19 * local_1b0) goto LAB_1801e5508;
      }
      param_1[3] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      fVar23 = local_1c8;
      break;
    }
    if (local_120[2] < local_178) {
      fVar19 = (fVar19 - param_1[0xf]) * local_1c4 + fVar19;
    }
    fVar17 = (float)((uint)(param_1[3] * local_120[0] + param_1[4] * local_120[1] +
                           fVar23 * local_120[2]) ^ DAT_1808adec0);
    fVar20 = 0.0;
    if (0.0 <= fVar17) {
      fVar20 = fVar17;
    }
    fVar19 = (fVar20 + DAT_1808ac040) * fVar19;
    fVar20 = fVar19 * local_120[0] + param_1[3];
    fVar17 = fVar19 * local_120[1] + param_1[4];
    fVar19 = fVar19 * local_120[2] + fVar23;
    param_1[3] = fVar20;
    param_1[4] = fVar17;
    param_1[5] = fVar19;
    if (((0.0 < fVar3) && (fVar23 < 0.0)) && (DAT_1808abfa0 < fVar19 - fVar23)) {
      param_1[0x31] = (float)((int)param_1[0x31] + 1);
      param_1[0x33] = local_1c0;
      param_1[0x32] = (fVar19 - fVar23) + param_1[0x32];
      param_1[0x35] = local_1b8;
      param_1[0x37] = local_15c._4_4_;
      param_1[0x34] = local_1bc;
      param_1[0x36] = (float)local_15c;
      param_1[0x38] = fVar3;
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
LAB_1801e5508:
    iVar13 = iVar13 + 1;
    param_3 = local_1a4 - fVar21 * local_1a4;
    fVar23 = local_1c8;
    local_1a4 = param_3;
  } while (iVar13 < 4);
  if ((fVar23 == 0.0) && (0 < iVar14)) {
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return 1;
}



/* ===== 1801e5630 FUN_1801e5630 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1801e5630(float *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_278;
  float local_274;
  float local_270;
  undefined4 local_268;
  undefined4 local_264;
  float local_260;
  float local_258;
  undefined4 local_254;
  float local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_238 [4];
  undefined8 local_234;
  undefined8 uStack_22c;
  float local_21c;
  char local_210;
  float local_208;
  float local_204;
  float local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_f8 [4];
  float local_f4;
  float local_dc;
  
  fVar8 = (float)FUN_1801ec8f0(&PTR_s_sv_stepsize_1809ee7c0);
  fVar12 = 0.0;
  if (0.0 <= fVar8) {
    fVar12 = fVar8;
  }
  fVar9 = (float)FUN_1801ec8f0(&PTR_s_sv_walkable_normal_1809ee8f8);
  local_1e8 = *(undefined8 *)param_3;
  uStack_1e0 = *(undefined8 *)(param_3 + 2);
  local_108 = *(undefined8 *)(param_3 + 0x38);
  local_198 = *(undefined8 *)(param_3 + 0x14);
  uStack_190 = *(undefined8 *)(param_3 + 0x16);
  local_1d8 = *(undefined8 *)(param_3 + 4);
  uStack_1d0 = *(undefined8 *)(param_3 + 6);
  local_240 = *(undefined4 *)(param_4 + 1);
  fVar8 = *param_1;
  fVar1 = param_1[1];
  fVar2 = param_1[5];
  uVar3 = *(undefined4 *)(param_2 + 1);
  local_1c8 = *(undefined8 *)(param_3 + 8);
  uStack_1c0 = *(undefined8 *)(param_3 + 10);
  local_278 = -16.0;
  local_274 = -16.0;
  local_178 = *(undefined8 *)(param_3 + 0x1c);
  uStack_170 = *(undefined8 *)(param_3 + 0x1e);
  local_270 = 0.0;
  local_1a8 = *(undefined8 *)(param_3 + 0x10);
  uStack_1a0 = *(undefined8 *)(param_3 + 0x12);
  local_158 = *(undefined8 *)(param_3 + 0x24);
  uStack_150 = *(undefined8 *)(param_3 + 0x26);
  local_188 = *(undefined8 *)(param_3 + 0x18);
  uStack_180 = *(undefined8 *)(param_3 + 0x1a);
  local_138 = *(undefined8 *)(param_3 + 0x2c);
  uStack_130 = *(undefined8 *)(param_3 + 0x2e);
  local_168 = *(undefined8 *)(param_3 + 0x20);
  uStack_160 = *(undefined8 *)(param_3 + 0x22);
  local_118 = *(undefined8 *)(param_3 + 0x34);
  uStack_110 = *(undefined8 *)(param_3 + 0x36);
  local_148 = *(undefined8 *)(param_3 + 0x28);
  uStack_140 = *(undefined8 *)(param_3 + 0x2a);
  local_1b8 = param_3[0xc];
  fStack_1b4 = param_3[0xd];
  fStack_1b0 = param_3[0xe];
  fStack_1ac = param_3[0xf];
  local_128 = *(undefined8 *)(param_3 + 0x30);
  uStack_120 = *(undefined8 *)(param_3 + 0x32);
  local_248 = *param_4;
  if (*(char *)((longlong)param_3 + 0x25) == '\0') {
    fVar11 = DAT_1808acad0;
  }
  else {
    fVar11 = DAT_1808aca88;
  }
  local_1f8 = *(undefined8 *)param_3;
  local_1f0 = param_3[2] + fVar12 + DAT_1808ac040;
  local_268 = 0x41800000;
  local_264 = 0x41800000;
  local_234 = _DAT_1808ad2c0;
  uStack_22c = _UNK_1808ad2c8;
  local_210 = '\0';
  local_260 = fVar11;
  cVar6 = FUN_1801e4270(param_3,param_3,&local_1f8,&local_278,&local_268,local_238);
  if ((cVar6 != '\0') && (local_210 == '\0')) {
    if (0.0 < (float)local_234) {
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uStack_22c._4_4_);
      local_1e8 = CONCAT44((float)uStack_22c,local_234._4_4_);
    }
    FUN_1801e4b20(&local_1e8,&local_248,param_5);
    if ((((local_198._1_1_ == '\0') || ((char)local_198 != '\0')) && ((char)local_138 != '\0')) &&
       ((local_138._1_1_ == '\0' && (local_138._2_1_ == '\0')))) {
      local_258 = (float)local_1e8;
      local_254 = local_1e8._4_4_;
      local_234 = _DAT_1808ad2c0;
      uStack_22c = _UNK_1808ad2c8;
      local_21c = 0.0;
      local_210 = '\0';
      local_250 = (float)uStack_1e0 - (fVar12 + DAT_1808ac090);
      cVar6 = FUN_1801e4270(&local_1e8,&local_1e8,&local_258,&local_278,&local_268,local_238);
      fVar4 = DAT_1808ac34c;
      if (cVar6 != '\0') {
        fVar5 = (float)local_234;
        if ((DAT_1808ac34c <= (float)local_234) || (local_21c < fVar9)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((DAT_1808ac34c <= (float)local_234) || (fVar9 <= local_21c)) {
          if (!bVar7) {
            return 0;
          }
        }
        else {
          fVar10 = uStack_1e0._4_4_ * uStack_1e0._4_4_ + (float)local_1d8 * (float)local_1d8 +
                   local_1d8._4_4_ * local_1d8._4_4_;
          if (fVar10 < 0.0) {
            FUN_18051af10(fVar10);
            fVar10 = extraout_XMM0_Da;
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          if (DAT_1808acab0 <= fVar10) {
            return 0;
          }
          local_260 = fVar11 + 0.0;
          local_208 = local_278 + DAT_1808ac540;
          local_268 = 0x41600000;
          local_264 = 0x41600000;
          local_204 = local_274 + DAT_1808ac540;
          local_f4 = 1.0;
          local_200 = local_270 + 0.0;
          local_dc = 0.0;
          local_278 = local_258;
          local_270 = local_250 - fVar12 * DAT_1808ac1f4;
          local_274 = (float)local_254;
          cVar6 = FUN_1801e4270(&local_1e8,&local_1e8,&local_278,&local_208,&local_268,local_f8);
          if (cVar6 == '\0') {
            return 0;
          }
          if (fVar4 <= local_f4) {
            return 0;
          }
          if (local_dc < fVar9) {
            return 0;
          }
        }
        if ((0.0 < fVar5) && (local_210 == '\0')) {
          if ((fVar1 - param_3[1]) * param_3[4] + (fVar8 - *param_3) * param_3[3] <=
              ((float)uStack_22c - param_3[1]) * param_3[4] +
              (local_234._4_4_ - *param_3) * param_3[3]) {
            param_1[2] = uStack_22c._4_4_;
            param_1[4] = (float)local_1d8;
            *(undefined8 *)(param_1 + 0x24) = local_158;
            param_1[3] = uStack_1e0._4_4_;
            *(undefined8 *)(param_1 + 6) = uStack_1d0;
            param_1[8] = (float)local_1c8;
            param_1[0x26] = (float)uStack_150;
            *param_2 = local_248;
            *(undefined4 *)(param_2 + 1) = uVar3;
            *(undefined8 *)(param_1 + 0x2a) = uStack_140;
            *param_1 = local_234._4_4_;
            param_1[1] = (float)uStack_22c;
            param_1[5] = fVar2;
            *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ===== 1801e5be0 FUN_1801e5be0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e5be0(undefined8 *param_1,longlong param_2,float *param_3,float *param_4,float param_5,
                  float param_6,float param_7)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8;
  float local_res18;
  undefined8 in_stack_fffffffffffffc78;
  undefined4 uVar18;
  undefined8 uVar17;
  float local_378;
  float fStack_374;
  float local_370;
  undefined8 local_368;
  float local_360;
  float local_358 [2];
  float local_350 [2];
  float local_348 [4];
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined8 local_328;
  float local_320;
  undefined8 local_318;
  float local_310;
  undefined1 local_308 [4];
  undefined8 local_304;
  undefined8 uStack_2fc;
  undefined8 local_2f4;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined4 local_2dc;
  undefined1 local_2d8 [4];
  undefined8 local_2d4;
  undefined8 uStack_2cc;
  float local_2bc;
  char local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_298;
  float fStack_294;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffc78 >> 0x20);
  fVar10 = *(float *)(param_1 + 2) * *(float *)(param_1 + 2) +
           *(float *)((longlong)param_1 + 0xc) * *(float *)((longlong)param_1 + 0xc);
  if (fVar10 < 0.0) {
    fVar10 = (float)FUN_18051af10();
  }
  else {
    fVar10 = SQRT(fVar10);
  }
  if (fVar10 == 0.0) {
    fVar13 = 0.0;
  }
  else {
    local_358[0] = -16384.0;
    local_350[0] = fVar10;
    pfVar5 = local_358;
    if (DAT_1808ace94 <= fVar10) {
      pfVar5 = local_350;
    }
    if (DAT_1808acc90 < fVar10) {
      pfVar5 = (float *)&DAT_1805ac918;
    }
    fVar13 = (float)((double)((longlong)
                              ((double)(*pfVar5 + DAT_1808acc90) * DAT_1808ac650 + DAT_1808ac4a8) &
                             0xffffffff) * DAT_1808ac178 * DAT_1808ac7f0 - DAT_1808ac7d8);
    fVar7 = DAT_1808acc90;
    if (fVar13 <= DAT_1808acc90) {
      fVar7 = fVar13;
    }
    fVar13 = DAT_1808acc90;
    if (fVar7 <= DAT_1808acc90) {
      fVar13 = fVar7;
    }
  }
  if ((*(float *)(param_1 + 0x12) == *param_4) &&
     (*(float *)((longlong)param_1 + 0x94) == param_4[1])) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    bVar2 = false;
    if (bVar1) {
LAB_1801e5d78:
      bVar2 = true;
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)((longlong)param_1 + 0x6c);
      *(float *)((longlong)param_1 + 100) = fVar13;
      *(undefined2 *)(param_1 + 0xc) = 0x101;
    }
LAB_1801e5d8c:
    if (bVar2) goto LAB_1801e5d90;
  }
  else {
    if (*(float *)(param_1 + 0xd) == *(float *)((longlong)param_1 + 0x6c)) {
      if ((fVar13 != *(float *)((longlong)param_1 + 100)) || (bVar1)) goto LAB_1801e5d78;
      bVar2 = false;
      goto LAB_1801e5d8c;
    }
LAB_1801e5d90:
    fVar13 = *(float *)((longlong)param_1 + 100);
  }
  bVar1 = fVar13 < DAT_1808ac0c0;
  fVar7 = param_4[2];
  fVar16 = 0.0;
  param_1[0x12] = *(undefined8 *)param_4;
  local_res18 = 0.0;
  local_res8 = 0.0;
  *(float *)(param_1 + 0x13) = fVar7;
  if (bVar1) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)FUN_1801ec8f0(&PTR_s_sv_stopspeed_1809ee7d8,DAT_1808acae0);
    fVar8 = (float)FUN_1801ec8f0(&PTR_s_sv_friction_1809ee808,DAT_1808ac770);
    if (fVar13 <= fVar7) {
      fVar13 = fVar7;
    }
    fVar13 = fVar8 * *(float *)((longlong)param_1 + 0x3c) * *(float *)((longlong)param_1 + 0x54) *
             fVar13;
    fVar8 = fVar13 * param_7;
    fVar7 = 0.0;
    if (0.0 <= fVar8 - fVar10) {
      fVar7 = fVar8 - fVar10;
    }
    if (0.0 < fVar10 * fVar10) {
      if (fVar10 < fVar8) {
        fVar13 = fVar10 / param_7;
      }
      local_res18 = (float)*(undefined8 *)((longlong)param_1 + 0xc);
      fVar16 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xc) >> 0x20);
      fVar12 = 0.0;
      if (0.0 <= fVar10 - fVar8) {
        fVar12 = fVar10 - fVar8;
      }
      fVar13 = (float)((uint)(fVar13 / fVar10) ^ DAT_1808adec0);
      fVar12 = fVar12 / fVar10;
      local_res8 = *(float *)((longlong)param_1 + 0x14) * fVar13;
      *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(fVar16 * fVar12,local_res18 * fVar12);
      *(float *)((longlong)param_1 + 0x14) = *(float *)((longlong)param_1 + 0x14) * fVar12;
      local_res18 = local_res18 * fVar13;
      fVar16 = fVar16 * fVar13;
    }
  }
  FUN_1801e45d0(param_1);
  fVar13 = DAT_1808acb90;
  fVar10 = DAT_1808ac34c;
  fVar12 = *(float *)(param_1 + 2) * param_3[1] + *(float *)((longlong)param_1 + 0xc) * *param_3 +
           *(float *)((longlong)param_1 + 0x14) * param_3[2];
  fVar8 = param_5 - fVar12;
  if (fVar8 <= 0.0) goto LAB_1801e6134;
  cVar4 = '\x01';
  if ((*(char *)(param_2 + 0xc) == '\0') && (*(char *)((longlong)param_1 + 0x52) == '\0')) {
    cVar4 = *(char *)((longlong)param_1 + 0x2d);
  }
  fVar11 = DAT_1808acb90;
  if (DAT_1808acb90 <= param_5) {
    fVar11 = param_5;
  }
  fVar9 = fVar10;
  if (DAT_1809ee8a0 == 0) {
    if (DAT_1809ee8a8 == '\0') {
      DAT_1809ee8a0 = FUN_180264b70(PTR_s_sv_accelerate_use_weapon_speed_1809ee898);
      DAT_1809ee8a8 = DAT_1809ee8a0 == 0;
      if (DAT_1809ee8a0 != 0) goto LAB_1801e5f88;
    }
LAB_1801e5f94:
    fVar15 = fVar11;
  }
  else {
LAB_1801e5f88:
    cVar3 = FUN_180264d70(DAT_1809ee8a0);
    if (cVar3 == '\0') goto LAB_1801e5f94;
    fVar15 = fVar10;
    if (*(float *)(param_1 + 0xb) / fVar13 <= fVar10) {
      fVar15 = *(float *)(param_1 + 0xb) / fVar13;
    }
    if ((cVar4 == '\0') && (*(char *)(param_2 + 0xd) == '\0')) {
      fVar9 = fVar15;
    }
    fVar15 = fVar15 * fVar11;
  }
  if (cVar4 == '\0') {
    fVar13 = fVar9;
  }
  else {
    fVar15 = fVar15 * DAT_1808ac16c;
    fVar13 = DAT_1808ac16c;
    if (fVar9 <= DAT_1808ac16c) {
      fVar13 = fVar9;
    }
  }
  fVar9 = (float)FUN_1801ec8f0(&PTR_s_sv_accelerate_1809ee8b0,DAT_1808ac790);
  fVar13 = fVar13 * fVar11;
  if ((*(char *)(param_2 + 0xd) != '\0') && (cVar4 == '\0')) {
    fVar13 = fVar13 * DAT_1808ac200;
    fVar15 = fVar15 * DAT_1808ac200 - DAT_1808ac750;
    fVar11 = 0.0;
    if (0.0 <= fVar12) {
      fVar11 = fVar12;
    }
    if (fVar15 < fVar11) {
      local_348[2] = 1.0;
      local_348[0] = 0.0;
      local_348[1] = fVar10 - (fVar11 - fVar15) / DAT_1808ac750;
      pfVar5 = local_348;
      if (0.0 <= local_348[1]) {
        pfVar5 = local_348 + 1;
      }
      pfVar6 = local_348 + 2;
      if (local_348[1] <= fVar10) {
        pfVar6 = pfVar5;
      }
      fVar9 = fVar9 * *pfVar6;
    }
  }
  fVar7 = fVar13 * fVar9 * *(float *)((longlong)param_1 + 0x3c) - fVar7 / param_7;
  if (0.0 < fVar7) {
    fVar13 = param_3[2];
    fVar12 = (float)*(undefined8 *)param_3;
    fVar11 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    fVar7 = fVar7 * param_7;
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    fVar7 = fVar8 / param_7;
    local_res18 = local_res18 + fVar12 * fVar7;
    fVar16 = fVar16 + fVar11 * fVar7;
    *(ulonglong *)((longlong)param_1 + 0xc) =
         CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xc) >> 0x20) +
                  fVar11 * fVar8,(float)*(undefined8 *)((longlong)param_1 + 0xc) + fVar12 * fVar8);
    local_res8 = local_res8 + fVar13 * fVar7;
    *(float *)((longlong)param_1 + 0x14) = fVar13 * fVar8 + *(float *)((longlong)param_1 + 0x14);
  }
LAB_1801e6134:
  fVar7 = *(float *)((longlong)param_1 + 0xc);
  fVar13 = *(float *)(param_1 + 2);
  fVar8 = *(float *)((longlong)param_1 + 0x14);
  fVar12 = fVar13 * fVar13 + fVar7 * fVar7 + fVar8 * fVar8;
  if (fVar12 < 0.0) {
    fVar12 = (float)FUN_18051af10();
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  fVar11 = DAT_1808ac00c;
  fVar9 = fVar8;
  fVar15 = fVar13;
  fVar14 = fVar7;
  if ((0.0 < fVar12) && (param_6 < fVar12)) {
    param_6 = param_6 / fVar12;
    fVar14 = fVar7 * param_6;
    fVar12 = fVar10 / param_7;
    fVar9 = fVar8 * param_6;
    fVar15 = fVar13 * param_6;
    local_res18 = local_res18 + (fVar14 - fVar7) * fVar12;
    fVar16 = fVar16 + (fVar15 - fVar13) * fVar12;
    local_res8 = local_res8 + (fVar9 - fVar8) * fVar12;
  }
  fVar7 = param_7 * DAT_1808ac1f4;
  local_370 = fVar7 * local_res8;
  fStack_374 = fVar7 * fVar16;
  local_378 = fVar7 * local_res18;
  *(float *)((longlong)param_1 + 0x14) = fVar9 - local_370;
  fVar7 = fVar11 - fVar7;
  fVar12 = (fVar15 - fStack_374) + *(float *)((longlong)param_1 + 0x1c);
  fVar8 = (fVar14 - local_378) + *(float *)(param_1 + 3);
  fVar16 = fVar7 * fVar16 + fVar12;
  fVar13 = fVar7 * local_res18 + fVar8;
  *(float *)(param_1 + 2) = fVar12;
  fVar7 = (fVar9 - local_370) + fVar7 * local_res8;
  *(float *)((longlong)param_1 + 0xc) = fVar8;
  fVar7 = fVar16 * fVar16 + fVar13 * fVar13 + fVar7 * fVar7;
  if (fVar7 < 0.0) {
    fVar7 = (float)FUN_18051af10();
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  if (fVar10 <= fVar7) {
    local_2a8 = *param_1;
    uStack_2a0 = param_1[1];
    local_1c8 = param_1[0x1c];
    uStack_290 = param_1[3];
    local_360 = local_370;
    local_288 = param_1[4];
    uStack_280 = param_1[5];
    local_298 = (float)param_1[2];
    fStack_294 = (float)((ulonglong)param_1[2] >> 0x20);
    local_278 = param_1[6];
    uStack_270 = param_1[7];
    local_268 = param_1[8];
    uStack_260 = param_1[9];
    local_258 = param_1[10];
    uStack_250 = param_1[0xb];
    local_248 = param_1[0xc];
    uStack_240 = param_1[0xd];
    local_238 = param_1[0xe];
    uStack_230 = param_1[0xf];
    local_228 = param_1[0x10];
    uStack_220 = param_1[0x11];
    local_218 = param_1[0x12];
    uStack_210 = param_1[0x13];
    local_208 = param_1[0x14];
    uStack_200 = param_1[0x15];
    local_1f8 = param_1[0x16];
    uStack_1f0 = param_1[0x17];
    local_1e8 = param_1[0x18];
    uStack_1e0 = param_1[0x19];
    local_1d8 = *(undefined4 *)(param_1 + 0x1a);
    uStack_1d4 = *(undefined4 *)((longlong)param_1 + 0xd4);
    uStack_1d0 = *(undefined4 *)(param_1 + 0x1b);
    uStack_1cc = *(undefined4 *)((longlong)param_1 + 0xdc);
    local_368 = CONCAT44(fStack_374,local_378);
    FUN_1801e4b20(param_1,&local_378,param_7);
    if ((*(char *)((longlong)param_1 + 0xb3) != '\0') &&
       (*(char *)((longlong)param_1 + 0xb2) == '\0')) {
      uVar17 = CONCAT44(uVar18,param_7);
      cVar4 = FUN_1801e5630(param_1,&local_378,&local_2a8,&local_368,uVar17);
      uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
      fVar7 = local_298 * local_298 + uStack_2a0._4_4_ * uStack_2a0._4_4_ + fStack_294 * fStack_294;
      if (fVar7 < 0.0) {
        fVar7 = (float)FUN_18051af10();
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      fVar13 = (float)FUN_1801ec8f0(&PTR_s_sv_step_move_vel_min_1809ee7f0,0);
      if ((cVar4 == '\0') && (0.0 < fVar7)) {
        fVar16 = 0.0;
        if (0.0 <= fVar13) {
          fVar16 = fVar13;
        }
        if ((fVar7 < fVar16) && ((*param_4 != 0.0 || (param_4[1] != 0.0)))) {
          local_198 = local_288;
          uStack_190 = uStack_280;
          local_d8 = local_1c8;
          local_178 = local_268;
          uStack_170 = uStack_260;
          local_158 = local_248;
          uStack_150 = uStack_240;
          local_188 = local_278;
          uStack_180 = uStack_270;
          local_138 = local_228;
          uStack_130 = uStack_220;
          local_168 = local_258;
          uStack_160 = uStack_250;
          fVar16 = fVar16 / fVar7;
          local_118 = local_208;
          uStack_110 = uStack_200;
          local_148 = local_238;
          uStack_140 = uStack_230;
          local_1b8 = (undefined4)local_2a8;
          uStack_1b4 = local_2a8._4_4_;
          uStack_1b0 = (undefined4)uStack_2a0;
          local_f8 = local_1e8;
          uStack_f0 = uStack_1e0;
          local_128 = local_218;
          uStack_120 = uStack_210;
          fStack_1ac = uStack_2a0._4_4_ * fVar16;
          local_108 = local_1f8;
          uStack_100 = uStack_1f0;
          fStack_1a4 = fStack_294 * fVar16;
          local_1a8 = local_298 * fVar16;
          uStack_1a0 = uStack_290;
          local_e8 = local_1d8;
          uStack_e4 = uStack_1d4;
          uStack_e0 = uStack_1d0;
          uStack_dc = uStack_1cc;
          FUN_1801e5630(param_1,&local_378,&local_1b8,&local_368,CONCAT44(uVar18,param_7));
        }
      }
    }
    local_368 = 0xc1800000c1800000;
    local_360 = 0.0;
    if (*(char *)((longlong)param_1 + 0x25) == '\0') {
      local_330 = DAT_1808acad0;
    }
    else {
      local_330 = DAT_1808aca88;
    }
    local_328 = *param_1;
    local_320 = *(float *)(param_1 + 1);
    local_310 = *(float *)(param_1 + 1) + DAT_1808ac540;
    local_338 = 0x41800000;
    local_334 = 0x41800000;
    local_318 = local_328;
    fVar7 = (float)FUN_1801ec8f0(&PTR_s_sv_stepsize_1809ee7c0,DAT_1808ac934);
    local_308[0] = 0;
    local_320 = local_320 - fVar7;
    local_2e8 = 0;
    local_2e0 = 0;
    local_2bc = 0.0;
    local_2b0 = '\0';
    local_304 = _DAT_1808ad2c0;
    uStack_2fc = _UNK_1808ad2c8;
    local_2f4 = 0;
    local_2ec = 0;
    local_2dc = 0x3f800000;
    local_2d4 = _DAT_1808ad2c0;
    uStack_2cc = _UNK_1808ad2c8;
    cVar4 = FUN_1801e4270(param_1,param_1,&local_318,&local_368,&local_338,local_308);
    if ((((cVar4 != '\0') &&
         (cVar4 = FUN_1801e4270(param_1,(longlong)&local_304 + 4,&local_328,&local_368,&local_338,
                                local_2d8), cVar4 != '\0')) && (0.0 < (float)local_2d4)) &&
       ((((float)local_2d4 < fVar10 && (local_2b0 == '\0')) &&
        ((fVar10 = (float)FUN_1801ec8f0(&PTR_s_sv_walkable_normal_1809ee8f8,DAT_1808ac254),
         fVar10 <= local_2bc &&
         (fVar11 < (float)((uint)(*(float *)(param_1 + 1) - uStack_2cc._4_4_) & _DAT_1808ade90))))))
       ) {
      *(undefined4 *)param_1 = local_2d4._4_4_;
      *(undefined4 *)((longlong)param_1 + 4) = (undefined4)uStack_2cc;
      *(float *)(param_1 + 1) = uStack_2cc._4_4_;
    }
    fVar10 = local_370;
    fVar7 = fStack_374;
    fVar13 = local_378;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    fVar10 = 0.0;
    fVar7 = 0.0;
    fVar13 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x14) = fVar10 + *(float *)((longlong)param_1 + 0x14);
  *(float *)((longlong)param_1 + 0xc) =
       (*(float *)((longlong)param_1 + 0xc) - *(float *)(param_1 + 3)) + fVar13;
  *(float *)(param_1 + 2) = (*(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0x1c)) + fVar7
  ;
  FUN_1801e45d0(param_1);
  FUN_1801e47a0(param_1);
  return;
}



/* ===== 1801e67b0 FUN_1801e67b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801e67b0(uint *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  longlong local_res8;
  undefined1 local_168 [48];
  undefined4 local_138;
  undefined2 uStack_134;
  undefined1 uStack_132;
  byte bStack_131;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  ushort uStack_12a;
  undefined2 local_108;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 local_f8;
  ushort uStack_f6;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar5 = _UNK_1808ade28;
  uVar4 = _DAT_1808ade20;
  uVar3 = _UNK_1808adb08;
  uVar2 = _DAT_1808adb00;
  uVar19 = DAT_1808ac34c;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_138 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_134 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_132 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_130 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_12c = 0;
  local_108 = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uStack_106 = 0;
  *(ulonglong *)(param_1 + 8) = (ulonglong)bStack_131 << 0x38;
  *(ulonglong *)(param_1 + 10) = (ulonglong)uStack_12a << 0x30;
  uStack_104 = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  uStack_100 = 0x437a0000;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = uVar5;
  uStack_fc = 0x3f800000;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  local_e8 = local_e8 & 0xffffff00;
  *(ulonglong *)(param_1 + 0x14) = CONCAT44(0x3f800000,CONCAT13(uStack_105,1));
  param_1[0x16] = 0x437a0000;
  param_1[0x17] = 0x3f800000;
  uStack_e4 = 0;
  uStack_e0 = 0;
  *(ulonglong *)(param_1 + 0x18) = (ulonglong)uStack_f6 << 0x10;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uStack_dc = uStack_dc & 0xffffff00;
  local_d8 = 0;
  local_b0 = 0;
  *(ulonglong *)(param_1 + 0x1c) = (ulonglong)local_e8;
  *(ulonglong *)(param_1 + 0x1e) = (ulonglong)uStack_dc << 0x20;
  local_a8 = 1;
  uStack_a4 = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  uStack_a0 = 0;
  local_98 = local_98 & 0xffffff00;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  uStack_94 = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(ulonglong *)(param_1 + 0x2c) = CONCAT26(uStack_a2,1);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = local_98;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  uVar14 = 0;
  if (*param_2 != 0) {
    lVar10 = FUN_18000f3a0((ulonglong)DAT_180ca0970 + *param_2);
    uVar14 = 0;
    if (lVar10 != 0) {
      *(longlong *)(param_1 + 0x2a) = *param_2;
      if ((((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
          (lVar11 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar11 == 0)) ||
         (DAT_180ca0950 == 0)) {
        uVar8 = 0;
        uVar9 = 0;
        uVar18 = 0;
      }
      else {
        puVar12 = (uint *)FUN_1800111b0(local_168,lVar11 + (ulonglong)DAT_180ca0950);
        uVar8 = *puVar12;
        uVar9 = puVar12[1];
        uVar18 = puVar12[2];
      }
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[2] = uVar18;
      uVar8 = FUN_18038eaf0("C_BaseEntity","m_vecAbsVelocity");
      puVar13 = (undefined8 *)FUN_1800111b0(local_168,(ulonglong)uVar8 + *param_2);
      uVar8 = *(uint *)(puVar13 + 1);
      *(undefined8 *)(param_1 + 3) = *puVar13;
      param_1[5] = uVar8;
      uVar8 = FUN_18038eaf0("C_BaseEntity","m_vecBaseVelocity");
      puVar13 = (undefined8 *)FUN_1800111b0(local_168,(ulonglong)uVar8 + *param_2);
      uVar8 = *(uint *)(puVar13 + 1);
      *(undefined8 *)(param_1 + 6) = *puVar13;
      param_1[8] = uVar8;
      uVar8 = FUN_180011200((ulonglong)DAT_180ca0a18 + *param_2);
      *(byte *)(param_1 + 9) = (byte)uVar8 & 1;
      *(byte *)((longlong)param_1 + 0x2d) = (byte)(uVar8 >> 1) & 1;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_bDucked");
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_180011220((ulonglong)uVar9 + lVar10);
      }
      *(undefined1 *)((longlong)param_1 + 0x25) = uVar6;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_bJumpApexPending");
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_180011220((ulonglong)uVar9 + lVar10);
      }
      *(undefined1 *)((longlong)param_1 + 0x26) = uVar6;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flDuckAmount");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = 0;
      }
      param_1[10] = uVar9;
      uVar9 = FUN_18038eaf0("CPlayer_MovementServices_Humanoid","m_flSurfaceFriction");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = uVar19;
      }
      param_1[0xf] = uVar9;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flStamina");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = 0;
      }
      param_1[0x10] = uVar9;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_bDucking");
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_180011220((ulonglong)uVar9 + lVar10);
      }
      *(undefined1 *)((longlong)param_1 + 0x52) = uVar6;
      lVar11 = *param_2;
      uVar9 = FUN_18038eaf0("C_BaseEntity","m_flFriction");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar11), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = uVar19;
      }
      param_1[0x15] = uVar9;
      lVar11 = *param_2;
      uVar9 = FUN_18038eaf0("C_CSPlayerPawn","m_flVelocityModifier");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar11), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = uVar19;
      }
      param_1[0x17] = uVar9;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_bUseFrictionStashedSpeed");
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_180011220((ulonglong)uVar9 + lVar10);
      }
      *(undefined1 *)(param_1 + 0x18) = uVar6;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flFrictionStashedSpeed");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = 0;
      }
      param_1[0x19] = uVar9;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flUseFrictionStashedSpeedUntilFrac");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = 0;
      }
      param_1[0x1a] = uVar9;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_nLastJumpTick");
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_180011200((ulonglong)uVar9 + lVar10);
      }
      param_1[0x21] = uVar9;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flLastJumpFrac");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = 0;
      }
      param_1[0x22] = uVar9;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flLastJumpVelocityZ");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = 0;
      }
      param_1[0x23] = uVar9;
      uVar9 = FUN_18038eaf0("CPlayer_MovementServices","m_vecLastMovementImpulses");
      if (uVar9 != 0) {
        puVar13 = (undefined8 *)FUN_1800111b0(local_168,(ulonglong)uVar9 + lVar10);
        uVar9 = *(uint *)(puVar13 + 1);
        *(undefined8 *)(param_1 + 0x24) = *puVar13;
        param_1[0x26] = uVar9;
      }
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_bDesiresDuck");
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_180011220((ulonglong)uVar9 + lVar10);
      }
      *(undefined1 *)(param_1 + 0xb) = uVar6;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flDuckSpeed");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = DAT_1808ac838;
      }
      param_1[0xc] = uVar9;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flLastDuckTime");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = 0;
      }
      param_1[0xd] = uVar9;
      lVar11 = *param_2;
      uVar9 = FUN_18038eaf0("C_BaseEntity","m_flActualGravityScale");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar11), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = uVar19;
      }
      param_1[0x11] = uVar9;
      uVar9 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flAccumulatedJumpError");
      if ((uVar9 == 0) ||
         (uVar9 = FUN_18000f3d0((ulonglong)uVar9 + lVar10), (uVar9 & 0x7f800000) == 0x7f800000)) {
        uVar9 = 0;
      }
      bVar15 = DAT_180cd1304 == '\0';
      param_1[0x12] = uVar9;
      if (bVar15) {
        FUN_1803a0b60(&local_res8);
      }
      else {
        local_res8 = DAT_181108a00;
      }
      if ((local_res8 == 0) || (DAT_180ca09b8 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_180011200((ulonglong)DAT_180ca09b8 + local_res8);
      }
      uVar1 = DAT_1808acbc0;
      param_1[0x20] = uVar9;
      *(bool *)(param_1 + 0x1f) = 0 < (int)uVar9;
      param_1[0xe] = (uint)((float)(int)uVar9 * DAT_1808ac00c);
      fVar16 = (float)FUN_1801ec8f0(&PTR_s_sv_maxspeed_1809ee910,uVar1);
      uVar9 = FUN_18038eaf0("CPlayer_MovementServices","m_flMaxspeed");
      if ((((uVar9 != 0) &&
           (fVar17 = (float)FUN_18000f3d0((ulonglong)uVar9 + lVar10),
           ((uint)fVar17 & 0x7f800000) != 0x7f800000)) && (0.0 < fVar17)) && (fVar17 <= fVar16)) {
        fVar16 = fVar17;
      }
      fVar17 = DAT_1808acba0;
      if (fVar16 <= DAT_1808acba0) {
        fVar17 = fVar16;
      }
      fVar16 = (float)FUN_1801ec340(param_2);
      if ((((uint)fVar16 & 0x7f800000) == 0x7f800000) || (fVar16 <= 0.0)) {
        fVar16 = DAT_1808acb90;
      }
      if (fVar16 <= fVar17) {
        fVar17 = fVar16;
      }
      param_1[0x16] = (uint)fVar16;
      param_1[0x13] = (uint)fVar17;
      if ((char)param_1[9] == '\0') {
        uVar19 = 0;
      }
      param_1[0x27] = 0;
      param_1[0x28] = 0;
      param_1[0x29] = uVar19;
      if ((*param_2 == 0) || (DAT_180ca0a44 == 0)) {
        cVar7 = '\0';
      }
      else {
        cVar7 = FUN_180011220(*param_2 + (ulonglong)DAT_180ca0a44);
      }
      *(bool *)(param_1 + 0x14) = cVar7 == '\x02';
      lVar10 = *param_2;
      uVar19 = FUN_18038eaf0("C_BaseEntity","m_flWaterLevel");
      if ((((uVar19 != 0) &&
           (fVar16 = (float)FUN_18000f3d0((ulonglong)uVar19 + lVar10),
           ((uint)fVar16 & 0x7f800000) != 0x7f800000)) && (0.0 < fVar16)) && ((uVar8 & 0x20) == 0))
      {
        *(undefined1 *)(param_1 + 0x14) = 0;
      }
      uVar14 = FUN_1801e45d0(param_1);
      if (((((char)param_1[0x14] != '\0') &&
           (uVar19 = *param_1 & 0x7f800000,
           uVar14 = (ulonglong)CONCAT31((int3)(uVar19 >> 8),uVar19 != 0x7f800000),
           uVar19 != 0x7f800000)) &&
          ((uVar19 = param_1[1] & 0x7f800000,
           uVar14 = (ulonglong)CONCAT31((int3)(uVar19 >> 8),uVar19 != 0x7f800000),
           uVar19 != 0x7f800000 &&
           ((uVar19 = param_1[2] & 0x7f800000,
            uVar14 = (ulonglong)CONCAT31((int3)(uVar19 >> 8),uVar19 != 0x7f800000),
            uVar19 != 0x7f800000 &&
            (uVar19 = param_1[3] & 0x7f800000,
            uVar14 = (ulonglong)CONCAT31((int3)(uVar19 >> 8),uVar19 != 0x7f800000),
            uVar19 != 0x7f800000)))))) &&
         ((uVar19 = param_1[4] & 0x7f800000,
          uVar14 = (ulonglong)CONCAT31((int3)(uVar19 >> 8),uVar19 != 0x7f800000),
          uVar19 != 0x7f800000 &&
          (uVar19 = param_1[5] & 0x7f800000,
          uVar14 = (ulonglong)CONCAT31((int3)(uVar19 >> 8),uVar19 != 0x7f800000),
          uVar19 != 0x7f800000)))) {
        return uVar14;
      }
    }
  }
  return uVar14 & 0xffffffffffffff00;
}



/* ===== 1801e7100 FUN_1801e7100 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e7100(uint *param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res8 [2];
  float local_res18 [2];
  float local_res20 [2];
  undefined8 in_stack_fffffffffffffe68;
  undefined4 uVar28;
  undefined8 in_stack_fffffffffffffe70;
  undefined1 *puVar29;
  undefined4 uVar30;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  undefined4 local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140 [2];
  float local_138 [2];
  float local_130;
  float local_12c;
  float local_128 [4];
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [4];
  float local_f4;
  char local_d0;
  
  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffe70 >> 0x20);
  fVar23 = (float)param_3;
  param_1[0x2c] = 1;
  *(undefined1 *)((longlong)param_1 + 0xb5) = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  *(char *)(param_1 + 0x2d) = (char)param_1[9];
  param_1[0x2f] = (uint)fVar23;
  fVar25 = DAT_1808ace94;
  fVar24 = DAT_1808acc90;
  dVar9 = DAT_1808ac7f0;
  dVar8 = DAT_1808ac7d8;
  dVar7 = DAT_1808ac650;
  dVar6 = DAT_1808ac4a8;
  fVar5 = DAT_1808ac34c;
  dVar4 = DAT_1808ac178;
  fVar27 = DAT_1808ac00c;
  if ((((fVar23 <= 0.0) || (DAT_1808ac00c < fVar23)) ||
      (fVar22 = (float)param_1[0x1b], fVar22 < 0.0)) ||
     ((DAT_1808ac34c <= fVar22 || (DAT_1808ac34c < fVar23 * DAT_1808acab0 + fVar22)))) {
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    return;
  }
  if (((char)param_1[0x14] == '\0') && (*(char *)((longlong)param_1 + 0x51) != '\0')) {
    return;
  }
  if ((((fVar22 == 0.0) && (fVar26 = (float)param_1[3], ((uint)fVar26 & 0x7f800000) != 0x7f800000))
      && (fVar21 = (float)param_1[4], ((uint)fVar21 & 0x7f800000) != 0x7f800000)) &&
     (fVar20 = (float)param_1[5], ((uint)fVar20 & 0x7f800000) != 0x7f800000)) {
    if (fVar20 != 0.0) {
      local_res18[0] = -16384.0;
      local_res8[0] = fVar20;
      pfVar13 = local_res18;
      if (DAT_1808ace94 <= fVar20) {
        pfVar13 = local_res8;
      }
      if (DAT_1808acc90 < fVar20) {
        pfVar13 = (float *)&DAT_1805ac918;
      }
      fVar19 = (float)((double)((longlong)
                                ((double)(*pfVar13 + DAT_1808acc90) * DAT_1808ac650 + DAT_1808ac4a8)
                               & 0xffffffff) * DAT_1808ac178 * DAT_1808ac7f0 - DAT_1808ac7d8);
      fVar20 = DAT_1808acc90;
      if (fVar19 <= DAT_1808acc90) {
        fVar20 = fVar19;
      }
      fVar19 = DAT_1808acc90;
      if (fVar20 <= DAT_1808acc90) {
        fVar19 = fVar20;
      }
      param_1[5] = (uint)fVar19;
    }
    if (fVar21 != 0.0) {
      local_res18[0] = -16384.0;
      local_res8[0] = fVar21;
      pfVar13 = local_res18;
      if (fVar25 <= fVar21) {
        pfVar13 = local_res8;
      }
      if (fVar24 < fVar21) {
        pfVar13 = (float *)&DAT_1805ac918;
      }
      fVar20 = (float)((double)((longlong)((double)(*pfVar13 + fVar24) * dVar7 + dVar6) & 0xffffffff
                               ) * dVar4 * dVar9 - dVar8);
      fVar21 = fVar24;
      if (fVar20 <= fVar24) {
        fVar21 = fVar20;
      }
      fVar20 = fVar24;
      if (fVar21 <= fVar24) {
        fVar20 = fVar21;
      }
      param_1[4] = (uint)fVar20;
    }
    if (fVar26 != 0.0) {
      local_res18[0] = -16384.0;
      local_res8[0] = fVar26;
      pfVar13 = local_res18;
      if (fVar25 <= fVar26) {
        pfVar13 = local_res8;
      }
      if (fVar24 < fVar26) {
        pfVar13 = (float *)&DAT_1805ac918;
      }
      fVar21 = (float)((double)((longlong)((double)(*pfVar13 + fVar24) * dVar7 + dVar6) & 0xffffffff
                               ) * dVar4 * dVar9 - DAT_1808ac7d8);
      fVar26 = fVar24;
      if (fVar21 <= fVar24) {
        fVar26 = fVar21;
      }
      fVar21 = fVar24;
      if (fVar26 <= fVar24) {
        fVar21 = fVar26;
      }
      param_1[3] = (uint)fVar21;
    }
  }
  if ((((char)param_1[9] == '\0') && ((char)param_1[0x1f] != '\0')) && (fVar22 == 0.0)) {
    fVar26 = 0.0;
    fVar22 = (float)param_1[0x22];
    lVar17 = (longlong)(int)param_1[0x20] - (longlong)(int)param_1[0x21];
    if ((DAT_1808acd10 < fVar22) && (0.0 < fVar22)) {
      fVar26 = fVar5 - fVar22;
      if (fVar26 < fVar5) {
        lVar17 = lVar17 + -1;
      }
      else {
        fVar26 = 0.0;
      }
    }
    fVar22 = (float)FUN_1801ec8f0(&PTR_s_sv_gravity_1809ee8c8,DAT_1808acc30);
    local_148 = -16384.0;
    local_144 = (float)param_1[0x23] -
                ((float)lVar17 * fVar27 + fVar26 * fVar27) * fVar22 * (float)param_1[0x11];
    pfVar13 = &local_148;
    if (fVar25 <= local_144) {
      pfVar13 = &local_144;
    }
    if (fVar24 < local_144) {
      pfVar13 = (float *)&DAT_1805ac918;
    }
    fVar27 = *pfVar13;
    if (fVar27 == 0.0) {
      fVar24 = 0.0;
    }
    else {
      local_140[0] = -16384.0;
      local_138[0] = fVar27;
      pfVar13 = local_140;
      if (fVar25 <= fVar27) {
        pfVar13 = local_138;
      }
      if (fVar24 < fVar27) {
        pfVar13 = (float *)&DAT_1805ac918;
      }
      fVar22 = (float)((double)((longlong)((double)(*pfVar13 + fVar24) * dVar7 + dVar6) & 0xffffffff
                               ) * dVar4 * DAT_1808ac7f0 - DAT_1808ac7d8);
      fVar25 = fVar24;
      if (fVar22 <= fVar24) {
        fVar25 = fVar22;
      }
      if (fVar25 <= fVar24) {
        fVar24 = fVar25;
      }
    }
    if ((float)param_1[5] == fVar24) {
      param_1[5] = (uint)fVar27;
    }
  }
  FUN_1801e45d0(param_1);
  if (*(char *)((longlong)param_1 + 0xb1) != '\0') {
    if (((((*param_1 & 0x7f800000) == 0x7f800000) || ((param_1[1] & 0x7f800000) == 0x7f800000)) ||
        ((param_1[2] & 0x7f800000) == 0x7f800000)) ||
       ((((param_1[3] & 0x7f800000) == 0x7f800000 || ((param_1[4] & 0x7f800000) == 0x7f800000)) ||
        (bVar18 = (param_1[5] & 0x7f800000) != 0x7f800000, !bVar18)))) {
      bVar18 = false;
    }
    if (((char)param_1[0x2c] == '\0') || (!bVar18)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
    }
    *(undefined1 *)(param_1 + 0x2c) = uVar12;
    return;
  }
  fVar27 = (float)param_1[0x13];
  if ((((*(char *)((longlong)param_2 + 0xd) != '\0') && (*(char *)(param_2 + 3) == '\0')) &&
      (*(char *)((longlong)param_1 + 0x52) == '\0')) &&
     (*(char *)((longlong)param_1 + 0x2d) == '\0')) {
    fVar25 = fVar27 * DAT_1808ac200;
    fVar22 = fVar25 + DAT_1808ac988;
    fVar24 = (float)param_1[4] * (float)param_1[4] + (float)param_1[3] * (float)param_1[3] +
             (float)param_1[5] * (float)param_1[5];
    if (fVar24 < 0.0) {
      fVar24 = (float)FUN_18051af10(fVar24);
    }
    else {
      fVar24 = SQRT(fVar24);
    }
    if (fVar24 < fVar22) {
      fVar27 = fVar25;
    }
  }
  if ((char)param_1[9] != '\0') {
    local_12c = 1.0;
    local_130 = 0.0;
    pfVar13 = &local_130;
    if (0.0 <= (float)param_1[0x17]) {
      pfVar13 = (float *)(param_1 + 0x17);
    }
    pfVar14 = &local_12c;
    if ((float)param_1[0x17] <= fVar5) {
      pfVar14 = pfVar13;
    }
    fVar27 = fVar27 * *pfVar14;
  }
  if (0.0 < (float)param_1[0x10]) {
    local_128[2] = 1.0;
    local_128[0] = 0.0;
    local_128[1] = fVar5 - (float)param_1[0x10] / DAT_1808acb08;
    pfVar13 = local_128;
    if (0.0 <= local_128[1]) {
      pfVar13 = local_128 + 1;
    }
    pfVar14 = local_128 + 2;
    if (local_128[1] <= fVar5) {
      pfVar14 = pfVar13;
    }
    fVar27 = fVar27 * *pfVar14 * *pfVar14;
    fVar24 = (float)FUN_1801ec8f0(&PTR_s_sv_staminarecoveryrate_1809ee7a8,DAT_1808acaa8);
    fVar25 = (float)param_1[0x10] - fVar24 * fVar23;
    fVar24 = 0.0;
    if (0.0 <= fVar25) {
      fVar24 = fVar25;
    }
    param_1[0x10] = (uint)fVar24;
  }
  FUN_1801e47a0(param_1);
  fVar24 = DAT_1808ac540;
  if ((((char)param_1[0x14] != '\0') || (*(char *)((longlong)param_1 + 0x51) == '\0')) &&
     ((char)param_1[0x2c] != '\0')) {
    if (((*(char *)(param_2 + 3) != *(char *)((longlong)param_1 + 0x25)) ||
        ((0.0 < (float)param_1[10] && ((float)param_1[10] < fVar5)))) &&
       ((*(char *)((longlong)param_1 + 0x51) != '\0' || ((char)param_1[9] != '\0')))) {
LAB_1801e7b60:
      *(undefined1 *)(param_1 + 0x2c) = 0;
      goto LAB_1801e7b67;
    }
    bVar18 = false;
    if (*(char *)(param_2 + 3) != '\0') {
      if ((char)param_1[0xb] == '\0') {
        fVar22 = (float)param_1[0xc] - DAT_1808ac540;
        fVar25 = 0.0;
        if (0.0 <= fVar22) {
          fVar25 = fVar22;
        }
      }
      else {
        fVar25 = (float)param_1[0xc];
      }
      if (DAT_1808ac428 <= fVar25) {
        if (*(char *)((longlong)param_1 + 0x2d) == '\0') {
          fVar25 = (float)FUN_1801ec8f0(&PTR_s_sv_timebetweenducks_1809ee868,DAT_1808ac1b0);
          bVar18 = fVar25 + (float)param_1[0xd] <= (float)param_1[0xe];
        }
        else {
          bVar18 = true;
        }
      }
    }
    if ((char)param_1[0xb] != *(char *)(param_2 + 3)) {
      *(char *)(param_1 + 0xb) = *(char *)(param_2 + 3);
      fVar25 = 0.0;
      if (0.0 <= (float)param_1[0xc] - fVar24) {
        fVar25 = (float)param_1[0xc] - fVar24;
      }
      param_1[0xc] = (uint)fVar25;
    }
    if (bVar18) {
      if (*(char *)((longlong)param_1 + 0x25) == '\0') {
        fVar24 = (float)param_1[2] + DAT_1808ac844;
        param_1[0xd] = param_1[0xe];
        puVar29 = local_f8;
        *(undefined1 *)((longlong)param_1 + 0x25) = 1;
        pfVar13 = &local_168;
        *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
        param_1[2] = (uint)fVar24;
        param_1[10] = 0x3f800000;
        local_178 = -16.0;
        local_174 = -16.0;
        local_170 = 0.0;
        local_168 = 16.0;
        local_164 = 16.0;
        local_160 = 0x42580000;
        local_d0 = '\0';
        cVar11 = FUN_1801e4270(param_1,param_1,param_1,&local_178,pfVar13,puVar29);
        uVar28 = (undefined4)((ulonglong)pfVar13 >> 0x20);
        uVar30 = (undefined4)((ulonglong)puVar29 >> 0x20);
        if (cVar11 == '\0') {
          *(undefined1 *)(param_1 + 0x14) = 0;
          *(undefined1 *)(param_1 + 0x2c) = 0;
          FUN_1801e47a0(param_1);
        }
        else {
          if ((local_d0 != '\0') &&
             (((*(char *)((longlong)param_1 + 0x51) == '\0' || ((char)param_1[0x14] != '\0')) &&
              ((char)param_1[0x2c] != '\0')))) {
            uVar1 = *(undefined8 *)param_1;
            iVar16 = 0;
            uVar2 = param_1[2];
            do {
              puVar29 = local_f8;
              pfVar13 = &local_168;
              param_1[2] = (uint)((float)param_1[2] + fVar5);
              cVar11 = FUN_1801e4270(param_1,param_1,param_1,&local_178,pfVar13,puVar29);
              uVar28 = (undefined4)((ulonglong)pfVar13 >> 0x20);
              uVar30 = (undefined4)((ulonglong)puVar29 >> 0x20);
              if (cVar11 == '\0') {
                *(undefined1 *)(param_1 + 0x14) = 0;
                *(undefined1 *)(param_1 + 0x2c) = 0;
              }
              else if (local_d0 == '\0') goto LAB_1801e7ab3;
            } while (((char)param_1[0x2c] != '\0') && (iVar16 = iVar16 + 1, iVar16 < 0x24));
            *(undefined8 *)param_1 = uVar1;
            param_1[2] = uVar2;
          }
LAB_1801e7ab3:
          FUN_1801e47a0(param_1);
        }
      }
    }
    else if ((*(char *)(param_2 + 3) == '\0') &&
            ((*(char *)((longlong)param_1 + 0x25) != '\0' || (0.0 < (float)param_1[10])))) {
      puVar29 = local_f8;
      fStack_100 = (float)param_1[2] + DAT_1808ace18;
      local_108 = *(undefined8 *)param_1;
      pfVar13 = &local_168;
      local_178 = -16.0;
      local_174 = -16.0;
      local_170 = 0.0;
      local_168 = 16.0;
      local_164 = 16.0;
      local_160 = 0x42900000;
      local_f4 = 1.0;
      local_d0 = '\0';
      cVar11 = FUN_1801e4270(param_1,param_1,&local_108,&local_178,pfVar13,puVar29);
      uVar28 = (undefined4)((ulonglong)pfVar13 >> 0x20);
      uVar30 = (undefined4)((ulonglong)puVar29 >> 0x20);
      if (cVar11 == '\0') {
        *(undefined1 *)(param_1 + 0x14) = 0;
        goto LAB_1801e7b60;
      }
      if ((local_f4 == fVar5) && (local_d0 == '\0')) {
        fVar24 = (float)param_1[2] - DAT_1808ac844;
        *(undefined1 *)((longlong)param_1 + 0x25) = 0;
        *(undefined1 *)((longlong)param_1 + 0x2d) = 0;
        param_1[10] = 0;
        param_1[2] = (uint)fVar24;
        FUN_1801e47a0(param_1);
      }
      else {
        param_1[10] = 0x3f800000;
        *(undefined1 *)((longlong)param_1 + 0x25) = 1;
        *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
      }
    }
    uVar2 = DAT_1808adec0;
    fVar24 = (float)param_1[0xc];
    fVar25 = fVar23 * DAT_1808ac658;
    if (DAT_1808ac838 - fVar24 <= fVar25) {
      if ((float)((uint)fVar25 ^ DAT_1808adec0) <= DAT_1808ac838 - fVar24) {
        fVar24 = DAT_1808ac838;
      }
      else {
        fVar24 = fVar24 - fVar25;
      }
    }
    else {
      fVar24 = fVar24 + fVar25;
    }
    param_1[0xc] = (uint)fVar24;
    fVar24 = (float)param_1[10];
    param_1[0xe] = (uint)(fVar23 + (float)param_1[0xe]);
    if ((fVar24 <= 0.0) || (fVar5 <= fVar24)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x52) = uVar12;
    fVar25 = *param_2 * DAT_1808ac010;
    fVar27 = ((fVar24 * DAT_1808ac16c + fVar5) - fVar24) * fVar27;
    fVar24 = (float)FUN_180517790(fVar25);
    local_178 = (float)FUN_180517200(fVar25);
    if ((((uint)fVar24 & 0x7f800000) == 0x7f800000) ||
       (bVar18 = ((uint)local_178 & 0x7f800000) != 0x7f800000, !bVar18)) {
      bVar18 = false;
    }
    uVar3 = param_1[9];
    local_164 = (float)((uint)local_178 ^ uVar2);
    local_170 = 0.0;
    local_160 = 0;
    local_174 = fVar24;
    local_168 = fVar24;
    if ((char)uVar3 == '\0') {
      FUN_1801e40f0(&local_178);
      FUN_1801e40f0(&local_168);
    }
    local_res20[0] = 1.0;
    local_res18[0] = -1.0;
    local_res8[0] = param_2[1];
    if (((uint)param_2[1] & 0x7f800000) == 0x7f800000) {
      local_res8[0] = fVar5;
    }
    pfVar13 = local_res18;
    if (DAT_1808acda0 <= local_res8[0]) {
      pfVar13 = local_res8;
    }
    pfVar14 = local_res20;
    if (local_res8[0] <= fVar5) {
      pfVar14 = pfVar13;
    }
    local_res20[0] = 1.0;
    local_res18[0] = -1.0;
    local_res8[0] = param_2[2];
    if (((uint)param_2[2] & 0x7f800000) == 0x7f800000) {
      local_res8[0] = fVar5;
    }
    local_110 = 0;
    local_150 = 0.0;
    pfVar13 = local_res18;
    if (DAT_1808acda0 <= local_res8[0]) {
      pfVar13 = local_res8;
    }
    pfVar15 = local_res20;
    if (local_res8[0] <= fVar5) {
      pfVar15 = pfVar13;
    }
    local_154 = *pfVar14 * local_174 * fVar27 - *pfVar15 * local_164 * fVar27;
    local_158 = *pfVar14 * local_178 * fVar27 - *pfVar15 * local_168 * fVar27;
    local_118 = local_158;
    local_114 = local_154;
    fVar25 = (float)FUN_1801e40f0(&local_158);
    fVar24 = fVar25;
    if ((fVar25 != 0.0) && (fVar24 = fVar27, fVar25 <= fVar27)) {
      fVar24 = fVar25;
    }
    if ((!bVar18) &&
       (*(undefined1 *)(param_1 + 0x2c) = 0, *(char *)((longlong)param_1 + 0x51) != '\0'))
    goto LAB_1801e7b67;
    uVar10 = DAT_1808acc30;
    if ((char)uVar3 != '\0') {
      FUN_1801e5be0(param_1,param_2,&local_158,&local_118,CONCAT44(uVar28,fVar24),
                    CONCAT44(uVar30,fVar27),fVar23);
      goto LAB_1801e7821;
    }
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    fVar22 = 0.0;
    param_1[0x26] = 0;
    fVar25 = 0.0;
    local_174 = 0.0;
    local_178 = 0.0;
    fVar26 = (float)FUN_1801ec8f0(&PTR_s_sv_gravity_1809ee8c8,uVar10);
    fVar27 = DAT_1808ac1f4;
    bVar18 = false;
    fVar26 = fVar26 * (float)param_1[0x11];
    if (*(char *)((longlong)param_1 + 0x26) != '\0') {
      fVar21 = (float)param_1[5];
      if (0.0 < fVar21) {
        if (((0.0 < (fVar23 * (float)param_1[8] - fVar26 * fVar23) + fVar21) ||
            (fVar20 = fVar21 / (fVar26 * fVar23), fVar20 == 0.0)) || (fVar20 == fVar5)) {
          if (fVar21 <= 0.0) goto LAB_1801e7f72;
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x26) = 0;
        }
      }
      else {
LAB_1801e7f72:
        *(undefined1 *)((longlong)param_1 + 0x26) = 0;
        bVar18 = fVar26 * fVar27 * _DAT_1808acd28 < fVar21;
      }
    }
    if (fVar24 <= 0.0) {
LAB_1801e80b5:
      fVar24 = 0.0;
    }
    else {
      fVar21 = (float)param_1[0xf];
      fVar19 = (float)FUN_1801ec8f0(&PTR_s_sv_air_max_wishspeed_1809ee838,DAT_1808ac9e4);
      fVar20 = fVar24;
      if (fVar19 <= fVar24) {
        fVar20 = fVar19;
      }
      fVar20 = fVar20 - (local_154 * (float)param_1[4] + local_158 * (float)param_1[3] +
                        local_150 * (float)param_1[5]);
      if (fVar20 <= 0.0) goto LAB_1801e80b5;
      fVar19 = (float)FUN_1801ec8f0(&PTR_s_sv_airaccelerate_1809ee8e0,DAT_1808ac8b0);
      fVar24 = fVar19 * fVar24 * fVar21 * fVar23;
      fVar21 = fVar24 * fVar27;
      if (fVar21 <= fVar20) {
        if (fVar20 < fVar24) {
          fVar20 = fVar20 - fVar21;
        }
        else {
          fVar20 = fVar21;
        }
        fVar24 = fVar20 * local_158 + 0.0;
        fVar22 = fVar20 * local_154 + 0.0;
        fVar25 = fVar20 * local_150 + 0.0;
        local_178 = fVar24;
        local_174 = fVar22;
      }
      else {
        fVar24 = 0.0;
        fVar21 = fVar20;
      }
      param_1[3] = (uint)(fVar21 * local_158 + (float)param_1[3]);
      param_1[4] = (uint)(fVar21 * local_154 + (float)param_1[4]);
      param_1[5] = (uint)(fVar21 * local_150 + (float)param_1[5]);
    }
    fVar21 = (float)param_1[8];
    param_1[8] = 0;
    param_1[5] = (uint)(((float)param_1[5] - fVar26 * fVar23) + fVar21 * fVar23);
    FUN_1801e45d0(param_1);
    fVar20 = (float)*(undefined8 *)(param_1 + 6);
    fStack_100 = (float)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20);
    local_108 = CONCAT44(fStack_100,fStack_100);
    fVar27 = (fVar21 - fVar26) * fVar23 * fVar27;
    fVar26 = (float)param_1[5] - fVar27;
    fVar25 = fVar25 + fVar27;
    fVar27 = (float)*(undefined8 *)(param_1 + 3) + fVar20;
    fVar21 = (float)((ulonglong)*(undefined8 *)(param_1 + 3) >> 0x20) + fStack_100;
    param_1[5] = (uint)fVar26;
    *(ulonglong *)(param_1 + 3) = CONCAT44(fVar21,fVar27);
    local_170 = fVar25;
    fStack_fc = fStack_100;
    if ((!bVar18) || (fVar19 = fVar21 * fVar21 + fVar27 * fVar27, fVar19 <= 0.0)) {
      FUN_1801e4b20(param_1,&local_178,param_3);
      fVar26 = (float)param_1[5];
      fVar27 = (float)param_1[3];
      fVar21 = (float)param_1[4];
      fVar25 = local_170;
      fVar24 = local_178;
      fVar22 = local_174;
    }
    else {
      if (fVar19 < 0.0) {
        fVar19 = (float)FUN_18051af10(fVar19);
      }
      else {
        fVar19 = SQRT(fVar19);
      }
      if (DAT_1808ac0b0 <= fVar19 * fVar23) {
        fVar19 = fVar27;
        fVar23 = fVar21;
      }
      else {
        fVar19 = (DAT_1808ac0b0 / fVar23) * local_158;
        fVar23 = (DAT_1808ac0b0 / fVar23) * local_154;
      }
      param_1[3] = (uint)fVar19;
      param_1[4] = (uint)fVar23;
      param_1[5] = 0;
      FUN_1801e4b20(param_1,&local_178,param_3);
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = (uint)fVar26;
      FUN_1801e4b20(param_1,&local_178,param_3);
      *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
    }
    param_1[5] = (uint)(fVar25 + fVar26);
    param_1[4] = (uint)((fVar21 - (float)local_108) + fVar22);
    param_1[3] = (uint)((fVar27 - fVar20) + fVar24);
    FUN_1801e47a0(param_1);
    FUN_1801e45d0(param_1);
  }
LAB_1801e7821:
  if ((((*param_1 & 0x7f800000) == 0x7f800000) || ((param_1[1] & 0x7f800000) == 0x7f800000)) ||
     (((param_1[2] & 0x7f800000) == 0x7f800000 ||
      ((((param_1[3] & 0x7f800000) == 0x7f800000 || ((param_1[4] & 0x7f800000) == 0x7f800000)) ||
       (bVar18 = (param_1[5] & 0x7f800000) != 0x7f800000, !bVar18)))))) {
    bVar18 = false;
  }
  if (((char)param_1[0x2c] == '\0') || (!bVar18)) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
LAB_1801e7b67:
  fVar27 = (float)param_1[0x2f] * DAT_1808acab0 + (float)param_1[0x1b];
  param_1[0x1b] = (uint)fVar27;
  if (fVar5 <= fVar27) {
    param_1[0x1b] = 0;
    if ((char)param_1[0x1c] != '\0') {
      param_1[0x1d] = param_1[0x1d] + 1;
    }
    if ((char)param_1[0x1f] != '\0') {
      param_1[0x20] = param_1[0x20] + 1;
    }
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + 0x61);
    *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  }
  return;
}



/* ===== 1801e8280 FUN_1801e8280 ===== */

int FUN_1801e8280(undefined8 *param_1,undefined8 *param_2,int param_3,char *param_4,int param_5,
                 longlong param_6,int *param_7)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float *pfVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 local_108;
  int iStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined2 uStack_fa;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  piVar4 = (int *)*param_1;
  iVar23 = piVar4[1];
  if (0x28 < iVar23) {
    iVar23 = 0x28;
  }
  iVar24 = 10;
  if (*piVar4 != 0) {
    iVar24 = 2;
  }
  *param_7 = param_3;
  fVar14 = DAT_1808ace5c;
  fVar13 = DAT_1808ac838;
  fVar12 = DAT_1808ac710;
  fVar11 = DAT_1808ac30c;
  fVar10 = DAT_1808ac1f4;
  fVar9 = DAT_1808ac140;
  fVar8 = DAT_1808ac064;
  fVar7 = DAT_1808ac040;
  uVar6 = DAT_1808ac00c;
  if (param_3 < iVar24 + iVar23) {
    pfVar1 = (float *)(param_2 + 1);
    while( true ) {
      lVar22 = (longlong)param_2 + 0xc;
      if (param_6 != 0) {
        lVar21 = 7;
        puVar15 = (undefined8 *)((longlong)param_3 * 0x390 + param_6);
        puVar16 = param_2;
        do {
          puVar20 = puVar16;
          puVar17 = puVar15;
          uVar5 = puVar20[1];
          *puVar17 = *puVar20;
          puVar17[1] = uVar5;
          uVar5 = puVar20[3];
          puVar17[2] = puVar20[2];
          puVar17[3] = uVar5;
          uVar5 = puVar20[5];
          puVar17[4] = puVar20[4];
          puVar17[5] = uVar5;
          uVar5 = puVar20[7];
          puVar17[6] = puVar20[6];
          puVar17[7] = uVar5;
          uVar5 = puVar20[9];
          puVar17[8] = puVar20[8];
          puVar17[9] = uVar5;
          uVar5 = puVar20[0xb];
          puVar17[10] = puVar20[10];
          puVar17[0xb] = uVar5;
          uVar5 = puVar20[0xd];
          puVar17[0xc] = puVar20[0xc];
          puVar17[0xd] = uVar5;
          uVar5 = puVar20[0xf];
          puVar17[0xe] = puVar20[0xe];
          puVar17[0xf] = uVar5;
          lVar21 = lVar21 + -1;
          puVar15 = puVar17 + 0x10;
          puVar16 = puVar20 + 0x10;
        } while (lVar21 != 0);
        uVar5 = puVar20[0x11];
        puVar17[0x10] = puVar20[0x10];
        puVar17[0x11] = uVar5;
      }
      if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0xc)) break;
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      if ((param_5 < 0) || (param_3 < param_5)) {
        uStack_fc = *(undefined1 *)((longlong)piVar4 + 0x1d);
      }
      else {
        uStack_fc = *(char *)((longlong)piVar4 + 0x1d) == '\0';
      }
      uStack_fb = (undefined1)piVar4[7];
      local_108 = 0;
      if (param_4[0x10] == '\0') {
        if (*param_4 == '\0') {
          iVar2 = piVar4[4];
          iVar19 = piVar4[5];
          iStack_100 = piVar4[6];
        }
        else {
          iVar2 = *(int *)(param_4 + 4);
          iVar19 = *(int *)(param_4 + 8);
          iStack_100 = *(int *)(param_4 + 0xc);
        }
        local_108 = CONCAT44(iVar19,iVar2);
      }
      else {
        uVar25 = FUN_1801e8c60(param_2,0,lVar22);
        FUN_1801e8cf0(lVar22,*(undefined4 *)(param_4 + 0x14),uVar25,
                      *(undefined4 *)((longlong)param_2 + 0x3c),&local_108,(longlong)&local_108 + 4)
        ;
        iStack_100 = 0;
      }
      uStack_f0 = CONCAT26(uStack_fa,CONCAT15(uStack_fb,CONCAT14(uStack_fc,iStack_100)));
      local_f8 = local_108;
      FUN_1801e7100(param_2,&local_f8,uVar6);
      iVar2 = param_3 + 1;
      *param_7 = iVar2;
      if (*(char *)(param_2 + 0x16) == '\0') {
        return -1;
      }
      if (*(char *)(param_2 + 10) == '\0') {
        return -1;
      }
      if (*piVar4 == 0) {
        if (0x34 < iVar2) {
          return -1;
        }
        if (*(char *)((longlong)param_2 + 0x24) != '\0') {
          return -1;
        }
        lVar22 = (longlong)iVar2;
        *(float *)((longlong)param_2 + lVar22 * 4 + 0x2a8) = *pfVar1;
        *(undefined4 *)((longlong)param_2 + lVar22 * 4 + 0x1d4) =
             *(undefined4 *)((longlong)param_2 + 0x14);
        if (*(char *)(param_2 + 0x18) == '\0') {
          uVar25 = 0;
        }
        else {
          uVar25 = *(undefined4 *)(param_2 + 0x19);
        }
        *(undefined4 *)((longlong)param_2 + lVar22 * 4 + 0x100) = uVar25;
        if (*(char *)(param_2 + 0x18) != '\0') {
          if (*(int *)(param_2 + 0x1d) < 0) {
            *(int *)(param_2 + 0x1d) = iVar2;
            *(float *)((longlong)param_2 + 0xfc) = *pfVar1;
            *(float *)(param_2 + 0x1f) = *pfVar1;
          }
          *(int *)(param_2 + 0x1e) = *(int *)(param_2 + 0x1e) + 1;
          *(int *)((longlong)param_2 + 0xec) = iVar2;
          *(float *)((longlong)param_2 + 0xf4) =
               *(float *)((longlong)param_2 + 0xf4) + *(float *)(param_2 + 0x19);
        }
        iVar3 = *(int *)(param_2 + 0x1d);
        iVar19 = iVar23;
        if (iVar3 < 0) goto LAB_1801e879e;
        fVar27 = *pfVar1;
        pfVar18 = (float *)(param_2 + 0x1f);
        if (fVar27 < *(float *)(param_2 + 0x1f)) {
          pfVar18 = pfVar1;
        }
        fVar26 = *pfVar18;
        *(float *)(param_2 + 0x1f) = fVar26;
        pfVar18 = (float *)((longlong)param_2 + 0xfc);
        if (*(float *)((longlong)param_2 + 0xfc) <= fVar27 &&
            fVar27 != *(float *)((longlong)param_2 + 0xfc)) {
          pfVar18 = pfVar1;
        }
        fVar27 = *pfVar18;
        *(float *)((longlong)param_2 + 0xfc) = fVar27;
        if (1 < iVar2 - *(int *)((longlong)param_2 + 0xec)) {
          return -1;
        }
        if (fVar12 < fVar27 - fVar26) {
          return -1;
        }
        if (((7 < *(int *)(param_2 + 0x1e)) && (7 < iVar2 - iVar3)) && (7 < iVar2)) {
          fVar27 = *(float *)(param_1 + 2);
          fVar26 = (float)(iVar2 - iVar3) * fVar27;
          if ((0.0 < fVar26) &&
             (fVar26 = fVar26 * fVar11,
             fVar26 < *(float *)((longlong)param_2 + 0xf4) ||
             fVar26 == *(float *)((longlong)param_2 + 0xf4))) {
            iVar19 = param_3 + -6;
            fVar26 = 0.0;
            if (iVar19 <= iVar2) {
              do {
                lVar21 = (longlong)iVar19;
                iVar19 = iVar19 + 4;
                fVar26 = fVar26 + *(float *)((longlong)param_2 + lVar21 * 4 + 0x100) +
                         *(float *)((longlong)param_2 + lVar21 * 4 + 0x104) +
                         *(float *)((longlong)param_2 + lVar21 * 4 + 0x108) +
                         *(float *)((longlong)param_2 + lVar21 * 4 + 0x10c);
              } while (iVar19 <= param_3 + -2);
              for (; iVar19 <= iVar2; iVar19 = iVar19 + 1) {
                fVar26 = fVar26 + *(float *)((longlong)param_2 + (longlong)iVar19 * 4 + 0x100);
              }
            }
            if (((fVar27 * fVar13 * fVar11 <= fVar26) &&
                (fVar27 = *(float *)((longlong)param_2 + (longlong)param_3 * 4 + 0x1b8) -
                          fVar27 * fVar9,
                pfVar18 = (float *)((longlong)param_2 + lVar22 * 4 + 0x1d4),
                fVar27 < *pfVar18 || fVar27 == *pfVar18)) &&
               (*(float *)((longlong)param_2 + (longlong)param_3 * 4 + 0x28c) - fVar9 <=
                *(float *)((longlong)param_2 + lVar22 * 4 + 0x2a8))) {
              return iVar3 + -1;
            }
          }
        }
      }
      else {
        if (*(char *)((longlong)param_2 + 0x37c) != '\0') {
          if ((*(float *)(param_2 + 0x70) <= fVar14 && fVar14 != *(float *)(param_2 + 0x70)) &&
             (*(char *)((longlong)param_2 + 0x24) == '\0')) {
            fVar27 = fVar7 - *(float *)(param_1 + 2) * fVar10;
            if ((fVar27 - fVar8 < *(float *)((longlong)param_2 + 0x14)) &&
               (*(float *)((longlong)param_2 + 0x14) < fVar27 + fVar8)) {
              *(int *)(param_2 + 0x71) = iVar2;
              return param_3;
            }
          }
          if ((*(char *)((longlong)param_2 + 900) != '\0') &&
             (*(char *)((longlong)param_2 + 0x24) != '\0')) {
            return -1;
          }
        }
        *(undefined1 *)((longlong)param_2 + 0x37c) = 1;
        *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x14);
        *(undefined1 *)((longlong)param_2 + 900) = *(undefined1 *)((longlong)param_2 + 0x24);
        iVar19 = iVar23 + 1;
LAB_1801e879e:
        if (iVar19 < iVar2) {
          return -1;
        }
      }
      param_3 = iVar2;
      if (iVar24 + iVar23 <= iVar2) {
        return -1;
      }
    }
  }
  return -1;
}



/* ===== 1801e8810 FUN_1801e8810 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801e8810(undefined8 param_1,float *param_2,undefined8 param_3,undefined4 param_4,
                       float *param_5)

{
  float fVar1;
  ulonglong uVar2;
  float *pfVar3;
  undefined1 auStack_438 [32];
  undefined4 local_418;
  undefined8 local_410;
  float *local_408;
  float local_3f8 [4];
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [212];
  undefined1 local_214 [212];
  undefined1 local_140 [212];
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_438;
  pfVar3 = local_3f8;
  local_3f8[0] = -0.001;
  local_3f8[1] = 0.001;
  do {
    fVar1 = *pfVar3;
    local_300 = 0xffffffffffffffff;
    local_2f0 = 0;
    local_2f8 = 0;
    FUN_180540170(local_2e8,0,0xd4);
    FUN_180540170(local_214,0,0xd4);
    FUN_180540170(local_140,0,0xd4);
    local_3d8 = *(undefined8 *)(param_2 + 4);
    uStack_3d0 = *(undefined8 *)(param_2 + 6);
    local_3c8 = *(undefined8 *)(param_2 + 8);
    uStack_3c0 = *(undefined8 *)(param_2 + 10);
    local_5c = 0;
    fStack_3dc = param_2[3];
    local_308 = *(undefined8 *)(param_2 + 0x38);
    local_408 = local_3f8 + 2;
    local_3b8 = *(undefined8 *)(param_2 + 0xc);
    uStack_3b0 = *(undefined8 *)(param_2 + 0xe);
    local_410 = 0;
    local_3a8 = *(undefined8 *)(param_2 + 0x10);
    uStack_3a0 = *(undefined8 *)(param_2 + 0x12);
    local_6c = 0;
    local_68 = 0;
    local_398 = *(undefined8 *)(param_2 + 0x14);
    uStack_390 = *(undefined8 *)(param_2 + 0x16);
    local_64 = 0;
    local_60 = 0xffffffff;
    local_388 = *(undefined8 *)(param_2 + 0x18);
    uStack_380 = *(undefined8 *)(param_2 + 0x1a);
    local_378 = *(undefined8 *)(param_2 + 0x1c);
    uStack_370 = *(undefined8 *)(param_2 + 0x1e);
    local_358 = *(undefined8 *)(param_2 + 0x24);
    uStack_350 = *(undefined8 *)(param_2 + 0x26);
    local_368 = *(undefined8 *)(param_2 + 0x20);
    uStack_360 = *(undefined8 *)(param_2 + 0x22);
    local_338 = *(undefined8 *)(param_2 + 0x2c);
    uStack_330 = *(undefined8 *)(param_2 + 0x2e);
    local_348 = *(undefined8 *)(param_2 + 0x28);
    uStack_340 = *(undefined8 *)(param_2 + 0x2a);
    local_318 = *(undefined8 *)(param_2 + 0x34);
    uStack_310 = *(undefined8 *)(param_2 + 0x36);
    local_328 = *(undefined8 *)(param_2 + 0x30);
    uStack_320 = *(undefined8 *)(param_2 + 0x32);
    local_3e8 = *param_2 + fVar1 * *param_5;
    fStack_3e4 = param_2[1] + fVar1 * param_5[1];
    fStack_3e0 = param_2[2] + fVar1 * param_5[2];
    local_418 = param_4;
    uVar2 = FUN_1801e8280(param_1,&local_3e8,0,param_3);
    if ((int)uVar2 < 0) {
      return uVar2 & 0xffffffffffffff00;
    }
    pfVar3 = pfVar3 + 1;
  } while (pfVar3 != local_3f8 + 2);
  return CONCAT71((int7)((ulonglong)(local_3f8 + 2) >> 8),1);
}



/* ===== 1801e8a30 FUN_1801e8a30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e8a30(longlong param_1,int *param_2,undefined1 param_3,undefined1 (*param_4) [12],
                  float *param_5,float param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [12];
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  iVar12 = *param_2;
  if (0 < iVar12) {
    uVar11 = 0;
    do {
      lVar10 = (ulonglong)uVar11 * 0x1c;
      fVar2 = *(float *)(lVar10 + 0xc + param_1);
      fVar3 = *(float *)(lVar10 + 0x10 + param_1);
      fVar4 = *(float *)(lVar10 + 0x14 + param_1);
      if ((DAT_1808ac330 < param_5[1] * fVar3 + *param_5 * fVar2 + param_5[2] * fVar4) &&
         ((float)((uint)((*(float *)(*param_4 + 4) - *(float *)(lVar10 + 4 + param_1)) * fVar3 +
                         (*(float *)*param_4 - *(float *)(lVar10 + param_1)) * fVar2 +
                        (*(float *)(*param_4 + 8) - *(float *)(lVar10 + 8 + param_1)) * fVar4) &
                 _DAT_1808ade90) < DAT_1808ac140)) {
        if (*(float *)(lVar10 + 0x18 + param_1) <= param_6) {
          return;
        }
        *(undefined8 *)(lVar10 + param_1) = *(undefined8 *)*param_4;
        uVar5 = *(undefined4 *)(*param_4 + 8);
        *(float *)(lVar10 + 0x18 + param_1) = param_6;
        *(undefined4 *)(lVar10 + 8 + param_1) = uVar5;
        return;
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar12);
  }
  if (iVar12 < 4) {
    uVar5 = *(undefined4 *)(*param_4 + 8);
    uVar7 = *(undefined4 *)*param_4;
    uVar8 = *(undefined4 *)(*param_4 + 4);
    lVar10 = (longlong)iVar12 * 0x1c;
    uStack_7c = (undefined4)*(undefined8 *)param_5;
    uStack_78 = (undefined4)((ulonglong)*(undefined8 *)param_5 >> 0x20);
    iVar12 = iVar12 + 1;
    fVar2 = param_5[2];
    *param_2 = iVar12;
    puVar1 = (undefined4 *)(lVar10 + param_1);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar5;
    puVar1[3] = uStack_7c;
    *(ulonglong *)(lVar10 + 0x10 + param_1) = CONCAT44(fVar2,uStack_78);
    *(float *)(lVar10 + 0x18 + param_1) = param_6;
  }
  else {
    if (*(float *)(param_1 + 0x6c) <= param_6) {
      return;
    }
    auVar9 = *param_4;
    uStack_7c = (undefined4)*(undefined8 *)param_5;
    uStack_78 = (undefined4)((ulonglong)*(undefined8 *)param_5 >> 0x20);
    fVar2 = param_5[2];
    *(float *)(param_1 + 0x6c) = param_6;
    auVar6._12_4_ = uStack_7c;
    auVar6._0_12_ = auVar9;
    *(undefined1 (*) [16])(param_1 + 0x54) = auVar6;
    *(ulonglong *)(param_1 + 100) = CONCAT44(fVar2,uStack_78);
  }
  FUN_1801ea3a0(param_1,(longlong)iVar12 * 0x1c + param_1,(longlong)iVar12,param_3);
  return;
}



/* ===== 1801e8c60 FUN_1801e8c60 ===== */

float FUN_1801e8c60(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float local_res8 [8];
  
  if (*(float *)(param_1 + 0x40) <= 0.0) {
    fVar3 = DAT_1808ac34c;
  }
  else {
    local_res8[4] = 1.0;
    local_res8[0] = 0.0;
    local_res8[2] = DAT_1808ac34c - *(float *)(param_1 + 0x40) / DAT_1808acb08;
    pfVar2 = local_res8;
    if (0.0 <= local_res8[2]) {
      pfVar2 = local_res8 + 2;
    }
    pfVar1 = local_res8 + 4;
    if (local_res8[2] <= DAT_1808ac34c) {
      pfVar1 = pfVar2;
    }
    fVar3 = *pfVar1 * *pfVar1;
  }
  return ((*(float *)(param_1 + 0x28) * DAT_1808ac16c + DAT_1808ac34c) - *(float *)(param_1 + 0x28))
         * fVar3 * *(float *)(param_1 + 0x4c);
}



/* ===== 1801e8cf0 FUN_1801e8cf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e8cf0(float *param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  undefined8 param_6)

{
  bool bVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res10 [2];
  
  fVar9 = param_1[1] * param_1[1] + *param_1 * *param_1;
  if (fVar9 < 0.0) {
    fVar9 = (float)FUN_18051af10(fVar9);
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  fVar4 = DAT_1808ac34c;
  pfVar2 = (float *)CONCAT44(param_5._4_4_,(float)param_5);
  puVar3 = (undefined4 *)CONCAT44(param_6._4_4_,(float)param_6);
  bVar1 = fVar9 <= DAT_1808ac34c;
  *pfVar2 = param_2;
  *puVar3 = 0;
  if (bVar1) {
    return;
  }
  fVar7 = (float)FUN_180516b00(param_1[1],*param_1);
  fVar11 = 0.0;
  fVar7 = fVar7 * DAT_1808aca94;
  param_2 = param_2 - fVar7;
  if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = (float)FUN_180516750(param_2,DAT_1808acbd0);
  }
  if ((float)((uint)fVar12 & _DAT_1808ade90) <= fVar4) {
    return;
  }
  if (DAT_1809ee948 == 0) {
    if (DAT_1809ee950 == '\0') {
      DAT_1809ee948 = FUN_180264b70(PTR_s_sv_air_max_wishspeed_1809ee940);
      DAT_1809ee950 = DAT_1809ee948 == 0;
      if (DAT_1809ee948 != 0) goto LAB_1801e8e39;
    }
LAB_1801e8e66:
    fVar8 = DAT_1808ac9e4;
  }
  else {
LAB_1801e8e39:
    local_res10[0] = (float)FUN_180264d70(DAT_1809ee948);
    fVar8 = local_res10[0];
    if (((uint)local_res10[0] & 0x7f800000) == 0x7f800000) goto LAB_1801e8e66;
  }
  fVar10 = param_3;
  if (fVar8 <= param_3) {
    fVar10 = fVar8;
  }
  if (DAT_1809ee960 == 0) {
    if (DAT_1809ee968 == '\0') {
      DAT_1809ee960 = FUN_180264b70(PTR_s_sv_airaccelerate_1809ee958);
      DAT_1809ee968 = DAT_1809ee960 == 0;
      if (DAT_1809ee960 != 0) goto LAB_1801e8eab;
    }
  }
  else {
LAB_1801e8eab:
    local_res10[0] = (float)FUN_180264d70(DAT_1809ee960);
    fVar8 = local_res10[0];
    if (((uint)local_res10[0] & 0x7f800000) != 0x7f800000) goto LAB_1801e8ee0;
  }
  fVar8 = DAT_1808ac8b0;
LAB_1801e8ee0:
  param_4 = param_3 * DAT_1808ac00c * fVar8 * param_4;
  if (fVar10 <= param_4) {
    fVar9 = DAT_1808acaf4;
  }
  else {
    param_6._0_4_ = 1.0;
    local_res10[0] = -1.0;
    param_5._0_4_ = (fVar10 - param_4) / fVar9;
    pfVar6 = local_res10;
    if (DAT_1808acda0 <= (float)param_5) {
      pfVar6 = (float *)&param_5;
    }
    pfVar5 = (float *)&param_6;
    if ((float)param_5 <= fVar4) {
      pfVar5 = pfVar6;
    }
    fVar9 = (float)FUN_18053eb30(*pfVar5);
    fVar9 = fVar9 * DAT_1808aca94;
  }
  if (fVar12 < 0.0) {
    fVar9 = (float)((uint)fVar9 ^ DAT_1808adec0);
  }
  fVar9 = fVar9 + fVar7;
  if (((uint)fVar9 & 0x7f800000) != 0x7f800000) {
    fVar11 = (float)FUN_180516750(fVar9,DAT_1808acbd0);
  }
  *pfVar2 = fVar11;
  *puVar3 = 0x3f800000;
  return;
}



/* ===== 1801e8ff0 FUN_1801e8ff0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1801e8ff0(float *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined4 local_res20 [2];
  float local_178;
  float fStack_174;
  float local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  float local_130;
  float local_128 [2];
  undefined8 local_120;
  float local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  
  local_res20[0] = 0;
  local_100 = 0xc1800000;
  local_fc = 0xc1800000;
  local_f8 = 0;
  if (*(char *)((longlong)param_1 + 0x25) == '\0') {
    local_108 = DAT_1808acad0;
  }
  else {
    local_108 = DAT_1808aca88;
  }
  fVar16 = param_1[3];
  fVar17 = param_1[4];
  local_110 = 0x41800000;
  local_10c = 0x41800000;
  fVar10 = fVar17 * fVar17 + fVar16 * fVar16;
  if (fVar10 < 0.0) {
    fVar10 = (float)FUN_18051af10(fVar10);
  }
  else {
    fVar10 = SQRT(fVar10);
  }
  fVar4 = DAT_1808ac34c;
  if (fVar10 <= DAT_1808ac34c) {
    fVar17 = 0.0;
    fVar16 = DAT_1808ac34c;
  }
  else {
    fVar17 = fVar17 / fVar10;
    fVar16 = fVar16 / fVar10;
  }
  fVar14 = (float)((uint)fVar17 ^ DAT_1808adec0);
  fVar9 = (float)FUN_1801ec8f0(&PTR_s_sv_gravity_1809ee8c8,DAT_1808acc30);
  fVar3 = DAT_1808ac254;
  fVar10 = DAT_1808ac064;
  local_f0 = *(undefined8 *)param_1;
  iVar8 = 4;
  local_e8 = param_1[2];
  local_130 = fVar9 * param_1[0x11] * DAT_1808ac1f4;
  uVar15 = _DAT_1808ade90;
  uVar12 = _DAT_1808ad2c0;
  uVar13 = _UNK_1808ad2c8;
  while( true ) {
    local_148 = 0;
    local_140 = 0;
    local_13c = 0;
    local_138 = 0x3f800000;
    fVar9 = (float)iVar8 * DAT_1808ac00c;
    local_178 = fVar9 * param_1[3] + *param_1;
    fStack_174 = fVar9 * param_1[4] + param_1[1];
    local_170 = (fVar9 * param_1[5] + param_1[2]) - local_130 * fVar9 * fVar9;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = uVar12;
    uStack_160 = uVar13;
    cVar6 = FUN_1802aed00(&local_f0,&local_178,&local_100,&local_110,*(undefined8 *)(param_1 + 0x2a)
                          ,0x1c1003,4,7,&local_168,0);
    if (cVar6 == '\0') {
      return local_res20[0];
    }
    if ((char)local_13c != '\0') break;
    bVar1 = (float)local_168 < fVar4;
    bVar2 = !bVar1;
    pfVar7 = (float *)((longlong)&local_168 + 4);
    if (bVar2) {
      pfVar7 = &local_178;
    }
    local_120 = *(undefined8 *)pfVar7;
    local_118 = pfVar7[2];
    if ((((!bVar2) && (local_13c._1_1_ == '\0')) && ((float)local_168 < fVar4)) &&
       ((float)uStack_150 < fVar3)) {
      fVar9 = (float)local_158;
      fVar5 = local_158._4_4_;
      fVar11 = (float)local_158 * (float)local_158 + local_158._4_4_ * local_158._4_4_;
      if (fVar11 < 0.0) {
        fVar11 = (float)FUN_18051af10(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      if ((fVar10 < fVar11) &&
         ((float)((uint)((fVar9 / fVar11) * fVar16 + (fVar5 / fVar11) * fVar17 + 0.0) & uVar15) <=
          DAT_1808ac2cc)) {
        FUN_1801e8a30(param_2,local_res20);
      }
      uVar12 = _DAT_1808ad2c0;
      uVar13 = _UNK_1808ad2c8;
    }
    local_128[0] = -1.0;
    pfVar7 = local_128;
    local_128[1] = 1.0;
    do {
      fVar9 = *pfVar7 * DAT_1808acb28;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      local_e0 = fVar9 * fVar14 + (float)local_120;
      local_140 = 0;
      local_dc = fVar9 * fVar16 + local_120._4_4_;
      local_13c = 0;
      local_d8 = fVar9 * 0.0 + local_118;
      local_138 = 0x3f800000;
      local_168 = uVar12;
      uStack_160 = uVar13;
      cVar6 = FUN_1802aed00(&local_120,&local_e0,&local_100,&local_110,
                            *(undefined8 *)(param_1 + 0x2a),0x1c1003,4,7,&local_168,0);
      if (((cVar6 != '\0') && ((char)local_13c == '\0')) &&
         ((local_13c._1_1_ == '\0' && (((float)local_168 < fVar4 && ((float)uStack_150 < fVar3))))))
      {
        fVar9 = (float)local_158;
        fVar5 = local_158._4_4_;
        fVar11 = (float)local_158 * (float)local_158 + local_158._4_4_ * local_158._4_4_;
        if (fVar11 < 0.0) {
          fVar11 = (float)FUN_18051af10(fVar11);
        }
        else {
          fVar11 = SQRT(fVar11);
        }
        uVar15 = _DAT_1808ade90;
        uVar12 = _DAT_1808ad2c0;
        uVar13 = _UNK_1808ad2c8;
        if ((fVar10 < fVar11) &&
           ((float)((uint)((fVar5 / fVar11) * fVar17 + (fVar9 / fVar11) * fVar16 + 0.0) &
                   _DAT_1808ade90) <= DAT_1808ac2cc)) {
          FUN_1801e8a30(param_2,local_res20);
          uVar12 = _DAT_1808ad2c0;
          uVar13 = _UNK_1808ad2c8;
        }
      }
      pfVar7 = pfVar7 + 1;
    } while (pfVar7 != (float *)&local_120);
    if (bVar1) {
      return local_res20[0];
    }
    local_f0 = CONCAT44(fStack_174,local_178);
    iVar8 = iVar8 + 4;
    local_e8 = local_170;
    if (0x2c < iVar8) {
      return local_res20[0];
    }
  }
  return local_res20[0];
}



/* ===== 1801e95c0 FUN_1801e95c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1801e95c0(undefined1 *param_1,undefined8 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  float *pfVar14;
  undefined8 *puVar15;
  int *piVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined1 auStack_bb8 [32];
  longlong local_b98;
  undefined *local_b90;
  int *local_b88;
  int local_b78;
  int local_b74;
  float local_b70;
  int local_b6c;
  undefined8 local_b68;
  undefined4 local_b60;
  undefined8 local_b58;
  int local_b50;
  int local_b4c;
  undefined4 local_b48;
  int local_b40;
  int local_b3c;
  float local_b38;
  float local_b34;
  float local_b30;
  float local_b2c;
  int local_b28;
  undefined1 *local_b20;
  float local_b18 [12];
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined4 local_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined1 local_9e8 [212];
  undefined1 local_914 [212];
  undefined1 local_840 [212];
  undefined1 local_76c;
  undefined4 local_768;
  undefined1 local_764;
  undefined4 local_760;
  undefined4 local_75c;
  undefined8 local_758 [114];
  undefined8 local_3c8;
  undefined1 auStack_3c0 [8];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  longlong local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined1 local_288 [8];
  float afStack_280 [2];
  undefined2 uStack_277;
  undefined1 auStack_275 [5];
  undefined1 uStack_270;
  undefined2 uStack_26f;
  undefined1 uStack_26d;
  undefined8 uStack_26c;
  float fStack_264;
  undefined1 uStack_260;
  undefined2 uStack_25f;
  undefined1 uStack_25d;
  float afStack_25c [93];
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_bb8;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar20 = 0;
  iVar21 = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  local_b4c = 0;
  local_b40 = param_3[8];
  if (local_b40 < 0x40) {
    local_b40 = 0x40;
  }
  local_b58 = param_3;
  local_b20 = param_1;
  fVar23 = (float)FUN_1801ec8f0(&PTR_s_sv_gravity_1809ee8c8);
  local_b3c = 1;
  local_b48 = fVar23 * *(float *)((longlong)param_2 + 0x44) * DAT_1808ac00c;
  piVar16 = &local_b3c;
  if (0 < param_3[1]) {
    piVar16 = param_3 + 1;
  }
  if (0x28 < param_3[1]) {
    piVar16 = &DAT_1805ae158;
  }
  local_b28 = *piVar16;
  FUN_180540170(local_288,0,0x198);
  FUN_1801ea1d0();
  local_b6c = 1;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_358 = 0;
  local_350 = 0;
  iVar22 = 1;
  local_298 = 0;
  local_290 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_3c8 = 0;
  auStack_3c0 = (undefined1  [8])0x0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  iVar9 = FUN_1801e8ff0(param_2,&local_3c8);
  fVar23 = *(float *)((longlong)param_2 + 0xc);
  fVar34 = *(float *)(param_2 + 2);
  fVar33 = fVar34 * fVar34 + fVar23 * fVar23;
  if (fVar33 < 0.0) {
    fVar33 = (float)FUN_18051af10();
  }
  else {
    fVar33 = SQRT(fVar33);
  }
  uVar19 = _DAT_1808ade90;
  fVar24 = DAT_1808accf0;
  uVar1 = DAT_1808acbd0;
  fVar5 = DAT_1808acaf4;
  fVar41 = DAT_1808ac34c;
  if (fVar33 <= DAT_1808ac34c) {
    fVar34 = 0.0;
    fVar35 = DAT_1808ac34c;
  }
  else {
    fVar34 = fVar34 / fVar33;
    fVar35 = fVar23 / fVar33;
  }
  if (iVar9 < 1) {
    local_b68 = CONCAT44(fVar35,(uint)fVar34 ^ DAT_1808adec0);
    local_b60 = 0;
  }
  else {
    local_b60 = local_3b8._4_4_;
    local_b68 = CONCAT44((undefined4)local_3b8,auStack_3c0._4_4_);
  }
  uVar27 = (undefined4)local_b68;
  uVar40 = (undefined4)((ulonglong)local_b68 >> 0x20);
  local_358 = local_b68;
  local_350 = CONCAT44(local_350._4_4_,local_b60);
  if ((char)param_3[2] != '\0') {
    pfVar11 = (float *)(param_3 + 3);
    fVar34 = *pfVar11;
    if (*param_3 == 1) {
      local_b34 = 90.0;
      local_b38 = 1.0;
      pfVar14 = &local_b38;
      if (DAT_1808ac34c <= fVar34) {
        pfVar14 = pfVar11;
      }
      pfVar11 = &local_b34;
      if (fVar34 <= DAT_1808acaf4) {
        pfVar11 = pfVar14;
      }
      fVar34 = *pfVar11 * DAT_1808ac1f4;
      if (fVar33 <= DAT_1808ac34c) {
        fVar23 = (float)param_3[4];
      }
      else {
        fVar23 = (float)FUN_180516b00(pfVar14,fVar23);
        fVar23 = fVar23 * DAT_1808aca94;
      }
      uVar19 = _DAT_1808ade90;
      fVar5 = DAT_1808acda0;
      uVar1 = DAT_1808acbd0;
      fVar33 = DAT_1808ac5e0;
      uVar18 = 0;
      do {
        if (0x21 < (int)uVar18) break;
        if ((uVar18 & 1) == 0) {
          fVar24 = fVar41;
        }
        else {
          fVar24 = fVar5;
        }
        uVar18 = uVar18 + 1;
        fVar24 = (float)((int)uVar18 / 2) * fVar24 * fVar33 + fVar23;
        if (((uint)fVar24 & 0x7f800000) == 0x7f800000) {
          fVar24 = 0.0;
          uVar36 = 0;
          uVar37 = 0;
          uVar38 = 0;
        }
        else {
          uVar28 = FUN_180516750(fVar24,uVar1);
          fVar24 = (float)uVar28;
          uVar36 = (undefined4)((ulonglong)uVar28 >> 0x20);
          uVar37 = (undefined4)extraout_XMM0_Qb;
          uVar38 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        }
        auVar29._4_4_ = uVar36;
        auVar29._0_4_ = fVar24;
        auVar29._8_4_ = uVar37;
        auVar29._12_4_ = uVar38;
        auVar30._4_12_ = auVar29._4_12_;
        auVar30._0_4_ = fVar24 - (float)param_3[4];
        if (((uint)auVar30._0_4_ & 0x7f800000) == 0x7f800000) {
          uVar25 = 0;
        }
        else {
          uVar25 = FUN_180516750(auVar30._0_8_,uVar1);
        }
        if ((float)(uVar25 & uVar19) <= fVar34) {
          lVar17 = (longlong)iVar22;
          iVar22 = iVar22 + 1;
          *(ulonglong *)((longlong)&local_358 + lVar17 * 0xc) = CONCAT44(uVar40,uVar27);
          *(undefined4 *)((longlong)&local_350 + lVar17 * 0xc) = (undefined4)local_350;
          uVar27 = (undefined4)local_358;
          uVar40 = (undefined4)((ulonglong)local_358 >> 0x20);
          *(undefined2 *)(local_288 + lVar17 * 0x18 + 1) = local_b58._1_2_;
          local_288[lVar17 * 0x18 + 3] = local_b58._3_1_;
          *(undefined2 *)((longlong)afStack_25c + lVar17 * 0x18 + -0x1b) = local_b48._1_2_;
          *(undefined1 *)((longlong)afStack_25c + lVar17 * 0x18 + -0x19) = local_b48._3_1_;
          afStack_25c[lVar17 * 6 + -6] = fVar24;
          local_288[lVar17 * 0x18] = 1;
          *(undefined8 *)(local_288 + lVar17 * 0x18 + 4) = 0;
          *(undefined4 *)(local_288 + lVar17 * 0x18 + 0xc) = 0;
          *(undefined1 *)(afStack_25c + lVar17 * 6 + -7) = 1;
          local_b6c = iVar22;
        }
      } while (iVar22 < 0x11);
    }
    else {
      local_b2c = 90.0;
      local_b30 = 1.0;
      pfVar14 = &local_b30;
      if (DAT_1808ac34c <= fVar34) {
        pfVar14 = pfVar11;
      }
      pfVar11 = &local_b2c;
      if (fVar34 <= DAT_1808acaf4) {
        pfVar11 = pfVar14;
      }
      local_b70 = *pfVar11 * DAT_1808ac1f4;
      if (iVar9 < 1) {
        iVar21 = local_b4c;
      }
      else {
        do {
          fVar23 = local_b70;
          if (0x10 < iVar22) break;
          auVar31._0_8_ = FUN_180516b00();
          auVar31._8_8_ = extraout_XMM0_Qb_00;
          auVar32._4_12_ = auVar31._4_12_;
          local_b18[0] = (float)auVar31._0_8_ * DAT_1808aca94;
          uVar18 = 0xffffffff;
          local_b18[1] = 1.0;
          local_b18[2] = 0.0;
          local_b18[4] = 0.0;
          local_b18[5] = 1.0;
          local_b18[7] = -1.0;
          fVar33 = local_b18[0] + DAT_1808acb58;
          local_b18[8] = 0.0;
          auVar32._0_4_ = local_b18[0] - (float)param_3[4];
          fVar34 = local_b18[0] - fVar5;
          local_b18[10] = 0.0;
          fVar41 = local_b18[0] + fVar5;
          local_b18[0xb] = -1.0;
          local_b18[6] = fVar33;
          local_b18[3] = fVar34;
          local_b18[9] = fVar41;
          if (((uint)auVar32._0_4_ & 0x7f800000) == 0x7f800000) {
            uVar25 = 0;
          }
          else {
            uVar25 = FUN_180516750(auVar32._0_8_,uVar1);
          }
          fVar23 = fVar23 + DAT_1808ac000;
          fVar35 = (float)param_3[4];
          fVar26 = (float)(uVar25 & uVar19);
          fVar39 = fVar24;
          if ((fVar26 <= fVar23) && (fVar26 < fVar24)) {
            uVar18 = 0;
            fVar39 = fVar26;
          }
          if (((uint)(fVar34 - fVar35) & 0x7f800000) == 0x7f800000) {
            uVar25 = 0;
          }
          else {
            uVar25 = FUN_180516750();
            fVar35 = (float)param_3[4];
          }
          fVar34 = (float)(uVar25 & uVar19);
          if ((fVar34 <= fVar23) && (fVar34 < fVar39)) {
            uVar18 = 1;
            fVar39 = fVar34;
          }
          if (((uint)(fVar33 - fVar35) & 0x7f800000) == 0x7f800000) {
            uVar25 = 0;
          }
          else {
            uVar25 = FUN_180516750();
            fVar35 = (float)param_3[4];
          }
          fVar34 = (float)(uVar25 & uVar19);
          if ((fVar34 <= fVar23) && (fVar34 < fVar39)) {
            uVar18 = 2;
            fVar39 = fVar34;
          }
          if (((uint)(fVar41 - fVar35) & 0x7f800000) == 0x7f800000) {
            uVar25 = 0;
          }
          else {
            uVar25 = FUN_180516750();
          }
          if ((fVar23 < (float)(uVar25 & uVar19)) || (fVar39 <= (float)(uVar25 & uVar19))) {
            if (-1 < (int)uVar18) goto LAB_1801e9c93;
          }
          else {
            uVar18 = 3;
LAB_1801e9c93:
            uVar12 = (ulonglong)uVar18;
            if (((uint)local_b18[uVar12 * 3] & 0x7f800000) == 0x7f800000) {
              uVar27 = 0;
            }
            else {
              uVar27 = FUN_180516750();
            }
            uVar40 = *(undefined4 *)(auStack_3c0 + uVar20 * 0x1c + 0xc);
            lVar17 = (longlong)iVar22;
            iVar22 = iVar22 + 1;
            *(undefined8 *)((longlong)&local_358 + lVar17 * 0xc) =
                 *(undefined8 *)(auStack_3c0 + uVar20 * 0x1c + 4);
            *(undefined4 *)((longlong)&local_350 + lVar17 * 0xc) = uVar40;
            *(undefined2 *)(local_288 + lVar17 * 0x18 + 1) = local_b58._1_2_;
            local_288[lVar17 * 0x18 + 3] = local_b58._3_1_;
            *(float *)(local_288 + lVar17 * 0x18 + 8) = local_b18[uVar12 * 3 + 1];
            *(float *)(local_288 + lVar17 * 0x18 + 0xc) = local_b18[uVar12 * 3 + 2];
            *(undefined2 *)((longlong)afStack_25c + lVar17 * 0x18 + -0x1b) = local_b48._1_2_;
            *(undefined1 *)((longlong)afStack_25c + lVar17 * 0x18 + -0x19) = local_b48._3_1_;
            *(undefined4 *)(local_288 + lVar17 * 0x18 + 4) = uVar27;
            local_288[lVar17 * 0x18] = 1;
            *(undefined1 *)(afStack_25c + lVar17 * 6 + -7) = 0;
            afStack_25c[lVar17 * 6 + -6] = 0.0;
          }
          uVar18 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar18;
        } while ((int)uVar18 < iVar9);
        param_1 = local_b20;
        iVar21 = local_b4c;
        local_b6c = iVar22;
      }
    }
  }
  uVar20 = 0;
  if (iVar22 < 1) {
    *(int *)(param_1 + 0x28) = iVar21;
    return param_1;
  }
  while( true ) {
    iVar21 = (int)uVar20;
    if ((iVar21 == 0) && (1 < iVar22)) {
      local_b50 = local_b40;
      if (700 < local_b40) {
        local_b50 = 700;
      }
    }
    else {
      local_b50 = (local_b40 - local_b4c) / (iVar22 - iVar21) + local_b4c;
    }
    local_b78 = 0;
    iVar9 = -1;
    local_9f8 = 0;
    local_9f0 = 0;
    local_b70 = -NAN;
    local_a00 = 0xffffffffffffffff;
    FUN_180540170(local_9e8,0,0xd4);
    FUN_180540170(local_914,0,0xd4);
    FUN_180540170(local_840,0);
    local_ae8 = *param_2;
    uStack_ae0 = param_2[1];
    local_ad8 = param_2[2];
    uStack_ad0 = param_2[3];
    local_75c = 0;
    local_a08 = param_2[0x1c];
    local_ac8 = param_2[4];
    uStack_ac0 = param_2[5];
    local_b74 = 0;
    local_b88 = &local_b74;
    local_ab8 = param_2[6];
    uStack_ab0 = param_2[7];
    local_b90 = &DAT_180c8ea10;
    local_76c = 0;
    local_aa8 = param_2[8];
    uStack_aa0 = param_2[9];
    local_768 = 0;
    local_764 = 0;
    local_a98 = param_2[10];
    uStack_a90 = param_2[0xb];
    local_760 = 0xffffffff;
    local_b98 = CONCAT44(local_b98._4_4_,0xffffffff);
    local_a88 = param_2[0xc];
    uStack_a80 = param_2[0xd];
    local_a78 = param_2[0xe];
    uStack_a70 = param_2[0xf];
    local_a68 = param_2[0x10];
    uStack_a60 = param_2[0x11];
    local_a58 = param_2[0x12];
    uStack_a50 = param_2[0x13];
    local_a48 = param_2[0x14];
    uStack_a40 = param_2[0x15];
    local_a38 = param_2[0x16];
    uStack_a30 = param_2[0x17];
    local_a28 = param_2[0x18];
    uStack_a20 = param_2[0x19];
    local_a18 = *(undefined4 *)(param_2 + 0x1a);
    uStack_a14 = *(undefined4 *)((longlong)param_2 + 0xd4);
    uStack_a10 = *(undefined4 *)(param_2 + 0x1b);
    uStack_a0c = *(undefined4 *)((longlong)param_2 + 0xdc);
    iVar10 = FUN_1801e8280(&local_b58,&local_ae8);
    iVar22 = local_b74;
    local_b68 = CONCAT44(local_b68._4_4_,iVar10);
    if (-1 < iVar10) {
      local_b98 = (longlong)&local_358 + uVar20 * 0xc;
      cVar8 = FUN_1801e8810(&local_b58,param_2);
      if (cVar8 != '\0') {
        local_b78 = iVar22;
        iVar9 = (int)local_b68;
      }
    }
    if (*(char *)(afStack_25c + uVar20 * 6 + -7) == '\0') {
      if (local_b28 < iVar22) {
        iVar22 = local_b28;
      }
    }
    else if (1 < iVar22) {
      iVar22 = 1;
    }
    if (0 < iVar22) {
      local_b68 = (longlong)&local_358 + uVar20 * 0xc;
      uVar19 = 0;
      do {
        if ((-1 < iVar9) && (iVar9 <= (int)uVar19)) goto LAB_1801ea165;
        lVar17 = 7;
        puVar6 = (undefined8 *)(&DAT_180c8ea10 + (ulonglong)uVar19 * 0x390);
        puVar7 = local_758;
        do {
          puVar15 = puVar7;
          puVar13 = puVar6;
          uVar28 = puVar13[1];
          uVar2 = puVar13[2];
          uVar3 = puVar13[3];
          *puVar15 = *puVar13;
          puVar15[1] = uVar28;
          uVar28 = puVar13[4];
          uVar4 = puVar13[5];
          puVar15[2] = uVar2;
          puVar15[3] = uVar3;
          uVar2 = puVar13[6];
          uVar3 = puVar13[7];
          puVar15[4] = uVar28;
          puVar15[5] = uVar4;
          uVar28 = puVar13[8];
          uVar4 = puVar13[9];
          puVar15[6] = uVar2;
          puVar15[7] = uVar3;
          uVar2 = puVar13[10];
          uVar3 = puVar13[0xb];
          puVar15[8] = uVar28;
          puVar15[9] = uVar4;
          uVar28 = puVar13[0xc];
          uVar4 = puVar13[0xd];
          puVar15[10] = uVar2;
          puVar15[0xb] = uVar3;
          uVar1 = *(undefined4 *)(puVar13 + 0xe);
          uVar27 = *(undefined4 *)((longlong)puVar13 + 0x74);
          uVar40 = *(undefined4 *)(puVar13 + 0xf);
          uVar36 = *(undefined4 *)((longlong)puVar13 + 0x7c);
          puVar15[0xc] = uVar28;
          puVar15[0xd] = uVar4;
          *(undefined4 *)(puVar15 + 0xe) = uVar1;
          *(undefined4 *)((longlong)puVar15 + 0x74) = uVar27;
          *(undefined4 *)(puVar15 + 0xf) = uVar40;
          *(undefined4 *)((longlong)puVar15 + 0x7c) = uVar36;
          lVar17 = lVar17 + -1;
          puVar6 = puVar13 + 0x10;
          puVar7 = puVar15 + 0x10;
        } while (lVar17 != 0);
        uVar28 = puVar13[0x11];
        local_b88 = &local_b74;
        local_b74 = 0;
        local_b90 = (undefined *)0x0;
        puVar15[0x10] = puVar13[0x10];
        puVar15[0x11] = uVar28;
        local_b98 = CONCAT44(local_b98._4_4_,uVar19);
        iVar10 = FUN_1801e8280(&local_b58,local_758,uVar19);
        if ((-1 < iVar10) && ((iVar9 < 0 || (iVar10 < iVar9)))) {
          local_b98 = local_b68;
          cVar8 = FUN_1801e8810(&local_b58,param_2,local_288 + uVar20 * 0x18);
          if (cVar8 != '\0') {
            local_b78 = local_b74;
            iVar9 = iVar10;
            local_b70 = (float)uVar19;
          }
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < iVar22);
    }
    if (-1 < iVar9) break;
    uVar20 = (ulonglong)(iVar21 + 1U);
    if (local_b6c <= (int)(iVar21 + 1U)) {
      *(int *)(local_b20 + 0x28) = local_b4c;
      return local_b20;
    }
    iVar22 = local_b6c;
  }
LAB_1801ea165:
  uVar2 = *(undefined8 *)(local_288 + uVar20 * 0x18);
  uVar3 = *(undefined8 *)(local_288 + uVar20 * 0x18 + 8);
  uVar28 = *(undefined8 *)(afStack_25c + uVar20 * 6 + -7);
  *(float *)(local_b20 + 4) = local_b70;
  *(int *)(local_b20 + 0x28) = local_b4c;
  *(undefined8 *)(local_b20 + 8) = uVar2;
  *(undefined8 *)(local_b20 + 0x10) = uVar3;
  *local_b20 = 1;
  *(undefined8 *)(local_b20 + 0x18) = uVar28;
  *(int *)(local_b20 + 0x20) = iVar9;
  *(int *)(local_b20 + 0x24) = local_b78;
  return local_b20;
}



/* ===== 1801ea1d0 FUN_1801ea1d0 ===== */

void FUN_1801ea1d0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x48] = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x60] = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x78] = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  param_1[0xd8] = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  param_1[0xf0] = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0x100] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x108] = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  param_1[0x120] = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  param_1[0x130] = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  param_1[0x138] = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  param_1[0x150] = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  param_1[0x160] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  param_1[0x168] = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  param_1[0x178] = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  param_1[0x180] = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  param_1[400] = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  return;
}



/* ===== 1801ea3a0 FUN_1801ea3a0 ===== */

undefined8 *
FUN_1801ea3a0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined8 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  
  puVar9 = (undefined8 *)((longlong)param_2 - (longlong)param_1);
  puVar11 = puVar9;
  while( true ) {
    if ((longlong)puVar11 < 0x39c) {
      if (param_1 != param_2) {
        for (puVar11 = (undefined8 *)((longlong)param_1 + 0x1c); puVar11 != param_2;
            puVar11 = (undefined8 *)((longlong)puVar11 + 0x1c)) {
          fVar1 = *(float *)(puVar11 + 3);
          uVar7 = *puVar11;
          uVar8 = puVar11[1];
          uVar3 = puVar11[2];
          if (*(float *)(param_1 + 3) <= fVar1) {
            fVar2 = *(float *)((longlong)puVar11 + -4);
            puVar13 = puVar11;
            while (fVar1 < fVar2) {
              puVar9 = (undefined8 *)((longlong)puVar13 + -0x1c);
              *puVar13 = *puVar9;
              puVar13[1] = *(undefined8 *)((longlong)puVar13 + -0x14);
              *(undefined8 *)((longlong)puVar13 + 0xc) = puVar13[-2];
              *(undefined8 *)((longlong)puVar13 + 0x14) = puVar13[-1];
              fVar2 = *(float *)(puVar13 + -4);
              puVar13 = puVar9;
            }
            *puVar13 = uVar7;
            puVar13[1] = uVar8;
            puVar13[2] = uVar3;
            *(float *)(puVar13 + 3) = fVar1;
          }
          else {
            puVar9 = (undefined8 *)
                     FUN_180540530((undefined8 *)((longlong)param_1 + 0x1c),param_1,
                                   (longlong)puVar11 - (longlong)param_1);
            *param_1 = uVar7;
            param_1[1] = uVar8;
            param_1[2] = uVar3;
            *(float *)(param_1 + 3) = fVar1;
          }
        }
      }
      return puVar9;
    }
    lVar10 = ((longlong)param_2 - (longlong)param_1) / 0x1c;
    puVar9 = (undefined8 *)-((longlong)param_2 - (longlong)param_1 >> 0x3f);
    lVar17 = lVar10 >> 1;
    if (param_3 < 1) break;
    lVar10 = ((longlong)param_2 + (-0x1c - (longlong)param_1) >> 2) * 0x6db6db6db6db6db7;
    puVar16 = (undefined4 *)(lVar17 * 0x1c + (longlong)param_1);
    if (lVar10 < 0x29) {
      puVar12 = (undefined4 *)((longlong)param_2 + -0x1c);
      puVar9 = param_1;
    }
    else {
      lVar10 = lVar10 + 1 >> 3;
      lVar14 = lVar10 * 0x1c;
      lVar15 = lVar10 * 0x38;
      puVar9 = (undefined8 *)(lVar14 + (longlong)param_1);
      lVar10 = FUN_1801eac10(param_1,puVar9,param_1 + lVar10 * 7);
      FUN_1801eac10((longlong)puVar16 - lVar14,puVar16,
                    (undefined4 *)((lVar10 + lVar17) * 0x1c + (longlong)param_1));
      puVar12 = (undefined4 *)((longlong)param_2 + (-0x1c - lVar14));
      FUN_1801eac10((longlong)param_2 + (-0x1c - lVar15),puVar12,
                    (undefined4 *)((longlong)param_2 + -0x1c));
    }
    FUN_1801eac10(puVar9,puVar16,puVar12);
    FUN_1801ea7e0(&local_98,param_1,puVar16,param_2);
    puVar13 = local_98;
    puVar9 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)local_98 - (longlong)param_1 >> 2) * 0x6db6db6db6db6db7 <
        ((longlong)param_2 - (longlong)puVar9 >> 2) * 0x6db6db6db6db6db7) {
      FUN_1801ea3a0(param_1,local_98,param_3,param_4);
      puVar13 = param_2;
      param_1 = puVar9;
    }
    else {
      FUN_1801ea3a0(puVar9,param_2,param_3,param_4);
    }
    puVar11 = (undefined8 *)((longlong)puVar13 - (longlong)param_1);
    puVar9 = (undefined8 *)0x4924924924924925;
    param_2 = puVar13;
  }
  while (0 < lVar17) {
    lVar14 = lVar17 * 0x1c;
    lVar17 = lVar17 + -1;
    puVar9 = (undefined8 *)(lVar14 + -0x1c + (longlong)param_1);
    local_98 = (undefined8 *)*puVar9;
    uStack_90 = *(undefined4 *)(puVar9 + 1);
    puVar16 = (undefined4 *)(lVar14 + -0x10 + (longlong)param_1);
    uStack_8c = *puVar16;
    uStack_88 = puVar16[1];
    uStack_84 = *(undefined8 *)(puVar16 + 2);
    puVar9 = (undefined8 *)FUN_1801ea6e0(param_1,lVar17,lVar10,&local_98,param_4);
  }
  if (lVar10 < 2) {
    return puVar9;
  }
  do {
    if (1 < ((longlong)param_2 - (longlong)param_1 >> 2) * 0x6db6db6db6db6db7) {
      local_98 = *(undefined8 **)((longlong)param_2 + -0x1c);
      uStack_84 = param_2[-1];
      uStack_90 = (undefined4)*(undefined8 *)((longlong)param_2 + -0x14);
      uVar4 = *(undefined4 *)((longlong)param_1 + 4);
      uVar5 = *(undefined4 *)(param_1 + 1);
      uVar6 = *(undefined4 *)((longlong)param_1 + 0xc);
      uStack_8c = (undefined4)param_2[-2];
      uStack_88 = (undefined4)((ulonglong)param_2[-2] >> 0x20);
      *(undefined4 *)((longlong)param_2 + -0x1c) = *(undefined4 *)param_1;
      *(undefined4 *)(param_2 + -3) = uVar4;
      *(undefined4 *)((longlong)param_2 + -0x14) = uVar5;
      *(undefined4 *)(param_2 + -2) = uVar6;
      uVar4 = *(undefined4 *)(param_1 + 2);
      uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
      uVar6 = *(undefined4 *)(param_1 + 3);
      *(undefined4 *)(param_2 + -2) = *(undefined4 *)((longlong)param_1 + 0xc);
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar4;
      *(undefined4 *)(param_2 + -1) = uVar5;
      *(undefined4 *)((longlong)param_2 + -4) = uVar6;
      FUN_1801ea6e0(param_1,0,
                    (((longlong)param_2 + -0x1c) - (longlong)param_1 >> 2) * 0x6db6db6db6db6db7,
                    &local_98,param_4);
    }
    param_2 = (undefined8 *)((longlong)param_2 + -0x1c);
  } while (0x37 < (longlong)param_2 - (longlong)param_1);
  return (undefined8 *)((longlong)param_2 - (longlong)param_1);
}



/* ===== 1801ea6e0 FUN_1801ea6e0 ===== */

void FUN_1801ea6e0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar10 = (longlong)(param_3 - 1) >> 1;
  lVar11 = param_2;
  while (lVar11 < lVar10) {
    fVar4 = *(float *)(param_1 + 0x34 + lVar11 * 0x38);
    pfVar3 = (float *)(param_1 + 0x50 + lVar11 * 0x38);
    lVar9 = (ulonglong)(fVar4 < *pfVar3 || fVar4 == *pfVar3) + 1 + lVar11 * 2;
    lVar8 = lVar9 * 0x1c;
    puVar1 = (undefined8 *)(lVar8 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar11 * 0x1c + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(lVar8 + 0xc + param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar11 * 0x1c + 0xc + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar11 = lVar9;
  }
  if ((lVar11 == lVar10) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_3 * 0x1c + -0x1c + param_1);
    uVar5 = puVar2[1];
    puVar1 = (undefined8 *)(lVar11 * 0x1c + param_1);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(param_3 * 0x1c + -0x10 + param_1);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar11 * 0x1c + 0xc + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar11 = param_3 - 1;
  }
  if (param_2 < lVar11) {
    fVar4 = *(float *)(param_4 + 3);
    do {
      lVar10 = lVar11 + -1 >> 1;
      lVar9 = lVar10 * 0x1c;
      pfVar3 = (float *)(param_1 + 0x18 + lVar9);
      if (fVar4 < *pfVar3 || fVar4 == *pfVar3) break;
      uVar5 = ((undefined8 *)(param_1 + lVar9))[1];
      puVar1 = (undefined8 *)(lVar11 * 0x1c + param_1);
      *puVar1 = *(undefined8 *)(param_1 + lVar9);
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(param_1 + 0xc + lVar9);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar11 * 0x1c + 0xc + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      lVar11 = lVar10;
    } while (param_2 < lVar10);
  }
  uVar5 = param_4[1];
  uVar6 = *(undefined8 *)((longlong)param_4 + 0xc);
  uVar7 = *(undefined8 *)((longlong)param_4 + 0x14);
  puVar1 = (undefined8 *)(lVar11 * 0x1c + param_1);
  *puVar1 = *param_4;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar11 * 0x1c + 0xc + param_1);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  return;
}



/* ===== 1801ea7e0 FUN_1801ea7e0 ===== */

undefined8 *
FUN_1801ea7e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar7 = (undefined8 *)((longlong)param_3 + 0x1c);
  for (; param_2 < param_3; param_3 = (undefined8 *)((longlong)param_3 + -0x1c)) {
    if ((*(float *)((longlong)param_3 + -4) < *(float *)(param_3 + 3)) ||
       (*(float *)(param_3 + 3) < *(float *)((longlong)param_3 + -4))) break;
  }
  if (puVar7 < param_4) {
    do {
      if ((*(float *)(puVar7 + 3) < *(float *)(param_3 + 3)) ||
         (*(float *)(param_3 + 3) < *(float *)(puVar7 + 3))) break;
      puVar7 = (undefined8 *)((longlong)puVar7 + 0x1c);
    } while (puVar7 < param_4);
  }
  puVar6 = param_3;
  puVar8 = puVar7;
LAB_1801ea864:
  puVar9 = puVar6;
  puVar6 = puVar7;
  if (puVar7 < param_4) {
    if (0x6f < (ulonglong)((longlong)param_4 + (0x1b - (longlong)puVar7))) {
      do {
        if (*(float *)(puVar7 + 3) <= *(float *)(param_3 + 3)) {
          puVar6 = puVar7;
          if (*(float *)(puVar7 + 3) < *(float *)(param_3 + 3)) goto joined_r0x0001801eaa40;
          if (puVar8 != puVar7) {
            uVar1 = *puVar8;
            uVar2 = *(undefined8 *)((longlong)puVar8 + 0xc);
            uVar3 = *(undefined8 *)((longlong)puVar8 + 0x14);
            uStack_20 = (undefined4)puVar8[1];
            uVar4 = puVar7[1];
            uStack_1c = (undefined4)uVar2;
            *puVar8 = *puVar7;
            puVar8[1] = uVar4;
            uVar4 = *(undefined8 *)((longlong)puVar7 + 0x14);
            *(undefined8 *)((longlong)puVar8 + 0xc) = *(undefined8 *)((longlong)puVar7 + 0xc);
            *(undefined8 *)((longlong)puVar8 + 0x14) = uVar4;
            *puVar7 = uVar1;
            puVar7[1] = CONCAT44(uStack_1c,uStack_20);
            *(undefined8 *)((longlong)puVar7 + 0xc) = uVar2;
            *(undefined8 *)((longlong)puVar7 + 0x14) = uVar3;
          }
          puVar8 = (undefined8 *)((longlong)puVar8 + 0x1c);
        }
        if (*(float *)((longlong)puVar7 + 0x34) <= *(float *)(param_3 + 3)) {
          puVar6 = (undefined8 *)((longlong)puVar7 + 0x1c);
          if (*(float *)((longlong)puVar7 + 0x34) < *(float *)(param_3 + 3))
          goto joined_r0x0001801eaa40;
          if (puVar8 != puVar6) {
            uVar1 = *puVar8;
            uVar2 = *(undefined8 *)((longlong)puVar8 + 0xc);
            uVar3 = *(undefined8 *)((longlong)puVar8 + 0x14);
            uStack_20 = (undefined4)puVar8[1];
            uVar4 = *(undefined8 *)((longlong)puVar7 + 0x24);
            uStack_1c = (undefined4)uVar2;
            *puVar8 = *puVar6;
            puVar8[1] = uVar4;
            uVar4 = puVar7[6];
            *(undefined8 *)((longlong)puVar8 + 0xc) = puVar7[5];
            *(undefined8 *)((longlong)puVar8 + 0x14) = uVar4;
            *puVar6 = uVar1;
            *(ulonglong *)((longlong)puVar7 + 0x24) = CONCAT44(uStack_1c,uStack_20);
            puVar7[5] = uVar2;
            puVar7[6] = uVar3;
          }
          puVar8 = (undefined8 *)((longlong)puVar8 + 0x1c);
        }
        if (*(float *)(puVar7 + 10) <= *(float *)(param_3 + 3)) {
          puVar6 = puVar7 + 7;
          if (*(float *)(puVar7 + 10) < *(float *)(param_3 + 3)) goto joined_r0x0001801eaa40;
          if (puVar8 != puVar6) {
            uVar1 = *puVar8;
            uVar2 = *(undefined8 *)((longlong)puVar8 + 0xc);
            uVar3 = *(undefined8 *)((longlong)puVar8 + 0x14);
            uStack_20 = (undefined4)puVar8[1];
            uVar4 = puVar7[8];
            uStack_1c = (undefined4)uVar2;
            *puVar8 = *puVar6;
            puVar8[1] = uVar4;
            uVar4 = *(undefined8 *)((longlong)puVar7 + 0x4c);
            *(undefined8 *)((longlong)puVar8 + 0xc) = *(undefined8 *)((longlong)puVar7 + 0x44);
            *(undefined8 *)((longlong)puVar8 + 0x14) = uVar4;
            *puVar6 = uVar1;
            puVar7[8] = CONCAT44(uStack_1c,uStack_20);
            *(undefined8 *)((longlong)puVar7 + 0x44) = uVar2;
            *(undefined8 *)((longlong)puVar7 + 0x4c) = uVar3;
          }
          puVar8 = (undefined8 *)((longlong)puVar8 + 0x1c);
        }
        if (*(float *)((longlong)puVar7 + 0x6c) <= *(float *)(param_3 + 3)) {
          puVar6 = (undefined8 *)((longlong)puVar7 + 0x54);
          if (*(float *)((longlong)puVar7 + 0x6c) < *(float *)(param_3 + 3))
          goto joined_r0x0001801eaa40;
          if (puVar8 != puVar6) {
            uVar1 = *puVar8;
            uVar2 = *(undefined8 *)((longlong)puVar8 + 0xc);
            uVar3 = *(undefined8 *)((longlong)puVar8 + 0x14);
            uStack_20 = (undefined4)puVar8[1];
            uVar4 = *(undefined8 *)((longlong)puVar7 + 0x5c);
            uStack_1c = (undefined4)uVar2;
            *puVar8 = *puVar6;
            puVar8[1] = uVar4;
            uVar4 = puVar7[0xd];
            *(undefined8 *)((longlong)puVar8 + 0xc) = puVar7[0xc];
            *(undefined8 *)((longlong)puVar8 + 0x14) = uVar4;
            *puVar6 = uVar1;
            *(ulonglong *)((longlong)puVar7 + 0x5c) = CONCAT44(uStack_1c,uStack_20);
            puVar7[0xc] = uVar2;
            puVar7[0xd] = uVar3;
          }
          puVar8 = (undefined8 *)((longlong)puVar8 + 0x1c);
        }
        puVar7 = puVar7 + 0xe;
      } while (puVar7 < (undefined8 *)((longlong)param_4 - 0x54U));
    }
    for (; puVar6 = puVar7, puVar7 < param_4; puVar7 = (undefined8 *)((longlong)puVar7 + 0x1c)) {
      if (*(float *)(puVar7 + 3) <= *(float *)(param_3 + 3)) {
        if (*(float *)(puVar7 + 3) < *(float *)(param_3 + 3)) break;
        if (puVar8 != puVar7) {
          uVar1 = *puVar8;
          uVar2 = *(undefined8 *)((longlong)puVar8 + 0xc);
          uVar3 = *(undefined8 *)((longlong)puVar8 + 0x14);
          uStack_20 = (undefined4)puVar8[1];
          uVar4 = puVar7[1];
          uStack_1c = (undefined4)uVar2;
          *puVar8 = *puVar7;
          puVar8[1] = uVar4;
          uVar4 = *(undefined8 *)((longlong)puVar7 + 0x14);
          *(undefined8 *)((longlong)puVar8 + 0xc) = *(undefined8 *)((longlong)puVar7 + 0xc);
          *(undefined8 *)((longlong)puVar8 + 0x14) = uVar4;
          *puVar7 = uVar1;
          puVar7[1] = CONCAT44(uStack_1c,uStack_20);
          *(undefined8 *)((longlong)puVar7 + 0xc) = uVar2;
          *(undefined8 *)((longlong)puVar7 + 0x14) = uVar3;
        }
        puVar8 = (undefined8 *)((longlong)puVar8 + 0x1c);
      }
    }
  }
joined_r0x0001801eaa40:
  do {
    puVar7 = puVar6;
    if (puVar9 <= param_2) break;
    if (*(float *)(param_3 + 3) <= *(float *)((longlong)puVar9 + -4)) {
      if (*(float *)(param_3 + 3) < *(float *)((longlong)puVar9 + -4)) break;
      if (puVar9 != param_3) {
        uVar1 = *(undefined8 *)((longlong)param_3 + -0x1c);
        uVar2 = param_3[-2];
        uVar3 = param_3[-1];
        uStack_20 = (undefined4)*(undefined8 *)((longlong)param_3 + -0x14);
        uVar4 = *(undefined8 *)((longlong)puVar9 + -0x14);
        uStack_1c = (undefined4)uVar2;
        *(undefined8 *)((longlong)param_3 + -0x1c) = *(undefined8 *)((longlong)puVar9 + -0x1c);
        *(undefined8 *)((longlong)param_3 + -0x14) = uVar4;
        uVar4 = puVar9[-1];
        param_3[-2] = puVar9[-2];
        param_3[-1] = uVar4;
        *(undefined8 *)((longlong)puVar9 + -0x1c) = uVar1;
        *(ulonglong *)((longlong)puVar9 + -0x14) = CONCAT44(uStack_1c,uStack_20);
        puVar9[-2] = uVar2;
        puVar9[-1] = uVar3;
      }
      param_3 = (undefined8 *)((longlong)param_3 + -0x1c);
    }
    puVar9 = (undefined8 *)((longlong)puVar9 + -0x1c);
    puVar6 = puVar7;
  } while( true );
  if (puVar9 == param_2) {
    if (puVar7 == param_4) {
      *param_1 = param_3;
      param_1[1] = puVar8;
      return param_1;
    }
    if (puVar8 != puVar7) {
      uVar1 = *param_3;
      uVar2 = *(undefined8 *)((longlong)param_3 + 0xc);
      uVar3 = *(undefined8 *)((longlong)param_3 + 0x14);
      uStack_20 = (undefined4)param_3[1];
      uVar4 = puVar8[1];
      uStack_1c = (undefined4)uVar2;
      *param_3 = *puVar8;
      param_3[1] = uVar4;
      uVar4 = *(undefined8 *)((longlong)puVar8 + 0x14);
      *(undefined8 *)((longlong)param_3 + 0xc) = *(undefined8 *)((longlong)puVar8 + 0xc);
      *(undefined8 *)((longlong)param_3 + 0x14) = uVar4;
      *puVar8 = uVar1;
      puVar8[1] = CONCAT44(uStack_1c,uStack_20);
      *(undefined8 *)((longlong)puVar8 + 0xc) = uVar2;
      *(undefined8 *)((longlong)puVar8 + 0x14) = uVar3;
    }
    uVar1 = *param_3;
    uVar2 = *(undefined8 *)((longlong)param_3 + 0xc);
    uVar3 = *(undefined8 *)((longlong)param_3 + 0x14);
    uStack_20 = (undefined4)param_3[1];
    uVar4 = puVar7[1];
    uStack_1c = (undefined4)uVar2;
    *param_3 = *puVar7;
    param_3[1] = uVar4;
    uVar4 = *(undefined8 *)((longlong)puVar7 + 0x14);
    *(undefined8 *)((longlong)param_3 + 0xc) = *(undefined8 *)((longlong)puVar7 + 0xc);
    *(undefined8 *)((longlong)param_3 + 0x14) = uVar4;
    *puVar7 = uVar1;
    puVar7[1] = CONCAT44(uStack_1c,uStack_20);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar2;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar3;
    puVar7 = (undefined8 *)((longlong)puVar7 + 0x1c);
    param_3 = (undefined8 *)((longlong)param_3 + 0x1c);
    puVar6 = puVar9;
    puVar8 = (undefined8 *)((longlong)puVar8 + 0x1c);
  }
  else {
    puVar6 = (undefined8 *)((longlong)puVar9 + -0x1c);
    if (puVar7 == param_4) {
      puVar5 = (undefined8 *)((longlong)param_3 + -0x1c);
      if (param_3 != puVar9) {
        uVar1 = *puVar6;
        uVar2 = puVar9[-2];
        uVar3 = puVar9[-1];
        uStack_20 = (undefined4)*(undefined8 *)((longlong)puVar9 + -0x14);
        uVar4 = *(undefined8 *)((longlong)param_3 + -0x14);
        uStack_1c = (undefined4)uVar2;
        *puVar6 = *puVar5;
        *(undefined8 *)((longlong)puVar9 + -0x14) = uVar4;
        uVar4 = param_3[-1];
        puVar9[-2] = param_3[-2];
        puVar9[-1] = uVar4;
        *puVar5 = uVar1;
        *(ulonglong *)((longlong)param_3 + -0x14) = CONCAT44(uStack_1c,uStack_20);
        param_3[-2] = uVar2;
        param_3[-1] = uVar3;
      }
      uVar1 = *puVar5;
      puVar9 = (undefined8 *)((longlong)puVar8 - 0x1c);
      uVar2 = param_3[-2];
      uVar3 = param_3[-1];
      uStack_20 = (undefined4)*(undefined8 *)((longlong)param_3 + -0x14);
      uVar4 = *(undefined8 *)((longlong)puVar8 - 0x14);
      uStack_1c = (undefined4)uVar2;
      *puVar5 = *puVar9;
      *(undefined8 *)((longlong)param_3 + -0x14) = uVar4;
      uVar4 = puVar8[-1];
      param_3[-2] = puVar8[-2];
      param_3[-1] = uVar4;
      *puVar9 = uVar1;
      *(ulonglong *)((longlong)puVar8 - 0x14) = CONCAT44(uStack_1c,uStack_20);
      puVar8[-2] = uVar2;
      puVar8[-1] = uVar3;
      param_3 = puVar5;
      puVar8 = puVar9;
    }
    else {
      uVar1 = *puVar7;
      uVar2 = *(undefined8 *)((longlong)puVar7 + 0xc);
      uVar3 = *(undefined8 *)((longlong)puVar7 + 0x14);
      uStack_20 = (undefined4)puVar7[1];
      uVar4 = *(undefined8 *)((longlong)puVar9 + -0x14);
      uStack_1c = (undefined4)uVar2;
      *puVar7 = *puVar6;
      puVar7[1] = uVar4;
      uVar4 = puVar9[-1];
      *(undefined8 *)((longlong)puVar7 + 0xc) = puVar9[-2];
      *(undefined8 *)((longlong)puVar7 + 0x14) = uVar4;
      puVar7 = (undefined8 *)((longlong)puVar7 + 0x1c);
      *puVar6 = uVar1;
      *(ulonglong *)((longlong)puVar9 + -0x14) = CONCAT44(uStack_1c,uStack_20);
      puVar9[-2] = uVar2;
      puVar9[-1] = uVar3;
    }
  }
  goto LAB_1801ea864;
}



/* ===== 1801eac10 FUN_1801eac10 ===== */

void FUN_1801eac10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(float *)(param_2 + 3) <= *(float *)(param_1 + 3) &&
      *(float *)(param_1 + 3) != *(float *)(param_2 + 3)) {
    uVar1 = *param_2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x14);
    uStack_20 = (undefined4)param_2[1];
    uVar4 = param_1[1];
    uStack_1c = (undefined4)uVar2;
    *param_2 = *param_1;
    param_2[1] = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_1 + 0x14);
    *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)((longlong)param_1 + 0xc);
    *(undefined8 *)((longlong)param_2 + 0x14) = uVar4;
    *param_1 = uVar1;
    param_1[1] = CONCAT44(uStack_1c,uStack_20);
    *(undefined8 *)((longlong)param_1 + 0xc) = uVar2;
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar3;
  }
  if (*(float *)(param_3 + 3) <= *(float *)(param_2 + 3) &&
      *(float *)(param_2 + 3) != *(float *)(param_3 + 3)) {
    uVar1 = *param_3;
    uVar2 = *(undefined8 *)((longlong)param_3 + 0xc);
    uVar3 = *(undefined8 *)((longlong)param_3 + 0x14);
    uStack_20 = (undefined4)param_3[1];
    uVar4 = param_2[1];
    uStack_1c = (undefined4)uVar2;
    *param_3 = *param_2;
    param_3[1] = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_3 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_3 + 0x14) = uVar4;
    *param_2 = uVar1;
    param_2[1] = CONCAT44(uStack_1c,uStack_20);
    *(undefined8 *)((longlong)param_2 + 0xc) = uVar2;
    *(undefined8 *)((longlong)param_2 + 0x14) = uVar3;
    if (*(float *)(param_2 + 3) <= *(float *)(param_1 + 3) &&
        *(float *)(param_1 + 3) != *(float *)(param_2 + 3)) {
      uVar4 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar4;
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x14);
      *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)((longlong)param_1 + 0xc);
      *(undefined8 *)((longlong)param_2 + 0x14) = uVar4;
      *param_1 = uVar1;
      param_1[1] = CONCAT44(uStack_1c,uStack_20);
      *(undefined8 *)((longlong)param_1 + 0xc) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x14) = uVar3;
    }
  }
  return;
}



/* ===== 1801eacb0 FUN_1801eacb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801eacb0(longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char **ppcVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_f8 [32];
  uint local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_b8 [8];
  longlong local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  char *local_78 [3];
  char *local_60 [9];
  
  local_60[0] = (char *)(DAT_180919500 ^ (ulonglong)auStack_f8);
  if (DAT_180cc409d != '\0') {
    local_b0 = 0;
    local_a8 = 0;
    local_84 = 0;
    local_80 = 0x3f800000;
    local_7c = 0x437a0000;
    local_a4 = 0;
    uStack_9c = 0;
    local_94 = 0;
    uStack_8c = 0;
    if ((((*param_1 == 0) || (DAT_180ca09f0 == 0)) ||
        (iVar5 = FUN_180011200(*param_1 + (ulonglong)DAT_180ca09f0), 999 < iVar5 - 1U)) ||
       (cVar4 = FUN_1801ec0c0(param_1,&local_b0), cVar4 == '\0')) {
      DAT_180cc409d = '\0';
    }
    else {
      uVar6 = DAT_180ceb090;
      uVar7 = DAT_180ceb094;
      if ((DAT_180cc409e == '\0') && (DAT_1811089f0 != 0)) {
        local_78[0] = "CCSPlayer_MovementServices";
        ppcVar8 = local_78;
        local_78[1] = "CPlayer_MovementServices_Humanoid";
        local_78[2] = "CPlayer_MovementServices";
        DAT_180cc409e = '\x01';
        do {
          pcVar1 = *ppcVar8;
          if (uVar7 == 0) {
            DAT_180ceb094 = FUN_18038eaf0(pcVar1,"m_flStaminaAtJumpStart");
            uVar6 = DAT_180ceb090;
            uVar7 = DAT_180ceb094;
          }
          if (uVar6 == 0) {
            uVar6 = FUN_18038eaf0(pcVar1,"m_flVelMulAtJumpStart");
            DAT_180ceb090 = uVar6;
            uVar7 = DAT_180ceb094;
          }
          ppcVar8 = ppcVar8 + 1;
        } while (ppcVar8 != local_78 + 3);
      }
      lVar2 = local_b0;
      fVar10 = DAT_1808acda0;
      if ((local_b0 == 0) || (uVar7 == 0)) {
        fVar9 = DAT_1808acda0;
      }
      else {
        fVar9 = (float)FUN_18000f3d0((ulonglong)uVar7 + local_b0);
      }
      if ((lVar2 != 0) && (uVar6 != 0)) {
        fVar10 = (float)FUN_18000f3d0((ulonglong)uVar6 + lVar2);
      }
      if ((local_a8 & 1) == 0) {
        fVar3 = local_94._4_4_;
        if (0.0 < local_94._4_4_) {
          FUN_1800ad890(local_b8);
          local_c8 = (double)fVar10;
          local_d0 = (double)fVar9;
          local_d8 = (uint)(DAT_180cc409c != '\0');
          FUN_1801ec960("jb: result cmd %lld success at cmd %lld (vz %.1f ramp %d stamina at jump %.2f velmul at jump %.3f)"
                        ,DAT_1809ee978,param_2,(double)fVar3);
          DAT_180cc409d = '\0';
        }
      }
      else {
        FUN_1800ad890(local_b8);
        local_d8 = (uint)(DAT_180cc409c != '\0');
        FUN_1801ec960("jb: result cmd %lld FAIL at cmd %lld (standing on the ground, vz %.1f ramp %d)"
                      ,DAT_1809ee978,param_2,(double)local_94._4_4_);
        DAT_180cc409d = '\0';
      }
    }
  }
  return;
}



/* ===== 1801eafb0 FUN_1801eafb0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801eafb0(longlong *param_1,longlong param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float fVar7;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined1 local_60 [48];
  
  uVar2 = (uint)DAT_180ca09b0;
  if ((((*param_1 != 0) && (DAT_180ca0a3c != 0)) && ((uint)DAT_180ca09b0 != 0)) &&
     ((DAT_180ca09b0._4_4_ != 0 &&
      (lVar4 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca0a3c), lVar4 - 0x10000U < 0x7ffffffeffff
      )))) {
    puVar5 = (undefined8 *)FUN_1800111b0(&local_b8,(ulonglong)uVar2 + lVar4);
    local_a8 = *puVar5;
    fVar7 = *(float *)(puVar5 + 1);
    local_a0 = fVar7;
    puVar5 = (undefined8 *)FUN_1800111b0(local_60,(ulonglong)DAT_180ca09b0._4_4_ + lVar4);
    local_b8 = *puVar5;
    local_b0 = *(float *)(puVar5 + 1);
    if ((((uint)fVar7 & 0x7f800000) != 0x7f800000) &&
       ((((uint)local_b0 & 0x7f800000) != 0x7f800000 && (fVar7 < local_b0)))) {
      fVar7 = (float)param_3 * DAT_1808ac00c;
      if ((*param_1 == 0) ||
         (((DAT_180ca09f8 == 0 ||
           (lVar4 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca09f8), lVar4 == 0)) ||
          (DAT_180ca0950 == 0)))) {
        local_d8 = 0.0;
        fStack_d4 = 0.0;
        local_d0 = 0.0;
      }
      else {
        pfVar6 = (float *)FUN_1800111b0(local_60,lVar4 + (ulonglong)DAT_180ca0950);
        local_d8 = *pfVar6;
        fStack_d4 = pfVar6[1];
        local_d0 = pfVar6[2];
      }
      fVar1 = DAT_1808ac34c;
      local_68 = 0x3f800000;
      local_78 = 0;
      local_c8 = local_d8 + fVar7 * *(float *)(param_2 + 0x18);
      local_70 = 0;
      local_6c = 0;
      local_c4 = fVar7 * *(float *)(param_2 + 0x1c) + fStack_d4;
      local_c0 = (fVar7 * *(float *)(param_2 + 0x20) + local_d0) -
                 (fVar7 * DAT_1808acbdc * fVar7 + DAT_1808ac540);
      local_98 = _DAT_1808ad2c0;
      uStack_90 = _UNK_1808ad2c8;
      local_88 = 0;
      uStack_80 = 0;
      cVar3 = FUN_1802aed00(&local_d8,&local_c8,&local_a8,&local_b8,*param_1,0x1c1003,4,7,&local_98,
                            0);
      if ((cVar3 != '\0') && (((char)local_6c != '\0' || (fVar1 <= (float)local_98)))) {
        return 0;
      }
    }
  }
  return 1;
}



/* ===== 1801eb220 FUN_1801eb220 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801eb220(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float *pfVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  undefined8 local_118;
  float local_110;
  int local_108 [2];
  undefined8 local_100;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_a0;
  undefined1 local_98 [112];
  
  uVar7 = (uint)DAT_180ca09b0;
  if (*param_3 == 0) {
    return;
  }
  if (DAT_180ca0a3c == 0) {
    return;
  }
  if ((uint)DAT_180ca09b0 == 0) {
    return;
  }
  if (DAT_180ca09b0._4_4_ == 0) {
    return;
  }
  lVar9 = FUN_18000f3a0(*param_3 + (ulonglong)DAT_180ca0a3c);
  if (0x7ffffffefffe < lVar9 - 0x10000U) {
    return;
  }
  puVar10 = (undefined8 *)FUN_1800111b0(&local_100,(ulonglong)uVar7 + lVar9);
  local_e0 = *puVar10;
  fVar16 = *(float *)(puVar10 + 1);
  local_d8 = fVar16;
  puVar10 = (undefined8 *)FUN_1800111b0(local_98,(ulonglong)DAT_180ca09b0._4_4_ + lVar9);
  local_100 = *puVar10;
  fVar6 = *(float *)(puVar10 + 1);
  if (((uint)fVar16 & 0x7f800000) == 0x7f800000) {
    return;
  }
  if (((uint)fVar6 & 0x7f800000) == 0x7f800000) {
    return;
  }
  if (fVar6 <= fVar16) {
    return;
  }
  local_f8 = fVar6;
  if ((((*param_3 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar9 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_3), lVar9 == 0)) ||
     (DAT_180ca0950 == 0)) {
    local_118 = 0;
    local_110 = 0.0;
  }
  else {
    puVar10 = (undefined8 *)FUN_1800111b0(local_98,lVar9 + (ulonglong)DAT_180ca0950);
    local_118 = *puVar10;
    local_110 = *(float *)(puVar10 + 1);
  }
  if ((((*(byte *)(param_1 + 0x60) & 4) != 0) && (*param_4 != 0)) &&
     ((DAT_180ca09a8 != 0 &&
      (fVar16 = (float)FUN_18000f3d0((ulonglong)DAT_180ca09a8 + *param_4), 0.0 < fVar16)))) {
    local_f8 = 72.0;
    local_110 = local_110 - (DAT_1808acad0 - fVar6) * DAT_1808ac1f4;
  }
  if (DAT_1809ee9e0 == 0) {
    if (DAT_1809ee9e8 == '\0') {
      DAT_1809ee9e0 = FUN_180264b70(PTR_s_sv_gravity_1809ee9d8);
      DAT_1809ee9e8 = DAT_1809ee9e0 == 0;
      if (DAT_1809ee9e0 != 0) goto LAB_1801eb443;
    }
LAB_1801eb470:
    fVar16 = DAT_1808acc30;
  }
  else {
LAB_1801eb443:
    fVar16 = (float)FUN_180264d70(DAT_1809ee9e0);
    if (((uint)fVar16 & 0x7f800000) == 0x7f800000) goto LAB_1801eb470;
  }
  if (DAT_1809ee988 == 0) {
    if (DAT_1809ee990 == '\0') {
      DAT_1809ee988 = FUN_180264b70(PTR_s_sv_standable_normal_1809ee980);
      DAT_1809ee990 = DAT_1809ee988 == 0;
      if (DAT_1809ee988 != 0) goto LAB_1801eb4b7;
    }
LAB_1801eb4e2:
    fVar6 = DAT_1808ac254;
  }
  else {
LAB_1801eb4b7:
    fVar6 = (float)FUN_180264d70(DAT_1809ee988);
    if (((uint)fVar6 & 0x7f800000) == 0x7f800000) goto LAB_1801eb4e2;
  }
  fVar1 = *(float *)(param_4 + 3);
  fVar2 = *(float *)((longlong)param_4 + 0x1c);
  fVar3 = *(float *)(param_4 + 4);
  if (((DAT_180ca0a48 == 0) ||
      (fVar17 = (float)FUN_18000f3d0((ulonglong)DAT_180ca0a48 + *param_3),
      ((uint)fVar17 & 0x7f800000) == 0x7f800000)) || (fVar17 <= 0.0)) {
    fVar17 = DAT_1808ac34c;
  }
  iVar14 = 0;
  lVar9 = *param_3;
  local_f0 = fVar1 * DAT_1808ac00c + (float)local_118;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0x3f800000;
  local_ec = fVar2 * DAT_1808ac00c + local_118._4_4_;
  local_d0 = _DAT_1808ad2c0;
  uStack_c8 = _UNK_1808ad2c8;
  local_e8 = ((fVar3 - fVar17 * fVar16 * DAT_1808ac00c * DAT_1808ac1f4) * DAT_1808ac00c + local_110)
             - DAT_1808ac540;
  local_c0 = 0;
  uStack_b8 = 0;
  cVar5 = FUN_1802aed00(&local_118,&local_f0,&local_e0,&local_100,lVar9,0x1c1003,4,7,&local_d0,0);
  if (cVar5 == '\0') {
    return;
  }
  if ((float)local_d0 <= 0.0) {
    return;
  }
  if (DAT_1808ac34c <= (float)local_d0) {
    return;
  }
  if ((float)uStack_b8 < fVar6) {
    return;
  }
  if ((float)uStack_b8 < DAT_1808ac30c) {
    if (fVar2 * local_c0._4_4_ + fVar1 * (float)local_c0 < 0.0) {
      return;
    }
  }
  local_108[0] = 1;
  pfVar11 = (float *)&local_d0;
  DAT_180cc4129 = 1;
  if ((float)local_d0 < DAT_1808abfbc) {
    pfVar11 = (float *)&DAT_1805b7fe8;
  }
  if (DAT_1808ac31c < (float)local_d0) {
    pfVar11 = (float *)&DAT_1805bdf28;
  }
  fVar16 = *pfVar11;
  piVar12 = local_108;
  if (0 < DAT_180920cec) {
    piVar12 = &DAT_180920cec;
  }
  if (5 < DAT_180920cec) {
    piVar12 = &DAT_1805bbf68;
  }
  iVar4 = *piVar12;
  FUN_1801ec5d0(param_2,4);
  uVar8 = (undefined4)((ulonglong)lVar9 >> 0x20);
  uVar15 = 0xffffffff;
  if (0 < iVar4) {
    do {
      fVar6 = (float)iVar14 * (fVar16 / (float)iVar4);
      lVar13 = FUN_180265420(param_2);
      if (lVar13 == 0) {
        DAT_181115098 = DAT_181115098 + 1;
        if (0x40 < (int)DAT_181115098) {
          uVar7 = DAT_181115098 & 0x8000003f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
          }
          if (uVar7 != 0) goto LAB_1801eb784;
        }
        if (param_2 == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(undefined4 *)(param_2 + 0x20);
        }
        lVar9 = CONCAT44((int)((ulonglong)lVar9 >> 0x20),uVar8);
        FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",4,"press",
                      (double)fVar6,lVar9);
      }
      else {
        *(uint *)(lVar13 + 0x10) = *(uint *)(lVar13 + 0x10) | 7;
        *(float *)(lVar13 + 0x24) = fVar6;
        *(undefined8 *)(lVar13 + 0x18) = 4;
        *(undefined1 *)(lVar13 + 0x20) = 1;
      }
LAB_1801eb784:
      iVar14 = iVar14 + 1;
      fVar6 = (float)iVar14 * (fVar16 / (float)iVar4);
      lVar13 = FUN_180265420(param_2);
      if (lVar13 == 0) {
        DAT_181115098 = DAT_181115098 + 1;
        if (0x40 < (int)DAT_181115098) {
          uVar7 = DAT_181115098 & 0x8000003f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
          }
          if (uVar7 != 0) goto LAB_1801eb80a;
        }
        if (param_2 == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(undefined4 *)(param_2 + 0x20);
        }
        lVar9 = CONCAT44((int)((ulonglong)lVar9 >> 0x20),uVar8);
        FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",4,"release",
                      (double)fVar6,lVar9);
      }
      else {
        *(uint *)(lVar13 + 0x10) = *(uint *)(lVar13 + 0x10) | 7;
        *(float *)(lVar13 + 0x24) = fVar6;
        *(undefined8 *)(lVar13 + 0x18) = 4;
        *(undefined1 *)(lVar13 + 0x20) = 0;
      }
LAB_1801eb80a:
      uVar8 = (undefined4)((ulonglong)lVar9 >> 0x20);
    } while (iVar14 < iVar4);
  }
  if (DAT_180920cfd == '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x60) & 2) == 0) {
    return;
  }
  FUN_1801ec5d0(param_2,2);
  fVar16 = (float)FUN_1801ec6f0();
  lVar9 = FUN_180265420(param_2);
  if (lVar9 == 0) {
    DAT_181115098 = DAT_181115098 + 1;
    if (0x40 < (int)DAT_181115098) {
      uVar7 = DAT_181115098 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      if (uVar7 != 0) goto LAB_1801eb8bd;
    }
    if (param_2 != 0) {
      uVar15 = *(undefined4 *)(param_2 + 0x20);
    }
    FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",2,"press",
                  (double)fVar16,CONCAT44(uVar8,uVar15));
  }
  else {
    *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 7;
    *(float *)(lVar9 + 0x24) = fVar16;
    *(undefined8 *)(lVar9 + 0x18) = 2;
    *(undefined1 *)(lVar9 + 0x20) = 1;
  }
LAB_1801eb8bd:
  *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | 2;
  uVar18 = *(ulonglong *)(param_1 + 0x68) | _UNK_1808ad3b8;
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | _DAT_1808ad3b0;
  *(ulonglong *)(param_1 + 0x68) = uVar18;
  return;
}



/* ===== 1801eb920 FUN_1801eb920 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801eb920(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong local_res8 [4];
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == DAT_180c9a6e0) {
    return;
  }
  DAT_180c9a6e0 = lVar1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res8);
    DAT_181108a00 = local_res8[0];
    local_res8[0] = FUN_1803a0c50();
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res8[0] = DAT_1811089f8;
  }
  lVar1 = local_res8[0];
  fVar7 = DAT_1808ac34c;
  local_88 = 0;
  local_80 = 0;
  local_5c = 0;
  local_58 = 0x3f800000;
  local_54 = 0x437a0000;
  local_7c = 0;
  uStack_74 = 0;
  local_6c = 0;
  uStack_64 = 0;
  DAT_1811089f8 = local_res8[0];
  if ((((local_res8[0] == 0) || (DAT_180ca09f0 == 0)) ||
      (iVar4 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res8[0]), 999 < iVar4 - 1U)) ||
     (cVar3 = FUN_1801ec0c0(local_res8,&local_88), cVar3 == '\0')) {
    DAT_181115090 = 0.0;
    return;
  }
  fVar2 = local_6c._4_4_;
  if (DAT_1809ee9e0 == 0) {
    if (DAT_1809ee9e8 == '\0') {
      DAT_1809ee9e0 = FUN_180264b70(PTR_s_sv_gravity_1809ee9d8);
      DAT_1809ee9e8 = DAT_1809ee9e0 == 0;
      if (DAT_1809ee9e0 != 0) goto LAB_1801eba80;
    }
  }
  else {
LAB_1801eba80:
    fVar5 = (float)FUN_180264d70(DAT_1809ee9e0);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,fVar5);
    if (((uint)fVar5 & 0x7f800000) != 0x7f800000) goto LAB_1801ebab5;
  }
  fVar5 = DAT_1808acc30;
LAB_1801ebab5:
  if (((DAT_180ca0a48 != 0) &&
      (fVar6 = (float)FUN_18000f3d0(lVar1 + (ulonglong)DAT_180ca0a48),
      ((uint)fVar6 & 0x7f800000) != 0x7f800000)) && (0.0 < fVar6)) {
    fVar7 = fVar6;
  }
  if (((DAT_181115090 < DAT_1808ace70) && ((local_80 & 1) == 0)) &&
     ((float)((uint)(fVar2 - (DAT_1808ac040 - fVar7 * fVar5 * DAT_1808ac00c * DAT_1808ac1f4)) &
             _DAT_1808ade90) < DAT_1808ac064)) {
    FUN_1801ec960("edgebug: hit (fall %.1f)",(double)DAT_181115090);
  }
  DAT_181115090 = fVar2;
  return;
}



/* ===== 1801ebba0 FUN_1801ebba0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801ebba0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  byte local_84;
  undefined1 local_83;
  undefined2 uStack_82;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined2 local_77;
  byte local_75;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  DAT_180cc4129 = 0;
  FUN_1801eb920();
  if (DAT_180920cea == 0) {
    _DAT_1809ee9a9 = local_60._1_2_;
    DAT_1809ee9ab = local_60._3_1_;
    _DAT_1809ee9be = local_4c._2_2_;
    _DAT_1809ee9cd = local_3c._1_2_;
    DAT_1809ee9cf = local_3c._3_1_;
    _DAT_1809ee9d4 = local_34;
    DAT_1809ee9a0 = -1;
    DAT_1809ee9a8 = DAT_180920cea;
    _DAT_1809ee9ac = 0xffffffff;
    _DAT_1809ee9b0 = 0;
    _DAT_1809ee9b8 = 0.0;
    _DAT_1809ee9bc = 0;
    _DAT_1809ee9c0 = 0;
    _DAT_1809ee9c4 = 0x437a0000;
    _DAT_1809ee9c8 = 0x3f800000;
    DAT_1809ee9cc = DAT_180920cea;
    _DAT_1809ee9d0 = 0xffffffff;
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_180920cea == 0) {
    return;
  }
  if (DAT_180cc3f9c != '\0') {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = CONCAT44(uStackX_c,local_res8);
    local_res10 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res10 = DAT_1811089f8;
  }
  lVar3 = local_res10;
  if (local_res10 == 0) {
    DAT_1811089f8 = local_res10;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_1811089f8 = local_res10;
    return;
  }
  DAT_1811089f8 = local_res10;
  iVar5 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res10);
  if (999 < iVar5 - 1U) {
    return;
  }
  if ((DAT_180ca0a44 != 0) &&
     (cVar4 = FUN_180011220(lVar3 + (ulonglong)DAT_180ca0a44), (cVar4 - 7U & 0xfd) == 0)) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (0x7ffffffefffe < lVar3 - 0x10000U) {
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(lVar3 + 0x40) - 0x10000U) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != DAT_1809ee9a0) {
    if (DAT_1809ee998 == *(longlong *)(param_1 + 8) + -1) {
      DAT_1809ee9cc = DAT_180cc4128;
    }
    else {
      DAT_1809ee9cc = (byte)(*(uint *)(param_1 + 0x60) >> 2) & 1;
    }
    _DAT_1809ee9a9 = local_60._1_2_;
    DAT_1809ee9ab = local_60._3_1_;
    _DAT_1809ee9be = local_4c._2_2_;
    _DAT_1809ee9cd = local_3c._1_2_;
    DAT_1809ee9cf = local_3c._3_1_;
    _DAT_1809ee9d4 = local_34;
    DAT_1809ee9a8 = 0;
    _DAT_1809ee9ac = 0xffffffff;
    _DAT_1809ee9b0 = 0;
    _DAT_1809ee9b8 = 0.0;
    _DAT_1809ee9bc = 0;
    _DAT_1809ee9c0 = 0;
    _DAT_1809ee9c4 = 0x437a0000;
    _DAT_1809ee9c8 = 0x3f800000;
    _DAT_1809ee9d0 = 0xffffffff;
    DAT_1809ee9a0 = *(longlong *)(param_1 + 8);
    local_68 = 0;
    local_60 = 0;
    local_3c = 0;
    local_5c = 0;
    uStack_54 = 0;
    local_38 = 0x3f800000;
    local_4c = 0;
    uStack_44 = 0;
    local_34 = 0x437a0000;
    cVar4 = FUN_1801ec0c0(&local_res10,&local_68);
    if (cVar4 == '\0') {
      return;
    }
    if ((local_60 & 1) != 0) {
      return;
    }
    if (0.0 < local_4c._4_4_) {
      return;
    }
    local_res8 = 1;
    puVar6 = &local_res8;
    if (0 < DAT_180920cf0) {
      puVar6 = &DAT_180920cf0;
    }
    if (0x20 < DAT_180920cf0) {
      puVar6 = &DAT_1805b9fa8;
    }
    uVar2 = *puVar6;
    cVar4 = FUN_1801eafb0(&local_res10,&local_68,uVar2);
    if (cVar4 == '\0') {
      return;
    }
    cVar4 = FUN_1801d7bc0();
    if (cVar4 == '\0') {
      FUN_1801eb220(param_1,lVar3,&local_res10,&local_68);
      return;
    }
    local_90 = DAT_180920cf4;
    local_8c = DAT_180920cf8;
    local_98 = 1;
    local_88 = *(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0x1c);
    local_84 = DAT_1809ee9cc;
    local_94 = uVar2;
    pbVar7 = (byte *)FUN_1801e3490(&local_68,param_1,lVar3,&local_98);
    uVar1 = *(undefined8 *)(pbVar7 + 0x15);
    DAT_1809ee9a8 = *pbVar7;
    _DAT_1809ee9ac = *(undefined4 *)(pbVar7 + 4);
    _DAT_1809ee9b0 = *(undefined8 *)(pbVar7 + 8);
    _DAT_1809ee9b8 = *(float *)(pbVar7 + 0x10);
    _DAT_1809ee9bc = *(undefined2 *)(pbVar7 + 0x14);
    uStack_78 = (undefined1)((uint)*(undefined4 *)(pbVar7 + 0x1d) >> 0x18);
    local_77 = *(undefined2 *)(pbVar7 + 0x21);
    local_83 = (undefined1)uVar1;
    uStack_82 = (undefined2)((ulonglong)uVar1 >> 8);
    uStack_80 = (undefined4)((ulonglong)uVar1 >> 0x18);
    uStack_7c._0_1_ = (undefined1)((ulonglong)uVar1 >> 0x38);
    _DAT_1809ee9c4 = CONCAT31((int3)*(undefined4 *)(pbVar7 + 0x1d),(undefined1)uStack_7c);
    local_75 = pbVar7[0x23];
    _DAT_1809ee9d0 = *(undefined4 *)(pbVar7 + 0x24);
    _DAT_1809ee9c0 = uStack_80;
    _DAT_1809ee9c8 = CONCAT13(local_75,CONCAT21(local_77,uStack_78));
    _DAT_1809ee9be = uStack_82;
    if (DAT_1809ee9a8 == 0) goto LAB_1801ec062;
    uStack_7c = _DAT_1809ee9c4;
    FUN_1801ec960("edgebug: flip=%d steer=%d yaw=%.1f fwd=%.1f left=%.1f in %d ticks",_DAT_1809ee9ac
                  ,pbVar7[0x14],(double)*(float *)(pbVar7 + 8),(double)*(float *)(pbVar7 + 0xc),
                  (double)_DAT_1809ee9b8,_DAT_1809ee9d0);
  }
  if (DAT_1809ee9a8 != 0) {
    DAT_180cc4129 = 1;
    FUN_1801e3ef0(param_1,lVar3,&DAT_1809ee9ac,DAT_1809ee9cc,DAT_180920cfc);
  }
LAB_1801ec062:
  DAT_180cc4128 = *(byte *)(param_1 + 0x60) >> 2 & 1;
  DAT_1809ee998 = *(undefined8 *)(param_1 + 8);
  return;
}



/* ===== 1801ec0c0 FUN_1801ec0c0 ===== */

ulonglong FUN_1801ec0c0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x437a0000;
  if ((((*param_1 != 0) && (DAT_180ca0a18 != 0)) && (DAT_180ca0a1c != 0)) &&
     (in_RAX = (ulonglong)DAT_180ca0970, DAT_180ca0970 != 0)) {
    lVar4 = FUN_18000f3a0(*param_1 + in_RAX);
    *param_2 = lVar4;
    in_RAX = 0;
    if (lVar4 != 0) {
      uVar2 = FUN_180011200((ulonglong)DAT_180ca0a18 + *param_1);
      uVar6 = (ulonglong)DAT_180ca0a1c;
      *(undefined4 *)(param_2 + 1) = uVar2;
      puVar5 = (undefined8 *)FUN_1800111b0(&local_28,uVar6 + *param_1);
      uVar3 = DAT_180ca09bc;
      uVar1 = *puVar5;
      uVar2 = (undefined4)uVar1;
      uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_20 = *(undefined4 *)(puVar5 + 1);
      *(undefined8 *)((longlong)param_2 + 0xc) = uVar1;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_20;
      if (uVar3 != 0) {
        puVar5 = (undefined8 *)FUN_1800111b0(local_18,(ulonglong)uVar3 + *param_1);
        uVar2 = (undefined4)*puVar5;
        uVar7 = (undefined4)((ulonglong)*puVar5 >> 0x20);
        local_20 = *(undefined4 *)(puVar5 + 1);
      }
      local_28 = CONCAT44(uVar7,uVar2);
      param_2[3] = local_28;
      *(undefined4 *)(param_2 + 4) = local_20;
      if (((*(uint *)(param_2 + 3) & 0x7f800000) == 0x7f800000) ||
         ((*(uint *)(param_2 + 4) & 0x7f800000) == 0x7f800000)) {
        param_2[3] = *(longlong *)((longlong)param_2 + 0xc);
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)((longlong)param_2 + 0x14);
      }
      if (DAT_180ca0994 != 0) {
        uVar2 = FUN_18000f3d0((ulonglong)DAT_180ca0994 + *param_2);
        *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
      }
      if (DAT_180ca0998 != 0) {
        uVar2 = FUN_18000f3d0((ulonglong)DAT_180ca0998 + *param_2);
        *(undefined4 *)(param_2 + 5) = uVar2;
      }
      if (DAT_180ca09a0 != 0) {
        uVar2 = FUN_18000f3d0((ulonglong)DAT_180ca09a0 + *param_2);
        *(undefined4 *)((longlong)param_2 + 0x2c) = uVar2;
      }
      if (DAT_180ca09a4 != 0) {
        uVar2 = FUN_18000f3d0((ulonglong)DAT_180ca09a4 + *param_2);
        *(undefined4 *)(param_2 + 6) = uVar2;
      }
      if (DAT_180ca099c != 0) {
        uVar2 = FUN_18000f3d0((ulonglong)DAT_180ca099c + *param_2);
        *(undefined4 *)((longlong)param_2 + 0x34) = uVar2;
      }
      if ((((uint)*(float *)(param_2 + 6) & 0x7f800000) == 0x7f800000) ||
         (*(float *)(param_2 + 6) <= 0.0)) {
        *(undefined4 *)(param_2 + 6) = 0x3f800000;
      }
      if ((((uint)*(float *)((longlong)param_2 + 0x34) & 0x7f800000) == 0x7f800000) ||
         (*(float *)((longlong)param_2 + 0x34) <= DAT_1808ac34c)) {
        *(undefined4 *)((longlong)param_2 + 0x34) = 0x437a0000;
      }
      if ((((uint)*(float *)((longlong)param_2 + 0x2c) & 0x7f800000) == 0x7f800000) ||
         (*(float *)((longlong)param_2 + 0x2c) < 0.0)) {
        *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
      }
      uVar3 = *(uint *)((longlong)param_2 + 0xc) & 0x7f800000;
      in_RAX = (ulonglong)CONCAT31((int3)(uVar3 >> 8),uVar3 != 0x7f800000);
      if ((uVar3 != 0x7f800000) &&
         (uVar3 = *(uint *)(param_2 + 2) & 0x7f800000,
         in_RAX = (ulonglong)CONCAT31((int3)(uVar3 >> 8),uVar3 != 0x7f800000), uVar3 != 0x7f800000))
      {
        return in_RAX;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1801ec340 FUN_1801ec340 ===== */

ulonglong FUN_1801ec340(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_1803a08e0();
  if ((((lVar2 != 0) && (DAT_1809619a0 != 0)) && (DAT_1809619bc != 0)) &&
     (lVar2 = FUN_18000f3a0((ulonglong)DAT_1809619c0 + lVar2 + (ulonglong)DAT_1809619a0), lVar2 != 0
     )) {
    if ((DAT_180ca0a28 == 0) ||
       (cVar1 = FUN_180011220((ulonglong)DAT_180ca0a28 + *param_1), cVar1 == '\0')) {
      lVar3 = 0;
    }
    else {
      lVar3 = 4;
    }
    uVar4 = FUN_18000f3d0(lVar3 + (ulonglong)DAT_1809619bc + lVar2);
    if ((((uint)(float)uVar4 & 0x7f800000) != 0x7f800000) && (DAT_1808ac34c < (float)uVar4)) {
      return uVar4;
    }
  }
  return (ulonglong)DAT_1808acb90;
}



/* ===== 1801ec3f0 FUN_1801ec3f0 ===== */

void FUN_1801ec3f0(longlong param_1,uint param_2,uint param_3,char param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((((param_1 != 0) && (lVar4 = *(longlong *)(param_1 + 0x40), lVar4 - 0x10000U < 0x7ffffffeffff)
       ) && (*(longlong *)(lVar4 + 0x40) - 0x10000U < 0x7ffffffeffff)) &&
     (((param_2 & 0x7f800000) != 0x7f800000 && ((param_3 & 0x7f800000) != 0x7f800000)))) {
    if (param_4 == '\0') {
      DAT_180ceb098 = 2;
    }
    *(uint *)(*(longlong *)(lVar4 + 0x40) + 0x18) = param_2;
    *(uint *)(*(longlong *)(lVar4 + 0x40) + 0x1c) = param_3;
    puVar1 = (uint *)(*(longlong *)(lVar4 + 0x40) + 0x10);
    *puVar1 = *puVar1 | 3;
    *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 4;
    if (((param_4 != '\0') && (*(int *)(param_1 + 0x30) - 1U < 0x100)) &&
       ((lVar4 = *(longlong *)(param_1 + 0x38), lVar4 - 0x10000U < 0x7ffffffeffff &&
        (iVar5 = 0, 0 < *(int *)(param_1 + 0x30))))) {
      do {
        lVar2 = *(longlong *)(lVar4 + 8 + (longlong)iVar5 * 8);
        if ((lVar2 - 0x10000U < 0x7ffffffeffff) &&
           (lVar3 = *(longlong *)(lVar2 + 0x18), lVar3 - 0x10000U < 0x7ffffffeffff)) {
          *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 3;
          *(uint *)(lVar3 + 0x18) = param_2;
          *(uint *)(lVar3 + 0x1c) = param_3;
          *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 1;
          lVar4 = *(longlong *)(param_1 + 0x38);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x30));
    }
  }
  return;
}



/* ===== 1801ec510 FUN_1801ec510 ===== */

undefined8 FUN_1801ec510(longlong param_1,undefined8 param_2,char param_3,float param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = FUN_180265420();
  if (lVar3 != 0) {
    *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 7;
    *(float *)(lVar3 + 0x24) = param_4;
    *(undefined8 *)(lVar3 + 0x18) = param_2;
    *(char *)(lVar3 + 0x20) = param_3;
    return 1;
  }
  DAT_181115098 = DAT_181115098 + 1;
  if (0x40 < (int)DAT_181115098) {
    uVar1 = DAT_181115098 & 0x8000003f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xffffffc0) + 1;
    }
    if (uVar1 != 0) {
      return 0;
    }
  }
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x20);
  }
  pcVar4 = "release";
  if (param_3 != '\0') {
    pcVar4 = "press";
  }
  FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",param_2,pcVar4,
                (double)param_4,uVar2);
  return 0;
}



/* ===== 1801ec5d0 FUN_1801ec5d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ec5d0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_238 [32];
  longlong local_218 [64];
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_180919500 ^ (ulonglong)auStack_238;
    piVar7 = *(int **)(param_1 + 0x28);
    if (((piVar7 != (int *)0x0) && (0 < *(int *)(param_1 + 0x20))) &&
       (*(int *)(param_1 + 0x20) <= *piVar7)) {
      FUN_180540170(local_218,0,0x200);
      iVar8 = 0;
      iVar9 = 0;
      iVar6 = 0;
      do {
        lVar2 = *(longlong *)(piVar7 + (longlong)iVar6 * 2 + 2);
        if (((lVar2 - 0x10000U < 0x7ffffffeffff) && ((*(byte *)(lVar2 + 0x10) & 1) != 0)) &&
           (((*(ulonglong *)(lVar2 + 0x18) & param_2) != 0 && (iVar8 < 0x40)))) {
          lVar4 = (longlong)iVar8;
          iVar8 = iVar8 + 1;
          local_218[lVar4] = lVar2;
        }
        else {
          lVar4 = (longlong)iVar9;
          iVar9 = iVar9 + 1;
          *(longlong *)(piVar7 + lVar4 * 2 + 2) = lVar2;
          piVar7 = *(int **)(param_1 + 0x28);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x20));
      uVar5 = 0;
      if (0 < iVar8) {
        do {
          iVar6 = (int)uVar5;
          plVar1 = local_218 + uVar5;
          uVar3 = iVar6 + 1;
          uVar5 = (ulonglong)uVar3;
          *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(iVar6 + iVar9) * 8) = *plVar1
          ;
        } while ((int)uVar3 < iVar8);
      }
      *(int *)(param_1 + 0x20) = iVar9;
    }
  }
  return;
}



/* ===== 1801ec6f0 FUN_1801ec6f0 ===== */

float FUN_1801ec6f0(float param_1)

{
  float *pfVar1;
  float local_res10 [2];
  float local_res18 [4];
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    return 0.0;
  }
  local_res10[0] = 0.0;
  local_res18[0] = (float)FUN_180519080(param_1 * DAT_1808acab0);
  local_res18[0] = local_res18[0] * DAT_1808ac00c;
  pfVar1 = local_res10;
  if (0.0 <= local_res18[0]) {
    pfVar1 = local_res18;
  }
  if (DAT_1808ac314 < local_res18[0]) {
    pfVar1 = (float *)&DAT_18060a088;
  }
  return *pfVar1;
}



/* ===== 1801ec770 FUN_1801ec770 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801ec770(longlong param_1,longlong param_2,float param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 < 0.0) {
    return 0;
  }
  if (DAT_1808ac314 < param_3) {
    return 0;
  }
  FUN_1801ec5d0(param_2,2);
  if (param_4 != '\0') {
    lVar2 = FUN_180265420(param_2);
    if (lVar2 == 0) {
      DAT_181115098 = DAT_181115098 + 1;
      if (0x40 < (int)DAT_181115098) {
        uVar1 = DAT_181115098 & 0x8000003f;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xffffffc0) + 1;
        }
        if (uVar1 != 0) goto LAB_1801ec842;
      }
      FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",2,"release",
                    (double)param_3,*(undefined4 *)(param_2 + 0x20));
    }
    else {
      *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 7;
      *(float *)(lVar2 + 0x24) = param_3;
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined1 *)(lVar2 + 0x20) = 0;
    }
  }
LAB_1801ec842:
  lVar2 = FUN_180265420(param_2);
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 7;
    *(float *)(lVar2 + 0x24) = param_3;
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined1 *)(lVar2 + 0x20) = 1;
    uVar3 = *(ulonglong *)(param_1 + 0x68) | _UNK_1808ad3b8;
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | _DAT_1808ad3b0;
    *(ulonglong *)(param_1 + 0x68) = uVar3;
    if (param_4 != '\0') {
      *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | 2;
    }
    return 1;
  }
  DAT_181115098 = DAT_181115098 + 1;
  if (0x40 < (int)DAT_181115098) {
    uVar1 = DAT_181115098 & 0x8000003f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xffffffc0) + 1;
    }
    if (uVar1 != 0) {
      return 0;
    }
  }
  FUN_1801ec960("button step dropped: no room for %llx %s at %.3f (steps %d)",2,"press",
                (double)param_3,*(undefined4 *)(param_2 + 0x20));
  return 0;
}



/* ===== 1801ec8f0 FUN_1801ec8f0 ===== */

uint FUN_1801ec8f0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1[1] == 0) {
    lVar2 = 0;
    if (*(char *)(param_1 + 2) == '\0') {
      lVar2 = FUN_180264b70(*param_1);
      param_1[1] = lVar2;
      *(bool *)(param_1 + 2) = lVar2 == 0;
    }
    if (lVar2 == 0) {
      return param_2;
    }
  }
  uVar1 = FUN_180264d70();
  if ((uVar1 & 0x7f800000) == 0x7f800000) {
    return param_2;
  }
  return uVar1;
}



/* ===== 1801ec960 FUN_1801ec960 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ec960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1058 [32];
  undefined8 local_1038;
  undefined8 *local_1030;
  undefined1 local_1028 [4096];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1058;
  if (DAT_181115094 < 0x1771) {
    if (param_1 != 0) {
      local_res10 = param_2;
      local_res18 = param_3;
      local_res20 = param_4;
      puVar2 = (ulonglong *)FUN_180013640();
      local_1038 = 0;
      local_1030 = &local_res10;
      uVar1 = FUN_180501904(*puVar2 | 2,local_1028,0xfff,param_1);
      if ((int)uVar1 < 0) {
        uVar1 = 0xffffffff;
      }
      if (-1 < (int)uVar1) {
        lVar3 = (longlong)(int)uVar1;
        if (0xffe < uVar1) {
          lVar3 = 0xffe;
        }
        local_1028[lVar3] = 10;
      }
    }
    DAT_181115094 = DAT_181115094 + 1;
  }
  return;
}



/* ===== 1801eca30 FUN_1801eca30 ===== */

char FUN_1801eca30(void)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  
  if (DAT_1809ee9f8 == 0) {
    if (DAT_1809eea00 == '\0') {
      DAT_1809ee9f8 = FUN_180264b70(PTR_s_sv_subtick_movement_view_angles_1809ee9f0);
      DAT_1809eea00 = DAT_1809ee9f8 == 0;
      if (DAT_1809ee9f8 != 0) goto LAB_1801eca74;
      goto LAB_1801eca84;
    }
  }
  else {
LAB_1801eca74:
    cVar1 = FUN_180264d70();
    if (cVar1 == '\0') {
LAB_1801eca84:
      if (DAT_1809eea00 == '\0') {
        cVar1 = '\0';
        iVar2 = 0;
        goto LAB_1801eca95;
      }
    }
  }
  cVar1 = '\x01';
  iVar2 = 1;
LAB_1801eca95:
  if (DAT_180c9a6e8 != iVar2) {
    pcVar4 = "";
    if (DAT_1809eea00 != '\0') {
      pcVar4 = " (convar not found, assumed on)";
    }
    puVar3 = &DAT_1806d2870;
    if (cVar1 != '\0') {
      puVar3 = &DAT_1806d286c;
    }
    DAT_180c9a6e8 = iVar2;
    FUN_1802b2560("[move] sv_subtick_movement_view_angles %s%s",puVar3,pcVar4);
  }
  return cVar1;
}



/* ===== 1801ecae0 FUN_1801ecae0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1801ecae0(longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  uint uVar8;
  char cVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc [41];
  
  fVar16 = DAT_1808ac34c;
  fVar7 = DAT_1808ac00c;
  if (((param_1 == 0) || (param_2 == 0)) || (((uint)param_4 & 0x7f800000) == 0x7f800000)) {
    return 0;
  }
  if (((uint)param_5 & 0x7f800000) == 0x7f800000) {
    return 0;
  }
  fVar14 = 0.0;
  local_c4 = 1.0;
  local_c8 = 0.0;
  pfVar12 = &local_c8;
  if (0.0 <= param_5) {
    pfVar12 = &param_5;
  }
  pfVar10 = &local_c4;
  if (param_5 <= DAT_1808ac34c) {
    pfVar10 = pfVar12;
  }
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffff9e7;
  uVar3 = _DAT_1808ade90;
  fVar1 = *pfVar10;
  if (fVar1 < fVar7) {
    uVar2 = *(uint *)(param_3 + 0x24);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
    fVar16 = DAT_1808abfbc;
    *(undefined8 *)(param_2 + 0x58) = 0;
    if (((float)(uVar2 & uVar3) <= fVar16) && ((float)(*(uint *)(param_3 + 0x28) & uVar3) <= fVar16)
       ) {
      return 1;
    }
    uVar3 = *(uint *)(param_3 + 0x28);
    lVar11 = FUN_180265420(param_2);
    uVar8 = DAT_1808adec0;
    if (lVar11 == 0) {
      return 1;
    }
    *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 0x7f;
    *(uint *)(lVar11 + 0x28) = uVar2 ^ uVar8;
    *(uint *)(lVar11 + 0x2c) = uVar3 ^ uVar8;
    *(undefined4 *)(lVar11 + 0x24) = 0;
    *(undefined4 *)(lVar11 + 0x34) = 0;
    return 1;
  }
  if (((uint)(param_4 - *(float *)(*(longlong *)(param_2 + 0x40) + 0x1c)) & 0x7f800000) ==
      0x7f800000) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = (float)FUN_180516750();
  }
  cVar9 = FUN_1801eca30();
  fVar13 = DAT_1808aca68;
  if (cVar9 == '\0') {
    fVar15 = (float)FUN_180519080(fVar17 / DAT_1808aca68);
    fVar15 = fVar15 * fVar13 * DAT_1808ac014;
    FUN_180517200(fVar15);
    fVar13 = (float)FUN_180519080();
    FUN_180517790(fVar15);
    fVar15 = (float)FUN_180519080();
    if (fVar13 <= 0.0) {
      if (fVar13 < 0.0) {
        *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x10;
      }
      goto LAB_1801ecd47;
    }
  }
  else {
    fVar15 = 0.0;
    fVar13 = fVar16;
    if ((DAT_1808ac000 < (float)((uint)fVar17 & _DAT_1808ade90)) &&
       (lVar11 = FUN_180265420(param_2), lVar11 != 0)) {
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 0x67;
      *(float *)(lVar11 + 0x34) = fVar17;
      *(undefined4 *)(lVar11 + 0x24) = 0x3f800000;
      *(undefined4 *)(lVar11 + 0x30) = 0;
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 8;
      goto LAB_1801ecd47;
    }
  }
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 8;
LAB_1801ecd47:
  if (fVar15 <= 0.0) {
    if (fVar15 < 0.0) {
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x400;
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x200;
  }
  fVar4 = *(float *)(param_3 + 0x28);
  fVar5 = *(float *)(param_3 + 0x24);
  lVar11 = FUN_180265420(param_2);
  if (lVar11 != 0) {
    *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 0x7f;
    *(undefined4 *)(lVar11 + 0x24) = 0;
    *(undefined4 *)(lVar11 + 0x34) = 0;
    *(float *)(lVar11 + 0x28) = fVar13 - fVar5;
    *(float *)(lVar11 + 0x2c) = fVar15 - fVar4;
  }
  fVar4 = DAT_1808ac314;
  bVar6 = fVar1 < DAT_1808ac314;
  if (bVar6) {
    if (((uint)fVar1 & 0x7f800000) != 0x7f800000) {
      local_c0 = 0.0;
      local_bc[0] = (float)FUN_180519080(fVar1 * DAT_1808acab0);
      local_bc[0] = local_bc[0] * fVar7;
      pfVar12 = &local_c0;
      if (0.0 <= local_bc[0]) {
        pfVar12 = local_bc;
      }
      if (fVar4 < local_bc[0]) {
        pfVar12 = (float *)&DAT_18060a088;
      }
      fVar14 = *pfVar12;
    }
    pfVar12 = local_res8;
    local_res8[0] = fVar14;
    if (fVar14 < fVar7) {
      pfVar12 = (float *)&DAT_18060a08c;
    }
    if (fVar4 < fVar14) {
      pfVar12 = (float *)&DAT_18060a088;
    }
    fVar16 = *pfVar12;
  }
  FUN_1801ec960("qmove: yaw %.1f cmd %.1f frame %.1f mag %.2f -> move %.0f/%.0f off %.3f prev %.2f/%.2f"
                ,(double)param_4,(double)*(float *)(*(longlong *)(param_2 + 0x40) + 0x1c),
                (double)fVar17,(double)fVar1,(double)fVar13,(double)fVar15,(double)fVar16,
                (double)*(float *)(param_3 + 0x24),(double)*(float *)(param_3 + 0x28));
  if (bVar6) {
    lVar11 = FUN_180265420(param_2);
    uVar3 = DAT_1808adec0;
    if (lVar11 != 0) {
      *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 0x7f;
      *(uint *)(lVar11 + 0x28) = (uint)fVar13 ^ uVar3;
      *(uint *)(lVar11 + 0x2c) = (uint)fVar15 ^ uVar3;
      *(float *)(lVar11 + 0x24) = fVar16;
      *(undefined4 *)(lVar11 + 0x34) = 0;
    }
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  else {
    *(float *)(param_2 + 0x58) = fVar13;
    *(float *)(param_2 + 0x5c) = fVar15;
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0xc0;
  return 1;
}



/* ===== 1801ecfb0 FUN_1801ecfb0 ===== */

undefined8 FUN_1801ecfb0(float param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (param_3 == 0.0) {
    uVar4 = CONCAT44(param_2,param_1);
  }
  else {
    fVar5 = param_2 * param_2 + 0.0 + param_1 * param_1;
    if (fVar5 < 0.0) {
      fVar5 = (float)FUN_18051af10(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    if ((fVar5 < DAT_1808abf54) || (DAT_1808accfc < fVar5)) {
      if (fVar5 == 0.0) {
        uVar4 = 0;
      }
      else {
        dVar2 = (double)param_1;
        dVar3 = (double)param_2;
        dVar1 = dVar2 * dVar2 + dVar3 * dVar3;
        if (dVar1 < 0.0) {
          dVar1 = (double)FUN_18051ff20(SUB84(dVar1,0));
        }
        else {
          dVar1 = SQRT(dVar1);
        }
        uVar4 = CONCAT44((float)(dVar3 / dVar1),(float)(dVar2 / dVar1));
      }
    }
    else {
      uVar4 = CONCAT44((DAT_1808ac34c / fVar5) * param_2,(DAT_1808ac34c / fVar5) * param_1);
    }
  }
  return uVar4;
}



/* ===== 1801ed0c0 FUN_1801ed0c0 ===== */

void FUN_1801ed0c0(void)

{
  undefined8 uVar1;
  undefined8 *in_R9;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *in_stack_00000028;
  
  fVar2 = (float)FUN_180517790();
  fVar3 = (float)FUN_180517200();
  fVar4 = (float)FUN_180517790();
  auVar7._0_8_ = FUN_180517200();
  fVar5 = (float)auVar7._0_8_;
  auVar7._8_4_ = (undefined4)extraout_XMM0_Qb;
  auVar7._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar9._0_8_ = FUN_180517790();
  auVar9._8_4_ = (undefined4)extraout_XMM0_Qb_00;
  auVar9._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  fVar6 = (float)FUN_180517200();
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = fVar5 * fVar3;
  uVar1 = FUN_1801ecfb0(auVar8._0_8_,fVar4 * fVar3,fVar2);
  *in_R9 = uVar1;
  auVar10._4_12_ = auVar9._4_12_;
  fVar2 = (float)auVar9._0_8_ * fVar2;
  auVar10._0_4_ = fVar2 * fVar5 - fVar6 * fVar4;
  uVar1 = FUN_1801ecfb0(auVar10._0_8_,fVar2 * fVar4 + fVar6 * fVar5,(float)auVar9._0_8_ * fVar3);
  *in_stack_00000028 = uVar1;
  return;
}



/* ===== 1801ed1f0 FUN_1801ed1f0 ===== */

undefined8 FUN_1801ed1f0(float param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_18053f0d0(param_1 * DAT_1808abfd0 + DAT_1808ac1f4);
  param_1 = fVar1 * DAT_1808ace80 + param_1;
  if (param_1 < 0.0) {
    return CONCAT44(param_1 + DAT_1808acbd0,param_1);
  }
  if (DAT_1808acbd0 < param_1) {
    return CONCAT44(param_1 - DAT_1808acbd0,param_1);
  }
  return CONCAT44(param_1,param_1);
}



/* ===== 1801ed280 FUN_1801ed280 ===== */

void FUN_1801ed280(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = DAT_1808ac34c;
  fVar4 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = fVar4 * fVar4 + fVar1 * fVar1 + fVar5 * fVar5;
  if (DAT_1808ac34c < fVar2) {
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_18051af10(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar3 = fVar3 / fVar2;
    *(float *)(param_1 + 0xc) = fVar1 * fVar3;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(fVar5 * fVar3,fVar4 * fVar3);
  }
  return;
}



/* ===== 1801ed330 FUN_1801ed330 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801ed330(longlong param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res20;
  float local_res24;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  
  fVar7 = *param_2;
  if (((uint)fVar7 & 0x7f800000) == 0x7f800000) {
    fVar7 = 0.0;
  }
  fVar6 = param_2[1];
  if (((uint)fVar6 & 0x7f800000) == 0x7f800000) {
    fVar6 = 0.0;
  }
  if (((uint)param_3 & 0x7f800000) == 0x7f800000) {
    param_3 = 0.0;
  }
  if (((*param_4 != fVar7) || (param_4[1] != fVar6)) || (param_4[2] != param_3)) {
    fVar1 = *(float *)(param_1 + 0x10);
    fVar8 = *(float *)(param_1 + 0xc);
    if ((fVar8 != 0.0) || (fVar1 != 0.0)) {
      FUN_1801ed0c0(*param_4,param_4[1],param_4[2],&local_b0,&local_res8);
      FUN_1801ed0c0(fVar7,fVar6,param_3,&local_res20,&local_b8);
      local_res10 = local_res8 * fVar1 + local_b0 * fVar8;
      local_res8 = local_resc * fVar1 + local_ac * fVar8;
      fVar1 = local_b4 * local_res20 - local_b8 * local_res24;
      fVar7 = (local_res10 * local_b4 - local_res8 * local_b8) / fVar1;
      fVar1 = (local_res8 * local_res20 - local_res10 * local_res24) / fVar1;
      fVar6 = fVar1;
      if (((fVar7 != 0.0) && (fVar1 != 0.0)) &&
         ((DAT_1808ac540 < (float)((uint)fVar7 & _DAT_1808ade90) ||
          (DAT_1808ac540 < (float)((uint)fVar1 & _DAT_1808ade90))))) {
        if ((float)((uint)fVar1 & _DAT_1808ade90) <= (float)((uint)fVar7 & _DAT_1808ade90)) {
          fVar1 = fVar1 / fVar7;
          fVar6 = DAT_1808acdc0;
          if (DAT_1808acdc0 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar7 = DAT_1808ac540;
          if (fVar6 <= DAT_1808ac540) {
            fVar7 = fVar6;
          }
          fVar6 = fVar7 * fVar1;
        }
        else {
          fVar8 = DAT_1808acdc0;
          if (DAT_1808acdc0 <= fVar1) {
            fVar8 = fVar1;
          }
          fVar6 = DAT_1808ac540;
          if (fVar8 <= DAT_1808ac540) {
            fVar6 = fVar8;
          }
          fVar7 = fVar6 * (fVar7 / fVar1);
        }
      }
      fVar8 = fVar6 * local_b8 + fVar7 * local_res20;
      fVar1 = fVar6 * local_b4 + fVar7 * local_res24;
      if ((fVar8 != local_res10) || (fVar1 != local_res8)) {
        fVar3 = local_res20 * local_b4 - local_b8 * local_res24;
        fVar2 = (local_res8 * local_res20 - local_res10 * local_res24) / fVar3;
        fVar3 = (local_res10 * local_b4 - local_res8 * local_b8) / fVar3;
        fVar4 = fVar2;
        if (((fVar3 != 0.0) && (fVar2 != 0.0)) &&
           ((DAT_1808ac540 < (float)((uint)fVar3 & _DAT_1808ade90) ||
            (DAT_1808ac540 < (float)((uint)fVar2 & _DAT_1808ade90))))) {
          if ((float)((uint)fVar2 & _DAT_1808ade90) <= (float)((uint)fVar3 & _DAT_1808ade90)) {
            fVar2 = fVar2 / fVar3;
            fVar4 = DAT_1808acdc0;
            if (DAT_1808acdc0 <= fVar3) {
              fVar4 = fVar3;
            }
            fVar3 = DAT_1808ac540;
            if (fVar4 <= DAT_1808ac540) {
              fVar3 = fVar4;
            }
            fVar4 = fVar3 * fVar2;
          }
          else {
            fVar5 = DAT_1808acdc0;
            if (DAT_1808acdc0 <= fVar2) {
              fVar5 = fVar2;
            }
            fVar4 = DAT_1808ac540;
            if (fVar5 <= DAT_1808ac540) {
              fVar4 = fVar5;
            }
            fVar3 = fVar4 * (fVar3 / fVar2);
          }
        }
        fVar2 = fVar4 * local_b8 + fVar3 * local_res20;
        fVar5 = fVar3 * local_res24 + fVar4 * local_b4;
        if (((fVar2 == local_res10) && (fVar5 == local_res8)) ||
           (fVar2 = fVar2 - local_res10, fVar1 = fVar1 - local_res8, fVar5 = fVar5 - local_res8,
           fVar8 = fVar8 - local_res10,
           fVar2 * fVar2 + fVar5 * fVar5 < fVar1 * fVar1 + fVar8 * fVar8)) {
          fVar7 = fVar3;
          fVar6 = fVar4;
        }
      }
      fVar1 = DAT_1808acdc0;
      if (DAT_1808acdc0 <= fVar6) {
        fVar1 = fVar6;
      }
      fVar6 = DAT_1808acdc0;
      if (DAT_1808acdc0 <= fVar7) {
        fVar6 = fVar7;
      }
      fVar7 = DAT_1808ac540;
      if (fVar1 <= DAT_1808ac540) {
        fVar7 = fVar1;
      }
      fVar1 = DAT_1808ac540;
      if (fVar6 <= DAT_1808ac540) {
        fVar1 = fVar6;
      }
      if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
        fVar1 = 0.0;
      }
      if (((uint)fVar7 & 0x7f800000) == 0x7f800000) {
        fVar7 = 0.0;
      }
      *(float *)(param_1 + 0xc) = fVar1;
      *(float *)(param_1 + 0x10) = fVar7;
    }
  }
  FUN_1801ed280(param_1);
  return;
}



/* ===== 1801ed820 FUN_1801ed820 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1801ed820(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res20;
  float local_res24;
  float local_e8;
  float local_e4;
  
  fVar15 = *param_1;
  fVar1 = param_1[1];
  if ((float)((uint)fVar15 & _DAT_1808ade90) < DAT_1808ac028) {
    dVar11 = (double)FUN_180516f20(DAT_1808ac3b8,(double)fVar15);
    fVar15 = (float)dVar11;
  }
  fVar16 = DAT_1808ac014;
  fVar6 = (float)FUN_180517790(fVar15 * DAT_1808ac014);
  fVar7 = (float)FUN_180517200(fVar1 * fVar16);
  fVar8 = (float)FUN_180517790(fVar1 * fVar16);
  pfVar4 = (float *)&DAT_18060a090;
  fVar16 = DAT_1808acd08;
  do {
    fVar2 = *pfVar4;
    pfVar5 = (float *)&DAT_18060a0a8;
    fVar12 = *param_2 - fVar2 * fVar7;
    fVar14 = param_2[1] - fVar2 * fVar8;
    do {
      fVar3 = *pfVar5;
      if (0.0 <= fVar3 * fVar6) {
        fVar9 = DAT_1808ac34c;
      }
      else {
        fVar9 = DAT_1808acda0;
      }
      fVar9 = (float)FUN_180516b00(fVar9 * (fVar14 * fVar8 + fVar12 * fVar7),
                                   fVar9 * (fVar14 * fVar7 - fVar12 * fVar8) * fVar6);
      fVar9 = fVar9 * DAT_1808aca94;
      fVar10 = (float)FUN_18053f0d0(fVar9 * DAT_1808abfd0 + DAT_1808ac1f4);
      fVar9 = fVar10 * DAT_1808ace80 + fVar9;
      FUN_1801ed0c0(fVar15,fVar1,fVar9,&local_res20,&local_e8);
      fVar13 = (local_e8 * fVar3 + local_res20 * fVar2) - *param_2;
      fVar10 = (local_e4 * fVar3 + local_res24 * fVar2) - param_2[1];
      fVar10 = fVar10 * fVar10 + fVar13 * fVar13;
      if (fVar10 < fVar16) {
        param_1[3] = fVar2;
        param_1[4] = fVar3;
        *param_1 = fVar15;
        param_1[1] = fVar1;
        param_1[2] = fVar9;
        fVar16 = fVar10;
      }
      pfVar5 = pfVar5 + 1;
    } while (pfVar5 != (float *)&DAT_18060a0b8);
    pfVar4 = pfVar4 + 1;
  } while (pfVar4 != (float *)&DAT_18060a0a4);
  DAT_180ceb0cc = fVar16;
  return DAT_1808ac000 < fVar16;
}



/* ===== 1801edb10 FUN_1801edb10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801edb10(undefined4 *param_1,undefined4 *param_2,char param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  float extraout_var;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  undefined4 local_res18;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  
  uVar1 = DAT_1808ac498;
  fVar9 = (float)param_1[4];
  fVar10 = (float)param_1[3];
  fVar19 = (float)param_1[1];
  fVar17 = (float)param_1[2];
  uVar14 = *param_1;
  local_res8 = fVar19;
  local_res10 = fVar17;
  local_res18 = uVar14;
  if (fVar19 == (float)param_2[1]) {
    dVar12 = (double)FUN_180516f20(DAT_1808ac498,(double)fVar10);
    fVar8 = (float)FUN_18053fc00((float)dVar12 + fVar10);
    if (fVar8 == fVar10) {
      dVar12 = (double)FUN_180516f20(uVar1,(double)fVar9);
      fVar8 = (float)FUN_18053fc00((float)dVar12 + fVar9);
      if (fVar8 == fVar9) goto LAB_1801ee041;
    }
  }
  fVar8 = 0.0;
  if ((fVar10 == 0.0) && (fVar9 == 0.0)) goto LAB_1801ee041;
  FUN_1801ed0c0(*param_2,param_2[1],param_2[2],&local_e0,&local_e8);
  FUN_1801ed0c0(uVar14,fVar19,fVar17,&local_d8,&local_d0);
  fVar18 = local_e8 * fVar9 + local_e0 * fVar10;
  fVar17 = local_e4 * fVar9 + local_dc * fVar10;
  local_e8 = fVar18;
  local_e4 = fVar17;
  dVar12 = (double)FUN_180516f20(uVar1,(double)fVar9);
  fVar9 = (float)FUN_18053fc00((float)dVar12 + fVar9);
  dVar12 = (double)FUN_180516f20(uVar1,(double)fVar10);
  fVar10 = (float)FUN_18053fc00((float)dVar12 + fVar10);
  if (((float)local_d0 * fVar9 + local_d8 * fVar10 == fVar18) &&
     (local_d0._4_4_ * fVar9 + local_d4 * fVar10 == fVar17)) goto LAB_1801ee041;
  if ((fVar18 == 0.0) && (fVar17 == 0.0)) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)FUN_180516b00(fVar17,fVar18);
    fVar9 = (fVar9 * DAT_1808acb58) / DAT_1808ac680;
    if (fVar9 < 0.0) {
      fVar9 = fVar9 + DAT_1808acbd0;
    }
  }
  FUN_1801ed1f0(fVar19);
  uVar2 = _DAT_1808ade90;
  uVar14 = 0;
  fVar10 = 0.0;
  iVar7 = 0;
  local_d0 = 0;
  fVar19 = DAT_1808acd08;
  do {
    local_d0 = FUN_1801ed1f0((float)((double)iVar7 * _DAT_1808ac670) + fVar9);
    uVar16 = (undefined4)local_d0;
    fVar13 = (float)((ulonglong)local_d0 >> 0x20);
    fVar11 = (float)FUN_18053f0d0(CONCAT44(fVar13,(fVar13 - extraout_var) * DAT_1808abfd0 +
                                                  DAT_1808ac1f4));
    fVar3 = local_res10;
    fVar15 = DAT_1808acd08;
    fVar11 = (float)((uint)(fVar11 * DAT_1808ace80 + (fVar13 - extraout_var)) & uVar2);
    if (fVar11 < fVar19) {
      uVar14 = uVar16;
      fVar10 = fVar13;
      fVar19 = fVar11;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  DAT_180ceb0c8 = param_4 == 0;
  cVar4 = '\x01';
  DAT_180ceb0b4 = local_res8;
  DAT_180ceb0bc = param_2[1];
  local_d0 = CONCAT44(fVar10,uVar14);
  DAT_180ceb0ac._4_4_ = local_res18;
  DAT_180ceb0b8 = local_res10;
  DAT_180ceb0ac._0_1_ = 1;
  DAT_180ceb0cc = 0;
  DAT_180ceb0c0 = fVar9;
  DAT_180ceb0c4 = uVar14;
  if (param_4 == 0) {
    cVar4 = FUN_1801ed820(param_1,&local_e8);
    fVar17 = local_e4;
    fVar18 = local_e8;
  }
  if ((DAT_180ceb0c8 == '\0') || (cVar4 == '\0')) {
    DAT_180ceb0c9 = 0;
    if (cVar4 != '\0') goto LAB_1801edee9;
  }
  else {
    DAT_180ceb0c9 = 1;
LAB_1801edee9:
    uVar14 = (undefined4)local_d0;
    FUN_1801ed0c0(local_res18,local_d0,fVar3,&local_res10,&local_res8);
    pfVar6 = (float *)&DAT_18060a090;
    fVar9 = 0.0;
    do {
      fVar10 = *pfVar6;
      pfVar5 = (float *)&DAT_18060a090;
      do {
        fVar19 = *pfVar5;
        fVar11 = (local_res8 * fVar19 + local_res10 * fVar10) - fVar18;
        fVar13 = (local_resc * fVar19 + local_res14 * fVar10) - fVar17;
        fVar11 = fVar13 * fVar13 + fVar11 * fVar11;
        if (fVar11 < fVar15) {
          fVar9 = fVar19;
          fVar15 = fVar11;
          fVar8 = fVar10;
        }
        pfVar5 = pfVar5 + 1;
      } while (pfVar5 != (float *)&DAT_18060a0a4);
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != (float *)&DAT_18060a0a4);
    *param_1 = local_res18;
    param_1[3] = fVar8;
    param_1[4] = fVar9;
    param_1[1] = uVar14;
    param_1[2] = fVar3;
  }
  DAT_180ceb0d0 = param_1[3];
  DAT_180ceb0d4 = param_1[4];
  DAT_180ceb0d8 = *param_1;
  DAT_180ceb0dc = param_1[1];
  DAT_180ceb0e0 = param_1[2];
LAB_1801ee041:
  if (param_3 != '\0') {
    FUN_1801ed280(param_1);
  }
  return;
}



/* ===== 1801ee0b0 FUN_1801ee0b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801ee0b0(float *param_1,longlong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float *pfVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  undefined1 auStack_478 [32];
  float local_458;
  float local_454;
  float local_450;
  float local_44c;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float *local_400;
  longlong local_3f8;
  float local_3e8 [192];
  ulonglong local_e8;
  
  uVar25 = _DAT_1808ade90;
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_478;
  lVar8 = *(longlong *)(param_1 + 0xe);
  fVar11 = param_1[1];
  local_42c = param_1[2];
  fVar23 = param_1[6];
  fVar19 = param_1[7];
  fVar22 = param_1[8];
  uVar10 = (*(longlong *)(param_1 + 0x10) - lVar8 >> 3) * -0x71c71c71c71c71c7;
  uVar9 = uVar10;
  if (uVar10 != 0) {
    uVar6 = 0;
    bVar2 = false;
    fVar17 = fVar22;
    fVar14 = fVar23;
    fVar15 = fVar19;
    do {
      if (*(char *)(lVar8 + 0x42 + uVar6 * 0x48) != '\0') {
        return;
      }
      if (*(char *)(lVar8 + 0x30 + uVar6 * 0x48) != '\0') {
        return;
      }
      uVar1 = *(ulonglong *)(lVar8 + 8 + uVar6 * 0x48);
      if (uVar1 == 0) {
        if (*(char *)(lVar8 + 0x20 + uVar6 * 0x48) == '\0') {
          if (*(char *)(lVar8 + 0x40 + uVar6 * 0x48) == '\0') goto LAB_1801ee227;
        }
        else {
          fVar14 = *(float *)(lVar8 + 0x14 + uVar6 * 0x48);
          fVar15 = *(float *)(lVar8 + 0x18 + uVar6 * 0x48);
          fVar17 = *(float *)(lVar8 + 0x1c + uVar6 * 0x48);
        }
        if (((*param_1 == fVar14) && (fVar11 == fVar15)) && (local_42c == fVar17)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar2) {
          if (bVar3) {
            return;
          }
LAB_1801ee221:
          bVar2 = true;
        }
        else {
          if (!bVar3) goto LAB_1801ee221;
          bVar2 = false;
        }
        uVar9 = uVar6;
      }
      else {
        if ((uVar1 & 0x618) != 0) {
          return;
        }
        if (*(char *)(lVar8 + 0x20 + uVar6 * 0x48) != '\0') {
          return;
        }
        if (*(char *)(lVar8 + 0x40 + uVar6 * 0x48) != '\0') {
          return;
        }
      }
LAB_1801ee227:
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar10);
  }
  if (uVar10 < 0x21) {
    if ((((*(ulonglong *)(param_2 + 8) & 0x18) == 0) ||
        (local_420 = *(float *)(param_2 + 0x10), ((uint)local_420 & 0x7f800000) == 0x7f800000)) ||
       (DAT_1808ac864 <= (float)((uint)local_420 & _DAT_1808ade90))) {
      local_420 = 0.0;
    }
    fVar14 = local_420;
    if ((((*(ulonglong *)(param_2 + 8) & 0x600) == 0) ||
        (local_424 = *(float *)(param_2 + 0x14), ((uint)local_424 & 0x7f800000) == 0x7f800000)) ||
       (DAT_1808ac864 <= (float)((uint)local_424 & _DAT_1808ade90))) {
      local_424 = 0.0;
    }
    fVar15 = local_424;
    local_410 = *(float *)(param_2 + 0x18);
    if ((((uint)local_410 & 0x7f800000) == 0x7f800000) ||
       (DAT_1808ac864 <= (float)((uint)local_410 & _DAT_1808ade90))) {
      local_410 = 0.0;
    }
    fVar17 = local_410;
    if ((((local_420 == DAT_1808ac34c) || (local_420 == DAT_1808acda0)) || (local_420 == 0.0)) &&
       ((((local_424 == DAT_1808ac34c || (local_424 == DAT_1808acda0)) || (local_424 == 0.0)) &&
        (*(longlong *)(param_1 + 0x10) - lVar8 != 0)))) {
      local_43c = fVar11;
      local_438 = fVar19;
      local_434 = fVar22;
      local_430 = fVar23;
      local_400 = param_1;
      FUN_180540170(local_3e8,0);
      fVar21 = fVar15;
      fVar24 = fVar14;
      if (uVar10 != 0) {
        lVar8 = *(longlong *)(param_1 + 0xe);
        uVar6 = 0;
        bVar2 = false;
        fVar20 = fVar11;
        local_440 = fVar17;
        local_428 = fVar19;
        local_41c = fVar14;
        local_418 = fVar15;
        local_40c = fVar11;
        local_3f8 = lVar8;
        do {
          pfVar5 = local_400;
          fVar4 = local_40c;
          if (*(char *)(lVar8 + 0x40 + uVar6 * 0x48) == '\0') {
            if (*(char *)(lVar8 + 0x20 + uVar6 * 0x48) != '\0') {
              fVar17 = fVar14;
              fVar21 = fVar15;
              goto LAB_1801ee471;
            }
          }
          else {
            local_440 = *(float *)(lVar8 + 0x3c + uVar6 * 0x48);
            fVar17 = *(float *)(lVar8 + 0x34 + uVar6 * 0x48);
            fVar21 = *(float *)(lVar8 + 0x38 + uVar6 * 0x48);
            if (*(char *)(lVar8 + 0x20 + uVar6 * 0x48) != '\0') {
LAB_1801ee471:
              fVar19 = *(float *)(lVar8 + 0x18 + uVar6 * 0x48);
              fVar22 = *(float *)(lVar8 + 0x1c + uVar6 * 0x48);
              fVar23 = *(float *)(lVar8 + 0x14 + uVar6 * 0x48);
              local_428 = fVar19;
            }
            fVar24 = local_428;
            if (((fVar17 != DAT_1808ac34c) && (fVar17 != DAT_1808acda0)) && (fVar17 != 0.0)) {
              return;
            }
            if (((fVar21 != DAT_1808ac34c) && (fVar21 != DAT_1808acda0)) && (fVar21 != 0.0)) {
              return;
            }
            if (fVar22 != 0.0) {
              return;
            }
            if (DAT_1808acaf4 <= (float)((uint)fVar23 & uVar25)) {
              return;
            }
            if (((uint)fVar20 & 0x7f800000) == 0x7f800000) {
              return;
            }
            if (((uint)fVar19 & 0x7f800000) == 0x7f800000) {
              return;
            }
            bVar3 = false;
            local_444 = 0.0;
            local_450 = 0.0;
            local_44c = 0.0;
            local_448 = 0.0;
            fVar14 = (float)((uint)(fVar21 - fVar15) & uVar25) +
                     (float)((uint)(fVar17 - fVar14) & uVar25);
            local_414 = DAT_1808acd08;
            local_408 = DAT_1808ac34c;
            if (DAT_1808ac34c <= fVar14) {
              local_408 = fVar14;
            }
            local_454 = 0.0;
            local_458 = 0.0;
            fVar15 = (float)((uint)(fVar21 - local_418) & uVar25) +
                     (float)((uint)(fVar17 - local_41c) & uVar25);
            fVar14 = DAT_1808ac34c;
            if (DAT_1808ac34c <= fVar15) {
              fVar14 = fVar15;
            }
            if (fVar14 <= local_408) {
              if (((bVar2) && (*param_1 == fVar23)) && (fVar11 == fVar19)) {
                if (param_1[2] == fVar22) goto LAB_1801ee69c;
              }
              if ((uVar6 == uVar9) && (0x1f < uVar10)) {
                if (((uint)local_440 & 0x7f800000) != 0x7f800000) {
                  if (((uint)fVar17 & 0x7f800000) != 0x7f800000) {
                    if (((uint)fVar21 & 0x7f800000) != 0x7f800000) goto LAB_1801ee653;
                  }
                }
              }
              else {
LAB_1801ee653:
                fVar11 = (float)((uint)(fVar19 - fVar20) & uVar25);
                if (fVar11 < DAT_1808acd08) {
                  bVar3 = true;
                  local_444 = local_440;
                  local_458 = fVar23;
                  local_454 = fVar17;
                  local_450 = fVar21;
                  local_44c = fVar19;
                  local_448 = fVar22;
                  local_414 = fVar11;
                }
              }
            }
LAB_1801ee69c:
            fVar11 = (float)((uint)fVar17 ^ DAT_1808adec0);
            fVar14 = (float)((uint)fVar21 ^ DAT_1808adec0);
            iVar7 = 0;
            fVar19 = local_414;
            do {
              fVar20 = fVar24 - (float)((double)iVar7 * _DAT_1808ac6a0);
              dVar13 = (double)FUN_18051f830((double)(fVar20 - fVar4),DAT_1808ac6f8);
              fVar15 = (float)dVar13;
              if (fVar20 <= fVar4) {
                if (fVar15 <= DAT_1808ace7c) {
                  fVar15 = fVar15 + DAT_1808acbd0;
                }
              }
              else if (DAT_1808acb58 <= fVar15) {
                fVar15 = fVar15 - DAT_1808acbd0;
              }
              if (iVar7 == 0) {
                fVar20 = fVar17;
                fVar18 = fVar21;
              }
              else if (iVar7 == 1) {
                fVar20 = fVar14;
                fVar18 = fVar17;
              }
              else if (iVar7 == 2) {
                fVar20 = fVar11;
                fVar18 = fVar14;
              }
              else {
                fVar20 = fVar21;
                fVar18 = fVar11;
              }
              fVar16 = (float)((uint)(fVar20 - local_41c) & _DAT_1808ade90) +
                       (float)((uint)(fVar18 - local_418) & _DAT_1808ade90);
              fVar12 = DAT_1808ac34c;
              if (DAT_1808ac34c <= fVar16) {
                fVar12 = fVar16;
              }
              if (local_408 < fVar12) {
LAB_1801ee7ea:
                fVar12 = fVar19;
              }
              else {
                fVar15 = fVar15 + fVar4;
                if ((!bVar2) || (*pfVar5 != fVar23)) {
                  fVar12 = local_43c;
LAB_1801ee8c4:
                  fVar16 = local_42c;
                }
                else {
                  fVar12 = pfVar5[1];
                  if (fVar12 != fVar15) goto LAB_1801ee8c4;
                  fVar16 = pfVar5[2];
                  if (pfVar5[2] == fVar22) goto LAB_1801ee7ea;
                }
                if (((uVar6 == uVar9) &&
                    (((0x1f < uVar10 &&
                      ((((fVar24 != fVar15 || (fVar17 != fVar20)) || (fVar21 != fVar18)) ||
                       (((uint)local_440 & 0x7f800000) == 0x7f800000)))) ||
                     ((((*pfVar5 == fVar23 && (fVar12 == fVar24)) && (fVar16 == fVar22)) &&
                      (fVar12 != fVar15)))))) ||
                   (fVar12 = (float)((uint)(fVar15 - fVar4) & _DAT_1808ade90), fVar19 <= fVar12))
                goto LAB_1801ee7ea;
                local_444 = local_440;
                bVar3 = true;
                local_458 = fVar23;
                local_454 = fVar20;
                local_450 = fVar18;
                local_44c = fVar15;
                local_448 = fVar22;
              }
              iVar7 = iVar7 + 1;
              fVar19 = fVar12;
            } while (iVar7 < 4);
            if (!bVar3) {
              return;
            }
            local_3e8[uVar6 * 6] = local_454;
            local_3e8[uVar6 * 6 + 1] = local_450;
            local_3e8[uVar6 * 6 + 2] = local_444;
            local_3e8[uVar6 * 6 + 3] = local_458;
            local_3e8[uVar6 * 6 + 4] = local_44c;
            local_3e8[uVar6 * 6 + 5] = local_448;
            if ((bVar2) || (*local_400 != local_458)) {
              fVar11 = local_43c;
LAB_1801ee9a2:
              bVar2 = true;
            }
            else {
              fVar11 = local_400[1];
              if ((fVar11 != local_44c) || (local_400[2] != local_448)) goto LAB_1801ee9a2;
            }
            param_1 = local_400;
            lVar8 = local_3f8;
            fVar14 = fVar17;
            fVar15 = fVar21;
            fVar19 = local_428;
            fVar21 = local_424;
            fVar17 = local_410;
            fVar24 = local_420;
            fVar20 = local_44c;
            uVar25 = _DAT_1808ade90;
            local_41c = local_454;
            local_418 = local_450;
            local_40c = local_44c;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar10);
        fVar19 = local_438;
        fVar22 = local_434;
        fVar23 = local_430;
      }
      uVar9 = 0;
      if (uVar10 != 0) {
        do {
          lVar8 = *(longlong *)(param_1 + 0xe);
          if (*(char *)(lVar8 + 0x40 + uVar9 * 0x48) == '\0') {
            if (*(char *)(lVar8 + 0x20 + uVar9 * 0x48) != '\0') {
              fVar11 = local_3e8[uVar9 * 6];
              if (((fVar24 == fVar11) && (fVar21 == local_3e8[uVar9 * 6 + 1])) &&
                 (fVar17 == local_3e8[uVar9 * 6 + 2])) {
                fVar17 = local_3e8[uVar9 * 6 + 2];
                fVar21 = local_3e8[uVar9 * 6 + 1];
              }
              else {
                fVar17 = local_3e8[uVar9 * 6 + 2];
                fVar21 = local_3e8[uVar9 * 6 + 1];
                *(float *)(lVar8 + 0x38 + uVar9 * 0x48) = fVar21;
                *(float *)(lVar8 + 0x3c + uVar9 * 0x48) = fVar17;
                *(float *)(lVar8 + 0x34 + uVar9 * 0x48) = fVar11;
                *(undefined1 *)(lVar8 + 0x40 + uVar9 * 0x48) = 1;
              }
              local_430 = local_3e8[uVar9 * 6 + 3];
              local_438 = local_3e8[uVar9 * 6 + 4];
              local_434 = local_3e8[uVar9 * 6 + 5];
              *(float *)(lVar8 + 0x14 + uVar9 * 0x48) = local_430;
              goto LAB_1801eeb38;
            }
          }
          else {
            fVar11 = local_3e8[uVar9 * 6];
            fVar21 = local_3e8[uVar9 * 6 + 1];
            fVar17 = local_3e8[uVar9 * 6 + 2];
            local_430 = local_3e8[uVar9 * 6 + 3];
            *(float *)(lVar8 + 0x34 + uVar9 * 0x48) = fVar11;
            *(float *)(lVar8 + 0x38 + uVar9 * 0x48) = fVar21;
            *(float *)(lVar8 + 0x3c + uVar9 * 0x48) = fVar17;
            if (*(char *)(lVar8 + 0x20 + uVar9 * 0x48) == '\0') {
              if (((fVar23 != local_430) ||
                  (local_438 = local_3e8[uVar9 * 6 + 4], fVar19 != local_438)) ||
                 (local_434 = local_3e8[uVar9 * 6 + 5], fVar22 != local_434)) {
                local_438 = local_3e8[uVar9 * 6 + 4];
                local_434 = local_3e8[uVar9 * 6 + 5];
                *(float *)(lVar8 + 0x18 + uVar9 * 0x48) = local_438;
                *(float *)(lVar8 + 0x1c + uVar9 * 0x48) = local_434;
                *(float *)(lVar8 + 0x14 + uVar9 * 0x48) = local_430;
                *(undefined1 *)(lVar8 + 0x20 + uVar9 * 0x48) = 1;
              }
            }
            else {
              local_438 = local_3e8[uVar9 * 6 + 4];
              local_434 = local_3e8[uVar9 * 6 + 5];
              *(float *)(lVar8 + 0x14 + uVar9 * 0x48) = local_430;
LAB_1801eeb38:
              *(float *)(lVar8 + 0x1c + uVar9 * 0x48) = local_434;
              *(float *)(lVar8 + 0x18 + uVar9 * 0x48) = local_438;
            }
            fVar24 = fVar11;
          }
          uVar9 = uVar9 + 1;
          fVar19 = local_438;
          fVar22 = local_434;
          fVar23 = local_430;
        } while (uVar9 < uVar10);
      }
    }
  }
  return;
}



/* ===== 1801eec00 FUN_1801eec00 ===== */

void FUN_1801eec00(float *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 8) {
    if (*(char *)(param_2 + 0x10) != '\0') goto LAB_1801eecc9;
  }
  else {
    if (lVar1 != 0x10) {
      if (lVar1 == 0x200) {
        if (*(char *)(param_2 + 0x10) == '\0') {
          param_1[1] = DAT_1808acda0 + param_1[1];
          return;
        }
        param_1[1] = DAT_1808ac34c + param_1[1];
        return;
      }
      if (lVar1 == 0x400) {
        if (*(char *)(param_2 + 0x10) == '\0') {
          param_1[1] = DAT_1808ac34c + param_1[1];
          return;
        }
        param_1[1] = DAT_1808acda0 + param_1[1];
        return;
      }
      if (lVar1 != 0) {
        return;
      }
      if (*(char *)(param_2 + 0x40) == '\0') {
        return;
      }
      *param_1 = *(float *)(param_2 + 0x34) + *param_1;
      param_1[1] = *(float *)(param_2 + 0x38) + param_1[1];
      return;
    }
    if (*(char *)(param_2 + 0x10) == '\0') {
LAB_1801eecc9:
      *param_1 = DAT_1808ac34c + *param_1;
      return;
    }
  }
  *param_1 = DAT_1808acda0 + *param_1;
  return;
}



/* ===== 1801eed00 FUN_1801eed00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801eed00(float *param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8;
  float local_resc;
  
  fVar7 = DAT_1808accc8;
  if ((((*(ulonglong *)(param_2 + 8) & 0x18) == 0) ||
      (local_res8 = *(float *)(param_2 + 0x10), ((uint)local_res8 & 0x7f800000) == 0x7f800000)) ||
     (DAT_1808ac864 <= (float)((uint)local_res8 & _DAT_1808ade90))) {
    local_res8 = 0.0;
  }
  if ((((*(ulonglong *)(param_2 + 8) & 0x600) == 0) ||
      (local_resc = *(float *)(param_2 + 0x14), ((uint)local_resc & 0x7f800000) == 0x7f800000)) ||
     (DAT_1808ac864 <= (float)((uint)local_resc & _DAT_1808ade90))) {
    local_resc = 0.0;
  }
  fVar15 = *param_1;
  uVar11 = 0;
  fVar14 = param_1[1];
  fVar2 = param_1[2];
  uVar9 = (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0xe) >> 3) * -0x71c71c71c71c71c7;
  fVar16 = fVar14;
  fVar18 = fVar15;
  if (uVar9 != 0) {
    do {
      lVar4 = *(longlong *)(param_1 + 0xe);
      lVar1 = lVar4 + uVar11 * 0x48;
      uVar12 = uVar11 + 1;
      fVar13 = (*(float *)(lVar4 + uVar11 * 0x48) + fVar7) - fVar7;
      uVar10 = uVar11;
      uVar8 = uVar12;
      while ((uVar8 < uVar9 &&
             ((*(float *)(lVar4 + 0x48 + uVar10 * 0x48) + fVar7) - fVar7 == fVar13))) {
        uVar8 = uVar10 + 2;
        uVar10 = uVar10 + 1;
      }
      if ((fVar18 == fVar15) && (fVar16 == fVar14)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      cVar3 = *(char *)(lVar1 + 0x30);
      if (cVar3 != '\0') {
        fVar15 = fVar15 + *(float *)(lVar1 + 0x24);
        fVar14 = fVar14 + *(float *)(lVar1 + 0x28);
      }
      if ((local_res8 == 0.0) && (local_resc == 0.0)) {
        bVar6 = true;
        *(undefined1 *)(lVar1 + 0x30) = 0;
      }
      else {
        bVar6 = false;
        if (bVar5 || NAN(fVar2)) {
          *(undefined4 *)(lVar4 + 0x2c + uVar11 * 0x48) = 0;
          *(float *)(lVar1 + 0x24) = fVar15 - fVar18;
          *(float *)(lVar4 + 0x28 + uVar11 * 0x48) = fVar14 - fVar16;
          fVar16 = fVar14;
          fVar18 = fVar15;
          if (cVar3 == '\0') {
            *(undefined1 *)(lVar4 + 0x30 + uVar11 * 0x48) = 1;
          }
        }
        else {
          fVar16 = fVar14;
          fVar18 = fVar15;
          if (((fVar13 != 0.0) && (cVar3 == '\0' && *(longlong *)(lVar1 + 8) == 0)) &&
             ((*(char *)(lVar1 + 0x40) == '\0' ||
              (((*(float *)(lVar1 + 0x34) == 0.0 && (*(float *)(lVar1 + 0x38) == 0.0)) &&
               (*(float *)(lVar1 + 0x3c) == 0.0)))))) {
            *(undefined8 *)(lVar1 + 0x24) = 0;
            *(undefined4 *)(lVar1 + 0x2c) = 0;
            *(undefined1 *)(lVar1 + 0x30) = 1;
          }
        }
      }
      FUN_1801eec00(&local_res8);
      fVar13 = fVar16;
      fVar17 = fVar18;
      if (uVar12 <= uVar10) {
        do {
          lVar4 = *(longlong *)(param_1 + 0xe);
          lVar1 = lVar4 + uVar12 * 0x48;
          if ((fVar17 == fVar15) && (fVar13 == fVar14)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          cVar3 = *(char *)(lVar1 + 0x30);
          if (cVar3 != '\0') {
            fVar15 = fVar15 + *(float *)(lVar1 + 0x24);
            fVar14 = fVar14 + *(float *)(lVar1 + 0x28);
          }
          if (bVar6) {
            *(undefined1 *)(lVar1 + 0x30) = 0;
            fVar16 = fVar13;
            fVar18 = fVar17;
          }
          else {
            fVar16 = fVar14;
            fVar18 = fVar15;
            if ((bVar5) || (NAN(fVar2))) {
              *(undefined4 *)(lVar4 + 0x2c + uVar12 * 0x48) = 0;
              *(float *)(lVar1 + 0x24) = fVar15 - fVar17;
              *(float *)(lVar4 + 0x28 + uVar12 * 0x48) = fVar14 - fVar13;
              if (cVar3 == '\0') {
                *(undefined1 *)(lVar4 + 0x30 + uVar12 * 0x48) = 1;
              }
            }
          }
          FUN_1801eec00(&local_res8);
          uVar12 = uVar12 + 1;
          fVar13 = fVar16;
          fVar17 = fVar18;
        } while (uVar12 <= uVar10);
      }
      uVar11 = uVar10 + 1;
    } while (uVar11 < uVar9);
  }
  return;
}



/* ===== 1801ef060 FUN_1801ef060 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801ef060(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_148;
  float local_144;
  undefined1 local_140 [8];
  undefined8 local_138;
  longlong lStack_130;
  bool local_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f8;
  
  fVar11 = DAT_1808acda0;
  fVar10 = DAT_1808ac540;
  fVar9 = DAT_1808ac34c;
  if ((((*(ulonglong *)(param_2 + 8) & 0x18) == 0) ||
      (fVar26 = *(float *)(param_2 + 0x10), ((uint)fVar26 & 0x7f800000) == 0x7f800000)) ||
     (DAT_1808ac864 <= (float)((uint)fVar26 & (uint)_DAT_1808ade90))) {
    fVar26 = 0.0;
  }
  local_148 = fVar26;
  if ((((*(ulonglong *)(param_2 + 8) & 0x600) == 0) ||
      (fVar25 = *(float *)(param_2 + 0x14), ((uint)fVar25 & 0x7f800000) == 0x7f800000)) ||
     (DAT_1808ac864 <= (float)((uint)fVar25 & (uint)_DAT_1808ade90))) {
    fVar25 = 0.0;
  }
  lVar14 = *(longlong *)(param_1 + 0x38);
  local_144 = fVar25;
  if ((*(longlong *)(param_1 + 0x40) - lVar14 >> 3) * -0x71c71c71c71c71c7 != 0) {
    uVar16 = 0;
    uVar22 = DAT_1808adec0;
    uVar21 = _DAT_1808ade90;
    do {
      lVar6 = *(longlong *)(lVar14 + 8 + uVar16 * 0x48);
      fVar19 = fVar9;
      if (lVar6 == 8) {
        if (*(char *)(lVar14 + 0x10 + uVar16 * 0x48) == '\0') {
LAB_1801ef5e7:
          fVar19 = fVar11;
        }
LAB_1801ef5eb:
        pfVar13 = &local_148;
LAB_1801ef5f0:
        *pfVar13 = fVar19 + *pfVar13;
        fVar25 = local_144;
        fVar26 = local_148;
      }
      else {
        if (lVar6 == 0x10) {
          if (*(char *)(lVar14 + 0x10 + uVar16 * 0x48) != '\0') goto LAB_1801ef5e7;
          goto LAB_1801ef5eb;
        }
        if (lVar6 == 0x200) {
          if (*(char *)(lVar14 + 0x10 + uVar16 * 0x48) == '\0') {
            pfVar13 = &local_144;
            fVar19 = fVar11;
          }
          else {
            pfVar13 = &local_144;
          }
          goto LAB_1801ef5f0;
        }
        if (lVar6 == 0x400) {
          if (*(char *)(lVar14 + 0x10 + uVar16 * 0x48) == '\0') {
            pfVar13 = &local_144;
          }
          else {
            pfVar13 = &local_144;
            fVar19 = fVar11;
          }
          goto LAB_1801ef5f0;
        }
        if ((lVar6 == 0) && (*(char *)(lVar14 + 0x40 + uVar16 * 0x48) != '\0')) {
          fVar19 = *(float *)(lVar14 + 0x34 + uVar16 * 0x48);
          fVar4 = *(float *)(lVar14 + 0x38 + uVar16 * 0x48);
          if (((*(char *)(param_2 + 2) == '\0') &&
              (((float)((uint)fVar19 & (uint)uVar21) != fVar9 || (fVar4 != 0.0)))) &&
             (((float)((uint)fVar4 & (uint)uVar21) != fVar9 || (fVar19 != 0.0)))) {
            fVar26 = fVar26 + fVar19;
            fVar25 = fVar25 + fVar4;
            local_148 = fVar26;
            local_144 = fVar25;
          }
          else {
            uVar5 = *(undefined4 *)(lVar14 + 0x3c + uVar16 * 0x48);
            fVar23 = fVar26;
            fVar24 = fVar19;
            while ((fVar17 = (float)((uint)fVar24 & (uint)uVar21), fVar17 == fVar9 ||
                   (fVar17 == fVar10))) {
              if (fVar24 <= 0.0) {
                fVar18 = fVar11;
              }
              else {
                fVar18 = fVar9;
              }
              if ((fVar17 == fVar10) && (fVar23 != (float)((uint)fVar18 ^ uVar22))) break;
              if ((fVar24 == fVar18) && (fVar4 == 0.0)) {
                bVar8 = true;
              }
              else {
                bVar8 = false;
                if (0x1f < (ulonglong)
                           ((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) *
                           -0x71c71c71c71c71c7)) break;
              }
              if (fVar23 == 0.0) {
                uVar15 = 8;
              }
              else {
                uVar15 = 0;
              }
              uVar12 = 0;
              if (0.0 < fVar24) {
                uVar12 = 8;
              }
              bVar7 = fVar23 == 0.0;
              lStack_130 = (uVar15 ^ uVar12) + 8;
              lVar14 = *(longlong *)(param_1 + 0x38);
              fVar24 = fVar24 - fVar18;
              fVar23 = fVar23 + fVar18;
              if (bVar8) {
                *(longlong *)(lVar14 + 8 + uVar16 * 0x48) = lStack_130;
                *(bool *)(lVar14 + 0x10 + uVar16 * 0x48) = bVar7;
                *(undefined1 *)(lVar14 + 0x40 + uVar16 * 0x48) = 0;
              }
              else {
                local_138 = *(undefined8 *)(lVar14 + uVar16 * 0x48);
                puVar1 = (undefined8 *)(lVar14 + 0x10 + uVar16 * 0x48);
                uStack_120 = puVar1[1];
                puVar2 = (undefined8 *)(lVar14 + 0x20 + uVar16 * 0x48);
                local_118 = *puVar2;
                uStack_110 = puVar2[1];
                puVar3 = (undefined4 *)(lVar14 + 0x30 + uVar16 * 0x48);
                local_108 = *puVar3;
                uStack_104 = puVar3[1];
                uStack_100 = puVar3[2];
                uStack_fc = puVar3[3];
                uStack_127 = (undefined7)((ulonglong)*puVar1 >> 8);
                _local_128 = CONCAT71(uStack_127,bVar7);
                local_f8 = *(ulonglong *)(lVar14 + 0x40 + uVar16 * 0x48);
                *(float *)(lVar14 + 0x34 + uVar16 * 0x48) = fVar24;
                *(float *)(lVar14 + 0x38 + uVar16 * 0x48) = fVar4;
                *(undefined4 *)(lVar14 + 0x3c + uVar16 * 0x48) = uVar5;
                *(undefined1 *)(lVar14 + 0x30 + uVar16 * 0x48) = 0;
                *(undefined1 *)(lVar14 + 0x40 + uVar16 * 0x48) = 1;
                local_f8 = local_f8 & 0xffffffffffffff00;
                FUN_1801f0880(param_1 + 0x38,local_140,*(longlong *)(param_1 + 0x38) + uVar16 * 0x48
                             );
                uVar16 = uVar16 + 1;
                uVar22 = DAT_1808adec0;
                uVar21 = _DAT_1808ade90;
              }
            }
            fVar23 = fVar4;
            fVar17 = fVar25;
            while ((fVar18 = (float)((uint)fVar23 & (uint)uVar21), fVar18 == fVar9 ||
                   (fVar18 == fVar10))) {
              if (fVar23 <= 0.0) {
                fVar20 = fVar11;
              }
              else {
                fVar20 = fVar9;
              }
              if ((fVar18 == fVar10) && (fVar17 != (float)((uint)fVar20 ^ uVar22))) break;
              if ((fVar23 == fVar20) && (fVar24 == 0.0)) {
                bVar8 = true;
              }
              else {
                bVar8 = false;
                if (0x1f < (ulonglong)
                           ((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) *
                           -0x71c71c71c71c71c7)) break;
              }
              if (fVar17 == 0.0) {
                uVar15 = 0x200;
              }
              else {
                uVar15 = 0;
              }
              uVar12 = 0;
              if (0.0 < fVar23) {
                uVar12 = 0x200;
              }
              bVar7 = fVar17 == 0.0;
              lStack_130 = (uVar15 ^ uVar12) + 0x200;
              lVar14 = *(longlong *)(param_1 + 0x38);
              fVar23 = fVar23 - fVar20;
              fVar17 = fVar17 + fVar20;
              if (bVar8) {
                *(longlong *)(lVar14 + 8 + uVar16 * 0x48) = lStack_130;
                *(bool *)(lVar14 + 0x10 + uVar16 * 0x48) = bVar7;
                *(undefined1 *)(lVar14 + 0x40 + uVar16 * 0x48) = 0;
              }
              else {
                local_138 = *(undefined8 *)(lVar14 + uVar16 * 0x48);
                puVar1 = (undefined8 *)(lVar14 + 0x10 + uVar16 * 0x48);
                uStack_120 = puVar1[1];
                puVar2 = (undefined8 *)(lVar14 + 0x20 + uVar16 * 0x48);
                local_118 = *puVar2;
                uStack_110 = puVar2[1];
                puVar3 = (undefined4 *)(lVar14 + 0x30 + uVar16 * 0x48);
                local_108 = *puVar3;
                uStack_104 = puVar3[1];
                uStack_100 = puVar3[2];
                uStack_fc = puVar3[3];
                uStack_127 = (undefined7)((ulonglong)*puVar1 >> 8);
                _local_128 = CONCAT71(uStack_127,bVar7);
                local_f8 = *(ulonglong *)(lVar14 + 0x40 + uVar16 * 0x48);
                *(undefined1 *)(lVar14 + 0x30 + uVar16 * 0x48) = 0;
                *(float *)(lVar14 + 0x34 + uVar16 * 0x48) = fVar24;
                *(float *)(lVar14 + 0x38 + uVar16 * 0x48) = fVar23;
                *(undefined4 *)(lVar14 + 0x3c + uVar16 * 0x48) = uVar5;
                *(undefined1 *)(lVar14 + 0x40 + uVar16 * 0x48) = 1;
                local_f8 = local_f8 & 0xffffffffffffff00;
                FUN_1801f0880(param_1 + 0x38,local_140,*(longlong *)(param_1 + 0x38) + uVar16 * 0x48
                             );
                uVar16 = uVar16 + 1;
                uVar22 = DAT_1808adec0;
                uVar21 = _DAT_1808ade90;
              }
            }
            fVar26 = fVar26 + fVar19;
            fVar25 = fVar25 + fVar4;
            local_148 = fVar26;
            local_144 = fVar25;
          }
        }
      }
      lVar14 = *(longlong *)(param_1 + 0x38);
      uVar16 = uVar16 + 1;
    } while (uVar16 < (ulonglong)
                      ((*(longlong *)(param_1 + 0x40) - lVar14 >> 3) * -0x71c71c71c71c71c7));
  }
  return;
}



/* ===== 1801ef6c0 FUN_1801ef6c0 ===== */

void FUN_1801ef6c0(float *param_1,longlong param_2)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar7 = DAT_1808acda0;
  uVar6 = DAT_1808ac34c;
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar8 = *(longlong *)(param_1 + 0xe);
  if (lVar8 != lVar4) {
    fVar10 = *(float *)(param_2 + 0x10);
    fVar11 = *(float *)(param_2 + 0x14);
    fVar12 = *param_1;
    fVar13 = param_1[1];
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    fVar2 = param_1[2];
    do {
      if (*(char *)(lVar8 + 0x42) != '\0') {
        uVar5 = *(ulonglong *)(lVar8 + 8);
        *(undefined1 *)(lVar8 + 0x42) = 0;
        if ((uVar5 & 0x618) != 0) {
          cVar3 = *(char *)(lVar8 + 0x10);
          *(undefined1 *)(lVar8 + 0x10) = 0;
          *(undefined8 *)(lVar8 + 8) = 0;
          uVar9 = uVar6;
          if (uVar5 == 8) {
            if (cVar3 == '\0') {
LAB_1801ef7ae:
              uVar9 = uVar7;
            }
LAB_1801ef7b1:
            *(undefined4 *)(lVar8 + 0x34) = uVar9;
            *(undefined8 *)(lVar8 + 0x38) = 0;
          }
          else {
            if (uVar5 == 0x10) {
              if (cVar3 != '\0') goto LAB_1801ef7ae;
              goto LAB_1801ef7b1;
            }
            if (uVar5 == 0x200) {
              if (cVar3 == '\0') {
LAB_1801ef78a:
                *(undefined4 *)(lVar8 + 0x34) = 0;
                *(undefined4 *)(lVar8 + 0x38) = uVar7;
                *(undefined4 *)(lVar8 + 0x3c) = 0;
              }
              else {
                *(undefined4 *)(lVar8 + 0x34) = 0;
                *(undefined4 *)(lVar8 + 0x38) = uVar6;
                *(undefined4 *)(lVar8 + 0x3c) = 0;
              }
            }
            else {
              if (uVar5 != 0x400) goto LAB_1801ef7be;
              if (cVar3 != '\0') goto LAB_1801ef78a;
              *(undefined4 *)(lVar8 + 0x34) = 0;
              *(undefined4 *)(lVar8 + 0x38) = uVar6;
              *(undefined4 *)(lVar8 + 0x3c) = 0;
            }
          }
          *(undefined1 *)(lVar8 + 0x40) = 1;
        }
LAB_1801ef7be:
        if (*(char *)(lVar8 + 0x40) != '\0') {
          fVar10 = fVar10 + *(float *)(lVar8 + 0x34);
          fVar11 = fVar11 + *(float *)(lVar8 + 0x38);
          *(undefined4 *)(lVar8 + 0x3c) = uVar1;
          *(float *)(lVar8 + 0x34) = fVar10;
          *(float *)(lVar8 + 0x38) = fVar11;
        }
        if (*(char *)(lVar8 + 0x30) != '\0') {
          fVar12 = fVar12 + *(float *)(lVar8 + 0x24);
          fVar13 = fVar13 + *(float *)(lVar8 + 0x28);
          *(float *)(lVar8 + 0x2c) = fVar2;
          *(float *)(lVar8 + 0x24) = fVar12;
          *(float *)(lVar8 + 0x28) = fVar13;
        }
      }
      lVar8 = lVar8 + 0x48;
    } while (lVar8 != lVar4);
  }
  return;
}



/* ===== 1801ef820 FUN_1801ef820 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801ef820(float *param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulonglong *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1188 [32];
  float *local_1168;
  undefined1 local_1160;
  char local_1158;
  char local_1157;
  char local_1156;
  float local_1154;
  float local_1150;
  float local_114c;
  float local_1148;
  float local_1144;
  float local_1140;
  float local_1138;
  float local_1134;
  int local_1130;
  float local_1128;
  float local_1124;
  ulonglong local_1118;
  ulonglong uStack_1110;
  uint local_1108;
  undefined4 uStack_1104;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  uint local_10f8;
  float fStack_10f4;
  undefined2 uStack_10f0;
  ushort uStack_10ee;
  float fStack_10ec;
  uint local_10e8;
  float fStack_10e4;
  float fStack_10e0;
  float fStack_10dc;
  undefined1 local_10d8;
  undefined1 uStack_10d7;
  undefined1 uStack_10d6;
  uint5 uStack_10d5;
  float local_10c8;
  float local_10c0;
  float local_10bc;
  float local_10b8;
  float local_10b4;
  undefined8 local_10b0;
  float *local_10a8;
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_1188;
  local_1118 = 0;
  uStack_1110 = uStack_1110 & 0xffffff0000000000;
  local_1108 = 0;
  uStack_1104 = 0;
  uStack_1100 = 0;
  uStack_10fc = 0;
  local_10f8 = 0;
  fStack_10f4 = 0.0;
  uStack_10f0 = 0;
  fStack_10ec = 0.0;
  local_10e8 = 0;
  fStack_10e4 = 0.0;
  fStack_10e0 = 0.0;
  fStack_10dc = 0.0;
  _DAT_180ceb0a0 = 0;
  _DAT_180ceb0a8 = uStack_1110;
  ram0x000180ceb0b0 = 0;
  _DAT_180ceb0b8 = 0;
  _DAT_180ceb0c8 = (uint)uStack_10ee << 0x10;
  DAT_180ceb0c0 = 0;
  DAT_180ceb0c4 = 0;
  DAT_180ceb0cc = 0;
  _DAT_180ceb0d0 = 0;
  _DAT_180ceb0d8 = 0;
  DAT_180ceb0e0 = 0;
  local_1157 = *param_2;
  local_1158 = param_2[1];
  local_1130 = *(int *)(param_2 + 4);
  if (local_1158 == '\0') {
    bVar17 = false;
  }
  else {
    bVar17 = local_1130 != 2;
    if (*(char *)((longlong)param_1 + 0x25) != '\0') {
      bVar17 = *(char *)(param_1 + 9) != '\0';
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x10);
  lVar14 = *(longlong *)(param_1 + 0xe);
  lVar13 = lVar12 - lVar14;
  lVar11 = (lVar13 >> 3) * -0x71c71c71c71c71c7;
  if (lVar11 < 0x21) {
    FUN_1801f09d0(lVar14,lVar12);
  }
  else {
    lVar13 = lVar13 / 0x12 + (lVar13 >> 0x3f);
    FUN_1801f0b30(&local_10b0,lVar11 - ((lVar13 >> 3) - (lVar13 >> 0x3f)));
    local_1160 = local_1156;
    local_1168 = local_10a8;
    FUN_1801f0be0(lVar14,lVar12,lVar11,local_10b0);
    if (&DAT_00000038 < local_10a8) {
      FUN_1803d64e0(local_10b0);
    }
  }
  bVar4 = false;
  pfVar8 = *(float **)(param_1 + 0xe);
  pfVar7 = *(float **)(param_1 + 0x10);
  pfVar9 = pfVar8;
  if (pfVar8 != pfVar7) {
    do {
      if (*(char *)(pfVar9 + 0x10) != '\0') {
        bVar4 = true;
      }
      pfVar9 = pfVar9 + 0x12;
    } while (pfVar9 != pfVar7);
    if (bVar4) goto LAB_1801efaab;
    do {
      if ((*(longlong *)(pfVar8 + 2) == 0) && (*pfVar8 == 0.0)) {
        pfVar8[0xd] = param_1[3];
        pfVar8[0xe] = param_1[4];
        pfVar8[0xf] = param_1[5];
        *(undefined1 *)(pfVar8 + 0x10) = 1;
        goto LAB_1801efaab;
      }
      pfVar8 = pfVar8 + 0x12;
    } while (pfVar8 != pfVar7);
  }
  local_1118 = local_1118 & 0xffffffff00000000;
  uStack_1110 = 0;
  local_1108 = local_1108 & 0xffffff00;
  uStack_1104 = 0;
  uStack_1100 = 0;
  uStack_10fc = 0;
  local_10f8 = local_10f8 & 0xffffff00;
  fStack_10f4 = 0.0;
  uStack_10f0 = 0;
  uStack_10ee = 0;
  fStack_10ec = 0.0;
  local_10e8 = local_10e8 & 0xffffff00;
  uStack_10d7 = 0;
  uStack_10d6 = 0;
  fStack_10e4 = param_1[3];
  fStack_10e0 = param_1[4];
  fStack_10dc = param_1[5];
  local_10d8 = 1;
  FUN_1801f0880(param_1 + 0xe,&local_10c0,*(undefined8 *)(param_1 + 0xe),&local_1118);
LAB_1801efaab:
  if ((((param_2[2] != '\0') && (local_1157 != '\0')) && (local_1158 != '\0')) &&
     ((local_1130 == 2 && (param_1[2] == 0.0)))) {
    FUN_1801ee0b0(param_1,param_2);
  }
  if ((((*(ulonglong *)(param_2 + 8) & 0x18) == 0) ||
      (fVar22 = *(float *)(param_2 + 0x10), ((uint)fVar22 & 0x7f800000) == 0x7f800000)) ||
     (DAT_1808ac864 <= (float)((uint)fVar22 & _DAT_1808ade90))) {
    fVar22 = 0.0;
  }
  if ((((*(ulonglong *)(param_2 + 8) & 0x600) == 0) ||
      (fVar21 = *(float *)(param_2 + 0x14), ((uint)fVar21 & 0x7f800000) == 0x7f800000)) ||
     (DAT_1808ac864 <= (float)((uint)fVar21 & _DAT_1808ade90))) {
    fVar21 = 0.0;
  }
  fVar23 = *(float *)(param_2 + 0x18);
  if ((((uint)fVar23 & 0x7f800000) == 0x7f800000) ||
     (DAT_1808ac864 <= (float)((uint)fVar23 & _DAT_1808ade90))) {
    fVar23 = 0.0;
  }
  fVar24 = *param_1;
  fVar25 = param_1[1];
  local_114c = param_1[2];
  fVar19 = param_1[6];
  fVar18 = param_1[7];
  fVar20 = param_1[8];
  if ((bVar17) || ((local_1158 != '\0' && (local_114c != 0.0)))) {
    local_1156 = '\0';
  }
  else {
    local_1156 = '\x01';
  }
  puVar10 = *(ulonglong **)(param_1 + 0x10);
  lVar12 = *(longlong *)(param_1 + 0xe);
  if (((longlong)puVar10 - lVar12 >> 3) * -0x71c71c71c71c71c7 != 0) {
    bVar17 = false;
    local_1150 = 0.0;
    fVar26 = 0.0;
    local_1154 = 0.0;
    uVar16 = 0;
    cVar15 = local_1158;
    local_1148 = fVar19;
    local_1144 = fVar18;
    local_1140 = fVar20;
    local_1138 = fVar22;
    local_1134 = fVar21;
    local_1128 = fVar24;
    local_1124 = fVar25;
    local_10c8 = fVar23;
    do {
      if (bVar17) {
        *(float *)(lVar12 + 0x24 + uVar16 * 0x48) = local_1150;
        *(float *)(lVar12 + 0x28 + uVar16 * 0x48) = fVar26;
        *(float *)(lVar12 + 0x2c + uVar16 * 0x48) = local_1154;
        *(undefined1 *)(lVar12 + 0x30 + uVar16 * 0x48) = 1;
        puVar10 = *(ulonglong **)(param_1 + 0x10);
        lVar14 = *(longlong *)(param_1 + 0xe);
      }
      else {
        lVar14 = lVar12;
      }
      cVar3 = *(char *)(lVar12 + 0x40 + uVar16 * 0x48);
      if (cVar3 == '\0') {
        if (*(char *)(lVar12 + 0x20 + uVar16 * 0x48) != '\0') goto LAB_1801efd04;
        if ((*(char *)(lVar12 + 0x30 + uVar16 * 0x48) != '\0') && (cVar15 != '\0'))
        goto LAB_1801efd40;
        bVar17 = false;
      }
      else {
        local_1138 = *(float *)(lVar12 + 0x34 + uVar16 * 0x48);
        local_1134 = *(float *)(lVar12 + 0x38 + uVar16 * 0x48);
        local_10c8 = *(float *)(lVar12 + 0x3c + uVar16 * 0x48);
        if (*(char *)(lVar12 + 0x20 + uVar16 * 0x48) != '\0') {
LAB_1801efd04:
          fVar19 = *(float *)(lVar12 + 0x14 + uVar16 * 0x48);
          fVar18 = *(float *)(lVar12 + 0x18 + uVar16 * 0x48);
          fVar20 = *(float *)(lVar12 + 0x1c + uVar16 * 0x48);
          local_1148 = fVar19;
          local_1144 = fVar18;
          local_1140 = fVar20;
        }
LAB_1801efd40:
        if (cVar15 == '\0') {
LAB_1801eff09:
          if (((fVar24 != fVar19) || (fVar25 != fVar18)) || (local_114c != fVar20)) {
            if ((*(longlong *)(lVar12 + 8 + uVar16 * 0x48) == 0) && (local_1156 != '\0')) {
              DAT_180ceb0a4 = DAT_180ceb0a4 + 1;
              param_1[3] = local_1138;
              param_1[4] = local_1134;
              param_1[5] = local_10c8;
              if (local_1157 == '\0') {
                FUN_1801ed330(param_1,&local_1128,local_114c,&local_1148);
                fVar24 = local_1128;
                fVar25 = local_1124;
              }
              else {
                FUN_1801edb10(param_1,&local_1148,cVar15,*(undefined4 *)(param_2 + 0x20));
              }
              *(float *)(lVar12 + 0x34 + uVar16 * 0x48) = param_1[3];
              *(float *)(lVar12 + 0x38 + uVar16 * 0x48) = param_1[4];
              *(float *)(lVar12 + 0x3c + uVar16 * 0x48) = param_1[5];
              *(undefined1 *)(lVar12 + 0x40 + uVar16 * 0x48) = 1;
              bVar17 = false;
              *(undefined1 *)(lVar12 + 0x20 + uVar16 * 0x48) = 0;
              fVar18 = local_1144;
              fVar19 = local_1148;
              fVar20 = local_1140;
              cVar15 = local_1158;
            }
            else {
              DAT_180ceb0a8 = DAT_180ceb0a8 + 1;
              if (cVar15 != '\0') goto LAB_1801efe4a;
              bVar17 = false;
LAB_1801f0051:
              *(undefined1 *)(lVar12 + 0x20 + uVar16 * 0x48) = 0;
              if (cVar3 == '\0') goto LAB_1801f00a6;
            }
LAB_1801f005b:
            fVar22 = fVar22 + (*(float *)(lVar12 + 0x34 + uVar16 * 0x48) - fVar22);
            fVar21 = fVar21 + (*(float *)(lVar12 + 0x38 + uVar16 * 0x48) - fVar21);
            fVar23 = fVar23 + (*(float *)(lVar12 + 0x3c + uVar16 * 0x48) - fVar23);
            goto LAB_1801f00a6;
          }
        }
        else {
          puVar6 = (ulonglong *)(uVar16 + 1);
          puVar10 = (ulonglong *)(((longlong)puVar10 - lVar14 >> 3) * -0x71c71c71c71c71c7);
          if (puVar6 < puVar10) {
            do {
              if (*(float *)(lVar12 + uVar16 * 0x48) < *(float *)(lVar14 + (longlong)puVar6 * 0x48))
              {
                lVar14 = *(longlong *)(param_1 + 0xe);
                if (*(char *)(lVar14 + 0x30 + (longlong)puVar6 * 0x48) != '\0') {
                  fVar24 = fVar24 + (*(float *)(lVar14 + 0x24 + (longlong)puVar6 * 0x48) - fVar24);
                  fVar25 = fVar25 + (*(float *)(lVar14 + 0x28 + (longlong)puVar6 * 0x48) - fVar25);
                  local_1128 = fVar24;
                  local_1124 = fVar25;
                }
                break;
              }
              puVar6 = (ulonglong *)((longlong)puVar6 + 1);
            } while (puVar6 < puVar10);
          }
          if (local_1157 == '\0') goto LAB_1801eff09;
          if (((fVar24 != fVar19) || (fVar25 != fVar18)) || (local_114c != fVar20)) {
            DAT_180ceb0a8 = DAT_180ceb0a8 + 1;
LAB_1801efe4a:
            bVar17 = true;
            if ((local_114c == 0.0) || (cVar3 == '\0')) {
              fVar26 = fVar18;
              local_1154 = fVar20;
              local_1150 = fVar19;
              goto LAB_1801f0051;
            }
            local_1168 = &local_10b8;
            FUN_1801ed0c0(fVar19,puVar10,fVar20,&local_10c0);
            fVar26 = (float)FUN_180516b00(local_10b4 * local_1134 + local_10bc * local_1138,
                                          local_10b8 * local_1134 + local_10c0 * local_1138);
            fVar26 = fVar26 * DAT_1808aca94;
            fVar18 = *(float *)(lVar12 + 0x34 + uVar16 * 0x48);
            fVar1 = *(float *)(lVar12 + 0x38 + uVar16 * 0x48);
            fVar2 = *(float *)(lVar12 + 0x3c + uVar16 * 0x48);
            fVar18 = fVar2 * fVar2 + fVar1 * fVar1 + fVar18 * fVar18;
            if (fVar18 < 0.0) {
              fVar18 = (float)FUN_18051af10(fVar18);
            }
            else {
              fVar18 = SQRT(fVar18);
            }
            *(float *)(lVar12 + 0x34 + uVar16 * 0x48) = fVar18;
            *(undefined8 *)(lVar12 + 0x38 + uVar16 * 0x48) = 0;
            *(undefined1 *)(lVar12 + 0x40 + uVar16 * 0x48) = 1;
            *(undefined1 *)(lVar12 + 0x20 + uVar16 * 0x48) = 0;
            fVar18 = fVar26;
            cVar15 = local_1158;
            local_1154 = fVar20;
            local_1150 = fVar19;
            local_1144 = fVar26;
            goto LAB_1801f005b;
          }
        }
        bVar17 = false;
        DAT_180ceb0a0 = DAT_180ceb0a0 + 1;
        if (cVar3 != '\0') {
          fVar22 = fVar22 + (*(float *)(lVar12 + 0x34 + uVar16 * 0x48) - fVar22);
          fVar21 = fVar21 + (*(float *)(lVar12 + 0x38 + uVar16 * 0x48) - fVar21);
          fVar23 = fVar23 + (*(float *)(lVar12 + 0x3c + uVar16 * 0x48) - fVar23);
        }
      }
LAB_1801f00a6:
      uVar5 = local_10f8;
      uVar16 = uVar16 + 1;
      puVar10 = *(ulonglong **)(param_1 + 0x10);
      lVar12 = *(longlong *)(param_1 + 0xe);
    } while (uVar16 < (ulonglong)(((longlong)puVar10 - lVar12 >> 3) * -0x71c71c71c71c71c7));
    if (((bVar17) &&
        ((((*param_1 != local_1150 || (param_1[1] != fVar26)) || (param_1[2] != local_1154)) &&
         ((ulonglong)(((longlong)puVar10 - lVar12 >> 3) * -0x71c71c71c71c71c7) < 0x20)))) &&
       (((param_2[2] == '\0' || (local_1130 != 2)) || (fVar26 != param_1[1])))) {
      uStack_1110 = 0;
      local_1108 = local_1108 & 0xffffff00;
      uStack_1104 = 0;
      uStack_1100 = 0;
      uStack_10fc = 0;
      local_10f8 = local_10f8 & 0xffffff00;
      fStack_10e4 = 0.0;
      fStack_10e0 = 0.0;
      fStack_10dc = 0.0;
      local_10d8 = 0;
      uStack_10d7 = 0;
      uStack_10d6 = 0;
      local_1118 = CONCAT44(local_1118._4_4_,0x3f800000);
      uStack_10f0 = SUB42(fVar26,0);
      uStack_10ee = (ushort)((uint)fVar26 >> 0x10);
      local_10e8 = CONCAT31(local_10e8._1_3_,1);
      if (puVar10 == *(ulonglong **)(param_1 + 0x12)) {
        fStack_10f4 = local_1150;
        fStack_10ec = local_1154;
        FUN_18008c530(param_1 + 0xe,puVar10,&local_1118);
      }
      else {
        *puVar10 = local_1118;
        puVar10[1] = 0;
        puVar10[2] = (ulonglong)local_1108;
        puVar10[3] = 0;
        puVar10[4] = CONCAT44(local_1150,uVar5) & 0xffffffffffffff00;
        puVar10[5] = CONCAT44(local_1154,fVar26);
        puVar10[6] = (ulonglong)local_10e8;
        puVar10[7] = 0;
        puVar10[8] = (ulonglong)uStack_10d5 << 0x18;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x48;
      }
    }
  }
  if ((param_2[2] != '\0') && (local_1130 == 2)) {
    pfVar8 = *(float **)(param_1 + 0x10);
    pfVar7 = *(float **)(param_1 + 0xe);
    if (pfVar7 != pfVar8) {
      fVar19 = *(float *)(param_2 + 0x1c);
      fVar18 = *param_1;
      do {
        if (*(char *)(pfVar7 + 0xc) != '\0') {
          pfVar7[9] = (fVar18 - fVar19) * *pfVar7 + fVar19;
        }
        pfVar7 = pfVar7 + 0x12;
      } while (pfVar7 != pfVar8);
    }
  }
  param_1[3] = fVar22;
  param_1[4] = fVar21;
  param_1[5] = fVar23;
  param_1[6] = fVar24;
  param_1[7] = fVar25;
  param_1[8] = local_114c;
  return;
}



/* ===== 1801f02b0 FUN_1801f02b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f02b0(float *param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_resc;
  
  fVar6 = DAT_1808acda0;
  fVar5 = DAT_1808ac34c;
  fVar4 = DAT_1808abfbc;
  lVar8 = *(longlong *)(param_1 + 0xe);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar8 != lVar1) {
    if ((((*(ulonglong *)(param_2 + 8) & 0x18) == 0) ||
        (fVar13 = *(float *)(param_2 + 0x10), ((uint)fVar13 & 0x7f800000) == 0x7f800000)) ||
       (DAT_1808ac864 <= (float)((uint)fVar13 & _DAT_1808ade90))) {
      fVar13 = 0.0;
    }
    local_res8 = fVar13;
    if ((((*(ulonglong *)(param_2 + 8) & 0x600) == 0) ||
        (fVar12 = *(float *)(param_2 + 0x14), ((uint)fVar12 & 0x7f800000) == 0x7f800000)) ||
       (DAT_1808ac864 <= (float)((uint)fVar12 & _DAT_1808ade90))) {
      fVar12 = 0.0;
    }
    fVar14 = param_1[1];
    fVar11 = *param_1;
    local_resc = fVar12;
    do {
      lVar2 = *(longlong *)(lVar8 + 8);
      fVar10 = fVar5;
      if (lVar2 == 8) {
        if (*(char *)(lVar8 + 0x10) == '\0') {
LAB_1801f03f2:
          fVar10 = fVar6;
        }
LAB_1801f03f5:
        pfVar7 = &local_res8;
LAB_1801f03fa:
        *pfVar7 = fVar10 + *pfVar7;
        fVar12 = local_resc;
        fVar13 = local_res8;
      }
      else {
        if (lVar2 == 0x10) {
          if (*(char *)(lVar8 + 0x10) != '\0') goto LAB_1801f03f2;
          goto LAB_1801f03f5;
        }
        if (lVar2 == 0x200) {
          if (*(char *)(lVar8 + 0x10) == '\0') {
            pfVar7 = &local_resc;
            fVar10 = fVar6;
          }
          else {
            pfVar7 = &local_resc;
          }
          goto LAB_1801f03fa;
        }
        if (lVar2 == 0x400) {
          if (*(char *)(lVar8 + 0x10) == '\0') {
            pfVar7 = &local_resc;
          }
          else {
            pfVar7 = &local_resc;
            fVar10 = fVar6;
          }
          goto LAB_1801f03fa;
        }
      }
      if (*(char *)(lVar8 + 0x42) == '\0') {
        *(undefined1 *)(lVar8 + 0x42) = 1;
        if (lVar2 == 0) {
          if (*(char *)(lVar8 + 0x40) == '\0') {
LAB_1801f04d4:
            bVar3 = true;
          }
          else {
            fVar10 = *(float *)(lVar8 + 0x34) - fVar13;
            fVar9 = *(float *)(lVar8 + 0x38) - fVar12;
            if (fVar10 == 0.0) {
              fVar10 = 0.0;
            }
            else {
              fVar13 = fVar13 + fVar10;
              local_res8 = fVar13;
            }
            if (fVar9 == 0.0) {
              fVar9 = 0.0;
            }
            else {
              fVar12 = fVar12 + fVar9;
              local_resc = fVar12;
            }
            *(undefined4 *)(lVar8 + 0x3c) = 0;
            *(float *)(lVar8 + 0x34) = fVar10;
            *(float *)(lVar8 + 0x38) = fVar9;
            if ((fVar10 == 0.0) && (fVar9 == 0.0)) goto LAB_1801f04d4;
            bVar3 = false;
          }
          if (*(char *)(lVar8 + 0x30) == '\0') {
            if ((bVar3) && (*(char *)(lVar8 + 0x41) != '\0')) {
              *(undefined8 *)(lVar8 + 0x28) = 0;
              fVar11 = fVar11 + fVar4;
              *(undefined1 *)(lVar8 + 0x30) = 1;
              *(undefined4 *)(lVar8 + 0x24) = 0x3a83126f;
            }
            goto LAB_1801f057a;
          }
        }
        else {
          bVar3 = false;
          if (*(char *)(lVar8 + 0x30) == '\0') goto LAB_1801f057a;
        }
        fVar10 = *(float *)(lVar8 + 0x24) - fVar11;
        if (fVar10 == 0.0) {
          fVar10 = 0.0;
        }
        else {
          fVar11 = fVar10 + fVar11;
        }
        fVar9 = *(float *)(lVar8 + 0x28) - fVar14;
        *(float *)(lVar8 + 0x24) = fVar10;
        *(undefined4 *)(lVar8 + 0x2c) = 0;
        if (fVar9 == 0.0) {
          *(undefined4 *)(lVar8 + 0x28) = 0;
          if (((fVar10 == 0.0) && (bVar3)) && (*(char *)(lVar8 + 0x41) != '\0')) {
            fVar11 = fVar11 + fVar4;
            *(float *)(lVar8 + 0x24) = fVar10 + fVar4;
          }
        }
        else {
          *(float *)(lVar8 + 0x28) = fVar9;
          fVar14 = fVar14 + fVar9;
        }
      }
      else {
        if ((lVar2 == 0) && (*(char *)(lVar8 + 0x40) != '\0')) {
          fVar13 = fVar13 + *(float *)(lVar8 + 0x34);
          fVar12 = fVar12 + *(float *)(lVar8 + 0x38);
          local_res8 = fVar13;
          local_resc = fVar12;
        }
        if (*(char *)(lVar8 + 0x30) != '\0') {
          fVar11 = fVar11 + *(float *)(lVar8 + 0x24);
          fVar14 = fVar14 + *(float *)(lVar8 + 0x28);
        }
      }
LAB_1801f057a:
      lVar8 = lVar8 + 0x48;
    } while (lVar8 != lVar1);
    if ((*param_2 != '\0') && (param_2[2] != '\0')) {
      if (param_2[1] != '\0') {
        FUN_1801eed00(param_1,param_2);
      }
      FUN_1801ef060(param_1,param_2);
    }
  }
  return;
}



/* ===== 1801f05d0 FUN_1801f05d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f05d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  float *pfVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float local_28;
  float local_24;
  float local_20 [6];
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  puVar13 = *(undefined8 **)(param_1 + 0x38);
  if (puVar13 != puVar1) {
    do {
      if ((((*(char *)((longlong)puVar13 + 0x41) == '\0') && (puVar13[1] == 0)) &&
          ((*(char *)(puVar13 + 8) == '\0' ||
           (((*(float *)((longlong)puVar13 + 0x34) == 0.0 && (*(float *)(puVar13 + 7) == 0.0)) &&
            (*(float *)((longlong)puVar13 + 0x3c) == 0.0)))))) && (*(char *)(puVar13 + 6) == '\0'))
      break;
      puVar13 = puVar13 + 9;
    } while (puVar13 != puVar1);
    if (puVar13 != puVar1) {
      puVar8 = puVar13 + 9;
      if (puVar8 != puVar1) {
        do {
          if ((((*(char *)((longlong)puVar8 + 0x41) != '\0') || (puVar8[1] != 0)) ||
              ((*(char *)(puVar8 + 8) != '\0' &&
               (((*(float *)((longlong)puVar8 + 0x34) != 0.0 || (*(float *)(puVar8 + 7) != 0.0)) ||
                (*(float *)((longlong)puVar8 + 0x3c) != 0.0)))))) || (*(char *)(puVar8 + 6) != '\0')
             ) {
            uVar5 = puVar8[1];
            *puVar13 = *puVar8;
            puVar13[1] = uVar5;
            uVar5 = puVar8[3];
            puVar13[2] = puVar8[2];
            puVar13[3] = uVar5;
            uVar5 = puVar8[5];
            puVar13[4] = puVar8[4];
            puVar13[5] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar8 + 0x34);
            uVar3 = *(undefined4 *)(puVar8 + 7);
            uVar4 = *(undefined4 *)((longlong)puVar8 + 0x3c);
            *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(puVar8 + 6);
            *(undefined4 *)((longlong)puVar13 + 0x34) = uVar2;
            *(undefined4 *)(puVar13 + 7) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0x3c) = uVar4;
            puVar13[8] = puVar8[8];
            puVar13 = puVar13 + 9;
          }
          puVar8 = puVar8 + 9;
        } while (puVar8 != puVar1);
        if (puVar13 == puVar1) goto LAB_1801f06f3;
      }
      lVar12 = *(longlong *)(param_1 + 0x40) - (longlong)puVar1;
      FUN_180540530(puVar13,puVar1,lVar12);
      *(longlong *)(param_1 + 0x40) = lVar12 + (longlong)puVar13;
    }
  }
LAB_1801f06f3:
  if ((((*(ulonglong *)(param_2 + 8) & 0x18) == 0) ||
      (local_28 = *(float *)(param_2 + 0x10), ((uint)local_28 & 0x7f800000) == 0x7f800000)) ||
     (DAT_1808ac864 <= (float)((uint)local_28 & _DAT_1808ade90))) {
    local_28 = 0.0;
  }
  if ((((*(ulonglong *)(param_2 + 8) & 0x600) == 0) ||
      (local_24 = *(float *)(param_2 + 0x14), ((uint)local_24 & 0x7f800000) == 0x7f800000)) ||
     (DAT_1808ac864 <= (float)((uint)local_24 & _DAT_1808ade90))) {
    local_24 = 0.0;
  }
  lVar12 = *(longlong *)(param_1 + 0x40);
  lVar11 = *(longlong *)(param_1 + 0x38);
  if (lVar11 != lVar12) {
    do {
      FUN_1801eec00(&local_28);
      lVar11 = lVar11 + 0x48;
    } while (lVar11 != lVar12);
  }
  fVar7 = DAT_1808acda0;
  fVar6 = DAT_1808ac34c;
  if (*(char *)(param_2 + 2) != '\0') {
    uVar10 = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffff9e7;
    if (local_28 <= 0.0) {
      if (local_28 < 0.0) {
        uVar10 = uVar10 | 0x10;
      }
    }
    else {
      uVar10 = uVar10 | 8;
    }
    if (local_24 <= 0.0) {
      if (local_24 < 0.0) {
        uVar10 = uVar10 | 0x400;
      }
    }
    else {
      uVar10 = uVar10 | 0x200;
    }
    pfVar9 = &local_28;
    *(ulonglong *)(param_1 + 0x28) = uVar10;
    *(undefined4 *)(param_1 + 0x14) = 0;
    do {
      fVar15 = *pfVar9;
      if (*pfVar9 <= fVar7) {
        fVar15 = fVar7;
      }
      fVar14 = fVar6;
      if (fVar15 <= fVar6) {
        fVar14 = fVar15;
      }
      *pfVar9 = fVar14;
      pfVar9 = pfVar9 + 1;
    } while (pfVar9 != local_20);
  }
  uVar10 = *(ulonglong *)(param_1 + 0x28);
  if ((uVar10 & 0x18) == 0) {
    local_28 = 0.0;
  }
  *(float *)(param_1 + 0xc) = local_28;
  if ((uVar10 & 0x600) == 0) {
    local_24 = 0.0;
  }
  *(float *)(param_1 + 0x10) = local_24;
  *(ulonglong *)(param_1 + 0x30) = uVar10 ^ *(ulonglong *)(param_2 + 8);
  return;
}



/* ===== 1801f0880 FUN_1801f0880 ===== */

undefined8 *
FUN_1801f0880(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    uVar10 = FUN_18008c530(param_1,param_3,param_4);
    *param_2 = uVar10;
    return param_2;
  }
  if (param_3 == puVar1) {
    uVar10 = param_4[1];
    *puVar1 = *param_4;
    puVar1[1] = uVar10;
    uVar10 = param_4[3];
    puVar1[2] = param_4[2];
    puVar1[3] = uVar10;
    uVar10 = param_4[5];
    puVar1[4] = param_4[4];
    puVar1[5] = uVar10;
    uVar10 = param_4[7];
    puVar1[6] = param_4[6];
    puVar1[7] = uVar10;
    puVar1[8] = param_4[8];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x48;
    *param_2 = param_3;
    return param_2;
  }
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  uVar8 = param_4[6];
  uVar9 = param_4[7];
  uVar10 = param_4[8];
  *puVar1 = puVar1[-9];
  puVar1[1] = puVar1[-8];
  puVar1[2] = puVar1[-7];
  puVar1[3] = puVar1[-6];
  puVar1[4] = puVar1[-5];
  puVar1[5] = puVar1[-4];
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar1 + -3);
  *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)((longlong)puVar1 + -0x14);
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(puVar1 + -2);
  *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)((longlong)puVar1 + -0xc);
  puVar1[8] = puVar1[-1];
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x48;
  FUN_180540530(param_3 + 9,param_3);
  *param_3 = uVar2;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  param_3[3] = uVar5;
  param_3[4] = uVar6;
  param_3[5] = uVar7;
  param_3[6] = uVar8;
  param_3[7] = uVar9;
  param_3[8] = uVar10;
  *param_2 = param_3;
  return param_2;
}



/* ===== 1801f09d0 FUN_1801f09d0 ===== */

float * FUN_1801f09d0(float *param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float *pfVar13;
  float *pfVar14;
  
  if (param_1 == param_2) {
    return param_2;
  }
  for (pfVar14 = param_1 + 0x12; pfVar14 != param_2; pfVar14 = pfVar14 + 0x12) {
    fVar3 = *pfVar14;
    fVar4 = pfVar14[1];
    fVar5 = pfVar14[2];
    fVar6 = pfVar14[3];
    uVar7 = *(undefined8 *)(pfVar14 + 4);
    uVar8 = *(undefined8 *)(pfVar14 + 6);
    uVar9 = *(undefined8 *)(pfVar14 + 8);
    uVar10 = *(undefined8 *)(pfVar14 + 10);
    uVar11 = *(undefined8 *)(pfVar14 + 0xc);
    uVar12 = *(undefined8 *)(pfVar14 + 0xe);
    uVar2 = *(undefined8 *)(pfVar14 + 0x10);
    if (*param_1 <= fVar3) {
      fVar1 = pfVar14[-0x12];
      pfVar13 = pfVar14;
      while (fVar3 < fVar1) {
        *(undefined8 *)pfVar13 = *(undefined8 *)(pfVar13 + -0x12);
        *(undefined8 *)(pfVar13 + 2) = *(undefined8 *)(pfVar13 + -0x10);
        *(undefined8 *)(pfVar13 + 4) = *(undefined8 *)(pfVar13 + -0xe);
        *(undefined8 *)(pfVar13 + 6) = *(undefined8 *)(pfVar13 + -0xc);
        *(undefined8 *)(pfVar13 + 8) = *(undefined8 *)(pfVar13 + -10);
        *(undefined8 *)(pfVar13 + 10) = *(undefined8 *)(pfVar13 + -8);
        *(undefined8 *)(pfVar13 + 0xc) = *(undefined8 *)(pfVar13 + -6);
        *(undefined8 *)(pfVar13 + 0xe) = *(undefined8 *)(pfVar13 + -4);
        *(undefined8 *)(pfVar13 + 0x10) = *(undefined8 *)(pfVar13 + -2);
        fVar1 = pfVar13[-0x24];
        pfVar13 = pfVar13 + -0x12;
      }
      *pfVar13 = fVar3;
      pfVar13[1] = fVar4;
      pfVar13[2] = fVar5;
      pfVar13[3] = fVar6;
      *(undefined8 *)(pfVar13 + 4) = uVar7;
      *(undefined8 *)(pfVar13 + 6) = uVar8;
      *(undefined8 *)(pfVar13 + 8) = uVar9;
      *(undefined8 *)(pfVar13 + 10) = uVar10;
      *(undefined8 *)(pfVar13 + 0xc) = uVar11;
      *(undefined8 *)(pfVar13 + 0xe) = uVar12;
      *(undefined8 *)(pfVar13 + 0x10) = uVar2;
    }
    else {
      FUN_180540530(param_1 + 0x12,param_1,(longlong)pfVar14 - (longlong)param_1);
      *param_1 = fVar3;
      param_1[1] = fVar4;
      param_1[2] = fVar5;
      param_1[3] = fVar6;
      *(undefined8 *)(param_1 + 4) = uVar7;
      *(undefined8 *)(param_1 + 6) = uVar8;
      *(undefined8 *)(param_1 + 8) = uVar9;
      *(undefined8 *)(param_1 + 10) = uVar10;
      *(undefined8 *)(param_1 + 0xc) = uVar11;
      *(undefined8 *)(param_1 + 0xe) = uVar12;
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
  }
  return param_2;
}



/* ===== 1801f0b30 FUN_1801f0b30 ===== */

longlong * FUN_1801f0b30(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x39) {
    plVar1 = param_1 + 2;
    uVar2 = param_2;
  }
  else {
    uVar2 = 0x7fffffffffffffff;
    if ((longlong)param_2 < 0x7fffffffffffffff) {
      uVar2 = param_2;
    }
    if ((uVar2 < 0x38e38e38e38e38f) && (0 < (longlong)uVar2)) {
      do {
        plVar1 = (longlong *)FUN_1804ed030(uVar2 * 0x48,&DAT_1805757b2);
        if (plVar1 != (longlong *)0x0) {
          if (uVar2 < 0x39) goto LAB_1801f0ba4;
          goto LAB_1801f0bb5;
        }
        uVar2 = uVar2 >> 1;
      } while (uVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_1801f0ba4:
    FUN_1803d64e0(plVar1);
    plVar1 = param_1 + 2;
    uVar2 = 0x38;
  }
LAB_1801f0bb5:
  *param_1 = (longlong)plVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* ===== 1801f0be0 FUN_1801f0be0 ===== */

void FUN_1801f0be0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1801f09d0();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 0x48;
  if (param_5 < lVar3) {
    FUN_1801f0be0(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_1801f0be0(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1801f0cf0();
    FUN_1801f0cf0(lVar1,param_2,uVar2,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1801f0f40(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



/* ===== 1801f0cf0 FUN_1801f0cf0 ===== */

void FUN_1801f0cf0(float *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  float *pfVar16;
  
  pfVar10 = param_1;
  for (lVar13 = param_3; 0x20 < lVar13; lVar13 = lVar13 + -0x20) {
    pfVar10 = (float *)FUN_1801f09d0(pfVar10,pfVar10 + 0x240);
  }
  FUN_1801f09d0(pfVar10,param_2);
  if (0x20 < param_3) {
    puVar14 = param_4;
    lVar13 = param_3;
    pfVar10 = param_1;
    do {
      lVar1 = lVar13 + -0x20;
      pfVar3 = pfVar10 + 0x240;
      lVar15 = lVar13 + -0x40;
      if (lVar1 < 0x20) {
        lVar15 = 0;
      }
      lVar11 = 0x1200;
      if (lVar1 < 0x20) {
        lVar11 = lVar13 * 0x48;
      }
      pfVar16 = (float *)(lVar11 + (longlong)pfVar10);
      pfVar4 = pfVar10 + 0x22e;
      lVar11 = 0x11b8;
      if (lVar1 < 0x20) {
        lVar11 = lVar13 * 0x48 + -0x48;
      }
      pfVar5 = (float *)(lVar11 + (longlong)pfVar10);
      pfVar12 = pfVar3;
      while( true ) {
        for (; puVar2 = puVar14 + 9, *pfVar12 <= *pfVar10 && *pfVar10 != *pfVar12;
            pfVar12 = pfVar12 + 0x12) {
          uVar9 = *(undefined8 *)(pfVar12 + 2);
          *puVar14 = *(undefined8 *)pfVar12;
          puVar14[1] = uVar9;
          uVar9 = *(undefined8 *)(pfVar12 + 6);
          puVar14[2] = *(undefined8 *)(pfVar12 + 4);
          puVar14[3] = uVar9;
          uVar9 = *(undefined8 *)(pfVar12 + 10);
          puVar14[4] = *(undefined8 *)(pfVar12 + 8);
          puVar14[5] = uVar9;
          fVar6 = pfVar12[0xd];
          fVar7 = pfVar12[0xe];
          fVar8 = pfVar12[0xf];
          *(float *)(puVar14 + 6) = pfVar12[0xc];
          *(float *)((longlong)puVar14 + 0x34) = fVar6;
          *(float *)(puVar14 + 7) = fVar7;
          *(float *)((longlong)puVar14 + 0x3c) = fVar8;
          puVar14[8] = *(undefined8 *)(pfVar12 + 0x10);
          if (pfVar12 == pfVar5) {
            lVar13 = (longlong)pfVar3 - (longlong)pfVar10;
            pfVar12 = pfVar10;
            goto LAB_1801f0e69;
          }
          puVar14 = puVar2;
        }
        uVar9 = *(undefined8 *)(pfVar10 + 2);
        *puVar14 = *(undefined8 *)pfVar10;
        puVar14[1] = uVar9;
        uVar9 = *(undefined8 *)(pfVar10 + 6);
        puVar14[2] = *(undefined8 *)(pfVar10 + 4);
        puVar14[3] = uVar9;
        uVar9 = *(undefined8 *)(pfVar10 + 10);
        puVar14[4] = *(undefined8 *)(pfVar10 + 8);
        puVar14[5] = uVar9;
        fVar6 = pfVar10[0xd];
        fVar7 = pfVar10[0xe];
        fVar8 = pfVar10[0xf];
        *(float *)(puVar14 + 6) = pfVar10[0xc];
        *(float *)((longlong)puVar14 + 0x34) = fVar6;
        *(float *)(puVar14 + 7) = fVar7;
        *(float *)((longlong)puVar14 + 0x3c) = fVar8;
        puVar14[8] = *(undefined8 *)(pfVar10 + 0x10);
        if (pfVar10 == pfVar4) break;
        pfVar10 = pfVar10 + 0x12;
        puVar14 = puVar2;
      }
      lVar13 = (longlong)pfVar16 - (longlong)pfVar12;
LAB_1801f0e69:
      FUN_180540530(puVar2,pfVar12,lVar13);
      puVar14 = (undefined8 *)((longlong)puVar14 + lVar13 + 0x48);
      lVar13 = lVar15;
      pfVar10 = pfVar16;
    } while (0x20 < lVar15);
    FUN_180540530(puVar14,pfVar16,param_2 - (longlong)pfVar16);
    lVar13 = 0x40;
    FUN_1801f10e0(param_4,param_4 + param_3 * 9,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1801f10e0(param_1,param_2,param_4,lVar13 * 2,param_3,param_5);
        lVar13 = lVar13 * 4;
        FUN_1801f10e0(param_4,param_4 + param_3 * 9,param_1,lVar13,param_3,param_5);
      } while (lVar13 <= (param_3 + -1) / 2);
    }
  }
  return;
}



/* ===== 1801f0f40 FUN_1801f0f40 ===== */

void FUN_1801f0f40(float *param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    fVar2 = *param_2;
    while (*param_1 <= fVar2) {
      param_1 = param_1 + 0x12;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    pfVar13 = param_3 + -0x12;
    if (param_2 != pfVar13) {
      do {
        pfVar12 = pfVar13;
        if (*pfVar12 <= param_2[-0x12] && param_2[-0x12] != *pfVar12) {
          if (param_4 == 1) {
            uVar4 = *(undefined8 *)param_1;
            uVar5 = *(undefined8 *)(param_1 + 2);
            lVar14 = (longlong)param_3 - (longlong)param_2;
            uVar6 = *(undefined8 *)(param_1 + 4);
            uVar7 = *(undefined8 *)(param_1 + 6);
            uVar8 = *(undefined8 *)(param_1 + 8);
            uVar9 = *(undefined8 *)(param_1 + 10);
            uVar10 = *(undefined8 *)(param_1 + 0xc);
            uVar11 = *(undefined8 *)(param_1 + 0xe);
            uVar3 = *(undefined8 *)(param_1 + 0x10);
            FUN_180540530(param_1,fVar2,lVar14);
            *(undefined8 *)(lVar14 + (longlong)param_1) = uVar4;
            ((undefined8 *)(lVar14 + (longlong)param_1))[1] = uVar5;
            puVar1 = (undefined8 *)(lVar14 + 0x10 + (longlong)param_1);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1 = (undefined8 *)(lVar14 + 0x20 + (longlong)param_1);
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar1 = (undefined8 *)(lVar14 + 0x30 + (longlong)param_1);
            *puVar1 = uVar10;
            puVar1[1] = uVar11;
            *(undefined8 *)(lVar14 + 0x40 + (longlong)param_1) = uVar3;
            return;
          }
          FUN_1801f1240(param_1,fVar2,param_3,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        param_5 = param_5 + -1;
        pfVar13 = pfVar12 + -0x12;
        param_3 = pfVar12;
      } while (param_2 != pfVar13);
    }
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 2);
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 6);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)(param_2 + 10);
    uVar10 = *(undefined8 *)(param_2 + 0xc);
    uVar11 = *(undefined8 *)(param_2 + 0xe);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    FUN_180540530((longlong)pfVar13 + (0x48 - ((longlong)param_2 - (longlong)param_1)),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *(undefined8 *)param_1 = uVar4;
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 4) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar7;
    *(undefined8 *)(param_1 + 8) = uVar8;
    *(undefined8 *)(param_1 + 10) = uVar9;
    *(undefined8 *)(param_1 + 0xc) = uVar10;
    *(undefined8 *)(param_1 + 0xe) = uVar11;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return;
}



/* ===== 1801f10e0 FUN_1801f10e0 ===== */

void FUN_1801f10e0(float *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  
  if (param_5 <= param_4) {
LAB_1801f121a:
    FUN_180540530(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  pfVar11 = param_1;
LAB_1801f1130:
  pfVar2 = pfVar11 + param_4 * 0x12;
  lVar9 = param_5 - param_4;
  lVar7 = param_4;
  if (lVar9 < param_4) {
    lVar7 = lVar9;
  }
  lVar10 = param_4 * 2;
  if (lVar9 < param_4) {
    lVar10 = param_5;
  }
  param_1 = pfVar11 + lVar10 * 0x12;
  pfVar8 = pfVar2;
  do {
    if (*pfVar11 < *pfVar8 || *pfVar11 == *pfVar8) {
      uVar6 = *(undefined8 *)(pfVar11 + 2);
      *param_3 = *(undefined8 *)pfVar11;
      param_3[1] = uVar6;
      uVar6 = *(undefined8 *)(pfVar11 + 6);
      param_3[2] = *(undefined8 *)(pfVar11 + 4);
      param_3[3] = uVar6;
      uVar6 = *(undefined8 *)(pfVar11 + 10);
      param_3[4] = *(undefined8 *)(pfVar11 + 8);
      param_3[5] = uVar6;
      fVar3 = pfVar11[0xd];
      fVar4 = pfVar11[0xe];
      fVar5 = pfVar11[0xf];
      *(float *)(param_3 + 6) = pfVar11[0xc];
      *(float *)((longlong)param_3 + 0x34) = fVar3;
      *(float *)(param_3 + 7) = fVar4;
      *(float *)((longlong)param_3 + 0x3c) = fVar5;
      pfVar1 = pfVar11 + 0x10;
      pfVar11 = pfVar11 + 0x12;
      param_3[8] = *(undefined8 *)pfVar1;
      if (pfVar11 == pfVar2) {
        lVar10 = (longlong)param_1 - (longlong)pfVar8;
        goto LAB_1801f11eb;
      }
    }
    else {
      uVar6 = *(undefined8 *)(pfVar8 + 2);
      *param_3 = *(undefined8 *)pfVar8;
      param_3[1] = uVar6;
      uVar6 = *(undefined8 *)(pfVar8 + 6);
      param_3[2] = *(undefined8 *)(pfVar8 + 4);
      param_3[3] = uVar6;
      uVar6 = *(undefined8 *)(pfVar8 + 10);
      param_3[4] = *(undefined8 *)(pfVar8 + 8);
      param_3[5] = uVar6;
      fVar3 = pfVar8[0xd];
      fVar4 = pfVar8[0xe];
      fVar5 = pfVar8[0xf];
      *(float *)(param_3 + 6) = pfVar8[0xc];
      *(float *)((longlong)param_3 + 0x34) = fVar3;
      *(float *)(param_3 + 7) = fVar4;
      *(float *)((longlong)param_3 + 0x3c) = fVar5;
      pfVar1 = pfVar8 + 0x10;
      pfVar8 = pfVar8 + 0x12;
      param_3[8] = *(undefined8 *)pfVar1;
      if (pfVar8 == param_1) break;
    }
    param_3 = param_3 + 9;
  } while( true );
  lVar10 = (longlong)pfVar2 - (longlong)pfVar11;
  pfVar8 = pfVar11;
LAB_1801f11eb:
  FUN_180540530(param_3 + 9,pfVar8,lVar10);
  param_3 = (undefined8 *)((longlong)param_3 + lVar10 + 0x48);
  param_5 = lVar9 - lVar7;
  pfVar11 = param_1;
  if (lVar9 - lVar7 <= param_4) goto LAB_1801f121a;
  goto LAB_1801f1130;
}



/* ===== 1801f1240 FUN_1801f1240 ===== */

void FUN_1801f1240(float *param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
                  float *param_6,longlong param_7,undefined1 param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float *pfVar17;
  float *pfVar18;
  ulonglong uVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar22 = (longlong)param_2 - (longlong)param_1;
    FUN_180540530(param_6,param_1,lVar22);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = uVar4;
    pfVar18 = param_2 + 0x12;
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xe) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    pfVar17 = param_1 + 0x12;
    pfVar20 = param_6;
    do {
      pfVar1 = pfVar17 + 0x12;
      if (*pfVar20 < *pfVar18 || *pfVar20 == *pfVar18) {
        uVar4 = *(undefined8 *)(pfVar20 + 2);
        *(undefined8 *)pfVar17 = *(undefined8 *)pfVar20;
        *(undefined8 *)(pfVar17 + 2) = uVar4;
        uVar4 = *(undefined8 *)(pfVar20 + 6);
        *(undefined8 *)(pfVar17 + 4) = *(undefined8 *)(pfVar20 + 4);
        *(undefined8 *)(pfVar17 + 6) = uVar4;
        uVar4 = *(undefined8 *)(pfVar20 + 10);
        *(undefined8 *)(pfVar17 + 8) = *(undefined8 *)(pfVar20 + 8);
        *(undefined8 *)(pfVar17 + 10) = uVar4;
        fVar5 = pfVar20[0xc];
        fVar6 = pfVar20[0xd];
        fVar7 = pfVar20[0xe];
        fVar8 = pfVar20[0xf];
        pfVar17[0xc] = fVar5;
        pfVar17[0xd] = fVar6;
        pfVar17[0xe] = fVar7;
        pfVar17[0xf] = fVar8;
        *(undefined8 *)(pfVar17 + 0x10) = *(undefined8 *)(pfVar20 + 0x10);
        if (pfVar20 == (float *)((longlong)param_6 + lVar22 + -0x90)) {
          lVar23 = (longlong)param_3 - (longlong)pfVar18;
          uVar9 = *(undefined8 *)((longlong)param_6 + lVar22 + -0x48);
          uVar10 = *(undefined8 *)((longlong)param_6 + lVar22 + -0x40);
          uVar11 = *(undefined8 *)((longlong)param_6 + lVar22 + -0x38);
          uVar12 = *(undefined8 *)((longlong)param_6 + lVar22 + -0x30);
          uVar13 = *(undefined8 *)((longlong)param_6 + lVar22 + -0x28);
          uVar14 = *(undefined8 *)((longlong)param_6 + lVar22 + -0x20);
          uVar15 = *(undefined8 *)((longlong)param_6 + lVar22 + -0x18);
          uVar16 = *(undefined8 *)((longlong)param_6 + lVar22 + -0x10);
          uVar4 = *(undefined8 *)((longlong)param_6 + lVar22 + -8);
          FUN_180540530(pfVar1,fVar5,lVar23);
          *(undefined8 *)((longlong)pfVar1 + lVar23) = uVar9;
          ((undefined8 *)((longlong)pfVar1 + lVar23))[1] = uVar10;
          puVar3 = (undefined8 *)((longlong)pfVar17 + lVar23 + 0x58);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = (undefined8 *)((longlong)pfVar17 + lVar23 + 0x68);
          *puVar3 = uVar13;
          puVar3[1] = uVar14;
          puVar3 = (undefined8 *)((longlong)pfVar17 + lVar23 + 0x78);
          *puVar3 = uVar15;
          puVar3[1] = uVar16;
          *(undefined8 *)((longlong)pfVar17 + lVar23 + 0x88) = uVar4;
          return;
        }
        pfVar20 = pfVar20 + 0x12;
      }
      else {
        uVar4 = *(undefined8 *)(pfVar18 + 2);
        *(undefined8 *)pfVar17 = *(undefined8 *)pfVar18;
        *(undefined8 *)(pfVar17 + 2) = uVar4;
        uVar4 = *(undefined8 *)(pfVar18 + 6);
        *(undefined8 *)(pfVar17 + 4) = *(undefined8 *)(pfVar18 + 4);
        *(undefined8 *)(pfVar17 + 6) = uVar4;
        uVar4 = *(undefined8 *)(pfVar18 + 10);
        *(undefined8 *)(pfVar17 + 8) = *(undefined8 *)(pfVar18 + 8);
        *(undefined8 *)(pfVar17 + 10) = uVar4;
        fVar5 = pfVar18[0xd];
        fVar6 = pfVar18[0xe];
        fVar7 = pfVar18[0xf];
        pfVar17[0xc] = pfVar18[0xc];
        pfVar17[0xd] = fVar5;
        pfVar17[0xe] = fVar6;
        pfVar17[0xf] = fVar7;
        pfVar2 = pfVar18 + 0x10;
        pfVar18 = pfVar18 + 0x12;
        *(undefined8 *)(pfVar17 + 0x10) = *(undefined8 *)pfVar2;
        if (pfVar18 == param_3) {
          FUN_180540530(pfVar1,pfVar20,(longlong)param_6 + (lVar22 - (longlong)pfVar20));
          return;
        }
      }
      pfVar17 = pfVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    if (param_5 < param_4) {
      lVar22 = param_5 >> 1;
      uVar21 = ((longlong)param_2 - (longlong)param_1 >> 3) * -0x71c71c71c71c71c7;
      pfVar17 = param_2 + lVar22 * 0x12;
      pfVar18 = param_1;
      if (0 < (longlong)uVar21) {
        do {
          uVar19 = uVar21 >> 1;
          if (pfVar18[uVar19 * 0x12] <= *pfVar17) {
            pfVar18 = pfVar18 + uVar19 * 0x12 + 0x12;
            uVar19 = uVar21 + (-1 - uVar19);
          }
          uVar21 = uVar19;
        } while (0 < (longlong)uVar19);
      }
      lVar23 = ((longlong)pfVar18 - (longlong)param_1 >> 3) * -0x71c71c71c71c71c7;
    }
    else {
      lVar23 = param_4 >> 1;
      uVar21 = ((longlong)param_3 - (longlong)param_2 >> 3) * -0x71c71c71c71c71c7;
      pfVar18 = param_1 + lVar23 * 0x12;
      pfVar17 = param_2;
      if (0 < (longlong)uVar21) {
        do {
          uVar19 = uVar21 >> 1;
          if (!(*pfVar18 < pfVar17[uVar19 * 0x12] || *pfVar18 == pfVar17[uVar19 * 0x12])) {
            pfVar17 = pfVar17 + uVar19 * 0x12 + 0x12;
            uVar19 = uVar21 + (-1 - uVar19);
          }
          uVar21 = uVar19;
        } while (0 < (longlong)uVar19);
      }
      lVar22 = ((longlong)pfVar17 - (longlong)param_2 >> 3) * -0x71c71c71c71c71c7;
    }
    FUN_1801f1710(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pfVar18,pfVar17,
                  lVar23,lVar22);
  }
  else {
    FUN_180540530(param_6,param_2,(longlong)param_3 - (longlong)param_2);
    uVar4 = *(undefined8 *)(param_2 + -0x10);
    pfVar18 = param_3 + -0x12;
    *(undefined8 *)pfVar18 = *(undefined8 *)(param_2 + -0x12);
    *(undefined8 *)(param_3 + -0x10) = uVar4;
    pfVar20 = (float *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0x48);
    pfVar17 = param_2 + -0x24;
    uVar4 = *(undefined8 *)(param_2 + -0xc);
    *(undefined8 *)(param_3 + -0xe) = *(undefined8 *)(param_2 + -0xe);
    *(undefined8 *)(param_3 + -0xc) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_3 + -10) = *(undefined8 *)(param_2 + -10);
    *(undefined8 *)(param_3 + -8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + -4);
    *(undefined8 *)(param_3 + -6) = *(undefined8 *)(param_2 + -6);
    *(undefined8 *)(param_3 + -4) = uVar4;
    *(undefined8 *)(param_3 + -2) = *(undefined8 *)(param_2 + -2);
    while( true ) {
      for (; *pfVar20 <= *pfVar17 && *pfVar17 != *pfVar20; pfVar17 = pfVar17 + -0x12) {
        uVar4 = *(undefined8 *)(pfVar17 + 2);
        *(undefined8 *)(pfVar18 + -0x12) = *(undefined8 *)pfVar17;
        *(undefined8 *)(pfVar18 + -0x10) = uVar4;
        uVar4 = *(undefined8 *)(pfVar17 + 6);
        *(undefined8 *)(pfVar18 + -0xe) = *(undefined8 *)(pfVar17 + 4);
        *(undefined8 *)(pfVar18 + -0xc) = uVar4;
        uVar4 = *(undefined8 *)(pfVar17 + 10);
        *(undefined8 *)(pfVar18 + -10) = *(undefined8 *)(pfVar17 + 8);
        *(undefined8 *)(pfVar18 + -8) = uVar4;
        uVar4 = *(undefined8 *)(pfVar17 + 0xe);
        *(undefined8 *)(pfVar18 + -6) = *(undefined8 *)(pfVar17 + 0xc);
        *(undefined8 *)(pfVar18 + -4) = uVar4;
        *(undefined8 *)(pfVar18 + -2) = *(undefined8 *)(pfVar17 + 0x10);
        if (param_1 == pfVar17) {
          uVar4 = *(undefined8 *)(pfVar20 + 2);
          *(undefined8 *)(pfVar18 + -0x24) = *(undefined8 *)pfVar20;
          *(undefined8 *)(pfVar18 + -0x22) = uVar4;
          uVar4 = *(undefined8 *)(pfVar20 + 6);
          *(undefined8 *)(pfVar18 + -0x20) = *(undefined8 *)(pfVar20 + 4);
          *(undefined8 *)(pfVar18 + -0x1e) = uVar4;
          uVar4 = *(undefined8 *)(pfVar20 + 10);
          *(undefined8 *)(pfVar18 + -0x1c) = *(undefined8 *)(pfVar20 + 8);
          *(undefined8 *)(pfVar18 + -0x1a) = uVar4;
          fVar5 = pfVar20[0xd];
          fVar6 = pfVar20[0xe];
          fVar7 = pfVar20[0xf];
          pfVar18[-0x18] = pfVar20[0xc];
          pfVar18[-0x17] = fVar5;
          pfVar18[-0x16] = fVar6;
          pfVar18[-0x15] = fVar7;
          *(undefined8 *)(pfVar18 + -0x14) = *(undefined8 *)(pfVar20 + 0x10);
          FUN_180540530((longlong)(pfVar18 + -0x24) - ((longlong)pfVar20 - (longlong)param_6),
                        param_6,(longlong)pfVar20 - (longlong)param_6);
          return;
        }
        pfVar18 = pfVar18 + -0x12;
      }
      uVar4 = *(undefined8 *)(pfVar20 + 2);
      *(undefined8 *)(pfVar18 + -0x12) = *(undefined8 *)pfVar20;
      *(undefined8 *)(pfVar18 + -0x10) = uVar4;
      uVar4 = *(undefined8 *)(pfVar20 + 6);
      *(undefined8 *)(pfVar18 + -0xe) = *(undefined8 *)(pfVar20 + 4);
      *(undefined8 *)(pfVar18 + -0xc) = uVar4;
      uVar4 = *(undefined8 *)(pfVar20 + 10);
      *(undefined8 *)(pfVar18 + -10) = *(undefined8 *)(pfVar20 + 8);
      *(undefined8 *)(pfVar18 + -8) = uVar4;
      uVar4 = *(undefined8 *)(pfVar20 + 0xe);
      *(undefined8 *)(pfVar18 + -6) = *(undefined8 *)(pfVar20 + 0xc);
      *(undefined8 *)(pfVar18 + -4) = uVar4;
      pfVar1 = pfVar20 + 0x10;
      pfVar20 = pfVar20 + -0x12;
      *(undefined8 *)(pfVar18 + -2) = *(undefined8 *)pfVar1;
      if (param_6 == pfVar20) break;
      pfVar18 = pfVar18 + -0x12;
    }
    uVar4 = *(undefined8 *)(pfVar17 + 2);
    *(undefined8 *)(pfVar18 + -0x24) = *(undefined8 *)pfVar17;
    *(undefined8 *)(pfVar18 + -0x22) = uVar4;
    uVar4 = *(undefined8 *)(pfVar17 + 6);
    *(undefined8 *)(pfVar18 + -0x20) = *(undefined8 *)(pfVar17 + 4);
    *(undefined8 *)(pfVar18 + -0x1e) = uVar4;
    uVar4 = *(undefined8 *)(pfVar17 + 10);
    *(undefined8 *)(pfVar18 + -0x1c) = *(undefined8 *)(pfVar17 + 8);
    *(undefined8 *)(pfVar18 + -0x1a) = uVar4;
    fVar5 = pfVar17[0xd];
    fVar6 = pfVar17[0xe];
    fVar7 = pfVar17[0xf];
    pfVar18[-0x18] = pfVar17[0xc];
    pfVar18[-0x17] = fVar5;
    pfVar18[-0x16] = fVar6;
    pfVar18[-0x15] = fVar7;
    *(undefined8 *)(pfVar18 + -0x14) = *(undefined8 *)(pfVar17 + 0x10);
    FUN_180540530((longlong)(pfVar18 + -0x24) - ((longlong)pfVar17 - (longlong)param_1),param_1);
    uVar4 = *(undefined8 *)(param_6 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_6;
    *(undefined8 *)(param_1 + 2) = uVar4;
    uVar4 = *(undefined8 *)(param_6 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_6 + 4);
    *(undefined8 *)(param_1 + 6) = uVar4;
    uVar4 = *(undefined8 *)(param_6 + 10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)(param_1 + 10) = uVar4;
    uVar4 = *(undefined8 *)(param_6 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_6 + 0xc);
    *(undefined8 *)(param_1 + 0xe) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_6 + 0x10);
  }
  return;
}



/* ===== 1801f1710 FUN_1801f1710 ===== */

void FUN_1801f1710(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801f1800(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_1801f0f40(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1801f0f40(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



/* ===== 1801f1800 FUN_1801f1800 ===== */

longlong FUN_1801f1800(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 == 0) {
    return param_1;
  }
  if ((param_5 < param_4) || (param_7 < param_4)) {
    if (param_7 < param_5) {
      if (param_1 != param_2) {
        if (param_2 == param_3) {
          param_3 = param_1;
        }
        else {
          FUN_1804ea090(param_1);
          param_3 = param_1 + (param_3 - param_2 >> 3) * 8;
        }
      }
    }
    else {
      lVar1 = param_3 - param_2;
      FUN_180540530(param_6,param_2,lVar1);
      FUN_180540530(param_3 - (param_2 - param_1),param_1,param_2 - param_1);
      FUN_180540530(param_1,param_6,lVar1);
      param_3 = lVar1 + param_1;
    }
  }
  else {
    FUN_180540530(param_6,param_1,param_2 - param_1);
    FUN_180540530(param_1,param_2,param_3 - param_2);
    param_3 = (param_3 - param_2) + param_1;
    FUN_180540530(param_3,param_6,param_2 - param_1);
  }
  return param_3;
}



/* ===== 1801f1930 FUN_1801f1930 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f1930(void)

{
  int iVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined1 auStack_138 [32];
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28 [3];
  char *local_10;
  
  ppcVar3 = &local_38;
  local_10 = (char *)(DAT_180919500 ^ (ulonglong)auStack_138);
  if ((DAT_180ceb380 == '\0') && (DAT_1811089f0 != 0)) {
    ppcVar2 = &local_118;
    local_118 = "C_BaseEntity";
    DAT_180ceb380 = '\x01';
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flFriction");
      if (iVar1 != 0) goto LAB_1801f19b3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_110);
    iVar1 = 0;
LAB_1801f19b3:
    local_78 = "C_CSPlayerPawn";
    local_70 = "C_CSPlayerPawnBase";
    ppcVar2 = &local_78;
    DAT_180ceb384 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bIsDefusing");
      if (iVar1 != 0) goto LAB_1801f1a02;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_68);
    iVar1 = 0;
LAB_1801f1a02:
    ppcVar2 = &local_68;
    local_68 = "C_CSPlayerPawn";
    local_60 = "C_CSPlayerPawnBase";
    DAT_180ceb388 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bIsGrabbingHostage");
      if (iVar1 != 0) goto LAB_1801f1a42;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_58);
    iVar1 = 0;
LAB_1801f1a42:
    ppcVar2 = &local_58;
    local_58 = "C_CSPlayerPawn";
    local_50 = "C_CSPlayerPawnBase";
    DAT_180ceb38c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bResumeZoom");
      if (iVar1 != 0) goto LAB_1801f1a82;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_48);
    iVar1 = 0;
LAB_1801f1a82:
    local_48 = "CCSPlayer_MovementServices";
    local_40 = "CPlayer_MovementServices_Humanoid";
    ppcVar2 = &local_48;
    DAT_180ceb390 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bDucked");
      if (iVar1 != 0) goto LAB_1801f1ad2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != ppcVar3);
    iVar1 = 0;
LAB_1801f1ad2:
    local_38 = "CCSPlayer_MovementServices";
    local_30 = "CPlayer_MovementServices_Humanoid";
    DAT_180ceb394 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bDucking");
      if (iVar1 != 0) goto LAB_1801f1b12;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != local_28);
    iVar1 = 0;
LAB_1801f1b12:
    ppcVar3 = local_28;
    local_28[0] = "CCSPlayer_MovementServices";
    local_28[2] = "CPlayer_MovementServices";
    local_28[1] = "CPlayer_MovementServices_Humanoid";
    DAT_180ceb398 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_vecLadderNormal");
      if (iVar1 != 0) goto LAB_1801f1b52;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != local_28 + 3);
    iVar1 = 0;
LAB_1801f1b52:
    ppcVar3 = &local_110;
    local_110 = "CCSPlayer_WeaponServices";
    DAT_180ceb39c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flNextAttack");
      if (iVar1 != 0) goto LAB_1801f1b93;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_108);
    iVar1 = 0;
LAB_1801f1b93:
    ppcVar3 = &local_108;
    local_108 = "C_BasePlayerWeapon";
    DAT_180ceb3a0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nNextPrimaryAttackTick");
      if (iVar1 != 0) goto LAB_1801f1bd3;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_100);
    iVar1 = 0;
LAB_1801f1bd3:
    local_100 = "C_CSWeaponBase";
    ppcVar3 = &local_100;
    DAT_180ceb3a4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_fLastShotTime");
      if (iVar1 != 0) goto LAB_1801f1c13;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_f8);
    iVar1 = 0;
LAB_1801f1c13:
    ppcVar3 = &local_f8;
    local_f8 = "C_CSWeaponBase";
    DAT_180ceb3a8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_weaponMode");
      if (iVar1 != 0) goto LAB_1801f1c53;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_f0);
    iVar1 = 0;
LAB_1801f1c53:
    local_f0 = "C_BaseCSGrenade";
    ppcVar3 = &local_f0;
    DAT_180ceb3ac = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bIsHeldByPlayer");
      if (iVar1 != 0) goto LAB_1801f1c93;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_e8);
    iVar1 = 0;
LAB_1801f1c93:
    ppcVar3 = &local_e8;
    local_e8 = "C_BaseCSGrenade";
    DAT_180ceb3b0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_fThrowTime");
      if (iVar1 != 0) goto LAB_1801f1cd3;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_e0);
    iVar1 = 0;
LAB_1801f1cd3:
    local_e0 = "CCSWeaponBaseVData";
    ppcVar3 = &local_e0;
    DAT_180ceb3b4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nZoomLevels");
      if (iVar1 != 0) goto LAB_1801f1d13;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_d8);
    iVar1 = 0;
LAB_1801f1d13:
    ppcVar3 = &local_d8;
    local_d8 = "CCSWeaponBaseVData";
    DAT_180ceb3b8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_WeaponType");
      if (iVar1 != 0) goto LAB_1801f1d53;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_d0);
    iVar1 = 0;
LAB_1801f1d53:
    ppcVar3 = &local_d0;
    local_d0 = "CCSWeaponBaseVData";
    DAT_180ceb3bc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bIsFullAuto");
      if (iVar1 != 0) goto LAB_1801f1d93;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_c8);
    iVar1 = 0;
LAB_1801f1d93:
    ppcVar3 = &local_c8;
    local_c8 = "C_CSGameRulesProxy";
    DAT_180ceb3c0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_pGameRules");
      if (iVar1 != 0) goto LAB_1801f1dd3;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_c0);
    iVar1 = 0;
LAB_1801f1dd3:
    local_c0 = "C_CSGameRules";
    ppcVar3 = &local_c0;
    DAT_180ceb3c4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bFreezePeriod");
      if (iVar1 != 0) goto LAB_1801f1e12;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_b8);
    iVar1 = 0;
LAB_1801f1e12:
    ppcVar3 = &local_b8;
    local_b8 = "C_CSGameRules";
    DAT_180ceb3c8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_fRoundStartTime");
      if (iVar1 != 0) goto LAB_1801f1e42;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_b0);
    iVar1 = 0;
LAB_1801f1e42:
    local_b0 = "C_BaseEntity";
    ppcVar3 = &local_b0;
    DAT_180ceb3cc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flWaterLevel");
      if (iVar1 != 0) goto LAB_1801f1e82;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_a8);
    iVar1 = 0;
LAB_1801f1e82:
    ppcVar3 = &local_a8;
    local_a8 = "C_C4";
    DAT_180ceb3d0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bStartedArming");
      if (iVar1 != 0) goto LAB_1801f1ec2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_a0);
    iVar1 = 0;
LAB_1801f1ec2:
    ppcVar3 = &local_a0;
    local_a0 = "CCSPlayer_MovementServices";
    DAT_180ceb3d4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_LegacyJump");
      if (iVar1 != 0) goto LAB_1801f1ef2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_98);
    iVar1 = 0;
LAB_1801f1ef2:
    local_98 = "CCSPlayerLegacyJump";
    ppcVar3 = &local_98;
    DAT_180ceb3d8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bOldJumpPressed");
      if (iVar1 != 0) goto LAB_1801f1f32;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_90);
    iVar1 = 0;
LAB_1801f1f32:
    local_90 = "CCSPlayerLegacyJump";
    ppcVar3 = &local_90;
    DAT_180ceb3dc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flJumpPressedTime");
      if (iVar1 != 0) goto LAB_1801f1f72;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_88);
    iVar1 = 0;
LAB_1801f1f72:
    local_88 = "CCSPlayer_MovementServices";
    ppcVar3 = &local_88;
    DAT_180ceb3e0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_ModernJump");
      if (iVar1 != 0) goto LAB_1801f1fb2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_80);
    iVar1 = 0;
LAB_1801f1fb2:
    ppcVar3 = &local_80;
    local_80 = "CCSPlayerModernJump";
    DAT_180ceb3e4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nLastActualJumpPressTick");
      if (iVar1 != 0) goto LAB_1801f1ff2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_78);
    iVar1 = 0;
LAB_1801f1ff2:
    DAT_180ceb3e8 = iVar1;
  }
  return;
}



/* ===== 1801f2020 FUN_1801f2020 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801f2020(longlong *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  char *pcVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong local_res8 [4];
  undefined1 local_168 [32];
  undefined8 local_148;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  ushort uStack_13a;
  undefined8 local_138;
  undefined2 uStack_130;
  ushort uStack_12e;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined2 uStack_114;
  undefined2 uStack_112;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  uVar11 = FUN_1801f1930();
  uVar5 = _UNK_1808add98;
  uVar4 = _DAT_1808add90;
  uVar3 = _UNK_1808ada68;
  uVar2 = _DAT_1808ada60;
  uVar1 = _UNK_1808ad918;
  uVar16 = _DAT_1808ad910;
  uVar9 = DAT_1808ac00c;
  uVar24 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uStack_12c = 0x437a0000;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_7c = 0;
  local_148 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  local_138 = 0x3f800000;
  uStack_130 = 0;
  uStack_120 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(ulonglong *)(param_2 + 6) = (ulonglong)uStack_13a << 0x30;
  local_118 = 0x3f800000;
  uStack_114 = 0;
  param_2[8] = 0x3f800000;
  param_2[9] = 0;
  *(ulonglong *)(param_2 + 10) = CONCAT44(0x437a0000,(uint)uStack_12e << 0x10);
  uStack_100 = 0;
  uStack_fc = uStack_fc & 0xffffff00;
  *(ulonglong *)(param_2 + 0xc) = (ulonglong)uStack_124 << 0x20;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  local_c8 = 1;
  uStack_c4 = 0xffffffff;
  *(ulonglong *)(param_2 + 0x10) = CONCAT26(uStack_112,0x3f800000);
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  uStack_c0 = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(ulonglong *)(param_2 + 0x16) = (ulonglong)uStack_fc << 0x20;
  local_b8 = 0;
  uStack_b0 = uStack_b0 & 0xffffff00;
  *(undefined8 *)(param_2 + 0x18) = uVar16;
  *(undefined8 *)(param_2 + 0x1a) = uVar1;
  uStack_ac = 0;
  local_a8 = 0;
  *(undefined8 *)(param_2 + 0x1c) = uVar2;
  *(undefined8 *)(param_2 + 0x1e) = uVar3;
  uStack_a0 = 0;
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *(undefined8 *)(param_2 + 0x22) = uVar5;
  local_98 = 0;
  *(ulonglong *)(param_2 + 0x24) = CONCAT44(0xffffffff,CONCAT22(uStack_c6,1));
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  local_88 = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  *(ulonglong *)(param_2 + 0x2a) = (ulonglong)uStack_b0;
  uStack_80 = (uint)uStack_80._3_1_ << 0x18;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  uStack_74 = 0;
  uStack_70 = 0x3c800000;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  *(ulonglong *)(param_2 + 0x32) = (ulonglong)uStack_8c << 0x20;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = uStack_80;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0x3c800000;
  param_2[0x3b] = 0;
  lVar17 = *param_1;
  if ((((lVar17 == 0) || (uVar20 = (ulonglong)DAT_180ca0a18, DAT_180ca0a18 == 0)) ||
      (uVar21 = (ulonglong)DAT_180ca0a1c, DAT_180ca0a1c == 0)) ||
     (uVar11 = (ulonglong)DAT_180ca0970, DAT_180ca0970 == 0)) goto LAB_1801f2f21;
  lVar12 = FUN_18000f3a0(lVar17 + uVar11);
  uVar11 = 0x7ffffffefffe;
  if (0x7ffffffefffe < lVar12 - 0x10000U) goto LAB_1801f2f21;
  *(longlong *)(param_2 + 0x34) = lVar17;
  if (((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
     ((lVar13 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca09f8), lVar13 == 0 ||
      (DAT_180ca0950 == 0)))) {
    uVar22 = 0;
    uVar23 = 0;
  }
  else {
    puVar14 = (uint *)FUN_1800111b0(local_168,lVar13 + (ulonglong)DAT_180ca0950);
    uVar24 = *puVar14;
    uVar22 = puVar14[1];
    uVar23 = puVar14[2];
  }
  *param_2 = uVar24;
  param_2[1] = uVar22;
  param_2[2] = uVar23;
  puVar15 = (undefined8 *)FUN_1800111b0(local_168,lVar17 + uVar21);
  uVar24 = *(uint *)(puVar15 + 1);
  *(undefined8 *)(param_2 + 3) = *puVar15;
  param_2[5] = uVar24;
  uVar24 = FUN_180011200(lVar17 + uVar20);
  param_2[6] = uVar24;
  if ((*param_1 == 0) || (DAT_180ca0a44 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_180011220(*param_1 + (ulonglong)DAT_180ca0a44);
  }
  *(undefined1 *)(param_2 + 7) = uVar6;
  if (DAT_180ceb388 != 0) {
    uVar6 = FUN_180011220(lVar17 + (ulonglong)DAT_180ceb388);
    *(undefined1 *)((longlong)param_2 + 0x1d) = uVar6;
  }
  if (DAT_180ceb384 != 0) {
    uVar24 = FUN_18000f3d0(lVar17 + (ulonglong)DAT_180ceb384);
    param_2[8] = uVar24;
  }
  if (DAT_180ca0a2c != 0) {
    uVar24 = FUN_180011200(lVar17 + (ulonglong)DAT_180ca0a2c);
    param_2[9] = uVar24;
  }
  if (DAT_180ceb390 != 0) {
    uVar6 = FUN_180011220(lVar17 + (ulonglong)DAT_180ceb390);
    *(undefined1 *)(param_2 + 10) = uVar6;
  }
  if (DAT_180ceb38c != 0) {
    uVar6 = FUN_180011220(lVar17 + (ulonglong)DAT_180ceb38c);
    *(undefined1 *)((longlong)param_2 + 0x29) = uVar6;
  }
  if (DAT_180ceb3d0 != 0) {
    uVar24 = FUN_18000f3d0(lVar17 + (ulonglong)DAT_180ceb3d0);
    param_2[0x32] = uVar24;
  }
  if (DAT_180ca099c != 0) {
    uVar24 = FUN_18000f3d0(lVar12 + (ulonglong)DAT_180ca099c);
    param_2[0xb] = uVar24;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res8);
    lVar13 = local_res8[0];
  }
  else {
    lVar13 = DAT_181108a00;
  }
  if ((lVar13 != 0) && (DAT_180ca09b8 != 0)) {
    uVar24 = FUN_180011200((ulonglong)DAT_180ca09b8 + lVar13);
    param_2[0xc] = uVar24;
  }
  if (DAT_180ca0990 != 0) {
    uVar16 = FUN_18000f3a0((ulonglong)DAT_180ca0990 + 8 + lVar12);
    *(undefined8 *)(param_2 + 0xe) = uVar16;
  }
  if (DAT_180ca09a4 != 0) {
    uVar24 = FUN_18000f3d0(lVar12 + (ulonglong)DAT_180ca09a4);
    param_2[0x10] = uVar24;
  }
  if (DAT_180ceb394 != 0) {
    uVar6 = FUN_180011220(lVar12 + (ulonglong)DAT_180ceb394);
    *(undefined1 *)(param_2 + 0x11) = uVar6;
  }
  if (DAT_180ceb398 != 0) {
    uVar6 = FUN_180011220(lVar12 + (ulonglong)DAT_180ceb398);
    *(undefined1 *)((longlong)param_2 + 0x45) = uVar6;
  }
  if (DAT_180ca09a8 != 0) {
    uVar24 = FUN_18000f3d0(lVar12 + (ulonglong)DAT_180ca09a8);
    param_2[0x12] = uVar24;
  }
  if (DAT_180ca09a0 != 0) {
    uVar24 = FUN_18000f3d0(lVar12 + (ulonglong)DAT_180ca09a0);
    param_2[0x13] = uVar24;
  }
  if (DAT_180ceb39c != 0) {
    puVar15 = (undefined8 *)FUN_1800111b0(local_168,lVar12 + (ulonglong)DAT_180ceb39c);
    uVar24 = *(uint *)(puVar15 + 1);
    *(undefined8 *)(param_2 + 0x14) = *puVar15;
    param_2[0x16] = uVar24;
  }
  uVar11 = (ulonglong)DAT_180ceb3d8;
  if (DAT_180ceb3d8 != 0) {
    if (DAT_180ceb3dc != 0) {
      uVar6 = FUN_180011220(lVar12 + (ulonglong)DAT_180ceb3dc + uVar11);
      *(undefined1 *)((longlong)param_2 + 0xda) = uVar6;
    }
    if (DAT_180ceb3e0 != 0) {
      uVar24 = FUN_18000f3d0(lVar12 + (ulonglong)DAT_180ceb3e0 + uVar11);
      param_2[0x37] = uVar24;
    }
  }
  if ((DAT_180ceb3e4 != 0) && (DAT_180ceb3e8 != 0)) {
    lVar12 = lVar12 + (ulonglong)DAT_180ceb3e8 + (ulonglong)DAT_180ceb3e4;
    uVar24 = FUN_180011200(lVar12);
    param_2[0x38] = uVar24;
    uVar24 = FUN_18000f3d0(lVar12 + 4);
    param_2[0x39] = uVar24;
  }
  if (DAT_1809ef940 == 0) {
    if (DAT_1809ef948 == '\0') {
      DAT_1809ef940 = FUN_180264b70(PTR_s_sv_legacy_jump_1809ef938);
      DAT_1809ef948 = DAT_1809ef940 == 0;
      if (DAT_1809ef940 != 0) goto LAB_1801f24ea;
    }
LAB_1801f24fa:
    uVar6 = 0;
  }
  else {
LAB_1801f24ea:
    cVar7 = FUN_180264d70(DAT_1809ef940);
    if (cVar7 == '\0') goto LAB_1801f24fa;
    uVar6 = 1;
  }
  *(undefined1 *)((longlong)param_2 + 0xd9) = uVar6;
  if (DAT_1809ef988 == 0) {
    if (DAT_1809ef990 == '\0') {
      DAT_1809ef988 = FUN_180264b70(PTR_s_sv_jump_spam_penalty_time_1809ef980);
      DAT_1809ef990 = DAT_1809ef988 == 0;
      if (DAT_1809ef988 != 0) goto LAB_1801f2539;
    }
  }
  else {
LAB_1801f2539:
    uVar24 = FUN_180264d70(DAT_1809ef988);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) != 0x7f800000) {
      uVar9 = uVar24;
    }
  }
  param_2[0x3a] = uVar9;
  *(undefined1 *)(param_2 + 0x17) = DAT_1809f3588;
  *(undefined1 *)(param_2 + 0x24) = DAT_1809f3589;
  if (DAT_1809eeb10 == 0) {
    if (DAT_1809eeb18 == '\0') {
      DAT_1809eeb10 = FUN_180264b70(PTR_s_sv_jump_impulse_1809eeb08);
      DAT_1809eeb18 = DAT_1809eeb10 == 0;
      if (DAT_1809eeb10 != 0) goto LAB_1801f25bd;
    }
LAB_1801f25e8:
    uVar24 = DAT_1808acbb8;
  }
  else {
LAB_1801f25bd:
    uVar24 = FUN_180264d70(DAT_1809eeb10);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f25e8;
  }
  uVar9 = DAT_1808acae0;
  param_2[0x18] = uVar24;
  if (DAT_1809eea58 == 0) {
    if (DAT_1809eea60 == '\0') {
      DAT_1809eea58 = FUN_180264b70(PTR_s_sv_staminamax_1809eea50);
      DAT_1809eea60 = DAT_1809eea58 == 0;
      if (DAT_1809eea58 != 0) goto LAB_1801f2634;
    }
LAB_1801f265f:
    uVar24 = uVar9;
  }
  else {
LAB_1801f2634:
    uVar24 = FUN_180264d70(DAT_1809eea58);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f265f;
  }
  param_2[0x19] = uVar24;
  if (DAT_1809eea78 == 0) {
    if (DAT_1809eea80 == '\0') {
      DAT_1809eea78 = FUN_180264b70(PTR_s_sv_staminarecoveryrate_1809eea70);
      DAT_1809eea80 = DAT_1809eea78 == 0;
      if (DAT_1809eea78 != 0) goto LAB_1801f269e;
    }
LAB_1801f26c9:
    uVar24 = DAT_1808acaa8;
  }
  else {
LAB_1801f269e:
    uVar24 = FUN_180264d70(DAT_1809eea78);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f26c9;
  }
  param_2[0x1a] = uVar24;
  if (DAT_1809eeaa8 == 0) {
    if (DAT_1809eeab0 == '\0') {
      DAT_1809eeaa8 = FUN_180264b70(PTR_s_sv_staminajumpcost_1809eeaa0);
      DAT_1809eeab0 = DAT_1809eeaa8 == 0;
      if (DAT_1809eeaa8 != 0) goto LAB_1801f270d;
    }
LAB_1801f2738:
    uVar24 = DAT_1808ac0a0;
  }
  else {
LAB_1801f270d:
    uVar24 = FUN_180264d70(DAT_1809eeaa8);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f2738;
  }
  param_2[0x1b] = uVar24;
  if (DAT_1809eeaf0 == 0) {
    if (DAT_1809eeaf8 == '\0') {
      DAT_1809eeaf0 = FUN_180264b70(PTR_s_sv_gravity_1809eeae8);
      DAT_1809eeaf8 = DAT_1809eeaf0 == 0;
      if (DAT_1809eeaf0 != 0) goto LAB_1801f277c;
    }
LAB_1801f27a7:
    uVar24 = DAT_1808acc30;
  }
  else {
LAB_1801f277c:
    uVar24 = FUN_180264d70(DAT_1809eeaf0);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f27a7;
  }
  param_2[0x1c] = uVar24;
  if (DAT_1809ef970 == 0) {
    if (DAT_1809ef978 == '\0') {
      DAT_1809ef970 = FUN_180264b70(PTR_s_sv_stepsize_1809ef968);
      DAT_1809ef978 = DAT_1809ef970 == 0;
      if (DAT_1809ef970 != 0) goto LAB_1801f27eb;
    }
LAB_1801f2816:
    uVar24 = DAT_1808ac934;
  }
  else {
LAB_1801f27eb:
    uVar24 = FUN_180264d70(DAT_1809ef970);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f2816;
  }
  param_2[0x1d] = uVar24;
  if (DAT_1809eeac0 == 0) {
    if (DAT_1809eeac8 == '\0') {
      DAT_1809eeac0 = FUN_180264b70(PTR_s_sv_air_max_wishspeed_1809eeab8);
      DAT_1809eeac8 = DAT_1809eeac0 == 0;
      if (DAT_1809eeac0 != 0) goto LAB_1801f285a;
    }
LAB_1801f2885:
    uVar24 = DAT_1808ac9e4;
  }
  else {
LAB_1801f285a:
    uVar24 = FUN_180264d70(DAT_1809eeac0);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f2885;
  }
  param_2[0x1e] = uVar24;
  if (DAT_1809eea90 == 0) {
    if (DAT_1809eea98 == '\0') {
      DAT_1809eea90 = FUN_180264b70(PTR_s_sv_standable_normal_1809eea88);
      DAT_1809eea98 = DAT_1809eea90 == 0;
      if (DAT_1809eea90 != 0) goto LAB_1801f28c9;
    }
LAB_1801f28f4:
    uVar24 = DAT_1808ac254;
  }
  else {
LAB_1801f28c9:
    uVar24 = FUN_180264d70(DAT_1809eea90);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f28f4;
  }
  param_2[0x1f] = uVar24;
  if (DAT_1809ef9f0 == 0) {
    if (DAT_1809ef9f8 == '\0') {
      DAT_1809ef9f0 = FUN_180264b70(PTR_s_sv_friction_1809ef9e8);
      DAT_1809ef9f8 = DAT_1809ef9f0 == 0;
      if (DAT_1809ef9f0 != 0) goto LAB_1801f2938;
    }
LAB_1801f2963:
    uVar24 = DAT_1808ac770;
  }
  else {
LAB_1801f2938:
    uVar24 = FUN_180264d70(DAT_1809ef9f0);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f2963;
  }
  param_2[0x20] = uVar24;
  if (DAT_1809eea28 == 0) {
    if (DAT_1809eea30 == '\0') {
      DAT_1809eea28 = FUN_180264b70(PTR_s_sv_accelerate_1809eea20);
      DAT_1809eea30 = DAT_1809eea28 == 0;
      if (DAT_1809eea28 != 0) goto LAB_1801f29aa;
    }
LAB_1801f29d5:
    uVar24 = DAT_1808ac790;
  }
  else {
LAB_1801f29aa:
    uVar24 = FUN_180264d70(DAT_1809eea28);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f29d5;
  }
  param_2[0x21] = uVar24;
  if (DAT_1809eead8 == 0) {
    if (DAT_1809eeae0 == '\0') {
      DAT_1809eead8 = FUN_180264b70(PTR_s_sv_stopspeed_1809eead0);
      DAT_1809eeae0 = DAT_1809eead8 == 0;
      if (DAT_1809eead8 != 0) goto LAB_1801f2a1c;
    }
  }
  else {
LAB_1801f2a1c:
    uVar24 = FUN_180264d70(DAT_1809eead8);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) != 0x7f800000) {
      uVar9 = uVar24;
    }
  }
  param_2[0x22] = uVar9;
  if (DAT_1809ef958 == 0) {
    if (DAT_1809ef960 == '\0') {
      DAT_1809ef958 = FUN_180264b70(PTR_s_sv_airaccelerate_1809ef950);
      DAT_1809ef960 = DAT_1809ef958 == 0;
      if (DAT_1809ef958 != 0) goto LAB_1801f2a89;
    }
LAB_1801f2ab4:
    uVar24 = DAT_1808ac8b0;
  }
  else {
LAB_1801f2a89:
    uVar24 = FUN_180264d70(DAT_1809ef958);
    local_res8[0] = CONCAT44(local_res8[0]._4_4_,uVar24);
    if ((uVar24 & 0x7f800000) == 0x7f800000) goto LAB_1801f2ab4;
  }
  param_2[0x23] = uVar24;
  if (DAT_1809eea40 == 0) {
    if (DAT_1809eea48 == '\0') {
      DAT_1809eea40 = FUN_180264b70(PTR_s_sv_accelerate_use_weapon_speed_1809eea38);
      DAT_1809eea48 = DAT_1809eea40 == 0;
      if (DAT_1809eea40 != 0) goto LAB_1801f2afb;
    }
LAB_1801f2b0b:
    uVar6 = 0;
  }
  else {
LAB_1801f2afb:
    cVar7 = FUN_180264d70(DAT_1809eea40);
    if (cVar7 == '\0') goto LAB_1801f2b0b;
    uVar6 = 1;
  }
  uVar24 = DAT_180ca0a0c;
  uVar11 = (ulonglong)DAT_180ca0a0c;
  *(undefined1 *)((longlong)param_2 + 0x91) = uVar6;
  if ((((*param_1 == 0) || (uVar24 == 0)) || (uVar20 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)
      ) || (lVar12 = FUN_18000f3a0(*param_1 + uVar11), lVar12 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_180011200(lVar12 + uVar20);
  }
  param_2[0x25] = uVar9;
  if (((uVar24 != 0) &&
      (lVar17 = FUN_18000f3a0(lVar17 + uVar11), lVar17 - 0x10000U < 0x7ffffffeffff)) &&
     (DAT_180ceb3a0 != 0)) {
    uVar24 = FUN_18000f3d0((ulonglong)DAT_180ceb3a0 + lVar17);
    param_2[0x26] = uVar24;
  }
  lVar17 = FUN_1803a08e0(param_1);
  if (lVar17 - 0x10000U < 0x7ffffffeffff) {
    *(longlong *)(param_2 + 0x2c) = lVar17;
    if (DAT_180ceb3a4 != 0) {
      uVar24 = FUN_180011200(lVar17 + (ulonglong)DAT_180ceb3a4);
      param_2[0x27] = uVar24;
    }
    if (DAT_180ceb3a8 != 0) {
      uVar24 = FUN_18000f3d0(lVar17 + (ulonglong)DAT_180ceb3a8);
      param_2[0x28] = uVar24;
    }
    if (DAT_180ceb3ac != 0) {
      uVar24 = FUN_180011200(lVar17 + (ulonglong)DAT_180ceb3ac);
      param_2[0x29] = uVar24;
    }
    if (((DAT_1809619a4 != 0) && (DAT_1809619a8 != 0)) && (DAT_180961998 != 0)) {
      uVar8 = FUN_180011440((ulonglong)DAT_1809619a4 +
                            (ulonglong)DAT_1809619a8 + lVar17 + (ulonglong)DAT_180961998);
      *(undefined2 *)(param_2 + 0x30) = uVar8;
    }
    if (DAT_1809619a0 != 0) {
      lVar13 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar17);
      lVar12 = 0;
      if (lVar13 - 0x10000U < 0x7ffffffeffff) {
        lVar12 = lVar13;
      }
      *(longlong *)(param_2 + 0x2e) = lVar12;
    }
    if ((lVar17 != 0) && (lVar12 = FUN_18000f3a0(lVar17 + 0x10), lVar12 != 0)) {
      lVar12 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar12);
      iVar19 = 0;
      if (lVar12 != 0) {
        uVar11 = (ulonglong)DAT_180961974;
        uVar20 = (ulonglong)DAT_180961970;
        do {
          if (0x1f < iVar19) break;
          lVar13 = FUN_18000f3a0(lVar12 + uVar20);
          if (((lVar13 != 0) &&
              (pcVar18 = (char *)FUN_18000f3a0(lVar13 + uVar11),
              pcVar18 + -0x10000 < (char *)0x7ffffffeffff)) &&
             (iVar10 = strcmp(pcVar18,"C_BaseCSGrenade"), iVar10 == 0)) {
            uVar6 = 1;
            goto LAB_1801f2d1e;
          }
          lVar12 = FUN_18000f3a0(lVar12 + 0x60);
          if (lVar12 == 0) break;
          lVar12 = FUN_18000f3a0(lVar12 + 0x18);
          iVar19 = iVar19 + 1;
        } while (lVar12 != 0);
      }
    }
    uVar6 = 0;
LAB_1801f2d1e:
    *(undefined1 *)((longlong)param_2 + 0xc2) = uVar6;
    if (((short)param_2[0x30] == 0x31) && (DAT_180ceb3d4 != 0)) {
      uVar6 = FUN_180011220(lVar17 + (ulonglong)DAT_180ceb3d4);
      *(undefined1 *)(param_2 + 0x36) = uVar6;
    }
    if (*(char *)((longlong)param_2 + 0xc2) != '\0') {
      if (DAT_180ceb3b0 != 0) {
        uVar6 = FUN_180011220(lVar17 + (ulonglong)DAT_180ceb3b0);
        *(undefined1 *)(param_2 + 0x2a) = uVar6;
      }
      if (DAT_180ceb3b4 != 0) {
        uVar24 = FUN_18000f3d0(lVar17 + (ulonglong)DAT_180ceb3b4);
        param_2[0x2b] = uVar24;
      }
    }
  }
  if (DAT_180ceb3c4 != 0) {
    if (DAT_180ceb0f8 == 0) {
LAB_1801f2dd6:
      DAT_180ceb0f8 = 0;
      uVar24 = 0;
      do {
        lVar17 = FUN_18000f3a0(DAT_1809619d0);
        if ((((lVar17 != 0) &&
             (lVar17 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                                     lVar17 + (ulonglong)(uint)(((int)uVar24 >> 9) * DAT_180961944))
             , lVar17 - 0x10000U < 0xfffffffffffeffff)) &&
            (lVar17 = FUN_18000f3a0((ulonglong)((uVar24 & 0x1ff) * DAT_180961948) + lVar17),
            lVar17 - 0x10000U < 0xfffffffffffeffff)) &&
           ((local_res8[0] = lVar17, pcVar18 = (char *)FUN_1803a0710(local_res8),
            pcVar18 != (char *)0x0 && (iVar19 = strcmp(pcVar18,"C_CSGameRulesProxy"), iVar19 == 0)))
           ) {
          DAT_180ceb0f8 = lVar17;
          goto LAB_1801f2e90;
        }
        uVar24 = uVar24 + 1;
      } while ((int)uVar24 < 0x400);
    }
    else {
      local_res8[0] = DAT_180ceb0f8;
      pcVar18 = (char *)FUN_1803a0710(local_res8);
      if ((pcVar18 == (char *)0x0) || (iVar19 = strcmp(pcVar18,"C_CSGameRulesProxy"), iVar19 != 0))
      goto LAB_1801f2dd6;
    }
LAB_1801f2e90:
    if ((DAT_180ceb0f8 != 0) &&
       (lVar17 = FUN_18000f3a0((ulonglong)DAT_180ceb3c4 + DAT_180ceb0f8),
       lVar17 - 0x10000U < 0x7ffffffeffff)) {
      if (DAT_180ceb3c8 != 0) {
        uVar6 = FUN_180011220(lVar17 + (ulonglong)DAT_180ceb3c8);
        *(undefined1 *)((longlong)param_2 + 0xc3) = uVar6;
      }
      if (DAT_180ceb3cc != 0) {
        uVar24 = FUN_18000f3d0(lVar17 + (ulonglong)DAT_180ceb3cc);
        param_2[0x31] = uVar24;
      }
    }
  }
  uVar24 = param_2[3] & 0x7f800000;
  uVar11 = (ulonglong)CONCAT31((int3)(uVar24 >> 8),uVar24 != 0x7f800000);
  if (((uVar24 != 0x7f800000) &&
      (uVar24 = param_2[4] & 0x7f800000,
      uVar11 = (ulonglong)CONCAT31((int3)(uVar24 >> 8),uVar24 != 0x7f800000), uVar24 != 0x7f800000))
     && (uVar24 = *param_2 & 0x7f800000,
        uVar11 = (ulonglong)CONCAT31((int3)(uVar24 >> 8),uVar24 != 0x7f800000), uVar24 != 0x7f800000
        )) {
    return uVar11;
  }
LAB_1801f2f21:
  return uVar11 & 0xffffffffffffff00;
}



/* ===== 1801f2f60 FUN_1801f2f60 ===== */

void FUN_1801f2f60(float param_1,float param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = param_1 * param_1 + param_2 * param_2;
  if (fVar5 < 0.0) {
    fVar3 = (float)FUN_18051af10(fVar5);
  }
  else {
    fVar3 = SQRT(fVar5);
  }
  if ((fVar3 < DAT_1808abf54) || (DAT_1808accfc < fVar3)) {
    *param_4 = 0.0;
    *param_3 = 0.0;
    if (fVar5 != 0.0) {
      dVar1 = (double)param_1;
      dVar2 = (double)param_2;
      dVar4 = dVar2 * dVar2 + dVar1 * dVar1;
      if (dVar4 < 0.0) {
        dVar4 = (double)FUN_18051ff20(dVar4);
      }
      else {
        dVar4 = SQRT(dVar4);
      }
      dVar4 = DAT_1808ac500 / dVar4;
      *param_3 = (float)(dVar1 * dVar4);
      *param_4 = (float)(dVar2 * dVar4);
    }
  }
  else {
    fVar3 = DAT_1808ac34c / fVar3;
    *param_4 = fVar3 * param_2;
    *param_3 = fVar3 * param_1;
  }
  return;
}



/* ===== 1801f3080 FUN_1801f3080 ===== */

float * FUN_1801f3080(float *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_2;
  fVar8 = (float)*(undefined8 *)(param_2 + 1);
  fVar9 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar7 = fVar8 * fVar8 + fVar1 * fVar1 + fVar9 * fVar9;
  if (fVar7 < 0.0) {
    fVar5 = (float)FUN_18051af10(CONCAT44(fVar9,fVar7));
  }
  else {
    fVar5 = SQRT(fVar7);
  }
  if ((fVar5 < DAT_1808abf54) || (DAT_1808accfc < fVar5)) {
    if (fVar7 == 0.0) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
    else {
      dVar2 = (double)fVar1;
      dVar3 = (double)fVar8;
      dVar4 = (double)fVar9;
      dVar6 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
      if (dVar6 < 0.0) {
        dVar6 = (double)FUN_18051ff20(dVar6);
      }
      else {
        dVar6 = SQRT(dVar6);
      }
      dVar6 = DAT_1808ac500 / dVar6;
      *param_1 = (float)(dVar2 * dVar6);
      param_1[1] = (float)(dVar3 * dVar6);
      param_1[2] = (float)(dVar4 * dVar6);
    }
  }
  else {
    fVar5 = DAT_1808ac34c / fVar5;
    *param_1 = fVar1 * fVar5;
    *(ulonglong *)(param_1 + 1) = CONCAT44(fVar9 * fVar5,fVar8 * fVar5);
  }
  return param_1;
}



/* ===== 1801f31f0 FUN_1801f31f0 ===== */

void FUN_1801f31f0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  fVar6 = *(float *)(param_1 + 0x18) * DAT_1808ac010;
  fVar4 = *(float *)(param_1 + 0x1c) * DAT_1808ac010;
  fVar5 = *(float *)(param_1 + 0x20) * DAT_1808ac010;
  fVar1 = (float)FUN_180517200(fVar6);
  fVar2 = (float)FUN_180517790(fVar4);
  fVar4 = (float)FUN_180517200(fVar4);
  fVar3 = (float)FUN_180517200(fVar5);
  local_res8[0] = 0.0;
  local_res20[0] = 0.0;
  local_res10[0] = 0.0;
  local_res18[0] = 0.0;
  FUN_1801f2f60(fVar4 * fVar1,fVar2 * fVar1,local_res8,local_res20);
  fVar1 = (float)FUN_180517790(fVar5);
  fVar5 = (float)FUN_180517790(fVar6);
  FUN_1801f2f60(fVar1 * fVar5 * fVar4 - fVar3 * fVar2,fVar1 * fVar5 * fVar2 + fVar3 * fVar4,
                local_res10,local_res18);
  *param_2 = local_res10[0] * *(float *)(param_1 + 0x10) + local_res8[0] * *(float *)(param_1 + 0xc)
  ;
  *param_3 = local_res18[0] * *(float *)(param_1 + 0x10) +
             local_res20[0] * *(float *)(param_1 + 0xc);
  return;
}



/* ===== 1801f33a0 FUN_1801f33a0 ===== */

void FUN_1801f33a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uStack_b4;
  uint local_a8;
  uint local_98;
  undefined4 local_88;
  uint5 uStack_75;
  undefined4 local_68 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  local_a8 = local_a8 & 0xffffff00;
  local_58 = (ulonglong)local_a8;
  local_98 = local_98 & 0xffffff00;
  local_48 = (ulonglong)local_98;
  local_38 = CONCAT44(param_3,local_88) & 0xffffffffffffff00;
  uStack_30 = CONCAT44(param_5,param_4);
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  local_28 = CONCAT71((int7)(((ulonglong)uStack_75 << 0x18) >> 8),1);
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    local_68[0] = param_2;
    FUN_18008c530(param_1 + 0x38,puVar1,local_68);
    return;
  }
  *puVar1 = param_2;
  puVar1[1] = uStack_b4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(ulonglong *)(puVar1 + 4) = local_58;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(ulonglong *)(puVar1 + 8) = local_48;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(ulonglong *)(puVar1 + 0xc) = local_38;
  *(undefined8 *)(puVar1 + 0xe) = uStack_30;
  *(undefined8 *)(puVar1 + 0x10) = local_28;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x48;
  return;
}



/* ===== 1801f3490 FUN_1801f3490 ===== */

void FUN_1801f3490(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  undefined4 uStack_a4;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  uint5 uStack_65;
  undefined4 local_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  uStack_30 = 0;
  local_48 = CONCAT44(*param_3,local_98) & 0xffffffffffffff00;
  uStack_40 = *(undefined8 *)(param_3 + 1);
  local_28 = CONCAT44(param_4,local_78) & 0xffffffffffffff00;
  uStack_20 = CONCAT44(param_6,param_5);
  uStack_50 = 0;
  uStack_4c = 0;
  local_38 = CONCAT71((uint7)(uint3)((uint)local_88 >> 8),1);
  local_18._2_6_ = (undefined6)(((ulonglong)uStack_65 << 0x18) >> 0x10);
  local_18._0_2_ = CONCAT11(param_7,1);
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    local_58[0] = param_2;
    FUN_18008c530(param_1 + 0x38,puVar1,local_58);
    return;
  }
  *puVar1 = param_2;
  puVar1[1] = uStack_a4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(ulonglong *)(puVar1 + 4) = local_48;
  *(undefined8 *)(puVar1 + 6) = uStack_40;
  *(undefined8 *)(puVar1 + 8) = local_38;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(ulonglong *)(puVar1 + 0xc) = local_28;
  *(undefined8 *)(puVar1 + 0xe) = uStack_20;
  *(undefined8 *)(puVar1 + 0x10) = local_18;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x48;
  return;
}



/* ===== 1801f35a0 FUN_1801f35a0 ===== */

void FUN_1801f35a0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined4 uStack_a4;
  undefined4 local_98;
  uint local_88;
  uint local_78;
  uint5 uStack_65;
  undefined4 local_58 [2];
  undefined8 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  local_88 = local_88 & 0xffffff00;
  local_78 = local_78 & 0xffffff00;
  local_18 = (ulonglong)uStack_65 << 0x18;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_48 = CONCAT31((int3)((uint)local_98 >> 8),param_4);
  local_38 = local_88;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = local_78;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  if (puVar1 == *(undefined8 **)(param_1 + 0x48)) {
    local_58[0] = param_2;
    uStack_50 = param_3;
    FUN_18008c530(param_1 + 0x38,puVar1,local_58);
    return;
  }
  *puVar1 = CONCAT44(uStack_a4,param_2);
  puVar1[1] = param_3;
  puVar1[2] = (ulonglong)local_48;
  puVar1[3] = 0;
  *(uint *)(puVar1 + 4) = local_88;
  *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
  *(uint *)(puVar1 + 6) = local_78;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[8] = local_18;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x48;
  return;
}



/* ===== 1801f3660 FUN_1801f3660 ===== */

void FUN_1801f3660(undefined4 *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  param_1[4] = *(undefined4 *)(param_2 + 0x4c);
  if (*(char *)(param_2 + 0x45) == '\0') {
    bVar1 = (byte)(*(uint *)(param_2 + 0x18) >> 1) & 1;
  }
  else {
    bVar1 = 1;
  }
  *(byte *)(param_1 + 5) = bVar1;
  param_1[6] = *(undefined4 *)(param_2 + 0x48);
  *param_1 = *(undefined4 *)(param_2 + 0x40);
  param_1[7] = *(undefined4 *)(param_2 + 0xc);
  param_1[8] = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = *(undefined4 *)(param_2 + 0x2c);
  param_1[10] = *(float *)(param_2 + 0x80) * *(float *)(param_2 + 0x40) * *(float *)(param_2 + 0x20)
  ;
  param_1[0xb] = *(undefined4 *)(param_2 + 0x88);
  fVar4 = *(float *)(param_2 + 0x84);
  fVar5 = *(float *)(param_2 + 0x40);
  param_1[0xc] = 0x3f800000;
  param_1[1] = fVar4 * fVar5;
  if ((*(char *)(param_2 + 0x91) != '\0') && (*(longlong *)(param_2 + 0xb8) != 0)) {
    if (DAT_1809619bc == 0) {
      fVar4 = DAT_1808acb90;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0xa4);
      if (1 < uVar2) {
        uVar2 = 0;
      }
      fVar4 = (float)FUN_18000f3d0((ulonglong)DAT_1809619bc +
                                   (longlong)(int)(uVar2 << 2) + *(longlong *)(param_2 + 0xb8));
    }
    if ((((DAT_180ceb3b8 != 0) &&
         (iVar3 = FUN_180011200((ulonglong)DAT_180ceb3b8 + *(longlong *)(param_2 + 0xb8)), 1 < iVar3
         )) && (fVar4 * DAT_1808ac200 < DAT_1808acb0c)) || (*(char *)(param_1 + 5) == '\0')) {
      fVar5 = DAT_1808ac34c;
      if (fVar4 / DAT_1808acb90 <= DAT_1808ac34c) {
        fVar5 = fVar4 / DAT_1808acb90;
      }
      param_1[0xc] = fVar5;
    }
  }
  return;
}



/* ===== 1801f37a0 FUN_1801f37a0 ===== */

void FUN_1801f37a0(longlong param_1,float param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_1808ac34c;
  fVar4 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 8) = fVar3;
  *(float *)(param_1 + 0x24) = param_2;
  if (0.0 < fVar4) {
    fVar2 = fVar1 - fVar4 / DAT_1808acb08;
    if (fVar2 <= fVar1) {
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
    }
    else {
      fVar2 = fVar1;
    }
    fVar3 = fVar2 * fVar2 * fVar3;
    *(float *)(param_1 + 8) = fVar3;
    fVar4 = fVar4 - param_2 * *(float *)(param_3 + 0x68);
    *(float *)(param_1 + 0x10) = fVar4;
    if (fVar4 < 0.0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(float *)(param_1 + 8) =
         ((*(float *)(param_1 + 0x18) * DAT_1808ac16c + fVar1) - *(float *)(param_1 + 0x18)) * fVar3
    ;
  }
  return;
}



/* ===== 1801f3850 FUN_1801f3850 ===== */

void FUN_1801f3850(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res8 [2];
  float local_res18 [4];
  
  fVar2 = *(float *)(param_1 + 0x1c);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar4 = fVar2 * fVar2 + fVar5 * fVar5;
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_18051af10(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (DAT_1808ac0c0 <= fVar4) {
    fVar3 = *(float *)(param_1 + 0x2c);
    if (*(float *)(param_1 + 0x2c) <= fVar4) {
      fVar3 = fVar4;
    }
    fVar1 = fVar4 - fVar3 * *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x28);
    fVar3 = 0.0;
    if (0.0 <= fVar1) {
      fVar3 = fVar1;
    }
    fVar5 = (fVar3 / fVar4) * fVar5;
    fVar2 = (fVar3 / fVar4) * fVar2;
    *(float *)(param_1 + 0x20) = fVar5;
    *(float *)(param_1 + 0x1c) = fVar2;
  }
  local_res8[0] = 0.0;
  local_res18[0] = 0.0;
  FUN_1801f31f0(param_2,local_res8,local_res18);
  fVar4 = local_res18[0] * local_res18[0] + local_res8[0] * local_res8[0];
  if (fVar4 < 0.0) {
    fVar3 = (float)FUN_18051af10(fVar4);
  }
  else {
    fVar3 = SQRT(fVar4);
  }
  if (fVar4 == 0.0) {
    local_res18[0] = 0.0;
    local_res8[0] = 0.0;
  }
  else {
    local_res18[0] = (DAT_1808ac34c / fVar3) * local_res18[0];
    local_res8[0] = (DAT_1808ac34c / fVar3) * local_res8[0];
  }
  fVar4 = DAT_1808ac34c;
  if (fVar3 <= DAT_1808ac34c) {
    fVar4 = fVar3;
  }
  fVar4 = fVar4 * *(float *)(param_1 + 8);
  fVar3 = fVar4 - (fVar5 * local_res18[0] + fVar2 * local_res8[0]);
  if (0.0 < fVar3) {
    fVar1 = DAT_1808acb90;
    if (DAT_1808acb90 <= fVar4) {
      fVar1 = fVar4;
    }
    fVar4 = fVar1 * *(float *)(param_1 + 4) * *(float *)(param_1 + 0x30);
    if (0.0 < fVar4) {
      fVar4 = fVar4 * *(float *)(param_1 + 0x24);
      if (fVar4 <= fVar3) {
        fVar3 = fVar4;
      }
      *(float *)(param_1 + 0x20) = fVar3 * local_res18[0] + fVar5;
      *(float *)(param_1 + 0x1c) = fVar3 * local_res8[0] + fVar2;
    }
  }
  return;
}



/* ===== 1801f3a30 FUN_1801f3a30 ===== */

void FUN_1801f3a30(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_res8 [4];
  float local_res18 [4];
  
  local_res8[0] = 0.0;
  local_res18[0] = 0.0;
  FUN_1801f31f0(param_2,local_res8,local_res18);
  fVar2 = local_res18[0];
  fVar3 = local_res18[0] * local_res18[0] + local_res8[0] * local_res8[0];
  if (fVar3 < 0.0) {
    fVar1 = (float)FUN_18051af10(fVar3);
  }
  else {
    fVar1 = SQRT(fVar3);
  }
  if (fVar3 == 0.0) {
    fVar2 = 0.0;
    local_res8[0] = 0.0;
  }
  else {
    fVar2 = (DAT_1808ac34c / fVar1) * fVar2;
    local_res8[0] = (DAT_1808ac34c / fVar1) * local_res8[0];
  }
  fVar3 = DAT_1808ac34c;
  if (fVar1 <= DAT_1808ac34c) {
    fVar3 = fVar1;
  }
  fVar3 = fVar3 * *(float *)(param_1 + 8);
  fVar1 = fVar3;
  if (*(float *)(param_1 + 0x2c) <= fVar3) {
    fVar1 = *(float *)(param_1 + 0x2c);
  }
  fVar1 = fVar1 - (*(float *)(param_1 + 0x20) * fVar2 + *(float *)(param_1 + 0x1c) * local_res8[0]);
  if (0.0 < fVar1) {
    fVar3 = fVar3 * *(float *)(param_1 + 4) * *(float *)(param_1 + 0x24);
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
    *(float *)(param_1 + 0x20) = fVar3 * fVar2 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x1c) = fVar3 * local_res8[0] + *(float *)(param_1 + 0x1c);
  }
  return;
}



/* ===== 1801f3b50 FUN_1801f3b50 ===== */

undefined1 FUN_1801f3b50(undefined8 param_1,undefined8 param_2)

{
  (*DAT_180961f50)(&DAT_180ceb280,param_2,0x1c1003,4,7);
  return 1;
}



/* ===== 1801f3b80 FUN_1801f3b80 ===== */

undefined8 FUN_1801f3b80(void)

{
  (*DAT_180961f48)();
  return 1;
}



/* ===== 1801f3bb0 FUN_1801f3bb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801f3bb0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [64];
  undefined1 local_58 [24];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (DAT_180cc412d == '\0') {
    return 0;
  }
  FUN_1801fd810(&DAT_1809f01d0,&DAT_1809efa10);
  _DAT_1809f0328 = param_2;
  if (DAT_1809f0318 != 0) {
    if (((DAT_181112110 == 0) ||
        (0x7ffffffefffe < (DAT_1809f0318 + (ulonglong)DAT_181112110) - 0x10000)) ||
       (iVar1 = FUN_180011200(), 0xfffffffd < iVar1 - 1U)) {
      _DAT_1809f0320 = 0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1803a0940(local_a8,iVar1);
      _DAT_1809f0320 = *puVar2;
    }
  }
  FUN_1804624c0(&DAT_1809f01d0);
  FUN_180463020(&DAT_1809f01d0);
  _DAT_1809f0920 = DAT_1809f0160;
  local_b8 = 0;
  uVar3 = FUN_18045a7d0(local_98,param_1,DAT_180ceb270,(undefined4)DAT_180ceb370);
  FUN_18045ad20(&DAT_1809f01d0,uVar3);
  FUN_180011610(local_40);
  FUN_180200b70(local_58);
  return 1;
}



/* ===== 1801f3cf0 FUN_1801f3cf0 ===== */

void FUN_1801f3cf0(longlong param_1)

{
  FUN_180011610(param_1 + 0x58);
  FUN_180200b70(param_1 + 0x40);
  return;
}



/* ===== 1801f3d10 FUN_1801f3d10 ===== */

undefined8 * FUN_1801f3d10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_3[1];
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar1 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar1 = param_3[9];
  uVar3 = param_3[10];
  uVar4 = param_3[0xb];
  param_1[8] = param_3[8];
  param_1[9] = uVar1;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  uVar1 = param_3[0xd];
  uVar3 = param_3[0xe];
  uVar4 = param_3[0xf];
  param_1[0xc] = param_3[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  uVar1 = param_3[0x11];
  uVar3 = param_3[0x12];
  uVar4 = param_3[0x13];
  param_1[0x10] = param_3[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_3[0x14];
  uVar5 = param_3[0x15];
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar5;
  uVar1 = param_3[0x17];
  uVar3 = param_3[0x18];
  uVar4 = param_3[0x19];
  param_1[0x16] = param_3[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_3[0x1a];
  uVar5 = param_3[0x1b];
  param_1[0x18] = uVar3;
  param_1[0x19] = uVar4;
  uVar3 = param_3[0x1c];
  uVar4 = param_3[0x1d];
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = uVar3;
  param_1[0x1d] = uVar4;
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 1) = uVar2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x21c);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x201);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((longlong)param_2 + 0x204);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x43);
  param_1[7] = param_2[0x2f];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x224);
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0xf);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)((longlong)param_2 + 0x37c);
  *(undefined1 *)((longlong)param_1 + 0xd9) = *(undefined1 *)((longlong)param_2 + 0x2cc);
  *(undefined1 *)((longlong)param_1 + 0xda) = *(undefined1 *)(param_2 + 0x4b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)((longlong)param_2 + 0x304);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)(param_2 + 0x2d);
  return param_1;
}



/* ===== 1801f3ec0 FUN_1801f3ec0 ===== */

ulonglong FUN_1801f3ec0(longlong param_1)

{
  uint uVar1;
  float fVar2;
  ulonglong in_RAX;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_res8 [2];
  
  fVar2 = DAT_1808ac34c;
  iVar3 = *(int *)(param_1 + 0x30);
  if ((*(char *)(param_1 + 0xc3) != '\0') &&
     ((float)iVar3 * DAT_1808ac00c <= *(float *)(param_1 + 0xc4))) goto LAB_1801f3f4e;
  uVar1 = *(uint *)(param_1 + 0x18);
  in_RAX = (ulonglong)uVar1;
  if (((uVar1 & 0x20) != 0) ||
     ((((*(char *)(param_1 + 0x1d) != '\0' || (*(char *)(param_1 + 0x29) != '\0')) ||
       ((uVar1 & 1) == 0)) ||
      ((*(short *)(param_1 + 0xc0) == 0x31 && (*(char *)(param_1 + 0xd8) != '\0'))))))
  goto LAB_1801f3f4e;
  if (*(char *)(param_1 + 0xd9) != '\0') {
    if ((*(char *)(param_1 + 0xda) != '\0') &&
       ((float)iVar3 * DAT_1808ac00c <= *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xdc)))
    goto LAB_1801f3f4e;
    goto LAB_1801f4012;
  }
  fVar4 = *(float *)(param_1 + 0xec);
  if ((fVar4 < 0.0) || (DAT_1808ac34c <= fVar4)) {
    local_res8[0] = 0.0;
    fVar4 = (float)FUN_180512fd0(fVar4,local_res8);
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + fVar2;
      if (fVar4 < fVar2) {
        local_res8[0] = local_res8[0] + DAT_1808acda0;
      }
      else {
        fVar4 = 0.0;
      }
    }
    in_RAX = (ulonglong)(uint)(int)local_res8[0];
    iVar3 = iVar3 + (int)local_res8[0];
  }
  fVar4 = fVar4 - *(float *)(param_1 + 0xe4);
  iVar3 = iVar3 - *(int *)(param_1 + 0xe0);
  if (0.0 <= fVar4) {
LAB_1801f3fd9:
    fVar5 = fVar4;
  }
  else {
    fVar4 = fVar4 + fVar2;
    fVar5 = 0.0;
    if (fVar4 < fVar2) {
      iVar3 = iVar3 + -1;
      goto LAB_1801f3fd9;
    }
  }
  if (*(float *)(param_1 + 0xe8) <= (float)iVar3 * DAT_1808ac00c + fVar5 * DAT_1808ac00c) {
LAB_1801f4012:
    return (ulonglong)(~(*(byte *)(param_1 + 0x38) >> 1) & 1);
  }
LAB_1801f3f4e:
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1801f4030 FUN_1801f4030 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f4030(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_180920dc7 == '\0') {
    DAT_180ceb0e4 = 0;
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x28) & 0x618;
  if (uVar3 != DAT_180ceb0e4) {
    DAT_180ceb250 = ~DAT_180ceb0e4 & *(uint *)(param_1 + 0x28) & 0x618;
    DAT_180ceb0e4 = uVar3;
  }
  uVar3 = DAT_180ceb250;
  if ((DAT_180ceb250 & 8) == 0) {
    if ((DAT_180ceb250 & 0x10) != 0) {
      *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffff7;
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) & 0xffffffffffffffef;
  }
  if ((uVar3 >> 10 & 1) == 0) {
    if ((uVar3 >> 9 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffbff;
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffdff;
  }
  cVar2 = DAT_180cc45b6;
  uVar3 = DAT_1808adec0;
  if (*(float *)(param_1 + 0xc) == 0.0) {
    uVar6 = DAT_1808ac34c;
  }
  else {
    uVar6 = (uint)*(float *)(param_1 + 0xc) & _DAT_1808ade90;
  }
  uVar5 = DAT_1808ac34c;
  if (*(float *)(param_1 + 0x10) != 0.0) {
    uVar5 = (uint)*(float *)(param_1 + 0x10) & _DAT_1808ade90;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      if (DAT_180cc45b6 != '\0') {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar6 ^ DAT_1808adec0;
    }
  }
  else {
    *(uint *)(param_1 + 0xc) = uVar6;
  }
  if ((uVar1 >> 10 & 1) == 0) {
    if ((uVar1 >> 9 & 1) == 0) {
      if (cVar2 == '\0') {
        return;
      }
      uVar5 = 0;
    }
  }
  else {
    uVar5 = uVar5 ^ uVar3;
  }
  *(uint *)(param_1 + 0x10) = uVar5;
  if ((cVar2 != '\0') && (*(char *)(param_2 + 0x5c) != '\0')) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (lVar4 != *(longlong *)(param_1 + 0x40)) {
      while ((*(longlong *)(lVar4 + 8) != 0 || (*(char *)(lVar4 + 0x40) == '\0'))) {
        lVar4 = lVar4 + 0x48;
        if (lVar4 == *(longlong *)(param_1 + 0x40)) {
          return;
        }
      }
      *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(param_1 + 0x14);
    }
  }
  return;
}



/* ===== 1801f4190 FUN_1801f4190 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f4190(float *param_1,longlong param_2)

{
  float fVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  uint uVar23;
  float fVar24;
  undefined1 local_d8 [16];
  undefined1 local_c8 [184];
  
  fVar13 = *param_1 * DAT_1808ac010;
  fVar14 = param_1[1] * DAT_1808ac010;
  fVar16 = param_1[2] * DAT_1808ac010;
  fVar7 = (float)FUN_180517790(fVar13);
  fVar8 = (float)FUN_180517200(fVar13);
  fVar9 = (float)FUN_180517790(fVar14);
  fVar10 = (float)FUN_180517200(fVar14);
  fVar11 = (float)FUN_180517790(fVar16);
  fVar12 = (float)FUN_180517200(fVar16);
  fVar13 = param_1[3];
  local_d8._8_4_ = 0;
  fVar17 = fVar9 * fVar8;
  fVar21 = (float)((uint)fVar7 ^ DAT_1808adec0);
  fVar14 = *(float *)(param_2 + 0x50);
  fVar24 = fVar10 * fVar8;
  fVar16 = *(float *)(param_2 + 0x54);
  local_d8._4_4_ = fVar14;
  fVar20 = param_1[4] * (fVar11 * fVar7 * fVar10 - fVar12 * fVar9) + fVar13 * fVar24;
  fVar19 = param_1[4] * (fVar11 * fVar7 * fVar9 + fVar12 * fVar10) + fVar13 * fVar17;
  local_d8._0_4_ = (uint)fVar16 ^ DAT_1808adec0;
  fVar11 = param_1[4] * fVar11 * fVar8 + fVar13 * fVar21;
  pfVar2 = (float *)FUN_1801f3080(local_c8,local_d8);
  fVar10 = DAT_1808acda0;
  fVar9 = DAT_1808ac34c;
  fVar13 = *(float *)(param_2 + 0x58);
  fVar7 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar22 = fVar14 * fVar8 - fVar16 * fVar7;
  fVar12 = fVar16 * fVar19 + fVar14 * fVar20 + fVar13 * fVar11;
  fVar18 = (fVar11 - fVar13 * fVar12) - fVar22 * fVar12;
  fVar11 = (float)((uint)fVar18 & _DAT_1808ade90);
  local_d8 = ZEXT416((uint)fVar11);
  if (DAT_1808ac118 < fVar11) {
    fVar1 = pfVar2[2];
    fVar15 = fVar16 * fVar1 - fVar13 * fVar8;
    fVar13 = fVar13 * fVar7 - fVar14 * fVar1;
    if ((float)((uint)((fVar19 - fVar16 * fVar12) - fVar13 * fVar12) & _DAT_1808ade90) +
        (float)((uint)((fVar20 - fVar14 * fVar12) - fVar15 * fVar12) & _DAT_1808ade90) <= fVar11) {
      fVar14 = fVar13 * fVar17 + fVar15 * fVar24 + fVar22 * fVar21;
      fVar16 = fVar8 * fVar17 + fVar7 * fVar24 + fVar1 * fVar21;
      if (0.0 < fVar14) {
        fVar11 = DAT_1808ac34c;
      }
      else {
        fVar11 = DAT_1808acda0;
      }
      if (0.0 < fVar16 == 0.0 < fVar14) {
        fVar12 = DAT_1808acda0;
      }
      else {
        fVar12 = DAT_1808ac34c;
      }
      fVar22 = fVar22 * fVar11;
      fVar15 = fVar15 * fVar11;
      fVar13 = fVar13 * fVar11;
      fVar19 = fVar8 * fVar12 * fVar22 - fVar1 * fVar12 * fVar13;
      fVar8 = fVar13 * fVar7 * fVar12 - fVar8 * fVar12 * fVar15;
      fVar17 = fVar1 * fVar12 * fVar15 - fVar22 * fVar7 * fVar12;
      fVar7 = fVar17 * fVar17 + fVar19 * fVar19 + fVar8 * fVar8 + _DAT_1808abf84;
      if (fVar7 < 0.0) {
        fVar7 = (float)FUN_18051af10(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      uVar23 = (uint)fVar22 ^ DAT_1808adec0;
      fVar13 = fVar13 * fVar13 + fVar15 * fVar15;
      if (fVar13 < 0.0) {
        fVar13 = (float)FUN_18051af10(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
      }
      fVar13 = (float)FUN_180516b00(uVar23,fVar13);
      fVar8 = DAT_1808aca9c;
      fVar11 = fVar13 * DAT_1808aca9c + fVar11;
      fVar17 = (float)FUN_180516b00((uint)(fVar19 * (fVar9 / fVar7)) ^ DAT_1808adec0,
                                    fVar17 * (fVar9 / fVar7));
      fVar7 = DAT_1808ac1f4;
      fVar13 = DAT_1808abfd4;
      fVar12 = fVar17 * fVar8 - fVar12;
      fVar17 = (float)FUN_18053f0d0(fVar11 * DAT_1808abfd4 + DAT_1808ac1f4);
      fVar8 = DAT_1808acbd0;
      fVar11 = fVar11 - fVar17 * DAT_1808acbd0;
      fVar13 = (float)FUN_18053f0d0(fVar12 * fVar13 + fVar7);
      fVar12 = fVar12 - fVar13 * fVar8;
      if (*(char *)(param_2 + 0x90) == '\0') {
        *param_1 = fVar11;
        param_1[1] = fVar12;
        param_1[2] = 0.0;
      }
      *(ulonglong *)(param_1 + 10) = *(ulonglong *)(param_1 + 10) & 0xfffffffffffff9e7;
      DAT_180ceb268 = DAT_180ceb268 & 0xfffffffffffff9e7;
      uVar6 = 0;
      uVar3 = 0;
      uVar5 = 0;
      param_1[8] = 0.0;
      param_1[7] = fVar12;
      if (0.0 < fVar16) {
        uVar6 = 0x200;
      }
      param_1[6] = fVar11;
      if (0.0 < fVar18) {
        uVar3 = 0x200;
      }
      uVar4 = 0;
      if (0.0 < fVar14) {
        uVar5 = 8;
      }
      if (0.0 < fVar18) {
        uVar4 = 8;
      }
      *(ulonglong *)(param_1 + 10) =
           *(ulonglong *)(param_1 + 10) | (uVar6 ^ uVar3) + 0x200 | (uVar5 ^ uVar4) + 8;
      if ((*(ulonglong *)(param_1 + 10) & 8) == 0) {
        fVar13 = fVar10;
      }
      else {
        fVar13 = fVar9;
      }
      param_1[3] = fVar13;
      if ((*(ulonglong *)(param_1 + 10) & 0x200) == 0) {
        fVar9 = fVar10;
      }
      param_1[4] = fVar9;
    }
  }
  return;
}



/* ===== 1801f4750 FUN_1801f4750 ===== */

/* WARNING: Removing unreachable block (ram,0x0001801f4c01) */
/* WARNING: Removing unreachable block (ram,0x0001801f4c06) */
/* WARNING: Removing unreachable block (ram,0x0001801f4c1b) */
/* WARNING: Removing unreachable block (ram,0x0001801f4c24) */
/* WARNING: Removing unreachable block (ram,0x0001801f4c35) */
/* WARNING: Removing unreachable block (ram,0x0001801f4c37) */
/* WARNING: Removing unreachable block (ram,0x0001801f4c40) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f4750(longlong param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  longlong *plVar11;
  float *pfVar12;
  undefined *puVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  byte bVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong local_res18;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  
  dVar6 = DAT_1808ac9a0;
  if ((DAT_1809ef9a1 == DAT_18095cdb4) || (DAT_1809ef9a1 = DAT_18095cdb4, DAT_18095cdb4 == '\0')) {
    fVar16 = (float)_DAT_1809ef9dc;
  }
  else {
    fVar16 = param_2[2];
    fVar10 = *param_2;
    fVar25 = param_2[1];
    if (((uint)param_2[6] & 1) == 0) {
      local_118 = param_2[2] - DAT_1808acc3c;
      puVar20 = &DAT_18060c098;
      if (*(char *)(param_2 + 0x11) != '\0') {
        puVar20 = &DAT_18060c088;
      }
      local_158 = _DAT_1808ad2c0;
      uStack_150 = _UNK_1808ad2c8;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_130 = local_130 & 0xffff000000000000;
      uStack_128 = CONCAT44(uStack_128._4_4_,0x3f800000);
      local_120 = *(undefined8 *)param_2;
      FUN_1802aed00(param_2,&local_120,&DAT_18060c078,puVar20,*(undefined8 *)(param_2 + 0x34),
                    0x1c1003,4,7,&local_158,0);
      fVar16 = uStack_150._4_4_;
      fVar10 = local_158._4_4_;
      fVar25 = (float)uStack_150;
    }
    _DAT_1809ef9b0 = DAT_1809ef9a4;
    _DAT_1809ef9b8 = DAT_1809ef9ac;
    _DAT_1809ef9b4 = DAT_1809ef9a8;
    _DAT_1809ef9a4 = CONCAT44(fVar25,fVar10);
    DAT_1809ef9ac = fVar16;
    plVar11 = (longlong *)FUN_1800ad890(&local_res18);
    fVar16 = -NAN;
    DAT_1809ef9a0 = '\0';
    DAT_1809ef9a2 = '\0';
    DAT_1809ef9c8 = -NAN;
    _DAT_1809ef9c0 = (double)*plVar11 / dVar6;
    DAT_1809ef9d0 = 0;
    _DAT_1809ef9dc = 0xffffffffffffffff;
  }
  fVar10 = DAT_1808acc70;
  if (DAT_1809ef9a1 == '\0') {
    return;
  }
  if (DAT_1808acc70 <
      (param_2[1] - DAT_180ceb360._4_4_) * (param_2[1] - DAT_180ceb360._4_4_) +
      (*param_2 - (float)DAT_180ceb360) * (*param_2 - (float)DAT_180ceb360) +
      (param_2[2] - DAT_180ceb368) * (param_2[2] - DAT_180ceb368)) {
    _DAT_1809ef9b0 = DAT_1809ef9a4;
    _DAT_1809ef9b8 = DAT_1809ef9ac;
    _DAT_1809ef9b4 = DAT_1809ef9a8;
    _DAT_1809ef9a4 = *(undefined8 *)param_2;
    DAT_1809ef9ac = param_2[2];
    plVar11 = (longlong *)FUN_1800ad890(&local_res18);
    fVar16 = -NAN;
    DAT_1809ef9a0 = '\0';
    DAT_1809ef9a2 = '\0';
    DAT_1809ef9c8 = -NAN;
    DAT_1809ef9d0 = 0;
    _DAT_1809ef9c0 = (double)*plVar11 / dVar6;
    _DAT_1809ef9dc = 0xffffffffffffffff;
  }
  lVar22 = DAT_180ceb0f0;
  local_res18 = *(ulonglong *)(param_1 + 0x28);
  uVar18 = (ulonglong)((uint)local_res18 & 0x618);
  fVar25 = param_2[0xc];
  bVar21 = *(byte *)(param_2 + 6);
  bVar23 = DAT_18095cdcc != '\0';
  fVar28 = (param_2[1] - DAT_1809ef9a8) * (param_2[1] - DAT_1809ef9a8) +
           (*param_2 - DAT_1809ef9a4) * (*param_2 - DAT_1809ef9a4);
  if (DAT_1809ef9a0 == '\0') {
    lVar19 = DAT_180ceb0f0 + -2;
    if (-1 < lVar19) {
      lVar14 = lVar19 % 0x96;
      lVar2 = *(longlong *)(&DAT_1809eeb20 + lVar14 * 0x18);
      puVar13 = (undefined *)0x0;
      if (lVar2 == lVar19) {
        puVar13 = &DAT_1809eeb20 + lVar14 * 0x18;
      }
      if (puVar13 != (undefined *)0x0) {
        pfVar12 = (float *)&DAT_00000010;
        if (lVar2 == lVar19) {
          pfVar12 = (float *)(&DAT_1809eeb30 + lVar14 * 0x18);
        }
        if (*pfVar12 != param_2[0x28]) {
          pfVar12 = (float *)&DAT_00000014;
          if (lVar2 == lVar19) {
            pfVar12 = (float *)(&DAT_1809eeb34 + lVar14 * 0x18);
          }
          if (((*pfVar12 == param_2[0x25]) && (*(longlong *)(param_2 + 0x2e) != 0)) &&
             ((((DAT_180ceb3bc != 0 &&
                (iVar9 = FUN_180011200(*(longlong *)(param_2 + 0x2e) + (ulonglong)DAT_180ceb3bc),
                iVar9 - 1U < 6)) || (*(short *)(param_2 + 0x30) == 0x1f)) && (bVar23)))) {
            DAT_1809ef9a0 = '\x01';
            DAT_1809ef9d8 = 0xe;
          }
        }
      }
    }
    iVar9 = DAT_18095cdc8;
    if (DAT_1809ef9a0 == '\0') {
      if (200 < DAT_18095cdc8) {
        return;
      }
      if (fVar28 < 0.0) {
        fVar28 = (float)FUN_18051af10();
      }
      else {
        fVar28 = SQRT(fVar28);
      }
      fVar16 = (float)iVar9;
      if (fVar28 < fVar16) {
        return;
      }
      fVar10 = *param_2;
      fVar25 = param_2[1];
      fVar27 = param_2[2];
      local_118 = DAT_1809ef9ac - fVar27;
      local_120 = CONCAT44(DAT_1809ef9a8 - fVar25,DAT_1809ef9a4 - fVar10);
      pfVar12 = (float *)FUN_1801f3080(&local_110,&local_120);
      fVar29 = param_2[0x1d] + DAT_1808ac540;
      fVar24 = *pfVar12;
      fVar26 = pfVar12[1];
      fVar1 = pfVar12[2];
      puVar20 = &DAT_18060c098;
      if (*(char *)(param_2 + 0x11) != '\0') {
        puVar20 = &DAT_18060c088;
      }
      local_f0 = 0xc1800000;
      local_ec = 0xc1800000;
      uStack_128._0_4_ = 0x3f800000;
      local_120 = *puVar20;
      local_118 = *(float *)(puVar20 + 1) - fVar29 * DAT_1808ac1f4;
      local_e0 = fVar16 * fVar24 + fVar10;
      local_138 = 0;
      local_res18 = CONCAT44(local_res18._4_4_,fVar29 * DAT_1808ac428);
      local_e8 = fVar29 * DAT_1808ac428 + _DAT_1808abf44;
      local_130 = local_130 & 0xffff000000000000;
      local_d8 = fVar16 * fVar1 + fVar27;
      local_dc = fVar16 * fVar26 + fVar25;
      local_158 = _DAT_1808ad2c0;
      uStack_150 = _UNK_1808ad2c8;
      local_148 = 0;
      uStack_140 = 0;
      FUN_1802aed00(param_2,&local_e0,&local_f0,&local_120,*(undefined8 *)(param_2 + 0x34),0x1c1003,
                    4,7,&local_158,0);
      if (DAT_1808ac34c <= (float)local_158) {
        fVar10 = local_158._4_4_;
        fVar25 = (float)uStack_150;
        fVar27 = uStack_150._4_4_;
        if (local_130._5_1_ == '\0') goto LAB_1801f4e8b;
      }
      fVar10 = local_158._4_4_ - fVar24;
      fVar25 = (float)uStack_150 - fVar26;
      fVar27 = uStack_150._4_4_ - fVar1;
LAB_1801f4e8b:
      if ((float)local_158 < DAT_1808ac34c) {
        local_158 = _DAT_1808ad2c0;
        uStack_150 = _UNK_1808ad2c8;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        local_130 = local_130 & 0xffff000000000000;
        uStack_128._0_4_ = 0x3f800000;
        FUN_1802aed00(&DAT_1809ef9a4,&local_e0,&local_f0,&local_120,*(undefined8 *)(param_2 + 0x34),
                      0x1c1003,4,7,&local_158,0);
        if ((float)local_158 == DAT_1808ac34c) {
          fVar10 = local_158._4_4_;
          fVar25 = (float)uStack_150;
          fVar27 = uStack_150._4_4_;
        }
        else if (fVar28 < fVar16 + DAT_1808ac9fc) {
          return;
        }
      }
      local_e8 = local_e8 - (float)local_res18;
      local_108 = fVar29 * DAT_1808ac1d4 + fVar27;
      local_158 = _DAT_1808ad2c0;
      uStack_150 = _UNK_1808ad2c8;
      local_148 = 0;
      uStack_140 = 0;
      local_f8 = fVar27 - DAT_1808acc3c;
      local_138 = 0;
      local_130 = local_130 & 0xffff000000000000;
      uStack_128 = CONCAT44(uStack_128._4_4_,0x3f800000);
      local_110 = fVar10;
      local_10c = fVar25;
      local_100 = fVar10;
      local_fc = fVar25;
      FUN_1802aed00(&local_110,&local_100,&local_f0,&local_120,*(undefined8 *)(param_2 + 0x34),
                    0x1c1003,4,7,&local_158,0);
      _DAT_1809ef9b0 = DAT_1809ef9a4;
      pfVar12 = (float *)((longlong)&local_158 + 4);
      if (local_130._5_1_ != '\0') {
        pfVar12 = param_2;
      }
      _DAT_1809ef9b4 = DAT_1809ef9a8;
      _DAT_1809ef9b8 = DAT_1809ef9ac;
      _DAT_1809ef9a4 = *(undefined8 *)pfVar12;
      DAT_1809ef9ac = pfVar12[2];
      plVar11 = (longlong *)FUN_1800ad890(&local_res18);
      _DAT_1809ef9dc = CONCAT44(DAT_1809ef9e0,0xffffffff);
      DAT_1809ef9a0 = 0;
      DAT_1809ef9a2 = 0;
      _DAT_1809ef9c0 = (double)*plVar11 / dVar6;
      DAT_1809ef9c8 = -NAN;
      DAT_1809ef9d0 = 0;
      return;
    }
    fVar16 = param_2[0x25];
    _DAT_1809ef9dc = CONCAT44(DAT_1809ef9e0,fVar16);
    DAT_1809ef9d0 = uVar18;
    DAT_1809ef9c8 = fVar25;
  }
  fVar27 = DAT_1808ac918;
  if (DAT_1809ef9d8 <= (int)fVar25 - (int)DAT_1809ef9c8) {
    uVar18 = DAT_1809ef9d0 & ((uint)local_res18 & 0x618);
  }
  if (((~uVar18 & local_res18 & 0x618) == 0) || ((DAT_18095cdd4 == '\0' && (DAT_1809ef9d8 != 0)))) {
    DAT_1809ef9d0 = uVar18;
    if (DAT_1809ef9a2 == '\0') {
      bVar21 = bVar21 & 1;
      if ((DAT_1808ac918 <= fVar28) || (bVar21 == 0)) {
        *(undefined8 *)(param_1 + 0xc) = 0x3f800000;
        fVar16 = (float)FUN_180516b00(DAT_1809ef9a8 - param_2[1],DAT_1809ef9a4 - *param_2);
        lVar19 = local_148;
        uVar8 = _UNK_1808ad2c8;
        uVar7 = _DAT_1808ad2c0;
        uVar18 = 1;
        *(float *)(param_1 + 0x1c) = fVar16 * DAT_1808aca98;
        if ((fVar28 < fVar10) && (bVar21 != 0)) {
          bVar23 = false;
          uVar5 = (ulonglong)local_148 >> 0x28;
          local_148._0_7_ = (uint7)(uint3)uVar5 << 0x28;
          local_148._7_1_ = SUB81(lVar19,7);
          local_158 = uVar7;
          uStack_150 = uVar8;
          uStack_140 = _DAT_1808ad8f0;
          local_138 = _UNK_1808ad8f8;
          local_130 = _DAT_1808ad540;
          uStack_128 = _UNK_1808ad548;
          FUN_1801f3660(&local_158,param_2);
          fVar25 = DAT_1808acc44;
          fVar16 = DAT_1808ac00c;
          local_138 = CONCAT44(0x3c800000,(float)local_138);
          uStack_150 = CONCAT44(uStack_150._4_4_,uStack_150._4_4_);
          if ((float)local_148 <= 0.0) {
            fVar10 = uStack_150._4_4_;
          }
          else {
            fVar10 = DAT_1808ac34c - (float)local_148 / DAT_1808acb08;
            if (fVar10 <= DAT_1808ac34c) {
              if (fVar10 <= 0.0) {
                fVar10 = 0.0;
              }
            }
            else {
              fVar10 = DAT_1808ac34c;
            }
            fVar24 = (float)local_148 - param_2[0x1a] * DAT_1808ac00c;
            fVar10 = fVar10 * fVar10 * uStack_150._4_4_;
            uStack_150 = CONCAT44(uStack_150._4_4_,fVar10);
            local_148 = CONCAT44(local_148._4_4_,fVar24);
            if (fVar24 < 0.0) {
              local_148 = (ulonglong)(uint)local_148._4_4_ << 0x20;
            }
          }
          if (local_148._4_1_ != '\0') {
            uStack_150 = CONCAT44(uStack_150._4_4_,
                                  (((float)uStack_140 * DAT_1808ac16c + DAT_1808ac34c) -
                                  (float)uStack_140) * fVar10);
          }
          fVar24 = *param_2;
          iVar9 = 0;
          fVar26 = param_2[1];
          *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
          fVar29 = DAT_1809ef9a8;
          fVar1 = DAT_1809ef9a4;
          do {
            if (bVar23) goto LAB_1801f56f6;
            FUN_1801f3850(&local_158,param_1);
            lVar22 = DAT_180ceb0f0;
            fVar10 = DAT_1808acc70;
            fVar24 = fVar24 + uStack_140._4_4_ * fVar16;
            fVar26 = fVar26 + (float)local_138 * fVar16;
            bVar3 = (fVar26 - fVar29) * (fVar26 - fVar29) + (fVar24 - fVar1) * (fVar24 - fVar1) <
                    fVar27;
            bVar4 = (float)local_138 * (float)local_138 + uStack_140._4_4_ * uStack_140._4_4_ <
                    fVar25;
            bVar23 = bVar3 && bVar4;
            iVar9 = iVar9 + 1;
          } while (iVar9 < 8);
          if (bVar3 && bVar4) goto LAB_1801f56f6;
          *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
        }
        if (DAT_1808acc0c <= fVar28) {
          if (bVar21 != 0) {
            fVar16 = *param_2;
            fVar25 = param_2[1];
            local_110 = DAT_1809ef9a4 - fVar16;
            local_10c = DAT_1809ef9a8 - fVar25;
            local_108 = 0.0;
            pfVar12 = (float *)FUN_1801f3080(&local_100,&local_110);
            local_108 = param_2[0x1d] + 0.0;
            puVar20 = &DAT_18060c098;
            fVar27 = pfVar12[2];
            fVar24 = *pfVar12;
            fVar26 = pfVar12[1];
            local_100 = fVar16 + fVar24;
            local_148 = 0;
            uStack_140 = 0;
            if (*(char *)(param_2 + 0x11) != '\0') {
              puVar20 = &DAT_18060c088;
            }
            local_f8 = fVar27 + param_2[2];
            local_fc = fVar25 + fVar26;
            local_110 = -16.0;
            local_10c = -16.0;
            local_158 = uVar7;
            uStack_150 = uVar8;
            local_138 = 0;
            local_130 = local_130 & 0xffff000000000000;
            uStack_128 = CONCAT44(uStack_128._4_4_,0x3f800000);
            FUN_1802aed00(param_2,&local_100,&local_110,puVar20,*(undefined8 *)(param_2 + 0x34),
                          0x1c1003,4,7,&local_158,0);
            if (((float)local_158 < DAT_1808ac34c) &&
               ((float)((uint)(float)uStack_140 & _DAT_1808ade90) < param_2[0x1f])) {
              if (fVar26 * local_148._4_4_ + fVar24 * (float)local_148 + fVar27 * (float)uStack_140
                  < DAT_1808acd90) {
                DAT_1809ef9a0 = 0;
                DAT_1809ef9a2 = 0;
                DAT_1809ef9c8 = -NAN;
                DAT_1809ef9d0 = 0;
                _DAT_1809ef9dc = 0xffffffffffffffff;
                return;
              }
            }
            lVar22 = DAT_180ceb0f0;
          }
          if (fVar28 <= fVar10) {
            return;
          }
          if (DAT_18095cdd0 == 0) {
            return;
          }
          if ((DAT_18095cdd0 != 1) && (bVar21 != 0)) {
            if (DAT_1808acc38 < param_2[4] * param_2[4] + param_2[3] * param_2[3]) {
              return;
            }
            do {
              lVar19 = lVar22 - uVar18;
              if (lVar19 < 0) break;
              lVar14 = lVar19 % 0x96;
              lVar2 = *(longlong *)(&DAT_1809eeb20 + lVar14 * 0x18);
              puVar13 = (undefined *)0x0;
              if (lVar2 == lVar19) {
                puVar13 = &DAT_1809eeb20 + lVar14 * 0x18;
              }
              if (puVar13 == (undefined *)0x0) break;
              pfVar12 = (float *)&DAT_00000008;
              if (lVar2 == lVar19) {
                pfVar12 = (float *)(&DAT_1809eeb28 + lVar14 * 0x18);
              }
              pfVar15 = (float *)&DAT_0000000c;
              if (lVar2 == lVar19) {
                pfVar15 = (float *)(&DAT_1809eeb2c + lVar14 * 0x18);
              }
              if (DAT_1808acc38 < *pfVar15 * *pfVar15 + *pfVar12 * *pfVar12) {
                return;
              }
              uVar17 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar17;
            } while ((int)uVar17 < 0x11);
          }
          DAT_180ceb268 = DAT_180ceb268 & 0xfffffffffffffffb;
          *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffb | 2;
          return;
        }
        if ((fVar28 < DAT_1808acb98) && (bVar21 == 0)) {
          *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
          DAT_180cc412e = 1;
        }
LAB_1801f56f6:
        *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffd;
        DAT_180ceb268 = DAT_180ceb268 & 0xfffffffffffffffd;
        return;
      }
      iVar9 = 1;
      if (1 < (int)fVar25 - (int)DAT_1809ef9c8) {
        iVar9 = (int)fVar25 - (int)DAT_1809ef9c8;
      }
      fVar10 = (float)(int)(param_2[0x26] * DAT_1808acab0 + DAT_1808ac1f4);
      fVar16 = param_2[0x27];
      if ((int)param_2[0x27] <= (int)fVar10) {
        fVar16 = fVar10;
      }
      if (0x80 < iVar9) {
        iVar9 = 0x80;
      }
      DAT_1809ef9a2 = '\x01';
      fVar16 = (float)((int)fVar16 + ((-(uint)(*(char *)(param_2 + 10) != '\0') & 4) - iVar9) + 7);
      fVar10 = fVar25;
      if ((int)fVar25 < (int)fVar16) {
        fVar10 = fVar16;
      }
      fVar28 = (float)((int)fVar25 + 0x80);
      if ((int)fVar16 <= (int)fVar25 + 0x80) {
        fVar28 = fVar10;
      }
      _DAT_1809ef9dc = CONCAT44(fVar28,DAT_1809ef9dc);
    }
    else {
      if (fVar16 != param_2[0x25]) {
        _DAT_1809ef9dc = CONCAT44(0xffffffff,DAT_1809ef9dc);
      }
      fVar28 = DAT_1809ef9e0;
    }
    if ((int)fVar25 < (int)fVar28) {
      DAT_180cc45b4 = 1;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffff9e5;
      DAT_180ceb268 = DAT_180ceb268 & 0xfffffffffffff9e5;
      return;
    }
  }
  _DAT_1809ef9dc = 0xffffffffffffffff;
  DAT_1809ef9d0 = 0;
  DAT_1809ef9c8 = -NAN;
  DAT_1809ef9a2 = 0;
  DAT_1809ef9a0 = 0;
  return;
}



/* ===== 1801f5790 FUN_1801f5790 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f5790(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  char local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  if (DAT_180920dc9 != '\0') {
    cVar3 = FUN_18026b8a0();
    fVar11 = DAT_1808acb90;
    if (((cVar3 == '\0') && ((*(byte *)(param_2 + 0x18) & 1) != 0)) &&
       (*(longlong *)(param_2 + 0xb8) != 0)) {
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      if (((uVar1 | DAT_180ceb268) & 2) == 0) {
        if ((uVar1 & 4) != 0) {
          return;
        }
      }
      else {
        if ((uVar1 & 4) != 0) {
          return;
        }
        if (DAT_180cc412c != ((byte)uVar1 & 4)) {
          return;
        }
      }
      piVar7 = local_f8;
      DAT_180ceb268 = DAT_180ceb268 & 0xfffffffffffeffff;
      *(ulonglong *)(param_1 + 0x28) = uVar1 & 0xfffffffffffeffff;
      if (0x18 < DAT_180920dcc) {
        piVar7 = &DAT_180920dcc;
      }
      local_f8[1] = 0x96;
      local_f8[0] = 0x19;
      piVar4 = local_f8 + 1;
      if (DAT_180920dcc < 0x97) {
        piVar4 = piVar7;
      }
      iVar6 = *piVar4;
      if ((*(longlong *)(param_2 + 0xb8) == 0) || (DAT_1809619bc == 0)) {
        fVar8 = fVar11;
      }
      else {
        uVar5 = *(uint *)(param_2 + 0xa4);
        if (1 < uVar5) {
          uVar5 = 0;
        }
        fVar8 = (float)FUN_18000f3d0((longlong)(int)(uVar5 << 2) + *(longlong *)(param_2 + 0xb8) +
                                     (ulonglong)DAT_1809619bc);
      }
      fVar16 = DAT_1808acb08;
      fVar12 = DAT_1808ac16c;
      local_e0 = 0.0;
      local_dc = '\0';
      local_f0 = _DAT_1808ad2c0;
      uStack_e8 = _UNK_1808ad2c8;
      fVar18 = fVar8 * DAT_1808ac16c * DAT_1808ac31c * ((float)iVar6 / DAT_1808acb08);
      local_d8 = _DAT_1808ad8f0;
      uStack_d0 = _UNK_1808ad8f8;
      local_c8 = _DAT_1808ad540;
      uStack_c0 = _UNK_1808ad548;
      FUN_1801f3660(&local_f0,param_2);
      fVar2 = DAT_1808ac34c;
      fVar8 = DAT_1808ac00c;
      uStack_d0 = CONCAT44(0x3c800000,(float)uStack_d0);
      uStack_e8._0_4_ = uStack_e8._4_4_;
      if (0.0 < local_e0) {
        fVar13 = DAT_1808ac34c - local_e0 / fVar16;
        if (fVar13 <= DAT_1808ac34c) {
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
        }
        else {
          fVar13 = DAT_1808ac34c;
        }
        local_e0 = local_e0 - *(float *)(param_2 + 0x68) * DAT_1808ac00c;
        uStack_e8._0_4_ = fVar13 * fVar13 * uStack_e8._4_4_;
        if (local_e0 < 0.0) {
          local_e0 = 0.0;
        }
      }
      if (local_dc != '\0') {
        uStack_e8._0_4_ =
             (((float)local_d8 * fVar12 + DAT_1808ac34c) - (float)local_d8) * (float)uStack_e8;
      }
      FUN_1801f3850(&local_f0,param_1);
      if (fVar18 * fVar18 <= (float)uStack_d0 * (float)uStack_d0 + local_d8._4_4_ * local_d8._4_4_)
      {
        if ((*(float *)(param_1 + 0xc) != 0.0) || (*(float *)(param_1 + 0x10) != 0.0)) {
          FUN_1801f3660(&local_f0,param_2);
          fVar13 = uStack_e8._4_4_;
          if (0.0 < local_e0) {
            fVar16 = fVar2 - local_e0 / fVar16;
            if (fVar16 <= fVar2) {
              if (fVar16 <= 0.0) {
                fVar16 = 0.0;
              }
            }
            else {
              fVar16 = fVar2;
            }
            fVar13 = fVar16 * fVar16 * uStack_e8._4_4_;
          }
          if (local_dc != '\0') {
            fVar13 = fVar13 * (((float)local_d8 * fVar12 + fVar2) - (float)local_d8);
          }
          fVar12 = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                   *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc);
          if (fVar12 < 0.0) {
            fVar12 = (float)FUN_18051af10();
          }
          else {
            fVar12 = SQRT(fVar12);
          }
          fVar16 = fVar2;
          if (fVar12 <= fVar2) {
            fVar16 = fVar12;
          }
          fVar16 = fVar16 * fVar13;
          fVar12 = (float)uStack_d0 * (float)uStack_d0 + local_d8._4_4_ * local_d8._4_4_;
          if (fVar12 < 0.0) {
            fVar12 = (float)FUN_18051af10();
          }
          else {
            fVar12 = SQRT(fVar12);
          }
          if (fVar11 <= fVar16) {
            fVar11 = fVar16;
          }
          fVar13 = local_c8._4_4_;
          if (local_c8._4_4_ <= fVar12) {
            fVar13 = fVar12;
          }
          iVar6 = 1;
          fVar17 = fVar11 * (float)uStack_c0 * local_f0._4_4_;
          fVar11 = DAT_1808acd08;
          do {
            fVar15 = (float)iVar6 * fVar8 * fVar8;
            if (fVar12 < DAT_1808ac0c0) {
              fVar14 = fVar12;
            }
            else {
              fVar9 = fVar12 - fVar15 * fVar13 * (float)local_c8;
              fVar14 = 0.0;
              if (0.0 <= fVar9) {
                fVar14 = fVar9;
              }
              fVar14 = (fVar14 / fVar12) * fVar12;
            }
            fVar9 = fVar16 - fVar14;
            if ((0.0 < fVar9) && (0.0 < fVar17)) {
              fVar15 = fVar15 * fVar17;
              if (fVar15 <= fVar9) {
                fVar9 = fVar15;
              }
              fVar14 = fVar9 + fVar14;
            }
            fVar15 = (fVar2 - (float)iVar6 * fVar8) * fVar8;
            if (DAT_1808ac0c0 <= fVar14) {
              fVar9 = local_c8._4_4_;
              if (local_c8._4_4_ <= fVar14) {
                fVar9 = fVar14;
              }
              fVar10 = fVar14 - fVar9 * fVar15 * (float)local_c8;
              fVar9 = 0.0;
              if (0.0 <= fVar10) {
                fVar9 = fVar10;
              }
              fVar14 = fVar14 * (fVar9 / fVar14);
            }
            fVar9 = fVar14 + fVar16;
            if ((0.0 < fVar9) && (0.0 < fVar17)) {
              fVar15 = fVar15 * fVar17;
              if (fVar15 <= fVar9) {
                fVar9 = fVar15;
              }
              fVar14 = fVar14 - fVar9;
            }
            fVar15 = (float)((uint)(fVar14 - fVar18) & _DAT_1808ade90);
            if (fVar15 < fVar11) {
              fVar11 = fVar15;
            }
            fVar14 = (float)(iVar6 + 1) * fVar8;
            fVar15 = fVar14 * fVar8;
            if (fVar12 < DAT_1808ac0c0) {
              fVar9 = fVar12;
            }
            else {
              fVar10 = fVar12 - fVar15 * fVar13 * (float)local_c8;
              fVar9 = 0.0;
              if (0.0 <= fVar10) {
                fVar9 = fVar10;
              }
              fVar9 = (fVar9 / fVar12) * fVar12;
            }
            fVar10 = fVar16 - fVar9;
            if ((0.0 < fVar10) && (0.0 < fVar17)) {
              fVar15 = fVar15 * fVar17;
              if (fVar15 <= fVar10) {
                fVar10 = fVar15;
              }
              fVar9 = fVar10 + fVar9;
            }
            fVar15 = (fVar2 - fVar14) * fVar8;
            if (DAT_1808ac0c0 <= fVar9) {
              fVar14 = local_c8._4_4_;
              if (local_c8._4_4_ <= fVar9) {
                fVar14 = fVar9;
              }
              fVar10 = fVar9 - fVar14 * fVar15 * (float)local_c8;
              fVar14 = 0.0;
              if (0.0 <= fVar10) {
                fVar14 = fVar10;
              }
              fVar9 = fVar9 * (fVar14 / fVar9);
            }
            fVar14 = fVar9 + fVar16;
            if ((0.0 < fVar14) && (0.0 < fVar17)) {
              fVar15 = fVar15 * fVar17;
              if (fVar15 <= fVar14) {
                fVar14 = fVar15;
              }
              fVar9 = fVar9 - fVar14;
            }
            fVar15 = (float)((uint)(fVar9 - fVar18) & _DAT_1808ade90);
            if (fVar15 < fVar11) {
              fVar11 = fVar15;
            }
            fVar14 = (float)(iVar6 + 2) * fVar8;
            fVar15 = fVar14 * fVar8;
            if (fVar12 < DAT_1808ac0c0) {
              fVar9 = fVar12;
            }
            else {
              fVar10 = fVar12 - fVar15 * fVar13 * (float)local_c8;
              fVar9 = 0.0;
              if (0.0 <= fVar10) {
                fVar9 = fVar10;
              }
              fVar9 = (fVar9 / fVar12) * fVar12;
            }
            fVar10 = fVar16 - fVar9;
            if ((0.0 < fVar10) && (0.0 < fVar17)) {
              fVar15 = fVar15 * fVar17;
              if (fVar15 <= fVar10) {
                fVar10 = fVar15;
              }
              fVar9 = fVar10 + fVar9;
            }
            fVar15 = (fVar2 - fVar14) * fVar8;
            if (DAT_1808ac0c0 <= fVar9) {
              fVar14 = local_c8._4_4_;
              if (local_c8._4_4_ <= fVar9) {
                fVar14 = fVar9;
              }
              fVar10 = fVar9 - fVar14 * fVar15 * (float)local_c8;
              fVar14 = 0.0;
              if (0.0 <= fVar10) {
                fVar14 = fVar10;
              }
              fVar9 = fVar9 * (fVar14 / fVar9);
            }
            fVar14 = fVar9 + fVar16;
            if ((0.0 < fVar14) && (0.0 < fVar17)) {
              fVar15 = fVar15 * fVar17;
              if (fVar15 <= fVar14) {
                fVar14 = fVar15;
              }
              fVar9 = fVar9 - fVar14;
            }
            fVar15 = (float)((uint)(fVar9 - fVar18) & _DAT_1808ade90);
            if (fVar15 < fVar11) {
              fVar11 = fVar15;
            }
            iVar6 = iVar6 + 3;
          } while (iVar6 < 0x40);
          if (fVar11 < fVar2) {
            FUN_1801f33a0(param_1);
            FUN_1801f33a0(param_1);
            return;
          }
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        fVar11 = (float)FUN_180516b00();
        fVar11 = fVar11 * DAT_1808aca98;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(float *)(param_1 + 0x1c) = fVar11;
      }
    }
  }
  return;
}



/* ===== 1801f5f90 FUN_1801f5f90 ===== */

void FUN_1801f5f90(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  ulonglong uVar7;
  char cVar8;
  undefined8 *puVar9;
  char *pcVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar26;
  undefined8 in_stack_ffffffffffffff68;
  
  cVar8 = DAT_180cc45b5;
  fVar23 = DAT_1808accf4;
  uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if (DAT_180920ce8 == '\0') {
    return;
  }
  if ((DAT_180cc412d != '\0') && (DAT_1809efcda != '\0')) {
    return;
  }
  if ((((*(float *)(param_2 + 200) != 0.0) &&
       (fVar22 = *(float *)(param_2 + 200) * DAT_1808ac710 + DAT_1808ac34c, DAT_1808acea8 < fVar22))
      && (fVar22 < DAT_1808accf4)) && (2 < (int)fVar22)) {
    return;
  }
  if ((DAT_180cc45b5 == '\0') && (DAT_180cc3f98 != '\0')) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  puVar18 = *(undefined8 **)(param_1 + 0x38);
  lVar12 = (longlong)puVar1 - (longlong)puVar18;
  if (puVar18 != puVar1) {
    do {
      if ((*(byte *)(puVar18 + 1) & 2) != 0) break;
      puVar18 = puVar18 + 9;
    } while (puVar18 != puVar1);
    if (puVar18 != puVar1) {
      puVar9 = puVar18 + 9;
      if (puVar9 != puVar1) {
        do {
          if ((*(byte *)(puVar9 + 1) & 2) == 0) {
            uVar5 = puVar9[1];
            *puVar18 = *puVar9;
            puVar18[1] = uVar5;
            uVar5 = puVar9[3];
            puVar18[2] = puVar9[2];
            puVar18[3] = uVar5;
            uVar5 = puVar9[5];
            puVar18[4] = puVar9[4];
            puVar18[5] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar9 + 0x34);
            uVar3 = *(undefined4 *)(puVar9 + 7);
            uVar4 = *(undefined4 *)((longlong)puVar9 + 0x3c);
            *(undefined4 *)(puVar18 + 6) = *(undefined4 *)(puVar9 + 6);
            *(undefined4 *)((longlong)puVar18 + 0x34) = uVar2;
            *(undefined4 *)(puVar18 + 7) = uVar3;
            *(undefined4 *)((longlong)puVar18 + 0x3c) = uVar4;
            puVar18[8] = puVar9[8];
            puVar18 = puVar18 + 9;
          }
          puVar9 = puVar9 + 9;
        } while (puVar9 != puVar1);
        if (puVar18 == puVar1) goto LAB_1801f612a;
      }
      lVar14 = *(longlong *)(param_1 + 0x40) - (longlong)puVar1;
      FUN_180540530(puVar18,puVar1,lVar14);
      *(longlong *)(param_1 + 0x40) = lVar14 + (longlong)puVar18;
    }
  }
LAB_1801f612a:
  uVar7 = DAT_180ceb268;
  uVar5 = DAT_180ceb0f0;
  lVar14 = *(longlong *)(param_1 + 0x40);
  lVar15 = *(longlong *)(param_1 + 0x38);
  uVar19 = *(ulonglong *)(param_1 + 0x28);
  iVar11 = (int)(lVar12 >> 3) * 0x38e38e39 + (int)(lVar14 - lVar15 >> 3) * -0x38e38e39;
  fVar22 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10) +
           *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc);
  uVar20 = ((uint)uVar19 | (uint)DAT_180ceb268) & 2;
  if (fVar22 < 0.0) {
    fVar22 = (float)FUN_18051af10();
  }
  else {
    fVar22 = SQRT(fVar22);
  }
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    if (DAT_180cc412c == '\0') {
      DAT_180ceb268 = uVar7 & 0xfffffffffffffffd;
      *(ulonglong *)(param_1 + 0x28) = uVar19 & 0xfffffffffffffffd;
      if (uVar20 == 0) {
        return;
      }
      if (cVar8 != '\0') {
        return;
      }
      if (DAT_180ceb260 < 0x5dc) {
        DAT_180ceb260 = DAT_180ceb260 + 1;
        FUN_1801ec960("bhop | cmd %lld | ground, jump not executable (freeze / defuse / hostage / held last tick): released | erased %d"
                      ,uVar5,iVar11);
        return;
      }
      return;
    }
    if (uVar20 == 0) {
      return;
    }
    DAT_180ceb268 = uVar7 | 2;
    bVar21 = DAT_180cc45b6 != '\0';
    *(ulonglong *)(param_1 + 0x28) = uVar19 & 0xfffffffffffffffd;
    if (bVar21) {
      FUN_180273880();
      if (DAT_180cfb2b8 == (code *)0x0) {
        uVar20 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
        uVar20 = uVar20 >> 0x11 ^ uVar20;
        DAT_1809f3584 = uVar20 << 5 ^ uVar20;
        fVar23 = ((float)(DAT_1809f3584 & 0xffff) * DAT_1808ac118) / DAT_1808accac + 0.0;
      }
      else {
        fVar23 = (float)(*DAT_180cfb2b8)();
      }
      fVar23 = (fVar23 + DAT_1808accc8) - DAT_1808accc8;
      FUN_1801f35a0(param_1,fVar23,2,1);
      FUN_1801f35a0(param_1,fVar23,2,0);
      if (DAT_180cc45b5 != '\0') {
        return;
      }
      if (DAT_180ceb260 < 0x5dc) {
        DAT_180ceb260 = DAT_180ceb260 + 1;
        FUN_1801ec960("bhop | cmd %lld | ground press when held | valve: press + release at %.4f | speed %.1f | erased %d"
                      ,uVar5,(double)fVar23,(double)fVar22,CONCAT44(uVar26,iVar11));
        return;
      }
      return;
    }
    for (; lVar15 != lVar14; lVar15 = lVar15 + 0x48) {
      if (*(longlong *)(lVar15 + 8) == 2) goto LAB_1801f6370;
    }
    FUN_1801f35a0(param_1,0,2,1);
    cVar8 = DAT_180cc45b5;
LAB_1801f6370:
    if (cVar8 != '\0') {
      return;
    }
    if (DAT_180ceb260 < 0x5dc) {
      DAT_180ceb260 = DAT_180ceb260 + 1;
      FUN_1801ec960("bhop | cmd %lld | ground press when held | press at 0 | speed %.1f | erased %d"
                    ,uVar5,(double)fVar22,iVar11);
      return;
    }
    return;
  }
  if (uVar20 == 0) {
    return;
  }
  DAT_180ceb268 = uVar7 & 0xfffffffffffffffd;
  bVar21 = DAT_180cc412d == '\0';
  *(ulonglong *)(param_1 + 0x28) = uVar19 & 0xfffffffffffffffd;
  fVar6 = DAT_1809efce0;
  if (bVar21) {
    if (cVar8 != '\0') {
      return;
    }
    if (DAT_180ceb260 < 0x5dc) {
      DAT_180ceb260 = DAT_180ceb260 + 1;
      FUN_1801ec960("bhop | cmd %lld | air: no snapshot state: released",uVar5);
      return;
    }
    return;
  }
  if (DAT_1809efcdc != '\0') {
    if (cVar8 != '\0') {
      return;
    }
    if (DAT_180ceb260 < 0x5dc) {
      DAT_180ceb260 = DAT_180ceb260 + 1;
      FUN_1801ec960("bhop | cmd %lld | air: sv_legacy_jump 1: released (hop on the next ground tick)"
                    ,uVar5);
      return;
    }
    return;
  }
  if (DAT_1808ac00c <= DAT_1809efce0) {
    if (cVar8 != '\0') {
      return;
    }
    if (DAT_180ceb260 < 0x5dc) {
      DAT_180ceb260 = DAT_180ceb260 + 1;
      FUN_1801ec960("bhop | cmd %lld | air: sv_bhop_time_window %.5f >= 1/64: released (hop on the next ground tick)"
                    ,uVar5,(double)DAT_1809efce0);
      return;
    }
    return;
  }
  FUN_1801f35a0(param_1,0,2,1);
  uVar19 = DAT_180ceb268 | 2;
  DAT_180ceb268 = uVar19;
  fVar24 = (float)FUN_18053ef70(DAT_1808ac040 / fVar6);
  fVar25 = DAT_1808accc8;
  uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if ((fVar24 <= DAT_1808acea8) || (fVar23 <= fVar24)) {
    iVar13 = -0x80000000;
    DAT_180ceb270 = DAT_180ceb268;
    iVar17 = 0;
  }
  else {
    iVar13 = (int)fVar24;
    iVar17 = 0;
    lVar12 = (*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) *
             -0x71c71c71c71c71c7 + -1;
    iVar16 = iVar13;
    DAT_180ceb270 = uVar19;
    if (0 < iVar13) {
      do {
        iVar16 = iVar16 + -1;
        *(float *)(*(longlong *)(param_1 + 0x38) + lVar12 * 0x48) =
             ((float)iVar16 / (float)iVar13 + fVar25) - fVar25;
        cVar8 = FUN_1801f3bb0(param_1,0x35);
        uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
        if (cVar8 == '\0') {
          pcVar10 = "no simulator";
          goto LAB_1801f66f1;
        }
        if ((DAT_1809f045d == '\x01') && (DAT_1809f045c == '\x01')) {
          fVar23 = *(float *)(*(longlong *)(param_1 + 0x38) + lVar12 * 0x48);
          if (DAT_180cc45b6 != '\0') {
            FUN_1801f35a0(param_1,fVar23,2,0);
          }
          cVar8 = DAT_180cc45b6;
          if (DAT_180cc45b5 != '\0') {
            return;
          }
          if (0x5db < DAT_180ceb260) {
            return;
          }
          DAT_180ceb260 = DAT_180ceb260 + 1;
          fVar25 = DAT_1809f01e0 * DAT_1809f01e0 + DAT_1809f01dc * DAT_1809f01dc;
          if (fVar25 < 0.0) {
            fVar25 = (float)FUN_18051af10();
          }
          else {
            fVar25 = SQRT(fVar25);
          }
          pcVar10 = "";
          if (cVar8 != '\0') {
            pcVar10 = " + valve release at the same when";
          }
          FUN_1801ec960("bhop | cmd %lld | air candidate %d/%d accepted (when %.4f, jumped + landing speed kept)%s | window %.5f | vz %.1f speed %.1f -> %.1f | erased %d"
                        ,uVar5,iVar16,iVar13,(double)fVar23,pcVar10,(double)fVar6,
                        (double)*(float *)(param_2 + 0x14),(double)fVar22,(double)fVar25,iVar11);
          return;
        }
        iVar17 = iVar17 + 1;
        if (DAT_1809f0458 == '\0') {
          pcVar10 = "candidate does not land this tick";
          goto LAB_1801f66f1;
        }
      } while (0 < iVar16);
      if (0 < iVar17) {
        pcVar10 = "every candidate landed without a kept-speed jump";
        goto LAB_1801f66f1;
      }
    }
  }
  pcVar10 = "n <= 0";
LAB_1801f66f1:
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -0x48;
  *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffd;
  DAT_180ceb268 = DAT_180ceb268 & 0xfffffffffffffffd;
  if ((DAT_180cc45b5 == '\0') && (DAT_180ceb260 < 0x5dc)) {
    DAT_180ceb260 = DAT_180ceb260 + 1;
    FUN_1801ec960("bhop | cmd %lld | air candidate none (%d of %d tried, %s): step removed, released | window %.5f | vz %.1f speed %.1f | erased %d"
                  ,uVar5,iVar17,iVar13,pcVar10,(double)fVar6,(double)*(float *)(param_2 + 0x14),
                  (double)fVar22,CONCAT44(uVar26,iVar11));
  }
  return;
}



/* ===== 1801f67e0 FUN_1801f67e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f67e0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  char local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  fVar8 = DAT_1808ac34c;
  if ((DAT_180920dc6 != '\0') || (DAT_180cc45b4 != '\0')) {
    fVar6 = *(float *)(param_1 + 0xc);
    fVar9 = *(float *)(param_1 + 0x10);
    pfVar2 = (float *)0x0;
    if (DAT_180cc45b6 != '\0') {
      for (pfVar1 = *(float **)(param_1 + 0x38); pfVar1 != *(float **)(param_1 + 0x40);
          pfVar1 = pfVar1 + 0x12) {
        if ((*(longlong *)(pfVar1 + 2) == 0) && (*(char *)(pfVar1 + 0x10) != '\0')) {
          fVar6 = pfVar1[0xd];
          fVar9 = pfVar1[0xe];
          pfVar2 = pfVar1;
          break;
        }
      }
    }
    if ((fVar6 == 0.0) && (fVar9 == 0.0)) {
      if (pfVar2 == (float *)0x0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = *pfVar2;
        if (DAT_1808ac34c <= fVar6) {
          return;
        }
      }
      if (((*(uint *)(param_2 + 0x18) & DAT_180ceb254 & 1) != 0) &&
         ((((DAT_180ceb268 | *(ulonglong *)(param_1 + 0x28)) & 2) == 0 || (DAT_180cc412c == '\0'))))
      {
        local_a8 = _DAT_1808ad2c0;
        uStack_a0 = _UNK_1808ad2c8;
        local_90 = _DAT_1808ad8f0;
        uStack_88 = _UNK_1808ad8f8;
        local_98 = 0.0;
        local_94 = '\0';
        local_80 = _DAT_1808ad540;
        uStack_78 = _UNK_1808ad548;
        FUN_1801f3660(&local_a8);
        fVar9 = (fVar8 - fVar6) * DAT_1808ac00c;
        fVar6 = uStack_a0._4_4_;
        if (0.0 < local_98) {
          fVar6 = fVar8 - local_98 / DAT_1808acb08;
          if (fVar6 <= fVar8) {
            if (fVar6 <= 0.0) {
              fVar6 = 0.0;
            }
          }
          else {
            fVar6 = fVar8;
          }
          fVar6 = fVar6 * fVar6 * uStack_a0._4_4_;
        }
        if (local_94 != '\0') {
          fVar6 = fVar6 * (((float)local_90 * DAT_1808ac16c + fVar8) - (float)local_90);
        }
        fVar7 = (float)uStack_88;
        fVar8 = local_90._4_4_;
        fVar4 = (float)uStack_88 * (float)uStack_88 + local_90._4_4_ * local_90._4_4_;
        if (fVar4 < 0.0) {
          fVar4 = (float)FUN_18051af10();
        }
        else {
          fVar4 = SQRT(fVar4);
        }
        if (fVar4 < DAT_1808ac0c0) {
          fVar4 = fVar4 * fVar4;
        }
        else {
          fVar5 = local_80._4_4_;
          if (local_80._4_4_ <= fVar4) {
            fVar5 = fVar4;
          }
          fVar3 = fVar4 - fVar5 * fVar9 * (float)local_80;
          fVar5 = 0.0;
          if (0.0 <= fVar3) {
            fVar5 = fVar3;
          }
          fVar8 = fVar8 * (fVar5 / fVar4);
          fVar7 = fVar7 * (fVar5 / fVar4);
          fVar4 = fVar7 * fVar7 + fVar8 * fVar8;
        }
        if (DAT_1808ac0c0 < fVar4) {
          fVar8 = DAT_1808acb90;
          if (DAT_1808acb90 <= fVar6) {
            fVar8 = fVar6;
          }
          fVar9 = fVar8 * local_a8._4_4_ * fVar9;
          if (fVar9 <= fVar6) {
            fVar6 = fVar9;
          }
          if (fVar4 < 0.0) {
            fVar4 = (float)FUN_18051af10();
          }
          else {
            fVar4 = SQRT(fVar4);
          }
          fVar8 = (float)FUN_180516b00();
          fVar8 = fVar8 * DAT_1808aca98;
          if (fVar6 < fVar4) {
            if (pfVar2 == (float *)0x0) {
              *(float *)(param_1 + 0x1c) = fVar8;
              *(undefined4 *)(param_1 + 0x18) = 0;
              *(undefined4 *)(param_1 + 0x20) = 0;
              *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
              *(undefined4 *)(param_1 + 0x10) = 0;
            }
            else {
              pfVar2[6] = fVar8;
              pfVar2[5] = 0.0;
              pfVar2[7] = 0.0;
              *(undefined1 *)(pfVar2 + 8) = 1;
              pfVar2[0xd] = -1.0;
              pfVar2[0xe] = 0.0;
              pfVar2[0xf] = 0.0;
              *(undefined1 *)(pfVar2 + 0x10) = 1;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x18) = 0;
            *(float *)(param_1 + 0x1c) = fVar8;
            *(undefined4 *)(param_1 + 0x20) = 0;
            FUN_1801f3490(param_1);
            FUN_1801f33a0(param_1);
          }
        }
      }
    }
  }
  return;
}



/* ===== 1801f6bb0 FUN_1801f6bb0 ===== */

void FUN_1801f6bb0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res10;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  
  lVar10 = *(longlong *)(param_1 + 0x38);
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (lVar10 != lVar7) {
    do {
      if ((*(longlong *)(lVar10 + 8) == 0) && (*(char *)(lVar10 + 0x40) != '\0')) {
        if ((*(char *)(lVar10 + 0x30) != '\0') || (*(char *)(lVar10 + 0x20) != '\0')) {
          *(undefined1 *)(lVar10 + 0x40) = 0;
          goto LAB_1801f6c46;
        }
        FUN_180540530(lVar10,lVar10 + 0x48,lVar7 - (lVar10 + 0x48));
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -0x48;
      }
      else {
LAB_1801f6c46:
        lVar10 = lVar10 + 0x48;
      }
      lVar7 = *(longlong *)(param_1 + 0x40);
    } while (lVar10 != lVar7);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  fVar15 = DAT_1808acb90;
  fVar5 = DAT_1808ac34c;
  fVar13 = *(float *)(param_2 + 0x4c);
  if (*(char *)(param_2 + 0x45) == '\0') {
    bVar9 = (byte)(*(uint *)(param_2 + 0x18) >> 1) & 1;
  }
  else {
    bVar9 = 1;
  }
  fVar1 = *(float *)(param_2 + 0x40);
  fVar16 = *(float *)(param_2 + 0x80);
  fVar2 = *(float *)(param_2 + 0x48);
  fVar18 = *(float *)(param_2 + 0xc);
  fVar17 = *(float *)(param_2 + 0x10);
  fVar14 = *(float *)(param_2 + 0x2c);
  fVar12 = *(float *)(param_2 + 0x88);
  fVar3 = *(float *)(param_2 + 0x84);
  fVar4 = *(float *)(param_2 + 0x20);
  local_res10 = DAT_1808ac34c;
  if ((*(char *)(param_2 + 0x91) != '\0') && (*(longlong *)(param_2 + 0xb8) != 0)) {
    if (DAT_1809619bc == 0) {
      fVar11 = DAT_1808acb90;
    }
    else {
      uVar8 = *(uint *)(param_2 + 0xa4);
      if (1 < uVar8) {
        uVar8 = 0;
      }
      fVar11 = (float)FUN_18000f3d0((longlong)(int)(uVar8 << 2) + *(longlong *)(param_2 + 0xb8) +
                                    (ulonglong)DAT_1809619bc);
    }
    if ((((DAT_180ceb3b8 != 0) &&
         (iVar6 = FUN_180011200((ulonglong)DAT_180ceb3b8 + *(longlong *)(param_2 + 0xb8)), 1 < iVar6
         )) && (fVar11 * DAT_1808ac200 < DAT_1808acb0c)) || (bVar9 == 0)) {
      local_res10 = fVar5;
      if (fVar11 / fVar15 <= fVar5) {
        local_res10 = fVar11 / fVar15;
      }
    }
  }
  if (0.0 < fVar13) {
    fVar13 = fVar5 - fVar13 / DAT_1808acb08;
    if (fVar13 <= fVar5) {
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar14 = fVar13 * fVar13 * fVar14;
    }
    else {
      fVar14 = fVar5 * fVar5 * fVar14;
    }
  }
  if (bVar9 != 0) {
    fVar14 = fVar14 * ((fVar2 * DAT_1808ac16c + fVar5) - fVar2);
  }
  fVar13 = fVar17 * fVar17 + fVar18 * fVar18;
  if (fVar13 < 0.0) {
    fVar13 = (float)FUN_18051af10(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  fVar2 = DAT_1808ac0c0;
  fVar5 = DAT_1808ac00c;
  if (DAT_1808ac0c0 <= fVar13) {
    if (fVar12 <= fVar13) {
      fVar12 = fVar13;
    }
    fVar12 = fVar13 - fVar12 * DAT_1808ac00c * fVar16 * fVar1 * fVar4;
    fVar16 = 0.0;
    if (0.0 <= fVar12) {
      fVar16 = fVar12;
    }
    fVar17 = (fVar16 / fVar13) * fVar17;
    fVar18 = (fVar16 / fVar13) * fVar18;
    fVar13 = fVar17 * fVar17 + fVar18 * fVar18;
    if (fVar13 < 0.0) {
      fVar13 = (float)FUN_18051af10(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
  }
  if (fVar2 < fVar13 * fVar13) {
    if (fVar15 <= fVar14) {
      fVar15 = fVar14;
    }
    fVar15 = fVar15 * fVar3 * fVar1 * local_res10 * fVar5;
    if (fVar15 <= fVar14) {
      fVar14 = fVar15;
    }
    local_dc = (float)FUN_180516b00(fVar17,fVar18);
    fVar15 = DAT_1808abf8c;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    local_dc = local_dc * DAT_1808aca98;
    *(float *)(param_1 + 0x1c) = local_dc;
    if ((fVar14 <= fVar15) || (fVar14 < fVar13)) {
      *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
    }
    else {
      local_e0 = 0;
      local_d8 = 0;
      FUN_1801f3490(param_1,0,&local_e0,DAT_1808acda0,0,0,0);
      fVar15 = (fVar13 / fVar14 + DAT_1808accc8) - DAT_1808accc8;
      if (fVar15 < fVar13 / fVar14) {
        fVar15 = fVar15 + fVar5;
      }
      FUN_1801f33a0(param_1,fVar15,0,0,0);
    }
  }
  return;
}



/* ===== 1801f7000 FUN_1801f7000 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801f7000(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  byte local_298;
  longlong local_290;
  undefined1 local_288 [240];
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined2 local_174;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160 [3];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  local_290 = param_2;
  cVar5 = FUN_1801f3bb0();
  fVar3 = DAT_1808ac0c0;
  if (cVar5 == '\0') {
    return 1;
  }
  local_298 = *(byte *)(param_2 + 0x18) & 1;
  iVar11 = 0x18;
  iVar8 = 0;
  iVar10 = 0;
  bVar2 = false;
  local_198 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160[0] = 0;
  local_160[1] = 0;
  local_160[2] = 0;
  uVar9 = 0;
  do {
    uVar4 = DAT_1809f0238;
    if (bVar2) {
      if (((uVar9 & 1) != 0) && ((DAT_1809f0238 & 1) == 0)) goto LAB_1801f72cd;
      iVar11 = iVar11 + -1;
      if (iVar11 == 0) {
LAB_1801f72d1:
        uVar7 = 1;
LAB_1801f72d3:
        FUN_180200b70(local_160);
        return uVar7;
      }
    }
    else {
      if ((local_298 != 0) && ((DAT_1809f0238 & 1) == 0)) {
LAB_1801f72cd:
        uVar7 = 0;
        goto LAB_1801f72d3;
      }
      bVar2 = true;
    }
    if ((DAT_1809f0238 & 1) == 0) {
      if (0xf < iVar10) goto LAB_1801f72d1;
      iVar10 = iVar10 + 1;
    }
    else {
      if ((DAT_1809f01dc * DAT_1809f01dc + DAT_1809f01e0 * DAT_1809f01e0 <= fVar3) || (7 < iVar8))
      goto LAB_1801f72d1;
      iVar8 = iVar8 + 1;
    }
    local_198 = *param_1;
    uStack_190 = (undefined4)param_1[1];
    uStack_18c = (undefined4)((ulonglong)param_1[1] >> 0x20);
    uStack_180 = param_1[3];
    uStack_188 = (undefined4)param_1[2];
    uStack_184 = (undefined4)((ulonglong)param_1[2] >> 0x20);
    local_178 = *(undefined4 *)(param_1 + 4);
    local_174 = *(undefined2 *)((longlong)param_1 + 0x24);
    local_170 = param_1[5];
    local_168 = param_1[6];
    if (local_160 != param_1 + 7) {
      lVar1 = param_1[7];
      FUN_1802009d0(local_160,lVar1,(param_1[8] - lVar1 >> 3) * -0x71c71c71c71c71c7);
    }
    puVar6 = (undefined4 *)FUN_1801f3d10(local_288,&DAT_1809f01d0,local_290);
    local_148 = *puVar6;
    uStack_144 = puVar6[1];
    uStack_140 = puVar6[2];
    uStack_13c = puVar6[3];
    local_138 = *(undefined8 *)(puVar6 + 4);
    uStack_130 = *(undefined8 *)(puVar6 + 6);
    local_128 = *(undefined8 *)(puVar6 + 8);
    uStack_120 = *(undefined8 *)(puVar6 + 10);
    local_118 = *(undefined8 *)(puVar6 + 0xc);
    uStack_110 = *(undefined8 *)(puVar6 + 0xe);
    local_108 = *(undefined8 *)(puVar6 + 0x10);
    uStack_100 = *(undefined8 *)(puVar6 + 0x12);
    local_f8 = *(undefined8 *)(puVar6 + 0x14);
    uStack_f0 = *(undefined8 *)(puVar6 + 0x16);
    local_e8 = *(undefined8 *)(puVar6 + 0x18);
    uStack_e0 = *(undefined8 *)(puVar6 + 0x1a);
    local_d8 = *(undefined8 *)(puVar6 + 0x1c);
    uStack_d0 = *(undefined8 *)(puVar6 + 0x1e);
    local_c8 = *(undefined8 *)(puVar6 + 0x20);
    uStack_c0 = *(undefined8 *)(puVar6 + 0x22);
    local_b8 = *(undefined8 *)(puVar6 + 0x24);
    uStack_b0 = *(undefined8 *)(puVar6 + 0x26);
    local_a8 = *(undefined8 *)(puVar6 + 0x28);
    uStack_a0 = *(undefined8 *)(puVar6 + 0x2a);
    local_98 = *(undefined8 *)(puVar6 + 0x2c);
    uStack_90 = *(undefined8 *)(puVar6 + 0x2e);
    local_88 = *(undefined8 *)(puVar6 + 0x30);
    uStack_80 = *(undefined8 *)(puVar6 + 0x32);
    local_78 = puVar6[0x34];
    uStack_74 = puVar6[0x35];
    uStack_70 = puVar6[0x36];
    uStack_6c = puVar6[0x37];
    local_68 = puVar6[0x38];
    uStack_64 = puVar6[0x39];
    uStack_60 = puVar6[0x3a];
    uStack_5c = puVar6[0x3b];
    FUN_1801f6bb0(&local_198,&local_148);
    local_2a8 = 0;
    uVar7 = FUN_18045a7d0(&local_148,&local_198,DAT_180ceb270,(undefined4)DAT_180ceb370);
    FUN_18045ad20(&DAT_1809f01d0,uVar7);
    FUN_180011610(&uStack_f0);
    FUN_180200b70(&local_108);
    uVar9 = uVar4;
  } while( true );
}



/* ===== 1801f7330 FUN_1801f7330 ===== */

undefined4 * FUN_1801f7330(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  if (param_1 != param_2) {
    FUN_1802009d0(param_1 + 0xe,*(longlong *)(param_2 + 0xe),
                  (*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 0xe) >> 3) *
                  -0x71c71c71c71c71c7);
  }
  return param_1;
}



