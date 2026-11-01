/* ===== 180432130 FUN_180432130 ===== */

uint FUN_180432130(longlong param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = FUN_18000f3a0(param_1 + 0x10);
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_180011200(lVar3 + 0x10);
  sVar1 = FUN_180011200(lVar3 + 0x30);
  uVar4 = uVar2 - (ushort)(sVar1 << 0xf);
  return (uVar4 ^ uVar2) & 0x7fff ^ uVar4;
}



/* ===== 180432190 FUN_180432190 ===== */

bool FUN_180432190(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x20) != -1) {
    lVar3 = FUN_1804320a0();
    if ((lVar3 != 0) && (param_2 != lVar3)) {
      uVar4 = (ulonglong)DAT_180c3acd0;
      if (param_2 == 0) {
        if (DAT_180c3acd0 != 0) {
          cVar1 = FUN_180011220(uVar4 + lVar3);
          return cVar1 != '\0';
        }
      }
      else if (DAT_180c3acd0 != 0) {
        cVar1 = FUN_180011220(uVar4 + param_2);
        cVar2 = FUN_180011220(uVar4 + lVar3);
        return cVar1 != cVar2;
      }
      return false;
    }
  }
  return false;
}



/* ===== 180432250 FUN_180432250 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180432250(undefined8 *param_1,char param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined **ppuVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  
  uVar3 = DAT_180c3acbc;
  uVar11 = (ulonglong)DAT_180c3acbc;
  ppuVar9 = &PTR_FUN_180c3ad00;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar8 = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = 0xc3001;
  uVar2 = _UNK_1808adf98;
  uVar1 = _DAT_1808adf90;
  if (param_2 != '\0') {
    ppuVar9 = &PTR_FUN_180c3ad10;
  }
  *param_1 = ppuVar9;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x32) = 0xffff0000;
  if (param_3 == 0) {
LAB_180432360:
    *(undefined2 *)(param_1 + 6) = 0;
    if (param_3 == 0) goto LAB_1804323c5;
  }
  else {
    lVar10 = FUN_18000f3a0(param_3 + 0x10);
    if (lVar10 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar6 = FUN_180011200(lVar10 + 0x10);
      sVar4 = FUN_180011200(lVar10 + 0x30);
      uVar12 = uVar6 - (ushort)(sVar4 << 0xf);
      uVar12 = (uVar12 ^ uVar6) & 0x7fff ^ uVar12;
    }
    *(uint *)(param_1 + 4) = uVar12;
    if (uVar3 == 0) {
      *(undefined2 *)(param_1 + 6) = 0;
    }
    else {
      lVar10 = FUN_18000f3a0(uVar11 + param_3);
      if ((lVar10 == 0) || (DAT_180c3acc0 == 0)) goto LAB_180432360;
      uVar5 = FUN_180011440((ulonglong)DAT_180c3acc0 + lVar10 + (ulonglong)DAT_180c3acc4);
      *(undefined2 *)(param_1 + 6) = uVar5;
    }
  }
  if (((uVar3 != 0) && (lVar10 = FUN_18000f3a0(uVar11 + param_3), lVar10 != 0)) &&
     ((DAT_180c3acc8 == 0 ||
      (uVar11 = FUN_180011220((ulonglong)DAT_180c3acc8 + lVar10), (uVar11 & 4) == 0)))) {
    if (DAT_180c3accc == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_180011200((ulonglong)DAT_180c3accc + param_3);
      if (iVar7 == -1) goto LAB_1804323c5;
    }
    lVar10 = FUN_1804320a0(iVar7);
    if (lVar10 != 0) {
      uVar8 = FUN_180432130(lVar10);
    }
  }
LAB_1804323c5:
  *(undefined4 *)(param_1 + 5) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x36) = 0x4b040f00;
  *(char *)(param_1 + 8) = param_2;
  return;
}



/* ===== 1804323f0 FUN_1804323f0 ===== */

void FUN_1804323f0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_48;
  undefined4 local_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = DAT_180c3aca4;
  uVar4 = (ulonglong)DAT_180c3aca4;
  if ((param_2 != 0) && (DAT_180c3aca4 != 0)) {
    lVar2 = FUN_18000f3a0(param_2 + uVar4);
    if (lVar2 != 0) {
      if (DAT_180c3aca8 == 0) {
        local_48 = 0;
        local_40 = 0;
      }
      else {
        FUN_1800111b0(&local_48,(ulonglong)DAT_180c3aca8 + lVar2);
      }
      *param_1 = local_48;
      *(undefined4 *)(param_1 + 1) = local_40;
      if (DAT_180c3acac == 0) {
        local_48 = 0;
        local_40 = 0;
      }
      else {
        FUN_1800111b0(&local_48,(ulonglong)DAT_180c3acac + lVar2);
      }
      *(undefined8 *)((longlong)param_1 + 0x24) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_40;
    }
  }
  if (DAT_180c3acb0 == 0) goto LAB_180432542;
  lVar2 = (ulonglong)DAT_180c3acb0 + param_2;
  if ((lVar2 == 0) || (DAT_180c3acb4 == 0)) {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    if (lVar2 != 0) goto LAB_18043250c;
LAB_180432526:
    local_48 = 0;
    local_40 = 0;
  }
  else {
    FUN_1800111b0(&local_48,(ulonglong)DAT_180c3acb4 + lVar2);
    *(undefined8 *)((longlong)param_1 + 0xc) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_40;
LAB_18043250c:
    if (DAT_180c3acb8 == 0) goto LAB_180432526;
    FUN_1800111b0(&local_48,(ulonglong)DAT_180c3acb8 + lVar2);
  }
  param_1[3] = local_48;
  *(undefined4 *)(param_1 + 4) = local_40;
LAB_180432542:
  if ((param_2 != 0) && (uVar1 != 0)) {
    lVar2 = FUN_18000f3a0(param_2 + uVar4);
    if (lVar2 != 0) {
      lVar2 = FUN_180047bf0(lVar2);
      if (lVar2 != 0) {
        uVar3 = FUN_18000f3a0(lVar2 + 0x440);
        param_1[6] = uVar3;
        return;
      }
    }
  }
  param_1[6] = 0;
  return;
}



/* ===== 1804325a0 FUN_1804325a0 ===== */

void FUN_1804325a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*DAT_1811118f8)(param_2,param_3,param_4);
  return;
}



/* ===== 1804325d0 FUN_1804325d0 ===== */

void FUN_1804325d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  longlong in_RCX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  char *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  if (DAT_180cd1b2e == '\0') {
    DAT_180cd1b2e = '\x01';
    pHVar2 = GetModuleHandleA("client.dll");
    param_1 = extraout_XMM0_Da;
    if (pHVar2 != (HMODULE)0x0) {
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      pvVar3 = GetCurrentProcess();
      iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_28,0x18);
      param_1 = extraout_XMM0_Da_00;
      if (((iVar1 != 0) && (uStack_20 = uStack_20 & 0xffffffff, local_28 != 0)) && (uStack_20 != 0))
      {
        local_30 = 0x3e;
        local_38 = "40 53 48 83 EC 30 F2 0F 10 02 48 8B D9 F3 0F 10 49 40 0F 2E C1";
        DAT_1811118f8 = FUN_1801d1e00(&local_28,&local_38);
        param_1 = extraout_XMM0_Da_01;
        goto LAB_1804326ac;
      }
    }
    DAT_1811118f8 = 0;
  }
LAB_1804326ac:
  if (((DAT_1811118f8 != 0) && (DAT_180c3acb0 != 0)) && (in_RCX != 0)) {
    FUN_1804325a0(param_1,in_RCX + (ulonglong)DAT_180c3acb0,param_2,param_3);
  }
  return;
}



/* ===== 1804326e0 FUN_1804326e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804326e0(float *param_1,longlong param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
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
  longlong local_res10 [2];
  ulonglong local_res20;
  
  fVar2 = DAT_1808ac34c;
  if (DAT_1811119e0 != DAT_1811119e8) {
    DAT_1811119e8 = DAT_1811119e0;
  }
  if (*(int *)(param_2 + 0xf10) != 0) {
    uVar6 = 0;
    lVar7 = 0;
    iVar8 = 0;
    local_res10[0] = 0;
    local_res20 = 0;
    if (0 < *(int *)(param_2 + 0xf10)) {
      do {
        uVar3 = *(int *)(param_2 + 0xf14) + iVar8 & 0x8000000f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
        }
        uVar3 = uVar3 + 0x10 & 0x8000000f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
        }
        lVar9 = (longlong)(int)uVar3 * 0xe8;
        fVar18 = *(float *)(param_2 + 0xa4 + lVar9);
        fVar19 = *(float *)(param_2 + 0xa8 + lVar9);
        fVar16 = fVar18 - *param_1;
        fVar17 = fVar19 - param_1[1];
        fVar15 = fVar17 * fVar17 + fVar16 * fVar16;
        if (fVar15 < 0.0) {
          fVar10 = (float)FUN_18051af10();
        }
        else {
          fVar10 = SQRT(fVar15);
        }
        if (fVar15 == 0.0) {
          fVar17 = 0.0;
          fVar16 = 0.0;
        }
        else {
          fVar16 = (fVar2 / fVar10) * fVar16;
          fVar17 = (fVar2 / fVar10) * fVar17;
        }
        fVar10 = (float)FUN_180517200(*(float *)(param_2 + 0xd4 + lVar9) * DAT_1808ac014);
        fVar11 = (float)FUN_180517790();
        fVar12 = (float)FUN_180517200();
        fVar14 = DAT_180c8a800._4_4_ + *(float *)(param_2 + 0x94 + lVar9);
        fVar15 = (float)((int)DAT_180c8a800 + *(int *)(param_2 + 0x90 + lVar9));
        bVar1 = fVar2 <= fVar14;
        if (bVar1) {
          fVar14 = fVar14 - fVar2;
        }
        fVar19 = fVar19 - param_3[1];
        fVar18 = fVar18 - *param_3;
        fVar13 = *(float *)(param_2 + 0xac + lVar9) - param_3[2];
        fVar5 = (float)((int)fVar15 + 1);
        if (!bVar1) {
          fVar5 = fVar15;
        }
        fVar18 = fVar19 * fVar19 + fVar18 * fVar18 + fVar13 * fVar13;
        if (fVar18 <= _DAT_1808acca8) {
          fVar19 = 0.0 - _DAT_180c8a80c;
          iVar4 = (int)param_3[3] - _DAT_180c8a808;
          if (fVar19 < 0.0) {
            fVar19 = fVar19 + fVar2;
            if (fVar19 < fVar2) {
              iVar4 = iVar4 + -1;
            }
            else {
              fVar19 = 0.0;
            }
          }
          fVar19 = fVar19 - fVar14;
          iVar4 = iVar4 - (int)fVar5;
          if (fVar19 < 0.0) {
            fVar19 = fVar19 + fVar2;
            if (fVar19 < fVar2) {
              iVar4 = iVar4 + -1;
            }
            else {
              fVar19 = 0.0;
            }
          }
          if ((int)((float)((uint)(fVar19 * DAT_1808ac00c + (float)iVar4 * DAT_1808ac00c) &
                           _DAT_1808ade90) * DAT_1808acc3c) < 0xc9) {
            local_res20 = local_res20 & 0xffffffff00000000;
            fVar15 = (float)FUN_180512fd0(DAT_180c8a7fc * DAT_1808acab0,&local_res20);
            fVar19 = (float)local_res20;
            if (fVar15 < 0.0) {
              fVar15 = fVar15 + fVar2;
              if (fVar15 < fVar2) {
                fVar19 = (float)local_res20 + DAT_1808acda0;
              }
              else {
                fVar15 = 0.0;
              }
            }
            fVar13 = param_3[3];
            fVar15 = 0.0 - fVar15;
            fVar19 = (float)((int)fVar13 - (int)fVar19);
            if (fVar15 < 0.0) {
              fVar15 = fVar15 + fVar2;
              if (fVar15 < fVar2) {
                fVar19 = (float)((int)fVar19 + -1);
              }
              else {
                fVar15 = 0.0;
              }
            }
            if (((int)fVar19 <= (int)fVar5) &&
               ((((fVar19 != fVar5 || (fVar15 <= fVar14)) && ((int)fVar5 <= (int)fVar13)) &&
                ((fVar13 != fVar5 || (fVar14 <= 0.0)))))) {
              if (fVar11 * fVar10 * fVar17 + fVar12 * fVar10 * fVar16 <= DAT_1808ac1d8) {
                if ((uVar6 == 0) ||
                   (fVar16 = *(float *)(uVar6 + 0x18) - param_3[1],
                   fVar15 = *(float *)(uVar6 + 0x14) - *param_3,
                   fVar19 = *(float *)(uVar6 + 0x1c) - param_3[2],
                   fVar18 < fVar16 * fVar16 + fVar15 * fVar15 + fVar19 * fVar19)) {
                  uVar6 = lVar9 + param_2 + 0x90;
                }
              }
              else if ((lVar7 == 0) ||
                      (fVar16 = *(float *)(lVar7 + 0x18) - param_3[1],
                      fVar15 = *(float *)(lVar7 + 0x14) - *param_3,
                      fVar19 = *(float *)(lVar7 + 0x1c) - param_3[2],
                      fVar18 < fVar16 * fVar16 + fVar15 * fVar15 + fVar19 * fVar19)) {
                lVar7 = lVar9 + param_2 + 0x90;
              }
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_2 + 0xf10));
      local_res10[0] = lVar7;
      local_res20 = uVar6;
      if (uVar6 != 0) {
        FUN_1800cd6b0(&DAT_1811119e0,&local_res20);
      }
      if (lVar7 != 0) {
        FUN_1800cd6b0(&DAT_1811119e0,local_res10);
      }
    }
  }
  return;
}



/* ===== 180432bf0 FUN_180432bf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180432bf0(longlong param_1,longlong param_2,longlong param_3,float *param_4,uint param_5)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  undefined1 auStack_4c8 [32];
  undefined8 *local_4a8;
  undefined8 *local_4a0;
  bool local_498;
  float local_494;
  int local_490;
  int local_48c;
  float local_488;
  float local_484;
  int local_480;
  int local_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_468;
  float local_460;
  longlong local_458;
  float local_450;
  float local_44c;
  float local_448;
  longlong local_440;
  longlong local_438;
  undefined8 local_428;
  longlong lStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
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
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [12];
  float fStack_35c;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined8 local_328;
  longlong lStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [12];
  float fStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined2 uStack_270;
  undefined1 uStack_26e;
  char cStack_26d;
  undefined4 uStack_26c;
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
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
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
  float fStack_120;
  int iStack_11c;
  undefined1 local_118;
  undefined1 uStack_117;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong lStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_4c8;
  lVar14 = *(longlong *)(param_2 + 8);
  local_458 = param_2;
  local_440 = param_3;
  local_438 = lVar14;
  if ((lVar14 == 0) || (DAT_180c3acd8 == 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_180011200(lVar14 + (ulonglong)DAT_180c3acd8);
  }
  fVar23 = DAT_1808aca54;
  fVar1 = DAT_1808ac00c;
  fVar21 = (float)(*(int *)(param_1 + 0x23c) - *(int *)(param_1 + 0x434)) * DAT_1808ac00c;
  cVar6 = FUN_180474850(param_1 + 0xe0,0,*(undefined1 *)(param_1 + 8));
  fVar22 = DAT_1808ac988;
  fVar28 = DAT_1808ac1b0;
  local_494 = 0.0;
  fVar25 = fVar23;
  if ((cVar6 != '\0') && (*(char *)(param_1 + 8) != '\0')) {
    if ((*(longlong *)(param_1 + 0x890) == 0) || (DAT_180c3acdc == 0)) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = (float)FUN_18000f3d0(*(longlong *)(param_1 + 0x890) + (ulonglong)DAT_180c3acdc);
    }
    if ((float)((*(int *)(param_1 + 0x23c) - (int)(fVar16 * DAT_1808acab0 + DAT_1808ac1f4)) -
               *(int *)(param_1 + 0x434)) * fVar1 <= fVar28) {
      fVar25 = fVar22;
    }
  }
  fVar1 = DAT_1808ac34c;
  if (fVar21 <= fVar28) {
    fVar23 = fVar22;
  }
  if (iVar7 < 1) {
    fVar28 = DAT_1808ac34c;
  }
  else {
    fVar28 = DAT_1808ac2ac;
  }
  fVar21 = *(float *)(param_3 + 0x14) - *(float *)(param_1 + 0xe0);
  fVar16 = *(float *)(param_3 + 0x18) - *(float *)(param_1 + 0xe4);
  fVar22 = fVar16 * fVar16 + fVar21 * fVar21;
  local_484 = fVar28;
  if (fVar22 < 0.0) {
    fVar17 = (float)FUN_18051af10();
  }
  else {
    fVar17 = SQRT(fVar22);
  }
  if (fVar22 == 0.0) {
    fVar16 = 0.0;
    fVar21 = 0.0;
  }
  else {
    fVar21 = (fVar1 / fVar17) * fVar21;
    fVar16 = (fVar1 / fVar17) * fVar16;
  }
  fVar22 = (float)FUN_180517200(*(float *)(param_3 + 0x44) * DAT_1808ac014);
  fVar17 = (float)FUN_180517790();
  fVar18 = (float)FUN_180517200();
  fVar1 = DAT_1808acaf4;
  fVar19 = fVar28 * DAT_1808acaf4;
  fVar22 = fVar17 * fVar22 * fVar16 + fVar18 * fVar22 * fVar21;
  local_460 = fVar22;
  if ((lVar14 == 0) || (DAT_180c3acd4 == 0)) {
    local_48c = 0;
  }
  else {
    local_48c = FUN_180011200(lVar14 + (ulonglong)DAT_180c3acd4);
  }
  fVar21 = DAT_1808ac1d8;
  piVar8 = *(int **)(param_1 + 0x1ed0);
  if (piVar8 != *(int **)(param_1 + 0x1ed8)) {
    do {
      if (*piVar8 == *(int *)(local_458 + 0x10)) {
        local_48c = (int)((float)local_48c - (float)piVar8[2]);
      }
      piVar8 = piVar8 + 3;
    } while (piVar8 != *(int **)(param_1 + 0x1ed8));
  }
  iVar7 = local_48c;
  local_480 = (int)(fVar28 * DAT_1808acab4);
  local_47c = (int)(fVar28 * fVar23);
  if (DAT_1808ac1d8 < fVar22) {
    local_47c = (int)fVar19;
  }
  local_498 = *(char *)(param_1 + 0x73) == '\0';
  if ((*(char *)(param_1 + 0x73) != '\0') && (*(char *)(param_1 + 0x74) != '\0')) {
    cVar6 = FUN_180474850(param_1 + 0xe0,param_5,*(undefined1 *)(param_1 + 8));
    if ((cVar6 == '\0') || (*(char *)(param_1 + 8) == '\0')) {
      if ((iVar7 <= (int)(fVar28 * fVar23)) ||
         (((iVar7 <= (int)fVar19 && (fVar21 < fVar22)) ||
          ((local_480 < iVar7 && (fVar22 <= fVar21)))))) {
        local_498 = false;
      }
      else {
        local_498 = true;
      }
    }
    else {
      if (fVar22 <= fVar21) {
        fVar1 = fVar25;
      }
      local_498 = (float)(int)(fVar1 * fVar28) < (float)iVar7 - (float)local_47c;
    }
  }
  if (local_498 != param_5) {
    return;
  }
  if (local_498 == false) {
    local_488 = DAT_1808acab8;
  }
  else {
    local_488 = DAT_1808aca80;
  }
  iVar7 = (int)(*(float *)(param_3 + 0x58) * DAT_1808ac838);
  if (0x1b < iVar7) {
    return;
  }
  lVar14 = *(longlong *)(param_1 + 0x228);
  iVar7 = 0x1c - iVar7;
  local_128 = 0;
  fStack_120 = 0.0;
  local_490 = 1;
  if (1 < iVar7) {
    local_490 = iVar7;
  }
  iStack_11c = 0;
  local_118 = 0;
  uStack_117 = 0;
  uStack_116 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  if (0x1c < local_490) {
    local_490 = 0x1c;
  }
  bVar15 = false;
  uVar13 = 0;
  if (local_490 < 1) {
    return;
  }
  do {
    fVar16 = 0.0;
    fVar1 = param_4[1];
    fVar28 = param_4[2];
    fVar17 = *(float *)(param_3 + 0x18) - fVar1;
    fVar22 = *param_4;
    fVar21 = *(float *)(param_3 + 0x14) - fVar22;
    fVar25 = ((float)((int)uVar13 * 2) + DAT_1808ac918 + *(float *)(param_3 + 0x1c)) - fVar28;
    fVar23 = fVar17 * fVar17 + fVar25 * fVar25 + fVar21 * fVar21;
    if (fVar23 < 0.0) {
      fVar18 = (float)FUN_18051af10();
    }
    else {
      fVar18 = SQRT(fVar23);
    }
    if ((fVar18 < DAT_1808abf54) || (DAT_1808accfc < fVar18)) {
      fVar19 = fVar16;
      fVar18 = fVar16;
      if (fVar23 != _DAT_1808abf44) {
        dVar24 = (double)fVar21;
        dVar2 = (double)fVar17;
        dVar27 = (double)fVar25;
        dVar20 = dVar24 * dVar24 + dVar2 * dVar2 + dVar27 * dVar27;
        if (dVar20 < 0.0) {
          dVar20 = (double)FUN_18051ff20();
        }
        else {
          dVar20 = SQRT(dVar20);
        }
        dVar20 = DAT_1808ac500 / dVar20;
        fVar16 = (float)(dVar24 * dVar20);
        fVar19 = (float)(dVar2 * dVar20);
        fVar18 = (float)(dVar27 * dVar20);
      }
    }
    else {
      fVar18 = DAT_1808ac34c / fVar18;
      fVar16 = fVar21 * fVar18;
      fVar19 = fVar17 * fVar18;
      fVar18 = fVar25 * fVar18;
    }
    fVar23 = DAT_1808ac34c;
    if ((*(float *)(param_1 + 0xc) <= DAT_1808acda0) ||
       (*(float *)(param_1 + 0xc) <=
        fVar19 * *(float *)(param_1 + 0x9c) + fVar18 * *(float *)(param_1 + 0xa0) +
        fVar16 * *(float *)(param_1 + 0x98))) {
      local_478 = fVar16 * local_488 + fVar22;
      local_474 = fVar19 * local_488 + fVar1;
      local_208 = ZEXT816(0);
      local_470 = fVar18 * local_488 + fVar28;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_1f8 = local_208;
      local_1e8 = local_208;
      local_1d8 = local_208;
      local_1c8 = local_208;
      local_1b8 = local_208;
      FUN_180432250(local_208,1,lVar14);
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      FUN_180540170(&local_428,0,0xc0);
      auVar5 = local_378;
      auVar3 = _DAT_1808adae0;
      local_3f8 = _DAT_1808adae0;
      local_3e8 = _DAT_1808adae0;
      local_388._12_4_ = 0x3f800000;
      local_378._4_4_ = 0xffffffff;
      local_378._10_6_ = auVar5._10_6_;
      local_378._8_2_ = 0xffff;
      if ((DAT_180961f48 != 0) && ((DAT_180961f40 != 0 && (lVar9 = FUN_18000f3a0(), lVar9 != 0)))) {
        local_4a0 = &local_428;
        local_4a8 = (undefined8 *)local_208;
        FUN_180044180(lVar9,&local_1a8,param_4,&local_478);
      }
      FUN_180432250(&local_268,0,lVar14);
      if ((((fVar23 <= (float)local_388._12_4_) && (local_378[0xb] == '\0')) || (lStack_420 == 0))
         || (lVar14 == 0)) {
LAB_180433362:
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        FUN_180540170(&local_428,0,0xc0);
        auVar5 = local_378;
        local_3f8 = auVar3;
        local_3e8 = auVar3;
        local_388._12_4_ = 0x3f800000;
        local_378._4_4_ = 0xffffffff;
        local_378._10_6_ = auVar5._10_6_;
        local_378._8_2_ = 0xffff;
        if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) && (lVar9 = FUN_18000f3a0(), lVar9 != 0))
        {
          local_4a0 = &local_428;
          local_4a8 = &local_268;
          FUN_180044180(lVar9,&local_168,param_4,&local_478);
        }
      }
      else {
        lVar9 = FUN_18000f3a0(lVar14);
        lVar10 = FUN_18000f3a0();
        if (lVar10 != lVar9) goto LAB_180433362;
      }
      if (local_378[0xb] == '\0') {
        if (fVar23 <= (float)local_388._12_4_) {
          iVar7 = 0x11;
          do {
            iVar7 = iVar7 + -3;
            local_468 = (float)iVar7;
            local_450 = local_478 - local_468 * fVar16;
            local_44c = local_474 - local_468 * fVar19;
            local_448 = local_470 - local_468 * fVar18;
            local_358 = ZEXT816(0);
            local_368 = local_358._0_12_;
            fStack_35c = local_468;
            local_348._0_9_ = (unkuint9)1 << 0x40;
            local_348._9_7_ = 0;
            local_338 = local_358;
            FUN_180540170(&local_328,0,0xc0);
            local_2f8 = auVar3;
            local_2e8 = auVar3;
            fStack_27c = 1.0;
            uStack_274 = 0xffffffff;
            uStack_270 = 0xffff;
            if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) &&
               (lVar9 = FUN_18000f3a0(), lVar9 != 0)) {
              local_4a0 = &local_328;
              local_4a8 = &local_268;
              FUN_180044180(lVar9,local_368,param_4,&local_450);
            }
            if ((fVar23 <= fStack_27c) && (cStack_26d == '\0')) break;
            local_428 = local_328;
            lStack_420 = lStack_320;
            local_418 = local_318;
            uStack_410 = uStack_310;
            local_408 = local_308;
            uStack_400 = uStack_300;
            local_3f8 = local_2f8;
            local_3e8 = local_2e8;
            local_3d8 = local_2d8;
            uStack_3d0 = uStack_2d0;
            local_3c8 = local_2c8;
            uStack_3c0 = uStack_2c0;
            local_3b8 = local_2b8;
            uStack_3b0 = uStack_2b0;
            local_3a8 = local_2a8;
            uStack_3a0 = uStack_2a0;
            local_388._12_4_ = fStack_27c;
            local_388._0_12_ = local_288;
            local_398 = local_298;
            uStack_390 = uStack_290;
            local_378._4_4_ = uStack_274;
            local_378._0_4_ = local_278;
            local_378._8_2_ = uStack_270;
            local_378[10] = uStack_26e;
            local_378[0xb] = cStack_26d;
            local_378._12_4_ = uStack_26c;
          } while (3 < iVar7);
          param_3 = local_440;
          goto LAB_1804335d0;
        }
LAB_1804335da:
        if (lStack_420 != local_438) goto LAB_1804335e8;
        cVar6 = '\x01';
      }
      else {
LAB_1804335d0:
        if (((float)local_388._12_4_ < fVar23) || (local_378[0xb] != '\0')) goto LAB_1804335da;
LAB_1804335e8:
        cVar6 = '\0';
      }
      *(char *)((longlong)&local_128 + uVar13) = cVar6;
      bVar15 = cVar6 != '\0' || bVar15;
    }
    fVar1 = DAT_1808acd08;
    uVar12 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar12;
  } while ((int)uVar12 < local_490);
  if (!bVar15) {
    return;
  }
  iVar11 = 0;
  fVar28 = 0.0;
  fVar23 = 0.0;
  fVar25 = 0.0;
  iVar7 = local_490;
  fVar22 = DAT_1808ac918;
  fVar21 = DAT_1808acd08;
  if (3 < local_490) {
    iVar7 = local_490 + -3;
    do {
      fVar22 = DAT_1808ac918;
      lVar14 = (longlong)iVar11;
      if (*(char *)((longlong)&local_128 + lVar14) != '\0') {
        fVar16 = *(float *)(param_3 + 0x18);
        fVar17 = *(float *)(param_3 + 0x14);
        fVar18 = fVar16 - param_4[1];
        fVar26 = (float)(iVar11 * 2) + DAT_1808ac918 + *(float *)(param_3 + 0x1c);
        fVar19 = fVar26 - param_4[2];
        fVar18 = fVar19 * fVar19 + fVar18 * fVar18 + (fVar17 - *param_4) * (fVar17 - *param_4);
        if (fVar18 < 0.0) {
          fVar18 = (float)FUN_18051af10();
          fVar28 = local_494;
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        if (fVar18 < fVar21) {
          fVar23 = fVar16;
          fVar25 = fVar26;
          fVar28 = fVar17;
          local_494 = fVar17;
          fVar21 = fVar18;
        }
      }
      if (*(char *)((longlong)&local_128 + lVar14 + 1) != '\0') {
        fVar16 = *(float *)(param_3 + 0x18);
        fVar17 = *(float *)(param_3 + 0x14);
        fVar18 = fVar16 - param_4[1];
        fVar26 = (float)(iVar11 * 2 + 2) + fVar22 + *(float *)(param_3 + 0x1c);
        fVar19 = fVar26 - param_4[2];
        fVar18 = fVar19 * fVar19 + fVar18 * fVar18 + (fVar17 - *param_4) * (fVar17 - *param_4);
        if (fVar18 < 0.0) {
          fVar18 = (float)FUN_18051af10();
          fVar28 = local_494;
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        if (fVar18 < fVar21) {
          fVar23 = fVar16;
          fVar25 = fVar26;
          fVar28 = fVar17;
          local_494 = fVar17;
          fVar21 = fVar18;
        }
      }
      if (*(char *)((longlong)&local_128 + lVar14 + 2) != '\0') {
        fVar16 = *(float *)(param_3 + 0x18);
        fVar17 = *(float *)(param_3 + 0x14);
        fVar18 = fVar16 - param_4[1];
        fVar26 = (float)(iVar11 * 2 + 4) + fVar22 + *(float *)(param_3 + 0x1c);
        fVar19 = fVar26 - param_4[2];
        fVar18 = fVar19 * fVar19 + fVar18 * fVar18 + (fVar17 - *param_4) * (fVar17 - *param_4);
        if (fVar18 < 0.0) {
          fVar18 = (float)FUN_18051af10();
          fVar28 = local_494;
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        if (fVar18 < fVar21) {
          fVar23 = fVar16;
          fVar25 = fVar26;
          fVar28 = fVar17;
          local_494 = fVar17;
          fVar21 = fVar18;
        }
      }
      if (*(char *)((longlong)&local_128 + lVar14 + 3) != '\0') {
        fVar16 = *(float *)(param_3 + 0x18);
        fVar17 = *(float *)(param_3 + 0x14);
        fVar18 = fVar16 - param_4[1];
        fVar19 = (float)(iVar11 * 2 + 6) + fVar22 + *(float *)(param_3 + 0x1c);
        fVar22 = fVar19 - param_4[2];
        fVar22 = fVar22 * fVar22 + fVar18 * fVar18 + (fVar17 - *param_4) * (fVar17 - *param_4);
        if (fVar22 < 0.0) {
          fVar22 = (float)FUN_18051af10();
          fVar28 = local_494;
        }
        else {
          fVar22 = SQRT(fVar22);
        }
        if (fVar22 < fVar21) {
          fVar23 = fVar16;
          fVar25 = fVar19;
          fVar28 = fVar17;
          local_494 = fVar17;
          fVar21 = fVar22;
        }
      }
      iVar11 = iVar11 + 4;
    } while (iVar11 < iVar7);
    iVar7 = local_490;
    fVar22 = DAT_1808ac918;
    if (local_490 <= iVar11) goto LAB_180433993;
  }
  do {
    if (*(char *)((longlong)&local_128 + (longlong)iVar11) != '\0') {
      fVar16 = *(float *)(param_3 + 0x18);
      fVar28 = *(float *)(param_3 + 0x14);
      fVar17 = fVar16 - param_4[1];
      fVar19 = (float)(iVar11 * 2) + fVar22 + *(float *)(param_3 + 0x1c);
      fVar18 = fVar19 - param_4[2];
      fVar17 = fVar18 * fVar18 + fVar17 * fVar17 + (fVar28 - *param_4) * (fVar28 - *param_4);
      if (fVar17 < 0.0) {
        fVar17 = (float)FUN_18051af10();
      }
      else {
        fVar17 = SQRT(fVar17);
      }
      iVar7 = local_490;
      if (fVar21 <= fVar17) {
        fVar28 = local_494;
      }
      else {
        fVar23 = fVar16;
        fVar25 = fVar19;
        local_494 = fVar28;
        fVar21 = fVar17;
      }
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < iVar7);
LAB_180433993:
  puVar4 = DAT_181111988;
  if (fVar21 != fVar1) {
    if (local_498 == false) {
      iStack_11c = local_47c;
    }
    else {
      iStack_11c = local_480;
      if (DAT_1808ac1d8 < local_460) {
        iStack_11c = (int)(local_484 * DAT_1808acb58);
      }
    }
    local_118 = local_48c <= iStack_11c;
    uStack_117 = (undefined1)param_5;
    local_128 = CONCAT44(fVar23,fVar28);
    uStack_110 = SUB84(param_4,0);
    uStack_10c = (undefined4)((ulonglong)param_4 >> 0x20);
    local_108 = local_458;
    if (DAT_181111988 == DAT_181111990) {
      fStack_120 = fVar25;
      lStack_100 = param_3;
      FUN_18043a980(iStack_11c,DAT_181111988,&local_128);
    }
    else {
      *DAT_181111988 = local_128;
      puVar4[1] = CONCAT44(iStack_11c,fVar25);
      puVar4[2] = CONCAT44(uStack_114,CONCAT22(uStack_116,CONCAT11(uStack_117,local_118)));
      puVar4[3] = param_4;
      puVar4[4] = local_458;
      puVar4[5] = param_3;
      DAT_181111988 = DAT_181111988 + 6;
    }
  }
  return;
}



/* ===== 180433ad0 FUN_180433ad0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180433ad0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_448 [32];
  undefined8 *local_428;
  undefined8 *local_420;
  longlong *local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined1 local_400;
  undefined8 local_3fc;
  int local_3f4;
  undefined1 local_3f0;
  undefined2 local_3ef;
  undefined1 local_3ed;
  undefined8 local_3ec;
  int local_3e4;
  undefined1 local_3e0;
  undefined2 local_3df;
  undefined1 local_3dd;
  int local_3dc;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc;
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined4 local_3bc;
  undefined1 local_3b8;
  longlong *local_3b0;
  undefined1 local_3a8 [4];
  undefined4 local_3a4;
  undefined8 *local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined1 local_38c;
  undefined1 local_38b;
  undefined1 local_38a;
  undefined4 local_388;
  undefined4 local_384;
  undefined1 local_380;
  undefined *local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  float local_320;
  undefined1 local_31c;
  undefined2 local_31b;
  undefined1 local_319;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined1 local_308;
  undefined8 local_304;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined4 local_2f0;
  int local_2ec;
  int local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined2 local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined1 local_264;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined2 local_1d8;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
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
  undefined4 local_120;
  undefined1 local_118 [64];
  undefined1 local_d8 [24];
  undefined1 local_c0 [40];
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_448;
  if ((((*(char *)(param_1 + 0x71) != '\0') && (*(char *)(param_1 + 0x72) != '\0')) &&
      (*(longlong *)(param_1 + 0x1170) != 0)) && (*(longlong *)(param_1 + 0x1178) != 0)) {
    local_410 = param_1;
    FUN_180431ce0();
    if (DAT_181111980 != DAT_181111988) {
      DAT_181111988 = DAT_181111980;
    }
    if (DAT_181111998 != DAT_1811119a0) {
      DAT_1811119a0 = DAT_181111998;
    }
    if (DAT_1811119b0 != DAT_1811119b8) {
      DAT_1811119b8 = DAT_1811119b0;
    }
    if ((*(char *)(param_1 + 0xc4) != '\0') ||
       (*(int *)(param_1 + 0x23c) != *(int *)(param_1 + 0xb04))) {
      FUN_180474b40(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0x20a8) = **(undefined8 **)(param_1 + 0x1178);
      FUN_180466580(param_1 + 0xe0,param_1 + 0x9a8,0);
      local_428 = (undefined8 *)&DAT_1809f35b0;
      uVar7 = FUN_1804735d0(local_118,param_1,*(undefined8 *)(param_1 + 0x1170),
                            **(undefined8 **)(param_1 + 0x1178));
      FUN_180434680(param_1 + 0x20b0,uVar7);
      FUN_180011610(local_c0);
      FUN_180200b70(local_d8);
      FUN_18045ad20(param_1 + 0xe0,param_1 + 0x20b0);
      *(undefined1 *)(param_1 + 0x2130) = 1;
    }
    puVar21 = (undefined1 *)(param_1 + 0xd0);
    lVar13 = param_1 + 0xe0;
    local_3a8[0] = *(undefined1 *)(param_1 + 0x40);
    local_3a4 = *(undefined4 *)(param_1 + 0xb04);
    local_3a0 = &DAT_1809f35b8;
    local_398 = *(undefined4 *)(param_1 + 0x90c);
    local_394 = *(undefined4 *)(param_1 + 0x910);
    local_390 = *(undefined4 *)(param_1 + 0x60);
    local_38c = *(undefined1 *)(param_1 + 8);
    local_38b = *(undefined1 *)(param_1 + 0x56);
    local_38a = *puVar21;
    local_388 = *(undefined4 *)(param_1 + 4);
    local_384 = *(undefined4 *)(param_1 + 0x38);
    local_380 = *(undefined1 *)(param_1 + 0x24);
    local_428 = &DAT_181111998;
    local_370 = lVar13;
    local_328 = puVar21;
    FUN_180446ee0(local_3a8,lVar13,0,0);
    local_428 = &DAT_1811119b0;
    FUN_180446ee0(local_3a8,lVar13,0,1);
    local_3b0 = DAT_181111dd0;
    local_418 = DAT_181111dd8;
    if (DAT_181111dd0 != DAT_181111dd8) {
      plVar15 = DAT_181111dd8;
      do {
        lVar9 = *local_3b0;
        if (((lVar9 != 0) && (*(char *)(lVar9 + 0x28) != '\0')) &&
           (lVar1 = *(longlong *)(lVar9 + 0x20), lVar1 != 0)) {
          lVar9 = *(longlong *)(lVar9 + 8);
          local_360 = 0;
          uStack_358 = 0;
          local_350 = 0;
          uStack_348 = 0;
          local_340 = 0;
          uStack_338 = 0;
          local_330 = 0;
          FUN_1804323f0(&local_360,lVar9);
          uVar19 = 0;
          do {
            local_368 = (&DAT_1811119a0)[uVar19 * 3];
            lVar20 = (&DAT_181111998)[uVar19 * 3];
            if (lVar20 != local_368) {
              do {
                FUN_1804326e0(lVar13,lVar1,lVar20);
                plVar15 = DAT_1811119e8;
                plVar14 = DAT_1811119e0;
                if (DAT_1811119e0 != DAT_1811119e8) {
                  do {
                    lVar13 = *plVar14;
                    if (DAT_180961bb0 != 0) {
                      FUN_1800175c0(DAT_180961bb0,lVar9,lVar13 + 0x14);
                    }
                    if (DAT_180961bb8 != 0) {
                      FUN_1800175c0(DAT_180961bb8,lVar9,lVar13 + 0x44);
                    }
                    FUN_1804325d0(lVar9,lVar13 + 0x20,lVar13 + 0x2c);
                    _DAT_180c3ace0 =
                         (undefined4)
                         (*(longlong *)(lVar13 + 0xa0) - *(longlong *)(lVar13 + 0x98) >> 5);
                    _DAT_180c3acf0 = *(undefined8 *)(lVar13 + 0x98);
                    _DAT_180c3acf8 =
                         (undefined4)
                         (*(longlong *)(lVar13 + 0xa0) - *(longlong *)(lVar13 + 0x98) >> 5);
                    _DAT_180c3acfc = 0x80000000;
                    if ((((lVar9 != 0) && (DAT_180c3aca4 != 0)) &&
                        (lVar8 = FUN_18000f3a0(lVar9 + (ulonglong)DAT_180c3aca4), lVar8 != 0)) &&
                       (lVar8 = FUN_180047bf0(lVar8), lVar8 != 0)) {
                      local_378 = &DAT_180c3ace0;
                      FUN_1800239d0(lVar8 + 0x440,&local_378);
                    }
                    local_428 = (undefined8 *)CONCAT44(local_428._4_4_,(int)uVar19);
                    FUN_180432bf0(local_410,lVar1,lVar13,lVar20);
                    plVar14 = plVar14 + 1;
                  } while (plVar14 != plVar15);
                  lVar13 = local_370;
                }
                lVar20 = lVar20 + 0x60;
              } while (lVar20 != local_368);
            }
            uVar18 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar18;
          } while ((int)uVar18 < 2);
          if (DAT_180961bb0 != 0) {
            FUN_1800175c0(DAT_180961bb0,lVar9,&local_360);
          }
          if (DAT_180961bb8 != 0) {
            FUN_1800175c0(DAT_180961bb8,lVar9,(longlong)&local_340 + 4);
          }
          FUN_1804325d0(lVar9,(longlong)&uStack_358 + 4,&uStack_348);
          if (((lVar9 != 0) && (DAT_180c3aca4 != 0)) &&
             ((lVar9 = FUN_18000f3a0(lVar9 + (ulonglong)DAT_180c3aca4), lVar9 != 0 &&
              (lVar9 = FUN_180047bf0(lVar9), lVar9 != 0)))) {
            FUN_1800239d0(lVar9 + 0x440,&local_330);
          }
          plVar15 = local_418;
        }
        local_3b0 = local_3b0 + 1;
      } while (local_3b0 != plVar15);
      param_1 = local_410;
      puVar21 = local_328;
    }
    puVar16 = (undefined8 *)0x0;
    puVar11 = DAT_181111980;
    if (DAT_181111980 != DAT_181111988) {
      do {
        puVar17 = puVar11;
        if (((((puVar16 != (undefined8 *)0x0) &&
              ((*(char *)(puVar11 + 2) == '\0' || (*(char *)(puVar16 + 2) != '\0')))) &&
             (*(int *)((longlong)puVar11 + 0xc) <= *(int *)((longlong)puVar16 + 0xc))) &&
            ((*(char *)(puVar11[3] + 0x14) == '\0' || (*(char *)(puVar16[3] + 0x14) != '\0')))) &&
           ((*(char *)((longlong)puVar11 + 0x11) != '\x01' ||
            (*(char *)((longlong)puVar16 + 0x11) != '\0')))) {
          puVar17 = puVar16;
        }
        puVar11 = puVar11 + 6;
        puVar16 = puVar17;
      } while (puVar11 != DAT_181111988);
      if (puVar17 != (undefined8 *)0x0) {
        if (*(char *)((longlong)puVar17 + 0x11) == '\x01') {
          cVar5 = *(char *)(param_1 + 0x74);
        }
        else {
          cVar5 = *(char *)(param_1 + 0x73);
        }
        if (cVar5 != '\0') {
          puVar11 = (undefined8 *)puVar17[3];
          local_3d8 = *puVar11;
          local_3d0 = *(undefined4 *)(puVar11 + 1);
          local_3cc = *(undefined1 *)((longlong)puVar11 + 0x14);
          local_3c8 = puVar11[6];
          local_3c0 = *(undefined1 *)(puVar11 + 7);
          local_3bc = *(undefined4 *)(puVar11 + 9);
          local_3b8 = *(undefined1 *)((longlong)puVar11 + 0x4c);
          piVar2 = (int *)puVar17[5];
          local_408 = *(undefined8 *)piVar2;
          local_400 = (undefined1)piVar2[0x1f];
          local_3f4 = piVar2[0x1a];
          local_3fc = *(undefined8 *)(piVar2 + 0x18);
          local_3f0 = 1;
          local_3ef = local_31b;
          local_3ed = local_319;
          local_3e4 = piVar2[0x1d];
          local_3ec = *(undefined8 *)(piVar2 + 0x1b);
          local_3e0 = 1;
          local_3df = local_31b;
          local_3dd = local_319;
          local_3dc = piVar2[0x1e];
          **(undefined8 **)(param_1 + 0x1178) = *(undefined8 *)(param_1 + 0x20a8);
          local_328 = (undefined1 *)0x0;
          local_320 = 0.0;
          local_31c = 0;
          local_420 = &local_328;
          local_428 = (undefined8 *)
                      CONCAT71(local_428._1_7_,*(char *)((longlong)puVar17 + 0x11) == '\x01');
          FUN_180475f60(puVar21,&local_3d8,puVar17,&local_408);
          if (*(char *)((longlong)puVar17 + 0x11) == '\x01') {
            **(ulonglong **)(param_1 + 0x1178) =
                 **(ulonglong **)(param_1 + 0x1178) & 0xfffffffffffffffe;
          }
          *(undefined1 *)(param_1 + 0x79) = 1;
          FUN_1804768c0(puVar21,puVar17[4] + 0x24,*(undefined8 *)(param_1 + 0x1170));
          fVar3 = DAT_1808ac34c;
          local_2e4 = 0;
          local_2dc = 0;
          local_2d8 = 0xffffffff;
          local_2d4 = 0;
          local_2d0 = 0;
          local_2c8 = 0;
          uStack_2c0 = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_298 = 0;
          uStack_290 = 0;
          local_288 = 0;
          local_280 = 0;
          local_278 = 0;
          local_270 = 0;
          local_268 = 0;
          local_264 = 0;
          local_260 = 0;
          local_258 = 0;
          uStack_250 = 0;
          local_248 = 0;
          uStack_240 = 0;
          local_238 = 0;
          local_230 = 0;
          local_228 = _DAT_1808ad310;
          uStack_220 = _UNK_1808ad318;
          local_218 = 0;
          local_214 = 0x3f800000;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 0;
          local_1e4 = 0;
          local_1dc = 0;
          local_1d8 = 0;
          local_1d4 = 0;
          local_1cc = 0;
          local_1c4 = 0xffffffffffffffff;
          local_1bc = 0xffffffff;
          uStack_1b0 = 0;
          local_1a8 = _DAT_1808ad410;
          uStack_1a0 = _UNK_1808ad418;
          local_1b8 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          local_120 = 0;
          local_318 = *(undefined4 *)(param_1 + 0xbc);
          local_314 = *(undefined4 *)(param_1 + 0xb04);
          local_310 = *(undefined4 *)(puVar17[4] + 0x10);
          local_30c = *(undefined4 *)(param_1 + 0x42c);
          local_308 = 1;
          local_304 = *puVar11;
          local_2fc = *(undefined4 *)(puVar11 + 1);
          local_2f8 = *puVar17;
          local_2f0 = *(undefined4 *)(puVar17 + 1);
          local_2ec = *piVar2;
          local_2e8 = piVar2[1];
          if ((int *)((longlong)&local_2e4 + 4) != piVar2) {
            FUN_18046a130((longlong)&local_2e4 + 4,piVar2);
          }
          uVar4 = local_310;
          iVar6 = *(int *)(param_1 + 0xb04) - *piVar2;
          fVar23 = 0.0 - (float)piVar2[1];
          if (fVar23 < 0.0) {
            fVar23 = fVar23 + fVar3;
            if (fVar3 <= fVar23) {
              fVar23 = 0.0;
            }
            else {
              iVar6 = iVar6 + -1;
            }
          }
          local_1f8 = CONCAT44(local_1f8._4_4_,(float)iVar6 + fVar23);
          uVar7 = FUN_180447e30(param_1 + 0xe0,puVar11);
          local_328._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
          fVar23 = local_328._4_4_;
          local_418 = (longlong *)((ulonglong)local_418 & 0xffffffff00000000);
          local_328 = (undefined1 *)uVar7;
          fVar22 = (float)FUN_180512fd0(*(float *)(param_1 + 0x828) * DAT_1808acab0,&local_418);
          fVar24 = local_418._0_4_;
          if (fVar22 < 0.0) {
            fVar22 = fVar22 + fVar3;
            if (fVar22 < fVar3) {
              fVar24 = local_418._0_4_ + DAT_1808acda0;
            }
            else {
              fVar22 = 0.0;
            }
          }
          iVar6 = (int)uVar7 - (int)fVar24;
          fVar22 = fVar23 - fVar22;
          if (fVar22 < 0.0) {
            fVar22 = fVar22 + fVar3;
            if (fVar22 < fVar3) {
              iVar6 = iVar6 + -1;
            }
            else {
              fVar22 = 0.0;
            }
          }
          uVar10 = FUN_180446830(param_1 + 0xe0);
          iVar12 = (int)uVar7 - (int)uVar10;
          local_328._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
          fVar23 = fVar23 - local_328._4_4_;
          if (fVar23 < 0.0) {
            fVar23 = fVar23 + fVar3;
            if (fVar23 < fVar3) {
              iVar12 = iVar12 + -1;
            }
            else {
              fVar23 = 0.0;
            }
          }
          local_410 = CONCAT44(fVar23,iVar12);
          local_328 = (undefined1 *)uVar10;
          cVar5 = FUN_1804468b0(param_1 + 0xe0,&local_410,&local_418);
          if (cVar5 == '\0') {
            local_1f8 = local_1f8 & 0xffffffff;
          }
          else {
            iVar6 = *(int *)(param_1 + 0xb04) - iVar6;
            fVar22 = 0.0 - fVar22;
            if (fVar22 < 0.0) {
              fVar22 = fVar22 + fVar3;
              if (fVar3 <= fVar22) {
                fVar22 = 0.0;
              }
              else {
                iVar6 = iVar6 + -1;
              }
            }
            local_1f8 = CONCAT44((float)iVar6 + fVar22,(undefined4)local_1f8);
          }
          local_320 = (float)*(int *)((longlong)puVar17 + 0xc);
          local_1ec = CONCAT44(local_320,0x3f800000);
          local_328 = (undefined1 *)CONCAT44(0x3f800000,uVar4);
          puVar11 = *(undefined8 **)(param_1 + 0x1ed8);
          if (puVar11 == *(undefined8 **)(param_1 + 0x1ee0)) {
            FUN_18043af30(param_1 + 0x1ed0,puVar11,&local_328);
          }
          else {
            *puVar11 = local_328;
            *(float *)(puVar11 + 1) = local_320;
            *(longlong *)(param_1 + 0x1ed8) = *(longlong *)(param_1 + 0x1ed8) + 0xc;
          }
          lVar13 = *(longlong *)(param_1 + 0x1ef0);
          if (lVar13 == *(longlong *)(param_1 + 0x1ef8)) {
            FUN_18043ad40(param_1 + 0x1ee8,lVar13,&local_318);
          }
          else {
            FUN_18043b220(lVar13,&local_318);
            *(longlong *)(param_1 + 0x1ef0) = *(longlong *)(param_1 + 0x1ef0) + 0x200;
          }
          FUN_18000f890(&local_1b8);
          FUN_1802a9370(&local_210);
          FUN_1802a9370(&local_248);
          FUN_180200b70(&local_260);
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ===== 180434680 FUN_180434680 ===== */

undefined4 * FUN_180434680(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  FUN_180200bf0(param_1 + 0x10,param_2 + 0x10);
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (param_1 == param_2) goto LAB_180434789;
  lVar1 = *(longlong *)(param_1 + 0x16);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    if ((ulonglong)((*(longlong *)(param_1 + 0x1a) - lVar1 >> 2) * 4) < 0x1000) {
LAB_18043474e:
      puVar5 = puVar4;
    }
    else {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
        lVar3 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar4 = auStack_20;
        goto LAB_18043474e;
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x180434759;
    thunk_FUN_1803d64e0(lVar3);
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
  }
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
LAB_180434789:
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x7e);
  return param_1;
}



/* ===== 1804347d0 FUN_1804347d0 ===== */

void FUN_1804347d0(longlong param_1)

{
  FUN_1802a9370(param_1 + 0xd0);
  FUN_1802a9370(param_1 + 0x98);
  FUN_180200b70(param_1 + 0x80);
  return;
}



/* ===== 180434810 FUN_180434810 ===== */

void FUN_180434810(longlong param_1)

{
  FUN_18000f890(param_1 + 0x160);
  FUN_1802a9370(param_1 + 0x108);
  FUN_1802a9370(param_1 + 0xd0);
  FUN_180200b70(param_1 + 0xb8);
  return;
}



/* ===== 180434850 FUN_180434850 ===== */

undefined8 FUN_180434850(void)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  if (DAT_180961fa0 == (code *)0x0) {
    fVar2 = 0.0;
    uVar4 = 0;
  }
  else {
    plVar1 = (longlong *)(*DAT_180961fa0)(0,0);
    if (plVar1 == (longlong *)0x0) {
      fVar2 = 0.0;
      uVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0);
      uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
      fVar2 = (float)uVar3 * DAT_1808acab0;
    }
  }
  return CONCAT44(uVar4,fVar2);
}



/* ===== 1804348a0 FUN_1804348a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804348a0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_4a = 1;
  FUN_180434680(param_2,&local_c8);
  FUN_180011610(&uStack_70);
  FUN_180200b70(&local_88);
  *param_3 = 0;
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar3 = FUN_180011200(param_1 + 8);
    *param_2 = uVar3;
    uVar7 = FUN_18000f3a0(param_1 + 0x60);
    *(undefined8 *)(param_2 + 2) = uVar7;
    uVar7 = FUN_18000f3a0(param_1 + 0x68);
    *(undefined8 *)(param_2 + 4) = uVar7;
    uVar7 = FUN_18000f3a0(param_1 + 0x70);
    *(undefined8 *)(param_2 + 6) = uVar7;
    lVar8 = FUN_18000f3a0(param_1 + 0x40);
    if (lVar8 - 0x10000U < 0x7ffffffeffff) {
      uVar3 = FUN_180011200(lVar8 + 0x54);
      param_2[1] = uVar3;
      lVar9 = FUN_18000f3a0(lVar8 + 0x40);
      if (lVar9 - 0x10000U < 0x7ffffffeffff) {
        uVar3 = FUN_18000f3d0(lVar9 + 0x18);
        param_2[8] = uVar3;
        uVar3 = FUN_18000f3d0(lVar9 + 0x1c);
        param_2[9] = uVar3;
        uVar3 = FUN_18000f3d0(lVar9 + 0x20);
        param_2[10] = uVar3;
      }
      uVar3 = FUN_18000f3d0(lVar8 + 0x58);
      param_2[0xb] = uVar3;
      uVar3 = FUN_18000f3d0(lVar8 + 0x5c);
      param_2[0xc] = uVar3;
      uVar3 = FUN_18000f3d0(lVar8 + 0x60);
      param_2[0xd] = uVar3;
      uVar3 = FUN_180011200(lVar8 + 0x68);
      *param_3 = uVar3;
      uVar3 = FUN_180011200(lVar8 + 0x6c);
      param_2[0xe] = uVar3;
      lVar9 = FUN_18000f3a0(lVar8 + 0x28);
      iVar4 = FUN_180011200(lVar8 + 0x20);
      if (lVar9 - 0x10000U < 0x7ffffffeffff) {
        iVar5 = FUN_180011200(lVar9);
        if (iVar5 < iVar4) {
          iVar4 = iVar5;
        }
      }
      else {
        iVar4 = 0;
      }
      if (0 < iVar4) {
        uVar10 = 0;
        do {
          lVar8 = FUN_18000f3a0(lVar9 + 8 + uVar10 * 8);
          if (lVar8 - 0x10000U < 0x7ffffffeffff) {
            uVar6 = FUN_180011200(lVar8 + 0x10);
            uStack_c0 = 0;
            uStack_b8 = uStack_b8 & 0xffffff00;
            uStack_b4 = 0;
            uStack_b0 = 0;
            uStack_ac = 0;
            local_a8 = local_a8 & 0xffffff00;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_9c = 0;
            uStack_98 = uStack_98 & 0xffffff00;
            uStack_94 = 0;
            uStack_90 = 0;
            uStack_8c = 0;
            local_88 = local_88 & 0xffffffffffff0000;
            uVar3 = FUN_18000f3d0(lVar8 + 0x24);
            local_c8 = CONCAT44(local_c8._4_4_,uVar3);
            if ((uVar6 & 1) != 0) {
              uStack_c0 = FUN_18000f3a0(lVar8 + 0x18);
            }
            if ((uVar6 & 2) != 0) {
              uVar2 = FUN_180011220(lVar8 + 0x20);
              uStack_b8 = CONCAT31(uStack_b8._1_3_,uVar2);
            }
            if ((uVar6 & 0x60) != 0) {
              uStack_a4 = FUN_18000f3d0(lVar8 + 0x30);
              uStack_a0 = FUN_18000f3d0(lVar8 + 0x34);
              uStack_98 = CONCAT31(uStack_98._1_3_,1);
            }
            if ((uVar6 & 0x18) != 0) {
              uStack_94 = FUN_18000f3d0(lVar8 + 0x28);
              uStack_90 = FUN_18000f3d0(lVar8 + 0x2c);
              local_88 = CONCAT71(local_88._1_7_,1);
            }
            local_88._0_3_ = CONCAT12(1,(undefined2)local_88);
            puVar1 = *(undefined8 **)(param_2 + 0x12);
            if (puVar1 == *(undefined8 **)(param_2 + 0x14)) {
              FUN_18008c530(param_2 + 0x10,puVar1,&local_c8);
            }
            else {
              *puVar1 = local_c8;
              puVar1[1] = uStack_c0;
              puVar1[2] = CONCAT44(uStack_b4,uStack_b8);
              puVar1[3] = CONCAT44(uStack_ac,uStack_b0);
              puVar1[4] = CONCAT44(uStack_a4,local_a8);
              puVar1[5] = CONCAT44(uStack_9c,uStack_a0);
              puVar1[6] = CONCAT44(uStack_94,uStack_98);
              puVar1[7] = CONCAT44(uStack_8c,uStack_90);
              puVar1[8] = local_88;
              *(longlong *)(param_2 + 0x12) = *(longlong *)(param_2 + 0x12) + 0x48;
            }
          }
          uVar6 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar6;
        } while ((int)uVar6 < iVar4);
      }
    }
    param_2[0x1c] = param_2[8];
    param_2[0x1d] = param_2[9];
    param_2[0x1e] = param_2[10];
    local_e8 = 0;
    lStack_e0 = 0;
    local_d8 = 0;
    if (param_1 - 0x10000U < 0x7ffffffeffff) {
      FUN_180265ac0(param_1 + 0x20,&local_e8);
      FUN_18043a450(param_2 + 0x16,(lStack_e0 - local_e8 >> 2) * -0x7d05f417d05f417d);
      lVar9 = lStack_e0;
      for (lVar8 = local_e8; lVar8 != lVar9; lVar8 = lVar8 + 0xac) {
        local_f8 = *(undefined4 *)(lVar8 + 0x18);
        local_f4 = *(undefined4 *)(lVar8 + 0x1c);
        local_f0 = *(undefined1 *)(lVar8 + 0x20);
        FUN_180011250(param_2 + 0x16,&local_f8);
      }
    }
    *(undefined1 *)((longlong)param_2 + 0x7e) = 1;
    FUN_180269120(&local_e8);
    uVar7 = 1;
  }
  return uVar7;
}



/* ===== 180434cc0 FUN_180434cc0 ===== */

void FUN_180434cc0(float param_1,float param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = param_2 * param_2 + 0.0 + param_1 * param_1;
  if (fVar5 < 0.0) {
    fVar3 = (float)FUN_18051af10(fVar5);
  }
  else {
    fVar3 = SQRT(fVar5);
  }
  if ((fVar3 < DAT_1808abf54) || (DAT_1808accfc < fVar3)) {
    *param_4 = 0.0;
    *param_3 = 0.0;
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      dVar1 = (double)param_1;
      dVar2 = (double)param_2;
      dVar4 = dVar1 * dVar1 + dVar2 * dVar2;
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



/* ===== 180434e00 FUN_180434e00 ===== */

void FUN_180434e00(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar6 = *param_1 * DAT_1808ac014;
  fVar4 = param_1[1] * DAT_1808ac014;
  fVar5 = param_1[2] * DAT_1808ac014;
  fVar1 = (float)FUN_180517200(fVar6);
  fVar2 = (float)FUN_180517790(fVar4);
  fVar4 = (float)FUN_180517200(fVar4);
  fVar3 = (float)FUN_180517200(fVar5);
  FUN_180434cc0(fVar4 * fVar1,fVar2 * fVar1,local_res10,local_res20);
  fVar1 = (float)FUN_180517790(fVar5);
  fVar5 = (float)FUN_180517790(fVar6);
  FUN_180434cc0(fVar1 * fVar5 * fVar4 - fVar3 * fVar2,fVar1 * fVar5 * fVar2 + fVar3 * fVar4,
                local_res8,local_res18);
  *param_3 = local_res8[0] * param_2[1] + local_res10[0] * *param_2;
  *param_4 = local_res18[0] * param_2[1] + local_res20[0] * *param_2;
  return;
}



/* ===== 180434f90 FUN_180434f90 ===== */

int FUN_180434f90(uint param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    param_1 = param_1 - 1;
    if (((int)param_1 < 0) ||
       (lVar1 = (ulonglong)(param_1 % 0x96) * 0x20, *(uint *)(&DAT_180c3ad20 + lVar1) != param_1)) {
      return -1;
    }
    if ((&DAT_180c3ad24)[lVar1] == '\0') {
      return iVar2;
    }
    if (iVar2 == 0x95) break;
    iVar2 = iVar2 + 1;
  }
  return -1;
}



/* ===== 180434ff0 FUN_180434ff0 ===== */

uint FUN_180434ff0(uint param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = param_1 - 0x95;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  while( true ) {
    if ((int)param_1 <= iVar2) {
      return 0xffffffff;
    }
    param_1 = param_1 - 1;
    lVar1 = (ulonglong)(param_1 % 0x96) * 0x20;
    if (*(uint *)(&DAT_180c3ad20 + lVar1) != param_1) break;
    if ((&DAT_180c3ad24)[lVar1] == '\0') {
      return param_1;
    }
  }
  return 0xffffffff;
}



/* ===== 180435050 FUN_180435050 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180435050(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 auStack_128 [32];
  int local_108;
  int local_100;
  int local_f8;
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_128;
  if ((((param_1 != DAT_180960f7c) || (param_2 != DAT_18096193c)) || (param_3 != DAT_180960ebc)) ||
     (param_4 != DAT_180960f78)) {
    DAT_180960ebc = param_3;
    DAT_180960f78 = param_4;
    DAT_180960f7c = param_1;
    DAT_18096193c = param_2;
    local_108 = param_2;
    local_100 = param_3;
    if (param_4 == -0x80000000) {
      snprintf(local_e8,200,
               "dp-budget convar missing: sv_late_commands_allowed=%d cl_usercmd_max_per_movemsg=%d cq_max_starved_substitute_commands=%d -> 0"
               ,param_1);
    }
    else {
      local_f8 = param_4;
      snprintf(local_e8,200,
               "dp-budget sv_late_commands_allowed=%d cl_usercmd_max_per_movemsg=%d cq_max_starved_substitute_commands=%d -> %d"
               ,param_1);
    }
    if ((DAT_180cd1bfe == '\0') && (DAT_180ca013d == '\0')) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
      FUN_18046fbd0(local_e8);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
    }
  }
  return;
}



/* ===== 180435150 FUN_180435150 ===== */

int FUN_180435150(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  if (DAT_181111920 == 0) {
    DAT_181111920 = FUN_180264b70("sv_late_commands_allowed");
  }
  if (DAT_181111908 == 0) {
    DAT_181111908 = FUN_180264b70("cl_usercmd_max_per_movemsg");
  }
  if (DAT_181111900 == 0) {
    DAT_181111900 = FUN_180264b70("cq_max_starved_substitute_commands");
  }
  lVar7 = DAT_181111920;
  lVar6 = DAT_181111908;
  lVar8 = DAT_181111900;
  if (((DAT_181111920 == 0) || (DAT_181111908 == 0)) || (DAT_181111900 == 0)) {
    FUN_180435050(DAT_181111920 != 0,DAT_181111908 != 0,DAT_181111900 != 0,0x80000000);
    return 0;
  }
  iVar1 = FUN_180264d70(DAT_181111920);
  if (iVar1 < 0) {
    FUN_180434850();
    fVar9 = (float)FUN_18053f0d0();
    iVar1 = -iVar1;
    if ((int)fVar9 < iVar1) {
      iVar1 = (int)fVar9;
    }
    lVar6 = DAT_181111908;
    lVar7 = DAT_181111920;
    lVar8 = DAT_181111900;
    if (0 < iVar1) {
      iVar1 = 1;
    }
  }
  iVar2 = FUN_180264d70(lVar6);
  iVar3 = iVar1;
  if (iVar2 + -1 < iVar1 + -1) {
    iVar3 = iVar2;
  }
  if (0 < iVar2) {
    iVar1 = iVar3;
  }
  iVar3 = FUN_180264d70(lVar8);
  if (iVar3 + -1 < iVar1 + -1) {
    iVar1 = iVar3;
  }
  uVar4 = FUN_180264d70(lVar8);
  uVar5 = FUN_180264d70(lVar7);
  FUN_180435050(uVar5,iVar2,uVar4,iVar1 + -1);
  return iVar1 + -1;
}



/* ===== 1804352f0 FUN_1804352f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804352f0(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ushort uVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_2a8 [32];
  int local_288;
  undefined4 local_280;
  int local_278;
  int local_274;
  float local_270;
  float local_26c;
  undefined4 local_268 [2];
  float local_260;
  float local_25c;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined1 local_254;
  undefined1 local_253;
  undefined4 local_250;
  code *local_248;
  undefined1 *local_240;
  longlong local_238;
  longlong local_230;
  undefined4 *local_228;
  int *local_220;
  int *local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 local_188 [24];
  undefined8 local_170;
  undefined4 local_15c;
  undefined8 local_158;
  longlong local_148;
  longlong local_140;
  undefined1 local_130 [40];
  undefined1 local_108 [24];
  undefined8 local_f0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b0 [40];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_2a8;
  if (DAT_181111910 == '\0') {
    DAT_181111910 = '\x01';
    DAT_181111914 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_181111918 = FUN_18038eaf0("CCSWeaponBaseVData","m_nZoomLevels");
  }
  if (DAT_180cc45b7 != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xa18) != '\x02') {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x1158);
  if (lVar11 == 0) {
    return;
  }
  if (((DAT_181111914 == 0) ||
      (iVar3 = FUN_180011200(lVar11 + (ulonglong)DAT_181111914), 5 < iVar3 - 1U)) &&
     (*(short *)(param_1 + 0x1160) != 0x1f)) {
    return;
  }
  if (((*(longlong *)(param_1 + 0x1168) != 0) &&
      (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1168) + 0x40),
      lVar5 - 0x10000U < 0x7ffffffeffff)) && (iVar3 = FUN_180011200(lVar5 + 0x68), iVar3 != 0)) {
    return;
  }
  local_268[0] = *(undefined4 *)(param_1 + 0xbc);
  uVar4 = FUN_180434ff0();
  if ((int)uVar4 < 0) {
    return;
  }
  if (DAT_180961a48 == (code *)0x0) {
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(param_1 + 0xaf8) - 0x10000U) {
    return;
  }
  if ((int)uVar4 < 1) {
    return;
  }
  lVar5 = (*DAT_180961a48)();
  if (0x7ffffffefffe < lVar5 - 0x10000U) {
    return;
  }
  if (DAT_180961fd0 == 0) {
    return;
  }
  lVar5 = ((ulonglong)uVar4 % (ulonglong)DAT_180961fd0) * (ulonglong)DAT_180961fd4 + lVar5;
  if (0x7ffffffefffe < lVar5 - 0x10000U) {
    return;
  }
  if (*(longlong *)(lVar5 + 8) != (longlong)(int)uVar4) {
    return;
  }
  lVar6 = FUN_18000f3a0(lVar5 + 0x40);
  if ((lVar6 - 0x10000U < 0x7ffffffeffff) && (iVar3 = FUN_180011200(lVar6 + 0x68), iVar3 != 0)) {
    return;
  }
  iVar13 = uVar4 - 1;
  lVar6 = (longlong)(iVar13 % 0x96) * 2000;
  iVar3 = (&DAT_180c3df70)[(longlong)(iVar13 % 0x96) * 500];
  piVar7 = (int *)0x0;
  if (iVar3 == iVar13) {
    piVar7 = &DAT_180c3df70 + (longlong)(iVar13 % 0x96) * 500;
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
  pcVar10 = &DAT_00000080;
  if (iVar3 == iVar13) {
    pcVar10 = &DAT_180c3dff0 + lVar6;
  }
  if (*pcVar10 != '\x02') {
    return;
  }
  piVar7 = (int *)&DAT_0000035c;
  if (iVar3 == iVar13) {
    piVar7 = (int *)(&DAT_180c3e2cc + lVar6);
  }
  if (*piVar7 != *(int *)(param_1 + 0xcf4)) {
    return;
  }
  local_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1c8 = 0;
  lStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_18c = 0;
  local_18a = 1;
  local_270 = 0.0;
  FUN_1804348a0(lVar5,&local_208,&local_270);
  lVar5 = *(longlong *)(param_1 + 0x1170);
  if ((DAT_181111918 != 0) && (iVar3 = FUN_180011200(lVar11 + (ulonglong)DAT_181111918), 0 < iVar3))
  {
    if (*(undefined8 **)(param_1 + 0x1178) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)**(undefined8 **)(param_1 + 0x1178);
    }
    if (((uVar4 | (uint)local_200 | (uint)uStack_1f8 | (uint)local_1f0 | *(uint *)(lVar5 + 0x30) |
         *(uint *)(lVar5 + 0x28)) >> 0xb & 1) != 0) goto LAB_180435b81;
    for (lVar11 = *(longlong *)(lVar5 + 0x38); lVar6 = local_1c8,
        lVar11 != *(longlong *)(lVar5 + 0x40); lVar11 = lVar11 + 0x48) {
      if ((*(uint *)(lVar11 + 8) >> 0xb & 1) != 0) goto LAB_180435b81;
    }
    for (; lVar6 != lStack_1c0; lVar6 = lVar6 + 0x48) {
      if ((*(uint *)(lVar6 + 8) >> 0xb & 1) != 0) goto LAB_180435b81;
    }
  }
  *(ulonglong *)(lVar5 + 0x28) = *(ulonglong *)(lVar5 + 0x28) | 0x618;
  FUN_180434e00(&local_198,&local_1dc,&local_260,&local_25c);
  FUN_180434e00(param_1 + 0x21a8,param_1 + 0x2164,&local_270,&local_26c);
  fVar16 = local_270;
  fVar1 = DAT_1808ac34c;
  fVar14 = local_270 * local_270 + local_26c * local_26c;
  fVar15 = local_26c;
  if (DAT_1808ac34c < fVar14) {
    if (fVar14 < 0.0) {
      fVar14 = (float)FUN_18051af10(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    fVar16 = fVar16 * (fVar1 / fVar14);
    fVar15 = local_26c * (fVar1 / fVar14);
  }
  local_278 = FUN_180434f90(local_268[0]);
  if (local_278 < 0) {
    local_278 = 0;
  }
  local_274 = FUN_180435150();
  local_274 = local_274 - local_278;
  if ((local_274 < 1) || ((((uint)local_200 ^ *(uint *)(lVar5 + 0x28)) & 0x2827) != 0))
  goto LAB_180435b81;
  if (*(undefined8 **)(param_1 + 0x1178) == (undefined8 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ushort)**(undefined8 **)(param_1 + 0x1178);
  }
  if ((uVar9 & 0x2827) != 0) goto LAB_180435b81;
  if (((((byte)*(undefined4 *)(param_1 + 0xa10) & 3) != 2) ||
      (0.0 < *(float *)(param_1 + 0x9bc) || *(float *)(param_1 + 0x9bc) == 0.0)) ||
     ((*(byte *)(param_1 + 0x1188) & 2) != 0)) {
LAB_180435b23:
    if ((((fVar15 - local_25c) * (fVar15 - local_25c) + (fVar16 - local_260) * (fVar16 - local_260)
          <= DAT_1808ac0c0) &&
        ((ulonglong)((lStack_1c0 - local_1c8 >> 3) * -0x71c71c71c71c71c7) < 2)) &&
       ((ulonglong)
        ((*(longlong *)(lVar5 + 0x40) - *(longlong *)(lVar5 + 0x38) >> 3) * -0x71c71c71c71c71c7) < 2
       )) {
      *(undefined1 *)(param_1 + 0x392c) = 1;
    }
  }
  else {
    local_228 = local_268;
    local_220 = &local_278;
    local_218 = &local_274;
    local_258 = *(undefined1 *)(param_1 + 0x52);
    local_257 = *(undefined1 *)(param_1 + 0x51);
    local_256 = *(undefined1 *)(param_1 + 0x54);
    local_255 = *(undefined1 *)(param_1 + 0x76);
    local_254 = *(undefined1 *)(param_1 + 0x77);
    local_253 = *(undefined1 *)(param_1 + 0xd0);
    local_250 = *(undefined4 *)(param_1 + 0x60);
    local_240 = &LAB_180431cd0;
    if (*(undefined1 **)(param_1 + 0x21b8) != (undefined1 *)0x0) {
      local_240 = *(undefined1 **)(param_1 + 0x21b8);
    }
    if (*(char *)(param_1 + 0x2130) == '\0') {
      local_238 = 0;
      local_230 = 0;
    }
    else {
      local_238 = param_1 + 0x20b0;
      local_230 = param_1 + 0xe0;
    }
    local_248 = FUN_180436b00;
    local_210 = param_1;
    FUN_1801fd810(&DAT_180c3bfe0,param_1 + 0x9a8);
    _DAT_180c3c138 = 0;
    if (DAT_180c3c128 != 0) {
      if (((DAT_181112110 == 0) ||
          (0x7ffffffefffe < (DAT_180c3c128 + (ulonglong)DAT_181112110) - 0x10000)) ||
         (iVar3 = FUN_180011200(), 0xfffffffd < iVar3 - 1U)) {
        _DAT_180c3c130 = 0;
      }
      else {
        puVar8 = (undefined8 *)FUN_1803a0940(&local_270,iVar3);
        _DAT_180c3c130 = *puVar8;
      }
    }
    FUN_1804624c0(&DAT_180c3bfe0);
    FUN_180463020(&DAT_180c3bfe0);
    uVar2 = DAT_1808acda0;
    _DAT_180c3c730 = *(undefined4 *)(param_1 + 0x10f8);
    if (local_278 != 0) {
      FUN_180435ca0(local_108,&local_208);
      local_f0 = 0;
      if (local_c8 != local_c0) {
        local_c0 = local_c8;
      }
      local_280 = uVar2;
      local_288 = local_274;
      FUN_18045d020(&local_258,&DAT_180c3bfe0,local_108);
      if (DAT_180c3c26b == '\0') {
        if ((DAT_180c3c048 & 1) == 0) {
          FUN_1801fd810(&DAT_180c3bfe0,param_1 + 0x9a8);
          _DAT_180c3c138 = 0;
          if (DAT_180c3c128 != 0) {
            if (((DAT_181112110 == 0) ||
                (0x7ffffffefffe < (DAT_180c3c128 + (ulonglong)DAT_181112110) - 0x10000)) ||
               (iVar3 = FUN_180011200(), 0xfffffffd < iVar3 - 1U)) {
              _DAT_180c3c130 = 0;
            }
            else {
              puVar8 = (undefined8 *)FUN_1803a0940(&local_270,iVar3);
              _DAT_180c3c130 = *puVar8;
            }
          }
          FUN_1804624c0(&DAT_180c3bfe0);
          FUN_180463020(&DAT_180c3bfe0);
          _DAT_180c3c730 = *(undefined4 *)(param_1 + 0x10f8);
          FUN_180011610(local_b0);
          FUN_180200b70(&local_c8);
          goto LAB_180435a34;
        }
        *(undefined1 *)(param_1 + 0x392c) = 1;
        uVar12 = 1;
      }
      else {
        uVar12 = 2;
      }
      FUN_180435bd0(&local_228,uVar12,0xffffffff);
      FUN_180011610(local_b0);
      FUN_180200b70(&local_c8);
      goto LAB_180435b81;
    }
LAB_180435a34:
    FUN_180435ca0(local_188,param_1 + 0x2138);
    local_158 = 0;
    local_15c = 0;
    local_170 = 0;
    if (local_148 != local_140) {
      local_140 = local_148;
    }
    local_288 = local_274 + (uint)(local_278 != 0);
    local_280 = uVar2;
    FUN_18045d020(&local_258,&DAT_180c3bfe0,local_188);
    if (DAT_180c3c26b == '\0') {
      if ((DAT_180c3c048 & 1) == 0) {
        FUN_180435bd0(&local_228,(local_278 != 0) - 1,0);
        FUN_180011610(local_130);
        FUN_180200b70(&local_148);
        goto LAB_180435b23;
      }
      *(bool *)(param_1 + 0x392c) = local_278 == 0;
      uVar12 = 1;
    }
    else {
      uVar12 = 2;
    }
    FUN_180435bd0(&local_228,(local_278 != 0) - 1,uVar12);
    FUN_180011610(local_130);
    FUN_180200b70(&local_148);
  }
LAB_180435b81:
  FUN_180011610(&uStack_1b0);
  FUN_180200b70(&local_1c8);
  return;
}



/* ===== 180435bd0 FUN_180435bd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180435bd0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  double local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  uint local_c0;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_108;
  local_c0 = (uint)(*(char *)(param_1[3] + 0x392c) != '\0');
  local_e0 = *(undefined4 *)param_1[2];
  local_d8 = (double)*(float *)(param_1[3] + 0x9bc);
  local_e8 = *(undefined4 *)param_1[1];
  local_d0 = param_2;
  local_c8 = param_3;
  snprintf(local_b8,0xa0,"dp-land cmd=%d k=%d left=%d vz=%.1f simP=%d sim0=%d -> repeat=%d",
           *(undefined4 *)*param_1);
  if ((DAT_180cd1bfe == '\0') && (DAT_180ca013d == '\0')) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
    FUN_18046fbd0(local_b8);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
  }
  return;
}



/* ===== 180435ca0 FUN_180435ca0 ===== */

undefined4 * FUN_180435ca0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0xb);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  FUN_180200720(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  if (*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x16) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x16) >> 2;
    if (0x1555555555555555 < (ulonglong)(lVar2 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar2 = lVar2 * 4;
    lVar3 = FUN_18000fb70(lVar2);
    *(longlong *)(param_1 + 0x16) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar3;
    *(longlong *)(param_1 + 0x1a) = lVar3 + lVar2;
    lVar2 = *(longlong *)(param_1 + 0x16);
    lVar3 = *(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x16);
    FUN_180540530(lVar2,*(longlong *)(param_2 + 0x16),lVar3);
    *(longlong *)(param_1 + 0x18) = lVar2 + (lVar3 >> 2) * 4;
  }
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  param_1[0x1e] = param_2[0x1e];
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x7e);
  return param_1;
}



/* ===== 180435df0 FUN_180435df0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180435df0(longlong param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [32];
  int local_128;
  undefined4 local_120;
  undefined4 local_118;
  double local_110;
  double local_108;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [160];
  ulonglong local_38;
  
  if (param_1 == 0) {
    return;
  }
  local_38 = DAT_180919500 ^ (ulonglong)auStack_148;
  uVar1 = *(uint *)(param_1 + 8);
  cVar7 = '\0';
  cVar4 = '\0';
  local_f0 = 0;
  local_e8 = 0;
  if (DAT_180c8e98c != '\0') {
    local_128 = FUN_180434ff0(uVar1);
    if (((local_128 < 0) || (lVar6 = FUN_180474340(DAT_180c8bb58,local_128), lVar6 == 0)) ||
       (cVar4 = FUN_180268ad0(param_1,lVar6,&local_f0), cVar4 == '\0')) {
      DAT_180c8e98c = '\0';
      snprintf(local_d8,0x60,"dp-repeat cmd=%d no previous real command (prev=%d)",uVar1);
      cVar4 = cVar7;
      if ((DAT_180cd1bfe != '\0') || (DAT_180ca013d != '\0')) goto LAB_180435f80;
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
    }
    else {
      cVar7 = '\x01';
      dVar3 = (double)(float)local_f0;
      dVar2 = (double)local_f0._4_4_;
      uVar5 = FUN_180435150();
      local_120 = FUN_180434f90(uVar1);
      local_118 = uVar5;
      local_110 = dVar3;
      local_108 = dVar2;
      snprintf(local_d8,0xa0,"dp-repeat cmd=%d prev=%d k=%d budget=%d view=(%.2f %.2f)",uVar1);
      cVar4 = cVar7;
      if ((DAT_180cd1bfe != '\0') || (DAT_180ca013d != '\0')) goto LAB_180435f80;
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
    }
    FUN_18046fbd0(local_d8);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
    cVar4 = cVar7;
  }
LAB_180435f80:
  puVar8 = &local_f0;
  if (cVar4 == '\0') {
    puVar8 = (undefined8 *)0x0;
  }
  if (-1 < (int)uVar1) {
    lVar6 = (ulonglong)(uVar1 % 0x96) * 0x20;
    if ((cVar4 != '\0') && (puVar8 != (undefined8 *)0x0)) {
      *(undefined4 *)(&DAT_180c3ad34 + lVar6) = *(undefined4 *)puVar8;
      *(float *)(&DAT_180c3ad38 + lVar6) = local_f0._4_4_;
      *(undefined4 *)(&DAT_180c3ad3c + lVar6) = local_e8;
    }
    cVar7 = (&DAT_180c3ad24)[lVar6];
    (&DAT_180c3ad24)[lVar6] = cVar4;
    if (cVar7 != cVar4) {
      local_f8[0] = 0;
      FUN_1800233d0(param_1 + 0x8c,local_f8);
    }
  }
  return;
}



/* ===== 180436030 FUN_180436030 ===== */

void FUN_180436030(void)

{
  HMODULE hModule;
  
  if (DAT_180cd1b2f == '\0') {
    DAT_180cd1b2f = '\x01';
    hModule = GetModuleHandleA("tier0.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_181111978 = GetProcAddress(hModule,"V_atan2f");
      DAT_181111960 = GetProcAddress(hModule,"V_sincosf");
    }
  }
  return;
}



/* ===== 1804360a0 FUN_1804360a0 ===== */

bool FUN_1804360a0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((DAT_181111968 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181111968 = '\x01';
    DAT_18111196c = FUN_18038eaf0("CCSWeaponBaseVData","m_nZoomLevels");
    DAT_181111970 = FUN_18038eaf0("CCSWeaponBaseVData","m_nNumBullets");
  }
  if (((*(char *)(param_1 + 0x52) != '\0') && (*(longlong *)(param_2 + 0x7b0) != 0)) &&
     (DAT_18111196c != 0)) {
    if ((*(longlong *)(param_2 + 0x7b0) + (ulonglong)DAT_18111196c) - 0x10000 < 0x7ffffffeffff) {
      iVar1 = FUN_180011200();
      if ((0 < iVar1) && (*(int *)(param_2 + 0x790) != 1)) {
        return *(char *)(param_2 + 0xaa) == '\0';
      }
    }
  }
  return false;
}



/* ===== 180436170 FUN_180436170 ===== */

void FUN_180436170(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 local_58;
  uint uStack_54;
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
  undefined2 local_18;
  undefined1 uStack_16;
  uint5 uStack_15;
  
  lVar1 = *(longlong *)(param_1 + 0x1170);
  puVar2 = *(undefined8 **)(lVar1 + 0x40);
  puVar10 = *(undefined8 **)(lVar1 + 0x38);
  if (puVar10 != puVar2) {
    do {
      if ((*(char *)(puVar10 + 8) != '\0') || (*(char *)(puVar10 + 4) != '\0')) break;
      puVar10 = puVar10 + 9;
    } while (puVar10 != puVar2);
    if (puVar10 != puVar2) {
      puVar8 = puVar10 + 9;
      if (puVar8 != puVar2) {
        do {
          if ((*(char *)(puVar8 + 8) == '\0') && (*(char *)(puVar8 + 4) == '\0')) {
            uVar7 = puVar8[1];
            *puVar10 = *puVar8;
            puVar10[1] = uVar7;
            uVar7 = puVar8[3];
            puVar10[2] = puVar8[2];
            puVar10[3] = uVar7;
            uVar7 = puVar8[5];
            puVar10[4] = puVar8[4];
            puVar10[5] = uVar7;
            uVar4 = *(undefined4 *)((longlong)puVar8 + 0x34);
            uVar5 = *(undefined4 *)(puVar8 + 7);
            uVar6 = *(undefined4 *)((longlong)puVar8 + 0x3c);
            *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(puVar8 + 6);
            *(undefined4 *)((longlong)puVar10 + 0x34) = uVar4;
            *(undefined4 *)(puVar10 + 7) = uVar5;
            *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar6;
            puVar10[8] = puVar8[8];
            puVar10 = puVar10 + 9;
          }
          puVar8 = puVar8 + 9;
        } while (puVar8 != puVar2);
        if (puVar10 == puVar2) goto LAB_180436233;
      }
      lVar9 = *(longlong *)(lVar1 + 0x40) - (longlong)puVar2;
      FUN_180540530(puVar10,puVar2,lVar9);
      *(longlong *)(lVar1 + 0x40) = lVar9 + (longlong)puVar10;
    }
  }
LAB_180436233:
  uStack_50 = 0x800;
  **(ulonglong **)(param_1 + 0x1178) = **(ulonglong **)(param_1 + 0x1178) | 0x800;
  plVar3 = *(longlong **)(lVar1 + 0x40);
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = local_28 & 0xffffff00;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_16 = 0;
  local_58 = 0;
  local_48 = CONCAT31(local_48._1_3_,1);
  if (plVar3 == *(longlong **)(lVar1 + 0x48)) {
    FUN_18008c530(lVar1 + 0x38,plVar3,&local_58);
    return;
  }
  *plVar3 = (ulonglong)uStack_54 << 0x20;
  plVar3[1] = 0x800;
  plVar3[2] = (ulonglong)local_48;
  plVar3[3] = 0;
  plVar3[4] = (ulonglong)local_38;
  plVar3[5] = 0;
  plVar3[6] = (ulonglong)local_28;
  plVar3[7] = 0;
  plVar3[8] = (ulonglong)uStack_15 << 0x18;
  *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 0x48;
  return;
}



/* ===== 180436300 FUN_180436300 ===== */

void FUN_180436300(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  undefined2 uStack_76;
  
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0xb04);
  uVar19 = *(undefined8 *)(param_1 + 0xaf0);
  *param_2 = uVar19;
  param_2[2] = *(undefined8 *)(param_1 + 0x1150);
  uVar11 = *(undefined4 *)(param_1 + 0x60);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  uVar12 = *(undefined4 *)(param_1 + 0x20);
  uVar13 = *(undefined4 *)(param_1 + 4);
  uVar9 = *(undefined1 *)(param_1 + 0x24);
  uVar10 = *(undefined1 *)(param_1 + 0x40);
  uVar14 = *(undefined4 *)(param_1 + 0x3c);
  uVar15 = *(undefined4 *)(param_1 + 0x38);
  uVar16 = *(undefined4 *)(param_1 + 0x44);
  uVar17 = *(undefined4 *)(param_1 + 0x48);
  uVar18 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x8c) = uVar1;
  *(undefined4 *)(param_2 + 0x12) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x94) = uVar11;
  *(undefined4 *)(param_2 + 0x13) = uVar12;
  *(undefined4 *)((longlong)param_2 + 0x9c) = uVar3;
  *(undefined4 *)(param_2 + 0x14) = uVar13;
  *(undefined4 *)((longlong)param_2 + 0xa4) = uVar4;
  param_2[0x15] = CONCAT44(uVar14,CONCAT22(uStack_76,CONCAT11(uVar10,uVar9)));
  param_2[0x16] = CONCAT44(uVar16,uVar15);
  *(undefined4 *)(param_2 + 0x17) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xbc) = uVar6;
  *(undefined4 *)(param_2 + 0x18) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xc4) = uVar8;
  param_2[0x19] = CONCAT44(uVar18,uVar17);
  *(undefined8 *)((longlong)param_2 + 0x54) = *(undefined8 *)(param_1 + 0xa4);
  *(undefined4 *)((longlong)param_2 + 0x5c) = *(undefined4 *)(param_1 + 0xac);
  param_2[0xc] = *(undefined8 *)(param_1 + 0x98);
  *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_1 + 0xa0);
  puVar20 = *(undefined4 **)(param_1 + 0x1170);
  uVar1 = puVar20[1];
  uVar2 = puVar20[2];
  *(undefined4 *)(param_2 + 0xf) = *puVar20;
  *(undefined4 *)((longlong)param_2 + 0x7c) = uVar1;
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  FUN_18042e190(uVar1,uVar2,uVar19,1);
  return;
}



/* ===== 1804364b0 FUN_1804364b0 ===== */

void FUN_1804364b0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  FUN_18042df10(param_1,param_3);
  *(undefined8 *)(param_2 + 0x6c) = *param_3;
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_3 + 1);
  if ((*(char *)(param_1 + 0xd0) == '\0') || (*(int *)(param_1 + 0x60) != 2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  uVar1 = FUN_180474850(param_3,0,*(undefined1 *)(param_1 + 8));
  *(undefined1 *)(param_2 + 0x50) = uVar1;
  return;
}



/* ===== 180436520 FUN_180436520 ===== */

void FUN_180436520(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
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
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [208];
  
  plVar1 = DAT_181111dd8;
  if (DAT_181111dd0 != DAT_181111dd8) {
    plVar3 = DAT_181111dd0;
    do {
      if ((*plVar3 != 0) && (*(char *)(*plVar3 + 0x28) != '\0')) {
        puVar2 = (undefined4 *)FUN_18042dfd0(local_d8);
        local_198 = *(undefined8 *)(puVar2 + 4);
        uStack_190 = *(undefined8 *)(puVar2 + 6);
        local_188 = *(undefined8 *)(puVar2 + 8);
        uStack_180 = *(undefined8 *)(puVar2 + 10);
        local_1a8 = *puVar2;
        uStack_1a4 = puVar2[1];
        uStack_1a0 = puVar2[2];
        uStack_19c = puVar2[3];
        local_178 = *(undefined8 *)(puVar2 + 0xc);
        uStack_170 = *(undefined8 *)(puVar2 + 0xe);
        local_168 = *(undefined8 *)(puVar2 + 0x10);
        uStack_160 = *(undefined8 *)(puVar2 + 0x12);
        local_158 = *(undefined8 *)(puVar2 + 0x14);
        uStack_150 = *(undefined8 *)(puVar2 + 0x16);
        local_148 = *(undefined8 *)(puVar2 + 0x18);
        uStack_140 = *(undefined8 *)(puVar2 + 0x1a);
        local_138 = *(undefined8 *)(puVar2 + 0x1c);
        uStack_130 = *(undefined8 *)(puVar2 + 0x1e);
        local_128 = *(undefined8 *)(puVar2 + 0x20);
        uStack_120 = *(undefined8 *)(puVar2 + 0x22);
        local_118 = *(undefined8 *)(puVar2 + 0x24);
        uStack_110 = *(undefined8 *)(puVar2 + 0x26);
        local_108 = *(undefined8 *)(puVar2 + 0x28);
        uStack_100 = *(undefined8 *)(puVar2 + 0x2a);
        local_f8 = puVar2[0x2c];
        uStack_f4 = puVar2[0x2d];
        uStack_f0 = puVar2[0x2e];
        uStack_ec = puVar2[0x2f];
        local_e8 = puVar2[0x30];
        uStack_e4 = puVar2[0x31];
        uStack_e0 = puVar2[0x32];
        uStack_dc = puVar2[0x33];
        FUN_18043a730(param_1 + 0x20,&local_1a8);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return;
}



/* ===== 180436640 FUN_180436640 ===== */

undefined8 FUN_180436640(void)

{
  (*DAT_180961ca8)();
  return 1;
}



/* ===== 1804366a0 FUN_1804366a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1804366a0(float *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_190;
  float local_188;
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
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  if ((DAT_181111968 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181111968 = '\x01';
    DAT_18111196c = FUN_18038eaf0("CCSWeaponBaseVData","m_nZoomLevels");
    DAT_181111970 = FUN_18038eaf0("CCSWeaponBaseVData","m_nNumBullets");
  }
  if (((*(longlong *)(param_2 + 0x228) == 0) || (*(longlong *)(param_2 + 0x888) == 0)) ||
     (*(longlong *)(param_2 + 0x890) == 0)) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  else {
    uVar5 = FUN_180447e30(param_2 + 0xe0,param_3);
    local_1a0._4_4_ = (undefined4)(uVar5 >> 0x20);
    uVar11 = local_1a0._4_4_;
    local_1a0 = uVar5;
    puVar6 = (undefined8 *)FUN_18045a980(&local_1a0,param_2 + 0xe0,uVar5 & 0xffffffff,uVar11);
    fVar12 = (float)*(undefined8 *)(param_2 + 0x8c) + (float)*puVar6;
    fVar13 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x8c) >> 0x20) +
             (float)((ulonglong)*puVar6 >> 0x20);
    local_188 = *(float *)(puVar6 + 1) + *(float *)(param_2 + 0x94);
    local_190 = CONCAT44(fVar13,fVar12);
    if (*(int *)(param_2 + 0x60) == 0) {
      fVar12 = fVar12 * DAT_1808ac014;
      fVar13 = fVar13 * DAT_1808ac014;
      fVar8 = (float)FUN_180517200(fVar12);
      fVar9 = (float)FUN_180517200(fVar13);
      *param_1 = fVar9 * fVar8;
      fVar13 = (float)FUN_180517790(fVar13);
      param_1[1] = fVar13 * fVar8;
      uVar10 = FUN_180517790(fVar12);
      param_1[2] = (float)(uVar10 ^ DAT_1808adec0);
    }
    else {
      if (DAT_180961ca0 == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*DAT_180961ca0)(0,&local_190,uVar5 & 0xffffffff);
      }
      *(undefined4 *)(param_2 + 0x838) = *(undefined4 *)(param_2 + 0xec);
      *(undefined4 *)(param_2 + 0x83c) = *(undefined4 *)(param_2 + 0xf0);
      *(undefined4 *)(param_2 + 0x840) = *(undefined4 *)(param_2 + 0xf4);
      *(undefined4 *)(param_2 + 0x844) = *(undefined4 *)(param_2 + 0x148);
      *(undefined1 *)(param_2 + 0x848) = *(undefined1 *)(param_2 + 0x150);
      *(undefined1 *)(param_2 + 0x849) = *(undefined1 *)(param_2 + 0x152);
      *(undefined1 *)(param_2 + 0x84a) = *(undefined1 *)(param_2 + 0x18a);
      *(undefined4 *)(param_2 + 0x84c) = *(undefined4 *)(param_2 + 0x23c);
      *(undefined4 *)(param_2 + 0x850) = *(undefined4 *)(param_2 + 0x244);
      *(undefined4 *)(param_2 + 0x854) = *(undefined4 *)(param_2 + 0x248);
      *(undefined4 *)(param_2 + 0x858) = *(undefined4 *)(param_2 + 0x3b4);
      *(undefined4 *)(param_2 + 0x85c) = *(undefined4 *)(param_2 + 0x43c);
      *(undefined4 *)(param_2 + 0x860) = *(undefined4 *)(param_2 + 0x440);
      uVar11 = FUN_18047d4f0(param_2 + 0x838);
      FUN_18047d090();
      uVar10 = *(uint *)(param_2 + 0x870);
      if (1 < uVar10) {
        uVar10 = 0;
      }
      if ((*(longlong *)(param_2 + 0x890) == 0) || (DAT_1811142d0 == 0)) {
        local_1d0 = 0;
      }
      else {
        local_1d0 = FUN_18000f3d0((ulonglong)DAT_1811142d0 +
                                  (ulonglong)(uVar10 * 4) + *(longlong *)(param_2 + 0x890));
      }
      if (((*(longlong *)(param_2 + 0x890) == 0) || (DAT_181111970 == 0)) ||
         (0x7ffffffefffe < (*(longlong *)(param_2 + 0x890) + (ulonglong)DAT_181111970) - 0x10000)) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_180011200();
      }
      local_1a8._4_4_ = iVar4;
      local_1a0 = CONCAT44(local_1a0._4_4_,0x20);
      local_1a8._0_4_ = 1;
      puVar6 = (undefined8 *)local_1a8;
      if (0 < iVar4) {
        puVar6 = (undefined8 *)(local_1a8 + 4);
      }
      local_f8 = 0;
      uStack_f0 = 0;
      puVar7 = &local_1a0;
      if (iVar4 < 0x21) {
        puVar7 = puVar6;
      }
      local_e8 = 0;
      uStack_e0 = 0;
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
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      if (DAT_180961ca8 != 0) {
        uVar1 = *(undefined4 *)puVar7;
        local_1b8 = &local_178;
        local_1c8 = *(undefined4 *)(param_2 + 0x864);
        local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,uVar11);
        local_1c0 = &local_f8;
        cVar2 = FUN_180436640(*(undefined2 *)(param_2 + 0x898),uVar1,
                              *(undefined4 *)(param_2 + 0x870),iVar3 + 1);
        if (cVar2 != '\0') {
          local_1d8 = &local_178;
          local_1d0 = 1;
          if (1 < iVar4) {
            local_1d0 = uVar1;
          }
          FUN_180447f30(param_1,&local_190,1,&local_f8);
          return param_1;
        }
      }
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
  }
  return param_1;
}



/* ===== 180436b00 FUN_180436b00 ===== */

void FUN_180436b00(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 local_58;
  uint uStack_54;
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
  undefined2 local_18;
  undefined1 uStack_16;
  uint5 uStack_15;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  puVar9 = *(undefined8 **)(param_1 + 0x40);
  if (puVar9 != puVar1) {
    do {
      if ((*(char *)(puVar9 + 8) != '\0') || (*(char *)(puVar9 + 4) != '\0')) break;
      puVar9 = puVar9 + 9;
    } while (puVar9 != puVar1);
    if (puVar9 != puVar1) {
      puVar7 = puVar9 + 9;
      if (puVar7 != puVar1) {
        do {
          if ((*(char *)(puVar7 + 8) == '\0') && (*(char *)(puVar7 + 4) == '\0')) {
            uVar6 = puVar7[1];
            *puVar9 = *puVar7;
            puVar9[1] = uVar6;
            uVar6 = puVar7[3];
            puVar9[2] = puVar7[2];
            puVar9[3] = uVar6;
            uVar6 = puVar7[5];
            puVar9[4] = puVar7[4];
            puVar9[5] = uVar6;
            uVar3 = *(undefined4 *)((longlong)puVar7 + 0x34);
            uVar4 = *(undefined4 *)(puVar7 + 7);
            uVar5 = *(undefined4 *)((longlong)puVar7 + 0x3c);
            *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(puVar7 + 6);
            *(undefined4 *)((longlong)puVar9 + 0x34) = uVar3;
            *(undefined4 *)(puVar9 + 7) = uVar4;
            *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar5;
            puVar9[8] = puVar7[8];
            puVar9 = puVar9 + 9;
          }
          puVar7 = puVar7 + 9;
        } while (puVar7 != puVar1);
        if (puVar9 == puVar1) goto LAB_180436bc0;
      }
      lVar8 = *(longlong *)(param_1 + 0x48) - (longlong)puVar1;
      FUN_180540530(puVar9,puVar1,lVar8);
      *(longlong *)(param_1 + 0x48) = lVar8 + (longlong)puVar9;
    }
  }
LAB_180436bc0:
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) | 0x800;
  plVar2 = *(longlong **)(param_1 + 0x48);
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = local_28 & 0xffffff00;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_16 = 0;
  local_58 = 0;
  uStack_50 = 0x800;
  local_48 = CONCAT31(local_48._1_3_,1);
  if (plVar2 == *(longlong **)(param_1 + 0x50)) {
    FUN_18008c530(param_1 + 0x40,plVar2,&local_58);
    return;
  }
  *plVar2 = (ulonglong)uStack_54 << 0x20;
  plVar2[1] = 0x800;
  plVar2[2] = (ulonglong)local_48;
  plVar2[3] = 0;
  plVar2[4] = (ulonglong)local_38;
  plVar2[5] = 0;
  plVar2[6] = (ulonglong)local_28;
  plVar2[7] = 0;
  plVar2[8] = (ulonglong)uStack_15 << 0x18;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x48;
  return;
}



/* ===== 180436c80 FUN_180436c80 ===== */

float * FUN_180436c80(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float local_res8 [8];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68 [24];
  
  FUN_180436030();
  if (DAT_181111960 == (code *)0x0) {
    local_78 = (float)FUN_180517790(param_2);
    local_res8[0] = (float)FUN_180517200(param_2);
  }
  else {
    (*DAT_181111960)(param_2,&local_78,local_res8);
  }
  FUN_180436030();
  if (DAT_181111960 == (code *)0x0) {
    local_70 = (float)FUN_180517790(param_3);
    local_74 = (float)FUN_180517200(param_3);
  }
  else {
    (*DAT_181111960)(param_3,&local_70,&local_74);
  }
  FUN_180436030();
  if (DAT_181111960 == (code *)0x0) {
    fVar1 = (float)FUN_180517790(param_4);
    local_6c = (float)FUN_180517200(param_4);
  }
  else {
    (*DAT_181111960)(param_4,local_68,&local_6c);
    fVar1 = local_68[0];
  }
  *param_1 = fVar1 * local_res8[0] * local_74 - local_6c * local_78 * local_70;
  param_1[1] = fVar1 * local_res8[0] * local_70 + local_6c * local_78 * local_74;
  param_1[3] = fVar1 * local_78 * local_70 + local_6c * local_res8[0] * local_74;
  param_1[2] = local_6c * local_res8[0] * local_70 - fVar1 * local_78 * local_74;
  return param_1;
}



/* ===== 180436e30 FUN_180436e30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180436e30(longlong param_1,float *param_2,float param_3)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_b8 [176];
  
  if (param_3 < 0.0) {
    param_3 = (float)FUN_18051af10(param_3);
  }
  else {
    param_3 = SQRT(param_3);
  }
  uVar1 = DAT_1808adec0;
  fVar12 = DAT_1808ac34c;
  fVar3 = DAT_1808abff8;
  fVar8 = 0.0;
  fVar9 = *param_2 - *(float *)(param_1 + 0xa4);
  fVar11 = param_2[2] - *(float *)(param_1 + 0xac);
  fVar7 = param_2[1] - *(float *)(param_1 + 0xa8);
  param_3 = *(float *)(param_1 + 0x2c) / param_3;
  if (DAT_1808ac34c <= param_3) {
    param_3 = DAT_1808ac34c;
  }
  if ((fVar9 == 0.0) && (fVar7 == 0.0)) {
    if (fVar11 <= 0.0) {
      fVar9 = 0.0;
      fVar7 = DAT_1808acaf4;
    }
    else {
      fVar9 = 0.0;
      fVar7 = DAT_1808acba8;
    }
  }
  else {
    FUN_180436030();
    if (DAT_181111978 == (code *)0x0) {
      fVar13 = (float)FUN_180516b00(fVar7,fVar9);
    }
    else {
      fVar13 = (float)(*DAT_181111978)();
    }
    fVar7 = fVar7 * fVar7 + fVar9 * fVar9;
    if (fVar7 < 0.0) {
      fVar7 = (float)FUN_18051af10(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    FUN_180436030();
    if (DAT_181111978 == (code *)0x0) {
      fVar7 = (float)FUN_180516b00((uint)fVar11 ^ uVar1,fVar7);
    }
    else {
      fVar7 = (float)(*DAT_181111978)();
    }
    fVar9 = (fVar13 * DAT_1808acb58) / DAT_1808ac680;
    fVar7 = (fVar7 * DAT_1808acb58) / DAT_1808ac680;
    if (fVar9 < 0.0) {
      fVar9 = fVar9 + DAT_1808acbd0;
    }
    if (fVar7 < 0.0) {
      fVar7 = fVar7 + DAT_1808acbd0;
    }
    fVar9 = fVar9 * fVar3;
  }
  pfVar2 = (float *)FUN_180436c80(local_b8,*(float *)(param_1 + 0x8c) * fVar3,
                                  *(float *)(param_1 + 0x90) * fVar3,
                                  *(float *)(param_1 + 0x94) * fVar3);
  fVar3 = *pfVar2;
  fVar11 = pfVar2[1];
  fVar13 = pfVar2[2];
  fVar4 = pfVar2[3];
  pfVar2 = (float *)FUN_180436c80(local_b8,fVar7 * DAT_1808abff8,fVar9,0);
  fVar9 = param_3 - DAT_1808ac1f4;
  fVar6 = fVar11 * pfVar2[1] + fVar3 * *pfVar2 + fVar4 * pfVar2[3] + fVar13 * pfVar2[2];
  fVar7 = (float)((uint)fVar6 & _DAT_1808ade90);
  param_3 = ((((DAT_1808ac6c0 - fVar7 * _DAT_1808ac418) * fVar7 - _DAT_1808ac690) * fVar7 +
             DAT_1808ac390) * fVar9 * fVar9 + (fVar7 * _DAT_1808ac128 - _DAT_1808ac384) * fVar7 +
            _DAT_1808ac2b0) * fVar9 * (param_3 - fVar12) * param_3 + param_3;
  if ((0.0 < fVar6) || (NAN(fVar6))) {
    fVar7 = param_3;
  }
  else {
    fVar7 = (float)((uint)param_3 ^ uVar1);
  }
  param_3 = fVar12 - param_3;
  fVar11 = fVar11 * param_3 + pfVar2[1] * fVar7;
  fVar6 = fVar3 * param_3 + *pfVar2 * fVar7;
  fVar9 = fVar13 * param_3 + pfVar2[2] * fVar7;
  fVar7 = fVar4 * param_3 + pfVar2[3] * fVar7;
  fVar3 = fVar7 * fVar7 + fVar9 * fVar9 + fVar11 * fVar11 + fVar6 * fVar6;
  if (fVar3 == 0.0) {
    fVar11 = 0.0;
    fVar9 = 0.0;
  }
  else {
    if (fVar3 < 0.0) {
      fVar3 = (float)FUN_18051af10(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    fVar8 = fVar6 / fVar3;
    fVar12 = fVar7 / fVar3;
    fVar11 = fVar11 / fVar3;
    fVar9 = fVar9 / fVar3;
  }
  fVar4 = (float)((uint)fVar8 ^ uVar1);
  fVar10 = fVar12 * fVar12 - fVar9 * fVar9;
  fVar5 = fVar12 * fVar9;
  fVar6 = fVar4 * fVar11;
  fVar13 = (fVar10 - fVar11 * fVar11) - fVar4 * fVar8;
  fVar7 = ((fVar5 + fVar5) - fVar6) - fVar6;
  fVar3 = fVar7 * fVar7 + fVar13 * fVar13;
  if (fVar3 < 0.0) {
    fVar3 = (float)FUN_18051af10(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  if (fVar3 <= DAT_1808abfbc) {
    fVar13 = (fVar10 - fVar8 * fVar8) - (float)((uint)fVar11 ^ uVar1) * fVar11;
    fVar7 = (float)((uint)((((float)((uint)fVar9 ^ uVar1) * fVar12 - fVar5) + fVar11 * fVar8) -
                          fVar6) ^ uVar1);
    FUN_180436030();
    if (DAT_181111978 != (code *)0x0) {
      fVar7 = (float)(*DAT_181111978)(fVar7,fVar13);
      goto LAB_1804372e3;
    }
  }
  else {
    FUN_180436030();
    if (DAT_181111978 != (code *)0x0) {
      fVar7 = (float)(*DAT_181111978)();
      goto LAB_1804372e3;
    }
  }
  fVar7 = (float)FUN_180516b00(fVar7,fVar13);
LAB_1804372e3:
  FUN_180436030();
  if (DAT_181111978 == (code *)0x0) {
    fVar3 = (float)FUN_180516b00((uint)(((fVar9 * fVar8 - fVar12 * fVar11) - fVar12 * fVar11) -
                                       fVar4 * fVar9) ^ uVar1,fVar3);
  }
  else {
    fVar3 = (float)(*DAT_181111978)();
  }
  fVar3 = fVar3 * DAT_1808aca94;
  fVar7 = fVar7 * DAT_1808aca94;
  if (((DAT_180962170 != 0) && (DAT_180961a38 != 0)) &&
     (pfVar2 = (float *)FUN_180264580(), pfVar2 + -0x4000 < (float *)0x7ffffffeffff)) {
    *pfVar2 = fVar3;
    pfVar2[1] = fVar7;
    pfVar2[2] = 0.0;
  }
  **(float **)(param_1 + 0x1170) = fVar3;
  *(float *)(*(longlong *)(param_1 + 0x1170) + 4) = fVar7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1170) + 8) = 0;
  return;
}



/* ===== 180437420 FUN_180437420 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180437420(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_2b8 [32];
  float local_298 [2];
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_278;
  int local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined1 local_268;
  undefined8 local_264;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  uint local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined2 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_14f;
  undefined8 local_14c;
  undefined8 local_144;
  undefined4 local_13c;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined4 local_11c;
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
  undefined4 local_80;
  ulonglong local_78;
  
  fVar3 = DAT_1808ac34c;
  local_78 = DAT_180919500 ^ (ulonglong)auStack_2b8;
  local_240 = 0;
  fVar12 = 0.0;
  local_238 = 0xffffffff;
  local_234 = 0;
  local_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = _DAT_1808ad310;
  uStack_180 = _UNK_1808ad318;
  local_178 = 0;
  local_174 = 0x3f800000;
  local_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_14c = 0;
  local_144 = 0;
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_12c = 0;
  local_124 = 0xffffffffffffffff;
  local_11c = 0xffffffff;
  uStack_110 = 0;
  local_108 = _DAT_1808ad410;
  uStack_100 = _UNK_1808ad418;
  local_118 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
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
  local_80 = 0;
  uVar6 = FUN_180447e30(param_1 + 0xe0,param_2[3]);
  local_278 = *(undefined4 *)(param_1 + 0xbc);
  local_274 = *(int *)(param_1 + 0xb04);
  local_270 = *(undefined4 *)(*(longlong *)(param_2[2] + 8) + 0x10);
  local_26c = *(undefined4 *)(param_1 + 0x42c);
  local_268 = 0;
  local_264 = *(undefined8 *)param_2[3];
  local_25c = *(undefined4 *)((undefined8 *)param_2[3] + 1);
  local_258 = *param_2;
  local_250 = *(undefined4 *)(param_2 + 1);
  puVar1 = (undefined8 *)param_2[5];
  local_24c = *(undefined4 *)puVar1;
  local_248 = *(undefined4 *)((longlong)puVar1 + 4);
  if (param_2[4] == 0) {
    local_244 = 0;
  }
  else {
    local_244 = (uint)*(byte *)(param_2[4] + 0x39);
  }
  if ((*(char *)(param_1 + 0x50) == '\0') || (local_150 = 1, *(char *)(param_1 + 0x78) == '\0')) {
    local_150 = 0;
  }
  local_14f = *(undefined1 *)(param_1 + 0x75);
  local_290 = uVar6;
  if (&local_240 != puVar1) {
    FUN_18046a130(&local_240);
  }
  uVar4 = local_270;
  iVar9 = local_274;
  iVar8 = local_274 - *(int *)param_2[5];
  fVar11 = 0.0 - (float)((int *)param_2[5])[1];
  if (fVar11 < 0.0) {
    fVar11 = fVar11 + fVar3;
    if (fVar11 < fVar3) {
      iVar8 = iVar8 + -1;
    }
    else {
      fVar11 = 0.0;
    }
  }
  local_158 = CONCAT44(local_158._4_4_,(float)iVar8 + fVar11);
  local_298[0] = 0.0;
  fVar10 = (float)FUN_180512fd0(*(float *)(param_1 + 0x828) * DAT_1808acab0,local_298);
  fVar11 = local_298[0];
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + fVar3;
    if (fVar10 < fVar3) {
      fVar11 = local_298[0] + DAT_1808acda0;
    }
    else {
      fVar10 = 0.0;
    }
  }
  iVar8 = (int)uVar6 - (int)fVar11;
  fVar11 = local_290._4_4_;
  fVar10 = local_290._4_4_ - fVar10;
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + fVar3;
    if (fVar10 < fVar3) {
      iVar8 = iVar8 + -1;
    }
    else {
      fVar10 = 0.0;
    }
  }
  iVar9 = iVar9 - iVar8;
  fVar10 = 0.0 - fVar10;
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + fVar3;
    if (fVar10 < fVar3) {
      iVar9 = iVar9 + -1;
    }
    else {
      fVar10 = 0.0;
    }
  }
  local_158 = CONCAT44((float)iVar9 + fVar10,(undefined4)local_158);
  uVar7 = FUN_180446830(param_1 + 0xe0);
  iVar9 = (int)uVar6 - (int)uVar7;
  local_290._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  fVar11 = fVar11 - local_290._4_4_;
  if (fVar11 < 0.0) {
    if (fVar3 <= fVar11 + fVar3) goto LAB_18043776a;
    iVar9 = iVar9 + -1;
    fVar11 = fVar11 + fVar3;
  }
  fVar12 = fVar11;
LAB_18043776a:
  local_290 = CONCAT44(fVar12,iVar9);
  cVar5 = FUN_1804468b0(param_1 + 0xe0,&local_290,local_298);
  if (cVar5 == '\0') {
    local_158 = local_158 & 0xffffffff;
  }
  local_288 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_14c = CONCAT44(local_288,*(undefined4 *)((longlong)param_2 + 0x44));
  local_144 = CONCAT44(local_144._4_4_,*(undefined4 *)(param_2[2] + 0x6c));
  local_290 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x44),uVar4);
  puVar1 = *(undefined8 **)(param_1 + 0x1ed8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x1ee0)) {
    FUN_18043af30(param_1 + 0x1ed0,puVar1,&local_290);
  }
  else {
    *puVar1 = local_290;
    *(undefined4 *)(puVar1 + 1) = local_288;
    *(longlong *)(param_1 + 0x1ed8) = *(longlong *)(param_1 + 0x1ed8) + 0xc;
  }
  lVar2 = *(longlong *)(param_1 + 0x1ef0);
  if (lVar2 == *(longlong *)(param_1 + 0x1ef8)) {
    FUN_18043ad40(param_1 + 0x1ee8,lVar2,&local_278);
  }
  else {
    FUN_18043b220(lVar2,&local_278);
    *(longlong *)(param_1 + 0x1ef0) = *(longlong *)(param_1 + 0x1ef0) + 0x200;
  }
  FUN_18000f890(&local_118);
  FUN_1802a9370(&local_170);
  FUN_1802a9370(&local_1a8);
  FUN_180200b70(&local_1c0);
  return;
}



/* ===== 1804378b0 FUN_1804378b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804378b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  longlong *plVar37;
  longlong lVar38;
  char cVar39;
  char cVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  undefined4 uVar44;
  longlong lVar45;
  undefined8 *puVar46;
  float *pfVar47;
  ulonglong uVar48;
  undefined1 uVar49;
  longlong lVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined8 *local_290;
  undefined1 local_288;
  undefined2 local_287;
  undefined1 local_285;
  undefined4 local_284;
  undefined5 local_280;
  undefined3 uStack_27b;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined1 local_26c;
  undefined1 local_26b;
  undefined1 local_26a;
  undefined1 local_269;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 local_260;
  undefined4 local_25f;
  undefined2 local_25b;
  undefined1 local_259;
  undefined8 local_258;
  undefined4 *puStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined1 local_22c;
  undefined7 local_22b;
  undefined4 uStack_224;
  undefined1 local_220;
  undefined2 local_21f;
  undefined1 local_21d;
  undefined4 local_21c;
  undefined1 local_218;
  undefined2 local_217;
  undefined1 local_215;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined2 uStack_15f;
  undefined1 uStack_15d;
  undefined1 local_15c;
  undefined2 uStack_15b;
  undefined1 uStack_159;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 local_14c;
  longlong local_148;
  longlong local_140;
  undefined1 local_130 [40];
  undefined8 local_108;
  longlong lStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_2b8;
  if ((DAT_181111968 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181111968 = '\x01';
    DAT_18111196c = FUN_18038eaf0("CCSWeaponBaseVData","m_nZoomLevels");
    DAT_181111970 = FUN_18038eaf0("CCSWeaponBaseVData","m_nNumBullets");
  }
  fVar52 = DAT_1808ac00c;
  cVar39 = *(char *)(param_1 + 0x73);
  uVar48 = 1;
  if ((*(int *)(param_1 + 0x60) == 2) && (*(short *)(param_1 + 0x1160) == 0x40)) {
    cVar39 = *(char *)(param_1 + 0x74);
    uVar48 = 0x801;
  }
  if (cVar39 == '\0') {
    return 0;
  }
  if ((*(char *)(param_1 + 9) == '\0') && ((*(ulonglong *)(param_1 + 0x1188) & uVar48) == 0)) {
    return 0;
  }
  local_210 = *(undefined8 **)(param_1 + 0x1170);
  if ((*(char *)(param_1 + 0xc4) != '\0') ||
     (*(int *)(param_1 + 0x23c) != *(int *)(param_1 + 0xb04))) {
    FUN_180466580(param_1 + 0xe0,param_1 + 0x9a8,0);
    iVar41 = FUN_180434f90(*(undefined4 *)(param_1 + 0xbc));
    if ((0 < iVar41) && (iVar42 = FUN_180435150(), iVar41 <= iVar42)) {
      uVar44 = *(undefined4 *)(param_1 + 0x244);
      fVar51 = (float)*(int *)(param_1 + 0x200) * fVar52;
      *(float *)(param_1 + 0x244) = fVar51;
      *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_1 + 0xec);
      *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0xf4);
      *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_1 + 0x148);
      *(undefined1 *)(param_1 + 0x848) = *(undefined1 *)(param_1 + 0x150);
      *(undefined1 *)(param_1 + 0x849) = *(undefined1 *)(param_1 + 0x152);
      *(undefined1 *)(param_1 + 0x84a) = *(undefined1 *)(param_1 + 0x18a);
      *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_1 + 0x23c);
      *(float *)(param_1 + 0x850) = fVar51;
      *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_1 + 0x248);
      *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x3b4);
      *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)(param_1 + 0x43c);
      *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x440);
      do {
        FUN_18047d770(param_1 + 0x838);
        iVar41 = iVar41 + -1;
      } while (iVar41 != 0);
      *(undefined4 *)(param_1 + 0x244) = uVar44;
      *(undefined4 *)(param_1 + 0x850) = uVar44;
    }
    *(undefined8 *)(param_1 + 0x20a8) = **(undefined8 **)(param_1 + 0x1178);
    local_298 = (longlong *)(param_1 + 0x970);
    FUN_1804735d0(&local_188,param_1,param_1 + 0x920);
    uVar43 = *(uint *)(param_1 + 0x148) & 1;
    if (((uVar43 != 0) || (*(char *)(param_1 + 0x53) != '\0')) &&
       (*(char *)(param_1 + 0x51) != '\0')) {
      uVar49 = *(undefined1 *)(param_1 + 0x54);
      if (((uVar43 != 0) && (*(char *)(param_1 + 0x76) != '\0')) &&
         (0x10 < *(int *)(param_1 + 0x23c) - *(int *)(param_1 + 0x364))) {
        uVar49 = 0;
      }
      FUN_18045bbe0(param_1 + 0xe0,&local_188,uVar49,*(char *)(param_1 + 0xd0) == '\0');
    }
    lVar45 = local_140 - local_148;
    lVar50 = local_148;
    while (lVar38 = local_140, 0x1e < (ulonglong)((lVar45 >> 3) * -0x71c71c71c71c71c7)) {
      do {
        lVar45 = lVar38;
        if (lVar45 == lVar50) goto LAB_180437bde;
        lVar38 = lVar45 + -0x48;
      } while (*(longlong *)(lVar45 + -0x40) != 0);
      FUN_180540530(lVar45 + -0x48,lVar45,local_140 - lVar45);
      lVar50 = local_148;
LAB_180437bde:
      local_140 = local_140 + -0x48;
      lVar45 = local_140 - lVar50;
    }
    if ((*(int *)(param_1 + 0x60) == 2) && (*(char *)(param_1 + 0xd0) != '\0')) {
      uStack_160 = 0;
      uStack_15f = 0x3000;
      uStack_15d = 0x42;
    }
    FUN_18045a8e0(&local_188,param_1 + 0x920,param_1 + 0x20a8);
    FUN_18045ad20(param_1 + 0xe0,&local_188);
    FUN_180431870(param_1 + 0x20b0,&local_188);
    *(undefined1 *)(param_1 + 0x2130) = 1;
    FUN_180011610(local_130);
    FUN_180200b70(&local_148);
  }
  puVar1 = (undefined8 *)(param_1 + 0x1190);
  *(undefined2 *)(param_1 + 0x11e0) = 0;
  *(undefined8 *)(param_1 + 0x1288) = 0;
  *puVar1 = 0;
  *(undefined2 *)(param_1 + 0x12a8) = 0;
  if (*(longlong *)(param_1 + 0x11b0) != *(longlong *)(param_1 + 0x11b8)) {
    *(longlong *)(param_1 + 0x11b8) = *(longlong *)(param_1 + 0x11b0);
  }
  plVar2 = (longlong *)(param_1 + 0x11c8);
  if (*plVar2 != *(longlong *)(param_1 + 0x11d0)) {
    *(longlong *)(param_1 + 0x11d0) = *plVar2;
  }
  if (*(longlong *)(param_1 + 0x1270) != *(longlong *)(param_1 + 0x1278)) {
    *(longlong *)(param_1 + 0x1278) = *(longlong *)(param_1 + 0x1270);
  }
  FUN_1804364b0(param_1,puVar1,param_1 + 0xe0);
  local_288 = *(undefined1 *)(param_1 + 0x40);
  local_287 = local_188._1_2_;
  local_285 = local_188._3_1_;
  local_284 = *(undefined4 *)(param_1 + 0xb04);
  local_280 = 0x1809f35b8;
  uStack_27b = 0;
  local_278 = *(undefined4 *)(param_1 + 0x90c);
  uStack_274 = *(undefined4 *)(param_1 + 0x910);
  local_270 = *(undefined4 *)(param_1 + 0x60);
  local_26c = *(undefined1 *)(param_1 + 8);
  local_26b = *(undefined1 *)(param_1 + 0x56);
  local_26a = *(undefined1 *)(param_1 + 0xd0);
  local_269 = local_16c._3_1_;
  local_268 = *(undefined4 *)(param_1 + 4);
  local_264 = *(undefined4 *)(param_1 + 0x38);
  local_260 = *(undefined1 *)(param_1 + 0x24);
  local_25f = CONCAT13(local_15c,CONCAT12(uStack_15d,uStack_15f));
  local_25b = uStack_15b;
  local_259 = uStack_159;
  local_298 = plVar2;
  FUN_180446ee0(&local_288,param_1 + 0xe0,0,0);
  lVar50 = *(longlong *)(param_1 + 0x11d0);
  iVar41 = DAT_181111d9c;
  for (lVar45 = *plVar2; DAT_181111d9c = iVar41, lVar45 != lVar50; lVar45 = lVar45 + 0x60) {
    puVar46 = (undefined8 *)FUN_1804366a0(&local_258,param_1,lVar45);
    uVar44 = *(undefined4 *)(puVar46 + 1);
    *(undefined8 *)(lVar45 + 0x50) = *puVar46;
    *(undefined4 *)(lVar45 + 0x58) = uVar44;
    iVar41 = DAT_181111d9c;
  }
  if ((0.0 < *(float *)(param_1 + 0x1c)) && (uVar43 = 0, 0 < iVar41)) {
    do {
      if (2 < uVar43) break;
      uVar48 = (ulonglong)uVar43;
      if ((&DAT_180c87458)[uVar48 * 0x201] != 0) {
        iVar42 = (&DAT_180c8843c)[uVar48 * 0x402] + *(int *)(param_1 + 0x20);
        if (*(int *)(&DAT_180c88440 + uVar48 * 0x1008) < iVar42) {
          iVar42 = *(int *)(&DAT_180c88440 + uVar48 * 0x1008);
        }
        FUN_18042e250(&DAT_180c87450 + uVar48 * 0x402,iVar42);
      }
      uVar43 = uVar43 + 1;
    } while ((int)uVar43 < iVar41);
  }
  FUN_180436520(puVar1);
  *(undefined1 *)(param_1 + 0x11e1) = 1;
  *(undefined4 *)(param_1 + 0x2088) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
  FUN_180436300(param_1,puVar1);
  pfVar47 = (float *)FUN_1804460e0(puVar1,param_1 + 0x1ed0);
  if (((pfVar47 == (float *)0x0) || (*(longlong *)(pfVar47 + 4) == 0)) ||
     (fVar51 = *(float *)(*(longlong *)(pfVar47 + 4) + 0x6c),
     pfVar47[3] <= fVar51 && fVar51 != pfVar47[3])) {
    pfVar47 = (float *)0x0;
  }
  else if (pfVar47[0x11] <= *(float *)(param_1 + 0x4c) &&
           *(float *)(param_1 + 0x4c) != pfVar47[0x11]) {
    pfVar47 = (float *)0x0;
  }
  if (0.0 < *(float *)(param_1 + 0x1f0c)) {
    puVar46 = (undefined8 *)FUN_1804366a0(&local_258,param_1,param_1 + 0x2028);
    uVar44 = *(undefined4 *)(puVar46 + 1);
    *(undefined8 *)(param_1 + 0x2078) = *puVar46;
    *(undefined4 *)(param_1 + 0x2080) = uVar44;
    if (0.0 < *(float *)(param_1 + 0x1f0c)) {
      local_298 = (longlong *)((ulonglong)local_298 & 0xffffffff00000000);
      cVar39 = FUN_180442e40(puVar1,(float *)(param_1 + 0x1f00),pfVar47,
                             *(uint *)(param_1 + 0x1258) & 0xff);
      if (cVar39 != '\0') {
        pfVar47 = (float *)(param_1 + 0x1f00);
      }
    }
  }
  plVar37 = DAT_181111dd8;
  fVar51 = DAT_1808acd08;
  plVar2 = DAT_181111dd0;
  if (0.0 < *(float *)(param_1 + 0x30)) {
    for (; plVar2 != plVar37; plVar2 = plVar2 + 1) {
      lVar50 = *plVar2;
      if ((lVar50 != 0) && (*(longlong *)(lVar50 + 0x20) != 0)) {
        iVar41 = *(int *)(param_1 + 0xb04);
        iVar42 = *(int *)(*(longlong *)(lVar50 + 0x20) + 0xfcc);
        if ((bool)*(char *)(lVar50 + 0x3c) != (iVar42 == iVar41)) {
          *(bool *)(lVar50 + 0x3c) = iVar42 == iVar41;
          fVar53 = fVar51;
          if (iVar42 == iVar41) {
            fVar53 = (float)*(int *)(param_1 + 0xb04) * fVar52;
          }
          *(float *)(lVar50 + 0x38) = fVar53;
        }
      }
    }
  }
  if (pfVar47 == (float *)0x0) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x70) != '\0') && (DAT_18095cd64 != '\0')) {
    uVar10 = *(undefined8 *)(pfVar47 + 2);
    uVar11 = *(undefined8 *)(pfVar47 + 4);
    uVar12 = *(undefined8 *)(pfVar47 + 6);
    local_258 = *(undefined8 *)(pfVar47 + 8);
    puStack_250 = *(undefined4 **)(pfVar47 + 10);
    uVar13 = *(undefined8 *)(pfVar47 + 0xc);
    uVar14 = *(undefined8 *)(pfVar47 + 0xe);
    uVar15 = *(undefined8 *)(pfVar47 + 0x10);
    uVar16 = *(undefined8 *)(pfVar47 + 0x12);
    uVar8 = *(undefined8 *)(pfVar47 + 0x14);
    puVar46 = *(undefined8 **)(pfVar47 + 4);
    local_108 = *puVar46;
    lStack_100 = puVar46[1];
    uVar17 = puVar46[2];
    uVar18 = puVar46[3];
    uVar19 = puVar46[4];
    uVar20 = puVar46[5];
    uVar21 = puVar46[6];
    uVar22 = puVar46[7];
    uVar23 = puVar46[8];
    uVar24 = puVar46[9];
    uVar25 = puVar46[10];
    uVar26 = puVar46[0xb];
    uVar27 = puVar46[0xc];
    uVar28 = puVar46[0xd];
    uVar29 = puVar46[0xe];
    uVar30 = puVar46[0xf];
    uVar31 = puVar46[0x10];
    uVar32 = puVar46[0x11];
    uVar33 = puVar46[0x12];
    uVar34 = puVar46[0x13];
    uVar35 = puVar46[0x14];
    uVar36 = puVar46[0x15];
    local_208 = puVar46[0x16];
    uStack_200 = puVar46[0x17];
    local_1f8 = puVar46[0x18];
    uStack_1f0 = puVar46[0x19];
    puVar46 = *(undefined8 **)(pfVar47 + 6);
    local_1e8 = *puVar46;
    uStack_1e0 = puVar46[1];
    local_1d8 = puVar46[2];
    uStack_1d0 = puVar46[3];
    local_1c8 = puVar46[4];
    uStack_1c0 = puVar46[5];
    local_1b8 = puVar46[6];
    uStack_1b0 = puVar46[7];
    local_1a8 = puVar46[8];
    uStack_1a0 = puVar46[9];
    local_248 = puVar46[10];
    uStack_240 = puVar46[0xb];
    *(undefined8 *)(param_1 + 0x1f00) = *(undefined8 *)pfVar47;
    *(undefined8 *)(param_1 + 0x1f08) = uVar10;
    *(undefined8 *)(param_1 + 0x1f10) = uVar11;
    *(undefined8 *)(param_1 + 0x1f18) = uVar12;
    *(undefined8 *)(param_1 + 0x1f20) = local_258;
    *(undefined4 **)(param_1 + 0x1f28) = puStack_250;
    *(undefined8 *)(param_1 + 0x1f30) = uVar13;
    *(undefined8 *)(param_1 + 0x1f38) = uVar14;
    *(undefined8 *)(param_1 + 8000) = uVar15;
    *(undefined8 *)(param_1 + 0x1f48) = uVar16;
    *(undefined8 *)(param_1 + 0x1f50) = uVar8;
    *(undefined8 *)(param_1 + 0x1f58) = local_108;
    *(longlong *)(param_1 + 0x1f60) = lStack_100;
    *(undefined8 *)(param_1 + 0x1f68) = uVar17;
    *(undefined8 *)(param_1 + 0x1f70) = uVar18;
    *(undefined8 *)(param_1 + 0x1f78) = uVar19;
    *(undefined8 *)(param_1 + 0x1f80) = uVar20;
    *(undefined8 *)(param_1 + 0x1f88) = uVar21;
    *(undefined8 *)(param_1 + 0x1f90) = uVar22;
    *(undefined8 *)(param_1 + 0x1f98) = uVar23;
    *(undefined8 *)(param_1 + 0x1fa0) = uVar24;
    *(undefined8 *)(param_1 + 0x1fa8) = uVar25;
    *(undefined8 *)(param_1 + 0x1fb0) = uVar26;
    *(undefined8 *)(param_1 + 0x1fb8) = uVar27;
    *(undefined8 *)(param_1 + 0x1fc0) = uVar28;
    *(undefined8 *)(param_1 + 0x1fc8) = uVar29;
    *(undefined8 *)(param_1 + 0x1fd0) = uVar30;
    *(undefined8 *)(param_1 + 0x1fd8) = uVar31;
    *(undefined8 *)(param_1 + 0x1fe0) = uVar32;
    *(undefined8 *)(param_1 + 0x1fe8) = uVar33;
    *(undefined8 *)(param_1 + 0x1ff0) = uVar34;
    *(undefined8 *)(param_1 + 0x1ff8) = uVar35;
    *(undefined8 *)(param_1 + 0x2000) = uVar36;
    *(undefined8 *)(param_1 + 0x2008) = local_208;
    *(undefined8 *)(param_1 + 0x2010) = uStack_200;
    *(undefined8 *)(param_1 + 0x2018) = local_1f8;
    *(undefined8 *)(param_1 + 0x2020) = uStack_1f0;
    *(undefined8 *)(param_1 + 0x2028) = local_1e8;
    *(undefined8 *)(param_1 + 0x2030) = uStack_1e0;
    *(undefined8 *)(param_1 + 0x2038) = local_1d8;
    *(undefined8 *)(param_1 + 0x2040) = uStack_1d0;
    *(undefined8 *)(param_1 + 0x2048) = local_1c8;
    *(undefined8 *)(param_1 + 0x2050) = uStack_1c0;
    *(undefined8 *)(param_1 + 0x2058) = local_1b8;
    *(undefined8 *)(param_1 + 0x2060) = uStack_1b0;
    *(undefined8 *)(param_1 + 0x2068) = local_1a8;
    *(undefined8 *)(param_1 + 0x2070) = uStack_1a0;
    *(undefined8 *)(param_1 + 0x2078) = local_248;
    *(undefined8 *)(param_1 + 0x2080) = uStack_240;
    *(undefined8 *)(param_1 + 0x2048) = 0;
    *(undefined8 **)(param_1 + 0x1f10) = (undefined8 *)(param_1 + 0x1f58);
    *(undefined8 **)(param_1 + 0x1f18) = (undefined8 *)(param_1 + 0x2028);
    if (lStack_100 == 0) {
      uVar44 = 0;
    }
    else {
      uVar44 = *(undefined4 *)(lStack_100 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x208c) = uVar44;
    if (puStack_250 == (undefined4 *)0x0) {
      uVar44 = 0;
    }
    else {
      uVar44 = *puStack_250;
    }
    *(undefined4 *)(param_1 + 0x2090) = uVar44;
    fVar52 = DAT_1808ac00c;
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    if ((*(longlong *)(pfVar47 + 4) != 0) &&
       (lVar50 = *(longlong *)(*(longlong *)(pfVar47 + 4) + 8), lVar50 != 0)) {
      iVar41 = *(int *)(lVar50 + 0x10);
      if ((-1 < iVar41) &&
         ((iVar41 < (int)(DAT_181111da8 - DAT_181111da0 >> 6) &&
          (*(int *)((longlong)iVar41 * 0x40 + DAT_181111da0 + 0x18) == 2)))) {
        fVar52 = (float)*(int *)(param_1 + 0xb04) * fVar52;
        fVar51 = *(float *)(param_1 + 0x30);
        if (*(float *)(param_1 + 0x2094) < fVar52) {
          bVar9 = fVar52 < *(float *)(param_1 + 0x2094) + *(float *)(param_1 + 0x34);
          if (0.0 < fVar51) {
            if (bVar9) {
              return 0;
            }
            goto LAB_18043829a;
          }
          if (bVar9) {
            return 0;
          }
        }
        else if (0.0 < fVar51) {
LAB_18043829a:
          if (fVar52 - fVar51 <= *(float *)((longlong)iVar41 * 0x40 + DAT_181111da0 + 0x38)) {
            return 0;
          }
        }
      }
    }
    fVar52 = *pfVar47;
    fVar51 = *(float *)(param_1 + 0xa4);
    fVar53 = pfVar47[1];
    fVar3 = *(float *)(param_1 + 0xa8);
    fVar54 = pfVar47[2];
    fVar4 = *(float *)(param_1 + 0xac);
    fVar5 = *(float *)(param_1 + 0xa0);
    fVar6 = *(float *)(param_1 + 0x9c);
    fVar7 = *(float *)(param_1 + 0x98);
    cVar39 = FUN_180442b90(puVar1,pfVar47);
    if (cVar39 == '\0') {
      fVar52 = fVar52 - fVar51;
      fVar53 = fVar53 - fVar3;
      fVar54 = fVar54 - fVar4;
      fVar51 = fVar53 * fVar53 + fVar52 * fVar52 + fVar54 * fVar54;
      if (fVar51 < 0.0) {
        fVar51 = (float)FUN_18051af10();
      }
      else {
        fVar51 = SQRT(fVar51);
      }
      if (fVar5 * fVar54 + fVar6 * fVar53 + fVar7 * fVar52 < fVar51 * *(float *)(param_1 + 0x28)) {
        FUN_180436e30(param_1,pfVar47);
        return 0;
      }
    }
  }
  cVar39 = FUN_18042eff0(param_1,pfVar47,param_1 + 0xe0,1);
  if (cVar39 == '\0') {
    cVar39 = (char)*(undefined4 *)(param_1 + 0x48);
    if (*(char *)(param_1 + 0x1258) != cVar39) {
      *(char *)(param_1 + 0x1258) = cVar39;
      pfVar47 = (float *)FUN_180445350(puVar1);
    }
    if ((*(int *)(param_1 + 0x60) == 2) && (*(short *)(param_1 + 0x1160) == 0x40)) {
      cVar39 = '\x01';
    }
    else {
      cVar39 = '\0';
    }
    if ((((pfVar47 != (float *)0x0) && (*(longlong *)(pfVar47 + 4) != 0)) &&
        (*(longlong *)(pfVar47 + 6) != 0)) &&
       ((*(int **)(pfVar47 + 10) != (int *)0x0 &&
        (lVar50 = *(longlong *)(*(longlong *)(pfVar47 + 4) + 8), lVar50 != 0)))) {
      iVar41 = *(int *)(lVar50 + 0x10);
      if ((-1 < iVar41) &&
         ((iVar41 < (int)(DAT_181111da8 - DAT_181111da0 >> 6) &&
          (*(int *)((longlong)iVar41 * 0x40 + DAT_181111da0 + 0x18) == 2)))) {
        lVar50 = *(longlong *)((longlong)iVar41 * 0x40 + DAT_181111da0 + 0x30);
        iVar42 = *(int *)(*(longlong *)(pfVar47 + 6) + 0xc) -
                 (int)((float)(int)DAT_180c8a800 + DAT_180c8a800._4_4_);
        iVar41 = **(int **)(pfVar47 + 10);
        local_198 = 0;
        local_190 = 0;
        local_18c = 0;
        cVar40 = FUN_180442b90(puVar1,pfVar47);
        if (cVar40 == '\0') {
          local_290 = (undefined8 *)CONCAT71(local_290._1_7_,iVar42 < iVar41);
          local_298 = &local_198;
          cVar40 = FUN_18042d730(param_1 + 0xd0,*(undefined4 *)(param_1 + 0x60),puVar1,pfVar47);
          if (cVar40 != '\0') goto LAB_180438554;
        }
        else {
          local_14c = 0;
          puVar1 = *(undefined8 **)(pfVar47 + 4);
          local_188 = *puVar1;
          local_180 = *(undefined4 *)((longlong)puVar1 + 0x6c);
          local_17c = puVar1[0xe];
          uStack_174 = puVar1[0xf];
          local_16c = puVar1[0x10];
          uVar8 = puVar1[0x11];
          uStack_164 = (undefined4)uVar8;
          uStack_160 = (undefined1)((ulonglong)uVar8 >> 0x20);
          uStack_15f = (undefined2)((ulonglong)uVar8 >> 0x28);
          uStack_15d = (undefined1)((ulonglong)uVar8 >> 0x38);
          uVar8 = puVar1[0x12];
          uStack_154 = puVar1[0x13];
          local_15c = (undefined1)uVar8;
          uStack_15b = (undefined2)((ulonglong)uVar8 >> 8);
          uStack_159 = (undefined1)((ulonglong)uVar8 >> 0x18);
          uStack_158 = (undefined4)((ulonglong)uVar8 >> 0x20);
          local_298 = (longlong *)(*(longlong *)(pfVar47 + 6) + 0x50);
          cVar40 = FUN_18046e360(param_1 + 0x1290,&local_188,*(longlong *)(pfVar47 + 10) + 0x80);
          if (cVar40 != '\0') {
            local_198 = *(undefined8 *)(param_1 + 0x8c);
            local_190 = *(undefined4 *)(param_1 + 0x94);
            local_18c = 1;
LAB_180438554:
            **(undefined8 **)(param_1 + 0x1178) = *(undefined8 *)(param_1 + 0x20a8);
            puVar1 = *(undefined8 **)(pfVar47 + 10);
            local_17c = puVar1[0xc];
            local_16c = *(undefined8 *)((longlong)puVar1 + 0x6c);
            uStack_164 = *(undefined4 *)((longlong)puVar1 + 0x74);
            uVar44 = *(undefined4 *)(puVar1 + 0xf);
            local_188 = *puVar1;
            local_180._0_3_ = CONCAT21(local_180._1_2_,*(undefined1 *)((longlong)puVar1 + 0x7c));
            uStack_174 = CONCAT17(uStack_240._7_1_,
                                  CONCAT25(uStack_240._5_2_,
                                           CONCAT14(1,*(undefined4 *)(puVar1 + 0xd))));
            uStack_160 = 1;
            uStack_15f = uStack_240._5_2_;
            uStack_15d = uStack_240._7_1_;
            local_15c = (undefined1)uVar44;
            uStack_15b = (undefined2)((uint)uVar44 >> 8);
            uStack_159 = (undefined1)((uint)uVar44 >> 0x18);
            puVar1 = *(undefined8 **)(pfVar47 + 6);
            local_230 = *(undefined4 *)(puVar1 + 1);
            local_22c = *(undefined1 *)((longlong)puVar1 + 0x14);
            local_278 = (undefined4)puVar1[6];
            uStack_274 = (undefined4)((ulonglong)puVar1[6] >> 0x20);
            local_220 = *(undefined1 *)(puVar1 + 7);
            local_21c = *(undefined4 *)(puVar1 + 9);
            local_218 = *(undefined1 *)((longlong)puVar1 + 0x4c);
            local_238 = *puVar1;
            local_22b = CONCAT43(local_278,uStack_27b);
            uStack_224 = uStack_274;
            local_21f = local_270._1_2_;
            local_21d = local_270._3_1_;
            local_217 = local_268._1_2_;
            local_215 = local_268._3_1_;
            local_290 = &local_198;
            local_298 = (longlong *)CONCAT71(local_298._1_7_,cVar39);
            FUN_180475f60(param_1 + 0xd0,&local_238,pfVar47,&local_188);
            if (cVar39 != '\0') {
              **(ulonglong **)(param_1 + 0x1178) =
                   **(ulonglong **)(param_1 + 0x1178) & 0xfffffffffffffffe;
            }
            *(undefined2 *)(param_1 + 0x79) = 1;
            if ((iVar41 <= iVar42) && (*(char *)(param_1 + 0x24) == '\0')) {
              if (lVar50 != 0) {
                FUN_18042e250(lVar50,*(undefined4 *)(lVar50 + 0xff0));
              }
              puVar1 = local_210;
              local_258 = *(undefined8 *)(*(longlong *)(*(longlong *)(pfVar47 + 4) + 8) + 0x24);
              puStack_250 = (undefined4 *)
                            CONCAT44(puStack_250._4_4_,
                                     *(undefined4 *)
                                      (*(longlong *)(*(longlong *)(pfVar47 + 4) + 8) + 0x2c));
              local_108 = *local_210;
              lStack_100 = CONCAT44(lStack_100._4_4_,*(undefined4 *)(local_210 + 1));
              FUN_1804768c0(param_1 + 0xd0,&local_258,&local_108);
              *(undefined4 *)puVar1 = (undefined4)local_108;
              *(undefined4 *)((longlong)puVar1 + 4) = local_108._4_4_;
              *(undefined4 *)(puVar1 + 1) = (undefined4)lStack_100;
            }
            FUN_180437420(param_1,pfVar47);
            FUN_18046ea40(param_1,pfVar47);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* ===== 180438770 FUN_180438770 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180438770(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_164;
  uint local_15c;
  code *local_158;
  undefined8 local_150;
  longlong local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_12c;
  undefined1 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_f8 [64];
  undefined1 local_b8 [24];
  undefined1 local_a0 [40];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_198;
  if (DAT_180c8af90 != '\0') {
    DAT_180c8b000 = 1;
    DAT_180c8b004 = (uint)*(ushort *)(param_1 + 0x1160);
    DAT_180c8b008 = *(undefined4 *)(param_1 + 0xd18);
    DAT_180c8b00c = *(undefined4 *)(param_1 + 0x1138);
    DAT_180c8b010 = *(undefined1 *)(param_1 + 0xa51);
    DAT_180c8b011 = *(undefined1 *)(param_1 + 0xa52);
    DAT_180c8afe8 = 1;
  }
  cVar4 = FUN_1804360a0(param_1,param_1 + 0x9a8);
  if (cVar4 != '\0') {
    if (DAT_180c8af90 != '\0') {
      DAT_180c8afe8 = 2;
    }
    uVar6 = FUN_180474460(*(undefined4 *)(param_1 + 0xb04),*(undefined4 *)(param_1 + 0xb10));
    if ((int)uVar6 == *(int *)(param_1 + 0xd04)) {
      local_108._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      bVar2 = *(float *)(param_1 + 0xd08) <= local_108._4_4_;
    }
    else {
      bVar2 = *(int *)(param_1 + 0xd04) <= (int)uVar6;
    }
    if (bVar2) {
      local_108 = uVar6;
      if ((*(char *)(param_1 + 0xc4) != '\0') ||
         (*(int *)(param_1 + 0x3908) != *(int *)(param_1 + 0xb04))) {
        FUN_180435ca0(local_f8,param_1 + 0x2138);
        FUN_180466580(param_1 + 0x3148,param_1 + 0x9a8,0x11);
        local_150 = &LAB_180431cd0;
        if (*(undefined1 **)(param_1 + 0x21b8) != (undefined1 *)0x0) {
          local_150 = *(undefined1 **)(param_1 + 0x21b8);
        }
        if (*(char *)(param_1 + 0x2130) == '\0') {
          local_148 = 0;
          local_140 = 0;
        }
        else {
          local_148 = param_1 + 0x20b0;
          local_140 = param_1 + 0xe0;
        }
        local_168 = (float)CONCAT13(*(undefined1 *)(param_1 + 0x76),
                                    CONCAT12(*(undefined1 *)(param_1 + 0x54),
                                             CONCAT11(*(undefined1 *)(param_1 + 0x51),
                                                      *(undefined1 *)(param_1 + 0x52))));
        local_164._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 0x77));
        local_164 = CONCAT44(*(undefined4 *)(param_1 + 0x60),
                             CONCAT22(local_164._2_2_,(undefined2)local_164));
        local_158 = FUN_180436b00;
        local_170 = DAT_1808acda0;
        local_178 = 8;
        FUN_18045d020(&local_168,param_1 + 0x3148,local_f8,8);
        fVar11 = *(float *)(param_1 + 0x3158) * *(float *)(param_1 + 0x3158) +
                 *(float *)(param_1 + 0x3154) * *(float *)(param_1 + 0x3154);
        if (fVar11 < 0.0) {
          fVar11 = (float)FUN_18051af10(fVar11);
        }
        else {
          fVar11 = SQRT(fVar11);
        }
        if (DAT_180c8af90 != '\0') {
          DAT_180c8afe9 = 1;
          DAT_180c8aff0 = *(int *)(param_1 + 0x3268) - *(int *)(param_1 + 0xac8);
          DAT_180c8afec = fVar11;
        }
        *(undefined4 *)(param_1 + 0x3908) = *(undefined4 *)(param_1 + 0xb04);
        if ((*(byte *)(param_1 + 0x1188) & 2) != 0) {
          *(uint *)(param_1 + 0x31b0) = *(uint *)(param_1 + 0x31b0) & 0xfffffffe;
        }
        *(undefined8 *)(param_1 + 0x3158) = 0;
        *(undefined4 *)(param_1 + 0x3154) = 0;
        *(undefined4 *)(param_1 + 0x38d0) = 0;
        *(undefined4 *)(param_1 + 0x38a0) = 0;
        *(undefined8 *)(param_1 + 0x38a4) = 0;
        *(undefined4 *)(param_1 + 0x38ac) = *(undefined4 *)(param_1 + 0x31b0);
        *(undefined1 *)(param_1 + 0x38b0) = *(undefined1 *)(param_1 + 0x31b8);
        *(undefined1 *)(param_1 + 0x38b1) = *(undefined1 *)(param_1 + 0x31ba);
        *(undefined1 *)(param_1 + 0x38b2) = *(undefined1 *)(param_1 + 0x31f2);
        *(undefined4 *)(param_1 + 0x38b4) = *(undefined4 *)(param_1 + 0x32a4);
        *(undefined4 *)(param_1 + 0x38b8) = *(undefined4 *)(param_1 + 0x32ac);
        *(undefined4 *)(param_1 + 0x38bc) = *(undefined4 *)(param_1 + 0x32b0);
        *(undefined4 *)(param_1 + 0x38c0) = *(undefined4 *)(param_1 + 0x341c);
        *(undefined4 *)(param_1 + 0x38c4) = *(undefined4 *)(param_1 + 0x34a4);
        *(undefined4 *)(param_1 + 0x38c8) = *(undefined4 *)(param_1 + 0x34a8);
        FUN_18047d770();
        FUN_180011610(local_a0);
        FUN_180200b70(local_b8);
      }
      *(undefined2 *)(param_1 + 0x1bd0) = 0;
      *(undefined8 *)(param_1 + 0x1c78) = 0;
      *(undefined8 *)(param_1 + 0x1b80) = 0;
      *(undefined2 *)(param_1 + 0x1c98) = 0;
      if (*(longlong *)(param_1 + 0x1ba0) != *(longlong *)(param_1 + 0x1ba8)) {
        *(longlong *)(param_1 + 0x1ba8) = *(longlong *)(param_1 + 0x1ba0);
      }
      if (*(longlong *)(param_1 + 0x1bb8) != *(longlong *)(param_1 + 0x1bc0)) {
        *(longlong *)(param_1 + 0x1bc0) = *(longlong *)(param_1 + 0x1bb8);
      }
      if (*(longlong *)(param_1 + 0x1c60) != *(longlong *)(param_1 + 0x1c68)) {
        *(longlong *)(param_1 + 0x1c68) = *(longlong *)(param_1 + 0x1c60);
      }
      local_148 = 0;
      local_140 = local_140 & 0xffffff0000000000;
      local_138 = 0;
      fVar11 = 0.0;
      local_130 = 0;
      local_12c = 0;
      local_124 = 0;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_168 = *(float *)(param_1 + 0x316c) + *(float *)(param_1 + 0x3148);
      local_164 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x3170) >> 0x20) +
                           (float)((ulonglong)*(undefined8 *)(param_1 + 0x314c) >> 0x20),
                           (float)*(undefined8 *)(param_1 + 0x3170) +
                           (float)*(undefined8 *)(param_1 + 0x314c));
      local_15c = *(uint *)(param_1 + 0x32a4);
      local_158._0_5_ = (uint5)local_15c;
      local_150 = (undefined1 *)((ulonglong)local_150 & 0xffffffff00000000);
      if ((*(int *)(param_1 + 0x60) != 2) && (*(short *)(param_1 + 0x3900) != 0x1f)) {
        *(undefined4 *)(param_1 + 0x38a0) = *(undefined4 *)(param_1 + 0x3154);
        *(undefined4 *)(param_1 + 0x38a4) = *(undefined4 *)(param_1 + 0x3158);
        *(undefined4 *)(param_1 + 0x38a8) = *(undefined4 *)(param_1 + 0x315c);
        *(undefined4 *)(param_1 + 0x38ac) = *(undefined4 *)(param_1 + 0x31b0);
        *(undefined1 *)(param_1 + 0x38b0) = *(undefined1 *)(param_1 + 0x31b8);
        *(undefined1 *)(param_1 + 0x38b1) = *(undefined1 *)(param_1 + 0x31ba);
        *(undefined1 *)(param_1 + 0x38b2) = *(undefined1 *)(param_1 + 0x31f2);
        *(uint *)(param_1 + 0x38b4) = local_15c;
        *(undefined4 *)(param_1 + 0x38b8) = *(undefined4 *)(param_1 + 0x32ac);
        *(undefined4 *)(param_1 + 0x38bc) = *(undefined4 *)(param_1 + 0x32b0);
        *(undefined4 *)(param_1 + 0x38c0) = *(undefined4 *)(param_1 + 0x341c);
        *(undefined4 *)(param_1 + 0x38c4) = *(undefined4 *)(param_1 + 0x34a4);
        *(undefined4 *)(param_1 + 0x38c8) = *(undefined4 *)(param_1 + 0x34a8);
        FUN_18047d090();
        uVar9 = *(uint *)(param_1 + 0x38d8);
        if (1 < uVar9) {
          uVar9 = 0;
        }
        if ((*(longlong *)(param_1 + 0x38f8) == 0) || (DAT_1811142d0 == 0)) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = (float)FUN_18000f3d0((ulonglong)(uVar9 * 4) + *(longlong *)(param_1 + 0x38f8) +
                                        (ulonglong)DAT_1811142d0);
        }
        fVar11 = (float)FUN_18047d4f0(param_1 + 0x38a0);
        fVar11 = fVar11 + fVar10;
      }
      local_150 = (undefined1 *)CONCAT44(fVar11,(undefined4)local_150);
      if (DAT_180c8af90 != '\0') {
        DAT_180c8b020 = 1;
        DAT_180c8b024 = *(undefined4 *)(param_1 + 0x34b8);
        DAT_180c8b028 = *(undefined4 *)(param_1 + 0x38d8);
        DAT_180c8b02c = fVar11;
      }
      FUN_18043a500(param_1 + 0x1bb8,&local_168);
      FUN_180436520(param_1 + 0x1b80);
      FUN_1804364b0(param_1,param_1 + 0x1b80,param_1 + 0x3148);
      iVar3 = DAT_181111d9c;
      uVar9 = 0;
      if (0 < DAT_181111d9c) {
        do {
          if (2 < uVar9) break;
          if ((&DAT_180c87458)[(ulonglong)uVar9 * 0x201] != 0) {
            iVar8 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x20);
            iVar5 = 0;
            if (0 < iVar8) {
              iVar5 = iVar8;
            }
            FUN_18042e250(&DAT_180c87450 + (ulonglong)uVar9 * 0x402,
                          *(int *)(param_1 + 0x32a4) - iVar5);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < iVar3);
      }
      uVar1 = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_180436300(param_1,param_1 + 0x1b80);
      lVar7 = FUN_1804460e0(param_1 + 0x1b80);
      if (((lVar7 == 0) || (*(longlong *)(lVar7 + 0x10) == 0)) ||
         (fVar11 = *(float *)(*(longlong *)(lVar7 + 0x10) + 0x6c),
         *(float *)(lVar7 + 0xc) <= fVar11 && fVar11 != *(float *)(lVar7 + 0xc))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      *(undefined4 *)(param_1 + 4) = uVar1;
      if (DAT_180c8af90 != '\0') {
        DAT_180c8afe8 = 3;
      }
      if (bVar2) {
        if (DAT_180c8af90 != '\0') {
          DAT_180c8aff4 = 1;
          DAT_180c8aff8 = *(undefined4 *)(lVar7 + 0x44);
          DAT_180c8affc = *(undefined4 *)(param_1 + 0x4c);
          DAT_180c8afe8 = 4;
        }
        if (*(float *)(param_1 + 0x4c) < *(float *)(lVar7 + 0x44) ||
            *(float *)(param_1 + 0x4c) == *(float *)(lVar7 + 0x44)) {
          if (DAT_180c8af90 != '\0') {
            DAT_180c8afe8 = 5;
          }
          FUN_180436170(param_1);
        }
      }
    }
  }
  return;
}



/* ===== 180438e40 FUN_180438e40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180438e40(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_d8;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  longlong local_80;
  undefined1 local_70 [24];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  puVar1 = *(undefined4 **)(param_1 + 0x1170);
  *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(param_1 + 0x2164);
  puVar1[5] = *(undefined4 *)(param_1 + 0x216c);
  *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_1 + 0x21a8);
  puVar1[8] = *(undefined4 *)(param_1 + 0x21b0);
  if (*(char *)(param_1 + 0x7a) != '\0') {
    if ((*(float *)(param_1 + 0x3920) != (float)puVar1[8]) ||
       (*(float *)(param_1 + 0x3914) != (float)puVar1[5] ||
        (*(float *)(param_1 + 0x391c) != (float)puVar1[7] ||
        (*(float *)(param_1 + 0x3910) != (float)puVar1[4] ||
        (*(float *)(param_1 + 0x3918) != (float)puVar1[6] ||
        *(float *)(param_1 + 0x390c) != (float)puVar1[3]))))) {
      *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(param_1 + 0x390c);
      puVar1[5] = *(undefined4 *)(param_1 + 0x3914);
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_1 + 0x3918);
      puVar1[8] = *(undefined4 *)(param_1 + 0x3920);
      puVar2 = *(undefined8 **)(puVar1 + 0x10);
      puVar12 = *(undefined8 **)(puVar1 + 0xe);
      if (puVar12 != puVar2) {
        do {
          if (*(char *)(puVar12 + 8) != '\0') break;
          puVar12 = puVar12 + 9;
        } while (puVar12 != puVar2);
        if (puVar12 != puVar2) {
          puVar9 = puVar12 + 9;
          if (puVar9 != puVar2) {
            do {
              if (*(char *)(puVar9 + 8) == '\0') {
                uVar10 = puVar9[1];
                *puVar12 = *puVar9;
                puVar12[1] = uVar10;
                uVar10 = puVar9[3];
                puVar12[2] = puVar9[2];
                puVar12[3] = uVar10;
                uVar10 = puVar9[5];
                puVar12[4] = puVar9[4];
                puVar12[5] = uVar10;
                uVar5 = *(undefined4 *)((longlong)puVar9 + 0x34);
                uVar6 = *(undefined4 *)(puVar9 + 7);
                uVar7 = *(undefined4 *)((longlong)puVar9 + 0x3c);
                *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar9 + 6);
                *(undefined4 *)((longlong)puVar12 + 0x34) = uVar5;
                *(undefined4 *)(puVar12 + 7) = uVar6;
                *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar7;
                puVar12[8] = puVar9[8];
                puVar12 = puVar12 + 9;
              }
              puVar9 = puVar9 + 9;
            } while (puVar9 != puVar2);
            if (puVar12 == puVar2) goto LAB_180438fda;
          }
          lVar3 = *(longlong *)(puVar1 + 0x10);
          FUN_180540530(puVar12,puVar2,lVar3 - (longlong)puVar2);
          *(longlong *)(puVar1 + 0x10) = (lVar3 - (longlong)puVar2) + (longlong)puVar12;
        }
      }
    }
  }
LAB_180438fda:
  if (*(char *)(param_1 + 0x51) != '\0') {
    uVar11 = *(undefined1 *)(param_1 + 0x54);
    if (((*(char *)(param_1 + 0x76) != '\0') && ((*(byte *)(param_1 + 0xa10) & 1) != 0)) &&
       (0x10 < *(int *)(param_1 + 0xb04) - *(int *)(param_1 + 0xc2c))) {
      uVar11 = 0;
    }
    local_e8 = 0;
    FUN_18045a7d0(local_c8,puVar1,**(undefined8 **)(param_1 + 0x1178),
                  *(undefined4 *)(param_1 + 0xbc));
    if (DAT_180c8af90 != '\0') {
      DAT_180c8afba = 1;
      DAT_180c8afbc = local_9c;
      DAT_180c8afc0 = local_98;
      _DAT_180c8afc4 = local_94;
      DAT_180c8afc8 = local_54;
      DAT_180c8afcc = local_a4;
      DAT_180c8afd0 = (int)(local_80 - local_88 >> 3) * 0x38e38e39;
    }
    FUN_18045bbe0(param_1 + 0x9a8,local_c8,uVar11,*(char *)(param_1 + 0xd0) == '\0');
    if (DAT_180c8af90 != '\0') {
      DAT_180c8afd4 = local_9c;
      DAT_180c8afd8 = local_98;
      _DAT_180c8afdc = local_94;
      DAT_180c8afe0 = local_54;
      DAT_180c8afe4 = (int)(local_80 - local_88 >> 3) * 0x38e38e39;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x1178);
    *(undefined8 *)(puVar1 + 10) = local_c0;
    *(undefined8 *)(puVar1 + 0xc) = local_b8;
    *puVar2 = local_b0;
    *puVar1 = local_a8;
    puVar1[1] = local_a4;
    puVar1[2] = local_a0;
    puVar1[3] = local_9c;
    puVar1[4] = local_98;
    puVar1[5] = local_94;
    puVar1[6] = local_58;
    puVar1[7] = local_54;
    puVar1[8] = local_50;
    if ((longlong *)(puVar1 + 0xe) != &local_88) {
      FUN_1802009d0(puVar1 + 0xe,local_88,(local_80 - local_88 >> 3) * -0x71c71c71c71c71c7);
    }
    *(undefined1 *)(puVar1 + 9) = local_4c;
    *(undefined1 *)((longlong)puVar1 + 0x25) = local_4b;
    FUN_180011610(local_70);
    FUN_180200b70(&local_88);
  }
  cVar8 = FUN_1804360a0(param_1,param_1 + 0x9a8);
  if (cVar8 != '\0') {
    uVar10 = FUN_180474460(*(undefined4 *)(param_1 + 0xb04),*(undefined4 *)(param_1 + 0xb10));
    if ((int)uVar10 == *(int *)(param_1 + 0xd04)) {
      local_d8._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
      bVar4 = *(float *)(param_1 + 0xd08) <= local_d8._4_4_;
    }
    else {
      bVar4 = *(int *)(param_1 + 0xd04) <= (int)uVar10;
    }
    if ((bVar4) && (((uint)puVar1[10] >> 0xb & 1) == 0)) {
      local_d8 = uVar10;
      FUN_180436170(param_1);
    }
  }
  return;
}



/* ===== 180439250 FUN_180439250 ===== */

undefined8 FUN_180439250(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fStackX_c;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar19;
  longlong *plVar18;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 uStack_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined8 *local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  
  fVar4 = DAT_1808ac34c;
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if (DAT_180c8af90 != '\0') {
    DAT_180c8afa5 = 2;
  }
  if (*(char *)(param_1 + 0x51) == '\0') {
    return 0;
  }
  if (*(short *)(param_1 + 0x1160) == 0x1f) {
    return 0;
  }
  fVar17 = *(float *)(param_1 + 0xadc) * DAT_1808ac16c;
  fVar17 = fVar17 * fVar17;
  if (DAT_180c8af90 != '\0') {
    DAT_180c8afa8 = fVar17;
  }
  fVar16 = *(float *)(param_1 + 0x9b8) * *(float *)(param_1 + 0x9b8) +
           *(float *)(param_1 + 0x9b4) * *(float *)(param_1 + 0x9b4);
  if ((*(byte *)(param_1 + 0xa10) & 1) == 0) {
    if (DAT_180c8af90 != '\0') {
      DAT_180c8afa5 = 3;
    }
    if (fVar16 < fVar17) {
      return 0;
    }
  }
  else if ((*(int *)(param_1 + 0xc2c) == -1) || (*(char *)(param_1 + 0x54) == '\0')) {
    if (DAT_180c8af90 != '\0') {
      DAT_180c8afa5 = 4;
    }
    if (fVar16 < fVar17) {
      return 0;
    }
    if (DAT_180c8af90 != '\0') {
      DAT_180c8afa5 = 5;
    }
    if (*(float *)(param_1 + 0xbac) == DAT_1808ac34c) {
      return 0;
    }
  }
  if ((*(char *)(param_1 + 0xc4) != '\0') ||
     (*(int *)(param_1 + 0x3140) != *(int *)(param_1 + 0xb04))) {
    FUN_180466580(param_1 + 0x2980,param_1 + 0x9a8,0x11);
    local_88 = *(undefined1 *)(param_1 + 0x52);
    local_70 = &LAB_180431cd0;
    if (*(undefined1 **)(param_1 + 0x21b8) != (undefined1 *)0x0) {
      local_70 = *(undefined1 **)(param_1 + 0x21b8);
    }
    local_85 = *(undefined1 *)(param_1 + 0x76);
    if (*(char *)(param_1 + 0x2130) == '\0') {
      local_68 = 0;
      local_60 = 0;
    }
    else {
      local_68 = param_1 + 0x20b0;
      local_60 = param_1 + 0xe0;
    }
    uVar14 = (uint)local_84 >> 0x10;
    local_78 = FUN_180436b00;
    _local_87 = CONCAT11(*(undefined1 *)(param_1 + 0x54),*(undefined1 *)(param_1 + 0x51));
    local_84._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 0x77));
    local_84 = CONCAT22((short)uVar14,(undefined2)local_84);
    local_80 = (undefined8 *)
               CONCAT44((int)((ulonglong)local_80 >> 0x20),*(undefined4 *)(param_1 + 0x60));
    FUN_18045d020(&local_88,param_1 + 0x2980,param_1 + 0x2138,0,CONCAT44(uVar19,0x20),fVar17);
    *(undefined4 *)(param_1 + 0x3140) = *(undefined4 *)(param_1 + 0xb04);
  }
  fVar16 = *(float *)(param_1 + 0x2990) * *(float *)(param_1 + 0x2990) +
           *(float *)(param_1 + 0x298c) * *(float *)(param_1 + 0x298c);
  uVar10 = FUN_180474460(*(undefined4 *)(param_1 + 0x2adc),*(undefined4 *)(param_1 + 0x2ae8));
  cVar8 = DAT_180c8af90;
  if ((int)uVar10 == *(int *)(param_1 + 0x2cd4)) {
    fStackX_c = (float)((ulonglong)uVar10 >> 0x20);
    bVar3 = fStackX_c < *(float *)(param_1 + 0x2cd8);
  }
  else {
    bVar3 = (int)uVar10 < *(int *)(param_1 + 0x2cd4);
  }
  uVar14 = *(uint *)(param_1 + 0x29e8);
  if (DAT_180c8af90 != '\0') {
    DAT_180c8afac = 1;
    if (fVar16 < 0.0) {
      DAT_180c8afb0 = (float)FUN_18051af10(fVar16);
    }
    else {
      DAT_180c8afb0 = SQRT(fVar16);
    }
    DAT_180c8afb4 = *(int *)(param_1 + 0x2aa0) - *(int *)(param_1 + 0xac8);
    DAT_180c8afb8 = bVar3 ^ 1;
    DAT_180c8afa5 = 6;
    DAT_180c8afb9 = (byte)uVar14 & 1;
  }
  if (*(int *)(param_1 + 0x2aa0) <= *(int *)(param_1 + 0xac8)) {
    return 0;
  }
  if (cVar8 != '\0') {
    DAT_180c8afa5 = 7;
  }
  if (fVar17 < fVar16) {
    return 0;
  }
  if (cVar8 != '\0') {
    DAT_180c8afa5 = 8;
  }
  if (bVar3 != false) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x76) == '\0') ||
     ((((*(byte *)(param_1 + 0xa10) & 1) != 0 && (*(int *)(param_1 + 0xc2c) == -1)) ||
      ((uVar14 & 1) == 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (cVar8 != '\0') {
    DAT_180c8afa5 = 9;
  }
  if (((uVar14 & 1) == 0) && (*(char *)(param_1 + 0x53) == '\0')) {
    return 0;
  }
  if (cVar8 != '\0') {
    DAT_180c8afa5 = 10;
  }
  if ((bVar3) && (*(char *)(param_1 + 0x54) == '\0')) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x1bd0) = 0;
  *(undefined8 *)(param_1 + 0x1c78) = 0;
  *(undefined8 *)(param_1 + 0x1b80) = 0;
  *(undefined2 *)(param_1 + 0x1c98) = 0;
  if (*(longlong *)(param_1 + 0x1ba0) != *(longlong *)(param_1 + 0x1ba8)) {
    *(longlong *)(param_1 + 0x1ba8) = *(longlong *)(param_1 + 0x1ba0);
  }
  plVar1 = (longlong *)(param_1 + 0x1bb8);
  if (*plVar1 != *(longlong *)(param_1 + 0x1bc0)) {
    *(longlong *)(param_1 + 0x1bc0) = *plVar1;
  }
  if (*(longlong *)(param_1 + 0x1c60) != *(longlong *)(param_1 + 0x1c68)) {
    *(longlong *)(param_1 + 0x1c68) = *(longlong *)(param_1 + 0x1c60);
  }
  FUN_180436520(param_1 + 0x1b80);
  lVar12 = local_60;
  puVar7 = local_70;
  local_88 = *(undefined1 *)(param_1 + 0x40);
  local_84 = *(undefined4 *)(param_1 + 0xb04);
  local_80 = &DAT_1809f35b8;
  local_78 = *(code **)(param_1 + 0x90c);
  local_70._7_1_ = SUB81(puVar7,7);
  local_70._0_7_ =
       CONCAT16(*(undefined1 *)(param_1 + 0xd0),
                CONCAT15(*(undefined1 *)(param_1 + 0x56),
                         CONCAT14(*(undefined1 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x60))));
  local_68 = CONCAT44(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 4));
  local_60._0_5_ = CONCAT41(local_60._1_4_,*(undefined1 *)(param_1 + 0x24));
  local_60._5_2_ = SUB82(lVar12,5);
  local_60._7_1_ = SUB81(lVar12,7);
  plVar18 = plVar1;
  FUN_180446ee0(&local_88,param_1 + 0x2980,0,0,plVar1);
  FUN_1804364b0(param_1,param_1 + 0x1b80);
  iVar6 = DAT_181111d9c;
  uVar19 = (undefined4)((ulonglong)plVar18 >> 0x20);
  uVar14 = 0;
  if (0 < DAT_181111d9c) {
    do {
      if (2 < uVar14) break;
      uVar11 = (ulonglong)uVar14;
      uVar14 = uVar14 + 1;
      (&DAT_180c88444)[uVar11 * 0x402] = *(int *)(param_1 + 0x2adc) + 1;
    } while ((int)uVar14 < iVar6);
  }
  uVar14 = 0;
  if (0 < iVar6) {
    do {
      uVar19 = (undefined4)((ulonglong)plVar18 >> 0x20);
      if (2 < uVar14) break;
      if ((&DAT_180c87458)[(ulonglong)uVar14 * 0x201] != 0) {
        iVar13 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x20);
        iVar9 = 0;
        if (0 < iVar13) {
          iVar9 = iVar13;
        }
        FUN_18042e250(&DAT_180c87450 + (ulonglong)uVar14 * 0x402,*(int *)(param_1 + 0x2adc) - iVar9)
        ;
      }
      uVar19 = (undefined4)((ulonglong)plVar18 >> 0x20);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < iVar6);
  }
  FUN_180436300(param_1,param_1 + 0x1b80);
  lVar12 = FUN_1804460e0(param_1 + 0x1b80,param_1 + 0x1ed0);
  uVar5 = DAT_1808acda0;
  if (*plVar1 == *(longlong *)(param_1 + 0x1bc0)) {
    uVar15 = DAT_1808acda0;
  }
  else {
    uVar15 = *(undefined4 *)(*plVar1 + 0x1c);
  }
  if (DAT_180c8af90 != '\0') {
    DAT_180c8b014 = *(undefined4 *)(param_1 + 0x2cf0);
    DAT_180c8b018 = *(undefined4 *)(param_1 + 0x3110);
    DAT_180c8b012 = 1;
    DAT_180c8b01c = uVar15;
  }
  if ((lVar12 != 0) && (lVar2 = *(longlong *)(lVar12 + 0x10), lVar2 != 0)) {
    if (DAT_180c8af90 != '\0') {
      DAT_180c8b034 = *(undefined4 *)(lVar12 + 0x44);
      DAT_180c8b038 = *(undefined4 *)(param_1 + 0x4c);
      DAT_180c8b03c = *(undefined4 *)(lVar12 + 0xc);
      DAT_180c8b040 = *(undefined4 *)(lVar2 + 0x6c);
      DAT_180c8b030 = 1;
    }
    if (*(float *)(lVar2 + 0x6c) < *(float *)(lVar12 + 0xc) ||
        *(float *)(lVar2 + 0x6c) == *(float *)(lVar12 + 0xc)) {
      if (*(float *)(lVar12 + 0x44) <= *(float *)(param_1 + 0x4c) &&
          *(float *)(param_1 + 0x4c) != *(float *)(lVar12 + 0x44)) {
        lVar12 = 0;
      }
      goto LAB_18043989e;
    }
  }
  lVar12 = 0;
LAB_18043989e:
  if (DAT_180c8af90 != '\0') {
    DAT_180c8afa5 = 0xb;
  }
  if (lVar12 == 0) {
    return 0;
  }
  if ((((*(char *)(param_1 + 0x5c) != '\0') || (*(char *)(param_1 + 0x5d) != '\0')) && (!bVar3)) &&
     (*(float *)(lVar12 + 0x48) < fVar4)) {
    FUN_180466580(param_1 + 0x21c0,param_1 + 0x9a8,0x11);
    local_88 = *(undefined1 *)(param_1 + 0x52);
    local_70 = &LAB_180431cd0;
    if (*(undefined1 **)(param_1 + 0x21b8) != (undefined1 *)0x0) {
      local_70 = *(undefined1 **)(param_1 + 0x21b8);
    }
    local_85 = *(undefined1 *)(param_1 + 0x76);
    if (*(char *)(param_1 + 0x2130) == '\0') {
      local_68 = 0;
      local_60 = 0;
    }
    else {
      local_68 = param_1 + 0x20b0;
      local_60 = param_1 + 0xe0;
    }
    uVar14 = (uint)local_84 >> 0x10;
    local_78 = FUN_180436b00;
    _local_87 = CONCAT11(*(undefined1 *)(param_1 + 0x54),*(undefined1 *)(param_1 + 0x51));
    local_84._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 0x77));
    local_84 = CONCAT22((short)uVar14,(undefined2)local_84);
    local_80 = (undefined8 *)
               CONCAT44((int)((ulonglong)local_80 >> 0x20),*(undefined4 *)(param_1 + 0x60));
    FUN_18045d020(&local_88,param_1 + 0x21c0,param_1 + 0x2138,*(undefined4 *)(param_1 + 0x58),
                  CONCAT44(uVar19,*(int *)(param_1 + 0x2adc) - *(int *)(param_1 + 0xac8)),uVar5);
    if (DAT_180c8af90 != '\0') {
      DAT_180c8afa5 = 0xc;
    }
    cVar8 = FUN_18042eff0(param_1,lVar12,param_1 + 0x21c0,0);
    if (cVar8 != '\0') {
      return 0;
    }
  }
  if (DAT_180c8af90 != '\0') {
    DAT_180c8afa5 = 0xd;
  }
  FUN_180438e40(param_1);
  return 1;
}



/* ===== 180439a20 FUN_180439a20 ===== */

void FUN_180439a20(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,float param_6,float param_7,undefined4 param_8,float *param_9)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  int local_8c;
  int local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  local_c0 = *(float *)(param_1 + 0xb8);
  local_d8 = param_6 * *param_9 + (float)uVar1;
  local_c8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_d4 = param_6 * param_9[1] + local_c8._4_4_;
  local_d0 = param_6 * param_9[2] + local_c0;
  local_c8 = uVar1;
  if ((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) {
    lVar3 = FUN_18000f3a0();
    if (lVar3 != 0) {
      FUN_18042fee0(DAT_180961f48,lVar3,param_3,&local_c8,&local_d8,param_4,param_5);
    }
  }
  if (DAT_1808ac1b0 < *(float *)(param_5 + 0xac) || DAT_1808ac1b0 == *(float *)(param_5 + 0xac)) {
    fVar2 = *(float *)(param_3 + 8);
    local_a0 = param_7 * DAT_1808ac1d4;
    local_b0 = param_7 * DAT_1808ac428;
    *(float *)(param_3 + 8) = fVar2 - param_7;
    local_b8 = *(undefined4 *)(param_5 + 0x84);
    local_a0 = local_a0 + *(float *)(param_5 + 0x8c);
    local_b4 = *(undefined4 *)(param_5 + 0x88);
    local_b0 = *(float *)(param_5 + 0x8c) - local_b0;
    local_a8 = local_b8;
    local_a4 = local_b4;
    if ((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) {
      lVar3 = FUN_18000f3a0();
      if (lVar3 != 0) {
        FUN_18042fee0(DAT_180961f48,lVar3,param_3,&local_a8,&local_b8,param_4,param_5);
      }
    }
    if ((*(char *)(param_5 + 0xbb) == '\0') &&
       (((*(float *)(param_5 + 0xac) < DAT_1808ac34c || (*(int *)(param_1 + 0x60) == 2)) ||
        ((*(byte *)(param_1 + 0xa10) & 1) == 0)))) {
      local_84 = 0;
      local_78 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_98 = *(undefined8 *)(param_5 + 0x84);
      local_90 = *(float *)(param_5 + 0x8c) + DAT_1808acab0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_60 = 0;
      local_5c = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_8c = *(int *)(param_1 + 0xb04) + 5;
      local_7c = param_8;
      local_80 = 0;
      local_88 = local_8c;
      FUN_18043a500(param_2 + 0x38,&local_98);
    }
    *(float *)(param_3 + 8) = fVar2;
  }
  return;
}



/* ===== 180439c80 FUN_180439c80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180439c80(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 *puVar6;
  longlong lVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_468 [32];
  undefined1 *local_448;
  float local_440;
  float local_438;
  float local_430;
  float *local_428;
  float local_418;
  float local_414;
  float local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 local_3e8;
  undefined1 uStack_3e7;
  undefined2 uStack_3e6;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
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
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined1 local_2e8 [208];
  undefined4 local_218;
  undefined4 local_214;
  float local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1ef;
  undefined8 local_1e7;
  undefined4 local_1df;
  undefined2 local_1db;
  undefined1 local_1d9;
  undefined1 local_1d8 [48];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_12c;
  undefined4 local_124;
  undefined2 local_120;
  undefined1 local_118 [96];
  ulonglong local_b8;
  
  local_b8 = DAT_180919500 ^ (ulonglong)auStack_468;
  if (((-1 < DAT_181111d90) && (DAT_181111d90 < (int)(DAT_181111da8 - DAT_181111da0 >> 6))) &&
     (lVar7 = (longlong)DAT_181111d90 * 0x40 + DAT_181111da0, *(int *)(lVar7 + 0x18) == 2)) {
    puVar1 = (undefined8 *)(param_1 + 0x1b80);
    *(undefined2 *)(param_1 + 0x1bd0) = 0;
    *(undefined8 *)(param_1 + 0x1c78) = 0;
    *puVar1 = 0;
    *(undefined2 *)(param_1 + 0x1c98) = 0;
    if (*(longlong *)(param_1 + 0x1ba0) != *(longlong *)(param_1 + 0x1ba8)) {
      *(longlong *)(param_1 + 0x1ba8) = *(longlong *)(param_1 + 0x1ba0);
    }
    if (*(longlong *)(param_1 + 0x1bb8) != *(longlong *)(param_1 + 0x1bc0)) {
      *(longlong *)(param_1 + 0x1bc0) = *(longlong *)(param_1 + 0x1bb8);
    }
    if (*(longlong *)(param_1 + 0x1c60) != *(longlong *)(param_1 + 0x1c68)) {
      *(longlong *)(param_1 + 0x1c68) = *(longlong *)(param_1 + 0x1c60);
    }
    FUN_1804364b0(param_1,puVar1,param_1 + 0x9a8);
    local_408 = *(undefined4 *)(param_1 + 0x10);
    uStack_404 = *(undefined4 *)(param_1 + 0x4c);
    fVar12 = *(float *)(param_1 + 0x9c);
    fVar13 = *(float *)(param_1 + 0xa0);
    uStack_3fc = *(undefined4 *)(param_1 + 0x60);
    fVar11 = *(float *)(param_1 + 0x98);
    fVar16 = *(float *)(param_1 + 0x2098);
    if (*(float *)(param_1 + 0x20a0) <= *(float *)(param_1 + 0x2098)) {
      fVar16 = *(float *)(param_1 + 0x20a0);
    }
    local_3f8 = *(undefined4 *)(param_1 + 0x20);
    uStack_400 = *(undefined4 *)(param_1 + 0x14);
    fVar16 = fVar16 + *(float *)(param_1 + 0x209c);
    uStack_3f0 = *(undefined4 *)(param_1 + 4);
    uStack_3f4 = *(undefined4 *)(param_1 + 0x1c);
    local_3e8 = *(undefined1 *)(param_1 + 0x24);
    uStack_3ec = *(undefined4 *)(param_1 + 0xc);
    uStack_3e7 = *(undefined1 *)(param_1 + 0x40);
    local_3d8 = *(undefined4 *)(param_1 + 0x2c);
    uStack_3e4 = *(undefined4 *)(param_1 + 0x3c);
    uStack_3d0 = *(undefined4 *)(param_1 + 0x30);
    uStack_3d4 = *(undefined4 *)(param_1 + 0x28);
    uStack_3e0 = *(undefined4 *)(param_1 + 0x38);
    uStack_3cc = *(undefined4 *)(param_1 + 0x34);
    uStack_3dc = *(undefined4 *)(param_1 + 0x44);
    local_3c8 = *(undefined4 *)(param_1 + 0x48);
    uStack_3c4 = *(undefined4 *)(param_1 + 100);
    fVar10 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
    if (fVar10 < 0.0) {
      fVar10 = (float)FUN_18051af10();
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    fVar14 = DAT_1808ac34c;
    fVar9 = DAT_1808ac34c / fVar10;
    if (DAT_1808abf94 < fVar10) {
      fVar11 = fVar9 * fVar11;
      fVar12 = fVar9 * fVar12;
    }
    if ((DAT_1808abfbc <= (float)((uint)fVar11 & (uint)_DAT_1808ade90)) ||
       (DAT_1808abfbc <= (float)((uint)fVar12 & (uint)_DAT_1808ade90))) {
      if (DAT_1808abf94 < fVar10) {
        fVar13 = fVar9 * fVar13;
      }
      fVar10 = fVar11 - fVar13 * 0.0;
      fVar9 = fVar13 * 0.0 - fVar12;
      fVar12 = fVar12 * 0.0 + fVar11 * DAT_1808acd10;
      fVar13 = fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9;
      if (fVar13 < 0.0) {
        fVar11 = (float)FUN_18051af10();
      }
      else {
        fVar11 = SQRT(fVar13);
      }
      if ((fVar11 < DAT_1808abf54) || (DAT_1808accfc < fVar11)) {
        if (fVar13 == 0.0) {
          fVar14 = 0.0;
          fVar10 = 0.0;
          fVar9 = 0.0;
        }
        else {
          dVar5 = (double)fVar10;
          dVar4 = (double)fVar9;
          dVar3 = (double)fVar12;
          dVar8 = dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
          if (dVar8 < 0.0) {
            dVar8 = (double)FUN_18051ff20();
          }
          else {
            dVar8 = SQRT(dVar8);
          }
          dVar8 = DAT_1808ac500 / dVar8;
          fVar9 = (float)(dVar4 * dVar8);
          fVar14 = (float)(dVar3 * dVar8);
          fVar10 = (float)(dVar5 * dVar8);
        }
      }
      else {
        fVar14 = fVar14 / fVar11;
        fVar9 = fVar14 * fVar9;
        fVar10 = fVar14 * fVar10;
        fVar14 = fVar14 * fVar12;
      }
    }
    else {
      fVar9 = 0.0;
      fVar14 = 0.0;
      fVar10 = DAT_1808ac34c;
    }
    fVar12 = *(float *)(param_1 + 0xc98);
    fVar13 = DAT_1808ac9fc - *(float *)(param_1 + 0xbac) * DAT_1808ac8b0;
    if (*(char *)(param_1 + 0xba8) == '\0') {
      uVar15 = DAT_1808acad0;
    }
    else {
      uVar15 = DAT_1808aca88;
    }
    FUN_180430660(local_118,param_1 + 0x9a8);
    local_210 = fVar12 + 0.0;
    local_200 = 0;
    local_1f8 = 0;
    local_1ef = 0;
    local_1e7 = 0;
    local_1df = 0;
    local_1db = 0;
    local_1d9 = 0;
    local_218 = 0xc1800000;
    local_214 = 0xc1800000;
    local_20c = 0x41800000;
    local_208 = 0x41800000;
    local_1f0 = 2;
    local_204 = uVar15;
    FUN_180540170(local_1d8,0,0xc0);
    local_1a8 = _DAT_1808adae0;
    uStack_1a0 = _UNK_1808adae8;
    local_198 = _DAT_1808adae0;
    uStack_190 = _UNK_1808adae8;
    local_124 = 0xffffffff;
    local_418 = (float)((uint)fVar9 ^ DAT_1808adec0);
    local_120 = 0xffff;
    local_428 = &local_418;
    local_448 = local_1d8;
    local_414 = (float)((uint)fVar10 ^ DAT_1808adec0);
    local_410 = (float)((uint)fVar14 ^ DAT_1808adec0);
    local_12c = 0x3f800000;
    local_440 = fVar13;
    local_438 = fVar12;
    local_430 = fVar16;
    FUN_180439a20(param_1,puVar1,&local_218,local_118);
    local_428 = &local_418;
    local_448 = local_1d8;
    local_440 = fVar13;
    local_438 = fVar12;
    local_430 = fVar16;
    local_418 = fVar9;
    local_414 = fVar10;
    local_410 = fVar14;
    FUN_180439a20(param_1,puVar1,&local_218,local_118);
    if (*(char *)(lVar7 + 0x28) != '\0') {
      puVar6 = (undefined4 *)FUN_18042dfd0(local_2e8,lVar7);
      local_3a8 = *(undefined8 *)(puVar6 + 4);
      uStack_3a0 = *(undefined8 *)(puVar6 + 6);
      local_398 = *(undefined8 *)(puVar6 + 8);
      uStack_390 = *(undefined8 *)(puVar6 + 10);
      local_3b8 = *puVar6;
      uStack_3b4 = puVar6[1];
      uStack_3b0 = puVar6[2];
      uStack_3ac = puVar6[3];
      local_388 = *(undefined8 *)(puVar6 + 0xc);
      uStack_380 = *(undefined8 *)(puVar6 + 0xe);
      local_378 = *(undefined8 *)(puVar6 + 0x10);
      uStack_370 = *(undefined8 *)(puVar6 + 0x12);
      local_368 = *(undefined8 *)(puVar6 + 0x14);
      uStack_360 = *(undefined8 *)(puVar6 + 0x16);
      local_358 = *(undefined8 *)(puVar6 + 0x18);
      uStack_350 = *(undefined8 *)(puVar6 + 0x1a);
      local_348 = *(undefined8 *)(puVar6 + 0x1c);
      uStack_340 = *(undefined8 *)(puVar6 + 0x1e);
      local_338 = *(undefined8 *)(puVar6 + 0x20);
      uStack_330 = *(undefined8 *)(puVar6 + 0x22);
      local_328 = *(undefined8 *)(puVar6 + 0x24);
      uStack_320 = *(undefined8 *)(puVar6 + 0x26);
      local_318 = *(undefined8 *)(puVar6 + 0x28);
      uStack_310 = *(undefined8 *)(puVar6 + 0x2a);
      local_308 = *(undefined8 *)(puVar6 + 0x2c);
      uStack_300 = *(undefined8 *)(puVar6 + 0x2e);
      local_2f8 = puVar6[0x30];
      uStack_2f4 = puVar6[0x31];
      uStack_2f0 = puVar6[0x32];
      uStack_2ec = puVar6[0x33];
      FUN_18043a730(param_1 + 0x1ba0,&local_3b8);
    }
    *(undefined4 *)(param_1 + 0x1b98) = *(undefined4 *)(param_1 + 0xb04);
    *puVar1 = *(undefined8 *)(param_1 + 0xaf0);
    *(ulonglong *)(param_1 + 0x1c08) = CONCAT44(uStack_404,local_408);
    *(ulonglong *)(param_1 + 0x1c10) = CONCAT44(uStack_3fc,uStack_400);
    *(undefined8 *)(param_1 + 0x1b90) = *(undefined8 *)(param_1 + 0x1150);
    *(ulonglong *)(param_1 + 0x1c18) = CONCAT44(uStack_3f4,local_3f8);
    *(ulonglong *)(param_1 + 0x1c20) = CONCAT44(uStack_3ec,uStack_3f0);
    *(ulonglong *)(param_1 + 0x1c28) =
         CONCAT44(uStack_3e4,CONCAT22(uStack_3e6,CONCAT11(uStack_3e7,local_3e8)));
    *(ulonglong *)(param_1 + 0x1c30) = CONCAT44(uStack_3dc,uStack_3e0);
    *(ulonglong *)(param_1 + 0x1c38) = CONCAT44(uStack_3d4,local_3d8);
    *(ulonglong *)(param_1 + 0x1c40) = CONCAT44(uStack_3cc,uStack_3d0);
    *(ulonglong *)(param_1 + 0x1c48) = CONCAT44(uStack_3c4,local_3c8);
    *(undefined4 *)(param_1 + 0x1c20) = 0;
    *(undefined4 *)(param_1 + 0x1c24) = 0xbe2e147b;
    *(undefined8 *)(param_1 + 0x1bd4) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x1bdc) = *(undefined4 *)(param_1 + 0xac);
    *(undefined8 *)(param_1 + 0x1be0) = *(undefined8 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x1be8) = *(undefined4 *)(param_1 + 0xa0);
    puVar6 = *(undefined4 **)(param_1 + 0x1170);
    uVar15 = puVar6[1];
    uVar2 = puVar6[2];
    *(undefined4 *)(param_1 + 0x1bf8) = *puVar6;
    *(undefined4 *)(param_1 + 0x1bfc) = uVar15;
    *(undefined4 *)(param_1 + 0x1c00) = uVar2;
    FUN_18042e190();
    FUN_1804460e0(puVar1,param_1 + 0x1ed0);
  }
  return;
}



/* ===== 18043a450 FUN_18043a450 ===== */

void FUN_18043a450(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if ((ulonglong)((param_1[2] - lVar1 >> 2) * -0x5555555555555555) < param_2) {
    if (0x1555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar2 = param_1[1];
    uVar3 = FUN_18000fb70(param_2 * 0xc);
    FUN_180540530(uVar3,*param_1,param_1[1] - *param_1);
    FUN_1800118f0(param_1,uVar3,(lVar2 - lVar1 >> 2) * -0x5555555555555555,param_2);
  }
  return;
}



/* ===== 18043a500 FUN_18043a500 ===== */

void FUN_18043a500(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 != (undefined8 *)param_1[2]) {
    uVar6 = param_2[1];
    *puVar10 = *param_2;
    puVar10[1] = uVar6;
    uVar6 = param_2[3];
    puVar10[2] = param_2[2];
    puVar10[3] = uVar6;
    uVar6 = param_2[5];
    puVar10[4] = param_2[4];
    puVar10[5] = uVar6;
    uVar6 = param_2[7];
    puVar10[6] = param_2[6];
    puVar10[7] = uVar6;
    uVar6 = param_2[9];
    puVar10[8] = param_2[8];
    puVar10[9] = uVar6;
    uVar6 = param_2[0xb];
    puVar10[10] = param_2[10];
    puVar10[0xb] = uVar6;
    param_1[1] = param_1[1] + 0x60;
    return;
  }
  lVar8 = (longlong)puVar10 - *param_1;
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  uVar12 = 0x2aaaaaaaaaaaaaa;
  lVar8 = (lVar8 >> 4) - (lVar8 >> 0x3f);
  if (lVar8 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar11 = (param_1[2] - *param_1 >> 5) * -0x5555555555555555;
  if (uVar11 <= 0x2aaaaaaaaaaaaaa - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar12 = uVar1;
    if (uVar1 <= uVar11) {
      uVar12 = uVar11;
    }
    if (0x2aaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar12 * 0x60);
  uVar6 = param_2[1];
  puVar9 = puVar7 + lVar8 * 0xc;
  *puVar9 = *param_2;
  puVar9[1] = uVar6;
  uVar6 = param_2[3];
  puVar9[2] = param_2[2];
  puVar9[3] = uVar6;
  uVar6 = param_2[5];
  puVar9[4] = param_2[4];
  puVar9[5] = uVar6;
  uVar6 = param_2[7];
  puVar9[6] = param_2[6];
  puVar9[7] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 9);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)puVar9 + 0x44) = uVar3;
  *(undefined4 *)(puVar9 + 9) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0xb);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)puVar9 + 0x54) = uVar3;
  *(undefined4 *)(puVar9 + 0xb) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x5c) = uVar5;
  puVar2 = (undefined8 *)*param_1;
  if (puVar10 == (undefined8 *)param_1[1]) {
    lVar8 = param_1[1] - (longlong)puVar2;
    puVar9 = puVar7;
    puVar10 = puVar2;
  }
  else {
    FUN_180540530(puVar7,puVar2,(longlong)puVar10 - (longlong)puVar2);
    puVar9 = puVar9 + 0xc;
    lVar8 = param_1[1] - (longlong)puVar10;
  }
  FUN_180540530(puVar9,puVar10,lVar8);
  FUN_18043b0e0(param_1,puVar7,uVar1,uVar12);
  return;
}



/* ===== 18043a6b0 FUN_18043a6b0 ===== */

void FUN_18043a6b0(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  uVar4 = *param_1;
  if (uVar4 == 0) {
    return;
  }
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 5) * 0x20;
  uVar2 = uVar4;
  if (0xfff < uVar3) {
    uVar2 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar2) - 8;
    if (uVar4 < 0x20) {
      uVar3 = uVar3 + 0x27;
      puVar5 = auStack_28;
    }
    else {
      uVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar5 = auStack_20;
      uVar2 = uVar4;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18043a717;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18043a730 FUN_18043a730 ===== */

void FUN_18043a730(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 != (undefined8 *)param_1[2]) {
    uVar6 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar6;
    uVar6 = param_2[3];
    puVar9[2] = param_2[2];
    puVar9[3] = uVar6;
    uVar6 = param_2[5];
    puVar9[4] = param_2[4];
    puVar9[5] = uVar6;
    uVar6 = param_2[7];
    puVar9[6] = param_2[6];
    puVar9[7] = uVar6;
    uVar6 = param_2[9];
    puVar9[8] = param_2[8];
    puVar9[9] = uVar6;
    uVar6 = param_2[0xb];
    puVar9[10] = param_2[10];
    puVar9[0xb] = uVar6;
    uVar6 = param_2[0xd];
    puVar9[0xc] = param_2[0xc];
    puVar9[0xd] = uVar6;
    uVar6 = param_2[0xf];
    puVar9[0xe] = param_2[0xe];
    puVar9[0xf] = uVar6;
    uVar6 = param_2[0x11];
    puVar9[0x10] = param_2[0x10];
    puVar9[0x11] = uVar6;
    uVar6 = param_2[0x13];
    puVar9[0x12] = param_2[0x12];
    puVar9[0x13] = uVar6;
    uVar6 = param_2[0x15];
    puVar9[0x14] = param_2[0x14];
    puVar9[0x15] = uVar6;
    uVar6 = param_2[0x17];
    puVar9[0x16] = param_2[0x16];
    puVar9[0x17] = uVar6;
    uVar6 = param_2[0x19];
    puVar9[0x18] = param_2[0x18];
    puVar9[0x19] = uVar6;
    param_1[1] = param_1[1] + 0xd0;
    return;
  }
  uVar12 = 0x13b13b13b13b13b;
  lVar11 = ((longlong)puVar9 - *param_1) / 0xd0;
  if (lVar11 == 0x13b13b13b13b13b) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar11 + 1;
  uVar10 = (param_1[2] - *param_1 >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar10 <= 0x13b13b13b13b13b - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (0x13b13b13b13b13b < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar12 * 0xd0);
  uVar6 = param_2[1];
  puVar8 = puVar7 + lVar11 * 0x1a;
  *puVar8 = *param_2;
  puVar8[1] = uVar6;
  uVar6 = param_2[3];
  puVar8[2] = param_2[2];
  puVar8[3] = uVar6;
  uVar6 = param_2[5];
  puVar8[4] = param_2[4];
  puVar8[5] = uVar6;
  uVar6 = param_2[7];
  puVar8[6] = param_2[6];
  puVar8[7] = uVar6;
  uVar6 = param_2[9];
  puVar8[8] = param_2[8];
  puVar8[9] = uVar6;
  uVar6 = param_2[0xb];
  puVar8[10] = param_2[10];
  puVar8[0xb] = uVar6;
  uVar6 = param_2[0xd];
  puVar8[0xc] = param_2[0xc];
  puVar8[0xd] = uVar6;
  uVar6 = param_2[0xf];
  puVar8[0xe] = param_2[0xe];
  puVar8[0xf] = uVar6;
  uVar6 = param_2[0x11];
  puVar8[0x10] = param_2[0x10];
  puVar8[0x11] = uVar6;
  uVar6 = param_2[0x13];
  puVar8[0x12] = param_2[0x12];
  puVar8[0x13] = uVar6;
  uVar6 = param_2[0x15];
  puVar8[0x14] = param_2[0x14];
  puVar8[0x15] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar4 = *(undefined4 *)(param_2 + 0x17);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)puVar8 + 0xb4) = uVar3;
  *(undefined4 *)(puVar8 + 0x17) = uVar4;
  *(undefined4 *)((longlong)puVar8 + 0xbc) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc4);
  uVar4 = *(undefined4 *)(param_2 + 0x19);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xcc);
  *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)puVar8 + 0xc4) = uVar3;
  *(undefined4 *)(puVar8 + 0x19) = uVar4;
  *(undefined4 *)((longlong)puVar8 + 0xcc) = uVar5;
  puVar2 = (undefined8 *)*param_1;
  if (puVar9 == (undefined8 *)param_1[1]) {
    lVar11 = param_1[1] - (longlong)puVar2;
    puVar8 = puVar7;
    puVar9 = puVar2;
  }
  else {
    FUN_180540530(puVar7,puVar2,(longlong)puVar9 - (longlong)puVar2);
    puVar8 = puVar8 + 0x1a;
    lVar11 = param_1[1] - (longlong)puVar9;
  }
  FUN_180540530(puVar8,puVar9,lVar11);
  FUN_18043b180(param_1,puVar7,uVar1,uVar12);
  return;
}



/* ===== 18043a980 FUN_18043a980 ===== */

undefined8 * FUN_18043a980(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar19 = (longlong)DAT_181111980;
  uVar20 = 0x555555555555555;
  lVar12 = ((longlong)DAT_181111988 - (longlong)DAT_181111980 >> 4) * -0x5555555555555555;
  if (lVar12 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar12 + 1;
  uVar14 = ((longlong)DAT_181111990 - (longlong)DAT_181111980 >> 4) * -0x5555555555555555;
  if (uVar14 <= 0x555555555555555 - (uVar14 >> 1)) {
    uVar14 = (uVar14 >> 1) + uVar14;
    uVar20 = uVar1;
    if (uVar1 <= uVar14) {
      uVar20 = uVar14;
    }
    if (0x555555555555555 < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar13 = (undefined8 *)FUN_18000fb70(uVar20 * 0x30);
  uVar11 = param_3[1];
  uVar3 = *(undefined4 *)(param_3 + 2);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 3);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
  puVar18 = puVar13 + ((param_2 - lVar19) / 0x30) * 6;
  *puVar18 = *param_3;
  puVar18[1] = uVar11;
  uVar7 = *(undefined4 *)(param_3 + 4);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar9 = *(undefined4 *)(param_3 + 5);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar18 + 0x1c) = uVar6;
  *(undefined4 *)(puVar18 + 4) = uVar7;
  *(undefined4 *)((longlong)puVar18 + 0x24) = uVar8;
  *(undefined4 *)(puVar18 + 5) = uVar9;
  *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar10;
  if ((undefined8 *)param_2 == DAT_181111988) {
    lVar19 = (longlong)DAT_181111988 - (longlong)DAT_181111980;
    puVar15 = puVar13;
    param_2 = (longlong)DAT_181111980;
  }
  else {
    FUN_180540530(puVar13,DAT_181111980,param_2 - (longlong)DAT_181111980);
    puVar15 = puVar18 + 6;
    lVar19 = (longlong)DAT_181111988 - param_2;
  }
  puVar16 = auStack_38;
  puVar17 = auStack_38;
  FUN_180540530(puVar15,param_2,lVar19);
  if (DAT_181111980 == (undefined8 *)0x0) goto LAB_18043ab07;
  lVar19 = (longlong)DAT_181111980;
  if ((ulonglong)(((longlong)DAT_181111990 - (longlong)DAT_181111980 >> 4) << 4) < 0x1000) {
LAB_18043aafc:
    puVar17 = puVar16;
  }
  else {
    lVar19 = *(longlong *)((longlong)DAT_181111980 + -8);
    if (0x1f < ((longlong)DAT_181111980 - lVar19) - 8U) {
      lVar19 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar16 = auStack_30;
      goto LAB_18043aafc;
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x18043ab07;
  thunk_FUN_1803d64e0(lVar19);
LAB_18043ab07:
  DAT_181111980 = puVar13;
  DAT_181111988 = puVar13 + uVar1 * 6;
  DAT_181111990 = puVar13 + uVar20 * 6;
  return puVar18;
}



/* ===== 18043ab60 FUN_18043ab60 ===== */

undefined4 * FUN_18043ab60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar14 = (longlong)DAT_1811119c8;
  uVar15 = 0xaaaaaaaaaaaaaaa;
  lVar8 = ((longlong)DAT_1811119d0 - (longlong)DAT_1811119c8 >> 3) * -0x5555555555555555;
  if (lVar8 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar10 = ((longlong)DAT_1811119d8 - (longlong)DAT_1811119c8 >> 3) * -0x5555555555555555;
  if (uVar10 <= 0xaaaaaaaaaaaaaaa - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (0xaaaaaaaaaaaaaaa < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined4 *)FUN_18000fb70(uVar15 * 0x18);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar3 = *(undefined8 *)(param_3 + 4);
  puVar2 = puVar9 + ((param_2 - lVar14) / 0x18) * 6;
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined8 *)(puVar2 + 4) = uVar3;
  if ((undefined4 *)param_2 == DAT_1811119d0) {
    lVar14 = (longlong)DAT_1811119d0 - (longlong)DAT_1811119c8;
    puVar11 = puVar9;
    param_2 = (longlong)DAT_1811119c8;
  }
  else {
    FUN_180540530(puVar9,DAT_1811119c8,param_2 - (longlong)DAT_1811119c8);
    puVar11 = puVar2 + 6;
    lVar14 = (longlong)DAT_1811119d0 - param_2;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar11,param_2,lVar14);
  if (DAT_1811119c8 == (undefined4 *)0x0) goto LAB_18043ace5;
  lVar14 = (longlong)DAT_1811119c8;
  if ((ulonglong)(((longlong)DAT_1811119d8 - (longlong)DAT_1811119c8 >> 3) * 8) < 0x1000) {
LAB_18043acda:
    puVar13 = puVar12;
  }
  else {
    lVar14 = *(longlong *)((longlong)DAT_1811119c8 + -8);
    if (0x1f < ((longlong)DAT_1811119c8 - lVar14) - 8U) {
      lVar14 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar12 = auStack_30;
      goto LAB_18043acda;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18043ace5;
  thunk_FUN_1803d64e0(lVar14);
LAB_18043ace5:
  DAT_1811119c8 = puVar9;
  DAT_1811119d0 = puVar9 + uVar1 * 6;
  DAT_1811119d8 = puVar9 + uVar15 * 6;
  return puVar2;
}



/* ===== 18043ad40 FUN_18043ad40 ===== */

longlong FUN_18043ad40(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar4 = *param_1;
  if (param_1[1] - lVar4 == -0x200) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar5 = param_1[2] - lVar4 >> 9;
  uVar1 = (param_1[1] - lVar4 >> 9) + 1;
  uVar10 = 0x7fffffffffffff;
  if (uVar5 <= 0x7fffffffffffff - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x7fffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar10 * 0x200);
  lVar11 = (param_2 - lVar4 & 0xfffffffffffffe00U) + lVar3;
  FUN_18043b220(lVar11,param_3);
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  lVar4 = param_1[1];
  lVar7 = *param_1;
  lVar6 = lVar3;
  if (param_2 == lVar4) {
    for (; lVar7 != lVar4; lVar7 = lVar7 + 0x200) {
      FUN_18043b220(lVar6,lVar7);
      lVar6 = lVar6 + 0x200;
    }
  }
  else {
    for (; lVar7 != param_2; lVar7 = lVar7 + 0x200) {
      FUN_18043b220(lVar6,lVar7);
      lVar6 = lVar6 + 0x200;
    }
    FUN_18043b620(lVar6,lVar6);
    lVar4 = param_1[1];
    lVar6 = lVar11;
    for (; lVar6 = lVar6 + 0x200, param_2 != lVar4; param_2 = param_2 + 0x200) {
      FUN_18043b220(lVar6,param_2);
    }
  }
  FUN_18043b620(lVar6,lVar6);
  if (*param_1 == 0) goto LAB_18043aeea;
  FUN_18043b620(*param_1,param_1[1]);
  lVar4 = *param_1;
  if ((param_1[2] - lVar4 & 0xfffffffffffffe00U) < 0x1000) {
LAB_18043aee2:
    lVar7 = lVar4;
    puVar9 = puVar8;
  }
  else {
    lVar7 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar7) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar4 = (*pcVar2)(5);
      puVar8 = auStack_40;
      goto LAB_18043aee2;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x18043aeea;
  thunk_FUN_1803d64e0(lVar7);
LAB_18043aeea:
  *param_1 = lVar3;
  param_1[1] = uVar1 * 0x200 + lVar3;
  param_1[2] = uVar10 * 0x200 + lVar3;
  return lVar11;
}



/* ===== 18043af30 FUN_18043af30 ===== */

longlong FUN_18043af30(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  uVar11 = 0x1555555555555555;
  lVar4 = (param_1[1] - lVar2 >> 2) * -0x5555555555555555;
  if (lVar4 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar4 + 1;
  uVar6 = (param_1[2] - lVar2 >> 2) * -0x5555555555555555;
  if (uVar6 <= 0x1555555555555555 - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar11 = uVar1;
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (0x1555555555555555 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar5 = FUN_18000fb70(uVar11 * 0xc);
  lVar2 = (param_2 - lVar2) / 0xc;
  *(undefined8 *)(lVar5 + lVar2 * 0xc) = *param_3;
  lVar2 = lVar5 + lVar2 * 0xc;
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_3 + 1);
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar10 = param_1[1] - lVar4;
    lVar7 = lVar5;
    param_2 = lVar4;
  }
  else {
    FUN_180540530(lVar5,lVar4,param_2 - lVar4);
    lVar7 = lVar2 + 0xc;
    lVar10 = param_1[1] - param_2;
  }
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  FUN_180540530(lVar7,param_2,lVar10);
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_18043b09b;
  lVar7 = lVar4;
  if ((ulonglong)((param_1[2] - lVar4 >> 2) * 4) < 0x1000) {
LAB_18043b090:
    puVar9 = puVar8;
  }
  else {
    lVar7 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar8 = auStack_40;
      goto LAB_18043b090;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x18043b09b;
  thunk_FUN_1803d64e0(lVar7);
LAB_18043b09b:
  *param_1 = lVar5;
  param_1[1] = lVar5 + uVar1 * 0xc;
  param_1[2] = uVar11 * 0xc + lVar5;
  return lVar2;
}



/* ===== 18043b0e0 FUN_18043b0e0 ===== */

void FUN_18043b0e0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar3 = auStack_48;
  puVar4 = auStack_48;
  uVar5 = *param_1;
  if (uVar5 == 0) goto LAB_18043b14e;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 5) << 5) < 0x1000) {
LAB_18043b146:
    puVar4 = puVar3;
  }
  else {
    uVar2 = *(ulonglong *)(uVar5 - 8);
    uVar5 = (uVar5 - uVar2) - 8;
    if (0x1f < uVar5) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar3 = auStack_40;
      uVar2 = uVar5;
      goto LAB_18043b146;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18043b14e;
  thunk_FUN_1803d64e0(uVar2);
LAB_18043b14e:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x60 + param_2;
  param_1[2] = param_4 * 0x60 + param_2;
  return;
}



/* ===== 18043b180 FUN_18043b180 ===== */

void FUN_18043b180(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar3 = auStack_48;
  puVar4 = auStack_48;
  uVar5 = *param_1;
  if (uVar5 == 0) goto LAB_18043b1ec;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 4) * 0x10) < 0x1000) {
LAB_18043b1e4:
    puVar4 = puVar3;
  }
  else {
    uVar2 = *(ulonglong *)(uVar5 - 8);
    uVar5 = (uVar5 - uVar2) - 8;
    if (0x1f < uVar5) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar3 = auStack_40;
      uVar2 = uVar5;
      goto LAB_18043b1e4;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18043b1ec;
  thunk_FUN_1803d64e0(uVar2);
LAB_18043b1ec:
  *param_1 = param_2;
  param_1[1] = param_3 * 0xd0 + param_2;
  param_1[2] = param_4 * 0xd0 + param_2;
  return;
}



/* ===== 18043b220 FUN_18043b220 ===== */

undefined4 * FUN_18043b220(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  param_1[7] = param_2[7];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  FUN_18043b470(param_1 + 0xe,param_2 + 0xe);
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x129) = *(undefined1 *)((longlong)param_2 + 0x129);
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4e] = param_2[0x4e];
  *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x13d) = *(undefined1 *)((longlong)param_2 + 0x13d);
  *(undefined1 *)((longlong)param_1 + 0x13e) = *(undefined1 *)((longlong)param_2 + 0x13e);
  *(undefined1 *)((longlong)param_1 + 0x13f) = *(undefined1 *)((longlong)param_2 + 0x13f);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined1 *)((longlong)param_1 + 0x141) = *(undefined1 *)((longlong)param_2 + 0x141);
  param_1[0x51] = param_2[0x51];
  *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(param_2 + 0x52);
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = param_2[0x55];
  param_1[0x56] = param_2[0x56];
  param_1[0x57] = param_2[0x57];
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x5e) = uVar1;
  *(undefined1 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 0x5e) = 0xf;
  uVar1 = *(undefined8 *)(param_2 + 0x62);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x62) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x66);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x66) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x6a);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x6a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x6e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x72) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x76) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7a);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x7a) = uVar1;
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  param_1[0x7e] = param_2[0x7e];
  return param_1;
}



/* ===== 18043b470 FUN_18043b470 ===== */

undefined4 * FUN_18043b470(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  param_1[7] = param_2[7];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0xb);
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x11) = *(undefined8 *)(param_2 + 0x11);
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  uVar2 = *(undefined8 *)(param_2 + 0x22);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x22) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2a);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x26) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x2a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x34);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x36) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined8 *)(param_1 + 0x36) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  return param_1;
}



/* ===== 18043b620 FUN_18043b620 ===== */

void FUN_18043b620(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_18000f890(param_1 + 0x160);
      FUN_1802a9370(param_1 + 0x108);
      FUN_1802a9370(param_1 + 0xd0);
      FUN_180200b70(param_1 + 0xb8);
      param_1 = param_1 + 0x200;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 18043b6a0 FUN_18043b6a0 ===== */

void FUN_18043b6a0(void)

{
  if ((DAT_181111c98 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181111c98 = '\x01';
    DAT_181111c9c = FUN_18038eaf0("C_BasePlayerPawn","m_pWeaponServices");
    DAT_181111ca0 = FUN_18038eaf0("CPlayer_WeaponServices","m_hActiveWeapon");
    DAT_181111ca4 = FUN_18038eaf0("C_CSPlayerPawn","m_iShotsFired");
    if (DAT_181111ca4 == 0) {
      DAT_181111ca4 = FUN_18038eaf0("C_CSPlayerPawnBase","m_iShotsFired");
    }
    DAT_181111ca8 = FUN_18038eaf0("C_CSPlayerPawn","m_angEyeAngles");
    if (DAT_181111ca8 == 0) {
      DAT_181111ca8 = FUN_18038eaf0("C_CSPlayerPawnBase","m_angEyeAngles");
    }
    DAT_181111cac = FUN_18038eaf0("C_BasePlayerWeapon","m_nNextPrimaryAttackTick");
    DAT_181111cb0 = FUN_18038eaf0("C_CSWeaponBase","m_fAccuracyPenalty");
    DAT_181111cb4 = FUN_18038eaf0("C_CSWeaponBase","m_fLastShotTime");
    DAT_181111cb8 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_181111cbc = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_181111cc0 = FUN_18038eaf0("CCSWeaponBaseVData","m_flCycleTime");
    DAT_181111cc4 = FUN_18038eaf0("CBasePlayerController","m_nTickBase");
    DAT_181111cc8 = FUN_18038eaf0("C_BasePlayerPawn","v_angle");
  }
  return;
}



/* ===== 18043b840 FUN_18043b840 ===== */

undefined8 FUN_18043b840(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res10 [24];
  
  if ((DAT_181111c9c != 0) && (DAT_181111ca0 != 0)) {
    lVar2 = FUN_18000f3a0(param_1 + (ulonglong)DAT_181111c9c);
    if (lVar2 - 0x10000U < 0x7ffffffeffff) {
      iVar1 = FUN_180011200((ulonglong)DAT_181111ca0 + lVar2);
      if (iVar1 != -1) {
        puVar3 = (undefined8 *)FUN_1803a0940(local_res10,iVar1);
        return *puVar3;
      }
    }
  }
  return 0;
}



/* ===== 18043b8b0 FUN_18043b8b0 ===== */

undefined8 FUN_18043b8b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (DAT_181111cb8 != 0)) {
    lVar1 = FUN_18000f3a0(param_1 + (ulonglong)DAT_181111cb8 + 8);
    lVar3 = 0;
    if (lVar1 - 0x10000U < 0x7ffffffeffff) {
      lVar3 = lVar1;
    }
    if ((lVar3 != 0) && (DAT_181111cbc != 0)) {
      uVar2 = FUN_180011200(lVar3 + (ulonglong)DAT_181111cbc);
      return uVar2;
    }
  }
  return 0xffffffff;
}



/* ===== 18043b910 FUN_18043b910 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18043b910(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  longlong local_res8;
  
  iVar3 = FUN_180011200((ulonglong)DAT_181111cac + param_1);
  iVar1 = param_2[0xd9];
  if (iVar3 == iVar1) {
    return;
  }
  iVar4 = FUN_18043b8b0(param_1);
  if (iVar4 < 0) {
    return;
  }
  iVar2 = *(int *)(&DAT_181111a00 + (longlong)((*param_2 % 0x96 + 0x96) % 0x96) * 4);
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
  }
  else {
    local_res8 = DAT_181108a00;
  }
  if ((local_res8 == 0) || (DAT_181111cc4 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_180011200((ulonglong)DAT_181111cc4 + local_res8);
  }
  if (iVar3 <= iVar1) {
    if ((DAT_181111c59 != '\0') && (DAT_181111c58 == '\0')) goto joined_r0x00018043bb08;
    if (iVar3 != iVar5) {
      return;
    }
    if (DAT_181111c59 == '\0') {
      if ((_DAT_181111c5c < 1) || (DAT_181111c5a != '\x01')) {
        _DAT_181111c58 = 0x10000;
        _DAT_181111c5c = 1;
      }
      else {
        _DAT_181111c5c = _DAT_181111c5c + 1;
      }
      _DAT_181111c58 = CONCAT12(DAT_181111c5a,0x101);
    }
    goto joined_r0x00018043bb63;
  }
  if ((DAT_181111c59 != '\0') && (DAT_181111c58 == '\x01')) {
joined_r0x00018043bb08:
    if (iVar3 != iVar2) {
      return;
    }
    if (iVar4 == 0) {
      DAT_181111c60 = 0;
      return;
    }
    _DAT_181111c58 = _DAT_181111c58 & 0xff;
    _DAT_181111c5c = 0;
    return;
  }
  if ((param_1 == 0) || (DAT_181111cb8 == 0)) {
LAB_18043ba76:
    fVar8 = 0.0;
  }
  else {
    lVar6 = FUN_18000f3a0((ulonglong)DAT_181111cb8 + 8 + param_1);
    lVar7 = 0;
    if (lVar6 - 0x10000U < 0x7ffffffeffff) {
      lVar7 = lVar6;
    }
    if ((lVar7 == 0) || (DAT_181111cc0 == 0)) goto LAB_18043ba76;
    fVar8 = (float)FUN_18000f3d0(lVar7 + (ulonglong)DAT_181111cc0);
  }
  fVar8 = fVar8 * DAT_1808acab0;
  fVar8 = (float)FUN_18053fc00((float)((DAT_1808ac1f0 ^ (uint)fVar8) & _DAT_1808ade90 ^ (uint)fVar8)
                               + fVar8);
  if (iVar3 != (int)fVar8 + -3 + iVar5) {
    return;
  }
  if (DAT_181111c59 == '\0') {
    if ((_DAT_181111c5c < 1) || (DAT_181111c5a != '\0')) {
      _DAT_181111c58 = 0;
      _DAT_181111c5c = 1;
    }
    else {
      _DAT_181111c5c = _DAT_181111c5c + 1;
    }
    _DAT_181111c58 = CONCAT12(DAT_181111c5a,0x100);
  }
joined_r0x00018043bb63:
  if (iVar4 == 0) {
    DAT_181111c60 = 1;
  }
  return;
}



/* ===== 18043bb90 FUN_18043bb90 ===== */

undefined8 FUN_18043bb90(void)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((DAT_180961fa8 != 0) && (uVar3 = (ulonglong)DAT_180961fb0, DAT_180961fb0 != 0)) {
    lVar1 = FUN_18000f3a0();
    if ((lVar1 - 0x10000U < 0x7ffffffeffff) && ((lVar1 + uVar3) - 0x10000 < 0x7ffffffeffff)) {
      uVar2 = FUN_180011200();
      return uVar2;
    }
  }
  return 0xffffffff;
}



/* ===== 18043bbf0 FUN_18043bbf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18043bbf0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  uint *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined8 local_res8;
  undefined1 local_58 [48];
  
  FUN_18043b6a0();
  lVar6 = FUN_180266660();
  if (((lVar6 != 0) && (DAT_180cf9f80 != 0)) &&
     (cVar4 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar6), cVar4 != '\0')) {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  lVar6 = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
    return;
  }
  if (DAT_180ca09f0 == 0) {
    return;
  }
  iVar5 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0);
  if (999 < iVar5 - 1U) {
    return;
  }
  iVar5 = FUN_18043bb90();
  if (iVar5 < 0) {
    return;
  }
  lVar7 = (longlong)(iVar5 % 0x96);
  lVar11 = lVar7 * 2000;
  iVar2 = (&DAT_180c3df70)[lVar7 * 500];
  puVar10 = (undefined4 *)0x0;
  if (iVar2 == iVar5) {
    puVar10 = &DAT_180c3df70 + lVar7 * 500;
  }
  if (puVar10 == (undefined4 *)0x0) {
    return;
  }
  lVar7 = FUN_18043b840(lVar6);
  if (lVar7 != 0) {
    if (DAT_181111cac != 0) {
      FUN_18043b910(lVar7,puVar10);
    }
    if (DAT_181111cb0 != 0) {
      fVar12 = (float)FUN_18000f3d0(lVar7 + (ulonglong)DAT_181111cb0);
      pfVar8 = (float *)&DAT_00000798;
      if (iVar2 == iVar5) {
        pfVar8 = (float *)(&DAT_180c3e708 + lVar11);
      }
      if (fVar12 != *pfVar8) {
        if (*pfVar8 <= fVar12) {
          DAT_181111c68 = '\0';
          _DAT_181111c6c = 0;
        }
        else if (DAT_181111c68 == '\0') {
          iVar3 = DAT_181111c70;
          if ((DAT_181111c70 < 1) || (fVar12 != _DAT_181111c6c)) {
            _DAT_181111c6c = CONCAT44(1,fVar12);
          }
          else {
            _DAT_181111c6c = CONCAT44(DAT_181111c70 + 1,_DAT_181111c6c);
            if (8 < iVar3) {
              DAT_181111c68 = '\x01';
              _DAT_181111c64 = fVar12;
            }
          }
        }
      }
    }
  }
  if (DAT_181111ca8 == 0) {
    return;
  }
  pfVar8 = (float *)FUN_1800111b0(local_58,lVar6 + (ulonglong)DAT_181111ca8);
  fVar12 = *pfVar8;
  fVar1 = pfVar8[2];
  puVar9 = (uint *)&DAT_0000006c;
  if (iVar2 == iVar5) {
    puVar9 = (uint *)(&DAT_180c3dfdc + lVar11);
  }
  fVar13 = (float)((uint)fVar12 & _DAT_1808ade90) - (float)(*puVar9 & _DAT_1808ade90);
  if ((float)((uint)fVar13 & _DAT_1808ade90) <= DAT_1808ac090) {
    if ((DAT_181111c78 == '\0') || ((float)((uint)fVar12 & _DAT_1808ade90) <= DAT_181111c74))
    goto LAB_18043beca;
  }
  else if (fVar13 < 0.0) {
    if (DAT_181111c78 == '\0') {
      iVar3 = DAT_181111c80;
      if ((DAT_181111c80 < 1) || (fVar12 != _DAT_181111c7c)) {
        _DAT_181111c7c = CONCAT44(1,fVar12);
      }
      else {
        _DAT_181111c7c = CONCAT44(DAT_181111c80 + 1,_DAT_181111c7c);
        if (iVar3 != 1) {
          DAT_181111c78 = '\x01';
          DAT_181111c74 = fVar12;
        }
      }
    }
    goto LAB_18043beca;
  }
  DAT_181111c78 = '\0';
  _DAT_181111c7c = 0;
LAB_18043beca:
  puVar9 = (uint *)&DAT_00000074;
  if (iVar2 == iVar5) {
    puVar9 = (uint *)(&DAT_180c3dfe4 + lVar11);
  }
  fVar12 = (float)((uint)fVar1 & _DAT_1808ade90) - (float)(*puVar9 & _DAT_1808ade90);
  if ((float)((uint)fVar12 & _DAT_1808ade90) <= DAT_1808ac090) {
    if (DAT_181111c88 == '\0') {
      return;
    }
    if ((float)((uint)fVar1 & _DAT_1808ade90) <= DAT_181111c84) {
      return;
    }
  }
  else if (fVar12 < 0.0) {
    if (DAT_181111c88 != '\0') {
      return;
    }
    iVar5 = DAT_181111c90;
    if ((DAT_181111c90 < 1) || (fVar1 != _DAT_181111c8c)) {
      _DAT_181111c8c = CONCAT44(1,fVar1);
      return;
    }
    _DAT_181111c8c = CONCAT44(DAT_181111c90 + 1,_DAT_181111c8c);
    if (iVar5 == 1) {
      return;
    }
    DAT_181111c84 = fVar1;
    DAT_181111c88 = 1;
    return;
  }
  _DAT_181111c8c = 0;
  DAT_181111c88 = 0;
  return;
}



/* ===== 18043bfb0 FUN_18043bfb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18043bfb0(void)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined8 *puVar28;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_978 [32];
  undefined8 local_958;
  undefined1 local_950;
  uint7 uStack_94f;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined4 uStack_938;
  uint uStack_934;
  undefined8 local_900;
  uint uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 local_8d4;
  undefined4 uStack_8d0;
  undefined8 uStack_8cc;
  undefined4 local_8c4;
  undefined4 uStack_8c0;
  uint local_8bc;
  undefined1 local_8b8 [664];
  undefined1 local_620 [1320];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_978;
  FUN_18043b6a0();
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_958);
    DAT_181108a00 = local_958;
    DAT_1811089f8 = FUN_1803a0c50(&local_958);
    DAT_180cd1304 = '\x01';
  }
  lVar27 = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
    return;
  }
  if (DAT_180ca09f0 == 0) {
    return;
  }
  iVar21 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0);
  if (999 < iVar21 - 1U) {
    return;
  }
  iVar21 = FUN_18043bb90();
  if (iVar21 < 0) {
    return;
  }
  lVar24 = (longlong)(iVar21 % 0x96);
  lVar30 = lVar24 * 2000;
  if ((&DAT_180c3df70)[lVar24 * 500] != iVar21) {
    return;
  }
  cVar20 = FUN_180463b50(&DAT_180c3d7b0,lVar27,0x11);
  if (cVar20 == '\0') {
    return;
  }
  FUN_1801fcbf0(local_8b8,&DAT_180c3df80 + lVar30);
  if (DAT_180c3dafc == -1) {
    lVar29 = 0;
  }
  else {
    plVar25 = (longlong *)FUN_1803a0940(&local_958);
    lVar29 = *plVar25;
    if ((lVar29 != 0) && (cVar20 = FUN_180462f60(lVar29), cVar20 != '\0')) {
      bVar2 = true;
      goto LAB_18043c124;
    }
  }
  bVar2 = false;
LAB_18043c124:
  bVar3 = false;
  bVar4 = false;
  if (DAT_180c3dafc == *(int *)(&DAT_180c3e2cc + lVar30)) {
    if (bVar2) {
      if ((((((DAT_180c3db30 == (&DAT_180c3e300)[lVar30]) &&
             (DAT_180c3db31 == (&DAT_180c3e301)[lVar30])) &&
            (DAT_180c3db32 == (&DAT_180c3e302)[lVar30])) &&
           ((DAT_180c3db33 == (&DAT_180c3e303)[lVar30] &&
            (DAT_180c3db34 == (&DAT_180c3e304)[lVar30])))) &&
          (DAT_180c3db38 == *(float *)(&DAT_180c3e308 + lVar30))) &&
         (((DAT_180c3db3c == *(float *)(&DAT_180c3e30c + lVar30) &&
           (DAT_180c3db40 == *(int *)(&DAT_180c3e310 + lVar30))) &&
          ((DAT_180c3db44 == *(float *)(&DAT_180c3e314 + lVar30) &&
           (DAT_180c3d99c == *(float *)(&DAT_180c3e16c + lVar30))))))) {
        bVar4 = true;
      }
      else {
        (&DAT_180c3df78)[lVar24 * 500] = (&DAT_180c3df78)[lVar24 * 500] | 0x20;
        bVar4 = true;
      }
    }
  }
  else if ((((*(int *)(&DAT_180c3e2cc + lVar30) == -1) ||
            (plVar25 = (longlong *)FUN_1803a0940(&local_958), *plVar25 == 0)) || (lVar29 == 0)) ||
          ((bVar2 || (cVar20 = FUN_180462f60(), cVar20 != '\0')))) {
    (&DAT_180c3df78)[lVar24 * 500] = (&DAT_180c3df78)[lVar24 * 500] | 0x20;
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  fVar14 = DAT_180c3d878;
  fVar13 = DAT_180c3d874;
  fVar12 = DAT_180c3d870;
  fVar11 = DAT_180c3d86c;
  fVar10 = DAT_180c3d868;
  fVar31 = DAT_180c3d864;
  fVar32 = DAT_180c3d85c._4_4_;
  iVar23 = (int)DAT_180c3d85c;
  if (((((int)DAT_180c3d85c != *(int *)(&DAT_180c3e02c + lVar30)) ||
       (DAT_180c3d85c._4_4_ != *(float *)(&DAT_180c3e030 + lVar30))) ||
      ((DAT_180c3d864 != *(float *)(&DAT_180c3e034 + lVar30) ||
       (((DAT_180c3d868 != *(float *)(&DAT_180c3e038 + lVar30) ||
         (DAT_180c3d86c != *(float *)(&DAT_180c3e03c + lVar30))) ||
        (DAT_180c3d870 != *(float *)(&DAT_180c3e040 + lVar30))))))) ||
     ((DAT_180c3d874 != *(float *)(&DAT_180c3e044 + lVar30) ||
      (DAT_180c3d878 != *(float *)(&DAT_180c3e048 + lVar30))))) {
    (&DAT_180c3df78)[lVar24 * 500] = (&DAT_180c3df78)[lVar24 * 500] | 4;
  }
  fVar18 = DAT_180c3d888;
  fVar17 = DAT_180c3d884;
  fVar16 = DAT_180c3d87c._4_4_;
  iVar15 = (int)DAT_180c3d87c;
  uVar22 = (&DAT_180c3df78)[lVar24 * 500];
  if ((((int)DAT_180c3d87c != *(int *)(&DAT_180c3e04c + lVar30)) ||
      (DAT_180c3d87c._4_4_ != *(float *)(&DAT_180c3e050 + lVar30))) ||
     ((DAT_180c3d884 != *(float *)(&DAT_180c3e054 + lVar30) ||
      (DAT_180c3d888 != *(float *)(&DAT_180c3e058 + lVar30))))) {
    uVar22 = uVar22 | 4;
    (&DAT_180c3df78)[lVar24 * 500] = uVar22;
  }
  fVar9 = DAT_180c3d7c4;
  fVar8 = DAT_180c3d7c0;
  fVar7 = DAT_180c3d7bc;
  uVar6 = _DAT_1808ade90;
  fVar5 = DAT_1808ac090;
  if (((DAT_1808ac090 <
        (float)((uint)(DAT_180c3d7bc - *(float *)(&DAT_180c3df8c + lVar30)) & _DAT_1808ade90)) ||
      (DAT_1808ac090 <
       (float)((uint)(DAT_180c3d7c0 - *(float *)(&DAT_180c3df90 + lVar30)) & _DAT_1808ade90))) ||
     (DAT_1808ac090 <
      (float)((uint)(DAT_180c3d7c4 - *(float *)(&DAT_180c3df94 + lVar30)) & _DAT_1808ade90))) {
    (&DAT_180c3df78)[lVar24 * 500] = uVar22 | 2;
    *(float *)(&DAT_180c3df8c + lVar30) = fVar7;
    *(float *)(&DAT_180c3df90 + lVar30) = fVar8;
    *(float *)(&DAT_180c3df94 + lVar30) = fVar9;
    uVar22 = (&DAT_180c3df78)[lVar24 * 500];
  }
  fVar9 = DAT_180c3d7b8;
  fVar8 = DAT_180c3d7b4;
  fVar7 = DAT_180c3d7b0;
  if (((fVar5 < (float)((uint)(DAT_180c3d7b0 - *(float *)(&DAT_180c3df80 + lVar30)) & uVar6)) ||
      (fVar5 < (float)((uint)(DAT_180c3d7b4 - *(float *)(&DAT_180c3df84 + lVar30)) & uVar6))) ||
     (fVar5 < (float)((uint)(DAT_180c3d7b8 - *(float *)(&DAT_180c3df88 + lVar30)) & uVar6))) {
    (&DAT_180c3df78)[lVar24 * 500] = uVar22 | 1;
    *(float *)(&DAT_180c3df80 + lVar30) = fVar7;
    *(float *)(&DAT_180c3df84 + lVar30) = fVar8;
    *(float *)(&DAT_180c3df88 + lVar30) = fVar9;
  }
  *(undefined4 *)(&DAT_180c3e0a0 + lVar30) = DAT_180c3d8d0;
  *(undefined8 *)(&DAT_180c3df98 + lVar30) = DAT_180c3d7c8;
  *(undefined4 *)(&DAT_180c3dfa0 + lVar30) = DAT_180c3d7d0;
  *(undefined8 *)(&DAT_180c3dfa4 + lVar30) = DAT_180c3d7d4;
  *(undefined4 *)(&DAT_180c3dfac + lVar30) = DAT_180c3d7dc;
  *(undefined4 *)(&DAT_180c3dfe8 + lVar30) = DAT_180c3d818;
  *(undefined4 *)(&DAT_180c3dfec + lVar30) = DAT_180c3d81c;
  (&DAT_180c3dff0)[lVar30] = DAT_180c3d820;
  *(undefined4 *)(&DAT_180c3dff8 + lVar30) = DAT_180c3d828;
  *(undefined8 *)(&DAT_180c3e000 + lVar30) = DAT_180c3d830;
  *(undefined4 *)(&DAT_180c3e008 + lVar30) = DAT_180c3d838;
  *(int *)(&DAT_180c3e02c + lVar30) = iVar23;
  *(float *)(&DAT_180c3e030 + lVar30) = fVar32;
  *(float *)(&DAT_180c3e034 + lVar30) = fVar31;
  *(float *)(&DAT_180c3e038 + lVar30) = fVar10;
  *(float *)(&DAT_180c3e03c + lVar30) = fVar11;
  *(float *)(&DAT_180c3e040 + lVar30) = fVar12;
  *(float *)(&DAT_180c3e044 + lVar30) = fVar13;
  *(float *)(&DAT_180c3e048 + lVar30) = fVar14;
  *(int *)(&DAT_180c3e04c + lVar30) = iVar15;
  *(float *)(&DAT_180c3e050 + lVar30) = fVar16;
  *(float *)(&DAT_180c3e054 + lVar30) = fVar17;
  *(float *)(&DAT_180c3e058 + lVar30) = fVar18;
  *(undefined8 *)(&DAT_180c3e0f8 + lVar30) = DAT_180c3d928;
  *(undefined8 *)(&DAT_180c3e100 + lVar30) = DAT_180c3d930;
  *(undefined8 *)(&DAT_180c3e108 + lVar30) = DAT_180c3d938;
  *(undefined8 *)(&DAT_180c3e110 + lVar30) = DAT_180c3d940;
  *(undefined8 *)(&DAT_180c3e118 + lVar30) = DAT_180c3d948;
  *(undefined8 *)(&DAT_180c3e120 + lVar30) = DAT_180c3d950;
  *(undefined4 *)(&DAT_180c3e130 + lVar30) = DAT_180c3d960;
  *(undefined4 *)(&DAT_180c3e144 + lVar30) = DAT_180c3d974;
  *(undefined4 *)(&DAT_180c3e148 + lVar30) = DAT_180c3d978;
  *(undefined4 *)(&DAT_180c3e14c + lVar30) = DAT_180c3d97c;
  *(undefined8 *)(&DAT_180c3e150 + lVar30) = DAT_180c3d980;
  *(undefined4 *)(&DAT_180c3e158 + lVar30) = DAT_180c3d988;
  fVar32 = *(float *)(&DAT_180c3e15c + lVar30);
  if (DAT_1808ac01c <= (float)((uint)(DAT_180c3d98c - *(float *)(&DAT_180c3e15c + lVar30)) & uVar6))
  {
    fVar32 = DAT_180c3d98c;
  }
  *(float *)(&DAT_180c3e15c + lVar30) = fVar32;
  (&DAT_180c3e160)[lVar30] = DAT_180c3d990;
  (&DAT_180c3e161)[lVar30] = DAT_180c3d991;
  uVar1 = CONCAT44(uRam0000000180c3d9a0,DAT_180c3d99c);
  *(undefined8 *)(&DAT_180c3e164 + lVar30) = _DAT_180c3d994;
  *(undefined8 *)(&DAT_180c3e16c + lVar30) = uVar1;
  (&DAT_180c3e180)[lVar30] = DAT_180c3d9b0;
  (&DAT_180c3e181)[lVar30] = DAT_180c3d9b1;
  (&DAT_180c3e182)[lVar30] = DAT_180c3d9b2;
  (&DAT_180c3e183)[lVar30] = DAT_180c3d9b3;
  uVar1 = uRam0000000180c3d9bc;
  *(undefined8 *)(&DAT_180c3e184 + lVar30) = _DAT_180c3d9b4;
  *(undefined8 *)(lVar30 + 0x180c3e18c) = uVar1;
  *(undefined4 *)(&DAT_180c3e194 + lVar30) = DAT_180c3d9c4;
  *(undefined4 *)(&DAT_180c3e198 + lVar30) = DAT_180c3d9c8;
  *(undefined8 *)(&DAT_180c3e19c + lVar30) = DAT_180c3d9cc;
  *(undefined4 *)(&DAT_180c3e1a4 + lVar30) = DAT_180c3d9d4;
  (&DAT_180c3e1a8)[lVar30] = DAT_180c3d9d8;
  fVar32 = DAT_1808ac040;
  fVar31 = *(float *)(&DAT_180c3e1ac + lVar30);
  if (DAT_1808ac040 <= (float)((uint)(DAT_180c3d9dc - *(float *)(&DAT_180c3e1ac + lVar30)) & uVar6))
  {
    fVar31 = DAT_180c3d9dc;
  }
  *(float *)(&DAT_180c3e1ac + lVar30) = fVar31;
  fVar31 = *(float *)(&DAT_180c3e1b0 + lVar30);
  if (fVar5 <= (float)((uint)(DAT_180c3d9e0 - *(float *)(&DAT_180c3e1b0 + lVar30)) & uVar6)) {
    fVar31 = DAT_180c3d9e0;
  }
  *(float *)(&DAT_180c3e1b0 + lVar30) = fVar31;
  uVar1 = uRam0000000180c3d9ec;
  *(undefined8 *)(&DAT_180c3e1b4 + lVar30) = _DAT_180c3d9e4;
  *(undefined8 *)(lVar30 + 0x180c3e1bc) = uVar1;
  *(undefined4 *)(&DAT_180c3e1c4 + lVar30) = DAT_180c3d9f4;
  (&DAT_180c3e1d8)[lVar30] = DAT_180c3da08;
  *(undefined4 *)(&DAT_180c3e1dc + lVar30) = DAT_180c3da0c;
  *(undefined4 *)(&DAT_180c3e1e0 + lVar30) = DAT_180c3da10;
  *(undefined4 *)(&DAT_180c3e1e4 + lVar30) = DAT_180c3da14;
  *(undefined4 *)(&DAT_180c3e1e8 + lVar30) = DAT_180c3da18;
  *(undefined4 *)(&DAT_180c3e1ec + lVar30) = DAT_180c3da1c;
  *(undefined4 *)(&DAT_180c3e1f0 + lVar30) = DAT_180c3da20;
  *(undefined4 *)(&DAT_180c3e1f4 + lVar30) = DAT_180c3da24;
  *(undefined8 *)(&DAT_180c3e1f8 + lVar30) = DAT_180c3da28;
  *(undefined4 *)(&DAT_180c3e200 + lVar30) = DAT_180c3da30;
  if (bVar3) {
    *(int *)(&DAT_180c3e2cc + lVar30) = DAT_180c3dafc;
    if (lVar29 != 0) {
      *(undefined4 *)(&DAT_180c3e2d0 + lVar30) = DAT_180c3db00;
      puVar26 = (undefined8 *)(&DAT_180c3e318 + lVar30);
      puVar28 = (undefined8 *)&DAT_180c3db48;
      lVar29 = 5;
      do {
        uVar1 = puVar28[1];
        *puVar26 = *puVar28;
        puVar26[1] = uVar1;
        uVar1 = puVar28[3];
        puVar26[2] = puVar28[2];
        puVar26[3] = uVar1;
        uVar1 = puVar28[5];
        puVar26[4] = puVar28[4];
        puVar26[5] = uVar1;
        uVar1 = puVar28[7];
        puVar26[6] = puVar28[6];
        puVar26[7] = uVar1;
        uVar1 = puVar28[9];
        puVar26[8] = puVar28[8];
        puVar26[9] = uVar1;
        uVar1 = puVar28[0xb];
        puVar26[10] = puVar28[10];
        puVar26[0xb] = uVar1;
        uVar1 = puVar28[0xd];
        puVar26[0xc] = puVar28[0xc];
        puVar26[0xd] = uVar1;
        uVar1 = puVar28[0xf];
        puVar26[0xe] = puVar28[0xe];
        puVar26[0xf] = uVar1;
        puVar26 = puVar26 + 0x10;
        puVar28 = puVar28 + 0x10;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      *(undefined4 *)(&DAT_180c3e598 + lVar30) = DAT_180c3ddc8;
      *(undefined4 *)(&DAT_180c3e59c + lVar30) = DAT_180c3ddcc;
      *(undefined4 *)(&DAT_180c3e5a0 + lVar30) = DAT_180c3ddd0;
      *(undefined4 *)(&DAT_180c3e5a4 + lVar30) = DAT_180c3ddd4;
      *(undefined4 *)(&DAT_180c3e5a8 + lVar30) = DAT_180c3ddd8;
      puVar26 = (undefined8 *)(&DAT_180c3e5ac + lVar30);
      puVar28 = (undefined8 *)&DAT_180c3dddc;
      lVar29 = 2;
      do {
        uVar1 = puVar28[1];
        *puVar26 = *puVar28;
        puVar26[1] = uVar1;
        uVar1 = puVar28[3];
        puVar26[2] = puVar28[2];
        puVar26[3] = uVar1;
        uVar1 = puVar28[5];
        puVar26[4] = puVar28[4];
        puVar26[5] = uVar1;
        uVar1 = puVar28[7];
        puVar26[6] = puVar28[6];
        puVar26[7] = uVar1;
        uVar1 = puVar28[9];
        puVar26[8] = puVar28[8];
        puVar26[9] = uVar1;
        uVar1 = puVar28[0xb];
        puVar26[10] = puVar28[10];
        puVar26[0xb] = uVar1;
        uVar1 = puVar28[0xd];
        puVar26[0xc] = puVar28[0xc];
        puVar26[0xd] = uVar1;
        uVar1 = puVar28[0xf];
        puVar26[0xe] = puVar28[0xe];
        puVar26[0xf] = uVar1;
        puVar26 = puVar26 + 0x10;
        puVar28 = puVar28 + 0x10;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      *(undefined4 *)(&DAT_180c3e6ac + lVar30) = DAT_180c3dedc;
      *(undefined4 *)(&DAT_180c3e6b0 + lVar30) = DAT_180c3dee0;
      *(undefined4 *)(&DAT_180c3e6b4 + lVar30) = DAT_180c3dee4;
      *(undefined4 *)(&DAT_180c3e6b8 + lVar30) = DAT_180c3dee8;
      *(undefined4 *)(&DAT_180c3e2d4 + lVar30) = DAT_180c3db04;
      *(undefined4 *)(&DAT_180c3e2d8 + lVar30) = DAT_180c3db08;
      *(undefined4 *)(&DAT_180c3e2dc + lVar30) = DAT_180c3db0c;
      *(undefined4 *)(&DAT_180c3e2e0 + lVar30) = DAT_180c3db10;
      *(undefined4 *)(&DAT_180c3e2e4 + lVar30) = DAT_180c3db14;
      *(undefined4 *)(&DAT_180c3e2e8 + lVar30) = DAT_180c3db18;
      *(undefined4 *)(&DAT_180c3e2ec + lVar30) = DAT_180c3db1c;
      *(undefined4 *)(&DAT_180c3e2f0 + lVar30) = DAT_180c3db20;
      *(undefined4 *)(&DAT_180c3e2f4 + lVar30) = DAT_180c3db24;
      *(undefined4 *)(&DAT_180c3e2f8 + lVar30) = DAT_180c3db28;
      (&DAT_180c3e2fc)[lVar30] = DAT_180c3db2c;
      (&DAT_180c3e2fd)[lVar30] = DAT_180c3db2d;
      (&DAT_180c3e2fe)[lVar30] = DAT_180c3db2e;
      (&DAT_180c3e2ff)[lVar30] = DAT_180c3db2f;
      (&DAT_180c3e300)[lVar30] = DAT_180c3db30;
      (&DAT_180c3e301)[lVar30] = DAT_180c3db31;
      (&DAT_180c3e302)[lVar30] = DAT_180c3db32;
      (&DAT_180c3e303)[lVar30] = DAT_180c3db33;
      (&DAT_180c3e304)[lVar30] = DAT_180c3db34;
      *(float *)(&DAT_180c3e308 + lVar30) = DAT_180c3db38;
      *(float *)(&DAT_180c3e30c + lVar30) = DAT_180c3db3c;
      *(int *)(&DAT_180c3e310 + lVar30) = DAT_180c3db40;
      *(float *)(&DAT_180c3e314 + lVar30) = DAT_180c3db44;
      *(undefined4 *)(&DAT_180c3e6bc + lVar30) = DAT_180c3deec;
      *(undefined4 *)(&DAT_180c3e6c0 + lVar30) = DAT_180c3def0;
      (&DAT_180c3e6cc)[lVar30] = DAT_180c3defc;
      *(undefined4 *)(&DAT_180c3e704 + lVar30) = DAT_180c3df34;
      uVar19 = DAT_180c3df38;
      *(undefined4 *)(&DAT_180c3e708 + lVar30) = DAT_180c3df38;
      *(undefined4 *)(&DAT_180c3e70c + lVar30) = DAT_180c3df3c;
      *(undefined4 *)(&DAT_180c3e710 + lVar30) = DAT_180c3df40;
      (&DAT_180c3e714)[lVar30] = DAT_180c3df44;
      *(undefined8 *)(&DAT_180c3e728 + lVar30) = DAT_180c3df58;
      *(undefined8 *)(&DAT_180c3e730 + lVar30) = DAT_180c3df60;
      *(undefined2 *)(&DAT_180c3e738 + lVar30) = DAT_180c3df68;
      *(undefined4 *)(&DAT_180c3e6d0 + lVar30) = uVar19;
    }
  }
  else {
    *(undefined4 *)(&DAT_180c3e704 + lVar30) = DAT_180c3df34;
    uVar19 = DAT_180c3df38;
    *(undefined4 *)(&DAT_180c3e708 + lVar30) = DAT_180c3df38;
    *(undefined4 *)(&DAT_180c3e6d0 + lVar30) = uVar19;
    (&DAT_180c3e2fe)[lVar30] = DAT_180c3db2e;
    *(undefined4 *)(&DAT_180c3e70c + lVar30) = DAT_180c3df3c;
    *(undefined4 *)(&DAT_180c3e710 + lVar30) = DAT_180c3df40;
    *(undefined4 *)(&DAT_180c3e2d4 + lVar30) = DAT_180c3db04;
    *(undefined4 *)(&DAT_180c3e2dc + lVar30) = DAT_180c3db0c;
    *(undefined4 *)(&DAT_180c3e2e4 + lVar30) = DAT_180c3db14;
    if (bVar4) {
      (&DAT_180c3e300)[lVar30] = DAT_180c3db30;
      (&DAT_180c3e301)[lVar30] = DAT_180c3db31;
      (&DAT_180c3e302)[lVar30] = DAT_180c3db32;
      (&DAT_180c3e303)[lVar30] = DAT_180c3db33;
      (&DAT_180c3e304)[lVar30] = DAT_180c3db34;
      *(float *)(&DAT_180c3e308 + lVar30) = DAT_180c3db38;
      *(float *)(&DAT_180c3e30c + lVar30) = DAT_180c3db3c;
      *(int *)(&DAT_180c3e310 + lVar30) = DAT_180c3db40;
      *(float *)(&DAT_180c3e314 + lVar30) = DAT_180c3db44;
    }
    else {
      *(undefined4 *)(&DAT_180c3e2f0 + lVar30) = DAT_180c3db20;
    }
  }
  uVar22 = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
  if (((uVar22 != 0) &&
      (lVar27 = FUN_18000f3a0((ulonglong)uVar22 + lVar27), lVar27 - 0x10000U < 0x7ffffffeffff)) &&
     (lVar27 = FUN_180047bf0(lVar27), lVar27 != 0)) {
    fVar31 = *(float *)(&DAT_180c3e0bc + lVar30);
    if (fVar32 <= (float)((uint)(DAT_180c3d8ec - *(float *)(&DAT_180c3e0bc + lVar30)) & uVar6)) {
      fVar31 = DAT_180c3d8ec;
    }
    *(float *)(&DAT_180c3e0bc + lVar30) = fVar31;
    fVar31 = *(float *)(&DAT_180c3e0c0 + lVar30);
    if (fVar32 <= (float)((uint)(DAT_180c3d8f0 - *(float *)(&DAT_180c3e0c0 + lVar30)) & uVar6)) {
      fVar31 = DAT_180c3d8f0;
    }
    *(float *)(&DAT_180c3e0c0 + lVar30) = fVar31;
    fVar31 = *(float *)(&DAT_180c3e0c4 + lVar30);
    if (fVar32 <= (float)((uint)(DAT_180c3d8f4 - *(float *)(&DAT_180c3e0c4 + lVar30)) & uVar6)) {
      fVar31 = DAT_180c3d8f4;
    }
    *(float *)(&DAT_180c3e0c4 + lVar30) = fVar31;
  }
  if ((&DAT_180c3df78)[lVar24 * 500] != 0) {
    iVar23 = FUN_1804e4d70(&DAT_1809f3070);
    if (iVar23 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f30bc == 0x7fffffff) {
      DAT_1809f30bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    local_950 = 0;
    uStack_948 = 0;
    local_940 = 0;
    uStack_938 = 0xffffffff;
    uStack_934 = uStack_934 & 0xffffff00;
    local_900 = 0x3f800000;
    uStack_8f8 = uStack_8f8 & 0xffffff00;
    uStack_8f4 = 0;
    uStack_8f0 = 0;
    uStack_8ec = 0;
    uStack_8e8 = 0;
    uStack_8e4 = 0;
    uStack_8e0 = 0;
    uStack_8dc = 0;
    uStack_8d8 = 0;
    local_8d4 = 0;
    uStack_8d0 = 0;
    uStack_8cc = 0;
    local_8c4 = 0x3f800000;
    uStack_8c0 = 0;
    local_8bc = local_8bc & 0xffffff00;
    _DAT_1809f2f90 = (ulonglong)uStack_94f << 8;
    DAT_1809f2f98 = 0;
    _DAT_1809f2fa8 = CONCAT44(uStack_934,0xffffffff);
    DAT_1809f2fa0 = 0;
    _DAT_1809f2fb0 = 0;
    uRam00000001809f2fb8 = 0;
    _DAT_1809f2fc0 = 0;
    uRam00000001809f2fc8 = 0;
    _DAT_1809f2fd0 = 0;
    uRam00000001809f2fd8 = 0;
    _DAT_1809f2fe8 = (ulonglong)uStack_8f8;
    DAT_1809f2fe0 = 0x3f800000;
    _DAT_1809f2ff0 = 0;
    uRam00000001809f2ff8 = 0;
    _DAT_1809f3000 = 0;
    uRam00000001809f3008 = 0;
    _DAT_1809f3010 = 0;
    uRam00000001809f3014 = 0;
    uRam00000001809f3018 = 0;
    _DAT_1809f301c = 0x3f800000;
    DAT_1809f3020 = (ulonglong)local_8bc << 0x20;
    FUN_1804e4e90(&DAT_1809f3070);
    iVar23 = iVar21 + 0x94;
    while ((iVar21 = iVar21 + 1, iVar21 <= iVar23 &&
           ((&DAT_180c3df70)[(longlong)(iVar21 % 0x96) * 500] == iVar21))) {
      *(undefined4 *)(&DAT_180c3df74 + (longlong)(iVar21 % 0x96) * 2000) = 0;
    }
  }
  *(undefined4 *)(&DAT_180c3df74 + lVar30) = 3;
  FUN_1800244c0(local_620);
  return;
}



/* ===== 18043cfa0 FUN_18043cfa0 ===== */

void FUN_18043cfa0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined *puVar9;
  int *piVar10;
  longlong lVar11;
  undefined8 local_res8;
  
  FUN_18043b6a0();
  if ((param_1 - 0x10000U < 0x7ffffffeffff) && (param_2 - 0x10000U < 0x7ffffffeffff)) {
    lVar5 = FUN_18000f3a0(param_1 + 0x38);
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res8);
      DAT_181108a00 = local_res8;
      DAT_1811089f8 = FUN_1803a0c50(&local_res8);
      DAT_180cd1304 = '\x01';
    }
    if (((lVar5 != 0) && (DAT_1811089f8 != 0)) && (lVar5 == DAT_1811089f8)) {
      iVar2 = FUN_180011200(param_2 + 0x94);
      iVar3 = FUN_180011200(param_2 + 8);
      iVar3 = iVar3 - (uint)(iVar2 != 3);
      if (-1 < iVar3) {
        lVar6 = (longlong)(iVar3 % 0x96);
        lVar11 = lVar6 * 2000;
        iVar2 = (&DAT_180c3df70)[lVar6 * 500];
        puVar7 = (undefined4 *)0x0;
        if (iVar2 == iVar3) {
          puVar7 = &DAT_180c3df70 + lVar6 * 500;
        }
        if (puVar7 != (undefined4 *)0x0) {
          if (DAT_181111cc8 != 0) {
            puVar9 = (undefined *)0x60;
            if (iVar2 == iVar3) {
              puVar9 = &DAT_180c3dfd0 + lVar11;
            }
            FUN_180023a50((ulonglong)DAT_181111cc8 + lVar5,puVar9);
          }
          if (((DAT_181111c9c != 0) && (DAT_181111ca0 != 0)) &&
             ((DAT_181111cb0 != 0 &&
              (lVar5 = FUN_18000f3a0(lVar5 + (ulonglong)DAT_181111c9c),
              lVar5 - 0x10000U < 0x7ffffffeffff)))) {
            piVar10 = (int *)&DAT_0000035c;
            if (iVar2 == iVar3) {
              piVar10 = (int *)(&DAT_180c3e2cc + lVar11);
            }
            iVar1 = *piVar10;
            if (((iVar1 != -1) &&
                (iVar4 = FUN_180011200((ulonglong)DAT_181111ca0 + lVar5), iVar4 == iVar1)) &&
               (*piVar10 != -1)) {
              plVar8 = (longlong *)FUN_1803a0940(&local_res8);
              if (*plVar8 != 0) {
                puVar9 = (undefined *)0x798;
                if (iVar2 == iVar3) {
                  puVar9 = &DAT_180c3e708 + lVar11;
                }
                FUN_180013280((ulonglong)DAT_181111cb0 + *plVar8,puVar9);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 18043d1c0 FUN_18043d1c0 ===== */

void FUN_18043d1c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_res8;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [16];
  
  FUN_18043b6a0();
  if ((param_1 - 0x10000U < 0x7ffffffeffff) && (param_2 - 0x10000U < 0x7ffffffeffff)) {
    lVar7 = FUN_18000f3a0(param_1 + 0x38);
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res8);
      DAT_181108a00 = local_res8;
      DAT_1811089f8 = FUN_1803a0c50(&local_res8);
      DAT_180cd1304 = '\x01';
    }
    if (((lVar7 != 0) && (DAT_1811089f8 != 0)) && (lVar7 == DAT_1811089f8)) {
      iVar3 = FUN_180011200(param_2 + 8);
      if (0 < iVar3) {
        piVar13 = (int *)0x0;
        if ((&DAT_180c3df70)[(longlong)((iVar3 + -1) % 0x96) * 500] == iVar3 + -1) {
          piVar13 = &DAT_180c3df70 + (longlong)((iVar3 + -1) % 0x96) * 500;
        }
        if ((piVar13 != (int *)0x0) && (lVar8 = FUN_18043b840(lVar7), lVar8 != 0)) {
          if ((DAT_181111c68 != '\0') && (DAT_181111cb0 != 0)) {
            FUN_180013280(lVar8 + (ulonglong)DAT_181111cb0,&DAT_181111c64);
          }
          uVar9 = (ulonglong)DAT_181111ca8;
          if (DAT_181111ca8 != 0) {
            puVar10 = (undefined8 *)FUN_1800111b0(local_38,lVar7 + uVar9);
            local_48 = *puVar10;
            fVar15 = *(float *)(puVar10 + 1);
            if (DAT_181111c78 != '\0') {
              fVar14 = 0.0;
              if (0.0 <= DAT_181111c74) {
                fVar14 = DAT_181111c74;
              }
              fVar17 = (float)local_48;
              fVar16 = fVar14;
              if ((fVar17 <= fVar14) &&
                 (fVar16 = (float)((uint)fVar14 ^ DAT_1808adec0),
                 (float)((uint)fVar14 ^ DAT_1808adec0) <= fVar17)) {
                fVar16 = fVar17;
              }
              uVar1 = (ulonglong)local_48 >> 0x20;
              local_48 = CONCAT44((int)uVar1,fVar16);
            }
            local_40 = fVar15;
            if (DAT_181111c88 != '\0') {
              fVar14 = 0.0;
              if (0.0 <= DAT_181111c84) {
                fVar14 = DAT_181111c84;
              }
              local_40 = fVar14;
              if ((fVar15 <= fVar14) &&
                 (local_40 = (float)((uint)fVar14 ^ DAT_1808adec0),
                 (float)((uint)fVar14 ^ DAT_1808adec0) <= fVar15)) {
                local_40 = fVar15;
              }
            }
            if ((DAT_181111c78 != '\0') || (DAT_181111c88 != '\0')) {
              FUN_180023a50(lVar7 + uVar9,&local_48);
            }
          }
          if ((((DAT_181111c59 != '\0') && (DAT_181111c58 < 2)) && (DAT_181111ca4 != 0)) &&
             (iVar5 = piVar13[0x2d], iVar4 = FUN_180011200(lVar7 + (ulonglong)DAT_181111ca4),
             iVar4 != iVar5)) {
            if (piVar13[0xd7] == -1) {
              lVar11 = 0;
            }
            else {
              plVar12 = (longlong *)FUN_1803a0940(&local_res8);
              lVar11 = *plVar12;
            }
            if (lVar11 != 0) {
              lVar8 = lVar11;
            }
            if (((DAT_181111cb4 != 0) &&
                (fVar15 = (float)FUN_18000f3d0(lVar8 + (ulonglong)DAT_181111cb4),
                fVar15 != (float)piVar13[0x1e7])) &&
               ((iVar5 = FUN_18043b8b0(lVar8), iVar5 != 0 || (DAT_181111c60 != '\0')))) {
              uVar6 = FUN_180011200((ulonglong)DAT_181111cac + lVar8);
              iVar5 = iVar3 % 0x96 + 0x96;
              *(undefined4 *)(&DAT_181111a00 + (longlong)(iVar5 % 0x96) * 4) = uVar6;
              FUN_18026a790(lVar8,CONCAT31((int3)((uint)(iVar5 / 0x96) >> 8),DAT_181111c58 == 1));
            }
          }
        }
      }
      lVar8 = (longlong)((iVar3 % 0x96 + 0x96) % 0x96);
      (&DAT_180c3df70)[lVar8 * 500] = iVar3;
      iVar5 = FUN_180011200(param_2 + 0x94);
      (&DAT_180c3df78)[lVar8 * 500] = 0;
      *(uint *)(&DAT_180c3df74 + lVar8 * 2000) = (iVar5 != 2) + 1;
      cVar2 = FUN_180463b50(&DAT_180c3df80 + lVar8 * 2000,lVar7,0x11);
      DAT_1809f771c = iVar3;
      if (cVar2 == '\0') {
        (&DAT_180c3df70)[lVar8 * 500] = 0xffffffff;
      }
    }
  }
  return;
}



/* ===== 18043d5a0 FUN_18043d5a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18043d5a0(void)

{
  if ((DAT_181111d00 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181111d00 = '\x01';
    DAT_181111cd8 = FUN_18038eaf0("C_BaseEntity","m_iHealth");
    DAT_181111cdc = FUN_18038eaf0("C_CSPlayerPawn","m_ArmorValue");
    if (DAT_181111cdc == 0) {
      DAT_181111cdc = FUN_18038eaf0("C_CSPlayerPawnBase","m_ArmorValue");
    }
    DAT_181111ce0 = FUN_18038eaf0("C_BasePlayerPawn","m_pItemServices");
    DAT_181111ce4 = FUN_18038eaf0("CCSPlayer_ItemServices","m_bHasHelmet");
    DAT_181111ce8 = FUN_18038eaf0("C_BasePlayerPawn","m_pMovementServices");
    DAT_181111cec = FUN_18038eaf0("CPlayer_MovementServices","m_flMaxspeed");
    DAT_181111cf0 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_181111cf4 = FUN_18038eaf0("CCSWeaponBaseVData","m_flHeadshotMultiplier");
    DAT_181111cf8 = FUN_18038eaf0("CCSWeaponBaseVData","m_flArmorRatio");
    _DAT_181111cfc = FUN_18038eaf0("CCSWeaponBaseVData","m_nNumBullets");
  }
  return;
}



/* ===== 18043d6f0 FUN_18043d6f0 ===== */

undefined8 FUN_18043d6f0(int param_1,float param_2)

{
  float local_res10 [2];
  int local_res18;
  
  if ((param_2 < 0.0) || (DAT_1808ac34c <= param_2)) {
    local_res10[0] = 0.0;
    param_2 = (float)FUN_180512fd0(param_2,local_res10);
    if (param_2 < 0.0) {
      param_2 = param_2 + DAT_1808ac34c;
      if (param_2 < DAT_1808ac34c) {
        local_res10[0] = local_res10[0] + DAT_1808acda0;
      }
      else {
        param_2 = 0.0;
      }
    }
    local_res18 = (int)local_res10[0] + param_1;
  }
  else {
    local_res18 = param_1;
  }
  return CONCAT44(param_2,local_res18);
}



/* ===== 18043d780 FUN_18043d780 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18043d780(float *param_1,float *param_2,float param_3)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
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
  
  pfVar1 = *(float **)(param_2 + 6);
  fVar11 = param_2[1] - pfVar1[1];
  fVar8 = param_2[2] - pfVar1[2];
  fVar10 = *param_2 - *pfVar1;
  fVar13 = fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10;
  if (fVar13 < 0.0) {
    fVar6 = (float)FUN_18051af10(fVar13);
  }
  else {
    fVar6 = SQRT(fVar13);
  }
  fVar17 = DAT_1808accfc;
  dVar5 = DAT_1808ac500;
  fVar12 = DAT_1808ac34c;
  fVar9 = 0.0;
  if ((fVar6 < DAT_1808abf54) || (DAT_1808accfc < fVar6)) {
    if (fVar13 == 0.0) {
      fVar8 = 0.0;
      fVar11 = 0.0;
      fVar10 = 0.0;
    }
    else {
      dVar4 = (double)fVar10;
      dVar3 = (double)fVar11;
      dVar2 = (double)fVar8;
      dVar7 = dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2;
      if (dVar7 < 0.0) {
        dVar7 = (double)FUN_18051ff20(dVar7);
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      dVar7 = dVar5 / dVar7;
      fVar11 = (float)(dVar3 * dVar7);
      fVar10 = (float)(dVar4 * dVar7);
      fVar8 = (float)(dVar2 * dVar7);
    }
  }
  else {
    fVar6 = DAT_1808ac34c / fVar6;
    fVar8 = fVar8 * fVar6;
    fVar11 = fVar11 * fVar6;
    fVar10 = fVar10 * fVar6;
  }
  *param_1 = fVar10;
  param_1[1] = fVar11;
  param_1[2] = fVar8;
  fVar13 = fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10;
  if (fVar13 < 0.0) {
    fVar13 = (float)FUN_18051af10(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  if (DAT_1808abf94 < fVar13) {
    fVar13 = fVar12 / fVar13;
    fVar10 = fVar10 * fVar13;
    fVar11 = fVar11 * fVar13;
    fVar8 = fVar8 * fVar13;
  }
  if ((DAT_1808abfbc <= (float)((uint)fVar10 & _DAT_1808ade90)) ||
     (DAT_1808abfbc <= (float)((uint)fVar11 & _DAT_1808ade90))) {
    fVar13 = fVar10 - fVar8 * 0.0;
    fVar15 = fVar8 * 0.0 - fVar11;
    fVar16 = fVar11 * 0.0 + fVar10 * DAT_1808acd10;
    fVar6 = fVar16 * fVar16 + fVar13 * fVar13 + fVar15 * fVar15;
    if (fVar6 < 0.0) {
      fVar14 = (float)FUN_18051af10(fVar6);
    }
    else {
      fVar14 = SQRT(fVar6);
    }
    if ((fVar14 < DAT_1808abf54) || (fVar17 < fVar14)) {
      if (fVar6 == 0.0) {
        fVar15 = 0.0;
        fVar13 = 0.0;
        fVar14 = 0.0;
      }
      else {
        dVar2 = (double)fVar15;
        dVar3 = (double)fVar13;
        dVar4 = (double)fVar16;
        dVar7 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
        if (dVar7 < 0.0) {
          dVar7 = (double)FUN_18051ff20(dVar7);
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        dVar7 = dVar5 / dVar7;
        fVar15 = (float)(dVar2 * dVar7);
        fVar14 = (float)(dVar4 * dVar7);
        fVar13 = (float)(dVar3 * dVar7);
      }
    }
    else {
      fVar14 = fVar12 / fVar14;
      fVar15 = fVar14 * fVar15;
      fVar13 = fVar14 * fVar13;
      fVar14 = fVar14 * fVar16;
    }
    fVar17 = fVar14 * fVar11 - fVar13 * fVar8;
    fVar6 = fVar15 * fVar8 - fVar14 * fVar10;
    fVar10 = fVar13 * fVar10 - fVar15 * fVar11;
    fVar8 = fVar10 * fVar10 + fVar6 * fVar6 + fVar17 * fVar17;
    if (fVar8 < 0.0) {
      fVar11 = (float)FUN_18051af10(fVar8);
    }
    else {
      fVar11 = SQRT(fVar8);
    }
    if ((fVar11 < DAT_1808abf54) || (DAT_1808accfc < fVar11)) {
      if (fVar8 == 0.0) {
        fVar8 = 0.0;
        fVar10 = 0.0;
      }
      else {
        dVar3 = (double)fVar6;
        dVar2 = (double)fVar17;
        dVar4 = (double)fVar10;
        dVar7 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
        if (dVar7 < 0.0) {
          dVar7 = (double)FUN_18051ff20(dVar7);
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        dVar5 = dVar5 / dVar7;
        fVar8 = (float)(dVar2 * dVar5);
        fVar9 = (float)(dVar3 * dVar5);
        fVar10 = (float)(dVar4 * dVar5);
      }
    }
    else {
      fVar12 = fVar12 / fVar11;
      fVar8 = fVar12 * fVar17;
      fVar9 = fVar12 * fVar6;
      fVar10 = fVar12 * fVar10;
    }
  }
  else {
    fVar15 = 0.0;
    fVar10 = 0.0;
    fVar14 = 0.0;
    fVar8 = (float)((uint)fVar8 ^ DAT_1808adec0);
    fVar13 = fVar12;
  }
  fVar13 = (float)((uint)fVar13 ^ DAT_1808adec0);
  fVar14 = (float)((uint)fVar14 ^ DAT_1808adec0);
  param_1[3] = (float)((uint)fVar15 ^ DAT_1808adec0) * param_3;
  param_1[4] = fVar13 * param_3;
  param_1[5] = fVar14 * param_3;
  param_1[6] = fVar8 * param_3;
  param_1[7] = fVar9 * param_3;
  param_1[8] = fVar10 * param_3;
  return param_1;
}



/* ===== 18043dce0 FUN_18043dce0 ===== */

float * FUN_18043dce0(float *param_1,float *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = param_3 * param_2[3] + *param_2 + param_4 * param_2[6];
  fVar7 = (float)*(undefined8 *)(param_2 + 4) * param_3 + (float)*(undefined8 *)(param_2 + 1) +
          (float)*(undefined8 *)(param_2 + 7) * param_4;
  fVar8 = (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_3 +
          (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) +
          (float)((ulonglong)*(undefined8 *)(param_2 + 7) >> 0x20) * param_4;
  fVar6 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
  if (fVar6 < 0.0) {
    fVar4 = (float)FUN_18051af10(CONCAT44(fVar8,fVar6));
  }
  else {
    fVar4 = SQRT(fVar6);
  }
  if ((fVar4 < DAT_1808abf54) || (DAT_1808accfc < fVar4)) {
    if (fVar6 == 0.0) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
    else {
      dVar1 = (double)fVar9;
      dVar2 = (double)fVar7;
      dVar3 = (double)fVar8;
      dVar5 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
      if (dVar5 < 0.0) {
        dVar5 = (double)FUN_18051ff20(dVar5);
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      dVar5 = DAT_1808ac500 / dVar5;
      *param_1 = (float)(dVar1 * dVar5);
      param_1[1] = (float)(dVar2 * dVar5);
      param_1[2] = (float)(dVar3 * dVar5);
    }
  }
  else {
    fVar4 = DAT_1808ac34c / fVar4;
    *param_1 = fVar4 * fVar9;
    *(ulonglong *)(param_1 + 1) = CONCAT44(fVar4 * fVar8,fVar4 * fVar7);
  }
  return param_1;
}



/* ===== 18043de90 FUN_18043de90 ===== */

longlong FUN_18043de90(void)

{
  undefined4 uVar1;
  HMODULE hModule;
  
  if (DAT_180cd1bf8 == '\0') {
    DAT_180cd1bf8 = '\x01';
    hModule = GetModuleHandleA("tier0.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_181111cd0 = GetProcAddress(hModule,"g_pThreadPool");
    }
    if (DAT_181111cd0 == (FARPROC)0x0) {
      FUN_1802b2560("[rage] tier0 g_pThreadPool not found: scan tasks run on the game thread");
    }
    else if (*(longlong **)DAT_181111cd0 != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)DAT_181111cd0 + 0x38))();
      FUN_1802b2560("[rage] tier0 thread pool: %d workers",uVar1);
    }
  }
  if (DAT_181111cd0 == (FARPROC)0x0) {
    return 0;
  }
  return *(longlong *)DAT_181111cd0;
}



/* ===== 18043df20 FUN_18043df20 ===== */

void FUN_18043df20(longlong param_1)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  float fVar13;
  longlong local_res8;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_68 [48];
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 8);
  lVar6 = plVar5[1];
  lVar7 = *plVar5;
  pfVar8 = *(float **)(lVar6 + 0x18);
  lVar9 = *(longlong *)(lVar6 + 0x10);
  fVar2 = *(float *)(lVar7 + 0x108);
  LOCK();
  puVar1 = (uint *)(param_1 + 0x40);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar3 < uVar4) {
    uVar12 = (ulonglong)uVar3;
    pfVar11 = (float *)FUN_18043dce0(local_68,plVar5[2],*(undefined4 *)(plVar5[3] + uVar12 * 8),
                                     *(undefined4 *)(plVar5[3] + 4 + uVar12 * 8));
    local_res8 = 0;
    local_78 = fVar2 * *pfVar11 + *pfVar8;
    local_74 = fVar2 * pfVar11[1] + pfVar8[1];
    local_70 = fVar2 * pfVar11[2] + pfVar8[2];
    fVar13 = (float)FUN_18046e010(lVar7 + 0x100,plVar5 + 4,*(longlong *)(lVar6 + 0x28) + 0x80,pfVar8
                                  ,&local_78,0,&local_res8);
    if ((0.0 < fVar13) && (local_res8 != 0)) {
      if (1 < *(int *)(lVar7 + 0x104)) {
        fVar13 = fVar13 * (float)*(int *)(lVar7 + 0x104);
      }
      *(float *)((longlong)plVar5 + uVar12 * 4 + 0x60) = fVar13;
      uVar12 = 1L << ((byte)uVar3 & 0x3f);
      if (*(float *)(lVar9 + 0x6c) <= fVar13) {
        LOCK();
        plVar5[0x2c] = plVar5[0x2c] | uVar12;
        UNLOCK();
      }
      lVar10 = *(longlong *)(lVar9 + 8);
      if (((lVar10 != 0) && (*(int *)(lVar10 + 0x44) == 0)) &&
         ((*(byte *)(local_res8 + 0x39) & 0xfe) == 2)) {
        LOCK();
        plVar5[0x2d] = plVar5[0x2d] | uVar12;
        UNLOCK();
      }
    }
    LOCK();
    puVar1 = (uint *)(param_1 + 0x40);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return;
}



/* ===== 18043e0e0 FUN_18043e0e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18043e0e0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined4 local_20c;
  undefined **local_208;
  undefined4 local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined4 local_15c;
  undefined8 local_158 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_278;
  local_198 = 0;
  local_190 = 0;
  local_15c = 0;
  local_18c = 0;
  uStack_184 = 0;
  local_17c = 0;
  uStack_174 = 0;
  local_16c = 0;
  uStack_164 = 0;
  FUN_180540170(local_158,0,0x100);
  puVar6 = *(undefined8 **)(param_3 + 0x10);
  local_58 = 0;
  local_50 = 0;
  local_1a0 = param_5;
  uStack_224 = *(undefined4 *)(puVar6 + 0x11);
  uStack_220 = *(undefined4 *)((longlong)puVar6 + 0x8c);
  uStack_174 = puVar6[0x11];
  local_21c = puVar6[0x12];
  local_16c = puVar6[0x12];
  local_18c = puVar6[0xe];
  local_190 = *(undefined4 *)((longlong)puVar6 + 0x6c);
  uStack_184 = puVar6[0xf];
  local_17c = puVar6[0x10];
  local_20c = 0;
  local_198 = *puVar6;
  uStack_214 = puVar6[0x13];
  local_208 = &PTR__guard_check_icall_1806cbd08;
  local_1f8 = &local_1b8;
  local_1f0 = 0;
  local_15c = 0;
  local_1c8 = 0;
  local_200 = 0x40;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1b8 = param_2;
  local_1b0 = param_3;
  local_1a8 = param_4;
  uStack_164 = uStack_214;
  plVar5 = (longlong *)FUN_18043de90();
  if (plVar5 == (longlong *)0x0) {
    (*(code *)local_208[1])(&local_208,0);
  }
  else {
    local_258 = 2;
    (**(code **)(*plVar5 + 0x98))(plVar5,&local_208,0xffffffff,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_180540170(param_1 + 2,0,0x100);
  *param_1 = local_58;
  param_1[1] = local_50;
  lVar7 = 2;
  puVar6 = local_158;
  puVar8 = param_1 + 2;
  do {
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar8 = *puVar6;
    puVar8[1] = uVar1;
    uVar1 = puVar6[4];
    uVar4 = puVar6[5];
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    uVar2 = puVar6[6];
    uVar3 = puVar6[7];
    puVar8[4] = uVar1;
    puVar8[5] = uVar4;
    uVar1 = puVar6[8];
    uVar4 = puVar6[9];
    puVar8[6] = uVar2;
    puVar8[7] = uVar3;
    uVar2 = puVar6[10];
    uVar3 = puVar6[0xb];
    puVar8[8] = uVar1;
    puVar8[9] = uVar4;
    uVar1 = puVar6[0xc];
    uVar4 = puVar6[0xd];
    puVar8[10] = uVar2;
    puVar8[0xb] = uVar3;
    uVar2 = puVar6[0xe];
    uVar3 = puVar6[0xf];
    puVar8[0xc] = uVar1;
    puVar8[0xd] = uVar4;
    puVar8[0xe] = uVar2;
    puVar8[0xf] = uVar3;
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 0x10;
    puVar8 = puVar8 + 0x10;
  } while (lVar7 != 0);
  return param_1;
}



/* ===== 18043e2f0 FUN_18043e2f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18043e2f0(float *param_1,float *param_2,float *param_3,longlong param_4)

{
  bool bVar1;
  float fVar2;
  ulonglong uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar5 = DAT_1808ac34c;
  fVar7 = param_1[1] - *(float *)(param_4 + 0x10);
  fVar8 = param_1[2] - *(float *)(param_4 + 0x14);
  fVar16 = *(float *)(param_4 + 0x34);
  uVar3 = (ulonglong)(uint)fVar16;
  fVar11 = *(float *)(param_4 + 0x24);
  fVar17 = *(float *)(param_4 + 0x28);
  fVar18 = *(float *)(param_4 + 0x2c);
  fVar19 = *param_1 - *(float *)(param_4 + 0xc);
  fVar6 = *(float *)(param_4 + 0x30);
  fVar9 = fVar18 * fVar8 + fVar17 * fVar7 + fVar11 * fVar19;
  fVar15 = param_2[2] * fVar17 - param_2[1] * fVar18;
  fVar2 = *param_2 * fVar18 - param_2[2] * fVar11;
  fVar13 = param_2[1] * fVar11 - *param_2 * fVar17;
  fVar10 = fVar2 * fVar2 + fVar15 * fVar15 + fVar13 * fVar13;
  fVar14 = param_3[2] * fVar18 + param_3[1] * fVar17 + *param_3 * fVar11;
  if (fVar10 <= _DAT_1808abf74) {
    fVar2 = fVar19 - fVar9 * fVar11;
    fVar17 = fVar7 - fVar9 * fVar17;
    fVar18 = fVar8 - fVar9 * fVar18;
    fVar11 = fVar17 * fVar17 + fVar2 * fVar2 + fVar18 * fVar18;
    uVar4 = 0;
    if (DAT_1808abf5c <= fVar11) {
      if (fVar11 < 0.0) {
        fVar15 = (float)FUN_18051af10(fVar11);
      }
      else {
        fVar15 = SQRT(fVar11);
      }
      fVar15 = fVar5 / fVar15;
      fVar17 = (fVar15 * fVar18 * *(float *)(param_4 + 0x24) -
               fVar15 * fVar2 * *(float *)(param_4 + 0x2c)) * fVar7 +
               (fVar15 * fVar2 * *(float *)(param_4 + 0x28) -
               fVar15 * fVar17 * *(float *)(param_4 + 0x24)) * fVar8 +
               (fVar15 * fVar17 * *(float *)(param_4 + 0x2c) -
               fVar15 * fVar18 * *(float *)(param_4 + 0x28)) * fVar19;
      fVar16 = (fVar16 * fVar16 - fVar11) - fVar17 * fVar17;
      if (fVar16 <= 0.0) goto LAB_18043e7fc;
      if (fVar16 < 0.0) {
        uVar3 = FUN_18051af10(fVar16);
      }
      else {
        uVar3 = (ulonglong)(uint)SQRT(fVar16);
      }
    }
    fVar16 = (float)uVar3 + fVar9;
    if (0.0 <= fVar16) {
      fVar6 = (float)uVar3 + fVar6;
      if (fVar6 <= fVar9) {
        fVar9 = fVar9 - fVar6;
        if (fVar9 <= (float)((uint)fVar14 ^ DAT_1808adec0)) {
          fVar5 = fVar9 / (float)((uint)fVar14 ^ DAT_1808adec0);
        }
        uVar4 = 0;
      }
      else {
        fVar5 = 0.0;
        uVar4 = 0;
      }
    }
    else {
      fVar16 = (float)((uint)fVar16 ^ DAT_1808adec0);
      if (fVar16 <= fVar14) {
        fVar5 = fVar16 / fVar14;
        uVar4 = (uint)(uVar3 >> 0x20) ^ _UNK_1808adec4;
      }
    }
    goto LAB_18043e7fc;
  }
  auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  fVar10 = auVar12._0_4_;
  fVar13 = fVar10 * fVar13;
  fVar15 = fVar10 * fVar15;
  fVar10 = fVar10 * fVar2;
  fVar5 = fVar13 * fVar8 + fVar10 * fVar7 + fVar15 * fVar19;
  fVar2 = fVar10 * fVar18 - fVar13 * fVar17;
  fVar18 = fVar13 * fVar11 - fVar15 * fVar18;
  fVar11 = fVar15 * fVar17 - fVar10 * fVar11;
  fVar17 = fVar16 * fVar16 - fVar5 * fVar5;
  fVar7 = fVar11 * fVar8 + fVar18 * fVar7 + fVar2 * fVar19;
  fVar16 = param_3[2] * fVar11 + param_3[1] * fVar18 + *param_3 * fVar2;
  if (fVar17 < 0.0) {
    fVar11 = (float)FUN_18051af10(fVar17);
  }
  else {
    fVar11 = SQRT(fVar17);
  }
  fVar18 = DAT_1808ac34c;
  fVar5 = ((0.0 - fVar11) - fVar7) / fVar16;
  fVar11 = fVar5;
  if (fVar5 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar11 = fVar11 * fVar14 + fVar9;
  if (0.0 <= fVar11) {
    fVar9 = fVar9 - fVar6;
  }
  if ((fVar6 <= fVar11) || (fVar11 < 0.0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (fVar5 < 0.0) {
    fVar5 = DAT_1808ac34c;
  }
  fVar11 = DAT_1808ac34c / (fVar16 * fVar16 + fVar14 * fVar14);
  fVar6 = (fVar16 * fVar7 + fVar9 * fVar14) * fVar11;
  fVar16 = fVar6 * fVar6 - ((fVar9 * fVar9 + fVar7 * fVar7) - fVar17) * fVar11;
  if (fVar16 < 0.0) {
    FUN_18051af10(fVar16);
LAB_18043e7e4:
    fVar16 = fVar18;
  }
  else {
    fVar16 = (0.0 - fVar6) - SQRT(fVar16);
    if (fVar16 < 0.0) goto LAB_18043e7e4;
  }
  if (!bVar1) {
    fVar5 = fVar16;
  }
  if (fVar17 <= 0.0) {
    fVar5 = fVar18;
  }
  uVar4 = 0;
LAB_18043e7fc:
  return CONCAT44(uVar4,fVar5);
}



/* ===== 18043e840 FUN_18043e840 ===== */

undefined8 *
FUN_18043e840(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined4 uStack_7d;
  undefined1 uStack_79;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_55;
  undefined1 local_51;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = *(longlong *)(param_2 + 0x70);
  if ((ulonglong)((*(longlong *)(param_2 + 0x80) - lVar8 >> 3) * 0x34f72c234f72c235) < 0x40) {
    lVar1 = *(longlong *)(param_2 + 0x78);
    lVar7 = FUN_18000fb70(0x3a00,param_2,param_3,param_4,1);
    lVar2 = *(longlong *)(param_2 + 0x78);
    lVar11 = lVar7;
    for (lVar10 = *(longlong *)(param_2 + 0x70); lVar10 != lVar2; lVar10 = lVar10 + 0xe8) {
      FUN_18043b470(lVar11,lVar10);
      lVar11 = lVar11 + 0xe8;
    }
    FUN_180448e10(lVar11,lVar11);
    FUN_180448d70(param_2 + 0x70,lVar7,(lVar1 - lVar8 >> 3) * 0x34f72c234f72c235,0x40);
  }
  if (0 < *(int *)(param_2 + 0xf10)) {
    iVar9 = 0;
    do {
      uVar6 = *(int *)(param_2 + 0xf14) + iVar9 & 0x8000000f;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
      }
      uVar6 = uVar6 + 0x10 & 0x8000000f;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
      }
      lVar8 = (longlong)(int)uVar6 * 0xe8;
      local_a0 = (undefined8 *)(param_2 + 0x90 + lVar8);
      puVar3 = *(undefined4 **)(param_2 + 0x128 + lVar8);
      if (puVar3 == *(undefined4 **)(param_2 + 0x130 + lVar8)) {
        uStack_98 = 0;
        uStack_94 = 0;
        local_90 = 0;
      }
      else {
        uStack_98 = *puVar3;
        uStack_94 = puVar3[1];
        local_90 = puVar3[2];
      }
      uStack_8c = *(undefined4 *)(param_2 + 0x90 + lVar8);
      uStack_88 = *(undefined4 *)(param_2 + 0x94 + lVar8);
      uStack_84 = *(undefined4 *)(param_2 + 0xa0 + lVar8);
      local_80 = *(undefined1 *)(param_2 + 0x9d + lVar8);
      uStack_7f = *(undefined1 *)(param_2 + 0x9c + lVar8);
      uStack_7e = *(undefined1 *)(param_2 + 0x10c + lVar8);
      uStack_7d = local_55;
      uStack_79 = local_51;
      plVar4 = (longlong *)param_1[1];
      if (plVar4 == (longlong *)param_1[2]) {
        local_64 = uStack_8c;
        uStack_60 = uStack_88;
        FUN_180448980(param_1,plVar4,&local_a0);
      }
      else {
        *plVar4 = (longlong)local_a0;
        plVar4[1] = CONCAT44(uStack_94,uStack_98);
        plVar4[2] = CONCAT44(uStack_8c,local_90);
        plVar4[3] = CONCAT44(uStack_84,uStack_88);
        plVar4[4] = CONCAT17(local_51,CONCAT43(local_55,CONCAT12(uStack_7e,
                                                                 CONCAT11(uStack_7f,local_80))));
        param_1[1] = param_1[1] + 0x28;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_2 + 0xf10));
  }
  if (0 < *(int *)(param_2 + 0x88)) {
    iVar9 = 0;
    do {
      if ((int)(*(longlong *)(param_2 + 0x78) - *(longlong *)(param_2 + 0x70) >> 3) * 0x4f72c235 <=
          iVar9) break;
      local_a0 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + (longlong)iVar9 * 0xe8);
      puVar3 = (undefined4 *)local_a0[0x13];
      if (puVar3 == (undefined4 *)local_a0[0x14]) {
        uStack_98 = 0;
        uStack_94 = 0;
        local_90 = 0;
      }
      else {
        uStack_98 = *puVar3;
        uStack_94 = puVar3[1];
        local_90 = puVar3[2];
      }
      local_64 = *(undefined4 *)local_a0;
      uStack_60 = *(undefined4 *)((longlong)local_a0 + 4);
      uStack_8c = (undefined4)*local_a0;
      uStack_88 = (undefined4)((ulonglong)*local_a0 >> 0x20);
      uStack_84 = *(undefined4 *)(local_a0 + 2);
      local_80 = *(undefined1 *)((longlong)local_a0 + 0xd);
      uStack_7f = *(undefined1 *)((longlong)local_a0 + 0xc);
      uStack_7e = *(undefined1 *)((longlong)local_a0 + 0x7c);
      uStack_7d = local_55;
      uStack_79 = local_51;
      puVar5 = (undefined8 *)param_1[1];
      if (puVar5 == (undefined8 *)param_1[2]) {
        FUN_180448980(param_1,puVar5,&local_a0);
      }
      else {
        *puVar5 = local_a0;
        puVar5[1] = CONCAT44(uStack_94,uStack_98);
        puVar5[2] = CONCAT44(uStack_8c,local_90);
        puVar5[3] = CONCAT44(uStack_84,uStack_88);
        puVar5[4] = CONCAT17(local_51,CONCAT43(local_55,CONCAT12(uStack_7e,
                                                                 CONCAT11(uStack_7f,local_80))));
        param_1[1] = param_1[1] + 0x28;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_2 + 0x88));
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    iVar9 = 0;
    do {
      if ((int)(*(longlong *)(param_2 + 0x58) - *(longlong *)(param_2 + 0x50) >> 3) * 0x4f72c235 <=
          iVar9) {
        return param_1;
      }
      local_a0 = (undefined8 *)(*(longlong *)(param_2 + 0x50) + (longlong)iVar9 * 0xe8);
      puVar3 = (undefined4 *)local_a0[0x13];
      if (puVar3 == (undefined4 *)local_a0[0x14]) {
        uStack_98 = 0;
        uStack_94 = 0;
        local_90 = 0;
      }
      else {
        uStack_98 = *puVar3;
        uStack_94 = puVar3[1];
        local_90 = puVar3[2];
      }
      local_64 = *(undefined4 *)local_a0;
      uStack_60 = *(undefined4 *)((longlong)local_a0 + 4);
      uStack_8c = (undefined4)*local_a0;
      uStack_88 = (undefined4)((ulonglong)*local_a0 >> 0x20);
      uStack_84 = *(undefined4 *)(local_a0 + 2);
      local_80 = *(undefined1 *)((longlong)local_a0 + 0xd);
      uStack_7f = *(undefined1 *)((longlong)local_a0 + 0xc);
      uStack_7e = *(undefined1 *)((longlong)local_a0 + 0x7c);
      uStack_7d = local_55;
      uStack_79 = local_51;
      puVar5 = (undefined8 *)param_1[1];
      if (puVar5 == (undefined8 *)param_1[2]) {
        FUN_180448980(param_1,puVar5,&local_a0);
      }
      else {
        *puVar5 = local_a0;
        puVar5[1] = CONCAT44(uStack_94,uStack_98);
        puVar5[2] = CONCAT44(uStack_8c,local_90);
        puVar5[3] = CONCAT44(uStack_84,uStack_88);
        puVar5[4] = CONCAT17(local_51,CONCAT43(local_55,CONCAT12(uStack_7e,
                                                                 CONCAT11(uStack_7f,local_80))));
        param_1[1] = param_1[1] + 0x28;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_2 + 0x68));
  }
  return param_1;
}



/* ===== 18043ec60 FUN_18043ec60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_18043ec60(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5
             )

{
  float fVar1;
  float fVar2;
  char cVar3;
  code *pcVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auVar16 [8];
  longlong lVar17;
  float *pfVar18;
  uint uVar19;
  undefined8 **ppuVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  int iVar28;
  longlong lVar29;
  int iVar30;
  uint uVar31;
  longlong *plVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [24];
  char local_1f8;
  float local_1f4;
  int local_1f0 [2];
  undefined8 *local_1e8;
  undefined1 local_1e0 [8];
  longlong *aplStack_1d8 [2];
  longlong local_1c8;
  int local_1c0 [2];
  longlong local_1b8 [3];
  int local_1a0 [2];
  undefined8 local_198;
  float fStack_190;
  float fStack_18c;
  float local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178;
  undefined1 uStack_177;
  undefined1 uStack_176;
  undefined4 uStack_175;
  undefined1 uStack_171;
  int local_170;
  int local_16c;
  undefined4 local_168;
  int local_164;
  longlong local_160;
  undefined8 *local_158;
  undefined4 local_150;
  float local_148;
  float local_144;
  undefined8 *local_140;
  undefined8 *local_138;
  longlong local_130;
  float *local_128;
  float *pfStack_120;
  undefined8 local_118;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_ed;
  undefined1 local_e9;
  
  puVar33 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fVar38 = DAT_1808acab0;
  fVar45 = DAT_1808ac34c;
  local_168 = 1;
  lVar35 = *(longlong *)(param_3 + 8);
  if (lVar35 == 0) {
    return param_1;
  }
  lVar22 = param_4 * 0x60;
  lVar23 = *(longlong *)(param_2 + 0x38);
  local_170 = *(int *)(lVar22 + 0xc + lVar23) - _DAT_180c8a808;
  fVar42 = 0.0;
  fVar44 = 0.0 - _DAT_180c8a80c;
  if (fVar44 < 0.0) {
    fVar44 = fVar44 + DAT_1808ac34c;
    if (fVar44 < DAT_1808ac34c) {
      local_170 = local_170 + -1;
    }
    else {
      fVar44 = 0.0;
    }
  }
  local_1f4 = 0.0;
  local_1c8 = lVar35;
  local_160 = lVar22;
  local_130 = lVar23;
  fVar36 = (float)FUN_180512fd0(DAT_180c8a7fc * DAT_1808acab0,&local_1f4);
  fVar2 = DAT_180c8a800._4_4_;
  uVar19 = _DAT_1808ade90;
  fVar1 = DAT_1808acc3c;
  fVar5 = DAT_1808ac0c0;
  fVar40 = DAT_1808ac00c;
  puVar27 = auStack_218;
  puVar25 = auStack_218;
  puVar24 = auStack_218;
  if (fVar36 < 0.0) {
    fVar36 = fVar36 + fVar45;
    if (fVar36 < fVar45) {
      local_1f4 = local_1f4 + DAT_1808acda0;
    }
    else {
      fVar36 = 0.0;
    }
  }
  local_1f4 = (float)(*(int *)(lVar22 + 0xc + lVar23) - (int)local_1f4);
  fVar36 = 0.0 - fVar36;
  if (fVar36 < 0.0) {
    fVar36 = fVar36 + fVar45;
    if (fVar36 < fVar45) {
      local_1f4 = (float)((int)local_1f4 + -1);
    }
    else {
      fVar36 = 0.0;
    }
  }
  local_144 = fVar36;
  iVar28 = *(int *)(lVar22 + 0x10 + lVar23);
  local_164 = (int)(((float)(iVar28 + -1) * DAT_1808ac00c - DAT_180c8a7fc) * fVar38 + DAT_1808ac1f4)
  ;
  local_1a0[0] = (int)DAT_180c8a800;
  lVar17 = *(longlong *)(param_3 + 8);
  if (lVar17 == 0) {
    fVar43 = 0.0;
LAB_18043ee8b:
    local_1f0[0] = (int)(fVar43 * fVar38 + DAT_1808ac1f4) + (iVar28 - *(int *)(param_2 + 0x18));
  }
  else {
    if (*(char *)(lVar17 + 0x1c) == '\0') {
      fVar43 = *(float *)(lVar17 + 0x3c);
      goto LAB_18043ee8b;
    }
    if (*(longlong *)(param_2 + 0xd0) == 0) {
      local_1f0[0] = iVar28;
    }
    else {
      local_1f0[0] = iVar28 - *(int *)(*(longlong *)(param_2 + 0xd0) + 0x48);
    }
  }
  local_1f8 = *(char *)(lVar22 + 0x44 + lVar23);
  if (local_1f8 == '\0') {
    pfVar7 = &local_144;
    fVar38 = local_1f4;
  }
  else {
    pfVar7 = (float *)(lVar23 + 0x40 + lVar22);
    fVar38 = *(float *)(lVar22 + 0x3c + lVar23);
  }
  local_1c0[0] = (int)fVar38 - (int)DAT_180c8a800;
  fVar43 = *pfVar7 - DAT_180c8a800._4_4_;
  if (fVar43 < 0.0) {
    fVar43 = fVar43 + fVar45;
    if (fVar43 < fVar45) {
      local_1c0[0] = ((int)fVar38 - (int)DAT_180c8a800) + -1;
    }
    else {
      fVar43 = 0.0;
    }
  }
  _local_1e0 = ZEXT816(0);
  plVar32 = (longlong *)0x0;
  aplStack_1d8[1] = (longlong *)0x0;
  puVar34 = (undefined8 *)0xffffffffffffffff;
  local_140 = (undefined8 *)0xffffffffffffffff;
  local_198 = (undefined8 *)((param_5[1] - *param_5 >> 3) * -0x3333333333333333);
  puVar26 = auStack_218;
  local_148 = local_1f4;
  if (local_198 == (undefined8 *)0x0) goto LAB_18043fdad;
  local_16c = iVar28 - (uint)(*(int *)(param_2 + 8) < *(int *)(lVar35 + 0x10));
  local_138 = (undefined8 *)0xffffffffffffffff;
  puVar8 = (undefined8 *)0xffffffffffffffff;
  local_1e8 = (undefined8 *)0xffffffffffffffff;
  fVar38 = local_1f4;
  iVar28 = local_1f0[0];
  iVar14 = local_1c0[0];
  do {
    lVar35 = *param_5;
    iVar30 = *(int *)(lVar35 + 0x14 + (longlong)puVar33 * 0x28);
    if (local_16c < iVar30) {
LAB_18043f2b3:
    }
    else {
      if (iVar30 < local_164) goto LAB_18043f2b3;
      if (iVar28 + *(int *)(param_2 + 0x98) < iVar30) goto LAB_18043f2aa;
      fVar41 = *(float *)(lVar35 + 0x18 + (longlong)puVar33 * 0x28);
      if (((fVar41 == 0.0) && (!NAN(fVar41))) &&
         (*(char *)(lVar35 + 0x22 + (longlong)puVar33 * 0x28) == '\0')) {
        if (iVar30 == iVar14) {
          local_138 = puVar33;
        }
        else {
          if (iVar30 == iVar14 + 1) {
            local_1e8 = puVar33;
          }
        }
      }
      puVar8 = local_1e8;
      iVar28 = local_1f0[0];
      if (local_1f8 == '\0') {
        fVar38 = local_1f4;
        if ((local_1f0[0] - iVar30 <= *(int *)(param_2 + 0xb0)) &&
           ((*(char *)(lVar35 + 0x22 + (longlong)puVar33 * 0x28) == '\0' ||
            (*(char *)(lVar22 + 0x14 + lVar23) == '\0')))) goto LAB_18043f04a;
LAB_18043f2ae:
        puVar8 = local_1e8;
        iVar28 = local_1f0[0];
        goto LAB_18043f2b3;
      }
      if ((*(char *)(lVar22 + 0x14 + lVar23) != '\0') &&
         (*(char *)(lVar35 + 0x22 + (longlong)puVar33 * 0x28) != '\0')) goto LAB_18043f2b3;
LAB_18043f04a:
      fVar39 = fVar41 + fVar2;
      fVar13 = (float)(local_1a0[0] + (uint)(fVar45 <= fVar39) + iVar30);
      if (fVar45 <= fVar39) {
        fVar39 = fVar39 - fVar45;
      }
      iVar6 = local_170 - (int)fVar13;
      fVar37 = fVar44 - fVar39;
      if (fVar37 < 0.0) {
        fVar37 = fVar37 + fVar45;
        if (fVar37 < fVar45) {
          iVar6 = iVar6 + -1;
        }
        else {
          fVar37 = 0.0;
        }
      }
      if (200 < (int)((float)((uint)((float)iVar6 * fVar40 + fVar37 * fVar40) & uVar19) * fVar1)) {
LAB_18043f0f3:
        if (iVar30 == local_16c) {
          if (*(char *)(param_3 + 100) != '\0') goto LAB_18043f10e;
        }
LAB_18043f2aa:
        goto LAB_18043f2ae;
      }
      if (fVar13 == fVar38) {
        if ((fVar36 < fVar39) || ((fVar36 <= fVar39 && (fVar39 == fVar36)))) goto LAB_18043f0d8;
        goto LAB_18043f0f3;
      }
      if ((int)fVar13 < (int)fVar38) goto LAB_18043f0f3;
LAB_18043f0d8:
      fVar37 = *(float *)(lVar22 + 0xc + lVar23);
      if (fVar13 == fVar37) {
        if ((0.0 < fVar39) || ((0.0 <= fVar39 && (fVar39 != 0.0)))) goto LAB_18043f0f3;
      }
      else if ((int)fVar37 <= (int)fVar13) goto LAB_18043f0f3;
LAB_18043f10e:
      iVar30 = iVar30 - iVar14;
      fVar41 = fVar41 - fVar43;
      if (fVar41 < 0.0) {
        fVar41 = fVar41 + fVar45;
        if (fVar41 < fVar45) {
          iVar30 = iVar30 + -1;
        }
        else {
          fVar41 = 0.0;
        }
      }
      if ((float)((uint)((float)iVar30 + fVar41) & uVar19) < fVar5) {
        puVar34 = puVar33;
      }
      local_140 = puVar34;
      local_158 = puVar34;
      if (local_1f8 == '\0') {
        plVar9 = aplStack_1d8[0];
        if (aplStack_1d8[0] == plVar32) {
          uVar11 = (longlong)aplStack_1d8[0] - (longlong)local_1e0;
          lVar35 = (longlong)uVar11 >> 3;
          if (lVar35 != 0x1fffffffffffffff) {
            uVar21 = lVar35 + 1;
            uVar12 = (longlong)plVar32 - (longlong)local_1e0 >> 3;
            if (0x1fffffffffffffff - (uVar12 >> 1) < uVar12) {
              uVar15 = 0x1fffffffffffffff;
            }
            else {
              uVar12 = (uVar12 >> 1) + uVar12;
              uVar15 = uVar21;
              if (uVar21 <= uVar12) {
                uVar15 = uVar12;
              }
              if (0x1fffffffffffffff < uVar15) goto LAB_18043fe1e;
            }
            uVar15 = uVar15 * 8;
            lVar35 = FUN_18000fb70(uVar15);
            uVar11 = uVar11 & 0xfffffffffffffff8;
            *(undefined8 **)(uVar11 + lVar35) = puVar33;
            if (plVar9 == aplStack_1d8[0]) {
              lVar22 = (longlong)aplStack_1d8[0] - (longlong)local_1e0;
              lVar23 = lVar35;
              auVar16 = local_1e0;
            }
            else {
              FUN_180540530(lVar35,local_1e0,(longlong)plVar9 - (longlong)local_1e0);
              lVar22 = (longlong)aplStack_1d8[0] - (longlong)plVar9;
              lVar23 = uVar11 + 8 + lVar35;
              auVar16 = (undefined1  [8])plVar9;
            }
            FUN_180540530(lVar23,auVar16,lVar22);
            if (local_1e0 != (undefined1  [8])0x0) {
              uVar11 = ((longlong)aplStack_1d8[1] - (longlong)local_1e0 >> 3) * 8;
              if (uVar11 < 0x1000) {
                auVar16 = local_1e0;
              }
              else {
                if (0x1f < ((longlong)local_1e0 - *(longlong *)((longlong)local_1e0 + -8)) - 8U)
                goto LAB_18043f574;
                uVar11 = uVar11 + 0x27;
                auVar16 = (undefined1  [8])*(longlong *)((longlong)local_1e0 + -8);
              }
              thunk_FUN_1803d64e0(auVar16,uVar11);
            }
            aplStack_1d8[0] = (longlong *)(lVar35 + uVar21 * 8);
            local_1e0 = (undefined1  [8])lVar35;
            plVar32 = (longlong *)(uVar15 + lVar35);
            aplStack_1d8[1] = plVar32;
            lVar22 = local_160;
            lVar23 = local_130;
            puVar34 = local_158;
            fVar38 = local_1f4;
            iVar14 = local_1c0[0];
            goto LAB_18043f2aa;
          }
          goto LAB_18043fe18;
        }
        *aplStack_1d8[0] = (longlong)puVar33;
        aplStack_1d8[0] = aplStack_1d8[0] + 1;
        lVar22 = local_160;
        plVar32 = aplStack_1d8[1];
      }
    }
    lVar35 = local_1c8;
    puVar33 = (undefined8 *)((longlong)puVar33 + 1);
  } while (puVar33 < local_198);
  if (puVar34 == (undefined8 *)0xffffffffffffffff) {
    puVar26 = auStack_218;
    if ((local_138 == (undefined8 *)0xffffffffffffffff) ||
       (puVar26 = auStack_218, puVar8 == (undefined8 *)0xffffffffffffffff)) goto LAB_18043f59d;
    lVar23 = *param_5;
    iVar28 = *(int *)(lVar23 + 0x14 + (longlong)local_138 * 0x28);
    iVar14 = iVar14 - iVar28;
    fVar38 = *(float *)(lVar23 + 0x18 + (longlong)local_138 * 0x28);
    fVar43 = fVar43 - fVar38;
    if (fVar43 < 0.0) {
      fVar43 = fVar43 + fVar45;
      if (fVar43 < fVar45) {
        iVar14 = iVar14 + -1;
      }
      else {
        fVar43 = 0.0;
      }
    }
    iVar28 = *(int *)(lVar23 + 0x14 + (longlong)puVar8 * 0x28) - iVar28;
    fVar38 = *(float *)(lVar23 + 0x18 + (longlong)puVar8 * 0x28) - fVar38;
    if (fVar38 < 0.0) {
      fVar38 = fVar38 + fVar45;
      if (fVar38 < fVar45) {
        iVar28 = iVar28 + -1;
      }
      else {
        fVar38 = 0.0;
      }
    }
    puVar33 = (undefined8 *)
              FUN_18046a660(local_1c8,*(undefined8 *)(lVar23 + (longlong)local_138 * 0x28),
                            *(undefined8 *)(lVar23 + (longlong)puVar8 * 0x28),
                            ((float)iVar14 + fVar43) / ((float)iVar28 + fVar38));
    if (puVar33 != (undefined8 *)0x0) {
      pfVar7 = (float *)puVar33[0x13];
      if (pfVar7 == (float *)puVar33[0x14]) {
        fStack_18c = 0.0;
        local_188 = 0.0;
      }
      else {
        fVar42 = *pfVar7;
        fStack_18c = pfVar7[1];
        local_188 = pfVar7[2];
      }
      local_fc = *(undefined4 *)puVar33;
      uStack_f8 = *(undefined4 *)((longlong)puVar33 + 4);
      local_198 = puVar33;
      fStack_190 = fVar42;
      uStack_184 = (undefined4)*puVar33;
      uStack_180 = (undefined4)((ulonglong)*puVar33 >> 0x20);
      uStack_17c = *(undefined4 *)(puVar33 + 2);
      local_178 = *(undefined1 *)((longlong)puVar33 + 0xd);
      uStack_177 = *(undefined1 *)((longlong)puVar33 + 0xc);
      uStack_176 = *(undefined1 *)((longlong)puVar33 + 0x7c);
      uStack_175 = local_ed;
      uStack_171 = local_e9;
      puVar34 = (undefined8 *)param_5[1];
      if (puVar34 == (undefined8 *)param_5[2]) {
        FUN_180448980(param_5,puVar34,&local_198);
      }
      else {
        *puVar34 = puVar33;
        puVar34[1] = CONCAT44(fStack_18c,fVar42);
        puVar34[2] = CONCAT44(uStack_184,local_188);
        puVar34[3] = CONCAT44(uStack_17c,uStack_180);
        puVar34[4] = CONCAT17(local_e9,CONCAT43(local_ed,CONCAT12(uStack_176,
                                                                  CONCAT11(uStack_177,local_178))));
        param_5[1] = param_5[1] + 0x28;
      }
      lVar35 = (param_5[1] - *param_5 >> 3) * -0x3333333333333333 + -1;
      auVar16 = (undefined1  [8])aplStack_1d8[0];
      if (aplStack_1d8[0] != aplStack_1d8[1]) {
        *aplStack_1d8[0] = lVar35;
        aplStack_1d8[0] = aplStack_1d8[0] + 1;
        puVar26 = auStack_218;
        goto LAB_18043f59d;
      }
      uVar11 = (longlong)aplStack_1d8[0] - (longlong)local_1e0;
      lVar23 = (longlong)uVar11 >> 3;
      if (lVar23 == 0x1fffffffffffffff) {
LAB_18043fe18:
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      uVar15 = lVar23 + 1;
      uVar21 = (longlong)aplStack_1d8[1] - (longlong)local_1e0 >> 3;
      uVar12 = 0x1fffffffffffffff;
      if (uVar21 <= 0x1fffffffffffffff - (uVar21 >> 1)) {
        uVar21 = (uVar21 >> 1) + uVar21;
        uVar12 = uVar15;
        if (uVar15 <= uVar21) {
          uVar12 = uVar21;
        }
        if (0x1fffffffffffffff < uVar12) {
LAB_18043fe1e:
                    /* WARNING: Subroutine does not return */
          FUN_18000d840();
        }
      }
      puVar33 = (undefined8 *)(uVar12 * 8);
      plVar9 = (longlong *)FUN_18000fb70(puVar33);
      uVar11 = uVar11 & 0xfffffffffffffff8;
      *(longlong *)(uVar11 + (longlong)plVar9) = lVar35;
      if (auVar16 == (undefined1  [8])aplStack_1d8[0]) {
        lVar35 = (longlong)aplStack_1d8[0] - (longlong)local_1e0;
        plVar32 = plVar9;
        auVar16 = local_1e0;
      }
      else {
        FUN_180540530(plVar9,local_1e0,(longlong)auVar16 - (longlong)local_1e0);
        lVar35 = (longlong)aplStack_1d8[0] - (longlong)auVar16;
        plVar32 = (longlong *)(uVar11 + 8 + (longlong)plVar9);
      }
      FUN_180540530(plVar32,auVar16,lVar35);
      if (local_1e0 != (undefined1  [8])0x0) {
        auVar16 = local_1e0;
        if ((ulonglong)(((longlong)aplStack_1d8[1] - (longlong)local_1e0 >> 3) * 8) < 0x1000) {
LAB_18043f57b:
          puVar25 = puVar24;
        }
        else {
          auVar16 = *(undefined1 (*) [8])((longlong)local_1e0 + -8);
          puVar25 = auStack_218;
          if (0x1f < ((longlong)local_1e0 - (longlong)auVar16) - 8U) {
LAB_18043f574:
            auVar16 = (undefined1  [8])0x5;
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar24 = auStack_210;
            goto LAB_18043f57b;
          }
        }
        *(undefined8 *)(puVar25 + -8) = 0x18043f586;
        thunk_FUN_1803d64e0(auVar16);
      }
      *(longlong **)(puVar25 + 0x38) = plVar9;
      *(longlong **)(puVar25 + 0x40) = plVar9 + uVar15;
      *(longlong *)(puVar25 + 0x48) = (longlong)puVar33 + (longlong)plVar9;
      puVar26 = puVar25;
      goto LAB_18043f59d;
    }
  }
  else {
    puVar26 = auStack_218;
    if (local_1f8 != '\0') {
      FUN_1800242d0(local_1e0,&local_140);
      puVar26 = auStack_218;
    }
LAB_18043f59d:
    lVar35 = *(longlong *)(puVar26 + 0x50);
    puVar27 = puVar26;
  }
  puVar26 = puVar27;
  if (*(longlong *)(puVar27 + 0x38) != *(longlong *)(puVar27 + 0x40)) {
    if (*(char *)(local_160 + 0x2c + local_130) == '\0') {
      iVar28 = *(int *)(param_2 + 0xa0);
    }
    else {
      iVar28 = *(int *)(local_160 + 0x28 + local_130);
    }
    fVar42 = *(float *)(lVar35 + 0x30) - *(float *)(local_160 + local_130);
    fVar38 = *(float *)(lVar35 + 0x34) - *(float *)(local_160 + 4 + local_130);
    fVar44 = *(float *)(lVar35 + 0x38) - *(float *)(local_160 + 8 + local_130);
    fVar38 = fVar44 * fVar44 + fVar38 * fVar38 + fVar42 * fVar42;
    if (fVar38 < 0.0) {
      *(undefined8 *)(puVar27 + -8) = 0x18043f624;
      fVar38 = (float)FUN_18051af10();
    }
    else {
      fVar38 = SQRT(fVar38);
    }
    *(undefined8 *)(puVar27 + -8) = 0x18043f632;
    fVar44 = (float)FUN_18053f920();
    fVar42 = DAT_1808acab0;
    iVar14 = iVar28 + -1;
    if (*(int *)(param_3 + 0x14) != 0) {
      iVar14 = iVar28;
    }
    if (DAT_1808acab0 < fVar44 * fVar38) {
      iVar14 = iVar14 + -2;
    }
    iVar28 = 0;
    if (0 < iVar14) {
      iVar28 = iVar14;
    }
    iVar28 = iVar28 * 2 + 2;
    plVar32 = *(longlong **)(puVar27 + 0x40);
    plVar9 = *(longlong **)(puVar27 + 0x38);
    iVar30 = (int)((longlong)plVar32 - (longlong)plVar9 >> 3);
    iVar14 = iVar28;
    if (iVar30 <= iVar28) {
      iVar14 = iVar30;
    }
    if (iVar28 < 1) {
      iVar14 = 1;
    }
    *(int *)(puVar27 + 0x58) = iVar14;
    uVar19 = 1 << ((byte)param_4 & 0x1f);
    *(uint *)(puVar27 + 0x24) = uVar19;
    if (plVar9 != plVar32) {
      lVar23 = -1;
      lVar35 = *param_5;
      lVar22 = -1;
      do {
        lVar17 = *plVar9;
        lVar29 = lVar22;
        if ((*(char *)(param_2 + 0x51) == '\0') ||
           ((*(uint *)(lVar35 + 0x1c + lVar17 * 0x28) & uVar19) == 0)) {
          iVar28 = *(int *)(lVar35 + 0x14 + lVar17 * 0x28);
          if (lVar23 == -1) {
LAB_18043f729:
            lVar23 = lVar17;
LAB_18043f72c:
            if ((((iVar28 <= *(int *)(puVar27 + 0x28)) && (lVar29 = lVar17, lVar22 != -1)) &&
                (iVar14 = *(int *)(lVar35 + 0x14 + lVar22 * 0x28), iVar28 <= iVar14)) &&
               ((lVar29 = lVar22, iVar14 <= iVar28 &&
                (lVar29 = lVar17, *(char *)(lVar35 + 0x21 + lVar17 * 0x28) != '\0')))) {
              lVar29 = lVar22;
            }
          }
          else {
            cVar3 = *(char *)(lVar35 + 0x21 + lVar17 * 0x28);
            if (((cVar3 == '\0') || (iVar28 <= *(int *)(puVar27 + 0x28))) ||
               ((*(char *)(lVar35 + 0x20 + lVar17 * 0x28) != '\0' &&
                (*(char *)(param_3 + 0x10) != '\0')))) {
              iVar14 = *(int *)(lVar35 + 0x14 + lVar23 * 0x28);
              if (iVar14 < iVar28) goto LAB_18043f729;
              if (iVar14 <= iVar28) {
                lVar10 = lVar17;
                if (cVar3 != '\0') {
                  lVar10 = lVar23;
                }
                lVar23 = lVar10;
              }
              goto LAB_18043f72c;
            }
          }
          uVar19 = *(uint *)(puVar27 + 0x24);
        }
        plVar9 = plVar9 + 1;
        lVar22 = lVar29;
      } while (plVar9 != plVar32);
      iVar14 = *(int *)(puVar27 + 0x58);
      if (lVar29 != -1) {
        *(undefined8 *)(puVar27 + -8) = 0x18043f789;
        FUN_1800cd6b0(param_1,lVar35 + lVar29 * 0x28);
      }
      if ((lVar23 != -1) && (lVar23 != lVar29)) {
        lVar35 = *param_5;
        *(undefined8 *)(puVar27 + -8) = 0x18043f7ad;
        FUN_1800cd6b0(param_1,lVar35 + lVar23 * 0x28);
      }
      uVar19 = *(uint *)(puVar27 + 0x24);
    }
    iVar28 = *(int *)(param_2 + 0xa0);
    *(int *)(puVar27 + 0x78) = iVar28;
    fVar40 = *(float *)(param_2 + 0x8c);
    local_128 = (float *)0x0;
    pfStack_120 = (float *)0x0;
    local_118 = 0;
    if (*(char *)(param_2 + 0x51) != '\0') {
      plVar32 = *(longlong **)(puVar27 + 0x40);
      for (plVar9 = *(longlong **)(puVar27 + 0x38); plVar9 != plVar32; plVar9 = plVar9 + 1) {
        lVar35 = *plVar9;
        lVar23 = *param_5;
        if ((*(uint *)(lVar23 + 0x1c + lVar35 * 0x28) & uVar19) != 0) {
          *(undefined8 *)(puVar27 + -8) = 0x18043f820;
          FUN_180011250(&local_128,lVar23 + (lVar35 * 5 + 1) * 8);
          uVar19 = *(uint *)(puVar27 + 0x24);
        }
      }
    }
    plVar32 = (longlong *)param_1[1];
    for (plVar9 = (longlong *)*param_1; plVar9 != plVar32; plVar9 = plVar9 + 1) {
      puVar33 = *(undefined8 **)(*plVar9 + 0x98);
      if (puVar33 == *(undefined8 **)(*plVar9 + 0xa0)) {
        local_198 = (undefined8 *)0x0;
        fStack_190 = 0.0;
        ppuVar20 = (undefined8 **)&local_198;
      }
      else {
        local_158 = (undefined8 *)*puVar33;
        local_150 = *(undefined4 *)(puVar33 + 1);
        ppuVar20 = &local_158;
      }
      *(undefined8 *)(puVar27 + -8) = 0x18043f890;
      FUN_180081aa0(&local_128,ppuVar20);
    }
    *(undefined8 *)(puVar27 + 0x60) = 0;
    *(undefined8 *)(puVar27 + 0x68) = 0;
    *(undefined8 *)(puVar27 + 0x70) = 0;
    uVar11 = *(longlong *)(puVar27 + 0x40) - *(longlong *)(puVar27 + 0x38) >> 3;
    if (uVar11 == 0) {
      pfVar7 = *(float **)(puVar27 + 0x60);
      *(float **)(puVar27 + 0x50) = pfVar7;
    }
    else {
      if (0xccccccccccccccc < uVar11) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar27 + -8) = 0x18043fe17;
        FUN_18000fb10();
      }
      *(undefined8 *)(puVar27 + -8) = 0x18043f8e9;
      pfVar7 = (float *)FUN_18000fb70(uVar11 * 0x14);
      *(float **)(puVar27 + 0x50) = pfVar7;
      *(undefined8 *)(puVar27 + -8) = 0x18043f906;
      FUN_180540530(pfVar7,*(longlong *)(puVar27 + 0x60),
                    *(longlong *)(puVar27 + 0x68) - *(longlong *)(puVar27 + 0x60));
      uVar21 = *(ulonglong *)(puVar27 + 0x60);
      if (uVar21 != 0) {
        uVar12 = ((longlong)(*(longlong *)(puVar27 + 0x70) - uVar21) >> 2) * 4;
        uVar15 = uVar21;
        if (0xfff < uVar12) {
          uVar15 = *(ulonglong *)(uVar21 - 8);
          uVar21 = (uVar21 - uVar15) - 8;
          if (uVar21 < 0x20) {
            uVar12 = uVar12 + 0x27;
          }
          else {
            pcVar4 = (code *)swi(0x29);
            uVar12 = (*pcVar4)(5);
            puVar27 = puVar27 + 8;
            uVar15 = uVar21;
          }
        }
        *(undefined8 *)(puVar27 + -8) = 0x18043f967;
        thunk_FUN_1803d64e0(uVar15,uVar12);
      }
      *(float **)(puVar27 + 0x60) = pfVar7;
      *(float **)(puVar27 + 0x68) = pfVar7;
      *(float **)(puVar27 + 0x70) = pfVar7 + uVar11 * 5;
    }
    fVar5 = DAT_1808acd08;
    plVar32 = *(longlong **)(puVar27 + 0x38);
    plVar9 = *(longlong **)(puVar27 + 0x40);
    iVar30 = *(int *)(puVar27 + 0x28);
    if (plVar32 != plVar9) {
      uVar19 = *(uint *)(puVar27 + 0x24);
      do {
        fStack_18c = fVar5;
        lVar35 = *plVar32;
        lVar23 = *param_5;
        fVar1 = *(float *)(lVar23 + 8 + lVar35 * 0x28);
        fVar2 = *(float *)(lVar23 + 0xc + lVar35 * 0x28);
        local_198 = (undefined8 *)CONCAT44(fVar2,fVar1);
        fStack_190 = *(float *)(lVar23 + 0x10 + lVar35 * 0x28);
        if (((iVar30 < *(int *)(lVar23 + 0x14 + lVar35 * 0x28)) &&
            ((*(char *)(lVar23 + 0x20 + lVar35 * 0x28) == '\0' ||
             (*(char *)(param_3 + 0x10) == '\0')))) ||
           ((*(char *)(param_2 + 0x51) != '\0' &&
            ((*(uint *)(lVar23 + 0x1c + lVar35 * 0x28) & uVar19) != 0)))) {
          local_188 = (float)((uint)local_188._1_3_ << 8);
        }
        else {
          local_188 = (float)CONCAT31(local_188._1_3_,1);
        }
        pfVar7 = local_128;
        if (local_128 != pfStack_120) {
          do {
            fVar36 = fVar1 - *pfVar7;
            fVar43 = fVar2 - pfVar7[1];
            fVar36 = fVar43 * fVar43 + fVar36 * fVar36 +
                     (fStack_190 - pfVar7[2]) * (fStack_190 - pfVar7[2]);
            if (fVar36 < fStack_18c) {
              fStack_18c = fVar36;
            }
            pfVar7 = pfVar7 + 3;
          } while (pfVar7 != pfStack_120);
        }
        puVar33 = *(undefined8 **)(puVar27 + 0x68);
        if (puVar33 == *(undefined8 **)(puVar27 + 0x70)) {
          *(undefined8 *)(puVar27 + -8) = 0x18043faa0;
          FUN_1804487d0(puVar27 + 0x60,puVar33,&local_198);
        }
        else {
          *puVar33 = local_198;
          puVar33[1] = CONCAT44(fStack_18c,fStack_190);
          *(float *)(puVar33 + 2) = local_188;
          *(longlong *)(puVar27 + 0x68) = *(longlong *)(puVar27 + 0x68) + 0x14;
        }
        plVar32 = plVar32 + 1;
      } while (plVar32 != plVar9);
      pfVar7 = *(float **)(puVar27 + 0x60);
      *(float **)(puVar27 + 0x50) = pfVar7;
      iVar28 = *(int *)(puVar27 + 0x78);
      iVar14 = *(int *)(puVar27 + 0x58);
    }
    fVar5 = DAT_1808acda0;
    lVar35 = -1;
    if (0 < iVar14) {
      fVar45 = fVar45 - ((float)iVar28 * DAT_1808ac1f4) / DAT_1808ac658;
      fVar38 = fVar40 * fVar44 * fVar38 * DAT_1808ac1f4;
      if ((fVar45 <= fVar38) && (fVar45 = fVar42, fVar38 <= fVar42)) {
        fVar45 = fVar38;
      }
      iVar28 = 0;
      do {
        uVar12 = 0xffffffff;
        iVar30 = -1;
        uVar21 = (*(longlong *)(puVar27 + 0x68) - (longlong)pfVar7 >> 2) * -0x3333333333333333;
        uVar11 = 0;
        fVar38 = fVar5;
        if (uVar21 != 0) {
          do {
            if (*(char *)(pfVar7 + uVar11 * 5 + 4) != '\0') {
              if (fVar38 < pfVar7[uVar11 * 5 + 3]) {
                uVar12 = uVar11 & 0xffffffff;
                fVar38 = pfVar7[uVar11 * 5 + 3];
              }
            }
            iVar30 = (int)uVar12;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar21);
        }
        if ((((fVar38 <= fVar45) && (!NAN(fVar38))) && (!NAN(fVar45))) || (iVar30 < 0)) break;
        lVar17 = (longlong)iVar30;
        *(undefined1 *)(pfVar7 + lVar17 * 5 + 4) = 0;
        lVar23 = *(longlong *)(*(longlong *)(puVar27 + 0x38) + lVar17 * 8);
        lVar22 = *param_5;
        *(undefined8 *)(puVar27 + -8) = 0x18043fbca;
        FUN_1800cd6b0(param_1,lVar22 + lVar23 * 0x28);
        pfVar7 = *(float **)(puVar27 + 0x60);
        fVar38 = pfVar7[lVar17 * 5];
        fVar42 = pfVar7[lVar17 * 5 + 1];
        fVar44 = pfVar7[lVar17 * 5 + 2];
        pfVar18 = *(float **)(puVar27 + 0x68);
        if (pfVar7 != pfVar18) {
          do {
            if (*(char *)(pfVar7 + 4) != '\0') {
              fVar40 = (pfVar7[1] - fVar42) * (pfVar7[1] - fVar42) +
                       (*pfVar7 - fVar38) * (*pfVar7 - fVar38) +
                       (pfVar7[2] - fVar44) * (pfVar7[2] - fVar44);
              if (pfVar7[3] <= fVar40) {
                fVar40 = pfVar7[3];
              }
              pfVar7[3] = fVar40;
            }
            pfVar7 = pfVar7 + 5;
          } while (pfVar7 != pfVar18);
          pfVar7 = *(float **)(puVar27 + 0x60);
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 < iVar14);
      *(float **)(puVar27 + 0x50) = pfVar7;
      iVar30 = *(int *)(puVar27 + 0x28);
    }
    if (*param_1 == param_1[1]) {
      plVar32 = *(longlong **)(puVar27 + 0x38);
      if (plVar32 != *(longlong **)(puVar27 + 0x40)) {
        do {
          lVar23 = *plVar32;
          if (lVar35 == -1) {
            lVar35 = lVar23;
          }
          else {
            lVar22 = *param_5;
            iVar28 = *(int *)(lVar22 + 0x14 + lVar23 * 0x28);
            uVar19 = iVar28 - iVar30;
            if (iVar28 < iVar30) {
              uVar19 = iVar30 - iVar28;
            }
            iVar28 = *(int *)(lVar22 + 0x14 + lVar35 * 0x28);
            uVar31 = iVar28 - iVar30;
            if (iVar28 < iVar30) {
              uVar31 = iVar30 - iVar28;
            }
            if (uVar19 <= uVar31) {
              if (uVar19 == uVar31) {
                if ((*(char *)(lVar22 + 0x21 + lVar23 * 0x28) == '\0') &&
                   (*(char *)(lVar22 + 0x21 + lVar35 * 0x28) != '\0')) {
                  lVar35 = lVar23;
                }
              }
              else {
                lVar35 = lVar23;
              }
            }
          }
          plVar32 = plVar32 + 1;
        } while (plVar32 != *(longlong **)(puVar27 + 0x40));
        pfVar7 = *(float **)(puVar27 + 0x50);
        if (lVar35 != -1) {
          lVar23 = *param_5;
          *(undefined8 *)(puVar27 + -8) = 0x18043fd22;
          FUN_1800cd6b0(param_1,lVar23 + lVar35 * 0x28);
          pfVar7 = *(float **)(puVar27 + 0x60);
        }
      }
    }
    if (pfVar7 != (float *)0x0) {
      pfVar18 = pfVar7;
      if (0xfff < (ulonglong)((*(longlong *)(puVar27 + 0x70) - (longlong)pfVar7 >> 2) * 4)) {
        pfVar18 = *(float **)(pfVar7 + -2);
        pfVar7 = (float *)((longlong)pfVar7 + (-8 - (longlong)pfVar18));
        if (&DAT_0000001f < pfVar7) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar27 = puVar27 + 8;
          pfVar18 = pfVar7;
        }
      }
      *(undefined8 *)(puVar27 + -8) = 0x18043fd81;
      thunk_FUN_1803d64e0(pfVar18);
      *(undefined8 *)(puVar27 + 0x70) = 0;
      *(undefined8 *)(puVar27 + 0x60) = 0;
      *(undefined8 *)(puVar27 + 0x68) = 0;
    }
    *(undefined8 *)(puVar27 + -8) = 0x18043fd9c;
    FUN_180011610(&local_128);
    *(undefined8 *)(puVar27 + -8) = 0x18043fda7;
    FUN_1800132b0(puVar27 + 0x38);
    return param_1;
  }
LAB_18043fdad:
  *(undefined8 *)(puVar26 + -8) = 0x18043fdb7;
  FUN_1800132b0(puVar26 + 0x38);
  return param_1;
}



/* ===== 18043fe30 FUN_18043fe30 ===== */

void FUN_18043fe30(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uStack_60 = *(undefined4 *)(param_2 + 1);
  local_68 = *param_2;
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  local_48 = param_5;
  uStack_40 = param_6;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_5c = 0xbf800000;
  if (puVar1 == *(undefined8 **)(param_1 + 0xf0)) {
    local_58 = param_3;
    uStack_50 = param_4;
    FUN_180448bb0(param_1 + 0xe0,puVar1,&local_68);
    return;
  }
  *puVar1 = local_68;
  puVar1[1] = CONCAT44(0xbf800000,uStack_60);
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
  return;
}



/* ===== 18043ff00 FUN_18043ff00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18043ff00(longlong param_1,longlong param_2,float *param_3,int *param_4)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  double dVar4;
  float *pfVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 *puVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined8 local_248;
  float fStack_240;
  undefined4 uStack_23c;
  longlong local_238;
  float *pfStack_230;
  undefined8 *local_228;
  int *piStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  float local_1e8;
  undefined8 local_1e0;
  float local_1d8 [2];
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined8 local_1c0;
  float local_1b8 [2];
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  undefined8 local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined8 local_178;
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined1 local_128 [16];
  undefined8 *local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  if (*(longlong *)(param_3 + 8) == 0) {
    local_1a0 = 0.0;
  }
  else {
    local_1a0 = *(float *)(*(longlong *)(param_3 + 8) + 0x204);
  }
  lVar16 = *(longlong *)(param_2 + 8);
  if (lVar16 == 0) {
    fVar22 = 0.0;
  }
  else {
    if (*(char *)(lVar16 + 0x1c) != '\0') {
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        local_1b0 = param_3[4];
      }
      else {
        local_1b0 = (float)((int)param_3[4] - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x48));
      }
      goto LAB_18043ffb1;
    }
    fVar22 = *(float *)(lVar16 + 0x3c);
  }
  local_1b0 = (float)((int)(fVar22 * DAT_1808acab0 + DAT_1808ac1f4) +
                     ((int)param_3[4] - *(int *)(param_1 + 0x18)));
LAB_18043ffb1:
  local_118 = *(undefined8 **)(param_4 + 0x22);
  puVar18 = *(undefined8 **)(param_4 + 0x20);
  if (puVar18 != local_118) {
    fVar22 = *param_3;
    fVar1 = param_3[1];
    local_188 = param_3[2];
    uVar35 = SUB84(DAT_1808ac500,0);
    uVar37 = (undefined4)((ulonglong)DAT_1808ac500 >> 0x20);
    do {
      bVar2 = *(byte *)(puVar18 + 7);
      if ((((bVar2 & 0xe0) == 0) && (bVar2 != 1)) &&
         ((*(uint *)(param_1 + 0xcc) >> (bVar2 & 0x1f) & 1) != 0)) {
        fVar34 = (float)*puVar18;
        fVar36 = (float)((ulonglong)*puVar18 >> 0x20);
        fVar32 = *(float *)(param_1 + 0xa4);
        fVar20 = *(float *)(puVar18 + 1);
        local_128._4_4_ = fVar36;
        local_128._0_4_ = fVar36;
        local_128._8_4_ = fVar36;
        local_128._12_4_ = fVar36;
        local_1a8 = fVar20;
        uStack_160 = 0;
        uStack_15c = 0;
        local_168 = fVar34;
        fStack_164 = fVar36;
        if (DAT_1808acda0 < fVar32) {
          fVar28 = fVar36 - *(float *)(param_1 + 0x58);
          fVar30 = fVar20 - *(float *)(param_1 + 0x5c);
          fVar27 = fVar34 - *(float *)(param_1 + 0x54);
          fVar25 = fVar30 * fVar30 + fVar28 * fVar28 + fVar27 * fVar27;
          if (fVar25 < 0.0) {
            fVar19 = (float)FUN_18051af10();
          }
          else {
            fVar19 = SQRT(fVar25);
          }
          if ((fVar19 < DAT_1808abf54) || (DAT_1808accfc < fVar19)) {
            if (fVar25 == 0.0) {
              fVar30 = 0.0;
              fVar28 = 0.0;
              fVar19 = 0.0;
            }
            else {
              dVar4 = (double)fVar27;
              dVar24 = (double)fVar28;
              dVar31 = (double)fVar30;
              dVar33 = dVar4 * dVar4 + dVar24 * dVar24 + dVar31 * dVar31;
              if (dVar33 < 0.0) {
                dVar33 = (double)FUN_18051ff20();
              }
              else {
                dVar33 = SQRT(dVar33);
              }
              dVar33 = (double)CONCAT44(uVar37,uVar35) / dVar33;
              fVar28 = (float)(dVar33 * dVar24);
              fVar19 = (float)(dVar33 * dVar4);
              fVar30 = (float)(dVar33 * dVar31);
            }
          }
          else {
            fVar19 = DAT_1808ac34c / fVar19;
            fVar30 = fVar19 * fVar30;
            fVar28 = fVar19 * fVar28;
            fVar19 = fVar19 * fVar27;
          }
          if (fVar30 * *(float *)(param_1 + 0x68) + fVar28 * *(float *)(param_1 + 100) +
              fVar19 * *(float *)(param_1 + 0x60) < fVar32) goto LAB_180441caf;
        }
        fVar32 = DAT_1808ac34c;
        uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 0x39);
        fVar34 = fVar34 - fVar22;
        local_194 = fVar20 - local_188;
        fVar36 = fVar36 - fVar1;
        if (0xb < *(byte *)((longlong)puVar18 + 0x39)) {
          uVar12 = 0;
        }
        local_1c8 = fVar34 * fVar34;
        fVar30 = local_194 * local_194;
        fVar20 = local_1c8 + fVar36 * fVar36 + fVar30;
        pfVar13 = (float *)(param_2 + 0xa0 + uVar12 * 4);
        if (*pfVar13 <= fVar20 && fVar20 != *pfVar13) {
          uVar35 = SUB84(DAT_1808ac500,0);
          uVar37 = (undefined4)((ulonglong)DAT_1808ac500 >> 0x20);
        }
        else {
          if (((char)param_4[3] == '\0') || (iVar3 = *param_4, iVar3 <= (int)local_1b0)) {
            fVar32 = 0.0;
            bVar6 = false;
LAB_1804404ac:
            fVar20 = local_194;
            fVar30 = fVar36 * fVar36 + fVar30 + local_1c8;
            if (fVar30 < 0.0) {
              fVar28 = (float)FUN_18051af10();
            }
            else {
              fVar28 = SQRT(fVar30);
            }
            if ((fVar28 < DAT_1808abf54) || (DAT_1808accfc < fVar28)) {
              if (fVar30 == 0.0) {
                fVar28 = 0.0;
                fVar20 = 0.0;
                fVar36 = 0.0;
                fVar30 = 0.0;
              }
              else {
                dVar31 = (double)fVar34;
                dVar24 = (double)fVar36;
                dVar4 = (double)fVar20;
                dVar33 = dVar24 * dVar24 + dVar31 * dVar31 + dVar4 * dVar4;
                if (dVar33 < 0.0) {
                  dVar33 = (double)FUN_18051ff20();
                }
                else {
                  dVar33 = SQRT(dVar33);
                }
                dVar23 = DAT_1808ac500 / dVar33;
                if (DAT_1808accc0 <= dVar33) {
                  dVar33 = DAT_1808accc0;
                }
                fVar20 = (float)(dVar4 * dVar23);
                fVar36 = (float)(dVar24 * dVar23);
                fVar30 = (float)(dVar31 * dVar23);
                fVar28 = (float)dVar33;
              }
              local_1cc = fVar36;
              local_1d0 = fVar20;
            }
            else {
              fVar30 = DAT_1808ac34c / fVar28;
              fVar20 = fVar30 * fVar20;
              fVar36 = fVar30 * fVar36;
              fVar30 = fVar30 * fVar34;
              local_1d0 = fVar20;
              local_1cc = fVar36;
            }
            fVar34 = *(float *)((longlong)puVar18 + 0x34);
            fVar28 = fVar28 * local_1a0;
            local_1ac = fVar30;
            fVar25 = (fVar34 * DAT_1808ac710) / fVar28;
            if (0.0 <= fVar25) {
              if (DAT_1808ac34c <= fVar25) {
                fVar25 = DAT_1808ac34c;
              }
              fVar25 = fVar25 * DAT_1808ac1b0 + 0.0;
            }
            else {
              fVar25 = 0.0;
            }
            fVar27 = DAT_1808ac34c;
            fVar19 = DAT_1808ac34c;
            if (fVar25 == DAT_1808ac34c) {
              if (*(float *)(param_1 + 0x8c) - DAT_1808ac34c < 0.0) {
                fVar27 = 0.0;
              }
              if (*(float *)(param_1 + 0x90) - DAT_1808ac34c < 0.0) goto LAB_1804406b3;
            }
            else {
              fVar21 = (*(float *)(param_1 + 0x8c) - fVar25) / (DAT_1808ac34c - fVar25);
              fVar25 = (*(float *)(param_1 + 0x90) - fVar25) / (DAT_1808ac34c - fVar25);
              if (fVar21 < 0.0) {
                fVar27 = 0.0;
              }
              else if (fVar21 <= DAT_1808ac34c) {
                fVar27 = fVar21;
              }
              if (fVar25 < 0.0) {
LAB_1804406b3:
                fVar19 = 0.0;
              }
              else if (fVar25 <= DAT_1808ac34c) {
                fVar19 = fVar25;
              }
            }
            fVar27 = fVar27 * fVar28;
            local_1d0 = fVar20;
            local_1cc = fVar36;
            local_198 = fVar34;
            local_180 = fVar28;
            if (((3 < (byte)(bVar2 - 0xb)) || (fVar27 <= fVar34)) &&
               ((local_184 = *(float *)(puVar18 + 6), (0x50654U >> (bVar2 & 0x1f) & 1) == 0 ||
                (fVar27 <= local_184 + fVar34 + local_184 + fVar34)))) {
              puVar15 = *(undefined8 **)(param_1 + 0xe8);
              local_248 = CONCAT44(local_128._0_4_,local_168);
              fStack_240 = local_1a8;
              local_218 = 0;
              uStack_210 = 0;
              local_208 = 0;
              uStack_200 = 0;
              local_1f8 = 0;
              uStack_23c = 0xbf800000;
              local_238 = param_2;
              pfStack_230 = param_3;
              local_228 = puVar18;
              piStack_220 = param_4;
              if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                FUN_180448bb0(param_1 + 0xe0,puVar15,&local_248);
              }
              else {
                *puVar15 = local_248;
                puVar15[1] = CONCAT44(0xbf800000,local_1a8);
                puVar15[2] = param_2;
                puVar15[3] = param_3;
                puVar15[4] = puVar18;
                puVar15[5] = param_4;
                puVar15[6] = 0;
                puVar15[7] = 0;
                puVar15[8] = 0;
                puVar15[9] = 0;
                puVar15[10] = 0;
                *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
              }
              local_17c = fVar19 * fVar28;
              fVar25 = fVar34 * DAT_1808ac31c;
              local_1e8 = fVar25 - local_17c;
              fVar28 = fVar25 - fVar28;
              if (bVar6) {
                local_1e8 = local_1e8 - fVar32;
                if (local_1e8 < 0.0) goto LAB_1804412d2;
                fVar28 = fVar28 - fVar32;
              }
              fVar25 = fVar25 - fVar27;
              local_19c = fVar28;
              local_1c8 = fVar25;
              if ((fVar34 * DAT_1808ac0c0 <= fVar25) && (local_17c * DAT_1808ac140 <= fVar25)) {
                fVar32 = fVar20 * fVar20 + fVar36 * fVar36 + fVar30 * fVar30;
                if (fVar32 < 0.0) {
                  fVar32 = (float)FUN_18051af10();
                }
                else {
                  fVar32 = SQRT(fVar32);
                }
                fVar34 = DAT_1808ac34c;
                if (DAT_1808abf94 < fVar32) {
                  fVar32 = DAT_1808ac34c / fVar32;
                  fVar30 = fVar30 * fVar32;
                  fVar36 = fVar36 * fVar32;
                  fVar20 = local_1d0 * fVar32;
                }
                if ((DAT_1808abfbc <= (float)((uint)fVar30 & _DAT_1808ade90)) ||
                   (DAT_1808abfbc <= (float)((uint)fVar36 & _DAT_1808ade90))) {
                  fVar32 = fVar30 - fVar20 * 0.0;
                  fVar25 = fVar20 * 0.0 - fVar36;
                  fVar27 = fVar36 * 0.0 + fVar30 * DAT_1808acd10;
                  fVar28 = fVar32 * fVar32 + fVar25 * fVar25 + fVar27 * fVar27;
                  if (fVar28 < 0.0) {
                    fVar19 = (float)FUN_18051af10();
                  }
                  else {
                    fVar19 = SQRT(fVar28);
                  }
                  if ((fVar19 < DAT_1808abf54) || (DAT_1808accfc < fVar19)) {
                    if (fVar28 == 0.0) {
                      fVar27 = 0.0;
                      fVar32 = 0.0;
                      fVar34 = 0.0;
                    }
                    else {
                      dVar33 = (double)fVar25;
                      dVar31 = (double)fVar32;
                      dVar4 = (double)fVar27;
                      dVar24 = dVar33 * dVar33 + dVar31 * dVar31 + dVar4 * dVar4;
                      if (dVar24 < 0.0) {
                        dVar24 = (double)FUN_18051ff20();
                      }
                      else {
                        dVar24 = SQRT(dVar24);
                      }
                      dVar24 = DAT_1808ac500 / dVar24;
                      fVar27 = (float)(dVar4 * dVar24);
                      fVar34 = (float)(dVar33 * dVar24);
                      fVar32 = (float)(dVar31 * dVar24);
                    }
                  }
                  else {
                    fVar34 = fVar34 / fVar19;
                    fVar27 = fVar34 * fVar27;
                    fVar32 = fVar34 * fVar32;
                    fVar34 = fVar34 * fVar25;
                  }
                  fVar25 = DAT_1808abf54;
                  fVar19 = fVar27 * fVar36 - fVar32 * fVar20;
                  fVar28 = fVar34 * fVar20 - fVar27 * fVar30;
                  local_190 = CONCAT44(local_190._4_4_,fVar28);
                  local_1a4 = fVar32 * fVar30 - fVar34 * fVar36;
                  fVar36 = local_1a4 * local_1a4 + fVar28 * fVar28 + fVar19 * fVar19;
                  if (fVar36 < 0.0) {
                    fVar20 = (float)FUN_18051af10();
                    fVar28 = (float)local_190;
                  }
                  else {
                    fVar20 = SQRT(fVar36);
                  }
                  if ((fVar20 < fVar25) || (DAT_1808accfc < fVar20)) {
                    if (fVar36 == 0.0) {
                      fVar36 = 0.0;
                      fVar28 = 0.0;
                      fVar20 = 0.0;
                    }
                    else {
                      dVar33 = (double)fVar28;
                      dVar24 = (double)fVar19;
                      dVar4 = (double)local_1a4;
                      dVar31 = dVar24 * dVar24 + dVar33 * dVar33 + dVar4 * dVar4;
                      if (dVar31 < 0.0) {
                        dVar31 = (double)FUN_18051ff20();
                      }
                      else {
                        dVar31 = SQRT(dVar31);
                      }
                      dVar31 = DAT_1808ac500 / dVar31;
                      fVar36 = (float)(dVar4 * dVar31);
                      fVar20 = (float)(dVar24 * dVar31);
                      fVar28 = (float)(dVar33 * dVar31);
                    }
                  }
                  else {
                    fVar20 = DAT_1808ac34c / fVar20;
                    fVar36 = fVar20 * local_1a4;
                    fVar28 = fVar20 * fVar28;
                    fVar20 = fVar20 * fVar19;
                  }
                  fVar25 = local_1c8;
                }
                else {
                  fVar20 = (float)((uint)fVar20 ^ DAT_1808adec0);
                  fVar27 = 0.0;
                  fVar34 = 0.0;
                  fVar28 = 0.0;
                  fVar36 = 0.0;
                  fVar32 = DAT_1808ac34c;
                }
                local_f8 = *(undefined8 *)((longlong)puVar18 + 0x24);
                local_190 = *(undefined8 *)((longlong)puVar18 + 0xc);
                fVar30 = *(float *)((longlong)puVar18 + 0x14);
                fVar19 = *(float *)(puVar18 + 4);
                local_108 = (float)((ulonglong)local_f8 >> 0x20);
                uStack_f0 = 0;
                local_1c0 = local_190;
                local_178 = puVar18[3];
                local_1e0 = local_178;
                uVar8 = local_1e0;
                local_1b8[0] = fVar30;
                local_1a4 = *(float *)((longlong)puVar18 + 0x2c);
                local_1d8[0] = fVar19;
                pfVar17 = local_1d8;
                pfVar13 = (float *)&local_1e0;
                pfVar14 = local_1b8;
                pfVar5 = (float *)&local_1c0;
                puVar15 = &local_1e0;
                puVar7 = &local_1c0;
                if (((float)((uint)fVar32 ^ DAT_1808adec0) * local_108 -
                    *(float *)((longlong)puVar18 + 0x2c) * fVar27) - (float)local_f8 * fVar34 <= 0.0
                   ) {
                  pfVar17 = local_1b8;
                  pfVar13 = (float *)&local_1c0;
                  pfVar14 = local_1d8;
                  pfVar5 = (float *)&local_1e0;
                  puVar15 = &local_1c0;
                  puVar7 = &local_1e0;
                }
                fStack_104 = local_108;
                fStack_100 = local_108;
                fStack_fc = local_108;
                if (bVar2 == 0) {
                  local_1e0._4_4_ = (float)((ulonglong)local_178 >> 0x20);
                  local_1e0._0_4_ = (float)local_178;
                  fVar21 = local_1e0._4_4_;
                  fVar26 = (float)local_1e0;
                  local_1e0 = uVar8;
                  if ((local_198 * DAT_1808ac118 < local_19c) &&
                     (!(DAT_1808ac2cc < *(float *)(param_1 + 0x8c) ||
                       DAT_1808ac2cc == *(float *)(param_1 + 0x8c)))) {
                    puVar15 = *(undefined8 **)(param_1 + 0xe8);
                    local_1f8 = 0;
                    local_218 = 0;
                    uStack_210 = 0;
                    local_208 = 0;
                    uStack_200 = 0;
                    uStack_23c = 0xbf800000;
                    local_248 = CONCAT44(fVar28 * local_19c + local_1e0._4_4_,
                                         fVar20 * local_19c + (float)local_1e0);
                    fStack_240 = fVar36 * local_19c + fVar19;
                    if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                      local_238 = param_2;
                      pfStack_230 = param_3;
                      local_228 = puVar18;
                      piStack_220 = param_4;
                      FUN_180448bb0(param_1 + 0xe0,puVar15,&local_248);
                      fVar21 = local_1e0._4_4_;
                      fVar26 = (float)local_1e0;
                    }
                    else {
                      *puVar15 = local_248;
                      puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                      puVar15[2] = param_2;
                      puVar15[3] = param_3;
                      puVar15[4] = puVar18;
                      puVar15[5] = param_4;
                      puVar15[6] = 0;
                      puVar15[7] = 0;
                      puVar15[8] = 0;
                      puVar15[9] = 0;
                      puVar15[10] = 0;
                      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                    }
                  }
                  fVar29 = local_1e8;
                  lVar16 = param_1 + 0xe0;
                  if ((*(float *)(param_1 + 0x8c) <= *(float *)(param_1 + 0x90) &&
                       *(float *)(param_1 + 0x90) != *(float *)(param_1 + 0x8c)) &&
                     (local_1e8 * DAT_1808ac378 < fVar25)) {
                    puVar15 = *(undefined8 **)(param_1 + 0xe8);
                    local_1f8 = 0;
                    local_218 = 0;
                    uStack_210 = 0;
                    local_208 = 0;
                    uStack_200 = 0;
                    uStack_23c = 0xbf800000;
                    local_248 = CONCAT44(fVar28 * fVar25 + fVar21,fVar20 * fVar25 + fVar26);
                    fStack_240 = fVar36 * fVar25 + fVar19;
                    if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                      local_238 = param_2;
                      pfStack_230 = param_3;
                      local_228 = puVar18;
                      piStack_220 = param_4;
                      FUN_180448bb0(lVar16,puVar15,&local_248);
                    }
                    else {
                      *puVar15 = local_248;
                      puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                      puVar15[2] = param_2;
                      puVar15[3] = param_3;
                      puVar15[4] = puVar18;
                      puVar15[5] = param_4;
                      puVar15[6] = 0;
                      puVar15[7] = 0;
                      puVar15[8] = 0;
                      puVar15[9] = 0;
                      puVar15[10] = 0;
                      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                    }
                  }
                  fVar25 = local_1e0._4_4_;
                  puVar15 = *(undefined8 **)(param_1 + 0xe8);
                  local_1f8 = 0;
                  uStack_23c = 0xbf800000;
                  local_218 = 0;
                  uStack_210 = 0;
                  local_208 = 0;
                  uStack_200 = 0;
                  local_248 = CONCAT44(fVar28 * fVar29 + local_1e0._4_4_,
                                       fVar20 * fVar29 + (float)local_1e0);
                  fStack_240 = fVar36 * fVar29 + fVar19;
                  if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                    local_238 = param_2;
                    pfStack_230 = param_3;
                    local_228 = puVar18;
                    piStack_220 = param_4;
                    FUN_180448bb0(lVar16,puVar15,&local_248);
                  }
                  else {
                    *puVar15 = local_248;
                    puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                    puVar15[2] = param_2;
                    puVar15[3] = param_3;
                    puVar15[4] = puVar18;
                    puVar15[5] = param_4;
                    puVar15[6] = 0;
                    puVar15[7] = 0;
                    puVar15[8] = 0;
                    puVar15[9] = 0;
                    puVar15[10] = 0;
                    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                  }
                  puVar15 = *(undefined8 **)(param_1 + 0xe8);
                  local_218 = 0;
                  uStack_210 = 0;
                  local_208 = 0;
                  uStack_200 = 0;
                  fStack_240 = fVar30 - fVar36 * fVar29;
                  local_248 = CONCAT44(local_1c0._4_4_ - fVar28 * fVar29,
                                       (float)local_190 - fVar20 * fVar29);
                  local_1f8 = 0;
                  uStack_23c = 0xbf800000;
                  if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                    local_238 = param_2;
                    pfStack_230 = param_3;
                    local_228 = puVar18;
                    piStack_220 = param_4;
                    FUN_180448bb0(lVar16,puVar15,&local_248);
                  }
                  else {
                    *puVar15 = local_248;
                    puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                    puVar15[2] = param_2;
                    puVar15[3] = param_3;
                    puVar15[4] = puVar18;
                    puVar15[5] = param_4;
                    puVar15[6] = 0;
                    puVar15[7] = 0;
                    puVar15[8] = 0;
                    puVar15[9] = 0;
                    puVar15[10] = 0;
                    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                  }
                  fVar20 = (float)local_1e0;
                  puVar15 = *(undefined8 **)(param_1 + 0xe8);
                  fVar34 = fVar34 * fVar29;
                  local_1f8 = 0;
                  fVar32 = fVar32 * fVar29;
                  uStack_23c = 0xbf800000;
                  fVar27 = fVar27 * fVar29;
                  local_218 = 0;
                  uStack_210 = 0;
                  local_208 = 0;
                  uStack_200 = 0;
                  fStack_240 = fVar19 - fVar27;
                  local_248 = CONCAT44(fVar25 - fVar32,(float)local_1e0 - fVar34);
                  if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                    local_238 = param_2;
                    pfStack_230 = param_3;
                    local_228 = puVar18;
                    piStack_220 = param_4;
                    FUN_180448bb0(lVar16,puVar15,&local_248);
                  }
                  else {
                    *puVar15 = local_248;
                    puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                    puVar15[2] = param_2;
                    puVar15[3] = param_3;
                    puVar15[4] = puVar18;
                    puVar15[5] = param_4;
                    puVar15[6] = 0;
                    puVar15[7] = 0;
                    puVar15[8] = 0;
                    puVar15[9] = 0;
                    puVar15[10] = 0;
                    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                  }
                  fVar28 = (float)local_190;
                  fVar36 = local_1c0._4_4_;
                  puVar15 = *(undefined8 **)(param_1 + 0xe8);
                  local_218 = 0;
                  uStack_210 = 0;
                  local_208 = 0;
                  uStack_200 = 0;
                  local_1f8 = 0;
                  fStack_240 = fVar30 - fVar27;
                  uStack_23c = 0xbf800000;
                  local_248 = CONCAT44(local_1c0._4_4_ - fVar32,fVar28 - fVar34);
                  if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                    local_238 = param_2;
                    pfStack_230 = param_3;
                    local_228 = puVar18;
                    piStack_220 = param_4;
                    FUN_180448bb0(lVar16,puVar15,&local_248);
                  }
                  else {
                    *puVar15 = local_248;
                    puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                    puVar15[2] = param_2;
                    puVar15[3] = param_3;
                    puVar15[4] = puVar18;
                    puVar15[5] = param_4;
                    puVar15[6] = 0;
                    puVar15[7] = 0;
                    puVar15[8] = 0;
                    puVar15[9] = 0;
                    puVar15[10] = 0;
                    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                  }
                  puVar15 = *(undefined8 **)(param_1 + 0xe8);
                  local_218 = 0;
                  uStack_210 = 0;
                  local_208 = 0;
                  uStack_200 = 0;
                  local_1f8 = 0;
                  fStack_240 = fVar27 + fVar19;
                  local_248 = CONCAT44(fVar32 + fVar25,fVar34 + fVar20);
                  uStack_23c = 0xbf800000;
                  if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                    local_238 = param_2;
                    pfStack_230 = param_3;
                    local_228 = puVar18;
                    piStack_220 = param_4;
                    FUN_180448bb0(lVar16,puVar15,&local_248);
                  }
                  else {
                    *puVar15 = local_248;
                    puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                    puVar15[2] = param_2;
                    puVar15[3] = param_3;
                    puVar15[4] = puVar18;
                    puVar15[5] = param_4;
                    puVar15[6] = 0;
                    puVar15[7] = 0;
                    puVar15[8] = 0;
                    puVar15[9] = 0;
                    puVar15[10] = 0;
                    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                  }
                  puVar15 = *(undefined8 **)(param_1 + 0xe8);
                  fStack_240 = fVar27 + fVar30;
                  local_248 = CONCAT44(fVar32 + fVar36,fVar34 + fVar28);
                  if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
LAB_1804412c8:
                    local_1f8 = 0;
                    uStack_200 = 0;
                    local_208 = 0;
                    uStack_210 = 0;
                    local_218 = 0;
                    uStack_23c = 0xbf800000;
                    local_238 = param_2;
                    pfStack_230 = param_3;
                    local_228 = puVar18;
                    piStack_220 = param_4;
                    FUN_180448bb0(param_1 + 0xe0,puVar15,&local_248);
                  }
                  else {
LAB_18044129e:
                    *puVar15 = local_248;
                    puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                    puVar15[2] = param_2;
                    puVar15[3] = param_3;
                    puVar15[4] = puVar18;
                    puVar15[5] = param_4;
                    puVar15[6] = 0;
                    puVar15[7] = 0;
                    puVar15[8] = 0;
                    puVar15[9] = 0;
LAB_180441c83:
                    local_1f8 = 0;
                    uStack_200 = 0;
                    local_208 = 0;
                    uStack_210 = 0;
                    local_218 = 0;
                    uStack_23c = 0xbf800000;
                    puVar15[10] = 0;
                    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                    local_238 = param_2;
                    pfStack_230 = param_3;
                    local_228 = puVar18;
                    piStack_220 = param_4;
                  }
                }
                else {
                  fVar25 = *pfVar13;
                  fVar21 = *(float *)((longlong)puVar15 + 4);
                  fVar26 = *pfVar17;
                  if (bVar2 < 7) {
                    puVar15 = *(undefined8 **)(param_1 + 0xe8);
                    fVar34 = fVar34 * local_1e8;
                    local_1f8 = 0;
                    fVar32 = fVar32 * local_1e8;
                    uStack_23c = 0xbf800000;
                    fVar27 = fVar27 * local_1e8;
                    local_218 = 0;
                    uStack_210 = 0;
                    local_208 = 0;
                    uStack_200 = 0;
                    fStack_240 = fVar27 + *pfVar14;
                    local_248 = CONCAT44(fVar32 + *(float *)((longlong)puVar7 + 4),fVar34 + *pfVar5)
                    ;
                    if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                      local_238 = param_2;
                      pfStack_230 = param_3;
                      local_228 = puVar18;
                      piStack_220 = param_4;
                      FUN_180448bb0(param_1 + 0xe0,puVar15,&local_248);
                    }
                    else {
                      *puVar15 = local_248;
                      puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                      puVar15[2] = param_2;
                      puVar15[3] = param_3;
                      puVar15[4] = puVar18;
                      puVar15[5] = param_4;
                      puVar15[6] = 0;
                      puVar15[7] = 0;
                      puVar15[8] = 0;
                      puVar15[9] = 0;
                      puVar15[10] = 0;
                      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                    }
                    puVar15 = *(undefined8 **)(param_1 + 0xe8);
                    fStack_240 = fVar26 - fVar27;
                    local_218 = 0;
                    uStack_210 = 0;
                    local_208 = 0;
                    uStack_200 = 0;
                    local_248 = CONCAT44(fVar21 - fVar32,fVar25 - fVar34);
                    local_1f8 = 0;
                    uStack_23c = 0xbf800000;
                    if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                      local_238 = param_2;
                      pfStack_230 = param_3;
                      local_228 = puVar18;
                      piStack_220 = param_4;
                      FUN_180448bb0(param_1 + 0xe0,puVar15,&local_248);
                    }
                    else {
                      *puVar15 = local_248;
                      puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                      puVar15[2] = param_2;
                      puVar15[3] = param_3;
                      puVar15[4] = puVar18;
                      puVar15[5] = param_4;
                      puVar15[6] = 0;
                      puVar15[7] = 0;
                      puVar15[8] = 0;
                      puVar15[9] = 0;
                      puVar15[10] = 0;
                      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                      local_238 = param_2;
                      pfStack_230 = param_3;
                      local_228 = puVar18;
                      piStack_220 = param_4;
                    }
                    fVar34 = local_1a4;
                    fVar32 = DAT_1808ac34c;
                    if (0 < *(int *)(param_2 + 0x14)) {
                      fVar25 = (float)local_f8;
                      fVar27 = local_f8._4_4_;
                      fVar29 = local_184 * DAT_1808ac1f4 + local_198;
                      fVar26 = local_1a4 * local_1d0 + local_108 * local_1cc +
                               (float)local_f8 * local_1ac;
                      fVar21 = DAT_1808ac34c - fVar26 * fVar26;
                      if (fVar21 < 0.0) {
                        fVar21 = (float)FUN_18051af10();
                      }
                      else {
                        fVar21 = SQRT(fVar21);
                      }
                      fVar11 = fStack_164;
                      fVar10 = local_168;
                      fVar9 = local_1a8;
                      if (local_180 < fVar21 * fVar29) {
                        fVar21 = ((float)((uint)fVar26 & _DAT_1808ade90) - DAT_1808ac140) /
                                 DAT_1808ac27c;
                        if (0.0 <= fVar21) {
                          if (fVar32 <= fVar21) {
                            fVar21 = fVar32;
                          }
                          fVar32 = fVar21 * _DAT_1808ac1ac + DAT_1808ac1f4;
                        }
                        else {
                          fVar32 = DAT_1808ac1f4;
                        }
                        fVar32 = fVar29 * fVar32 - local_17c;
                        if (local_17c < fVar32) {
                          puVar15 = *(undefined8 **)(param_1 + 0xe8);
                          local_1f8 = 0;
                          uStack_23c = 0xbf800000;
                          local_218 = 0;
                          uStack_210 = 0;
                          local_208 = 0;
                          uStack_200 = 0;
                          local_248 = CONCAT44(fVar32 * fVar27 + fStack_164,
                                               fVar32 * fVar25 + local_168);
                          fStack_240 = fVar32 * fVar34 + local_1a8;
                          if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                            local_238 = param_2;
                            pfStack_230 = param_3;
                            local_228 = puVar18;
                            piStack_220 = param_4;
                            FUN_180448bb0(param_1 + 0xe0,puVar15,&local_248);
                          }
                          else {
                            *puVar15 = local_248;
                            puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                            puVar15[2] = param_2;
                            puVar15[3] = param_3;
                            puVar15[4] = puVar18;
                            puVar15[5] = param_4;
                            puVar15[6] = 0;
                            puVar15[7] = 0;
                            puVar15[8] = 0;
                            puVar15[9] = 0;
                            puVar15[10] = 0;
                            *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                          }
                          puVar15 = *(undefined8 **)(param_1 + 0xe8);
                          fStack_240 = fVar9 - fVar32 * fVar34;
                          local_248 = CONCAT44(fVar11 - fVar32 * fVar27,fVar10 - fVar32 * fVar25);
                          local_218 = 0;
                          uStack_210 = 0;
                          local_208 = 0;
                          uStack_200 = 0;
                          local_1f8 = 0;
                          uStack_23c = 0xbf800000;
                          if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                            local_238 = param_2;
                            pfStack_230 = param_3;
                            local_228 = puVar18;
                            piStack_220 = param_4;
                            FUN_180448bb0(param_1 + 0xe0,puVar15,&local_248);
                          }
                          else {
                            *puVar15 = local_248;
                            puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                            puVar15[2] = param_2;
                            puVar15[3] = param_3;
                            puVar15[4] = puVar18;
                            puVar15[5] = param_4;
                            puVar15[6] = 0;
                            puVar15[7] = 0;
                            puVar15[8] = 0;
                            puVar15[9] = 0;
                            puVar15[10] = 0;
                            *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                            local_238 = param_2;
                            pfStack_230 = param_3;
                            local_228 = puVar18;
                            piStack_220 = param_4;
                          }
                        }
                      }
                      if (bVar2 == 6) {
                        puVar15 = *(undefined8 **)(param_1 + 0xe8);
                        fVar36 = fVar36 * local_1e8;
                        local_1f8 = 0;
                        fVar20 = fVar20 * local_1e8;
                        uStack_23c = 0xbf800000;
                        fVar28 = fVar28 * local_1e8;
                        local_218 = 0;
                        uStack_210 = 0;
                        local_208 = 0;
                        uStack_200 = 0;
                        local_248 = CONCAT44(local_1c0._4_4_ + fVar28,(float)local_190 + fVar20);
                        fStack_240 = fVar36 + fVar30;
                        if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                          local_238 = param_2;
                          pfStack_230 = param_3;
                          local_228 = puVar18;
                          piStack_220 = param_4;
                          FUN_180448bb0(param_1 + 0xe0,puVar15,&local_248);
                        }
                        else {
                          *puVar15 = local_248;
                          puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                          puVar15[2] = param_2;
                          puVar15[3] = param_3;
                          puVar15[4] = puVar18;
                          puVar15[5] = param_4;
                          puVar15[6] = 0;
                          puVar15[7] = 0;
                          puVar15[8] = 0;
                          puVar15[9] = 0;
                          puVar15[10] = 0;
                          *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                        }
                        puVar15 = *(undefined8 **)(param_1 + 0xe8);
                        local_248 = CONCAT44(local_1e0._4_4_ + fVar28,(float)local_178 + fVar20);
                        fStack_240 = fVar36 + fVar19;
                        if (puVar15 != *(undefined8 **)(param_1 + 0xf0)) goto LAB_18044129e;
                        goto LAB_1804412c8;
                      }
                    }
                  }
                  else if ((byte)(bVar2 - 0xb) < 2) {
                    puVar15 = *(undefined8 **)(param_1 + 0xe8);
                    fVar32 = fVar32 * local_1e8;
                    local_1f8 = 0;
                    fVar27 = fVar27 * local_1e8;
                    uStack_23c = 0xbf800000;
                    fVar34 = fVar34 * local_1e8;
                    fStack_240 = *pfVar14 + fVar27;
                    local_218 = 0;
                    uStack_210 = 0;
                    local_208 = 0;
                    uStack_200 = 0;
                    local_248 = CONCAT44(*(float *)((longlong)puVar7 + 4) + fVar32,fVar34 + *pfVar5)
                    ;
                    if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) {
                      local_238 = param_2;
                      pfStack_230 = param_3;
                      local_228 = puVar18;
                      piStack_220 = param_4;
                      FUN_180448bb0(param_1 + 0xe0,puVar15,&local_248);
                    }
                    else {
                      *puVar15 = local_248;
                      puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                      puVar15[2] = param_2;
                      puVar15[3] = param_3;
                      puVar15[4] = puVar18;
                      puVar15[5] = param_4;
                      puVar15[6] = 0;
                      puVar15[7] = 0;
                      puVar15[8] = 0;
                      puVar15[9] = 0;
                      puVar15[10] = 0;
                      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
                      local_238 = param_2;
                      pfStack_230 = param_3;
                      local_228 = puVar18;
                      piStack_220 = param_4;
                    }
                    local_140 = fVar25 - fVar34;
                    local_13c = fVar21 - fVar32;
                    local_138 = fVar26 - fVar27;
                    FUN_18043fe30(param_1,&local_140,param_2,param_3,puVar18,param_4);
                    if (DAT_1808ace1c < local_194) {
                      puVar15 = *(undefined8 **)(param_1 + 0xe8);
                      pfVar13 = (float *)&local_1c0;
                      if (fVar19 <= fVar30) {
                        pfVar13 = (float *)&local_1e0;
                      }
                      puVar7 = &local_1c0;
                      if (fVar19 <= fVar30) {
                        puVar7 = &local_1e0;
                      }
                      pfVar14 = local_1b8;
                      if (fVar19 <= fVar30) {
                        pfVar14 = local_1d8;
                      }
                      local_248 = CONCAT44(*(float *)((longlong)puVar7 + 4) - fVar28 * local_1c8,
                                           *pfVar13 - fVar20 * local_1c8);
                      fStack_240 = *pfVar14 - fVar36 * local_1c8;
                      if (puVar15 == *(undefined8 **)(param_1 + 0xf0)) goto LAB_1804412c8;
                      *puVar15 = local_248;
                      puVar15[1] = CONCAT44(0xbf800000,fStack_240);
                      puVar15[2] = param_2;
                      puVar15[3] = param_3;
                      puVar15[4] = puVar18;
                      puVar15[5] = param_4;
                      puVar15[6] = 0;
                      puVar15[7] = 0;
                      puVar15[8] = 0;
                      puVar15[9] = 0;
                      goto LAB_180441c83;
                    }
                  }
                  else if ((bVar2 - 0xf & 0xfd) == 0) {
                    local_168 = local_168 - (float)param_4[5];
                    local_128._0_4_ = (float)local_128._0_4_ - (float)param_4[6];
                    fVar36 = local_1a8 - (float)param_4[7];
                    fVar20 = (float)local_128._0_4_ * (float)local_128._0_4_ + local_168 * local_168
                             + fVar36 * fVar36;
                    if (fVar20 < 0.0) {
                      fVar28 = (float)FUN_18051af10();
                      fVar30 = (float)local_128._0_4_;
                    }
                    else {
                      fVar28 = SQRT(fVar20);
                      fVar30 = (float)local_128._0_4_;
                    }
                    uVar35 = SUB84(DAT_1808ac500,0);
                    uVar37 = (undefined4)((ulonglong)DAT_1808ac500 >> 0x20);
                    if ((fVar28 < DAT_1808abf54) || (DAT_1808accfc < fVar28)) {
                      if (fVar20 == 0.0) {
                        fVar36 = 0.0;
                        fVar30 = 0.0;
                        fVar28 = 0.0;
                      }
                      else {
                        dVar4 = (double)local_168;
                        dVar31 = (double)fVar30;
                        dVar33 = (double)fVar36;
                        dVar24 = dVar4 * dVar4 + dVar31 * dVar31 + dVar33 * dVar33;
                        if (dVar24 < 0.0) {
                          dVar24 = (double)FUN_18051ff20();
                        }
                        else {
                          dVar24 = SQRT(dVar24);
                        }
                        uVar35 = SUB84(DAT_1808ac500,0);
                        uVar37 = (undefined4)((ulonglong)DAT_1808ac500 >> 0x20);
                        dVar24 = DAT_1808ac500 / dVar24;
                        fVar36 = (float)(dVar24 * dVar33);
                        fVar30 = (float)(dVar24 * dVar31);
                        fVar28 = (float)(dVar24 * dVar4);
                      }
                    }
                    else {
                      fVar28 = DAT_1808ac34c / fVar28;
                      fVar36 = fVar36 * fVar28;
                      fVar30 = fVar30 * fVar28;
                      fVar28 = local_168 * fVar28;
                    }
                    if (0.0 <= ((float)((uint)fVar34 ^ DAT_1808adec0) * fVar28 - fVar30 * fVar32) -
                               fVar36 * fVar27) {
                      local_14c = (float)local_178 - fVar34 * local_1e8;
                      local_148 = local_1e0._4_4_ - fVar32 * local_1e8;
                      local_144 = fVar19 - fVar27 * local_1e8;
                      pfVar13 = &local_14c;
                    }
                    else {
                      local_154 = fVar32 * local_1e8 + local_1e0._4_4_;
                      local_158 = fVar34 * local_1e8 + (float)local_178;
                      pfVar13 = &local_158;
                      local_150 = fVar27 * local_1e8 + fVar19;
                    }
                    FUN_18043fe30(param_1,pfVar13,param_2,param_3,puVar18,param_4);
                    goto LAB_180441caf;
                  }
                }
              }
            }
          }
          else {
            fVar25 = (float)FUN_180516b00(fVar1 - (float)param_4[6],fVar22 - (float)param_4[5]);
            fVar28 = DAT_1808acbd0;
            fVar20 = (float)param_4[0x12];
            fVar25 = fVar25 * DAT_1808aca94;
            fVar27 = (float)FUN_180519fe0(fVar20 - fVar25);
            if (fVar20 <= fVar25) {
              if (fVar27 <= DAT_1808ace7c) {
                fVar27 = fVar27 + fVar28;
              }
            }
            else if (DAT_1808acb58 <= fVar27) {
              fVar27 = fVar27 - fVar28;
            }
            fVar20 = *(float *)(param_1 + 0x9c);
            fVar25 = (fVar20 - DAT_1808ac1b0) / _DAT_1808ac150;
            fVar28 = DAT_1808aca54;
            if (0.0 <= fVar25) {
              if (fVar32 <= fVar25) {
                fVar25 = fVar32;
              }
              fVar28 = DAT_1808aca54 - fVar25 * DAT_1808ac950;
            }
            if (((float)((uint)fVar27 & _DAT_1808ade90) <= DAT_1808acaf4 - fVar28) ||
               (fVar28 + DAT_1808acaf4 <= (float)((uint)fVar27 & _DAT_1808ade90))) {
LAB_180440385:
              if ((*(longlong *)(param_2 + 8) == 0) ||
                 ((*(byte *)(*(longlong *)(param_2 + 8) + 0x20) & 1) == 0)) {
                fVar28 = (fVar20 - DAT_1808ac1b0) / DAT_1808ac21c;
                fVar25 = DAT_1808ac710;
                if (0.0 <= fVar28) {
                  if (fVar32 <= fVar28) {
                    fVar28 = fVar32;
                  }
                  fVar25 = DAT_1808ac710 - fVar28 * _DAT_1808ac4e0;
                }
              }
              else {
                fVar25 = fVar32;
              }
              fVar28 = fVar20 / DAT_1808ac2cc;
              if (0.0 <= fVar28) {
                if (fVar32 <= fVar28) {
                  fVar28 = fVar32;
                }
              }
              else {
                fVar28 = 0.0;
              }
              uVar12 = 0;
              if (bVar2 < 0x13) {
                uVar12 = (ulonglong)bVar2;
              }
              fVar19 = (float)(iVar3 - (int)local_1b0);
              fVar27 = DAT_1808ac230 - fVar28 * _DAT_1808ac208;
              fVar32 = *(float *)(param_2 + 0x18 + uVar12 * 4);
              if (fVar19 < 0.0) {
                fVar21 = (float)FUN_18051af10();
              }
              else {
                fVar21 = SQRT(fVar19);
              }
              if (fVar20 <= DAT_1808ac2b4) {
                fVar20 = DAT_1808ac21c - fVar20 * DAT_1808ac21c;
              }
              else {
                fVar20 = DAT_1808ac0a8;
              }
              fVar32 = (DAT_1808ac20c - fVar28 * DAT_1808ac140) + fVar20 * fVar19 * fVar25 +
                       fVar21 * fVar27 * fVar32;
              if (fVar32 <= *(float *)((longlong)puVar18 + 0x34) * DAT_1808ac294) {
                bVar6 = true;
                goto LAB_1804404ac;
              }
            }
            else if (bVar2 != 0) {
              if (bVar2 != 6) goto LAB_180440385;
            }
          }
LAB_1804412d2:
          uVar35 = SUB84(DAT_1808ac500,0);
          uVar37 = (undefined4)((ulonglong)DAT_1808ac500 >> 0x20);
        }
      }
LAB_180441caf:
      puVar18 = puVar18 + 9;
    } while (puVar18 != local_118);
  }
  return;
}



/* ===== 180441d50 FUN_180441d50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180441d50(longlong param_1,longlong param_2,undefined8 *param_3,int *param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
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
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined8 *puStack_110;
  longlong local_108;
  int *piStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    return;
  }
  local_168 = param_3[10];
  local_154 = (float)((ulonglong)local_168 >> 0x20);
  local_160 = *(float *)(param_3 + 0xb);
  if ((((float)local_168 == 0.0) && (local_154 == 0.0)) && (local_160 == 0.0)) {
    return;
  }
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 == 0) {
    fVar12 = 0.0;
  }
  else {
    if (*(char *)(lVar4 + 0x1c) != '\0') {
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        iVar8 = *(int *)(param_3 + 2);
      }
      else {
        iVar8 = *(int *)(param_3 + 2) - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x48);
      }
      goto LAB_180441e20;
    }
    fVar12 = *(float *)(lVar4 + 0x3c);
  }
  iVar8 = (int)(fVar12 * DAT_1808acab0 + DAT_1808ac1f4) +
          (*(int *)(param_3 + 2) - *(int *)(param_1 + 0x18));
LAB_180441e20:
  if (((char)param_4[3] == '\0') && (*param_4 <= iVar8)) {
    fVar12 = *(float *)(param_3 + 1);
    local_158 = *(float *)(param_1 + 0x108);
    local_154 = local_158 * local_154;
    local_150 = local_158 * local_160;
    local_158 = local_158 * (float)local_168;
    uVar2 = *param_3;
    fVar19 = (float)uVar2;
    fVar17 = ((float)param_4[0xb] + (float)param_4[8]) * DAT_1808ac1f4 + (float)param_4[5];
    fVar16 = ((float)param_4[0xc] + (float)param_4[9]) * DAT_1808ac1f4 + (float)param_4[6];
    fVar11 = ((float)param_4[0xd] + (float)param_4[10]) * DAT_1808ac1f4 + (float)param_4[7];
    local_178._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    fVar6 = local_178._4_4_;
    fVar13 = (local_150 + fVar12) - fVar12;
    fVar15 = (local_158 + fVar19) - fVar19;
    fVar14 = (local_154 + local_178._4_4_) - local_178._4_4_;
    fVar18 = fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15;
    local_178 = uVar2;
    local_170 = fVar12;
    if (fVar18 < 0.0) {
      fVar10 = (float)FUN_18051af10();
    }
    else {
      fVar10 = SQRT(fVar18);
    }
    if (fVar18 != 0.0) {
      fVar18 = DAT_1808ac34c / fVar10;
      fVar14 = fVar14 * fVar18;
      fVar15 = fVar18 * fVar15;
      fVar13 = fVar13 * fVar18;
    }
    fVar18 = (fVar11 - fVar12) * fVar13 + (fVar16 - fVar6) * fVar14 + (fVar17 - fVar19) * fVar15;
    if ((0.0 <= fVar18) && (fVar18 <= fVar10)) {
      fVar16 = fVar16 - (fVar14 * fVar18 + fVar6);
      fVar11 = fVar11 - (fVar13 * fVar18 + fVar12);
      fVar17 = fVar17 - (fVar15 * fVar18 + fVar19);
      fVar12 = fVar11 * fVar11 + fVar16 * fVar16 + fVar17 * fVar17;
      if (fVar12 < 0.0) {
        fVar12 = (float)FUN_18051af10();
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      if (DAT_1808acb08 <= fVar12) {
        return;
      }
    }
    local_138 = 0;
    local_148 = _DAT_1808adae0;
    uStack_140 = _UNK_1808adae8;
    cVar7 = FUN_18046dd40(&local_148,&local_178,&local_158,&local_168,param_4 + 0x20);
    local_108 = local_138;
    if ((((cVar7 != '\0') && (local_138 != 0)) && (*(byte *)(local_138 + 0x38) < 0x13)) &&
       ((*(uint *)(param_1 + 0xcc) >> (*(byte *)(local_138 + 0x38) & 0x1f) & 1) != 0)) {
      fVar6 = local_148._4_4_;
      fVar15 = (float)uStack_140;
      fVar12 = (float)local_148;
      bVar3 = *(byte *)(local_138 + 0x39);
      uVar9 = (ulonglong)bVar3;
      fVar11 = (local_170 - (float)uStack_140) * (local_170 - (float)uStack_140) +
               (local_178._4_4_ - local_148._4_4_) * (local_178._4_4_ - local_148._4_4_) +
               ((float)local_178 - (float)local_148) * ((float)local_178 - (float)local_148);
      if (fVar11 < 0.0) {
        fVar11 = (float)FUN_18051af10();
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      if (0xb < bVar3) {
        uVar9 = 0;
      }
      pfVar1 = (float *)(param_2 + 0xa0 + uVar9 * 4);
      if (fVar11 < *pfVar1 || fVar11 == *pfVar1) {
        local_128 = fVar12 + (float)local_168;
        fStack_124 = fVar6 + local_168._4_4_;
        fStack_120 = fVar15 + local_160;
        puVar5 = *(undefined8 **)(param_1 + 0xe8);
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_11c = 0xbf800000;
        if (puVar5 == *(undefined8 **)(param_1 + 0xf0)) {
          local_118 = param_2;
          puStack_110 = param_3;
          piStack_100 = param_4;
          FUN_180448bb0(param_1 + 0xe0,puVar5,&local_128);
        }
        else {
          *puVar5 = CONCAT44(fStack_124,local_128);
          puVar5[1] = CONCAT44(0xbf800000,fStack_120);
          puVar5[2] = param_2;
          puVar5[3] = param_3;
          puVar5[4] = local_108;
          puVar5[5] = param_4;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          puVar5[10] = 0;
          *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0x58;
        }
      }
    }
  }
  return;
}



/* ===== 180442270 FUN_180442270 ===== */

void FUN_180442270(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 8);
  LOCK();
  puVar1 = (uint *)(param_1 + 0x40);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar2 < uVar3) {
    FUN_180444d70(lVar4,(ulonglong)uVar2 * 0x58 + *(longlong *)(lVar4 + 0xe0));
    LOCK();
    puVar1 = (uint *)(param_1 + 0x40);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return;
}



/* ===== 1804422e0 FUN_1804422e0 ===== */

void FUN_1804422e0(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 8);
  lVar6 = *plVar5;
  LOCK();
  puVar1 = (uint *)(param_1 + 0x40);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar3 < uVar4) {
    iVar9 = (int)plVar5[1] * uVar3;
    iVar2 = (int)plVar5[1] + iVar9;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar2) {
      iVar2 = *(int *)((longlong)plVar5 + 0xc);
    }
    lVar7 = 0;
    for (; iVar9 < iVar2; iVar9 = iVar9 + 1) {
      lVar10 = (longlong)iVar9 * 0x58 + *(longlong *)(lVar6 + 0xe0);
      lVar11 = lVar7;
      if (0.0 < *(float *)(lVar10 + 0xc) || *(float *)(lVar10 + 0xc) == 0.0) {
        cVar8 = FUN_180442e40(lVar6,lVar10,lVar7,(int)plVar5[2],1);
        lVar11 = lVar10;
        if (cVar8 == '\0') {
          lVar11 = lVar7;
        }
      }
      lVar7 = lVar11;
    }
    *(longlong *)(plVar5[3] + (ulonglong)uVar3 * 8) = lVar7;
    LOCK();
    puVar1 = (uint *)(param_1 + 0x40);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return;
}



/* ===== 1804423e0 FUN_1804423e0 ===== */

ulonglong FUN_1804423e0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Da;
  float fVar15;
  float extraout_XMM0_Da_00;
  undefined8 uVar16;
  double extraout_XMM0_Qa;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  
  piVar6 = (int *)FUN_18043d5a0();
  lVar9 = *param_2;
  if (lVar9 == 0) {
LAB_180442989:
    return (ulonglong)piVar6 & 0xffffffffffffff00;
  }
  if (DAT_181111cd8 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_180011200(lVar9 + (ulonglong)DAT_181111cd8);
  }
  *(float *)(param_2 + 0xd) = (float)iVar5;
  *(undefined4 *)((longlong)param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x88);
  fVar13 = DAT_1808ac27c;
  if (param_2[1] == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *(int *)(param_2[1] + 0x10);
  }
  piVar2 = (int *)param_3[1];
  fVar24 = DAT_1808ac1f4;
  for (piVar6 = (int *)*param_3; DAT_1808ac1f4 = fVar24, piVar6 != piVar2; piVar6 = piVar6 + 3) {
    if ((*piVar6 == iVar5) && (fVar13 < (float)piVar6[1])) {
      *(float *)(param_2 + 0xd) = *(float *)(param_2 + 0xd) - (float)piVar6[1] * (float)piVar6[2];
    }
    fVar24 = DAT_1808ac1f4;
  }
  fVar13 = *(float *)(param_2 + 0xd);
  fVar25 = 0.0;
  if (fVar13 <= 0.0) goto LAB_180442989;
  fVar12 = *(float *)((longlong)param_2 + 0x6c);
  if (fVar12 <= DAT_1808acb08) {
    if (fVar13 < fVar12) {
      *(float *)((longlong)param_2 + 0x6c) = fVar13;
      fVar12 = fVar13;
    }
  }
  else {
    *(float *)((longlong)param_2 + 0x6c) = fVar13;
    fVar12 = fVar13;
    if (*(char *)(param_1 + 0x50) != '\0') {
      fVar12 = (float)FUN_18053ef70(fVar13 * fVar24);
      *(float *)((longlong)param_2 + 0x6c) = fVar12;
    }
  }
  if (DAT_1808acb2c < fVar12) {
    *(undefined4 *)((longlong)param_2 + 0x6c) = 0x43020000;
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  FUN_18043d5a0();
  fVar13 = DAT_1808ac34c;
  if ((lVar8 == 0) || (DAT_181111cf0 == 0)) {
    lVar8 = 0;
LAB_1804425a5:
    uVar23 = 0;
    fVar12 = fVar13;
    if (lVar8 != 0) goto LAB_1804425ae;
  }
  else {
    lVar7 = FUN_18000f3a0((ulonglong)DAT_181111cf0 + 8 + lVar8);
    lVar8 = 0;
    if (lVar7 - 0x10000U < 0x7ffffffeffff) {
      lVar8 = lVar7;
    }
    if ((lVar8 == 0) || (DAT_181111cf4 == 0)) goto LAB_1804425a5;
    uVar16 = FUN_18000f3d0(lVar8 + (ulonglong)DAT_181111cf4);
    uVar23 = (undefined4)((ulonglong)uVar16 >> 0x20);
    fVar12 = (float)uVar16;
LAB_1804425ae:
    if (DAT_181111cf8 != 0) {
      fVar13 = (float)FUN_18000f3d0(lVar8 + (ulonglong)DAT_181111cf8);
    }
  }
  if (DAT_181111cdc == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_180011200(lVar9 + (ulonglong)DAT_181111cdc);
  }
  fVar21 = DAT_1808ac864;
  iVar1 = *(int *)(param_1 + 0x100);
  uVar11 = 0;
  do {
    fVar14 = (float)FUN_18046e550(lVar9,uVar11,CONCAT44(uVar23,fVar12));
    fVar19 = fVar14;
    if (((0 < iVar5) && (uVar11 < 9)) &&
       (((0x13dU >> ((byte)uVar11 & 0x1f) & 1) != 0 ||
        ((((uVar11 == 1 && (DAT_181111ce0 != 0)) &&
          (lVar8 = FUN_18000f3a0(lVar9 + (ulonglong)DAT_181111ce0), lVar8 != 0)) &&
         ((DAT_181111ce4 != 0 &&
          (cVar4 = FUN_180011220((ulonglong)DAT_181111ce4 + lVar8), cVar4 == '\x01')))))))) {
      fVar19 = fVar13 * fVar24 * fVar14;
      fVar17 = (float)iVar5;
      if (fVar17 < (fVar14 - fVar19) * fVar24) {
        fVar19 = fVar14 - (fVar17 + fVar17);
      }
    }
    uVar10 = (ulonglong)uVar11;
    *(float *)((longlong)param_2 + uVar10 * 4 + 0x70) = fVar19;
    *(undefined4 *)((longlong)param_2 + uVar10 * 4 + 0xa0) = 0;
    if (*(float *)((longlong)param_2 + 0x6c) <= fVar19 * (float)iVar1) {
      fVar19 = (float)FUN_18053f160((*(float *)((longlong)param_2 + 0x6c) / fVar19) / (float)iVar1);
      fVar14 = fVar19 / *(float *)(param_1 + 0x114) + fVar21;
      fVar19 = *(float *)(param_1 + 0x108);
      if ((fVar14 <= *(float *)(param_1 + 0x108)) && (fVar19 = 0.0, 0.0 <= fVar14)) {
        fVar19 = fVar14;
      }
      *(float *)((longlong)param_2 + uVar10 * 4 + 0xa0) = fVar19 * fVar19;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0xc);
  if (((DAT_181111ce8 == 0) || (lVar9 = FUN_18000f3a0(lVar9 + (ulonglong)DAT_181111ce8), lVar9 == 0)
      ) || (DAT_181111cec == 0)) {
    dVar18 = DAT_1808ac708;
  }
  else {
    fVar13 = (float)FUN_18000f3d0((ulonglong)DAT_181111cec + lVar9);
    dVar18 = (double)fVar13 * DAT_1808ac518;
  }
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    fVar13 = 0.0;
    fVar24 = 0.0;
    fVar12 = 0.0;
  }
  else {
    fVar13 = *(float *)(lVar9 + 0x24);
    fVar24 = *(float *)(lVar9 + 0x28);
    fVar12 = *(float *)(lVar9 + 0x2c);
  }
  fVar13 = fVar13 - *(float *)(param_1 + 0x6c);
  fVar24 = fVar24 - *(float *)(param_1 + 0x70);
  fVar12 = fVar12 - *(float *)(param_1 + 0x74);
  fVar21 = fVar24 * fVar24 + fVar13 * fVar13 + fVar12 * fVar12;
  if ((float)((double)DAT_180c8a7fc * dVar18) * (float)((double)DAT_180c8a7fc * dVar18) <= fVar21) {
    fVar19 = (float)FUN_180517790();
    fVar14 = (float)FUN_180517200();
    fVar17 = (float)FUN_180517790();
    uVar10 = FUN_180517200();
    if (fVar21 < 0.0) {
      uVar10 = FUN_18051af10();
      fVar15 = extraout_XMM0_Da_00;
    }
    else {
      fVar15 = SQRT(fVar21);
    }
    if ((fVar15 < DAT_1808abf54) || (DAT_1808accfc < fVar15)) {
      if (fVar21 == 0.0) {
        fVar24 = 0.0;
        fVar15 = 0.0;
      }
      else {
        dVar18 = (double)fVar13;
        dVar22 = (double)fVar24;
        dVar3 = (double)fVar12;
        dVar20 = dVar22 * dVar22 + dVar18 * dVar18 + dVar3 * dVar3;
        if (dVar20 < 0.0) {
          uVar10 = FUN_18051ff20();
          dVar20 = extraout_XMM0_Qa;
        }
        else {
          dVar20 = SQRT(dVar20);
        }
        dVar20 = DAT_1808ac500 / dVar20;
        fVar25 = (float)(dVar18 * dVar20);
        fVar24 = (float)(dVar22 * dVar20);
        fVar15 = (float)(dVar3 * dVar20);
      }
    }
    else {
      fVar15 = DAT_1808ac34c / fVar15;
      fVar25 = fVar15 * fVar13;
      fVar24 = fVar15 * fVar24;
      fVar15 = fVar15 * fVar12;
    }
    uVar10 = uVar10 & 0xffffffffffffff00;
    if (DAT_1808ac254 <=
        (extraout_XMM0_Da * fVar19 * fVar24 - fVar15 * fVar17) + extraout_XMM0_Da * fVar14 * fVar25)
    goto LAB_180442954;
  }
  uVar10 = (ulonglong)*(byte *)(param_1 + 0x84);
LAB_180442954:
  *(char *)((longlong)param_2 + 100) = (char)uVar10;
  return CONCAT71((int7)(uVar10 >> 8),1);
}



/* ===== 1804429b0 FUN_1804429b0 ===== */

void FUN_1804429b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  longlong *local_88;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60 [2];
  longlong local_50;
  
  cVar4 = FUN_1804423e0();
  if (cVar4 == '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_18043e840(local_60);
  puVar8 = auStack_a8;
  puVar7 = auStack_a8;
  puVar9 = auStack_a8;
  uVar11 = 0;
  lVar10 = *(longlong *)(param_1 + 0x38);
  if ((*(longlong *)(param_1 + 0x40) - lVar10 >> 5) * -0x5555555555555555 != 0) {
    do {
      lVar10 = uVar11 * 0x60 + lVar10;
      local_88 = local_60;
      FUN_18043ec60(&local_78,param_1,param_2,uVar11);
      plVar3 = local_70;
      for (plVar5 = local_78; plVar5 != plVar3; plVar5 = plVar5 + 1) {
        lVar1 = *plVar5;
        FUN_18043ff00(param_1,param_2,lVar10,lVar1);
        FUN_180441d50(param_1,param_2,lVar10,lVar1);
        if (*(char *)(param_1 + 0x51) != '\0') {
          *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 1 << ((uint)uVar11 & 0x1f);
        }
      }
      if (local_78 != (longlong *)0x0) {
        uVar6 = (local_68 - (longlong)local_78 >> 3) * 8;
        if (uVar6 < 0x1000) {
          plVar5 = local_78;
        }
        else {
          if (0x1f < (ulonglong)((longlong)local_78 + (-8 - local_78[-1]))) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar7 = auStack_a0;
            goto LAB_180442b5f;
          }
          uVar6 = uVar6 + 0x27;
          plVar5 = (longlong *)local_78[-1];
        }
        thunk_FUN_1803d64e0(plVar5,uVar6);
      }
      uVar11 = uVar11 + 1;
      lVar10 = *(longlong *)(param_1 + 0x38);
    } while (uVar11 < (ulonglong)
                      ((*(longlong *)(param_1 + 0x40) - lVar10 >> 5) * -0x5555555555555555));
  }
  if (local_60[0] == 0) {
    return;
  }
  lVar10 = local_60[0];
  if (0xfff < (ulonglong)((local_50 - local_60[0] >> 3) * 8)) {
    lVar10 = *(longlong *)(local_60[0] + -8);
    if ((local_60[0] - lVar10) - 8U < 0x20) goto LAB_180442b69;
LAB_180442b5f:
    lVar10 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar8 = puVar7 + 8;
  }
  puVar9 = puVar8;
LAB_180442b69:
  *(undefined8 *)(puVar9 + -8) = 0x180442b71;
  thunk_FUN_1803d64e0(lVar10);
  return;
}



/* ===== 180442b90 FUN_180442b90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180442b90(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  ulonglong local_b8 [23];
  
  local_b8[0] = DAT_180919500 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x51) == '\0') {
    return false;
  }
  piVar7 = *(int **)(param_2 + 10);
  if (piVar7 == (int *)0x0) {
    return false;
  }
  if ((char)piVar7[3] != '\0') {
    return false;
  }
  pfVar9 = *(float **)(param_2 + 6);
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 4) + 8);
  if (lVar8 == 0) {
    fVar10 = 0.0;
  }
  else {
    if (*(char *)(lVar8 + 0x1c) != '\0') {
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        fVar10 = pfVar9[4];
      }
      else {
        fVar10 = (float)((int)pfVar9[4] - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x48));
      }
      goto LAB_180442c6a;
    }
    fVar10 = *(float *)(lVar8 + 0x3c);
  }
  fVar10 = (float)((int)(fVar10 * DAT_1808acab0 + DAT_1808ac1f4) +
                  ((int)pfVar9[4] - *(int *)(param_1 + 0x18)));
LAB_180442c6a:
  if (*piVar7 <= (int)fVar10) {
    fVar10 = param_2[1];
    fVar14 = param_2[2];
    fVar15 = pfVar9[1];
    fVar1 = pfVar9[2];
    fVar12 = fVar10 - fVar15;
    fVar2 = *param_2;
    fVar13 = fVar14 - fVar1;
    fVar3 = *pfVar9;
    fVar4 = pfVar9[0x15];
    fVar11 = fVar2 - fVar3;
    fVar5 = pfVar9[0x16];
    fVar6 = pfVar9[0x14];
    if (0.0 < fVar13 * fVar5 + fVar12 * fVar4 + fVar11 * fVar6) {
      local_c8 = 0x3f800000;
      local_c0 = fVar2 * fVar2 + fVar10 * fVar10 + fVar14 * fVar14;
      local_c4 = fVar3 * fVar3 + fVar15 * fVar15 + fVar1 * fVar1;
      local_bc = fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13;
      fVar15 = fVar5 * fVar12 - fVar4 * fVar13;
      fVar14 = fVar6 * fVar13 - fVar5 * fVar11;
      fVar10 = fVar4 * fVar11 - fVar6 * fVar12;
      pfVar9 = (float *)FUN_1804e9c00(&local_c8,local_b8);
      return fVar14 * fVar14 + fVar15 * fVar15 + fVar10 * fVar10 <=
             *pfVar9 * _DAT_1808abf64 * (fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    }
  }
  return false;
}



/* ===== 180442e40 FUN_180442e40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180442e40(longlong param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  
  fVar19 = DAT_1808ac34c;
  if (param_2 == (float *)0x0) {
    return false;
  }
  if (param_3 == (float *)0x0) {
    return true;
  }
  lVar12 = 0x34;
  if (param_5 == 0) {
    lVar12 = 0x44;
  }
  fVar21 = *(float *)(lVar12 + (longlong)param_2);
  fVar22 = *(float *)(lVar12 + (longlong)param_3);
  if ((param_2[3] <= *(float *)(*(longlong *)(param_2 + 4) + 0x6c) &&
       *(float *)(*(longlong *)(param_2 + 4) + 0x6c) != param_2[3]) ||
     (fVar21 < *(float *)(param_1 + 0x8c))) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  if ((param_3[3] <= *(float *)(*(longlong *)(param_3 + 4) + 0x6c) &&
       *(float *)(*(longlong *)(param_3 + 4) + 0x6c) != param_3[3]) ||
     (fVar22 < *(float *)(param_1 + 0x8c))) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if (bVar18 != bVar17) {
    return bVar18;
  }
  if ((((bVar18 != false) && (*(char *)(param_1 + 0x51) != '\0')) &&
      (*(char *)(param_1 + 0xa8) != '\0')) && (*(float *)(param_1 + 0xbc) == DAT_1808ac34c)) {
    cVar9 = FUN_180442b90(param_1,param_2);
    cVar10 = FUN_180442b90(param_1);
    if (cVar9 != cVar10) {
      return (bool)cVar9;
    }
  }
  uVar8 = _DAT_1808ade90;
  fVar29 = DAT_1808ac0e8;
  fVar24 = DAT_1808ac064;
  lVar12 = 0x3c;
  if (param_5 == 0) {
    lVar12 = 0x4c;
  }
  fVar27 = (float)((uint)(fVar21 - fVar22) & _DAT_1808ade90);
  fVar25 = *(float *)(lVar12 + (longlong)param_2);
  fVar26 = *(float *)(lVar12 + (longlong)param_3);
  if (param_4 == 1) {
    if (DAT_1808ac064 <= (float)((uint)(fVar25 - fVar26) & _DAT_1808ade90)) {
LAB_180443569:
      bVar18 = fVar25 == fVar26;
      bVar17 = fVar25 < fVar26;
      goto LAB_1804436b7;
    }
    if (DAT_1808ac0e8 <= fVar27) {
LAB_1804436b3:
      bVar18 = fVar21 == fVar22;
      bVar17 = fVar21 < fVar22;
      goto LAB_1804436b7;
    }
LAB_180443019:
    lVar12 = *(longlong *)(param_2 + 6);
    lVar1 = *(longlong *)(param_3 + 6);
    fVar19 = *(float *)(lVar12 + 0x18);
    fVar20 = *(float *)(lVar1 + 0x18);
    if (fVar19 != fVar20) {
      bVar18 = fVar20 == fVar19;
      bVar17 = fVar20 < fVar19;
      goto LAB_1804436b7;
    }
    if ((DAT_1808ac21c < fVar21) && (DAT_1808ac21c < fVar22)) {
      fVar19 = (float)FUN_18053ef70(*(float *)(*(longlong *)(param_2 + 4) + 0x68) / param_2[3]);
      uVar16 = (uint)fVar19;
      if ((int)uVar16 < 1) {
        uVar16 = 1;
      }
      if (6 < uVar16) {
        uVar16 = 6;
      }
      fVar19 = (float)FUN_18053ef70(*(float *)(*(longlong *)(param_3 + 4) + 0x68) / param_3[3]);
      uVar11 = (uint)fVar19;
      if ((int)uVar11 < 1) {
        uVar11 = 1;
      }
      if (6 < uVar11) {
        uVar11 = 6;
      }
      if (uVar16 != uVar11) {
        return uVar16 < uVar11;
      }
    }
    if (DAT_1808ac094 <= fVar27) goto LAB_1804436b3;
    lVar13 = 0x38;
    if (param_5 == 0) {
      lVar13 = 0x48;
    }
    fVar27 = *(float *)(lVar13 + (longlong)param_2);
    fVar19 = *(float *)(lVar13 + (longlong)param_3);
    if ((DAT_1808ac0c0 <= (float)((uint)(fVar27 - fVar19) & uVar8)) &&
       ((DAT_1808ac1b0 < fVar27 || (DAT_1808ac1b0 < fVar19)))) goto LAB_1804433a8;
    if (fVar21 != fVar22) goto LAB_1804436b3;
    fVar22 = 0.0;
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 4) + 8);
    if (lVar13 == 0) {
      fVar20 = 0.0;
LAB_180443468:
      iVar14 = (int)(fVar20 * DAT_1808acab0 + DAT_1808ac1f4) +
               (*(int *)(lVar12 + 0x10) - *(int *)(param_1 + 0x18));
    }
    else {
      if (*(char *)(lVar13 + 0x1c) == '\0') {
        fVar20 = *(float *)(lVar13 + 0x3c);
        goto LAB_180443468;
      }
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        iVar14 = *(int *)(lVar12 + 0x10);
      }
      else {
        iVar14 = *(int *)(lVar12 + 0x10) - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x48);
      }
    }
    piVar2 = *(int **)(param_2 + 10);
    iVar14 = *piVar2 - iVar14;
    lVar13 = *(longlong *)(*(longlong *)(param_3 + 4) + 8);
    if (lVar13 == 0) {
      fVar20 = 0.0;
LAB_1804434c3:
      iVar15 = (int)(fVar20 * DAT_1808acab0 + DAT_1808ac1f4) +
               (*(int *)(lVar1 + 0x10) - *(int *)(param_1 + 0x18));
    }
    else {
      if (*(char *)(lVar13 + 0x1c) == '\0') {
        fVar20 = *(float *)(lVar13 + 0x3c);
        goto LAB_1804434c3;
      }
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        iVar15 = *(int *)(lVar1 + 0x10);
      }
      else {
        iVar15 = *(int *)(lVar1 + 0x10) - *(int *)(*(longlong *)(param_1 + 0xd0) + 0x48);
      }
    }
    piVar3 = *(int **)(param_3 + 10);
    iVar15 = *piVar3 - iVar15;
    if (((0 < iVar14) || (0 < iVar15)) && (iVar14 != iVar15)) {
      return iVar14 < iVar15;
    }
    if ((fVar27 == fVar19) || ((fVar19 <= fVar29 && (fVar27 <= fVar29)))) {
      if (*(char *)(lVar12 + 0x14) != *(char *)(lVar1 + 0x14)) {
        return (bool)*(char *)(lVar12 + 0x14);
      }
      lVar12 = 0x40;
      if (param_5 == 0) {
        lVar12 = 0x50;
      }
      fVar19 = *(float *)(lVar12 + (longlong)param_2);
      fVar29 = *(float *)(lVar12 + (longlong)param_3);
      if ((float)((uint)(fVar19 - fVar29) & uVar8) <= DAT_1808ac540) {
        if (fVar24 <= (float)((uint)(fVar25 - fVar26) & uVar8)) goto LAB_180443569;
        if (fVar24 <= fVar21) {
          pfVar4 = *(float **)(param_2 + 8);
          if (pfVar4 == (float *)0x0) {
            fVar21 = 0.0;
            fVar24 = 0.0;
            fVar25 = 0.0;
          }
          else {
            fVar21 = *pfVar4;
            fVar24 = pfVar4[1];
            fVar25 = pfVar4[2];
          }
          pfVar4 = *(float **)(param_3 + 8);
          if (pfVar4 == (float *)0x0) {
            fVar26 = 0.0;
            fVar27 = 0.0;
          }
          else {
            fVar22 = *pfVar4;
            fVar26 = pfVar4[1];
            fVar27 = pfVar4[2];
          }
        }
        else {
          fVar21 = ((float)piVar2[0xb] + (float)piVar2[8]) * DAT_1808ac1f4 + (float)piVar2[5];
          fVar24 = ((float)piVar2[0xc] + (float)piVar2[9]) * DAT_1808ac1f4 + (float)piVar2[6];
          fVar25 = ((float)piVar2[0xd] + (float)piVar2[10]) * DAT_1808ac1f4 + (float)piVar2[7];
          fVar22 = ((float)piVar3[0xb] + (float)piVar3[8]) * DAT_1808ac1f4 + (float)piVar3[5];
          fVar26 = ((float)piVar3[0xc] + (float)piVar3[9]) * DAT_1808ac1f4 + (float)piVar3[6];
          fVar27 = ((float)piVar3[0xd] + (float)piVar3[10]) * DAT_1808ac1f4 + (float)piVar3[7];
        }
        fVar24 = (param_2[1] - fVar24) * (param_2[1] - fVar24) +
                 (*param_2 - fVar21) * (*param_2 - fVar21) +
                 (param_2[2] - fVar25) * (param_2[2] - fVar25);
        fVar21 = (param_3[1] - fVar26) * (param_3[1] - fVar26) +
                 (*param_3 - fVar22) * (*param_3 - fVar22) +
                 (param_3[2] - fVar27) * (param_3[2] - fVar27);
        if (DAT_1808ac0c0 < (float)((uint)(fVar24 - fVar21) & uVar8)) {
          bVar18 = fVar21 == fVar24;
          bVar17 = fVar21 < fVar24;
          goto LAB_1804436b7;
        }
      }
      bVar18 = fVar19 == fVar29;
      bVar17 = fVar19 < fVar29;
      goto LAB_1804436b7;
    }
  }
  else {
    if (DAT_1808ac0e8 <= fVar27) goto LAB_1804436b3;
    if (param_4 != 2) goto LAB_180443019;
    fVar25 = *param_2 - *(float *)(param_1 + 0x54);
    fVar26 = param_2[1] - *(float *)(param_1 + 0x58);
    fVar27 = param_2[2] - *(float *)(param_1 + 0x5c);
    fVar24 = *param_3 - *(float *)(param_1 + 0x54);
    fVar22 = param_3[1] - *(float *)(param_1 + 0x58);
    fVar21 = param_3[2] - *(float *)(param_1 + 0x5c);
    fVar29 = fVar27 * fVar27 + fVar26 * fVar26 + fVar25 * fVar25;
    if (fVar29 < 0.0) {
      fVar20 = (float)FUN_18051af10(fVar29);
    }
    else {
      fVar20 = SQRT(fVar29);
    }
    dVar7 = DAT_1808ac500;
    fVar28 = 0.0;
    if ((fVar20 < DAT_1808abf54) || (DAT_1808accfc < fVar20)) {
      if (fVar29 == 0.0) {
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar20 = 0.0;
      }
      else {
        dVar5 = (double)fVar25;
        dVar6 = (double)fVar26;
        dVar30 = (double)fVar27;
        dVar23 = dVar6 * dVar6 + dVar5 * dVar5 + dVar30 * dVar30;
        if (dVar23 < 0.0) {
          dVar23 = (double)FUN_18051ff20(dVar23);
        }
        else {
          dVar23 = SQRT(dVar23);
        }
        dVar23 = dVar7 / dVar23;
        fVar26 = (float)(dVar6 * dVar23);
        fVar20 = (float)(dVar30 * dVar23);
        fVar25 = (float)(dVar5 * dVar23);
      }
    }
    else {
      fVar20 = fVar19 / fVar20;
      fVar25 = fVar20 * fVar25;
      fVar26 = fVar20 * fVar26;
      fVar20 = fVar20 * fVar27;
    }
    fVar29 = fVar21 * fVar21 + fVar22 * fVar22 + fVar24 * fVar24;
    if (fVar29 < 0.0) {
      fVar27 = (float)FUN_18051af10(fVar29);
    }
    else {
      fVar27 = SQRT(fVar29);
    }
    if ((fVar27 < DAT_1808abf54) || (DAT_1808accfc < fVar27)) {
      if (fVar29 == 0.0) {
        fVar22 = 0.0;
        fVar19 = 0.0;
      }
      else {
        dVar5 = (double)fVar24;
        dVar6 = (double)fVar22;
        dVar30 = (double)fVar21;
        dVar23 = dVar6 * dVar6 + dVar5 * dVar5 + dVar30 * dVar30;
        if (dVar23 < 0.0) {
          dVar23 = (double)FUN_18051ff20(dVar23);
        }
        else {
          dVar23 = SQRT(dVar23);
        }
        dVar7 = dVar7 / dVar23;
        fVar22 = (float)(dVar7 * dVar6);
        fVar28 = (float)(dVar7 * dVar5);
        fVar19 = (float)(dVar7 * dVar30);
      }
    }
    else {
      fVar19 = fVar19 / fVar27;
      fVar28 = fVar19 * fVar24;
      fVar22 = fVar19 * fVar22;
      fVar19 = fVar19 * fVar21;
    }
    fVar27 = *(float *)(param_1 + 100) * fVar26 + *(float *)(param_1 + 0x68) * fVar20 +
             *(float *)(param_1 + 0x60) * fVar25;
    fVar19 = *(float *)(param_1 + 100) * fVar22 + *(float *)(param_1 + 0x68) * fVar19 +
             *(float *)(param_1 + 0x60) * fVar28;
  }
LAB_1804433a8:
  bVar18 = fVar27 == fVar19;
  bVar17 = fVar27 < fVar19;
LAB_1804436b7:
  return !bVar17 && !bVar18;
}



/* ===== 180443730 FUN_180443730 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180443730(float *param_1,longlong param_2,float *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  float *pfVar10;
  ulonglong *puVar11;
  bool bVar12;
  ulonglong *puVar13;
  float *pfVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auStack_438 [32];
  float local_418;
  int local_414;
  float local_410;
  float local_40c;
  int local_408;
  int local_404;
  int local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  longlong local_3e8;
  float local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  float local_3c0;
  undefined1 local_3b8 [16];
  float *local_3a8;
  longlong local_3a0;
  longlong local_398;
  float *local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  float local_368 [2];
  undefined8 uStack_360;
  float local_358 [2];
  undefined8 uStack_350;
  float local_348 [4];
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float afStack_328 [8];
  float afStack_308 [8];
  float afStack_2e8 [8];
  float afStack_2c8 [8];
  float afStack_2a8 [8];
  float local_288 [48];
  ulonglong local_1c8 [50];
  
  local_1c8[0x1c] = DAT_180919500 ^ (ulonglong)auStack_438;
  lVar15 = *(longlong *)(param_3 + 4);
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  puVar4 = *(undefined8 **)(param_3 + 6);
  if (*(float *)((longlong)puVar4 + 0x1c) == 0.0) {
    fVar26 = param_3[3];
    fVar29 = *(float *)(lVar15 + 0x68);
    *param_1 = 1.0;
    fVar33 = DAT_1808ac34c;
    if (fVar26 < fVar29) {
      fVar29 = 0.0;
    }
    else {
      fVar29 = DAT_1808ac34c;
    }
    lVar15 = *(longlong *)(lVar15 + 8);
    param_1[1] = fVar29;
    if ((((lVar15 == 0) || (*(int *)(lVar15 + 0x44) != 0)) || (*(longlong *)(param_3 + 8) == 0)) ||
       ((*(byte *)(*(longlong *)(param_3 + 8) + 0x39) & 0xfe) != 2)) {
      fVar33 = 0.0;
    }
    param_1[2] = fVar33;
    param_1[3] = fVar26;
  }
  else {
    uVar1 = *puVar4;
    local_3c0 = *(float *)(puVar4 + 1);
    local_3fc = *param_3 - (float)uVar1;
    local_3c8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_3c8._4_4_ = param_3[1] - local_3c8._4_4_;
    fVar29 = param_3[2] - local_3c0;
    fVar26 = local_3c8._4_4_ * local_3c8._4_4_ + local_3fc * local_3fc + fVar29 * fVar29 + 0.0;
    auVar34 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
    fVar33 = auVar34._0_4_;
    if (fVar26 <= 0.0) {
      local_3f8 = 0.0;
      fVar33 = 0.0;
      local_3fc = 0.0;
    }
    else {
      local_3fc = fVar33 * local_3fc;
      local_3f8 = fVar33 * local_3c8._4_4_;
      fVar33 = fVar33 * fVar29;
    }
    if ((DAT_1808abfbc <= (float)((uint)local_3fc & _DAT_1808ade90)) ||
       (DAT_1808abfbc <= (float)((uint)local_3f8 & _DAT_1808ade90))) {
      local_3f4 = local_3fc * 0.0 - local_3f8;
      local_3f0 = fVar33 * DAT_1808acd10 + local_3fc;
      fVar29 = local_3f8 * 0.0 + local_3fc * DAT_1808acd10;
      fVar26 = local_3f0 * local_3f0 + local_3f4 * local_3f4 + fVar29 * fVar29 + 0.0;
      auVar34 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
      local_418 = auVar34._0_4_;
      if (fVar26 <= 0.0) {
        local_3f4 = 0.0;
        local_3f0 = 0.0;
        local_418 = 0.0;
      }
      else {
        local_3f4 = local_418 * local_3f4;
        local_3f0 = local_418 * local_3f0;
        local_418 = local_418 * fVar29;
      }
      local_410 = local_418 * local_3f8 - local_3f0 * fVar33;
      local_40c = local_3f4 * fVar33 - local_418 * local_3fc;
      fVar32 = local_3f0 * local_3fc - local_3f4 * local_3f8;
      fVar29 = local_40c * local_40c + local_410 * local_410 + fVar32 * fVar32 + 0.0;
      auVar34 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
      local_3b8._4_12_ = auVar34._4_12_;
      fVar26 = auVar34._0_4_;
      if (fVar29 <= 0.0) {
        local_410 = 0.0;
        local_40c = 0.0;
        local_3b8 = ZEXT816(0);
      }
      else {
        local_410 = fVar26 * local_410;
        local_40c = fVar26 * local_40c;
        local_3b8._0_4_ = fVar26 * fVar32;
      }
      local_3f4 = 0.0 - local_3f4;
      local_418 = 0.0 - local_418;
      local_3f0 = 0.0 - local_3f0;
      fVar26 = (float)local_3b8._0_4_;
    }
    else {
      local_3f0 = DAT_1808acda0;
      local_410 = (float)((uint)fVar33 ^ DAT_1808adec0);
      local_418 = DAT_1808acd10;
      local_40c = 0.0;
      local_3b8 = ZEXT816(0);
      fVar26 = 0.0;
      local_3f4 = DAT_1808acd10;
    }
    local_398 = puVar4[4];
    if (local_398 != 0) {
      iVar20 = 0;
      local_3d8 = *(longlong *)(param_3 + 10);
      iVar22 = 0;
      local_388 = _DAT_1808ad6a0;
      uStack_380 = _UNK_1808ad6a8;
      fVar29 = *(float *)(param_2 + 0x108);
      local_3e0 = (float)*(int *)(param_2 + 0x100);
      local_404 = 0;
      local_408 = 0;
      local_414 = 0;
      local_400 = 7;
      fVar32 = 0.0;
      local_378 = _DAT_1808ad700;
      uStack_370 = _UNK_1808ad708;
      local_3d0 = lVar15;
      local_3c8 = uVar1;
      local_3a8 = param_3;
      local_3a0 = param_2;
      local_390 = param_1;
      do {
        fVar7 = DAT_1808ac34c;
        fVar6 = DAT_1808ac0d8;
        puVar13 = local_1c8;
        pfVar14 = local_348;
        iVar19 = local_400 * 8;
        local_288[0] = 0.0;
        local_288[1] = 0.0;
        local_288[2] = 0.0;
        local_288[3] = 0.0;
        local_288[4] = 0.0;
        local_288[5] = 0.0;
        local_288[6] = 0.0;
        local_288[7] = 0.0;
        local_288[8] = 0.0;
        local_288[9] = 0.0;
        local_288[10] = 0.0;
        local_288[0xb] = 0.0;
        local_288[0xc] = 0.0;
        local_288[0xd] = 0.0;
        local_288[0xe] = 0.0;
        local_288[0xf] = 0.0;
        local_288[0x10] = 0.0;
        local_288[0x11] = 0.0;
        local_288[0x12] = 0.0;
        local_288[0x13] = 0.0;
        local_288[0x14] = 0.0;
        local_288[0x15] = 0.0;
        local_288[0x16] = 0.0;
        local_288[0x17] = 0.0;
        local_288[0x18] = 0.0;
        local_288[0x19] = 0.0;
        local_288[0x1a] = 0.0;
        local_288[0x1b] = 0.0;
        local_288[0x1c] = 0.0;
        local_288[0x1d] = 0.0;
        local_288[0x1e] = 0.0;
        local_288[0x1f] = 0.0;
        local_288[0x20] = 0.0;
        local_288[0x21] = 0.0;
        local_288[0x22] = 0.0;
        local_288[0x23] = 0.0;
        local_288[0x24] = 0.0;
        local_288[0x25] = 0.0;
        local_288[0x26] = 0.0;
        local_288[0x27] = 0.0;
        local_288[0x28] = 0.0;
        local_288[0x29] = 0.0;
        local_288[0x2a] = 0.0;
        local_288[0x2b] = 0.0;
        local_288[0x2c] = 0.0;
        local_288[0x2d] = 0.0;
        local_288[0x2e] = 0.0;
        local_288[0x2f] = 0.0;
        lVar17 = 0;
        do {
          fVar27 = *(float *)(local_398 + (longlong)((int)local_368[lVar17 + -8] + iVar19) * 8);
          fVar31 = *(float *)(local_398 + 4 + (longlong)((int)local_368[lVar17 + -8] + iVar19) * 8);
          fVar30 = fVar27 * local_3f4 + local_3fc + fVar31 * local_410;
          fVar28 = fVar27 * local_3f0 + local_3f8 + fVar31 * local_40c;
          fVar31 = fVar27 * local_418 + fVar33 + fVar31 * fVar26;
          fVar27 = fVar28 * fVar28 + fVar30 * fVar30 + fVar31 * fVar31;
          auVar34 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
          fVar27 = auVar34._0_4_;
          local_288[lVar17 * 3] = fVar27 * fVar30;
          local_288[lVar17 * 3 + 1] = fVar27 * fVar28;
          local_288[lVar17 * 3 + 2] = fVar27 * fVar31;
          local_288[lVar17 * 3 + 0x18] = fVar29 * local_288[lVar17 * 3];
          local_288[lVar17 * 3 + 0x19] = fVar27 * fVar28 * fVar29;
          local_288[lVar17 * 3 + 0x1a] = fVar27 * fVar31 * fVar29;
          fVar27 = *(float *)(local_398 + (longlong)((int)local_368[lVar17 + -7] + iVar19) * 8);
          fVar31 = *(float *)(local_398 + 4 + (longlong)((int)local_368[lVar17 + -7] + iVar19) * 8);
          fVar30 = fVar27 * local_3f4 + local_3fc + fVar31 * local_410;
          fVar28 = fVar27 * local_3f0 + local_3f8 + fVar31 * local_40c;
          fVar31 = fVar27 * local_418 + fVar33 + fVar31 * fVar26;
          fVar27 = fVar28 * fVar28 + fVar30 * fVar30 + fVar31 * fVar31;
          auVar34 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
          fVar27 = auVar34._0_4_;
          local_288[lVar17 * 3 + 3] = fVar27 * fVar30;
          local_288[lVar17 * 3 + 4] = fVar27 * fVar28;
          local_288[lVar17 * 3 + 5] = fVar27 * fVar31;
          local_288[lVar17 * 3 + 0x1b] = fVar29 * local_288[lVar17 * 3 + 3];
          local_288[lVar17 * 3 + 0x1c] = fVar27 * fVar28 * fVar29;
          local_288[lVar17 * 3 + 0x1d] = fVar27 * fVar31 * fVar29;
          fVar27 = *(float *)(local_398 + (longlong)((int)local_368[lVar17 + -6] + iVar19) * 8);
          fVar31 = *(float *)(local_398 + 4 + (longlong)((int)local_368[lVar17 + -6] + iVar19) * 8);
          fVar30 = fVar27 * local_3f4 + local_3fc + fVar31 * local_410;
          fVar28 = fVar27 * local_3f0 + local_3f8 + fVar31 * local_40c;
          fVar31 = fVar27 * local_418 + fVar33 + fVar31 * fVar26;
          fVar27 = fVar28 * fVar28 + fVar30 * fVar30 + fVar31 * fVar31;
          auVar34 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
          fVar27 = auVar34._0_4_;
          local_288[lVar17 * 3 + 6] = fVar27 * fVar30;
          local_288[lVar17 * 3 + 7] = fVar27 * fVar28;
          local_288[lVar17 * 3 + 8] = fVar27 * fVar31;
          local_288[lVar17 * 3 + 0x1e] = fVar29 * local_288[lVar17 * 3 + 6];
          local_288[lVar17 * 3 + 0x1f] = fVar27 * fVar28 * fVar29;
          local_288[lVar17 * 3 + 0x20] = fVar27 * fVar31 * fVar29;
          fVar27 = *(float *)(local_398 + (longlong)((int)local_368[lVar17 + -5] + iVar19) * 8);
          fVar31 = *(float *)(local_398 + 4 + (longlong)((int)local_368[lVar17 + -5] + iVar19) * 8);
          fVar30 = fVar27 * local_3f4 + local_3fc + fVar31 * local_410;
          fVar28 = fVar27 * local_3f0 + local_3f8 + fVar31 * local_40c;
          fVar31 = fVar27 * local_418 + fVar33 + fVar31 * fVar26;
          lVar18 = lVar17 + 4;
          fVar27 = fVar28 * fVar28 + fVar30 * fVar30 + fVar31 * fVar31;
          auVar34 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
          fVar27 = auVar34._0_4_;
          local_288[lVar17 * 3 + 9] = fVar27 * fVar30;
          local_288[lVar17 * 3 + 10] = fVar27 * fVar28;
          local_288[lVar17 * 3 + 0xb] = fVar27 * fVar31;
          local_288[lVar17 * 3 + 0x21] = fVar29 * local_288[lVar17 * 3 + 9];
          local_288[lVar17 * 3 + 0x22] = fVar27 * fVar28 * fVar29;
          local_288[lVar17 * 3 + 0x23] = fVar27 * fVar31 * fVar29;
          lVar17 = lVar18;
        } while (lVar18 != 8);
        pfVar10 = local_368;
        do {
          if (pfVar10 <= pfVar14) {
            *(undefined8 *)pfVar10 = _DAT_1808adc30;
            *(undefined8 *)(pfVar10 + 2) = _UNK_1808adc38;
            *(undefined8 *)(pfVar10 + 4) = _DAT_1808adc30;
            *(undefined8 *)(pfVar10 + 6) = _UNK_1808adc38;
          }
          pfVar10 = pfVar10 + 8;
          pfVar14 = pfVar14 + 8;
        } while (pfVar10 != local_288);
        puVar11 = local_1c8;
        do {
          puVar13 = puVar13 + 4;
          if (puVar11 <= puVar13) {
            *puVar11 = _DAT_1808adf90;
            puVar11[1] = _UNK_1808adf98;
            puVar11[2] = _DAT_1808adf90;
            puVar11[3] = _UNK_1808adf98;
          }
          puVar11 = puVar11 + 4;
        } while (puVar11 != local_1c8 + 0x1c);
        local_3e8 = *(longlong *)(local_3d8 + 0x80);
        uVar24 = (*(longlong *)(local_3d8 + 0x88) - local_3e8 >> 3) * -0x71c71c71c71c71c7;
        if (uVar24 != 0) {
          uVar25 = 0;
          uVar21 = 0;
          do {
            bVar2 = *(byte *)(local_3e8 + 0x3a + uVar25 * 0x48);
            uVar23 = (ulonglong)bVar2;
            if (6 < bVar2) break;
            if ((1 < bVar2) && (uVar16 = (uint)bVar2, uVar16 != uVar21)) {
              if (bVar2 == 2) {
                bVar12 = local_330 < fVar7 &&
                         (local_334 < fVar7 &&
                         (local_338 < fVar7 &&
                         (local_348[3] < fVar7 &&
                         (local_348[2] < fVar7 && (local_348[1] < fVar7 && local_348[0] < fVar7)))))
                ;
                if (local_32c < fVar7) {
LAB_1804444db:
                  if (bVar12) break;
                }
              }
              else {
                bVar5 = false;
                iVar22 = 0;
                bVar12 = false;
                if (3 < bVar2) {
                  do {
                    lVar15 = (longlong)iVar22;
                    if (local_368[lVar15 * 8] <= fVar7 && fVar7 != local_368[lVar15 * 8]) {
                      bVar5 = true;
                    }
                    if (local_348[lVar15 * 8] <= fVar7 && fVar7 != local_348[lVar15 * 8]) {
                      bVar5 = true;
                    }
                    if (local_348[lVar15 * 8 + 8] <= fVar7 && fVar7 != local_348[lVar15 * 8 + 8]) {
                      bVar5 = true;
                    }
                    if (local_348[lVar15 * 8 + 0x10] <= fVar7 &&
                        fVar7 != local_348[lVar15 * 8 + 0x10]) {
                      bVar5 = true;
                    }
                    iVar22 = iVar22 + 4;
                    bVar12 = bVar5;
                  } while (iVar22 < (int)(bVar2 - 3));
                }
                for (; iVar22 < (int)uVar16; iVar22 = iVar22 + 1) {
                  if (local_368[(longlong)iVar22 * 8] <= fVar7 &&
                      fVar7 != local_368[(longlong)iVar22 * 8]) {
                    bVar12 = true;
                  }
                }
                if (bVar12) {
                  bVar5 = false;
                  iVar22 = 0;
                  bVar12 = false;
                  if (3 < bVar2) {
                    do {
                      lVar15 = (longlong)iVar22;
                      if (local_368[lVar15 * 8 + 1] <= fVar7 && fVar7 != local_368[lVar15 * 8 + 1])
                      {
                        bVar5 = true;
                      }
                      if (local_348[lVar15 * 8 + 1] <= fVar7 && fVar7 != local_348[lVar15 * 8 + 1])
                      {
                        bVar5 = true;
                      }
                      if (local_348[lVar15 * 8 + 9] <= fVar7 && fVar7 != local_348[lVar15 * 8 + 9])
                      {
                        bVar5 = true;
                      }
                      if (local_348[lVar15 * 8 + 0x11] <= fVar7 &&
                          fVar7 != local_348[lVar15 * 8 + 0x11]) {
                        bVar5 = true;
                      }
                      iVar22 = iVar22 + 4;
                      bVar12 = bVar5;
                    } while (iVar22 < (int)(bVar2 - 3));
                  }
                  for (; iVar22 < (int)uVar16; iVar22 = iVar22 + 1) {
                    if (local_368[(longlong)iVar22 * 8 + 1] <= fVar7 &&
                        fVar7 != local_368[(longlong)iVar22 * 8 + 1]) {
                      bVar12 = true;
                    }
                  }
                  if (bVar12) {
                    bVar5 = false;
                    iVar22 = 0;
                    bVar12 = false;
                    if (3 < bVar2) {
                      do {
                        lVar15 = (longlong)iVar22;
                        if (local_368[lVar15 * 8 + 2] <= fVar7 && fVar7 != local_368[lVar15 * 8 + 2]
                           ) {
                          bVar5 = true;
                        }
                        if (local_348[lVar15 * 8 + 2] <= fVar7 && fVar7 != local_348[lVar15 * 8 + 2]
                           ) {
                          bVar5 = true;
                        }
                        if (local_348[lVar15 * 8 + 10] <= fVar7 &&
                            fVar7 != local_348[lVar15 * 8 + 10]) {
                          bVar5 = true;
                        }
                        if (local_348[lVar15 * 8 + 0x12] <= fVar7 &&
                            fVar7 != local_348[lVar15 * 8 + 0x12]) {
                          bVar5 = true;
                        }
                        iVar22 = iVar22 + 4;
                        bVar12 = bVar5;
                      } while (iVar22 < (int)(bVar2 - 3));
                    }
                    for (; iVar22 < (int)uVar16; iVar22 = iVar22 + 1) {
                      if (local_368[(longlong)iVar22 * 8 + 2] <= fVar7 &&
                          fVar7 != local_368[(longlong)iVar22 * 8 + 2]) {
                        bVar12 = true;
                      }
                    }
                    if (bVar12) {
                      bVar5 = false;
                      iVar22 = 0;
                      bVar12 = false;
                      if (3 < bVar2) {
                        do {
                          lVar15 = (longlong)iVar22;
                          if (local_358[lVar15 * 8 + -1] <= fVar7 &&
                              fVar7 != local_358[lVar15 * 8 + -1]) {
                            bVar5 = true;
                          }
                          if (local_348[lVar15 * 8 + 3] <= fVar7 &&
                              fVar7 != local_348[lVar15 * 8 + 3]) {
                            bVar5 = true;
                          }
                          if (local_348[lVar15 * 8 + 0xb] <= fVar7 &&
                              fVar7 != local_348[lVar15 * 8 + 0xb]) {
                            bVar5 = true;
                          }
                          if (local_348[lVar15 * 8 + 0x13] <= fVar7 &&
                              fVar7 != local_348[lVar15 * 8 + 0x13]) {
                            bVar5 = true;
                          }
                          iVar22 = iVar22 + 4;
                          bVar12 = bVar5;
                        } while (iVar22 < (int)(bVar2 - 3));
                      }
                      uVar21 = (uint)bVar2;
                      if (iVar22 < (int)uVar16) {
                        do {
                          if (local_358[(longlong)iVar22 * 8 + -1] <= fVar7 &&
                              fVar7 != local_358[(longlong)iVar22 * 8 + -1]) {
                            bVar12 = true;
                          }
                          iVar22 = iVar22 + 1;
                        } while (iVar22 < (int)uVar21);
                      }
                      if (bVar12) {
                        bVar5 = false;
                        iVar22 = 0;
                        bVar12 = false;
                        if (3 < bVar2) {
                          do {
                            lVar15 = (longlong)iVar22;
                            if (local_358[lVar15 * 8] <= fVar7 && fVar7 != local_358[lVar15 * 8]) {
                              bVar5 = true;
                            }
                            if (local_348[lVar15 * 8 + 4] <= fVar7 &&
                                fVar7 != local_348[lVar15 * 8 + 4]) {
                              bVar5 = true;
                            }
                            if (local_348[lVar15 * 8 + 0xc] <= fVar7 &&
                                fVar7 != local_348[lVar15 * 8 + 0xc]) {
                              bVar5 = true;
                            }
                            if (local_348[lVar15 * 8 + 0x14] <= fVar7 &&
                                fVar7 != local_348[lVar15 * 8 + 0x14]) {
                              bVar5 = true;
                            }
                            iVar22 = iVar22 + 4;
                            bVar12 = bVar5;
                          } while (iVar22 < (int)(bVar2 - 3));
                        }
                        for (; iVar22 < (int)uVar21; iVar22 = iVar22 + 1) {
                          if (local_358[(longlong)iVar22 * 8] <= fVar7 &&
                              fVar7 != local_358[(longlong)iVar22 * 8]) {
                            bVar12 = true;
                          }
                        }
                        if (bVar12) {
                          bVar5 = false;
                          iVar22 = 0;
                          bVar12 = false;
                          if (3 < bVar2) {
                            do {
                              lVar15 = (longlong)iVar22;
                              if (local_358[lVar15 * 8 + 1] <= fVar7 &&
                                  fVar7 != local_358[lVar15 * 8 + 1]) {
                                bVar5 = true;
                              }
                              if (local_348[lVar15 * 8 + 5] <= fVar7 &&
                                  fVar7 != local_348[lVar15 * 8 + 5]) {
                                bVar5 = true;
                              }
                              if (local_348[lVar15 * 8 + 0xd] <= fVar7 &&
                                  fVar7 != local_348[lVar15 * 8 + 0xd]) {
                                bVar5 = true;
                              }
                              if (local_348[lVar15 * 8 + 0x15] <= fVar7 &&
                                  fVar7 != local_348[lVar15 * 8 + 0x15]) {
                                bVar5 = true;
                              }
                              iVar22 = iVar22 + 4;
                              bVar12 = bVar5;
                            } while (iVar22 < (int)(bVar2 - 3));
                          }
                          for (; iVar22 < (int)uVar21; iVar22 = iVar22 + 1) {
                            if (local_358[(longlong)iVar22 * 8 + 1] <= fVar7 &&
                                fVar7 != local_358[(longlong)iVar22 * 8 + 1]) {
                              bVar12 = true;
                            }
                          }
                          if (bVar12) {
                            bVar12 = false;
                            iVar22 = 0;
                            if (3 < bVar2) {
                              do {
                                lVar15 = (longlong)iVar22;
                                if (local_358[lVar15 * 8 + 2] <= fVar7 &&
                                    fVar7 != local_358[lVar15 * 8 + 2]) {
                                  bVar12 = true;
                                }
                                if (local_348[lVar15 * 8 + 6] <= fVar7 &&
                                    fVar7 != local_348[lVar15 * 8 + 6]) {
                                  bVar12 = true;
                                }
                                if (local_348[lVar15 * 8 + 0xe] <= fVar7 &&
                                    fVar7 != local_348[lVar15 * 8 + 0xe]) {
                                  bVar12 = true;
                                }
                                if (local_348[lVar15 * 8 + 0x16] <= fVar7 &&
                                    fVar7 != local_348[lVar15 * 8 + 0x16]) {
                                  bVar12 = true;
                                }
                                iVar22 = iVar22 + 4;
                              } while (iVar22 < (int)(bVar2 - 3));
                            }
                            for (; iVar22 < (int)uVar21; iVar22 = iVar22 + 1) {
                              if (local_358[(longlong)iVar22 * 8 + 2] <= fVar7 &&
                                  fVar7 != local_358[(longlong)iVar22 * 8 + 2]) {
                                bVar12 = true;
                              }
                            }
                            if (bVar12) {
                              bVar12 = false;
                              iVar22 = 0;
                              if (3 < bVar2) {
                                do {
                                  lVar15 = (longlong)iVar22;
                                  if (local_348[lVar15 * 8 + -1] <= fVar7 &&
                                      fVar7 != local_348[lVar15 * 8 + -1]) {
                                    bVar12 = true;
                                  }
                                  if (local_348[lVar15 * 8 + 7] <= fVar7 &&
                                      fVar7 != local_348[lVar15 * 8 + 7]) {
                                    bVar12 = true;
                                  }
                                  if (local_348[lVar15 * 8 + 0xf] <= fVar7 &&
                                      fVar7 != local_348[lVar15 * 8 + 0xf]) {
                                    bVar12 = true;
                                  }
                                  if (local_348[lVar15 * 8 + 0x17] <= fVar7 &&
                                      fVar7 != local_348[lVar15 * 8 + 0x17]) {
                                    bVar12 = true;
                                  }
                                  iVar22 = iVar22 + 4;
                                } while (iVar22 < (int)(bVar2 - 3));
                              }
                              if (iVar22 < (int)uVar21) {
                                do {
                                  if (local_348[(longlong)iVar22 * 8 + -1] <= fVar7 &&
                                      fVar7 != local_348[(longlong)iVar22 * 8 + -1]) {
                                    bVar12 = true;
                                  }
                                  iVar22 = iVar22 + 1;
                                } while (iVar22 < (int)(uint)bVar2);
                              }
                              goto LAB_1804444db;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar15 = 0;
            do {
              fVar26 = (float)FUN_18043e2f0(&local_3c8,local_288 + lVar15 * 3);
              if ((fVar26 <= local_368[uVar23 * 8 + lVar15]) && (fVar26 < fVar7)) {
                local_368[uVar23 * 8 + lVar15] = fVar26;
                *(int *)((longlong)local_1c8 + (uVar23 * 8 + lVar15) * 4) = (int)uVar25;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 != 8);
            uVar25 = uVar25 + 1;
            uVar21 = (uint)bVar2;
          } while (uVar25 < uVar24);
          lVar15 = local_3d0;
          iVar20 = local_404;
          iVar22 = local_408;
        }
        fVar26 = local_3e0;
        uVar21 = 0;
        iVar19 = 0;
        uVar16 = 0;
        lVar17 = 0;
        bVar12 = true;
        fVar27 = 0.0;
        do {
          fVar31 = local_368[lVar17];
          if (((local_348[lVar17] < fVar31) || (local_348[lVar17 + 8] < fVar31)) ||
             (fVar7 <= fVar31)) {
            lVar18 = 1;
            if ((((local_348[lVar17] <= fVar7 && fVar7 != local_348[lVar17]) ||
                 (lVar18 = 2, local_348[lVar17 + 8] <= fVar7 && fVar7 != local_348[lVar17 + 8])) ||
                ((lVar18 = 3, local_348[lVar17 + 0x10] <= fVar7 && fVar7 != local_348[lVar17 + 0x10]
                 || ((lVar18 = 4,
                     local_348[lVar17 + 0x18] <= fVar7 && fVar7 != local_348[lVar17 + 0x18] ||
                     (lVar18 = 5, afStack_2c8[lVar17] <= fVar7 && fVar7 != afStack_2c8[lVar17]))))))
               || (lVar18 = 6, afStack_2a8[lVar17] <= fVar7 && fVar7 != afStack_2a8[lVar17]))
            goto LAB_180444604;
LAB_1804446f4:
            bVar12 = false;
            fVar31 = 0.0;
          }
          else {
            lVar18 = 0;
LAB_180444604:
            lVar18 = lVar17 + lVar18 * 8;
            iVar3 = *(int *)((longlong)local_1c8 + lVar18 * 4);
            if (iVar3 < 0) goto LAB_1804446f4;
            lVar15 = *(longlong *)(local_3d8 + 0x80);
            fVar31 = local_3a8[0xc];
            fVar28 = (float)FUN_180502150(fVar29 * local_368[lVar18] * *(float *)(local_3a0 + 0x114)
                                         );
            bVar2 = *(byte *)(lVar15 + 0x39 + (longlong)iVar3 * 0x48);
            uVar24 = (ulonglong)bVar2;
            if (0xb < bVar2) {
              uVar24 = 0;
            }
            fVar31 = fVar28 * fVar26 * fVar31 * *(float *)(local_3d0 + 0x70 + uVar24 * 4);
            fVar32 = fVar32 + fVar31;
            iVar22 = local_408 + 1;
            uVar9 = uVar21 + 1;
            if (fVar31 < *(float *)(local_3d0 + 0x68) || fVar31 == *(float *)(local_3d0 + 0x68)) {
              iVar22 = local_408;
              uVar9 = uVar21;
            }
            uVar21 = uVar9;
            iVar20 = local_414 + 1;
            iVar3 = iVar19 + 1;
            if ((bVar2 & 0xfe) != 2) {
              iVar20 = local_414;
              iVar3 = iVar19;
            }
            iVar19 = iVar3;
            bVar5 = fVar31 < *(float *)(local_3d0 + 0x6c);
            local_404 = (local_404 + 1) - (uint)bVar5;
            bVar8 = false;
            if (!bVar5) {
              bVar8 = bVar12;
            }
            bVar12 = bVar8;
            lVar15 = local_3d0;
            local_414 = iVar20;
            local_408 = iVar22;
            iVar20 = local_404;
            if (uVar16 < 7) {
              fVar27 = fVar27 + fVar31 * fVar6;
            }
          }
          fVar28 = DAT_1808ac00c;
          uVar16 = uVar16 + 1;
          lVar17 = lVar17 + 1;
        } while ((int)uVar16 < 8);
        if ((bVar12) && ((uVar21 & 0xfffffff7) == 0)) {
          iVar20 = iVar20 + local_400 * 8;
          if (uVar21 == 8) {
            iVar22 = iVar22 + local_400 * 8;
          }
          if (iVar19 == 8) {
            local_414 = local_414 + local_400 * 8;
          }
          fVar32 = fVar32 + (fVar31 * fVar6 + fVar27) * (float)local_400 * DAT_1808ac838;
LAB_18044478d:
          lVar15 = *(longlong *)(lVar15 + 8);
          *local_390 = (float)iVar20 * DAT_1808ac00c;
          local_390[1] = (float)iVar22 * fVar28;
          if ((lVar15 == 0) || (*(int *)(lVar15 + 0x44) != 0)) {
            local_414 = 0;
          }
          local_390[3] = fVar32 * fVar28;
          local_390[2] = (float)local_414 * fVar28;
          return local_390;
        }
        local_400 = local_400 + -1;
        if (local_400 < 0) goto LAB_18044478d;
        fVar26 = (float)local_3b8._0_4_;
      } while( true );
    }
  }
  return param_1;
}



/* ===== 1804448a0 FUN_1804448a0 ===== */

float * FUN_1804448a0(float *param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float local_res8;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  ulonglong local_318;
  ulonglong uStack_310;
  float local_308 [64];
  undefined1 local_208 [40];
  undefined1 local_1e0 [440];
  
  lVar15 = *(longlong *)(param_3 + 0x18);
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_res8 = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  fVar1 = *(float *)(lVar15 + 0x1c);
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (fVar1 == 0.0) {
    fVar1 = *(float *)(param_3 + 0xc);
    fVar18 = *(float *)(lVar2 + 0x68);
    *param_1 = 1.0;
    fVar17 = DAT_1808ac34c;
    if (fVar1 < fVar18) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = DAT_1808ac34c;
    }
    lVar15 = *(longlong *)(lVar2 + 8);
    param_1[1] = fVar18;
    if ((((lVar15 == 0) || (*(int *)(lVar15 + 0x44) != 0)) || (*(longlong *)(param_3 + 0x20) == 0))
       || ((*(byte *)(*(longlong *)(param_3 + 0x20) + 0x39) & 0xfe) != 2)) {
      fVar17 = 0.0;
    }
    param_1[2] = fVar17;
    param_1[3] = fVar1;
  }
  else if (*(longlong *)(lVar15 + 0x20) != 0) {
    puVar9 = (undefined8 *)FUN_18043d780(local_208,param_3,DAT_1808ac34c);
    local_348 = *puVar9;
    uStack_340 = puVar9[1];
    local_338 = *(undefined4 *)(puVar9 + 2);
    uStack_334 = *(undefined4 *)((longlong)puVar9 + 0x14);
    uStack_330 = *(undefined4 *)(puVar9 + 3);
    uStack_32c = *(undefined4 *)((longlong)puVar9 + 0x1c);
    local_328 = *(undefined4 *)(puVar9 + 4);
    puVar10 = (ulonglong *)
              FUN_18043e0e0(local_1e0,param_2,param_3,&local_348,*(undefined8 *)(lVar15 + 0x20));
    iVar6 = DAT_1809194c8;
    fVar1 = DAT_1808ac00c;
    lVar15 = 2;
    puVar7 = &local_318;
    do {
      puVar14 = puVar7;
      puVar11 = puVar10;
      uVar12 = puVar11[1];
      uVar3 = puVar11[2];
      uVar4 = puVar11[3];
      *puVar14 = *puVar11;
      puVar14[1] = uVar12;
      uVar12 = puVar11[4];
      uVar5 = puVar11[5];
      puVar14[2] = uVar3;
      puVar14[3] = uVar4;
      uVar3 = puVar11[6];
      uVar4 = puVar11[7];
      puVar14[4] = uVar12;
      puVar14[5] = uVar5;
      uVar12 = puVar11[8];
      uVar5 = puVar11[9];
      puVar14[6] = uVar3;
      puVar14[7] = uVar4;
      uVar3 = puVar11[10];
      uVar4 = puVar11[0xb];
      puVar14[8] = uVar12;
      puVar14[9] = uVar5;
      uVar12 = puVar11[0xc];
      uVar5 = puVar11[0xd];
      puVar14[10] = uVar3;
      puVar14[0xb] = uVar4;
      uVar3 = puVar11[0xe];
      uVar4 = puVar11[0xf];
      puVar14[0xc] = uVar12;
      puVar14[0xd] = uVar5;
      puVar14[0xe] = uVar3;
      puVar14[0xf] = uVar4;
      lVar15 = lVar15 + -1;
      puVar10 = puVar11 + 0x10;
      puVar7 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar12 = puVar11[0x11];
    iVar16 = 0;
    lVar15 = 0;
    puVar14[0x10] = puVar11[0x10];
    puVar14[0x11] = uVar12;
    fVar18 = *(float *)(lVar2 + 0x68);
    do {
      iVar8 = iVar16 + 1;
      if (local_308[lVar15] < fVar18) {
        iVar8 = iVar16;
      }
      iVar16 = iVar8 + 1;
      if (local_308[lVar15 + 1] < fVar18) {
        iVar16 = iVar8;
      }
      iVar8 = iVar16 + 1;
      if (local_308[lVar15 + 2] < fVar18) {
        iVar8 = iVar16;
      }
      iVar16 = iVar8 + 1;
      if (local_308[lVar15 + 3] < fVar18) {
        iVar16 = iVar8;
      }
      iVar8 = iVar16 + 1;
      if (local_308[lVar15 + 4] < fVar18) {
        iVar8 = iVar16;
      }
      iVar16 = iVar8 + 1;
      if (local_308[lVar15 + 5] < fVar18) {
        iVar16 = iVar8;
      }
      iVar8 = iVar16 + 1;
      if (local_308[lVar15 + 6] < fVar18) {
        iVar8 = iVar16;
      }
      iVar16 = iVar8 + 1;
      if (local_308[lVar15 + 7] < fVar18) {
        iVar16 = iVar8;
      }
      iVar8 = iVar16 + 1;
      if (local_308[lVar15 + 8] < fVar18) {
        iVar8 = iVar16;
      }
      iVar16 = iVar8 + 1;
      if (local_308[lVar15 + 9] < fVar18) {
        iVar16 = iVar8;
      }
      iVar8 = iVar16 + 1;
      if (local_308[lVar15 + 10] < fVar18) {
        iVar8 = iVar16;
      }
      iVar16 = iVar8 + 1;
      if (local_308[lVar15 + 0xb] < fVar18) {
        iVar16 = iVar8;
      }
      iVar8 = iVar16 + 1;
      if (local_308[lVar15 + 0xc] < fVar18) {
        iVar8 = iVar16;
      }
      iVar16 = iVar8 + 1;
      if (local_308[lVar15 + 0xd] < fVar18) {
        iVar16 = iVar8;
      }
      iVar8 = iVar16 + 1;
      if (local_308[lVar15 + 0xe] < fVar18) {
        iVar8 = iVar16;
      }
      local_res8 = local_308[lVar15 + 0xf] +
                   local_308[lVar15 + 0xe] +
                   local_308[lVar15 + 0xd] +
                   local_308[lVar15 + 0xc] +
                   local_308[lVar15 + 0xb] +
                   local_308[lVar15 + 10] +
                   local_308[lVar15 + 9] +
                   local_308[lVar15 + 8] +
                   local_308[lVar15 + 7] +
                   local_308[lVar15 + 6] +
                   local_308[lVar15 + 5] +
                   local_308[lVar15 + 4] +
                   local_308[lVar15 + 3] +
                   local_308[lVar15 + 2] + local_308[lVar15 + 1] + local_308[lVar15] + local_res8;
      iVar16 = iVar8 + 1;
      if (local_308[lVar15 + 0xf] < *(float *)(lVar2 + 0x68)) {
        iVar16 = iVar8;
      }
      fVar18 = *(float *)(lVar2 + 0x68);
      lVar15 = lVar15 + 0x10;
    } while (lVar15 != 0x40);
    if (DAT_1809194c8 < 2) {
      local_318 = local_318 - (local_318 >> 1 & 0x5555555555555555);
      uVar12 = (local_318 >> 2 & 0x3333333333333333) + (local_318 & 0x3333333333333333);
      uVar13 = (uint)(byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
    }
    else {
      uVar13 = (uint)POPCOUNT(local_318);
    }
    lVar15 = *(longlong *)(lVar2 + 8);
    *param_1 = (float)uVar13 * DAT_1808ac00c;
    param_1[1] = (float)iVar16 * fVar1;
    if ((lVar15 == 0) || (*(int *)(lVar15 + 0x44) != 0)) {
      uVar13 = 0;
    }
    else if (iVar6 < 2) {
      uStack_310 = uStack_310 - (uStack_310 >> 1 & 0x5555555555555555);
      uVar12 = (uStack_310 >> 2 & 0x3333333333333333) + (uStack_310 & 0x3333333333333333);
      uVar13 = (uint)(byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
    }
    else {
      uVar13 = (uint)POPCOUNT(uStack_310);
    }
    param_1[3] = local_res8 * fVar1;
    param_1[2] = (float)uVar13 * fVar1;
  }
  return param_1;
}



/* ===== 180444d70 FUN_180444d70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180444d70(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 *local_f0;
  longlong *local_e8;
  undefined4 local_d8 [2];
  longlong local_d0 [2];
  undefined8 local_c0;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_118;
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  local_84 = 0;
  uVar4 = *puVar3;
  uVar6 = puVar3[0x11];
  uVar7 = puVar3[0x12];
  uStack_70 = *(undefined4 *)((longlong)puVar3 + 0x6c);
  uStack_b4 = (undefined4)puVar3[0xe];
  uStack_b0 = (undefined4)((ulonglong)puVar3[0xe] >> 0x20);
  local_e8 = local_d0;
  local_f0 = local_d8;
  local_c0._0_4_ = (undefined4)uVar4;
  local_c0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_d0[0] = 0;
  uStack_ac = (undefined4)puVar3[0xf];
  uStack_a8 = (undefined4)((ulonglong)puVar3[0xf] >> 0x20);
  uStack_a4 = (undefined4)puVar3[0x10];
  uStack_a0 = (undefined4)((ulonglong)puVar3[0x10] >> 0x20);
  local_d8[0] = 0;
  uVar1 = puVar3[0x13];
  local_68 = CONCAT44(uStack_ac,uStack_b0);
  uStack_60 = CONCAT44(uStack_a4,uStack_a8);
  local_78 = (undefined4)local_c0;
  uStack_74 = local_c0._4_4_;
  uStack_6c = uStack_b4;
  uStack_9c._0_4_ = (undefined4)uVar6;
  uStack_9c._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_94._0_4_ = (undefined4)uVar7;
  local_94._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_8c._0_4_ = (undefined4)uVar1;
  uStack_8c._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_58 = uStack_a0;
  uStack_54 = (undefined4)uStack_9c;
  uStack_50 = uStack_9c._4_4_;
  uStack_4c = (undefined4)local_94;
  local_48 = local_94._4_4_;
  uStack_44 = (undefined4)uStack_8c;
  uStack_40 = uStack_8c._4_4_;
  uStack_3c = 0;
  local_f8 = param_2;
  local_c0 = uVar4;
  uStack_9c = uVar6;
  local_94 = uVar7;
  uStack_8c = uVar1;
  fVar10 = (float)FUN_18046e010(param_1 + 0x100,&local_78,*(longlong *)(param_2 + 0x28) + 0x80,
                                *(undefined8 *)(param_2 + 0x18));
  if (0.0 < fVar10) {
    *(undefined4 *)(param_2 + 0x30) = local_d8[0];
    if (local_d0[0] != 0) {
      *(longlong *)(param_2 + 0x20) = local_d0[0];
    }
    *(float *)(param_2 + 0xc) = fVar10;
    if (*(float *)((longlong)puVar3 + 0x6c) <= fVar10) {
      puVar8 = (undefined8 *)FUN_180443730(local_d0,param_1,param_2);
      uVar1 = puVar8[1];
      *(undefined8 *)(param_2 + 0x34) = *puVar8;
      *(undefined8 *)(param_2 + 0x3c) = uVar1;
      if ((*(float *)(param_1 + 0x8c) < *(float *)(param_2 + 0x34) ||
           *(float *)(param_1 + 0x8c) == *(float *)(param_2 + 0x34)) &&
         (*(longlong *)(param_2 + 0x20) != 0)) {
        bVar2 = *(byte *)(*(longlong *)(param_2 + 0x20) + 0x38);
        uVar9 = (ulonglong)bVar2;
        if ((bVar2 != 1) && (lVar5 = puVar3[1], lVar5 != 0)) {
          if (bVar2 == 0xd) {
            uVar9 = 0x10;
          }
          else if (bVar2 == 0xe) {
            uVar9 = 0x12;
          }
          else if (0x12 < bVar2) {
            return;
          }
          if (*(int *)(lVar5 + 0xf30 + uVar9 * 8) == *(int *)(param_1 + 0x18)) {
            if (*(char *)(lVar5 + 0xf34 + uVar9 * 8) != '\0') {
              return;
            }
          }
          else {
            *(int *)(lVar5 + 0xf30 + uVar9 * 8) = *(int *)(param_1 + 0x18);
          }
          *(undefined1 *)(lVar5 + 0xf34 + uVar9 * 8) = 0;
        }
      }
    }
  }
  return;
}



/* ===== 180444f40 FUN_180444f40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180444f40(longlong param_1,float *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [40];
  ulonglong local_298;
  ulonglong uStack_290;
  float local_288 [64];
  undefined1 local_188 [384];
  
  puVar11 = (undefined8 *)FUN_18043d780(local_2c0);
  local_2f8 = *puVar11;
  uStack_2f0 = puVar11[1];
  local_2e8 = *(undefined4 *)(puVar11 + 2);
  uStack_2e4 = *(undefined4 *)((longlong)puVar11 + 0x14);
  uStack_2e0 = *(undefined4 *)(puVar11 + 3);
  uStack_2dc = *(undefined4 *)((longlong)puVar11 + 0x1c);
  local_2d8 = *(undefined4 *)(puVar11 + 4);
  pfVar12 = (float *)FUN_18043e0e0(local_188,param_1,param_2,&local_2f8,param_1 + 0x148);
  fVar34 = DAT_1808ac34c;
  lVar17 = 2;
  puVar10 = &local_298;
  do {
    puVar15 = puVar10;
    pfVar13 = pfVar12;
    uVar16 = *(ulonglong *)(pfVar13 + 2);
    uVar19 = *(ulonglong *)(pfVar13 + 4);
    uVar1 = *(ulonglong *)(pfVar13 + 6);
    pfVar12 = pfVar13 + 0x20;
    *puVar15 = *(ulonglong *)pfVar13;
    puVar15[1] = uVar16;
    uVar16 = *(ulonglong *)(pfVar13 + 8);
    uVar2 = *(ulonglong *)(pfVar13 + 10);
    puVar15[2] = uVar19;
    puVar15[3] = uVar1;
    uVar19 = *(ulonglong *)(pfVar13 + 0xc);
    uVar1 = *(ulonglong *)(pfVar13 + 0xe);
    puVar15[4] = uVar16;
    puVar15[5] = uVar2;
    uVar16 = *(ulonglong *)(pfVar13 + 0x10);
    uVar2 = *(ulonglong *)(pfVar13 + 0x12);
    puVar15[6] = uVar19;
    puVar15[7] = uVar1;
    uVar19 = *(ulonglong *)(pfVar13 + 0x14);
    uVar1 = *(ulonglong *)(pfVar13 + 0x16);
    puVar15[8] = uVar16;
    puVar15[9] = uVar2;
    uVar16 = *(ulonglong *)(pfVar13 + 0x18);
    uVar2 = *(ulonglong *)(pfVar13 + 0x1a);
    puVar15[10] = uVar19;
    puVar15[0xb] = uVar1;
    uVar19 = *(ulonglong *)(pfVar13 + 0x1c);
    uVar1 = *(ulonglong *)(pfVar13 + 0x1e);
    puVar15[0xc] = uVar16;
    puVar15[0xd] = uVar2;
    puVar15[0xe] = uVar19;
    puVar15[0xf] = uVar1;
    lVar17 = lVar17 + -1;
    puVar10 = puVar15 + 0x10;
  } while (lVar17 != 0);
  uVar16 = *(ulonglong *)(pfVar13 + 0x22);
  puVar15[0x10] = *(ulonglong *)pfVar12;
  puVar15[0x11] = uVar16;
  if (DAT_1809194c8 < 2) {
    uVar16 = local_298 - (local_298 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
    pfVar12 = (float *)0x101010101010101;
    uVar18 = (uint)(byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  }
  else {
    uVar18 = (uint)POPCOUNT(local_298);
  }
  if (uVar18 != 0) {
    lVar17 = *(longlong *)(param_2 + 4);
    iVar26 = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar22 = 0;
    iVar23 = 0;
    iVar24 = 0;
    iVar25 = 0;
    lVar14 = 0;
    fVar30 = *(float *)(lVar17 + 0x68);
    do {
      pfVar12 = local_288 + lVar14;
      lVar3 = lVar14 + 1;
      lVar4 = lVar14 + 2;
      lVar5 = lVar14 + 3;
      lVar6 = lVar14 + 4;
      lVar7 = lVar14 + 5;
      lVar8 = lVar14 + 6;
      lVar9 = lVar14 + 7;
      lVar14 = lVar14 + 8;
      iVar26 = iVar26 + (_DAT_1808ad5d0 & -(uint)(fVar30 <= *pfVar12));
      iVar27 = iVar27 + (_UNK_1808ad5d4 & -(uint)(fVar30 <= local_288[lVar3]));
      iVar28 = iVar28 + (_UNK_1808ad5d8 & -(uint)(fVar30 <= local_288[lVar4]));
      iVar29 = iVar29 + (_UNK_1808ad5dc & -(uint)(fVar30 <= local_288[lVar5]));
      iVar22 = iVar22 + (_DAT_1808ad5d0 & -(uint)(fVar30 <= local_288[lVar6]));
      iVar23 = iVar23 + (_UNK_1808ad5d4 & -(uint)(fVar30 <= local_288[lVar7]));
      iVar24 = iVar24 + (_UNK_1808ad5d8 & -(uint)(fVar30 <= local_288[lVar8]));
      iVar25 = iVar25 + (_UNK_1808ad5dc & -(uint)(fVar30 <= local_288[lVar9]));
    } while (lVar14 != 0x40);
    iVar22 = iVar22 + iVar26 + iVar24 + iVar28 + iVar23 + iVar27 + iVar25 + iVar29;
    if (DAT_1808ac34c <= (float)iVar22 * DAT_1808ac00c) {
      return CONCAT71((uint7)(uint3)((uint)iVar22 >> 8),1);
    }
    fVar20 = fVar30 / *(float *)(lVar17 + 0x6c) - DAT_1808ac34c;
    fVar31 = 0.0;
    if (0.0 <= fVar20) {
      fVar31 = fVar20;
    }
    fVar30 = (fVar31 * DAT_1808ac5e0 + DAT_1808ac34c) * fVar30;
    uVar16 = local_298;
    if (*(int *)(param_1 + 200) == 1) {
      if ((*(longlong *)(lVar17 + 8) == 0) || (*(int *)(*(longlong *)(lVar17 + 8) + 0x44) == 0)) {
        uVar16 = uStack_290;
      }
      else {
        uVar16 = 0;
      }
    }
    fVar31 = 0.0;
    fVar20 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
    uVar19 = 0;
    do {
      pfVar12 = (float *)(uVar16 >> ((byte)uVar19 & 0x3f));
      if (((ulonglong)pfVar12 & 1) != 0) {
        pfVar12 = (float *)FUN_18043dce0(local_2d0,&local_2f8);
        fVar21 = fVar30;
        if (local_288[uVar19] <= fVar30) {
          fVar21 = local_288[uVar19];
        }
        fVar31 = fVar31 + fVar21;
        fVar20 = fVar20 + fVar21 * *pfVar12;
        fVar32 = fVar32 + fVar21 * pfVar12[1];
        fVar33 = fVar33 + fVar21 * pfVar12[2];
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
    } while ((int)uVar18 < 0x40);
    if (0.0 < fVar31) {
      pfVar12 = *(float **)(param_2 + 6);
      fVar34 = fVar34 / fVar31;
      fVar30 = pfVar12[1];
      fVar31 = pfVar12[2];
      fVar21 = (param_2[2] - fVar31) * fVar34 * fVar33 + (param_2[1] - fVar30) * fVar34 * fVar32 +
               (*param_2 - *pfVar12) * fVar34 * fVar20;
      *param_2 = fVar21 * fVar34 * fVar20 + *pfVar12;
      param_2[1] = fVar21 * fVar34 * fVar32 + fVar30;
      param_2[2] = fVar21 * fVar34 * fVar33 + fVar31;
    }
  }
  return (ulonglong)pfVar12 & 0xffffffffffffff00;
}



/* ===== 180445350 FUN_180445350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180445350(undefined **param_1)

{
  byte bVar1;
  float *pfVar2;
  undefined **ppuVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  float *pfVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  undefined4 uVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  uint *local_1f0;
  undefined8 *local_1e8;
  uint local_1d8;
  uint local_1d4;
  undefined8 local_1d0;
  uint local_1c8;
  undefined **local_1c0;
  int iStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint uStack_188;
  undefined4 local_184;
  undefined **local_180 [2];
  undefined ***local_170;
  undefined **local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined ***local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong uStack_130;
  uint local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong lStack_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_218;
  param_1[0x1f] = (undefined *)0x0;
  puVar16 = param_1[0x1d];
  puVar15 = param_1[0x1c];
  uVar25 = *(undefined4 *)(param_1 + 0x19);
  iVar18 = (int)((longlong)puVar16 - (longlong)puVar15 >> 3) * -0x45d1745d;
  local_1d0 = CONCAT44(local_1d0._4_4_,uVar25);
  local_180[0] = param_1;
  if (iVar18 < 0x200) {
    puVar8 = (undefined *)0x0;
    for (; puVar15 != puVar16; puVar15 = puVar15 + 0x58) {
      puVar20 = puVar8;
      if (0.0 < *(float *)(puVar15 + 0xc) || *(float *)(puVar15 + 0xc) == 0.0) {
        local_1f8._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
        local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,1);
        cVar10 = FUN_180442e40(param_1,puVar15,puVar8);
        puVar20 = puVar15;
        if (cVar10 == '\0') {
          puVar20 = puVar8;
        }
      }
      puVar8 = puVar20;
    }
    param_1[0x1f] = puVar8;
    uStack_1a8 = (longlong *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
  }
  else {
    plVar12 = (longlong *)FUN_18043de90();
    if (plVar12 == (longlong *)0x0) {
      uVar11 = 1;
    }
    else {
      uVar11 = (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    uVar23 = 0x10;
    if ((int)uVar11 < 0x10) {
      uVar23 = uVar11;
    }
    local_1d8 = uVar11;
    local_1d4 = uVar23;
    uStack_1a8 = (longlong *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
    if (0 < (int)uVar23) {
      uStack_150 = 0;
      iStack_1b8 = (int)(iVar18 + -1 + uVar23) / (int)uVar23;
      local_128 = 0;
      local_168 = &PTR__guard_check_icall_1806cbd20;
      local_158 = &local_1c0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = (undefined8 *)0x0;
      uStack_100 = 0;
      local_f8 = 0;
      lStack_f0 = 0;
      local_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      local_d8 = 0;
      fStack_d4 = 0.0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_1c0 = param_1;
      iStack_1b4 = iVar18;
      uStack_1b0 = uVar25;
      uStack_160 = uVar23;
      uStack_1a8 = &local_118;
      if (uVar23 == 1) {
        LOCK();
        local_128 = 1;
        UNLOCK();
        do {
          iVar19 = 0;
          iVar18 = iStack_1b8;
          if (iStack_1b4 < iStack_1b8) {
            iVar18 = iStack_1b4;
          }
          puVar16 = (undefined *)0x0;
          bVar24 = 0 < iVar18;
          while (bVar24) {
            puVar15 = param_1[0x1c] + (longlong)iVar19 * 0x58;
            if (0.0 < *(float *)(puVar15 + 0xc) || *(float *)(puVar15 + 0xc) == 0.0) {
              local_1f8._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
              local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,1);
              cVar10 = FUN_180442e40(param_1,puVar15,puVar16);
              if (cVar10 == '\0') {
                puVar15 = puVar16;
              }
              puVar16 = puVar15;
            }
            iVar19 = iVar19 + 1;
            bVar24 = iVar19 < iVar18;
          }
          *uStack_1a8 = (longlong)puVar16;
          LOCK();
          uVar11 = local_128 + 1;
          UNLOCK();
          bVar24 = local_128 == 0;
          local_128 = uVar11;
        } while (bVar24);
        if (0 < (int)local_1d8) {
LAB_18044557e:
          uVar23 = local_1d4;
          goto LAB_180445583;
        }
      }
      else if (0 < (int)uVar11) {
        plVar12 = (longlong *)FUN_18043de90();
        pppuVar9 = local_158;
        if (plVar12 == (longlong *)0x0) {
          if ((code *)local_168[1] == FUN_1804422e0) {
            local_170 = local_158;
            local_1c8 = uStack_160;
            ppuVar3 = *local_158;
            LOCK();
            uVar11 = local_128 + 1;
            UNLOCK();
            local_1d8 = local_128;
            bVar24 = local_128 < uStack_160;
            local_128 = uVar11;
            if (bVar24) {
              do {
                iVar19 = local_1d8 * *(int *)(pppuVar9 + 1);
                iVar18 = iVar19 + *(int *)(pppuVar9 + 1);
                if (*(int *)((longlong)pppuVar9 + 0xc) < iVar18) {
                  iVar18 = *(int *)((longlong)pppuVar9 + 0xc);
                }
                puVar16 = (undefined *)0x0;
                if (iVar19 < iVar18) {
                  do {
                    puVar15 = ppuVar3[0x1c] + (longlong)iVar19 * 0x58;
                    if (0.0 < *(float *)(puVar15 + 0xc) || *(float *)(puVar15 + 0xc) == 0.0) {
                      local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,1);
                      cVar10 = FUN_180442e40(ppuVar3,puVar15,puVar16);
                      if (cVar10 == '\0') {
                        puVar15 = puVar16;
                      }
                      puVar16 = puVar15;
                    }
                    iVar19 = iVar19 + 1;
                  } while (iVar19 < iVar18);
                }
                pppuVar9[3][local_1d8] = puVar16;
                LOCK();
                uVar11 = local_128 + 1;
                UNLOCK();
                local_1d8 = local_128;
                bVar24 = local_128 < local_1c8;
                local_128 = uVar11;
              } while (bVar24);
              param_1 = local_180[0];
            }
            goto LAB_18044557e;
          }
          (*(code *)local_168[1])(&local_168,0);
        }
        else {
          local_1f8 = (longlong *)CONCAT71(local_1f8._1_7_,2);
          uVar21 = 0xffffffff;
          if ((int)uVar23 < (int)uVar11) {
            uVar21 = uVar23;
          }
          (**(code **)(*plVar12 + 0x98))(plVar12,&local_168,uVar21);
        }
LAB_180445583:
        iVar18 = 0;
        do {
          puVar16 = (undefined *)(&local_118)[iVar18];
          if (puVar16 != (undefined *)0x0) {
            local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,1);
            cVar10 = FUN_180442e40(param_1,puVar16,param_1[0x1f]);
            if (cVar10 != '\0') {
              param_1[0x1f] = puVar16;
            }
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < (int)uVar23);
      }
    }
  }
  pfVar2 = (float *)param_1[0x1f];
  if (pfVar2 == (float *)0x0) {
    return (float *)0x0;
  }
  puVar13 = (undefined8 *)FUN_1804448a0(local_180,param_1,pfVar2);
  uVar6 = puVar13[1];
  *(undefined8 *)(pfVar2 + 0x11) = *puVar13;
  *(undefined8 *)(pfVar2 + 0x13) = uVar6;
  cVar10 = FUN_180442b90(param_1,pfVar2);
  if (cVar10 != '\0') goto LAB_180445fce;
  pfVar14 = *(float **)(pfVar2 + 6);
  local_118 = *(longlong *)pfVar2;
  uStack_110 = *(undefined8 *)(pfVar2 + 2);
  local_108 = *(undefined8 **)(pfVar2 + 4);
  uStack_100 = *(undefined8 *)(pfVar2 + 6);
  local_f8 = *(undefined8 *)(pfVar2 + 8);
  lStack_f0 = *(longlong *)(pfVar2 + 10);
  uStack_d0 = *(undefined8 *)(pfVar2 + 0x12);
  local_e8 = (uint)*(undefined8 *)(pfVar2 + 0xc);
  uStack_e4 = (undefined4)((ulonglong)*(undefined8 *)(pfVar2 + 0xc) >> 0x20);
  uStack_e0 = (undefined4)*(undefined8 *)(pfVar2 + 0xe);
  uStack_dc = (undefined4)((ulonglong)*(undefined8 *)(pfVar2 + 0xe) >> 0x20);
  local_c8 = *(undefined8 *)(pfVar2 + 0x14);
  local_d8 = (undefined4)*(undefined8 *)(pfVar2 + 0x10);
  fStack_d4 = (float)((ulonglong)*(undefined8 *)(pfVar2 + 0x10) >> 0x20);
  fVar29 = *pfVar2 - *pfVar14;
  fVar31 = pfVar2[1] - pfVar14[1];
  fVar32 = pfVar2[2] - pfVar14[2];
  fVar28 = fVar32 * fVar32 + fVar31 * fVar31 + fVar29 * fVar29;
  if (fVar28 < 0.0) {
    fVar30 = (float)FUN_18051af10();
  }
  else {
    fVar30 = SQRT(fVar28);
  }
  if ((fVar30 < DAT_1808abf54) || (DAT_1808accfc < fVar30)) {
    if (fVar28 == 0.0) {
      fVar30 = 0.0;
    }
    else {
      dVar26 = (double)fVar31 * (double)fVar31 + (double)fVar29 * (double)fVar29 +
               (double)fVar32 * (double)fVar32;
      if (dVar26 < 0.0) {
        dVar26 = (double)FUN_18051ff20();
      }
      else {
        dVar26 = SQRT(dVar26);
      }
      if (DAT_1808accc0 <= dVar26) {
        dVar26 = DAT_1808accc0;
      }
      fVar30 = (float)dVar26;
    }
  }
  if (*(longlong *)(pfVar14 + 8) == 0) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = *(float *)(*(longlong *)(pfVar14 + 8) + 0x204);
  }
  fVar28 = fVar28 * fVar30;
  fVar31 = fVar28 * DAT_1808ac428 + DAT_1808ac1f4;
  fVar29 = fVar28 + fVar28;
  if (fVar31 <= fVar28 + fVar28) {
    fVar29 = fVar31;
  }
  fVar31 = DAT_1808ac9fc;
  if (fVar29 <= DAT_1808ac9fc) {
    fVar31 = fVar29;
  }
  fVar29 = (float)FUN_18053ed70(fVar31 / fVar30);
  fVar31 = (float)FUN_18053ed70();
  fVar28 = (DAT_1808ac980 / fVar28) * DAT_1808ac658;
  iVar19 = (int)((float)((DAT_1808ac1f0 ^ (uint)fVar28) & (uint)_DAT_1808ade90 ^ (uint)fVar28) +
                fVar28);
  iVar18 = 1;
  if (1 < iVar19) {
    iVar18 = iVar19;
  }
  iVar17 = 3;
  if (iVar18 < 3) {
    iVar17 = iVar18;
  }
  if (*(float *)(param_1 + 0x69) != fVar29) {
    *(float *)(param_1 + 0x69) = fVar29;
    uVar25 = FUN_18053f920();
    *(undefined4 *)((longlong)param_1 + 0x34c) = uVar25;
    uVar22 = 0;
    do {
      iVar5 = (int)uVar22;
      iVar18 = iVar5 * 2;
      fVar28 = (float)(&DAT_1806cbd44)[iVar18];
      *(float *)(param_1 + uVar22 + 0x29) = fVar29 * (float)(&DAT_1806cbd40)[iVar18];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x14c) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd4c)[iVar18];
      *(float *)(param_1 + uVar22 + 0x2a) = fVar29 * (float)(&DAT_1806cbd48)[iVar18];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x154) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd54)[iVar18];
      *(float *)(param_1 + uVar22 + 0x2b) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 4];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x15c) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd5c)[iVar18];
      *(float *)(param_1 + uVar22 + 0x2c) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 6];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x164) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd64)[iVar18];
      *(float *)(param_1 + uVar22 + 0x2d) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 8];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x16c) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd6c)[iVar18];
      *(float *)(param_1 + uVar22 + 0x2e) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 10];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x174) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd74)[iVar18];
      *(float *)(param_1 + uVar22 + 0x2f) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0xc];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x17c) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd7c)[iVar18];
      *(float *)(param_1 + uVar22 + 0x30) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0xe];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x184) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd84)[iVar18];
      *(float *)(param_1 + uVar22 + 0x31) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0x10];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x18c) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd8c)[iVar18];
      *(float *)(param_1 + uVar22 + 0x32) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0x12];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x194) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd94)[iVar18];
      *(float *)(param_1 + uVar22 + 0x33) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0x14];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x19c) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbd9c)[iVar18];
      *(float *)(param_1 + uVar22 + 0x34) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0x16];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x1a4) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbda4)[iVar18];
      *(float *)(param_1 + uVar22 + 0x35) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0x18];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x1ac) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbdac)[iVar18];
      *(float *)(param_1 + uVar22 + 0x36) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0x1a];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x1b4) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbdb4)[iVar18];
      *(float *)(param_1 + uVar22 + 0x37) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0x1c];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x1bc) = fVar29 * fVar28;
      fVar28 = (float)(&DAT_1806cbdbc)[iVar18];
      *(float *)(param_1 + uVar22 + 0x38) = fVar29 * (float)(&DAT_1806cbd40)[iVar5 * 2 + 0x1e];
      *(float *)((longlong)param_1 + uVar22 * 8 + 0x1c4) = fVar29 * fVar28;
      uVar22 = (ulonglong)(iVar5 + 0x10U);
    } while ((int)(iVar5 + 0x10U) < 0x40);
  }
  fVar28 = DAT_1808ac34c;
  if (iVar19 < 2) {
    FUN_180444f40(param_1,&local_118,DAT_1808ac34c);
  }
  else {
    iVar18 = 0;
    fVar29 = DAT_1808ac34c - fVar31 / fVar29;
    if (0 < iVar17) {
      do {
        cVar10 = FUN_180444f40(param_1,&local_118,
                               fVar28 - ((float)iVar18 * fVar29) / (float)(iVar17 + -1));
        if (cVar10 != '\0') break;
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar17);
    }
  }
  if ((((float)local_118 == *pfVar2) && (local_118._4_4_ == pfVar2[1])) &&
     ((float)uStack_110 == pfVar2[2])) goto LAB_180445fce;
  uVar6 = local_108[0x11];
  local_1d0 = local_f8;
  uStack_160 = *(undefined4 *)((longlong)local_108 + 0x6c);
  local_184 = 0;
  local_1c0 = (undefined **)*local_108;
  local_1d8 = local_e8;
  iStack_1b4 = (int)local_108[0xe];
  uStack_1b0 = (undefined4)((ulonglong)local_108[0xe] >> 0x20);
  local_1e8 = &local_1d0;
  local_1f0 = &local_1d8;
  local_194 = (undefined4)local_108[0x12];
  uStack_190 = (undefined4)((ulonglong)local_108[0x12] >> 0x20);
  uStack_1ac = (undefined4)local_108[0xf];
  uStack_1a8._0_4_ = (undefined4)((ulonglong)local_108[0xf] >> 0x20);
  uStack_1a8._4_4_ = (undefined4)local_108[0x10];
  uStack_1a0 = (undefined4)((ulonglong)local_108[0x10] >> 0x20);
  uStack_18c = (undefined4)local_108[0x13];
  uStack_188 = (uint)((ulonglong)local_108[0x13] >> 0x20);
  local_158 = (undefined ***)CONCAT44(uStack_1ac,uStack_1b0);
  uStack_150 = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
  uStack_15c = iStack_1b4;
  uStack_19c._0_4_ = (undefined4)uVar6;
  uStack_19c._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_138 = CONCAT44(uStack_18c,uStack_190);
  uStack_130 = (ulonglong)uStack_188;
  local_148 = CONCAT44((undefined4)uStack_19c,uStack_1a0);
  uStack_140 = CONCAT44(local_194,uStack_19c._4_4_);
  local_1f8 = &local_118;
  uStack_19c = uVar6;
  local_168 = local_1c0;
  fVar29 = (float)FUN_18046e010(param_1 + 0x20,&local_168,lStack_f0 + 0x80,pfVar14);
  local_f8 = local_1d0;
  local_e8 = local_1d8;
  uStack_110 = CONCAT44(fVar29,(float)uStack_110);
  if ((fVar29 <= 0.0) || (fVar29 < *(float *)((longlong)local_108 + 0x6c))) goto LAB_180445fce;
  pfVar14 = (float *)FUN_1804448a0(local_180,param_1,&local_118);
  fStack_d4 = *pfVar14;
  fVar29 = pfVar14[1];
  uStack_d0 = *(undefined8 *)(pfVar14 + 1);
  local_c8 = CONCAT44(local_c8._4_4_,pfVar14[3]);
  if ((*(int *)(param_1 + 0x19) == 1) && (pfVar14[2] != pfVar2[0x13])) {
    bVar24 = pfVar2[0x13] < pfVar14[2];
LAB_180445f7a:
    if (!bVar24) goto LAB_180445fce;
  }
  else {
    fVar31 = pfVar2[0x11];
    fVar32 = pfVar2[0x12];
    fVar27 = (float)((uint)(fStack_d4 - fVar31) & (uint)_DAT_1808ade90);
    fVar30 = (float)((uint)(fVar29 - fVar32) & (uint)_DAT_1808ade90);
    if (DAT_1808ac0e8 < fVar27) {
      bVar24 = fVar31 < fStack_d4;
      goto LAB_180445f7a;
    }
    if (DAT_1808ac0d4 < fVar30) {
      bVar24 = fVar32 < fVar29;
      goto LAB_180445f7a;
    }
    if (DAT_1808ac0a0 < fVar27) {
LAB_180445f35:
      bVar24 = fVar31 < fStack_d4;
      goto LAB_180445f7a;
    }
    if (DAT_1808ac064 < fVar30) {
      bVar24 = fVar32 < fVar29;
      goto LAB_180445f7a;
    }
    if (DAT_1808ac064 < fStack_d4) {
      if (fStack_d4 != fVar31) goto LAB_180445f35;
      if (fVar29 != fVar32) {
        bVar24 = fVar32 < fVar29;
        goto LAB_180445f7a;
      }
    }
    if (fVar28 <= fStack_d4) {
      bVar24 = pfVar2[0x14] <= pfVar14[3];
      goto LAB_180445f7a;
    }
  }
  puVar13 = (undefined8 *)FUN_180443730(local_180,param_1,&local_118);
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  *(longlong *)pfVar2 = local_118;
  *(undefined8 *)(pfVar2 + 2) = uStack_110;
  uStack_e4 = (undefined4)uVar6;
  uStack_e0 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_dc = (undefined4)uVar7;
  local_d8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  *(undefined8 **)(pfVar2 + 4) = local_108;
  *(undefined8 *)(pfVar2 + 6) = uStack_100;
  *(undefined8 *)(pfVar2 + 8) = local_f8;
  *(longlong *)(pfVar2 + 10) = lStack_f0;
  *(ulonglong *)(pfVar2 + 0xc) = CONCAT44(uStack_e4,local_e8);
  *(ulonglong *)(pfVar2 + 0xe) = CONCAT44(uStack_dc,uStack_e0);
  *(ulonglong *)(pfVar2 + 0x10) = CONCAT44(fStack_d4,local_d8);
  *(undefined8 *)(pfVar2 + 0x12) = uStack_d0;
  *(undefined8 *)(pfVar2 + 0x14) = local_c8;
LAB_180445fce:
  lVar4 = *(longlong *)(*(longlong *)(pfVar2 + 4) + 8);
  if (lVar4 != 0) {
    fVar28 = pfVar2[0x11] * DAT_1808acb08;
    iVar18 = (int)((float)((DAT_1808ac1f0 ^ (uint)fVar28) & (uint)_DAT_1808ade90 ^ (uint)fVar28) +
                  fVar28);
    if (*(int *)(lVar4 + 0xfcc) == *(int *)(param_1 + 3)) {
      if (*(int *)(lVar4 + 0xfc8) < iVar18) {
        *(int *)(lVar4 + 0xfc8) = iVar18;
      }
    }
    else {
      *(int *)(lVar4 + 0xfc8) = iVar18;
      *(undefined4 *)(lVar4 + 0xfcc) = *(undefined4 *)(param_1 + 3);
    }
    if ((*(float *)((longlong)param_1 + 0x8c) < pfVar2[0x11] ||
         *(float *)((longlong)param_1 + 0x8c) == pfVar2[0x11]) && (*(longlong *)(pfVar2 + 8) != 0))
    {
      bVar1 = *(byte *)(*(longlong *)(pfVar2 + 8) + 0x38);
      uVar22 = (ulonglong)bVar1;
      if (bVar1 != 1) {
        if (bVar1 == 0xd) {
          uVar22 = 0x10;
        }
        else if (bVar1 == 0xe) {
          uVar22 = 0x12;
        }
        else if (0x12 < bVar1) {
          return pfVar2;
        }
        iVar18 = *(int *)(param_1 + 3);
        *(undefined1 *)(lVar4 + 0xf34 + uVar22 * 8) = 1;
        if (*(int *)(lVar4 + 0xf30 + uVar22 * 8) != iVar18) {
          *(int *)(lVar4 + 0xf30 + uVar22 * 8) = iVar18;
        }
      }
    }
  }
  return pfVar2;
}



/* ===== 1804460e0 FUN_1804460e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804460e0(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined **local_d8;
  int local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_108;
  if (param_1[0x1c] != param_1[0x1d]) {
    param_1[0x1d] = param_1[0x1c];
  }
  lVar14 = param_1[2];
  lVar13 = *param_1;
  param_1[0x1f] = 0;
  FUN_18046ce00();
  if ((((lVar13 == 0) || (lVar14 == 0)) || (DAT_181112390 == 0)) ||
     (lVar7 = FUN_18000f3a0((ulonglong)DAT_181112390 + 8 + lVar14),
     0x7ffffffefffe < lVar7 - 0x10000U)) {
    uVar8 = 0;
  }
  else {
    uVar4 = FUN_180011200((ulonglong)DAT_1811123a4 + lVar7);
    uVar5 = FUN_180011200((ulonglong)DAT_1811123a8 + lVar7);
    uVar17 = FUN_18000f3d0((ulonglong)DAT_1811123b0 + lVar7);
    uVar18 = FUN_18000f3d0((ulonglong)DAT_181112388 + lVar7);
    uVar19 = FUN_18000f3d0((ulonglong)DAT_18111238c + lVar7);
    fVar20 = (float)FUN_18053f160(uVar18);
    fVar20 = fVar20 * DAT_1808abfc8;
    if (((DAT_1811123ac == 0) || (DAT_181112380 == 0)) || (DAT_181112394 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_180011440((ulonglong)DAT_181112380 + lVar14 + (ulonglong)DAT_181112394 +
                            (ulonglong)DAT_1811123ac);
    }
    if (DAT_181112398 == 0) {
      uVar10 = 0;
    }
    else {
      bVar2 = FUN_180011220((ulonglong)DAT_181112398 + lVar13);
      uVar10 = (uint)bVar2;
    }
    *(undefined2 *)((longlong)param_1 + 0x11a) = local_c0._2_2_;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + 0xcc);
    *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_1 + 0xac);
    *(undefined4 *)(param_1 + 0x21) = uVar17;
    *(undefined4 *)(param_1 + 0x22) = uVar19;
    *(uint *)((longlong)param_1 + 0x11c) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x10c) = uVar18;
    *(float *)((longlong)param_1 + 0x114) = fVar20;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar5;
    *(undefined2 *)(param_1 + 0x23) = uVar3;
    param_1[0x25] = lVar13;
    if ((ulonglong)((param_1[0x27] - param_1[0x26] >> 3) * 0xfc0fc0fc0fc0fc1) <
        (ulonglong)((param_1[8] - param_1[7] >> 5) * -0x5555555555555555)) {
      FUN_180448630();
    }
    fVar20 = DAT_1808abfc0;
    uVar16 = 0;
    lVar13 = param_1[8];
    for (lVar14 = param_1[7]; lVar14 != lVar13; lVar14 = lVar14 + 0x60) {
      fVar1 = *(float *)(lVar14 + 0x1c);
      if (uVar16 != 0) {
        uVar11 = 0;
        do {
          lVar7 = uVar11 * 0x208 + param_1[0x26];
          if (*(float *)(lVar7 + 0x200) == fVar1) {
            if (lVar7 != 0) goto LAB_1804466be;
            break;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar16);
      }
      lVar7 = uVar16 * 0x208;
      uVar16 = uVar16 + 1;
      lVar7 = param_1[0x26] + lVar7;
      if (*(float *)(lVar7 + 0x200) != fVar1) {
        *(float *)(lVar7 + 0x200) = fVar1;
        fVar21 = fVar1;
        if (fVar1 <= fVar20) {
          fVar21 = fVar20;
        }
        uVar4 = FUN_18053f920(fVar21);
        *(undefined4 *)(lVar7 + 0x204) = uVar4;
        uVar11 = 0;
        do {
          iVar15 = (int)uVar11;
          iVar12 = iVar15 * 2;
          fVar21 = (float)(&DAT_1806cbf44)[iVar12];
          *(float *)(lVar7 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar12];
          *(float *)(lVar7 + 4 + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf4c)[iVar12];
          *(float *)(lVar7 + 8 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf48)[iVar12];
          *(float *)(lVar7 + 0xc + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf54)[iVar12];
          *(float *)(lVar7 + 0x10 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 4];
          *(float *)(lVar7 + 0x14 + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf5c)[iVar12];
          *(float *)(lVar7 + 0x18 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 6];
          *(float *)(lVar7 + 0x1c + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf64)[iVar12];
          *(float *)(lVar7 + 0x20 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 8];
          *(float *)(lVar7 + 0x24 + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf6c)[iVar12];
          *(float *)(lVar7 + 0x28 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 10];
          *(float *)(lVar7 + 0x2c + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf74)[iVar12];
          *(float *)(lVar7 + 0x30 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0xc];
          *(float *)(lVar7 + 0x34 + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf7c)[iVar12];
          *(float *)(lVar7 + 0x38 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0xe];
          *(float *)(lVar7 + 0x3c + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf84)[iVar12];
          *(float *)(lVar7 + 0x40 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0x10]
          ;
          *(float *)(lVar7 + 0x44 + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf8c)[iVar12];
          *(float *)(lVar7 + 0x48 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0x12]
          ;
          *(float *)(lVar7 + 0x4c + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf94)[iVar12];
          *(float *)(lVar7 + 0x50 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0x14]
          ;
          *(float *)(lVar7 + 0x54 + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbf9c)[iVar12];
          *(float *)(lVar7 + 0x58 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0x16]
          ;
          *(float *)(lVar7 + 0x5c + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbfa4)[iVar12];
          *(float *)(lVar7 + 0x60 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0x18]
          ;
          *(float *)(lVar7 + 100 + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbfac)[iVar12];
          *(float *)(lVar7 + 0x68 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0x1a]
          ;
          *(float *)(lVar7 + 0x6c + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbfb4)[iVar12];
          *(float *)(lVar7 + 0x70 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0x1c]
          ;
          *(float *)(lVar7 + 0x74 + uVar11 * 8) = fVar1 * fVar21;
          fVar21 = (float)(&DAT_1806cbfbc)[iVar12];
          *(float *)(lVar7 + 0x78 + uVar11 * 8) = fVar1 * (float)(&DAT_1806cbf40)[iVar15 * 2 + 0x1e]
          ;
          *(float *)(lVar7 + 0x7c + uVar11 * 8) = fVar1 * fVar21;
          uVar11 = (ulonglong)(iVar15 + 0x10U);
        } while ((int)(iVar15 + 0x10U) < 0x40);
      }
LAB_1804466be:
      *(longlong *)(lVar14 + 0x20) = lVar7;
    }
    lVar14 = param_1[5];
    for (lVar13 = param_1[4]; lVar13 != lVar14; lVar13 = lVar13 + 0xd0) {
      FUN_1804429b0(param_1,lVar13,param_2);
    }
    iVar12 = (int)(param_1[0x1d] - param_1[0x1c] >> 3) * -0x45d1745d;
    if (iVar12 == 1) {
      FUN_180444d70(param_1);
      uVar8 = FUN_180445350(param_1);
    }
    else {
      if (0 < iVar12) {
        local_c0 = 0;
        local_98 = 0;
        local_d8 = &PTR__guard_check_icall_1806cc140;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        iVar15 = -1;
        local_d0 = iVar12;
        local_c8 = param_1;
        if (iVar12 < 0x21) {
          plVar9 = (longlong *)FUN_18043de90();
          if (plVar9 == (longlong *)0x0) {
            iVar6 = 1;
          }
          else {
            iVar6 = (**(code **)(*plVar9 + 0x38))(plVar9);
          }
          iVar15 = -1;
          if (iVar12 < iVar6) {
            iVar15 = iVar12;
          }
        }
        plVar9 = (longlong *)FUN_18043de90();
        if (plVar9 == (longlong *)0x0) {
          (*(code *)local_d8[1])(&local_d8,0);
          uVar8 = FUN_180445350(param_1);
          return uVar8;
        }
        local_e8 = 2;
        (**(code **)(*plVar9 + 0x98))(plVar9,&local_d8,iVar15,0);
      }
      uVar8 = FUN_180445350(param_1);
    }
  }
  return uVar8;
}



/* ===== 180446830 FUN_180446830 ===== */

undefined8 FUN_180446830(longlong param_1)

{
  float fVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar1 = (float)FUN_180512fd0(*(float *)(param_1 + 0x748) * DAT_1808acab0,local_res8);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + DAT_1808ac34c;
    if (fVar1 < DAT_1808ac34c) {
      local_res8[0] = local_res8[0] + DAT_1808acda0;
    }
    else {
      fVar1 = 0.0;
    }
  }
  return CONCAT44(fVar1,(int)local_res8[0]);
}



/* ===== 1804468b0 FUN_1804468b0 ===== */

ulonglong FUN_1804468b0(longlong param_1,int *param_2,uint *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong in_RAX;
  uint7 uVar6;
  int iVar7;
  uint uVar8;
  
  if ((*(int *)(param_1 + 0x618) < 2) || (iVar7 = *(int *)(param_1 + 0x618) + -1, iVar7 < 1)) {
LAB_180446922:
    return in_RAX & 0xffffffffffffff00;
  }
  uVar8 = *(uint *)(param_1 + 0x61c);
  iVar3 = *param_2;
  do {
    uVar5 = uVar8 & 0x8000001f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
    }
    uVar5 = uVar5 + 0x20 & 0x8000001f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
    }
    in_RAX = (ulonglong)(int)uVar5;
    iVar4 = *(int *)(param_1 + 0x398 + in_RAX * 0x14);
    if (iVar4 == iVar3) {
      fVar2 = *(float *)(param_1 + 0x39c + in_RAX * 0x14);
      if ((float)param_2[1] <= fVar2 && fVar2 != (float)param_2[1]) goto LAB_180446922;
    }
    else if (iVar3 < iVar4) goto LAB_180446922;
    uVar5 = uVar8 + 1 & 0x8000001f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
    }
    uVar5 = uVar5 + 0x20 & 0x8000001f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
    }
    iVar4 = *(int *)(param_1 + 0x398 + (longlong)(int)uVar5 * 0x14);
    uVar6 = (uint7)(int3)(uVar5 >> 8);
    if (iVar4 == iVar3) {
      pfVar1 = (float *)(param_1 + 0x39c + (longlong)(int)uVar5 * 0x14);
      if ((float)param_2[1] < *pfVar1 || (float)param_2[1] == *pfVar1) {
LAB_180446974:
        *param_3 = uVar8;
        return CONCAT71(uVar6,1);
      }
    }
    else if (iVar3 < iVar4) goto LAB_180446974;
    uVar8 = uVar8 + 1;
    iVar7 = iVar7 + -1;
    if (iVar7 < 1) {
      return (ulonglong)uVar6 << 8;
    }
  } while( true );
}



/* ===== 1804469a0 FUN_1804469a0 ===== */

float FUN_1804469a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if ((*(int *)(param_1 + 0x18) == 2) || (*(short *)(param_2 + 0x7b8) == 0x1f)) {
    return 0.0;
  }
  FUN_18047d090();
  uVar1 = *(uint *)(param_2 + 0x790);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  if ((*(longlong *)(param_2 + 0x7b0) == 0) || (DAT_1811142d0 == 0)) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)FUN_18000f3d0((ulonglong)DAT_1811142d0 +
                                 (ulonglong)(uVar1 * 4) + *(longlong *)(param_2 + 0x7b0));
  }
  fVar3 = (float)FUN_18047d4f0(param_2 + 0x758);
  return fVar3 + fVar2;
}



/* ===== 180446a30 FUN_180446a30 ===== */

undefined4 FUN_180446a30(longlong param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar4;
  undefined8 uVar3;
  
  uVar3 = FUN_18043d6f0(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x168));
  fVar4 = (float)((ulonglong)uVar3 >> 0x20);
  iVar2 = (int)uVar3;
  if (param_2 != 0) {
    if (iVar2 == *(int *)(param_1 + 0x35c)) {
      fVar1 = *(float *)(param_1 + 0x360);
      if (fVar1 < fVar4) {
        return 1;
      }
      if ((fVar1 <= fVar4) && (fVar4 == fVar1)) {
        return 1;
      }
    }
    else if (*(int *)(param_1 + 0x35c) <= iVar2) {
      return 1;
    }
  }
  if (iVar2 == *(int *)(param_1 + 0x354)) {
    fVar1 = *(float *)(param_1 + 0x358);
    if (fVar4 <= fVar1) {
      if ((fVar1 <= fVar4) && (fVar4 == fVar1)) {
        return 1;
      }
      return 0;
    }
  }
  else if (iVar2 < *(int *)(param_1 + 0x354)) {
    return 0;
  }
  return 1;
}



/* ===== 180446ad0 FUN_180446ad0 ===== */

float * FUN_180446ad0(float *param_1,float *param_2,int *param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  int local_res18;
  float local_res1c;
  
  uVar5 = FUN_180446830(param_2);
  fVar10 = 0.0;
  iVar8 = *param_3 - (int)uVar5;
  local_res8._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  local_res1c = (float)param_3[1] - local_res8._4_4_;
  if (local_res1c < 0.0) {
    local_res1c = local_res1c + DAT_1808ac34c;
    if (local_res1c < DAT_1808ac34c) {
      iVar8 = iVar8 + -1;
    }
    else {
      local_res1c = 0.0;
    }
  }
  local_res8 = (ulonglong)(uint)local_res8._4_4_ << 0x20;
  fVar11 = DAT_1808ac34c;
  local_res18 = iVar8;
  cVar2 = FUN_1804468b0(param_2,&local_res18,&local_res8);
  if (cVar2 == '\0') {
    uVar5 = *(undefined8 *)(param_2 + 1);
    *param_1 = param_2[9] + *param_2;
    *(ulonglong *)(param_1 + 1) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 10) >> 0x20) +
                  (float)((ulonglong)uVar5 >> 0x20),
                  (float)*(undefined8 *)(param_2 + 10) + (float)uVar5);
    return param_1;
  }
  uVar3 = (uint)local_res8 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  uVar3 = uVar3 + 0x20 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  lVar6 = (longlong)(int)uVar3 + 0x2e;
  uVar3 = (uint)local_res8 + 1 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  uVar3 = uVar3 + 0x20 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  lVar7 = (longlong)(int)uVar3 + 0x2e;
  fVar9 = param_2[lVar7 * 5 + 1] - param_2[lVar6 * 5 + 1];
  iVar4 = (int)param_2[lVar7 * 5] - (int)param_2[lVar6 * 5];
  if (fVar9 < fVar10) {
    fVar9 = fVar9 + fVar11;
    if (fVar9 < fVar11) {
      iVar4 = iVar4 + -1;
    }
    else {
      fVar9 = 0.0;
    }
  }
  local_res1c = local_res1c - param_2[lVar6 * 5 + 1];
  iVar8 = iVar8 - (int)param_2[lVar6 * 5];
  if (local_res1c < fVar10) {
    if (fVar11 <= local_res1c + fVar11) goto LAB_180446c1c;
    iVar8 = iVar8 + -1;
    local_res1c = local_res1c + fVar11;
  }
  fVar10 = local_res1c;
LAB_180446c1c:
  uVar5 = *(undefined8 *)(param_2 + lVar6 * 5 + 3);
  fVar10 = (fVar10 + (float)iVar8) / ((float)iVar4 + fVar9);
  fVar11 = fVar11 - fVar10;
  uVar1 = *(undefined8 *)(param_2 + lVar7 * 5 + 3);
  *param_1 = fVar11 * param_2[lVar6 * 5 + 2] + fVar10 * param_2[lVar7 * 5 + 2];
  *(ulonglong *)(param_1 + 1) =
       CONCAT44((float)((ulonglong)uVar5 >> 0x20) * fVar11 +
                (float)((ulonglong)uVar1 >> 0x20) * fVar10,
                (float)uVar5 * fVar11 + (float)uVar1 * fVar10);
  return param_1;
}



/* ===== 180446c90 FUN_180446c90 ===== */

ulonglong FUN_180446c90(longlong param_1,uint *param_2)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong in_RAX;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_res8;
  float fStackX_1c;
  undefined8 local_48;
  
  iVar9 = *(int *)(param_1 + 0x618);
  if (iVar9 < 3) goto LAB_180446eb1;
  uVar6 = FUN_180446830();
  uVar7 = FUN_18043d6f0(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x168));
  local_res8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  fVar2 = local_res8._4_4_;
  iVar10 = (int)uVar7;
  local_res8 = CONCAT44(local_res8._4_4_,iVar10 + -3);
  local_48 = local_res8;
  if (0.0 <= local_res8._4_4_) {
LAB_180446d2f:
    fVar14 = local_48._4_4_;
  }
  else {
    fVar14 = 0.0;
    if (local_res8._4_4_ + DAT_1808ac34c < DAT_1808ac34c) {
      local_res8 = CONCAT44(local_res8._4_4_ + DAT_1808ac34c,iVar10 + -4);
      local_48 = local_res8;
      goto LAB_180446d2f;
    }
  }
  uVar3 = iVar10 + 1;
  iVar9 = iVar9 + -1;
  local_res8 = CONCAT44(fVar2,uVar3);
  in_RAX = local_res8;
  if (0 < iVar9) {
    iVar10 = 0;
    fStackX_1c = (float)((ulonglong)uVar6 >> 0x20);
    do {
      uVar4 = *(int *)(param_1 + 0x61c) + iVar10 & 0x8000001f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
      }
      uVar4 = uVar4 + 0x20 & 0x8000001f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
      }
      fVar11 = fStackX_1c + *(float *)(param_1 + 0x39c + (longlong)(int)uVar4 * 0x14);
      iVar5 = (uint)(DAT_1808ac34c <= fVar11) +
              *(int *)(param_1 + 0x398 + (longlong)(int)uVar4 * 0x14);
      uVar4 = iVar5 + (int)uVar6;
      if (DAT_1808ac34c <= fVar11) {
        fVar11 = fVar11 - DAT_1808ac34c;
      }
      if (((int)uVar4 < (int)(uint)local_48) || ((uVar4 == (uint)local_48 && (fVar11 < fVar14)))) {
        fVar13 = fVar14;
        uVar8 = (uint)local_48;
LAB_180446e0d:
        if (uVar8 == uVar4) goto LAB_180446e11;
      }
      else {
        if (((int)uVar3 < (int)uVar4) || ((uVar4 == uVar3 && (fVar2 < fVar11)))) {
          fVar13 = fVar2;
          uVar8 = uVar3;
          goto LAB_180446e0d;
        }
        fVar13 = fVar11;
        uVar8 = uVar4;
LAB_180446e11:
        if (fVar13 == fVar11) {
          param_2[1] = (uint)fVar11;
          *param_2 = uVar4;
          return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
        }
      }
      uVar4 = *(int *)(param_1 + 0x61c) + 1 + iVar10 & 0x8000001f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
      }
      uVar4 = uVar4 + 0x20 & 0x8000001f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
      }
      fVar11 = fStackX_1c + *(float *)(param_1 + 0x39c + (longlong)(int)uVar4 * 0x14);
      uVar4 = (uint)(DAT_1808ac34c <= fVar11) +
              *(int *)(param_1 + 0x398 + (longlong)(int)uVar4 * 0x14);
      in_RAX = (ulonglong)uVar4;
      uVar4 = uVar4 + (int)uVar6;
      if (DAT_1808ac34c <= fVar11) {
        fVar11 = fVar11 - DAT_1808ac34c;
      }
      if (((int)uVar4 < (int)(uint)local_48) || ((uVar4 == (uint)local_48 && (fVar11 < fVar14)))) {
        fVar12 = fVar14;
        uVar1 = (uint)local_48;
LAB_180446e9a:
        in_RAX = (ulonglong)uVar1;
        if (uVar1 == uVar4) goto LAB_180446e9e;
      }
      else {
        if (((int)uVar3 < (int)uVar4) || ((uVar4 == uVar3 && (fVar2 < fVar11)))) {
          fVar12 = fVar2;
          uVar1 = uVar3;
          goto LAB_180446e9a;
        }
        fVar12 = fVar11;
LAB_180446e9e:
        if (fVar12 == fVar11) {
          param_2[1] = (uint)fVar13;
          *param_2 = uVar8;
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
LAB_180446eb1:
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 180446ee0 FUN_180446ee0 ===== */

void FUN_180446ee0(char *param_1,float *param_2,byte param_3,int param_4,undefined8 param_5)

{
  float fVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  float fVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined8 local_res8;
  undefined8 local_res10;
  byte local_res18;
  int local_res20;
  char local_1f8;
  char local_1f7;
  undefined8 local_1f0;
  undefined1 local_1e8 [8];
  undefined8 local_1e0;
  float local_1d8 [2];
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  int local_1b0;
  float fStack_1ac;
  undefined4 local_1a0;
  int local_19c;
  float *local_198 [2];
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  char local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  int local_160;
  undefined1 local_15c;
  ulonglong local_158;
  undefined1 local_150;
  undefined8 local_14c;
  undefined1 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  float **local_128;
  undefined8 local_120;
  float *local_118;
  char *local_110;
  undefined4 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c4;
  
  plVar2 = *(longlong **)(param_1 + 8);
  local_19c = 2;
  if (2 < *(int *)(param_1 + 0x20)) {
    local_19c = *(int *)(param_1 + 0x20);
  }
  if ((plVar2 == (longlong *)0x0) || (*plVar2 == plVar2[1])) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_res8 = param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  local_198[0] = param_2;
  if ((*param_1 == '\0') && (fVar29 = param_2[0x57], fVar29 == *(float *)(param_1 + 4))) {
    if (!bVar4) {
      return;
    }
    fVar1 = param_2[0x1e2];
    fVar25 = param_2[0x5a];
    param_2[0x57] = (float)((int)fVar29 + -1);
    param_2[0x1db] = (float)((int)fVar29 + -1);
    param_2[0x1e2] = param_2[0x1d4];
    fVar26 = *(float *)(param_1 + 0x14);
    param_2[0x5a] = fVar26;
    param_2[0x1dd] = fVar26;
    cVar6 = FUN_180446a30(param_2,param_4);
    if (cVar6 == '\0') goto LAB_1804471d4;
    lVar19 = **(longlong **)(param_1 + 8);
    uVar18 = ((*(longlong **)(param_1 + 8))[1] - lVar19 >> 2) * -0x7d05f417d05f417d;
    iVar22 = *(int *)(param_1 + 0x10);
    uVar12 = uVar18 - 1;
    if (iVar22 < 0) {
      uVar9 = uVar12;
    }
    else {
      uVar9 = (longlong)iVar22;
      if (uVar18 <= (ulonglong)(longlong)iVar22) {
        uVar9 = uVar12;
      }
    }
    lVar23 = uVar9 * 0xac;
    uVar10 = FUN_18043d6f0(param_2[0x57],param_2[0x5a]);
    pcVar5 = local_res8;
    local_res10._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    if (0.0 <= local_res10._4_4_) {
      fVar26 = local_res10._4_4_;
LAB_18044707e:
      fVar30 = fVar26;
      iVar22 = -3;
    }
    else {
      fVar30 = local_res10._4_4_ + DAT_1808ac34c;
      fVar26 = 0.0;
      if (DAT_1808ac34c <= fVar30) goto LAB_18044707e;
      iVar22 = -4;
    }
    fVar26 = param_2[0x48];
    fVar21 = (float)(iVar22 + (int)uVar10);
    if (((int)fVar21 <= (int)fVar26) && ((fVar26 != fVar21 || (fVar30 <= DAT_1808ac348)))) {
      fVar21 = (float)((int)uVar10 + 1);
      if (((int)fVar21 < (int)fVar26) || ((fVar26 == fVar21 && (local_res10._4_4_ < DAT_1808ac348)))
         ) {
        fVar30 = local_res10._4_4_;
      }
      else {
        fVar30 = DAT_1808ac348;
        fVar21 = fVar26;
      }
    }
    local_res10 = CONCAT44(fVar30,fVar21);
    if ((fVar26 == *(float *)(local_res8 + 4)) && (*(char *)(lVar23 + 0x20 + lVar19) != '\0')) {
      fVar30 = *(float *)(lVar23 + 0x1c + lVar19);
      fVar21 = *(float *)(lVar23 + 0x18 + lVar19);
      local_res10 = CONCAT44(fVar30,fVar21);
    }
    uVar24 = FUN_1804469a0(local_res8,param_2);
    fVar26 = param_2[0x57];
    puVar11 = (undefined8 *)FUN_180446ad0(&local_1b0,param_2,&local_res10);
    local_d8 = 0;
    uStack_d0 = 0;
    local_128 = (float **)*puVar11;
    local_108 = (undefined4 *)0x0;
    local_100 = (undefined8 *)((ulonglong)local_100._5_3_ << 0x28);
    local_f0._4_4_ = 0;
    uStack_e8 = 0;
    local_120 = (undefined8 *)CONCAT44(fVar26,*(undefined4 *)(puVar11 + 1));
    local_118._0_5_ = (uint5)(uint)local_198[0][0x48];
    local_110 = (char *)((ulonglong)uVar24 << 0x20);
    local_f8 = CONCAT44(fVar30,fVar21);
    local_f0._0_4_ = CONCAT31(local_f0._1_3_,1);
    if (*(int *)(pcVar5 + 0x24) < 1) {
      local_f0._4_4_ = *(undefined4 *)(lVar23 + 0xc + lVar19);
      uStack_e8 = *(undefined4 *)(lVar23 + 0x10 + lVar19);
      local_e4 = *(undefined1 *)(lVar23 + 0x14 + lVar19);
    }
    else {
      local_e4 = 0;
    }
    local_e0 = *(undefined4 *)(pcVar5 + 0x14);
    local_dc = 1;
    FUN_18043a500(param_5,&local_128);
LAB_1804471d4:
    param_2[0x5a] = fVar25;
    param_2[0x1dd] = fVar25;
    param_2[0x1e2] = fVar1;
    param_2[0x57] = fVar29;
    param_2[0x1db] = fVar29;
    return;
  }
  local_19c = local_19c + -2;
  local_1a0 = FUN_1804469a0(param_1,param_2);
  uVar12 = FUN_18043d6f0(param_2[0x57],param_2[0x5a]);
  fVar1 = DAT_1808ac34c;
  fVar29 = DAT_1808ac348;
  iVar22 = -3;
  local_res8._4_4_ = (float)(uVar12 >> 0x20);
  fVar25 = local_res8._4_4_;
  if (0.0 <= local_res8._4_4_) {
LAB_180447274:
    iVar15 = -3;
  }
  else {
    fVar25 = local_res8._4_4_ + DAT_1808ac34c;
    if (DAT_1808ac34c <= fVar25) {
      fVar25 = 0.0;
      goto LAB_180447274;
    }
    iVar15 = -4;
  }
  fVar30 = (float)(iVar15 + (int)uVar12);
  fVar26 = param_2[0x48];
  if (((int)fVar30 <= (int)fVar26) && ((fVar26 != fVar30 || (fVar25 <= DAT_1808ac348)))) {
    fVar30 = (float)((int)uVar12 + 1);
    if (((int)fVar30 < (int)fVar26) || ((fVar26 == fVar30 && (local_res8._4_4_ < DAT_1808ac348)))) {
      fVar25 = local_res8._4_4_;
    }
    else {
      fVar25 = DAT_1808ac348;
      fVar30 = fVar26;
    }
  }
  local_1c0 = CONCAT44(fVar25,fVar30);
  local_1f0 = 0;
  local_res8 = (char *)uVar12;
  cVar6 = FUN_180446c90(param_2,&local_1f0);
  lVar19 = 0x35c;
  if (param_4 == 0) {
    lVar19 = 0x354;
  }
  iVar15 = *(int *)(lVar19 + (longlong)param_2);
  lVar19 = 0x360;
  if (param_4 == 0) {
    lVar19 = 0x358;
  }
  fVar25 = *(float *)(lVar19 + (longlong)param_2);
  local_res8 = (char *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_1f7 = cVar6;
  fVar26 = (float)FUN_180512fd0(param_2[0xdb],&local_res8);
  fVar30 = (float)local_res8;
  if (fVar26 < 0.0) {
    fVar26 = fVar26 + fVar1;
    if (fVar26 < fVar1) {
      fVar30 = (float)local_res8 + DAT_1808acda0;
    }
    else {
      fVar26 = 0.0;
    }
  }
  fVar26 = fVar26 + fVar25;
  iVar15 = (int)fVar30 + iVar15;
  if (fVar1 <= fVar26) {
    fVar26 = fVar26 - fVar1;
    iVar15 = iVar15 + 1;
  }
  iVar15 = iVar15 + 1;
  uVar12 = FUN_180446830(param_2);
  local_res8._4_4_ = (float)(uVar12 >> 0x20);
  local_res8._4_4_ = fVar26 - local_res8._4_4_;
  iVar16 = iVar15 - (int)uVar12;
  if (local_res8._4_4_ < 0.0) {
    local_res8._4_4_ = local_res8._4_4_ + fVar1;
    if (local_res8._4_4_ < fVar1) {
      iVar16 = iVar16 + -1;
    }
    else {
      local_res8._4_4_ = 0.0;
    }
  }
  local_res10 = CONCAT44(local_res8._4_4_,iVar16);
  local_res8 = (char *)uVar12;
  cVar7 = FUN_1804468b0(param_2,&local_res10,&local_res8);
  local_1f8 = '\0';
  local_res8 = (char *)((ulonglong)local_res8 & 0xffffffffffffff00);
  if ((*(short *)(param_2 + 0x1ee) == 0x40) || (param_1[0x1c] == '\0')) {
LAB_180447450:
    uVar10 = FUN_18043d6f0(param_2[0x57],param_2[0x5a]);
    local_res10._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    if (0.0 <= local_res10._4_4_) {
LAB_180447485:
      iVar15 = -3;
      fVar25 = local_res10._4_4_;
    }
    else {
      fVar25 = local_res10._4_4_ + fVar1;
      if (fVar1 <= fVar25) {
        local_res10._4_4_ = 0.0;
        goto LAB_180447485;
      }
      iVar15 = -4;
    }
    iVar15 = iVar15 + (int)uVar10;
    local_1f8 = '\0';
    local_res10 = uVar10;
    local_1b0 = iVar15;
    fStack_1ac = fVar25;
    uVar12 = FUN_180446830(param_2);
    iVar15 = iVar15 - (int)uVar12;
    local_res10._4_4_ = (float)(uVar12 >> 0x20);
    fVar25 = fVar25 - local_res10._4_4_;
    if (fVar25 < 0.0) {
      fVar25 = fVar25 + fVar1;
      if (fVar25 < fVar1) {
        iVar15 = iVar15 + -1;
      }
      else {
        fVar25 = 0.0;
      }
    }
    local_1e0 = CONCAT44(fVar25,iVar15);
    local_res10 = uVar12;
    cVar6 = FUN_1804468b0(param_2,&local_1e0,&local_res10);
    if (cVar6 == '\0') {
      local_1c0 = CONCAT44(fStack_1ac,local_1b0);
    }
  }
  else {
    cVar8 = FUN_180474680(param_2,param_4,&local_res10);
    if (cVar7 != '\0') {
      if (cVar8 != '\0') {
        if (cVar6 == '\0') {
          local_1f7 = '\x01';
        }
        else if (((int)local_1f0 <= iVar15) &&
                ((iVar15 != (int)local_1f0 || (local_1f0._4_4_ <= fVar26)))) goto LAB_180447450;
        local_res8 = (char *)CONCAT71(local_res8._1_7_,1);
        local_1f0 = CONCAT44(fVar26,iVar15);
      }
      goto LAB_180447450;
    }
    local_1f8 = '\x01';
    if (cVar8 == '\0') goto LAB_180447450;
    local_1c0 = CONCAT44(fVar26,iVar15);
  }
  if (((param_1[0x1d] == '\0') || (param_1[0x1e] != '\0')) || ((int)param_2[0x186] < 3)) {
LAB_1804476b1:
    iVar16 = (int)local_1f0;
  }
  else {
    uVar10 = FUN_180446830(param_2);
    iVar15 = 0;
    fVar25 = 0.0;
    local_res10 = local_res10 & 0xffffffffffffff00;
    local_1e0 = local_1e0 & 0xffffffff00000000;
    local_1b8 = uVar10;
    if ((int)param_2[0x186] < 1) goto LAB_1804476b1;
    local_1b8._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    fVar26 = local_1b8._4_4_;
    fVar30 = DAT_1808aceb0;
    do {
      uVar24 = (int)param_2[0x187] + iVar15 & 0x8000001f;
      if ((int)uVar24 < 0) {
        uVar24 = (uVar24 - 1 | 0xffffffe0) + 1;
      }
      uVar24 = uVar24 + 0x20 & 0x8000001f;
      if ((int)uVar24 < 0) {
        uVar24 = (uVar24 - 1 | 0xffffffe0) + 1;
      }
      lVar19 = (longlong)(int)uVar24;
      fVar21 = fVar26 + param_2[lVar19 * 5 + 0xe7];
      iVar16 = (uint)(fVar1 <= fVar21) + (int)param_2[lVar19 * 5 + 0xe6] + (int)uVar10;
      if (fVar1 <= fVar21) {
        fVar21 = fVar21 - fVar1;
      }
      uVar13 = FUN_18043d6f0(param_2[0x57],param_2[0x5a]);
      local_1b8._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
      fVar27 = local_1b8._4_4_;
      if (0.0 <= local_1b8._4_4_) {
LAB_1804475ff:
        iVar17 = -3;
      }
      else {
        fVar27 = local_1b8._4_4_ + fVar1;
        if (fVar1 <= fVar27) {
          fVar27 = 0.0;
          goto LAB_1804475ff;
        }
        iVar17 = -4;
      }
      iVar3 = (int)uVar13;
      if ((iVar16 < iVar17 + iVar3) || ((iVar16 == iVar17 + iVar3 && (fVar21 < fVar27)))) {
LAB_180447641:
        if (iVar17 + iVar3 == iVar16) goto LAB_180447647;
LAB_180447676:
        iVar16 = (int)local_1e0;
        cVar6 = (char)local_res10;
      }
      else {
        local_c4 = local_1b8._4_4_;
        if ((iVar3 + 1 < iVar16) || ((iVar16 == iVar3 + 1 && (local_1b8._4_4_ < fVar21)))) {
          fStack_1ac = local_1b8._4_4_;
          iVar17 = 1;
          fVar27 = local_1b8._4_4_;
          goto LAB_180447641;
        }
        fVar27 = fVar21;
LAB_180447647:
        if ((fVar27 != fVar21) || (param_2[lVar19 * 5 + 0xea] <= fVar30)) goto LAB_180447676;
        local_res10 = CONCAT71(local_res10._1_7_,1);
        local_1e0 = CONCAT44(local_1e0._4_4_,iVar16);
        fVar30 = param_2[lVar19 * 5 + 0xea];
        fVar25 = fVar21;
        cVar6 = '\x01';
      }
      iVar15 = iVar15 + 1;
      local_1b8 = uVar13;
    } while (iVar15 < (int)param_2[0x186]);
    if (cVar6 == '\0') goto LAB_1804476b1;
    local_1f7 = '\x01';
    local_1f0 = CONCAT44(fVar25,iVar16);
    local_res8 = (char *)((ulonglong)local_res8 & 0xffffffffffffff00);
  }
  puVar11 = (undefined8 *)FUN_180446ad0(&local_1b0,param_2,&local_1c0);
  local_128 = local_198;
  fVar25 = param_2[0x1e2];
  local_1d0 = *puVar11;
  local_120 = &local_1d0;
  local_118 = local_1d8;
  local_110 = &local_1f8;
  local_108 = &local_1a0;
  local_100 = &local_1c0;
  local_1c8 = *(float *)(puVar11 + 1);
  local_f0 = local_1e8;
  local_1d8[0] = param_2[0x57];
  local_1e8[0] = 0;
  local_f8 = param_5;
  if (DAT_1808abf94 < param_2[0x1d4] - fVar25) {
    FUN_180447d70(&local_128);
  }
  else {
    param_2[0x57] = (float)((int)local_1d8[0] + -1);
    param_2[0x1db] = (float)((int)local_1d8[0] + -1);
    param_2[0x1e2] = param_2[0x1d4];
    cVar6 = FUN_180446a30(param_2,local_res20);
    if (cVar6 != '\0') {
      uVar28 = FUN_1804469a0(param_1,param_2);
      local_1e0 = local_1c0;
      if (local_1f8 == '\0') {
        uVar10 = FUN_18043d6f0(param_2[0x57],param_2[0x5a]);
        local_res10._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
        if (0.0 <= local_res10._4_4_) {
LAB_1804477e0:
          iVar15 = -3;
          fVar26 = local_res10._4_4_;
        }
        else {
          fVar26 = local_res10._4_4_ + fVar1;
          if (fVar1 <= fVar26) {
            local_res10._4_4_ = 0.0;
            goto LAB_1804477e0;
          }
          iVar15 = -4;
        }
        iVar15 = iVar15 + (int)uVar10;
        local_res10 = uVar10;
        local_1b0 = iVar15;
        fStack_1ac = fVar26;
        uVar12 = FUN_180446830(param_2);
        iVar15 = iVar15 - (int)uVar12;
        local_res10._4_4_ = (float)(uVar12 >> 0x20);
        fVar26 = fVar26 - local_res10._4_4_;
        if (fVar26 < 0.0) {
          fVar26 = fVar26 + fVar1;
          if (fVar26 < fVar1) {
            iVar15 = iVar15 + -1;
          }
          else {
            fVar26 = 0.0;
          }
        }
        local_1b8 = CONCAT44(fVar26,iVar15);
        local_res10 = uVar12;
        cVar6 = FUN_1804468b0(param_2,&local_1b8,&local_res10);
        if (cVar6 == '\0') {
          uVar12 = CONCAT44(fStack_1ac,local_1b0);
          fVar29 = param_2[9] + *param_2;
          fVar26 = param_2[10] + param_2[1];
          fVar30 = param_2[0xb] + param_2[2];
          goto LAB_1804479d1;
        }
        uVar10 = FUN_18043d6f0(param_2[0x57],param_2[0x5a]);
        local_res10._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
        if (0.0 <= local_res10._4_4_) {
          fVar26 = local_res10._4_4_;
        }
        else {
          fVar26 = 0.0;
          if (local_res10._4_4_ + fVar1 < fVar1) {
            iVar22 = -4;
            fVar26 = local_res10._4_4_ + fVar1;
          }
        }
        fVar30 = param_2[0x48];
        fVar21 = (float)(iVar22 + (int)uVar10);
        if (((int)fVar21 <= (int)fVar30) && ((fVar30 != fVar21 || (fVar26 <= fVar29)))) {
          fVar27 = (float)((int)uVar10 + 1);
          if ((int)fVar30 <= (int)fVar27) {
            fVar26 = fVar29;
            fVar21 = fVar30;
            if ((fVar30 != fVar27) || (fVar29 <= local_res10._4_4_)) goto LAB_1804478ef;
          }
          fVar26 = local_res10._4_4_;
          fVar21 = fVar27;
        }
LAB_1804478ef:
        local_res10 = CONCAT44(fVar26,fVar21);
        pfVar14 = (float *)FUN_180446ad0(&local_1b0,param_2,&local_res10);
        fVar30 = *pfVar14 - (param_2[9] + *param_2);
        fVar27 = pfVar14[1] - (param_2[10] + param_2[1]);
        fVar29 = pfVar14[2] - (param_2[0xb] + param_2[2]);
        if (fVar27 * fVar27 + fVar30 * fVar30 + fVar29 * fVar29 < DAT_1808abfa0) {
          local_1e0 = CONCAT44(fVar26,fVar21);
          uVar12 = local_1e0;
          fVar29 = *pfVar14;
          fVar26 = pfVar14[1];
          fVar30 = pfVar14[2];
          goto LAB_1804479d1;
        }
        bVar4 = false;
        if (local_res18 != 0) {
          param_2[0x57] = local_1d8[0];
          param_2[0x1db] = local_1d8[0];
          param_2[0x1e2] = fVar25;
          FUN_180447d70(&local_128);
          return;
        }
      }
      else {
        uVar12 = local_1c0;
        fVar29 = (float)local_1d0;
        fVar26 = local_1d0._4_4_;
        fVar30 = local_1c8;
LAB_1804479d1:
        local_17c = param_2[0x57];
        local_178 = local_198[0][0x48];
        local_174 = local_1f8;
        local_168 = 0;
        local_160 = 0;
        local_15c = 0;
        local_14c = 0;
        local_144 = 0;
        local_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_170 = 0;
        local_150 = 1;
        local_13c = 1;
        local_188 = fVar29;
        local_184 = fVar26;
        local_180 = fVar30;
        local_16c = uVar28;
        local_158 = uVar12;
        FUN_18043a500(param_5,&local_188);
        bVar4 = true;
        local_1d0 = CONCAT44(fVar26,fVar29);
        local_1c8 = fVar30;
        local_1c0 = uVar12;
        if (local_res18 != 0) {
          param_2[0x57] = local_1d8[0];
          param_2[0x1db] = local_1d8[0];
          param_2[0x1e2] = fVar25;
          return;
        }
      }
      local_res10 = 0;
      cVar7 = FUN_180446c90(param_2,&local_res10);
      cVar6 = (char)local_res8;
      if (((char)local_res8 == '\0') && (cVar7 != '\0')) {
        pfVar14 = (float *)FUN_180446ad0(&local_1b0,param_2,&local_res10);
        fVar26 = *pfVar14 - (float)local_1d0;
        fVar30 = pfVar14[1] - local_1d0._4_4_;
        fVar29 = pfVar14[2] - local_1c8;
        if (fVar1 < fVar30 * fVar30 + fVar26 * fVar26 + fVar29 * fVar29) {
          local_17c = param_2[0x57];
          local_138 = 0;
          uStack_130 = 0;
          local_178 = local_198[0][0x48];
          local_160 = local_19c;
          local_158 = local_res10;
          local_168 = 0;
          local_14c = 0;
          local_144 = 0;
          local_140 = 0;
          local_174 = '\0';
          local_170 = 0;
          local_150 = 1;
          local_15c = 1;
          local_13c = 1;
          local_188 = *pfVar14;
          local_184 = pfVar14[1];
          local_180 = pfVar14[2];
          local_16c = uVar28;
          FUN_18043a500(param_5,&local_188);
        }
        bVar20 = 1;
      }
      else {
        bVar20 = 0;
      }
      param_2[0x57] = local_1d8[0];
      param_2[0x1db] = local_1d8[0];
      param_2[0x1e2] = fVar25;
      if (!bVar4) {
        FUN_180447d70(&local_128);
      }
      goto LAB_180447c06;
    }
    param_2[0x57] = local_1d8[0];
    param_2[0x1db] = local_1d8[0];
    param_2[0x1e2] = fVar25;
    FUN_180447d70(&local_128);
  }
  bVar20 = 0;
  cVar6 = (char)local_res8;
LAB_180447c06:
  local_res18 = local_res18 | bVar20;
  if ((local_res18 == 0) && (local_1f7 != '\0')) {
    pfVar14 = (float *)FUN_180446ad0(&local_1b0,param_2,&local_1f0);
    local_188 = *pfVar14;
    local_184 = pfVar14[1];
    local_180 = pfVar14[2];
    if (fVar1 < (local_184 - local_1d0._4_4_) * (local_184 - local_1d0._4_4_) +
                (local_188 - (float)local_1d0) * (local_188 - (float)local_1d0) +
                (local_180 - local_1c8) * (local_180 - local_1c8)) {
      local_17c = param_2[0x57];
      local_138 = 0;
      uStack_130 = 0;
      local_178 = local_198[0][0x48];
      local_16c = local_1a0;
      local_168 = 0;
      local_14c = 0;
      local_144 = 0;
      local_140 = 0;
      local_13c = 0;
      local_170 = 0;
      local_158 = CONCAT44((int)((ulonglong)local_1f0 >> 0x20),iVar16);
      local_150 = 1;
      local_160 = local_19c;
      local_15c = 1;
      local_174 = cVar6;
      FUN_18043a500(param_5,&local_188);
    }
  }
  return;
}



/* ===== 180447d70 FUN_180447d70 ===== */

void FUN_180447d70(undefined8 *param_1)

{
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_30 = 1;
  local_68 = *(undefined8 *)param_1[1];
  local_60 = *(undefined4 *)((undefined8 *)param_1[1] + 1);
  local_5c = *(undefined4 *)param_1[2];
  local_58 = *(undefined4 *)(*(longlong *)*param_1 + 0x120);
  local_54 = *(undefined1 *)param_1[3];
  local_4c = *(undefined4 *)param_1[4];
  local_38 = *(undefined8 *)param_1[5];
  FUN_18043a500(param_1[6],&local_68);
  *(undefined1 *)param_1[7] = 1;
  return;
}



/* ===== 180447e30 FUN_180447e30 ===== */

undefined8 FUN_180447e30(longlong param_1,longlong param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_res10;
  undefined8 local_18;
  
  if (*(char *)(param_2 + 0x38) != '\0') {
    return *(undefined8 *)(param_2 + 0x30);
  }
  uVar4 = FUN_18043d6f0(*(undefined4 *)(param_1 + 0x15c));
  local_res10._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fVar2 = local_res10._4_4_;
  iVar3 = (int)uVar4;
  local_res10 = CONCAT44(local_res10._4_4_,iVar3 + -3);
  local_18 = local_res10;
  if (0.0 <= local_res10._4_4_) {
LAB_180447eb1:
    fVar5 = local_18._4_4_;
  }
  else {
    fVar5 = 0.0;
    if (local_res10._4_4_ + DAT_1808ac34c < DAT_1808ac34c) {
      local_res10 = CONCAT44(local_res10._4_4_ + DAT_1808ac34c,iVar3 + -4);
      local_18 = local_res10;
      goto LAB_180447eb1;
    }
  }
  iVar3 = iVar3 + 1;
  iVar1 = *(int *)(param_1 + 0x120);
  if (((int)local_18 <= iVar1) && ((iVar1 != (int)local_18 || (fVar5 <= DAT_1808ac348)))) {
    if (iVar1 <= iVar3) {
      fVar5 = DAT_1808ac348;
      local_18._0_4_ = iVar1;
      if ((iVar1 != iVar3) || (DAT_1808ac348 <= fVar2)) goto LAB_180447f0f;
    }
    fVar5 = fVar2;
    local_18._0_4_ = iVar3;
  }
LAB_180447f0f:
  local_res10 = CONCAT44(fVar5,(int)local_18);
  return local_res10;
}



/* ===== 180447f30 FUN_180447f30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180447f30(float *param_1,undefined8 param_2,char param_3,float *param_4,float *param_5,
                     int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar6 = DAT_1808ac34c;
  if (param_3 == '\0') {
    fVar6 = (float)FUN_180517200();
    fVar7 = (float)FUN_180517200();
    *param_1 = fVar7 * fVar6;
    fVar7 = (float)FUN_180517790();
    param_1[1] = fVar7 * fVar6;
    uVar8 = FUN_180517790();
    param_1[2] = (float)(uVar8 ^ DAT_1808adec0);
    return param_1;
  }
  if (param_4 == (float *)0x0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *param_4;
  }
  if (param_5 == (float *)0x0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = *param_5;
  }
  if (((param_4 != (float *)0x0) && (param_5 != (float *)0x0)) && (1 < param_6)) {
    iVar5 = 0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    if (param_6 < 4) goto LAB_1804480a0;
    iVar4 = iVar5;
    do {
      iVar5 = iVar4 + 4;
      fVar12 = fVar12 + param_4[iVar4] + param_4[(longlong)iVar4 + 1] + param_4[(longlong)iVar4 + 2]
               + param_4[(longlong)iVar4 + 3];
      fVar13 = fVar13 + param_5[iVar4] + param_5[(longlong)iVar4 + 1] + param_5[(longlong)iVar4 + 2]
               + param_5[(longlong)iVar4 + 3];
      iVar4 = iVar5;
    } while (iVar5 < param_6 + -3);
    for (; iVar5 < param_6; iVar5 = iVar5 + 1) {
LAB_1804480a0:
      fVar12 = fVar12 + param_4[iVar5];
      fVar13 = fVar13 + param_5[iVar5];
    }
    iVar5 = 0;
    fVar13 = (DAT_1808ac34c / (float)param_6) * fVar13;
    fVar12 = (DAT_1808ac34c / (float)param_6) * fVar12;
    fVar10 = DAT_1808acd08;
    if (3 < param_6) {
      do {
        fVar9 = param_4[iVar5] - fVar12;
        fVar14 = param_5[iVar5] - fVar13;
        fVar9 = fVar14 * fVar14 + fVar9 * fVar9;
        if (fVar9 < fVar10) {
          fVar7 = param_4[iVar5];
          fVar17 = param_5[iVar5];
          fVar10 = fVar9;
        }
        fVar9 = param_4[(longlong)iVar5 + 1] - fVar12;
        fVar14 = param_5[(longlong)iVar5 + 1] - fVar13;
        fVar9 = fVar14 * fVar14 + fVar9 * fVar9;
        if (fVar9 < fVar10) {
          fVar7 = param_4[(longlong)iVar5 + 1];
          fVar17 = param_5[(longlong)iVar5 + 1];
          fVar10 = fVar9;
        }
        fVar9 = param_4[(longlong)iVar5 + 2] - fVar12;
        fVar14 = param_5[(longlong)iVar5 + 2] - fVar13;
        fVar9 = fVar14 * fVar14 + fVar9 * fVar9;
        if (fVar9 < fVar10) {
          fVar7 = param_4[(longlong)iVar5 + 2];
          fVar17 = param_5[(longlong)iVar5 + 2];
          fVar10 = fVar9;
        }
        fVar9 = param_4[(longlong)iVar5 + 3] - fVar12;
        fVar14 = param_5[(longlong)iVar5 + 3] - fVar13;
        fVar9 = fVar14 * fVar14 + fVar9 * fVar9;
        if (fVar9 < fVar10) {
          fVar7 = param_4[(longlong)iVar5 + 3];
          fVar17 = param_5[(longlong)iVar5 + 3];
          fVar10 = fVar9;
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < param_6 + -3);
      if (param_6 <= iVar5) goto LAB_18044821f;
    }
    do {
      fVar9 = param_4[iVar5] - fVar12;
      fVar14 = param_5[iVar5] - fVar13;
      fVar9 = fVar14 * fVar14 + fVar9 * fVar9;
      if (fVar9 < fVar10) {
        fVar7 = param_4[iVar5];
        fVar17 = param_5[iVar5];
        fVar10 = fVar9;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_6);
  }
LAB_18044821f:
  fVar12 = (float)FUN_180517790();
  fVar13 = (float)FUN_180517200();
  fVar10 = (float)FUN_180517790();
  fVar9 = (float)FUN_180517200();
  fVar14 = (float)FUN_180517790();
  fVar11 = (float)FUN_180517200();
  fVar16 = (fVar9 * fVar13 - (fVar14 * fVar12 * fVar9 - fVar11 * fVar10) * fVar7) +
           (fVar11 * fVar12 * fVar9 + fVar14 * fVar10) * fVar17;
  fVar18 = ((float)((uint)fVar12 ^ DAT_1808adec0) - fVar14 * fVar13 * fVar7) +
           fVar11 * fVar13 * fVar17;
  fVar17 = (fVar10 * fVar13 - (fVar14 * fVar12 * fVar10 + fVar11 * fVar9) * fVar7) +
           (fVar11 * fVar12 * fVar10 - fVar14 * fVar9) * fVar17;
  fVar7 = fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18;
  if (fVar7 < 0.0) {
    fVar12 = (float)FUN_18051af10();
  }
  else {
    fVar12 = SQRT(fVar7);
  }
  if ((fVar12 < DAT_1808abf54) || (DAT_1808accfc < fVar12)) {
    if (fVar7 == 0.0) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
    else {
      dVar1 = (double)fVar16;
      dVar2 = (double)fVar17;
      dVar3 = (double)fVar18;
      dVar15 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
      if (dVar15 < 0.0) {
        dVar15 = (double)FUN_18051ff20();
      }
      else {
        dVar15 = SQRT(dVar15);
      }
      dVar15 = DAT_1808ac500 / dVar15;
      *param_1 = (float)(dVar1 * dVar15);
      param_1[1] = (float)(dVar2 * dVar15);
      param_1[2] = (float)(dVar3 * dVar15);
    }
  }
  else {
    fVar6 = fVar6 / fVar12;
    *param_1 = fVar16 * fVar6;
    param_1[1] = fVar17 * fVar6;
    param_1[2] = fVar18 * fVar6;
  }
  return param_1;
}



/* ===== 1804484b0 FUN_1804484b0 ===== */

void FUN_1804484b0(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  uVar4 = *param_1;
  if (uVar4 == 0) {
    return;
  }
  uVar2 = ((longlong)(param_1[2] - uVar4) >> 3) * 8;
  uVar3 = uVar4;
  if (0xfff < uVar2) {
    uVar3 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar3) - 8;
    if (uVar4 < 0x20) {
      uVar2 = uVar2 + 0x27;
      puVar5 = auStack_28;
    }
    else {
      pcVar1 = (code *)swi(0x29);
      uVar2 = (*pcVar1)(5);
      puVar5 = auStack_20;
      uVar3 = uVar4;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180448517;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



