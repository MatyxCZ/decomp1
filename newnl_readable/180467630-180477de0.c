/* ===== 180467630 FUN_180467630 ===== */

undefined8 FUN_180467630(undefined4 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 extraout_XMM0_Da;
  
  uVar2 = 0;
  if (DAT_180961fa0 != (code *)0x0) {
    plVar1 = (longlong *)(*DAT_180961fa0)(0,0);
    uVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,0);
      *param_1 = extraout_XMM0_Da;
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== 180467670 FUN_180467670 ===== */

void FUN_180467670(longlong param_1)

{
  undefined2 local_resd;
  undefined1 local_resf;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0xf35) = local_resd;
  *(undefined2 *)(param_1 + 0xf3d) = local_resd;
  *(undefined2 *)(param_1 + 0xf45) = local_resd;
  *(undefined2 *)(param_1 + 0xf4d) = local_resd;
  *(undefined2 *)(param_1 + 0xf55) = local_resd;
  *(undefined2 *)(param_1 + 0xf5d) = local_resd;
  *(undefined2 *)(param_1 + 0xf65) = local_resd;
  *(undefined2 *)(param_1 + 0xf6d) = local_resd;
  *(undefined2 *)(param_1 + 0xf75) = local_resd;
  *(undefined2 *)(param_1 + 0xf7d) = local_resd;
  *(undefined2 *)(param_1 + 0xf85) = local_resd;
  *(undefined2 *)(param_1 + 0xf8d) = local_resd;
  *(undefined2 *)(param_1 + 0xf95) = local_resd;
  *(undefined2 *)(param_1 + 0xf9d) = local_resd;
  *(undefined2 *)(param_1 + 0xfa5) = local_resd;
  *(undefined2 *)(param_1 + 0xfad) = local_resd;
  *(undefined2 *)(param_1 + 0xfb5) = local_resd;
  *(undefined2 *)(param_1 + 0xfbd) = local_resd;
  *(undefined2 *)(param_1 + 0xfc5) = local_resd;
  *(undefined1 *)(param_1 + 0xf37) = local_resf;
  *(undefined1 *)(param_1 + 0xf3f) = local_resf;
  *(undefined1 *)(param_1 + 0xf47) = local_resf;
  *(undefined1 *)(param_1 + 0xf4f) = local_resf;
  *(undefined1 *)(param_1 + 0xf57) = local_resf;
  *(undefined1 *)(param_1 + 0xf5f) = local_resf;
  *(undefined1 *)(param_1 + 0xf67) = local_resf;
  *(undefined1 *)(param_1 + 0xf6f) = local_resf;
  *(undefined1 *)(param_1 + 0xf77) = local_resf;
  *(undefined1 *)(param_1 + 0xf7f) = local_resf;
  *(undefined1 *)(param_1 + 0xf87) = local_resf;
  *(undefined1 *)(param_1 + 0xf8f) = local_resf;
  *(undefined1 *)(param_1 + 0xf97) = local_resf;
  *(undefined1 *)(param_1 + 3999) = local_resf;
  *(undefined1 *)(param_1 + 0xfa7) = local_resf;
  *(undefined1 *)(param_1 + 0xfaf) = local_resf;
  *(undefined1 *)(param_1 + 0xfb7) = local_resf;
  *(undefined1 *)(param_1 + 0xfbf) = local_resf;
  *(undefined1 *)(param_1 + 0xfc7) = local_resf;
  *(undefined4 *)(param_1 + 0xf30) = 0;
  *(undefined1 *)(param_1 + 0xf34) = 0;
  *(undefined4 *)(param_1 + 0xf38) = 0;
  *(undefined1 *)(param_1 + 0xf3c) = 0;
  *(undefined4 *)(param_1 + 0xf40) = 0;
  *(undefined1 *)(param_1 + 0xf44) = 0;
  *(undefined4 *)(param_1 + 0xf48) = 0;
  *(undefined1 *)(param_1 + 0xf4c) = 0;
  *(undefined4 *)(param_1 + 0xf50) = 0;
  *(undefined1 *)(param_1 + 0xf54) = 0;
  *(undefined4 *)(param_1 + 0xf58) = 0;
  *(undefined1 *)(param_1 + 0xf5c) = 0;
  *(undefined4 *)(param_1 + 0xf60) = 0;
  *(undefined1 *)(param_1 + 0xf64) = 0;
  *(undefined4 *)(param_1 + 0xf68) = 0;
  *(undefined1 *)(param_1 + 0xf6c) = 0;
  *(undefined4 *)(param_1 + 0xf70) = 0;
  *(undefined1 *)(param_1 + 0xf74) = 0;
  *(undefined4 *)(param_1 + 0xf78) = 0;
  *(undefined1 *)(param_1 + 0xf7c) = 0;
  *(undefined4 *)(param_1 + 0xf80) = 0;
  *(undefined1 *)(param_1 + 0xf84) = 0;
  *(undefined4 *)(param_1 + 0xf88) = 0;
  *(undefined1 *)(param_1 + 0xf8c) = 0;
  *(undefined4 *)(param_1 + 0xf90) = 0;
  *(undefined1 *)(param_1 + 0xf94) = 0;
  *(undefined4 *)(param_1 + 0xf98) = 0;
  *(undefined1 *)(param_1 + 0xf9c) = 0;
  *(undefined4 *)(param_1 + 4000) = 0;
  *(undefined1 *)(param_1 + 0xfa4) = 0;
  *(undefined4 *)(param_1 + 0xfa8) = 0;
  *(undefined1 *)(param_1 + 0xfac) = 0;
  *(undefined4 *)(param_1 + 0xfb0) = 0;
  *(undefined1 *)(param_1 + 0xfb4) = 0;
  *(undefined4 *)(param_1 + 0xfb8) = 0;
  *(undefined1 *)(param_1 + 0xfbc) = 0;
  *(undefined4 *)(param_1 + 0xfc0) = 0;
  *(undefined1 *)(param_1 + 0xfc4) = 0;
  if (*(longlong *)(param_1 + 0xf18) != *(longlong *)(param_1 + 0xf20)) {
    *(longlong *)(param_1 + 0xf20) = *(longlong *)(param_1 + 0xf18);
  }
  return;
}



/* ===== 1804678b0 FUN_1804678b0 ===== */

undefined8 FUN_1804678b0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_180469950(param_2);
  }
  if ((lVar4 == param_1[1]) && (param_2 == lVar5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  param_1[1] = lVar4;
  if (lVar4 == 0) {
LAB_180467914:
    iVar3 = -1;
  }
  else {
    lVar5 = FUN_18000f3a0(lVar4 + 0x10);
    if (lVar5 == 0) goto LAB_180467914;
    iVar3 = FUN_180011200(lVar5 + 0x10);
  }
  if (*(int *)((longlong)param_1 + 0x14) == iVar3) {
    if (((!bVar1) && (lVar4 != 0)) && (param_2 != 0)) {
      if (DAT_1811122d4 != 0) {
        iVar3 = FUN_180011200(param_2 + (ulonglong)DAT_1811122d4);
        if (iVar3 != 0) goto LAB_180467921;
      }
      if (DAT_1811122e4 != 0) {
        lVar5 = FUN_18000f3a0(lVar4 + (ulonglong)DAT_1811122e4);
        if (lVar5 != 0) {
          if ((param_1[1] != 0) && (DAT_1811122dc != 0)) {
            cVar2 = FUN_180011220((ulonglong)DAT_1811122dc + param_1[1]);
            if ((cVar2 == '\0') && (param_1[1] != 0)) {
              lVar5 = FUN_18000f3a0(param_1[1] + 0x10);
              if (lVar5 != 0) {
                cVar2 = FUN_180011220(lVar5 + 0x30);
                if (-1 < cVar2) {
                  *(undefined4 *)(param_1 + 3) = 2;
                  return 1;
                }
              }
            }
          }
          FUN_180467670(param_1);
          *(undefined4 *)(param_1 + 3) = 1;
          return 0;
        }
      }
    }
  }
  else {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
LAB_180467921:
  FUN_180467670(param_1);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0xd;
  param_1[0x1e2] = 0;
  return 0;
}



/* ===== 180467a00 FUN_180467a00 ===== */

bool FUN_180467a00(void)

{
  bool bVar1;
  
  bVar1 = DAT_180961bb0 != (code *)0x0;
  if (bVar1) {
    (*DAT_180961bb0)();
  }
  return bVar1;
}



/* ===== 180467a20 FUN_180467a20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180467a20(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Da;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_res8;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined1 local_d8 [176];
  
  lVar10 = *(longlong *)(param_1 + 8);
  fVar13 = (float)FUN_18000f3d0((ulonglong)DAT_1811122e0 + lVar10);
  fVar23 = *(float *)(param_1 + 0x3c);
  if (fVar13 == fVar23) {
    return;
  }
  if (fVar23 == 0.0) {
    fVar19 = DAT_1808ac00c;
  }
  else {
    fVar23 = fVar13 - fVar23;
    fVar19 = DAT_1808ac140;
    if ((fVar23 <= DAT_1808ac140) && (fVar19 = fVar23, fVar23 <= DAT_1808ac00c)) {
      fVar19 = DAT_1808ac00c;
    }
  }
  lVar5 = FUN_18000f3a0((ulonglong)DAT_1811122e4 + lVar10);
  if (lVar5 == 0) {
    local_e8 = 0;
    local_e0 = 0.0;
  }
  else {
    puVar6 = (undefined8 *)FUN_1800111b0(&local_f8,(ulonglong)DAT_18111230c + lVar5);
    local_e8 = *puVar6;
    local_e0 = *(float *)(puVar6 + 1);
  }
  FUN_180467a00(lVar10,&local_e8);
  uVar1 = FUN_180011200((ulonglong)DAT_1811122e8 + lVar10);
  fVar23 = DAT_1808ac34c;
  if (*(float *)(param_1 + 0x3c) == 0.0) {
LAB_180467b99:
    uVar12 = (ulonglong)DAT_1811122f4;
    goto LAB_180468053;
  }
  uVar12 = (ulonglong)DAT_1811122f0;
  if (DAT_1811122f0 != 0) {
    if ((DAT_180961a50 == 0) || (lVar7 = FUN_18000f3a0(), lVar7 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_180011200(lVar7 + 0x44);
    }
    iVar3 = FUN_180011200(lVar10 + uVar12);
    if (iVar3 == iVar2) goto LAB_180467b99;
  }
  fVar14 = local_e0 - *(float *)(param_1 + 0x38);
  uVar11 = uVar1 & 1;
  if ((uVar11 == 0) && (((uVar1 ^ *(uint *)(param_1 + 0x20)) & 2) != 0)) {
    if ((uVar1 & 2) == 0) {
      fVar20 = DAT_1808ac844;
    }
    else {
      fVar20 = DAT_1808ace18;
    }
    fVar14 = fVar20 + fVar14;
  }
  local_f0 = fVar23 / fVar19;
  fVar21 = ((float)local_e8 - *(float *)(param_1 + 0x30)) * local_f0;
  fVar20 = (local_e8._4_4_ - *(float *)(param_1 + 0x34)) * local_f0;
  local_f0 = local_f0 * fVar14;
  local_f8 = CONCAT44(fVar20,fVar21);
  if (((uint)fVar21 & 0x7f800000) == 0x7f800000) {
    fVar21 = 0.0;
    local_f8 = (ulonglong)(uint)fVar20 << 0x20;
  }
  if (((uint)fVar20 & 0x7f800000) == 0x7f800000) {
    fVar20 = 0.0;
    local_f8 = local_f8 & 0xffffffff;
  }
  if (((uint)local_f0 & 0x7f800000) == 0x7f800000) {
    local_f0 = 0.0;
  }
  if (uVar11 != 0) {
    local_f0 = 0.0;
  }
  fVar14 = local_f0;
  fVar22 = fVar20 * fVar20 + fVar21 * fVar21 + local_f0 * local_f0;
  if (_DAT_1808accec < fVar22) {
    if (fVar22 < 0.0) {
      fVar15 = (float)FUN_18051af10(fVar22);
    }
    else {
      fVar15 = SQRT(fVar22);
    }
    if ((fVar15 < DAT_1808abf54) || (DAT_1808accfc < fVar15)) {
      if (fVar22 == 0.0) {
        fVar14 = 0.0;
        fVar20 = 0.0;
        fVar15 = 0.0;
      }
      else {
        dVar16 = (double)fVar22;
        if (dVar16 < 0.0) {
          dVar16 = (double)FUN_18051ff20(SUB84(dVar16,0));
        }
        else {
          dVar16 = SQRT(dVar16);
        }
        dVar16 = DAT_1808ac500 / dVar16;
        fVar14 = (float)((double)fVar14 * dVar16);
        fVar20 = (float)((double)fVar20 * dVar16);
        fVar15 = (float)((double)fVar21 * dVar16);
      }
    }
    else {
      fVar15 = fVar23 / fVar15;
      fVar14 = fVar15 * fVar14;
      fVar20 = fVar15 * fVar20;
      fVar15 = fVar15 * fVar21;
    }
    fVar21 = fVar15 * DAT_1808acc60;
    fVar20 = fVar20 * DAT_1808acc60;
    local_f0 = fVar14 * DAT_1808acc60;
    local_f8 = CONCAT44(fVar20,fVar21);
  }
  fVar22 = local_f0;
  fVar14 = DAT_1808ac1f4;
  if (uVar11 == 0) {
    if (DAT_180c8aa68 == 0) {
      if (DAT_180c8aa70 == '\0') {
        DAT_180c8aa68 = FUN_180264b70(PTR_s_sv_gravity_180c8aa60);
        DAT_180c8aa70 = DAT_180c8aa68 == 0;
        if (DAT_180c8aa68 != 0) goto LAB_180467e02;
      }
LAB_180467e27:
      fVar15 = DAT_1808acc30;
    }
    else {
LAB_180467e02:
      fVar15 = (float)FUN_180264d70(DAT_180c8aa68);
      local_res8 = CONCAT44(local_res8._4_4_,fVar15);
      if (((uint)fVar15 & 0x7f800000) == 0x7f800000) goto LAB_180467e27;
    }
    local_f0 = fVar22 - fVar15 * fVar19 * fVar14;
  }
  if (((DAT_1808ac040 <= fVar19) && (fVar19 = fVar20 * fVar20 + fVar21 * fVar21, fVar23 < fVar19))
     && (*(int *)(param_1 + 0xf10) != 0)) {
    uVar11 = *(uint *)(param_1 + 0xf14) & 0x8000000f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
    }
    uVar11 = uVar11 + 0x10 & 0x8000000f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
    }
    fVar22 = *(float *)((longlong)(int)uVar11 * 0xe8 + 200 + param_1);
    fVar15 = *(float *)((longlong)(int)uVar11 * 0xe8 + 0xcc + param_1);
    fVar18 = fVar15 * fVar15 + fVar22 * fVar22;
    if (fVar23 < fVar18) {
      if (fVar19 < 0.0) {
        fVar19 = (float)FUN_18051af10(fVar19);
      }
      else {
        fVar19 = SQRT(fVar19);
      }
      if (fVar18 < 0.0) {
        fVar18 = (float)FUN_18051af10(fVar18);
      }
      else {
        fVar18 = SQRT(fVar18);
      }
      fVar17 = (fVar15 / fVar18) * (fVar20 / fVar19) + (fVar22 / fVar18) * (fVar21 / fVar19);
      if ((0.0 < fVar17) && (fVar17 <= DAT_1808ac338)) {
        fVar17 = (float)FUN_180516b00(fVar20 / fVar19,fVar21 / fVar19);
        fVar21 = DAT_1808aca98;
        fVar17 = fVar17 * DAT_1808aca98;
        fVar22 = (float)FUN_180516b00(fVar15 / fVar18,fVar22 / fVar18);
        fVar20 = DAT_1808abfd0;
        fVar15 = fVar17 - fVar22 * fVar21;
        fVar22 = (float)FUN_18053f0d0(fVar15 * DAT_1808abfd0 + fVar14);
        fVar21 = DAT_1808acbd0;
        fVar17 = (fVar15 - fVar22 * DAT_1808acbd0) * fVar14 + fVar17;
        fVar14 = (float)FUN_18053f0d0(fVar17 * fVar20 + fVar14);
        fVar20 = (fVar17 - fVar14 * fVar21) * DAT_1808ac014;
        fVar14 = (float)FUN_180517200(fVar20);
        local_f8 = CONCAT44(local_f8._4_4_,fVar14 * fVar19);
        fVar14 = (float)FUN_180517790(fVar20);
        local_f8 = CONCAT44(fVar14 * fVar19,(undefined4)local_f8);
      }
    }
  }
  uVar12 = (ulonglong)DAT_1811122f4;
  FUN_180023a50(lVar10 + uVar12,&local_f8);
LAB_180468053:
  uVar4 = (undefined4)local_e8;
  *(undefined8 *)(param_1 + 0x30) = local_e8;
  *(undefined8 *)(param_1 + 0x24) = local_e8;
  *(float *)(param_1 + 0x38) = local_e0;
  *(float *)(param_1 + 0x2c) = local_e0;
  uVar11 = DAT_1811122ec;
  uVar8 = (ulonglong)DAT_1811122ec;
  *(uint *)(param_1 + 0x20) = uVar1;
  if (uVar11 != 0) {
    uVar4 = FUN_180011200(lVar10 + uVar8);
    local_res8 = CONCAT44(local_res8._4_4_,uVar4) & 0xffffffffffffefff;
    uVar4 = FUN_180013280(lVar10 + uVar8,&local_res8);
  }
  uVar8 = (ulonglong)DAT_1811122f8;
  if (DAT_1811122f8 != 0) {
    puVar9 = (ulonglong *)FUN_1800111b0(local_d8,uVar12 + lVar10);
    local_f8 = *puVar9;
    local_f0 = *(float *)(puVar9 + 1);
    uVar4 = FUN_180023a50(lVar10 + uVar8,&local_f8);
  }
  if (((DAT_181112320 != 0) &&
      (lVar7 = FUN_18000f3a0(lVar10 + (ulonglong)DAT_181112320), uVar4 = extraout_XMM0_Da,
      lVar7 != 0)) &&
     ((uVar12 = (ulonglong)DAT_181112324, DAT_181112324 != 0 &&
      (uVar8 = (ulonglong)DAT_18111232c, DAT_18111232c != 0)))) {
    fVar19 = 0.0;
    if (((lVar5 != 0) && (DAT_181112318 != 0)) && (DAT_18111231c != 0)) {
      fVar19 = (float)FUN_18000f3d0((ulonglong)DAT_181112318 + (ulonglong)DAT_18111231c + lVar5);
    }
    lVar10 = FUN_1800111b0(local_d8,lVar10 + uVar8);
    fVar19 = ((*(float *)(lVar10 + 8) - fVar19) - _DAT_1808aca70) / DAT_1808ac934;
    if (0.0 <= fVar19) {
      if (fVar23 <= fVar19) {
        fVar19 = fVar23;
      }
      fVar23 = fVar23 - fVar19;
    }
    local_res8 = CONCAT44(local_res8._4_4_,fVar23);
    uVar4 = FUN_180013280(lVar7 + uVar12,&local_res8);
  }
  *(float *)(param_1 + 0x3c) = fVar13;
  local_res8 = param_1;
  FUN_18046b210(uVar4,&local_res8);
  return;
}



/* ===== 1804681f0 FUN_1804681f0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804681f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
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
  float fVar25;
  float fVar26;
  undefined1 auStack_1188 [32];
  ulonglong local_1168;
  undefined1 local_1160;
  float local_1158;
  undefined1 local_1154;
  longlong *local_1150;
  float local_1148;
  float local_1144;
  float local_1140;
  float local_113c;
  float local_1138;
  float local_1134;
  ulonglong local_1130;
  float local_1128;
  float fStack_1124;
  float fStack_1120;
  float fStack_111c;
  float local_1118;
  float fStack_1114;
  float fStack_1110;
  float fStack_110c;
  float local_1108;
  float fStack_1104;
  float fStack_1100;
  float fStack_10fc;
  float local_10f8;
  float fStack_10f4;
  undefined1 uStack_10f0;
  char cStack_10ef;
  undefined1 uStack_10ee;
  undefined1 uStack_10ed;
  float fStack_10ec;
  ulonglong local_10d8;
  undefined1 local_10d0 [16];
  undefined1 local_10c0 [16];
  undefined1 *local_10b0;
  ulonglong local_10a8;
  undefined1 local_10a0 [4032];
  ulonglong local_e0;
  
  local_e0 = DAT_180919500 ^ (ulonglong)auStack_1188;
  plVar11 = (longlong *)(param_1 + 0x80);
  lVar9 = *plVar11;
  lVar8 = *(longlong *)(param_1 + 0x88);
  if (lVar9 != lVar8) {
    *(longlong *)(param_1 + 0x88) = lVar9;
    lVar8 = lVar9;
  }
  uVar5 = *(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98) >> 5;
  uVar13 = param_2[1] - *param_2 >> 3;
  if (uVar5 < uVar13) {
    uVar13 = uVar5;
  }
  lVar9 = *plVar11;
  local_1150 = param_2;
  local_10d8 = uVar13;
  if ((ulonglong)((*(longlong *)(param_1 + 0x90) - lVar9 >> 3) * -0x71c71c71c71c71c7) < uVar13) {
    if (0x38e38e38e38e38e < uVar13) {
LAB_180468a93:
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar6 = FUN_18000fb70(uVar13 * 0x48);
    FUN_180540530(uVar6,*plVar11,*(longlong *)(param_1 + 0x88) - *plVar11);
    FUN_18008d2a0(plVar11,uVar6,(lVar8 - lVar9 >> 3) * -0x71c71c71c71c71c7,uVar13);
  }
  if (uVar13 != 0) {
    uVar5 = 0;
    plVar11 = local_1150;
    do {
      lVar9 = *(longlong *)(*plVar11 + uVar5 * 8);
      if (lVar9 != 0) {
        cVar3 = FUN_180011220(lVar9 + 0x3c);
        if (cVar3 == '\x02') {
          fVar15 = (float)FUN_18000f3d0(lVar9 + 0x30);
          local_1130 = CONCAT44(local_1130._4_4_,fVar15);
          if (DAT_1808abf94 <= fVar15) {
            lVar8 = *(longlong *)(param_1 + 0x98);
            pfVar7 = (float *)FUN_1800111b0(local_10d0,lVar9 + 0x18);
            fVar15 = *pfVar7;
            fVar24 = pfVar7[1];
            local_1140 = pfVar7[2];
            lVar12 = uVar5 * 0x20;
            local_1144 = *(float *)(lVar8 + 0x10 + lVar12);
            local_1148 = *(float *)(lVar8 + 0x14 + lVar12);
            fVar18 = *(float *)(lVar8 + 0x18 + lVar12);
            local_1158 = local_1140 * local_1148 - fVar24 * fVar18;
            local_1158 = local_1158 + local_1158;
            fVar25 = fVar15 * fVar18 - local_1140 * local_1144;
            fVar25 = fVar25 + fVar25;
            fVar19 = fVar24 * local_1144 - fVar15 * local_1148;
            fVar19 = fVar19 + fVar19;
            fVar21 = *(float *)(lVar8 + 0x1c + lVar12);
            pfVar7 = (float *)FUN_1800111b0(local_10c0,lVar9 + 0x24);
            fVar20 = *pfVar7;
            fVar23 = *(float *)(lVar8 + 0x10 + lVar12);
            fVar26 = *(float *)(lVar8 + 0x14 + lVar12);
            fVar2 = *(float *)(lVar8 + 0x18 + lVar12);
            local_1138 = pfVar7[2] * fVar26 - pfVar7[1] * fVar2;
            local_1138 = local_1138 + local_1138;
            local_113c = fVar20 * fVar2 - pfVar7[2] * fVar23;
            local_113c = local_113c + local_113c;
            fVar22 = pfVar7[1] * fVar23 - fVar20 * fVar26;
            fVar22 = fVar22 + fVar22;
            fVar23 = *(float *)(lVar8 + 0x1c + lVar12);
            fVar16 = *(float *)(lVar8 + 0xc + lVar12) *
                     (fVar21 * local_1158 + fVar15 + (fVar19 * local_1148 - fVar25 * fVar18)) +
                     *(float *)(lVar8 + lVar12);
            fVar15 = *(float *)(lVar8 + 4 + lVar12);
            fVar26 = *(float *)(lVar8 + 0xc + lVar12);
            fVar17 = fVar26 * (fVar21 * fVar25 + fVar24 +
                              (local_1158 * fVar18 - fVar19 * local_1144)) + fVar15;
            fVar24 = *(float *)(lVar8 + 8 + lVar12);
            fVar19 = fVar26 * (fVar21 * fVar19 + local_1140 +
                              (fVar25 * local_1144 - local_1158 * local_1148)) + fVar24;
            fVar18 = *(float *)(lVar8 + 0x14 + lVar12);
            fVar20 = fVar26 * (fVar23 * local_1138 + fVar20 + (fVar22 * fVar18 - local_113c * fVar2)
                              ) + *(float *)(lVar8 + lVar12);
            fVar21 = *(float *)(lVar8 + 0x10 + lVar12);
            fVar15 = fVar26 * (fVar23 * local_113c + pfVar7[1] +
                              (local_1138 * fVar2 - fVar22 * fVar21)) + fVar15;
            fVar24 = fVar26 * (fVar23 * fVar22 + pfVar7[2] +
                              (local_113c * fVar21 - local_1138 * fVar18)) + fVar24;
            fVar21 = fVar20 - fVar16;
            fVar23 = fVar15 - fVar17;
            fVar26 = fVar24 - fVar19;
            fVar18 = fVar26 * fVar26 + fVar23 * fVar23 + fVar21 * fVar21;
            local_1158 = fVar17;
            local_1134 = fVar16;
            if (fVar18 < 0.0) {
              fVar18 = (float)FUN_18051af10(fVar18);
            }
            else {
              fVar18 = SQRT(fVar18);
            }
            if (DAT_1808abfbc <= fVar18) {
              local_1128 = (fVar20 + fVar16) * DAT_1808ac1f4;
              fStack_1124 = (fVar15 + fVar17) * DAT_1808ac1f4;
              fStack_1120 = (fVar24 + fVar19) * DAT_1808ac1f4;
              fStack_10fc = DAT_1808ac34c / fVar18;
              fStack_1104 = fStack_10fc * fVar21;
              fStack_1100 = fStack_10fc * fVar23;
              fStack_10fc = fStack_10fc * fVar26;
              fStack_10f4 = (float)local_1130;
              uStack_10f0 = (undefined1)uVar5;
              fStack_111c = fVar16;
              local_1118 = fVar17;
              fStack_1114 = fVar19;
              fStack_1110 = fVar20;
              fStack_110c = fVar15;
              local_1108 = fVar24;
              local_10f8 = fVar18;
              iVar4 = FUN_180011200(lVar9 + 0x38);
              cStack_10ef = (char)iVar4;
              if (iVar4 - 1U < 8) {
                uStack_10ee = (undefined1)(0x306060404010200 >> (cStack_10ef * '\b' - 8U & 0x3f));
              }
              else {
                uStack_10ee = 5;
              }
              puVar10 = *(undefined8 **)(param_1 + 0x88);
              if (puVar10 == *(undefined8 **)(param_1 + 0x90)) {
                lVar8 = (longlong)puVar10 - *(longlong *)(param_1 + 0x80);
                lVar8 = lVar8 / 0x12 + (lVar8 >> 0x3f);
                lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
                if (lVar8 == 0x38e38e38e38e38e) goto LAB_180468a93;
                local_1130 = lVar8 + 1;
                uVar13 = ((longlong)*(undefined8 **)(param_1 + 0x90) - *(longlong *)(param_1 + 0x80)
                         >> 3) * -0x71c71c71c71c71c7;
                if (0x38e38e38e38e38e - (uVar13 >> 1) < uVar13) {
                  uVar14 = 0x38e38e38e38e38e;
                }
                else {
                  uVar13 = (uVar13 >> 1) + uVar13;
                  uVar14 = local_1130;
                  if (local_1130 <= uVar13) {
                    uVar14 = uVar13;
                  }
                  if (0x38e38e38e38e38e < uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_18000d840();
                  }
                }
                lVar12 = FUN_18000fb70(uVar14 * 0x48);
                puVar1 = (undefined8 *)(lVar12 + lVar8 * 0x48);
                *puVar1 = CONCAT44(fStack_1124,local_1128);
                puVar1[1] = CONCAT44(fStack_111c,fStack_1120);
                puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar8 * 0x48);
                *puVar1 = CONCAT44(fStack_1114,local_1118);
                puVar1[1] = CONCAT44(fStack_110c,fStack_1110);
                pfVar7 = (float *)(lVar12 + 0x20 + lVar8 * 0x48);
                *pfVar7 = local_1108;
                pfVar7[1] = fStack_1104;
                pfVar7[2] = fStack_1100;
                pfVar7[3] = fStack_10fc;
                pfVar7 = (float *)(lVar12 + 0x30 + lVar8 * 0x48);
                *pfVar7 = local_10f8;
                pfVar7[1] = fStack_10f4;
                pfVar7[2] = (float)CONCAT13(uStack_10ed,
                                            CONCAT12(uStack_10ee,CONCAT11(cStack_10ef,uStack_10f0)))
                ;
                pfVar7[3] = fStack_10ec;
                *(longlong *)(lVar12 + 0x40 + lVar8 * 0x48) = lVar9;
                puVar1 = *(undefined8 **)(param_1 + 0x80);
                if (puVar10 == *(undefined8 **)(param_1 + 0x88)) {
                  lVar8 = (longlong)*(undefined8 **)(param_1 + 0x88) - (longlong)puVar1;
                  lVar9 = lVar12;
                  puVar10 = puVar1;
                }
                else {
                  FUN_180540530(lVar12,puVar1,(longlong)puVar10 - (longlong)puVar1);
                  lVar9 = lVar12 + (lVar8 * 9 + 9) * 8;
                  lVar8 = *(longlong *)(param_1 + 0x88) - (longlong)puVar10;
                }
                FUN_180540530(lVar9,puVar10,lVar8);
                FUN_18008d2a0(param_1 + 0x80,lVar12,local_1130,uVar14);
                uVar13 = local_10d8;
              }
              else {
                *puVar10 = CONCAT44(fStack_1124,local_1128);
                puVar10[1] = CONCAT44(fStack_111c,fStack_1120);
                puVar10[2] = CONCAT44(fStack_1114,local_1118);
                puVar10[3] = CONCAT44(fStack_110c,fStack_1110);
                *(float *)(puVar10 + 4) = local_1108;
                *(float *)((longlong)puVar10 + 0x24) = fStack_1104;
                *(float *)(puVar10 + 5) = fStack_1100;
                *(float *)((longlong)puVar10 + 0x2c) = fStack_10fc;
                puVar10[6] = CONCAT44(fStack_10f4,local_10f8);
                puVar10[7] = CONCAT44(fStack_10ec,
                                      CONCAT13(uStack_10ed,
                                               CONCAT12(uStack_10ee,
                                                        CONCAT11(cStack_10ef,uStack_10f0))));
                puVar10[8] = lVar9;
                *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 0x48;
              }
            }
          }
        }
        plVar11 = local_1150;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar13);
  }
  lVar9 = *(longlong *)(param_1 + 0x88);
  lVar8 = *(longlong *)(param_1 + 0x80);
  lVar12 = (lVar9 - lVar8 >> 3) * -0x71c71c71c71c71c7;
  if (lVar12 < 0x21) {
    FUN_18046afa0(lVar8,lVar9);
  }
  else {
    uVar5 = lVar12 - (lVar9 - lVar8) / 0x90;
    uVar13 = 0x7fffffffffffffff;
    if ((longlong)uVar5 < 0x7fffffffffffffff) {
      uVar13 = uVar5;
    }
    if (0x38 < uVar5) {
      if ((uVar13 < 0x38e38e38e38e38f) && (0 < (longlong)uVar13)) {
        do {
          local_10b0 = (undefined1 *)FUN_1804ed030(uVar13 * 0x48,&DAT_1805757b2);
          if (local_10b0 != (undefined1 *)0x0) {
            if (0x38 < uVar13) goto LAB_1804689ed;
            goto LAB_1804689d8;
          }
          uVar13 = uVar13 >> 1;
        } while (uVar13 != 0);
      }
      local_10b0 = (undefined1 *)0x0;
LAB_1804689d8:
      FUN_1803d64e0(local_10b0);
      uVar5 = 0x38;
    }
    uVar13 = uVar5;
    local_10b0 = local_10a0;
LAB_1804689ed:
    local_1160 = local_1154;
    local_1168 = uVar13;
    local_10a8 = uVar13;
    FUN_18046b110(lVar8,lVar9,lVar12);
    if (0x38 < local_10a8) {
      FUN_1803d64e0(local_10b0);
    }
  }
  return;
}



/* ===== 180468aa0 FUN_180468aa0 ===== */

undefined8 FUN_180468aa0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return 1;
}



/* ===== 180468ac0 FUN_180468ac0 ===== */

undefined1 FUN_180468ac0(undefined8 param_1)

{
  (*DAT_180962160)(param_1,0xfffff);
  return 1;
}



/* ===== 180468ae0 FUN_180468ae0 ===== */

undefined8 FUN_180468ae0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(*DAT_180962008)();
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    *param_2 = *puVar2;
    uVar1 = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)(param_2 + 1) = uVar1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar3;
}



/* ===== 180468b20 FUN_180468b20 ===== */

undefined1 FUN_180468b20(undefined8 param_1)

{
  (*DAT_180961f88)(param_1,&DAT_180c8a810,&DAT_180c8aa80,0);
  return 1;
}



/* ===== 180468b50 FUN_180468b50 ===== */

undefined8 * FUN_180468b50(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0x20;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x3f800000;
  return param_1;
}



/* ===== 180468fd0 FUN_180468fd0 ===== */

undefined1 FUN_180468fd0(void)

{
  (*DAT_180961f90)();
  return 1;
}



/* ===== 180468ff0 FUN_180468ff0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180468ff0(longlong param_1,int *param_2,longlong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  ushort uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined *puVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong local_res20;
  int local_a8 [2];
  undefined8 local_a0;
  int local_98;
  undefined1 local_90 [16];
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  
  iVar20 = 0;
  local_res20 = param_4 & 0xffffffff00000000;
  fVar15 = (float)FUN_18000f3d0((ulonglong)DAT_1811122e0 + param_1);
  fVar16 = (float)FUN_180512fd0(fVar15 * DAT_1808acab0,&local_res20);
  fVar15 = (float)local_res20;
  if (fVar16 < 0.0) {
    fVar16 = fVar16 + DAT_1808ac34c;
    if (fVar16 < DAT_1808ac34c) {
      fVar15 = (float)local_res20 + DAT_1808acda0;
    }
    else {
      fVar16 = 0.0;
    }
  }
  *param_2 = (int)fVar15;
  param_2[1] = (int)fVar16;
  lVar7 = FUN_18000f3a0((ulonglong)DAT_1811122e4 + param_1);
  if (lVar7 == 0) {
    local_a0 = 0;
    local_98 = 0;
  }
  else {
    puVar8 = (undefined8 *)FUN_1800111b0(local_90,(ulonglong)DAT_18111230c + lVar7);
    local_a0 = *puVar8;
    local_98 = *(int *)(puVar8 + 1);
  }
  *(undefined8 *)(param_2 + 5) = local_a0;
  param_2[7] = local_98;
  uVar13 = (ulonglong)DAT_181112300;
  puVar8 = (undefined8 *)FUN_1800111b0(local_90,DAT_181112304 + uVar13 + param_1);
  iVar17 = *(int *)(puVar8 + 1);
  *(undefined8 *)(param_2 + 8) = *puVar8;
  param_2[10] = iVar17;
  puVar8 = (undefined8 *)FUN_1800111b0(local_90,DAT_181112308 + uVar13 + param_1);
  iVar17 = *(int *)(puVar8 + 1);
  *(undefined8 *)(param_2 + 0xb) = *puVar8;
  param_2[0xd] = iVar17;
  puVar8 = (undefined8 *)FUN_1800111b0(local_90,(ulonglong)DAT_1811122f4 + param_1);
  iVar17 = *(int *)(puVar8 + 1);
  *(undefined8 *)(param_2 + 0xe) = *puVar8;
  param_2[0x10] = iVar17;
  local_a0 = 0;
  local_98 = 0;
  if (lVar7 != 0) {
    if ((DAT_180962008 != 0) && (cVar5 = FUN_180468ae0(param_1,&local_a0), cVar5 != '\0')) {
      iVar17 = (int)local_a0;
      iVar18 = local_a0._4_4_;
      iVar19 = local_98;
      goto LAB_1804691be;
    }
    if (DAT_181112314 != 0) {
      piVar9 = (int *)FUN_1800111b0(local_90,lVar7 + (ulonglong)DAT_181112314);
      iVar17 = *piVar9;
      iVar18 = piVar9[1];
      iVar19 = piVar9[2];
      goto LAB_1804691be;
    }
  }
  iVar17 = 0;
  iVar18 = 0;
  iVar19 = 0;
LAB_1804691be:
  param_2[0x11] = iVar17;
  param_2[0x12] = iVar18;
  param_2[0x13] = iVar19;
  if (DAT_181112328 == 0) {
    iVar17 = 0;
    iVar18 = 0;
  }
  else {
    piVar9 = (int *)FUN_1800111b0(local_90,param_1 + (ulonglong)DAT_181112328);
    iVar17 = *piVar9;
    iVar18 = piVar9[1];
  }
  param_2[0x14] = iVar18;
  param_2[0x15] = iVar17;
  param_2[0x17] = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  if (*(longlong *)(param_2 + 0x20) != *(longlong *)(param_2 + 0x22)) {
    *(longlong *)(param_2 + 0x22) = *(longlong *)(param_2 + 0x20);
  }
  plVar1 = (longlong *)(param_2 + 0x34);
  if (*plVar1 != *(longlong *)(param_2 + 0x36)) {
    *(longlong *)(param_2 + 0x36) = *plVar1;
  }
  if (*(longlong *)(param_2 + 0x26) != *(longlong *)(param_2 + 0x28)) {
    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x26);
  }
  param_2[2] = -1;
  if (((DAT_181112320 != 0) &&
      (lVar10 = FUN_18000f3a0(param_1 + (ulonglong)DAT_181112320), lVar10 != 0)) &&
     (DAT_181112324 != 0)) {
    iVar20 = FUN_18000f3d0((ulonglong)DAT_181112324 + lVar10);
  }
  param_2[0x16] = iVar20;
  if ((lVar7 != 0) && (lVar10 = FUN_180047bf0(lVar7), lVar10 != 0)) {
    if ((DAT_181112318 != 0) && (DAT_18111231c != 0)) {
      iVar20 = FUN_18000f3d0((ulonglong)DAT_18111231c + lVar10 + (ulonglong)DAT_181112318);
      param_2[0x17] = iVar20;
    }
    FUN_180468aa0(lVar10);
    DAT_180c8a810 = 0;
    DAT_180c8a818 = &DAT_180c8a830;
    _DAT_180c8a820 = 0x20;
    _DAT_180c8a824 = 0x80000000;
    DAT_180c8aa80 = 0;
    DAT_180c8aa90 = &DAT_180c8aaa0;
    _DAT_180c8aa98 = 0x20;
    _DAT_180c8aa9c = 0x80000000;
    if (DAT_180962160 != 0) {
      FUN_180468ac0(lVar10);
    }
    if ((DAT_180961f88 != 0) && (cVar5 = FUN_180468b20(lVar10), cVar5 != '\0')) {
      local_res20 = local_res20 & 0xffffffff00000000;
      puVar14 = &DAT_180c8aaa0;
      if (DAT_180c8aa90 != (undefined *)0x0) {
        puVar14 = DAT_180c8aa90;
      }
      FUN_1802a8c20(param_2 + 0x26,puVar14);
      local_80 = 0;
      lStack_78 = 0;
      local_70 = 0;
      local_a8[1] = 0x20;
      local_a8[0] = 0;
      piVar9 = local_a8;
      if (-1 < DAT_180c8a810) {
        piVar9 = &DAT_180c8a810;
      }
      piVar11 = local_a8 + 1;
      if (DAT_180c8a810 < 0x21) {
        piVar11 = piVar9;
      }
      iVar20 = *piVar11;
      puVar14 = &DAT_180c8a830;
      if (DAT_180c8a818 != (undefined *)0x0) {
        puVar14 = DAT_180c8a818;
      }
      uVar12 = 0;
      if (0 < iVar20) {
        do {
          FUN_1800242d0(&local_80,puVar14 + (ulonglong)uVar12 * 0x10);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar20);
      }
      piVar9 = (int *)FUN_1804672f0(local_68,(ulonglong)DAT_181112310 + lVar7);
      iVar20 = piVar9[4];
      iVar17 = piVar9[5];
      iVar18 = piVar9[6];
      iVar19 = piVar9[7];
      iVar2 = piVar9[1];
      iVar3 = piVar9[2];
      iVar4 = piVar9[3];
      param_2[0x2c] = *piVar9;
      param_2[0x2d] = iVar2;
      param_2[0x2e] = iVar3;
      param_2[0x2f] = iVar4;
      param_2[0x30] = iVar20;
      param_2[0x31] = iVar17;
      param_2[0x32] = iVar18;
      param_2[0x33] = iVar19;
      FUN_1804681f0(param_2,&local_80);
      if ((param_3 != (longlong *)0x0) && (param_3 != &local_80)) {
        FUN_18025d1c0(param_3,local_80,lStack_78 - local_80 >> 3);
      }
      FUN_1800132b0(&local_80);
    }
    if (DAT_181112318 != 0) {
      uVar13 = (ulonglong)DAT_181112318;
      uVar6 = FUN_180011440((ulonglong)DAT_181112318 + 0x94 + lVar10);
      lVar7 = FUN_18000f3a0(uVar13 + 0x80 + lVar10);
      if (((ushort)(uVar6 - 1) < 0x1ff) && (lVar7 - 0x10000U < 0x7ffffffeffff)) {
        FUN_18046b570(plVar1,uVar6);
        FUN_180540530(*plVar1,lVar7,(ulonglong)uVar6 << 5);
      }
    }
  }
  return;
}



/* ===== 180469530 FUN_180469530 ===== */

void FUN_180469530(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar8 = *(longlong *)(param_1 + 8);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    if ((DAT_180961a50 == 0) || (lVar6 = FUN_18000f3a0(), lVar6 == 0)) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = (float)FUN_18000f3d0(lVar6 + 0x30);
    }
  }
  else {
    fVar9 = *(float *)(param_1 + 0x40);
  }
  iVar4 = *(int *)(param_1 + 0xf10);
  if (0 < iVar4) {
    iVar7 = iVar4;
    do {
      uVar2 = iVar7 + *(int *)(param_1 + 0xf14) + -1 & 0x8000000f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
      }
      uVar2 = uVar2 + 0x10 & 0x8000000f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
      }
      if ((int)((fVar9 - DAT_180c8a7fc) * DAT_1808acab0 + DAT_1808ac1f4) <=
          *(int *)(param_1 + 0x90 + (longlong)(int)uVar2 * 0xe8)) {
        iVar3 = iVar4;
        if (iVar7 < iVar4) {
          iVar3 = iVar7;
        }
        *(int *)(param_1 + 0xf10) = iVar3;
        break;
      }
      iVar7 = iVar7 + -1;
    } while (0 < iVar7);
  }
  DAT_180c8aea8 = iVar4 - *(int *)(param_1 + 0xf10);
  if ((*(char *)(param_1 + 0x1c) == '\0') ||
     (((DAT_1811122c8 == 0 &&
       (((hModule = GetModuleHandleA("client.dll"), hModule == (HMODULE)0x0 ||
         (pFVar5 = GetProcAddress(hModule,"CreateInterface"), pFVar5 == (FARPROC)0x0)) ||
        (DAT_1811122c8 = (*pFVar5)("Source2ClientPrediction001",0), DAT_1811122c8 == 0)))) ||
      (lVar6 = FUN_18000f3a0(DAT_1811122c8 + 0x38), 0x7ffffffefffe < lVar6 - 0x10000U)))) {
    iVar4 = -1;
    bVar1 = false;
  }
  else {
    iVar4 = FUN_180011200(lVar6 + 8);
    iVar7 = *(int *)(param_1 + 0xf10);
    bVar1 = true;
    if (iVar7 != 0) {
      do {
        uVar2 = *(uint *)(param_1 + 0xf14) & 0x8000000f;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
        }
        uVar2 = uVar2 + 0x10 & 0x8000000f;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
        }
        if (*(int *)(param_1 + 0x98 + (longlong)(int)uVar2 * 0xe8) < iVar4) break;
        iVar7 = iVar7 + -1;
        *(int *)(param_1 + 0xf10) = iVar7;
        uVar2 = *(uint *)(param_1 + 0xf14) + 1 & 0x8000000f;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
        }
        DAT_180c8aeac = DAT_180c8aeac + 1;
        *(uint *)(param_1 + 0xf14) = uVar2;
      } while (iVar7 != 0);
    }
  }
  DAT_180c8aea0 = *(undefined1 *)(param_1 + 0x1c);
  iVar7 = -1;
  if (bVar1) {
    iVar7 = iVar4;
  }
  DAT_180c8aea4 = iVar7;
  fVar9 = (float)FUN_18000f3d0((ulonglong)DAT_1811122e0 + lVar8);
  DAT_180c8aeb0 = (int)(fVar9 * DAT_1808acab0 + DAT_1808ac1f4);
  if (*(int *)(param_1 + 0xf10) != 0) {
    uVar2 = *(uint *)(param_1 + 0xf14) & 0x8000000f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
    uVar2 = uVar2 + 0x10 & 0x8000000f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
    if (DAT_180c8aeb0 <= *(int *)((longlong)(int)uVar2 * 0xe8 + 0x90 + param_1)) {
      return;
    }
  }
  uVar2 = *(int *)(param_1 + 0xf14) + 0xfU & 0x8000000f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
  }
  iVar4 = *(int *)(param_1 + 0xf10) + 1;
  *(uint *)(param_1 + 0xf14) = uVar2;
  if (0x10 < iVar4) {
    iVar4 = 0x10;
  }
  *(int *)(param_1 + 0xf10) = iVar4;
  uVar2 = uVar2 & 0x8000000f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
  }
  uVar2 = uVar2 + 0x10 & 0x8000000f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
  }
  lVar6 = (longlong)(int)uVar2 * 0xe8;
  FUN_180468ff0(lVar8,lVar6 + param_1 + 0x90,param_1 + 0xf18);
  *(int *)(lVar6 + 0x98 + param_1) = iVar7;
  DAT_180c8aea1 = 1;
  if (1 < *(int *)(param_1 + 0xf10)) {
    uVar2 = *(int *)(param_1 + 0xf14) + 1U & 0x8000000f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
    uVar2 = uVar2 + 0x10 & 0x8000000f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
    lVar8 = (longlong)(int)uVar2 * 0xe8;
    iVar4 = *(int *)(lVar6 + param_1 + 0x90) - *(int *)(lVar8 + 0x90 + param_1);
    fVar9 = *(float *)(lVar6 + 0xa4 + param_1) - *(float *)(lVar8 + 0xa4 + param_1);
    fVar10 = *(float *)(lVar6 + 0xa8 + param_1) - *(float *)(lVar8 + 0xa8 + param_1);
    fVar11 = *(float *)(lVar6 + 0xac + param_1) - *(float *)(lVar8 + 0xac + param_1);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    else if (5 < iVar4) {
      iVar4 = 5;
    }
    if (((float)(iVar4 << 0xc) < fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11) ||
       (*(longlong *)(lVar6 + 0x130 + param_1) - *(longlong *)(lVar6 + 0x128 + param_1) !=
        *(longlong *)(lVar8 + 0x130 + param_1) - *(longlong *)(lVar8 + 0x128 + param_1))) {
      *(undefined4 *)(param_1 + 0xf10) = 1;
      DAT_180c8aea2 = 1;
    }
  }
  return;
}



/* ===== 180469950 FUN_180469950 ===== */

longlong FUN_180469950(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char *_Str1;
  longlong local_res8;
  
  FUN_180467370();
  if ((param_1 != 0) && (DAT_1811122d0 != 0)) {
    iVar2 = FUN_180011200(param_1 + (ulonglong)DAT_1811122d0);
    if (iVar2 != -1) {
      FUN_1803a0940(&local_res8,iVar2);
      lVar1 = local_res8;
      if (local_res8 != 0) {
        _Str1 = (char *)FUN_1803a0710(&local_res8);
        if (_Str1 != (char *)0x0) {
          iVar2 = strcmp(_Str1,"C_CSPlayerPawn");
          if (iVar2 == 0) {
            return lVar1;
          }
        }
      }
      if (DAT_1811122d8 != 0) {
        iVar2 = FUN_180011200(param_1 + (ulonglong)DAT_1811122d8);
        if (iVar2 != -1) {
          FUN_1803a0940(&local_res8,iVar2);
          return local_res8;
        }
      }
    }
  }
  return 0;
}



/* ===== 180469a20 FUN_180469a20 ===== */

undefined8 FUN_180469a20(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  
  FUN_180467370();
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == param_2) {
    return 1;
  }
  if (DAT_1811122fc != 0) {
    uVar3 = (ulonglong)DAT_1811122fc;
    cVar1 = FUN_180011220((ulonglong)DAT_1811122fc + param_1);
    cVar2 = FUN_180011220(uVar3 + param_2);
    if (cVar1 != cVar2) {
      return 0;
    }
    if (DAT_180c8a7e8 == 0) {
      if (DAT_180c8a7f0 != '\0') {
        return 1;
      }
      DAT_180c8a7e8 = FUN_180264b70(PTR_s_mp_teammates_are_enemies_180c8a7e0);
      DAT_180c8a7f0 = DAT_180c8a7e8 == 0;
      if (DAT_180c8a7e8 == 0) {
        return 1;
      }
    }
    cVar1 = FUN_180264d70(DAT_180c8a7e8);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



/* ===== 180469ad0 FUN_180469ad0 ===== */

void FUN_180469ad0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res8 [8];
  
  if (DAT_180c8aa50 == 0) {
    if (DAT_180c8aa58 == '\0') {
      DAT_180c8aa50 = FUN_180264b70(PTR_s_sv_client_max_interp_ratio_180c8aa48);
      DAT_180c8aa58 = DAT_180c8aa50 == 0;
      if (DAT_180c8aa50 != 0) goto LAB_180469b1a;
    }
LAB_180469b41:
    fVar3 = DAT_1808ac540;
  }
  else {
LAB_180469b1a:
    local_res8[0] = (float)FUN_180264d70(DAT_180c8aa50);
    fVar3 = local_res8[0];
    if (((uint)local_res8[0] & 0x7f800000) == 0x7f800000) goto LAB_180469b41;
  }
  fVar1 = DAT_1808ac34c;
  if (DAT_180c8aed8 == 0) {
    if (DAT_180c8aee0 == '\0') {
      DAT_180c8aed8 = FUN_180264b70(PTR_s_sv_client_min_interp_ratio_180c8aed0);
      DAT_180c8aee0 = DAT_180c8aed8 == 0;
      if (DAT_180c8aed8 != 0) goto LAB_180469b87;
    }
LAB_180469bb0:
    fVar4 = fVar1;
  }
  else {
LAB_180469b87:
    local_res8[0] = (float)FUN_180264d70(DAT_180c8aed8);
    fVar4 = local_res8[0];
    if (((uint)local_res8[0] & 0x7f800000) == 0x7f800000) goto LAB_180469bb0;
  }
  if (DAT_180c8aa38 == 0) {
    if (DAT_180c8aa40 == '\0') {
      DAT_180c8aa38 = FUN_180264b70(PTR_s_cl_interp_ratio_180c8aa30);
      DAT_180c8aa40 = DAT_180c8aa38 == 0;
      if (DAT_180c8aa38 != 0) goto LAB_180469bea;
    }
  }
  else {
LAB_180469bea:
    fVar2 = (float)FUN_180264d70(DAT_180c8aa38);
    if (((uint)fVar2 & 0x7f800000) != 0x7f800000) goto LAB_180469c14;
  }
  fVar2 = fVar1;
LAB_180469c14:
  if ((fVar2 <= fVar3) && (fVar3 = fVar2, fVar2 <= fVar4)) {
    fVar3 = fVar4;
  }
  local_res8[0] = 0.0;
  DAT_180c8a800._4_4_ =
       (float)FUN_180512fd0((float)(int)(fVar3 * DAT_1808ac00c * DAT_1808acab0 + DAT_1808ac1f4) *
                            DAT_1808ac00c * DAT_1808acab0 + fVar1,local_res8);
  if (DAT_180c8a800._4_4_ < 0.0) {
    DAT_180c8a800._4_4_ = DAT_180c8a800._4_4_ + fVar1;
    if (DAT_180c8a800._4_4_ < fVar1) {
      local_res8[0] = local_res8[0] + DAT_1808acda0;
    }
    else {
      DAT_180c8a800._4_4_ = 0.0;
    }
  }
  DAT_180c8a800._0_4_ = (int)local_res8[0];
  return;
}



/* ===== 180469cd0 FUN_180469cd0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180469cd0(void)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float *pfVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  float fVar14;
  float local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  
  FUN_180467370();
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = CONCAT44(uStackX_c,local_res8);
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  lVar10 = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
    lVar10 = DAT_181112368;
    lVar8 = DAT_181112370;
    if (DAT_181112368 != DAT_181112370) {
      do {
        FUN_180467670();
        lVar10 = lVar10 + 0xfd0;
      } while (lVar10 != lVar8);
    }
    if (DAT_181112338 == DAT_181112340) {
      return;
    }
    DAT_181112340 = DAT_181112338;
    return;
  }
  if (DAT_180c8aec0 == 0) {
    if (DAT_180c8aec8 == '\0') {
      DAT_180c8aec0 = FUN_180264b70(PTR_s_sv_maxunlag_180c8aeb8);
      DAT_180c8aec8 = DAT_180c8aec0 == 0;
      if (DAT_180c8aec0 != 0) goto LAB_180469dbc;
    }
  }
  else {
LAB_180469dbc:
    DAT_180c8a7fc = FUN_180264d70(DAT_180c8aec0);
    if ((DAT_180c8a7fc & 0x7f800000) != 0x7f800000) goto LAB_180469deb;
  }
  DAT_180c8a7fc = DAT_1808ac118;
LAB_180469deb:
  local_res8 = 0.0;
  cVar5 = FUN_180467630(&local_res8);
  if (cVar5 == '\0') {
    DAT_180c8a7f8 = 0.0;
  }
  else {
    DAT_180c8a7f8 = local_res8;
  }
  local_res8 = 0.0;
  _DAT_180c8a80c = (float)FUN_180512fd0(DAT_180c8a7f8 * DAT_1808acab0,&local_res8);
  fVar14 = local_res8;
  if (_DAT_180c8a80c < 0.0) {
    _DAT_180c8a80c = _DAT_180c8a80c + DAT_1808ac34c;
    if (_DAT_180c8a80c < DAT_1808ac34c) {
      fVar14 = local_res8 + DAT_1808acda0;
    }
    else {
      _DAT_180c8a80c = 0.0;
    }
  }
  _DAT_180c8a808 = (int)fVar14;
  if ((DAT_180961a50 == 0) || (lVar8 = FUN_18000f3a0(), lVar8 == 0)) {
    iVar6 = 0x40;
  }
  else {
    iVar6 = FUN_180011200(lVar8 + 0x10);
  }
  iVar6 = iVar6 + 1;
  lVar8 = DAT_181112370 - DAT_181112368 >> 4;
  uVar12 = lVar8 * -0x78693bb3194be3ab;
  if ((int)uVar12 < iVar6) {
    uVar11 = (ulonglong)iVar6;
    if (uVar11 < uVar12) {
      lVar8 = uVar11 * 0xfd0 + DAT_181112368;
      FUN_18046bcf0(lVar8,DAT_181112370);
      DAT_181112370 = lVar8;
    }
    else if (uVar12 < uVar11) {
      if ((ulonglong)((DAT_181112378 - DAT_181112368 >> 4) * -0x78693bb3194be3ab) < uVar11) {
        FUN_18046bd70();
      }
      else {
        DAT_181112370 =
             FUN_18046c150(DAT_181112370,uVar11 + lVar8 * 0x78693bb3194be3ab,&DAT_181112368);
      }
    }
    if (uVar12 < (ulonglong)((DAT_181112370 - DAT_181112368 >> 4) * -0x78693bb3194be3ab)) {
      do {
        *(int *)(uVar12 * 0xfd0 + 0x10 + DAT_181112368) = (int)uVar12;
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulonglong)((DAT_181112370 - DAT_181112368 >> 4) * -0x78693bb3194be3ab));
    }
  }
  if (DAT_181112338 != DAT_181112340) {
    DAT_181112340 = DAT_181112338;
  }
  local_res8 = 1.4013e-45;
  if (1 < iVar6) {
    do {
      fVar14 = local_res8;
      FUN_1803a0ac0(&local_res10,local_res8);
      lVar8 = local_res10;
      if (((local_res10 == 0) || (lVar9 = FUN_18000f3a0(local_res10 + 0x10), lVar9 == 0)) ||
         (uVar7 = FUN_180011200(lVar9 + 0x10), (float)(uVar7 & 0x7fff) != fVar14)) {
        lVar8 = 0;
      }
      cVar5 = FUN_1804678b0((longlong)(int)fVar14 * 0xfd0 + DAT_181112368,lVar8);
      if (cVar5 != '\0') {
        if (DAT_181112340 == DAT_181112348) {
          FUN_18006a410(&DAT_181112338,DAT_181112340,&local_res8);
        }
        else {
          *DAT_181112340 = fVar14;
          DAT_181112340 = DAT_181112340 + 1;
        }
      }
      local_res8 = (float)((int)fVar14 + 1);
    } while ((int)local_res8 < iVar6);
  }
  pfVar4 = DAT_181112340;
  pfVar2 = DAT_181112338;
  puVar3 = DAT_181112358;
  if (DAT_181112350 != DAT_181112358) {
    puVar3 = DAT_181112350;
  }
  while( true ) {
    puVar1 = DAT_181112350;
    DAT_181112358 = puVar3;
    if (pfVar2 == pfVar4) break;
    lVar8 = (longlong)(int)*pfVar2 * 0xfd0 + DAT_181112368;
    if (*(longlong *)(lVar8 + 8) == lVar10) {
      uVar12 = (ulonglong)DAT_1811122e0;
      *(undefined1 *)(lVar8 + 0x1c) = 1;
      uVar13 = FUN_18000f3d0(uVar12 + *(longlong *)(lVar8 + 8));
      *(undefined4 *)(lVar8 + 0x40) = uVar13;
    }
    else {
      *(undefined4 *)(lVar8 + 0x68) = 0;
      *(undefined4 *)(lVar8 + 0x88) = 0;
      *(undefined1 *)(lVar8 + 0x1c) = 0;
      FUN_180467a20(lVar8);
    }
    pfVar2 = pfVar2 + 1;
    puVar3 = DAT_181112358;
  }
  for (; puVar1 != puVar3; puVar1 = puVar1 + 1) {
    FUN_180469530(*puVar1);
  }
  return;
}



/* ===== 18046a130 FUN_18046a130 ===== */

undefined4 * FUN_18046a130(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
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
  if (param_1 != param_2) {
    FUN_1802009d0(param_1 + 0x20,*(longlong *)(param_2 + 0x20),
                  (*(longlong *)(param_2 + 0x22) - *(longlong *)(param_2 + 0x20) >> 3) *
                  -0x71c71c71c71c71c7);
  }
  FUN_18046aeb0(param_1 + 0x26,param_2 + 0x26);
  uVar1 = param_2[0x2d];
  uVar2 = param_2[0x2e];
  uVar3 = param_2[0x2f];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  uVar1 = param_2[0x31];
  uVar2 = param_2[0x32];
  uVar3 = param_2[0x33];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  FUN_18046aeb0(param_1 + 0x34,param_2 + 0x34);
  return param_1;
}



/* ===== 18046a280 FUN_18046a280 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18046a280(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_10a8 [32];
  double local_1088;
  double local_1080;
  double local_1078;
  char *local_1070;
  char *local_1068;
  double local_1060;
  int local_1058;
  undefined4 local_1048;
  undefined4 uStack_1044;
  undefined1 local_1028 [4096];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_10a8;
  FUN_180467370();
  if ((DAT_1811122e0 != 0) && (DAT_1811122e4 != 0)) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_1048);
      lVar4 = CONCAT44(uStack_1044,local_1048);
    }
    else {
      lVar4 = DAT_181108a00;
    }
    if (lVar4 != 0) {
      lVar3 = FUN_18000f3a0(lVar4 + 0x10);
      if (lVar3 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = FUN_180011200(lVar3 + 0x10);
      }
      if ((ulonglong)(uVar2 & 0x7fff) <
          (ulonglong)((DAT_181112370 - DAT_181112368 >> 4) * -0x78693bb3194be3ab)) {
        lVar3 = (ulonglong)(uVar2 & 0x7fff) * 0xfd0 + DAT_181112368;
        cVar1 = FUN_1804678b0(lVar3,lVar4);
        if (cVar1 != '\0') {
          uVar8 = FUN_18000f3d0((ulonglong)DAT_1811122e0 + *(longlong *)(lVar3 + 8));
          uVar6 = (ulonglong)DAT_1811122e4;
          *(undefined4 *)(lVar3 + 0x3c) = uVar8;
          lVar4 = FUN_18000f3a0(uVar6 + *(longlong *)(lVar3 + 8));
          if (lVar4 == 0) {
            uVar8 = 0;
            uVar9 = 0;
            uVar10 = 0;
          }
          else {
            puVar5 = (undefined4 *)FUN_1800111b0(&local_1048,(ulonglong)DAT_18111230c + lVar4);
            uVar8 = *puVar5;
            uVar9 = puVar5[1];
            uVar10 = puVar5[2];
          }
          *(undefined4 *)(lVar3 + 0x30) = uVar8;
          *(undefined4 *)(lVar3 + 0x24) = uVar8;
          _DAT_180c8aea4 = _DAT_1808ad2f0;
          _DAT_180c8aeac = _UNK_1808ad2f8;
          *(undefined4 *)(lVar3 + 0x68) = 0;
          *(undefined4 *)(lVar3 + 0x34) = uVar9;
          *(undefined4 *)(lVar3 + 0x38) = uVar10;
          *(undefined4 *)(lVar3 + 0x28) = uVar9;
          *(undefined4 *)(lVar3 + 0x2c) = uVar10;
          *(undefined4 *)(lVar3 + 0x88) = 0;
          _DAT_180c8aea0 = 0;
          DAT_180c8aea2 = '\0';
          DAT_180c8aea3 = local_1048._3_1_;
          FUN_180469530(lVar3);
          if (((DAT_181112334 < 0x1771) && (DAT_180920fac != '\0')) && (DAT_180920ffb != '\0')) {
            local_1068 = "";
            DAT_181112334 = DAT_181112334 + 1;
            local_28 = 0;
            local_1070 = "kept";
            if (DAT_180c8aea2 != '\0') {
              local_1068 = " lc-break";
            }
            if (DAT_180c8aea1 != '\0') {
              local_1070 = "added";
            }
            local_1058 = *(int *)(lVar3 + 0xf14);
            local_1060 = (double)CONCAT44(local_1060._4_4_,*(undefined4 *)(lVar3 + 0xf10));
            local_1078 = (double)CONCAT44(local_1078._4_4_,DAT_180c8aeb0);
            local_1080 = (double)CONCAT44(local_1080._4_4_,DAT_180c8aeac);
            local_1088 = (double)CONCAT44(local_1088._4_4_,DAT_180c8aea8);
            FUN_1802b2900(local_1028,
                          "rec | pred cmd %d local %d | expired %d popped %d | sim tick %d | %s%s | n %d head %d"
                          ,_DAT_180c8aea4 & 0xffffffff,DAT_180c8aea0 != '\0');
            if (0 < *(int *)(lVar3 + 0xf10)) {
              uVar2 = *(uint *)(lVar3 + 0xf14) & 0x8000000f;
              if ((int)uVar2 < 0) {
                uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
              }
              uVar2 = uVar2 + 0x10 & 0x8000000f;
              if ((int)uVar2 < 0) {
                uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
              }
              lVar7 = (longlong)(int)uVar2 * 0xe8;
              local_1058 = (int)(*(longlong *)(lVar7 + 0x118 + lVar3) -
                                 *(longlong *)(lVar7 + 0x110 + lVar3) >> 3) * 0x38e38e39;
              local_1060 = (double)*(float *)(lVar7 + 0xe0 + lVar3);
              local_1068 = (char *)(double)*(float *)(lVar7 + 0xe4 + lVar3);
              local_1070 = (char *)(double)*(float *)(lVar7 + 0xd8 + lVar3);
              local_1078 = (double)*(float *)(lVar7 + 0xac + lVar3);
              local_1080 = (double)*(float *)(lVar7 + 0xa8 + lVar3);
              local_1088 = (double)*(float *)(lVar7 + 0xa4 + lVar3);
              FUN_1802b2900(local_1028,
                            " | r tick %d cmd %d org %.2f %.2f %.2f abs %.2f eye %.2f/%.2f hb %d",
                            *(undefined4 *)(lVar7 + 0x90 + lVar3),
                            *(undefined4 *)(lVar7 + 0x98 + lVar3));
              lVar4 = *(longlong *)(lVar7 + 0x110 + lVar3);
              if (lVar4 != *(longlong *)(lVar7 + 0x118 + lVar3)) {
                local_1088 = (double)*(float *)(lVar4 + 0x20);
                FUN_1802b2900(local_1028," b %.2f %.2f %.2f",(double)*(float *)(lVar4 + 0x18),
                              (double)*(float *)(lVar4 + 0x1c));
              }
            }
            FUN_1802b2900(local_1028,&DAT_1806e6a94);
          }
        }
      }
    }
  }
  return;
}



/* ===== 18046a660 FUN_18046a660 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_18046a660(longlong param_1,int *param_2,int *param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_d18 [32];
  float local_cf8;
  float local_cf4 [3];
  float local_ce8 [4];
  undefined1 *local_cd8;
  undefined4 local_cd0;
  undefined4 local_ccc;
  undefined1 local_cc8 [1024];
  int local_8c8 [4];
  undefined1 *local_8b8;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined1 local_8a8 [1024];
  int local_4a8 [4];
  undefined1 *local_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined1 local_488 [1024];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_d18;
  if ((*(int *)(param_1 + 0x88) < 0x20) && (DAT_180961f90 != 0)) {
    if ((int)(*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70) >> 3) * 0x4f72c235 ==
        *(int *)(param_1 + 0x88)) {
      if ((ulonglong)
          ((*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x70) >> 3) * 0x34f72c234f72c235
          ) < 0x20) {
        FUN_180448530(param_1 + 0x70,0x20);
      }
      lVar2 = *(longlong *)(param_1 + 0x78);
      if (lVar2 == *(longlong *)(param_1 + 0x80)) {
        FUN_18046bb10(param_1 + 0x70,lVar2);
      }
      else {
        FUN_180540170(lVar2,0,0xe8);
        FUN_18046c9e0(lVar2);
        *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0xe8;
      }
    }
    iVar1 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar1 + 1;
    piVar9 = (int *)((longlong)iVar1 * 0xe8 + *(longlong *)(param_1 + 0x70));
    if (piVar9 != param_3) {
      FUN_18046a130(piVar9,param_3);
    }
    fVar3 = DAT_1808ac34c;
    fVar11 = (float)param_2[7];
    fVar12 = (float)param_3[7];
    fVar13 = (float)*(undefined8 *)(param_2 + 5);
    fVar14 = (float)((ulonglong)*(undefined8 *)(param_2 + 5) >> 0x20);
    *(ulonglong *)(piVar9 + 5) =
         CONCAT44(((float)((ulonglong)*(undefined8 *)(param_3 + 5) >> 0x20) - fVar14) * param_4 +
                  fVar14,((float)*(undefined8 *)(param_3 + 5) - fVar13) * param_4 + fVar13);
    piVar9[7] = (int)((fVar12 - fVar11) * param_4 + fVar11);
    fVar11 = (float)param_2[0x10];
    fVar12 = (float)param_3[0x10];
    fVar13 = (float)*(undefined8 *)(param_2 + 0xe);
    fVar14 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
    *(ulonglong *)(piVar9 + 0xe) =
         CONCAT44(((float)((ulonglong)*(undefined8 *)(param_3 + 0xe) >> 0x20) - fVar14) * param_4 +
                  fVar14,((float)*(undefined8 *)(param_3 + 0xe) - fVar13) * param_4 + fVar13);
    piVar9[0x10] = (int)((fVar12 - fVar11) * param_4 + fVar11);
    piVar9[0x16] = (int)(((float)param_3[0x16] - (float)param_2[0x16]) * param_4 +
                        (float)param_2[0x16]);
    fVar11 = (float)param_3[1] - (float)param_2[1];
    iVar5 = *param_2;
    iVar7 = *param_3 - iVar5;
    if (fVar11 < 0.0) {
      fVar11 = fVar11 + fVar3;
      if (fVar11 < fVar3) {
        iVar7 = iVar7 + -1;
      }
      else {
        fVar11 = 0.0;
      }
    }
    fVar11 = ((float)iVar7 + fVar11) * param_4 + (float)param_2[1];
    if ((fVar11 < 0.0) || (fVar3 <= fVar11)) {
      local_cf8 = 0.0;
      fVar11 = (float)FUN_180512fd0(fVar11,&local_cf8);
      fVar12 = local_cf8;
      if (fVar11 < 0.0) {
        fVar11 = fVar11 + fVar3;
        if (fVar11 < fVar3) {
          fVar12 = local_cf8 + DAT_1808acda0;
        }
        else {
          fVar11 = 0.0;
        }
      }
      iVar5 = (int)fVar12 + *param_2;
    }
    piVar9[1] = (int)fVar11;
    *piVar9 = iVar5;
    FUN_180468b50(local_ce8);
    FUN_180468b50(local_4a8);
    FUN_180468b50(local_8c8);
    fVar11 = (float)(*(longlong *)(piVar9 + 0x28) - *(longlong *)(piVar9 + 0x26) >> 5);
    if (0x20 < (int)fVar11) {
      fVar11 = 4.48416e-44;
    }
    FUN_180540170(local_cc8,0,0x400);
    if (0 < (int)fVar11) {
      FUN_180540530(local_cc8,*(undefined8 *)(piVar9 + 0x26),(longlong)(int)fVar11 << 5);
    }
    local_cd8 = local_cc8;
    iVar5 = (int)(*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x26) >> 5);
    local_cd0 = 0x20;
    local_ccc = 0x80000000;
    if (0x20 < iVar5) {
      iVar5 = 0x20;
    }
    local_ce8[0] = fVar11;
    FUN_180540170(local_488,0,0x400);
    if (0 < iVar5) {
      FUN_180540530(local_488,*(undefined8 *)(param_2 + 0x26),(longlong)iVar5 << 5);
    }
    local_498 = local_488;
    iVar7 = (int)(*(longlong *)(param_3 + 0x28) - *(longlong *)(param_3 + 0x26) >> 5);
    local_490 = 0x20;
    local_48c = 0x80000000;
    if (0x20 < iVar7) {
      iVar7 = 0x20;
    }
    local_4a8[0] = iVar5;
    FUN_180540170(local_8a8,0,0x400);
    if (0 < iVar7) {
      FUN_180540530(local_8a8,*(undefined8 *)(param_3 + 0x26),(longlong)iVar7 << 5);
    }
    local_8b8 = local_8a8;
    local_8b0 = 0x20;
    local_8ac = 0x80000000;
    local_8c8[0] = iVar7;
    cVar4 = FUN_180468fd0(local_ce8,local_4a8,local_8c8,param_4);
    if (cVar4 == '\0') {
      *(int *)(param_1 + 0x88) = iVar1;
      piVar9 = (int *)0x0;
    }
    else {
      local_cf4[0] = 4.48416e-44;
      local_cf8 = 0.0;
      puVar8 = local_cc8;
      if (local_cd8 != (undefined1 *)0x0) {
        puVar8 = local_cd8;
      }
      pfVar10 = &local_cf8;
      if (-1 < (int)local_ce8[0]) {
        pfVar10 = local_ce8;
      }
      pfVar6 = local_cf4;
      if ((int)local_ce8[0] < 0x21) {
        pfVar6 = pfVar10;
      }
      FUN_1802a8c20(piVar9 + 0x26,puVar8,puVar8 + (longlong)(int)*pfVar6 * 0x20);
      if (piVar9 != param_2) {
        FUN_18046aeb0(piVar9 + 0x34,param_2 + 0x34);
      }
      if ((((float)param_2[1] != 0.0) || ((float)param_3[1] != 0.0)) || (*param_2 + 1 != *param_3))
      {
        piVar9[0x18] = *param_2;
        piVar9[0x19] = *param_2 + 1;
        piVar9[0x1a] = param_2[1];
        piVar9[0x1b] = *param_3;
        piVar9[0x1c] = *param_3 + 1;
        iVar1 = param_3[1];
        piVar9[0x1e] = (int)param_4;
        piVar9[0x1d] = iVar1;
        *(undefined1 *)(piVar9 + 0x1f) = 1;
      }
      if (*(longlong *)(piVar9 + 0x20) != *(longlong *)(piVar9 + 0x22)) {
        *(longlong *)(piVar9 + 0x22) = *(longlong *)(piVar9 + 0x20);
      }
      FUN_1804681f0(piVar9,param_1 + 0xf18);
    }
  }
  else {
    piVar9 = (int *)0x0;
  }
  return piVar9;
}



/* ===== 18046abb0 FUN_18046abb0 ===== */

float * FUN_18046abb0(longlong param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8 [2];
  
  fVar6 = DAT_1808ac34c;
  if (*(int *)(param_1 + 0xf10) != 0) {
    uVar3 = *(uint *)(param_1 + 0xf14) & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    uVar3 = uVar3 + 0x10 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    fVar8 = param_2[5];
    lVar7 = (longlong)(int)uVar3 * 0xe8;
    if ((fVar8 < 0.0) || (DAT_1808ac34c <= fVar8)) {
      local_res8[0] = 0.0;
      fVar8 = (float)FUN_180512fd0(fVar8,local_res8);
      fVar9 = local_res8[0];
      if (fVar8 < 0.0) {
        fVar8 = fVar8 + fVar6;
        if (fVar8 < fVar6) {
          fVar9 = local_res8[0] + DAT_1808acda0;
        }
        else {
          fVar8 = 0.0;
        }
      }
      fVar6 = (float)((int)fVar9 + (int)param_2[4]);
    }
    else {
      fVar6 = param_2[4];
    }
    fVar9 = *(float *)(lVar7 + param_1 + 0x90);
    if (((int)fVar9 < (int)fVar6) ||
       ((fVar9 == fVar6 &&
        (pfVar1 = (float *)(lVar7 + 0x94 + param_1), *pfVar1 <= fVar8 && fVar8 != *pfVar1)))) {
      iVar2 = *(int *)(param_1 + 0x68);
      if (iVar2 < 0x20) {
        if ((int)(*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 3) * 0x4f72c235
            <= iVar2) {
          FUN_18046b3c0(param_1 + 0x50,(longlong)iVar2 + 1);
        }
        iVar2 = *(int *)(param_1 + 0x68);
        *(int *)(param_1 + 0x68) = iVar2 + 1;
        pfVar5 = (float *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0xe8);
        FUN_18046a130(pfVar5,lVar7 + param_1 + 0x90);
        pfVar1 = *(float **)(pfVar5 + 0x22);
        fVar9 = (param_2[3] - *(float *)(lVar7 + 0xec + param_1)) +
                (param_2[2] - *(float *)(lVar7 + 0xac + param_1));
        fVar10 = *param_2 - *(float *)(lVar7 + 0xa4 + param_1);
        fVar11 = param_2[1] - *(float *)(lVar7 + 0xa8 + param_1);
        for (pfVar4 = *(float **)(pfVar5 + 0x20); pfVar4 != pfVar1; pfVar4 = pfVar4 + 0x12) {
          *pfVar4 = fVar10 + *pfVar4;
          pfVar4[1] = fVar11 + pfVar4[1];
          pfVar4[2] = fVar9 + pfVar4[2];
          pfVar4[3] = fVar10 + pfVar4[3];
          pfVar4[4] = fVar11 + pfVar4[4];
          pfVar4[5] = fVar9 + pfVar4[5];
          pfVar4[6] = fVar10 + pfVar4[6];
          pfVar4[7] = fVar11 + pfVar4[7];
          pfVar4[8] = fVar9 + pfVar4[8];
        }
        pfVar1 = *(float **)(pfVar5 + 0x28);
        for (pfVar4 = *(float **)(pfVar5 + 0x26); pfVar4 != pfVar1; pfVar4 = pfVar4 + 8) {
          *pfVar4 = fVar10 + *pfVar4;
          pfVar4[1] = fVar11 + pfVar4[1];
          pfVar4[2] = fVar9 + pfVar4[2];
        }
        pfVar1 = *(float **)(pfVar5 + 0x36);
        for (pfVar4 = *(float **)(pfVar5 + 0x34); pfVar4 != pfVar1; pfVar4 = pfVar4 + 8) {
          *pfVar4 = fVar10 + *pfVar4;
          pfVar4[1] = fVar11 + pfVar4[1];
          pfVar4[2] = fVar9 + pfVar4[2];
        }
        *(undefined8 *)(pfVar5 + 5) = *(undefined8 *)param_2;
        fVar9 = param_2[2];
        pfVar5[1] = fVar8;
        pfVar5[7] = fVar9;
        *pfVar5 = fVar6;
        *(undefined1 *)(pfVar5 + 3) = 1;
        return pfVar5;
      }
    }
  }
  return (float *)0x0;
}



/* ===== 18046aeb0 FUN_18046aeb0 ===== */

longlong * FUN_18046aeb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    lVar2 = *param_1;
    lVar1 = *param_2;
    uVar4 = param_2[1] - lVar1 >> 5;
    if ((ulonglong)(param_1[2] - lVar2 >> 5) < uVar4) {
      FUN_1802a9210(param_1,uVar4);
      lVar2 = *param_1;
      lVar5 = uVar4 << 5;
      FUN_180540530(lVar2,lVar1,lVar5);
    }
    else {
      uVar3 = param_1[1] - lVar2 >> 5;
      if (uVar3 < uVar4) {
        FUN_180540530(lVar2,lVar1,uVar3 * 0x20);
        lVar2 = param_1[1];
        lVar5 = (uVar4 - uVar3) * 0x20;
        FUN_180540530(lVar2,lVar1 + uVar3 * 0x20,lVar5);
      }
      else {
        lVar5 = uVar4 << 5;
        FUN_180540530(lVar2,lVar1,lVar5);
      }
    }
    param_1[1] = lVar5 + lVar2;
  }
  return param_1;
}



/* ===== 18046afa0 FUN_18046afa0 ===== */

undefined8 * FUN_18046afa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  if (param_1 == param_2) {
    return param_2;
  }
  for (puVar11 = param_1 + 9; puVar11 != param_2; puVar11 = puVar11 + 9) {
    auVar2 = *(undefined1 (*) [16])(puVar11 + 6);
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    uVar8 = puVar11[4];
    uVar9 = puVar11[5];
    uVar1 = puVar11[8];
    uVar12 = auVar2._10_4_ & 0xff;
    if (uVar12 < *(byte *)((longlong)param_1 + 0x3a)) {
      FUN_180540530(param_1 + 9,param_1,(longlong)puVar11 - (longlong)param_1);
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      param_1[5] = uVar9;
      *(undefined1 (*) [16])(param_1 + 6) = auVar2;
      param_1[8] = uVar1;
    }
    else {
      bVar3 = *(byte *)((longlong)puVar11 + -0xe);
      puVar10 = puVar11;
      while (uVar12 < bVar3) {
        *puVar10 = puVar10[-9];
        puVar10[1] = puVar10[-8];
        puVar10[2] = puVar10[-7];
        puVar10[3] = puVar10[-6];
        puVar10[4] = puVar10[-5];
        puVar10[5] = puVar10[-4];
        puVar10[6] = puVar10[-3];
        puVar10[7] = puVar10[-2];
        puVar10[8] = puVar10[-1];
        bVar3 = *(byte *)((longlong)puVar10 + -0x56);
        puVar10 = puVar10 + -9;
      }
      *puVar10 = uVar4;
      puVar10[1] = uVar5;
      puVar10[2] = uVar6;
      puVar10[3] = uVar7;
      puVar10[4] = uVar8;
      puVar10[5] = uVar9;
      *(undefined1 (*) [16])(puVar10 + 6) = auVar2;
      puVar10[8] = uVar1;
    }
  }
  return param_2;
}



/* ===== 18046b110 FUN_18046b110 ===== */

void FUN_18046b110(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_18046afa0();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 0x48;
  if (param_5 < lVar3) {
    FUN_18046b110(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_18046b110(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_18046b730();
    FUN_18046b730(lVar1,param_2,uVar2,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_18046b980(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



/* ===== 18046b210 FUN_18046b210 ===== */

undefined8 * FUN_18046b210(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar3 = DAT_181112358;
  if (DAT_181112358 != DAT_181112360) {
    *DAT_181112358 = *param_2;
    puVar3 = DAT_181112358;
    DAT_181112358 = DAT_181112358 + 1;
    return puVar3;
  }
  uVar8 = 0x1fffffffffffffff;
  uVar11 = (longlong)DAT_181112358 - (longlong)DAT_181112350;
  lVar4 = (longlong)uVar11 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar6 = (longlong)DAT_181112360 - (longlong)DAT_181112350 >> 3;
  uVar1 = lVar4 + 1;
  if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar5 = (undefined8 *)FUN_18000fb70(uVar8 * 8);
  puVar12 = (undefined8 *)((uVar11 & 0xfffffffffffffff8) + (longlong)puVar5);
  *puVar12 = *param_2;
  if (puVar3 == DAT_181112358) {
    lVar4 = (longlong)DAT_181112358 - (longlong)DAT_181112350;
    puVar7 = puVar5;
    puVar3 = DAT_181112350;
  }
  else {
    FUN_180540530(puVar5,DAT_181112350,(longlong)puVar3 - (longlong)DAT_181112350);
    puVar7 = puVar12 + 1;
    lVar4 = (longlong)DAT_181112358 - (longlong)puVar3;
  }
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  FUN_180540530(puVar7,puVar3,lVar4);
  if (DAT_181112350 == (undefined8 *)0x0) goto LAB_18046b36f;
  puVar3 = DAT_181112350;
  if ((ulonglong)(((longlong)DAT_181112360 - (longlong)DAT_181112350 >> 3) * 8) < 0x1000) {
LAB_18046b364:
    puVar10 = puVar9;
  }
  else {
    puVar3 = (undefined8 *)DAT_181112350[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_181112350 + (-8 - (longlong)puVar3))) {
      puVar3 = (undefined8 *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_30;
      goto LAB_18046b364;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18046b36f;
  thunk_FUN_1803d64e0(puVar3);
LAB_18046b36f:
  DAT_181112350 = puVar5;
  DAT_181112358 = puVar5 + uVar1;
  DAT_181112360 = puVar5 + uVar8;
  return puVar12;
}



/* ===== 18046b3c0 FUN_18046b3c0 ===== */

void FUN_18046b3c0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1[1];
  lVar3 = *param_1;
  lVar5 = lVar6 - lVar3 >> 3;
  if (param_2 < (ulonglong)(lVar5 * 0x34f72c234f72c235)) {
    lVar3 = param_2 * 0xe8 + lVar3;
    FUN_180448e10(lVar3,lVar6);
    param_1[1] = lVar3;
    return;
  }
  if ((ulonglong)(lVar5 * 0x34f72c234f72c235) < param_2) {
    uVar2 = (param_1[2] - lVar3 >> 3) * 0x34f72c234f72c235;
    if (param_2 <= uVar2) {
      for (lVar3 = param_2 + lVar5 * -0x34f72c234f72c235; lVar3 != 0; lVar3 = lVar3 + -1) {
        FUN_180540170(lVar6,0,0xe8);
        FUN_18046c9e0(lVar6);
        lVar6 = lVar6 + 0xe8;
      }
      FUN_180448e10(lVar6,lVar6);
      param_1[1] = lVar6;
      return;
    }
    if (0x11a7b9611a7b961 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar4 = 0x11a7b9611a7b961;
    if (uVar2 <= 0x11a7b9611a7b961 - (uVar2 >> 1)) {
      uVar4 = (uVar2 >> 1) + uVar2;
      if (uVar4 < param_2) {
        uVar4 = param_2;
      }
      else if (0x11a7b9611a7b961 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    lVar1 = FUN_18000fb70(uVar4 * 0xe8);
    FUN_18046c2c0(lVar5 * 8 + lVar1,param_2 + lVar5 * -0x34f72c234f72c235);
    lVar6 = param_1[1];
    lVar5 = lVar1;
    for (lVar3 = *param_1; lVar3 != lVar6; lVar3 = lVar3 + 0xe8) {
      FUN_18043b470(lVar5,lVar3);
      lVar5 = lVar5 + 0xe8;
    }
    FUN_180448e10(lVar5,lVar5);
    FUN_180448d70(param_1,lVar1,param_2,uVar4);
  }
  return;
}



/* ===== 18046b570 FUN_18046b570 ===== */

void FUN_18046b570(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = (undefined8 *)param_1[1];
  lVar5 = *param_1;
  uVar9 = (longlong)puVar6 - lVar5 >> 5;
  if (param_2 < uVar9) {
    param_1[1] = param_2 * 0x20 + lVar5;
    return;
  }
  if (param_2 <= uVar9) {
    return;
  }
  uVar3 = param_1[2] - lVar5 >> 5;
  if (param_2 <= uVar3) {
    for (lVar5 = param_2 - uVar9; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined8 *)((longlong)puVar6 + 0xc) = 0x3f800000;
      *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
      puVar6 = puVar6 + 4;
    }
    param_1[1] = (longlong)puVar6;
    return;
  }
  if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar10 = 0x7ffffffffffffff;
  if (uVar3 <= 0x7ffffffffffffff - (uVar3 >> 1)) {
    uVar10 = (uVar3 >> 1) + uVar3;
    if (uVar10 < param_2) {
      uVar10 = param_2;
    }
    else if (0x7ffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar2 = FUN_18000fb70();
  puVar6 = (undefined8 *)(((longlong)puVar6 - lVar5 & 0xffffffffffffffe0U) + lVar2);
  for (lVar5 = param_2 - uVar9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
    puVar6 = puVar6 + 4;
  }
  FUN_180540530(lVar2,*param_1,param_1[1] - *param_1);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  lVar5 = *param_1;
  if (lVar5 == 0) goto LAB_18046b6b7;
  if ((param_1[2] - lVar5 & 0xffffffffffffffe0U) < 0x1000) {
LAB_18046b6af:
    lVar4 = lVar5;
    puVar8 = puVar7;
  }
  else {
    lVar4 = *(longlong *)(lVar5 + -8);
    if (0x1f < (lVar5 - lVar4) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar5 = (*pcVar1)(5);
      puVar7 = auStack_30;
      goto LAB_18046b6af;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x18046b6b7;
  thunk_FUN_1803d64e0(lVar4);
LAB_18046b6b7:
  *param_1 = lVar2;
  param_1[1] = param_2 * 0x20 + lVar2;
  param_1[2] = uVar10 * 0x20 + lVar2;
  return;
}



/* ===== 18046b730 FUN_18046b730 ===== */

void FUN_18046b730(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar10 = param_1;
  for (lVar13 = param_3; 0x20 < lVar13; lVar13 = lVar13 + -0x20) {
    puVar10 = (undefined8 *)FUN_18046afa0(puVar10,puVar10 + 0x120);
  }
  FUN_18046afa0(puVar10,param_2);
  if (0x20 < param_3) {
    puVar10 = param_4;
    lVar13 = param_3;
    puVar16 = param_1;
    do {
      lVar1 = lVar13 + -0x20;
      puVar3 = puVar16 + 0x120;
      lVar14 = lVar13 + -0x40;
      puVar4 = puVar16 + 0x117;
      if (lVar1 < 0x20) {
        lVar14 = 0;
      }
      lVar11 = 0x1200;
      if (lVar1 < 0x20) {
        lVar11 = lVar13 * 0x48;
      }
      puVar15 = (undefined8 *)(lVar11 + (longlong)puVar16);
      lVar11 = 0x11b8;
      if (lVar1 < 0x20) {
        lVar11 = lVar13 * 0x48 + -0x48;
      }
      puVar5 = (undefined8 *)(lVar11 + (longlong)puVar16);
      puVar12 = puVar3;
      while( true ) {
        for (; puVar2 = puVar10 + 9,
            *(byte *)((longlong)puVar12 + 0x3a) < *(byte *)((longlong)puVar16 + 0x3a);
            puVar12 = puVar12 + 9) {
          uVar9 = puVar12[1];
          *puVar10 = *puVar12;
          puVar10[1] = uVar9;
          uVar9 = puVar12[3];
          puVar10[2] = puVar12[2];
          puVar10[3] = uVar9;
          uVar9 = puVar12[5];
          puVar10[4] = puVar12[4];
          puVar10[5] = uVar9;
          uVar6 = *(undefined4 *)((longlong)puVar12 + 0x34);
          uVar7 = *(undefined4 *)(puVar12 + 7);
          uVar8 = *(undefined4 *)((longlong)puVar12 + 0x3c);
          *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(puVar12 + 6);
          *(undefined4 *)((longlong)puVar10 + 0x34) = uVar6;
          *(undefined4 *)(puVar10 + 7) = uVar7;
          *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar8;
          puVar10[8] = puVar12[8];
          if (puVar12 == puVar5) {
            lVar13 = (longlong)puVar3 - (longlong)puVar16;
            puVar12 = puVar16;
            goto LAB_18046b8a9;
          }
          puVar10 = puVar2;
        }
        uVar9 = puVar16[1];
        *puVar10 = *puVar16;
        puVar10[1] = uVar9;
        uVar9 = puVar16[3];
        puVar10[2] = puVar16[2];
        puVar10[3] = uVar9;
        uVar9 = puVar16[5];
        puVar10[4] = puVar16[4];
        puVar10[5] = uVar9;
        uVar6 = *(undefined4 *)((longlong)puVar16 + 0x34);
        uVar7 = *(undefined4 *)(puVar16 + 7);
        uVar8 = *(undefined4 *)((longlong)puVar16 + 0x3c);
        *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(puVar16 + 6);
        *(undefined4 *)((longlong)puVar10 + 0x34) = uVar6;
        *(undefined4 *)(puVar10 + 7) = uVar7;
        *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar8;
        puVar10[8] = puVar16[8];
        if (puVar16 == puVar4) break;
        puVar16 = puVar16 + 9;
        puVar10 = puVar2;
      }
      lVar13 = (longlong)puVar15 - (longlong)puVar12;
LAB_18046b8a9:
      FUN_180540530(puVar2,puVar12,lVar13);
      puVar10 = (undefined8 *)((longlong)puVar10 + lVar13 + 0x48);
      lVar13 = lVar14;
      puVar16 = puVar15;
    } while (0x20 < lVar14);
    FUN_180540530(puVar10,puVar15,param_2 - (longlong)puVar15);
    lVar13 = 0x40;
    FUN_18046c320(param_4,param_4 + param_3 * 9,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_18046c320(param_1,param_2,param_4,lVar13 * 2,param_3,param_5);
        lVar13 = lVar13 * 4;
        FUN_18046c320(param_4,param_4 + param_3 * 9,param_1,lVar13,param_3,param_5);
      } while (lVar13 <= (param_3 + -1) / 2);
    }
  }
  return;
}



/* ===== 18046b980 FUN_18046b980 ===== */

void FUN_18046b980(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    while (*(byte *)((longlong)param_1 + 0x3a) <= *(byte *)((longlong)param_2 + 0x3a)) {
      param_1 = param_1 + 9;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    puVar11 = param_3 + -9;
    if (param_2 != puVar11) {
      do {
        puVar10 = puVar11;
        if (*(byte *)((longlong)param_3 + -0xe) < *(byte *)((longlong)param_2 + -0xe)) {
          if (param_4 == 1) {
            uVar2 = *param_1;
            uVar3 = param_1[1];
            lVar12 = (longlong)param_3 - (longlong)param_2;
            uVar4 = param_1[2];
            uVar5 = param_1[3];
            uVar6 = param_1[4];
            uVar7 = param_1[5];
            uVar8 = param_1[6];
            uVar9 = param_1[7];
            uVar1 = param_1[8];
            FUN_180540530(param_1,param_2,lVar12);
            *(undefined8 *)(lVar12 + (longlong)param_1) = uVar2;
            ((undefined8 *)(lVar12 + (longlong)param_1))[1] = uVar3;
            puVar11 = (undefined8 *)(lVar12 + 0x10 + (longlong)param_1);
            *puVar11 = uVar4;
            puVar11[1] = uVar5;
            puVar11 = (undefined8 *)(lVar12 + 0x20 + (longlong)param_1);
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar11 = (undefined8 *)(lVar12 + 0x30 + (longlong)param_1);
            *puVar11 = uVar8;
            puVar11[1] = uVar9;
            *(undefined8 *)(lVar12 + 0x40 + (longlong)param_1) = uVar1;
            return;
          }
          FUN_18046c480(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        param_5 = param_5 + -1;
        puVar11 = puVar10 + -9;
        param_3 = puVar10;
      } while (param_2 != puVar11);
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    uVar1 = param_2[8];
    FUN_180540530((longlong)puVar11 + (0x48 - ((longlong)param_2 - (longlong)param_1)),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    param_1[6] = uVar8;
    param_1[7] = uVar9;
    param_1[8] = uVar1;
  }
  return;
}



/* ===== 18046bb10 FUN_18046bb10 ===== */

longlong FUN_18046bb10(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  uVar7 = 0x11a7b9611a7b961;
  lVar3 = (param_1[1] - lVar2 >> 3) * 0x34f72c234f72c235;
  if (lVar3 == 0x11a7b9611a7b961) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (param_1[2] - lVar2 >> 3) * 0x34f72c234f72c235;
  if (uVar5 <= 0x11a7b9611a7b961 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x11a7b9611a7b961 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0xe8);
  lVar8 = ((param_2 - lVar2) / 0xe8) * 0xe8 + lVar4;
  FUN_180540170(lVar8,0,0xe8);
  FUN_18046c9e0(lVar8);
  lVar2 = param_1[1];
  lVar3 = *param_1;
  lVar6 = lVar4;
  if (param_2 == lVar2) {
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0xe8) {
      FUN_18043b470(lVar6,lVar3);
      lVar6 = lVar6 + 0xe8;
    }
  }
  else {
    for (; lVar3 != param_2; lVar3 = lVar3 + 0xe8) {
      FUN_18043b470(lVar6,lVar3);
      lVar6 = lVar6 + 0xe8;
    }
    FUN_180448e10(lVar6,lVar6);
    lVar2 = param_1[1];
    lVar6 = lVar8;
    for (; lVar6 = lVar6 + 0xe8, param_2 != lVar2; param_2 = param_2 + 0xe8) {
      FUN_18043b470(lVar6,param_2);
    }
  }
  FUN_180448e10(lVar6,lVar6);
  FUN_180448d70(param_1,lVar4,uVar1,uVar7);
  return lVar8;
}



/* ===== 18046bcf0 FUN_18046bcf0 ===== */

void FUN_18046bcf0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_1800132b0(param_1 + 0xf18);
      FUN_1804eced0(param_1 + 0x90,0xe8,0x10,FUN_1804347d0);
      FUN_18046cc60(param_1 + 0x70);
      FUN_18046cc60(param_1 + 0x50);
      param_1 = param_1 + 0xfd0;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 18046bd70 FUN_18046bd70 ===== */

void FUN_18046bd70(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  code *local_88;
  code *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  if (0x103091b51f5e1a < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar9 = ((longlong)DAT_181112378 - (longlong)DAT_181112368 >> 4) * -0x78693bb3194be3ab;
  uVar15 = 0x103091b51f5e1a;
  if (uVar9 <= 0x103091b51f5e1a - (uVar9 >> 1)) {
    uVar15 = (uVar9 >> 1) + uVar9;
    if (uVar15 < param_2) {
      uVar15 = param_2;
    }
    else if (0x103091b51f5e1a < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar11 = (longlong)DAT_181112370 - (longlong)DAT_181112368 >> 4;
  puVar8 = (undefined8 *)FUN_18000fb70(uVar15 * 0xfd0);
  local_60 = puVar8 + lVar11 * 2;
  local_78 = &DAT_181112368;
  local_70 = puVar8;
  local_68 = uVar15;
  local_58 = local_60;
  local_58 = (undefined8 *)FUN_18046c150(local_60,param_2 + lVar11 * 0x78693bb3194be3ab);
  puVar10 = DAT_181112370;
  puVar13 = auStack_a8;
  puVar14 = auStack_a8;
  puVar12 = DAT_181112368;
  puVar16 = puVar8;
  if (DAT_181112368 != DAT_181112370) {
    do {
      *puVar16 = *puVar12;
      puVar16[1] = puVar12[1];
      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar12 + 2);
      *(undefined4 *)((longlong)puVar16 + 0x14) = *(undefined4 *)((longlong)puVar12 + 0x14);
      *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(puVar12 + 3);
      *(undefined1 *)((longlong)puVar16 + 0x1c) = *(undefined1 *)((longlong)puVar12 + 0x1c);
      *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(puVar12 + 4);
      *(undefined8 *)((longlong)puVar16 + 0x24) = *(undefined8 *)((longlong)puVar12 + 0x24);
      *(undefined4 *)((longlong)puVar16 + 0x2c) = *(undefined4 *)((longlong)puVar12 + 0x2c);
      puVar16[6] = puVar12[6];
      *(undefined4 *)(puVar16 + 7) = *(undefined4 *)(puVar12 + 7);
      *(undefined4 *)((longlong)puVar16 + 0x3c) = *(undefined4 *)((longlong)puVar12 + 0x3c);
      *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar12 + 8);
      *(undefined4 *)((longlong)puVar16 + 0x44) = *(undefined4 *)((longlong)puVar12 + 0x44);
      *(undefined4 *)(puVar16 + 9) = *(undefined4 *)(puVar12 + 9);
      uVar1 = puVar12[0xc];
      puVar12[0xc] = 0;
      uVar2 = puVar12[0xb];
      puVar12[0xb] = 0;
      uVar3 = puVar12[10];
      puVar12[10] = 0;
      puVar16[10] = uVar3;
      puVar16[0xb] = uVar2;
      puVar16[0xc] = uVar1;
      *(undefined4 *)(puVar16 + 0xd) = *(undefined4 *)(puVar12 + 0xd);
      uVar1 = puVar12[0x10];
      puVar12[0x10] = 0;
      uVar2 = puVar12[0xf];
      puVar12[0xf] = 0;
      uVar3 = puVar12[0xe];
      puVar12[0xe] = 0;
      puVar16[0xe] = uVar3;
      puVar16[0xf] = uVar2;
      puVar16[0x10] = uVar1;
      *(undefined4 *)(puVar16 + 0x11) = *(undefined4 *)(puVar12 + 0x11);
      local_80 = FUN_1804347d0;
      local_88 = FUN_18043b470;
      FUN_1804ed050(puVar16 + 0x12,puVar12 + 0x12,0xe8,0x10);
      *(undefined4 *)(puVar16 + 0x1e2) = *(undefined4 *)(puVar12 + 0x1e2);
      *(undefined4 *)((longlong)puVar16 + 0xf14) = *(undefined4 *)((longlong)puVar12 + 0xf14);
      uVar1 = puVar12[0x1e5];
      puVar12[0x1e5] = 0;
      uVar2 = puVar12[0x1e4];
      puVar12[0x1e4] = 0;
      uVar3 = puVar12[0x1e3];
      puVar12[0x1e3] = 0;
      puVar16[0x1e3] = uVar3;
      puVar16[0x1e4] = uVar2;
      puVar16[0x1e5] = uVar1;
      uVar1 = puVar12[0x1e7];
      puVar16[0x1e6] = puVar12[0x1e6];
      puVar16[0x1e7] = uVar1;
      uVar1 = puVar12[0x1e9];
      puVar16[0x1e8] = puVar12[0x1e8];
      puVar16[0x1e9] = uVar1;
      uVar1 = puVar12[0x1eb];
      puVar16[0x1ea] = puVar12[0x1ea];
      puVar16[0x1eb] = uVar1;
      uVar1 = puVar12[0x1ed];
      puVar16[0x1ec] = puVar12[0x1ec];
      puVar16[0x1ed] = uVar1;
      uVar1 = puVar12[0x1ef];
      puVar16[0x1ee] = puVar12[0x1ee];
      puVar16[0x1ef] = uVar1;
      uVar1 = puVar12[0x1f1];
      puVar16[0x1f0] = puVar12[0x1f0];
      puVar16[0x1f1] = uVar1;
      uVar1 = puVar12[499];
      puVar16[0x1f2] = puVar12[0x1f2];
      puVar16[499] = uVar1;
      uVar1 = puVar12[0x1f5];
      puVar16[500] = puVar12[500];
      puVar16[0x1f5] = uVar1;
      uVar5 = *(undefined4 *)((longlong)puVar12 + 0xfb4);
      uVar6 = *(undefined4 *)(puVar12 + 0x1f7);
      uVar7 = *(undefined4 *)((longlong)puVar12 + 0xfbc);
      *(undefined4 *)(puVar16 + 0x1f6) = *(undefined4 *)(puVar12 + 0x1f6);
      *(undefined4 *)((longlong)puVar16 + 0xfb4) = uVar5;
      *(undefined4 *)(puVar16 + 0x1f7) = uVar6;
      *(undefined4 *)((longlong)puVar16 + 0xfbc) = uVar7;
      puVar16[0x1f8] = puVar12[0x1f8];
      *(undefined4 *)(puVar16 + 0x1f9) = *(undefined4 *)(puVar12 + 0x1f9);
      *(undefined4 *)((longlong)puVar16 + 0xfcc) = *(undefined4 *)((longlong)puVar12 + 0xfcc);
      puVar16 = puVar16 + 0x1fa;
      puVar12 = puVar12 + 0x1fa;
    } while (puVar12 != puVar10);
  }
  FUN_18046bcf0(puVar16,puVar16);
  if (DAT_181112368 == (undefined8 *)0x0) goto LAB_18046c10d;
  FUN_18046bcf0(DAT_181112368,DAT_181112370);
  puVar10 = DAT_181112368;
  if ((ulonglong)(((longlong)DAT_181112378 - (longlong)DAT_181112368 >> 4) * 0x10) < 0x1000) {
LAB_18046c102:
    puVar14 = puVar13;
  }
  else {
    puVar10 = (undefined8 *)DAT_181112368[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_181112368 + (-8 - (longlong)puVar10))) {
      puVar10 = (undefined8 *)&DAT_00000005;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar13 = auStack_a0;
      goto LAB_18046c102;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x18046c10d;
  thunk_FUN_1803d64e0(puVar10);
LAB_18046c10d:
  DAT_181112368 = puVar8;
  DAT_181112370 = puVar8 + param_2 * 0x1fa;
  DAT_181112378 = puVar8 + uVar15 * 0x1fa;
  return;
}



/* ===== 18046c150 FUN_18046c150 ===== */

undefined8 *
FUN_18046c150(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
    *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    FUN_180540170(param_1 + 0x1e2,0,0xc0,param_4,puVar1,param_1,param_3);
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0xd;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
    FUN_180540170(param_1 + 0x12,0,0xe80);
    FUN_18046ccf0(param_1 + 0x12);
    param_1[0x1e2] = 0;
    param_1[0x1e3] = 0;
    param_1[0x1e4] = 0;
    param_1[0x1e5] = 0;
    param_1[0x1e6] = 0;
    param_1[0x1e7] = 0;
    param_1[0x1e8] = 0;
    param_1[0x1e9] = 0;
    param_1[0x1ea] = 0;
    param_1[0x1eb] = 0;
    param_1[0x1ec] = 0;
    param_1[0x1ed] = 0;
    param_1[0x1ee] = 0;
    param_1[0x1ef] = 0;
    param_1[0x1f0] = 0;
    param_1[0x1f1] = 0;
    param_1[0x1f2] = 0;
    param_1[499] = 0;
    param_1[500] = 0;
    param_1[0x1f5] = 0;
    param_1[0x1f6] = 0;
    param_1[0x1f7] = 0;
    param_1[0x1f8] = 0;
    param_1[0x1f9] = 0;
    param_1 = param_1 + 0x1fa;
  }
  FUN_18046bcf0(param_1,param_1);
  return param_1;
}



/* ===== 18046c2c0 FUN_18046c2c0 ===== */

longlong FUN_18046c2c0(longlong param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_180540170(param_1,0,0xe8);
    FUN_18046c9e0(param_1);
    param_1 = param_1 + 0xe8;
  }
  FUN_180448e10(param_1,param_1);
  return param_1;
}



/* ===== 18046c320 FUN_18046c320 ===== */

void FUN_18046c320(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  if (param_5 <= param_4) {
LAB_18046c45a:
    FUN_180540530(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  puVar11 = param_1;
LAB_18046c370:
  puVar2 = puVar11 + param_4 * 9;
  lVar9 = param_5 - param_4;
  lVar7 = param_4;
  if (lVar9 < param_4) {
    lVar7 = lVar9;
  }
  lVar10 = param_4 * 2;
  if (lVar9 < param_4) {
    lVar10 = param_5;
  }
  param_1 = puVar11 + lVar10 * 9;
  puVar8 = puVar2;
  do {
    if (*(byte *)((longlong)puVar8 + 0x3a) < *(byte *)((longlong)puVar11 + 0x3a)) {
      uVar6 = puVar8[1];
      *param_3 = *puVar8;
      param_3[1] = uVar6;
      uVar6 = puVar8[3];
      param_3[2] = puVar8[2];
      param_3[3] = uVar6;
      uVar6 = puVar8[5];
      param_3[4] = puVar8[4];
      param_3[5] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar8 + 0x34);
      uVar4 = *(undefined4 *)(puVar8 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar8 + 0x3c);
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar8 + 6);
      *(undefined4 *)((longlong)param_3 + 0x34) = uVar3;
      *(undefined4 *)(param_3 + 7) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0x3c) = uVar5;
      puVar1 = puVar8 + 8;
      puVar8 = puVar8 + 9;
      param_3[8] = *puVar1;
      if (puVar8 == param_1) break;
    }
    else {
      uVar6 = puVar11[1];
      *param_3 = *puVar11;
      param_3[1] = uVar6;
      uVar6 = puVar11[3];
      param_3[2] = puVar11[2];
      param_3[3] = uVar6;
      uVar6 = puVar11[5];
      param_3[4] = puVar11[4];
      param_3[5] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar11 + 0x34);
      uVar4 = *(undefined4 *)(puVar11 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0x3c);
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar11 + 6);
      *(undefined4 *)((longlong)param_3 + 0x34) = uVar3;
      *(undefined4 *)(param_3 + 7) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0x3c) = uVar5;
      puVar1 = puVar11 + 8;
      puVar11 = puVar11 + 9;
      param_3[8] = *puVar1;
      if (puVar11 == puVar2) {
        lVar10 = (longlong)param_1 - (longlong)puVar8;
        goto LAB_18046c42b;
      }
    }
    param_3 = param_3 + 9;
  } while( true );
  lVar10 = (longlong)puVar2 - (longlong)puVar11;
  puVar8 = puVar11;
LAB_18046c42b:
  FUN_180540530(param_3 + 9,puVar8,lVar10);
  param_3 = (undefined8 *)((longlong)param_3 + lVar10 + 0x48);
  param_5 = lVar9 - lVar7;
  puVar11 = param_1;
  if (lVar9 - lVar7 <= param_4) goto LAB_18046c45a;
  goto LAB_18046c370;
}



/* ===== 18046c480 FUN_18046c480 ===== */

void FUN_18046c480(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar21 = (longlong)param_2 - (longlong)param_1;
    FUN_180540530(param_6,param_1,lVar21);
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    puVar18 = param_2 + 9;
    uVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    uVar3 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar3;
    param_1[8] = param_2[8];
    puVar16 = param_1 + 9;
    puVar19 = param_6;
    do {
      puVar1 = puVar16 + 9;
      if (*(byte *)((longlong)puVar18 + 0x3a) < *(byte *)((longlong)puVar19 + 0x3a)) {
        uVar3 = puVar18[1];
        *puVar16 = *puVar18;
        puVar16[1] = uVar3;
        uVar3 = puVar18[3];
        puVar16[2] = puVar18[2];
        puVar16[3] = uVar3;
        uVar3 = puVar18[5];
        puVar16[4] = puVar18[4];
        puVar16[5] = uVar3;
        uVar4 = *(undefined4 *)((longlong)puVar18 + 0x34);
        uVar5 = *(undefined4 *)(puVar18 + 7);
        uVar6 = *(undefined4 *)((longlong)puVar18 + 0x3c);
        *(undefined4 *)(puVar16 + 6) = *(undefined4 *)(puVar18 + 6);
        *(undefined4 *)((longlong)puVar16 + 0x34) = uVar4;
        *(undefined4 *)(puVar16 + 7) = uVar5;
        *(undefined4 *)((longlong)puVar16 + 0x3c) = uVar6;
        puVar2 = puVar18 + 8;
        puVar18 = puVar18 + 9;
        puVar16[8] = *puVar2;
        if (puVar18 == param_3) {
          FUN_180540530(puVar1,puVar19,(longlong)param_6 + (lVar21 - (longlong)puVar19));
          return;
        }
      }
      else {
        uVar3 = puVar19[1];
        *puVar16 = *puVar19;
        puVar16[1] = uVar3;
        uVar3 = puVar19[3];
        puVar16[2] = puVar19[2];
        puVar16[3] = uVar3;
        uVar3 = puVar19[5];
        puVar16[4] = puVar19[4];
        puVar16[5] = uVar3;
        uVar4 = *(undefined4 *)(puVar19 + 6);
        uVar5 = *(undefined4 *)((longlong)puVar19 + 0x34);
        uVar6 = *(undefined4 *)(puVar19 + 7);
        uVar7 = *(undefined4 *)((longlong)puVar19 + 0x3c);
        *(undefined4 *)(puVar16 + 6) = uVar4;
        *(undefined4 *)((longlong)puVar16 + 0x34) = uVar5;
        *(undefined4 *)(puVar16 + 7) = uVar6;
        *(undefined4 *)((longlong)puVar16 + 0x3c) = uVar7;
        puVar16[8] = puVar19[8];
        if (puVar19 == (undefined8 *)((longlong)param_6 + lVar21 + -0x90)) {
          lVar22 = (longlong)param_3 - (longlong)puVar18;
          uVar8 = *(undefined8 *)((longlong)param_6 + lVar21 + -0x48);
          uVar9 = *(undefined8 *)((longlong)param_6 + lVar21 + -0x40);
          uVar10 = *(undefined8 *)((longlong)param_6 + lVar21 + -0x38);
          uVar11 = *(undefined8 *)((longlong)param_6 + lVar21 + -0x30);
          uVar12 = *(undefined8 *)((longlong)param_6 + lVar21 + -0x28);
          uVar13 = *(undefined8 *)((longlong)param_6 + lVar21 + -0x20);
          uVar14 = *(undefined8 *)((longlong)param_6 + lVar21 + -0x18);
          uVar15 = *(undefined8 *)((longlong)param_6 + lVar21 + -0x10);
          uVar3 = *(undefined8 *)((longlong)param_6 + lVar21 + -8);
          FUN_180540530(puVar1,uVar4,lVar22);
          *(undefined8 *)((longlong)puVar1 + lVar22) = uVar8;
          ((undefined8 *)((longlong)puVar1 + lVar22))[1] = uVar9;
          puVar18 = (undefined8 *)((longlong)puVar16 + lVar22 + 0x58);
          *puVar18 = uVar10;
          puVar18[1] = uVar11;
          puVar18 = (undefined8 *)((longlong)puVar16 + lVar22 + 0x68);
          *puVar18 = uVar12;
          puVar18[1] = uVar13;
          puVar18 = (undefined8 *)((longlong)puVar16 + lVar22 + 0x78);
          *puVar18 = uVar14;
          puVar18[1] = uVar15;
          *(undefined8 *)((longlong)puVar16 + lVar22 + 0x88) = uVar3;
          return;
        }
        puVar19 = puVar19 + 9;
      }
      puVar16 = puVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    if (param_5 < param_4) {
      lVar21 = param_5 >> 1;
      puVar16 = param_2 + lVar21 * 9;
      uVar20 = ((longlong)param_2 - (longlong)param_1 >> 3) * -0x71c71c71c71c71c7;
      puVar18 = param_1;
      if (0 < (longlong)uVar20) {
        do {
          uVar17 = uVar20 >> 1;
          if (*(byte *)((longlong)puVar18 + uVar17 * 0x48 + 0x3a) <=
              *(byte *)((longlong)puVar16 + 0x3a)) {
            puVar18 = puVar18 + uVar17 * 9 + 9;
            uVar17 = uVar20 + (-1 - uVar17);
          }
          uVar20 = uVar17;
        } while (0 < (longlong)uVar17);
      }
      lVar22 = ((longlong)puVar18 - (longlong)param_1 >> 3) * -0x71c71c71c71c71c7;
    }
    else {
      lVar22 = param_4 >> 1;
      uVar20 = ((longlong)param_3 - (longlong)param_2 >> 3) * -0x71c71c71c71c71c7;
      puVar18 = param_1 + lVar22 * 9;
      puVar16 = param_2;
      if (0 < (longlong)uVar20) {
        do {
          uVar17 = uVar20 >> 1;
          if (*(byte *)((longlong)puVar16 + uVar17 * 0x48 + 0x3a) <
              *(byte *)((longlong)puVar18 + 0x3a)) {
            puVar16 = puVar16 + uVar17 * 9 + 9;
            uVar17 = uVar20 + (-1 - uVar17);
          }
          uVar20 = uVar17;
        } while (0 < (longlong)uVar17);
      }
      lVar21 = ((longlong)puVar16 - (longlong)param_2 >> 3) * -0x71c71c71c71c71c7;
    }
    FUN_18046caa0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar18,puVar16,
                  lVar22,lVar21);
  }
  else {
    FUN_180540530(param_6,param_2,(longlong)param_3 - (longlong)param_2);
    uVar3 = param_2[-8];
    puVar18 = param_3 + -9;
    *puVar18 = param_2[-9];
    param_3[-8] = uVar3;
    puVar19 = (undefined8 *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0x48);
    puVar16 = param_2 + -0x12;
    uVar3 = param_2[-6];
    param_3[-7] = param_2[-7];
    param_3[-6] = uVar3;
    uVar3 = param_2[-4];
    param_3[-5] = param_2[-5];
    param_3[-4] = uVar3;
    uVar3 = param_2[-2];
    param_3[-3] = param_2[-3];
    param_3[-2] = uVar3;
    param_3[-1] = param_2[-1];
    while( true ) {
      for (; *(byte *)((longlong)puVar19 + 0x3a) < *(byte *)((longlong)puVar16 + 0x3a);
          puVar16 = puVar16 + -9) {
        uVar3 = puVar16[1];
        puVar18[-9] = *puVar16;
        puVar18[-8] = uVar3;
        uVar3 = puVar16[3];
        puVar18[-7] = puVar16[2];
        puVar18[-6] = uVar3;
        uVar3 = puVar16[5];
        puVar18[-5] = puVar16[4];
        puVar18[-4] = uVar3;
        uVar3 = puVar16[7];
        puVar18[-3] = puVar16[6];
        puVar18[-2] = uVar3;
        puVar18[-1] = puVar16[8];
        if (param_1 == puVar16) {
          uVar3 = puVar19[1];
          puVar18[-0x12] = *puVar19;
          puVar18[-0x11] = uVar3;
          uVar3 = puVar19[3];
          puVar18[-0x10] = puVar19[2];
          puVar18[-0xf] = uVar3;
          uVar3 = puVar19[5];
          puVar18[-0xe] = puVar19[4];
          puVar18[-0xd] = uVar3;
          uVar4 = *(undefined4 *)((longlong)puVar19 + 0x34);
          uVar5 = *(undefined4 *)(puVar19 + 7);
          uVar6 = *(undefined4 *)((longlong)puVar19 + 0x3c);
          *(undefined4 *)(puVar18 + -0xc) = *(undefined4 *)(puVar19 + 6);
          *(undefined4 *)((longlong)puVar18 + -0x5c) = uVar4;
          *(undefined4 *)(puVar18 + -0xb) = uVar5;
          *(undefined4 *)((longlong)puVar18 + -0x54) = uVar6;
          puVar18[-10] = puVar19[8];
          FUN_180540530((longlong)(puVar18 + -0x12) - ((longlong)puVar19 - (longlong)param_6),
                        param_6,(longlong)puVar19 - (longlong)param_6);
          return;
        }
        puVar18 = puVar18 + -9;
      }
      uVar3 = puVar19[1];
      puVar18[-9] = *puVar19;
      puVar18[-8] = uVar3;
      uVar3 = puVar19[3];
      puVar18[-7] = puVar19[2];
      puVar18[-6] = uVar3;
      uVar3 = puVar19[5];
      puVar18[-5] = puVar19[4];
      puVar18[-4] = uVar3;
      uVar3 = puVar19[7];
      puVar18[-3] = puVar19[6];
      puVar18[-2] = uVar3;
      puVar1 = puVar19 + 8;
      puVar19 = puVar19 + -9;
      puVar18[-1] = *puVar1;
      if (param_6 == puVar19) break;
      puVar18 = puVar18 + -9;
    }
    uVar3 = puVar16[1];
    puVar18[-0x12] = *puVar16;
    puVar18[-0x11] = uVar3;
    uVar3 = puVar16[3];
    puVar18[-0x10] = puVar16[2];
    puVar18[-0xf] = uVar3;
    uVar3 = puVar16[5];
    puVar18[-0xe] = puVar16[4];
    puVar18[-0xd] = uVar3;
    uVar4 = *(undefined4 *)((longlong)puVar16 + 0x34);
    uVar5 = *(undefined4 *)(puVar16 + 7);
    uVar6 = *(undefined4 *)((longlong)puVar16 + 0x3c);
    *(undefined4 *)(puVar18 + -0xc) = *(undefined4 *)(puVar16 + 6);
    *(undefined4 *)((longlong)puVar18 + -0x5c) = uVar4;
    *(undefined4 *)(puVar18 + -0xb) = uVar5;
    *(undefined4 *)((longlong)puVar18 + -0x54) = uVar6;
    puVar18[-10] = puVar16[8];
    FUN_180540530((longlong)(puVar18 + -0x12) - ((longlong)puVar16 - (longlong)param_1),param_1);
    uVar3 = param_6[1];
    *param_1 = *param_6;
    param_1[1] = uVar3;
    uVar3 = param_6[3];
    param_1[2] = param_6[2];
    param_1[3] = uVar3;
    uVar3 = param_6[5];
    param_1[4] = param_6[4];
    param_1[5] = uVar3;
    uVar3 = param_6[7];
    param_1[6] = param_6[6];
    param_1[7] = uVar3;
    param_1[8] = param_6[8];
  }
  return;
}



/* ===== 18046c970 FUN_18046c970 ===== */

void FUN_18046c970(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_18046bcf0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(longlong *)(param_1 + 0x10) * 0xfd0;
  lVar2 = *(longlong *)(param_1 + 8);
  if (0xfff < uVar3) {
    if ((lVar2 - *(longlong *)(lVar2 + -8)) - 8U < 0x20) {
      thunk_FUN_1803d64e0(*(longlong *)(lVar2 + -8),uVar3 + 0x27);
      return;
    }
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
  }
  thunk_FUN_1803d64e0(lVar2);
  return;
}



/* ===== 18046c9e0 FUN_18046c9e0 ===== */

undefined8 * FUN_18046c9e0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
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
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  return param_1;
}



/* ===== 18046caa0 FUN_18046caa0 ===== */

void FUN_18046caa0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined1 param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12)

{
  longlong lVar1;
  
  param_4 = param_4 - param_11;
  if (param_4 == 0) {
LAB_18046cb99:
    lVar1 = param_10;
  }
  else {
    if (param_12 != 0) {
      if ((param_4 <= param_12) && (param_4 <= param_7)) {
        FUN_180540530(param_6,param_9,param_2 - param_9);
        FUN_180540530(param_9,param_2,param_10 - param_2);
        lVar1 = (param_10 - param_2) + param_9;
        FUN_180540530(lVar1,param_6,param_2 - param_9);
        goto LAB_18046cbd3;
      }
      if (param_12 <= param_7) {
        lVar1 = param_10 - param_2;
        FUN_180540530(param_6,param_2,lVar1);
        FUN_180540530(param_10 - (param_2 - param_9),param_9,param_2 - param_9);
        FUN_180540530(param_9,param_6,lVar1);
        lVar1 = lVar1 + param_9;
        goto LAB_18046cbd3;
      }
      if (param_9 == param_2) goto LAB_18046cb99;
      if (param_2 != param_10) {
        FUN_1804ea090(param_9,param_2,param_10);
        lVar1 = param_9 + (param_10 - param_2 >> 3) * 8;
        goto LAB_18046cbd3;
      }
    }
    lVar1 = param_9;
  }
LAB_18046cbd3:
  FUN_18046b980(param_1,param_9,lVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_18046b980(lVar1,param_10,param_3,param_4);
  return;
}



/* ===== 18046cc60 FUN_18046cc60 ===== */

void FUN_18046cc60(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (*param_1 == 0) {
    return;
  }
  FUN_180448e10(*param_1,param_1[1]);
  puVar5 = auStack_28;
  uVar4 = *param_1;
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 3) * 8;
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
  *(undefined8 *)(puVar5 + -8) = 0x18046ccd2;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18046ccf0 FUN_18046ccf0 ===== */

void FUN_18046ccf0(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1) {
    FUN_18046cd40(uVar1 * 0xe8 + param_1);
  }
  return;
}



/* ===== 18046cd40 FUN_18046cd40 ===== */

void FUN_18046cd40(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
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
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}



/* ===== 18046ce00 FUN_18046ce00 ===== */

void FUN_18046ce00(void)

{
  if ((DAT_180cd1bfb == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cd1bfb = '\x01';
    DAT_181112398 = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_1811123a0 = FUN_18038eaf0("C_BaseModelEntity","m_Collision");
    DAT_18111239c = FUN_18038eaf0("CCollisionProperty","m_collisionAttribute");
    DAT_181112384 = FUN_18038eaf0("VPhysicsCollisionAttribute_t","m_nEntityId");
    DAT_181112390 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_1811123ac = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
    DAT_181112380 = FUN_18038eaf0("C_AttributeContainer","m_Item");
    DAT_181112394 = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
    DAT_1811123a4 = FUN_18038eaf0("CCSWeaponBaseVData","m_nDamage");
    DAT_1811123a8 = FUN_18038eaf0("CCSWeaponBaseVData","m_nNumBullets");
    DAT_1811123b0 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRange");
    DAT_181112388 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRangeModifier");
    DAT_18111238c = FUN_18038eaf0("CCSWeaponBaseVData","m_flPenetration");
  }
  return;
}



/* ===== 18046cf70 FUN_18046cf70 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18046cf70(float *param_1,float *param_2,float *param_3,longlong param_4,float *param_5)

{
  float fVar1;
  uint uVar2;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar13 = *(float *)(param_4 + 0x2c);
  fVar1 = *(float *)(param_4 + 0x28);
  fVar8 = param_1[2] - *(float *)(param_4 + 0x14);
  fVar11 = *(float *)(param_4 + 0x34);
  fVar5 = *(float *)(param_4 + 0x24);
  fVar9 = *(float *)(param_4 + 0x30);
  fVar17 = *param_1 - *(float *)(param_4 + 0xc);
  fVar18 = param_1[1] - *(float *)(param_4 + 0x10);
  fVar6 = param_3[2] * fVar1 - param_3[1] * fVar13;
  fVar14 = fVar5 * param_3[1] - *param_3 * fVar1;
  fVar12 = *param_3 * fVar13 - fVar5 * param_3[2];
  if (fVar12 * fVar12 + fVar6 * fVar6 + fVar14 * fVar14 <= _DAT_1808abf74) {
    fVar14 = *param_2;
    fVar6 = param_2[2];
    fVar12 = param_2[1];
    fVar15 = fVar13 * fVar8 + fVar1 * fVar18 + fVar5 * fVar17;
    fVar4 = fVar17 - fVar5 * fVar15;
    fVar7 = fVar18 - fVar1 * fVar15;
    fVar10 = fVar8 - fVar13 * fVar15;
    fVar16 = fVar7 * fVar7 + fVar4 * fVar4 + fVar10 * fVar10;
    if (DAT_1808abf5c <= fVar16) {
      fVar3 = (float)FUN_18051af10(fVar16);
      fVar3 = DAT_1808ac34c / fVar3;
      fVar8 = (*(float *)(param_4 + 0x28) * fVar3 * fVar4 -
              *(float *)(param_4 + 0x24) * fVar3 * fVar7) * fVar8 +
              (*(float *)(param_4 + 0x24) * fVar3 * fVar10 -
              *(float *)(param_4 + 0x2c) * fVar3 * fVar4) * fVar18 +
              (*(float *)(param_4 + 0x2c) * fVar3 * fVar7 -
              *(float *)(param_4 + 0x28) * fVar3 * fVar10) * fVar17;
      fVar11 = (fVar11 * fVar11 - fVar16) - fVar8 * fVar8;
      if (fVar11 <= _DAT_1808abf44) {
        return 0;
      }
      fVar11 = (float)FUN_18051af10(fVar11);
    }
    fVar13 = fVar6 * fVar13 + fVar12 * fVar1 + fVar14 * fVar5;
    if (0.0 <= fVar11 + fVar15) {
      if (fVar15 < fVar11 + fVar9) goto LAB_18046d4c5;
      fVar13 = (float)((uint)fVar13 ^ DAT_1808adec0);
      fVar15 = fVar15 - (fVar11 + fVar9);
    }
    else {
      fVar15 = (float)((uint)(fVar11 + fVar15) ^ DAT_1808adec0);
    }
    if ((fVar15 <= fVar13) && (fVar15 / fVar13 < DAT_1808ac34c)) {
      *param_5 = fVar15 / fVar13;
      return 1;
    }
  }
  else {
    fVar1 = (float)FUN_18051af10();
    fVar13 = DAT_1808ac34c;
    fVar1 = DAT_1808ac34c / fVar1;
    fVar14 = fVar1 * fVar14;
    fVar12 = fVar1 * fVar12;
    fVar1 = fVar1 * fVar6;
    fVar5 = fVar14 * fVar8 + fVar12 * fVar18 + fVar1 * fVar17;
    fVar11 = fVar11 * fVar11 - fVar5 * fVar5;
    if (0.0 < fVar11) {
      fVar5 = *(float *)(param_4 + 0x28);
      fVar6 = *(float *)(param_4 + 0x2c);
      fVar15 = *(float *)(param_4 + 0x24);
      fVar4 = fVar6 * fVar12 - fVar5 * fVar14;
      fVar14 = fVar15 * fVar14 - fVar6 * fVar1;
      fVar1 = fVar5 * fVar1 - fVar15 * fVar12;
      fVar5 = fVar5 * fVar18 + fVar6 * fVar8 + fVar15 * fVar17;
      fVar6 = fVar1 * fVar8 + fVar14 * fVar18 + fVar4 * fVar17;
      if (fVar5 <= fVar9) {
        fVar8 = 0.0;
        if (0.0 <= fVar5) {
          fVar8 = fVar5;
        }
      }
      else {
        fVar8 = fVar9;
      }
      if ((fVar5 - fVar8) * (fVar5 - fVar8) + fVar6 * fVar6 < fVar11) {
LAB_18046d4c5:
        *param_5 = 0.0;
        return 1;
      }
      uVar2 = FUN_18051af10(fVar11);
      fVar8 = param_2[2] * fVar1 + param_2[1] * fVar14 + *param_2 * fVar4;
      fVar12 = param_2[1] * *(float *)(param_4 + 0x28) + param_2[2] * *(float *)(param_4 + 0x2c) +
               *param_2 * *(float *)(param_4 + 0x24);
      fVar14 = ((float)(uVar2 ^ DAT_1808adec0) - fVar6) / fVar8;
      fVar1 = fVar14;
      if (fVar14 <= 0.0) {
        fVar1 = 0.0;
      }
      fVar1 = fVar1 * fVar12 + fVar5;
      if (0.0 <= fVar1) {
        if (fVar1 < fVar9) {
          if (fVar14 < 0.0) {
            return 0;
          }
          if (fVar13 <= fVar14) {
            return 0;
          }
          *param_5 = fVar14;
          return 1;
        }
        fVar5 = fVar5 - fVar9;
      }
      fVar1 = fVar13 / (fVar8 * fVar8 + fVar12 * fVar12);
      fVar9 = (fVar5 * fVar12 + fVar8 * fVar6) * fVar1;
      if (0.0 <= fVar9 * fVar9 - ((fVar5 * fVar5 + fVar6 * fVar6) - fVar11) * fVar1) {
        fVar9 = (float)((uint)fVar9 ^ DAT_1808adec0);
        fVar1 = (float)FUN_18051af10();
        fVar9 = fVar9 - fVar1;
        if ((0.0 <= fVar9) && (fVar9 < fVar13)) {
          *param_5 = fVar9;
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ===== 18046d560 FUN_18046d560 ===== */

undefined1 FUN_18046d560(undefined8 param_1,undefined8 param_2)

{
  (*DAT_180961f50)(param_1,param_2,0x1c300b,3,0xf);
  return 1;
}



/* ===== 18046d590 FUN_18046d590 ===== */

undefined8 FUN_18046d590(void)

{
  (*DAT_180961f70)();
  return 1;
}



/* ===== 18046d5c0 FUN_18046d5c0 ===== */

undefined8
FUN_18046d5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_18000f3a0(DAT_180961f40);
  if ((plVar1 == (longlong *)0x0) || (plVar1 = (longlong *)*plVar1, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x520))(plVar1,param_1,param_2,param_3,param_4,0,DAT_1808acda0);
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 18046d630 FUN_18046d630 ===== */

undefined1 FUN_18046d630(void)

{
  (*DAT_180961f78)();
  return 1;
}



/* ===== 18046d650 FUN_18046d650 ===== */

bool FUN_18046d650(void)

{
  char cVar1;
  
  cVar1 = (*DAT_180961f80)();
  return cVar1 != '\0';
}



/* ===== 18046d680 FUN_18046d680 ===== */

undefined8
FUN_18046d680(int *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5,longlong param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined3 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float fVar14;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 uStack_64;
  
  uVar9 = *param_2;
  iVar2 = *(int *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x73e) = uVar9;
  param_1[0x740] = iVar2;
  bVar1 = *(byte *)(param_4 + 0x37);
  *(undefined1 *)(param_4 + 0x37) = 1;
  uVar4 = *(ulonglong *)(param_4 + 8);
  local_b8 = 0;
  local_b0 = 0.0;
  *(ulonglong *)(param_4 + 8) = uVar4 & 0xfffffffffffffffd;
  cVar7 = FUN_18046d590((int)uVar9,&local_b8,param_2,param_3,param_4,param_5);
  if ((uVar4 & 2) != 0) {
    *(ulonglong *)(param_4 + 8) = *(ulonglong *)(param_4 + 8) | 2;
  }
  *(byte *)(param_4 + 0x37) = bVar1 & 0xfe;
  if (cVar7 != '\0') {
    local_a8 = *param_2;
    local_a0 = *(undefined4 *)(param_2 + 1);
    iVar2 = *param_1;
    cVar7 = FUN_18046d5c0(param_1,&local_a8,&local_b8,param_4 + 8);
    if (cVar7 != '\0') {
      if ((*(byte *)(param_4 + 8) & 2) != 0) {
        fVar13 = *(float *)(param_6 + 0x1c);
        fVar14 = *(float *)(param_6 + 0xc);
        if ((((float)local_b8 != fVar13) || (local_b8._4_4_ != *(float *)(param_6 + 0x20))) ||
           (local_b0 != *(float *)(param_6 + 0x24))) {
          fVar13 = (float)FUN_18051af10(*(float *)(param_6 + 0x20) * *(float *)(param_6 + 0x20) +
                                        fVar13 * fVar13 +
                                        *(float *)(param_6 + 0x24) * *(float *)(param_6 + 0x24));
          FUN_18051af10(local_b8._4_4_ * local_b8._4_4_ + (float)local_b8 * (float)local_b8 +
                        local_b0 * local_b0);
          if (fVar13 != extraout_XMM0_Da) {
            if (extraout_XMM0_Da * extraout_XMM0_Da == 0.0) {
              fVar14 = 0.0;
            }
            else {
              fVar14 = (fVar13 * fVar14) / extraout_XMM0_Da;
              if ((fVar14 < 0.0) || (DAT_1808ac34c < fVar14)) goto LAB_18046d956;
            }
          }
        }
        iVar3 = *param_1;
        if (iVar3 + 2 <= param_1[4]) {
          lVar5 = *(longlong *)(param_1 + 2);
          iVar12 = 0;
          iVar11 = iVar3;
          if (0 < iVar3) {
            do {
              iVar8 = (iVar11 + iVar12) / 2;
              fVar13 = *(float *)(lVar5 + 0xc + (longlong)iVar8 * 0x38);
              if ((fVar13 < fVar14) ||
                 ((fVar13 == fVar14 && (*(char *)(lVar5 + 0x32 + (longlong)iVar8 * 0x38) == '\0'))))
              {
                iVar12 = iVar8 + 1;
              }
              else {
                iVar11 = iVar8;
              }
            } while (iVar12 < iVar11);
          }
          local_98 = 0;
          uStack_64 = 0;
          uStack_90 = 0x3f800000;
          uStack_80 = 0;
          uStack_78 = 0;
          if (*(longlong *)(param_6 + 0x10) == 0) {
            local_88 = 0;
          }
          else {
            local_88 = *(undefined8 *)(*(longlong *)(param_6 + 0x10) + 0x40);
          }
          uStack_6c = *(undefined4 *)(param_6 + 0x18);
          uStack_70 = 0xffffffff;
          puVar10 = (undefined8 *)((longlong)iVar12 * 0x38 + lVar5);
          local_68 = 0;
          uStack_66 = 0;
          uStack_65 = 1;
          fStack_8c = fVar14;
          FUN_180540530((longlong)(iVar12 + 2) * 0x38 + lVar5,puVar10,
                        (longlong)(iVar3 - iVar12) * 0x38);
          uVar6 = CONCAT12(uStack_66,local_68);
          uStack_66 = 1;
          *puVar10 = local_98;
          puVar10[1] = CONCAT44(fStack_8c,uStack_90);
          puVar10[7] = local_98;
          puVar10[8] = CONCAT44(fStack_8c,uStack_90);
          puVar10[2] = local_88;
          puVar10[3] = uStack_80;
          puVar10[9] = local_88;
          puVar10[10] = uStack_80;
          puVar10[4] = uStack_78;
          puVar10[5] = CONCAT44(uStack_6c,uStack_70);
          puVar10[6] = CONCAT44(uStack_64,CONCAT13(uStack_65,uVar6));
          puVar10[0xb] = uStack_78;
          puVar10[0xc] = CONCAT44(uStack_6c,uStack_70);
          puVar10[0xd] = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT12(1,local_68)));
          *param_1 = iVar3 + 2;
        }
      }
LAB_18046d956:
      if (*param_1 != iVar2) {
        FUN_18046d630(param_1,&local_b8);
      }
      uVar9 = 1;
      goto LAB_18046d96d;
    }
  }
  uVar9 = 0;
LAB_18046d96d:
  *(byte *)(param_4 + 0x37) = bVar1;
  return uVar9;
}



/* ===== 18046d9a0 FUN_18046d9a0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046d9a0(int *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,int param_7,float *param_8,float param_9)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 *puVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_1ed8 [32];
  int local_1eb8;
  undefined8 *local_1eb0;
  undefined8 local_1ea8;
  undefined8 uStack_1ea0;
  undefined8 local_1e98;
  int local_1e90;
  undefined8 local_1e8c;
  undefined4 local_1e84;
  float local_1e80;
  int local_1e7c;
  int local_1e78;
  int local_1e74;
  float local_1e70;
  undefined4 local_1e6c;
  undefined1 *local_1e68;
  int *local_1e60;
  longlong local_1e58;
  float *local_1e50;
  float local_1e48;
  int local_1e44;
  int local_1e40;
  undefined4 local_1e3c;
  int local_1e38;
  undefined1 local_1e34;
  undefined2 local_1e33;
  undefined1 local_1e31;
  undefined8 local_1e28;
  undefined8 uStack_1e20;
  ulonglong local_1e18;
  undefined8 uStack_1e10;
  undefined8 local_1e08;
  undefined8 uStack_1e00;
  undefined8 local_1df8;
  ulonglong uStack_1df0;
  undefined8 local_1de8;
  undefined8 local_1dd8;
  undefined1 *local_1dd0;
  undefined4 local_1dc8;
  undefined4 local_1dc4;
  undefined1 local_1dc0 [7176];
  int local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0 [204];
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_78;
  undefined8 uStack_48;
  
  uStack_48 = 0x18046d9bf;
  local_78 = DAT_180919500 ^ (ulonglong)auStack_1ed8;
  local_1e50 = param_8;
  local_1dd8 = 0;
  local_1e60 = param_1;
  local_1e58 = param_2;
  FUN_180540170(local_1dc0,0,0x1c10);
  FUN_180540170(local_1a0,0,0x128);
  local_1dd0 = local_1dc0;
  local_1b0 = local_1a0;
  local_1dc8 = 0x80;
  local_1dc4 = 0x80000000;
  local_1de8 = 0;
  local_1a8 = 8;
  local_1a4 = 0x80000000;
  local_1e28 = 0;
  uStack_1e20 = 0;
  local_1e18 = 0;
  uStack_1e10 = 0;
  local_1e08 = 0;
  uStack_1e00 = 0;
  local_1df8 = 0;
  uStack_1df0 = 0;
  cVar8 = FUN_18046d560(&local_1e28,*(undefined8 *)(param_1 + 10));
  if (cVar8 != '\0') {
    local_1ea8 = *param_4;
    uStack_1ea0 = param_4[1];
    local_1e98 = param_4[2];
    local_1e18 = local_1e18 | 0x4000000000;
    uStack_1df0 = uStack_1df0 | 0x200;
    local_1e8c = *param_6;
    local_1e80 = (float)*param_1;
    local_1e90 = param_7;
    local_1e84 = *(undefined4 *)(param_6 + 1);
    local_1e74 = param_1[7];
    local_1e7c = param_1[4];
    local_1e78 = param_1[3];
    local_1e6c = 0;
    bVar9 = FUN_180011220(*(longlong *)(param_3 + 0x40) + 0x38);
    uVar11 = 0;
    if (bVar9 < 0xc) {
      uVar11 = (ulonglong)bVar9;
    }
    local_1e70 = *(float *)(param_2 + 8) / *(float *)(param_2 + 0xc + uVar11 * 4);
    local_1eb0 = &local_1ea8;
    local_1eb8 = param_1[9];
    cVar8 = FUN_18046d680(&local_1dd8,param_5,param_6,&local_1e28);
    if (cVar8 != '\0') {
      iVar10 = param_1[9];
      local_1e48 = local_1e80;
      local_1e40 = local_1e78;
      local_1e44 = local_1e7c;
      local_1e3c = FUN_18051af10(local_d4 * local_d4 + local_d0 * local_d0 + local_cc * local_cc);
      iVar7 = local_1b8;
      puVar6 = local_1dd0;
      fVar2 = local_1e70;
      iVar4 = local_1e74;
      iVar3 = local_1e90;
      uVar11 = 0;
      local_1e34 = 0;
      local_1e33 = 0;
      local_1e31 = 0;
      local_1e68 = local_1b0;
      local_1e38 = iVar10;
      if (0 < local_1b8) {
        do {
          puVar1 = local_1e68 + uVar11 * 0x18;
          iVar10 = FUN_18046d650(&local_1dd8,&local_1e48,puVar1,iVar4);
          if (iVar10 != 0) {
            return;
          }
          if (local_1e48 < fVar2) {
            return;
          }
          if (((((puVar1[0x14] & 1) == 0) &&
               (lVar12 = (ulonglong)*(ushort *)(puVar1 + 0x12) * 0x38,
               *(int *)(puVar6 + lVar12 + 0x2c) == iVar3)) && (puVar6[lVar12 + 0x33] == '\x01')) &&
             ((*(longlong *)(puVar6 + lVar12 + 0x10) != 0 &&
              (bVar9 = FUN_180011220(*(longlong *)(puVar6 + lVar12 + 0x10) + 0x38),
              fVar5 = local_1e48, bVar9 < 0xc)))) {
            iVar10 = (int)uVar11 + 1;
            *(float *)(puVar1 + 8) = local_1e48;
            *(int *)(puVar1 + 0xc) = local_1e38;
            if (iVar10 < iVar7) {
              local_1b8 = iVar10;
            }
            if (local_1e48 < 0.0) {
              return;
            }
            bVar9 = FUN_180011220();
            if ((short)local_1e60[6] == 0x1f) {
              fVar2 = DAT_1808ac34c;
            }
            else {
              uVar11 = 0;
              if (bVar9 < 0xc) {
                uVar11 = (ulonglong)bVar9;
              }
              fVar2 = *(float *)(local_1e58 + 0xc + uVar11 * 4);
            }
            if (fVar2 * fVar5 < 0.0) {
              return;
            }
            if (local_1e50 == (float *)0x0) {
              return;
            }
            *local_1e50 = (fVar2 * fVar5) / param_9;
            return;
          }
          uVar13 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar13;
        } while ((int)uVar13 < iVar7);
      }
    }
  }
  return;
}



/* ===== 18046dd40 FUN_18046dd40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18046dd40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4,longlong *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  float *local_d8;
  char local_c8;
  float local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  float local_a0 [8];
  int local_80 [8];
  ulonglong local_60;
  
  fVar1 = DAT_1808ac34c;
  local_60 = DAT_180919500 ^ (ulonglong)auStack_f8;
  lVar8 = *param_5;
  local_80[0] = -1;
  local_80[1] = -1;
  local_a0[0] = 1.0;
  local_a0[1] = 1.0;
  local_80[2] = -1;
  local_80[3] = -1;
  local_a0[2] = 1.0;
  local_a0[3] = 1.0;
  local_80[4] = -1;
  local_80[5] = -1;
  local_a0[4] = 1.0;
  local_a0[5] = 1.0;
  local_80[6] = 0xffffffff;
  local_a0[6] = 1.0;
  uVar7 = 0;
  if ((param_5[1] - lVar8 >> 3) * -0x71c71c71c71c71c7 != 0) {
    lVar12 = 1;
    bVar11 = 7;
    bVar5 = false;
    uVar10 = 0;
    local_c8 = '\0';
    local_c0 = param_3;
    local_b8 = param_4;
    local_b0 = param_2;
    local_a8 = param_1;
    do {
      uVar7 = uVar10 * 9;
      bVar4 = *(byte *)(lVar8 + 0x3a + uVar10 * 0x48);
      if ((((bVar5) && (2 < bVar4)) || (bVar11 < bVar4)) || (6 < bVar4)) break;
      local_d8 = &local_c4;
      local_c4 = 1.0;
      cVar6 = FUN_18046cf70(local_b0,local_c0,local_b8,lVar8 + uVar10 * 0x48);
      if ((cVar6 != '\0') && (local_c4 < local_a0[bVar4] || local_c4 == local_a0[bVar4])) {
        local_a0[bVar4] = local_c4;
        bVar9 = bVar4;
        if (bVar4 == 0) {
          bVar9 = bVar11;
        }
        local_80[bVar4] = (int)uVar10;
        local_c8 = '\x01';
        bVar11 = bVar9;
        if (bVar4 == 0) {
          bVar5 = true;
        }
      }
      lVar8 = *param_5;
      uVar10 = uVar10 + 1;
      uVar7 = (param_5[1] - lVar8 >> 3) * -0x71c71c71c71c71c7;
    } while (uVar10 < uVar7);
    if (local_c8 != '\0') {
      if (((fVar1 <= local_a0[0]) || (local_a0[1] < local_a0[0])) || (local_a0[2] < local_a0[0])) {
        if (((((fVar1 <= local_a0[1]) && (lVar12 = 2, fVar1 <= local_a0[2])) &&
             (lVar12 = 3, fVar1 <= local_a0[3])) &&
            ((lVar12 = 4, fVar1 <= local_a0[4] && (lVar12 = 5, fVar1 <= local_a0[5])))) &&
           (lVar12 = 6, fVar1 <= local_a0[6])) goto LAB_18046dfe3;
      }
      else {
        lVar12 = 0;
      }
      if (-1 < local_80[lVar12]) {
        fVar1 = local_a0[lVar12];
        *(float *)((longlong)local_a8 + 0xc) = fVar1;
        fVar2 = *(float *)(local_c0 + 1);
        fVar3 = *(float *)(local_b0 + 1);
        *local_a8 = CONCAT44((float)((ulonglong)*local_c0 >> 0x20) * fVar1 +
                             (float)((ulonglong)*local_b0 >> 0x20),
                             (float)*local_c0 * fVar1 + (float)*local_b0);
        *(float *)(local_a8 + 1) = fVar1 * fVar2 + fVar3;
        lVar8 = *param_5;
        local_a8[2] = lVar8 + (longlong)local_80[lVar12] * 0x48;
        return CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
      }
    }
  }
LAB_18046dfe3:
  return uVar7 & 0xffffffffffffff00;
}



/* ===== 18046e010 FUN_18046e010 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18046e010(int *param_1,longlong *param_2,undefined8 param_3,float *param_4,float *param_5,
                  undefined8 param_6,longlong *param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  
  if ((((DAT_180961f70 != 0) && (DAT_180961f78 != 0)) && (DAT_180961f80 != 0)) &&
     ((DAT_180961f40 != 0 && (DAT_180961f50 != 0)))) {
    fVar12 = *param_5 - *param_4;
    fVar13 = param_5[1] - param_4[1];
    fVar14 = param_5[2] - param_4[2];
    fVar11 = fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14;
    local_a8 = (float)FUN_18051af10();
    if ((local_a8 < DAT_1808abf54) || (DAT_1808accfc < local_a8)) {
      if (fVar11 == 0.0) {
        local_a0 = 0.0;
        local_a4 = 0.0;
        local_a8 = 0.0;
      }
      else {
        dVar10 = (double)fVar11;
        if (dVar10 < 0.0) {
          dVar10 = (double)FUN_18051ff20();
        }
        else {
          dVar10 = SQRT(dVar10);
        }
        dVar10 = DAT_1808ac500 / dVar10;
        local_a0 = (float)((double)fVar14 * dVar10);
        local_a4 = (float)((double)fVar13 * dVar10);
        local_a8 = (float)((double)fVar12 * dVar10);
      }
    }
    else {
      local_a8 = DAT_1808ac34c / local_a8;
      local_a0 = local_a8 * fVar14;
      local_a4 = local_a8 * fVar13;
      local_a8 = local_a8 * fVar12;
    }
    local_b0 = (float)param_1[2];
    local_b8 = local_b0 * local_a8;
    local_b4 = local_b0 * local_a4;
    local_88 = 0;
    local_b0 = local_b0 * local_a0;
    local_98 = _DAT_1808adae0;
    uStack_90 = _UNK_1808adae8;
    cVar4 = FUN_18046dd40(&local_98,param_4,&local_b8,&local_a8,param_3);
    lVar3 = local_88;
    if (((cVar4 != '\0') && (local_88 != 0)) &&
       ((*(longlong *)(local_88 + 0x40) != 0 &&
        ((*(byte *)(local_88 + 0x38) < 0x20 &&
         (((uint)param_1[8] >> (*(byte *)(local_88 + 0x38) & 0x1f) & 1) != 0)))))) {
      iVar2 = *param_1;
      fVar11 = (float)param_1[5];
      auVar8._0_8_ = FUN_18051af10((param_4[1] - local_98._4_4_) * (param_4[1] - local_98._4_4_) +
                                   (*param_4 - (float)local_98) * (*param_4 - (float)local_98) +
                                   (param_4[2] - (float)uStack_90) * (param_4[2] - (float)uStack_90)
                                  );
      auVar8._8_8_ = extraout_XMM0_Qb;
      auVar9._4_12_ = auVar8._4_12_;
      auVar9._0_4_ = (float)auVar8._0_8_ * fVar11;
      fVar11 = (float)FUN_180502150(auVar9._0_8_);
      bVar1 = *(byte *)(lVar3 + 0x39);
      uVar7 = (ulonglong)bVar1;
      if (0xb < bVar1) {
        uVar7 = 0;
      }
      fVar11 = fVar11 * (float)iVar2 * *(float *)((longlong)param_2 + uVar7 * 4 + 0xc);
      if (*(float *)(param_2 + 1) <= fVar11) {
        if ((*param_2 == 0) || (lVar6 = FUN_18000f3a0(), lVar6 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_180011200(lVar6 + 0x10);
          uVar5 = uVar5 & 0x7fff;
        }
        fVar11 = (float)FUN_18046d9a0(param_1,param_2,lVar3,&local_98,param_4,&local_b8,uVar5,
                                      param_6,fVar11);
        if ((0.0 <= fVar11) && (param_7 != (longlong *)0x0)) {
          *param_7 = local_88;
        }
      }
    }
  }
  return;
}



/* ===== 18046e360 FUN_18046e360 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18046e360(int *param_1,longlong *param_2,undefined8 param_3,float *param_4,float *param_5)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  float fVar7;
  float extraout_XMM0_Da;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_78;
  undefined8 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  
  FUN_18046ce00();
  if ((((DAT_180961f70 != 0) && (DAT_180961f78 != 0)) && (DAT_180961f80 != 0)) &&
     ((DAT_180961f40 != 0 && (DAT_180961f50 != 0)))) {
    fVar7 = (float)param_1[2];
    local_58 = 0;
    local_78 = fVar7 * *param_5;
    local_74 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_5 + 1) >> 0x20) * fVar7,
                        (float)*(undefined8 *)(param_5 + 1) * fVar7);
    local_68 = _DAT_1808adae0;
    uStack_60 = _UNK_1808adae8;
    cVar4 = FUN_18046dd40(&local_68,param_4,&local_78,param_5,param_3);
    lVar3 = local_58;
    if ((cVar4 != '\0') && ((local_58 != 0 && (*(longlong *)(local_58 + 0x40) != 0)))) {
      fVar7 = (float)param_1[5];
      iVar2 = *param_1;
      auVar8._0_8_ = FUN_18051af10((param_4[1] - local_68._4_4_) * (param_4[1] - local_68._4_4_) +
                                   (*param_4 - (float)local_68) * (*param_4 - (float)local_68) +
                                   (param_4[2] - (float)uStack_60) * (param_4[2] - (float)uStack_60)
                                  );
      auVar8._8_8_ = extraout_XMM0_Qb;
      auVar9._4_12_ = auVar8._4_12_;
      auVar9._0_4_ = (float)auVar8._0_8_ * fVar7;
      fVar7 = (float)FUN_180502150(auVar9._0_8_);
      bVar1 = *(byte *)(lVar3 + 0x39);
      uVar6 = (ulonglong)bVar1;
      if (0xb < bVar1) {
        uVar6 = 0;
      }
      fVar7 = fVar7 * (float)iVar2 * *(float *)((longlong)param_2 + uVar6 * 4 + 0xc);
      if (*(float *)(param_2 + 1) <= fVar7) {
        uVar5 = 0;
        if (((DAT_1811123a0 != 0) && (DAT_18111239c != 0)) && (DAT_181112384 != 0)) {
          uVar5 = FUN_180011200((ulonglong)DAT_181112384 + (ulonglong)DAT_18111239c +
                                (ulonglong)DAT_1811123a0 + *param_2);
        }
        FUN_18046d9a0(param_1,param_2,lVar3,&local_68,param_4,&local_78,uVar5,0,fVar7);
        return *(float *)(param_2 + 1) <= extraout_XMM0_Da;
      }
    }
  }
  return false;
}



/* ===== 18046e550 FUN_18046e550 ===== */

float FUN_18046e550(longlong param_1,int param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  
  FUN_18046ce00();
  if (param_2 != 1) {
    if (DAT_180c8af20 == 0) {
      if (DAT_180c8af28 == '\0') {
        DAT_180c8af20 = FUN_180264b70(PTR_s_mp_damage_headshot_only_180c8af18);
        DAT_180c8af28 = DAT_180c8af20 == 0;
        if (DAT_180c8af20 != 0) goto LAB_18046e5a7;
      }
    }
    else {
LAB_18046e5a7:
      cVar2 = FUN_180264d70(DAT_180c8af20);
      if (cVar2 != '\0') {
        return 0.0;
      }
    }
  }
  if ((DAT_181112398 == 0) ||
     (cVar2 = FUN_180011220(param_1 + (ulonglong)DAT_181112398), fVar5 = DAT_1808ac34c,
     cVar2 != '\x03')) {
    fVar5 = DAT_1808ac34c;
    bVar1 = false;
    if (DAT_180c8af50 == 0) {
      if (DAT_180c8af58 == '\0') {
        DAT_180c8af50 = FUN_180264b70(PTR_s_mp_damage_scale_t_body_180c8af48);
        DAT_180c8af58 = DAT_180c8af50 == 0;
        if (DAT_180c8af50 != 0) goto LAB_18046e691;
      }
      goto LAB_18046e6b8;
    }
LAB_18046e691:
    fVar3 = (float)FUN_180264d70(DAT_180c8af50);
LAB_18046e6b6:
    if (((uint)fVar3 & 0x7f800000) == 0x7f800000) goto LAB_18046e6b8;
  }
  else {
    bVar1 = true;
    if (DAT_180c8af38 != 0) {
LAB_18046e62a:
      fVar3 = (float)FUN_180264d70(DAT_180c8af38);
      goto LAB_18046e6b6;
    }
    if (DAT_180c8af40 == '\0') {
      DAT_180c8af38 = FUN_180264b70(PTR_s_mp_damage_scale_ct_body_180c8af30);
      DAT_180c8af40 = DAT_180c8af38 == 0;
      if (DAT_180c8af38 != 0) goto LAB_18046e62a;
    }
LAB_18046e6b8:
    fVar3 = fVar5;
    fVar5 = fVar3;
  }
  switch(param_2) {
  case 1:
    if (bVar1) {
      lVar4 = DAT_180c8af08;
      if (DAT_180c8af08 != 0) goto LAB_18046e749;
      if (DAT_180c8af10 == '\0') {
        lVar4 = FUN_180264b70(fVar3);
        DAT_180c8af10 = lVar4 == 0;
        DAT_180c8af08 = lVar4;
LAB_18046e744:
        if (lVar4 != 0) goto LAB_18046e749;
      }
    }
    else {
      lVar4 = DAT_180c8aef0;
      if (DAT_180c8aef0 == 0) {
        if (DAT_180c8aef8 == '\0') {
          lVar4 = FUN_180264b70(fVar3);
          DAT_180c8aef8 = lVar4 == 0;
          DAT_180c8aef0 = lVar4;
          goto LAB_18046e744;
        }
        goto LAB_18046e773;
      }
LAB_18046e749:
      fVar3 = (float)FUN_180264d70(lVar4);
      if (((uint)fVar3 & 0x7f800000) != 0x7f800000) {
        fVar5 = fVar3;
      }
    }
LAB_18046e773:
    fVar5 = fVar5 * param_3;
  default:
    fVar3 = fVar5;
    break;
  case 2:
  case 4:
  case 5:
  case 10:
    break;
  case 3:
    fVar3 = fVar3 * DAT_1808ac3d4;
    break;
  case 6:
  case 7:
    fVar3 = fVar3 * DAT_1808ac27c;
  }
  return fVar3;
}



/* ===== 18046e7d0 FUN_18046e7d0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046e7d0(char *param_1)

{
  size_t sVar1;
  undefined1 auStack_1048 [32];
  undefined1 local_1028 [4096];
  undefined8 local_28;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18046e7dc;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1048;
  if (DAT_180cd1bfc == '\0') {
    if (DAT_180cd1bfd == '\0') {
      if (DAT_180ca013c != '\0') {
        return;
      }
      DAT_180cd1bfd = '\x01';
      DAT_1811123b4 = 0;
      local_28 = 0;
      FUN_1802b2900(local_1028,
                    "# wl_shots.log (one F line per fired rage gun shot, one R line when it is resolved; same cmd)\n# F cmd | snap rec|pred (record tick, pred = status <= 1 or forced re-prediction of cmd - 1, live m_nTickBase, |live eye - record eye|, game ran this cmd already) | tb local tickbase / record tick | stepped tb | T stamp of the origin [perm] | off W+0x40C s (ticks) | q = T - off (ring query) covered 0 snapshot eye / 1 ring | ring n [oldest .. newest] (server-equivalent) game n oldest (the client\'s own ring) | org origin used | old eye with off 0 (d) | end stepped eye (d) | base command-snapshot eye (d) | live eye at createmove (d) | snap origin / velocity (stepped) | hist idx/count player tick+frac render tick+frac attack1/attack2 | tgt record tick hg dmg\n# R cmd | status | impacts n | proj |proj - origin| moved 0/1 | perp distance of org / old / end / base / live to the impact line | hurt hg dmg | reason\n"
                   );
      if (0 < (int)local_28) {
        DAT_1811123b4 = DAT_1811123b4 + (int)local_28;
      }
    }
    FUN_1802b2840("wl_shots.log",&DAT_1806d3198,param_1);
    sVar1 = strlen(param_1);
    DAT_1811123b4 = DAT_1811123b4 + 1 + (int)sVar1;
    if (0x1fffff < DAT_1811123b4) {
      FUN_1802b2840("wl_shots.log",
                    "# wl_shots.log: 2 MB cap reached, logging stopped for this session");
      DAT_180cd1bfd = '\0';
      DAT_180cd1bfc = '\x01';
    }
  }
  return;
}



/* ===== 18046e8d0 FUN_18046e8d0 ===== */

ulonglong FUN_18046e8d0(float *param_1,float *param_2,float *param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = *param_2;
  fVar7 = *param_3 - fVar5;
  fVar6 = param_2[1];
  fVar8 = param_3[1] - fVar6;
  fVar4 = param_2[2];
  fVar9 = param_3[2] - fVar4;
  fVar2 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18051af10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (DAT_1808abfa0 < fVar2) {
    fVar5 = *param_1 - fVar5;
    fVar6 = param_1[1] - fVar6;
    fVar4 = param_1[2] - fVar4;
    fVar3 = (fVar8 / fVar2) * fVar6 + (fVar7 / fVar2) * fVar5 + (fVar9 / fVar2) * fVar4;
    fVar5 = fVar5 - (fVar7 / fVar2) * fVar3;
    fVar6 = fVar6 - (fVar8 / fVar2) * fVar3;
    fVar4 = fVar4 - (fVar9 / fVar2) * fVar3;
    fVar5 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar5 < 0.0) {
      uVar1 = FUN_18051af10(fVar5);
    }
    else {
      uVar1 = (ulonglong)(uint)SQRT(fVar5);
    }
  }
  else {
    uVar1 = (ulonglong)DAT_1808acda0;
  }
  return uVar1;
}



/* ===== 18046ea40 FUN_18046ea40 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18046ea40(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  float *pfVar14;
  int iVar15;
  char *pcVar16;
  longlong lVar17;
  int iVar18;
  undefined4 uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1238 [32];
  undefined2 *local_1218;
  char *local_1210;
  undefined4 local_1208;
  double local_1200;
  char *local_11f8;
  undefined4 local_11f0;
  double local_11e8;
  undefined4 local_11e0;
  int local_11d8;
  double local_11d0;
  char *local_11c8;
  double local_11c0;
  double local_11b8;
  double local_11b0;
  uint local_11a8;
  undefined2 *local_11a0;
  double local_1198;
  double local_1190;
  double local_1188;
  double local_1180;
  double local_1178;
  double local_1170;
  double local_1168;
  double local_1160;
  double local_1158;
  double local_1150;
  double local_1148;
  double local_1140;
  double local_1138;
  double local_1130;
  double local_1128;
  double local_1120;
  double local_1118;
  double local_1110;
  double local_1108;
  char *local_1100;
  double local_10f8;
  double local_10f0;
  double local_10e8;
  double local_10e0;
  double local_10d8;
  double local_10d0;
  undefined2 *local_10c8;
  undefined4 local_10c0;
  undefined4 local_10b8;
  double local_10b0;
  uint local_10a8;
  double local_10a0;
  char local_1098;
  undefined8 local_1090;
  undefined8 local_1088;
  float local_1080;
  float local_107c;
  uint local_1078;
  undefined4 local_1074;
  uint local_1070;
  float local_106c;
  double local_1068;
  double local_1060;
  float local_1058;
  double local_1048 [3];
  double local_1030;
  double local_1028;
  double local_1020;
  double local_1018;
  double local_1010;
  char *local_1008;
  double local_1000;
  double local_ff8;
  double local_ff0;
  double local_fe8;
  double local_fe0;
  double local_fd8;
  double local_fd0;
  double local_fc8;
  int local_fb8;
  undefined8 local_fb4;
  float local_fac;
  float local_fa8;
  float local_fa4;
  float local_fa0;
  float local_f9c;
  undefined8 local_f98;
  undefined8 local_f90;
  float local_f88;
  float local_f84;
  float local_f80;
  float local_f7c;
  float local_f78;
  float fStack_f74;
  float fStack_f70;
  float fStack_f6c;
  undefined8 local_f68;
  undefined8 uStack_f60;
  float local_f58;
  float fStack_f54;
  float fStack_f50;
  float fStack_f4c;
  undefined1 local_f48 [664];
  undefined1 local_cb0 [1200];
  undefined4 local_800;
  undefined2 local_788;
  undefined8 local_786;
  undefined8 uStack_77e;
  undefined8 local_776;
  undefined8 uStack_76e;
  undefined8 local_766;
  undefined8 uStack_75e;
  undefined8 local_756;
  undefined8 uStack_74e;
  undefined8 local_746;
  undefined8 uStack_73e;
  undefined8 local_736;
  undefined8 uStack_72e;
  undefined8 local_726;
  undefined6 uStack_71e;
  undefined2 uStack_718;
  undefined6 uStack_716;
  undefined8 uStack_710;
  undefined2 local_708;
  undefined8 local_706;
  undefined8 uStack_6fe;
  undefined8 local_6f6;
  undefined8 uStack_6ee;
  undefined8 local_6e6;
  undefined8 uStack_6de;
  undefined8 local_6d6;
  undefined8 uStack_6ce;
  undefined8 local_6c6;
  undefined8 uStack_6be;
  undefined8 local_6b6;
  undefined8 uStack_6ae;
  undefined8 local_6a6;
  undefined8 uStack_69e;
  undefined8 local_696;
  undefined8 uStack_68e;
  undefined8 local_686;
  undefined6 uStack_67e;
  undefined2 uStack_678;
  undefined6 uStack_676;
  undefined8 uStack_670;
  undefined1 local_668 [1408];
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1238;
  if (((DAT_180cd1bfc == '\0') && (DAT_180ca013c == '\0')) &&
     (pfVar8 = *(float **)(param_2 + 0x18), pfVar8 != (float *)0x0)) {
    pfVar1 = (float *)(param_1 + 0xe0);
    uVar13 = FUN_180447e30(pfVar1,pfVar8);
    local_1058 = *(float *)(param_1 + 0x828) * DAT_1808acab0;
    iVar15 = (int)uVar13;
    local_1088._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
    fVar26 = local_1088._4_4_;
    fVar29 = ((float)iVar15 + local_1088._4_4_) - local_1058;
    local_1088 = (double)uVar13;
    uVar13 = FUN_180446830(pfVar1);
    local_1070 = iVar15 - (int)uVar13;
    local_1090._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
    local_106c = fVar26 - local_1090._4_4_;
    fVar27 = 0.0;
    if (local_106c < 0.0) {
      local_106c = local_106c + DAT_1808ac34c;
      if (local_106c < DAT_1808ac34c) {
        local_1070 = local_1070 - 1;
      }
      else {
        local_106c = 0.0;
      }
    }
    local_1090 = (undefined1 *)uVar13;
    bVar10 = FUN_1804468b0(pfVar1,&local_1070,&local_1090);
    local_1070 = (uint)bVar10;
    FUN_1801fcbf0(local_f48,pfVar1);
    local_800 = 0;
    pfVar14 = (float *)FUN_180446ad0(local_1048,local_f48,&local_1088);
    fVar25 = *pfVar14;
    local_1088 = (double)CONCAT44(local_1088._4_4_,fVar25);
    local_fa4 = pfVar14[1];
    local_1068 = (double)CONCAT44(local_1068._4_4_,local_fa4);
    local_fa0 = pfVar14[2];
    local_1060 = (double)CONCAT44(local_1060._4_4_,local_fa0);
    local_fb8 = *(int *)(param_1 + 0xbc);
    local_fb4 = *(undefined8 *)pfVar8;
    local_fac = pfVar8[2];
    local_107c = *(float *)(param_1 + 0x104) + *pfVar1;
    fVar21 = (float)*(undefined8 *)(param_1 + 0x108) + (float)*(undefined8 *)(param_1 + 0xe4);
    local_f58 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x108) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_1 + 0xe4) >> 0x20);
    local_1048[0] = (double)CONCAT44(local_f58,fVar21);
    local_1048[1] = 0.0;
    local_f98 = CONCAT44(local_f58,fVar21);
    fVar21 = (float)*(undefined8 *)(param_1 + 0x9cc) + (float)*(undefined8 *)(param_1 + 0x9a8);
    local_f78 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x9cc) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x9a8) >> 0x20);
    local_f68 = CONCAT44(local_f78,fVar21);
    uStack_f60 = 0;
    local_1080 = *(float *)(param_1 + 0x9d4) + *(float *)(param_1 + 0x9b0);
    local_f90 = CONCAT44(local_f78,fVar21);
    if (DAT_180c8af60 == local_fb8) {
      fVar23 = DAT_180c8af70;
      fVar24 = DAT_180c8af74;
      fVar28 = DAT_180c8af78;
    }
    else {
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar28 = 0.0;
    }
    local_fa8 = fVar25;
    local_f9c = local_107c;
    local_f88 = local_1080;
    local_f84 = fVar23;
    local_f80 = fVar24;
    local_f7c = fVar28;
    fStack_f74 = local_f78;
    fStack_f70 = local_f78;
    fStack_f6c = local_f78;
    fStack_f54 = local_f58;
    fStack_f50 = local_f58;
    fStack_f4c = local_f58;
    if (0xfff < (ulonglong)(DAT_1811123c0 - DAT_1811123b8)) {
      fVar21 = (float)FUN_180540530(DAT_1811123b8,DAT_1811123b8 + 0x40,
                                    DAT_1811123c0 - (DAT_1811123b8 + 0x40));
      DAT_1811123c0 = DAT_1811123c0 + -0x40;
    }
    FUN_18046fa00(fVar21,&local_fb8);
    local_788 = 0x2d;
    local_786 = 0;
    uStack_77e = 0;
    local_776 = 0;
    uStack_76e = 0;
    local_766 = 0;
    uStack_75e = 0;
    local_756 = 0;
    uStack_74e = 0;
    local_746 = 0;
    uStack_73e = 0;
    local_736 = 0;
    uStack_72e = 0;
    local_726 = 0;
    uStack_71e = 0;
    uStack_718 = 0;
    uStack_716 = 0;
    uStack_710 = 0;
    if (0 < *(int *)(param_1 + 0x6f8)) {
      uVar11 = *(uint *)(param_1 + 0x6fc) & 0x8000001f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
      }
      uVar11 = uVar11 + 0x20 & 0x8000001f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
      }
      uVar12 = (*(uint *)(param_1 + 0x6fc) - 1) + *(int *)(param_1 + 0x6f8) & 0x8000001f;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
      }
      uVar12 = uVar12 + 0x20 & 0x8000001f;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
      }
      local_11e8 = (double)*(float *)(param_1 + 0x708);
      local_1200 = (double)*(float *)(param_1 + 0x47c + (longlong)(int)uVar12 * 0x14);
      local_1210 = (char *)(double)*(float *)(param_1 + 0x47c + (longlong)(int)uVar11 * 0x14);
      local_11f0 = *(undefined4 *)(param_1 + 0x704);
      local_11f8 = (char *)CONCAT44(local_11f8._4_4_,*(undefined4 *)(param_1 + 0x700));
      local_1208 = *(undefined4 *)(param_1 + 0x478 + (longlong)(int)uVar12 * 0x14);
      local_1218 = (undefined2 *)
                   CONCAT44(local_1218._4_4_,
                            *(undefined4 *)(param_1 + 0x478 + (longlong)(int)uVar11 * 0x14));
      snprintf(&local_788,0x80,"%d [%d+%.3f .. %d+%.3f] game %d %d+%.3f");
    }
    local_708 = 0x2d;
    local_706 = 0;
    uStack_6fe = 0;
    local_6f6 = 0;
    uStack_6ee = 0;
    local_6e6 = 0;
    uStack_6de = 0;
    local_6d6 = 0;
    uStack_6ce = 0;
    local_6c6 = 0;
    uStack_6be = 0;
    local_6b6 = 0;
    uStack_6ae = 0;
    local_6a6 = 0;
    uStack_69e = 0;
    local_696 = 0;
    uStack_68e = 0;
    local_686 = 0;
    uStack_67e = 0;
    uStack_678 = 0;
    uStack_676 = 0;
    uStack_670 = 0;
    iVar4 = *(int *)(param_1 + 0x90c);
    uVar19 = 0xffffffff;
    local_1090 = &DAT_18058b643;
    if ((-1 < iVar4) &&
       (iVar18 = (int)(DAT_1809f35c0 - DAT_1809f35b8 >> 2) * 0x2fa0be83, iVar4 < iVar18)) {
      lVar17 = (longlong)iVar4 * 0xac;
      local_11d8 = 0xffffffff;
      if (DAT_1809f35d8._4_1_ != '\0') {
        local_11d8 = (undefined4)DAT_1809f35d8;
      }
      local_11e0 = 0xffffffff;
      if (DAT_1809f35d0._4_1_ != '\0') {
        local_11e0 = (undefined4)DAT_1809f35d0;
      }
      local_11e8 = (double)*(float *)(lVar17 + 0x10 + DAT_1809f35b8);
      local_11f8 = "(off)";
      if (*(char *)(lVar17 + 0x14 + DAT_1809f35b8) != '\0') {
        local_11f8 = "";
      }
      local_1200 = (double)*(float *)(lVar17 + 0x1c + DAT_1809f35b8);
      local_1210 = "(off)";
      if (*(char *)(lVar17 + 0x20 + DAT_1809f35b8) != '\0') {
        local_1210 = "";
      }
      local_11f0 = *(undefined4 *)(lVar17 + 0xc + DAT_1809f35b8);
      local_1208 = *(undefined4 *)(lVar17 + 0x18 + DAT_1809f35b8);
      local_1218 = (undefined2 *)CONCAT44(local_1218._4_4_,iVar18);
      snprintf(&local_708,0xa0,"%d/%d player %s%d+%.4f render %s%d+%.4f a1 %d a2 %d");
    }
    pcVar16 = "";
    local_1090 = (undefined1 *)CONCAT44(local_1090._4_4_,*(int *)(param_1 + 0xbc));
    local_1098 = DAT_180c8af60 == *(int *)(param_1 + 0xbc);
    local_fc8 = (double)*(float *)(param_2 + 0xc);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      local_1078 = 0xffffffff;
    }
    else {
      local_1078 = (uint)*(byte *)(*(longlong *)(param_2 + 0x20) + 0x39);
    }
    puVar9 = *(undefined4 **)(param_2 + 0x28);
    if (puVar9 == (undefined4 *)0x0) {
      local_1074 = 0;
    }
    else {
      fVar27 = (float)puVar9[1];
      local_1074 = *puVar9;
    }
    if ((*(longlong *)(param_2 + 0x10) != 0) &&
       (lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8), lVar17 != 0)) {
      uVar19 = *(undefined4 *)(lVar17 + 0x10);
    }
    local_1048[2] = (double)*(float *)(param_1 + 0xf4);
    local_1030 = (double)*(float *)(param_1 + 0xf0);
    local_1028 = (double)*(float *)(param_1 + 0xec);
    local_1020 = (double)*(float *)(param_1 + 0xe8);
    local_1018 = (double)*(float *)(param_1 + 0xe4);
    local_1010 = (double)*pfVar1;
    local_1008 = " (no note)";
    if ((bool)local_1098) {
      local_1008 = "";
    }
    fVar21 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    fVar22 = (fVar23 - fVar21) * (fVar23 - fVar21) + (fVar24 - fVar2) * (fVar24 - fVar2) +
             (fVar28 - fVar3) * (fVar28 - fVar3);
    if (fVar22 < 0.0) {
      fVar22 = (float)FUN_18051af10(fVar22);
    }
    else {
      fVar22 = SQRT(fVar22);
    }
    local_1000 = (double)fVar22;
    local_ff8 = (double)fVar28;
    local_ff0 = (double)fVar24;
    local_fe8 = (double)fVar23;
    fVar23 = ((float)local_f68 - fVar21) * ((float)local_f68 - fVar21) +
             (local_f78 - fVar2) * (local_f78 - fVar2) + (local_1080 - fVar3) * (local_1080 - fVar3)
    ;
    if (fVar23 < 0.0) {
      fVar23 = (float)FUN_18051af10(fVar23);
    }
    else {
      fVar23 = SQRT(fVar23);
    }
    local_fe0 = (double)fVar23;
    fVar23 = local_1048[0]._0_4_;
    fVar24 = (local_107c - fVar21) * (local_107c - fVar21) +
             (local_1048[0]._0_4_ - fVar2) * (local_1048[0]._0_4_ - fVar2) +
             (local_f58 - fVar3) * (local_f58 - fVar3);
    if (fVar24 < 0.0) {
      fVar24 = (float)FUN_18051af10(fVar24);
    }
    else {
      fVar24 = SQRT(fVar24);
    }
    local_fd8 = (double)fVar24;
    fVar24 = local_1068._0_4_;
    fVar28 = local_1060._0_4_;
    fVar25 = (fVar25 - fVar21) * (fVar25 - fVar21) +
             (local_1068._0_4_ - fVar2) * (local_1068._0_4_ - fVar2) +
             (local_1060._0_4_ - fVar3) * (local_1060._0_4_ - fVar3);
    if (fVar25 < 0.0) {
      fVar25 = (float)FUN_18051af10(fVar25);
    }
    else {
      fVar25 = SQRT(fVar25);
    }
    local_1060 = (double)fVar28;
    local_1068 = (double)fVar24;
    local_1088 = (double)(float)local_1088;
    local_fd0 = (double)*(float *)(param_1 + 0x828);
    if (*(char *)(pfVar8 + 5) != '\0') {
      pcVar16 = " perm";
    }
    local_1048[0] = (double)fVar26;
    uVar5 = *(undefined4 *)(param_1 + 0x23c);
    uVar6 = *(undefined4 *)(param_1 + 0xac8);
    uVar7 = *(undefined4 *)(param_1 + 0xb04);
    bVar20 = DAT_180c8af88 != '\0';
    if (local_1098 == '\0') {
      local_1218 = &DAT_1806dfbb4;
      fVar26 = DAT_1808acda0;
    }
    else {
      fVar26 = (DAT_180c8af70 - _DAT_180c8af7c) * (DAT_180c8af70 - _DAT_180c8af7c) +
               (DAT_180c8af74 - _DAT_180c8af80) * (DAT_180c8af74 - _DAT_180c8af80) +
               (DAT_180c8af78 - _DAT_180c8af84) * (DAT_180c8af78 - _DAT_180c8af84);
      if (fVar26 < 0.0) {
        fVar26 = (float)FUN_18051af10(fVar26);
      }
      else {
        fVar26 = SQRT(fVar26);
      }
      local_1218 = (undefined2 *)&DAT_1808ab460;
      if (DAT_180c8af64 != '\0') {
        local_1218 = (undefined2 *)&DAT_1806e5210;
      }
    }
    local_10b0 = (double)fVar27;
    local_1130 = (double)local_1080;
    local_1138 = (double)local_f78;
    local_1140 = (double)(float)local_f68;
    local_1150 = (double)local_f58;
    local_1158 = (double)fVar23;
    local_1160 = (double)local_107c;
    local_1188 = (double)fVar3;
    local_1190 = (double)fVar2;
    local_1198 = (double)fVar21;
    local_11b0 = (double)fVar29;
    local_11b8 = (double)local_1058;
    local_1200 = (double)fVar26;
    local_10a0 = local_fc8;
    local_10a8 = local_1078;
    local_10b8 = local_1074;
    local_10c8 = &local_708;
    local_10d0 = local_1048[2];
    local_10d8 = local_1030;
    local_10e0 = local_1028;
    local_10e8 = local_1020;
    local_10f0 = local_1018;
    local_10f8 = local_1010;
    local_1100 = local_1008;
    local_1108 = local_1000;
    local_1110 = local_ff8;
    local_1118 = local_ff0;
    local_1120 = local_fe8;
    local_1128 = local_fe0;
    local_1148 = local_fd8;
    local_1170 = local_1060;
    local_1178 = local_1068;
    local_1180 = local_1088;
    local_11a0 = &local_788;
    local_11a8 = local_1070;
    local_11c0 = local_fd0;
    local_11d0 = local_1048[0];
    local_11e8 = (double)CONCAT44(local_11e8._4_4_,uVar6);
    local_11f8 = (char *)CONCAT44(local_11f8._4_4_,(uint)bVar20);
    local_1208 = DAT_180c8af6c;
    local_1210 = (char *)CONCAT44(local_1210._4_4_,DAT_180c8af68);
    local_11f0 = uVar7;
    local_11e0 = uVar5;
    local_11d8 = iVar15;
    local_11c8 = pcVar16;
    local_1168 = (double)fVar25;
    local_10c0 = uVar19;
    snprintf(local_668,0x578,
             "F %d | snap %s rec %d live %d dlive %.2f ran %d | tb %d/%d | stepped tb %d | T %d+%.4f%s | off %.5f s (%.3f t) | q %.3f covered %d | ring %s | org %.2f %.2f %.2f | old %.2f %.2f %.2f (%.2f) | end %.2f %.2f %.2f (%.2f) | base %.2f %.2f %.2f (%.2f) | live %.2f %.2f %.2f (%.2f)%s | snap o %.2f %.2f %.2f v %.1f %.1f %.1f | hist %s | tgt %d rec %d+%.3f hg %d dmg %.0f"
             ,(ulonglong)local_1090 & 0xffffffff);
    FUN_18046e7d0(local_668);
    FUN_1800244c0(local_cb0);
  }
  return;
}



/* ===== 18046f600 FUN_18046f600 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046f600(int *param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_478 [32];
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  uint local_428;
  char *local_420;
  int local_418;
  int local_410;
  undefined2 *local_408;
  undefined8 local_3f8;
  int local_3f0;
  undefined8 local_3e8;
  int local_3e0;
  int local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  int iStack_3a4;
  undefined8 uStack_3a0;
  char local_398 [8];
  char local_390;
  undefined1 local_38f [199];
  undefined1 local_2c8 [608];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_478;
  if ((char)param_1[4] == '\0') {
    uVar5 = DAT_1811123c0 - DAT_1811123b8 >> 6;
    bVar3 = false;
    local_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3d0 = 0;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    uStack_3c0 = 0;
    uStack_3bc = 0;
    local_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    local_3a8 = 0;
    iStack_3a4 = 0;
    uStack_3a0 = 0;
    if (uVar5 != 0) {
      uVar4 = 0;
      do {
        piVar6 = (int *)(uVar4 * 0x40 + DAT_1811123b8);
        if (*piVar6 == *param_1) {
          uStack_3d4 = (undefined4)*(undefined8 *)(piVar6 + 1);
          uStack_3d0 = (undefined4)((ulonglong)*(undefined8 *)(piVar6 + 1) >> 0x20);
          uStack_3cc = (undefined4)*(undefined8 *)(piVar6 + 3);
          uStack_3c8 = (undefined4)((ulonglong)*(undefined8 *)(piVar6 + 3) >> 0x20);
          uStack_3c4 = (undefined4)*(undefined8 *)(piVar6 + 5);
          uStack_3c0 = (undefined4)((ulonglong)*(undefined8 *)(piVar6 + 5) >> 0x20);
          uStack_3bc = (undefined4)*(undefined8 *)(piVar6 + 7);
          local_3b8 = (undefined4)((ulonglong)*(undefined8 *)(piVar6 + 7) >> 0x20);
          uStack_3b4 = (undefined4)*(undefined8 *)(piVar6 + 9);
          uStack_3b0 = (undefined4)((ulonglong)*(undefined8 *)(piVar6 + 9) >> 0x20);
          uStack_3ac = (undefined4)*(undefined8 *)(piVar6 + 0xb);
          local_3a8 = (undefined4)((ulonglong)*(undefined8 *)(piVar6 + 0xb) >> 0x20);
          iStack_3a4 = piVar6[0xd];
          uStack_3a0 = *(undefined8 *)(piVar6 + 0xe);
          local_3d8 = *piVar6;
          FUN_180540530(piVar6,piVar6 + 0x10,DAT_1811123c0 - (longlong)(piVar6 + 0x10));
          DAT_1811123c0 = DAT_1811123c0 + -0x40;
          bVar3 = true;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    if ((DAT_180cd1bfc == '\0') && (DAT_180ca013c == '\0')) {
      iVar2 = param_1[0x7e];
      local_398[0] = s_line_n_a_1808ab2e0[0];
      local_398[1] = s_line_n_a_1808ab2e0[1];
      local_398[2] = s_line_n_a_1808ab2e0[2];
      local_398[3] = s_line_n_a_1808ab2e0[3];
      local_398[4] = s_line_n_a_1808ab2e0[4];
      local_398[5] = s_line_n_a_1808ab2e0[5];
      local_398[6] = s_line_n_a_1808ab2e0[6];
      local_398[7] = s_line_n_a_1808ab2e0[7];
      local_390 = s_line_n_a_1808ab2e0[8];
      FUN_180540170(local_38f,0,0xbf);
      if (1 < iVar2) {
        local_3e0 = param_1[0x62];
        local_3e8 = *(undefined8 *)(param_1 + 0x60);
        local_3f8 = *(undefined8 *)(param_1 + ((longlong)iVar2 + 0x1f) * 3);
        local_3f0 = param_1[((longlong)iVar2 + 0x1f) * 3 + 2];
        if (bVar3) {
          fVar7 = (float)FUN_18046e8d0(&iStack_3a4,&local_3e8,&local_3f8);
          fVar8 = (float)FUN_18046e8d0(&uStack_3b0,&local_3e8,&local_3f8);
          fVar9 = (float)FUN_18046e8d0(&uStack_3bc,&local_3e8,&local_3f8);
          fVar10 = (float)FUN_18046e8d0(&uStack_3c8,&local_3e8,&local_3f8);
          fVar11 = (float)FUN_18046e8d0(&uStack_3d4,&local_3e8,&local_3f8);
          local_458 = (double)fVar10;
          local_450 = (double)fVar9;
          local_448 = (double)fVar8;
          local_440 = (double)fVar7;
          snprintf(local_398,200,"perp org %.3f old %.3f end %.3f base %.3f live %.3f",
                   (double)fVar11);
        }
        else {
          fVar7 = (float)FUN_18046e8d0(param_1 + 5,&local_3e8,&local_3f8);
          snprintf(local_398,200,"perp org %.3f (no F line)",(double)fVar7);
        }
      }
      if ((param_2 == (undefined2 *)0x0) && (param_2 = &DAT_1806eb0d8, param_1[0x4e] == 2)) {
        param_2 = (undefined2 *)&DAT_1806e0924;
      }
      fVar7 = (float)param_1[0x52];
      cVar1 = *(char *)((longlong)param_1 + 0x13d);
      fVar8 = (float)param_1[0x53];
      fVar11 = fVar7 - (float)param_1[5];
      fVar9 = (float)param_1[0x54];
      fVar12 = fVar8 - (float)param_1[6];
      fVar10 = fVar9 - (float)param_1[7];
      fVar10 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
      if (fVar10 < 0.0) {
        fVar10 = (float)FUN_18051af10(fVar10);
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      local_410 = param_1[0x55];
      local_418 = param_1[0x57];
      local_420 = local_398;
      local_428 = (uint)(cVar1 != '\0');
      local_430 = (double)fVar10;
      local_438 = (double)fVar9;
      local_440 = (double)fVar8;
      local_448 = (double)fVar7;
      local_450 = (double)CONCAT44(local_450._4_4_,iVar2);
      local_458 = (double)CONCAT44(local_458._4_4_,param_1[0x4e]);
      local_408 = param_2;
      snprintf(local_2c8,600,
               "R %d | status %d | impacts %d | proj %.2f %.2f %.2f d %.3f moved %d | %s | hurt hg %d dmg %d | %s"
               ,*param_1);
      FUN_18046e7d0(local_2c8);
    }
  }
  return;
}



/* ===== 18046fa00 FUN_18046fa00 ===== */

undefined8 * FUN_18046fa00(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = DAT_1811123c0;
  if (DAT_1811123c0 != DAT_1811123c8) {
    uVar5 = param_2[1];
    *DAT_1811123c0 = *param_2;
    puVar6[1] = uVar5;
    uVar5 = param_2[3];
    puVar6[2] = param_2[2];
    puVar6[3] = uVar5;
    uVar5 = param_2[5];
    puVar6[4] = param_2[4];
    puVar6[5] = uVar5;
    uVar5 = param_2[7];
    puVar6[6] = param_2[6];
    puVar6[7] = uVar5;
    puVar6 = DAT_1811123c0;
    DAT_1811123c0 = DAT_1811123c0 + 8;
    return puVar6;
  }
  uVar12 = 0x3ffffffffffffff;
  uVar15 = (longlong)DAT_1811123c0 - (longlong)DAT_1811123b8;
  lVar13 = (longlong)uVar15 >> 6;
  if (lVar13 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar14 = lVar13 + 1;
  uVar8 = (longlong)DAT_1811123c8 - (longlong)DAT_1811123b8 >> 6;
  if (uVar8 <= 0x3ffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar12 = uVar14;
    if (uVar14 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x3ffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar12 * 0x40);
  uVar5 = param_2[1];
  puVar16 = (undefined8 *)((uVar15 & 0xffffffffffffffc0) + (longlong)puVar7);
  *puVar16 = *param_2;
  puVar16[1] = uVar5;
  uVar5 = param_2[3];
  puVar16[2] = param_2[2];
  puVar16[3] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)puVar16 + 0x24) = uVar2;
  *(undefined4 *)(puVar16 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(puVar16 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)puVar16 + 0x34) = uVar2;
  *(undefined4 *)(puVar16 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x3c) = uVar4;
  if (puVar6 == DAT_1811123c0) {
    lVar13 = (longlong)DAT_1811123c0 - (longlong)DAT_1811123b8;
    puVar9 = puVar7;
    puVar6 = DAT_1811123b8;
  }
  else {
    FUN_180540530(puVar7,DAT_1811123b8,(longlong)puVar6 - (longlong)DAT_1811123b8);
    puVar9 = puVar16 + 8;
    lVar13 = (longlong)DAT_1811123c0 - (longlong)puVar6;
  }
  puVar10 = auStack_38;
  puVar11 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar13);
  if (DAT_1811123b8 == (undefined8 *)0x0) goto LAB_18046fb82;
  puVar6 = DAT_1811123b8;
  if (((longlong)DAT_1811123c8 - (longlong)DAT_1811123b8 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18046fb7a:
    puVar11 = puVar10;
  }
  else {
    puVar6 = (undefined8 *)DAT_1811123b8[-1];
    if (0x1f < (ulonglong)((longlong)DAT_1811123b8 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar10 = auStack_30;
      goto LAB_18046fb7a;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x18046fb82;
  thunk_FUN_1803d64e0(puVar6);
LAB_18046fb82:
  DAT_1811123c0 = puVar7 + uVar14 * 8;
  DAT_1811123b8 = puVar7;
  DAT_1811123c8 = puVar7 + uVar12 * 8;
  return puVar16;
}



/* ===== 18046fbd0 FUN_18046fbd0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046fbd0(char *param_1)

{
  size_t sVar1;
  undefined1 auStack_1048 [32];
  undefined1 local_1028 [4096];
  undefined8 local_28;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18046fbdc;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1048;
  if (DAT_180cd1bff == '\0') {
    if (DAT_180ca013d != '\0') {
      return;
    }
    if (DAT_180cd1bfe != '\0') {
      return;
    }
    DAT_180cd1bff = '\x01';
    DAT_1811123d8 = 0;
    local_28 = 0;
    FUN_1802b2900(local_1028,
                  "# wl_rage.log (new session)\n# cmd tick v fl tgt2 aa=gnd|user gate=<quick stop pre-pass exit> P[v dt ready gnd] Pw[z m cone]=<P zoom, weapon mode, inaccuracy+spread> r3=<R3 best hc/needed dmg=dmg/min> es=<early stop ran> W0=(fwd,left by=basis yaw vy=view yaw n=steps) W1=(fwd,left by n) qs=<quick scope exit> Q[v dt] Qw[z m cone] hc=<best/needed> enc=(fwd,left steps move_steps) wpn=<item def> L[z=zoom m=mode sc=scoped rz=resume zoom]\n# shot cmd target code reason hg=<aimed hitgroup>/<hurt hitgroup> hc dmg hurt partial\n# why <exit> (x<repeats>, a changed exit or every 64th repeat is written) cmd tb=<tick base+subtick> st=<Selftrack> lim=<Limiters> rp=<forced re-prediction this cmd> next=<next primary attack> ring=<shoot positions> [<oldest>..<newest>] off=<W+0x40C ticks> org=<origins> {d=<|origin - snapshot eye|> t=<shot stamp> src=<1 ring, 0 snapshot eye> p=<permission> h=<history level>} jobs best dmg=<dmg/required> hc=<hit chance/needed> o=<origin index> xh=<on crosshair>\n# why exits: not_ready no_attack no_target low_damage low_hitchance kill_delay reaction_time aim_fov delay_shot reselect_empty target_slot seeded_miss solve_failed shot; rage: no_record (cmd-1 record missing after the forced re-prediction) flags_0x20 (record m_fFlags & 0x20, skipped like NL 0x5c546e) no_weapon\n"
                 );
    if (0 < (int)local_28) {
      DAT_1811123d8 = DAT_1811123d8 + (int)local_28;
    }
  }
  FUN_1802b2840("wl_rage.log",&DAT_1806d3198,param_1);
  sVar1 = strlen(param_1);
  DAT_1811123d8 = DAT_1811123d8 + 1 + (int)sVar1;
  if (0x1fffff < DAT_1811123d8) {
    FUN_1802b2840("wl_rage.log","# wl_rage.log: 2 MB cap reached, logging stopped for this session")
    ;
    DAT_180cd1bff = '\0';
    DAT_180cd1bfe = '\x01';
  }
  return;
}



/* ===== 18046fcd0 FUN_18046fcd0 ===== */

int FUN_18046fcd0(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  
  if ((-1 < param_2) && (iVar4 = param_3 + -1, param_2 < iVar4)) {
    puVar3 = (ulonglong *)FUN_180013640();
    iVar2 = FUN_180501904(*puVar3 | 2,param_1 + param_2,(longlong)(param_3 - param_2),param_4,0,
                          &param_5);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    if (-1 < iVar2) {
      iVar1 = iVar2 + param_2;
      if (iVar4 <= iVar2 + param_2) {
        iVar1 = iVar4;
      }
      return iVar1;
    }
  }
  return param_2;
}



/* ===== 18046fd70 FUN_18046fd70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18046fd70(void)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 auStack_498 [32];
  char *local_478;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  undefined *local_450;
  char *local_448;
  double local_440;
  undefined4 local_438;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_498;
  if (DAT_180c8af90 != '\0') {
    pcVar2 = "none";
    DAT_180c8af90 = '\0';
    local_428[0] = 0;
    switch(DAT_180c8afa5) {
    case 0:
      local_448 = "none";
      break;
    case 1:
      local_448 = "shot";
      break;
    case 2:
      local_448 = "off";
      break;
    case 3:
      local_448 = "slow_air";
      break;
    case 4:
      local_448 = "slow_gnd";
      break;
    case 5:
      local_448 = "ducked";
      break;
    case 6:
      local_448 = "no_ticks";
      break;
    case 7:
      local_448 = "p_fast";
      break;
    case 8:
      local_448 = "p_notready";
      break;
    case 9:
      local_448 = "air_off";
      break;
    case 10:
      local_448 = "land_off";
      break;
    case 0xb:
      local_448 = "no_target";
      break;
    case 0xc:
      local_448 = "delay";
      break;
    case 0xd:
      local_448 = "STOP";
      break;
    default:
      local_448 = "?";
    }
    local_450 = &DAT_1808abb10;
    if (DAT_180c8afa4 != '\0') {
      local_450 = &DAT_1806e4e94;
    }
    local_458 = (double)DAT_180c8afa8;
    local_468 = (double)DAT_180c8af9c;
    local_460 = (double)CONCAT44(local_460._4_4_,DAT_180c8afa0);
    local_470 = (double)CONCAT44(local_470._4_4_,DAT_180c8af98);
    local_478 = (char *)CONCAT44(local_478._4_4_,DAT_180c8af94);
    uVar1 = FUN_18046fcd0(local_428,0,0x400,"cmd=%d tick=%d v=%.1f fl=0x%X tgt2=%.1f aa=%s gate=%s")
    ;
    if (DAT_180c8afac != '\0') {
      local_478 = (char *)(double)DAT_180c8afb0;
      local_460 = (double)CONCAT44(local_460._4_4_,(uint)(DAT_180c8afb9 != '\0'));
      local_468 = (double)CONCAT44(local_468._4_4_,(uint)(DAT_180c8afb8 != '\0'));
      local_470 = (double)CONCAT44(local_470._4_4_,DAT_180c8afb4);
      uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," P[v=%.1f dt=%d ready=%d gnd=%d]");
    }
    if (DAT_180c8b012 != '\0') {
      local_468 = (double)DAT_180c8b01c;
      local_470 = (double)CONCAT44(local_470._4_4_,DAT_180c8b018);
      local_478 = (char *)CONCAT44(local_478._4_4_,DAT_180c8b014);
      uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," Pw[z=%d m=%d cone=%.4f]");
    }
    if (DAT_180c8b030 != '\0') {
      local_460 = (double)DAT_180c8b040;
      local_468 = (double)DAT_180c8b03c;
      local_470 = (double)DAT_180c8b038;
      local_478 = (char *)(double)DAT_180c8b034;
      uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," r3=%.2f/%.2f dmg=%.0f/%.0f");
    }
    local_478 = (char *)CONCAT44(local_478._4_4_,(uint)(DAT_180c8afba != '\0'));
    uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," es=%d");
    if (DAT_180c8afba != '\0') {
      local_438 = DAT_180c8afe4;
      local_440 = (double)DAT_180c8afe0;
      local_448 = (char *)(double)DAT_180c8afd8;
      local_450 = (undefined *)(double)DAT_180c8afd4;
      local_460 = (double)DAT_180c8afcc;
      local_458 = (double)CONCAT44(local_458._4_4_,DAT_180c8afd0);
      local_468 = (double)DAT_180c8afc8;
      local_470 = (double)DAT_180c8afc0;
      local_478 = (char *)(double)DAT_180c8afbc;
      uVar1 = FUN_18046fcd0(local_428,uVar1,0x400,
                            " W0=(%.2f,%.2f by=%.1f vy=%.1f n=%d) W1=(%.2f,%.2f by=%.1f n=%d)");
    }
    switch(DAT_180c8afe8) {
    case 0:
      break;
    case 1:
      pcVar2 = "off";
      break;
    case 2:
      pcVar2 = "not_ready";
      break;
    case 3:
      pcVar2 = "no_target";
      break;
    case 4:
      pcVar2 = "low_hc";
      break;
    case 5:
      pcVar2 = "PRESS";
      break;
    default:
      pcVar2 = "?";
    }
    local_478 = pcVar2;
    uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," qs=%s");
    if (DAT_180c8afe9 != '\0') {
      local_470 = (double)CONCAT44(local_470._4_4_,DAT_180c8aff0);
      local_478 = (char *)(double)DAT_180c8afec;
      uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," Q[v=%.1f dt=%d]");
    }
    if (DAT_180c8b020 != '\0') {
      local_468 = (double)DAT_180c8b02c;
      local_470 = (double)CONCAT44(local_470._4_4_,DAT_180c8b028);
      local_478 = (char *)CONCAT44(local_478._4_4_,DAT_180c8b024);
      uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," Qw[z=%d m=%d cone=%.4f]");
    }
    if (DAT_180c8aff4 != '\0') {
      local_470 = (double)DAT_180c8affc;
      local_478 = (char *)(double)DAT_180c8aff8;
      uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," hc=%.2f/%.2f");
    }
    if (DAT_1809f3570 == DAT_180c8af94) {
      local_460 = (double)CONCAT44(local_460._4_4_,DAT_1809f3580);
      local_468 = (double)CONCAT44(local_468._4_4_,DAT_1809f357c);
      local_470 = (double)DAT_1809f3578;
      local_478 = (char *)(double)DAT_1809f3574;
      uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," enc=(%.2f,%.2f %d %d)");
    }
    else {
      uVar1 = FUN_18046fcd0(local_428,uVar1,0x400," enc=n/a");
    }
    if (DAT_180c8b000 != '\0') {
      local_458 = (double)CONCAT44(local_458._4_4_,(uint)(DAT_180c8b011 != '\0'));
      local_460 = (double)CONCAT44(local_460._4_4_,(uint)(DAT_180c8b010 != '\0'));
      local_468 = (double)CONCAT44(local_468._4_4_,DAT_180c8b00c);
      local_470 = (double)CONCAT44(local_470._4_4_,DAT_180c8b008);
      local_478 = (char *)CONCAT44(local_478._4_4_,DAT_180c8b004);
      FUN_18046fcd0(local_428,uVar1,0x400," wpn=%d L[z=%d m=%d sc=%d rz=%d]");
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
    FUN_18046fbd0(local_428);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
  }
  return;
}



/* ===== 180470370 FUN_180470370 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180470370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,float param_8,
                  undefined4 param_9,byte param_10)

{
  int iVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined2 *local_158;
  undefined4 local_150;
  undefined4 local_148;
  double local_140;
  double local_138;
  undefined4 local_130;
  uint local_128;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_188;
  if ((DAT_180cd1bfe == '\0') && (DAT_180ca013d == '\0')) {
    local_128 = (uint)param_10;
    local_158 = &DAT_1806eb0d8;
    if (param_4 != (undefined2 *)0x0) {
      local_158 = param_4;
    }
    local_130 = param_9;
    local_138 = (double)param_8;
    local_140 = (double)param_7;
    local_148 = param_6;
    local_150 = param_5;
    local_168 = param_2;
    local_160 = param_3;
    iVar1 = snprintf(local_118,0x100,
                     "shot cmd=%d target=%d code=%d reason=\"%s\" hg=%d/%d hc=%.3f dmg=%.1f hurt=%d partial=%d"
                     ,param_1);
    if (-1 < iVar1) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
      FUN_18046fbd0(local_118);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1811123d0);
    }
  }
  return;
}



/* ===== 180470470 FUN_180470470 ===== */

void FUN_180470470(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  FUN_1800244c0(param_1 + 0x33e0);
  FUN_1800244c0(param_1 + 0x2c18);
  FUN_1800244c0(param_1 + 0x2458);
  FUN_180011610(param_1 + 0x2190);
  FUN_180200b70(param_1 + 0x2178);
  FUN_180011610(param_1 + 0x2108);
  FUN_180200b70(param_1 + 0x20f0);
  if (*(longlong *)(param_1 + 0x1ee8) == 0) {
LAB_180470540:
    puVar6 = auStack_28;
    puVar5 = auStack_28;
    lVar2 = *(longlong *)(param_1 + 0x1ed0);
    if (lVar2 == 0) goto LAB_1804705bb;
    lVar3 = lVar2;
    if ((ulonglong)((*(longlong *)(param_1 + 0x1ee0) - lVar2 >> 2) * 4) < 0x1000)
    goto LAB_18047059b;
    lVar3 = *(longlong *)(lVar2 + -8);
    puVar6 = auStack_28;
    if (0x1f < (lVar2 - lVar3) - 8U) goto LAB_180470594;
  }
  else {
    FUN_18043b620(*(longlong *)(param_1 + 0x1ee8),*(undefined8 *)(param_1 + 0x1ef0));
    lVar2 = *(longlong *)(param_1 + 0x1ee8);
    uVar4 = *(longlong *)(param_1 + 0x1ef8) - lVar2 & 0xfffffffffffffe00;
    if (uVar4 < 0x1000) {
LAB_180470526:
      thunk_FUN_1803d64e0(lVar2,uVar4);
      *(undefined8 *)(param_1 + 0x1ee8) = 0;
      *(undefined8 *)(param_1 + 0x1ef0) = 0;
      *(undefined8 *)(param_1 + 0x1ef8) = 0;
      goto LAB_180470540;
    }
    if ((lVar2 - *(longlong *)(lVar2 + -8)) - 8U < 0x20) {
      uVar4 = uVar4 | 0x27;
      lVar2 = *(longlong *)(lVar2 + -8);
      goto LAB_180470526;
    }
LAB_180470594:
    lVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar5 = auStack_20;
LAB_18047059b:
    puVar6 = puVar5;
  }
  *(undefined8 *)(puVar6 + -8) = 0x1804705a6;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 0x1ed0) = 0;
  *(undefined8 *)(param_1 + 0x1ed8) = 0;
  *(undefined8 *)(param_1 + 0x1ee0) = 0;
LAB_1804705bb:
  *(undefined8 *)(puVar6 + -8) = 0x1804705c7;
  FUN_180470630(param_1 + 0x1b80);
  *(undefined8 *)(puVar6 + -8) = 0x1804705d3;
  FUN_180470630(param_1 + 0x1830);
  *(undefined8 *)(puVar6 + -8) = 0x1804705df;
  FUN_180470630(param_1 + 0x14e0);
  *(undefined8 *)(puVar6 + -8) = 0x1804705eb;
  FUN_180470630(param_1 + 0x1190);
  *(undefined8 *)(puVar6 + -8) = 0x1804705f7;
  FUN_1800244c0(param_1 + 0xc40);
  *(undefined8 *)(puVar6 + -8) = 0x180470603;
  FUN_180269120(param_1 + 0x978);
  *(undefined8 *)(puVar6 + -8) = 0x18047060f;
  FUN_180200b70(param_1 + 0x958);
  FUN_1800244c0(param_1 + 0x378);
  return;
}



/* ===== 180470630 FUN_180470630 ===== */

void FUN_180470630(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar2 = *(longlong *)(param_1 + 0x130);
  if (lVar2 == 0) {
LAB_1804706b2:
    lVar2 = *(longlong *)(param_1 + 0xe0);
    if (lVar2 != 0) {
      uVar4 = (*(longlong *)(param_1 + 0xf0) - lVar2 >> 3) * 8;
      if (0xfff < uVar4) {
        if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) goto LAB_180470770;
        uVar4 = uVar4 + 0x27;
        lVar2 = *(longlong *)(lVar2 + -8);
      }
      thunk_FUN_1803d64e0(lVar2,uVar4);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    FUN_18043a6b0(param_1 + 0x38);
    puVar5 = auStack_28;
    puVar6 = auStack_28;
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar2;
    if (0xfff < (ulonglong)((*(longlong *)(param_1 + 0x30) - lVar2 >> 4) * 0x10)) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_18047077a;
      goto LAB_180470770;
    }
  }
  else {
    uVar4 = (*(longlong *)(param_1 + 0x140) - lVar2 >> 3) * 8;
    if (uVar4 < 0x1000) {
LAB_180470695:
      thunk_FUN_1803d64e0(lVar2,uVar4);
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      goto LAB_1804706b2;
    }
    if ((lVar2 - *(longlong *)(lVar2 + -8)) - 8U < 0x20) {
      uVar4 = uVar4 + 0x27;
      lVar2 = *(longlong *)(lVar2 + -8);
      goto LAB_180470695;
    }
LAB_180470770:
    lVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar5 = auStack_20;
  }
  puVar6 = puVar5;
LAB_18047077a:
  *(undefined8 *)(puVar6 + -8) = 0x180470782;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* ===== 1804707a0 FUN_1804707a0 ===== */

void FUN_1804707a0(void)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar11;
  longlong lVar10;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_88 [22];
  
  puVar2 = PTR_DAT_1809fa7a8;
  uVar7 = FUN_1800ef270(&DAT_180957240,*(undefined2 *)(PTR_DAT_1809fa7a8 + 0x7b8));
  puVar3 = PTR_DAT_180c3ac98;
  piVar14 = local_88;
  local_88[1] = 0x40;
  local_88[0] = 1;
  *(undefined4 *)PTR_DAT_180c3ac98 = uVar7;
  if (0 < DAT_180957240) {
    piVar14 = &DAT_180957240;
  }
  piVar9 = local_88 + 1;
  if (DAT_180957240 < 0x41) {
    piVar9 = piVar14;
  }
  local_88[2] = 0;
  local_88[3] = *piVar9 + -1;
  piVar14 = local_88 + 2;
  if (-1 < *(int *)puVar3) {
    piVar14 = (int *)puVar3;
  }
  piVar11 = local_88 + 3;
  if (*(int *)puVar3 <= *piVar9 + -1) {
    piVar11 = piVar14;
  }
  lVar10 = (longlong)*piVar11;
  *(undefined4 *)(puVar3 + 4) = DAT_18095cd6c;
  puVar3[8] = DAT_18095cd7e;
  puVar3[9] = DAT_18095cd44;
  fVar16 = (float)FUN_180517200((DAT_18095cd68 * DAT_1808ac680) / DAT_1808acb58);
  *(float *)(puVar3 + 0xc) = fVar16;
  iVar15 = 100;
  *(float *)(puVar3 + 0x10) = (float)*(int *)(&DAT_18095c45c + lVar10 * 0x24);
  fVar18 = DAT_1808acb08;
  fVar20 = (float)*(int *)(&DAT_18095c450 + lVar10 * 0x24) / DAT_1808acb08;
  *(float *)(puVar3 + 0x14) = fVar20;
  fVar19 = (float)*(int *)(&DAT_18095c458 + lVar10 * 0x24) / fVar18;
  *(float *)(puVar3 + 0x18) = fVar19;
  fVar18 = (float)*(int *)(&DAT_18095c44c + lVar10 * 0x24) / fVar18;
  *(float *)(puVar3 + 0x1c) = fVar18;
  puVar3[0x24] = DAT_18095cd45;
  if (DAT_18095cd45 == '\0') {
    *(float *)(puVar3 + 0x28) = fVar16;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined4 *)(puVar3 + 0x3c) = 4;
    *(undefined4 *)(puVar3 + 0x38) = 100;
    puVar3[0x40] = 1;
    *(undefined4 *)(puVar3 + 0x2c) = 0x43fa0000;
    *(undefined4 *)(puVar3 + 0x44) = 0;
    fVar17 = fVar16;
LAB_1804709cd:
    uVar7 = 0;
    if (fVar17 <= fVar16) goto LAB_1804709da;
  }
  else {
    fVar17 = (float)FUN_180517200((DAT_18095cd48 * DAT_1808ac680) / DAT_1808acb58);
    fVar1 = DAT_1808acc3c;
    *(float *)(puVar3 + 0x28) = fVar17;
    *(float *)(puVar3 + 0x2c) = (float)DAT_18095cd4c;
    *(float *)(puVar3 + 0x30) = (float)DAT_18095cd50 / fVar1;
    *(float *)(puVar3 + 0x34) = (float)DAT_18095cd54 / fVar1;
    *(undefined4 *)(puVar3 + 0x38) = DAT_18095cd5c;
    *(undefined4 *)(puVar3 + 0x3c) = DAT_18095cd58;
    puVar3[0x40] = DAT_18095cd60;
    uVar12 = -(uint)(DAT_18095cd61 != '\0') & 0x80;
    *(uint *)(puVar3 + 0x44) = uVar12;
    if (uVar12 == 0) goto LAB_1804709cd;
  }
  uVar7 = 2;
LAB_1804709da:
  *(undefined4 *)(puVar3 + 0x48) = uVar7;
  if (0.0 < fVar18) {
    if (fVar18 < DAT_1808ac34c) {
      fVar18 = (fVar18 - DAT_1808ac118) / DAT_1808ac21c;
      if (0.0 <= fVar18) {
        if (DAT_1808ac34c <= fVar18) {
          fVar18 = DAT_1808ac34c;
        }
        iVar15 = (int)(fVar18 * DAT_1808ac8b0 + DAT_1808ac658);
      }
      else {
        iVar15 = 3;
      }
    }
  }
  else {
    iVar15 = 0;
  }
  *(int *)(puVar3 + 0x20) = iVar15;
  puVar4 = PTR_DAT_180c873b8;
  cVar6 = (&DAT_18095c454)[lVar10 * 0x24];
  puVar3[0x50] = cVar6;
  if ((cVar6 == '\0') || (puVar4[8] == '\0')) {
    fVar19 = fVar20;
  }
  *(float *)(puVar3 + 0x4c) = fVar19;
  puVar3[0x51] = (&DAT_18095c460)[lVar10 * 0x24];
  puVar3[0x52] = (&DAT_18095c464)[lVar10 * 0x24];
  puVar3[0x53] = (&DAT_18095c461)[lVar10 * 0x24];
  if (((&DAT_18095c462)[lVar10 * 0x24] == '\0') || (puVar4[6] == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  puVar3[0x54] = uVar5;
  puVar3[0x55] = (&DAT_18095c463)[lVar10 * 0x24];
  puVar3[0x56] = DAT_18095cd7c;
  *(undefined4 *)(puVar3 + 0x58) = DAT_18095cd74;
  puVar3[0x5c] = DAT_18095cd70;
  puVar3[0x5d] = DAT_18095cd71;
  puVar3[0x68] = DAT_18095cd7d;
  *(undefined4 *)(puVar3 + 0x60) = 0;
  if (((*(longlong *)(puVar2 + 0x150) != 0) && (DAT_181112400 != 0)) &&
     (cVar6 = FUN_180011220(*(longlong *)(puVar2 + 0x150) + (ulonglong)DAT_181112400),
     cVar6 == '\x01')) {
    *(undefined4 *)(puVar3 + 0x60) = DAT_18095cd78;
  }
  if (*(int *)(puVar3 + 0x60) == 2) {
    puVar3[0x5d] = 0;
    *(undefined2 *)(puVar3 + 0x50) = 0;
    puVar3[0x52] = 0;
    *(undefined8 *)(puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 0x4c) = 0;
  }
  *(undefined4 *)(puVar3 + 100) = 0;
  cVar6 = (&DAT_18095c444)[lVar10 * 0x24];
  if (cVar6 != '\0') {
    *(undefined4 *)(puVar3 + 100) = 1;
  }
  uVar12 = (uint)(cVar6 != '\0');
  if ((&DAT_18095c445)[lVar10 * 0x24] != '\0') {
    uVar12 = uVar12 | 2;
    *(uint *)(puVar3 + 100) = uVar12;
  }
  uVar8 = uVar12;
  if ((&DAT_18095c446)[lVar10 * 0x24] != '\0') {
    uVar8 = uVar12 | 4;
    *(uint *)(puVar3 + 100) = uVar8;
    if ((&DAT_18095c446)[lVar10 * 0x24] != '\0') {
      uVar8 = uVar12 | 0xc;
      *(uint *)(puVar3 + 100) = uVar8;
    }
  }
  uVar12 = uVar8;
  if ((&DAT_18095c445)[lVar10 * 0x24] != '\0') {
    uVar12 = uVar8 | 0x10;
    *(uint *)(puVar3 + 100) = uVar12;
    if ((&DAT_18095c445)[lVar10 * 0x24] != '\0') {
      uVar12 = uVar8 | 0x30;
      *(uint *)(puVar3 + 100) = uVar12;
      if ((&DAT_18095c445)[lVar10 * 0x24] != '\0') {
        uVar12 = uVar8 | 0x70;
        *(uint *)(puVar3 + 100) = uVar12;
      }
    }
  }
  uVar8 = uVar12;
  if ((&DAT_18095c448)[lVar10 * 0x24] != '\0') {
    uVar8 = uVar12 | 0x80;
    *(uint *)(puVar3 + 100) = uVar8;
    if ((&DAT_18095c448)[lVar10 * 0x24] != '\0') {
      uVar8 = uVar12 | 0x180;
      *(uint *)(puVar3 + 100) = uVar8;
    }
  }
  uVar12 = uVar8;
  if ((&DAT_18095c449)[lVar10 * 0x24] != '\0') {
    uVar12 = uVar8 | 0x200;
    *(uint *)(puVar3 + 100) = uVar12;
    if ((&DAT_18095c449)[lVar10 * 0x24] != '\0') {
      uVar12 = uVar8 | 0x600;
      *(uint *)(puVar3 + 100) = uVar12;
      if ((&DAT_18095c449)[lVar10 * 0x24] != '\0') {
        uVar12 = uVar8 | 0xe00;
        *(uint *)(puVar3 + 100) = uVar12;
        if ((&DAT_18095c449)[lVar10 * 0x24] != '\0') {
          uVar12 = uVar8 | 0x1e00;
          *(uint *)(puVar3 + 100) = uVar12;
        }
      }
    }
  }
  if (((((&DAT_18095c447)[lVar10 * 0x24] != '\0') &&
       (*(uint *)(puVar3 + 100) = uVar12 | 0x2000, (&DAT_18095c447)[lVar10 * 0x24] != '\0')) &&
      ((*(uint *)(puVar3 + 100) = uVar12 | 0x6000, (&DAT_18095c447)[lVar10 * 0x24] != '\0' &&
       ((*(uint *)(puVar3 + 100) = uVar12 | 0xe000, (&DAT_18095c447)[lVar10 * 0x24] != '\0' &&
        (*(uint *)(puVar3 + 100) = uVar12 | 0x1e000, (&DAT_18095c447)[lVar10 * 0x24] != '\0'))))))
     && (*(uint *)(puVar3 + 100) = uVar12 | 0x3e000, (&DAT_18095c447)[lVar10 * 0x24] != '\0')) {
    *(uint *)(puVar3 + 100) = uVar12 | 0x7e000;
  }
  if (0xd < *(int *)(puVar4 + 0x14)) {
    iVar13 = *(int *)(puVar4 + 0x14) + -0xd;
    iVar15 = *(int *)(puVar3 + 0x20);
    if (*(int *)(puVar3 + 0x20) < iVar13) {
      iVar15 = iVar13;
    }
    *(int *)(puVar3 + 0x20) = iVar15;
  }
  if (puVar4[5] != '\0') {
    *(undefined2 *)(puVar3 + 0x5c) = 0;
    puVar3[0x52] = 0;
    *(undefined4 *)(puVar3 + 0x4c) = 0;
    *(undefined8 *)(puVar3 + 0x14) = 0;
  }
  return;
}



/* ===== 180470cc0 FUN_180470cc0 ===== */

void FUN_180470cc0(float *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  short sVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 local_res8;
  
  puVar3 = PTR_DAT_180c873b8;
  bVar1 = *PTR_DAT_180c8b050;
  PTR_DAT_180c873b8[7] = 0;
  puVar3[6] = bVar1 >> 1 & 1;
  puVar3[5] = *(byte *)(param_1 + 10) & 1;
  if (((byte)*(undefined4 *)(PTR_DAT_1809fa7a8 + 0x68) & 3) == 2) {
    uVar14 = 0;
    for (lVar9 = *(longlong *)(param_1 + 0xe); lVar9 != *(longlong *)(param_1 + 0x10);
        lVar9 = lVar9 + 0x48) {
      if (*(longlong *)(lVar9 + 8) == 4) {
        uVar8 = uVar14 | 1;
        if (*(char *)(lVar9 + 0x10) != '\0') {
          uVar8 = uVar14;
        }
      }
      else {
        uVar8 = uVar14;
        if ((*(longlong *)(lVar9 + 8) == 2) && (uVar8 = uVar14 | 2, *(char *)(lVar9 + 0x10) == '\0')
           ) {
          uVar8 = uVar14;
        }
      }
      bVar11 = true;
      if (uVar8 == 3) goto LAB_180470d6b;
      uVar14 = uVar8;
    }
    bVar11 = uVar14 == 3;
LAB_180470d6b:
    puVar3[7] = bVar11;
  }
  uVar15 = DAT_1808ac00c;
  local_res8 = CONCAT44(local_res8._4_4_,0x3c800000);
  cVar4 = FUN_180467630(&local_res8);
  puVar3 = PTR_DAT_180c873b8;
  if (cVar4 != '\0') {
    uVar15 = (undefined4)local_res8;
  }
  *(undefined4 *)(PTR_DAT_180c873b8 + 0x18) = uVar15;
  fVar16 = DAT_1808ac014;
  fVar12 = param_1[1];
  fVar13 = param_1[2];
  *(float *)(puVar3 + 0x1c) = *param_1;
  *(float *)(puVar3 + 0x20) = fVar12;
  *(float *)(puVar3 + 0x24) = fVar13;
  fVar17 = *param_1 * fVar16;
  fVar12 = (float)FUN_180517200(fVar17);
  fVar16 = param_1[1] * fVar16;
  fVar13 = (float)FUN_180517200(fVar16);
  *(float *)(puVar3 + 0x28) = fVar13 * fVar12;
  fVar13 = (float)FUN_180517790(fVar16);
  *(float *)(puVar3 + 0x2c) = fVar13 * fVar12;
  uVar14 = FUN_180517790(fVar17);
  *(uint *)(puVar3 + 0x30) = uVar14 ^ DAT_1808adec0;
  puVar2 = PTR_DAT_1809fa7a8;
  fVar12 = *(float *)(PTR_DAT_1809fa7a8 + 0x2c);
  fVar13 = *(float *)(PTR_DAT_1809fa7a8 + 8);
  *(ulonglong *)(puVar3 + 0x34) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(PTR_DAT_1809fa7a8 + 0x24) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)PTR_DAT_1809fa7a8 >> 0x20),
                (float)*(undefined8 *)(PTR_DAT_1809fa7a8 + 0x24) +
                (float)*(undefined8 *)PTR_DAT_1809fa7a8);
  *(float *)(puVar3 + 0x3c) = fVar12 + fVar13;
  *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)puVar2;
  *(undefined4 *)(puVar3 + 0x48) = *(undefined4 *)(puVar2 + 8);
  *(float *)(puVar3 + 0x10) = DAT_180c8a7f8;
  *(int *)(puVar3 + 0x14) = (int)(DAT_180c8a7f8 * DAT_1808acab0 + DAT_1808ac1f4);
  uVar7 = FUN_180474460(*(undefined4 *)(puVar2 + 0x15c),*(undefined4 *)(puVar2 + 0x168));
  puVar2 = PTR_DAT_180c873b8;
  puVar3 = PTR_DAT_1809fa7a8;
  local_res8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  iVar6 = (int)uVar7;
  if (iVar6 == *(int *)(PTR_DAT_1809fa7a8 + 0x354)) {
    bVar11 = local_res8._4_4_ < *(float *)(PTR_DAT_1809fa7a8 + 0x358);
  }
  else {
    bVar11 = iVar6 < *(int *)(PTR_DAT_1809fa7a8 + 0x354);
  }
  PTR_DAT_180c873b8[3] = bVar11 ^ 1;
  if (iVar6 == *(int *)(puVar3 + 0x35c)) {
    bVar11 = local_res8._4_4_ < *(float *)(puVar3 + 0x360);
  }
  else {
    bVar11 = iVar6 < *(int *)(puVar3 + 0x35c);
  }
  puVar2[4] = bVar11 ^ 1;
  if (*(short *)(puVar3 + 0x7b8) == 0x40) {
    if (iVar6 == *(int *)(puVar3 + 0x364)) {
      bVar11 = local_res8._4_4_ < *(float *)(puVar3 + 0x368);
    }
    else {
      bVar11 = iVar6 < *(int *)(puVar3 + 0x364);
    }
    if (bVar11) {
      puVar2[3] = 0;
    }
  }
  *(undefined2 *)(puVar2 + 1) = 0;
  if (((puVar3[0x16c] == '\0') && ((puVar3[0x68] & 0x20) == 0)) && (puVar3[0x71] == '\0')) {
    local_res8 = uVar7;
    if (((*(longlong *)(puVar3 + 0x7b0) == 0) || (DAT_1811123e4 == 0)) ||
       (0x7ffffffefffe < (*(longlong *)(puVar3 + 0x7b0) + (ulonglong)DAT_1811123e4) - 0x10000)) {
      sVar10 = *(short *)(puVar3 + 0x7b8);
    }
    else {
      iVar6 = FUN_180011200();
      sVar10 = *(short *)(puVar3 + 0x7b8);
      if ((iVar6 == 0) && (sVar10 != 0x1f)) {
        *(undefined2 *)(puVar2 + 1) = 0x101;
        return;
      }
    }
    if (((((*(longlong *)(puVar3 + 0x7b0) == 0) || (DAT_1811123e8 == 0)) ||
         (0x7ffffffefffe < (*(longlong *)(puVar3 + 0x7b0) + (ulonglong)DAT_1811123e8) - 0x10000)) ||
        ((iVar6 = FUN_180011200(), iVar6 != 1 && ((iVar6 != 0 || (sVar10 == 0x1f)))))) &&
       (0 < *(int *)(puVar3 + 0x374))) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    puVar2[1] = uVar5;
  }
  return;
}



/* ===== 180471020 FUN_180471020 ===== */

void FUN_180471020(int param_1,longlong param_2,ulonglong *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined *puVar8;
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined2 local_res25;
  undefined1 local_res27;
  float local_88;
  uint uStack_84;
  undefined8 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 uStack_46;
  uint5 uStack_45;
  
  puVar8 = PTR_DAT_1809fa7a8;
  if (param_1 != 2) {
    uVar13 = *(ulonglong *)(param_2 + 0x28);
    uVar5 = *param_3;
    if (((((uVar13 | uVar5) & 0x2001) == 0) && (0 < *(int *)(PTR_DAT_1809fa7a8 + 0x374))) &&
       (PTR_DAT_1809fa7a8[0x794] == '\0')) {
      uVar15 = *(ulonglong *)(param_2 + 0x30);
      iVar2 = *(int *)(PTR_DAT_1809fa7a8 + 0x15c);
      if (DAT_1809f35b8 != DAT_1809f35c0) {
        DAT_1809f35d0._5_2_ = local_res25;
        DAT_1809f35d0._7_1_ = local_res27;
        DAT_1809f35d8._5_2_ = local_res25;
        DAT_1809f35d8._7_1_ = local_res27;
        DAT_1809f35d0._0_4_ = 0;
        DAT_1809f35d0._4_1_ = 1;
        DAT_1809f35d8._0_4_ = 0;
        DAT_1809f35d8._4_1_ = 1;
        DAT_1809f35e0 = 1;
      }
      uVar14 = uVar13 & 0xffffffffffffd7fe;
      *(ulonglong *)(param_2 + 0x28) = uVar14;
      *param_3 = uVar5 & 0xfffffffffffff7fe;
      if (puVar8[0x37e] == '\0') {
        if (iVar2 == *(int *)(puVar8 + 0x354)) {
          bVar7 = 0.0 < *(float *)(puVar8 + 0x358);
        }
        else {
          bVar7 = iVar2 < *(int *)(puVar8 + 0x354);
        }
        if (!bVar7) {
          *(ulonglong *)(param_2 + 0x28) = uVar14 | 1;
        }
      }
      else {
        iVar3 = *(int *)(puVar8 + 0x364);
        fVar1 = *(float *)(puVar8 + 0x368);
        if (iVar2 == iVar3) {
          bVar7 = 0.0 < fVar1;
        }
        else {
          bVar7 = iVar2 < iVar3;
        }
        uVar10 = local_68._1_3_;
        uVar11 = local_58._1_3_;
        uVar9 = local_78._1_3_;
        if ((bVar7) || ((iVar3 != iVar2 && ((iVar3 != iVar2 + -1 || (fVar1 <= 0.0)))))) {
          iVar4 = *(int *)(puVar8 + 0x35c);
          fVar16 = *(float *)(puVar8 + 0x360);
          if (iVar2 == iVar4) {
            bVar7 = 0.0 < fVar16;
          }
          else {
            bVar7 = iVar2 < iVar4;
          }
          if ((bVar7) || ((iVar4 != iVar2 && ((iVar4 != iVar2 + -1 || (fVar16 <= 0.0)))))) {
            if (iVar2 == iVar3) {
              bVar7 = 0.0 < fVar1;
            }
            else {
              bVar7 = iVar2 < iVar3;
            }
            if (bVar7) {
              uVar15 = uVar15 | 1;
              *(ulonglong *)(param_2 + 0x28) = uVar14 | 1;
              uVar13 = uVar5 & 0xfffffffffffff7ff | 1;
            }
            else {
              if (iVar2 == iVar4) {
                bVar7 = 0.0 < fVar16;
              }
              else {
                bVar7 = iVar2 < iVar4;
              }
              if (!bVar7) {
                return;
              }
              uVar15 = uVar15 | 0x800;
              *(ulonglong *)(param_2 + 0x28) = uVar13 | 0x800;
              uVar13 = uVar5 & 0xfffffffffffffffe | 0x800;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar15;
            *param_3 = uVar13;
            return;
          }
          plVar6 = *(longlong **)(param_2 + 0x40);
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          local_68 = (uint)local_68._1_3_ << 8;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = (uint)local_58._1_3_ << 8;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = 0;
          uStack_46 = 0;
          uStack_80 = 0x800;
          local_78 = (uint)local_78._1_3_ << 8;
          local_88 = 0.0;
          if (plVar6 == *(longlong **)(param_2 + 0x48)) {
            FUN_18008c530(param_2 + 0x38,plVar6,&local_88);
          }
          else {
            *plVar6 = (ulonglong)uStack_84 << 0x20;
            plVar6[1] = 0x800;
            plVar6[2] = (ulonglong)uVar9 << 8;
            plVar6[3] = 0;
            plVar6[4] = (ulonglong)uVar10 << 8;
            plVar6[5] = 0;
            plVar6[6] = (ulonglong)uVar11 << 8;
            plVar6[7] = 0;
            plVar6[8] = (ulonglong)uStack_45 << 0x18;
            *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 0x48;
          }
          *(ulonglong *)(param_2 + 0x28) = *(ulonglong *)(param_2 + 0x28) & 0xfffffffffffff7ff;
          *(ulonglong *)(param_2 + 0x28) = *(ulonglong *)(param_2 + 0x28) | 1;
          puVar12 = *(undefined8 **)(param_2 + 0x40);
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          local_68 = local_68 & 0xffffff00;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = local_58 & 0xffffff00;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = 0;
          uStack_46 = 0;
          uStack_80 = 1;
          local_78 = CONCAT31(local_78._1_3_,1);
          local_88 = 0.984375;
          if (puVar12 == *(undefined8 **)(param_2 + 0x48)) {
            FUN_18008c530(param_2 + 0x38,puVar12,&local_88);
          }
          else {
            *puVar12 = CONCAT44(uStack_84,0x3f7c0000);
            puVar12[1] = 1;
            puVar12[2] = (ulonglong)local_78;
            puVar12[3] = 0;
            puVar12[4] = (ulonglong)local_68;
            puVar12[5] = 0;
            puVar12[6] = (ulonglong)local_58;
            puVar12[7] = 0;
            puVar12[8] = (ulonglong)uStack_45 << 0x18;
            *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 0x48;
          }
          puVar12 = *(undefined8 **)(param_2 + 0x40);
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          local_68 = local_68 & 0xffffff00;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = local_58 & 0xffffff00;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = 0;
          uStack_46 = 0;
          uStack_80 = 1;
          local_78 = CONCAT31(local_78._1_3_,1);
          local_88 = 1.0;
          if (puVar12 == *(undefined8 **)(param_2 + 0x48)) {
            FUN_18008c530(param_2 + 0x38,puVar12,&local_88);
            return;
          }
        }
        else {
          plVar6 = *(longlong **)(param_2 + 0x40);
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          local_68 = (uint)local_68._1_3_ << 8;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = (uint)local_58._1_3_ << 8;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = 0;
          uStack_46 = 0;
          uStack_80 = 0x800;
          local_78 = CONCAT31(local_78._1_3_,1);
          local_88 = 0.0;
          if (plVar6 == *(longlong **)(param_2 + 0x48)) {
            FUN_18008c530(param_2 + 0x38,plVar6,&local_88);
          }
          else {
            *plVar6 = (ulonglong)uStack_84 << 0x20;
            plVar6[1] = 0x800;
            plVar6[2] = (ulonglong)local_78;
            plVar6[3] = 0;
            plVar6[4] = (ulonglong)uVar10 << 8;
            plVar6[5] = 0;
            plVar6[6] = (ulonglong)uVar11 << 8;
            plVar6[7] = 0;
            plVar6[8] = (ulonglong)uStack_45 << 0x18;
            *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 0x48;
          }
          *(ulonglong *)(param_2 + 0x28) = *(ulonglong *)(param_2 + 0x28) & 0xfffffffffffffffe;
          *(ulonglong *)(param_2 + 0x28) = *(ulonglong *)(param_2 + 0x28) | 0x800;
          if ((iVar3 == iVar2) && (fVar1 == 0.0)) {
            local_88 = DAT_1808ac34c;
          }
          else {
            fVar16 = (fVar1 + DAT_1808accc8) - DAT_1808accc8;
            if (fVar16 <= fVar1) {
              local_88 = fVar16;
            }
            else {
              local_88 = 0.0;
              if (0.0 <= fVar16 - DAT_1808ac00c) {
                local_88 = fVar16 - DAT_1808ac00c;
              }
            }
          }
          puVar12 = *(undefined8 **)(param_2 + 0x40);
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          local_68 = local_68 & 0xffffff00;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = local_58 & 0xffffff00;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = 0;
          uStack_46 = 0;
          uStack_80 = 1;
          local_78 = local_78 & 0xffffff00;
          if (puVar12 == *(undefined8 **)(param_2 + 0x48)) {
            FUN_18008c530(param_2 + 0x38,puVar12,&local_88);
            return;
          }
        }
        *puVar12 = CONCAT44(uStack_84,local_88);
        puVar12[1] = 1;
        puVar12[2] = (ulonglong)local_78;
        puVar12[3] = 0;
        puVar12[4] = (ulonglong)local_68;
        puVar12[5] = 0;
        puVar12[6] = (ulonglong)local_58;
        puVar12[7] = 0;
        puVar12[8] = (ulonglong)uStack_45 << 0x18;
        *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 0x48;
      }
    }
  }
  return;
}



/* ===== 180471510 FUN_180471510 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180471510(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  int *piVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  short sVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  undefined1 uVar28;
  undefined *puVar29;
  int iVar30;
  ulonglong uVar31;
  uint uVar32;
  float fVar33;
  undefined1 auStack_288 [32];
  undefined4 *local_268;
  ulonglong *local_260;
  ulonglong local_258;
  float local_250;
  float local_248;
  uint uStack_244;
  ulonglong uStack_240;
  uint uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  uint local_228;
  uint uStack_224;
  undefined4 uStack_220;
  uint uStack_21c;
  uint local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined2 local_208;
  undefined1 uStack_206;
  uint5 uStack_205;
  undefined8 local_1f8;
  ulonglong uStack_1f0;
  undefined8 *local_1e8;
  ulonglong uStack_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulonglong local_1a8 [2];
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined2 uStack_184;
  ushort uStack_182;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined2 uStack_170;
  undefined1 uStack_16e;
  byte bStack_16d;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined2 uStack_140;
  ushort uStack_13e;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined2 local_118;
  undefined1 uStack_116;
  byte bStack_115;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_d8 [64];
  undefined1 local_98 [24];
  undefined1 local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_288;
  uVar32 = 0;
  local_250 = 0.0;
  if ((DAT_1811123e0 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_1811123e0 = '\x01';
    DAT_1811123e4 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_1811123e8 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponCategory");
    DAT_1811123ec = FUN_18038eaf0("CCSWeaponBaseVData","m_bHasBurstMode");
    DAT_1811123f0 = FUN_18038eaf0("CCSWeaponBaseVData","m_nZoomLevels");
    DAT_1811123f4 = FUN_18038eaf0("CCSWeaponBaseVData","m_bIsFullAuto");
    DAT_1811123f8 = FUN_18038eaf0("CBasePlayerWeaponVData","m_iMaxClip1");
    DAT_1811123fc = FUN_18038eaf0("C_BasePlayerWeapon","m_pReserveAmmo");
    DAT_181112400 = FUN_18038eaf0("CCSPlayerController","m_bFireBulletsSeedSynchronized");
    DAT_181112404 = FUN_18038eaf0("CBasePlayerController","m_nTickBase");
  }
  cVar7 = DAT_180cd1e26;
  LOCK();
  DAT_180cd1e26 = 1;
  UNLOCK();
  if (cVar7 == '\0') {
    local_1f8 = (undefined8 *)FUN_1804ecaa0(8);
    *local_1f8 = FUN_180473cf0;
    uVar32 = 1;
    local_250 = 1.4013e-45;
    local_260 = &uStack_1e0;
    local_268 = (undefined4 *)((ulonglong)local_268 & 0xffffffff00000000);
    local_1e8 = (undefined8 *)FUN_180515e84(0,0,FUN_1800d5400,local_1f8);
    if (local_1e8 == (undefined8 *)0x0) {
      uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if ((int)uStack_1e0 == 0) {
LAB_180472ab9:
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(1);
    }
    uStack_1f0 = uStack_1e0;
    local_1f8 = local_1e8;
    iVar8 = FUN_1804eb410();
    if (iVar8 != 0) goto LAB_180472ab9;
    local_1e8 = (undefined8 *)0x0;
    uStack_1e0 = 0;
  }
  PTR_DAT_180c873b8[9] = 0;
  FUN_18046fd70();
  if (param_1 == 0) {
    return;
  }
  if (DAT_180ccfae7 == '\0') {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  local_258 = *(ulonglong *)(param_1 + 0x70);
  lVar12 = FUN_180266660();
  if (((lVar12 == 0) || (DAT_180cf9f80 == 0)) || (cVar7 = FUN_180011220(), cVar7 == '\0')) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  *PTR_DAT_180c8b048 = uVar28;
  if (((DAT_18095723c == '\0') || (DAT_1809f351c == 2)) ||
     (((DAT_1809f351c == 1 && ((lVar12 = FUN_180266660(), lVar12 != 0 && (DAT_180cf9f80 != 0)))) &&
      (cVar7 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar12), cVar7 != '\0')))) {
    puVar29 = PTR_DAT_180c873b8;
    *PTR_DAT_180c873b8 = 0;
    puVar29[10] = 0;
    *(undefined4 *)(puVar29 + 0xc) = 0;
    return;
  }
  *PTR_DAT_180c873b8 = 1;
  iVar30 = *(int *)(param_1 + 8);
  iVar8 = iVar30 + -1;
  if (iVar8 < 0) {
    return;
  }
  iVar10 = (&DAT_180c3df70)[(longlong)(iVar8 % 0x96) * 500];
  piVar18 = (int *)0x0;
  if (iVar10 == iVar8) {
    piVar18 = &DAT_180c3df70 + (longlong)(iVar8 % 0x96) * 500;
  }
  if (piVar18 == (int *)0x0) {
LAB_180471822:
    if (iVar8 < 0) {
      return;
    }
    iVar10 = (&DAT_180c3df70)[(longlong)(iVar8 % 0x96) * 500];
    piVar18 = (int *)0x0;
    if (iVar10 == iVar8) {
      piVar18 = &DAT_180c3df70 + (longlong)(iVar8 % 0x96) * 500;
    }
    if (piVar18 == (int *)0x0) {
      return;
    }
    plVar17 = (longlong *)&DAT_00000158;
    if (iVar10 == iVar8) {
      plVar17 = (longlong *)(&DAT_180c3e0c8 + (longlong)(iVar8 % 0x96) * 2000);
    }
    if (*plVar17 != *param_2) {
      return;
    }
    uVar28 = 0;
  }
  else {
    plVar17 = (longlong *)&DAT_00000158;
    if (iVar10 == iVar8) {
      plVar17 = (longlong *)(&DAT_180c3e0c8 + (longlong)(iVar8 % 0x96) * 2000);
    }
    if ((*plVar17 != *param_2) || (piVar18[1] < 2)) goto LAB_180471822;
    uVar28 = 1;
  }
  if ((*(byte *)(piVar18 + 0x1e) & 0x20) != 0) {
    return;
  }
  FUN_180466580(PTR_DAT_1809fa7a8,piVar18 + 4,0x11);
  puVar29 = PTR_DAT_1809fa7a8;
  iVar8 = *(int *)(PTR_DAT_1809fa7a8 + 0x120) + 1;
  *(int *)(PTR_DAT_1809fa7a8 + 0x15c) = iVar8;
  fVar33 = (float)iVar8 * DAT_1808ac00c;
  *(float *)(puVar29 + 0x164) = fVar33;
  *(int *)(puVar29 + 0x76c) = iVar8;
  *(float *)(puVar29 + 0x770) = fVar33;
  puVar13 = (undefined8 *)FUN_1802ae9b0(&local_1f8,param_2);
  uVar15 = *puVar13;
  uVar9 = *(undefined4 *)(puVar13 + 1);
  if ((*(longlong *)(PTR_DAT_1809fa7a8 + 0x150) == 0) || (DAT_181112404 == 0)) {
    DAT_180c8af6c = 0;
  }
  else {
    DAT_180c8af6c =
         FUN_180011200(*(longlong *)(PTR_DAT_1809fa7a8 + 0x150) + (ulonglong)DAT_181112404);
  }
  puVar6 = PTR_DAT_180c873b8;
  puVar29 = PTR_DAT_1809fa7a8;
  if (iVar30 < 0) {
    piVar18 = (int *)0x0;
  }
  else {
    piVar18 = (int *)0x0;
    if ((&DAT_180c3df70)[(longlong)(iVar30 % 0x96) * 500] == iVar30) {
      piVar18 = &DAT_180c3df70 + (longlong)(iVar30 % 0x96) * 500;
    }
  }
  DAT_180c8af88 = piVar18 != (int *)0x0;
  _DAT_180c8af7c = *(float *)(PTR_DAT_1809fa7a8 + 0x24) + *(float *)PTR_DAT_1809fa7a8;
  _DAT_180c8af80 = *(float *)(PTR_DAT_1809fa7a8 + 0x28) + *(float *)(PTR_DAT_1809fa7a8 + 4);
  _DAT_180c8af84 = *(float *)(PTR_DAT_1809fa7a8 + 0x2c) + *(float *)(PTR_DAT_1809fa7a8 + 8);
  DAT_180c8af68 = *(undefined4 *)(PTR_DAT_1809fa7a8 + 0x120);
  iVar8 = *(int *)(param_1 + 8);
  DAT_180c8af60 = iVar30;
  DAT_180c8af64 = uVar28;
  _DAT_180c8af70 = uVar15;
  DAT_180c8af78 = uVar9;
  *(int *)(PTR_DAT_180c873b8 + 0x4c) = iVar8;
  if (((puVar29[0x68] & 1) != 0) && (iVar30 = iVar8 + -0x10, iVar30 < iVar8)) {
    do {
      if (iVar8 < 0) break;
      lVar12 = (longlong)(iVar8 % 0x96) * 2000;
      iVar10 = (&DAT_180c3df70)[(longlong)(iVar8 % 0x96) * 500];
      piVar18 = (int *)0x0;
      if (iVar10 == iVar8) {
        piVar18 = &DAT_180c3df70 + (longlong)(iVar8 % 0x96) * 500;
      }
      if (piVar18 != (int *)0x0) {
        pbVar19 = &DAT_00000078;
        if (iVar10 == iVar8) {
          pbVar19 = &DAT_180c3dfe8 + lVar12;
        }
        if ((*pbVar19 & 1) == 0) {
          puVar20 = (undefined4 *)&DAT_00000130;
          if (iVar10 == iVar8) {
            puVar20 = (undefined4 *)(&DAT_180c3e0a0 + lVar12);
          }
          uVar9 = *puVar20;
          goto LAB_180471a7b;
        }
      }
      iVar8 = iVar8 + -1;
    } while (iVar30 < iVar8);
  }
  uVar9 = 0xffffffff;
LAB_180471a7b:
  *(undefined4 *)(puVar29 + 0x284) = uVar9;
  if ((DAT_180961a48 == (code *)0x0) || (0x7ffffffefffe < *(longlong *)(puVar29 + 0x150) - 0x10000U)
     ) {
LAB_180471b9e:
    *(undefined4 *)(PTR_DAT_180c8b048 + 0x7dc) = 0;
  }
  else {
    uVar24 = *(int *)(puVar6 + 0x4c) - 1;
    if ((int)uVar24 < 1) goto LAB_180471b9e;
    lVar12 = (*DAT_180961a48)();
    puVar29 = PTR_DAT_180c8b048;
    if ((((0x7ffffffefffe < lVar12 - 0x10000U) || (DAT_180961fd0 == 0)) ||
        (lVar12 = ((ulonglong)uVar24 % (ulonglong)DAT_180961fd0) * (ulonglong)DAT_180961fd4 + lVar12
        , 0x7ffffffefffe < lVar12 - 0x10000U)) ||
       (*(longlong *)(lVar12 + 8) != (longlong)(int)uVar24)) {
      puVar29 = PTR_DAT_1809fa7a8;
      goto LAB_180471b9e;
    }
    *(undefined4 *)(PTR_DAT_180c8b048 + 0x7dc) = 0;
    if ((lVar12 != 0) && (lVar12 = *(longlong *)(lVar12 + 0x40), lVar12 - 0x10000U < 0x7ffffffeffff)
       ) {
      *(undefined4 *)(puVar29 + 0x7dc) = *(undefined4 *)(lVar12 + 0x54);
      lVar12 = *(longlong *)(lVar12 + 0x40);
      if (lVar12 - 0x10000U < 0x7ffffffeffff) {
        uVar9 = *(undefined4 *)(lVar12 + 0x1c);
        uVar1 = *(undefined4 *)(lVar12 + 0x20);
        *(undefined4 *)(puVar29 + 2000) = *(undefined4 *)(lVar12 + 0x18);
        *(undefined4 *)(puVar29 + 0x7d4) = uVar9;
        *(undefined4 *)(puVar29 + 0x7d8) = uVar1;
      }
    }
    puVar29 = PTR_DAT_1809fa7a8;
  }
  PTR_DAT_180c873b8[0x54] = 1;
  DAT_180c8c1d0 = &DAT_180cf9fa0;
  DAT_180c8c1d8 = &local_258;
  _DAT_180c8d218 = &LAB_180431cd0;
  uVar31 = DAT_180c8cf50 - DAT_180c8cf48 >> 9;
  lVar12 = DAT_180c8cf48;
  lVar21 = DAT_180c8cf50;
  DAT_180c8c1c8 = param_1;
  if (uVar31 != 0) {
    do {
      uVar31 = uVar31 - 1;
      if (*(int *)(uVar31 * 0x200 + lVar12) == *(int *)(PTR_DAT_180c873b8 + 0x4c)) {
        lVar12 = uVar31 * 0x200 + lVar12;
        lVar25 = lVar12 + 0x200;
        if (lVar25 != lVar21) {
          do {
            FUN_1804736f0(lVar12,lVar25);
            lVar12 = lVar12 + 0x200;
            lVar25 = lVar25 + 0x200;
          } while (lVar25 != lVar21);
          lVar21 = DAT_180c8cf50;
        }
        FUN_18000f890(lVar21 + -0xa0);
        FUN_1802a9370(lVar21 + -0xf8);
        FUN_1802a9370(lVar21 + -0x130);
        FUN_180200b70(lVar21 + -0x148);
        DAT_180c8cf50 = DAT_180c8cf50 + -0x200;
        if (uVar31 < (ulonglong)((DAT_180c8cf38 - DAT_180c8cf30 >> 2) * -0x5555555555555555)) {
          lVar21 = DAT_180c8cf30 + uVar31 * 0xc;
          lVar12 = lVar21 + 0xc;
          FUN_180540530(lVar21,lVar12,DAT_180c8cf38 - lVar12);
          DAT_180c8cf38 = DAT_180c8cf38 + -0xc;
        }
        lVar12 = DAT_180c8cf48;
        lVar21 = DAT_180c8cf50;
      }
    } while (uVar31 != 0);
    puVar29 = PTR_DAT_1809fa7a8;
  }
  lVar12 = DAT_181112370;
  iVar8 = -1;
  if ((*(int *)(PTR_DAT_180c873b8 + 0x4c) != DAT_180c8d0e8) || (PTR_DAT_180c873b8[0x54] != '\0')) {
    _DAT_180c8cf6c = 0xbf800000;
    for (lVar21 = DAT_181112368; lVar21 != lVar12; lVar21 = lVar21 + 0xfd0) {
      for (lVar25 = lVar21 + 0x90; lVar25 != lVar21 + 0xf10; lVar25 = lVar25 + 0xe8) {
        *(undefined4 *)(lVar25 + 0x10) = 0;
      }
      lVar25 = *(longlong *)(lVar21 + 0x58);
      for (lVar14 = *(longlong *)(lVar21 + 0x50); lVar14 != lVar25; lVar14 = lVar14 + 0xe8) {
        *(undefined4 *)(lVar14 + 0x10) = 0;
      }
      lVar25 = *(longlong *)(lVar21 + 0x78);
      for (lVar14 = *(longlong *)(lVar21 + 0x70); lVar14 != lVar25; lVar14 = lVar14 + 0xe8) {
        *(undefined4 *)(lVar14 + 0x10) = 0;
      }
    }
  }
  puVar6 = PTR_DAT_180c873b8;
  if (*(longlong *)(puVar29 + 0x7b0) == 0) {
    PTR_DAT_180c873b8[10] = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    return;
  }
  FUN_180470cc0(&DAT_180cf9fa0);
  FUN_1804707a0();
  local_1d8 = PTR_DAT_1809fa7a8;
  local_1d0 = *(undefined8 *)(PTR_DAT_180c873b8 + 0x34);
  uStack_1c8 = CONCAT44(*(undefined4 *)(PTR_DAT_180c873b8 + 0x28),
                        *(undefined4 *)(PTR_DAT_180c873b8 + 0x3c));
  local_1c0 = *(undefined8 *)(PTR_DAT_180c873b8 + 0x2c);
  local_1b8 = CONCAT44(*(undefined4 *)(PTR_DAT_180c873b8 + 0x14),
                       *(undefined4 *)(PTR_DAT_1809fa7a8 + 0x15c));
  uStack_1b0 = CONCAT44(*(undefined4 *)(PTR_DAT_180c3ac98 + 0x60),
                        *(undefined4 *)(PTR_DAT_180c3ac98 + 0x20));
  FUN_18045eb10(&local_1d8);
  if (DAT_181111dd0 == DAT_181111dd8) {
    PTR_DAT_180c873b8[1] = 0;
  }
  puVar6 = PTR_DAT_180c8b048;
  puVar29 = PTR_DAT_180c3ac98;
  PTR_DAT_180c8b048[1] = PTR_DAT_180c3ac98[0x24];
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar29 + 0x44);
  puVar6[8] = puVar29[8];
  puVar6[9] = DAT_18095cd7f;
  local_268 = *(undefined4 **)(PTR_DAT_1809fa7a8 + 0x148);
  FUN_180474d30(puVar6,PTR_DAT_1809fa7a8,param_1,*(undefined8 *)(PTR_DAT_1809fa7a8 + 0x150));
  if ((PTR_DAT_180c3ac98[0x24] == '\0') || (DAT_1809f35b8 == DAT_1809f35c0)) {
LAB_180471f93:
    FUN_180087980(param_1);
  }
  else {
    puVar13 = (undefined8 *)
              FUN_180474460(*(undefined4 *)(PTR_DAT_1809fa7a8 + 0x15c),
                            *(undefined4 *)(PTR_DAT_1809fa7a8 + 0x168));
    bVar3 = false;
    local_1f8._4_4_ = (float)((ulonglong)puVar13 >> 0x20);
    iVar30 = (int)puVar13;
    if ((DAT_180cf9fc8 & 1) != 0) {
      if (iVar30 == *(int *)(PTR_DAT_1809fa7a8 + 0x354)) {
        bVar3 = local_1f8._4_4_ < *(float *)(PTR_DAT_1809fa7a8 + 0x358);
      }
      else {
        bVar3 = iVar30 < *(int *)(PTR_DAT_1809fa7a8 + 0x354);
      }
      bVar3 = (bool)(bVar3 ^ 1);
    }
    local_1f8 = puVar13;
    if ((DAT_180cf9fc8 >> 0xb & 1) == 0) {
LAB_180471f8f:
      if (!bVar3) goto LAB_180471f93;
    }
    else {
      if (iVar30 == *(int *)(PTR_DAT_1809fa7a8 + 0x35c)) {
        bVar4 = local_1f8._4_4_ < *(float *)(PTR_DAT_1809fa7a8 + 0x360);
      }
      else {
        bVar4 = iVar30 < *(int *)(PTR_DAT_1809fa7a8 + 0x35c);
      }
      if (bVar4) goto LAB_180471f8f;
    }
  }
  local_268 = &DAT_1809f35b0;
  uVar15 = FUN_1804735d0(local_d8,&DAT_180c8b060,&DAT_180cf9fa0,local_258);
  FUN_180434680(&DAT_180c8d198,uVar15);
  FUN_180011610(local_80);
  FUN_180200b70(local_98);
  bVar2 = PTR_DAT_1809fa7a8[0x68];
  if ((~bVar2 & 1) != 0) {
    local_248 = 0.0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    local_228 = 0xffffffff;
    uStack_224 = uStack_224 & 0xffffff00;
    uStack_220 = 0xffffffff;
    uStack_21c = uStack_21c & 0xffffff00;
    local_218 = local_218 & 0xffffff00;
    lVar12 = *(longlong *)(param_1 + 0x40);
    if ((lVar12 != 0) && (lVar12 - 0xffacU < 0x7ffffffeffff)) {
      local_248 = *(float *)(lVar12 + 0x54);
    }
    if (param_1 - 0x10000U < 0x7ffffffeffff) {
      FUN_180265ac0(param_1 + 0x20,&uStack_240);
    }
    local_268 = (undefined4 *)((ulonglong)local_268 & 0xffffffffffffff00);
    FUN_18045a7d0(&local_198,&DAT_180cfa020,DAT_180cfa098,DAT_180c8b11c);
    local_250 = (float)(uVar32 | 2);
    local_198._4_4_ = local_248;
    FUN_18043a450(&uStack_140,
                  ((longlong)(CONCAT44(uStack_234,uStack_238) - uStack_240) >> 2) *
                  -0x7d05f417d05f417d);
    uVar31 = CONCAT44(uStack_234,uStack_238);
    for (uVar26 = uStack_240; uVar26 != uVar31; uVar26 = uVar26 + 0xac) {
      local_1f8 = *(undefined8 **)(uVar26 + 0x18);
      uVar5 = uStack_1f0 >> 8;
      uStack_1f0 = CONCAT71((int7)uVar5,*(undefined1 *)(uVar26 + 0x20));
      FUN_180011250(&uStack_140,&local_1f8);
    }
    if (((DAT_180c8c1c8 != 0) && (lVar12 = *(longlong *)(DAT_180c8c1c8 + 0x40), lVar12 != 0)) &&
       (lVar12 - 0xff94U < 0x7ffffffeffff)) {
      uStack_160 = FUN_180011200(lVar12 + 0x6c);
    }
    FUN_180434680(&DAT_180c8d198,&local_198);
    FUN_180011610(&uStack_140);
    FUN_180200b70(local_158);
    FUN_180269120(&uStack_240);
  }
  puVar29 = PTR_DAT_1809fa7a8;
  if ((PTR_DAT_180c3ac98[0x51] != '\0') || (PTR_DAT_180c3ac98[0x52] != '\0')) {
    uVar32 = (uint)local_198 >> 8;
    local_198._0_4_ = (uint)local_198 & 0xffffff00;
    local_198._4_4_ = 0.0;
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0xbf800000;
    uStack_17c = uStack_17c & 0xffffff00;
    local_178 = 0;
    uStack_170 = 0;
    uStack_16e = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    local_148 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = uStack_134 & 0xffffff00;
    uStack_130 = 0;
    local_128 = local_128 & 0xffffff00;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_118 = 0;
    uStack_116 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_108 = local_108 & 0xffffff00;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_f8 = local_f8 & 0xffffff00;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    _DAT_180c8af90 = (ulonglong)(uint)local_198;
    _DAT_180c8af98 = 0;
    _DAT_180c8afa0 = (ulonglong)uStack_182 << 0x30;
    _DAT_180c8afa8 = CONCAT44(uStack_17c,0xbf800000);
    _DAT_180c8afb8 = (ulonglong)bStack_16d << 0x18;
    _DAT_180c8afb0 = 0;
    _DAT_180c8afc0 = 0;
    _DAT_180c8afc8 = 0;
    _DAT_180c8afd0 = 0;
    _DAT_180c8afd8 = 0;
    _DAT_180c8afe8 = (ulonglong)uStack_13e << 0x10;
    _DAT_180c8afe0 = 0;
    _DAT_180c8aff0 = (ulonglong)uStack_134 << 0x20;
    _DAT_180c8aff8 = 0;
    _DAT_180c8b000 = (ulonglong)local_128;
    _DAT_180c8b008 = 0;
    _DAT_180c8b010 = (ulonglong)bStack_115 << 0x18;
    _DAT_180c8b018 = 0;
    _DAT_180c8b020 = (ulonglong)local_108;
    _DAT_180c8b028 = 0;
    _DAT_180c8b030 = (ulonglong)local_f8;
    _DAT_180c8b038 = 0;
    DAT_180c8b040 = 0;
    if ((DAT_180cd1bfe == '\0') && (DAT_180ca013d == '\0')) {
      _DAT_180c8af90 = CONCAT71((uint7)(uint3)uVar32,1);
      _DAT_180c8af90 = CONCAT44(*(undefined4 *)(PTR_DAT_180c873b8 + 0x4c),_DAT_180c8af90);
      _DAT_180c8af98 = (ulonglong)*(uint *)(PTR_DAT_1809fa7a8 + 0x15c);
      fVar33 = *(float *)(PTR_DAT_1809fa7a8 + 0x10) * *(float *)(PTR_DAT_1809fa7a8 + 0x10) +
               *(float *)(PTR_DAT_1809fa7a8 + 0xc) * *(float *)(PTR_DAT_1809fa7a8 + 0xc);
      if (fVar33 < 0.0) {
        fVar33 = (float)FUN_18051af10();
      }
      else {
        fVar33 = SQRT(fVar33);
      }
      _DAT_180c8af98 = CONCAT44(fVar33,DAT_180c8af98);
      _DAT_180c8afa0 =
           CONCAT35(_DAT_180c8afa5,CONCAT14(~bVar2,*(undefined4 *)(puVar29 + 0x68))) &
           0xffffff01ffffffff;
    }
  }
  iVar30 = 0;
  FUN_180430790(&DAT_180c8b060);
  plVar17 = DAT_180cf9fe0;
  puVar29 = PTR_DAT_1809fa7a8;
  if (*(short *)(PTR_DAT_1809fa7a8 + 0x7b8) == 0x40) {
    FUN_180471020(*(undefined4 *)(PTR_DAT_180c3ac98 + 0x60),&DAT_180cf9fa0,&local_258);
    puVar29 = PTR_DAT_1809fa7a8;
  }
  else {
    if (PTR_DAT_180c3ac98[0x24] != '\0') {
      if (*(int *)(PTR_DAT_1809fa7a8 + 0x120) < *(int *)(PTR_DAT_180c8b048 + 0x844)) {
        DAT_180cf9fc8 = DAT_180cf9fc8 & 0xfffffffffffff7fe;
        local_258 = local_258 & 0xfffffffffffff7fe;
        for (plVar22 = DAT_180cf9fd8;
            (plVar22 != DAT_180cf9fe0 && ((*(ushort *)(plVar22 + 1) & 0x801) == 0));
            plVar22 = plVar22 + 9) {
        }
        if (plVar22 != DAT_180cf9fe0) {
          plVar16 = plVar22 + 9;
          if (plVar16 != DAT_180cf9fe0) {
            do {
              if ((*(ushort *)(plVar16 + 1) & 0x801) == 0) {
                lVar12 = plVar16[1];
                *plVar22 = *plVar16;
                plVar22[1] = lVar12;
                lVar12 = plVar16[3];
                plVar22[2] = plVar16[2];
                plVar22[3] = lVar12;
                lVar12 = plVar16[5];
                plVar22[4] = plVar16[4];
                plVar22[5] = lVar12;
                lVar12 = plVar16[7];
                plVar22[6] = plVar16[6];
                plVar22[7] = lVar12;
                plVar22[8] = plVar16[8];
                plVar22 = plVar22 + 9;
              }
              plVar16 = plVar16 + 9;
            } while (plVar16 != plVar17);
            if (plVar22 == plVar17) goto LAB_180472521;
          }
          lVar12 = (longlong)DAT_180cf9fe0 - (longlong)plVar17;
          FUN_180540530(plVar22,plVar17,lVar12);
          DAT_180cf9fe0 = (longlong *)((longlong)plVar22 + lVar12);
        }
LAB_180472521:
        DAT_180cf9fc8 = DAT_180cf9fc8 | (ulonglong)*(uint *)(puVar29 + 0x178) & 0x801;
      }
      else if (*(int *)(PTR_DAT_1809fa7a8 + 0x120) == *(int *)(PTR_DAT_180c8b048 + 0x844)) {
        local_250 = *(float *)(PTR_DAT_180c8b048 + 0x848) + DAT_1808accc8;
        uStack_234 = 0;
        uStack_230 = 0;
        uStack_22c = 0;
        local_228 = local_228 & 0xffffff00;
        uStack_224 = 0;
        uStack_220 = 0;
        uStack_21c = 0;
        local_218 = local_218 & 0xffffff00;
        uStack_214 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        local_208 = 0;
        uStack_206 = 0;
        local_248 = local_250 - DAT_1808accc8;
        uStack_240 = (ulonglong)*(uint *)(PTR_DAT_1809fa7a8 + 0x178) & 0x801;
        uStack_238 = uStack_238 & 0xffffff00;
        if (DAT_180cf9fe0 == DAT_180cf9fe8) {
          FUN_18008c530(&DAT_180cf9fd8,DAT_180cf9fe0,&local_248);
          puVar29 = PTR_DAT_1809fa7a8;
        }
        else {
          *DAT_180cf9fe0 = CONCAT44(uStack_244,local_248);
          plVar17[1] = uStack_240;
          plVar17[2] = (ulonglong)uStack_238;
          plVar17[3] = 0;
          plVar17[4] = (ulonglong)local_228;
          plVar17[5] = 0;
          plVar17[6] = (ulonglong)local_218;
          plVar17[7] = 0;
          plVar17[8] = (ulonglong)uStack_205 << 0x18;
          DAT_180cf9fe0 = DAT_180cf9fe0 + 9;
        }
      }
    }
    if (((*(longlong *)(puVar29 + 0x7b0) == 0) || (DAT_1811123e4 == 0)) ||
       (0x7ffffffefffe < (*(longlong *)(puVar29 + 0x7b0) + (ulonglong)DAT_1811123e4) - 0x10000)) {
      iVar10 = -1;
      sVar23 = *(short *)(puVar29 + 0x7b8);
LAB_180472589:
      if (sVar23 != 0x1f) goto LAB_180472636;
    }
    else {
      iVar10 = FUN_180011200();
      sVar23 = *(short *)(PTR_DAT_1809fa7a8 + 0x7b8);
      puVar29 = PTR_DAT_1809fa7a8;
      if (5 < iVar10 - 1U) goto LAB_180472589;
    }
    if (*(longlong *)(puVar29 + 0x7b0) == 0) {
LAB_1804725c8:
      if (*(longlong *)(puVar29 + 0x7b0) != 0) {
        if ((DAT_1811123f0 != 0) &&
           ((*(longlong *)(puVar29 + 0x7b0) + (ulonglong)DAT_1811123f0) - 0x10000 < 0x7ffffffeffff))
        {
          iVar11 = FUN_180011200();
          if (0 < iVar11) goto LAB_180472609;
          puVar29 = PTR_DAT_1809fa7a8;
        }
      }
      if (iVar10 == 0) {
        if (sVar23 == 0x1f) goto LAB_180472618;
      }
      else if (sVar23 != 0x40) {
LAB_180472618:
        DAT_180cf9fc8 = DAT_180cf9fc8 & 0xfffffffffffff7ff;
        local_258 = local_258 & 0xfffffffffffff7ff;
      }
    }
    else {
      if ((DAT_1811123ec == 0) ||
         (0x7ffffffefffe < (*(longlong *)(puVar29 + 0x7b0) + (ulonglong)DAT_1811123ec) - 0x10000))
      goto LAB_1804725c8;
      cVar7 = FUN_180011220();
      if (cVar7 == '\0') {
        puVar29 = PTR_DAT_1809fa7a8;
        goto LAB_1804725c8;
      }
LAB_180472609:
      puVar29 = PTR_DAT_1809fa7a8;
    }
  }
LAB_180472636:
  if (*(int *)(puVar29 + 0x374) < 1) {
    lVar12 = *(longlong *)(puVar29 + 0x7a8);
    if (*(longlong *)(puVar29 + 0x7b0) != 0) {
      if ((DAT_1811123e4 != 0) &&
         ((*(longlong *)(puVar29 + 0x7b0) + (ulonglong)DAT_1811123e4) - 0x10000 < 0x7ffffffeffff)) {
        iVar8 = FUN_180011200();
        puVar29 = PTR_DAT_1809fa7a8;
      }
    }
    if (lVar12 != 0) {
      if (((*(longlong *)(puVar29 + 0x7b0) != 0) && (DAT_1811123f8 != 0)) &&
         ((*(longlong *)(puVar29 + 0x7b0) + (ulonglong)DAT_1811123f8) - 0x10000 < 0x7ffffffeffff)) {
        iVar30 = FUN_180011200();
        puVar29 = PTR_DAT_1809fa7a8;
      }
      if (((*(int *)(puVar29 + 0x374) < iVar30) &&
          ((iVar8 - 1U < 6 || (*(short *)(puVar29 + 0x7b8) == 0x1f)))) &&
         ((DAT_1811123fc != 0 &&
          (iVar8 = FUN_180011200(lVar12 + (ulonglong)DAT_1811123fc), 0 < iVar8)))) {
        DAT_180cf9fc8 = DAT_180cf9fc8 & 0xfffffffffffff7fe | 0x2000;
        local_258 = local_258 & 0xfffffffffffff7fe;
      }
    }
  }
  FUN_180474b40(PTR_DAT_180c8b048);
  DAT_180c8e98c = 0;
  if (((DAT_180c8c1c8 == 0) || (DAT_180c8c1d0 == (undefined4 *)0x0)) ||
     (DAT_180c8c1d8 == (ulonglong *)0x0)) goto LAB_1804727c9;
  if ((char)DAT_180c8b0d1 != '\0') {
    if (DAT_180c8b0d1._1_1_ == '\0') {
      cVar7 = FUN_1804378b0(&DAT_180c8b060);
      if (cVar7 != '\0') {
        if (DAT_180c8af90 != '\0') {
          _DAT_180c8afa0 = CONCAT15(1,_DAT_180c8afa0);
        }
        goto LAB_1804727c9;
      }
      FUN_180438770(&DAT_180c8b060);
      cVar7 = FUN_180439250(&DAT_180c8b060);
      if (cVar7 != '\0') goto LAB_1804727c9;
      FUN_180439c80(&DAT_180c8b060);
    }
    else {
      FUN_180433ad0();
    }
  }
  FUN_180431960(&DAT_180c8b060);
  FUN_1804352f0(&DAT_180c8b060);
LAB_1804727c9:
  if (PTR_DAT_180c3ac98[0x24] == '\0') {
    if (((((PTR_DAT_180c873b8[1] != '\0') && ((DAT_180cf9fc8 & 1) != 0)) &&
         (*(short *)(PTR_DAT_1809fa7a8 + 0x7b8) != 0x40)) &&
        (((*(longlong *)(PTR_DAT_1809fa7a8 + 0x7b0) == 0 || (DAT_1811123f4 == 0)) ||
         ((0x7ffffffefffe <
           (*(longlong *)(PTR_DAT_1809fa7a8 + 0x7b0) + (ulonglong)DAT_1811123f4) - 0x10000 ||
          (cVar7 = FUN_180011220(), cVar7 == '\0')))))) &&
       (plVar17 = DAT_180cf9fe0, 0 < *(int *)(PTR_DAT_1809fa7a8 + 0xa4))) {
      uStack_234 = 0;
      uStack_230 = 0;
      uStack_22c = 0;
      local_228 = local_228 & 0xffffff00;
      uStack_224 = 0;
      uStack_220 = 0;
      uStack_21c = 0;
      local_218 = local_218 & 0xffffff00;
      uStack_214 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
      local_208 = 0;
      uStack_206 = 0;
      uStack_240 = 1;
      uStack_238 = uStack_238 & 0xffffff00;
      local_248 = 0.0;
      if (DAT_180cf9fe0 == DAT_180cf9fe8) {
        FUN_18008c530(&DAT_180cf9fd8,DAT_180cf9fe0,&local_248);
      }
      else {
        *DAT_180cf9fe0 = (ulonglong)uStack_244 << 0x20;
        plVar17[1] = 1;
        plVar17[2] = (ulonglong)uStack_238;
        plVar17[3] = 0;
        plVar17[4] = (ulonglong)local_228;
        plVar17[5] = 0;
        plVar17[6] = (ulonglong)local_218;
        plVar17[7] = 0;
        plVar17[8] = (ulonglong)uStack_205 << 0x18;
        DAT_180cf9fe0 = DAT_180cf9fe0 + 9;
      }
    }
    local_1a8[0] = 4;
    local_1a8[1] = 2;
    puVar27 = local_1a8;
    plVar17 = DAT_180cf9fe0;
    do {
      uStack_240 = *puVar27;
      if ((ulonglong)(((longlong)plVar17 - (longlong)DAT_180cf9fd8 >> 3) * -0x71c71c71c71c71c7) <
          0x20) {
        if ((uStack_240 & (DAT_180cf9fc8 ^ *(ulonglong *)(PTR_DAT_1809fa7a8 + 0x178))) != 0) {
          bVar3 = false;
          plVar22 = DAT_180cf9fd8;
          if (DAT_180cf9fd8 != plVar17) {
            do {
              if (plVar22[1] == uStack_240) {
                bVar3 = true;
              }
              plVar22 = plVar22 + 9;
            } while (plVar22 != plVar17);
            if (bVar3) goto LAB_180472a43;
          }
          local_248 = 0.0;
          uStack_234 = 0;
          uStack_230 = 0;
          uStack_22c = 0;
          local_228 = local_228 & 0xffffff00;
          uStack_224 = 0;
          uStack_220 = 0;
          uStack_21c = 0;
          local_218 = local_218 & 0xffffff00;
          uStack_214 = 0;
          uStack_210 = 0;
          uStack_20c = 0;
          local_208 = 0;
          uStack_206 = 0;
          uStack_238 = CONCAT31(uStack_238._1_3_,(DAT_180cf9fc8 & uStack_240) != 0);
          if (plVar17 == DAT_180cf9fe8) {
            FUN_18008c530(&DAT_180cf9fd8,plVar17,&local_248);
            plVar17 = DAT_180cf9fe0;
          }
          else {
            *plVar17 = (ulonglong)uStack_244 << 0x20;
            plVar17[1] = uStack_240;
            plVar17[2] = (ulonglong)uStack_238;
            plVar17[3] = 0;
            plVar17[4] = (ulonglong)local_228;
            plVar17[5] = 0;
            plVar17[6] = (ulonglong)local_218;
            plVar17[7] = 0;
            plVar17[8] = (ulonglong)uStack_205 << 0x18;
            DAT_180cf9fe0 = DAT_180cf9fe0 + 9;
            plVar17 = DAT_180cf9fe0;
          }
        }
      }
      else if (uStack_240 == 2) break;
LAB_180472a43:
      puVar27 = puVar27 + 1;
    } while (puVar27 != &local_198);
  }
  *(ulonglong *)(param_1 + 0x70) = local_258;
  return;
}



/* ===== 180472ad0 FUN_180472ad0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180472ad0(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 auStack_988 [32];
  undefined8 local_968;
  undefined2 uStack_960;
  undefined1 uStack_95e;
  byte bStack_95d;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  uint uStack_944;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  uint local_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined1 uStack_914;
  undefined1 uStack_913;
  undefined1 uStack_912;
  byte bStack_911;
  undefined4 uStack_910;
  undefined2 uStack_90c;
  ushort uStack_90a;
  undefined4 uStack_908;
  undefined4 uStack_904;
  uint uStack_900;
  undefined2 local_8f8;
  undefined4 local_8f4;
  undefined2 local_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined4 local_880;
  undefined4 local_87c;
  undefined4 local_878;
  undefined8 local_874;
  undefined4 local_86c;
  undefined8 local_868;
  undefined4 local_860;
  undefined8 local_85c;
  undefined4 local_854;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined4 local_810;
  undefined1 local_80c;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined2 local_7b0;
  undefined8 local_7ac;
  undefined4 local_7a4;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined4 local_780;
  undefined1 local_77c;
  undefined4 local_778;
  undefined1 local_774;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined4 local_738;
  undefined8 local_734;
  undefined8 uStack_72c;
  undefined8 local_724;
  undefined4 local_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined2 local_708;
  undefined8 local_704;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined8 local_6e4;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined1 local_6c0;
  undefined8 local_6bc;
  undefined8 local_6b4;
  undefined8 local_6ac;
  undefined4 local_6a4;
  undefined1 local_6a0;
  undefined8 local_69c;
  undefined4 local_694;
  undefined1 local_690;
  undefined8 local_68c;
  undefined8 local_684;
  undefined8 local_67c;
  undefined8 local_674;
  undefined8 local_66c;
  undefined4 local_664;
  undefined8 local_660;
  undefined1 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined2 local_61c;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined2 local_5a0;
  undefined4 local_59c;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined4 local_568;
  undefined1 local_564;
  undefined8 local_560;
  undefined8 local_558;
  undefined1 local_550 [640];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  undefined8 local_28c;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 local_244;
  undefined8 local_23c;
  undefined8 local_234;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined1 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined1 local_17e;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  ulonglong local_18;
  
  puVar1 = PTR_DAT_180c3ac98;
  uVar4 = _UNK_1808ad358;
  uVar3 = _DAT_1808ad350;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_988;
  uStack_95c = (undefined4)_DAT_1808ad2d0;
  uStack_958 = (undefined4)((ulonglong)_DAT_1808ad2d0 >> 0x20);
  uStack_954 = (undefined4)_UNK_1808ad2d8;
  uVar2 = _UNK_1808ad2d8 >> 0x20;
  uStack_944 = uStack_944 & 0xffffff00;
  *(undefined8 *)PTR_DAT_180c3ac98 = 0x200000000;
  *(ulonglong *)(puVar1 + 8) = CONCAT44(uStack_95c,CONCAT13(bStack_95d,CONCAT12(uStack_95e,0x100)));
  local_928 = CONCAT31(local_928._1_3_,1);
  *(ulonglong *)(puVar1 + 0x10) = CONCAT44(uStack_954,uStack_958);
  *(ulonglong *)(puVar1 + 0x18) = uVar2;
  uStack_913 = 0;
  *(ulonglong *)(puVar1 + 0x20) = (ulonglong)uStack_944 << 0x20;
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  uStack_912 = 0;
  uStack_95c = 0;
  uStack_958 = 0;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined8 *)(puVar1 + 0x38) = 0x400000064;
  uStack_908 = 0;
  uStack_904 = 0;
  uStack_900 = uStack_900 & 0xffffff00;
  *(ulonglong *)(puVar1 + 0x40) = (ulonglong)local_928;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  local_968 = 0;
  uStack_960 = 0;
  *(ulonglong *)(puVar1 + 0x50) = (ulonglong)bStack_911 << 0x38;
  *(ulonglong *)(puVar1 + 0x58) = CONCAT26(uStack_90a,3);
  uStack_95e = 0;
  *(ulonglong *)(puVar1 + 0x5c) = (ulonglong)uStack_90a << 0x10;
  *(ulonglong *)(puVar1 + 100) = (ulonglong)uStack_900 << 0x20;
  puVar1 = PTR_DAT_180c873b8;
  uVar4 = _UNK_1808ad2a8;
  uVar3 = _DAT_1808ad2a0;
  uStack_950 = (undefined4)_DAT_1808ad2a0;
  uStack_94c = (undefined4)((ulonglong)_DAT_1808ad2a0 >> 0x20);
  uStack_948 = (undefined4)_UNK_1808ad2a8;
  uStack_944 = (uint)((ulonglong)_UNK_1808ad2a8 >> 0x20);
  uStack_954 = 0;
  uStack_930 = 0;
  local_928 = 0;
  uStack_924 = 0;
  uStack_920 = 0;
  uStack_91c = 0;
  uStack_918 = 0xffffffff;
  uStack_914 = 0;
  uStack_940 = 0;
  local_938 = 0;
  uStack_910 = 0;
  uStack_90c = 0;
  uStack_90a = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  *(undefined8 *)PTR_DAT_180c873b8 = 0;
  *(ulonglong *)(puVar1 + 8) = (ulonglong)bStack_95d << 0x18;
  local_8f0 = 0x100;
  local_888 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  local_880 = 0;
  local_87c = 0xffffffff;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  local_878 = 2;
  local_874 = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(ulonglong *)(puVar1 + 0x50) = CONCAT17(bStack_911,0xffffffff);
  *(undefined8 *)(puVar1 + 0x58) = 0;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_8b8 = _DAT_1808adae0;
  uStack_8b0 = _UNK_1808adae8;
  local_8a8 = _DAT_1808adae0;
  uStack_8a0 = _UNK_1808adae8;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_86c = 0x3f800000;
  local_760 = 0;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_738 = 0;
  local_734 = 0;
  uStack_72c = 0;
  local_724 = 0;
  local_71c = 0;
  local_708 = 0;
  local_704 = 0;
  local_6fc = 0;
  local_6e8 = 0;
  local_6e4 = 0;
  local_6dc = 0;
  local_6d8 = 0;
  local_6d0 = 0;
  local_6c8 = 0;
  local_6c0 = 0;
  local_6bc = 0;
  local_6b4 = 0;
  local_6ac = 0;
  local_6a4 = 0;
  local_6a0 = 0;
  local_69c = 0;
  local_694 = 0;
  local_690 = 0;
  local_68c = 0;
  local_684 = 0;
  local_67c = 0;
  local_674 = 0;
  local_66c = 0;
  local_660 = 0;
  local_658 = 0;
  local_630 = 0;
  local_628 = 0;
  local_620 = 0;
  local_61c = 0;
  local_868 = 0;
  local_860 = 0x3f800000;
  local_85c = 0x3f800000;
  local_854 = 0;
  local_850 = 1;
  local_848 = 0;
  local_840 = 0;
  local_838 = 0;
  uStack_830 = 0;
  local_828 = 0;
  local_820 = 0;
  local_818 = 0;
  local_810 = 0;
  local_80c = 0;
  local_808 = 0;
  uStack_800 = 0;
  local_7e8 = 0;
  uStack_7e0 = 0;
  local_7d8 = 0;
  local_7d0 = 0;
  local_7c8 = 0;
  local_7c0 = 0;
  local_7b8 = 0;
  local_7b4 = 0x43820000;
  local_7b0 = 0;
  local_7ac = 0;
  local_7a4 = 0;
  local_7a0 = 0;
  local_798 = 0;
  local_790 = 0x11;
  local_788 = 0x3c800000;
  local_780 = 0;
  local_77c = 0;
  local_778 = 0;
  local_774 = 0;
  local_770 = 0;
  uStack_768 = 0;
  local_758 = 0;
  local_750 = 0;
  local_748 = 0;
  uStack_740 = 0;
  local_6f8 = 0x3f800000;
  local_718 = 0;
  uStack_710 = 0;
  local_6f0 = 0;
  local_664 = 0xffffffff;
  local_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  local_618 = _DAT_1808ade10;
  uStack_610 = _UNK_1808ade18;
  local_5f8 = _DAT_1808ada50;
  uStack_5f0 = _UNK_1808ada58;
  local_608 = _DAT_1808ad580;
  uStack_600 = _UNK_1808ad588;
  local_5d8 = _DAT_1808adbb0;
  uStack_5d0 = _UNK_1808adbb8;
  local_5e8 = _DAT_1808ad590;
  uStack_5e0 = _UNK_1808ad598;
  local_5b8 = _DAT_1808ade50;
  uStack_5b0 = _UNK_1808ade58;
  local_5c8 = _DAT_1808ad570;
  uStack_5c0 = _UNK_1808ad578;
  local_5a8 = 0;
  local_5a0 = 1;
  local_59c = 0xffffffff;
  local_598 = 0;
  local_590 = 0;
  local_588 = 0;
  local_580 = 0;
  local_578 = 0;
  local_570 = 0;
  local_568 = 0;
  local_564 = 0;
  local_560 = 0;
  local_558 = 0;
  FUN_180540170(local_550,0,0x280);
  FUN_18008b430(local_550);
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  FUN_180540170(&local_2bc,0,0x100);
  puVar5 = PTR_DAT_180c8b048;
  local_2bc = 0;
  local_190 = 0;
  local_2b4 = 0;
  local_2ac = 0;
  local_2a4 = 0;
  local_29c = 0;
  local_294 = 0;
  local_28c = 0;
  local_284 = 0;
  local_27c = 0;
  local_274 = 0;
  local_26c = 0;
  local_264 = 0;
  local_25c = 0;
  local_254 = 0;
  local_24c = 0;
  local_244 = 0;
  local_23c = 0;
  local_234 = 0;
  local_22c = 0;
  local_224 = 0;
  local_21c = 0;
  local_214 = 0;
  local_20c = 0;
  local_204 = 0;
  local_1fc = 0;
  local_1f4 = 0;
  local_1ec = 0;
  local_1e4 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  local_188 = 0;
  local_17e = 0;
  local_174 = 0;
  local_154 = 0;
  puVar1 = PTR_DAT_180c8b048 + 0x10;
  local_148 = 0;
  local_128 = 0;
  local_120 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_180 = 2;
  local_17c = 0;
  local_170 = 0x4396ff27;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0x3f800000;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_d8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d0 = 0xffffffff;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c4 = 0;
  local_bc = 0xffffffff;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58[0] = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  local_30 = 0xffffffff;
  *PTR_DAT_180c8b048 = (undefined1)local_8f8;
  puVar5[1] = local_8f8._1_1_;
  *(undefined4 *)(puVar5 + 4) = local_8f4;
  puVar5[8] = (undefined1)local_8f0;
  puVar5[9] = local_8f0._1_1_;
  FUN_180466630(puVar1,&local_8e8);
  *(undefined4 *)(puVar5 + 2000) = (undefined4)local_128;
  *(undefined4 *)(puVar5 + 0x7d4) = local_128._4_4_;
  *(undefined4 *)(puVar5 + 0x7d8) = (undefined4)local_120;
  *(undefined4 *)(puVar5 + 0x7dc) = local_120._4_4_;
  *(undefined4 *)(puVar5 + 0x7e0) = (undefined4)local_118;
  *(undefined4 *)(puVar5 + 0x7e4) = local_118._4_4_;
  *(undefined4 *)(puVar5 + 0x7e8) = (undefined4)uStack_110;
  *(undefined4 *)(puVar5 + 0x7ec) = uStack_110._4_4_;
  *(undefined4 *)(puVar5 + 0x7f0) = (undefined4)local_108;
  *(undefined4 *)(puVar5 + 0x7f4) = local_108._4_4_;
  *(undefined4 *)(puVar5 + 0x7f8) = (undefined4)uStack_100;
  *(undefined4 *)(puVar5 + 0x7fc) = uStack_100._4_4_;
  *(undefined4 *)(puVar5 + 0x800) = (undefined4)local_f8;
  *(undefined4 *)(puVar5 + 0x804) = local_f8._4_4_;
  *(undefined4 *)(puVar5 + 0x808) = (undefined4)uStack_f0;
  *(undefined4 *)(puVar5 + 0x80c) = uStack_f0._4_4_;
  *(undefined4 *)(puVar5 + 0x810) = (undefined4)local_e8;
  *(undefined4 *)(puVar5 + 0x814) = local_e8._4_4_;
  *(undefined4 *)(puVar5 + 0x818) = (undefined4)uStack_e0;
  *(undefined4 *)(puVar5 + 0x81c) = uStack_e0._4_4_;
  *(undefined8 *)(puVar5 + 0x820) = local_d8;
  *(undefined4 *)(puVar5 + 0x828) = local_d0;
  *(undefined8 *)(puVar5 + 0x82c) = local_cc;
  *(undefined8 *)(puVar5 + 0x834) = local_c4;
  *(undefined4 *)(puVar5 + 0x83c) = local_bc;
  *(undefined4 *)(puVar5 + 0x840) = local_b8;
  *(ulonglong *)(puVar5 + 0x844) = CONCAT44(local_b0,uStack_b4);
  puVar5[0x84c] = local_ac;
  *(undefined4 *)(puVar5 + 0x850) = (undefined4)local_a8;
  *(undefined4 *)(puVar5 + 0x854) = local_a8._4_4_;
  *(undefined4 *)(puVar5 + 0x858) = local_a0;
  *(undefined4 *)(puVar5 + 0x85c) = (undefined4)local_9c;
  *(undefined4 *)(puVar5 + 0x860) = local_9c._4_4_;
  *(undefined4 *)(puVar5 + 0x864) = local_94;
  *(undefined4 *)(puVar5 + 0x868) = (undefined4)local_90;
  *(undefined4 *)(puVar5 + 0x86c) = local_90._4_4_;
  *(undefined4 *)(puVar5 + 0x870) = local_88;
  puVar5[0x874] = (undefined1)local_84;
  puVar5[0x875] = local_84._1_1_;
  *(undefined8 *)(puVar5 + 0x878) = local_80;
  *(undefined8 *)(puVar5 + 0x880) = local_78;
  FUN_180200bf0(puVar5 + 0x888,&local_70);
  FUN_180267130(puVar5 + 0x8a0,local_58);
  FUN_180269120(&local_50);
  FUN_180200b70(&local_70);
  FUN_1800244c0(&local_650);
  ppuVar6 = (undefined **)&DAT_180c87450;
  do {
    if (ppuVar6[1] != (undefined *)0x0) {
      *(undefined8 *)(ppuVar6[1] + 0x30) = 0;
    }
    ppuVar6[1] = (undefined *)0x0;
    *(undefined4 *)ppuVar6 = 0;
    *(undefined4 *)((longlong)ppuVar6 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)ppuVar6 + 0xfec) = 0;
    ppuVar6 = ppuVar6 + 0x201;
  } while (ppuVar6 != &PTR_s_sv_accelerate_180c8a468);
  if (DAT_181111da0 != DAT_181111da8) {
    DAT_181111da8 = DAT_181111da0;
  }
  if (DAT_181111dd0 != DAT_181111dd8) {
    DAT_181111dd8 = DAT_181111dd0;
  }
  if (DAT_181111db8 != DAT_181111dc0) {
    DAT_181111dc0 = DAT_181111db8;
  }
  _DAT_181111d90 = 0;
  DAT_181111d98 = 0;
  DAT_181111d9c = 0;
  return;
}



/* ===== 1804735d0 FUN_1804735d0 ===== */

longlong FUN_1804735d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  FUN_18045a7d0(param_1,param_3,param_4,*(undefined4 *)(param_2 + 0xbc),0);
  *(undefined4 *)(param_1 + 4) = *param_5;
  FUN_18043a450(param_1 + 0x58,
                (*(longlong *)(param_5 + 4) - *(longlong *)(param_5 + 2) >> 2) * -0x7d05f417d05f417d
               );
  lVar1 = *(longlong *)(param_5 + 4);
  for (lVar3 = *(longlong *)(param_5 + 2); lVar3 != lVar1; lVar3 = lVar3 + 0xac) {
    local_24 = *(undefined4 *)(lVar3 + 0x18);
    local_20 = *(undefined4 *)(lVar3 + 0x1c);
    local_1c = *(undefined1 *)(lVar3 + 0x20);
    FUN_180011250(param_1 + 0x58,&local_24);
  }
  if (((*(longlong *)(param_2 + 0x1168) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1168) + 0x40), lVar1 != 0)) &&
     (lVar1 - 0xff94U < 0x7ffffffeffff)) {
    uVar2 = FUN_180011200(lVar1 + 0x6c);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  return param_1;
}



/* ===== 1804736f0 FUN_1804736f0 ===== */

undefined4 * FUN_1804736f0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar9 = auStack_28;
  puVar7 = auStack_28;
  puVar8 = auStack_28;
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
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x45);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x13) = *(undefined8 *)(param_2 + 0x13);
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_2 + 0x19);
  param_1[0x1b] = param_2[0x1b];
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  param_1[0x1e] = param_2[0x1e];
  *(undefined8 *)(param_1 + 0x1f) = *(undefined8 *)(param_2 + 0x1f);
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
  if (param_1 == param_2) goto LAB_180473926;
  lVar1 = *(longlong *)(param_1 + 0x2e);
  puVar9 = auStack_28;
  if (lVar1 != 0) {
    lVar6 = lVar1;
    if ((ulonglong)((*(longlong *)(param_1 + 0x32) - lVar1 >> 3) * 8) < 0x1000) {
LAB_1804738c7:
      puVar8 = puVar7;
    }
    else {
      lVar6 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar6) - 8U) {
        lVar6 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar7 = auStack_20;
        goto LAB_1804738c7;
      }
    }
    *(undefined8 *)(puVar8 + -8) = 0x1804738d2;
    thunk_FUN_1803d64e0(lVar6);
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x32) = 0;
    puVar9 = puVar8;
  }
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x32) = 0;
LAB_180473926:
  *(undefined8 *)(puVar9 + -8) = 0x180473939;
  FUN_180473bb0(param_1 + 0x34,param_2 + 0x34);
  uVar3 = param_2[0x3b];
  uVar4 = param_2[0x3c];
  uVar5 = param_2[0x3d];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = uVar3;
  param_1[0x3c] = uVar4;
  param_1[0x3d] = uVar5;
  uVar3 = param_2[0x3f];
  uVar4 = param_2[0x40];
  uVar5 = param_2[0x41];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = uVar3;
  param_1[0x40] = uVar4;
  param_1[0x41] = uVar5;
  *(undefined8 *)(puVar9 + -8) = 0x180473968;
  FUN_180473bb0(param_1 + 0x42,param_2 + 0x42);
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
  *(undefined8 *)(puVar9 + -8) = 0x180473a77;
  FUN_18002ba60(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  param_1[0x62] = param_2[0x62];
  *(undefined8 *)(param_1 + 99) = *(undefined8 *)(param_2 + 99);
  param_1[0x65] = param_2[0x65];
  *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(param_2 + 0x66);
  param_1[0x68] = param_2[0x68];
  *(undefined8 *)(param_1 + 0x69) = *(undefined8 *)(param_2 + 0x69);
  param_1[0x6b] = param_2[0x6b];
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  param_1[0x6e] = param_2[0x6e];
  *(undefined8 *)(param_1 + 0x6f) = *(undefined8 *)(param_2 + 0x6f);
  param_1[0x71] = param_2[0x71];
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  param_1[0x74] = param_2[0x74];
  *(undefined8 *)(param_1 + 0x75) = *(undefined8 *)(param_2 + 0x75);
  param_1[0x77] = param_2[0x77];
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  param_1[0x7a] = param_2[0x7a];
  *(undefined8 *)(param_1 + 0x7b) = *(undefined8 *)(param_2 + 0x7b);
  param_1[0x7d] = param_2[0x7d];
  param_1[0x7e] = param_2[0x7e];
  return param_1;
}



/* ===== 180473bb0 FUN_180473bb0 ===== */

longlong * FUN_180473bb0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_180473c19;
  if ((param_1[2] - lVar2 & 0xffffffffffffffe0U) < 0x1000) {
LAB_180473c06:
    lVar3 = lVar2;
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_180473c06;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180473c0e;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_180473c19:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



/* ===== 180473c50 FUN_180473c50 ===== */

char * FUN_180473c50(void)

{
  return "Insufficient resources were available to use additional parallelism.";
}



/* ===== 180473c60 FUN_180473c60 ===== */

void FUN_180473c60(void)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_180473c90(&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(&local_28,&DAT_1809160f8);
}



/* ===== 180473c90 FUN_180473c90 ===== */

undefined8 * FUN_180473c90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = std::_Parallelism_resources_exhausted::vftable;
  return param_1;
}



/* ===== 180473cb0 FUN_180473cb0 ===== */

undefined8 * FUN_180473cb0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::_Parallelism_resources_exhausted::vftable;
  return param_1;
}



/* ===== 180473cf0 FUN_180473cf0 ===== */

void FUN_180473cf0(void)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70 [11];
  
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_18000fb70(0x7fffff0);
  lVar5 = 0xfffffe;
  puVar7 = puVar4;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FUN_180540530(puVar4,local_88,lStack_80 - local_88);
  puVar9 = auStack_a8;
  puVar10 = auStack_a8;
  puVar11 = auStack_a8;
  if (local_88 == 0) goto LAB_180473db2;
  lVar5 = local_88;
  if ((ulonglong)((local_78 - local_88 >> 3) * 8) < 0x1000) {
LAB_180473da7:
    puVar10 = puVar9;
  }
  else {
    lVar5 = *(longlong *)(local_88 + -8);
    if (0x1f < (local_88 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_a0;
      goto LAB_180473da7;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x180473db2;
  thunk_FUN_1803d64e0(lVar5);
  puVar11 = puVar10;
LAB_180473db2:
  fVar3 = DAT_1808ac014;
  *(undefined8 **)(puVar11 + 0x20) = puVar4;
  *(undefined8 **)(puVar11 + 0x28) = puVar4 + 0xfffffe;
  *(undefined8 **)(puVar11 + 0x30) = puVar4 + 0xfffffe;
  uVar12 = 0;
  while( true ) {
    *(uint *)(puVar11 + 0xb0) = uVar12 + 0x56800000;
    *(uint *)(puVar11 + 0xb8) = uVar12 + 0xd6800000;
    fVar1 = *(float *)(puVar11 + 0xb0);
    fVar15 = fVar1 * fVar3;
    uVar6 = (ulonglong)uVar12;
    *(undefined8 *)(puVar11 + -8) = 0x180473e1a;
    uVar13 = FUN_180517790(fVar15);
    *(undefined8 *)(puVar11 + -8) = 0x180473e25;
    uVar14 = FUN_180517200(fVar15);
    *(undefined8 *)(puVar11 + -8) = 0x180473e30;
    uVar13 = FUN_180516b00(uVar13,uVar14);
    *(undefined4 *)(puVar4 + uVar6 * 2) = uVar13;
    *(float *)((longlong)puVar4 + uVar6 * 0x10 + 4) = fVar1;
    fVar1 = *(float *)(puVar11 + 0xb8);
    fVar15 = fVar1 * fVar3;
    lVar5 = *(longlong *)(puVar11 + 0x20);
    *(undefined8 *)(puVar11 + -8) = 0x180473e5c;
    uVar13 = FUN_180517790(fVar15);
    *(undefined8 *)(puVar11 + -8) = 0x180473e67;
    uVar14 = FUN_180517200(fVar15);
    *(undefined8 *)(puVar11 + -8) = 0x180473e72;
    uVar13 = FUN_180516b00(uVar13,uVar14);
    *(undefined4 *)(lVar5 + 8 + uVar6 * 0x10) = uVar13;
    *(float *)(lVar5 + 0xc + uVar6 * 0x10) = fVar1;
    uVar12 = uVar12 + 1;
    if (0x7ffffe < uVar12) break;
    puVar4 = *(undefined8 **)(puVar11 + 0x20);
  }
  *(undefined8 *)(puVar11 + -8) = 0x180473ea2;
  FUN_1804776e0(uVar13,*(undefined8 *)(puVar11 + 0x20),*(undefined8 *)(puVar11 + 0x28));
  *(undefined8 *)(puVar11 + 0x38) = 0;
  *(undefined8 *)(puVar11 + 0x40) = 0;
  *(undefined8 *)(puVar11 + 0x48) = 0;
  lVar5 = *(longlong *)(puVar11 + 0x28);
  lVar8 = *(longlong *)(puVar11 + 0x20);
  uVar6 = lVar5 - lVar8 >> 3;
  *(ulonglong *)(puVar11 + 0xb0) = uVar6;
  if (uVar6 != 0) {
    if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar11 + -8) = &UNK_1804740a0;
      FUN_1800118d0();
    }
    *(undefined8 *)(puVar11 + -8) = 0x180473ef6;
    FUN_180068c10(puVar11 + 0x38,puVar11 + 0xb0);
    lVar5 = *(longlong *)(puVar11 + 0x28);
    lVar8 = *(longlong *)(puVar11 + 0x20);
  }
  if (lVar8 != lVar5) {
    do {
      *(undefined8 *)(puVar11 + -8) = 0x180473f1e;
      FUN_180066e60(puVar11 + 0x38,lVar8 + 4);
      lVar8 = lVar8 + 8;
    } while (lVar8 != lVar5);
    lVar8 = *(longlong *)(puVar11 + 0x20);
    if (lVar8 != *(longlong *)(puVar11 + 0x28)) {
      *(longlong *)(puVar11 + 0x28) = lVar8;
    }
  }
  if (lVar8 != *(longlong *)(puVar11 + 0x30)) {
    *(undefined8 *)(puVar11 + -8) = 0x180473f4c;
    FUN_1800132b0(puVar11 + 0x20);
  }
  if (DAT_181112410 != 0) {
    lVar5 = DAT_181112410;
    if ((0xfff < (ulonglong)((DAT_181112420 - DAT_181112410 >> 2) * 4)) &&
       (lVar5 = *(longlong *)(DAT_181112410 + -8), 0x1f < (DAT_181112410 - lVar5) - 8U)) {
      lVar5 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = puVar11 + 8;
    }
    *(undefined8 *)(puVar11 + -8) = 0x180473fa0;
    thunk_FUN_1803d64e0(lVar5);
  }
  DAT_181112410 = *(longlong *)(puVar11 + 0x38);
  DAT_181112418 = *(longlong *)(puVar11 + 0x40);
  DAT_181112420 = *(longlong *)(puVar11 + 0x48);
  *(undefined8 *)(puVar11 + 0x38) = 0;
  *(undefined8 *)(puVar11 + 0x40) = 0;
  *(undefined8 *)(puVar11 + 0x48) = 0;
  DAT_180cd1e25 = 1;
  *(undefined8 *)(puVar11 + -8) = 0x180473fed;
  FUN_1802b2560("[rage] angle table ready (%zu floats)",DAT_181112418 - DAT_181112410 >> 2);
  lVar5 = *(longlong *)(puVar11 + 0x38);
  if (lVar5 != 0) {
    lVar8 = lVar5;
    if ((0xfff < (ulonglong)((*(longlong *)(puVar11 + 0x48) - lVar5 >> 2) * 4)) &&
       (lVar8 = *(longlong *)(lVar5 + -8), 0x1f < (lVar5 - lVar8) - 8U)) {
      lVar8 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = puVar11 + 8;
    }
    *(undefined8 *)(puVar11 + -8) = 0x18047403e;
    thunk_FUN_1803d64e0(lVar8);
    *(undefined8 *)(puVar11 + 0x38) = 0;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined8 *)(puVar11 + 0x48) = 0;
  }
  *(undefined8 *)(puVar11 + -8) = 0x180474056;
  FUN_1800132b0(puVar11 + 0x20);
  return;
}



/* ===== 1804740b0 FUN_1804740b0 ===== */

float * FUN_1804740b0(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = DAT_1808abff8;
  param_2 = param_2 * DAT_1808abff8;
  fVar1 = (float)FUN_180517790(param_2);
  fVar2 = (float)FUN_180517200(param_2);
  param_3 = param_3 * fVar5;
  fVar3 = (float)FUN_180517790(param_3);
  fVar4 = (float)FUN_180517200(param_3);
  param_4 = param_4 * fVar5;
  fVar5 = (float)FUN_180517790(param_4);
  fVar6 = (float)FUN_180517200(param_4);
  *param_1 = fVar5 * fVar2 * fVar4 - fVar6 * fVar1 * fVar3;
  param_1[1] = fVar6 * fVar1 * fVar4 + fVar5 * fVar2 * fVar3;
  param_1[2] = fVar6 * fVar2 * fVar3 - fVar5 * fVar1 * fVar4;
  param_1[3] = fVar6 * fVar2 * fVar4 + fVar5 * fVar1 * fVar3;
  return param_1;
}



/* ===== 1804741f0 FUN_1804741f0 ===== */

undefined8 FUN_1804741f0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((DAT_180cd1e24 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cd1e24 = '\x01';
    DAT_181112408 = FUN_18038eaf0("CCSWeaponBaseVData","m_flCycleTime");
    DAT_18111240c = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
  }
  if ((DAT_181112408 == 0) || (0x7ffffffefffe < *(longlong *)(param_1 + 0x7b0) - 0x10000U)) {
    return 0;
  }
  uVar1 = FUN_18000f3d0((ulonglong)DAT_181112408 +
                        (ulonglong)((param_2 & 1) << 2) + *(longlong *)(param_1 + 0x7b0));
  return uVar1;
}



/* ===== 1804742a0 FUN_1804742a0 ===== */

undefined8 FUN_1804742a0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_180cd1e24 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cd1e24 = '\x01';
    DAT_181112408 = FUN_18038eaf0("CCSWeaponBaseVData","m_flCycleTime");
    DAT_18111240c = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
  }
  if ((DAT_18111240c == 0) || (0x7ffffffefffe < *(longlong *)(param_1 + 0x7b0) - 0x10000U)) {
    return 0xffffffff;
  }
  uVar1 = FUN_180011200((ulonglong)DAT_18111240c + *(longlong *)(param_1 + 0x7b0));
  return uVar1;
}



/* ===== 180474340 FUN_180474340 ===== */

longlong FUN_180474340(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if ((((DAT_180961a48 == (code *)0x0) || (0x7ffffffefffe < param_1 - 0x10000U)) ||
      ((int)param_2 < 1)) ||
     (((lVar1 = (*DAT_180961a48)(), 0x7ffffffefffe < lVar1 - 0x10000U || (DAT_180961fd0 == 0)) ||
      ((lVar1 = ((ulonglong)param_2 % (ulonglong)DAT_180961fd0) * (ulonglong)DAT_180961fd4 + lVar1,
       0x7ffffffefffe < lVar1 - 0x10000U || (*(longlong *)(lVar1 + 8) != (longlong)(int)param_2)))))
     ) {
    return 0;
  }
  return lVar1;
}



/* ===== 1804743d0 FUN_1804743d0 ===== */

undefined8 FUN_1804743d0(int *param_1,undefined4 param_2)

{
  float local_res8;
  float fStackX_c;
  
  local_res8 = 0.0;
  fStackX_c = (float)FUN_180512fd0(param_2,&local_res8);
  if (fStackX_c < 0.0) {
    fStackX_c = fStackX_c + DAT_1808ac34c;
    if (fStackX_c < DAT_1808ac34c) {
      local_res8 = local_res8 + DAT_1808acda0;
    }
    else {
      fStackX_c = 0.0;
    }
  }
  fStackX_c = fStackX_c + (float)param_1[1];
  local_res8 = (float)(*param_1 + (int)local_res8);
  if (DAT_1808ac34c <= fStackX_c) {
    fStackX_c = fStackX_c - DAT_1808ac34c;
    local_res8 = (float)((int)local_res8 + 1);
  }
  return CONCAT44(fStackX_c,local_res8);
}



/* ===== 180474460 FUN_180474460 ===== */

undefined8 FUN_180474460(int param_1,float param_2)

{
  float fVar1;
  float local_res10 [2];
  int local_res18;
  float fStackX_1c;
  
  fVar1 = DAT_1808ac34c;
  if ((param_2 < 0.0) || (DAT_1808ac34c <= param_2)) {
    local_res10[0] = 0.0;
    fStackX_1c = (float)FUN_180512fd0(param_2,local_res10);
    if (fStackX_1c < 0.0) {
      fStackX_1c = fStackX_1c + fVar1;
      if (fStackX_1c < fVar1) {
        local_res10[0] = local_res10[0] + DAT_1808acda0;
      }
      else {
        fStackX_1c = 0.0;
      }
    }
    local_res18 = (int)local_res10[0] + param_1;
  }
  else {
    local_res18 = param_1;
    fStackX_1c = param_2;
  }
  return CONCAT44(fStackX_1c,local_res18);
}



/* ===== 1804744f0 FUN_1804744f0 ===== */

void FUN_1804744f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  fVar1 = DAT_1808acbd0;
  if ((*param_1 == 0.0) && (param_1[1] == 0.0)) {
    if (param_1[2] <= 0.0) {
      *param_2 = DAT_1808acaf4;
      *param_3 = 0.0;
    }
    else {
      *param_2 = DAT_1808acba8;
      *param_3 = 0.0;
    }
  }
  else {
    fVar2 = (float)FUN_180516b00(param_1[1]);
    *param_3 = fVar2;
    uVar5 = (uint)param_1[2] ^ DAT_1808adec0;
    fVar2 = *param_1 * *param_1 + param_1[1] * param_1[1];
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_18051af10(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar3 = (float)FUN_180516b00(uVar5,fVar2);
    fVar4 = DAT_1808acb58;
    fVar2 = DAT_1808ac680;
    *param_2 = (fVar3 * DAT_1808acb58) / DAT_1808ac680;
    fVar2 = (*param_3 * fVar4) / fVar2;
    *param_3 = fVar2;
    if (fVar2 < 0.0) {
      *param_3 = fVar2 + fVar1;
    }
    if (*param_2 < 0.0) {
      *param_2 = *param_2 + fVar1;
    }
  }
  fVar4 = DAT_1808ac1f4;
  fVar2 = *param_2;
  fVar3 = (float)FUN_18053f0d0(fVar2 * DAT_1808abfd0 + DAT_1808ac1f4);
  *param_2 = fVar2 - fVar3 * fVar1;
  fVar2 = *param_3;
  fVar4 = (float)FUN_18053f0d0(fVar2 * DAT_1808abfd0 + fVar4);
  *param_3 = fVar2 - fVar4 * fVar1;
  return;
}



/* ===== 180474680 FUN_180474680 ===== */

undefined8 FUN_180474680(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStackX_c;
  float local_res10 [2];
  
  lVar5 = 0x35c;
  if (param_2 == 0) {
    lVar5 = 0x354;
  }
  iVar10 = *(int *)(lVar5 + param_1);
  lVar5 = 0x360;
  if (param_2 == 0) {
    lVar5 = 0x358;
  }
  fVar13 = *(float *)(lVar5 + param_1);
  local_res10[0] = 0.0;
  fVar11 = (float)FUN_180512fd0(*(undefined4 *)(param_1 + 0x36c),local_res10);
  fVar3 = DAT_1808ac34c;
  fVar12 = local_res10[0];
  if (fVar11 < 0.0) {
    fVar11 = fVar11 + DAT_1808ac34c;
    if (fVar11 < DAT_1808ac34c) {
      fVar12 = local_res10[0] + DAT_1808acda0;
    }
    else {
      fVar11 = 0.0;
    }
  }
  fVar13 = fVar13 + fVar11;
  iVar10 = (int)fVar12 + iVar10;
  fVar12 = fVar13;
  if (DAT_1808ac34c <= fVar13) {
    fVar12 = fVar13 - DAT_1808ac34c;
  }
  iVar9 = iVar10 + 2;
  if (DAT_1808ac34c > fVar13) {
    iVar9 = iVar10 + 1;
  }
  if (*(int *)(param_1 + 0x72c) < 1) {
    uVar6 = 0;
    fStackX_c = 0.0;
  }
  else {
    uVar8 = *(int *)(param_1 + 0x72c) + -1 + *(int *)(param_1 + 0x730) & 0x8000001f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    uVar8 = uVar8 + 0x20 & 0x8000001f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    uVar6 = FUN_180474460(*(undefined4 *)(param_1 + 0x62c + (longlong)(int)uVar8 * 8));
    fStackX_c = (float)(uVar6 >> 0x20);
  }
  iVar4 = (int)uVar6;
  if (iVar4 == iVar9) {
    bVar2 = fStackX_c < fVar12;
  }
  else {
    bVar2 = iVar4 < iVar9;
  }
  if (bVar2) {
    iVar1 = iVar10 + -2;
    if (fVar13 < fVar3) {
      iVar1 = iVar10 + -3;
    }
    if (iVar4 == iVar1) {
      bVar2 = fStackX_c < fVar12;
    }
    else {
      bVar2 = iVar4 < iVar1;
    }
    if (bVar2) {
      param_3[1] = (int)fVar12;
      *param_3 = iVar1;
    }
    else {
      fVar12 = fVar12 - fStackX_c;
      iVar9 = iVar9 - iVar4;
      if (fVar12 < 0.0) {
        fVar12 = fVar12 + fVar3;
        if (fVar3 <= fVar12) {
          fVar12 = 0.0;
        }
        else {
          iVar9 = iVar9 + -1;
        }
      }
      uVar7 = FUN_180474460(uVar6 & 0xffffffff,((float)iVar9 + fVar12) * DAT_1808ac000 + fStackX_c);
      *(undefined8 *)param_3 = uVar7;
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



/* ===== 180474850 FUN_180474850 ===== */

ulonglong FUN_180474850(longlong param_1,undefined4 param_2,char param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  float fStackX_24;
  
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    sVar1 = *(short *)(param_1 + 0x7b8);
    if (((DAT_181111c58 & 0xfd) == 0) && (DAT_181111c59 != '\0')) {
      in_RAX = FUN_1804742a0();
      if (((int)in_RAX != 0) || ((sVar1 == 0x1f || (DAT_181111c60 != (char)in_RAX))))
      goto LAB_18047489f;
    }
    else {
      in_RAX = FUN_1804742a0();
    }
    if (((param_3 != '\0') && (sVar1 != 0x40)) &&
       ((1 < *(int *)(param_1 + 0x374) ||
        ((sVar1 != 0x1f && (in_RAX = FUN_1804742a0(param_1), (int)in_RAX == 0)))))) {
      fVar6 = *(float *)(param_1 + 0x358) * DAT_1808ac00c;
      fVar8 = (float)*(int *)(param_1 + 0x354) * DAT_1808ac00c;
      fVar7 = (float)FUN_1804741f0(param_1,param_2);
      fVar6 = fVar7 + fVar8 + fVar6 + DAT_1808ac00c;
      uVar4 = FUN_180474460(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x168));
      local_res8[0] = 0.0;
      fVar7 = (float)FUN_180512fd0(fVar6 * DAT_1808acab0,local_res8);
      fVar6 = local_res8[0];
      if (fVar7 < 0.0) {
        fVar7 = fVar7 + DAT_1808ac34c;
        if (fVar7 < DAT_1808ac34c) {
          fVar6 = local_res8[0] + DAT_1808acda0;
        }
        else {
          fVar7 = 0.0;
        }
      }
      iVar3 = (int)fVar6;
      if ((int)uVar4 == iVar3) {
        fStackX_24 = (float)((ulonglong)uVar4 >> 0x20);
        bVar2 = fStackX_24 < fVar7;
      }
      else {
        bVar2 = (int)uVar4 < iVar3;
      }
      in_RAX = (ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),bVar2);
      if (bVar2 == false) {
        uVar5 = FUN_180474680(param_1,param_2,local_res8);
        return uVar5;
      }
    }
  }
LAB_18047489f:
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1804749e0 FUN_1804749e0 ===== */

float FUN_1804749e0(float param_1)

{
  ulonglong uVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  lVar4 = DAT_181112418;
  lVar3 = DAT_181112410;
  fVar2 = DAT_1808ac014;
  if ((DAT_180cd1e25 != '\0') && (DAT_181112410 != DAT_181112418)) {
    fVar10 = param_1 * DAT_1808ac014;
    uVar8 = FUN_180517790(fVar10);
    uVar9 = FUN_180517200(fVar10);
    fVar10 = (float)FUN_180516b00(uVar8,uVar9);
    uVar5 = 0;
    uVar7 = lVar4 - lVar3 >> 2;
    uVar6 = uVar7;
    while (uVar1 = uVar6, uVar1 != 0) {
      uVar6 = uVar1 >> 1;
      fVar11 = *(float *)(lVar3 + (uVar6 + uVar5) * 4) * fVar2;
      uVar8 = FUN_180517790(fVar11);
      uVar9 = FUN_180517200(fVar11);
      fVar11 = (float)FUN_180516b00(uVar8,uVar9);
      if (fVar11 < fVar10) {
        uVar5 = uVar6 + uVar5 + 1;
        uVar6 = uVar1 + (-1 - uVar6);
      }
    }
    if (uVar5 < uVar7) {
      param_1 = *(float *)(lVar3 + uVar5 * 4);
    }
  }
  return param_1;
}



/* ===== 180474b40 FUN_180474b40 ===== */

void FUN_180474b40(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x850) = DAT_180cf9fa0;
  *(undefined4 *)(param_1 + 0x854) = DAT_180cf9fa4;
  *(undefined4 *)(param_1 + 0x858) = DAT_180cf9fa8;
  *(undefined4 *)(param_1 + 0x85c) = DAT_180cf9fac;
  *(undefined4 *)(param_1 + 0x860) = DAT_180cf9fb0;
  *(undefined4 *)(param_1 + 0x864) = DAT_180cf9fb4;
  *(undefined4 *)(param_1 + 0x868) = DAT_180cf9fb8;
  *(undefined4 *)(param_1 + 0x86c) = DAT_180cf9fbc;
  *(undefined4 *)(param_1 + 0x870) = DAT_180cf9fc0;
  *(undefined1 *)(param_1 + 0x874) = DAT_180cf9fc4;
  *(undefined1 *)(param_1 + 0x875) = DAT_180cf9fc5;
  *(undefined8 *)(param_1 + 0x878) = DAT_180cf9fc8;
  *(undefined8 *)(param_1 + 0x880) = DAT_180cf9fd0;
  if ((undefined8 *)(param_1 + 0x888) != &DAT_180cf9fd8) {
    FUN_1802009d0((undefined8 *)(param_1 + 0x888),DAT_180cf9fd8,
                  (DAT_180cf9fe0 - DAT_180cf9fd8 >> 3) * -0x71c71c71c71c71c7);
  }
  *(undefined4 *)(param_1 + 0x8a0) = DAT_1809f35b0;
  if ((undefined8 *)(param_1 + 0x8a8) != &DAT_1809f35b8) {
    FUN_1804780e0((undefined8 *)(param_1 + 0x8a8),DAT_1809f35b8,
                  (DAT_1809f35c0 - DAT_1809f35b8 >> 2) * -0x7d05f417d05f417d);
  }
  *(undefined8 *)(param_1 + 0x8c0) = DAT_1809f35d0;
  *(undefined8 *)(param_1 + 0x8c8) = DAT_1809f35d8;
  *(undefined1 *)(param_1 + 0x8d0) = DAT_1809f35e0;
  return;
}



/* ===== 180474cc0 FUN_180474cc0 ===== */

undefined4 * FUN_180474cc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    FUN_1804780e0(param_1 + 2,*(longlong *)(param_2 + 2),
                  (*(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2) >> 2) *
                  -0x7d05f417d05f417d);
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



/* ===== 180474d30 FUN_180474d30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180474d30(undefined8 param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
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
  undefined *puVar35;
  undefined *puVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  longlong lVar40;
  float *pfVar41;
  undefined8 uVar42;
  longlong lVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  ulonglong uVar47;
  undefined8 *puVar48;
  ulonglong uVar49;
  longlong lVar50;
  uint uVar51;
  ulonglong uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 local_res10;
  float local_res18;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  uint local_1a8;
  uint uStack_1a0;
  uint uStack_190;
  uint uStack_180;
  uint uStack_170;
  uint local_168;
  uint uStack_160;
  uint uStack_150;
  uint uStack_140;
  uint uStack_130;
  undefined4 uStack_12c;
  ulonglong local_124;
  undefined8 local_118 [2];
  undefined4 local_108;
  int iStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  puVar36 = PTR_DAT_180c8b048;
  if (param_3 == 0) {
    iVar38 = 0;
  }
  else {
    iVar38 = *(int *)(param_3 + 8);
  }
  piVar1 = (int *)(PTR_DAT_180c8b048 + 0x820);
  *piVar1 = 0;
  *(undefined4 *)(puVar36 + 0x824) = 0;
  *(undefined4 *)(puVar36 + 0x83c) = 0xffffffff;
  puVar36[0x84c] = 0;
  puVar35 = PTR_DAT_1809fa7a8;
  fVar60 = DAT_1808ac34c;
  local_res10 = param_2;
  if (puVar36[1] != '\0') {
    if (*(int *)(puVar36 + 0x828) != iVar38) {
      *(undefined8 *)(puVar36 + 0x82c) = *(undefined8 *)(puVar36 + 0x834);
      *(int *)(puVar36 + 0x828) = iVar38;
      if ((DAT_180962018 != 0) && (DAT_180962020 != 0)) {
        uVar37 = FUN_180011200();
        uVar47 = (ulonglong)(uVar37 % 10);
        if (DAT_180962018 + -0x10000 + uVar47 * 0x28 < 0x7ffffffeffff) {
          puVar2 = (undefined4 *)(DAT_180962018 + uVar47 * 0x28);
          local_108 = *puVar2;
          iStack_104 = puVar2[1];
          fStack_100 = (float)puVar2[2];
          uStack_fc = puVar2[3];
          puVar48 = (undefined8 *)(DAT_180962018 + 0x10 + uVar47 * 0x28);
          local_f8 = *puVar48;
          uStack_f0 = puVar48[1];
          local_res10 = CONCAT44(local_res10._4_4_,(float)local_f8);
          iVar44 = (int)((ulonglong)*(undefined8 *)(DAT_180962018 + 8 + uVar47 * 0x28) >> 0x20);
          if ((((0 < iVar44) && (0 < iStack_104)) && (0.0 <= (float)local_f8)) &&
             ((((float)local_f8 < fVar60 && (0.0 <= fStack_100)) && (fStack_100 < fVar60)))) {
            fVar53 = (float)local_f8 - fStack_100;
            iVar44 = iVar44 - iStack_104;
            if (fVar53 < 0.0) {
              fVar53 = fVar53 + fVar60;
              if (fVar60 <= fVar53) {
                fVar53 = 0.0;
              }
              else {
                iVar44 = iVar44 + -1;
              }
            }
            *(float *)(puVar36 + 0x838) = fVar53;
            *(int *)(puVar36 + 0x834) = iVar44;
          }
        }
      }
      iVar44 = *(int *)(puVar36 + 0x82c) + 1;
      if (iVar44 == *(int *)(puVar36 + 0x834)) {
        bVar15 = *(float *)(puVar36 + 0x830) < *(float *)(puVar36 + 0x838);
      }
      else {
        bVar15 = iVar44 < *(int *)(puVar36 + 0x834);
      }
      if (bVar15) {
        *(float *)(puVar36 + 0x838) = *(float *)(puVar36 + 0x830);
        *(int *)(puVar36 + 0x834) = iVar44;
      }
    }
    iVar44 = iVar38;
    do {
      iVar44 = iVar44 + -1;
      if (((iVar44 < iVar38 + -0x96) || (iVar44 < 1)) ||
         (lVar40 = FUN_180474340(param_4,iVar44), lVar40 == 0)) goto LAB_1804750c6;
    } while (((*(int *)(lVar40 + 0x30) < 1) ||
             (0x7ffffffefffe < *(longlong *)(lVar40 + 0x38) - 0x10000U)) ||
            (lVar40 = *(longlong *)
                       (*(longlong *)(lVar40 + 0x38) + (longlong)*(int *)(lVar40 + 0x30) * 8),
            0x7ffffffefffe < lVar40 - 0x10000U));
    if ((*(uint *)(lVar40 + 0x10) & 0x800) != 0) {
      *piVar1 = *(int *)(lVar40 + 0x68);
    }
    if ((*(uint *)(lVar40 + 0x10) & 0x1000) != 0) {
      *(undefined4 *)(puVar36 + 0x824) = *(undefined4 *)(lVar40 + 0x6c);
    }
LAB_1804750c6:
    fVar59 = DAT_1808accac;
    fVar55 = DAT_1808ac294;
    fVar53 = DAT_1808ac108;
    iVar44 = *(int *)(puVar35 + 0x15c);
    if (*piVar1 <= iVar44 + -8) {
      *piVar1 = iVar44 + -1;
      FUN_180273880();
      if (DAT_180cfb2b8 == (code *)0x0) {
        uVar37 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
        uVar37 = uVar37 >> 0x11 ^ uVar37;
        DAT_1809f3584 = uVar37 << 5 ^ uVar37;
        fVar54 = ((float)(DAT_1809f3584 & 0xffff) * fVar53) / fVar59 + fVar55;
      }
      else {
        fVar54 = (float)(*DAT_180cfb2b8)();
      }
      *(float *)(puVar36 + 0x824) = fVar54;
    }
    local_res10 = local_res10 & 0xffffffff00000000;
    local_res18 = (float)FUN_180512fd0();
    if (local_res18 < 0.0) {
      local_res18 = local_res18 + fVar60;
      if (local_res18 < fVar60) {
        local_res10 = CONCAT44(local_res10._4_4_,(float)local_res10 + DAT_1808acda0);
      }
      else {
        local_res18 = 0.0;
      }
    }
    fVar54 = local_res18 - *(float *)(puVar36 + 0x824);
    iVar45 = ((int)(float)local_res10 + 1 + iVar44) - *piVar1;
    if (fVar54 < 0.0) {
      fVar54 = fVar54 + fVar60;
      if (fVar60 <= fVar54) {
        fVar54 = 0.0;
      }
      else {
        iVar45 = iVar45 + -1;
      }
    }
    if (*(int *)(puVar36 + 4) < 0x40) {
      if (DAT_1809f35b8 == DAT_1809f35c0) {
        return;
      }
      uVar47 = 0;
      puVar48 = DAT_1809f35b8;
      if (((longlong)DAT_1809f35c0 - (longlong)DAT_1809f35b8 >> 2) * -0x7d05f417d05f417d != 0) {
        do {
          lVar40 = uVar47 * 0xac;
          if (*(char *)((longlong)puVar48 + lVar40 + 0x20) != '\0') {
            if (uVar47 < 0x10) {
              fVar53 = *(float *)((longlong)puVar48 + lVar40 + 0x1c) - *(float *)(puVar36 + 0x824);
              iVar38 = *(int *)((longlong)puVar48 + lVar40 + 0x18) - *piVar1;
              if (fVar53 < 0.0) {
                fVar53 = fVar53 + fVar60;
                if (fVar60 <= fVar53) {
                  fVar53 = 0.0;
                }
                else {
                  iVar38 = iVar38 + -1;
                }
              }
              *(float *)(puVar36 + uVar47 * 4 + 0x7e0) =
                   ((float)iVar38 + fVar53) / ((float)iVar45 + fVar54);
              puVar48 = DAT_1809f35b8;
            }
            if (puVar36[8] != '\0') {
              *(undefined1 *)((longlong)puVar48 + lVar40 + 0x20) = 0;
              DAT_1809f35e0 = 1;
              puVar48 = DAT_1809f35b8;
            }
          }
          uVar47 = uVar47 + 1;
        } while (uVar47 < (ulonglong)
                          (((longlong)DAT_1809f35c0 - (longlong)puVar48 >> 2) * -0x7d05f417d05f417d)
                );
      }
    }
    else {
      iVar45 = *(int *)(puVar35 + 0x74);
      if ((param_5 - 0x10000U < 0x7ffffffeffff) &&
         (lVar40 = FUN_18000f3a0(param_5 + 0x10), lVar40 - 0x10000U < 0x7ffffffeffff)) {
        uVar37 = FUN_180011200(lVar40 + 0x10);
      }
      else {
        uVar37 = 0;
      }
      uVar37 = iVar45 * iVar38 + (uVar37 & 0x7fff);
      FUN_180273880();
      if (DAT_180cfb2a8 == (code *)0x0) {
        DAT_1809f3584 = uVar37 | 1;
        fVar54 = DAT_180cf9fa8;
        lVar40 = DAT_180cf9fd8;
        lVar43 = DAT_180cf9fe0;
      }
      else {
        (*DAT_180cfb2a8)(uVar37);
        fVar54 = DAT_180cf9fa8;
        lVar40 = DAT_180cf9fd8;
        lVar43 = DAT_180cf9fe0;
      }
      while( true ) {
        lVar50 = DAT_180cf9fe0;
        DAT_180cf9fa8 = fVar54;
        if (lVar40 == DAT_180cf9fe0) break;
        DAT_180cf9fe0 = lVar43;
        *(undefined1 *)(lVar40 + 0x30) = 0;
        fVar54 = DAT_180cf9fa8;
        lVar40 = lVar40 + 0x48;
        lVar43 = DAT_180cf9fe0;
        DAT_180cf9fe0 = lVar50;
      }
      if (DAT_1809f35b8 != DAT_1809f35c0) {
        DAT_1809f35c0 = DAT_1809f35b8;
      }
      DAT_1809f35d0._4_1_ = 0;
      DAT_1809f35d8._4_1_ = 0;
      DAT_1809f35e0 = 1;
      fVar6 = *(float *)(puVar36 + 0x7d8);
      DAT_180cf9fe0 = lVar43;
      FUN_180273880();
      if (DAT_180cfb2b8 == (code *)0x0) {
        uVar37 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
        uVar37 = uVar37 >> 0x11 ^ uVar37;
        DAT_1809f3584 = uVar37 << 5 ^ uVar37;
        fVar55 = ((float)(DAT_1809f3584 & 0xffff) * fVar53) / fVar59 + fVar55;
      }
      else {
        fVar55 = (float)(*DAT_180cfb2b8)();
      }
      FUN_180273880();
      if (DAT_180cfb2b8 == (code *)0x0) {
        uVar37 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
        uVar37 = uVar37 >> 0x11 ^ uVar37;
        DAT_1809f3584 = uVar37 << 5 ^ uVar37;
      }
      else {
        (*DAT_180cfb2b8)();
      }
      uVar47 = FUN_180474460(DAT_1809f35b0);
      local_res10._4_4_ = (float)(uVar47 >> 0x20);
      iVar38 = (int)uVar47 - *(int *)(puVar36 + 0x7dc);
      fVar53 = local_res10._4_4_ - 0.0;
      if (fVar53 < 0.0) {
        fVar53 = fVar53 + fVar60;
        if (fVar60 <= fVar53) {
          fVar53 = 0.0;
        }
        else {
          iVar38 = iVar38 + -1;
        }
      }
      local_res10 = uVar47;
      pfVar41 = (float *)FUN_1804740b0(local_118);
      fVar7 = pfVar41[1];
      fVar8 = *pfVar41;
      fVar9 = pfVar41[2];
      fVar10 = pfVar41[3];
      pfVar41 = (float *)FUN_1804740b0(local_118);
      uVar51 = 0;
      fVar11 = pfVar41[1];
      fVar12 = *pfVar41;
      fVar13 = pfVar41[2];
      fVar14 = pfVar41[3];
      fVar67 = fVar11 * fVar7 + fVar12 * fVar8 + fVar13 * fVar9 + fVar14 * fVar10;
      fVar63 = (float)((uint)fVar67 & _DAT_1808ade90);
      fVar61 = fVar63 * DAT_1808ac6c0;
      fVar70 = fVar63 * _DAT_1808ac128;
      fVar69 = DAT_1808ac390 - fVar63 * _DAT_1808ac690;
      fVar56 = fVar63 * _DAT_1808ac418;
      fVar57 = fVar63 * _DAT_1808ac384;
      uVar37 = DAT_1808adec0;
      do {
        fVar58 = DAT_1808ac030;
        FUN_180273880();
        if (DAT_180cfb2b8 == (code *)0x0) {
          uVar46 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
          uVar46 = uVar46 >> 0x11 ^ uVar46;
          DAT_1809f3584 = uVar46 << 5 ^ uVar46;
          fVar58 = ((float)(DAT_1809f3584 & 0xffff) * DAT_1808ac064) / fVar59 - fVar58;
        }
        else {
          fVar58 = (float)(*DAT_180cfb2b8)();
        }
        fVar59 = fVar60;
        if (uVar51 != 0xf) {
          fVar59 = (float)(int)(uVar51 + 1) * DAT_1808ac090 + fVar58;
        }
        *(float *)(puVar36 + (ulonglong)uVar51 * 4 + 0x7e0) = fVar59;
        fVar58 = fVar55 - *(float *)(puVar36 + 0x824);
        iVar45 = iVar44 - *(int *)(puVar36 + 0x820);
        if (fVar58 < 0.0) {
          fVar58 = fVar58 + fVar60;
          if (fVar60 <= fVar58) {
            fVar58 = 0.0;
          }
          else {
            iVar45 = iVar45 + -1;
          }
        }
        uVar42 = FUN_1804743d0(puVar36 + 0x820,((float)iVar45 + fVar58) * fVar59);
        uStack_1b0 = 0;
        uVar46 = local_1a8 >> 8;
        local_1a8 = local_1a8 & 0xffffff00;
        uStack_1a0 = uStack_1a0 & 0xffffff00;
        uStack_190 = uStack_190 & 0xffffff00;
        uStack_180 = uStack_180 & 0xffffff00;
        uStack_170 = uStack_170 & 0xffffff00;
        local_168 = local_168 & 0xffffff00;
        uStack_160 = uStack_160 & 0xffffff00;
        uStack_150 = uStack_150 & 0xffffff00;
        uStack_140 = uStack_140 & 0xffffff00;
        uStack_130 = uStack_130 & 0xffffff00;
        local_124 = local_124 & 0xffffff0000000000;
        local_res10 = local_res10 & 0xffffffff00000000;
        local_118[0] = uVar42;
        fVar58 = (float)FUN_180512fd0(fVar59 * ((float)iVar38 + fVar53),&local_res10);
        if (fVar58 < 0.0) {
          fVar58 = fVar58 + fVar60;
          if (fVar58 < fVar60) {
            local_res10 = CONCAT44(local_res10._4_4_,(float)local_res10 + DAT_1808acda0);
          }
          else {
            fVar58 = 0.0;
          }
        }
        iVar39 = (int)(float)local_res10;
        uStack_1b4 = CONCAT31(uStack_1b4._1_3_,1);
        iVar45 = *(int *)(puVar36 + 0x7dc);
        if (puVar36[8] == '\0') {
          uStack_1b0 = CONCAT44((int)((ulonglong)local_118[0] >> 0x20),(int)uVar42);
          local_1a8 = CONCAT31((int3)uVar46,1);
        }
        fVar62 = fVar59 - DAT_1808ac1f4;
        fVar64 = (fVar59 - fVar60) * fVar59 * fVar62 *
                 (((((fVar69 + fVar61 * fVar63) - fVar56 * fVar63 * fVar63) * fVar62 * fVar62 +
                   _DAT_1808ac2b0) - fVar57) + fVar70 * fVar63) + fVar59;
        fVar62 = fVar64;
        if (fVar67 <= 0.0) {
          fVar62 = (float)((uint)fVar64 ^ uVar37);
        }
        fVar64 = fVar60 - fVar64;
        fVar68 = fVar8 * fVar64 + fVar12 * fVar62;
        fVar65 = fVar7 * fVar64 + fVar11 * fVar62;
        fVar66 = fVar9 * fVar64 + fVar13 * fVar62;
        fVar62 = fVar10 * fVar64 + fVar14 * fVar62;
        fVar64 = fVar65 * fVar65 + fVar68 * fVar68 + fVar66 * fVar66 + fVar62 * fVar62;
        if (fVar64 == 0.0) {
          fVar68 = 0.0;
          fVar65 = 0.0;
          fVar66 = 0.0;
          fVar62 = fVar60;
        }
        else {
          if (fVar64 < 0.0) {
            fVar64 = (float)FUN_18051af10();
          }
          else {
            fVar64 = SQRT(fVar64);
          }
          fVar64 = fVar60 / fVar64;
          fVar68 = fVar68 * fVar64;
          fVar65 = fVar65 * fVar64;
          fVar66 = fVar66 * fVar64;
          fVar62 = fVar62 * fVar64;
        }
        fVar64 = (fVar66 + fVar66) * fVar66;
        local_118[0] = CONCAT44(local_118[0]._4_4_,fVar64);
        fVar64 = (fVar60 - (fVar65 + fVar65) * fVar65) - fVar64;
        fVar62 = (fVar62 + fVar62) * fVar66 + (fVar68 + fVar68) * fVar65;
        fVar62 = fVar64 * fVar64 + fVar62 * fVar62;
        if (fVar62 < 0.0) {
          fVar62 = (float)FUN_18051af10();
        }
        else {
          fVar62 = SQRT(fVar62);
        }
        uVar37 = DAT_1808adec0;
        local_res10 = CONCAT44(local_res10._4_4_,fVar62);
        fVar62 = (float)FUN_180516b00();
        fVar64 = (float)FUN_180516b00();
        puVar48 = DAT_1809f35c0;
        fVar64 = fVar64 * DAT_1808aca94;
        fVar62 = fVar62 * DAT_1808aca94;
        fVar59 = (fVar54 - fVar6) * fVar59 + fVar6;
        if (DAT_1809f35c0 == DAT_1809f35c8) {
          lVar40 = ((longlong)DAT_1809f35c0 - (longlong)DAT_1809f35b8) / 0x56 +
                   ((longlong)DAT_1809f35c0 - (longlong)DAT_1809f35b8 >> 0x3f);
          lVar40 = (lVar40 >> 1) - (lVar40 >> 0x3f);
          if (lVar40 == 0x17d05f417d05f41) {
                    /* WARNING: Subroutine does not return */
            FUN_1800118d0();
          }
          uVar47 = lVar40 + 1;
          uVar49 = ((longlong)DAT_1809f35c8 - (longlong)DAT_1809f35b8 >> 2) * -0x7d05f417d05f417d;
          if (0x17d05f417d05f41 - (uVar49 >> 1) < uVar49) {
            uVar52 = 0x17d05f417d05f41;
          }
          else {
            uVar49 = (uVar49 >> 1) + uVar49;
            uVar52 = uVar47;
            if (uVar47 <= uVar49) {
              uVar52 = uVar49;
            }
            if (0x17d05f417d05f41 < uVar52) {
                    /* WARNING: Subroutine does not return */
              FUN_18000d840();
            }
          }
          lVar43 = FUN_18000fb70(uVar52 * 0xac);
          lVar40 = lVar40 * 0xac;
          *(undefined8 *)(lVar40 + lVar43) = CONCAT44(fVar64,fVar62);
          ((undefined8 *)(lVar40 + lVar43))[1] = CONCAT44(iVar39 + iVar45,fVar59);
          puVar3 = (undefined8 *)(lVar40 + 0x10 + lVar43);
          *puVar3 = CONCAT44(uStack_1b4,fVar58);
          puVar3[1] = uStack_1b0;
          puVar5 = (ulonglong *)(lVar40 + 0x20 + lVar43);
          *puVar5 = (ulonglong)local_1a8;
          puVar5[1] = CONCAT44(0xffffffff,uStack_1a0);
          puVar3 = (undefined8 *)(lVar40 + 0x30 + lVar43);
          *puVar3 = 0xffffffff;
          puVar3[1] = CONCAT44(0xffffffff,uStack_190);
          puVar3 = (undefined8 *)(lVar40 + 0x40 + lVar43);
          *puVar3 = 0xffffffff;
          puVar3[1] = CONCAT44(0xffffffff,uStack_180);
          puVar3 = (undefined8 *)(lVar40 + 0x50 + lVar43);
          *puVar3 = 0xffffffff;
          puVar3[1] = (ulonglong)uStack_170;
          puVar3 = (undefined8 *)(lVar40 + 0x60 + lVar43);
          *puVar3 = CONCAT44(0xffffffff,local_168);
          puVar3[1] = (ulonglong)uStack_160;
          puVar3 = (undefined8 *)(lVar40 + 0x70 + lVar43);
          *puVar3 = 0;
          puVar3[1] = (ulonglong)uStack_150;
          puVar3 = (undefined8 *)(lVar40 + 0x80 + lVar43);
          *puVar3 = 0;
          puVar3[1] = (ulonglong)uStack_140;
          puVar3 = (undefined8 *)(lVar40 + 0x90 + lVar43);
          *puVar3 = 0;
          puVar3[1] = (ulonglong)uStack_130;
          puVar3 = (undefined8 *)(lVar40 + 0x9c + lVar43);
          *puVar3 = 0;
          puVar3[1] = local_124;
          if (puVar48 == DAT_1809f35c0) {
            lVar50 = (longlong)DAT_1809f35c0 - (longlong)DAT_1809f35b8;
            lVar40 = lVar43;
            puVar48 = DAT_1809f35b8;
          }
          else {
            FUN_180540530(lVar43,DAT_1809f35b8,(longlong)puVar48 - (longlong)DAT_1809f35b8);
            lVar50 = (longlong)DAT_1809f35c0 - (longlong)puVar48;
            lVar40 = lVar40 + 0xac + lVar43;
          }
          FUN_180540530(lVar40,puVar48,lVar50);
          FUN_1802691a0(&DAT_1809f35b8,lVar43,uVar47,uVar52);
        }
        else {
          *DAT_1809f35c0 = CONCAT44(fVar64,fVar62);
          puVar48[1] = CONCAT44(iVar39 + iVar45,fVar59);
          puVar48[2] = CONCAT44(uStack_1b4,fVar58);
          puVar48[3] = uStack_1b0;
          puVar48[4] = (ulonglong)local_1a8;
          puVar48[5] = CONCAT44(0xffffffff,uStack_1a0);
          puVar48[6] = 0xffffffff;
          puVar48[7] = CONCAT44(0xffffffff,uStack_190);
          puVar48[8] = 0xffffffff;
          puVar48[9] = CONCAT44(0xffffffff,uStack_180);
          puVar48[10] = 0xffffffff;
          puVar48[0xb] = (ulonglong)uStack_170;
          puVar48[0xc] = CONCAT44(0xffffffff,local_168);
          puVar48[0xd] = (ulonglong)uStack_160;
          puVar48[0xe] = 0;
          puVar48[0xf] = (ulonglong)uStack_150;
          puVar48[0x10] = 0;
          puVar48[0x11] = (ulonglong)uStack_140;
          puVar48[0x12] = 0;
          puVar48[0x13] = (ulonglong)uStack_130;
          *(undefined8 *)((longlong)puVar48 + 0x9c) = 0;
          *(ulonglong *)((longlong)puVar48 + 0xa4) = local_124;
          DAT_1809f35c0 = (undefined8 *)((longlong)DAT_1809f35c0 + 0xac);
        }
        uVar51 = uVar51 + 1;
        fVar59 = DAT_1808accac;
      } while ((int)uVar51 < 0x10);
      puVar48 = DAT_1809f35b8;
    }
    if (puVar48 == DAT_1809f35c0) {
      return;
    }
    uVar47 = ((longlong)DAT_1809f35c0 - (longlong)puVar48 >> 2) * -0x7d05f417d05f417d;
    iVar38 = (int)uVar47 + -1;
    if (puVar36[8] != '\0') {
      *(int *)(puVar36 + 0x83c) = iVar38;
      return;
    }
    if (*(int *)(puVar36 + 4) < 0x40) {
      FUN_180273880();
      if (DAT_180cfb2b0 == (code *)0x0) {
        if (iVar38 < 1) {
          iVar38 = 0;
        }
        else {
          uVar37 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
          uVar37 = uVar37 >> 0x11 ^ uVar37;
          DAT_1809f3584 = uVar37 << 5 ^ uVar37;
          iVar38 = (int)((ulonglong)DAT_1809f3584 % (uVar47 & 0xffffffff));
        }
      }
      else {
        iVar38 = (*DAT_180cfb2b0)(0,iVar38);
      }
    }
    *(int *)(puVar36 + 0x83c) = iVar38;
    if (*(char *)((longlong)iVar38 * 0xac + 0x20 + (longlong)DAT_1809f35b8) == '\0') {
      return;
    }
    fVar60 = (float)FUN_180273960();
    *(float *)(puVar36 + 0x840) = (fVar60 + DAT_1808accc8) - DAT_1808accc8;
    return;
  }
  *(undefined4 *)(puVar36 + 0x828) = 0xffffffff;
  puVar48 = DAT_1809f35b8;
  lVar40 = (longlong)DAT_1809f35c0 - (longlong)DAT_1809f35b8 >> 2;
  if ((ulonglong)(lVar40 * -0x7d05f417d05f417d) < 2) {
    if ((longlong)DAT_1809f35c0 - (longlong)DAT_1809f35b8 != 0) goto LAB_180474e97;
  }
  else {
    lVar40 = lVar40 * 4;
    puVar3 = (undefined8 *)(lVar40 + -0x1c + (longlong)DAT_1809f35b8);
    uVar42 = *puVar3;
    puVar4 = (undefined8 *)(lVar40 + -0x10 + (longlong)DAT_1809f35b8);
    uVar16 = *puVar4;
    uVar17 = puVar4[1];
    puVar4 = (undefined8 *)(lVar40 + -0x9c + (longlong)DAT_1809f35b8);
    uVar18 = *puVar4;
    uVar19 = puVar4[1];
    puVar4 = (undefined8 *)(lVar40 + -0x8c + (longlong)DAT_1809f35b8);
    uVar20 = *puVar4;
    uVar21 = puVar4[1];
    puVar4 = (undefined8 *)(lVar40 + -0x7c + (longlong)DAT_1809f35b8);
    uVar22 = *puVar4;
    uVar23 = puVar4[1];
    puVar4 = (undefined8 *)(lVar40 + -0x6c + (longlong)DAT_1809f35b8);
    uVar24 = *puVar4;
    uVar25 = puVar4[1];
    puVar4 = (undefined8 *)(lVar40 + -0x5c + (longlong)DAT_1809f35b8);
    uVar26 = *puVar4;
    uVar27 = puVar4[1];
    puVar4 = (undefined8 *)(lVar40 + -0x4c + (longlong)DAT_1809f35b8);
    uVar28 = *puVar4;
    uVar29 = puVar4[1];
    puVar4 = (undefined8 *)(lVar40 + -0x3c + (longlong)DAT_1809f35b8);
    uVar30 = *puVar4;
    uVar31 = puVar4[1];
    puVar4 = (undefined8 *)(lVar40 + -0x2c + (longlong)DAT_1809f35b8);
    uVar32 = *puVar4;
    uVar33 = puVar4[1];
    uStack_130 = (uint)puVar3[1];
    puVar3 = (undefined8 *)(lVar40 + -0xac + (longlong)DAT_1809f35b8);
    uVar34 = puVar3[1];
    uStack_12c = (undefined4)uVar16;
    *DAT_1809f35b8 = *puVar3;
    puVar48[1] = uVar34;
    puVar48[2] = uVar18;
    puVar48[3] = uVar19;
    puVar48[4] = uVar20;
    puVar48[5] = uVar21;
    puVar48[6] = uVar22;
    puVar48[7] = uVar23;
    puVar48[8] = uVar24;
    puVar48[9] = uVar25;
    puVar48[10] = uVar26;
    puVar48[0xb] = uVar27;
    puVar48[0xc] = uVar28;
    puVar48[0xd] = uVar29;
    puVar48[0xe] = uVar30;
    puVar48[0xf] = uVar31;
    puVar48[0x10] = uVar32;
    puVar48[0x11] = uVar33;
    puVar48[0x12] = uVar42;
    puVar48[0x13] = CONCAT44(uStack_12c,uStack_130);
    *(undefined8 *)((longlong)puVar48 + 0x9c) = uVar16;
    *(undefined8 *)((longlong)puVar48 + 0xa4) = uVar17;
  }
  FUN_180477880(&DAT_1809f35b8);
  DAT_1809f35e0 = 1;
LAB_180474e97:
  if (puVar36[8] != '\0') {
    *(undefined1 *)(DAT_1809f35b8 + 4) = 0;
    DAT_1809f35e0 = 1;
  }
  return;
}



/* ===== 180475f60 FUN_180475f60 ===== */

void FUN_180475f60(char *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,float param_5,
                  undefined8 *param_6)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_res8;
  undefined8 local_108;
  float local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  ulonglong uStack_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined1 uStack_b6;
  uint5 uStack_b5;
  
  FUN_1801f7330(&DAT_180cf9fa0,param_1 + 0x850);
  FUN_180474cc0(&DAT_1809f35b0,param_1 + 0x8a0);
  DAT_1809f35e0 = 1;
  uVar7 = FUN_180474460(*(undefined4 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x178));
  iVar13 = *(int *)(param_1 + 0x130);
  local_res8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  fVar23 = local_res8._4_4_;
  iVar12 = (int)uVar7 + -3;
  local_res8 = (undefined8 *)CONCAT44(DAT_1808ac348,iVar13);
  if (iVar13 == iVar12) {
    bVar2 = DAT_1808ac348 < fVar23;
  }
  else {
    bVar2 = iVar13 < iVar12;
  }
  if (bVar2) {
    iVar13 = iVar12;
LAB_180476041:
    local_res8 = (undefined8 *)CONCAT44(fVar23,iVar13);
    fVar20 = fVar23;
  }
  else {
    iVar12 = (int)uVar7 + 1;
    if (iVar12 == iVar13) {
      bVar2 = fVar23 < DAT_1808ac348;
    }
    else {
      bVar2 = iVar12 < iVar13;
    }
    fVar20 = DAT_1808ac348;
    if (bVar2) {
      iVar13 = iVar12;
      goto LAB_180476041;
    }
  }
  if (*(char *)(param_2 + 3) == '\0') {
    puVar9 = local_res8;
  }
  else {
    puVar9 = (undefined8 *)param_2[2];
    local_res8._4_4_ = (float)((ulonglong)puVar9 >> 0x20);
    local_res8._0_4_ = SUB84(puVar9,0);
    fVar20 = local_res8._4_4_;
    iVar13 = (int)(float)local_res8;
  }
  local_res8 = (undefined8 *)0x0;
  if (*(char *)((longlong)param_6 + 0xc) == '\0') {
    local_100 = *(float *)(param_3 + 1) - *(float *)(param_2 + 1);
    local_108 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) - (float)((ulonglong)*param_2 >> 0x20)
                         ,(float)*param_3 - (float)*param_2);
    FUN_1804744f0(&local_108,&local_res8,(longlong)&local_res8 + 4);
    pfVar8 = (float *)FUN_18045a980(&local_108,param_1 + 0x10,iVar13,fVar20);
    fVar23 = pfVar8[2];
    if ((*param_1 == '\0') && (param_1[1] == '\0')) {
      fVar22 = (float)FUN_1804749e0((float)local_res8);
      local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,fVar22);
      fVar18 = (float)FUN_1804749e0(local_res8._4_4_);
      local_res8 = (undefined8 *)CONCAT44(fVar18,(float)local_res8);
    }
    else {
      fVar22 = (float)local_res8 - *pfVar8;
      fVar18 = local_res8._4_4_ - pfVar8[1];
      local_res8 = (undefined8 *)CONCAT44(fVar18,fVar22);
    }
    if (*param_1 == '\0') {
      fVar23 = (float)((uint)fVar23 ^ DAT_1808adec0);
    }
    else {
      fVar23 = 0.0;
    }
  }
  else {
    puVar10 = (undefined8 *)*param_6;
    fVar23 = *(float *)(param_6 + 1);
    local_res8._4_4_ = (float)((ulonglong)puVar10 >> 0x20);
    local_res8._0_4_ = SUB84(puVar10,0);
    fVar22 = (float)local_res8;
    fVar18 = local_res8._4_4_;
    local_res8 = puVar10;
  }
  puVar10 = local_res8;
  cVar5 = param_5._0_1_;
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
    param_6 = (undefined8 *)0x0;
    cVar6 = FUN_180474680(param_1 + 0x10,param_5._0_1_,&param_6);
    if (cVar6 != '\0') {
      puVar9 = param_6;
    }
    iVar13 = (int)puVar9;
    local_res8._4_4_ = (float)((ulonglong)puVar9 >> 0x20);
    fVar20 = local_res8._4_4_;
    local_res8 = puVar9;
  }
  if (DAT_1809f35b8 == DAT_1809f35c0) {
    FUN_180477f30(&DAT_1809f35b8);
  }
  iVar12 = *(int *)(param_1 + 0x83c);
  if ((iVar12 == -1) || ((int)(DAT_1809f35c0 - DAT_1809f35b8 >> 2) * 0x2fa0be83 <= iVar12)) {
    iVar12 = (int)(DAT_1809f35c0 - DAT_1809f35b8 >> 2) * 0x2fa0be83 + -1;
    *(int *)(param_1 + 0x83c) = iVar12;
  }
  lVar15 = DAT_1809f35b8;
  fVar4 = DAT_1808ac34c;
  fVar19 = DAT_180c8a800._4_4_ + (float)param_4[1];
  iVar17 = *param_4 + (int)DAT_180c8a800;
  lVar16 = (longlong)iVar12 * 0xac;
  bVar2 = DAT_1808ac34c <= fVar19;
  if (bVar2) {
    fVar19 = fVar19 - DAT_1808ac34c;
  }
  *(int *)(lVar16 + 0x18 + DAT_1809f35b8) = iVar13;
  iVar13 = iVar17 + 1;
  if (!bVar2) {
    iVar13 = iVar17;
  }
  *(int *)(lVar16 + 0xc + lVar15) = iVar13;
  *(float *)(lVar16 + 8 + lVar15) = fVar23;
  *(float *)(lVar16 + 0x1c + lVar15) = fVar20;
  *(float *)(lVar16 + 0x10 + lVar15) = fVar19;
  *(undefined8 **)(lVar16 + lVar15) = puVar10;
  *(undefined1 *)(lVar16 + 0x20 + lVar15) = 1;
  *(undefined1 *)(lVar16 + 0x14 + lVar15) = 1;
  *(undefined1 *)(lVar16 + 0x78 + lVar15) = 0;
  *(undefined1 *)(lVar16 + 0x60 + lVar15) = 0;
  *(undefined1 *)(lVar16 + 0x68 + lVar15) = 0;
  *(undefined1 *)(lVar16 + 0x88 + lVar15) = 0;
  *(undefined1 *)(lVar16 + 0x98 + lVar15) = 0;
  *(undefined1 *)(lVar16 + 0xa8 + lVar15) = 0;
  *(undefined1 *)(lVar16 + 0x28 + lVar15) = 0;
  *(undefined1 *)(lVar16 + 0x38 + lVar15) = 0;
  *(undefined1 *)(lVar16 + 0x48 + lVar15) = 0;
  *(undefined1 *)(lVar16 + 0x58 + lVar15) = 0;
  if ((char)param_4[2] != '\0') {
    iVar12 = param_4[4];
    iVar17 = param_4[5];
    iVar3 = param_4[6];
    piVar1 = (int *)(lVar16 + 0x2c + lVar15);
    *piVar1 = param_4[3];
    piVar1[1] = iVar12;
    piVar1[2] = iVar17;
    piVar1[3] = iVar3;
    *(undefined1 *)(lVar16 + 0x38 + lVar15) = 1;
    iVar12 = param_4[8];
    iVar17 = param_4[9];
    iVar3 = param_4[10];
    piVar1 = (int *)(lVar16 + 0x3c + lVar15);
    *piVar1 = param_4[7];
    piVar1[1] = iVar12;
    piVar1[2] = iVar17;
    piVar1[3] = iVar3;
    *(undefined1 *)(lVar16 + 0x48 + lVar15) = 1;
    *(int *)(lVar16 + 0x24 + lVar15) = param_4[0xb];
    *(undefined1 *)(lVar16 + 0x28 + lVar15) = 1;
  }
  if (param_1[1] == '\0') {
    DAT_1809f35b0 = iVar13;
  }
  else {
    param_1[0x84c] = '\x01';
    if (*(char *)((longlong)param_2 + 0xc) == '\0') {
      fVar19 = (float)FUN_1804741f0(param_1 + 0x10,cVar5);
      fVar20 = DAT_1808ac0c0;
      if (fVar19 <= DAT_1808ac0c0) {
        fVar20 = fVar19;
      }
      puVar9 = (undefined8 *)
               FUN_180474460(*(undefined4 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x178));
      param_6._4_4_ = (float)((ulonglong)puVar9 >> 0x20);
      fVar19 = param_6._4_4_;
      param_5 = 0.0;
      fVar21 = 0.0;
      if (0.0 <= fVar20 - DAT_1808ac064) {
        fVar21 = fVar20 - DAT_1808ac064;
      }
      param_6 = puVar9;
      fVar20 = (float)FUN_180273960(fVar21,fVar20);
      fVar21 = (float)FUN_180512fd0(fVar20 * DAT_1808acab0,&param_5);
      fVar20 = param_5;
      if (fVar21 < 0.0) {
        fVar21 = fVar21 + fVar4;
        if (fVar21 < fVar4) {
          fVar20 = param_5 + DAT_1808acda0;
        }
        else {
          fVar21 = 0.0;
        }
      }
      fVar19 = fVar19 + fVar21;
      iVar13 = (int)fVar20 + (int)puVar9;
      bVar2 = fVar4 <= fVar19;
      if (bVar2) {
        fVar19 = fVar19 - fVar4;
      }
      *(float *)(param_1 + 0x848) = fVar19;
      iVar12 = iVar13 + 1;
      if (!bVar2) {
        iVar12 = iVar13;
      }
      *(int *)(param_1 + 0x844) = iVar12;
    }
    fVar4 = DAT_1808ac1f4;
    fVar20 = DAT_1808abfd0;
    fVar21 = (float)FUN_18053f0d0(fVar22 * DAT_1808abfd0 + DAT_1808ac1f4);
    fVar19 = DAT_1808acbd0;
    DAT_180cf9fa0 = fVar22 - fVar21 * DAT_1808acbd0;
    fVar22 = (float)FUN_18053f0d0(fVar18 * fVar20 + fVar4);
    DAT_180cf9fa4 = fVar18 - fVar22 * fVar19;
    fVar20 = (float)FUN_18053f0d0(fVar23 * fVar20 + fVar4);
    DAT_180cf9fa8 = fVar23 - fVar20 * fVar19;
  }
  if (param_1[9] == '\0') {
    local_res8 = puVar10;
    if ((*param_1 == '\0') && (param_1[1] == '\0')) {
      local_100 = *(float *)(param_3 + 1) - *(float *)(param_2 + 1);
      local_108 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) -
                           (float)((ulonglong)*param_2 >> 0x20),(float)*param_3 - (float)*param_2);
      FUN_1804744f0(&local_108,&local_res8,(longlong)&local_res8 + 4);
      param_6 = (undefined8 *)CONCAT44(param_6._4_4_,0x42b20000);
      param_5 = -89.0;
      puVar9 = (undefined8 *)&param_5;
      if (DAT_1808ace64 <= (float)local_res8) {
        puVar9 = &local_res8;
      }
      puVar10 = &param_6;
      if ((float)local_res8 <= DAT_1808acaec) {
        puVar10 = puVar9;
      }
      local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,*(undefined4 *)puVar10);
      param_6 = (undefined8 *)CONCAT44(param_6._4_4_,0x43340000);
      param_5 = -180.0;
      puVar9 = (undefined8 *)&param_5;
      if (DAT_1808ace7c <= local_res8._4_4_) {
        puVar9 = (undefined8 *)((longlong)&local_res8 + 4);
      }
      puVar11 = &param_6;
      if (local_res8._4_4_ <= DAT_1808acb58) {
        puVar11 = puVar9;
      }
      local_res8 = (undefined8 *)CONCAT44(*(undefined4 *)puVar11,*(undefined4 *)puVar10);
    }
    puVar9 = local_res8;
    if (((DAT_180962170 != 0) && (DAT_180961a38 != 0)) &&
       (puVar10 = (undefined8 *)FUN_180264580(), puVar10 + -0x2000 < (undefined8 *)0x7ffffffeffff))
    {
      *puVar10 = puVar9;
      *(undefined4 *)(puVar10 + 1) = 0;
    }
  }
  puVar9 = DAT_180cf9fe0;
  DAT_1809f35d0._4_1_ = 0;
  DAT_1809f35d8._4_1_ = 0;
  if (cVar5 == '\0') {
    DAT_180cf9fc8 = DAT_180cf9fc8 | 1;
    if (*(char *)((longlong)param_2 + 0xc) == '\0') {
      DAT_1809f35d0._0_4_ = *(undefined4 *)(param_1 + 0x83c);
      DAT_1809f35d0._5_2_ = param_6._5_2_;
      DAT_1809f35d0._7_1_ = param_6._7_1_;
      DAT_1809f35d0._4_1_ = 1;
    }
  }
  else {
    DAT_180cf9fc8 = DAT_180cf9fc8 & 0xfffffffffffffffe | 0x800;
    if (*(char *)((longlong)param_2 + 0xc) == '\0') {
      DAT_1809f35d8._0_4_ = *(undefined4 *)(param_1 + 0x83c);
      DAT_1809f35d8._5_2_ = param_6._5_2_;
      DAT_1809f35d8._7_1_ = param_6._7_1_;
      DAT_1809f35d8._4_1_ = 1;
    }
  }
  if (*(short *)(param_1 + 0x7c8) != 0x40) {
    if (*(char *)(param_2 + 4) == '\0') {
      return;
    }
    if (0x20 < ((longlong)DAT_180cf9fe0 - (longlong)DAT_180cf9fd8 >> 3) * -0x71c71c71c71c71c7 + 2U)
    {
      return;
    }
    uVar14 = 1;
    if (cVar5 != '\0') {
      uVar14 = 0x800;
    }
    puVar10 = DAT_180cf9fd8;
    if (DAT_180cf9fd8 != DAT_180cf9fe0) {
      do {
        if ((uVar14 & *(uint *)(puVar10 + 1)) != 0) break;
        puVar10 = puVar10 + 9;
      } while (puVar10 != DAT_180cf9fe0);
      if (puVar10 != DAT_180cf9fe0) {
        puVar11 = puVar10 + 9;
        if (puVar11 != DAT_180cf9fe0) {
          do {
            if ((uVar14 & *(uint *)(puVar11 + 1)) == 0) {
              uVar7 = puVar11[1];
              *puVar10 = *puVar11;
              puVar10[1] = uVar7;
              uVar7 = puVar11[3];
              puVar10[2] = puVar11[2];
              puVar10[3] = uVar7;
              uVar7 = puVar11[5];
              puVar10[4] = puVar11[4];
              puVar10[5] = uVar7;
              uVar7 = puVar11[7];
              puVar10[6] = puVar11[6];
              puVar10[7] = uVar7;
              puVar10[8] = puVar11[8];
              puVar10 = puVar10 + 9;
            }
            puVar11 = puVar11 + 9;
          } while (puVar11 != puVar9);
          if (puVar10 == puVar9) goto LAB_180476811;
        }
        lVar15 = (longlong)DAT_180cf9fe0 - (longlong)puVar9;
        FUN_180540530(puVar10,puVar9,lVar15);
        DAT_180cf9fe0 = (undefined8 *)(lVar15 + (longlong)puVar10);
      }
    }
LAB_180476811:
    puVar9 = DAT_180cf9fe0;
    local_f8 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    local_d8 = local_d8 & 0xffffff00;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_c8 = local_c8 & 0xffffff00;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_b8 = 0;
    uStack_b6 = 0;
    local_e8 = CONCAT31(local_e8._1_3_,1);
    if (DAT_180cf9fe0 == DAT_180cf9fe8) {
      uStack_f0 = uVar14;
      FUN_18008c530(&DAT_180cf9fd8,DAT_180cf9fe0,&local_f8);
      return;
    }
    *DAT_180cf9fe0 = CONCAT44(uStack_f4,local_f8);
    puVar9[1] = uVar14;
    puVar9[2] = (ulonglong)local_e8;
    puVar9[3] = 0;
    puVar9[4] = (ulonglong)local_d8;
    puVar9[5] = 0;
    puVar9[6] = (ulonglong)local_c8;
    puVar9[7] = 0;
    puVar9[8] = (ulonglong)uStack_b5 << 0x18;
    DAT_180cf9fe0 = DAT_180cf9fe0 + 9;
    return;
  }
  puVar10 = DAT_180cf9fd8;
  if (DAT_180cf9fd8 != DAT_180cf9fe0) {
    do {
      if ((*(ushort *)(puVar10 + 1) & 0x801) != 0) break;
      puVar10 = puVar10 + 9;
    } while (puVar10 != DAT_180cf9fe0);
    if (puVar10 != DAT_180cf9fe0) {
      puVar11 = puVar10 + 9;
      if (puVar11 == DAT_180cf9fe0) goto LAB_18047671b;
      do {
        if ((*(ushort *)(puVar11 + 1) & 0x801) == 0) {
          uVar7 = puVar11[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar7;
          uVar7 = puVar11[3];
          puVar10[2] = puVar11[2];
          puVar10[3] = uVar7;
          uVar7 = puVar11[5];
          puVar10[4] = puVar11[4];
          puVar10[5] = uVar7;
          uVar7 = puVar11[7];
          puVar10[6] = puVar11[6];
          puVar10[7] = uVar7;
          puVar10[8] = puVar11[8];
          puVar10 = puVar10 + 9;
        }
        puVar11 = puVar11 + 9;
      } while (puVar11 != puVar9);
    }
  }
  if (puVar10 == puVar9) {
    return;
  }
LAB_18047671b:
  lVar15 = (longlong)DAT_180cf9fe0 - (longlong)puVar9;
  FUN_180540530(puVar10,puVar9,lVar15);
  DAT_180cf9fe0 = (undefined8 *)(lVar15 + (longlong)puVar10);
  return;
}



/* ===== 1804768c0 FUN_1804768c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804768c0(longlong param_1,undefined8 *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [12];
  ulonglong uVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
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
  float local_res8 [2];
  undefined8 local_res10;
  float local_res20 [2];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104 [3];
  float local_f8;
  undefined1 auStack_f4 [12];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  fVar15 = (float)*(undefined8 *)(param_1 + 0x10);
  local_d8 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar12 = (float)*param_2;
  local_e8 = (float)((ulonglong)*param_2 >> 0x20);
  fVar18 = fVar12 - fVar15;
  fVar19 = local_e8 - local_d8;
  fVar21 = *(float *)(param_2 + 1) - *(float *)(param_1 + 0x18);
  fVar11 = fVar19 * fVar19 + fVar18 * fVar18 + fVar21 * fVar21;
  fStack_e4 = local_e8;
  fStack_e0 = local_e8;
  fStack_dc = local_e8;
  fStack_d4 = local_d8;
  fStack_d0 = local_d8;
  fStack_cc = local_d8;
  if (fVar11 < 0.0) {
    fVar11 = (float)FUN_18051af10(fVar11);
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  auVar2 = auStack_f4;
  fVar8 = DAT_1808ac34c;
  if (0.0 < fVar11) {
    fVar11 = DAT_1808ac34c / fVar11;
    fVar18 = fVar18 * fVar11;
    fVar21 = fVar21 * fVar11;
    fVar19 = fVar19 * fVar11;
    auStack_f4._0_4_ = fVar19;
    local_f8 = fVar18;
    fVar11 = fVar19 * fVar19 + fVar18 * fVar18;
    auStack_f4._8_4_ = auVar2._8_4_;
    auStack_f4._4_4_ = fVar21;
    local_118 = fVar21;
    if (fVar11 < 0.0) {
      fVar11 = (float)FUN_18051af10(fVar11);
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    if (fVar11 < DAT_1808abfbc) {
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar11 = fVar8;
    }
    else {
      fVar11 = fVar8 / fVar11;
      fVar14 = fVar11 * (float)((uint)fVar19 ^ DAT_1808adec0);
      fVar13 = fVar11 * 0.0;
      fVar11 = fVar11 * fVar18;
    }
    fVar16 = (fVar11 * DAT_1808acae0 + local_e8) - local_d8;
    fVar11 = (fVar13 * DAT_1808acae0 + *(float *)(param_2 + 1)) - *(float *)(param_1 + 0x18);
    fVar15 = (fVar14 * DAT_1808acae0 + fVar12) - fVar15;
    fVar12 = fVar16 * fVar16 + fVar15 * fVar15 + fVar11 * fVar11;
    if (fVar12 < 0.0) {
      fVar12 = (float)FUN_18051af10(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    if (0.0 < fVar12) {
      fVar12 = fVar8 / fVar12;
      fVar15 = fVar15 * fVar12;
      fVar16 = fVar16 * fVar12;
      fVar11 = fVar11 * fVar12;
    }
    if (fVar8 <= (float)((uint)(fVar19 * fVar16 + fVar18 * fVar15 + fVar21 * fVar11) &
                        _DAT_1808ade90)) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = (float)FUN_18053eb30();
      fVar15 = fVar15 * DAT_1808aca94;
    }
    fVar12 = DAT_1808ac014;
    local_10c = DAT_1808ac900;
    if (DAT_1808ac900 <= DAT_1808aca64 - fVar15) {
      local_10c = DAT_1808aca64 - fVar15;
    }
    local_10c = local_10c * DAT_1808ac014;
    fVar13 = (float)FUN_180517200(local_10c);
    fVar15 = *param_3;
    local_res20[0] = fVar13;
    fVar14 = (float)FUN_180517200(fVar15 * fVar12);
    fVar11 = param_3[1];
    local_res8[0] = (float)FUN_180517200(fVar11 * fVar12);
    local_res8[0] = local_res8[0] * fVar14;
    fVar11 = (float)FUN_180517790(fVar11 * fVar12);
    fVar11 = fVar11 * fVar14;
    uVar7 = FUN_180517790(fVar15 * fVar12);
    fVar15 = (float)(uVar7 ^ DAT_1808adec0);
    if (fVar11 * fVar19 + local_res8[0] * fVar18 + fVar15 * fVar21 <= fVar13) {
      uVar1 = DAT_1808acb50;
      if (DAT_181111c78 != '\0') {
        uVar1 = DAT_181111c74;
      }
      local_res10 = CONCAT44(local_res10._4_4_,uVar1);
      fVar14 = fVar15 * fVar19 - fVar11 * fVar21;
      local_114 = local_res8[0] * fVar21 - fVar15 * fVar18;
      local_110 = fVar11 * fVar18 - local_res8[0] * fVar19;
      fVar15 = local_114 * local_114 + fVar14 * fVar14 + local_110 * local_110;
      local_res8[0] = fVar14;
      if (fVar15 < 0.0) {
        fVar15 = (float)FUN_18051af10(fVar15);
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      local_108 = 0.0;
      local_104[0] = 0.0;
      if (0.0 < fVar15) {
        fVar15 = fVar8 / fVar15;
        fVar17 = fVar15 * local_110;
        fVar16 = fVar15 * local_res8[0];
        fVar15 = fVar15 * local_114;
        fVar11 = (float)FUN_180517790(local_10c);
        fVar14 = (fVar15 * fVar19 + fVar16 * fVar18 + fVar17 * fVar21) * (fVar8 - fVar13);
        local_e8 = fVar14 * fVar16 + (fVar15 * fVar21 - fVar17 * fVar19) * fVar11 + fVar18 * fVar13;
        fStack_e4 = fVar14 * fVar15 + (fVar17 * fVar18 - fVar16 * fVar21) * fVar11 + fVar19 * fVar13
        ;
        fStack_e0 = fVar14 * fVar17 + (fVar16 * fVar19 - fVar15 * fVar18) * fVar11 + fVar21 * fVar13
        ;
        FUN_1804744f0(&local_e8,&local_108,local_104);
      }
      FUN_1804744f0(&local_f8,&local_10c,local_res8);
      fVar21 = DAT_1808acbd0;
      fVar11 = DAT_1808ac1f4;
      fVar15 = DAT_1808abfd0;
      fVar13 = local_res8[0];
      if (local_res8[0] < 0.0) {
        fVar13 = local_res8[0] + DAT_1808acbd0;
      }
      fVar13 = fVar13 - DAT_1808acb58;
      fVar16 = (float)FUN_18053f0d0(fVar13 * DAT_1808abfd0 + DAT_1808ac1f4);
      fVar14 = local_10c;
      fVar13 = fVar13 - fVar16 * fVar21;
      if (DAT_1808ace58 < *param_3 || DAT_1808ace58 == *param_3) {
        local_res8[0] = DAT_1808acaf0;
      }
      else {
        local_res8[0] = (float)((uint)(float)local_res10 ^ DAT_1808adec0);
      }
      fVar16 = (float)FUN_18053f0d0(local_10c * fVar15 + fVar11);
      fVar15 = (float)local_res10;
      fVar14 = fVar14 - fVar16 * fVar21;
      fVar16 = 0.0;
      if (0.0 <= fVar14) {
        fVar16 = fVar14;
      }
      fVar16 = DAT_1808acb58 - fVar16;
      if (fVar16 <= (float)local_res10) {
        if (fVar16 <= local_res8[0]) {
          fVar16 = local_res8[0];
        }
      }
      else {
        fVar16 = (float)local_res10;
      }
      uVar3 = FUN_180474460(*(undefined4 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x178));
      local_res10._4_4_ = (undefined4)(uVar3 >> 0x20);
      uVar1 = local_res10._4_4_;
      local_res10 = uVar3;
      pfVar4 = (float *)FUN_18045a980(&local_f8,param_1 + 0x10,uVar3 & 0xffffffff,uVar1);
      fVar14 = fVar16 + *pfVar4;
      if (local_res8[0] <= fVar14) {
        if (fVar15 < fVar14) {
          fVar16 = fVar16 - (fVar14 - fVar15);
        }
      }
      else {
        fVar16 = (local_res8[0] - fVar14) + fVar16;
      }
      local_res8[0] = fVar16;
      fVar14 = (float)FUN_180517200(fVar16 * fVar12);
      fVar15 = fVar13 * DAT_1808ac014;
      uVar7 = FUN_180517790(fVar16 * fVar12);
      local_res10 = CONCAT44(local_res10._4_4_,(float)(uVar7 ^ DAT_1808adec0) * local_118);
      fVar12 = (float)FUN_180517200(fVar15);
      fVar16 = (float)FUN_180517790(fVar15);
      fVar15 = DAT_1808abfd0;
      if (local_res20[0] < fVar16 * fVar14 * fVar19 + fVar12 * fVar14 * fVar18 + (float)local_res10)
      {
        if ((*(char *)(param_1 + 0x2d8) == '\0') || (*(char *)(param_1 + 0x358) != '\0')) {
          fVar12 = param_3[1];
          fVar16 = (float)FUN_18053f0d0(fVar12 * DAT_1808abfd0 + fVar11);
          fVar12 = fVar12 - fVar16 * fVar21;
          local_114 = fVar12 - fVar13;
          local_110 = fVar12;
          fVar15 = (float)FUN_18053f0d0(local_114 * fVar15 + fVar11);
          local_114 = local_114 - fVar15 * fVar21;
          local_f8 = (float)((uint)local_114 & _DAT_1808ade90);
          auStack_f4 = (undefined1  [12])0x0;
          if (fVar8 < local_f8) {
            fVar12 = fVar12 * DAT_1808ac014;
            fVar15 = (float)FUN_180517200(fVar12);
            fVar12 = (float)FUN_180517790(fVar12);
            if (fVar12 * fVar14 * fVar19 + fVar15 * fVar14 * fVar18 + (float)local_res10 <=
                local_res20[0]) {
              if (local_114 <= 0.0) {
                fVar8 = DAT_1808acda0;
              }
              iVar6 = 1;
              local_118 = fVar8 * fVar11;
              fVar15 = 0.0;
              while( true ) {
                fVar12 = DAT_1808abfd0;
                local_114 = local_118 * (float)iVar6;
                fVar17 = local_114 + fVar13;
                fVar16 = (float)FUN_18053f0d0(fVar17 * DAT_1808abfd0 + fVar11);
                fVar17 = fVar17 - fVar16 * fVar21;
                fVar21 = local_110 - fVar17;
                fVar12 = (float)FUN_18053f0d0(fVar21 * fVar12 + fVar11);
                fVar17 = fVar17 * DAT_1808ac014;
                fVar20 = (float)((uint)(fVar21 - fVar12 * DAT_1808acbd0) & _DAT_1808ade90);
                fVar21 = (float)FUN_180517200(fVar17);
                fVar16 = (float)FUN_180517790(fVar17);
                fVar12 = local_114;
                if (((fVar16 * fVar14 * fVar19 + fVar21 * fVar14 * fVar18 + (float)local_res10 <=
                      local_res20[0]) || (local_f8 < fVar20)) ||
                   (fVar15 = local_114, fVar20 <= fVar11)) goto LAB_180477187;
                iVar6 = iVar6 + 1;
                local_f8 = fVar20;
                if (0x5a < iVar6) break;
                fVar21 = DAT_1808acbd0;
              }
              fVar12 = fVar8 * DAT_1808aca68;
LAB_180477187:
              iVar6 = 2;
              do {
                fVar21 = (fVar12 + fVar15) * fVar11;
                fVar8 = (float)FUN_18053f0d0((fVar21 + fVar13) * DAT_1808abfd0 + fVar11);
                fVar16 = ((fVar21 + fVar13) - fVar8 * DAT_1808acbd0) * DAT_1808ac014;
                fVar8 = (float)FUN_180517200(fVar16);
                fVar16 = (float)FUN_180517790(fVar16);
                if (local_res20[0] <
                    fVar16 * fVar14 * fVar19 + fVar8 * fVar14 * fVar18 + (float)local_res10) {
                  fVar15 = fVar21;
                  fVar21 = fVar12;
                }
                fVar12 = (fVar21 + fVar15) * fVar11;
                fVar8 = (float)FUN_18053f0d0((fVar12 + fVar13) * DAT_1808abfd0 + fVar11);
                fVar16 = ((fVar12 + fVar13) - fVar8 * DAT_1808acbd0) * DAT_1808ac014;
                fVar8 = (float)FUN_180517200(fVar16);
                fVar16 = (float)FUN_180517790(fVar16);
                if (local_res20[0] <
                    fVar16 * fVar14 * fVar19 + fVar8 * fVar14 * fVar18 + (float)local_res10) {
                  fVar15 = fVar12;
                  fVar12 = fVar21;
                }
                fVar21 = (fVar12 + fVar15) * fVar11;
                fVar8 = (float)FUN_18053f0d0((fVar21 + fVar13) * DAT_1808abfd0 + fVar11);
                fVar16 = ((fVar21 + fVar13) - fVar8 * DAT_1808acbd0) * DAT_1808ac014;
                fVar8 = (float)FUN_180517200(fVar16);
                fVar16 = (float)FUN_180517790(fVar16);
                if (local_res20[0] <
                    fVar16 * fVar14 * fVar19 + fVar8 * fVar14 * fVar18 + (float)local_res10) {
                  fVar15 = fVar21;
                  fVar21 = fVar12;
                }
                fVar8 = (fVar21 + fVar15) * fVar11;
                fVar12 = (float)FUN_18053f0d0((fVar8 + fVar13) * DAT_1808abfd0 + fVar11);
                fVar16 = ((fVar8 + fVar13) - fVar12 * DAT_1808acbd0) * DAT_1808ac014;
                fVar12 = (float)FUN_180517200(fVar16);
                fVar16 = (float)FUN_180517790(fVar16);
                if (local_res20[0] <
                    fVar16 * fVar14 * fVar19 + fVar12 * fVar14 * fVar18 + (float)local_res10) {
                  fVar15 = fVar8;
                  fVar8 = fVar21;
                }
                fVar12 = (fVar8 + fVar15) * fVar11;
                fVar21 = (float)FUN_18053f0d0((fVar12 + fVar13) * DAT_1808abfd0 + fVar11);
                fVar16 = ((fVar12 + fVar13) - fVar21 * DAT_1808acbd0) * DAT_1808ac014;
                fVar21 = (float)FUN_180517200(fVar16);
                fVar16 = (float)FUN_180517790(fVar16);
                if (local_res20[0] <
                    fVar16 * fVar14 * fVar19 + fVar21 * fVar14 * fVar18 + (float)local_res10) {
                  fVar15 = fVar12;
                  fVar12 = fVar8;
                }
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              fVar12 = (float)FUN_18053f0d0((fVar15 + fVar13) * DAT_1808abfd0 + fVar11);
              local_110 = (fVar15 + fVar13) - fVar12 * DAT_1808acbd0;
            }
          }
          fVar12 = DAT_1808ace68;
          fVar15 = DAT_1808ac014;
          local_res20[0] = *param_3;
          local_118 = 89.9;
          local_res10._0_4_ = -89.9;
          pfVar4 = (float *)&local_res10;
          if (DAT_1808ace68 <= local_res20[0]) {
            pfVar4 = local_res20;
          }
          pfVar5 = &local_118;
          if (local_res20[0] <= DAT_1808acaf0) {
            pfVar5 = pfVar4;
          }
          fVar21 = *pfVar5 * DAT_1808ac014;
          fVar18 = (float)FUN_180517200(fVar21);
          fVar11 = param_3[1];
          fVar19 = (float)FUN_180517200(fVar11 * fVar15);
          local_10c = (float)FUN_180517790(fVar11 * fVar15);
          local_10c = local_10c * fVar18;
          uVar9 = FUN_180517790(fVar21);
          uVar7 = DAT_1808adec0;
          fVar11 = DAT_1808acaf0;
          local_118 = 89.9;
          fVar21 = (float)(uVar9 ^ DAT_1808adec0);
          local_res10._0_4_ = -89.9;
          local_res20[0] = local_108;
          pfVar4 = (float *)&local_res10;
          if (fVar12 <= local_108) {
            pfVar4 = local_res20;
          }
          pfVar5 = &local_118;
          if (local_108 <= DAT_1808acaf0) {
            pfVar5 = pfVar4;
          }
          fVar8 = *pfVar5;
          fVar13 = (float)FUN_180517200(fVar8 * fVar15);
          local_118 = 89.9;
          local_res10 = CONCAT44(local_res10._4_4_,0xc2b3cccd);
          local_res20[0] = local_res8[0];
          fVar14 = local_104[0] * fVar15;
          pfVar4 = (float *)&local_res10;
          if (fVar12 <= local_res8[0]) {
            pfVar4 = local_res20;
          }
          pfVar5 = &local_118;
          if (local_res8[0] <= fVar11) {
            pfVar5 = pfVar4;
          }
          fVar12 = *pfVar5;
          fVar11 = (float)FUN_180517200(fVar12 * fVar15);
          fVar17 = local_110 * fVar15;
          uVar9 = FUN_180517790(fVar12 * fVar15);
          fVar16 = (float)FUN_180517200(fVar17);
          fVar17 = (float)FUN_180517790(fVar17);
          fVar12 = local_10c;
          fVar20 = fVar17 * fVar11 * local_10c;
          uVar10 = FUN_180517790(fVar8 * fVar15);
          fVar17 = (float)(uVar10 ^ DAT_1808adec0);
          fVar15 = (float)FUN_180517200(fVar14);
          fVar8 = (float)FUN_180517790(fVar14);
          fVar12 = (fVar8 * fVar13 * fVar12 + fVar15 * fVar13 * fVar19 * fVar18 + fVar17 * fVar21) -
                   DAT_1808ac118;
          fVar15 = DAT_1808acda0;
          if (DAT_1808acda0 <= fVar12) {
            fVar15 = fVar12;
          }
          if (fVar15 <= fVar20 + fVar16 * fVar11 * fVar19 * fVar18 + (float)(uVar9 ^ uVar7) * fVar21
             ) {
            *param_3 = local_res8[0];
            local_104[0] = local_110;
          }
          else {
            *param_3 = local_108;
          }
          param_3[1] = local_104[0];
        }
        else {
          *param_3 = local_res8[0];
          param_3[1] = fVar13;
        }
      }
      else {
        *param_3 = local_108;
        param_3[1] = local_104[0];
      }
      param_3[2] = 0.0;
    }
  }
  return;
}



/* ===== 1804776e0 FUN_1804776e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804776e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  PTP_WORK pwk;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_f0 [24];
  longlong local_d8 [2];
  undefined1 local_c8 [120];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_138;
  lVar3 = param_3 - param_2 >> 3;
  local_110 = lVar3;
  if (0x20 < lVar3) {
    uVar1 = FUN_1804ec6b0();
    if (1 < uVar1) {
      local_d8[0] = param_2;
      FUN_1804787b0(local_c8,(ulonglong)uVar1);
      pwk = CreateThreadpoolWork(FUN_180478a60,local_d8,(PTP_CALLBACK_ENVIRON)0x0);
      if (pwk == (PTP_WORK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180473c60();
      }
      FUN_1804783f0(local_c8,local_f0);
      FUN_1804ec640(pwk,(ulonglong)uVar1 - 1);
      local_108 = 0;
      local_100 = lVar3;
      local_f8 = lVar3;
      do {
        FUN_180477a30(param_2,local_118,local_f0,&local_108);
        do {
          iVar2 = FUN_180478270(local_f0,&local_108);
        } while (iVar2 == 1);
      } while (iVar2 != 2);
      WaitForThreadpoolWorkCallbacks(pwk,1);
      CloseThreadpoolWork(pwk);
      FUN_1800132b0(local_50);
      FUN_180478720(local_c8);
      return;
    }
  }
  FUN_180477de0(param_2,param_3,lVar3,local_118);
  return;
}



/* ===== 180477880 FUN_180477880 ===== */

/* WARNING: Removing unreachable block (ram,0x0001804779a5) */
/* WARNING: Removing unreachable block (ram,0x0001804779b4) */
/* WARNING: Removing unreachable block (ram,0x0001804779f7) */

void FUN_180477880(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  lVar3 = *param_1;
  lVar4 = lVar2 - lVar3 >> 2;
  if (1 < (ulonglong)(lVar4 * -0x7d05f417d05f417d)) {
    param_1[1] = lVar3 + 0xac;
    return;
  }
  if (lVar4 * -0x7d05f417d05f417d == 0) {
    if ((param_1[2] - lVar3 >> 2) * -0x7d05f417d05f417d != 0) {
      for (lVar3 = lVar4 * 0x7d05f417d05f417d + 1; lVar3 != 0; lVar3 = lVar3 + -1) {
        FUN_180540170(lVar2,0,0xac);
        FUN_1804794f0(lVar2);
        lVar2 = lVar2 + 0xac;
      }
      param_1[1] = lVar2;
      return;
    }
    lVar1 = FUN_18000fb70(0xac);
    lVar2 = lVar4 * 4 + lVar1;
    for (lVar3 = lVar4 * 0x7d05f417d05f417d + 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_180540170(lVar2,0,0xac);
      FUN_1804794f0(lVar2);
      lVar2 = lVar2 + 0xac;
    }
    FUN_180540530(lVar1,*param_1,param_1[1] - *param_1);
    FUN_1802691a0(param_1,lVar1,1,1);
  }
  return;
}



/* ===== 180477a00 FUN_180477a00 ===== */

void FUN_180477a00(longlong param_1)

{
  FUN_1800132b0(param_1 + 0x88);
  FUN_180478720(param_1 + 0x10);
  return;
}



/* ===== 180477a30 FUN_180477a30 ===== */

longlong * FUN_180477a30(longlong param_1,undefined1 param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  longlong local_50;
  longlong local_48;
  
  do {
    do {
      while( true ) {
        lVar11 = param_4[1];
        lVar16 = param_1 + *param_4 * 8;
        lVar21 = lVar11 * 8 + lVar16;
        if (lVar11 < 0x21) break;
        lVar18 = param_4[2];
        if (lVar18 < 1) {
          FUN_180478610(lVar16,lVar21,param_2);
          FUN_180478680(lVar16,lVar21,param_2);
          goto LAB_180477d0a;
        }
        lVar11 = lVar16 + (lVar11 * 8 >> 4) * 8;
        FUN_180478cd0(lVar16,lVar11,lVar21 + -8,param_2);
        FUN_180478fb0(&local_50,lVar16,lVar11,lVar21);
        lVar11 = lVar18;
        if (lVar18 < 0) {
          lVar11 = lVar18 + 3;
        }
        if (lVar18 < 0) {
          lVar18 = lVar18 + 1;
        }
        lVar11 = (lVar11 >> 2) + (lVar18 >> 1);
        param_4[1] = local_50 - lVar16 >> 3;
        param_4[2] = lVar11;
        lVar16 = local_48 - param_1;
        lVar21 = lVar21 - local_48;
        param_3[2] = param_3[2] + (local_48 - local_50 >> 3);
        puVar19 = (ulonglong *)(*param_3 * 0x80 + *(longlong *)param_3[1]);
        uVar15 = *puVar19;
        if (uVar15 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_180473c60();
        }
        uVar20 = puVar19[1];
        plVar5 = (longlong *)puVar19[2];
        if ((ulonglong)(1L << ((byte)*plVar5 & 0x3f)) <= uVar15 - uVar20) {
          uVar17 = *plVar5 + 1;
          if (0x1f < uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_180473c60();
          }
          if (0xaaaaaaaaaaaaaa9 < (ulonglong)(1L << ((byte)uVar17 & 0x3f))) {
                    /* WARNING: Subroutine does not return */
            FUN_180473c60();
          }
          puVar12 = (ulonglong *)FUN_1804ecaa0((0x18L << ((byte)uVar17 & 0x3f)) + 0x10);
          *puVar12 = uVar17;
          *(undefined4 *)(puVar12 + 1) = 1;
          for (; uVar20 < uVar15; uVar20 = uVar20 + 1) {
            uVar13 = (1L << ((byte)*plVar5 & 0x3f)) - 1U & uVar20;
            uVar17 = plVar5[uVar13 * 3 + 4];
            uVar14 = (1L << ((byte)*puVar12 & 0x3f)) - 1U & uVar20;
            plVar2 = plVar5 + uVar13 * 3 + 2;
            uVar7 = *(undefined4 *)((longlong)plVar2 + 4);
            lVar18 = plVar2[1];
            uVar8 = *(undefined4 *)((longlong)plVar2 + 0xc);
            puVar3 = puVar12 + uVar14 * 3 + 2;
            *(int *)puVar3 = (int)*plVar2;
            *(undefined4 *)((longlong)puVar3 + 4) = uVar7;
            *(int *)(puVar3 + 1) = (int)lVar18;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uVar8;
            puVar12[uVar14 * 3 + 4] = uVar17;
          }
          iVar10 = FUN_1804e4d70(puVar19 + 3);
          if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(5);
          }
          if (*(int *)((longlong)puVar19 + 100) == 0x7fffffff) {
            *(undefined4 *)((longlong)puVar19 + 100) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(6);
          }
          uVar20 = puVar19[2];
          puVar19[2] = (ulonglong)puVar12;
          FUN_1804e4e90(puVar19 + 3);
          LOCK();
          piVar1 = (int *)(uVar20 + 8);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FUN_1803d64e0(uVar20);
          }
        }
        puVar4 = (undefined8 *)puVar19[2];
        uVar20 = (1L << ((byte)*puVar4 & 0x3f)) - 1U & uVar15;
        puVar4[uVar20 * 3 + 2] = lVar16 >> 3;
        puVar4[uVar20 * 3 + 3] = lVar21 >> 3;
        puVar4[uVar20 * 3 + 4] = lVar11;
        LOCK();
        *puVar19 = uVar15 + 1;
        UNLOCK();
      }
      FUN_180478540(lVar16,lVar21);
LAB_180477d0a:
      param_3[2] = param_3[2] + lVar11;
      plVar5 = (longlong *)param_3[1];
      puVar19 = (ulonglong *)(*plVar5 + *param_3 * 0x80);
      if (*puVar19 == 0) {
        return plVar5;
      }
      uVar20 = *puVar19 - 1;
      LOCK();
      *puVar19 = uVar20;
      UNLOCK();
      uVar15 = puVar19[1];
      if (uVar20 < uVar15) goto LAB_180477d9d;
      puVar6 = (undefined8 *)puVar19[2];
      uVar17 = (1L << ((byte)*puVar6 & 0x3f)) - 1U & uVar20;
      puVar4 = puVar6 + uVar17 * 3 + 2;
      uVar7 = *(undefined4 *)((longlong)puVar4 + 4);
      uVar8 = *(undefined4 *)(puVar4 + 1);
      uVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
      *(undefined4 *)param_4 = *(undefined4 *)puVar4;
      *(undefined4 *)((longlong)param_4 + 4) = uVar7;
      *(undefined4 *)(param_4 + 1) = uVar8;
      *(undefined4 *)((longlong)param_4 + 0xc) = uVar9;
      param_4[2] = puVar6[uVar17 * 3 + 4];
    } while (uVar15 < uVar20);
    uVar20 = uVar15 + 1;
    LOCK();
    uVar17 = puVar19[1];
    bVar22 = uVar15 == uVar17;
    if (bVar22) {
      puVar19[1] = uVar20;
    }
    else {
      uVar15 = uVar17;
    }
    UNLOCK();
    if (!bVar22) {
LAB_180477d9d:
      LOCK();
      plVar5 = (longlong *)*puVar19;
      *puVar19 = uVar15;
      UNLOCK();
      return plVar5;
    }
    LOCK();
    *puVar19 = uVar20;
    UNLOCK();
  } while( true );
}



/* ===== 180477de0 FUN_180477de0 ===== */

void FUN_180477de0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_48;
  longlong local_40;
  
  lVar1 = param_2 - param_1;
  while( true ) {
    if (lVar1 >> 3 < 0x21) {
      FUN_180478540(param_1,param_2);
      return;
    }
    lVar1 = param_2 - param_1 >> 4;
    if (param_3 < 1) break;
    lVar1 = param_1 + lVar1 * 8;
    FUN_180478cd0(param_1,lVar1,param_2 + -8,param_4);
    FUN_180478fb0(&local_48,param_1,lVar1,param_2);
    lVar1 = local_40;
    lVar2 = local_48;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (local_48 - param_1 >> 3 < param_2 - local_40 >> 3) {
      FUN_180477de0(param_1,local_48,param_3,param_4);
      lVar2 = param_2;
      param_1 = lVar1;
    }
    else {
      FUN_180477de0(local_40,param_2,param_3,param_4);
    }
    lVar1 = lVar2 - param_1;
    param_2 = lVar2;
  }
  while (0 < lVar1) {
    lVar1 = lVar1 + -1;
    FUN_180478c00(param_1,lVar1);
  }
  FUN_180478680(param_1,param_2,param_4);
  return;
}



