/* ===== 18023a5f0 FUN_18023a5f0 ===== */

void FUN_18023a5f0(undefined4 param_1,char param_2,float param_3,int param_4,int param_5,int param_6
                  ,int param_7,byte *param_8)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *in_RCX;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  int local_98;
  float local_90;
  float local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  longlong local_68;
  
  uVar7 = (longlong)param_6 * (longlong)param_7;
  if (uVar7 == 0) {
    lVar12 = 0;
    local_68 = 0;
    uVar4 = 0;
  }
  else {
    if (0x7fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar4 = FUN_18000fb70(uVar7);
    lVar12 = uVar4 + uVar7;
    local_68 = lVar12;
    param_1 = FUN_180540170(uVar4,0,uVar7);
  }
  param_3 = DAT_180cf9920 * param_3;
  local_70 = FUN_180235750(param_1,(int)param_2);
  local_78 = 0;
  local_80 = 0;
  local_98 = param_6;
  local_90 = param_3;
  local_88 = param_3;
  FUN_180239e40(0,uVar4,param_6,param_7);
  puVar8 = auStack_b8;
  uVar9 = 0;
  if (0 < param_7) {
    do {
      if ((uVar9 + param_5 < 0x400) && (uVar7 = 0, 0 < param_6)) {
        do {
          uVar6 = (int)uVar7 + param_4;
          if ((uVar6 < 0x400) &&
             (bVar1 = *(byte *)(uVar7 + uVar4 + (ulonglong)uVar9 * (longlong)param_6), bVar1 != 0))
          {
            uVar10 = (uint)bVar1;
            iVar11 = 0xff - uVar10;
            lVar12 = (longlong)(int)(uVar9 + param_5) * 0x1000 + (longlong)(int)uVar6 * 4;
            lVar2 = *in_RCX;
            iVar5 = (uint)*(byte *)(lVar2 + lVar12) * iVar11 + *param_8 * uVar10;
            *(char *)(lVar2 + lVar12) =
                 ((char)(iVar5 / 0xff) + (char)(iVar5 >> 0x1f)) -
                 (char)((longlong)iVar5 * 0x80808081 >> 0x3f);
            iVar5 = (uint)*(byte *)(lVar2 + 1 + lVar12) * iVar11 + param_8[1] * uVar10;
            *(char *)(lVar2 + 1 + lVar12) =
                 ((char)(iVar5 / 0xff) + (char)(iVar5 >> 0x1f)) -
                 (char)((longlong)iVar5 * 0x80808081 >> 0x3f);
            iVar5 = (uint)*(byte *)(lVar2 + 2 + lVar12) * iVar11 + param_8[2] * uVar10;
            *(char *)(lVar2 + 2 + lVar12) =
                 ((char)(iVar5 / 0xff) + (char)(iVar5 >> 0x1f)) -
                 (char)((longlong)iVar5 * 0x80808081 >> 0x3f);
            *(undefined1 *)(lVar2 + 3 + lVar12) = 0xff;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < param_6);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < param_7);
    lVar12 = local_68;
  }
  if (uVar4 == 0) {
    return;
  }
  uVar13 = lVar12 - uVar4;
  uVar7 = uVar4;
  if (0xfff < uVar13) {
    uVar7 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar7) - 8;
    if (uVar4 < 0x20) {
      uVar13 = uVar13 + 0x27;
      puVar8 = auStack_b8;
    }
    else {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar8 = auStack_b0;
      uVar7 = uVar4;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x18023a828;
  thunk_FUN_1803d64e0(uVar7,uVar13);
  return;
}



/* ===== 18023a850 FUN_18023a850 ===== */

void FUN_18023a850(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res20 [2];
  float local_e8 [5];
  int local_d4;
  undefined1 local_d0 [152];
  
  iVar2 = FUN_180512ae0(param_2,0x1f);
  if (0 < iVar2) {
    pcVar4 = (char *)FUN_18023a3f0(local_d0,0x48);
    if (*pcVar4 == '\0') {
      pcVar4 = (char *)FUN_18023a3f0(local_d0,0x30);
      fVar22 = *(float *)(pcVar4 + 8);
      fVar19 = *(float *)(pcVar4 + 0x10);
      if (*pcVar4 == '\0') {
        return;
      }
    }
    else {
      fVar19 = *(float *)(pcVar4 + 0x10);
      fVar22 = *(float *)(pcVar4 + 8);
    }
    fVar24 = DAT_1808aca7c;
    fVar1 = DAT_1808ac34c;
    iVar18 = (int)(0x118 / (longlong)iVar2);
    if (iVar18 < 5) {
      iVar18 = 4;
    }
    local_d4 = (0x118 - iVar18 * iVar2) / 2 + 0x1e;
    fVar23 = fVar19 - fVar22;
    if (fVar19 - fVar22 <= 0.0) {
      fVar23 = DAT_1808ac34c;
    }
    uVar14 = 0;
    fVar21 = DAT_1808aca7c / fVar23;
    fVar19 = 0.0;
    do {
      cVar16 = *(char *)(param_2 + uVar14);
      cVar10 = cVar16 + -0x20;
      if (0x19 < (byte)(cVar16 + 0x9fU)) {
        cVar10 = cVar16;
      }
      pcVar4 = (char *)FUN_18023a3f0(local_d0,cVar10);
      fVar20 = fVar19;
      if ((*pcVar4 != '\0') &&
         (fVar20 = *(float *)(pcVar4 + 0xc) - *(float *)(pcVar4 + 4),
         *(float *)(pcVar4 + 0xc) - *(float *)(pcVar4 + 4) <= fVar19)) {
        fVar20 = fVar19;
      }
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
      fVar19 = fVar20;
    } while ((int)uVar12 < iVar2);
    if ((fVar20 <= 0.0) || (fVar19 = (float)(iVar18 - iVar18 / 6), fVar20 * fVar21 <= fVar19)) {
      fVar19 = fVar21;
    }
    else {
      fVar19 = fVar19 / fVar20;
    }
    fVar20 = param_3[1];
    local_e8[2] = 1.0;
    local_e8[4] = 1.0;
    local_e8[0] = *param_3;
    fVar22 = (fVar21 - fVar19) * fVar22 + DAT_1808aca90;
    pfVar9 = local_res20;
    if (0.0 <= local_e8[0]) {
      pfVar9 = local_e8;
    }
    fVar24 = (fVar24 - fVar19 * fVar23) * DAT_1808ac1f4;
    pfVar5 = local_e8 + 2;
    if (local_e8[0] <= fVar1) {
      pfVar5 = pfVar9;
    }
    local_e8[2] = 0.0;
    local_e8[0] = fVar20;
    pfVar9 = local_e8 + 2;
    if (0.0 <= fVar20) {
      pfVar9 = local_e8;
    }
    local_e8[2] = param_3[2];
    pfVar6 = local_e8 + 4;
    if (fVar20 <= fVar1) {
      pfVar6 = pfVar9;
    }
    local_e8[0] = 1.0;
    local_e8[4] = 0.0;
    pfVar9 = local_e8 + 4;
    if (0.0 <= local_e8[2]) {
      pfVar9 = local_e8 + 2;
    }
    pfVar7 = local_e8;
    if (local_e8[2] <= fVar1) {
      pfVar7 = pfVar9;
    }
    local_e8[0] = 2.8026e-45;
    local_res20[0] =
         (float)(uint)CONCAT12((char)(int)(*pfVar7 * DAT_1808acb94 + DAT_1808ac1f4),
                               CONCAT11((char)(int)(*pfVar6 * DAT_1808acb94 + DAT_1808ac1f4),
                                        (char)(int)(*pfVar5 * DAT_1808acb94 + DAT_1808ac1f4)));
    do {
      iVar13 = (((int)local_e8[0] + -1) * iVar2 + 6) / 7;
      iVar15 = iVar2 - iVar13;
      if (iVar2 <= iVar13) {
        iVar15 = 0;
      }
      iVar13 = 0;
      iVar17 = (int)local_e8[0] * 0x40;
      do {
        cVar16 = '-';
        if (iVar13 < iVar15) {
LAB_18023abbb:
          pcVar4 = (char *)FUN_18023a3f0(local_d0,cVar16);
          if (*pcVar4 != '\0') {
            iVar8 = (int)((*(float *)(pcVar4 + 0xc) - *(float *)(pcVar4 + 4)) * fVar19);
            if (iVar8 < 1) {
              iVar8 = 1;
            }
            iVar11 = (int)((*(float *)(pcVar4 + 0x10) - *(float *)(pcVar4 + 8)) * fVar19);
            if (iVar11 < 1) {
              iVar11 = 1;
            }
            iVar3 = iVar18 - iVar8;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            FUN_18023a5f0(param_1,cVar16,fVar19,iVar13 * iVar18 + (iVar3 >> 1) + local_d4,
                          (int)(*(float *)(pcVar4 + 8) * fVar19 + fVar24 + fVar22) + iVar17,iVar8,
                          iVar11,local_res20);
          }
        }
        else {
          cVar10 = *(char *)(param_2 + (iVar13 - iVar15));
          if (cVar10 != ' ') {
            cVar16 = cVar10 + -0x20;
            if (0x19 < (byte)(cVar10 + 0x9fU)) {
              cVar16 = cVar10;
            }
            goto LAB_18023abbb;
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar2);
      local_e8[0] = (float)((int)local_e8[0] + 1);
    } while ((int)local_e8[0] < 9);
  }
  return;
}



/* ===== 18023ace0 FUN_18023ace0 ===== */

void FUN_18023ace0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res10;
  
  lVar4 = *param_1;
  if (1 < (int)(param_1[1] - lVar4 >> 3) * -0x55555555) {
    local_res10 = 1;
    do {
      iVar7 = 0x400 >> ((byte)local_res10 & 0x1f);
      plVar1 = (longlong *)(lVar4 + (longlong)local_res10 * 0x18);
      FUN_1800e88a0(plVar1,(longlong)iVar7 * (longlong)iVar7 * 4);
      uVar3 = 0;
      if (0 < iVar7) {
        do {
          uVar6 = 0;
          do {
            lVar4 = plVar1[-3];
            iVar2 = (int)uVar6;
            lVar5 = (longlong)(int)(((uVar3 * 2 + 1) * iVar7 + iVar2) * 8);
            lVar8 = uVar6 * 4 + (ulonglong)uVar3 * (longlong)iVar7 * 4;
            uVar6 = (ulonglong)(iVar2 + 1U);
            lVar9 = (longlong)(int)((uVar3 * iVar7 * 2 + iVar2) * 8);
            *(char *)(lVar8 + *plVar1) =
                 (char)((uint)*(byte *)(lVar4 + 4 + lVar5) + (uint)*(byte *)(lVar4 + lVar5) +
                        (uint)*(byte *)(lVar4 + 4 + lVar9) + *(byte *)(lVar4 + lVar9) + 2 >> 2);
            lVar4 = plVar1[-3];
            *(char *)(lVar8 + 1 + *plVar1) =
                 (char)((uint)*(byte *)(lVar5 + 5 + lVar4) + *(byte *)(lVar5 + 1 + lVar4) + 2 +
                        (uint)*(byte *)(lVar9 + 5 + lVar4) + (uint)*(byte *)(lVar9 + 1 + lVar4) >> 2
                       );
            lVar4 = plVar1[-3];
            *(char *)(lVar8 + 2 + *plVar1) =
                 (char)((uint)*(byte *)(lVar5 + 6 + lVar4) + *(byte *)(lVar5 + 2 + lVar4) + 2 +
                        (uint)*(byte *)(lVar9 + 6 + lVar4) + (uint)*(byte *)(lVar9 + 2 + lVar4) >> 2
                       );
            lVar4 = plVar1[-3];
            *(char *)(lVar8 + 3 + *plVar1) =
                 (char)((uint)*(byte *)(lVar5 + 7 + lVar4) + *(byte *)(lVar5 + 3 + lVar4) + 2 +
                        (uint)*(byte *)(lVar9 + 7 + lVar4) + (uint)*(byte *)(lVar9 + 3 + lVar4) >> 2
                       );
          } while ((int)(iVar2 + 1U) < iVar7);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < iVar7);
      }
      lVar4 = *param_1;
      local_res10 = local_res10 + 1;
    } while (local_res10 < (int)(param_1[1] - lVar4 >> 3) * -0x55555555);
  }
  return;
}



/* ===== 18023af00 FUN_18023af00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18023af00(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uVar3 = FUN_18023a070();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  iVar4 = 1;
  uVar2 = 0x400;
  do {
    iVar4 = iVar4 + 1;
    uVar2 = uVar2 >> 1;
  } while (1 < uVar2);
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  if (iVar4 != 0) {
    uVar6 = (ulonglong)iVar4;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    local_98 = (longlong *)FUN_18000fb70(uVar6 * 0x18);
    local_88 = local_98 + uVar6 * 3;
    plStack_90 = local_98;
    do {
      *plStack_90 = 0;
      plStack_90[1] = 0;
      plStack_90[2] = 0;
      plStack_90 = plStack_90 + 3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  plVar1 = local_98;
  FUN_1800e88a0(local_98,0x400000);
  uVar6 = 0;
  if (plVar1[1] != *plVar1) {
    do {
      *(undefined4 *)(uVar6 + *plVar1) = 0xff3d4d47;
      uVar6 = uVar6 + 4;
    } while (uVar6 < (ulonglong)(plVar1[1] - *plVar1));
  }
  FUN_18023a850(plVar1,param_2 + 1,param_2 + 0x24);
  FUN_18023ace0(&local_98);
  plVar1 = local_98;
  lVar7 = (longlong)plStack_90 - (longlong)local_98 >> 3;
  uVar6 = lVar7 * -0x5555555555555555;
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  if ((longlong)plStack_90 - (longlong)local_98 != 0) {
    if (0xfffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    local_78 = (undefined8 *)FUN_18000fb70(lVar7 * -0x5555555555555550);
    local_68 = local_78 + lVar7 * -0xaaaaaaaaaaaaaaa;
    puStack_70 = local_78;
    for (uVar5 = uVar6; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puStack_70 = 0;
      puStack_70[1] = 0;
      puStack_70 = puStack_70 + 2;
    }
  }
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      local_78[uVar5 * 2] = plVar1[uVar5 * 3];
      *(int *)(local_78 + uVar5 * 2 + 1) = (0x400 >> ((byte)uVar5 & 0x1f)) << 2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  local_4c = 1;
  local_3c = 0;
  local_60 = 0x400;
  local_5c = 0x400;
  local_58 = (undefined4)uVar6;
  local_54 = 1;
  local_50 = 0x1d;
  local_44 = 1;
  local_40 = 8;
  local_a8 = (longlong *)0x0;
  iVar4 = (**(code **)(*param_1 + 0x28))(param_1,&local_60,local_78,&local_a8);
  if ((-1 < iVar4) && (local_a8 != (longlong *)0x0)) {
    local_80 = (longlong *)0x0;
    iVar4 = (**(code **)(*param_1 + 0x38))(param_1,local_a8,0,&local_80);
    plVar1 = DAT_180cf9858;
    if ((-1 < iVar4) && (local_80 != (longlong *)0x0)) {
      LOCK();
      DAT_180cf9858 = local_80;
      UNLOCK();
      uVar8 = extraout_XMM0_Da;
      if (plVar1 != (longlong *)0x0) {
        local_a0 = plVar1;
        uVar8 = FUN_18023b450(extraout_XMM0_Da,&local_a0);
      }
      if (DAT_180cf9870 != (longlong *)0x0) {
        local_a0 = DAT_180cf9870;
        FUN_18023b450(uVar8,&local_a0);
      }
      DAT_180cf9870 = local_a8;
      uVar3 = 1;
      goto LAB_18023b1aa;
    }
    (**(code **)(*local_a8 + 0x10))();
  }
  uVar3 = 0;
LAB_18023b1aa:
  FUN_1800244c0(&local_78);
  FUN_18023b600(&local_98);
  return uVar3;
}



/* ===== 18023b200 FUN_18023b200 ===== */

undefined8 FUN_18023b200(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
      (lVar1 = **(longlong **)(param_1 + 8), lVar1 == 0)) ||
     (lVar1 = FUN_1804ef120(lVar1,"c4_digits"), lVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* ===== 18023b240 FUN_18023b240 ===== */

void FUN_18023b240(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  undefined1 *puVar9;
  char cVar10;
  longlong *local_58;
  char local_50;
  undefined1 local_4f;
  undefined4 local_4e;
  undefined2 local_4a;
  longlong *local_48;
  char local_40;
  undefined1 local_3f;
  undefined4 local_3e;
  undefined2 local_3a;
  
  plVar7 = (longlong *)*param_3;
  cVar10 = *(char *)(param_3 + 1);
  uVar4 = *(undefined1 *)((longlong)param_3 + 9);
  plVar6 = (longlong *)*param_2;
  cVar8 = *(char *)(param_2 + 1);
  uVar3 = *(undefined1 *)((longlong)param_2 + 9);
  puVar9 = (undefined1 *)*param_1;
LAB_18023b280:
  do {
    if (cVar8 == '\0') {
      if (plVar6 == (longlong *)0x0) {
LAB_18023b2b7:
        plVar6 = (longlong *)0x0;
      }
      else {
        if ((*(byte **)plVar6[7] == (byte *)0x0) || (*(int *)plVar6[10] < 1)) {
          uVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
        }
        else {
          uVar5 = (uint)**(byte **)plVar6[7];
        }
        if (uVar5 == 0xffffffff) goto LAB_18023b2b7;
        uVar3 = (undefined1)uVar5;
      }
      cVar8 = '\x01';
    }
    if (cVar10 == '\0') {
      if (plVar7 == (longlong *)0x0) {
LAB_18023b2f4:
        plVar7 = (longlong *)0x0;
      }
      else {
        if ((*(byte **)plVar7[7] == (byte *)0x0) || (*(int *)plVar7[10] < 1)) {
          uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7);
        }
        else {
          uVar5 = (uint)**(byte **)plVar7[7];
        }
        if (uVar5 == 0xffffffff) goto LAB_18023b2f4;
        uVar4 = (undefined1)uVar5;
      }
      cVar10 = '\x01';
    }
    if (plVar6 == (longlong *)0x0) {
      if (plVar7 == (longlong *)0x0) goto LAB_18023b30b;
    }
    else if (plVar7 != (longlong *)0x0) {
LAB_18023b30b:
      param_1[1] = puVar9;
      local_4e = *(undefined4 *)((longlong)param_3 + 10);
      local_4a = *(undefined2 *)((longlong)param_3 + 0xe);
      local_3e = *(undefined4 *)((longlong)param_2 + 10);
      local_3a = *(undefined2 *)((longlong)param_2 + 0xe);
      local_58 = plVar7;
      local_50 = cVar10;
      local_4f = uVar4;
      local_48 = plVar6;
      local_40 = cVar8;
      local_3f = uVar3;
      FUN_1800817f0(param_1,&local_48,&local_58);
      return;
    }
    if (puVar9 == (undefined1 *)param_1[1]) goto LAB_18023b30b;
    if (cVar8 == '\0') {
      if (plVar6 != (longlong *)0x0) {
        if ((*(byte **)plVar6[7] == (byte *)0x0) || (*(int *)plVar6[10] < 1)) {
          uVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
        }
        else {
          uVar5 = (uint)**(byte **)plVar6[7];
        }
        if (uVar5 != 0xffffffff) {
          uVar3 = (undefined1)uVar5;
          *puVar9 = uVar3;
          goto LAB_18023b3ee;
        }
      }
      *puVar9 = uVar3;
    }
    else {
      *puVar9 = uVar3;
      if (plVar6 != (longlong *)0x0) {
LAB_18023b3ee:
        if (*(longlong *)plVar6[7] == 0) {
LAB_18023b419:
          uVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
        }
        else {
          iVar1 = *(int *)plVar6[10];
          if (iVar1 < 1) goto LAB_18023b419;
          *(int *)plVar6[10] = iVar1 + -1;
          pbVar2 = *(byte **)plVar6[7];
          *(byte **)plVar6[7] = pbVar2 + 1;
          uVar5 = (uint)*pbVar2;
        }
        if (uVar5 != 0xffffffff) {
          cVar8 = '\0';
          puVar9 = puVar9 + 1;
          goto LAB_18023b280;
        }
      }
    }
    plVar6 = (longlong *)0x0;
    cVar8 = '\x01';
    puVar9 = puVar9 + 1;
  } while( true );
}



/* ===== 18023b450 FUN_18023b450 ===== */

undefined8 * FUN_18023b450(undefined8 param_1,undefined8 *param_2)

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
  
  puVar3 = DAT_180cf9958;
  if (DAT_180cf9958 != DAT_180cf9960) {
    *DAT_180cf9958 = *param_2;
    puVar3 = DAT_180cf9958;
    DAT_180cf9958 = DAT_180cf9958 + 1;
    return puVar3;
  }
  uVar8 = 0x1fffffffffffffff;
  uVar11 = (longlong)DAT_180cf9958 - (longlong)DAT_180cf9950;
  lVar4 = (longlong)uVar11 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar6 = (longlong)DAT_180cf9960 - (longlong)DAT_180cf9950 >> 3;
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
  if (puVar3 == DAT_180cf9958) {
    lVar4 = (longlong)DAT_180cf9958 - (longlong)DAT_180cf9950;
    puVar7 = puVar5;
    puVar3 = DAT_180cf9950;
  }
  else {
    FUN_180540530(puVar5,DAT_180cf9950,(longlong)puVar3 - (longlong)DAT_180cf9950);
    puVar7 = puVar12 + 1;
    lVar4 = (longlong)DAT_180cf9958 - (longlong)puVar3;
  }
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  FUN_180540530(puVar7,puVar3,lVar4);
  if (DAT_180cf9950 == (undefined8 *)0x0) goto LAB_18023b5af;
  puVar3 = DAT_180cf9950;
  if ((ulonglong)(((longlong)DAT_180cf9960 - (longlong)DAT_180cf9950 >> 3) * 8) < 0x1000) {
LAB_18023b5a4:
    puVar10 = puVar9;
  }
  else {
    puVar3 = (undefined8 *)DAT_180cf9950[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180cf9950 + (-8 - (longlong)puVar3))) {
      puVar3 = (undefined8 *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_30;
      goto LAB_18023b5a4;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18023b5af;
  thunk_FUN_1803d64e0(puVar3);
LAB_18023b5af:
  DAT_180cf9950 = puVar5;
  DAT_180cf9958 = puVar5 + uVar1;
  DAT_180cf9960 = puVar5 + uVar8;
  return puVar12;
}



/* ===== 18023b600 FUN_18023b600 ===== */

void FUN_18023b600(longlong *param_1)

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
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
    FUN_180081c30(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18023b68f;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18023b68f:
  *(undefined8 *)(puVar5 + -8) = 0x18023b697;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18023b6b0 FUN_18023b6b0 ===== */

void FUN_18023b6b0(void)

{
  if ((DAT_180cf9980 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cf9984 = FUN_18038eaf0("C_BaseEntity","m_pCollision");
    DAT_180cf9988 = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMins");
    DAT_180cf998c = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMaxs");
    DAT_180cf9990 = FUN_18038eaf0("CCollisionProperty","m_collisionAttribute");
    DAT_180cf9994 = FUN_18038eaf0("VPhysicsCollisionAttribute_t","m_nHierarchyId");
    DAT_180cf9998 = FUN_18038eaf0("CCollisionProperty","m_usSolidFlags");
    DAT_180cf999c = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
    DAT_180cf9980 = '\x01';
  }
  return;
}



/* ===== 18023b790 FUN_18023b790 ===== */

float * FUN_18023b790(float *param_1,float *param_2)

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
  
  fVar8 = (float)*(undefined8 *)(param_2 + 1);
  fVar9 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar1 = *param_2;
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



/* ===== 18023b8f0 FUN_18023b8f0 ===== */

undefined1 FUN_18023b8f0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_18000f3a0((ulonglong)DAT_180961968 + param_2);
    if (lVar2 != 0) {
      bVar1 = FUN_180011220(lVar2 + 0x11);
      if ((bVar1 & 0x40) != 0) {
        return 0;
      }
    }
  }
  return 1;
}



/* ===== 18023b930 FUN_18023b930 ===== */

undefined1 FUN_18023b930(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_2 != 0) {
    uVar6 = (ulonglong)DAT_180961968;
    lVar4 = FUN_18000f3a0(uVar6 + param_2);
    if ((lVar4 == 0) || (bVar2 = FUN_180011220(lVar4 + 0x11), (bVar2 & 0x40) == 0)) {
      lVar4 = FUN_18000f3a0(uVar6 + param_2);
      uVar6 = (ulonglong)DAT_180961974;
      if ((lVar4 == 0) || (lVar4 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar4), lVar4 == 0)) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar4);
        if ((lVar4 != 0) &&
           (lVar5 = FUN_18000f3a0(lVar4 + uVar6), lVar5 - 0x10000U < 0x7ffffffeffff)) {
          cVar3 = FUN_180011220(lVar5);
          lVar7 = 0;
          if (cVar3 == 'C') {
            do {
              if (cVar3 == '\0') {
                return 0;
              }
              cVar3 = FUN_180011220(lVar7 + 1 + lVar5);
              lVar1 = lVar7 + 1;
              lVar7 = lVar7 + 1;
            } while (cVar3 == "C_Hostage"[lVar1]);
          }
        }
      }
      iVar8 = 0;
      if (lVar4 != 0) {
        for (; iVar8 < 0x20; iVar8 = iVar8 + 1) {
          if ((lVar4 != 0) &&
             (lVar5 = FUN_18000f3a0(lVar4 + uVar6), lVar5 - 0x10000U < 0x7ffffffeffff)) {
            cVar3 = FUN_180011220(lVar5);
            if (cVar3 == 'C') {
              cVar3 = 'C';
              lVar7 = 0;
              do {
                if (cVar3 == '\0') {
                  return 0;
                }
                cVar3 = FUN_180011220(lVar7 + 1 + lVar5);
                lVar1 = lVar7 + 1;
                lVar7 = lVar7 + 1;
              } while (cVar3 == "C_Chicken"[lVar1]);
            }
          }
          lVar4 = FUN_18000f3a0(lVar4 + 0x38);
          if (lVar4 == 0) {
            return 1;
          }
          lVar4 = FUN_18000f3a0(lVar4 + 8);
          if (lVar4 == 0) {
            return 1;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}



/* ===== 18023bad0 FUN_18023bad0 ===== */

undefined1 FUN_18023bad0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar9 = (ulonglong)DAT_180961968;
  lVar4 = FUN_18000f3a0(uVar9 + param_2);
  if ((lVar4 != 0) && (lVar4 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar4), lVar4 != 0)) {
    lVar4 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar4);
    iVar7 = 0;
    if (lVar4 != 0) {
      uVar8 = (ulonglong)DAT_180961974;
      for (; iVar7 < 0x20; iVar7 = iVar7 + 1) {
        if ((lVar4 != 0) &&
           (lVar5 = FUN_18000f3a0(lVar4 + uVar8), lVar5 - 0x10000U < 0x7ffffffeffff)) {
          cVar2 = FUN_180011220(lVar5);
          lVar6 = 0;
          if (cVar2 == 'C') {
            do {
              if (cVar2 == '\0') {
                return 0;
              }
              cVar2 = FUN_180011220(lVar6 + 1 + lVar5);
              lVar1 = lVar6 + 1;
              lVar6 = lVar6 + 1;
            } while (cVar2 == "C_BaseCSGrenadeProjectile"[lVar1]);
          }
        }
        lVar4 = FUN_18000f3a0(lVar4 + 0x38);
        if ((lVar4 == 0) || (lVar4 = FUN_18000f3a0(lVar4 + 8), lVar4 == 0)) break;
      }
    }
  }
  lVar4 = FUN_18000f3a0(uVar9 + param_2);
  if ((lVar4 == 0) || (bVar3 = FUN_180011220(lVar4 + 0x11), (bVar3 & 0x40) == 0)) {
    return 1;
  }
  return 0;
}



/* ===== 18023bc30 FUN_18023bc30 ===== */

undefined8
FUN_18023bc30(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  (*param_1)(param_2,param_3,param_4,param_5,param_6,param_7);
  return 1;
}



/* ===== 18023bc80 FUN_18023bc80 ===== */

uint FUN_18023bc80(longlong param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    lVar3 = FUN_18000f3a0((ulonglong)DAT_180961968 + param_1);
    if (lVar3 != 0) {
      uVar2 = FUN_180011200(lVar3 + 0x10);
      sVar1 = FUN_180011200(lVar3 + 0x30);
      uVar4 = uVar2 - (ushort)(sVar1 << 0xf);
      return (uVar4 ^ uVar2) & 0x7fff ^ uVar4;
    }
  }
  return 0xffffffff;
}



/* ===== 18023bcf0 FUN_18023bcf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18023bcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 param_6,uint *param_7,longlong param_8)

{
  uint uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 *local_280;
  undefined1 *local_278;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [48];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_114;
  uint local_10c;
  undefined8 local_108;
  uint local_100;
  uint local_ec;
  undefined4 local_e4;
  undefined2 local_e0;
  char local_dd;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2a8;
  uVar3 = 0;
  *(undefined2 *)((longlong)param_7 + 5) = local_1d8._5_2_;
  uVar8 = 0;
  *(undefined1 *)((longlong)param_7 + 7) = local_1d8._7_1_;
  *param_7 = 0x3f800000;
  *(undefined1 *)(param_7 + 1) = 0;
  param_7[2] = 0;
  param_7[3] = 0;
  param_7[4] = 0;
  param_7[5] = 0;
  param_7[6] = 0;
  param_7[7] = 0;
  if ((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) {
    lVar6 = FUN_18000f3a0();
    uVar8 = 0;
    if (lVar6 != 0) {
      local_1e0 = 0;
      local_248 = param_5;
      local_240 = 0;
      uStack_228 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      uStack_238 = _DAT_1808adf90;
      local_230 = _UNK_1808adf98;
      local_258 = param_3;
      local_250 = param_4;
      if (param_8 != 0) {
        FUN_18023b6b0();
        uVar4 = FUN_18023bc80(param_8);
        uVar1 = DAT_180cf9984;
        uVar8 = (ulonglong)DAT_180cf9984;
        uStack_238 = CONCAT44(uStack_238._4_4_,uVar4);
        if ((((DAT_180cf9984 != 0) && (lVar7 = FUN_18000f3a0(param_8 + uVar8), lVar7 != 0)) &&
            (DAT_180cf9990 != 0)) && (DAT_180cf9994 != 0)) {
          uVar3 = FUN_180011440((ulonglong)DAT_180cf9990 + lVar7 + (ulonglong)DAT_180cf9994);
        }
        uStack_228 = CONCAT62(uStack_228._2_6_,uVar3);
        if (((uVar1 == 0) || (lVar7 = FUN_18000f3a0(param_8 + uVar8), lVar7 == 0)) ||
           ((DAT_180cf9998 != 0 &&
            (uVar8 = FUN_180011220((ulonglong)DAT_180cf9998 + lVar7), (uVar8 & 4) != 0)))) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 0xffffffff;
          if (((DAT_180cf999c != 0) &&
              (iVar5 = FUN_180011200(param_8 + (ulonglong)DAT_180cf999c), iVar5 != -1)) &&
             (plVar9 = (longlong *)FUN_1803a0940(local_268,iVar5), *plVar9 != 0)) {
            uVar4 = FUN_18023bc80();
          }
        }
        local_230 = CONCAT44(local_230._4_4_,uVar4);
      }
      uVar2 = uStack_228;
      uStack_228 = CONCAT17(0xf,(undefined7)uStack_228);
      local_220 = CONCAT62(local_220._2_6_,0x4900);
      uStack_228._0_6_ = CONCAT24(0xffff,(int)uVar2);
      local_220 = CONCAT71(local_220._1_7_,param_6);
      uStack_218 = CONCAT71(uStack_218._1_7_,1);
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      FUN_180540170(local_198,0,0x140);
      local_e4 = 0xffffffff;
      local_e0 = 0xffff;
      local_278 = local_198;
      local_168 = _DAT_1808adae0;
      uStack_160 = _UNK_1808adae8;
      local_280 = &local_258;
      local_158 = _DAT_1808adae0;
      uStack_150 = _UNK_1808adae8;
      local_ec = 0x3f800000;
      local_288 = param_2;
      uVar8 = FUN_18023bc30(DAT_180961f48,lVar6,&local_1d8,param_1);
      if ((char)uVar8 != '\0') {
        *param_7 = local_ec;
        *(undefined8 *)(param_7 + 2) = local_114;
        param_7[4] = local_10c;
        *(undefined8 *)(param_7 + 5) = local_108;
        param_7[7] = local_100;
        *(bool *)(param_7 + 1) = local_dd != '\0';
        return (ulonglong)
               CONCAT31((int3)((*param_7 & 0x7f800000) >> 8),(*param_7 & 0x7f800000) == 0x7f800000)
               ^ 1;
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



/* ===== 18023bfc0 FUN_18023bfc0 ===== */

float FUN_18023bfc0(longlong param_1,longlong param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined1 local_38 [16];
  
  lVar2 = FUN_18000f3a0((ulonglong)*(uint *)(param_2 + 4) + param_1);
  if (lVar2 != 0) {
    pfVar3 = (float *)FUN_1800111b0(local_38,(ulonglong)*(uint *)(param_2 + 0x10) + param_1);
    uVar7 = (int)((*param_3 - *pfVar3) * DAT_1808ac064 + DAT_1808ac918) & 0xff;
    uVar5 = (uVar7 << 8 | uVar7) & 0xf00f;
    uVar5 = uVar5 << 4 | uVar5;
    uVar7 = (int)((param_3[1] - pfVar3[1]) * DAT_1808ac064 + DAT_1808ac918) & 0xff;
    uVar7 = (uVar7 << 8 | uVar7) & 0xf00f;
    uVar7 = uVar7 << 4 | uVar7;
    uVar6 = (int)((param_3[2] - pfVar3[2]) * DAT_1808ac064 + DAT_1808ac918) & 0xff;
    uVar6 = (uVar6 << 8 | uVar6) & 0xf00f;
    uVar6 = (uVar6 << 4 | uVar6) & 0xc30c3;
    uVar7 = (((uVar6 * 4 | uVar6) & 0x249249 | (uVar7 & 0x82082) * 2 | uVar5 & 0x82082) * 2 |
            uVar7 & 0x41041) * 2 | uVar5 & 0x41041;
    if (uVar7 < 0x8000) {
      uVar4 = FUN_18000f3a0((ulonglong)(uVar7 >> 6) * 8 + 8 + lVar2);
      if ((uVar4 >> ((byte)uVar7 & 0x3f) & 1) == 0) {
        iVar1 = FUN_180011200((ulonglong)*(uint *)(param_2 + 8) + param_1);
        fVar8 = (float)FUN_18000f3d0((longlong)iVar1 * 0x80000 + (ulonglong)*(uint *)(param_2 + 0xc)
                                     + lVar2 + (ulonglong)uVar7 * 0x10);
        fVar8 = fVar8 / DAT_1808aca80;
        if (0.0 <= fVar8) {
          if (DAT_1808ac34c <= fVar8) {
            fVar8 = DAT_1808ac34c;
          }
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          return fVar8;
        }
        return 0.0;
      }
    }
  }
  return 0.0;
}



/* ===== 18023c180 FUN_18023c180 ===== */

undefined8 FUN_18023c180(float *param_1,longlong param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  float *pfVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [13];
  
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_180ca0e5e == '\0') {
    return 0;
  }
  uVar3 = (ulonglong)DAT_180cc4c34;
  local_8c = DAT_180cc4c38;
  local_88 = DAT_180cc4c3c;
  local_84 = DAT_180cc4c40;
  local_90 = DAT_180cc4c34;
  local_80 = 0xe8;
  local_7c = 0xc;
  if (DAT_1809f2bf0 == 0) {
    uVar1 = DAT_1809f2bf8 & 0x800000ff;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2bf8 = DAT_1809f2bf8 + 1;
    if ((uVar1 == 0) &&
       (DAT_1809f2bf0 = FUN_180264b70(PTR_s_inferno_smoke_volume_density_1809f2be8),
       DAT_1809f2bf0 != 0)) goto LAB_18023c240;
  }
  else {
LAB_18023c240:
    fVar2 = (float)FUN_180264d70(DAT_1809f2bf0);
    if (((uint)fVar2 & 0x7f800000) != 0x7f800000) goto LAB_18023c26d;
  }
  fVar2 = DAT_1808ac03c;
LAB_18023c26d:
  fVar5 = (float)FUN_18000f3d0(param_2 + uVar3 + 0xc);
  fVar7 = ((param_3 - fVar5) - DAT_1808ac0c0) / DAT_1808ac40c;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else if (DAT_1808ac34c <= fVar7) {
    fVar7 = DAT_1808ac34c;
  }
  fVar5 = ((param_3 - fVar5) - DAT_1808ac964) / DAT_1808acde4;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (DAT_1808ac34c <= fVar5) {
    fVar5 = DAT_1808ac34c;
  }
  local_74 = param_1[1];
  local_78 = *param_1;
  fVar6 = DAT_1808ac658 - (fVar7 + fVar7);
  fVar8 = DAT_1808ac658 - (fVar5 + fVar5);
  local_68 = local_74 + DAT_1808ac950;
  pfVar4 = &local_78;
  local_70 = param_1[2] + DAT_1808ac950;
  local_5c = local_74 - DAT_1808ac950;
  local_54 = local_78 + DAT_1808ac950;
  local_48 = local_78 - DAT_1808ac950;
  local_6c = local_78;
  local_64 = local_70;
  local_60 = local_78;
  local_58 = local_70;
  local_50 = local_74;
  local_4c = local_70;
  local_44 = local_74;
  local_40 = local_70;
  do {
    FUN_18023bfc0(param_2 + uVar3,&local_90,pfVar4);
    if (fVar2 < extraout_XMM0_Da * fVar8 * fVar5 * fVar5 * fVar6 * fVar7 * fVar7) {
      return 1;
    }
    pfVar4 = pfVar4 + 3;
  } while (pfVar4 != local_3c);
  return 0;
}



/* ===== 18023c3d0 FUN_18023c3d0 ===== */

uint FUN_18023c3d0(longlong param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    if (DAT_1809f2dc8 == 0) {
      uVar1 = DAT_1809f2dd0 & 0x800000ff;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
      }
      DAT_1809f2dd0 = DAT_1809f2dd0 + 1;
      if (uVar1 != 0) {
        return DAT_1808ac790;
      }
      DAT_1809f2dc8 = FUN_180264b70(PTR_s_inferno_flame_lifetime_incendiar_1809f2dc0);
      if (DAT_1809f2dc8 == 0) {
        return DAT_1808ac790;
      }
    }
    uVar1 = FUN_180264d70(DAT_1809f2dc8);
    if ((uVar1 & 0x7f800000) == 0x7f800000) {
      return DAT_1808ac790;
    }
    return uVar1;
  }
  if (DAT_1809f2d80 == 0) {
    uVar1 = DAT_1809f2d88 & 0x800000ff;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2d88 = DAT_1809f2d88 + 1;
    if (uVar1 != 0) {
      return DAT_1808ac7ec;
    }
    DAT_1809f2d80 = FUN_180264b70(PTR_s_inferno_flame_lifetime_1809f2d78);
    if (DAT_1809f2d80 == 0) {
      return DAT_1808ac7ec;
    }
  }
  uVar1 = FUN_180264d70(DAT_1809f2d80);
  if ((uVar1 & 0x7f800000) == 0x7f800000) {
    return DAT_1808ac7ec;
  }
  return uVar1;
}



/* ===== 18023c4e0 FUN_18023c4e0 ===== */

void FUN_18023c4e0(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int local_ca8;
  undefined4 local_ca4;
  undefined8 local_ca0 [96];
  undefined8 local_9a0 [96];
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined1 local_660;
  undefined1 local_65f;
  undefined1 local_658 [1616];
  
  FUN_180540170(local_ca0,0,0x300);
  FUN_180540170(local_9a0,0,0x300);
  local_ca4 = *(undefined4 *)(param_1 + 4);
  local_ca8 = *(int *)(param_1 + 0x1c);
  lVar7 = 6;
  lVar8 = 6;
  puVar5 = (undefined8 *)(param_1 + 0x1550);
  puVar6 = local_ca0;
  do {
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar1;
    uVar1 = puVar5[4];
    uVar4 = puVar5[5];
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    uVar2 = puVar5[6];
    uVar3 = puVar5[7];
    puVar6[4] = uVar1;
    puVar6[5] = uVar4;
    uVar1 = puVar5[8];
    uVar4 = puVar5[9];
    puVar6[6] = uVar2;
    puVar6[7] = uVar3;
    uVar2 = puVar5[10];
    uVar3 = puVar5[0xb];
    puVar6[8] = uVar1;
    puVar6[9] = uVar4;
    uVar1 = puVar5[0xc];
    uVar4 = puVar5[0xd];
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar3;
    uVar2 = puVar5[0xe];
    uVar3 = puVar5[0xf];
    puVar6[0xc] = uVar1;
    puVar6[0xd] = uVar4;
    puVar6[0xe] = uVar2;
    puVar6[0xf] = uVar3;
    lVar8 = lVar8 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar8 != 0);
  puVar5 = (undefined8 *)(param_1 + 0x1850);
  puVar6 = local_9a0;
  do {
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar1;
    uVar1 = puVar5[4];
    uVar4 = puVar5[5];
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    uVar2 = puVar5[6];
    uVar3 = puVar5[7];
    puVar6[4] = uVar1;
    puVar6[5] = uVar4;
    uVar1 = puVar5[8];
    uVar4 = puVar5[9];
    puVar6[6] = uVar2;
    puVar6[7] = uVar3;
    uVar2 = puVar5[10];
    uVar3 = puVar5[0xb];
    puVar6[8] = uVar1;
    puVar6[9] = uVar4;
    uVar1 = puVar5[0xc];
    uVar4 = puVar5[0xd];
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar3;
    uVar2 = puVar5[0xe];
    uVar3 = puVar5[0xf];
    puVar6[0xc] = uVar1;
    puVar6[0xd] = uVar4;
    puVar6[0xe] = uVar2;
    puVar6[0xf] = uVar3;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar7 != 0);
  local_6a0 = *(undefined8 *)(param_1 + 0x1b50);
  uStack_698 = *(undefined8 *)(param_1 + 7000);
  local_660 = *param_1;
  local_690 = *(undefined8 *)(param_1 + 0x1b60);
  uStack_688 = *(undefined8 *)(param_1 + 0x1b68);
  lVar7 = *(longlong *)(param_1 + 0x1e98);
  local_680 = *(undefined8 *)(param_1 + 0x1b70);
  uStack_678 = *(undefined8 *)(param_1 + 0x1b78);
  local_65f = param_1[1];
  local_670 = *(undefined8 *)(param_1 + 0x1b80);
  uStack_668 = *(undefined8 *)(param_1 + 0x1b88);
  if ((*(longlong *)(param_1 + 0x1e90) == lVar7) || (*(int *)(lVar7 + -0x64c) != local_ca8)) {
    if (lVar7 == *(longlong *)(param_1 + 0x1ea0)) {
      FUN_180241560(param_1 + 0x1e90,lVar7,&local_ca8);
    }
    else {
      FUN_180540530(lVar7,&local_ca8,0x64c);
      *(longlong *)(param_1 + 0x1e98) = *(longlong *)(param_1 + 0x1e98) + 0x64c;
    }
  }
  else {
    FUN_180540530(local_658,&local_ca8,0x64c);
    FUN_180540530((int *)(lVar7 + -0x64c),local_658,0x64c);
  }
  param_1[0x1eaa] = 0;
  return;
}



/* ===== 18023c710 FUN_18023c710 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18023c710(longlong param_1,float *param_2,undefined8 *param_3,int param_4,undefined4 param_5,
             undefined4 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  uint uStack_84;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = DAT_180cf9be0;
  iVar10 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  lVar14 = (longlong)param_4;
  if (0x40 < iVar10) {
    iVar10 = 0x40;
  }
  if (iVar10 <= iVar2) {
    return 1;
  }
  if (0 < iVar2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar19 = DAT_1808acc64;
    }
    else {
      fVar19 = DAT_1808acc58;
    }
    iVar10 = 0;
    do {
      lVar9 = (longlong)iVar10 * 0x54;
      if (((*(char *)(param_1 + 0x74 + lVar9) != '\0') &&
          (fVar15 = *(float *)(param_1 + 0xa0 + lVar9),
          *(float *)(param_1 + 0x30) <= fVar15 && fVar15 != *(float *)(param_1 + 0x30))) &&
         (fVar18 = param_2[1] - *(float *)(param_1 + 0x60 + lVar9),
         fVar17 = *param_2 - *(float *)(param_1 + 0x5c + lVar9),
         fVar15 = param_2[2] - *(float *)(param_1 + 100 + lVar9),
         fVar18 * fVar18 + fVar17 * fVar17 + fVar15 * fVar15 < fVar19)) {
        return 2;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar2);
  }
  fVar19 = (float)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)) * DAT_1808ac00c;
  uVar3 = DAT_1808acda0;
  uVar5 = _DAT_1808ad5c0;
  uVar6 = _UNK_1808ad5c8;
  for (puVar11 = DAT_180cf9bd8; DAT_1808acda0 = uVar3, _DAT_1808ad5c0 = uVar5,
      _UNK_1808ad5c8 = uVar6, puVar11 != puVar1; puVar11 = puVar11 + 1) {
    cVar7 = FUN_18023c180(param_2,*puVar11,fVar19);
    if (cVar7 != '\0') {
      if (*(char *)(param_1 + 2) == '\0') {
        *(undefined1 *)(param_1 + 2) = 1;
        *(undefined1 *)(param_1 + 0x1eaa) = 1;
      }
      return 3;
    }
    uVar3 = DAT_1808acda0;
    uVar5 = _DAT_1808ad5c0;
    uVar6 = _UNK_1808ad5c8;
  }
  uStack_68 = (undefined4)((ulonglong)_DAT_1808adee0 >> 0x20);
  uStack_64 = (undefined4)_UNK_1808adee8;
  uVar4 = _UNK_1808adee8 >> 0x20;
  lVar13 = (longlong)*(int *)(param_1 + 4);
  lVar12 = lVar13 * 0x54;
  fVar15 = 0.0;
  uStack_84 = uStack_84 & 0xffffff00;
  lVar9 = _DAT_1808adee0 << 0x20;
  puVar1 = (undefined8 *)(lVar12 + 0x50 + param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar12 + 0x60 + param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar12 + 0x70 + param_1);
  *puVar1 = CONCAT44(uStack_84,0x3f800000);
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar12 + 0x80 + param_1);
  *puVar1 = uVar6;
  puVar1[1] = lVar9;
  puVar1 = (undefined8 *)(lVar12 + 0x90 + param_1);
  *puVar1 = CONCAT44(uStack_64,uStack_68);
  puVar1[1] = uVar4;
  *(undefined4 *)(lVar12 + 0xa0 + param_1) = uVar3;
  *(undefined8 *)(lVar12 + 0x50 + param_1) = *(undefined8 *)param_2;
  *(float *)(lVar12 + 0x58 + param_1) = param_2[2];
  fVar19 = param_2[1];
  fVar17 = param_2[2] + DAT_1808aca54;
  *(float *)(lVar12 + 0x5c + param_1) = *param_2;
  *(float *)(lVar12 + 0x60 + param_1) = fVar19;
  *(float *)(lVar12 + 100 + param_1) = fVar17;
  *(undefined8 *)(lVar12 + 0x68 + param_1) = *param_3;
  *(undefined4 *)(lVar12 + 0x70 + param_1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(lVar12 + 0x78 + param_1) = param_5;
  *(int *)(lVar12 + 0x80 + param_1) = param_4;
  *(undefined4 *)(lVar12 + 0x84 + param_1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(lVar12 + 0x88 + param_1) = param_6;
  *(undefined1 *)(lVar12 + 0x74 + param_1) = 1;
  auVar16._0_8_ = FUN_18023c3d0(param_1);
  auVar16._8_8_ = extraout_XMM0_Qb;
  if (0.0 < *(float *)(param_1 + 0x38)) {
    fVar19 = (float)auVar16._0_8_;
    auVar16._0_4_ =
         fVar19 - ((*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x38)) +
                  *(float *)(param_1 + 0x34));
  }
  *(float *)(lVar12 + 0x9c + param_1) = auVar16._0_4_;
  *(float *)(lVar12 + 0xa0 + param_1) = auVar16._0_4_ + *(float *)(param_1 + 0x30);
  if (-1 < param_4) {
    lVar9 = lVar14 * 0x54;
    if (*(float *)(lVar9 + 0x90 + param_1) <= 0.0) {
      fVar19 = 0.0;
    }
    else {
      fVar19 = *(float *)(lVar9 + 0x8c + param_1);
    }
    *(float *)(lVar12 + 0x8c + param_1) = fVar19;
    *(float *)(lVar12 + 0x90 + param_1) = fVar19 + *(float *)(param_1 + 0x30);
    if (0.0 < *(float *)(lVar9 + 0x98 + param_1)) {
      fVar15 = *(float *)(lVar9 + 0x94 + param_1);
    }
    if (DAT_1809f2c38 == 0) {
      uVar8 = DAT_1809f2c40 & 0x800000ff;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
      }
      DAT_1809f2c40 = DAT_1809f2c40 + 1;
      if ((uVar8 == 0) &&
         (DAT_1809f2c38 = FUN_180264b70(PTR_s_inferno_child_spawn_interval_mul_1809f2c30),
         DAT_1809f2c38 != 0)) goto LAB_18023cb74;
LAB_18023cba1:
      fVar19 = DAT_1808ac0c0;
    }
    else {
LAB_18023cb74:
      fVar19 = (float)FUN_180264d70(DAT_1809f2c38);
      if (((uint)fVar19 & 0x7f800000) == 0x7f800000) goto LAB_18023cba1;
    }
    if (DAT_1809f2df8 == 0) {
      uVar8 = DAT_1809f2e00 & 0x800000ff;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
      }
      DAT_1809f2e00 = DAT_1809f2e00 + 1;
      if ((uVar8 == 0) &&
         (DAT_1809f2df8 = FUN_180264b70(PTR_s_inferno_max_child_spawn_interval_1809f2df0),
         DAT_1809f2df8 != 0)) goto LAB_18023cbf1;
LAB_18023cc1e:
      fVar17 = DAT_1808ac1f4;
    }
    else {
LAB_18023cbf1:
      fVar17 = (float)FUN_180264d70(DAT_1809f2df8);
      if (((uint)fVar17 & 0x7f800000) == 0x7f800000) goto LAB_18023cc1e;
    }
    if (fVar19 * fVar15 <= fVar17) {
      fVar17 = fVar19 * fVar15;
    }
    goto LAB_18023cc2e;
  }
  if (DAT_1809f2d08 == 0) {
    uVar8 = DAT_1809f2d10 & 0x800000ff;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2d10 = DAT_1809f2d10 + 1;
    if ((uVar8 == 0) &&
       (DAT_1809f2d08 = FUN_180264b70(PTR_s_inferno_per_flame_spawn_duration_1809f2d00),
       DAT_1809f2d08 != 0)) goto LAB_18023c9dc;
LAB_18023ca09:
    fVar19 = DAT_1808ac658;
  }
  else {
LAB_18023c9dc:
    fVar19 = (float)FUN_180264d70(DAT_1809f2d08);
    if (((uint)fVar19 & 0x7f800000) == 0x7f800000) goto LAB_18023ca09;
  }
  *(float *)(lVar12 + 0x8c + param_1) = fVar19;
  *(float *)(lVar12 + 0x90 + param_1) = fVar19 + *(float *)(param_1 + 0x30);
  if (DAT_1809f2de0 == 0) {
    uVar8 = DAT_1809f2de8 & 0x800000ff;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2de8 = DAT_1809f2de8 + 1;
    if ((uVar8 == 0) &&
       (DAT_1809f2de0 = FUN_180264b70(PTR_s_inferno_initial_spawn_interval_1809f2dd8),
       DAT_1809f2de0 != 0)) goto LAB_18023ca70;
LAB_18023ca9d:
    fVar17 = DAT_1808ac01c;
  }
  else {
LAB_18023ca70:
    fVar17 = (float)FUN_180264d70(DAT_1809f2de0);
    if (((uint)fVar17 & 0x7f800000) == 0x7f800000) goto LAB_18023ca9d;
  }
  lVar14 = lVar13;
LAB_18023cc2e:
  *(float *)(lVar12 + 0x94 + param_1) = fVar17;
  *(float *)(lVar12 + 0x98 + param_1) = fVar17 + *(float *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x1550 + lVar13 * 0xc) = *(undefined8 *)(lVar12 + 0x50 + param_1);
  *(undefined4 *)(param_1 + 0x1558 + lVar13 * 0xc) = *(undefined4 *)(lVar12 + 0x58 + param_1);
  uVar3 = *(undefined4 *)(lVar14 * 0x54 + 0x58 + param_1);
  *(undefined8 *)(param_1 + 0x1850 + lVar13 * 0xc) = *(undefined8 *)(lVar14 * 0x54 + 0x50 + param_1)
  ;
  *(undefined4 *)(param_1 + 0x1858 + lVar13 * 0xc) = uVar3;
  *(undefined1 *)(lVar13 + 0x1b50 + param_1) = 1;
  uVar3 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x1b90 + lVar13 * 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x1b98 + lVar13 * 0xc) = uVar3;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  *(undefined1 *)(param_1 + 0x1eaa) = 1;
  return 0;
}



/* ===== 18023ccf0 FUN_18023ccf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18023ccf0(longlong param_1)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined8 local_440;
  undefined1 *local_438;
  float local_428;
  float local_420;
  float local_418;
  float local_414;
  int local_410;
  float local_408;
  float local_404;
  float local_400;
  uint local_3f8;
  int local_3f4;
  undefined8 local_3f0;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3c8;
  float local_3c4;
  float local_3c0;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  float local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  float local_378;
  undefined8 local_374;
  float local_368;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  float local_318;
  float local_2f8;
  undefined8 local_2f4;
  float local_2ec;
  undefined8 local_2e8;
  float local_2e0;
  float local_2dc;
  undefined **local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined2 uStack_2a4;
  undefined1 uStack_2a2;
  undefined1 uStack_2a1;
  undefined1 uStack_2a0;
  undefined1 uStack_29f;
  undefined6 uStack_29e;
  undefined8 local_298;
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
  undefined1 local_218 [48];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  float local_16c;
  undefined4 local_164;
  undefined2 local_160;
  char local_15d;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_468;
  fVar22 = *(float *)(param_1 + 0x30);
  if ((0.0 < *(float *)(param_1 + 0x3c)) && (fVar22 < *(float *)(param_1 + 0x3c))) {
    return;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar16 = 0;
  *(float *)(param_1 + 0x3c) = fVar22 + 0.0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      lVar14 = (longlong)iVar16 * 0x54;
      if ((((*(char *)(param_1 + 0x74 + lVar14) != '\0') &&
           (fVar22 < *(float *)(param_1 + 0xa0 + lVar14))) &&
          (fVar22 < *(float *)(param_1 + 0x90 + lVar14))) &&
         (*(float *)(param_1 + 0x98 + lVar14) <= fVar22)) {
        piVar1 = (int *)(param_1 + 0x7c + lVar14);
        *piVar1 = *piVar1 + 1;
        *(float *)(param_1 + 0x98 + lVar14) = fVar22 + *(float *)(param_1 + 0x94 + lVar14);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_1 + 4));
  }
  local_414 = fVar22;
  (*DAT_180cf9ba8)(&DAT_180cf99a0,0);
  pcVar8 = DAT_180cf9ba8;
  fVar24 = *(float *)(param_1 + 0x1eb4) / DAT_1808ac864 -
           *(float *)(param_1 + 0x1ef0) / DAT_1808ac864;
  fVar25 = *(float *)(param_1 + 0x1eac) / DAT_1808ac864 -
           *(float *)(param_1 + 0x1ee8) / DAT_1808ac864;
  fVar27 = *(float *)(param_1 + 0x1eb0) / DAT_1808ac864 -
           *(float *)(param_1 + 0x1eec) / DAT_1808ac864;
  fVar23 = fVar27 * fVar27 + fVar25 * fVar25 + fVar24 * fVar24;
  if (fVar23 < 0.0) {
    fVar21 = (float)FUN_18051af10(fVar23);
  }
  else {
    fVar21 = SQRT(fVar23);
  }
  fVar28 = DAT_1808ac34c;
  local_2f8 = (float)*(int *)(param_1 + 8) * fVar21;
  if (fVar23 == 0.0) {
    local_2f4 = 0;
    local_2ec = 0.0;
  }
  else {
    fVar21 = DAT_1808ac34c / fVar21;
    local_2f4 = CONCAT44(fVar21 * fVar27 * DAT_1808acce8,fVar21 * fVar25 * DAT_1808acce8);
    local_2ec = fVar21 * fVar24 * DAT_1808acce8;
  }
  pfVar13 = &local_2f8;
  uVar18 = 0x417;
  local_2e8 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x1eb8) >> 0x20) *
                       _UNK_1808ad924,(float)*(undefined8 *)(param_1 + 0x1eb8) * _DAT_1808ad920);
  local_2e0 = *(float *)(param_1 + 0x1ec0) * DAT_1808ac0c0;
  do {
    local_420 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    uVar18 = uVar18 ^ ((uint)((int)local_420 * -0x3361d2af) >> 0x11 | (int)local_420 * 0x16a88000) *
                      0x1b873593;
    uVar18 = ((uVar18 >> 0x13 | uVar18 << 0xd) + 0xfaddaf14) * 5;
  } while (pfVar13 != &local_2dc);
  uVar18 = ((uVar18 ^ 0x1c0000) >> 0x10 ^ uVar18) * -0x7a143595;
  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  (*pcVar8)(&DAT_180cf99a0,uVar18 >> 0x10 ^ uVar18);
  if (DAT_1809f2db0 == 0) {
    uVar18 = DAT_1809f2db8 & 0x800000ff;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2db8 = DAT_1809f2db8 + 1;
    if ((uVar18 == 0) &&
       (DAT_1809f2db0 = FUN_180264b70(PTR_s_inferno_max_trace_per_tick_1809f2da8),
       DAT_1809f2db0 != 0)) goto LAB_18023d01e;
    iVar16 = 0x10;
  }
  else {
LAB_18023d01e:
    iVar16 = FUN_180264d70(DAT_1809f2db0);
  }
  if ((*(int *)(param_1 + 4) < 1) || (iVar16 < 1)) {
LAB_18023df88:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    return;
  }
  iVar20 = *(int *)(param_1 + 0x10);
  if (0x40 < iVar20) {
    iVar20 = 0x40;
  }
  if (iVar20 <= *(int *)(param_1 + 4)) goto LAB_18023df88;
  if (DAT_1809f2bd8 == 0) {
    uVar18 = DAT_1809f2be0 & 0x800000ff;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2be0 = DAT_1809f2be0 + 1;
    if ((uVar18 == 0) &&
       (DAT_1809f2bd8 = FUN_180264b70(PTR_s_inferno_spawn_angle_1809f2bd0), DAT_1809f2bd8 != 0))
    goto LAB_18023d0dd;
LAB_18023d10d:
    local_418 = DAT_1808aca68;
  }
  else {
LAB_18023d0dd:
    local_420 = (float)FUN_180264d70(DAT_1809f2bd8);
    local_418 = local_420;
    if (((uint)local_420 & 0x7f800000) == 0x7f800000) goto LAB_18023d10d;
  }
  fVar23 = local_418;
  if (DAT_1809f2c78 == 0) {
    uVar18 = DAT_1809f2c80 & 0x800000ff;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2c80 = DAT_1809f2c80 + 1;
    if ((uVar18 != 0) ||
       (DAT_1809f2c78 = FUN_180264b70(PTR_s_inferno_child_spawn_max_depth_1809f2c70),
       DAT_1809f2c78 == 0)) {
      local_3f0 = 4;
      goto LAB_18023d181;
    }
  }
  local_3f0 = FUN_180264d70(DAT_1809f2c78);
LAB_18023d181:
  fVar24 = DAT_1808ac2cc;
  local_3f8 = (uint)fVar23 ^ DAT_1808adec0;
  local_420 = 0.0;
  fVar25 = DAT_1808ac440;
  uVar18 = DAT_1808adec0;
  fVar27 = DAT_1808acbd0;
  fVar21 = DAT_1808abfd8;
  do {
    local_410 = (*(int *)(param_1 + 0xc) + (int)local_420) % *(int *)(param_1 + 4);
    lVar14 = (longlong)local_410 * 0x54;
    iVar20 = *(int *)(lVar14 + 0x7c + param_1);
    if (iVar20 != 0) {
      if (*(char *)(lVar14 + 0x74 + param_1) != '\0') {
        if (fVar22 < *(float *)(lVar14 + 0xa0 + param_1)) {
          iVar19 = *(int *)(lVar14 + 0x78 + param_1) + 1;
          if (iVar19 < (int)local_3f0) {
            *(int *)(lVar14 + 0x7c + param_1) = iVar20 + -1;
            local_3f4 = (*DAT_180cf9bb8)(&DAT_180cf99a0,0,3);
            iVar20 = 0;
            do {
              iVar10 = local_3f4;
              iVar12 = *(int *)(lVar14 + 0x80 + param_1);
              if (iVar12 < 0) {
                fVar22 = (float)(*DAT_180cf9bb0)(&DAT_180cf99a0);
                uVar18 = iVar20 + iVar10 & 0x80000003;
                if ((int)uVar18 < 0) {
                  uVar18 = (uVar18 - 1 | 0xfffffffc) + 1;
                }
                fVar22 = fVar22 + (float)(int)uVar18 * fVar25;
                fVar23 = (float)FUN_180517200(fVar22);
                fVar22 = (float)FUN_180517790(fVar22);
                fVar25 = 0.0;
              }
              else {
                lVar15 = (longlong)iVar12 * 0x54;
                local_378 = *(float *)(lVar14 + 0x50 + param_1) -
                            *(float *)(param_1 + 0x50 + lVar15);
                uVar3 = *(undefined8 *)(param_1 + 0x54 + lVar15);
                uVar4 = *(undefined8 *)(lVar14 + 0x54 + param_1);
                local_374 = CONCAT44((float)((ulonglong)uVar4 >> 0x20) -
                                     (float)((ulonglong)uVar3 >> 0x20),(float)uVar4 - (float)uVar3);
                pfVar13 = (float *)FUN_18023b790(local_348,&local_378);
                fVar22 = pfVar13[1];
                fVar25 = *pfVar13;
                fVar21 = pfVar13[2];
                if ((fVar22 == 0.0) && (fVar25 == 0.0)) {
                  fVar25 = 0.0;
                  if (fVar21 <= 0.0) {
                    fVar26 = DAT_1808acaf4;
                  }
                  else {
                    fVar26 = DAT_1808acba8;
                  }
                }
                else {
                  fVar25 = fVar25 * fVar25 + fVar22 * fVar22;
                  if (fVar25 < 0.0) {
                    FUN_18051af10(fVar25);
                  }
                  fVar26 = (float)FUN_180516b00((uint)fVar21 ^ uVar18);
                  fVar21 = DAT_1808acb58;
                  fVar25 = DAT_1808ac680;
                  fVar26 = (fVar26 * DAT_1808acb58) / DAT_1808ac680;
                  fVar22 = (float)FUN_180516b00(fVar22);
                  fVar25 = (fVar22 * fVar21) / fVar25;
                  if (fVar25 < 0.0) {
                    fVar25 = fVar25 + fVar27;
                  }
                  if (fVar26 < 0.0) {
                    fVar26 = fVar26 + fVar27;
                  }
                }
                if (iVar20 == 2) {
                  fVar25 = fVar25 - fVar23;
                }
                else if (iVar20 == 3) {
                  fVar25 = fVar25 + fVar23;
                }
                fVar22 = (float)(*DAT_180cf9bb0)(&DAT_180cf99a0);
                fVar26 = fVar26 * DAT_1808ac014;
                fVar22 = (fVar22 + fVar25) * DAT_1808ac014;
                fVar25 = (float)FUN_180517200(fVar26);
                fVar23 = (float)FUN_180517200(fVar22);
                fVar23 = fVar23 * fVar25;
                fVar22 = (float)FUN_180517790(fVar22);
                fVar22 = fVar22 * fVar25;
                uVar18 = FUN_180517790(fVar26);
                fVar25 = (float)(uVar18 ^ DAT_1808adec0);
                fVar21 = DAT_1808abfd8;
              }
              if (DAT_1809f2c08 == 0) {
                uVar18 = DAT_1809f2c10 & 0x800000ff;
                if ((int)uVar18 < 0) {
                  uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                }
                DAT_1809f2c10 = DAT_1809f2c10 + 1;
                if ((uVar18 == 0) &&
                   (DAT_1809f2c08 = FUN_180264b70(PTR_s_inferno_velocity_decay_factor_1809f2c00),
                   DAT_1809f2c08 != 0)) goto LAB_18023d4a2;
LAB_18023d4c9:
                fVar27 = DAT_1808ac118;
              }
              else {
LAB_18023d4a2:
                local_428 = (float)FUN_180264d70(DAT_1809f2c08);
                fVar27 = local_428;
                if (((uint)local_428 & 0x7f800000) == 0x7f800000) goto LAB_18023d4c9;
              }
              fVar26 = (float)FUN_18051afb0(fVar27);
              fVar27 = *(float *)(lVar14 + 0xa0 + param_1);
              if ((fVar27 <= 0.0) ||
                 (fVar27 = (fVar27 - local_414) / *(float *)(lVar14 + 0x9c + param_1), fVar27 < 0.0)
                 ) {
                fVar27 = 0.0;
              }
              else if (fVar28 <= fVar27) {
                fVar27 = fVar28;
              }
              if (DAT_1809f2d98 == 0) {
                uVar18 = DAT_1809f2da0 & 0x800000ff;
                if ((int)uVar18 < 0) {
                  uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                }
                DAT_1809f2da0 = DAT_1809f2da0 + 1;
                if ((uVar18 == 0) &&
                   (DAT_1809f2d98 = FUN_180264b70(PTR_s_inferno_ct_experiment_1809f2d90),
                   DAT_1809f2d98 != 0)) goto LAB_18023d55f;
LAB_18023d66f:
                if (DAT_1809f2c60 == 0) {
                  uVar18 = DAT_1809f2c68 & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  DAT_1809f2c68 = DAT_1809f2c68 + 1;
                  if ((uVar18 == 0) &&
                     (DAT_1809f2c60 = FUN_180264b70(PTR_s_inferno_velocity_factor_1809f2c58),
                     DAT_1809f2c60 != 0)) goto LAB_18023d6b7;
LAB_18023d6de:
                  fVar28 = fVar21;
                }
                else {
LAB_18023d6b7:
                  local_428 = (float)FUN_180264d70(DAT_1809f2c60);
                  fVar28 = local_428;
                  if (((uint)local_428 & 0x7f800000) == 0x7f800000) goto LAB_18023d6de;
                }
                if (DAT_1809f2d20 == 0) {
                  uVar18 = DAT_1809f2d28 & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  DAT_1809f2d28 = DAT_1809f2d28 + 1;
                  if (uVar18 == 0) {
                    DAT_1809f2d20 = FUN_180264b70(PTR_s_inferno_max_range_1809f2d18);
                    if (DAT_1809f2d20 != 0) goto LAB_18023d72a;
                  }
                }
                else {
LAB_18023d72a:
                  fVar21 = (float)FUN_180264d70(DAT_1809f2d20);
                  local_428 = fVar21;
                  if (((uint)fVar21 & 0x7f800000) != 0x7f800000) goto LAB_18023d75c;
                }
                fVar21 = DAT_1808acb34;
              }
              else {
LAB_18023d55f:
                cVar11 = FUN_180264d70(DAT_1809f2d98);
                if ((cVar11 == '\0') || (*(int *)(param_1 + 0x14) == 0)) goto LAB_18023d66f;
                if (DAT_1809f2bc0 == 0) {
                  uVar18 = DAT_1809f2bc8 & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  DAT_1809f2bc8 = DAT_1809f2bc8 + 1;
                  if ((uVar18 == 0) &&
                     (DAT_1809f2bc0 = FUN_180264b70(PTR_s_inferno_velocity_factor_ct_1809f2bb8),
                     DAT_1809f2bc0 != 0)) goto LAB_18023d5c1;
LAB_18023d5e8:
                  fVar28 = fVar21;
                }
                else {
LAB_18023d5c1:
                  local_428 = (float)FUN_180264d70(DAT_1809f2bc0);
                  fVar28 = local_428;
                  if (((uint)local_428 & 0x7f800000) == 0x7f800000) goto LAB_18023d5e8;
                }
                if (DAT_1809f2c90 == 0) {
                  uVar18 = DAT_1809f2c98 & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  DAT_1809f2c98 = DAT_1809f2c98 + 1;
                  if ((uVar18 == 0) &&
                     (DAT_1809f2c90 = FUN_180264b70(PTR_s_inferno_max_range_ct_1809f2c88),
                     DAT_1809f2c90 != 0)) goto LAB_18023d634;
LAB_18023d661:
                  fVar21 = DAT_1808acb0c;
                }
                else {
LAB_18023d634:
                  local_428 = (float)FUN_180264d70(DAT_1809f2c90);
                  fVar21 = local_428;
                  if (((uint)local_428 & 0x7f800000) == 0x7f800000) goto LAB_18023d661;
                }
              }
LAB_18023d75c:
              fVar2 = *(float *)(lVar14 + 0x68 + param_1);
              fVar28 = fVar27 * fVar26 * fVar28;
              fVar27 = *(float *)(lVar14 + 0x70 + param_1);
              fVar22 = fVar28 * *(float *)(param_1 + 0x24) + fVar22;
              fVar23 = fVar28 * *(float *)(param_1 + 0x20) + fVar23;
              fVar25 = fVar28 * *(float *)(param_1 + 0x28) + fVar25;
              fVar28 = *(float *)(lVar14 + 0x6c + param_1);
              fVar26 = fVar28 * fVar25 - fVar27 * fVar22;
              fVar25 = fVar27 * fVar23 - fVar2 * fVar25;
              fVar22 = fVar2 * fVar22 - fVar28 * fVar23;
              local_3e0 = fVar28 * fVar26 - fVar2 * fVar25;
              local_3e4 = fVar2 * fVar22 - fVar27 * fVar26;
              fVar26 = fVar21 * DAT_1808ac1f4;
              local_3e8 = fVar27 * fVar25 - fVar28 * fVar22;
              fVar22 = (float)(*DAT_180cf9bb0)(&DAT_180cf99a0);
              fVar26 = fVar26 - fVar22;
              pfVar13 = (float *)FUN_18023b790(local_338,&local_3e8);
              fVar22 = *(float *)(lVar14 + 0x58 + param_1);
              fVar23 = *(float *)(param_1 + 0x1eac);
              fVar25 = *(float *)(param_1 + 0x1eb0);
              local_408 = fVar26 * *pfVar13 + *(float *)(lVar14 + 0x50 + param_1);
              local_404 = fVar26 * pfVar13[1] + *(float *)(lVar14 + 0x54 + param_1);
              fVar27 = *(float *)(param_1 + 0x1eb4);
              fVar28 = fVar26 * pfVar13[2] + fVar22;
              local_3d8 = local_408 - fVar23;
              local_3d4 = local_404 - fVar25;
              local_3d0 = fVar28 - fVar27;
              if (fVar21 * fVar21 <
                  local_3d8 * local_3d8 + local_3d4 * local_3d4 + local_3d0 * local_3d0) {
                pfVar13 = (float *)FUN_18023b790(local_328,&local_3d8);
                local_408 = fVar21 * *pfVar13 + fVar23;
                local_404 = fVar21 * pfVar13[1] + fVar25;
                fVar28 = fVar21 * pfVar13[2] + fVar27;
              }
              fVar25 = local_404;
              fVar23 = local_408;
              local_3b0 = fVar28 + DAT_1808aca80;
              local_3c0 = fVar22 - DAT_1808acb60;
              local_3c8 = local_408;
              local_3c4 = local_404;
              local_3b8 = local_408;
              local_3b4 = local_404;
              if ((DAT_180961f48 == 0) || (DAT_180961f40 == 0)) {
LAB_18023df80:
                iVar16 = iVar16 + -1;
                fVar28 = DAT_1808ac34c;
LAB_18023dcd7:
                if (DAT_1809f2e10 == 0) {
                  uVar18 = DAT_1809f2e18 & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  DAT_1809f2e18 = DAT_1809f2e18 + 1;
                  if ((uVar18 == 0) &&
                     (DAT_1809f2e10 =
                           FUN_180264b70(PTR_s_inferno_forward_reduction_factor_1809f2e08),
                     DAT_1809f2e10 != 0)) goto LAB_18023dd1f;
LAB_18023dd46:
                  fVar22 = fVar24;
                }
                else {
LAB_18023dd1f:
                  local_428 = (float)FUN_180264d70(DAT_1809f2e10);
                  fVar22 = local_428;
                  if (((uint)local_428 & 0x7f800000) == 0x7f800000) goto LAB_18023dd46;
                }
                *(ulonglong *)(param_1 + 0x20) =
                     CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar22,
                              (float)*(undefined8 *)(param_1 + 0x20) * fVar22);
                *(float *)(param_1 + 0x28) = fVar22 * *(float *)(param_1 + 0x28);
              }
              else {
                lVar15 = FUN_18000f3a0();
                uVar4 = _UNK_1808adf98;
                uVar3 = _DAT_1808adf90;
                if (lVar15 == 0) goto LAB_18023df80;
                local_2a8 = 0;
                uStack_2a2 = 0;
                uStack_29e = 0;
                local_2d8 = &PTR_FUN_1809f2cf0;
                uStack_2c0 = 0;
                uStack_2a4 = 0xffff;
                uStack_290 = 0;
                uStack_2d0 = 0x1001;
                local_288 = 0;
                uStack_280 = 0;
                local_2c8 = 0;
                local_278 = 0;
                uStack_270 = 0;
                uStack_2a1 = 0xf;
                uStack_2a0 = 3;
                local_268 = 0;
                uStack_260 = 0;
                uStack_29f = 0x49;
                local_2b8 = _DAT_1808adf90;
                uStack_2b0 = _UNK_1808adf98;
                local_298 = 1;
                local_258 = 0;
                uStack_250 = 0;
                local_248 = 0;
                uStack_240 = 0;
                local_238 = 0;
                uStack_230 = 0;
                local_228 = 0;
                uStack_220 = 0;
                FUN_180540170(local_218,0,0x140);
                uVar7 = _UNK_1808adae8;
                uVar6 = _DAT_1808adae0;
                local_438 = local_218;
                local_440 = &local_2d8;
                local_1e8 = _DAT_1808adae0;
                uStack_1e0 = _UNK_1808adae8;
                local_448 = &local_3c8;
                local_1d8 = _DAT_1808adae0;
                uStack_1d0 = _UNK_1808adae8;
                local_16c = 1.0;
                local_164 = 0xffffffff;
                local_160 = 0xffff;
                cVar11 = FUN_18023bc30(DAT_180961f48,lVar15,&local_258,&local_3b8);
                fVar28 = DAT_1808ac34c;
                if ((cVar11 == '\0') ||
                   ((local_318 = local_16c, local_15d == '\0' && (DAT_1808ac34c <= local_16c))))
                goto LAB_18023df80;
                local_388 = local_188;
                local_398 = *(undefined4 *)(lVar14 + 0x50 + param_1);
                local_384 = local_184;
                local_394 = *(undefined4 *)(lVar14 + 0x54 + param_1);
                local_400 = local_18c;
                local_390 = *(float *)(lVar14 + 0x58 + param_1) + DAT_1808ac9e4;
                local_3a0 = local_18c + DAT_1808ac9e4;
                local_380 = local_180;
                local_368 = DAT_1808ac34c;
                fVar22 = fVar28;
                local_3a8 = fVar23;
                local_3a4 = fVar25;
                if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) &&
                   (lVar15 = FUN_18000f3a0(), lVar15 != 0)) {
                  local_2a8 = 0;
                  uStack_2a2 = 0;
                  uStack_29e = 0;
                  local_2d8 = &PTR_FUN_1809f2ba8;
                  uStack_2d0 = 0x1001;
                  uStack_2c0 = 0;
                  uStack_2a4 = 0xffff;
                  uStack_290 = 0;
                  local_2c8 = 0x40000;
                  local_288 = 0;
                  uStack_280 = 0;
                  uStack_2a1 = 0xf;
                  uStack_2a0 = 3;
                  local_278 = 0;
                  uStack_270 = 0;
                  uStack_29f = 0x49;
                  local_268 = 0;
                  uStack_260 = 0;
                  local_298 = 1;
                  local_2b8 = uVar3;
                  uStack_2b0 = uVar4;
                  local_258 = 0;
                  uStack_250 = 0;
                  local_248 = 0;
                  uStack_240 = 0;
                  local_238 = 0;
                  uStack_230 = 0;
                  local_228 = 0;
                  uStack_220 = 0;
                  FUN_180540170(local_218,0,0x140);
                  local_438 = local_218;
                  local_440 = &local_2d8;
                  local_1e8 = uVar6;
                  uStack_1e0 = uVar7;
                  local_448 = &local_3a8;
                  local_1d8 = uVar6;
                  uStack_1d0 = uVar7;
                  local_16c = 1.0;
                  local_164 = 0xffffffff;
                  local_160 = 0xffff;
                  cVar11 = FUN_18023bc30(DAT_180961f48,lVar15,&local_258,&local_398);
                  if (cVar11 != '\0') {
                    local_368 = local_16c;
                  }
                  fVar22 = local_368;
                }
                puVar9 = DAT_180cf9be0;
                iVar16 = iVar16 + -2;
                if (fVar22 < fVar28) goto LAB_18023dcd7;
                fVar22 = (float)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)) *
                         DAT_1808ac00c;
                for (puVar17 = DAT_180cf9bd8; puVar17 != puVar9; puVar17 = puVar17 + 1) {
                  cVar11 = FUN_18023c180(&local_408,*puVar17,fVar22);
                  if (cVar11 != '\0') goto LAB_18023de88;
                }
                uVar5 = (ulonglong)local_440 >> 0x20;
                local_440 = (undefined ***)CONCAT44((int)uVar5,iVar20);
                uVar5 = (ulonglong)local_448 >> 0x20;
                local_448 = (float *)CONCAT44((int)uVar5,iVar19);
                iVar12 = FUN_18023c710(param_1,&local_408,&local_388,local_410);
                if (iVar12 < 2) break;
                if (iVar12 != 2) {
                  if (DAT_1809f2e10 == 0) {
                    uVar18 = DAT_1809f2e18 & 0x800000ff;
                    if ((int)uVar18 < 0) {
                      uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                    }
                    DAT_1809f2e18 = DAT_1809f2e18 + 1;
                    if ((uVar18 == 0) &&
                       (DAT_1809f2e10 =
                             FUN_180264b70(PTR_s_inferno_forward_reduction_factor_1809f2e08),
                       DAT_1809f2e10 != 0)) goto LAB_18023de38;
LAB_18023de5f:
                    fVar22 = fVar24;
                  }
                  else {
LAB_18023de38:
                    local_428 = (float)FUN_180264d70(DAT_1809f2e10);
                    fVar22 = local_428;
                    if (((uint)local_428 & 0x7f800000) == 0x7f800000) goto LAB_18023de5f;
                  }
                  *(ulonglong *)(param_1 + 0x20) =
                       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar22
                                ,(float)*(undefined8 *)(param_1 + 0x20) * fVar22);
                  *(float *)(param_1 + 0x28) = fVar22 * *(float *)(param_1 + 0x28);
                }
              }
LAB_18023de88:
              iVar20 = iVar20 + 1;
              fVar25 = DAT_1808ac440;
              uVar18 = DAT_1808adec0;
              fVar27 = DAT_1808acbd0;
              fVar21 = DAT_1808abfd8;
              fVar23 = local_418;
            } while (iVar20 < 4);
            fVar25 = DAT_1808ac440;
            uVar18 = DAT_1808adec0;
            fVar22 = local_414;
            fVar27 = DAT_1808acbd0;
            fVar21 = DAT_1808abfd8;
            fVar23 = local_418;
          }
        }
      }
    }
    local_420 = (float)((int)local_420 + 1);
    if ((*(int *)(param_1 + 4) <= (int)local_420) || (iVar16 < 1)) break;
    iVar20 = *(int *)(param_1 + 0x10);
    if (0x40 < iVar20) {
      iVar20 = 0x40;
    }
  } while (*(int *)(param_1 + 4) < iVar20);
  *(int *)(param_1 + 0xc) = local_410 + 1;
  return;
}



/* ===== 18023e000 FUN_18023e000 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18023e000(char *param_1,float *param_2)

{
  ulonglong *puVar1;
  float *pfVar2;
  float fVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_1ff0;
  undefined1 auStack_1fe8 [8];
  undefined1 auStack_1fe0 [64];
  ulonglong local_1fa0;
  undefined8 uStack_1f98;
  longlong local_1f90;
  undefined4 local_1f68;
  undefined8 local_1f64;
  undefined4 local_1f5c;
  undefined8 local_1f58;
  undefined8 uStack_1f50;
  undefined8 local_1f48;
  undefined8 uStack_1f40;
  undefined8 local_1f38;
  undefined8 uStack_1f30;
  undefined8 local_1f28;
  undefined8 uStack_1f20;
  undefined1 local_1f18 [5376];
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
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
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
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
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
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
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
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
  undefined2 local_c0;
  undefined1 local_be;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  puVar13 = auStack_1fe8;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1fe8;
  if ((((((param_1[0x1ea8] != '\0') && (*(float *)(param_1 + 0x1ec4) == *param_2)) &&
        (*(float *)(param_1 + 0x1ec8) == param_2[1])) &&
       ((*(float *)(param_1 + 0x1ecc) == param_2[2] && (*(float *)(param_1 + 0x1ed0) == param_2[3]))
       )) && (((*(float *)(param_1 + 0x1ed4) == param_2[4] &&
               ((*(float *)(param_1 + 0x1ed8) == param_2[5] &&
                (*(float *)(param_1 + 0x1edc) == param_2[6])))) &&
              (*(float *)(param_1 + 0x1ee0) == param_2[7])))) &&
     ((((*(float *)(param_1 + 0x1ee4) == param_2[8] && (*(float *)(param_1 + 0x1ee8) == param_2[9]))
       && (*(float *)(param_1 + 0x1eec) == param_2[10])) &&
      (((*(float *)(param_1 + 0x1ef0) == param_2[0xb] &&
        (*(float *)(param_1 + 0x1ef4) == param_2[0xc])) &&
       ((*(float *)(param_1 + 0x1ef8) == param_2[0xd] &&
        (*(float *)(param_1 + 0x1efc) == param_2[0xe])))))))) {
    uVar8 = 0;
    goto LAB_18023eb2c;
  }
  puVar1 = (ulonglong *)(param_1 + 0x1e90);
  lVar15 = *(longlong *)(param_1 + 0x1ea0);
  param_1[0x1ea0] = '\0';
  param_1[0x1ea1] = '\0';
  param_1[0x1ea2] = '\0';
  param_1[0x1ea3] = '\0';
  param_1[0x1ea4] = '\0';
  param_1[0x1ea5] = '\0';
  param_1[0x1ea6] = '\0';
  param_1[0x1ea7] = '\0';
  uVar8 = *(undefined8 *)(param_1 + 0x1e98);
  param_1[0x1e98] = '\0';
  param_1[0x1e99] = '\0';
  param_1[0x1e9a] = '\0';
  param_1[0x1e9b] = '\0';
  param_1[0x1e9c] = '\0';
  param_1[0x1e9d] = '\0';
  param_1[0x1e9e] = '\0';
  param_1[0x1e9f] = '\0';
  uVar14 = *puVar1;
  *puVar1 = 0;
  local_1f68 = 0;
  local_1f64 = 0;
  local_1f5c = 0;
  local_1f58 = _DAT_1808ad290;
  uStack_1f50 = _UNK_1808ad298;
  local_1f48 = 0;
  uStack_1f40 = 0;
  local_1f38 = 0;
  uStack_1f30 = 0;
  local_1f28 = 0;
  uStack_1f20 = 0;
  local_1fa0 = uVar14;
  uStack_1f98 = uVar8;
  local_1f90 = lVar15;
  FUN_180540170(local_1f18,0,0x1500);
  FUN_180240980(local_1f18);
  FUN_180540170(&local_a18,0,0x300);
  local_a18 = 0;
  uStack_a10 = 0;
  local_a08 = 0;
  uStack_a00 = 0;
  local_9f8 = 0;
  uStack_9f0 = 0;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d8 = 0;
  uStack_9d0 = 0;
  local_9c8 = 0;
  uStack_9c0 = 0;
  local_9b8 = 0;
  uStack_9b0 = 0;
  local_9a8 = 0;
  uStack_9a0 = 0;
  local_998 = 0;
  uStack_990 = 0;
  local_988 = 0;
  uStack_980 = 0;
  local_978 = 0;
  uStack_970 = 0;
  local_968 = 0;
  uStack_960 = 0;
  local_958 = 0;
  uStack_950 = 0;
  local_948 = 0;
  uStack_940 = 0;
  local_938 = 0;
  uStack_930 = 0;
  local_928 = 0;
  uStack_920 = 0;
  local_918 = 0;
  uStack_910 = 0;
  local_908 = 0;
  uStack_900 = 0;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_8b8 = 0;
  uStack_8b0 = 0;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_888 = 0;
  uStack_880 = 0;
  local_878 = 0;
  uStack_870 = 0;
  local_868 = 0;
  uStack_860 = 0;
  local_858 = 0;
  uStack_850 = 0;
  local_848 = 0;
  uStack_840 = 0;
  local_838 = 0;
  uStack_830 = 0;
  local_828 = 0;
  uStack_820 = 0;
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0;
  uStack_800 = 0;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_7e8 = 0;
  uStack_7e0 = 0;
  local_7d8 = 0;
  uStack_7d0 = 0;
  local_7c8 = 0;
  uStack_7c0 = 0;
  local_7b8 = 0;
  uStack_7b0 = 0;
  local_7a8 = 0;
  uStack_7a0 = 0;
  local_798 = 0;
  uStack_790 = 0;
  local_788 = 0;
  uStack_780 = 0;
  local_778 = 0;
  uStack_770 = 0;
  local_768 = 0;
  uStack_760 = 0;
  local_758 = 0;
  uStack_750 = 0;
  local_748 = 0;
  uStack_740 = 0;
  local_738 = 0;
  uStack_730 = 0;
  local_728 = 0;
  uStack_720 = 0;
  FUN_180540170(&local_718,0,0x300);
  local_718 = 0;
  uStack_710 = 0;
  local_708 = 0;
  uStack_700 = 0;
  local_6f8 = 0;
  uStack_6f0 = 0;
  local_6e8 = 0;
  uStack_6e0 = 0;
  local_6d8 = 0;
  uStack_6d0 = 0;
  local_6c8 = 0;
  uStack_6c0 = 0;
  local_6b8 = 0;
  uStack_6b0 = 0;
  local_6a8 = 0;
  uStack_6a0 = 0;
  local_698 = 0;
  uStack_690 = 0;
  local_688 = 0;
  uStack_680 = 0;
  local_678 = 0;
  uStack_670 = 0;
  local_668 = 0;
  uStack_660 = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  uStack_610 = 0;
  local_608 = 0;
  uStack_600 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  uStack_570 = 0;
  local_568 = 0;
  uStack_560 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  uStack_420 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  FUN_180540170(&local_3d8,0,0x300);
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
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
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
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
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
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
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
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
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_be = 0;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_18023eb60(param_1,&local_1f68);
  FUN_1802414e0(&local_d8);
  puVar13 = auStack_1fe8;
  puVar11 = auStack_1fe8;
  puVar12 = auStack_1fe8;
  if (puVar1 != &local_1fa0) {
    uVar10 = *puVar1;
    puVar13 = auStack_1fe8;
    if (uVar10 != 0) {
      uVar9 = uVar10;
      if ((ulonglong)(((longlong)(*(longlong *)(param_1 + 0x1ea0) - uVar10) >> 2) * 4) < 0x1000) {
LAB_18023e717:
        puVar12 = puVar11;
      }
      else {
        uVar9 = *(ulonglong *)(uVar10 - 8);
        if (0x1f < (uVar10 - uVar9) - 8) {
          uVar9 = 5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar11 = auStack_1fe0;
          goto LAB_18023e717;
        }
      }
      *(undefined8 *)(puVar12 + -8) = 0x18023e722;
      thunk_FUN_1803d64e0(uVar9);
      puVar13 = puVar12;
    }
    *puVar1 = uVar14;
    *(undefined8 *)(param_1 + 0x1e98) = uVar8;
    *(longlong *)(param_1 + 0x1ea0) = lVar15;
    uVar14 = 0;
    *(undefined8 *)(puVar13 + 0x48) = 0;
    *(undefined8 *)(puVar13 + 0x50) = 0;
    lVar15 = 0;
    *(undefined8 *)(puVar13 + 0x58) = 0;
  }
  if (*puVar1 != *(ulonglong *)(param_1 + 0x1e98)) {
    *(ulonglong *)(param_1 + 0x1e98) = *puVar1;
  }
  param_1[0x1ea8] = '\x01';
  uVar8 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x1ec4) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x1ecc) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x1ed4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x1edc) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x1ee4) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x1eec) = uVar8;
  fVar16 = param_2[0xc];
  fVar19 = param_2[0xd];
  fVar17 = param_2[0xe];
  *(float *)(param_1 + 0x1ef0) = param_2[0xb];
  *(float *)(param_1 + 0x1ef4) = fVar16;
  *(float *)(param_1 + 0x1ef8) = fVar19;
  *(float *)(param_1 + 0x1efc) = fVar17;
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = -0x80;
  param_1[0x3b] = -0x41;
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = -0x80;
  param_1[0x3f] = -0x41;
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = -0x80;
  param_1[0x47] = -0x41;
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = -0x80;
  param_1[0x4f] = -0x41;
  *(float *)(param_1 + 0x14) = param_2[0xc];
  *(float *)(param_1 + 0x18) = param_2[0xd];
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (DAT_1809f2c20 == 0) {
    uVar5 = DAT_1809f2c28 & 0x800000ff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2c28 = DAT_1809f2c28 + 1;
    if (uVar5 == 0) {
      *(undefined8 *)(puVar13 + -8) = 0x18023e7f6;
      DAT_1809f2c20 = FUN_180264b70(PTR_s_inferno_max_flames_1809f2c18);
      if (DAT_1809f2c20 != 0) goto LAB_18023e802;
    }
    iVar6 = 0x10;
  }
  else {
LAB_18023e802:
    *(undefined8 *)(puVar13 + -8) = 0x18023e80a;
    iVar6 = FUN_180264d70(DAT_1809f2c20);
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (0x40 < iVar6) {
    iVar6 = 0x40;
  }
  *(int *)(param_1 + 0x10) = iVar6;
  fVar19 = (float)(int)param_2[0xd] * DAT_1808ac00c;
  fVar16 = fVar19 + param_2[0xe];
  *(float *)(param_1 + 0x30) = fVar16;
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x1ea9] = '\0';
  param_1[0x1eaa] = '\x01';
  *(float *)(param_1 + 0x3c) = fVar16 + 0.0;
  if (DAT_1809f2b98 == 0) {
    uVar5 = DAT_1809f2ba0 & 0x800000ff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2ba0 = DAT_1809f2ba0 + 1;
    if (uVar5 == 0) {
      *(undefined8 *)(puVar13 + -8) = 0x18023e897;
      DAT_1809f2b98 = FUN_180264b70(PTR_s_inferno_surface_offset_1809f2b90);
      if (DAT_1809f2b98 != 0) goto LAB_18023e8a3;
    }
LAB_18023e8ca:
    fVar16 = DAT_1808ac900;
  }
  else {
LAB_18023e8a3:
    *(undefined8 *)(puVar13 + -8) = 0x18023e8ab;
    uVar7 = FUN_180264d70(DAT_1809f2b98);
    *(undefined4 *)(puVar13 + 0x40) = uVar7;
    fVar16 = *(float *)(puVar13 + 0x40);
    if (((uint)*(float *)(puVar13 + 0x40) & 0x7f800000) == 0x7f800000) goto LAB_18023e8ca;
  }
  fVar17 = param_2[2];
  pfVar2 = (float *)(param_1 + 0x1eac);
  *(ulonglong *)pfVar2 =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20) * fVar16 +
                (float)((ulonglong)*(undefined8 *)param_2 >> 0x20),
                (float)*(undefined8 *)(param_2 + 3) * fVar16 + (float)*(undefined8 *)param_2);
  *(float *)(param_1 + 0x1eb4) = fVar17;
  fVar18 = DAT_1808ac34c;
  *(undefined4 *)(puVar13 + 0x60) = 0x3f800000;
  puVar13[100] = 0;
  *(undefined8 *)(puVar13 + 0x68) = 0;
  *(undefined8 *)(puVar13 + 0x70) = 0;
  *(undefined8 *)(puVar13 + 0x78) = 0;
  *(undefined8 *)(puVar13 + 0x38) = 0;
  *(undefined1 **)(puVar13 + 0x30) = puVar13 + 0x60;
  puVar13[0x28] = 3;
  *(undefined8 *)(puVar13 + 0x20) = 0x40000;
  *(undefined8 *)(puVar13 + -8) = 0x18023e95a;
  FUN_18023bcf0(param_2,pfVar2,&PTR_FUN_1809f2ba8,0x1001);
  fVar17 = DAT_1808ac294;
  fVar16 = *(float *)(puVar13 + 0x60);
  if ((puVar13[100] != '\0') || (fVar16 < fVar18)) {
    fVar18 = param_2[1];
    fVar3 = param_2[2];
    *pfVar2 = (*pfVar2 - *param_2) * fVar16 * DAT_1808ac294 + *param_2;
    *(float *)(param_1 + 0x1eb0) =
         (*(float *)(param_1 + 0x1eb0) - fVar18) * fVar16 * fVar17 + fVar18;
    *(float *)(param_1 + 0x1eb4) = (*(float *)(param_1 + 0x1eb4) - fVar3) * fVar16 * fVar17 + fVar3;
  }
  fVar18 = param_2[7] * param_2[4] + param_2[6] * param_2[3] + param_2[8] * param_2[5];
  fVar16 = (float)*(undefined8 *)(param_2 + 6) - (float)*(undefined8 *)(param_2 + 3) * fVar18;
  fVar17 = (float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20) * fVar18;
  *(float *)(param_1 + 0x28) = param_2[8] - param_2[5] * fVar18;
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(fVar17,fVar16);
  *(ulonglong *)(param_1 + 0x1eb8) = CONCAT44(fVar17,fVar16);
  *(undefined4 *)(param_1 + 0x1ec0) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(puVar13 + 0x28) = 0;
  *(undefined4 *)(puVar13 + 0x20) = 0;
  *(undefined8 *)(puVar13 + -8) = 0x18023ea63;
  iVar6 = FUN_18023c710(param_1,pfVar2,param_2 + 3,0xffffffff);
  if (iVar6 == 0) {
    *(undefined8 *)pfVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x1eb4) = *(undefined4 *)(param_1 + 0x58);
    *(undefined8 *)(puVar13 + -8) = 0x18023ea8a;
    fVar16 = (float)FUN_18023c3d0(param_1);
    *(float *)(param_1 + 0x34) = fVar16;
    *(float *)(param_1 + 0x38) = fVar16 + *(float *)(param_1 + 0x30);
    if (param_1[3] == '\0') {
      param_1[3] = '\x01';
      goto LAB_18023eaa3;
    }
  }
  else if (*param_1 == '\0') {
    *param_1 = '\x01';
LAB_18023eaa3:
    param_1[0x1eaa] = '\x01';
  }
  *(float *)(param_1 + 0x30) = fVar19;
  *(float *)(param_1 + 0x2c) = (float)((int)param_2[0xd] + 1) * DAT_1808ac00c;
  if (param_1[0x1eaa] != '\0') {
    *(undefined8 *)(puVar13 + -8) = 0x18023ead9;
    FUN_18023c4e0(param_1);
  }
  if (uVar14 != 0) {
    uVar10 = uVar14;
    if (0xfff < (ulonglong)(((longlong)(lVar15 - uVar14) >> 2) * 4)) {
      uVar10 = *(ulonglong *)(uVar14 - 8);
      uVar14 = (uVar14 - uVar10) - 8;
      if (0x1f < uVar14) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar13 = puVar13 + 8;
        uVar10 = uVar14;
      }
    }
    *(undefined8 *)(puVar13 + -8) = 0x18023eb2a;
    thunk_FUN_1803d64e0(uVar10);
  }
  uVar8 = 1;
LAB_18023eb2c:
  *(undefined8 *)(puVar13 + -8) = 0x18023eb3b;
  return uVar8;
}



/* ===== 18023eb60 FUN_18023eb60 ===== */

undefined1 * FUN_18023eb60(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  FUN_180540530(param_1 + 0x50,param_2 + 0x50,0x1500);
  lVar8 = 6;
  lVar7 = 6;
  puVar5 = (undefined8 *)(param_1 + 0x1550);
  puVar6 = (undefined8 *)(param_2 + 0x1550);
  do {
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    uVar4 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar4;
    uVar4 = puVar6[5];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar4;
    uVar4 = puVar6[7];
    puVar5[6] = puVar6[6];
    puVar5[7] = uVar4;
    uVar4 = puVar6[9];
    puVar5[8] = puVar6[8];
    puVar5[9] = uVar4;
    uVar4 = puVar6[0xb];
    puVar5[10] = puVar6[10];
    puVar5[0xb] = uVar4;
    uVar4 = puVar6[0xd];
    puVar5[0xc] = puVar6[0xc];
    puVar5[0xd] = uVar4;
    uVar4 = puVar6[0xf];
    puVar5[0xe] = puVar6[0xe];
    puVar5[0xf] = uVar4;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar7 != 0);
  lVar7 = 6;
  puVar5 = (undefined8 *)(param_1 + 0x1850);
  puVar6 = (undefined8 *)(param_2 + 0x1850);
  do {
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    uVar4 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar4;
    uVar4 = puVar6[5];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar4;
    uVar4 = puVar6[7];
    puVar5[6] = puVar6[6];
    puVar5[7] = uVar4;
    uVar4 = puVar6[9];
    puVar5[8] = puVar6[8];
    puVar5[9] = uVar4;
    uVar4 = puVar6[0xb];
    puVar5[10] = puVar6[10];
    puVar5[0xb] = uVar4;
    uVar4 = puVar6[0xd];
    puVar5[0xc] = puVar6[0xc];
    puVar5[0xd] = uVar4;
    uVar4 = puVar6[0xf];
    puVar5[0xe] = puVar6[0xe];
    puVar5[0xf] = uVar4;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar7 != 0);
  uVar4 = *(undefined8 *)(param_2 + 7000);
  *(undefined8 *)(param_1 + 0x1b50) = *(undefined8 *)(param_2 + 0x1b50);
  *(undefined8 *)(param_1 + 7000) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1b68);
  *(undefined8 *)(param_1 + 0x1b60) = *(undefined8 *)(param_2 + 0x1b60);
  *(undefined8 *)(param_1 + 0x1b68) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1b78);
  *(undefined8 *)(param_1 + 0x1b70) = *(undefined8 *)(param_2 + 0x1b70);
  *(undefined8 *)(param_1 + 0x1b78) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1b88);
  *(undefined8 *)(param_1 + 0x1b80) = *(undefined8 *)(param_2 + 0x1b80);
  *(undefined8 *)(param_1 + 0x1b88) = uVar4;
  puVar5 = (undefined8 *)(param_1 + 0x1b90);
  puVar6 = (undefined8 *)(param_2 + 0x1b90);
  do {
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    uVar4 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar4;
    uVar4 = puVar6[5];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar4;
    uVar4 = puVar6[7];
    puVar5[6] = puVar6[6];
    puVar5[7] = uVar4;
    uVar4 = puVar6[9];
    puVar5[8] = puVar6[8];
    puVar5[9] = uVar4;
    uVar4 = puVar6[0xb];
    puVar5[10] = puVar6[10];
    puVar5[0xb] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar6 + 100);
    uVar2 = *(undefined4 *)(puVar6 + 0xd);
    uVar3 = *(undefined4 *)((longlong)puVar6 + 0x6c);
    *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
    *(undefined4 *)((longlong)puVar5 + 100) = uVar1;
    *(undefined4 *)(puVar5 + 0xd) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x6c) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar6 + 0x74);
    uVar2 = *(undefined4 *)(puVar6 + 0xf);
    uVar3 = *(undefined4 *)((longlong)puVar6 + 0x7c);
    *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(puVar6 + 0xe);
    *(undefined4 *)((longlong)puVar5 + 0x74) = uVar1;
    *(undefined4 *)(puVar5 + 0xf) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x7c) = uVar3;
    lVar8 = lVar8 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar8 != 0);
  FUN_180241260(param_1 + 0x1e90,param_2 + 0x1e90);
  param_1[0x1ea8] = param_2[0x1ea8];
  param_1[0x1ea9] = param_2[0x1ea9];
  param_1[0x1eaa] = param_2[0x1eaa];
  *(undefined8 *)(param_1 + 0x1eac) = *(undefined8 *)(param_2 + 0x1eac);
  *(undefined4 *)(param_1 + 0x1eb4) = *(undefined4 *)(param_2 + 0x1eb4);
  *(undefined8 *)(param_1 + 0x1eb8) = *(undefined8 *)(param_2 + 0x1eb8);
  *(undefined4 *)(param_1 + 0x1ec0) = *(undefined4 *)(param_2 + 0x1ec0);
  uVar4 = *(undefined8 *)(param_2 + 0x1ecc);
  *(undefined8 *)(param_1 + 0x1ec4) = *(undefined8 *)(param_2 + 0x1ec4);
  *(undefined8 *)(param_1 + 0x1ecc) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1edc);
  *(undefined8 *)(param_1 + 0x1ed4) = *(undefined8 *)(param_2 + 0x1ed4);
  *(undefined8 *)(param_1 + 0x1edc) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1eec);
  *(undefined8 *)(param_1 + 0x1ee4) = *(undefined8 *)(param_2 + 0x1ee4);
  *(undefined8 *)(param_1 + 0x1eec) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1ef8);
  *(undefined8 *)(param_1 + 0x1ef0) = *(undefined8 *)(param_2 + 0x1ef0);
  *(undefined8 *)(param_1 + 0x1ef8) = uVar4;
  return param_1;
}



/* ===== 18023ee40 FUN_18023ee40 ===== */

void FUN_18023ee40(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 *puVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_res10;
  
  fVar11 = DAT_1808ac864;
  fVar10 = DAT_1808ac658;
  fVar9 = DAT_1808ac34c;
  fVar8 = DAT_1808ac118;
  fVar7 = DAT_1808ac0c0;
  fVar6 = DAT_1808ac00c;
  if ((param_1[0x1ea8] != '\0') && (param_1[0x1ea9] == '\0')) {
    if (*param_1 != '\0') {
      param_1[0x1ea9] = '\x01';
      return;
    }
    cVar14 = '\0';
    cVar16 = '\0';
    local_res10 = 0;
    do {
      iVar19 = 0;
      fVar28 = (float)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)) * fVar6;
      *(float *)(param_1 + 0x30) = fVar28;
      puVar12 = DAT_180cf9be0;
      if (*(float *)(param_1 + 0x2c) <= fVar28) {
        if (param_1[1] == '\0') {
          iVar2 = *(int *)(param_1 + 4);
          if (0 < iVar2) {
            iVar22 = 0;
            if (iVar2 < 4) goto LAB_18023f07b;
            do {
              lVar24 = (longlong)iVar22;
              if (param_1[lVar24 * 0x54 + 0x74] != '\0') {
                iVar17 = iVar19 + 1;
                if (*(float *)(param_1 + lVar24 * 0x54 + 0xa0) <= fVar28) {
                  iVar17 = iVar19;
                }
                iVar19 = iVar17;
              }
              lVar23 = (lVar24 + 1) * 0x54;
              if (param_1[lVar23 + 0x74] == '\0') {
                iVar17 = iVar19;
              }
              else {
                iVar17 = iVar19 + 1;
                if (*(float *)(param_1 + lVar23 + 0xa0) <= fVar28) {
                  iVar17 = iVar19;
                }
              }
              lVar23 = (lVar24 + 2) * 0x54;
              if (param_1[lVar23 + 0x74] != '\0') {
                iVar19 = iVar17 + 1;
                if (*(float *)(param_1 + lVar23 + 0xa0) <= fVar28) {
                  iVar19 = iVar17;
                }
                iVar17 = iVar19;
              }
              lVar24 = (lVar24 + 3) * 0x54;
              if (param_1[lVar24 + 0x74] == '\0') {
                iVar19 = iVar17;
              }
              else {
                iVar19 = iVar17 + 1;
                if (*(float *)(param_1 + lVar24 + 0xa0) <= fVar28) {
                  iVar19 = iVar17;
                }
              }
              iVar22 = iVar22 + 4;
            } while (iVar22 < iVar2 + -3);
            for (; iVar22 < iVar2; iVar22 = iVar22 + 1) {
LAB_18023f07b:
              if (param_1[(longlong)iVar22 * 0x54 + 0x74] != '\0') {
                iVar17 = iVar19 + 1;
                if (*(float *)(param_1 + (longlong)iVar22 * 0x54 + 0xa0) <= fVar28) {
                  iVar17 = iVar19;
                }
                iVar19 = iVar17;
              }
            }
            puVar5 = DAT_180cf9bd8;
            if (iVar19 != 0) {
              for (; puVar5 != puVar12; puVar5 = puVar5 + 1) {
                uVar3 = *puVar5;
                iVar22 = 0;
                if (0 < *(int *)(param_1 + 4)) {
                  do {
                    lVar24 = (longlong)iVar22 * 0x54;
                    if (((param_1[lVar24 + 0x74] != '\0') &&
                        (*(float *)(param_1 + 0x30) <= *(float *)(param_1 + lVar24 + 0xa0) &&
                         *(float *)(param_1 + lVar24 + 0xa0) != *(float *)(param_1 + 0x30))) &&
                       (cVar14 = FUN_18023c180(param_1 + lVar24 + 0x50,uVar3,fVar28), cVar14 != '\0'
                       )) {
                      pcVar1 = param_1 + lVar24 + 0xa0;
                      pcVar1[0] = '\0';
                      pcVar1[1] = '\0';
                      pcVar1[2] = -0x80;
                      pcVar1[3] = -0x41;
                    }
                    iVar22 = iVar22 + 1;
                  } while (iVar22 < *(int *)(param_1 + 4));
                }
              }
              iVar22 = *(int *)(param_1 + 4);
              iVar17 = 0;
              uVar20 = 0;
              if (0 < iVar22) {
                do {
                  if (param_1[uVar20 * 0x54 + 0x74] != '\0') {
                    iVar13 = iVar17 + 1;
                    if (*(float *)(param_1 + uVar20 * 0x54 + 0xa0) < *(float *)(param_1 + 0x30) ||
                        *(float *)(param_1 + uVar20 * 0x54 + 0xa0) == *(float *)(param_1 + 0x30)) {
                      iVar13 = iVar17;
                    }
                    iVar17 = iVar13;
                  }
                  uVar18 = (int)uVar20 + 1;
                  uVar20 = (ulonglong)uVar18;
                } while ((int)uVar18 < iVar22);
              }
              if (((2 < iVar19) && (0 < iVar22)) &&
                 ((float)iVar19 / fVar10 < (float)(iVar19 - iVar17))) {
                iVar19 = 0;
                do {
                  lVar24 = (longlong)iVar19 * 0x54;
                  if ((param_1[lVar24 + 0x74] != '\0') &&
                     (*(float *)(param_1 + 0x30) <= *(float *)(param_1 + lVar24 + 0xa0) &&
                      *(float *)(param_1 + lVar24 + 0xa0) != *(float *)(param_1 + 0x30))) {
                    pcVar1 = param_1 + lVar24 + 0xa0;
                    pcVar1[0] = '\0';
                    pcVar1[1] = '\0';
                    pcVar1[2] = -0x80;
                    pcVar1[3] = -0x41;
                  }
                  iVar19 = iVar19 + 1;
                } while (iVar19 < *(int *)(param_1 + 4));
              }
            }
          }
          bVar4 = false;
          bVar21 = false;
          if (iVar2 < 0x40) {
            if (DAT_1809f2d98 == 0) {
              uVar18 = DAT_1809f2da0 & 0x800000ff;
              if ((int)uVar18 < 0) {
                uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
              }
              DAT_1809f2da0 = DAT_1809f2da0 + 1;
              if ((uVar18 == 0) &&
                 (DAT_1809f2d98 = FUN_180264b70(PTR_s_inferno_ct_experiment_1809f2d90),
                 DAT_1809f2d98 != 0)) goto LAB_18023f26c;
LAB_18023f2fd:
              if (DAT_1809f2d50 == 0) {
                uVar18 = DAT_1809f2d58 & 0x800000ff;
                if ((int)uVar18 < 0) {
                  uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                }
                DAT_1809f2d58 = DAT_1809f2d58 + 1;
                if ((uVar18 == 0) &&
                   (DAT_1809f2d50 = FUN_180264b70(PTR_s_inferno_spread_speed_mult_1809f2d48),
                   DAT_1809f2d50 != 0)) goto LAB_18023f345;
              }
              else {
LAB_18023f345:
                fVar25 = (float)FUN_180264d70(DAT_1809f2d50);
                if (((uint)fVar25 & 0x7f800000) != 0x7f800000) goto LAB_18023f376;
              }
              fVar25 = fVar9;
            }
            else {
LAB_18023f26c:
              cVar14 = FUN_180264d70(DAT_1809f2d98);
              if ((cVar14 == '\0') || (*(int *)(param_1 + 0x14) == 0)) goto LAB_18023f2fd;
              if (DAT_1809f2d38 == 0) {
                uVar18 = DAT_1809f2d40 & 0x800000ff;
                if ((int)uVar18 < 0) {
                  uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                }
                DAT_1809f2d40 = DAT_1809f2d40 + 1;
                if ((uVar18 == 0) &&
                   (DAT_1809f2d38 = FUN_180264b70(PTR_s_inferno_spread_speed_mult_ct_1809f2d30),
                   DAT_1809f2d38 != 0)) goto LAB_18023f2ca;
LAB_18023f2f7:
                fVar25 = fVar11;
              }
              else {
LAB_18023f2ca:
                fVar25 = (float)FUN_180264d70(DAT_1809f2d38);
                if (((uint)fVar25 & 0x7f800000) == 0x7f800000) goto LAB_18023f2f7;
              }
            }
LAB_18023f376:
            fVar26 = *(float *)(param_1 + 0x44);
            fVar27 = fVar7;
            if (fVar7 <= fVar25) {
              fVar27 = fVar25;
            }
            fVar27 = fVar7 / fVar27;
            if (0.0 < fVar26) {
              if (fVar26 <= fVar28) {
                if (fVar27 <= 0.0) {
                  fVar27 = *(float *)(param_1 + 0x40);
                }
                else {
                  *(float *)(param_1 + 0x40) = fVar27;
                }
                goto LAB_18023f3ad;
              }
              goto LAB_18023f3b0;
            }
            if (0.0 < fVar27) {
              *(float *)(param_1 + 0x40) = fVar27;
              *(float *)(param_1 + 0x44) = fVar27 + fVar28;
            }
LAB_18023f472:
            do {
              do {
                if (DAT_1809f2d68 == 0) {
                  uVar18 = DAT_1809f2d70 & 0x800000ff;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xffffff00) + 1;
                  }
                  DAT_1809f2d70 = DAT_1809f2d70 + 1;
                  if ((uVar18 == 0) &&
                     (DAT_1809f2d68 = FUN_180264b70(PTR_s_inferno_damage_timer_1809f2d60),
                     DAT_1809f2d68 != 0)) goto LAB_18023f4ba;
LAB_18023f4e7:
                  fVar25 = fVar8;
                }
                else {
LAB_18023f4ba:
                  fVar25 = (float)FUN_180264d70(DAT_1809f2d68);
                  if (((uint)fVar25 & 0x7f800000) == 0x7f800000) goto LAB_18023f4e7;
                }
                fVar26 = *(float *)(param_1 + 0x4c);
                if (fVar26 <= 0.0) {
                  if (0.0 < fVar25) {
                    *(float *)(param_1 + 0x48) = fVar25;
                    fVar26 = fVar25 + fVar28;
                    *(float *)(param_1 + 0x4c) = fVar26;
                  }
LAB_18023f5cc:
                  cVar14 = *param_1;
                  fVar28 = *(float *)(param_1 + 0x44);
                  if (fVar26 <= *(float *)(param_1 + 0x44)) {
                    fVar28 = fVar26;
                  }
                  *(float *)(param_1 + 0x2c) = fVar28;
                  goto LAB_18023f5dd;
                }
                if (fVar28 < fVar26) goto LAB_18023f5cc;
                if (fVar25 <= 0.0) {
                  fVar25 = *(float *)(param_1 + 0x48);
                }
                else {
                  *(float *)(param_1 + 0x48) = fVar25;
                }
                *(float *)(param_1 + 0x4c) = fVar26 + fVar25;
              } while (bVar4);
              iVar19 = *(int *)(param_1 + 4);
              if (iVar19 < 1) break;
              bVar21 = true;
              uVar18 = 0;
              do {
                lVar24 = (ulonglong)uVar18 * 0x54;
                if (param_1[lVar24 + 0x74] != '\0') {
                  if (fVar28 < *(float *)(param_1 + lVar24 + 0xa0)) {
                    bVar21 = false;
                  }
                  else {
                    pcVar1 = param_1 + lVar24 + 0x50;
                    pcVar1[0] = '\0';
                    pcVar1[1] = '\0';
                    pcVar1[2] = '\0';
                    pcVar1[3] = '\0';
                    pcVar1[4] = '\0';
                    pcVar1[5] = '\0';
                    pcVar1[6] = '\0';
                    pcVar1[7] = '\0';
                    pcVar1 = param_1 + lVar24 + 0x58;
                    pcVar1[0] = '\0';
                    pcVar1[1] = '\0';
                    pcVar1[2] = '\0';
                    pcVar1[3] = '\0';
                    param_1[lVar24 + 0x74] = '\0';
                    param_1[(ulonglong)uVar18 + 0x1b50] = '\0';
                    param_1[0x1eaa] = '\x01';
                  }
                }
                uVar18 = uVar18 + 1;
              } while ((int)uVar18 < iVar19);
              bVar4 = true;
            } while (!bVar21);
          }
          else {
            fVar26 = *(float *)(param_1 + 0x44);
            fVar27 = fVar7;
            if (0.0 < fVar26) {
              if (fVar26 <= fVar28) {
                param_1[0x40] = -0x33;
                param_1[0x41] = -0x34;
                param_1[0x42] = -0x34;
                param_1[0x43] = '=';
LAB_18023f3ad:
                bVar21 = true;
              }
            }
            else {
              param_1[0x40] = -0x33;
              param_1[0x41] = -0x34;
              param_1[0x42] = -0x34;
              param_1[0x43] = '=';
              fVar26 = fVar28 + fVar7;
              *(float *)(param_1 + 0x44) = fVar26;
            }
LAB_18023f3b0:
            if (!bVar21) goto LAB_18023f472;
            fVar26 = fVar26 + fVar27;
            if (fVar26 - fVar28 < 0.0) {
              fVar25 = (float)FUN_18053f0d0((fVar26 - fVar28) / fVar27);
              fVar26 = fVar26 - fVar25 * fVar27;
            }
            *(float *)(param_1 + 0x44) = fVar26;
            if (0 < *(int *)(param_1 + 4)) {
              bVar21 = true;
              iVar19 = 0;
              do {
                lVar24 = (longlong)iVar19 * 0x54;
                if (param_1[lVar24 + 0x74] != '\0') {
                  if (fVar28 < *(float *)(param_1 + lVar24 + 0xa0)) {
                    bVar21 = false;
                  }
                  else {
                    pcVar1 = param_1 + lVar24 + 0x50;
                    pcVar1[0] = '\0';
                    pcVar1[1] = '\0';
                    pcVar1[2] = '\0';
                    pcVar1[3] = '\0';
                    pcVar1[4] = '\0';
                    pcVar1[5] = '\0';
                    pcVar1[6] = '\0';
                    pcVar1[7] = '\0';
                    pcVar1 = param_1 + lVar24 + 0x58;
                    pcVar1[0] = '\0';
                    pcVar1[1] = '\0';
                    pcVar1[2] = '\0';
                    pcVar1[3] = '\0';
                    param_1[lVar24 + 0x74] = '\0';
                    param_1[(longlong)iVar19 + 0x1b50] = '\0';
                    param_1[0x1eaa] = '\x01';
                  }
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < *(int *)(param_1 + 4));
              if (!bVar21) {
                iVar19 = *(int *)(param_1 + 0x10);
                bVar4 = true;
                if (0x40 < iVar19) {
                  iVar19 = 0x40;
                }
                if (*(int *)(param_1 + 4) < iVar19) {
                  FUN_18023ccf0(param_1);
                }
                goto LAB_18023f472;
              }
            }
          }
          if (param_1[1] == '\0') {
            param_1[1] = '\x01';
            param_1[0x1eaa] = '\x01';
          }
          cVar14 = '\x01';
          if (*param_1 == '\0') {
            *param_1 = '\x01';
            param_1[0x1eaa] = '\x01';
          }
LAB_18023f5dd:
          cVar15 = cVar14;
          cVar16 = cVar14;
        }
        else {
          if (cVar16 == '\0') {
            *param_1 = '\x01';
            cVar14 = '\x01';
            param_1[0x1eaa] = '\x01';
          }
          cVar15 = cVar14;
          cVar16 = cVar14;
        }
      }
      else {
        cVar15 = '\0';
      }
      if (param_1[0x1eaa] != '\0') {
        FUN_18023c4e0(param_1);
        cVar14 = *param_1;
        cVar15 = cVar14;
        cVar16 = cVar14;
      }
      if (cVar15 != '\0') break;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      local_res10 = local_res10 + 1;
    } while (local_res10 < 0x9600);
    param_1[0x1ea9] = '\x01';
  }
  return;
}



/* ===== 18023f6b0 FUN_18023f6b0 ===== */

void FUN_18023f6b0(void)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  char *_Str1;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong local_res8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  
  if (DAT_180cf9bd8 != DAT_180cf9be0) {
    DAT_180cf9be0 = DAT_180cf9bd8;
  }
  FUN_1803a09f0(&local_28);
  puVar6 = auStack_48;
  puVar7 = auStack_48;
  plVar4 = local_28;
  if (local_28 != local_20) {
    do {
      if ((((*plVar4 != 0) &&
           (lVar3 = FUN_18000f3a0((ulonglong)DAT_180961968 + *plVar4), lVar3 != 0)) &&
          (lVar3 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar3), lVar3 != 0)) &&
         (((lVar3 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar3), lVar3 != 0 &&
           (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar3),
           _Str1 + -0x10000 < (char *)0x7ffffffeffff)) &&
          ((_Str1 != (char *)0x0 && (iVar2 = strcmp(_Str1,"C_SmokeGrenadeProjectile"), iVar2 == 0)))
          ))) {
        local_res8 = *plVar4;
        FUN_1800242d0(&DAT_180cf9bd8,&local_res8);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != local_20);
  }
  if (local_28 == (longlong *)0x0) {
    return;
  }
  plVar4 = local_28;
  if (0xfff < (ulonglong)((local_18 - (longlong)local_28 >> 3) * 8)) {
    plVar4 = (longlong *)local_28[-1];
    plVar5 = (longlong *)((longlong)local_28 + (-8 - (longlong)plVar4));
    if (plVar5 <= &DAT_0000001f) goto LAB_18023f7e4;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_40;
    plVar4 = plVar5;
  }
  puVar7 = puVar6;
LAB_18023f7e4:
  *(undefined8 *)(puVar7 + -8) = 0x18023f7e9;
  thunk_FUN_1803d64e0(plVar4);
  return;
}



/* ===== 18023f800 FUN_18023f800 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18023f800(undefined4 *param_1,float *param_2,undefined8 param_3,undefined2 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  uint uVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  float fVar14;
  float extraout_XMM0_Da;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_398 [32];
  undefined8 *local_378;
  undefined ***local_370;
  undefined1 *local_368;
  undefined8 local_358;
  float local_350;
  longlong *local_348;
  undefined4 local_340;
  undefined4 local_33c;
  float local_338;
  undefined4 local_330;
  undefined4 local_32c;
  float local_328;
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [24];
  undefined **local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined2 uStack_2b4;
  undefined1 uStack_2b2;
  undefined1 uStack_2b1;
  undefined1 uStack_2b0;
  undefined1 uStack_2af;
  undefined6 uStack_2ae;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
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
  undefined1 local_228 [48];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  float local_17c;
  undefined4 local_174;
  undefined2 local_170;
  char local_16d;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_398;
  param_4[1] = local_268._2_2_;
  *(undefined8 *)(param_4 + 2) = 0;
  *(undefined8 *)(param_4 + 6) = 0;
  *(undefined8 *)(param_4 + 10) = 0;
  *(undefined8 *)(param_4 + 0xe) = 0;
  *(undefined8 *)(param_4 + 0x12) = 0;
  *(undefined8 *)(param_4 + 0x16) = 0;
  *param_4 = 0;
  FUN_18023b6b0();
  local_340 = *param_1;
  local_33c = param_1[1];
  local_328 = (float)param_1[2] + DAT_1808ac864;
  local_338 = (float)param_1[2] - DAT_1808acb28;
  if ((DAT_180961f48 == 0) || (DAT_180961f40 == 0)) {
    return 0;
  }
  local_330 = local_340;
  local_32c = local_33c;
  lVar7 = FUN_18000f3a0();
  if (lVar7 == 0) {
    return 0;
  }
  local_2b8 = 0;
  uStack_2b2 = 0;
  uStack_2ae = 0;
  uStack_2d0 = 0;
  local_2e8 = &PTR_FUN_1809f2c48;
  uStack_2a0 = 0;
  uStack_2e0 = 0xc3001;
  local_298 = 0;
  uStack_290 = 0;
  local_2d8 = 0;
  local_288 = 0;
  uStack_280 = 0;
  uStack_2b4 = 0xffff;
  local_278 = 0;
  uStack_270 = 0;
  uStack_2b1 = 0xf;
  uStack_2b0 = 4;
  local_2c8 = _DAT_1808adf90;
  uStack_2c0 = _UNK_1808adf98;
  uStack_2af = 0x49;
  local_2a8 = 1;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  FUN_180540170(local_228,0,0x140);
  fVar17 = DAT_1808ac34c;
  local_368 = local_228;
  local_370 = &local_2e8;
  local_1f8 = _DAT_1808adae0;
  uStack_1f0 = _UNK_1808adae8;
  local_378 = (undefined8 *)&local_340;
  local_1e8 = _DAT_1808adae0;
  uStack_1e0 = _UNK_1808adae8;
  local_17c = 1.0;
  local_174 = 0xffffffff;
  local_170 = 0xffff;
  cVar4 = FUN_18023bc30(DAT_180961f48,lVar7,&local_268,&local_330);
  if (cVar4 == '\0') {
    return 0;
  }
  local_268 = CONCAT44(local_268._4_4_,local_17c);
  if (((uint)local_17c & 0x7f800000) == 0x7f800000) {
    return 0;
  }
  if (local_17c == fVar17) {
    return 0;
  }
  *(undefined4 *)(param_4 + 0xc) = local_190;
  *(undefined4 *)(param_4 + 2) = local_1a4;
  *(undefined4 *)(param_4 + 4) = local_1a0;
  *(undefined4 *)(param_4 + 6) = local_19c;
  *(undefined4 *)(param_4 + 8) = local_198;
  *(undefined4 *)(param_4 + 10) = local_194;
  *(undefined1 *)((longlong)param_4 + 1) = 1;
  fVar6 = *param_2;
  fVar16 = param_2[1];
  fVar21 = param_2[2];
  fVar18 = fVar16 * fVar16 + fVar6 * fVar6 + fVar21 * fVar21;
  if (fVar18 < 0.0) {
    fVar19 = (float)FUN_18051af10();
  }
  else {
    fVar19 = SQRT(fVar18);
  }
  if ((fVar19 < DAT_1808abf54) || (DAT_1808accfc < fVar19)) {
    fVar20 = 0.0;
    fVar22 = 0.0;
    fVar14 = 0.0;
    if (fVar18 != 0.0) {
      dVar3 = (double)fVar16;
      dVar1 = (double)fVar6;
      dVar2 = (double)(float)((uint)fVar21 & _DAT_1808ade90);
      dVar15 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
      if (dVar15 < 0.0) {
        dVar15 = (double)FUN_18051ff20();
      }
      else {
        dVar15 = SQRT(dVar15);
      }
      dVar15 = DAT_1808ac500 / dVar15;
      fVar20 = (float)(dVar1 * dVar15);
      fVar22 = (float)(dVar3 * dVar15);
      fVar14 = (float)(dVar2 * dVar15);
    }
  }
  else {
    fVar14 = fVar17 / fVar19;
    fVar20 = fVar6 * fVar14;
    fVar22 = fVar16 * fVar14;
    fVar14 = fVar14 * (float)((uint)fVar21 & _DAT_1808ade90);
  }
  *(float *)(param_4 + 0xe) = fVar20 * fVar19;
  *(float *)(param_4 + 0x10) = fVar22 * fVar19;
  *(float *)(param_4 + 0x12) = fVar14 * fVar19;
  if (DAT_1809f2b98 == 0) {
    uVar5 = DAT_1809f2ba0 & 0x800000ff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
    }
    DAT_1809f2ba0 = DAT_1809f2ba0 + 1;
    if ((uVar5 == 0) &&
       (DAT_1809f2b98 = FUN_180264b70(PTR_s_inferno_surface_offset_1809f2b90), DAT_1809f2b98 != 0))
    goto LAB_18023fc15;
  }
  else {
LAB_18023fc15:
    fVar6 = (float)FUN_180264d70(DAT_1809f2b98);
    local_348 = (longlong *)CONCAT44(local_348._4_4_,fVar6);
    if (((uint)fVar6 & 0x7f800000) != 0x7f800000) goto LAB_18023fc44;
  }
  fVar6 = DAT_1808ac900;
LAB_18023fc44:
  fVar16 = (float)*(undefined8 *)(param_4 + 8) * fVar6 + (float)*(undefined8 *)(param_4 + 2);
  fVar6 = (float)((ulonglong)*(undefined8 *)(param_4 + 8) >> 0x20) * fVar6 +
          (float)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
  local_358 = CONCAT44(fVar6,fVar16);
  local_350 = *(float *)(param_4 + 6);
  if ((DAT_180961f48 == 0) || (DAT_180961f40 == 0)) {
    local_358 = CONCAT44(fVar6,fVar16);
  }
  else {
    lVar7 = FUN_18000f3a0();
    if (lVar7 != 0) {
      local_2b8 = 0;
      uStack_2b2 = 0;
      uStack_2ae = 0;
      local_2e8 = &PTR_FUN_1809f2ba8;
      uStack_2d0 = 0;
      uStack_2e0 = 0x1001;
      uStack_2a0 = 0;
      local_2d8 = 0x40000;
      local_298 = 0;
      uStack_290 = 0;
      uStack_2b4 = 0xffff;
      local_288 = 0;
      uStack_280 = 0;
      uStack_2b1 = 0xf;
      uStack_2b0 = 3;
      local_278 = 0;
      uStack_270 = 0;
      uStack_2af = 0x49;
      local_2c8 = _DAT_1808adf90;
      uStack_2c0 = _UNK_1808adf98;
      local_2a8 = 1;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      FUN_180540170(local_228,0,0x140);
      local_368 = local_228;
      local_370 = &local_2e8;
      local_1f8 = _DAT_1808adae0;
      uStack_1f0 = _UNK_1808adae8;
      local_378 = &local_358;
      local_1e8 = _DAT_1808adae0;
      uStack_1e0 = _UNK_1808adae8;
      local_17c = 1.0;
      local_174 = 0xffffffff;
      local_170 = 0xffff;
      cVar4 = FUN_18023bc30(DAT_180961f48,lVar7,&local_268,param_4 + 2);
      if (cVar4 != '\0') {
        local_268 = CONCAT44(local_268._4_4_,local_17c);
        if ((local_16d != '\0') || (local_17c < fVar17)) {
          fVar17 = local_17c * DAT_1808ac294;
          local_358 = CONCAT44((local_358._4_4_ - *(float *)(param_4 + 4)) * fVar17 +
                               *(float *)(param_4 + 4),
                               ((float)local_358 - *(float *)(param_4 + 2)) * fVar17 +
                               *(float *)(param_4 + 2));
          local_350 = (local_350 - *(float *)(param_4 + 6)) * fVar17 + *(float *)(param_4 + 6);
        }
      }
    }
  }
  *(undefined8 *)(param_4 + 0x14) = local_358;
  *(float *)(param_4 + 0x18) = local_350;
  fVar6 = DAT_1808acc00;
  fVar17 = DAT_1808ac1f4;
  local_348 = DAT_180cf9be0;
  if (DAT_180cf9bd8 != DAT_180cf9be0) {
    plVar10 = DAT_180cf9bd8;
    plVar12 = DAT_180cf9be0;
    uVar5 = DAT_180cf9984;
    uVar11 = DAT_180ca0950;
    uVar13 = DAT_180ca09f8;
    do {
      lVar7 = *plVar10;
      if ((((lVar7 == 0) || (uVar13 == 0)) ||
          (lVar8 = FUN_18000f3a0((ulonglong)uVar13 + lVar7), lVar8 == 0)) || (uVar11 == 0)) {
        fVar16 = 0.0;
        fVar21 = 0.0;
        fVar18 = 0.0;
      }
      else {
        pfVar9 = (float *)FUN_1800111b0(local_320,(ulonglong)uVar11 + lVar8);
        fVar16 = *pfVar9;
        fVar21 = pfVar9[1];
        fVar18 = pfVar9[2];
      }
      if (uVar5 != 0) {
        lVar8 = FUN_18000f3a0((ulonglong)uVar5 + lVar7);
        if (((lVar8 != 0) && (DAT_180cf9988 != 0)) && (DAT_180cf998c != 0)) {
          pfVar9 = (float *)FUN_1800111b0(local_310,(ulonglong)DAT_180cf9988 + lVar8);
          fVar19 = *pfVar9;
          fVar14 = pfVar9[1];
          fVar20 = pfVar9[2];
          pfVar9 = (float *)FUN_1800111b0(local_300,(ulonglong)DAT_180cf998c + lVar8);
          fVar16 = ((fVar16 + *pfVar9) - (fVar16 + fVar19)) * fVar17 + fVar16 + fVar19;
          fVar21 = ((fVar21 + pfVar9[1]) - (fVar21 + fVar14)) * fVar17 + fVar21 + fVar14;
          fVar18 = ((fVar18 + pfVar9[2]) - (fVar18 + fVar20)) * fVar17 + fVar18 + fVar20;
        }
        plVar12 = local_348;
      }
      fVar16 = (fVar21 - local_358._4_4_) * (fVar21 - local_358._4_4_) +
               (fVar16 - (float)local_358) * (fVar16 - (float)local_358) +
               (fVar18 - local_350) * (fVar18 - local_350);
      if (fVar16 < 0.0) {
        FUN_18051af10();
        fVar16 = extraout_XMM0_Da;
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      if (fVar16 <= fVar6) {
        cVar4 = FUN_18023c180(&local_358,lVar7,param_3);
        if (cVar4 != '\0') {
          return 0;
        }
        uVar5 = DAT_180cf9984;
        uVar11 = DAT_180ca0950;
        uVar13 = DAT_180ca09f8;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar12);
  }
  *(undefined1 *)param_4 = 1;
  return 1;
}



/* ===== 180240070 FUN_180240070 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180240070(longlong param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_1f78 [8];
  undefined1 auStack_1f70 [24];
  ulonglong local_1f58 [4];
  undefined4 local_1f38;
  undefined8 local_1f34;
  undefined4 local_1f2c;
  undefined8 local_1f28;
  undefined8 uStack_1f20;
  undefined8 local_1f18;
  undefined8 uStack_1f10;
  undefined8 local_1f08;
  undefined8 uStack_1f00;
  undefined8 local_1ef8;
  undefined8 uStack_1ef0;
  undefined1 local_1ee8 [5376];
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
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
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
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
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
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
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
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
  undefined2 local_90;
  undefined1 local_8e;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x180240094;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1f78;
  puVar1 = (ulonglong *)(param_1 + 0x1e90);
  lVar8 = *(longlong *)(param_1 + 0x1ea0);
  uVar5 = *puVar1;
  local_1f28 = _DAT_1808ad290;
  uStack_1f20 = _UNK_1808ad298;
  *(undefined8 *)(param_1 + 0x1ea0) = 0;
  *(undefined8 *)(param_1 + 0x1e98) = 0;
  local_1f18 = 0;
  uStack_1f10 = 0;
  local_1ef8 = 0;
  uStack_1ef0 = 0;
  *puVar1 = 0;
  local_1f38 = 0;
  local_1f34 = 0;
  local_1f2c = 0;
  local_1f08 = 0;
  uStack_1f00 = 0;
  FUN_180540170(local_1ee8,0,0x1500);
  FUN_180240980(local_1ee8);
  FUN_180540170(&local_9e8,0,0x300);
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d8 = 0;
  uStack_9d0 = 0;
  local_9c8 = 0;
  uStack_9c0 = 0;
  local_9b8 = 0;
  uStack_9b0 = 0;
  local_9a8 = 0;
  uStack_9a0 = 0;
  local_998 = 0;
  uStack_990 = 0;
  local_988 = 0;
  uStack_980 = 0;
  local_978 = 0;
  uStack_970 = 0;
  local_968 = 0;
  uStack_960 = 0;
  local_958 = 0;
  uStack_950 = 0;
  local_948 = 0;
  uStack_940 = 0;
  local_938 = 0;
  uStack_930 = 0;
  local_928 = 0;
  uStack_920 = 0;
  local_918 = 0;
  uStack_910 = 0;
  local_908 = 0;
  uStack_900 = 0;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_8b8 = 0;
  uStack_8b0 = 0;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_888 = 0;
  uStack_880 = 0;
  local_878 = 0;
  uStack_870 = 0;
  local_868 = 0;
  uStack_860 = 0;
  local_858 = 0;
  uStack_850 = 0;
  local_848 = 0;
  uStack_840 = 0;
  local_838 = 0;
  uStack_830 = 0;
  local_828 = 0;
  uStack_820 = 0;
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0;
  uStack_800 = 0;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_7e8 = 0;
  uStack_7e0 = 0;
  local_7d8 = 0;
  uStack_7d0 = 0;
  local_7c8 = 0;
  uStack_7c0 = 0;
  local_7b8 = 0;
  uStack_7b0 = 0;
  local_7a8 = 0;
  uStack_7a0 = 0;
  local_798 = 0;
  uStack_790 = 0;
  local_788 = 0;
  uStack_780 = 0;
  local_778 = 0;
  uStack_770 = 0;
  local_768 = 0;
  uStack_760 = 0;
  local_758 = 0;
  uStack_750 = 0;
  local_748 = 0;
  uStack_740 = 0;
  local_738 = 0;
  uStack_730 = 0;
  local_728 = 0;
  uStack_720 = 0;
  local_718 = 0;
  uStack_710 = 0;
  local_708 = 0;
  uStack_700 = 0;
  local_6f8 = 0;
  uStack_6f0 = 0;
  FUN_180540170(&local_6e8,0,0x300);
  local_6e8 = 0;
  uStack_6e0 = 0;
  local_6d8 = 0;
  uStack_6d0 = 0;
  local_6c8 = 0;
  uStack_6c0 = 0;
  local_6b8 = 0;
  uStack_6b0 = 0;
  local_6a8 = 0;
  uStack_6a0 = 0;
  local_698 = 0;
  uStack_690 = 0;
  local_688 = 0;
  uStack_680 = 0;
  local_678 = 0;
  uStack_670 = 0;
  local_668 = 0;
  uStack_660 = 0;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  uStack_610 = 0;
  local_608 = 0;
  uStack_600 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  uStack_570 = 0;
  local_568 = 0;
  uStack_560 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  uStack_420 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  FUN_180540170(&local_3a8,0,0x300);
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
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
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
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
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
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
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
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
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
  local_90 = 0;
  local_8e = 0;
  local_8c = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_18023eb60(param_1,&local_1f38);
  FUN_1802414e0(&local_a8);
  if (puVar1 == local_1f58) {
LAB_180240654:
    puVar7 = auStack_1f78;
    puVar6 = auStack_1f78;
    if (uVar5 == 0) goto LAB_18024069a;
    uVar3 = uVar5;
    if ((ulonglong)(((longlong)(lVar8 - uVar5) >> 2) * 4) < 0x1000) goto LAB_180240692;
    uVar3 = *(ulonglong *)(uVar5 - 8);
    uVar5 = (uVar5 - uVar3) - 8;
    puVar7 = auStack_1f78;
    if (0x1f < uVar5) goto LAB_18024068b;
  }
  else {
    uVar3 = *puVar1;
    if (uVar3 == 0) {
LAB_18024063d:
      *puVar1 = uVar5;
      *(ulonglong *)(param_1 + 0x1e98) = uVar5;
      uVar5 = 0;
      *(longlong *)(param_1 + 0x1ea0) = lVar8;
      lVar8 = 0;
      goto LAB_180240654;
    }
    uVar4 = ((longlong)(*(longlong *)(param_1 + 0x1ea0) - uVar3) >> 2) * 4;
    if (uVar4 < 0x1000) {
LAB_180240635:
      thunk_FUN_1803d64e0(uVar3,uVar4);
      goto LAB_18024063d;
    }
    if ((uVar3 - *(ulonglong *)(uVar3 - 8)) - 8 < 0x20) {
      uVar4 = uVar4 + 0x27;
      uVar3 = *(ulonglong *)(uVar3 - 8);
      goto LAB_180240635;
    }
LAB_18024068b:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar6 = auStack_1f70;
    uVar3 = uVar5;
LAB_180240692:
    puVar7 = puVar6;
  }
  *(undefined8 *)(puVar7 + -8) = 0x18024069a;
  thunk_FUN_1803d64e0(uVar3);
LAB_18024069a:
  *(undefined8 *)(puVar7 + -8) = 0x1802406a9;
  return;
}



/* ===== 1802406d0 FUN_1802406d0 ===== */

void FUN_1802406d0(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  iVar2 = FUN_1804e4d70(&DAT_1809f2ca0);
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f2cec == 0x7fffffff) {
    DAT_1809f2cec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (param_1 == &DAT_180cf9bc0) goto LAB_1802407b3;
  if (DAT_180cf9bc0 != 0) {
    lVar3 = DAT_180cf9bc0;
    if ((ulonglong)((DAT_180cf9bd0 - DAT_180cf9bc0 >> 4) * 0x10) < 0x1000) {
LAB_18024076b:
      puVar5 = puVar4;
    }
    else {
      lVar3 = *(longlong *)(DAT_180cf9bc0 + -8);
      if (0x1f < (DAT_180cf9bc0 - lVar3) - 8U) {
        lVar3 = 5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar4 = auStack_20;
        goto LAB_18024076b;
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x180240776;
    thunk_FUN_1803d64e0(lVar3);
  }
  DAT_180cf9bc0 = *param_1;
  DAT_180cf9bc8 = param_1[1];
  DAT_180cf9bd0 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1802407b3:
  FUN_1804e4e90(&DAT_1809f2ca0);
  return;
}



/* ===== 1802407f0 FUN_1802407f0 ===== */

undefined8
FUN_1802407f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,char param_4,byte param_5)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  float local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_58 = 1.0;
  local_54 = 0;
  local_40 = 0;
  uVar3 = (ulonglong)param_5 << 0x14 | 0x40000;
  local_50 = 0;
  uStack_48 = 0;
  local_78 = *param_2;
  local_70 = *(float *)(param_2 + 1) + DAT_1808ac9e4;
  cVar1 = FUN_18023bcf0(&local_78,param_1,&PTR_FUN_1809f2ba8,0x1001,uVar3,3,&local_58,param_3);
  if (cVar1 != '\0') {
    if (DAT_1808ac34c <= local_58) {
      return 1;
    }
    cVar1 = FUN_18023bcf0(param_2,param_1,&PTR_FUN_1809f2ba8,0x1001,uVar3,3,&local_58,param_3);
    if (cVar1 != '\0') {
      if (DAT_1808ac34c <= local_58) {
        return 1;
      }
      if (param_4 != '\0') {
        local_68 = *param_1;
        local_60 = *(float *)(param_1 + 1) + DAT_1808ac9e4;
        cVar1 = FUN_18023bcf0(param_1,&local_68,&PTR_FUN_1809f2ba8,0x1001,uVar3,3,&local_58,param_3)
        ;
        if (cVar1 != '\0') {
          uVar2 = FUN_1802407f0(&local_50,param_2,param_3,0,uVar3 & 0xffffffffffffff00);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



/* ===== 180240980 FUN_180240980 ===== */

void FUN_180240980(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar2 = 0;
  do {
    lVar1 = uVar3 * 0x54;
    *(undefined4 *)(lVar2 + 0xa8 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0xfc + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x150 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x1a4 + param_1) = 0;
    *(undefined8 *)(param_1 + lVar1) = 0;
    *(undefined8 *)(param_1 + 8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x18 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x20 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x24 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x28 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x30 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x34 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x3c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x40 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x44 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x48 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x4c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x50 + lVar1) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x54 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x5c + lVar1) = 0;
    *(undefined8 *)(param_1 + 100 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x6c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x74 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x78 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x7c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x84 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x88 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x90 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x94 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x98 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x9c + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0xa0 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xa4 + lVar1) = 0xbf800000;
    *(undefined8 *)(param_1 + 0xac + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xb4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xbc + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xc4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 200 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0xcc + lVar1) = 0;
    *(undefined8 *)(param_1 + 0xd0 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xd8 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xdc + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xe4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xe8 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0xec + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xf0 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0xf4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0xf8 + lVar1) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x100 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x108 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x110 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x118 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x11c + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x120 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x124 + lVar1) = 0;
    *(undefined4 *)(param_1 + 300 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x130 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x138 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x13c + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x140 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x144 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x148 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x14c + lVar1) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x154 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x15c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x164 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x16c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x170 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x174 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x178 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x180 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x184 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x18c + lVar1) = 0;
    *(undefined4 *)(param_1 + 400 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x194 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x198 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x19c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x1a0 + lVar1) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x1a8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1b0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1b8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x1c0 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x1c4 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x1c8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x1cc + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x1d4 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1d8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x1e0 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x1e4 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x1e8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x1ec + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x1f0 + lVar1) = 0;
    *(undefined4 *)(param_1 + 500 + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x1f8 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x1fc + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x204 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x20c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x214 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x218 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x21c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x220 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x228 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x22c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x234 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x238 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x23c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x240 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x244 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x248 + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x24c + param_1) = 0;
    *(undefined8 *)(param_1 + 0x250 + lVar1) = 0;
    *(undefined8 *)(param_1 + 600 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x260 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x268 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x26c + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x270 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x274 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x27c + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x280 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x288 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x28c + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x290 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x294 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x298 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x29c + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x2a0 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x2a4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2ac + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2b4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 700 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x2c0 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x2c4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x2c8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x2d0 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x2d4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x2dc + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x2e0 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x2e4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x2e8 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x2ec + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x2f0 + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x2f4 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x2f8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x300 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x308 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x310 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x314 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x318 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x31c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x324 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x328 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x330 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x334 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x338 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x33c + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x340 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x344 + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x348 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x34c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x354 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x35c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x364 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x368 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x36c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x370 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x378 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x37c + lVar1) = 0;
    *(undefined4 *)(param_1 + 900 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x388 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x38c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x390 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x394 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x398 + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x39c + param_1) = 0;
    *(undefined8 *)(param_1 + 0x3a0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3a8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3b0 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x3b8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x3bc + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x3c0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3c4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x3cc + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x3d0 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x3d8 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x3dc + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x3e0 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x3e4 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 1000 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x3ec + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x3f0 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x3f4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x3fc + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x404 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x40c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x410 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x414 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x418 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x420 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x424 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x42c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x430 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x434 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x438 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x43c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x440 + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x444 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x448 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x450 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x458 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x460 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x464 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x468 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x46c + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x474 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x478 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x480 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x484 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x488 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x48c + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x490 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x494 + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x498 + param_1) = 0;
    *(undefined8 *)(param_1 + 0x49c + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4a4 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4ac + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x4b4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x4b8 + lVar1) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x4bc + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4c0 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x4c8 + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x4cc + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x4d4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x4d8 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x4dc + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x4e0 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x4e4 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x4e8 + lVar1) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x4ec + param_1) = 0;
    *(undefined8 *)(param_1 + 0x4f0 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4f8 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x500 + lVar1) = 0;
    uVar3 = uVar3 + 0x10;
    *(undefined4 *)(param_1 + 0x508 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x50c + lVar1) = 0x3f800000;
    lVar2 = lVar2 + 0x540;
    *(undefined1 *)(param_1 + 0x510 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x514 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x51c + lVar1) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x520 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x528 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x52c + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x530 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x534 + lVar1) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x538 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x53c + lVar1) = 0xbf800000;
  } while (uVar3 < 0x40);
  return;
}



/* ===== 180241260 FUN_180241260 ===== */

longlong * FUN_180241260(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
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
  lVar1 = *param_1;
  if (lVar1 == 0) goto LAB_1802412e5;
  lVar3 = lVar1;
  if ((ulonglong)((param_1[2] - lVar1 >> 2) * 4) < 0x1000) {
LAB_1802412cf:
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + -8);
    if (0x1f < (lVar1 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar4 = auStack_20;
      goto LAB_1802412cf;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1802412da;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1802412e5:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



/* ===== 180241320 FUN_180241320 ===== */

void FUN_180241320(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 unaff_RSI;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar5 = auStack_48;
  lVar2 = 0x6fe4dfc9bf937f27;
  lVar6 = DAT_180cc4c58 - DAT_180cc4c48 >> 4;
  uVar7 = lVar6 * 0x6fe4dfc9bf937f27;
  lVar3 = DAT_180cc4c48;
  if (param_3 <= uVar7) {
LAB_180241441:
    uVar7 = (DAT_180cc4c50 - lVar3 >> 4) * lVar2;
    if (uVar7 < param_3) {
      *(undefined8 *)(puVar5 + 0x50) = unaff_RSI;
      *(undefined8 *)(puVar5 + -8) = 0x18024146c;
      FUN_180540530();
      lVar3 = DAT_180cc4c50;
      lVar2 = (param_3 - uVar7) * 0x970;
      *(undefined8 *)(puVar5 + -8) = 0x18024148c;
      FUN_180540530(DAT_180cc4c50,uVar7 * 0x970 + param_2,lVar2);
      DAT_180cc4c50 = lVar2 + lVar3;
      return;
    }
    *(undefined8 *)(puVar5 + -8) = 0x1802414b6;
    FUN_180540530();
    DAT_180cc4c50 = param_3 * 0x970 + lVar3;
    return;
  }
  if (0x1b2036406c80d9 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x1b2036406c80d9 - (uVar7 >> 1) < uVar7) {
    uVar7 = 0x1b2036406c80d9;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    if (uVar7 < param_3) {
      uVar7 = param_3;
    }
  }
  if (DAT_180cc4c48 != 0) {
    uVar4 = lVar6 * 0x10;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(DAT_180cc4c48 + -8);
      if (0x1f < (DAT_180cc4c48 - lVar3) - 8U) {
        lVar3 = 5;
        pcVar1 = (code *)swi(0x29);
        lVar2 = (*pcVar1)();
        puVar5 = auStack_40;
        goto LAB_180241441;
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar3,uVar4);
    DAT_180cc4c58 = 0;
    DAT_180cc4c48 = 0;
    DAT_180cc4c50 = 0;
  }
  if (0x1b2036406c80d9 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar3 = FUN_18000fb70(uVar7 * 0x970);
  DAT_180cc4c58 = uVar7 * 0x970 + lVar3;
  DAT_180cc4c48 = lVar3;
  DAT_180cc4c50 = lVar3;
  FUN_180540530(lVar3,param_2,param_3 * 0x970);
  DAT_180cc4c50 = param_3 * 0x970 + lVar3;
  return;
}



/* ===== 1802414e0 FUN_1802414e0 ===== */

void FUN_1802414e0(ulonglong *param_1)

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
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 2) * 4;
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
  *(undefined8 *)(puVar5 + -8) = 0x180241546;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180241560 FUN_180241560 ===== */

longlong FUN_180241560(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar6 = *param_1;
  uVar10 = 0x28a7b3c58eed94;
  lVar3 = (param_1[1] - lVar6 >> 2) * -0x500a29ecf163bb65;
  if (lVar3 == 0x28a7b3c58eed94) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar4 = (param_1[2] - lVar6 >> 2) * -0x500a29ecf163bb65;
  if (uVar4 <= 0x28a7b3c58eed94 - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar1;
    if (uVar1 <= uVar4) {
      uVar10 = uVar4;
    }
    if (0x28a7b3c58eed94 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar10 * 0x64c);
  lVar6 = SUB168(SEXT816(-0x5d6130e9c449aff5) * SEXT816(param_2 - lVar6),8) + (param_2 - lVar6);
  lVar11 = ((lVar6 >> 10) - (lVar6 >> 0x3f)) * 0x64c + lVar3;
  FUN_180540530(lVar11,param_3,0x64c);
  lVar6 = *param_1;
  if (param_2 == param_1[1]) {
    lVar9 = param_1[1] - lVar6;
    lVar5 = lVar3;
    param_2 = lVar6;
  }
  else {
    FUN_180540530(lVar3,lVar6,param_2 - lVar6);
    lVar5 = lVar11 + 0x64c;
    lVar9 = param_1[1] - param_2;
  }
  puVar7 = auStack_48;
  puVar8 = auStack_48;
  FUN_180540530(lVar5,param_2,lVar9);
  lVar6 = *param_1;
  if (lVar6 == 0) goto LAB_1802416c8;
  lVar5 = lVar6;
  if ((ulonglong)((param_1[2] - lVar6 >> 2) * 4) < 0x1000) {
LAB_1802416bd:
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(lVar6 + -8);
    if (0x1f < (lVar6 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar7 = auStack_40;
      goto LAB_1802416bd;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x1802416c8;
  thunk_FUN_1803d64e0(lVar5);
LAB_1802416c8:
  *param_1 = lVar3;
  param_1[1] = uVar1 * 0x64c + lVar3;
  param_1[2] = uVar10 * 0x64c + lVar3;
  return lVar11;
}



/* ===== 180241710 FUN_180241710 ===== */

ulonglong FUN_180241710(void)

{
  uint *puVar1;
  longlong lVar2;
  uint local_18 [6];
  
  puVar1 = local_18;
  local_18[0] = 0;
  local_18[1] = 1;
  while( true ) {
    lVar2 = 0;
    if (*puVar1 < 4) {
      lVar2 = (longlong)(int)*puVar1;
    }
    if ((((&DAT_18091a1e0)[lVar2 * 0x192c] != '\0') &&
        ((*(byte *)(&DAT_18091b31c + lVar2 * 0x64b) & 1) != 0)) &&
       ((&DAT_18091a1e4)[lVar2 * 0x192c] != '\0')) break;
    puVar1 = puVar1 + 1;
    if (puVar1 == local_18 + 2) {
      return (ulonglong)puVar1 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



/* ===== 180241780 FUN_180241780 ===== */

undefined8 FUN_180241780(void)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint local_18 [6];
  
  puVar3 = local_18;
  if (DAT_18095d190 == '\0') {
    uVar1 = 0;
    local_18[1] = 1;
    local_18[0] = 0;
    do {
      lVar2 = 0;
      if (*puVar3 < 4) {
        lVar2 = (longlong)(int)*puVar3;
      }
      if (((&DAT_18091a1e0)[lVar2 * 0x192c] != '\0') && ((&DAT_18091a1e4)[lVar2 * 0x192c] != '\0'))
      {
        uVar1 = uVar1 | (&DAT_18091b31c)[lVar2 * 0x64b] & 0xc;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != local_18 + 2);
    if ((uVar1 & 4) == 0) {
      return 0;
    }
  }
  return 1;
}



/* ===== 180241810 FUN_180241810 ===== */

void FUN_180241810(longlong param_1)

{
  FUN_18025deb0(param_1 + 0x88);
  FUN_180042970(param_1 + 0x60);
  FUN_1800132b0(param_1 + 0x30);
  FUN_180068f30(param_1 + 0x18);
  FUN_180011610(param_1);
  return;
}



/* ===== 180241850 FUN_180241850 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180241850(void)

{
  uint uVar1;
  
  if ((DAT_180cf9c40 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cf9c44 = FUN_18038eaf0("C_BaseCSGrenade","m_bPinPulled");
    DAT_180cf9c48 = FUN_18038eaf0("C_BaseCSGrenade","m_fThrowTime");
    DAT_180cf9c4c = FUN_18038eaf0("C_BaseCSGrenade","m_bRedraw");
    DAT_180cf9c50 = FUN_18038eaf0("C_BaseCSGrenade","m_bIsHeldByPlayer");
    _DAT_180cf9c54 = FUN_18038eaf0("C_BaseCSGrenade","m_bJumpThrow");
    _DAT_180cf9c58 = FUN_18038eaf0("C_CSPlayerPawn","m_grenadeParameterStashTime");
    _DAT_180cf9c5c = FUN_18038eaf0("C_BasePlayerPawn","m_pMovementServices");
    _DAT_180cf9c60 = FUN_18038eaf0("CCSPlayer_MovementServices","m_fStashGrenadeParameterWhen");
    DAT_180cf9c64 = FUN_18038eaf0("C_BaseCSGrenade","m_flThrowStrength");
    DAT_180cf9c68 = FUN_18038eaf0("CCSWeaponBaseVData","m_flThrowVelocity");
    DAT_180cf9c6c = FUN_18038eaf0("CEntityInstance","m_pEntity");
    DAT_180cf9c70 = FUN_18038eaf0("CEntityIdentity","m_designerName");
    _DAT_180cf9c74 = FUN_18038eaf0("C_BaseEntity","m_iMaxHealth");
    DAT_180cf9c78 = FUN_18038eaf0("C_BaseEntity","m_bTakesDamage");
    DAT_180cf9c7c = FUN_18038eaf0("C_BaseGrenade","m_flDetonateTime");
    DAT_180cf9c80 = FUN_18038eaf0("C_BaseGrenade","m_hThrower");
    DAT_180cf9c84 = FUN_18038eaf0("C_BaseCSGrenadeProjectile","m_nExplodeEffectTickBegin");
    _DAT_180cf9c88 = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_bDidSmokeEffect");
    _DAT_180cf9c8c = FUN_18038eaf0("C_BaseCSGrenadeProjectile","m_flSpawnTime");
    DAT_180cf9c90 = FUN_18038eaf0("C_Inferno","m_fireCount");
    DAT_180cf9c94 = FUN_18038eaf0("C_Inferno","m_bFireIsBurning");
    DAT_180cf9c9c = FUN_18038eaf0("C_Inferno","m_nFireEffectTickBegin");
    DAT_180cf9ca0 = FUN_18038eaf0("C_Inferno","m_nFireLifetime");
    DAT_180cf9ca4 = FUN_18038eaf0("C_Inferno","m_firePositions");
    DAT_180cf9ca8 = FUN_18038eaf0("C_Inferno","m_bInPostEffectTime");
    DAT_180cf9cac = FUN_18038eaf0("C_Inferno","m_nInfernoType");
    DAT_180cf9cb0 = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
    DAT_180cf9cb4 = FUN_18038eaf0("C_MolotovProjectile","m_bIsIncGrenade");
    DAT_180cf9cb8 = FUN_18038eaf0("C_BaseEntity","m_nCreationTick");
    DAT_180cf9cbc = FUN_18038eaf0("C_BaseCSGrenadeProjectile","m_vInitialPosition");
    DAT_180cf9cc0 = FUN_18038eaf0("C_BaseCSGrenadeProjectile","m_vInitialVelocity");
    DAT_180cf9cc4 = FUN_18038eaf0("C_BaseCSGrenadeProjectile","m_nBounces");
    DAT_180cf9cc8 = FUN_18038eaf0("C_BaseEntity","m_flGravityScale");
    DAT_180cf9ccc = FUN_18038eaf0("C_BaseEntity","m_flFriction");
    DAT_180cf9cd0 = FUN_18038eaf0("C_BaseEntity","m_hGroundEntity");
    DAT_180cf9cd4 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_180cf9cd8 = FUN_18038eaf0("C_BaseEntity","m_pCollision");
    DAT_180cf9cdc = FUN_18038eaf0("CCollisionProperty","m_collisionAttribute");
    DAT_180cf9ce0 = FUN_18038eaf0("CCollisionProperty","m_usSolidFlags");
    DAT_180cf9ce4 = FUN_18038eaf0("CCollisionProperty","m_nSolidType");
    DAT_180cf9ce8 = FUN_18038eaf0("VPhysicsCollisionAttribute_t","m_nInteractsAs");
    DAT_180cf9cec = FUN_18038eaf0("VPhysicsCollisionAttribute_t","m_nInteractsWith");
    DAT_180cf9cf0 = FUN_18038eaf0("VPhysicsCollisionAttribute_t","m_nInteractsExclude");
    DAT_180cf9cf4 = FUN_18038eaf0("VPhysicsCollisionAttribute_t","m_nCollisionGroup");
    DAT_180cf9cf8 = FUN_18038eaf0("VPhysicsCollisionAttribute_t","m_nCollisionFunctionMask");
    DAT_180cf9cfc = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMins");
    DAT_180cf9d00 = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMaxs");
    uVar1 = FUN_18038eaf0("C_Inferno","m_drawableCount");
    if (0x6c00 < uVar1) {
      DAT_180cf9c98 = uVar1 - 0x6c00;
    }
    DAT_180cf9c40 = '\x01';
  }
  return;
}



/* ===== 180241d40 FUN_180241d40 ===== */

void FUN_180241d40(void)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  char *_Str1;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int *piVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  longlong lStack_120;
  undefined1 local_118;
  longlong local_110;
  float local_108;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e4;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [112];
  
  plVar21 = DAT_180cf9c08;
  puVar19 = auStack_168;
  puVar18 = auStack_168;
  puVar20 = auStack_168;
  plVar14 = DAT_180cf9c00;
  if (DAT_180cf9c00 != DAT_180cf9c08) {
    do {
      FUN_1802422f0(plVar14);
      plVar14 = plVar14 + 9;
    } while (plVar14 != plVar21);
    DAT_180cf9c08 = DAT_180cf9c00;
  }
  if (DAT_180cf9e88 != DAT_180cf9e90) {
    DAT_180cf9e90 = DAT_180cf9e88;
  }
  DAT_180ccf89b = 1;
  if (((DAT_180cf9c90 == 0) || (DAT_180cf9c94 == 0)) || (DAT_180cf9c98 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_1803a09f0(&local_e0);
  fVar6 = DAT_1808acaa8;
  fVar5 = DAT_1808ac7ec;
  fVar4 = DAT_1808ac34c;
  fVar3 = DAT_1808ac00c;
  plVar21 = local_e0;
  if (local_e0 != local_d8) {
    do {
      uVar16 = 0;
      if ((((*plVar21 != 0) &&
           (lVar11 = FUN_18000f3a0((ulonglong)DAT_180961968 + *plVar21), lVar11 != 0)) &&
          ((lVar11 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar11), lVar11 != 0 &&
           ((lVar11 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar11), lVar11 != 0 &&
            (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar11),
            _Str1 + -0x10000 < (char *)0x7ffffffeffff)))))) && (_Str1 != (char *)0x0)) {
        iVar9 = FUN_180247d80(_Str1);
        if (iVar9 == 0) {
          if (((bVar2) && (iVar9 = strcmp(_Str1,"C_Inferno"), iVar9 == 0)) &&
             (lVar11 = *plVar21, ((ulonglong)DAT_180cf9c98 - 0x9401) + lVar11 < 0x7ffffffeffff)) {
            local_f8 = 0;
            local_f4 = FUN_180011200((ulonglong)DAT_180cf9c90 + lVar11);
            piVar15 = &local_f8;
            if (-1 < local_f4) {
              piVar15 = &local_f4;
            }
            if (0x40 < local_f4) {
              piVar15 = &DAT_18063fd28;
            }
            iVar9 = *piVar15;
            local_140 = 0;
            local_138 = 0;
            local_130 = 0;
            local_128 = 0;
            lStack_120 = 0;
            local_118 = 0;
            local_110 = 0;
            local_108 = 0.0;
            local_148 = lVar11;
            if (((*plVar21 == 0) || (DAT_180ca09f8 == 0)) ||
               ((lVar12 = FUN_18000f3a0(*plVar21 + (ulonglong)DAT_180ca09f8), lVar12 == 0 ||
                (DAT_180ca0950 == 0)))) {
              uVar24 = 0;
              uVar23 = 0;
              uVar10 = 0;
            }
            else {
              puVar13 = (undefined8 *)FUN_1800111b0(local_c8,lVar12 + (ulonglong)DAT_180ca0950);
              uVar24 = *puVar13;
              uVar10 = *(undefined4 *)(puVar13 + 1);
              uVar23 = (undefined4)((ulonglong)uVar24 >> 0x20);
            }
            local_140 = CONCAT44(uVar23,(int)uVar24);
            local_138 = CONCAT44(local_138._4_4_,uVar10);
            if (0 < iVar9) {
              do {
                cVar8 = FUN_180011220(DAT_180cf9c94 + uVar16 + lVar11);
                if (cVar8 != '\0') {
                  lVar12 = uVar16 * 0x1b0 + (ulonglong)DAT_180cf9c98;
                  fVar22 = (float)FUN_18000f3d0(lVar12 + 0x1a8 + lVar11);
                  if ((((uint)fVar22 & 0x7f800000) != 0x7f800000) && (fVar4 <= fVar22)) {
                    puVar13 = (undefined8 *)FUN_1800111b0(local_a8,lVar12 + lVar11);
                    local_f0 = *puVar13;
                    local_e8 = *(undefined4 *)(puVar13 + 1);
                    local_e4 = fVar22;
                    FUN_1800df7c0(&local_130,&local_f0);
                  }
                }
                uVar17 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar17;
              } while ((int)uVar17 < iVar9);
            }
            if (local_130 == local_128) {
              FUN_1800df6b0(&local_130);
            }
            else {
              if (DAT_180cf9cac == 0) {
LAB_1802420ca:
                local_118 = 0;
              }
              else {
                iVar9 = FUN_180011200(lVar11 + (ulonglong)DAT_180cf9cac);
                local_118 = 1;
                if (iVar9 != 1) goto LAB_1802420ca;
              }
              if (DAT_180cf9cb0 != 0) {
                uVar10 = FUN_180011200(lVar11 + (ulonglong)DAT_180cf9cb0);
                plVar14 = (longlong *)FUN_1803a0940(local_res10,uVar10);
                local_110 = *plVar14;
              }
              if (DAT_180cf9ca0 == 0) {
                fVar22 = 0.0;
              }
              else {
                fVar22 = (float)FUN_18000f3d0(lVar11 + (ulonglong)DAT_180cf9ca0);
              }
              if (((((uint)fVar22 & 0x7f800000) == 0x7f800000) || (fVar22 <= 0.0)) ||
                 (fVar6 < fVar22)) {
                fVar22 = fVar5;
              }
              if ((DAT_180cf9c9c == 0) ||
                 (iVar9 = FUN_180011200(lVar11 + (ulonglong)DAT_180cf9c9c), iVar9 < 1)) {
                local_108 = 0.0;
              }
              else {
                local_108 = (float)iVar9 * fVar3 + fVar22;
              }
              lVar7 = lStack_120;
              lVar12 = local_128;
              lVar11 = local_130;
              plVar14 = DAT_180cf9c08;
              if (DAT_180cf9c08 == DAT_180cf9c10) {
                FUN_18025ea20();
              }
              else {
                *DAT_180cf9c08 = local_148;
                *(undefined4 *)(plVar14 + 1) = (undefined4)local_140;
                *(undefined4 *)((longlong)plVar14 + 0xc) = local_140._4_4_;
                *(undefined4 *)(plVar14 + 2) = (undefined4)local_138;
                lStack_120 = 0;
                local_128 = 0;
                local_130 = 0;
                plVar14[3] = lVar11;
                plVar14[4] = lVar12;
                plVar14[5] = lVar7;
                *(undefined1 *)(plVar14 + 6) = local_118;
                plVar14[7] = local_110;
                *(float *)(plVar14 + 8) = local_108;
                DAT_180cf9c08 = DAT_180cf9c08 + 9;
              }
              if (local_130 != 0) {
                uVar16 = lStack_120 - local_130 & 0xfffffffffffffff0;
                if (uVar16 < 0x1000) {
                  lVar11 = local_130;
                }
                else {
                  if (0x1f < (local_130 - *(longlong *)(local_130 + -8)) - 8U) {
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    puVar18 = auStack_160;
                    goto LAB_18024229f;
                  }
                  uVar16 = uVar16 + 0x27;
                  lVar11 = *(longlong *)(local_130 + -8);
                }
                thunk_FUN_1803d64e0(lVar11,uVar16);
              }
            }
          }
        }
        else {
          local_res8 = *plVar21;
          FUN_1800242d0(&DAT_180cf9e88,&local_res8);
        }
      }
      plVar21 = plVar21 + 1;
    } while (plVar21 != local_d8);
  }
  if (local_e0 == (longlong *)0x0) {
    return;
  }
  plVar14 = local_e0;
  if (0xfff < (ulonglong)((local_d0 - (longlong)local_e0 >> 3) * 8)) {
    plVar14 = (longlong *)local_e0[-1];
    plVar21 = (longlong *)((longlong)local_e0 + (-8 - (longlong)plVar14));
    if (plVar21 <= &DAT_0000001f) goto LAB_1802422a9;
LAB_18024229f:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar19 = puVar18 + 8;
    plVar14 = plVar21;
  }
  puVar20 = puVar19;
LAB_1802422a9:
  *(undefined8 *)(puVar20 + -8) = 0x1802422ae;
  thunk_FUN_1803d64e0(plVar14);
  return;
}



/* ===== 1802422f0 FUN_1802422f0 ===== */

void FUN_1802422f0(longlong param_1)

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
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  if (0xfff < (*(longlong *)(param_1 + 0x28) - lVar2 & 0xfffffffffffffff0U)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_180242337;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_180242337:
  *(undefined8 *)(puVar5 + -8) = 0x18024233c;
  thunk_FUN_1803d64e0(lVar3);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* ===== 180242350 FUN_180242350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180242350(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  longlong lVar5;
  undefined1 auStack_98 [32];
  char local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar3 = local_38;
  if ((((param_1 == 0) || (uVar3 = (ulonglong)DAT_180cf9c6c, DAT_180cf9c6c == 0)) ||
      (uVar4 = (ulonglong)DAT_180cf9c70, DAT_180cf9c70 == 0)) ||
     ((uVar3 = FUN_18000f3a0(param_1 + uVar3), 0x7ffffffefffe < uVar3 - 0x10000 ||
      (uVar3 = FUN_18000f3a0(uVar3 + uVar4), 0x7ffffffefffe < uVar3 - 0x10000)))) {
    return uVar3 & 0xffffffffffffff00;
  }
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  lVar5 = 0;
  do {
    cVar1 = FUN_180011220(lVar5 + uVar3);
    local_78[lVar5] = cVar1;
    if (cVar1 == '\0') break;
    uVar4 = lVar5 + 2;
    lVar5 = lVar5 + 1;
  } while (uVar4 < 0x40);
  iVar2 = strcmp(local_78,param_2);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
}



/* ===== 180242430 FUN_180242430 ===== */

float * FUN_180242430(float *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_78 [112];
  
  if ((((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar2 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar2 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  else {
    pfVar3 = (float *)FUN_1800111b0(local_78,lVar2 + (ulonglong)DAT_180ca0950);
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  if (((DAT_180ca0a3c == 0) || ((uint)DAT_180ca09b0 == 0)) ||
     ((DAT_180ca09b0._4_4_ == 0 ||
      (lVar2 = FUN_18000f3a0((ulonglong)DAT_180ca0a3c + *param_2), 0x7ffffffefffe < lVar2 - 0x10000U
      )))) {
    param_1[2] = fVar8;
    param_1[1] = fVar7;
    *param_1 = fVar6;
    return param_1;
  }
  pfVar3 = (float *)FUN_1800111b0(local_78,(ulonglong)(uint)DAT_180ca09b0 + lVar2);
  fVar1 = *pfVar3;
  fVar4 = pfVar3[1];
  fVar5 = pfVar3[2];
  pfVar3 = (float *)FUN_1800111b0(local_78,(ulonglong)DAT_180ca09b0._4_4_ + lVar2);
  fVar4 = (fVar4 + pfVar3[1]) * DAT_1808ac1f4;
  fVar5 = (fVar5 + pfVar3[2]) * DAT_1808ac1f4;
  *param_1 = (fVar1 + *pfVar3) * DAT_1808ac1f4 + fVar6;
  param_1[1] = fVar4 + fVar7;
  param_1[2] = fVar5 + fVar8;
  return param_1;
}



/* ===== 1802425e0 FUN_1802425e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802425e0(longlong *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 local_res20;
  undefined1 local_38 [48];
  
  uVar7 = DAT_180cf9f4c;
  uVar2 = _DAT_1808ade90;
  fVar1 = DAT_1808accbc;
  if ((((DAT_180ccf985 != '\0') && ((DAT_180cf9f58 & 0x7f800000) != 0x7f800000)) &&
      (uVar3 = DAT_180cf9f4c & 0x7f800000, uVar3 != 0x7f800000)) &&
     (((float)(DAT_180cf9f58 & _DAT_1808ade90) <= DAT_1808accbc &&
      ((float)(DAT_180cf9f4c & _DAT_1808ade90) <= DAT_1808accbc)))) {
    *param_2 = DAT_180cf9f58;
    *param_3 = uVar7;
    return (ulonglong)CONCAT31((int3)(uVar3 >> 8),uVar3 != 0x7f800000);
  }
  if ((DAT_180961a38 != 0) && (DAT_180cd1ac4 != '\0')) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res20);
      DAT_181108a00 = local_res20;
      DAT_1811089f8 = FUN_1803a0c50(&local_res20);
      DAT_180cd1304 = '\x01';
    }
    if (((DAT_1811089f8 != 0) && (lVar4 = FUN_18029b030(DAT_180961a38), lVar4 != 0)) &&
       (DAT_180961a38 != 0)) {
      uVar7 = FUN_18000f3d0(DAT_180961a38 + lVar4);
      *param_2 = uVar7;
      uVar7 = FUN_18000f3d0(DAT_180961a38 + 4 + lVar4);
      *param_3 = uVar7;
      if ((((*param_2 & 0x7f800000) != 0x7f800000) &&
          (uVar3 = uVar7 & 0x7f800000,
          uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),uVar3 != 0x7f800000), uVar3 != 0x7f800000))
         && (((float)(*param_2 & uVar2) <= fVar1 && ((float)(uVar7 & uVar2) <= fVar1))))
      goto LAB_1802427ea;
    }
  }
  if ((*param_1 == 0) || (DAT_180ca0a20 == 0)) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    puVar6 = (uint *)FUN_1800111b0(local_38,*param_1 + (ulonglong)DAT_180ca0a20);
    uVar7 = *puVar6;
    uVar3 = puVar6[1];
  }
  *param_2 = uVar7;
  *param_3 = uVar3;
  uVar7 = *param_2 & 0x7f800000;
  uVar5 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),uVar7 != 0x7f800000);
  if ((((uVar7 == 0x7f800000) ||
       (uVar7 = uVar3 & 0x7f800000,
       uVar5 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),uVar7 != 0x7f800000), uVar7 == 0x7f800000)) ||
      (fVar1 < (float)(*param_2 & uVar2))) || (fVar1 < (float)(uVar3 & uVar2))) {
    return uVar5 & 0xffffffffffffff00;
  }
LAB_1802427ea:
  return CONCAT71((int7)(uVar5 >> 8),1);
}



/* ===== 180242810 FUN_180242810 ===== */

uint FUN_180242810(int param_1)

{
  uint uVar1;
  
  if (param_1 - 0x2bU < 2) {
    uVar1 = DAT_1808ac428;
  }
  else {
    if ((param_1 - 0x2eU & 0xfffffffd) != 0) {
      return DAT_1808ac950;
    }
    if (DAT_1809f3048 == 0) {
      if (DAT_1809f3050 != '\0') {
        return DAT_1808ac540;
      }
      DAT_1809f3048 = FUN_180264b70(PTR_s_molotov_throw_detonate_time_1809f3040);
      DAT_1809f3050 = DAT_1809f3048 == 0;
      if (DAT_1809f3048 == 0) {
        return DAT_1808ac540;
      }
    }
    uVar1 = FUN_180264d70(DAT_1809f3048);
    if ((uVar1 & 0x7f800000) == 0x7f800000) {
      return DAT_1808ac540;
    }
  }
  return uVar1;
}



/* ===== 1802428c0 FUN_1802428c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1802428c0(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float local_28 [8];
  
  if ((DAT_180cf9c64 != 0) && (param_1 != 0)) {
    if ((DAT_180cf9c44 == 0) ||
       (cVar5 = FUN_180011220(param_1 + (ulonglong)DAT_180cf9c44), cVar5 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((DAT_180cf9c48 == 0) ||
       (fVar8 = (float)FUN_18000f3d0(param_1 + (ulonglong)DAT_180cf9c48), fVar8 == 0.0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((DAT_180cf9c50 == 0) ||
       (cVar5 = FUN_180011220(param_1 + (ulonglong)DAT_180cf9c50), cVar5 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((DAT_180cf9c4c == 0) ||
       (cVar5 = FUN_180011220(param_1 + (ulonglong)DAT_180cf9c4c), bVar4 = true, cVar5 != '\x01')) {
      bVar4 = false;
    }
    if ((bVar1 || bVar2) || ((!bVar3 && (bVar4)))) {
      local_28[1] = (float)FUN_18000f3d0((ulonglong)DAT_180cf9c64 + param_1);
      if (((uint)local_28[1] & 0x7f800000) != 0x7f800000) {
        local_28[2] = 1.0;
        local_28[0] = 0.0;
        pfVar7 = local_28;
        if (0.0 <= local_28[1]) {
          pfVar7 = local_28 + 1;
        }
        pfVar6 = local_28 + 2;
        if (local_28[1] <= DAT_1808ac34c) {
          pfVar6 = pfVar7;
        }
        fVar8 = DAT_1808ac1f4;
        if (DAT_1808ac0c0 < (float)((uint)(*pfVar6 - DAT_1808ac1f4) & _DAT_1808ade90)) {
          fVar8 = *pfVar6;
        }
        return fVar8;
      }
    }
  }
  return DAT_1808ac34c;
}



/* ===== 180242a40 FUN_180242a40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180242a40(float *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  
  uVar1 = DAT_1808acbd0;
  fVar2 = (float)FUN_180516750(param_2,DAT_1808acbd0);
  fVar5 = DAT_1808ac014;
  fVar7 = (fVar2 - ((DAT_1808acaf4 - (float)((uint)fVar2 & _DAT_1808ade90)) * DAT_1808ac864) /
                   DAT_1808acaf4) * DAT_1808ac014;
  fVar2 = (float)FUN_180516750(param_3,uVar1);
  fVar3 = (float)FUN_180517200(fVar7);
  fVar4 = (float)FUN_180517200(fVar2 * fVar5);
  fVar4 = fVar4 * fVar3;
  fVar5 = (float)FUN_180517790(fVar2 * fVar5);
  fVar5 = fVar5 * fVar3;
  uVar6 = FUN_180517790(fVar7);
  fVar3 = (float)(uVar6 ^ DAT_1808adec0);
  fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18051af10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar2 = DAT_1808ac34c / (fVar2 + DAT_1808abf80);
  *param_1 = fVar4 * fVar2;
  param_1[1] = fVar5 * fVar2;
  param_1[2] = fVar3 * fVar2;
  return param_1;
}



/* ===== 180242b90 FUN_180242b90 ===== */

float FUN_180242b90(longlong param_1,float param_2)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_res10 [6];
  
  fVar4 = DAT_1808acc2c;
  if ((DAT_180cf9c68 != 0) && (DAT_1809619a0 != 0)) {
    lVar1 = FUN_18000f3a0((ulonglong)DAT_1809619c0 + param_1 + (ulonglong)DAT_1809619a0);
    if (lVar1 != 0) {
      fVar3 = (float)FUN_18000f3d0((ulonglong)DAT_180cf9c68 + lVar1);
      if ((((uint)fVar3 & 0x7f800000) != 0x7f800000) && (0.0 < fVar3)) {
        fVar4 = fVar3;
      }
    }
  }
  local_res10[0] = fVar4 * DAT_1808ac2cc;
  pfVar2 = local_res10;
  if (local_res10[0] < DAT_1808ac900) {
    pfVar2 = (float *)&DAT_18063fd24;
  }
  if (DAT_1808acc2c < local_res10[0]) {
    pfVar2 = (float *)&DAT_18063fd2c;
  }
  return (param_2 * DAT_1808ac254 + DAT_1808ac154) * *pfVar2;
}



/* ===== 180242c70 FUN_180242c70 ===== */

float FUN_180242c70(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  FUN_180241850();
  if (((param_1 == 0) || (DAT_180cf9c68 == 0)) || (0x7ffffffefffe < param_1 - 0x10000U)) {
    return 0.0;
  }
  fVar1 = (float)FUN_18000f3d0((ulonglong)DAT_180cf9c68 + param_1);
  fVar1 = fVar1 * DAT_1808ac2cc;
  fVar2 = DAT_1808acc2c;
  if ((fVar1 <= DAT_1808acc2c) && (fVar2 = DAT_1808ac900, DAT_1808ac900 <= fVar1)) {
    fVar2 = fVar1;
  }
  return (param_2 * DAT_1808ac254 + DAT_1808ac154) * fVar2;
}



/* ===== 180242d10 FUN_180242d10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180242d10(float *param_1,float *param_2,float param_3,undefined8 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  char *pcVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float extraout_XMM0_Da;
  ulonglong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  
  if ((DAT_18092131b == '\0') || (cVar4 = FUN_18026b8a0(), cVar4 != '\0')) {
    if (param_4 == (undefined8 *)0x0) {
      return 0;
    }
    pcVar5 = "off";
    goto LAB_18024323c;
  }
  if (param_3 == 0.0) {
    if (param_4 == (undefined8 *)0x0) {
      return 0;
    }
    pcVar5 = "speed 0";
    goto LAB_18024323c;
  }
  if (DAT_1809eea10 == 0) {
    if (DAT_1809eea18 == '\0') {
      DAT_1809eea10 = FUN_180264b70(PTR_s_sv_quantize_movement_input_1809eea08);
      DAT_1809eea18 = DAT_1809eea10 == 0;
      if (DAT_1809eea10 != 0) goto LAB_180242dd4;
    }
  }
  else {
LAB_180242dd4:
    cVar4 = FUN_180264d70(DAT_1809eea10);
    if ((cVar4 != '\0') && (cVar4 = FUN_1801eca30(), cVar4 == '\0')) {
      if (param_4 == (undefined8 *)0x0) {
        return 0;
      }
      pcVar5 = "sv_quantize_movement_input 1, sv_subtick_movement_view_angles 0";
      goto LAB_18024323c;
    }
  }
  if ((DAT_1809f351c == 2) ||
     ((((DAT_1809f351c == 1 && (lVar6 = FUN_180266660(), lVar6 != 0)) && (DAT_180cf9f80 != 0)) &&
      (cVar4 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar6), cVar4 != '\0')))) {
    if (param_4 == (undefined8 *)0x0) {
      return 0;
    }
    pcVar5 = "safe mode";
  }
  else {
    fVar16 = *param_1 * DAT_1808ac014;
    fVar18 = param_1[1] * DAT_1808ac014;
    fVar7 = (float)FUN_180517790(fVar16);
    fVar8 = (float)FUN_180517200(fVar16);
    fVar9 = (float)FUN_180517200(fVar18);
    fVar10 = (float)FUN_180517790(fVar18);
    fVar16 = param_2[1];
    fVar18 = param_2[2];
    fVar23 = *param_2;
    fVar20 = fVar18 * fVar18 + fVar16 * fVar16 + fVar23 * fVar23;
    if (fVar20 < 0.0) {
      fVar17 = (float)FUN_18051af10(fVar20);
    }
    else {
      fVar17 = SQRT(fVar20);
    }
    fVar24 = DAT_1808ac34c;
    if ((fVar17 < DAT_1808abf54) || (DAT_1808accfc < fVar17)) {
      if (fVar20 == 0.0) {
        fVar14 = 0.0;
        fVar13 = 0.0;
        fVar20 = 0.0;
      }
      else {
        dVar2 = (double)fVar16;
        dVar1 = (double)fVar23;
        dVar3 = (double)fVar18;
        dVar15 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
        if (dVar15 < 0.0) {
          dVar15 = (double)FUN_18051ff20(dVar15);
        }
        else {
          dVar15 = SQRT(dVar15);
        }
        dVar15 = DAT_1808ac500 / dVar15;
        fVar20 = (float)(dVar1 * dVar15);
        fVar13 = (float)(dVar3 * dVar15);
        fVar14 = (float)(dVar2 * dVar15);
      }
    }
    else {
      fVar13 = DAT_1808ac34c / fVar17;
      fVar20 = fVar23 * fVar13;
      fVar14 = fVar16 * fVar13;
      fVar13 = fVar18 * fVar13;
    }
    fVar13 = (fVar13 * fVar7 - fVar14 * fVar10 * fVar8) - fVar20 * fVar9 * fVar8;
    fVar20 = (fVar13 * DAT_1808ac988 * fVar13 * fVar17 * fVar17 + param_3 * DAT_1808ac918 * param_3)
             - fVar17 * DAT_1808ac988 * fVar17;
    if (fVar20 < 0.0) {
      uVar12 = FUN_18051af10(fVar20);
      fVar20 = (float)uVar12;
      uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    else {
      uVar22 = 0;
      fVar20 = SQRT(fVar20);
    }
    uVar21 = _UNK_1808adec4;
    fVar14 = DAT_1808acbd0;
    fVar20 = (fVar20 - fVar17 * DAT_1808ac750 * fVar13) * DAT_1808ac140;
    if (((uint)fVar20 & 0x7f800000) != 0x7f800000) {
      fVar24 = fVar24 / param_3;
      fVar18 = (fVar18 * _DAT_1808acda8 - fVar20 * fVar7) * fVar24;
      fVar23 = (fVar20 * fVar9 * fVar8 - fVar23 * DAT_1808ac3d4) * fVar24;
      fVar24 = (fVar20 * fVar10 * fVar8 - fVar16 * DAT_1808ac3d4) * fVar24;
      if ((fVar23 == 0.0) && (fVar24 == 0.0)) {
        fVar16 = 0.0;
        uVar22 = 0;
        if (fVar18 <= 0.0) {
          uVar21 = 0;
          fVar7 = DAT_1808acaf4;
        }
        else {
          uVar21 = 0;
          fVar7 = DAT_1808acba8;
        }
      }
      else {
        uVar19 = (uint)fVar18 ^ DAT_1808adec0;
        fVar16 = fVar24 * fVar24 + fVar23 * fVar23;
        if (fVar16 < 0.0) {
          uVar11 = FUN_18051af10(CONCAT44(uVar22,fVar16));
        }
        else {
          uVar11 = (ulonglong)(uint)SQRT(fVar16);
        }
        uVar12 = FUN_180516b00(CONCAT44(uVar21,uVar19),uVar11);
        fVar18 = DAT_1808acb58;
        fVar16 = DAT_1808ac680;
        uVar21 = (undefined4)((ulonglong)uVar12 >> 0x20);
        fVar7 = ((float)uVar12 * DAT_1808acb58) / DAT_1808ac680;
        uVar12 = FUN_180516b00(CONCAT44(uVar22,fVar24),CONCAT44(uVar22,fVar23));
        uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
        fVar16 = ((float)uVar12 * fVar18) / fVar16;
        if (fVar16 < 0.0) {
          fVar16 = fVar16 + fVar14;
        }
        if (fVar7 < 0.0) {
          fVar7 = fVar7 + fVar14;
        }
      }
      fVar23 = DAT_1808ac1f4;
      fVar18 = DAT_1808abfd0;
      fVar8 = (float)FUN_18053f0d0(CONCAT44(uVar21,fVar7 * DAT_1808abfd0 + DAT_1808ac1f4));
      *param_1 = fVar7 - fVar8 * fVar14;
      FUN_18053f0d0(CONCAT44(uVar22,fVar16 * fVar18 + fVar23));
      param_1[2] = 0.0;
      param_1[1] = fVar16 - extraout_XMM0_Da * fVar14;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = &DAT_18058b643;
      }
      return 1;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 0;
    }
    pcVar5 = "no solution (k not finite)";
  }
LAB_18024323c:
  *param_4 = pcVar5;
  return 0;
}



/* ===== 180243290 FUN_180243290 ===== */

void FUN_180243290(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  float fVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  int local_3c;
  undefined4 local_38;
  
  plVar2 = *(longlong **)(param_1 + 0x88);
  if ((plVar2 != (longlong *)0x0) &&
     (puVar3 = (undefined4 *)plVar2[1],
     (ulonglong)(((longlong)puVar3 - *plVar2 >> 2) * -0x71c71c71c71c71c7) < 0x1000)) {
    fVar1 = *(float *)(param_1 + 0x38);
    local_40 = 0.0;
    if (0.0 <= fVar1) {
      local_40 = fVar1;
    }
    local_58 = *param_2;
    local_54 = param_2[1];
    local_50 = param_2[2];
    local_4c = *(undefined4 *)(param_1 + 0x10);
    local_48 = *(undefined4 *)(param_1 + 0x14);
    local_3c = (int)(fVar1 * DAT_1808acab0 + DAT_1808ac1f4);
    local_44 = *(undefined4 *)(param_1 + 0x18);
    if (puVar3 != (undefined4 *)plVar2[2]) {
      *puVar3 = local_58;
      puVar3[1] = local_54;
      puVar3[2] = local_50;
      puVar3[3] = local_4c;
      puVar3[4] = local_48;
      puVar3[5] = local_44;
      puVar3[6] = local_40;
      puVar3[7] = local_3c;
      puVar3[8] = param_3;
      plVar2[1] = plVar2[1] + 0x24;
      return;
    }
    local_38 = param_3;
    FUN_18025e860(plVar2,puVar3,&local_58);
  }
  return;
}



/* ===== 1802433b0 FUN_1802433b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1802433b0(undefined8 *param_1,undefined8 param_2,int param_3,float param_4,float param_5,
             undefined8 *param_6,int *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  int *piVar11;
  undefined8 *puVar12;
  char cVar13;
  float fVar14;
  longlong lVar15;
  float *pfVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int extraout_XMM0_Da;
  int iVar23;
  float local_238;
  float local_234;
  float local_230;
  undefined8 local_228;
  float local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 uStack_18c;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined2 uStack_178;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined8 uStack_14c;
  undefined2 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  
  if (((DAT_1809f351c != 2) &&
      ((((DAT_1809f351c != 1 || (lVar15 = FUN_180266660(), lVar15 == 0)) || (DAT_180cf9f80 == 0)) ||
       (cVar13 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar15), cVar13 == '\0')))) &&
     (cVar13 = FUN_18026b810(1), cVar13 == '\0')) {
    local_234 = param_5;
    local_230 = 0.0;
    local_238 = param_4;
    uVar19 = FUN_1802428c0(param_2);
    uVar19 = FUN_180242b90(param_2,uVar19);
    cVar13 = FUN_180242d10(&local_238,(longlong)param_6 + 0xc,uVar19,0);
    if (cVar13 != '\0') {
      param_5 = local_234;
      param_4 = local_238;
    }
  }
  pfVar16 = (float *)FUN_180242a40(&local_238,param_4,param_5);
  fVar14 = *pfVar16;
  fVar1 = pfVar16[1];
  fVar2 = pfVar16[2];
  fVar20 = (float)FUN_1802428c0(param_2);
  fVar21 = (float)FUN_180242b90(param_2,fVar20);
  uVar6 = *param_6;
  fVar20 = *(float *)(param_6 + 1) + (fVar20 * DAT_1808ac8b0 - DAT_1808ac8b0);
  local_228._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
  iVar22 = (int)local_228._4_4_;
  local_228 = uVar6;
  local_220 = fVar20;
  cVar13 = FUN_180243960();
  iVar23 = (int)uVar6;
  if (cVar13 == '\0') {
    local_218 = _DAT_1808ad2c0;
    uStack_210 = _UNK_1808ad2c8;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    local_238 = fVar14 * DAT_1808ac918 + (float)local_228;
    local_1f0 = 0;
    local_234 = fVar1 * DAT_1808ac918 + local_228._4_4_;
    local_1ec = 0;
    local_1e8 = 0x3f800000;
    local_230 = fVar2 * DAT_1808ac918 + local_220;
    cVar13 = FUN_1802aed00(&local_228,&local_238,&DAT_18063fd08,&DAT_18063fd30,*param_1,0x2000c3001,
                           4,0xf,&local_218,0);
    if (cVar13 == '\0') {
      return 0;
    }
    iVar22 = (int)uStack_210;
    fVar20 = uStack_210._4_4_;
    iVar23 = local_218._4_4_;
  }
  uStack_1dc = 0;
  uStack_1d4 = 0;
  local_1e0 = 0;
  local_c8 = 0x200003001;
  lVar15 = 2;
  local_19c = 0xbf800000;
  local_1bc = _DAT_1808ad9b0;
  uStack_1b4 = _UNK_1808ad9b8;
  local_c0 = 0x8000100000;
  local_198 = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  local_190 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_18c = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_188 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_180 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_178 = 0;
  uStack_1cc = 0;
  uStack_1c4 = 0;
  uStack_174 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  local_150 = 0;
  uStack_14c = 0;
  uStack_144 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_110 = 0;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0x10;
  local_a8 = 0;
  piVar11 = param_7;
  puVar12 = (undefined8 *)&local_1e0;
  do {
    puVar18 = puVar12;
    piVar17 = piVar11;
    uVar6 = puVar18[1];
    uVar7 = puVar18[2];
    uVar8 = puVar18[3];
    *(undefined8 *)piVar17 = *puVar18;
    *(undefined8 *)(piVar17 + 2) = uVar6;
    uVar6 = puVar18[4];
    uVar9 = puVar18[5];
    *(undefined8 *)(piVar17 + 4) = uVar7;
    *(undefined8 *)(piVar17 + 6) = uVar8;
    uVar7 = puVar18[6];
    uVar8 = puVar18[7];
    *(undefined8 *)(piVar17 + 8) = uVar6;
    *(undefined8 *)(piVar17 + 10) = uVar9;
    uVar6 = puVar18[8];
    uVar9 = puVar18[9];
    *(undefined8 *)(piVar17 + 0xc) = uVar7;
    *(undefined8 *)(piVar17 + 0xe) = uVar8;
    uVar7 = puVar18[10];
    uVar8 = puVar18[0xb];
    *(undefined8 *)(piVar17 + 0x10) = uVar6;
    *(undefined8 *)(piVar17 + 0x12) = uVar9;
    uVar6 = puVar18[0xc];
    uVar9 = puVar18[0xd];
    *(undefined8 *)(piVar17 + 0x14) = uVar7;
    *(undefined8 *)(piVar17 + 0x16) = uVar8;
    uVar7 = puVar18[0xe];
    uVar8 = puVar18[0xf];
    *(undefined8 *)(piVar17 + 0x18) = uVar6;
    *(undefined8 *)(piVar17 + 0x1a) = uVar9;
    *(undefined8 *)(piVar17 + 0x1c) = uVar7;
    *(undefined8 *)(piVar17 + 0x1e) = uVar8;
    fVar10 = DAT_1808ac3d4;
    lVar15 = lVar15 + -1;
    piVar11 = piVar17 + 0x20;
    puVar12 = puVar18 + 0x10;
  } while (lVar15 != 0);
  uVar6 = puVar18[0x11];
  uVar7 = puVar18[0x12];
  uVar8 = puVar18[0x13];
  fVar3 = *(float *)(param_6 + 2);
  *(undefined8 *)(piVar17 + 0x20) = puVar18[0x10];
  *(undefined8 *)(piVar17 + 0x22) = uVar6;
  uVar6 = puVar18[0x14];
  uVar9 = puVar18[0x15];
  *(undefined8 *)(piVar17 + 0x24) = uVar7;
  *(undefined8 *)(piVar17 + 0x26) = uVar8;
  uVar7 = puVar18[0x16];
  uVar8 = puVar18[0x17];
  *(undefined8 *)(piVar17 + 0x28) = uVar6;
  *(undefined8 *)(piVar17 + 0x2a) = uVar9;
  fVar4 = *(float *)((longlong)param_6 + 0xc);
  *(undefined8 *)(piVar17 + 0x2c) = uVar7;
  *(undefined8 *)(piVar17 + 0x2e) = uVar8;
  fVar5 = *(float *)((longlong)param_6 + 0x14);
  *(undefined8 *)(param_7 + 0x1e) = *param_1;
  param_7[1] = iVar23;
  param_7[2] = iVar22;
  param_7[3] = (int)fVar20;
  *param_7 = param_3;
  *(undefined8 *)(param_7 + 0x40) = param_2;
  param_7[4] = (int)(fVar4 * fVar10 + fVar14 * fVar21);
  param_7[5] = (int)(fVar3 * fVar10 + fVar1 * fVar21);
  param_7[6] = (int)(fVar5 * fVar10 + fVar2 * fVar21);
  if (DAT_1809f3060 == 0) {
    if (DAT_1809f3068 == '\0') {
      DAT_1809f3060 = FUN_180264b70(PTR_s_sv_gravity_1809f3058);
      DAT_1809f3068 = DAT_1809f3060 == 0;
      if (DAT_1809f3060 != 0) goto LAB_180243829;
    }
LAB_180243854:
    fVar14 = DAT_1808acc30;
  }
  else {
LAB_180243829:
    fVar14 = (float)FUN_180264d70(DAT_1809f3060);
    if (((uint)fVar14 & 0x7f800000) == 0x7f800000) goto LAB_180243854;
  }
  lVar15 = DAT_1809f3138;
  param_7[10] = (int)(fVar14 * DAT_1808ac1b0);
  if (lVar15 == 0) {
    if (DAT_1809f3140 == '\0') {
      lVar15 = FUN_180264b70(PTR_s_weapon_molotov_maxdetonateslope_1809f3130);
      DAT_1809f3140 = lVar15 == 0;
      DAT_1809f3138 = lVar15;
      if (lVar15 != 0) goto LAB_1802438a0;
    }
  }
  else {
LAB_1802438a0:
    fVar14 = (float)FUN_180264d70(lVar15);
    if (((uint)fVar14 & 0x7f800000) != 0x7f800000) goto LAB_1802438d3;
  }
  fVar14 = DAT_1808aca54;
LAB_1802438d3:
  iVar22 = FUN_180517200(fVar14 * DAT_1808ac014);
  param_7[0xd] = iVar22;
  param_7[0xe] = 0;
  FUN_180242810(param_3);
  param_7[0xf] = extraout_XMM0_Da;
  if (*param_7 == 0x2f) {
    iVar22 = DAT_1808ac540;
  }
  else {
    iVar22 = 0;
  }
  param_7[0x10] = iVar22;
  return 1;
}



/* ===== 180243960 FUN_180243960 ===== */

ulonglong FUN_180243960(void)

{
  uint3 uVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (DAT_1809f3150 == 0) {
    uVar4 = 0;
    if (DAT_1809f3158 != '\0') goto LAB_1802439d2;
    DAT_1809f3150 = FUN_180264b70(PTR_s_sv_grenade_collision_sphere_1809f3148);
    DAT_1809f3158 = DAT_1809f3150 == 0;
    uVar4 = 0;
    if (DAT_1809f3150 == 0) goto LAB_1802439d2;
  }
  fVar2 = (float)FUN_180264d70(DAT_1809f3150);
  uVar3 = (uint)fVar2 & 0x7f800000;
  uVar1 = (uint3)(uVar3 >> 8);
  uVar4 = (ulonglong)CONCAT31(uVar1,uVar3 != 0x7f800000);
  if ((uVar3 != 0x7f800000) && (fVar2 != 0.0)) {
    return CONCAT71((uint7)uVar1,1);
  }
LAB_1802439d2:
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 1802439e0 FUN_1802439e0 ===== */

undefined4 FUN_1802439e0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    cVar1 = FUN_180243ec0(*(longlong *)(param_1 + 0x110),"C_BaseCSGrenadeProjectile");
    if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x110) != 0)) && (DAT_180cf9cd8 != 0)) {
      lVar2 = FUN_18000f3a0(*(longlong *)(param_1 + 0x110) + (ulonglong)DAT_180cf9cd8);
      lVar3 = 0;
      if (lVar2 - 0x10000U < 0x7ffffffeffff) {
        lVar3 = lVar2;
      }
      if (((lVar3 != 0) && (DAT_180cf9cdc != 0)) && (DAT_180cf9cf4 != 0)) {
        FUN_180011220((ulonglong)DAT_180cf9cdc + (ulonglong)DAT_180cf9cf4 + lVar3);
      }
    }
  }
  if ((DAT_180961f58 != 0) && (DAT_180961f40 != 0)) {
    lVar3 = FUN_18000f3a0();
    if (lVar3 != 0) {
      local_10 = *(undefined4 *)(param_2 + 1);
      local_18 = *param_2;
      cVar1 = FUN_1802ae0d0(lVar3,&local_18);
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  return 0;
}



/* ===== 180243b00 FUN_180243b00 ===== */

undefined8 FUN_180243b00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar1 = DAT_180cf9d60;
  if (param_2 != 0) {
    if ((DAT_180cf9d60 != (longlong *)0x0) && (*DAT_180cf9d60 != DAT_180cf9d60[1])) {
      FUN_180260420();
      if ((DAT_180cf9ee4 == 0) ||
         (lVar3 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180cf9ee4), lVar3 == 0)) {
        iVar2 = -1;
      }
      else {
        iVar2 = FUN_180011200(lVar3 + 0x10);
      }
      for (plVar4 = (longlong *)*plVar1; plVar4 != (longlong *)plVar1[1]; plVar4 = plVar4 + 6) {
        if (((*(char *)((longlong)plVar4 + 0x27) != '\0') && (*plVar4 == param_2)) &&
           ((int)plVar4[1] == iVar2)) {
          return 0;
        }
      }
    }
    lVar3 = FUN_18000f3a0((ulonglong)DAT_180961968 + param_2);
    if ((lVar3 != 0) && (uVar5 = FUN_180011220(lVar3 + 0x11), (uVar5 & 0x40) != 0)) {
      return 0;
    }
  }
  return 1;
}



/* ===== 180243bc0 FUN_180243bc0 ===== */

char FUN_180243bc0(int *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char *_Str1;
  longlong local_res8;
  float local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined **local_20;
  
  lVar6 = 0x110;
  if (*(longlong *)(param_1 + 0x44) == 0) {
    lVar6 = 0x78;
  }
  uVar1 = *(undefined8 *)(lVar6 + (longlong)param_1);
  local_38 = *(undefined8 *)(param_1 + 0x4a);
  local_30 = *(undefined8 *)(param_1 + 0x48);
  local_20 = &PTR_FUN_1809f2e20;
  DAT_180cf9d60 = *(undefined8 *)(param_1 + 0x20);
  local_28 = 2;
  cVar2 = FUN_180243960();
  if (cVar2 == '\0') {
    local_48 = (float)param_1[1] + *param_2;
    local_44 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20),
                        (float)*(undefined8 *)(param_1 + 2) + (float)*(undefined8 *)(param_2 + 1));
    cVar2 = FUN_1802aed00(param_1 + 1,&local_48,&DAT_18063fcf8,&DAT_18063fd18,uVar1,
                          *(undefined8 *)(param_1 + 0x46),(char)param_1[0x4c],0xf,param_3,&local_38)
    ;
    goto LAB_180243d74;
  }
  if (DAT_1809f3168 == 0) {
    if (DAT_1809f3170 == '\0') {
      DAT_1809f3168 = FUN_180264b70(PTR_s_sv_grenade_collision_sphere_radi_1809f3160);
      DAT_1809f3170 = DAT_1809f3168 == 0;
      if (DAT_1809f3168 != 0) goto LAB_180243c71;
    }
LAB_180243c9e:
    uVar4 = DAT_1808ac540;
  }
  else {
LAB_180243c71:
    uVar4 = FUN_180264d70(DAT_1809f3168);
    local_res8 = CONCAT44(local_res8._4_4_,uVar4);
    if ((uVar4 & 0x7f800000) == 0x7f800000) goto LAB_180243c9e;
  }
  local_48 = *param_2 + (float)param_1[1];
  local_44 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20),
                      (float)*(undefined8 *)(param_1 + 2) + (float)*(undefined8 *)(param_2 + 1));
  cVar2 = FUN_1802af020(param_1 + 1,&local_48,uVar4,uVar1,*(undefined8 *)(param_1 + 0x46),
                        (char)param_1[0x4c],0xf,param_3,&local_38);
LAB_180243d74:
  if ((cVar2 != '\0') &&
     ((*param_3 <= DAT_1808ac34c && DAT_1808ac34c != *param_3 ||
      (*(char *)((longlong)param_3 + 0x2d) != '\0')))) {
    FUN_180243290(param_1,param_3 + 1,1);
    lVar6 = *(longlong *)(param_3 + 8);
    if ((lVar6 != 0) &&
       ((*(char *)((longlong)param_1 + 0x53) == '\0' && ((*param_1 - 0x2eU & 0xfffffffd) == 0)))) {
      if ((DAT_180cf9c6c != 0) && (DAT_180cf9c70 != 0)) {
        lVar7 = FUN_18000f3a0(lVar6 + (ulonglong)DAT_180cf9c6c);
        if ((lVar7 == 0) || (lVar7 = FUN_18000f3a0((ulonglong)DAT_180cf9c70 + lVar7), lVar7 == 0)) {
          local_res8 = lVar6;
          _Str1 = (char *)FUN_1803a0710(&local_res8);
          if ((_Str1 != (char *)0x0) && (iVar5 = strcmp(_Str1,"C_Breakable"), iVar5 == 0)) {
            return cVar2;
          }
        }
        else {
          cVar3 = FUN_180242350(lVar6,"func_breakable_surf");
          if (cVar3 != '\0') {
            return cVar2;
          }
          cVar3 = FUN_180242350(lVar6,"func_ladder");
          if (cVar3 != '\0') {
            return cVar2;
          }
          cVar3 = FUN_180242350(lVar6,"func_breakable");
          if (cVar3 != '\0') {
            return cVar2;
          }
        }
      }
      if ((float)param_1[0xd] <= param_3[6]) {
        *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_3 + 1);
        param_1[3] = (int)param_3[3];
        FUN_1802445b0(param_1);
      }
    }
  }
  return cVar2;
}



/* ===== 180243ec0 FUN_180243ec0 ===== */

ulonglong FUN_180243ec0(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *_Str1;
  undefined4 extraout_var;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  lVar2 = FUN_18000f3a0((ulonglong)DAT_180961968 + param_1);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar2);
    iVar5 = 0;
    if (uVar3 != 0) {
      uVar6 = (ulonglong)DAT_180961974;
      uVar4 = (ulonglong)DAT_180961970;
      do {
        if (0x1f < iVar5) break;
        lVar2 = FUN_18000f3a0(uVar3 + uVar4);
        if (lVar2 != 0) {
          _Str1 = (char *)FUN_18000f3a0(lVar2 + uVar6);
          if (_Str1 + -0x10000 < (char *)0x7ffffffeffff) {
            iVar1 = strcmp(_Str1,param_2);
            if (iVar1 == 0) {
              return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
            }
          }
        }
        lVar2 = FUN_18000f3a0(uVar3 + 0x60);
        uVar3 = 0;
        if (lVar2 == 0) break;
        uVar3 = FUN_18000f3a0(lVar2 + 0x18);
        iVar5 = iVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



/* ===== 180243fa0 FUN_180243fa0 ===== */

void FUN_180243fa0(longlong param_1)

{
  FUN_1800132b0(param_1 + 0x18);
  FUN_18025b950(param_1 + 8);
  return;
}



/* ===== 180243fc0 FUN_180243fc0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180243fc0(int *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *_Str1;
  float *pfVar6;
  ulonglong uVar7;
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
  longlong local_res8;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_78;
  
  fVar13 = DAT_1808ac34c;
  if ((*(char *)((longlong)param_1 + 0x51) == '\0') &&
     ((float)param_1[5] * (float)param_1[5] + (float)param_1[4] * (float)param_1[4] +
      (float)param_1[6] * (float)param_1[6] != 0.0)) {
    local_a8 = _DAT_1808ad2c0;
    uStack_a0 = _UNK_1808ad2c8;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0x3f800000;
    cVar3 = FUN_1802af020(param_1 + 1,param_1 + 1,DAT_1808ac658,*(undefined8 *)(param_1 + 0x1e),
                          0x40000,3,6,&local_a8,0);
    lVar2 = local_88;
    if (((cVar3 != '\0') &&
        ((((float)local_a8 < fVar13 || (local_7c._1_1_ != '\0')) && (local_88 != 0)))) &&
       ((local_88 != *(longlong *)(param_1 + 0x1e) && (local_88 != 0)))) {
      local_res8 = local_88;
      _Str1 = (char *)FUN_1803a0710(&local_res8);
      if ((_Str1 != (char *)0x0) && (iVar5 = strcmp(_Str1,"C_CSPlayerPawn"), iVar5 == 0)) {
        local_res8 = lVar2;
        if ((DAT_180ca09f0 != 0) &&
           (iVar5 = FUN_180011200(lVar2 + (ulonglong)DAT_180ca09f0), iVar5 - 1U < 1000)) {
          if ((*(longlong *)(param_1 + 0x1e) != 0) &&
             (((DAT_1811160e8 == 0 &&
               (DAT_1811160e8 = FUN_180264b70("mp_teammates_are_enemies"), DAT_1811160e8 == 0)) ||
              (cVar3 = FUN_180264d70(DAT_1811160e8), cVar3 == '\0')))) {
            uVar1 = DAT_180ca09f4;
            uVar7 = (ulonglong)DAT_180ca09f4;
            if (DAT_180ca09f4 == 0) {
              cVar3 = '\0';
            }
            else {
              cVar3 = FUN_180011220(lVar2 + uVar7);
            }
            if ((*(longlong *)(param_1 + 0x1e) == 0) || (uVar1 == 0)) {
              cVar4 = '\0';
            }
            else {
              cVar4 = FUN_180011220(*(longlong *)(param_1 + 0x1e) + uVar7);
            }
            if (cVar3 == cVar4) {
              return;
            }
          }
          fVar14 = (float)*(undefined8 *)(param_1 + 5);
          fVar15 = (float)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x20);
          fVar12 = (float)param_1[4];
          fVar9 = fVar14 * fVar14 + fVar12 * fVar12 + fVar15 * fVar15;
          if (fVar9 < 0.0) {
            fVar9 = (float)FUN_18051af10();
          }
          else {
            fVar9 = SQRT(fVar9);
          }
          fVar8 = fVar13 / fVar9;
          pfVar6 = (float *)FUN_18024f8c0(local_b8,&local_res8);
          fVar18 = (float)param_1[1] - *pfVar6;
          fVar16 = (float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)(pfVar6 + 1);
          fVar17 = (float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20) -
                   (float)((ulonglong)*(undefined8 *)(pfVar6 + 1) >> 0x20);
          fVar10 = fVar16 * fVar16 + fVar18 * fVar18 + fVar17 * fVar17;
          if (fVar10 < 0.0) {
            fVar10 = (float)FUN_18051af10();
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          fVar10 = fVar13 / (fVar10 + DAT_1808abf80);
          fVar11 = fVar12 * fVar8 * fVar18 * fVar10 + fVar14 * fVar8 * fVar16 * fVar10 +
                   fVar15 * fVar8 * fVar17 * fVar10;
          fVar11 = fVar11 + fVar11;
          fVar18 = fVar12 * fVar8 - fVar18 * fVar10 * fVar11;
          fVar14 = fVar14 * fVar8 - fVar11 * fVar16 * fVar10;
          fVar15 = fVar15 * fVar8 - fVar11 * fVar17 * fVar10;
          fVar12 = fVar18 * fVar18 + fVar14 * fVar14 + fVar15 * fVar15;
          if (fVar12 < 0.0) {
            fVar12 = (float)FUN_18051af10();
          }
          else {
            fVar12 = SQRT(fVar12);
          }
          fVar9 = fVar9 * DAT_1808ac154;
          fVar13 = fVar13 / (fVar12 + DAT_1808abf80);
          param_1[4] = (int)(fVar9 * fVar13 * fVar18);
          *(ulonglong *)(param_1 + 5) = CONCAT44(fVar9 * fVar13 * fVar15,fVar9 * fVar13 * fVar14);
          *(undefined2 *)((longlong)param_1 + 0x51) = 0x101;
          FUN_180243290(param_1,param_1 + 1,1);
          if ((*param_1 - 0x2eU & 0xfffffffd) == 0) {
            param_1[0xf] = (int)((float)param_1[0xf] + DAT_1808ac710);
          }
        }
      }
    }
  }
  return;
}



/* ===== 180244440 FUN_180244440 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180244440(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)param_1[4] * (float)param_1[4] + (float)param_1[5] * (float)param_1[5] +
          (float)param_1[6] * (float)param_1[6];
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18051af10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  switch(*param_1) {
  case 0x2b:
  case 0x2c:
    fVar2 = (float)param_1[0xe];
    if (fVar2 < (float)param_1[0xf] || fVar2 == (float)param_1[0xf]) {
      param_1[0x10] = fVar2 + DAT_1808ac118;
      return;
    }
    break;
  case 0x2d:
    if ((DAT_1808ac0c0 < fVar2) || ((float)param_1[0xe] < _DAT_1808ac3c0))
    goto switchD_1802444a5_default;
    break;
  case 0x2e:
  case 0x30:
    fVar1 = (float)param_1[0xe];
    if (fVar1 < (float)param_1[0xf] || fVar1 == (float)param_1[0xf]) {
      if (DAT_1808ac750 < fVar2) {
        param_1[0x11] = 0xbf800000;
      }
      else {
        if ((float)param_1[0x11] < 0.0) {
          param_1[0x11] = fVar1;
          param_1[0x10] = fVar1;
          return;
        }
        if (DAT_1808ac1f4 < fVar1 - (float)param_1[0x11]) {
          FUN_1802445b0(param_1);
          param_1[0x10] = param_1[0xe];
          return;
        }
      }
      param_1[0x10] = fVar1;
      return;
    }
    break;
  case 0x2f:
    if (DAT_1808ac118 < fVar2) {
      param_1[0x10] = (float)param_1[0xe] + DAT_1808ac118;
      return;
    }
    break;
  default:
switchD_1802444a5_default:
    param_1[0x10] = param_1[0xe];
    return;
  }
  FUN_1802445b0(param_1);
  return;
}



/* ===== 1802445b0 FUN_1802445b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802445b0(int *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 local_88;
  undefined4 local_80;
  int local_78;
  int local_74;
  float local_70;
  int local_68;
  int local_64;
  float local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_28;
  
  *(undefined1 *)((longlong)param_1 + 0x53) = 1;
  if ((*param_1 - 0x2eU & 0xfffffffd) == 0) {
    param_1[0x26] = param_1[0xe];
    *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(param_1 + 1);
    *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)(param_1 + 1);
    param_1[0x1d] = param_1[3];
    param_1[0x19] = param_1[3];
    *(undefined1 *)((longlong)param_1 + 0x69) = 1;
    fVar7 = 0.0;
    if ((DAT_180961a50 == 0) || (lVar3 = FUN_18000f3a0(DAT_180961a50), lVar3 == 0)) {
      auVar5 = ZEXT816(0);
    }
    else {
      auVar5._0_8_ = FUN_18000f3d0(lVar3 + 0x30);
      auVar5._8_8_ = extraout_XMM0_Qb;
    }
    lVar3 = DAT_180961a50;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = auVar5._0_4_ * DAT_1808acab0;
    fVar4 = (float)FUN_18053f0d0(auVar6._0_8_);
    if ((int)fVar4 != DAT_1809f270c) {
      DAT_1809f270c = (int)fVar4;
      FUN_18023f6b0();
      lVar3 = DAT_180961a50;
    }
    if ((lVar3 != 0) && (lVar3 = FUN_18000f3a0(lVar3), lVar3 != 0)) {
      fVar7 = (float)FUN_18000f3d0(lVar3 + 0x30);
    }
    if (fVar7 <= (float)param_1[0x25] + (float)param_1[0xe]) {
      fVar7 = (float)param_1[0x25] + (float)param_1[0xe];
    }
    FUN_18023f800(param_1 + 1,param_1 + 4,fVar7,param_1 + 0x27);
    if (*(char *)((longlong)param_1 + 0x9d) != '\0') {
      *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(param_1 + 0x28);
      param_1[0x1d] = param_1[0x2a];
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_1 + 0x31);
      param_1[3] = param_1[0x33];
    }
    *(char *)(param_1 + 0x15) = (char)param_1[0x27];
    if ((char)param_1[0x27] == '\0') {
      iVar2 = (*(char *)((longlong)param_1 + 0x9d) != '\0') + 1;
    }
    else {
      iVar2 = 0;
    }
    param_1[0x16] = iVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x15) = 1;
    if (*param_1 == 0x2c) {
      local_78 = param_1[1];
      local_74 = param_1[2];
      local_58 = _DAT_1808ad2c0;
      uStack_50 = _UNK_1808ad2c8;
      local_38 = 0;
      local_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_2c = 0;
      local_88 = 0;
      local_60 = (float)param_1[3] + DAT_1808ac838;
      local_70 = (float)param_1[3] - DAT_1808ac9fc;
      local_80 = 0;
      local_28 = 0x3f800000;
      local_68 = local_78;
      local_64 = local_74;
      cVar1 = FUN_1802aed00(&local_68,&local_78,&local_88,&local_88,*(undefined8 *)(param_1 + 0x1e),
                            0x1c3001,4,0xf,&local_58,0);
      fVar7 = DAT_1808ac21c;
      if ((cVar1 != '\0') && (local_2c._1_1_ != '\0')) {
        *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(param_1 + 1);
        param_1[0x1d] = param_1[3];
        *(undefined1 *)((longlong)param_1 + 0x69) = 1;
        param_1[1] = (int)((float)local_48 * fVar7 + local_58._4_4_);
        param_1[2] = (int)(local_48._4_4_ * fVar7 + (float)uStack_50);
        param_1[3] = (int)((float)uStack_40 * fVar7 + uStack_50._4_4_);
        return;
      }
    }
  }
  return;
}



/* ===== 180244880 FUN_180244880 ===== */

float * FUN_180244880(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_78 [112];
  
  if ((((param_2 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar4 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180ca09f8), lVar4 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar10 = 0.0;
    if (param_2 == 0) goto LAB_180244a15;
  }
  else {
    pfVar5 = (float *)FUN_1800111b0(local_78,lVar4 + (ulonglong)DAT_180ca0950);
    fVar7 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  if (DAT_180cf9cd8 != 0) {
    lVar6 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180cf9cd8);
    lVar4 = 0;
    if (lVar6 - 0x10000U < 0x7ffffffeffff) {
      lVar4 = lVar6;
    }
    if (((lVar4 != 0) && (DAT_180cf9cfc != 0)) && (DAT_180cf9d00 != 0)) {
      pfVar5 = (float *)FUN_1800111b0(local_78,lVar4 + (ulonglong)DAT_180cf9cfc);
      fVar1 = *pfVar5;
      fVar2 = pfVar5[1];
      fVar3 = pfVar5[2];
      pfVar5 = (float *)FUN_1800111b0(local_78,(ulonglong)DAT_180cf9d00 + lVar4);
      fVar9 = ((fVar8 + pfVar5[1]) - (fVar2 + fVar8)) * DAT_1808ac1f4;
      fVar11 = ((fVar10 + pfVar5[2]) - (fVar3 + fVar10)) * DAT_1808ac1f4;
      *param_1 = ((fVar7 + *pfVar5) - (fVar1 + fVar7)) * DAT_1808ac1f4 + fVar1 + fVar7;
      param_1[1] = fVar9 + fVar2 + fVar8;
      param_1[2] = fVar11 + fVar3 + fVar10;
      return param_1;
    }
  }
LAB_180244a15:
  *param_1 = fVar7;
  param_1[1] = fVar8;
  param_1[2] = fVar10;
  return param_1;
}



/* ===== 180244a50 FUN_180244a50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180244a50(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 *puVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  char *_Str1;
  float *pfVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined1 auStack_858 [8];
  undefined1 auStack_850 [72];
  float local_808;
  undefined4 local_804;
  undefined8 local_800;
  float local_7f8;
  undefined8 local_7f0;
  float local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  float local_7d0;
  float local_7c8;
  float local_7c4;
  float local_7c0;
  undefined8 local_7b8;
  undefined8 *local_7b0;
  undefined8 *local_7a8;
  undefined1 local_7a0;
  undefined7 uStack_79f;
  undefined **local_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined4 local_768;
  undefined2 local_764;
  undefined4 local_760;
  undefined1 local_758 [16];
  undefined1 local_748 [16];
  undefined1 local_738 [8];
  float afStack_730 [384];
  char acStack_130 [240];
  
  lVar20 = *(longlong *)(param_1 + 0xd0);
  if (((lVar20 != 0) && (*(int *)(param_1 + 0xd8) != -1)) &&
     (plVar16 = (longlong *)FUN_1803a0940(&local_7b8), *plVar16 == lVar20)) {
    return 0;
  }
  *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  fVar33 = DAT_1808acab0;
  local_800 = *(undefined8 *)(param_1 + 4);
  local_7f8 = *(float *)(param_1 + 0xc);
  fVar32 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x38)) {
    fVar32 = *(float *)(param_1 + 0x38);
  }
  if ((((*(longlong *)(param_1 + 0x100) == 0) || (DAT_180cf9c48 == 0)) ||
      ((DAT_180cf9c50 == 0 || ((DAT_180cf9c4c == 0 || (DAT_180cf9c44 == 0)))))) ||
     (cVar8 = FUN_180243ec0(), cVar8 == '\0')) {
    fVar32 = fVar32 - (float)*(int *)(param_1 + 0x108) * DAT_1808ac00c;
    fVar31 = 0.0;
    if (0.0 <= fVar32) {
      fVar31 = fVar32;
    }
  }
  else {
    fVar31 = (float)FUN_18000f3d0((ulonglong)DAT_180cf9c48 + *(longlong *)(param_1 + 0x100));
    cVar8 = FUN_180011220((ulonglong)DAT_180cf9c50 + *(longlong *)(param_1 + 0x100));
    if ((cVar8 == '\0') && (cVar8 = FUN_180011220(), cVar8 == '\x01')) {
      if (fVar31 != 0.0) goto LAB_180244bd7;
      iVar12 = 0;
    }
    else if (fVar31 == 0.0) {
      cVar8 = FUN_180011220();
      iVar12 = 7 - (uint)(cVar8 != '\0');
    }
    else {
LAB_180244bd7:
      iVar10 = FUN_18026b500();
      if (((uint)fVar31 & 0x7f800000) == 0x7f800000) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)(fVar31 * fVar33 + DAT_1808ac1f4);
      }
      iVar11 = 0;
      if (0 < iVar10) {
        iVar11 = iVar10;
      }
      iVar12 = iVar12 - iVar11;
      if (iVar12 < 0) {
        iVar12 = 0;
      }
    }
    fVar32 = (float)iVar12 * DAT_1808ac00c + fVar32;
    fVar31 = 0.0;
    if (0.0 <= fVar32) {
      fVar31 = fVar32;
    }
  }
  puVar29 = auStack_858;
  puVar27 = auStack_858;
  puVar28 = auStack_858;
  local_7e8 = fVar31;
  if ((*(longlong *)(param_1 + 0x110) == 0) || (cVar8 = FUN_180243ec0(), cVar8 == '\0')) {
    local_7b8 = 0;
  }
  else {
    local_7b8 = *(undefined8 *)(param_1 + 0x110);
  }
  uVar15 = _DAT_1808ade90;
  fVar32 = DAT_1808acd08;
  fVar6 = DAT_1808acc74;
  fVar37 = DAT_1808acc00;
  fVar36 = DAT_1808aca54;
  fVar5 = DAT_1808ac950;
  local_808 = DAT_1808acd08;
  lVar20 = 0;
  local_7f0 = 0;
  uVar13 = 0;
  local_804 = 0;
  local_7d8 = local_800;
  local_7d0 = local_7f8;
  puVar7 = auStack_858;
  lVar17 = lVar20;
  if (DAT_180cf9c90 == 0) {
LAB_1802451a4:
    puVar29 = puVar7;
    if (DAT_180961fa8 == 0) {
LAB_1802452aa:
      iVar12 = -1;
    }
    else {
      *(undefined8 *)(puVar29 + -8) = 0x1802451b9;
      lVar19 = FUN_18000f3a0();
      lVar20 = 0;
      if (lVar19 - 0x10000U < 0x7ffffffeffff) {
        lVar20 = lVar19;
      }
      if (((lVar20 == 0) || (DAT_180cfa190 == 0)) ||
         (0x7ffffffefffe < (lVar20 + (ulonglong)DAT_180cfa190) - 0x10000)) goto LAB_1802452aa;
      *(undefined8 *)(puVar29 + -8) = 0x180245203;
      iVar12 = FUN_180011200();
    }
    plVar16 = DAT_180cf9d28;
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    plVar26 = (longlong *)*DAT_180cf9d28;
    if (plVar26 == DAT_180cf9d28) {
      return 0;
    }
    fVar33 = *(float *)(puVar29 + 0x70);
    do {
      if ((((int)plVar26[3] == 0x2e) && (*(char *)((longlong)plVar26 + 0x1c) != '\0')) &&
         ((*(char *)((longlong)plVar26 + 0xb2) != '\0' &&
          ((*(char *)((longlong)plVar26 + 0xdd) == '\0' && (plVar26[0x3a] != 0)))))) {
        *(longlong *)(puVar29 + 0x78) = plVar26[2];
        *(undefined8 *)(puVar29 + -8) = 0x18024532f;
        lVar20 = FUN_1803a0710(puVar29 + 0x78);
        if (lVar20 != 0) {
          lVar20 = plVar26[0x3a];
          fVar31 = (*(float *)(lVar20 + 0x1eb4) - *(float *)(puVar29 + 0x60)) *
                   (*(float *)(lVar20 + 0x1eb4) - *(float *)(puVar29 + 0x60)) +
                   (*(float *)(lVar20 + 0x1eb0) - *(float *)(puVar29 + 0x5c)) *
                   (*(float *)(lVar20 + 0x1eb0) - *(float *)(puVar29 + 0x5c)) +
                   (*(float *)(lVar20 + 0x1eac) - *(float *)(puVar29 + 0x58)) *
                   (*(float *)(lVar20 + 0x1eac) - *(float *)(puVar29 + 0x58));
          if (fVar31 < 0.0) {
            *(undefined8 *)(puVar29 + -8) = 0x180245398;
            FUN_18051af10();
            fVar31 = extraout_XMM0_Da;
          }
          else {
            fVar31 = SQRT(fVar31);
          }
          if (((fVar31 <= fVar37) && (fVar31 <= fVar32)) && (*(char *)(lVar20 + 0x1ea8) != '\0')) {
            fVar37 = (float)(iVar12 - *(int *)(lVar20 + 0x1ef8)) * DAT_1808ac00c + fVar33;
            fVar32 = *(float *)(lVar20 + 0x1efc);
            if (fVar32 <= fVar37) {
              *(undefined8 *)(puVar29 + -8) = 0x1802453f3;
              FUN_18023c3d0(lVar20);
              if (fVar37 < extraout_XMM0_Da_00 + fVar32) {
                *(undefined8 *)(puVar29 + -8) = 0x18024540d;
                fVar32 = (float)FUN_18053f0d0();
                iVar10 = 0;
                if (0 < (int)fVar32) {
                  iVar10 = (int)fVar32;
                }
                lVar17 = *(longlong *)(lVar20 + 0x1e90);
                uVar22 = (*(longlong *)(lVar20 + 0x1e98) - lVar17 >> 2) * -0x500a29ecf163bb65;
                lVar20 = lVar17;
                if (0 < (longlong)uVar22) {
                  do {
                    uVar23 = uVar22 >> 1;
                    if (*(int *)(uVar23 * 0x64c + lVar20) <= iVar10) {
                      lVar20 = uVar23 * 0x64c + lVar20 + 0x64c;
                      uVar23 = uVar22 + (-1 - uVar23);
                    }
                    uVar22 = uVar23;
                  } while (0 < (longlong)uVar23);
                  if (lVar20 != lVar17) {
                    *(undefined8 *)(puVar29 + -8) = 0x180245492;
                    FUN_180540530(local_738,lVar20 + -0x64c,0x64c);
                    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
                    uVar22 = 0;
                    do {
                      if (acStack_130[uVar22] == '\x01') {
                        local_7c8 = afStack_730[uVar22 * 3] + 0.0;
                        local_7c4 = afStack_730[uVar22 * 3 + 1] + 0.0;
                        local_7c0 = afStack_730[uVar22 * 3 + 2] + fVar36;
                        fVar32 = (*(float *)(puVar29 + 0x5c) - local_7c4) *
                                 (*(float *)(puVar29 + 0x5c) - local_7c4) +
                                 (*(float *)(puVar29 + 0x58) - local_7c8) *
                                 (*(float *)(puVar29 + 0x58) - local_7c8);
                        if ((fVar32 < fVar6) &&
                           ((fVar37 = (float)((uint)(*(float *)(puVar29 + 0x60) -
                                                    (local_7c0 - fVar5)) & uVar15) - fVar5,
                            fVar37 <= 0.0 || (fVar37 * fVar37 + fVar32 < fVar6)))) {
                          puVar29[0x20] = 1;
                          *(undefined8 *)(puVar29 + -8) = 0x18024554e;
                          cVar8 = FUN_1802407f0(puVar29 + 0x58,&local_7c8,local_7b8);
                          if (cVar8 != '\0') {
                            local_7d8 = *(undefined8 *)(afStack_730 + uVar22 * 3);
                            local_7d0 = afStack_730[uVar22 * 3 + 2];
                            *(float *)(puVar29 + 0x50) = fVar31;
                            lVar17 = plVar26[2];
                            *(longlong *)(puVar29 + 0x68) = lVar17;
                            uVar13 = 2;
                            *(undefined4 *)(puVar29 + 0x54) = 2;
                            fVar32 = fVar31;
                            goto LAB_180245570;
                          }
                        }
                      }
                      uVar24 = (int)uVar22 + 1;
                      uVar22 = (ulonglong)uVar24;
                    } while ((int)uVar24 < 0x40);
                    uVar13 = *(undefined4 *)(puVar29 + 0x54);
                  }
                }
              }
            }
            fVar32 = *(float *)(puVar29 + 0x50);
          }
          lVar17 = *(longlong *)(puVar29 + 0x68);
        }
      }
LAB_180245570:
      plVar26 = (longlong *)*plVar26;
      fVar37 = DAT_1808acc00;
    } while (plVar26 != plVar16);
    if (lVar17 == 0) {
      return 0;
    }
  }
  else {
    puVar7 = auStack_858;
    if (DAT_180cf9c94 == 0) goto LAB_1802451a4;
    puVar7 = auStack_858;
    if (DAT_180cf9ca4 == 0) goto LAB_1802451a4;
    puVar7 = auStack_858;
    if (DAT_180cf9c9c == 0) goto LAB_1802451a4;
    puVar7 = auStack_858;
    if (DAT_180cf9cac == 0) goto LAB_1802451a4;
    if ((DAT_180961a50 == 0) || (lVar17 = FUN_18000f3a0(), lVar17 == 0)) {
      auVar34 = ZEXT816(0);
    }
    else {
      auVar34._0_8_ = FUN_18000f3d0(lVar17 + 0x30);
      auVar34._8_8_ = extraout_XMM0_Qb;
    }
    auVar35._4_12_ = auVar34._4_12_;
    auVar35._0_4_ = auVar34._0_4_ * fVar33;
    fVar33 = (float)FUN_18053f0d0(auVar35._0_8_);
    if ((int)fVar33 != DAT_1809f30d8) {
      if (DAT_180cf9d78 != DAT_180cf9d80) {
        DAT_180cf9d80 = DAT_180cf9d78;
      }
      DAT_1809f30d8 = (int)fVar33;
      FUN_1803a09f0(&local_7b0);
      puVar21 = local_7b0;
      if (local_7b0 != local_7a8) {
        do {
          _Str1 = (char *)FUN_1803a0710(puVar21);
          if ((_Str1 != (char *)0x0) && (iVar12 = strcmp(_Str1,"C_Inferno"), iVar12 == 0)) {
            local_7e0 = *puVar21;
            FUN_1800242d0(&DAT_180cf9d78);
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != local_7a8);
      }
      puVar29 = auStack_858;
      if (local_7b0 != (undefined8 *)0x0) {
        puVar21 = local_7b0;
        if ((ulonglong)((CONCAT71(uStack_79f,local_7a0) - (longlong)local_7b0 >> 3) * 8) < 0x1000) {
LAB_180244e25:
          puVar28 = puVar27;
        }
        else {
          puVar21 = (undefined8 *)local_7b0[-1];
          puVar25 = (undefined8 *)((longlong)local_7b0 + (-8 - (longlong)puVar21));
          if (&DAT_0000001f < puVar25) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar27 = auStack_850;
            puVar21 = puVar25;
            goto LAB_180244e25;
          }
        }
        *(undefined8 *)(puVar28 + -8) = 0x180244e2d;
        thunk_FUN_1803d64e0(puVar21);
        puVar29 = puVar28;
      }
      lVar20 = *(longlong *)(puVar29 + 0x68);
    }
    if (DAT_180961a50 == 0) {
LAB_180244e57:
      fVar33 = 0.0;
    }
    else {
      *(undefined8 *)(puVar29 + -8) = 0x180244e43;
      lVar17 = FUN_18000f3a0();
      if (lVar17 == 0) goto LAB_180244e57;
      *(undefined8 *)(puVar29 + -8) = 0x180244e51;
      fVar33 = (float)FUN_18000f3d0(lVar17 + 0x30);
    }
    plVar16 = DAT_180cf9d80;
    fVar4 = DAT_1808ac7ec;
    fVar3 = DAT_1808ac790;
    puVar7 = puVar29;
    lVar17 = lVar20;
    plVar26 = DAT_180cf9d78;
    if (DAT_180cf9d78 == DAT_180cf9d80) goto LAB_1802451a4;
    do {
      lVar17 = *plVar26;
      *(undefined8 *)(puVar29 + -8) = 0x180244ea0;
      pfVar18 = (float *)FUN_180244880(local_758);
      fVar36 = (pfVar18[2] - *(float *)(puVar29 + 0x60)) * (pfVar18[2] - *(float *)(puVar29 + 0x60))
               + (pfVar18[1] - *(float *)(puVar29 + 0x5c)) *
                 (pfVar18[1] - *(float *)(puVar29 + 0x5c)) +
               (*pfVar18 - *(float *)(puVar29 + 0x58)) * (*pfVar18 - *(float *)(puVar29 + 0x58));
      if (fVar36 < 0.0) {
        *(undefined8 *)(puVar29 + -8) = 0x180244eed;
        fVar36 = (float)FUN_18051af10();
      }
      else {
        fVar36 = SQRT(fVar36);
      }
      if (fVar36 <= fVar37) {
        bVar30 = false;
        uVar22 = 0;
        do {
          if (bVar30) goto LAB_180244f2e;
          *(undefined8 *)(puVar29 + -8) = 0x180244f17;
          cVar8 = FUN_180011220(uVar22 + lVar17 + (ulonglong)DAT_180cf9c94);
          bVar30 = cVar8 != '\0';
          uVar24 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar24;
        } while ((int)uVar24 < 0x40);
        if (cVar8 != '\0') {
LAB_180244f2e:
          *(undefined8 *)(puVar29 + -8) = 0x180244f45;
          iVar12 = FUN_180011200((ulonglong)DAT_180cf9c9c + lVar17);
          fVar32 = (float)iVar12 * DAT_1808ac00c;
          *(undefined8 *)(puVar29 + -8) = 0x180244f66;
          iVar12 = FUN_180011200((ulonglong)DAT_180cf9cac + lVar17);
          if (iVar12 == 1) {
            if (DAT_1809f2e38 == 0) {
              if (DAT_1809f2e40 == '\0') {
                *(undefined8 *)(puVar29 + -8) = 0x180244f8b;
                DAT_1809f2e38 = FUN_180264b70(PTR_s_inferno_flame_lifetime_incendiar_1809f2e30);
                DAT_1809f2e40 = DAT_1809f2e38 == 0;
                if (DAT_1809f2e38 != 0) goto LAB_180244faa;
              }
              fVar36 = fVar3;
            }
            else {
LAB_180244faa:
              *(undefined8 *)(puVar29 + -8) = 0x180244fb2;
              uVar13 = FUN_180264d70(DAT_1809f2e38);
              *(undefined4 *)(puVar29 + 0x78) = uVar13;
              fVar36 = *(float *)(puVar29 + 0x78);
              if (((uint)*(float *)(puVar29 + 0x78) & 0x7f800000) == 0x7f800000) {
                fVar36 = fVar3;
              }
            }
          }
          else {
            if (DAT_1809f2f28 == 0) {
              if (DAT_1809f2f30 == '\0') {
                *(undefined8 *)(puVar29 + -8) = 0x180244ff7;
                DAT_1809f2f28 = FUN_180264b70(PTR_s_inferno_flame_lifetime_1809f2f20);
                DAT_1809f2f30 = DAT_1809f2f28 == 0;
                if (DAT_1809f2f28 != 0) goto LAB_18024500d;
              }
            }
            else {
LAB_18024500d:
              *(undefined8 *)(puVar29 + -8) = 0x180245015;
              uVar13 = FUN_180264d70(DAT_1809f2f28);
              *(undefined4 *)(puVar29 + 0x78) = uVar13;
              fVar36 = *(float *)(puVar29 + 0x78);
              if (((uint)*(float *)(puVar29 + 0x78) & 0x7f800000) != 0x7f800000) goto LAB_180245038;
            }
            fVar36 = fVar4;
          }
LAB_180245038:
          if ((fVar31 + fVar33) - fVar32 < fVar36) {
            *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
            *(undefined8 *)(puVar29 + -8) = 0x180245056;
            iVar12 = FUN_180011200((ulonglong)DAT_180cf9c90 + lVar17);
            if (0x40 < iVar12) {
              iVar12 = 0x40;
            }
            uVar22 = 0;
            if (0 < iVar12) {
              do {
                *(undefined8 *)(puVar29 + -8) = 0x180245083;
                cVar8 = FUN_180011220(DAT_180cf9c94 + uVar22 + lVar17);
                if (cVar8 == '\x01') {
                  *(undefined8 *)(puVar29 + -8) = 0x1802450a5;
                  pfVar18 = (float *)FUN_1800111b0(local_748);
                  uVar2 = *(undefined8 *)pfVar18;
                  fVar31 = pfVar18[2];
                  local_7c8 = *pfVar18 + 0.0;
                  local_7c4 = pfVar18[1] + 0.0;
                  local_7c0 = fVar31 + DAT_1808aca54;
                  fVar32 = (*(float *)(puVar29 + 0x5c) - local_7c4) *
                           (*(float *)(puVar29 + 0x5c) - local_7c4) +
                           (*(float *)(puVar29 + 0x58) - local_7c8) *
                           (*(float *)(puVar29 + 0x58) - local_7c8);
                  if ((fVar32 < fVar6) &&
                     ((fVar36 = (float)((uint)(*(float *)(puVar29 + 0x60) - (local_7c0 - fVar5)) &
                                       uVar15) - fVar5, fVar36 <= 0.0 ||
                      (fVar36 * fVar36 + fVar32 < fVar6)))) {
                    puVar29[0x20] = 1;
                    *(undefined8 *)(puVar29 + -8) = 0x18024514b;
                    cVar8 = FUN_1802407f0(puVar29 + 0x58,&local_7c8,local_7b8);
                    if (cVar8 != '\0') {
                      *(undefined8 *)(puVar29 + -8) = 0x180245217;
                      pfVar18 = (float *)FUN_180244880(&local_7b0);
                      fVar32 = (pfVar18[2] - *(float *)(puVar29 + 0x60)) *
                               (pfVar18[2] - *(float *)(puVar29 + 0x60)) +
                               (pfVar18[1] - *(float *)(puVar29 + 0x5c)) *
                               (pfVar18[1] - *(float *)(puVar29 + 0x5c)) +
                               (*pfVar18 - *(float *)(puVar29 + 0x58)) *
                               (*pfVar18 - *(float *)(puVar29 + 0x58));
                      if (fVar32 < 0.0) {
                        *(undefined8 *)(puVar29 + -8) = 0x180245264;
                        fVar32 = (float)FUN_18051af10();
                      }
                      else {
                        fVar32 = SQRT(fVar32);
                      }
                      if (fVar32 <= *(float *)(puVar29 + 0x50)) {
                        local_7d8 = uVar2;
                        *(float *)(puVar29 + 0x50) = fVar32;
                        *(longlong *)(puVar29 + 0x68) = lVar17;
                        uVar13 = 1;
                        *(undefined4 *)(puVar29 + 0x54) = 1;
                        fVar37 = DAT_1808acc00;
                        local_7d0 = fVar31;
                        goto LAB_180245175;
                      }
                      break;
                    }
                  }
                }
                uVar24 = (int)uVar22 + 1;
                uVar22 = (ulonglong)uVar24;
              } while ((int)uVar24 < iVar12);
              lVar20 = *(longlong *)(puVar29 + 0x68);
              fVar37 = DAT_1808acc00;
            }
          }
          fVar32 = *(float *)(puVar29 + 0x50);
        }
      }
      lVar17 = lVar20;
      uVar13 = *(undefined4 *)(puVar29 + 0x54);
LAB_180245175:
      plVar26 = plVar26 + 1;
      fVar31 = *(float *)(puVar29 + 0x70);
      lVar20 = lVar17;
    } while (plVar26 != plVar16);
    if (lVar17 == 0) {
      fVar36 = DAT_1808aca54;
      goto LAB_1802451a4;
    }
    fVar33 = *(float *)(puVar29 + 0x70);
  }
  local_790 = _DAT_1808ad2c0;
  uStack_788 = _UNK_1808ad2c8;
  local_780 = 0;
  uStack_778 = 0;
  local_770 = 0;
  local_768 = 0;
  local_764 = 0;
  local_760 = 0x3f800000;
  plVar16 = (longlong *)(param_1 + 0x110);
  if (*plVar16 == 0) {
    plVar16 = (longlong *)(param_1 + 0x78);
  }
  lVar20 = *plVar16;
  local_7b0 = (undefined8 *)0x0;
  local_7a8 = (undefined8 *)0x8000100000;
  local_7a0 = 2;
  local_798 = &PTR_FUN_1809f2e20;
  DAT_180cf9d60 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(puVar29 + -8) = 0x18024568a;
  cVar8 = FUN_180243960();
  if (cVar8 == '\0') {
    *(undefined8 ***)(puVar29 + 0x48) = &local_7b0;
    *(undefined8 **)(puVar29 + 0x40) = &local_790;
    puVar29[0x38] = 0xf;
    puVar29[0x30] = 0x10;
    *(undefined8 *)(puVar29 + 0x28) = 0x2000c3001;
    *(longlong *)(puVar29 + 0x20) = lVar20;
    *(undefined8 *)(puVar29 + -8) = 0x180245781;
    cVar8 = FUN_1802aed00(puVar29 + 0x58,&local_7d8,&DAT_18063fcf8,&DAT_18063fd18);
    goto LAB_180245781;
  }
  if (DAT_1809f3168 == 0) {
    if (DAT_1809f3170 == '\0') {
      *(undefined8 *)(puVar29 + -8) = 0x1802456b2;
      DAT_1809f3168 = FUN_180264b70(PTR_s_sv_grenade_collision_sphere_radi_1809f3160);
      DAT_1809f3170 = DAT_1809f3168 == 0;
      if (DAT_1809f3168 != 0) goto LAB_1802456c8;
    }
LAB_1802456ef:
    uVar15 = DAT_1808ac540;
  }
  else {
LAB_1802456c8:
    *(undefined8 *)(puVar29 + -8) = 0x1802456d0;
    uVar14 = FUN_180264d70(DAT_1809f3168);
    *(undefined4 *)(puVar29 + 0x78) = uVar14;
    uVar15 = *(uint *)(puVar29 + 0x78);
    if ((*(uint *)(puVar29 + 0x78) & 0x7f800000) == 0x7f800000) goto LAB_1802456ef;
  }
  *(undefined8 ***)(puVar29 + 0x40) = &local_7b0;
  *(undefined8 **)(puVar29 + 0x38) = &local_790;
  puVar29[0x30] = 0xf;
  puVar29[0x28] = 0x10;
  *(undefined8 *)(puVar29 + 0x20) = 0x2000c3001;
  *(undefined8 *)(puVar29 + -8) = 0x180245733;
  cVar8 = FUN_1802af020(puVar29 + 0x58,&local_7d8,uVar15,lVar20);
LAB_180245781:
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(puVar29 + 0x58);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(puVar29 + 0x60);
  *(undefined1 *)(param_1 + 0x69) = 1;
  if (((cVar8 != '\0') && ((local_790._4_4_ & 0x7f800000) != 0x7f800000)) &&
     ((((uint)uStack_788 & 0x7f800000) != 0x7f800000 &&
      ((uStack_788._4_4_ & 0x7f800000) != 0x7f800000)))) {
    *(uint *)(param_1 + 4) = local_790._4_4_;
    *(uint *)(param_1 + 8) = (uint)uStack_788;
    *(uint *)(param_1 + 0xc) = uStack_788._4_4_;
  }
  *(longlong *)(param_1 + 0xd0) = lVar17;
  *(undefined8 *)(puVar29 + -8) = 0x180245816;
  lVar20 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar17);
  if (lVar20 == 0) {
    uVar24 = 0xffffffff;
  }
  else {
    *(undefined8 *)(puVar29 + -8) = 0x18024582e;
    uVar15 = FUN_180011200(lVar20 + 0x10);
    *(undefined8 *)(puVar29 + -8) = 0x180245839;
    sVar9 = FUN_180011200(lVar20 + 0x30);
    uVar24 = uVar15 - (ushort)(sVar9 << 0xf);
    uVar24 = (uVar24 ^ uVar15) & 0x7fff ^ uVar24;
  }
  *(uint *)(param_1 + 0xd8) = uVar24;
  *(undefined4 *)(param_1 + 0xdc) = uVar13;
  *(undefined8 *)(param_1 + 0xe0) = local_7d8;
  *(float *)(param_1 + 0xe8) = local_7d0;
  *(float *)(param_1 + 0xec) = fVar33;
  *(undefined8 *)(puVar29 + -8) = 0x180245886;
  FUN_1802445b0(param_1);
  return 1;
}



/* ===== 180245890 FUN_180245890 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180245890(int *param_1,float *param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  char *pcVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  undefined2 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1b8 [32];
  double local_198;
  double local_190;
  float local_188;
  undefined8 local_180;
  undefined8 local_178;
  uint local_170;
  undefined4 local_168;
  undefined8 local_158;
  float local_150;
  float local_148;
  float local_144;
  float local_140 [2];
  undefined1 local_138 [8];
  char local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  local_148 = param_4;
  if ((((*(longlong *)(param_2 + 8) != 0) && (DAT_180cf9c6c != 0)) &&
      (uVar8 = (ulonglong)DAT_180cf9c70, DAT_180cf9c70 != 0)) &&
     (((DAT_180ca1150 < 0x101 &&
       (lVar7 = FUN_18000f3a0(*(longlong *)(param_2 + 8) + (ulonglong)DAT_180cf9c6c), lVar7 != 0))
      && (lVar7 = FUN_18000f3a0(lVar7 + uVar8), lVar7 - 0x10000U < 0x7ffffffeffff)))) {
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    lVar14 = 0;
    do {
      cVar5 = FUN_180011220(lVar14 + lVar7);
      *(char *)((longlong)&local_128 + lVar14) = cVar5;
      if (cVar5 == '\0') break;
      uVar8 = lVar14 + 2;
      lVar14 = lVar14 + 1;
    } while (uVar8 < 0x40);
    lVar7 = FUN_1804ef120(&local_128,"glass");
    if (((lVar7 != 0) || (lVar7 = FUN_1804ef120(&local_128,"breakable"), lVar7 != 0)) &&
       (FUN_18025c4d0(&DAT_180ca1140,local_138,param_2 + 8), local_130 != '\0')) {
      local_158 = *(longlong *)(param_2 + 8);
      puVar9 = (undefined2 *)FUN_1803a0710(&local_158);
      lVar7 = FUN_18000f3a0((ulonglong)DAT_180961968 + *(longlong *)(param_2 + 8));
      if (lVar7 == 0) {
LAB_1802459fd:
        local_168 = 0;
      }
      else {
        uVar8 = FUN_180011220(lVar7 + 0x11);
        local_168 = 1;
        if ((uVar8 & 0x40) == 0) goto LAB_1802459fd;
      }
      puVar15 = &DAT_1806dfbb4;
      if (puVar9 != (undefined2 *)0x0) {
        puVar15 = puVar9;
      }
      local_170 = (uint)*(byte *)(param_1 + 0x4c);
      local_178 = *(undefined8 *)(param_1 + 0x48);
      local_180 = *(undefined8 *)(param_1 + 0x46);
      local_188 = param_2[10];
      local_190 = (double)param_2[3];
      local_198 = (double)param_2[2];
      FUN_1802b2560("[grenade trajectory] hit %s (%s) at %.1f %.1f %.1f | contents 0x%x | filter mask 0x%llx as 0x%llx group %d | client only %d"
                    ,&local_128,puVar15,(double)param_2[1]);
    }
  }
  if ((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    local_158 = *(longlong *)(param_2 + 8);
    pcVar10 = (char *)FUN_1803a0710(&local_158);
    if ((pcVar10 != (char *)0x0) && (iVar6 = strcmp(pcVar10,"C_Chicken"), iVar6 == 0)) {
      FUN_180263d20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 8));
      return;
    }
    cVar5 = FUN_180263f80(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 8));
    if (cVar5 != '\0') {
      fVar17 = (float)param_1[6] * DAT_1808ac1b0;
      *(ulonglong *)(param_1 + 4) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20) * _UNK_1808ad9a4,
                    (float)*(undefined8 *)(param_1 + 4) * _DAT_1808ad9a0);
      param_1[6] = (int)fVar17;
      FUN_180243290(param_1,param_1 + 1,1);
      return;
    }
  }
  fVar22 = DAT_1808ac34c;
  fVar17 = param_2[6];
  fVar23 = param_2[4];
  fVar24 = param_2[5];
  if (((*(longlong *)(param_2 + 8) != 0) &&
      (local_158 = *(longlong *)(param_2 + 8), pcVar10 = (char *)FUN_1803a0710(&local_158),
      pcVar10 != (char *)0x0)) && (iVar6 = strcmp(pcVar10,"C_CSPlayerPawn"), iVar6 == 0)) {
    local_158 = *(longlong *)(param_2 + 8);
    pfVar11 = (float *)FUN_18024f8c0(local_138,&local_158);
    fVar19 = param_2[1] - *pfVar11;
    fVar20 = param_2[2] - pfVar11[1];
    fVar21 = param_2[3] - pfVar11[2];
    fVar18 = fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21;
    if (0.0 < fVar18) {
      if (fVar18 < 0.0) {
        fVar18 = (float)FUN_18051af10();
      }
      else {
        fVar18 = SQRT(fVar18);
      }
      fVar17 = fVar22 / (fVar18 + DAT_1808abf80);
      fVar24 = fVar20 * fVar17;
      fVar23 = fVar17 * fVar19;
      fVar17 = fVar21 * fVar17;
    }
  }
  param_1[7] = (int)fVar23;
  param_1[8] = (int)fVar24;
  param_1[9] = (int)fVar17;
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  fVar18 = (float)param_1[0xc];
  lVar7 = *(longlong *)(param_2 + 8);
  local_140[0] = 0.9;
  local_144 = 0.0;
  pfVar11 = &local_144;
  if (0.0 <= fVar18) {
    pfVar11 = (float *)(param_1 + 0xc);
  }
  pfVar12 = local_140;
  if (fVar18 <= DAT_1808ac2cc) {
    pfVar12 = pfVar11;
  }
  fVar18 = *pfVar12;
  fVar19 = ((float)param_1[5] * fVar24 + (float)param_1[4] * fVar23 + (float)param_1[6] * fVar17) *
           DAT_1808acdc0;
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  fVar19 = fVar19 + DAT_1808ac040;
  fVar21 = ((float)param_1[4] + fVar23 * fVar19) * fVar18;
  fVar20 = ((float)param_1[5] + fVar24 * fVar19) * fVar18;
  fVar18 = ((float)param_1[6] + fVar19 * fVar17) * fVar18;
  fVar19 = fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18;
  if (lVar7 == 0) {
    cVar5 = '\0';
  }
  else {
    if (DAT_180cf9cd8 != 0) {
      lVar13 = FUN_18000f3a0(lVar7 + (ulonglong)DAT_180cf9cd8);
      lVar14 = 0;
      if (lVar13 - 0x10000U < 0x7ffffffeffff) {
        lVar14 = lVar13;
      }
      if (((lVar14 != 0) && (DAT_180cf9ce0 != 0)) &&
         ((uVar8 = FUN_180011440(), (uVar8 & 1) != 0 &&
          ((cVar5 = FUN_180243ec0(lVar7,"C_BaseCSGrenadeProjectile"), cVar5 == '\0' &&
           (cVar5 = FUN_180243ec0(lVar7,"C_BasePlayerWeapon"), cVar5 == '\0')))))) {
        cVar5 = FUN_180243ec0(lVar7,"C_World");
        goto LAB_180245de7;
      }
    }
    cVar5 = '\x01';
  }
LAB_180245de7:
  uVar4 = _UNK_1808ad2c8;
  uVar3 = _DAT_1808ad2c0;
  if ((DAT_1808ac254 < fVar17) || ((DAT_1808ac0c0 < fVar17 && (fVar19 < DAT_1808acbdc)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  fVar1 = 0.0;
  if (0.0 <= *param_2) {
    fVar1 = *param_2;
  }
  if ((cVar5 == '\0') || (!bVar2)) {
    fVar17 = (fVar22 - fVar1) * local_148;
    param_1[5] = (int)fVar20;
    param_1[6] = (int)fVar18;
    local_108 = 0;
    uStack_100 = uStack_100 & 0xffff000000000000;
    local_128 = uVar3;
    uStack_120 = uVar4;
    local_f8 = CONCAT44(local_f8._4_4_,0x3f800000);
    param_1[4] = (int)fVar21;
    local_158 = CONCAT44(fVar20 * fVar17,fVar17 * fVar21);
    local_118 = 0;
    uStack_110 = 0;
    local_150 = fVar18 * fVar17;
    cVar5 = FUN_180243bc0(param_1,&local_158,&local_128);
    if ((cVar5 == '\0') ||
       ((*(char *)((longlong)param_1 + 0x53) != '\0' || (uStack_100._5_1_ != '\0'))))
    goto LAB_1802460cd;
    param_1[1] = local_128._4_4_;
    param_1[3] = uStack_120._4_4_;
    param_1[2] = (int)uStack_120;
    if (DAT_1808ac1f4 <= (float)local_128) goto LAB_1802460cd;
    fVar22 = fVar22 - (float)local_128;
    fVar24 = fVar20 * fVar17 * fVar22;
    fVar23 = fVar22 * fVar17 * fVar21;
    fVar22 = fVar18 * fVar17 * fVar22;
    fVar17 = (fVar24 * local_118._4_4_ + fVar23 * (float)local_118 + fVar22 * (float)uStack_110) *
             DAT_1808acdc0;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fVar17 = fVar17 + DAT_1808ac040;
    local_150 = fVar17 * (float)uStack_110 + fVar22;
    local_158 = CONCAT44(fVar17 * local_118._4_4_ + fVar24,fVar17 * (float)local_118 + fVar23);
  }
  else {
    if (_DAT_1808accb8 < fVar19) {
      if (fVar19 < 0.0) {
        fVar16 = (float)FUN_18051af10();
      }
      else {
        fVar16 = SQRT(fVar19);
      }
      fVar16 = fVar22 / (fVar16 + DAT_1808abf80);
      fVar17 = fVar20 * fVar16 * fVar24 + fVar21 * fVar16 * fVar23 + fVar18 * fVar16 * fVar17;
      if (DAT_1808ac1f4 < fVar17) {
        fVar17 = DAT_1808ac428 - fVar17;
        fVar21 = fVar21 * fVar17;
        fVar20 = fVar20 * fVar17;
        fVar18 = fVar18 * fVar17;
      }
    }
    fVar17 = DAT_1808acbdc;
    param_1[4] = (int)fVar21;
    param_1[5] = (int)fVar20;
    param_1[6] = (int)fVar18;
    if (fVar19 < fVar17) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined1 *)(param_1 + 0x14) = 1;
      goto LAB_1802460cd;
    }
    fVar17 = (fVar22 - fVar1) * local_148;
    local_150 = fVar18 * fVar17;
    local_158 = CONCAT44(fVar20 * fVar17,fVar21 * fVar17);
  }
  local_128 = _DAT_1808ad2c0;
  uStack_120 = _UNK_1808ad2c8;
  local_108 = 0;
  uStack_100 = uStack_100 & 0xffff000000000000;
  local_118 = 0;
  uStack_110 = 0;
  local_f8 = CONCAT44(local_f8._4_4_,0x3f800000);
  cVar5 = FUN_180243bc0(param_1,&local_158,&local_128);
  if (((cVar5 != '\0') && (*(char *)((longlong)param_1 + 0x53) == '\0')) &&
     (uStack_100._5_1_ == '\0')) {
    param_1[1] = local_128._4_4_;
    param_1[3] = uStack_120._4_4_;
    param_1[2] = (int)uStack_120;
  }
LAB_1802460cd:
  if ((*(char *)((longlong)param_1 + 0x53) == '\0') &&
     ((*param_1 != 0x2d || (cVar5 = FUN_180244a50(param_1), cVar5 == '\0')))) {
    if (param_1[0x12] < 0x15) {
      param_1[0x12] = param_1[0x12] + 1;
    }
    else {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined1 *)(param_1 + 0x14) = 1;
      if (*param_1 - 0x2dU < 4) {
        param_1[0xf] = 0;
      }
      fVar17 = 0.0;
      if (0.0 <= (float)param_1[0xe]) {
        fVar17 = (float)param_1[0xe];
      }
      param_1[0x10] = (int)fVar17;
    }
  }
  return;
}



/* ===== 180246190 FUN_180246190 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180246190(longlong param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  ulonglong uVar3;
  float *pfVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float local_res8 [2];
  float local_res18 [4];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  
  pfVar1 = (float *)(param_1 + 0x10);
  if (((((uint)*pfVar1 & 0x7f800000) == 0x7f800000) ||
      ((*(uint *)(param_1 + 0x14) & 0x7f800000) == 0x7f800000)) ||
     ((*(uint *)(param_1 + 0x18) & 0x7f800000) == 0x7f800000)) {
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  pfVar9 = (float *)(param_1 + 0x18);
  pfVar8 = (float *)(param_1 + 0x14);
  if (DAT_1809f3188 == 0) {
    if (DAT_1809f3190 == '\0') {
      DAT_1809f3188 = FUN_180264b70(PTR_s_sv_maxvelocity_1809f3180);
      DAT_1809f3190 = DAT_1809f3188 == 0;
      if (DAT_1809f3188 != 0) goto LAB_18024624b;
    }
LAB_180246270:
    local_98 = DAT_1808acc60;
  }
  else {
LAB_18024624b:
    local_98 = (float)FUN_180264d70(DAT_1809f3188);
    if (((uint)local_98 & 0x7f800000) == 0x7f800000) goto LAB_180246270;
  }
  fVar11 = DAT_1808ac34c;
  local_res8[0] = (float)((uint)local_98 ^ DAT_1808adec0);
  pfVar7 = local_res8;
  if (local_res8[0] <= *pfVar8) {
    pfVar7 = pfVar8;
  }
  local_94 = local_res8[0];
  local_res18[0] = local_res8[0];
  pfVar4 = &local_98;
  if (*pfVar8 <= local_98) {
    pfVar4 = pfVar7;
  }
  fVar10 = *pfVar4;
  pfVar7 = &local_94;
  if (local_res8[0] <= *pfVar9) {
    pfVar7 = pfVar9;
  }
  pfVar4 = &local_98;
  if (*pfVar9 <= local_98) {
    pfVar4 = pfVar7;
  }
  fVar2 = *pfVar4;
  pfVar7 = local_res18;
  if (local_res8[0] <= *pfVar1) {
    pfVar7 = pfVar1;
  }
  pfVar4 = &local_98;
  if (*pfVar1 <= local_98) {
    pfVar4 = pfVar7;
  }
  *pfVar1 = *pfVar4;
  *pfVar8 = fVar10;
  *pfVar9 = fVar2;
  if ((*(char *)(param_1 + 0x50) == '\0') || (0.0 < fVar2)) {
    fVar10 = param_2 * *(float *)(param_1 + 0x28);
    local_90 = *pfVar1;
    *pfVar9 = fVar2 - fVar10;
    local_8c = *pfVar8;
    local_88 = ((fVar2 + fVar2) - fVar10) * DAT_1808ac1f4 * param_2;
  }
  else {
    local_90 = (float)*(undefined8 *)pfVar1;
    fVar10 = fVar11 - param_2 * *(float *)(param_1 + 0x2c);
    local_88 = 0.0;
    local_8c = (float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(ulonglong *)pfVar1 = CONCAT44(local_8c * fVar10,local_90 * fVar10);
    *pfVar9 = 0.0;
  }
  local_8c = local_8c * param_2;
  local_90 = local_90 * param_2;
  if (local_8c * local_8c + local_90 * local_90 + local_88 * local_88 != 0.0) {
    local_80 = _DAT_1808ad2c0;
    uStack_78 = _UNK_1808ad2c8;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_50 = 0x3f800000;
    uVar5 = FUN_180243bc0(param_1,&local_90,&local_80);
    if ((char)uVar5 == '\0') {
      return uVar5;
    }
    if (*(char *)(param_1 + 0x53) != '\0') goto LAB_18024648d;
    if (local_54._1_1_ == '\0') {
      *(undefined4 *)(param_1 + 4) = local_80._4_4_;
      *(undefined4 *)(param_1 + 0xc) = uStack_78._4_4_;
      *(undefined4 *)(param_1 + 8) = (undefined4)uStack_78;
      if ((float)local_80 < fVar11) {
        FUN_180245890(param_1,&local_80);
      }
    }
    else {
      *pfVar1 = 0.0;
      *pfVar8 = 0.0;
      *pfVar9 = 0.0;
    }
  }
  if (*(char *)(param_1 + 0x53) == '\0') {
    uVar3 = *(ulonglong *)(param_1 + 0x138);
    uVar6 = FUN_1802439e0(param_1,param_1 + 4);
    *(ulonglong *)(param_1 + 0x138) = uVar6;
    if (((uVar3 & 0x18000) == 0) && (0x7fff < uVar6)) {
      *pfVar9 = *pfVar9 * DAT_1808ac1f4;
    }
  }
LAB_18024648d:
  if ((*(uint *)(param_1 + 0x138) & 0x18000) != 0) {
    fVar11 = *pfVar9 * DAT_1808ac30c;
    *(ulonglong *)pfVar1 =
         CONCAT44((float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20) * _UNK_1808adad4,
                  (float)*(undefined8 *)pfVar1 * _DAT_1808adad0);
    *pfVar9 = fVar11;
  }
  return CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 0x138) >> 8),1);
}



/* ===== 1802464e0 FUN_1802464e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1802464e0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [24];
  longlong local_2a8 [3];
  longlong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 local_270;
  longlong local_268;
  longlong lStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong *local_238;
  longlong *plStack_230;
  longlong *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  ulonglong local_c8;
  
  puVar17 = auStack_2c8;
  puVar15 = auStack_2c8;
  puVar16 = auStack_2c8;
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  local_268 = 0;
  lStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = (longlong *)0x0;
  plStack_230 = (longlong *)0x0;
  local_228 = (longlong *)0x0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0x10000;
  local_1ec = 0;
  local_1e4 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  local_19c = 0;
  uStack_194 = 0;
  local_18c = 0;
  local_184 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0x3f800000;
  local_150 = 0;
  local_14c = 0x100;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  local_270 = 0;
  if (*(longlong *)(param_2 + 0x80) == 0) {
    *(undefined8 **)(param_2 + 0x80) = &local_288;
  }
  *(undefined8 **)(param_2 + 0x88) = &local_1e0;
  uVar6 = _DAT_1808ade90;
  fVar5 = DAT_1808acc90;
  fVar4 = DAT_1808acc50;
  fVar22 = DAT_1808ac90c;
  fVar21 = DAT_1808ac1f4;
  fVar20 = DAT_1808ac00c;
  uVar3 = DAT_1808abff4;
  local_2a8[0] = param_1;
  local_290 = param_1;
  if (*(float *)(param_2 + 0x38) <= DAT_1808ac90c) {
    while ((ulonglong)((lStack_260 - local_268 >> 2) * -0x5555555555555555) < 0x1000) {
      FUN_180243290(param_2,param_2 + 4,0);
      FUN_180011250(&local_268,param_2 + 4);
      FUN_180066e60(&uStack_250,param_2 + 0x38);
      if (*(char *)(param_2 + 0x52) != '\0') {
        local_2a8[0] = (lStack_260 - local_268 >> 2) * -0x5555555555555555 + -1;
        FUN_1800242d0(&local_238,local_2a8);
        *(undefined1 *)(param_2 + 0x52) = 0;
      }
      if (*(float *)(param_2 + 0x40) <= *(float *)(param_2 + 0x38)) {
        FUN_180244440(param_2);
      }
      if (*(char *)(param_2 + 0x53) != '\0') break;
      if ((*(char *)(param_2 + 0x50) != '\0') && (0.0 < *(float *)(param_2 + 0x18))) {
        *(undefined1 *)(param_2 + 0x50) = 0;
      }
      FUN_180243fc0(param_2);
      cVar7 = FUN_180246190(param_2,uVar3);
      if (cVar7 == '\0') break;
      if (*(char *)(param_2 + 0x53) != '\0') {
LAB_18024692c:
        *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) + fVar20;
        break;
      }
      cVar7 = FUN_180246190(param_2,uVar3);
      if (cVar7 == '\0') break;
      if (*(char *)(param_2 + 0x53) != '\0') goto LAB_18024692c;
      if (*(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x14) +
          *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10) +
          *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18) == 0.0) {
        *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
        if (8 < *(int *)(param_2 + 0x4c)) {
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x18) = 0;
          FUN_180244440(param_2);
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x4c) = 0;
      }
      if (((((((*(uint *)(param_2 + 4) & 0x7f800000) == 0x7f800000) ||
             ((*(uint *)(param_2 + 8) & 0x7f800000) == 0x7f800000)) ||
            ((*(uint *)(param_2 + 0xc) & 0x7f800000) == 0x7f800000)) ||
           ((fVar5 < (float)(*(uint *)(param_2 + 4) & uVar6) ||
            (fVar5 < (float)(*(uint *)(param_2 + 8) & uVar6))))) ||
          ((fVar5 < (float)(*(uint *)(param_2 + 0xc) & uVar6) ||
           ((fVar4 < (float)(*(uint *)(param_2 + 0x10) & uVar6) ||
            (fVar4 < (float)(*(uint *)(param_2 + 0x14) & uVar6))))))) ||
         (fVar4 < (float)(*(uint *)(param_2 + 0x18) & uVar6))) {
        *(undefined1 *)(param_2 + 0x68) = 1;
        break;
      }
      if (*(char *)(param_2 + 0x53) == '\0') {
        uVar14 = *(ulonglong *)(param_2 + 0x138);
        uVar8 = FUN_1802439e0(param_2,param_2 + 4);
        *(ulonglong *)(param_2 + 0x138) = uVar8;
        if (((uVar14 & 0x18000) == 0) && (0x7fff < uVar8)) {
          *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) * fVar21;
        }
      }
      fVar19 = *(float *)(param_2 + 0x38) + fVar20;
      *(float *)(param_2 + 0x38) = fVar19;
      if ((*(char *)(param_2 + 0x53) != '\0') || (fVar22 < fVar19)) break;
    }
  }
  if (*(char *)(param_2 + 0x68) == '\0') {
    if (local_268 == lStack_260) {
LAB_180246990:
      FUN_180011250(&local_268,param_2 + 4);
      FUN_180066e60(&uStack_250,param_2 + 0x38);
      plVar13 = plStack_230;
      puVar17 = auStack_2c8;
      if (*(char *)(param_2 + 0x52) != '\0') {
        lVar18 = (lStack_260 - local_268 >> 2) * -0x5555555555555555 + -1;
        if (plStack_230 == local_228) {
          uVar8 = (longlong)plStack_230 - (longlong)local_238;
          lVar9 = (longlong)uVar8 >> 3;
          uVar14 = 0x1fffffffffffffff;
          if (lVar9 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_1800118d0();
          }
          uVar1 = lVar9 + 1;
          uVar11 = (longlong)local_228 - (longlong)local_238 >> 3;
          if (uVar11 <= 0x1fffffffffffffff - (uVar11 >> 1)) {
            uVar11 = (uVar11 >> 1) + uVar11;
            uVar14 = uVar1;
            if (uVar1 <= uVar11) {
              uVar14 = uVar11;
            }
            if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_18000d840();
            }
          }
          local_2a8[0] = uVar14 * 8;
          plVar10 = (longlong *)FUN_18000fb70(local_2a8[0]);
          uVar8 = uVar8 & 0xfffffffffffffff8;
          *(longlong *)(uVar8 + (longlong)plVar10) = lVar18;
          if (plVar13 == plStack_230) {
            lVar18 = (longlong)plStack_230 - (longlong)local_238;
            plVar12 = plVar10;
            plVar13 = local_238;
          }
          else {
            FUN_180540530(plVar10,local_238,(longlong)plVar13 - (longlong)local_238);
            lVar18 = (longlong)plStack_230 - (longlong)plVar13;
            plVar12 = (longlong *)(uVar8 + 8 + (longlong)plVar10);
          }
          FUN_180540530(plVar12,plVar13,lVar18);
          puVar17 = auStack_2c8;
          if (local_238 != (longlong *)0x0) {
            plVar13 = local_238;
            if ((ulonglong)(((longlong)local_228 - (longlong)local_238 >> 3) * 8) < 0x1000) {
LAB_180246ad8:
              puVar16 = puVar15;
            }
            else {
              plVar13 = (longlong *)local_238[-1];
              if ((undefined1 *)0x1f <
                  (undefined1 *)((longlong)local_238 + (-8 - (longlong)plVar13))) {
                plVar13 = (longlong *)&DAT_00000005;
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)(5);
                puVar15 = auStack_2c0;
                goto LAB_180246ad8;
              }
            }
            *(undefined8 *)(puVar16 + -8) = 0x180246ae3;
            thunk_FUN_1803d64e0(plVar13);
            puVar17 = puVar16;
          }
          plStack_230 = plVar10 + uVar1;
          local_228 = (longlong *)(*(longlong *)(puVar17 + 0x20) + (longlong)plVar10);
          param_1 = *(longlong *)(puVar17 + 0x38);
          local_238 = plVar10;
        }
        else {
          *plStack_230 = lVar18;
          plStack_230 = plStack_230 + 1;
          puVar17 = auStack_2c8;
        }
      }
    }
    else {
      fVar21 = *(float *)(lStack_260 + -0xc) - *(float *)(param_2 + 4);
      fVar22 = *(float *)(lStack_260 + -8) - *(float *)(param_2 + 8);
      fVar20 = *(float *)(lStack_260 + -4) - *(float *)(param_2 + 0xc);
      puVar17 = auStack_2c8;
      if (DAT_1808abfa0 < fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20) goto LAB_180246990;
    }
    if (*(char *)(param_2 + 0x68) == '\0') {
      local_1f0._0_3_ = CONCAT12(1,(undefined2)local_1f0);
      local_1f0 = (uint)(uint3)local_1f0;
      if (*(char *)(param_2 + 0x54) != '\0') goto LAB_180246b14;
    }
  }
  local_1f0 = local_1f0 & 0xffff;
LAB_180246b14:
  local_1f0 = CONCAT13(*(undefined1 *)(param_2 + 0x69),(uint3)local_1f0);
  local_1ec = *(undefined8 *)(param_2 + 0x6c);
  local_1e4 = *(undefined4 *)(param_2 + 0x74);
  local_1c8 = *(undefined4 *)(param_2 + 0x38);
  local_1c4 = CONCAT11(*(undefined1 *)(param_2 + 0x51),*(undefined1 *)(param_2 + 0x53));
  local_1c0 = *(undefined8 *)(param_2 + 0x58);
  local_1b8 = *(undefined8 *)(param_2 + 0x60);
  local_1b0 = *(undefined4 *)(param_2 + 0x3c);
  local_140 = *(undefined4 *)(param_2 + 0x98);
  local_13c = *(undefined2 *)(param_2 + 0x9c);
  local_13a = *(undefined2 *)(param_2 + 0x9e);
  local_138 = *(undefined8 *)(param_2 + 0xa0);
  uStack_130 = *(undefined8 *)(param_2 + 0xa8);
  local_128 = *(undefined8 *)(param_2 + 0xb0);
  uStack_120 = *(undefined8 *)(param_2 + 0xb8);
  local_118 = *(undefined8 *)(param_2 + 0xc0);
  uStack_110 = *(undefined8 *)(param_2 + 200);
  local_108 = 1;
  local_100 = *(undefined8 *)(param_2 + 0xd0);
  local_f8 = *(undefined4 *)(param_2 + 0xd8);
  local_f4 = *(undefined8 *)(param_2 + 0xdc);
  uStack_ec = *(undefined8 *)(param_2 + 0xe4);
  uStack_e4 = *(undefined8 *)(param_2 + 0xec);
  local_dc = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(puVar17 + -8) = 0x180246c4d;
  FUN_180246d00(param_1,puVar17 + 0x60);
  *(undefined8 *)(puVar17 + -8) = 0x180246c58;
  FUN_18025bee0(puVar17 + 0x40);
  *(undefined8 *)(puVar17 + -8) = 0x180246c62;
  FUN_18025deb0(&local_1e0);
  *(undefined8 *)(puVar17 + -8) = 0x180246c6b;
  FUN_180042970(&local_208);
  *(undefined8 *)(puVar17 + -8) = 0x180246c74;
  FUN_1800132b0(&local_238);
  *(undefined8 *)(puVar17 + -8) = 0x180246c7e;
  FUN_180068f30(puVar17 + 0x78);
  *(undefined8 *)(puVar17 + -8) = 0x180246c88;
  FUN_180011610(puVar17 + 0x60);
  *(undefined8 *)(puVar17 + -8) = 0x180246c9a;
  return param_1;
}



/* ===== 180246d00 FUN_180246d00 ===== */

undefined8 * FUN_180246d00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  uVar3 = param_2[2];
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[3];
  param_2[5] = 0;
  uVar3 = param_2[4];
  param_2[4] = 0;
  param_2[3] = 0;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  uVar1 = param_2[8];
  uVar2 = param_2[7];
  uVar3 = param_2[6];
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  param_1[8] = uVar1;
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xd];
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar2;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x7b) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x13];
  uVar3 = param_2[0x12];
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x11] = 0;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  *(undefined1 *)((longlong)param_1 + 0xa5) = *(undefined1 *)((longlong)param_2 + 0xa5);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_2 + 0xbc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xd4);
  *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)((longlong)param_2 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0xd4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)((longlong)param_2 + 0xdc);
  *(undefined8 *)((longlong)param_1 + 0xe4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)((longlong)param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x104);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 0x104) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x114);
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
  *(undefined8 *)((longlong)param_1 + 0x114) = uVar1;
  uVar1 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar1;
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x134);
  *(undefined8 *)((longlong)param_1 + 300) = *(undefined8 *)((longlong)param_2 + 300);
  *(undefined8 *)((longlong)param_1 + 0x134) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined8 *)((longlong)param_1 + 0x144) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x154);
  *(undefined8 *)((longlong)param_1 + 0x14c) = *(undefined8 *)((longlong)param_2 + 0x14c);
  *(undefined8 *)((longlong)param_1 + 0x154) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  param_1[0x2d] = param_2[0x2d];
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x174);
  param_1[0x2f] = param_2[0x2f];
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  return param_1;
}



/* ===== 180246ff0 FUN_180246ff0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180246ff0(undefined8 *param_1,longlong param_2)

{
  size_t sVar1;
  char *pcVar2;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 *local_1a0;
  char local_198 [384];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  local_1a0 = param_1;
  FUN_180540170(local_198,0,0x180);
  if (*(longlong *)(param_2 + 0x168) == 0) {
    local_1d0 = (double)CONCAT44(local_1d0._4_4_,*(undefined4 *)(param_2 + 400));
    local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_2 + 0x18c));
    snprintf(local_198,0x180,
             "no fire met: %d bounce checks, burning infernos within 512u %d, molotovs in flight with fires at that time %d"
             ,*(undefined4 *)(param_2 + 0x188));
  }
  else {
    pcVar2 = "predicted fire of molotov in flight";
    local_1b8 = (double)*(float *)(param_2 + 0x184);
    if (*(int *)(param_2 + 0x174) == 1) {
      pcVar2 = "live inferno";
    }
    local_1c0 = (double)*(float *)(param_2 + 0x180);
    local_1c8 = (double)*(float *)(param_2 + 0x17c);
    local_1d0 = (double)*(float *)(param_2 + 0x178);
    local_1d8 = *(longlong *)(param_2 + 0x168);
    snprintf(local_198,0x180,
             "meets %s %llx: fire at %.1f %.1f %.1f, %.3fs from now, trace to it from the bounce point -> detonates there (T+0xFC set)"
             ,pcVar2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_198);
  FUN_1800133a0(param_1,local_198,sVar1);
  return param_1;
}



/* ===== 180247140 FUN_180247140 ===== */

void FUN_180247140(longlong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  if (0x800 < (ulonglong)((param_1[1] - *param_1 >> 2) * -0x5555555555555555)) {
    param_1[1] = *param_1 + 0x6000;
  }
  if ((ulonglong)((param_1[1] - *param_1 >> 2) * -0x5555555555555555) <
      (ulonglong)(param_1[4] - param_1[3] >> 2)) {
    FUN_1800d50c0();
  }
  puVar1 = (ulonglong *)param_1[7];
  puVar4 = (ulonglong *)param_1[6];
  if (puVar4 != puVar1) {
    do {
      if ((ulonglong)((param_1[1] - *param_1) / 0xc) <= *puVar4) break;
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
    puVar3 = puVar4;
    if (puVar4 != puVar1) {
      while (puVar3 = puVar3 + 1, puVar3 != puVar1) {
        if (*puVar3 < (ulonglong)((param_1[1] - *param_1 >> 2) * -0x5555555555555555)) {
          *puVar4 = *puVar3;
          puVar4 = puVar4 + 1;
        }
      }
      if (puVar4 != puVar1) {
        lVar2 = param_1[7];
        FUN_180540530(puVar4,puVar1,lVar2 - (longlong)puVar1);
        param_1[7] = (longlong)puVar4 + (lVar2 - (longlong)puVar1);
      }
    }
  }
  return;
}



/* ===== 180247260 FUN_180247260 ===== */

void FUN_180247260(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
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
  double local_res20;
  
  if ((((DAT_1809f3198 != '\0') && (DAT_1809f3199 == '\0')) && (DAT_180cf9c30 < 400)) &&
     ((*param_3 != param_3[1] && (DAT_180cf9c80 != 0)))) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res20);
      DAT_181108a00 = local_res20;
      DAT_1811089f8 = FUN_1803a0c50(&local_res20);
      DAT_180cd1304 = '\x01';
    }
    lVar5 = DAT_1811089f8;
    if (DAT_1811089f8 != 0) {
      uVar3 = FUN_180011200((ulonglong)DAT_180cf9c80 + param_1);
      plVar4 = (longlong *)FUN_1803a0940(&local_res20,uVar3);
      if (*plVar4 == lVar5) {
        if ((DAT_180961a50 == 0) || (lVar5 = FUN_18000f3a0(), lVar5 == 0)) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = (float)FUN_18000f3d0(lVar5 + 0x30);
        }
        fVar8 = (float)FUN_18053f0d0(fVar7 * DAT_1808acab0);
        fVar7 = DAT_1809f31c8;
        if ((DAT_1809f319c <= (int)fVar8) && (iVar6 = (int)fVar8 - DAT_1809f319c, iVar6 < 0x41)) {
          DAT_180cf9c30 = DAT_180cf9c30 + 1;
          DAT_1809f3199 = '\x01';
          lVar5 = param_3[1];
          fVar13 = *(float *)(param_2 + 0x14) - DAT_1809f31c0;
          fVar12 = *(float *)(param_2 + 8) - DAT_1809f31b4;
          fVar14 = *(float *)(param_2 + 0x10) - DAT_1809f31bc;
          fVar15 = *(float *)(param_2 + 0x18) - DAT_1809f31c4;
          fVar16 = *(float *)(param_2 + 4) - DAT_1809f31b0;
          fVar17 = *(float *)(param_2 + 0xc) - DAT_1809f31b8;
          fVar8 = *(float *)(lVar5 + -4);
          fVar9 = fVar8 - DAT_1809f31d0;
          fVar1 = *(float *)(lVar5 + -8);
          fVar11 = fVar1 - DAT_1809f31cc;
          fVar2 = *(float *)(lVar5 + -0xc);
          fVar10 = fVar2 - DAT_1809f31c8;
          fVar9 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
          if (fVar9 < 0.0) {
            fVar9 = (float)FUN_18051af10(fVar9);
          }
          else {
            fVar9 = SQRT(fVar9);
          }
          local_res20 = (double)fVar9;
          fVar9 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
          if (fVar9 < 0.0) {
            fVar9 = (float)FUN_18051af10(fVar9);
          }
          else {
            fVar9 = SQRT(fVar9);
          }
          fVar10 = fVar12 * fVar12 + fVar16 * fVar16 + fVar17 * fVar17;
          if (fVar10 < 0.0) {
            fVar10 = (float)FUN_18051af10(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          FUN_1802b2560("[grenade trajectory] projectile | own grenade %llx, %d ticks after the handover | server launch %.1f %.1f %.1f vel %.1f %.1f %.1f | end %.1f %.1f %.1f | frozen held path (record %08x, ang %.2f %.2f) launch %.1f %.1f %.1f vel %.1f %.1f %.1f | end %.1f %.1f %.1f | launch off %.1fu, velocity off %.1f, end off %.1fu"
                        ,param_1,iVar6,(double)*(float *)(param_2 + 4),
                        (double)*(float *)(param_2 + 8),(double)*(float *)(param_2 + 0xc),
                        (double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14),
                        (double)*(float *)(param_2 + 0x18),(double)fVar2,(double)fVar1,(double)fVar8
                        ,DAT_1809f31a0,(double)DAT_1809f31a4,(double)DAT_1809f31a8,
                        (double)DAT_1809f31b0,(double)DAT_1809f31b4,(double)DAT_1809f31b8,
                        (double)DAT_1809f31bc,(double)DAT_1809f31c0,(double)DAT_1809f31c4,
                        (double)fVar7,(double)DAT_1809f31cc,(double)DAT_1809f31d0,(double)fVar10,
                        (double)fVar9,local_res20);
        }
      }
    }
  }
  return;
}



/* ===== 1802477c0 FUN_1802477c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802477c0(void)

{
  int iVar1;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  iVar1 = FUN_1804e4d70(&DAT_1809f30e0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f312c == 0x7fffffff) {
    DAT_1809f312c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_140 = 0x10000;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_148 = 0;
  local_13c = 0;
  local_134 = 0;
  local_130 = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_98 = 0;
  local_50 = 0;
  local_44 = 0;
  local_2c = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0;
  uStack_f4 = 0;
  local_dc = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0x3f800000;
  local_a0 = 0;
  local_9c = 0x100;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_48 = 0xffffffff;
  local_3c = 0;
  local_34 = 0;
  FUN_180247990(&DAT_1809f3380,&local_1b8);
  FUN_18025deb0(&local_130);
  FUN_180042970(&local_158);
  FUN_1800132b0(&local_188);
  FUN_180068f30(&uStack_1a0);
  FUN_180011610(&local_1b8);
  DAT_180cf9c38 = 0;
  FUN_1804e4e90(&DAT_1809f30e0);
  return;
}



/* ===== 180247990 FUN_180247990 ===== */

longlong * FUN_180247990(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 == param_2) {
    FUN_1800ccf00(param_1 + 3,param_2 + 3);
LAB_180247acf:
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    *(int *)(param_1 + 0xb) = (int)param_2[0xb];
    FUN_18025be20(param_1 + 0xc,param_2 + 0xc);
    puVar6 = auStack_28;
    puVar7 = auStack_28;
    *(char *)(param_1 + 0xf) = (char)param_2[0xf];
    *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
    *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
    *(undefined1 *)((longlong)param_1 + 0x7b) = *(undefined1 *)((longlong)param_2 + 0x7b);
    *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
    if (param_1 == param_2) goto LAB_180247be7;
    lVar3 = param_1[0x11];
    if (lVar3 != 0) {
      lVar4 = lVar3;
      if ((ulonglong)((param_1[0x13] - lVar3 >> 2) * 4) < 0x1000) goto LAB_180247b88;
      lVar4 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar4) - 8U) goto LAB_180247b81;
      goto LAB_180247b8b;
    }
  }
  else {
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_180247a17:
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      FUN_1800ccf00(param_1 + 3,param_2 + 3);
      lVar3 = param_1[6];
      if (lVar3 != 0) {
        uVar5 = (param_1[8] - lVar3 >> 3) * 8;
        if (0xfff < uVar5) {
          if (0x1f < (lVar3 - *(longlong *)(lVar3 + -8)) - 8U) goto LAB_180247b81;
          uVar5 = uVar5 + 0x27;
          lVar3 = *(longlong *)(lVar3 + -8);
        }
        thunk_FUN_1803d64e0(lVar3,uVar5);
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
      }
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      param_1[8] = param_2[8];
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      goto LAB_180247acf;
    }
    uVar5 = (param_1[2] - lVar3 >> 2) * 4;
    if (uVar5 < 0x1000) {
LAB_180247a04:
      thunk_FUN_1803d64e0(lVar3,uVar5);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_180247a17;
    }
    if ((lVar3 - *(longlong *)(lVar3 + -8)) - 8U < 0x20) {
      uVar5 = uVar5 + 0x27;
      lVar3 = *(longlong *)(lVar3 + -8);
      goto LAB_180247a04;
    }
LAB_180247b81:
    lVar4 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_20;
LAB_180247b88:
    puVar7 = puVar6;
LAB_180247b8b:
    *(undefined8 *)(puVar7 + -8) = 0x180247b93;
    thunk_FUN_1803d64e0(lVar4);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
LAB_180247be7:
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  *(undefined1 *)((longlong)param_1 + 0xa5) = *(undefined1 *)((longlong)param_2 + 0xa5);
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(int *)(param_1 + 0x17) = (int)param_2[0x17];
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_2 + 0xbc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xd4);
  *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)((longlong)param_2 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0xd4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)((longlong)param_2 + 0xdc);
  *(undefined8 *)((longlong)param_1 + 0xe4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)((longlong)param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x104);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 0x104) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x114);
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
  *(undefined8 *)((longlong)param_1 + 0x114) = uVar2;
  lVar3 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = lVar3;
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x134);
  *(undefined8 *)((longlong)param_1 + 300) = *(undefined8 *)((longlong)param_2 + 300);
  *(undefined8 *)((longlong)param_1 + 0x134) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined8 *)((longlong)param_1 + 0x144) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x154);
  *(undefined8 *)((longlong)param_1 + 0x14c) = *(undefined8 *)((longlong)param_2 + 0x14c);
  *(undefined8 *)((longlong)param_1 + 0x154) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(char *)(param_1 + 0x2c) = (char)param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  *(int *)(param_1 + 0x2e) = (int)param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x174);
  param_1[0x2f] = param_2[0x2f];
  *(int *)(param_1 + 0x30) = (int)param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(int *)(param_1 + 0x31) = (int)param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  *(int *)(param_1 + 0x32) = (int)param_2[0x32];
  return param_1;
}



/* ===== 180247d80 FUN_180247d80 ===== */

undefined4 FUN_180247d80(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  iVar1 = strcmp(param_1,"C_HEGrenadeProjectile");
  if (iVar1 == 0) {
    return 0x2c;
  }
  iVar1 = strcmp(param_1,"C_FlashbangProjectile");
  if (iVar1 == 0) {
    return 0x2b;
  }
  iVar1 = strcmp(param_1,"C_SmokeGrenadeProjectile");
  if (iVar1 == 0) {
    return 0x2d;
  }
  iVar1 = strcmp(param_1,"C_MolotovProjectile");
  if (iVar1 == 0) {
    return 0x2e;
  }
  iVar1 = strcmp(param_1,"C_DecoyProjectile");
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x2f;
  }
  return uVar2;
}



/* ===== 180247e40 FUN_180247e40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180247e40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  ULONGLONG UVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  char *_Str1;
  longlong *plVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  undefined1 local_288 [16];
  undefined4 local_278;
  undefined1 local_274;
  undefined4 local_270;
  undefined1 local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_2b8;
  UVar15 = GetTickCount64();
  for (puVar24 = DAT_180cf9e88; puVar24 != DAT_180cf9e90; puVar24 = puVar24 + 1) {
    uVar21 = *puVar24;
    uVar23 = ((((((((uVar21 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar21 >> 8 & 0xff) *
                   0x100000001b3 ^ uVar21 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar21 >> 0x18 & 0xff) *
                 0x100000001b3 ^ uVar21 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar21 >> 0x28 & 0xff) *
               0x100000001b3 ^ uVar21 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar21 >> 0x38) *
             0x100000001b3 & DAT_180cf9d50;
    puVar20 = *(undefined8 **)(DAT_180cf9d38 + 8 + uVar23 * 0x10);
    if (puVar20 == DAT_180cf9d28) {
LAB_180247f63:
      puVar20 = (undefined8 *)0x0;
    }
    else {
      uVar4 = puVar20[2];
      while (uVar21 != uVar4) {
        if (puVar20 == *(undefined8 **)(DAT_180cf9d38 + uVar23 * 0x10)) goto LAB_180247f63;
        puVar20 = (undefined8 *)puVar20[1];
        uVar4 = puVar20[2];
      }
    }
    puVar16 = DAT_180cf9d28;
    if (puVar20 != (undefined8 *)0x0) {
      puVar16 = puVar20;
    }
    if (puVar16 == DAT_180cf9d28) goto LAB_180247f9f;
  }
  if (99 < UVar15 - _DAT_180cf9c20) {
LAB_180247f9f:
    _DAT_180cf9c20 = UVar15;
    if ((DAT_1809619d0 != 0) &&
       (local_290 = FUN_18000f3a0(), puVar20 = DAT_180cf9d28, local_290 - 0x10000U < 0x7ffffffeffff)
       ) {
      fVar5 = DAT_1808ac34c;
      fVar6 = DAT_1808ac710;
      fVar7 = DAT_1808acc88;
      uVar8 = DAT_1808acda0;
      uVar9 = _DAT_1808ad2d0;
      uVar10 = _UNK_1808ad2d4;
      uVar11 = _UNK_1808ad2d8;
      uVar12 = _UNK_1808ad2dc;
      for (puVar16 = (undefined8 *)*DAT_180cf9d28; DAT_1808ac34c = fVar5, DAT_1808ac710 = fVar6,
          DAT_1808acc88 = fVar7, DAT_1808acda0 = uVar8, _DAT_1808ad2d0 = uVar9,
          _UNK_1808ad2d4 = uVar10, _UNK_1808ad2d8 = uVar11, _UNK_1808ad2dc = uVar12,
          puVar16 != puVar20; puVar16 = (undefined8 *)*puVar16) {
        *(undefined1 *)((longlong)puVar16 + 0x1c) = 0;
        fVar5 = DAT_1808ac34c;
        fVar6 = DAT_1808ac710;
        fVar7 = DAT_1808acc88;
        uVar8 = DAT_1808acda0;
        uVar9 = _DAT_1808ad2d0;
        uVar10 = _UNK_1808ad2d4;
        uVar11 = _UNK_1808ad2d8;
        uVar12 = _UNK_1808ad2dc;
      }
      iVar25 = 0;
      do {
        lVar17 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                               (ulonglong)(uint)(iVar25 * DAT_180961944) + local_290);
        if (lVar17 - 0x10000U < 0x7ffffffeffff) {
          iVar26 = 0;
          do {
            if ((0x40 < iVar25 * 0x200 + iVar26) &&
               (local_298 = FUN_18000f3a0((ulonglong)(uint)(iVar26 * DAT_180961948) + lVar17),
               local_298 - 0x10000U < 0x7ffffffeffff)) {
              if (((local_298 == 0) ||
                  (((lVar18 = FUN_18000f3a0((ulonglong)DAT_180961968 + local_298), lVar18 == 0 ||
                    (lVar18 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar18), lVar18 == 0)) ||
                   (lVar18 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar18), lVar18 == 0)))) ||
                 (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar18),
                 (char *)0x7ffffffefffe < _Str1 + -0x10000)) {
                _Str1 = (char *)0x0;
              }
              else if ((_Str1 != (char *)0x0) &&
                      (iVar14 = strcmp(_Str1,"C_HEGrenade"), lVar18 = local_298, iVar14 == 0)) {
                if ((DAT_180ccf899 == '\0') && (DAT_1811089f0 != 0)) {
                  DAT_180ccf899 = '\x01';
                  DAT_180cf9d08 = FUN_18038eaf0("CCSWeaponBaseVData","m_nDamage");
                  DAT_180cf9d10 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRange");
                  DAT_180cf9c34 = FUN_18038eaf0("CCSWeaponBaseVData","m_flArmorRatio");
                }
                if (((DAT_180cf9d08 != 0) && (DAT_180cf9d10 != 0)) &&
                   ((DAT_1809619a0 != 0 &&
                    (lVar18 = FUN_18000f3a0((ulonglong)DAT_1809619a0 +
                                            (ulonglong)DAT_1809619c0 + lVar18),
                    lVar18 - 0x10000U < 0x7ffffffeffff)))) {
                  iVar14 = FUN_180011200((ulonglong)DAT_180cf9d08 + lVar18);
                  fVar27 = (float)FUN_18000f3d0((ulonglong)DAT_180cf9d10 + lVar18);
                  if (iVar14 - 1U < 999) {
                    DAT_1809f30dc = (float)iVar14;
                  }
                  if (((((uint)fVar27 & 0x7f800000) != 0x7f800000) && (fVar5 < fVar27)) &&
                     (fVar27 < fVar7)) {
                    DAT_1809f2788 = fVar27 * fVar27;
                  }
                  if (((DAT_180cf9c34 != 0) &&
                      (fVar27 = (float)FUN_18000f3d0(lVar18 + (ulonglong)DAT_180cf9c34),
                      ((uint)fVar27 & 0x7f800000) != 0x7f800000)) &&
                     ((0.0 < fVar27 && (fVar27 <= fVar6)))) {
                    DAT_1809f31f0 = fVar27;
                  }
                }
              }
              iVar14 = FUN_180247d80(_Str1);
              if (iVar14 != 0) {
                plVar19 = (longlong *)FUN_18025c9e0(extraout_XMM0_Da,local_288,&local_298);
                lVar18 = *plVar19;
                if (*(int *)(lVar18 + 0x18) != iVar14) {
                  local_278 = 0;
                  local_274 = 0;
                  local_26c = 0;
                  local_258 = 0;
                  uStack_250 = 0;
                  local_238 = 0;
                  uStack_230 = 0;
                  local_1f8 = 0;
                  uStack_1f0 = 0;
                  local_1c8 = 0;
                  uStack_1c0 = 0;
                  local_19c = 0;
                  uStack_194 = 0;
                  local_218 = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  *(undefined4 *)(lVar18 + 0x2c) = uVar10;
                  local_248 = 0;
                  uStack_240 = 0;
                  local_228 = 0;
                  uStack_220 = 0;
                  local_18c = 0;
                  uStack_184 = 0;
                  local_210 = 0;
                  local_118 = 0;
                  uStack_110 = 0;
                  local_208 = 0;
                  local_200 = 0;
                  local_1e8 = 0;
                  local_1dc = 0;
                  local_1d4 = 0;
                  local_1d0 = 0;
                  local_1b8 = 0;
                  local_1b4 = 0;
                  local_1b0 = 0;
                  local_1a8 = 0;
                  local_1a0 = 0;
                  local_138 = 0;
                  local_f0 = 0;
                  local_e4 = 0;
                  local_cc = 0;
                  local_c0 = 0;
                  plStack_b8 = (longlong *)0x0;
                  *(undefined4 *)(lVar18 + 0x18) = 0;
                  *(undefined4 *)(lVar18 + 0x34) = uVar12;
                  *(undefined4 *)(lVar18 + 0x20) = uVar8;
                  *(undefined4 *)(lVar18 + 0x28) = uVar9;
                  *(undefined4 *)(lVar18 + 0x30) = uVar11;
                  local_1e0 = 0x10000;
                  local_17c = 0;
                  local_174 = 0;
                  local_170 = 0;
                  local_168 = 0;
                  local_160 = 0;
                  local_158 = 0;
                  local_150 = 0;
                  local_148 = 0x3f800000;
                  local_140 = 0;
                  local_13c = 0x100;
                  local_134 = 0;
                  local_130 = 0;
                  local_12c = 0;
                  local_f8 = 0;
                  local_e8 = 0xffffffff;
                  local_dc = 0;
                  local_d4 = 0;
                  local_b0 = 0xffffffff;
                  local_a8 = 0xffffffffffffffff;
                  *(undefined1 *)(lVar18 + 0x1c) = 0;
                  *(undefined1 *)(lVar18 + 0x24) = 0;
                  local_270 = uVar8;
                  local_268 = uVar9;
                  uStack_264 = uVar10;
                  uStack_260 = uVar11;
                  uStack_25c = uVar12;
                  FUN_180247990(lVar18 + 0x38,&local_258);
                  FUN_18025bd90(lVar18 + 0x1d0,&local_c0);
                  plVar19 = plStack_b8;
                  *(undefined4 *)(lVar18 + 0x1e0) = local_b0;
                  *(undefined8 *)(lVar18 + 0x1e8) = local_a8;
                  if (plStack_b8 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_b8 + 1;
                    lVar13 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar13 == 1) {
                      (**(code **)*plStack_b8)(plStack_b8);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar19 + 0xc);
                      iVar3 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar3 == 1) {
                        (**(code **)(*plVar19 + 8))(plVar19);
                      }
                    }
                  }
                  FUN_18025deb0(&local_1d0);
                  FUN_180042970(&local_1f8);
                  FUN_1800132b0(&local_228);
                  FUN_180068f30(&uStack_240);
                  FUN_180011610(&local_258);
                }
                *(int *)(lVar18 + 0x18) = iVar14;
                *(undefined1 *)(lVar18 + 0x1c) = 1;
              }
            }
            iVar26 = iVar26 + 1;
          } while (iVar26 < 0x200);
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 < 0x40);
      if ((undefined8 *)*DAT_180cf9d28 != DAT_180cf9d28) {
        puVar16 = (undefined8 *)*DAT_180cf9d28;
        puVar20 = DAT_180cf9d28;
        do {
          lVar17 = DAT_180cf9d38;
          if (*(char *)((longlong)puVar16 + 0x1c) == '\0') {
            uVar21 = DAT_180cf9d50 &
                     (((((((((ulonglong)*(byte *)(puVar16 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)puVar16 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)puVar16 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)puVar16 + 0x13)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)puVar16 + 0x14)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)puVar16 + 0x15)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)puVar16 + 0x16)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)puVar16 + 0x17)) * 0x100000001b3;
            puVar22 = *(undefined8 **)(DAT_180cf9d38 + uVar21 * 0x10);
            if (*(undefined8 **)(DAT_180cf9d38 + 8 + uVar21 * 0x10) == puVar16) {
              if (puVar22 == puVar16) {
                *(undefined8 **)(DAT_180cf9d38 + uVar21 * 0x10) = puVar20;
                *(undefined8 **)(lVar17 + 8 + uVar21 * 0x10) = puVar20;
              }
              else {
                *(undefined8 *)(DAT_180cf9d38 + 8 + uVar21 * 0x10) = puVar16[1];
              }
            }
            else if (puVar22 == puVar16) {
              *(undefined8 *)(DAT_180cf9d38 + uVar21 * 0x10) = *puVar16;
            }
            puVar22 = (undefined8 *)*puVar16;
            DAT_180cf9d30 = DAT_180cf9d30 + -1;
            *(undefined8 **)puVar16[1] = puVar22;
            puVar22[1] = puVar16[1];
            FUN_1802486e0(puVar16 + 3);
            thunk_FUN_1803d64e0(puVar16,0x1f0);
            puVar20 = DAT_180cf9d28;
          }
          else {
            puVar22 = (undefined8 *)*puVar16;
          }
          puVar16 = puVar22;
        } while (puVar22 != puVar20);
      }
    }
  }
  return;
}



/* ===== 1802486e0 FUN_1802486e0 ===== */

void FUN_1802486e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1c0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_18025deb0(param_1 + 0xa8);
  FUN_180042970(param_1 + 0x80);
  FUN_1800132b0(param_1 + 0x50);
  FUN_180068f30(param_1 + 0x38);
  FUN_180011610(param_1 + 0x20);
  return;
}



/* ===== 180248770 FUN_180248770 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180248770(longlong *param_1,float param_2,char param_3,char param_4,float param_5,
             undefined8 *param_6,undefined8 *param_7,float *param_8)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  uint uVar9;
  char cVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 uVar19;
  float *pfVar20;
  longlong *plVar21;
  int iVar23;
  float fVar22;
  undefined8 *puVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float extraout_XMM0_Da;
  float fVar32;
  float local_res10 [4];
  float local_res20 [2];
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 uStack_164;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined2 uStack_150;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined8 uStack_124;
  undefined2 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  
  pfVar8 = param_8;
  fVar32 = DAT_1808acda0;
  local_res20[0] = (float)CONCAT31(local_res20[0]._1_3_,param_4);
  local_res10[0] = param_2;
  lVar1 = *param_1;
  uStack_1b4 = 0;
  uStack_1ac = 0;
  local_194 = _DAT_1808ad9b0;
  uStack_18c = _UNK_1808ad9b8;
  local_1b8 = 0;
  lVar26 = 2;
  local_184 = 0;
  uStack_17c = 0;
  local_174 = 0xbf800000;
  local_138 = 0;
  uStack_130 = 0;
  local_170 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_168 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_164 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_160 = 0;
  uStack_1a4 = 0;
  uStack_19c = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  local_128 = 0;
  uStack_124 = 0;
  uStack_11c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_e8 = 0;
  local_e0 = 0xffffffff;
  local_dc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0x200003001;
  local_98 = 0x8000100000;
  local_90 = 0;
  local_88 = 0x10;
  local_80 = 0;
  pfVar25 = param_8;
  puVar17 = (undefined8 *)&local_1b8;
  do {
    puVar24 = puVar17;
    pfVar20 = pfVar25;
    uVar19 = puVar24[1];
    uVar5 = puVar24[2];
    uVar6 = puVar24[3];
    *(undefined8 *)pfVar20 = *puVar24;
    *(undefined8 *)(pfVar20 + 2) = uVar19;
    uVar19 = puVar24[4];
    uVar7 = puVar24[5];
    *(undefined8 *)(pfVar20 + 4) = uVar5;
    *(undefined8 *)(pfVar20 + 6) = uVar6;
    uVar5 = puVar24[6];
    uVar6 = puVar24[7];
    *(undefined8 *)(pfVar20 + 8) = uVar19;
    *(undefined8 *)(pfVar20 + 10) = uVar7;
    uVar19 = puVar24[8];
    uVar7 = puVar24[9];
    *(undefined8 *)(pfVar20 + 0xc) = uVar5;
    *(undefined8 *)(pfVar20 + 0xe) = uVar6;
    uVar5 = puVar24[10];
    uVar6 = puVar24[0xb];
    *(undefined8 *)(pfVar20 + 0x10) = uVar19;
    *(undefined8 *)(pfVar20 + 0x12) = uVar7;
    uVar19 = puVar24[0xc];
    uVar7 = puVar24[0xd];
    *(undefined8 *)(pfVar20 + 0x14) = uVar5;
    *(undefined8 *)(pfVar20 + 0x16) = uVar6;
    uVar5 = puVar24[0xe];
    uVar6 = puVar24[0xf];
    *(undefined8 *)(pfVar20 + 0x18) = uVar19;
    *(undefined8 *)(pfVar20 + 0x1a) = uVar7;
    *(undefined8 *)(pfVar20 + 0x1c) = uVar5;
    *(undefined8 *)(pfVar20 + 0x1e) = uVar6;
    fVar22 = DAT_1808ac864;
    fVar31 = DAT_1808ac1b0;
    lVar26 = lVar26 + -1;
    pfVar25 = pfVar20 + 0x20;
    puVar17 = puVar24 + 0x10;
  } while (lVar26 != 0);
  uVar19 = puVar24[0x11];
  uVar5 = puVar24[0x12];
  uVar6 = puVar24[0x13];
  *(undefined8 *)(pfVar20 + 0x20) = puVar24[0x10];
  *(undefined8 *)(pfVar20 + 0x22) = uVar19;
  uVar19 = puVar24[0x14];
  uVar7 = puVar24[0x15];
  *(undefined8 *)(pfVar20 + 0x24) = uVar5;
  *(undefined8 *)(pfVar20 + 0x26) = uVar6;
  fVar30 = *(float *)(puVar24 + 0x16);
  fVar2 = *(float *)((longlong)puVar24 + 0xb4);
  fVar3 = *(float *)(puVar24 + 0x17);
  fVar4 = *(float *)((longlong)puVar24 + 0xbc);
  *(undefined8 *)(pfVar20 + 0x28) = uVar19;
  *(undefined8 *)(pfVar20 + 0x2a) = uVar7;
  pfVar20[0x2c] = fVar30;
  pfVar20[0x2d] = fVar2;
  pfVar20[0x2e] = fVar3;
  pfVar20[0x2f] = fVar4;
  fVar30 = param_2;
  if (param_3 != '\0') {
    fVar30 = 6.72623e-44;
  }
  *param_8 = fVar30;
  if (DAT_180cf9cc8 != 0) {
    fVar30 = (float)FUN_18000f3d0(lVar1 + (ulonglong)DAT_180cf9cc8);
    if (((((uint)fVar30 & 0x7f800000) != 0x7f800000) && (0.0 < fVar30)) && (fVar30 < fVar22)) {
      fVar31 = fVar30;
    }
  }
  if (DAT_1809f3060 == 0) {
    if (DAT_1809f3068 == '\0') {
      DAT_1809f3060 = FUN_180264b70(PTR_s_sv_gravity_1809f3058);
      DAT_1809f3068 = DAT_1809f3060 == 0;
      if (DAT_1809f3060 != 0) goto LAB_1802489a0;
    }
LAB_1802489cb:
    fVar30 = DAT_1808acc30;
  }
  else {
LAB_1802489a0:
    local_res10[2] = (float)FUN_180264d70(DAT_1809f3060);
    fVar30 = local_res10[2];
    if (((uint)local_res10[2] & 0x7f800000) == 0x7f800000) goto LAB_1802489cb;
  }
  uVar9 = DAT_180cf9ccc;
  uVar16 = (ulonglong)DAT_180cf9ccc;
  pfVar8[10] = fVar30 * fVar31;
  if (((uVar9 != 0) &&
      (fVar31 = (float)FUN_18000f3d0(lVar1 + uVar16), ((uint)fVar31 & 0x7f800000) != 0x7f800000)) &&
     ((0.0 <= fVar31 && (fVar31 < fVar22)))) {
    pfVar8[0xb] = fVar31;
  }
  if (DAT_1809f3138 == 0) {
    if (DAT_1809f3140 == '\0') {
      DAT_1809f3138 = FUN_180264b70(PTR_s_weapon_molotov_maxdetonateslope_1809f3130);
      DAT_1809f3140 = DAT_1809f3138 == 0;
      if (DAT_1809f3138 != 0) goto LAB_180248a4c;
    }
LAB_180248a77:
    fVar31 = DAT_1808aca54;
  }
  else {
LAB_180248a4c:
    local_res10[2] = (float)FUN_180264d70(DAT_1809f3138);
    fVar31 = local_res10[2];
    if (((uint)local_res10[2] & 0x7f800000) == 0x7f800000) goto LAB_180248a77;
  }
  fVar31 = (float)FUN_180517200(fVar31 * DAT_1808ac014);
  uVar9 = DAT_180cf9c80;
  uVar16 = (ulonglong)DAT_180cf9c80;
  pfVar8[0xd] = fVar31;
  if (uVar9 != 0) {
    uVar13 = FUN_180011200(lVar1 + uVar16);
    puVar17 = (undefined8 *)FUN_1803a0940(&param_8,uVar13);
    *(undefined8 *)(pfVar8 + 0x1e) = *puVar17;
  }
  pfVar8[0x46] = 1.72206e-41;
  pfVar8[0x47] = 2.8026e-45;
  *(longlong *)(pfVar8 + 0x44) = lVar1;
  pfVar8[0x48] = 1.469368e-39;
  pfVar8[0x49] = 1.79366e-43;
  pfVar8[0x4a] = 0.0;
  pfVar8[0x4b] = 0.0;
  *(undefined1 *)(pfVar8 + 0x4c) = 0x10;
  if (((lVar1 != 0) && (cVar10 = FUN_180243ec0(lVar1,"C_BaseCSGrenadeProjectile"), cVar10 != '\0'))
     && (uVar16 = (ulonglong)DAT_180cf9cdc, DAT_180cf9cdc != 0)) {
    uVar29 = (ulonglong)DAT_180cf9cec;
    if (DAT_180cf9cec != 0) {
      uVar27 = (ulonglong)DAT_180cf9ce8;
      if ((DAT_180cf9ce8 != 0) && (uVar28 = (ulonglong)DAT_180cf9cf4, DAT_180cf9cf4 != 0)) {
        if (DAT_180cf9cd8 != 0) {
          lVar18 = FUN_18000f3a0(lVar1 + (ulonglong)DAT_180cf9cd8);
          lVar26 = 0;
          if (lVar18 - 0x10000U < 0x7ffffffeffff) {
            lVar26 = lVar18;
          }
          if (lVar26 != 0) {
            lVar18 = uVar16 + lVar26;
            uVar19 = FUN_18000f3a0(lVar18 + uVar29);
            *(undefined8 *)(pfVar8 + 0x46) = uVar19;
            uVar19 = FUN_18000f3a0(lVar18 + uVar27);
            uVar16 = (ulonglong)DAT_180cf9cf0;
            *(undefined8 *)(pfVar8 + 0x48) = uVar19;
            uVar19 = FUN_18000f3a0(uVar16 + lVar18);
            *(undefined8 *)(pfVar8 + 0x4a) = uVar19;
            uVar11 = FUN_180011220(lVar18 + uVar28);
            uVar16 = (ulonglong)DAT_180cf9cf8;
            *(undefined1 *)(pfVar8 + 0x4c) = uVar11;
            bVar12 = FUN_180011220(uVar16 + lVar18);
            if (DAT_180cf9ce4 == 0) {
              cVar10 = '\0';
            }
            else {
              cVar10 = FUN_180011220((ulonglong)DAT_180cf9ce4 + lVar26);
            }
            if (((bVar12 & 3) == 0) || (cVar10 == '\0')) {
              *(ulonglong *)(pfVar8 + 0x46) = *(ulonglong *)(pfVar8 + 0x46) & 0xfffffffffff7ffff;
            }
            goto LAB_180248c1f;
          }
        }
        pfVar8[0x46] = 0.0;
        pfVar8[0x47] = 0.0;
        pfVar8[0x48] = 0.0;
        pfVar8[0x49] = 0.0;
        *(undefined1 *)(pfVar8 + 0x4c) = 3;
      }
LAB_180248c1f:
      param_4 = local_res20[0]._0_1_;
    }
    param_2 = local_res10[0];
  }
  fVar31 = (float)FUN_180242810(*pfVar8);
  uVar16 = (ulonglong)DAT_180cf9cb8;
  if (DAT_180cf9cb8 != 0) {
    iVar14 = FUN_180011200(lVar1 + uVar16);
    if (0 < iVar14) {
      fVar32 = (float)iVar14 * DAT_1808ac00c;
    }
    if ((((DAT_180961fa8 == 0) || (lVar26 = FUN_18000f3a0(), 0x7ffffffefffe < lVar26 - 0x10000U)) ||
        (DAT_180cfa190 == 0)) || (0x7ffffffefffe < ((ulonglong)DAT_180cfa190 + lVar26) - 0x10000)) {
      iVar14 = -1;
    }
    else {
      iVar14 = FUN_180011200();
    }
    iVar15 = FUN_180011200(lVar1 + uVar16);
    iVar23 = 0;
    if (0 < iVar14) {
      iVar23 = iVar14;
    }
    fVar22 = (float)(iVar23 - iVar15);
    if ((int)fVar22 < 0) {
      fVar22 = 0.0;
    }
    pfVar8[0x42] = fVar22;
  }
  if ((param_2 == 6.44597e-44) && (cVar10 = FUN_180241780(), cVar10 != '\0')) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  *(undefined1 *)(pfVar8 + 0x24) = uVar11;
  if (fVar32 < 0.0) {
    if ((DAT_180961a50 == 0) || (lVar26 = FUN_18000f3a0(), lVar26 == 0)) {
      fVar22 = 0.0;
    }
    else {
      fVar22 = (float)FUN_18000f3d0(lVar26 + 0x30);
    }
    fVar22 = fVar22 - param_5;
  }
  else {
    fVar22 = fVar32;
  }
  pfVar8[0x25] = fVar22;
  if (((((((int)param_2 - 0x2bU & 0xfffffffc) == 0) && (param_2 != 6.30584e-44)) &&
       (DAT_180cf9c7c != 0)) &&
      ((0.0 <= fVar32 &&
       (fVar22 = (float)FUN_18000f3d0(lVar1 + (ulonglong)DAT_180cf9c7c),
       ((uint)fVar22 & 0x7f800000) != 0x7f800000)))) && (fVar32 < fVar22)) {
    fVar31 = fVar22 - fVar32;
  }
  fVar32 = DAT_1808ac540;
  pfVar8[0xf] = fVar31;
  fVar31 = 0.0;
  if (*pfVar8 == 6.5861e-44) {
    fVar31 = fVar32;
  }
  pfVar8[0x10] = fVar31;
  if (param_4 == '\0') {
    *(undefined8 *)(pfVar8 + 1) = *param_6;
    pfVar8[3] = *(float *)(param_6 + 1);
    *(undefined8 *)(pfVar8 + 4) = *param_7;
    pfVar8[6] = *(float *)(param_7 + 1);
    uVar19 = FUN_1802439e0(pfVar8,pfVar8 + 1);
    *(undefined8 *)(pfVar8 + 0x4e) = uVar19;
    fVar22 = (float)FUN_18053f0d0();
    uVar9 = DAT_180cf9cc4;
    fVar31 = 0.0;
    if (0 < (int)fVar22) {
      fVar31 = (float)(int)fVar22;
    }
    uVar16 = (ulonglong)DAT_180cf9cc4;
    pfVar8[0xe] = (float)(int)fVar31 * DAT_1808ac00c;
    if (uVar9 != 0) {
      local_res10[0] = 8.96831e-44;
      local_res20[0] = 0.0;
      local_res10[2] = (float)FUN_180011200(lVar1 + uVar16);
      pfVar25 = local_res20;
      if (-1 < (int)local_res10[2]) {
        pfVar25 = local_res10 + 2;
      }
      pfVar20 = local_res10;
      if ((int)local_res10[2] < 0x41) {
        pfVar20 = pfVar25;
      }
      pfVar8[0x12] = *pfVar20;
    }
    if (DAT_180cf9cd0 != 0) {
      iVar14 = FUN_180011200(lVar1 + (ulonglong)DAT_180cf9cd0);
      if ((iVar14 == -1) || (plVar21 = (longlong *)FUN_1803a0940(&param_8,iVar14), *plVar21 == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      *(undefined1 *)(pfVar8 + 0x14) = uVar11;
    }
    fVar31 = DAT_1808ac8d4;
    if ((int)*pfVar8 - 0x2bU < 2) {
      FUN_18053ef70();
      fVar31 = extraout_XMM0_Da * fVar31 * DAT_1808ac00c;
    }
    else {
      fVar31 = pfVar8[0xe];
      if ((*pfVar8 == 6.5861e-44) && (fVar31 <= fVar32)) {
        fVar31 = fVar32;
      }
    }
    pfVar8[0x10] = fVar31;
  }
  else {
    puVar17 = (undefined8 *)FUN_1800111b0(local_1c8,(ulonglong)DAT_180cf9cbc + lVar1);
    uVar16 = (ulonglong)DAT_180cf9cc0;
    fVar32 = *(float *)(puVar17 + 1);
    *(undefined8 *)(pfVar8 + 1) = *puVar17;
    pfVar8[3] = fVar32;
    puVar17 = (undefined8 *)FUN_1800111b0(local_1c8,uVar16 + lVar1);
    fVar32 = *(float *)(puVar17 + 1);
    *(undefined8 *)(pfVar8 + 4) = *puVar17;
    pfVar8[6] = fVar32;
    pfVar8[0xe] = 0.0;
    uVar19 = FUN_1802439e0(pfVar8,pfVar8 + 1);
    *(undefined8 *)(pfVar8 + 0x4e) = uVar19;
    if (((((uint)pfVar8[1] & 0x7f800000) == 0x7f800000) ||
        (fVar32 = pfVar8[4], ((uint)fVar32 & 0x7f800000) == 0x7f800000)) ||
       (fVar32 * fVar32 + pfVar8[5] * pfVar8[5] + pfVar8[6] * pfVar8[6] < DAT_1808ac34c)) {
      uVar19 = 0;
      goto LAB_180248f9e;
    }
  }
  uVar19 = 1;
LAB_180248f9e:
  return uVar19;
}



/* ===== 180248fd0 FUN_180248fd0 ===== */

ulonglong FUN_180248fd0(undefined8 *param_1,float param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar6 = (undefined8 *)*param_1;
  uVar8 = 0xaaaaaaaaaaaaaaab;
  uVar9 = (param_1[1] - (longlong)puVar6 >> 2) * -0x5555555555555555;
  if (1 < uVar9) {
    pfVar7 = (float *)param_1[3];
    uVar8 = param_1[4] - (longlong)pfVar7 >> 2;
    if (uVar8 == uVar9) {
      if (param_2 <= *pfVar7) {
        *param_3 = *puVar6;
        uVar5 = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)(param_3 + 1) = uVar5;
        return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
      }
      uVar8 = 1;
      do {
        if (param_2 <= pfVar7[uVar8]) {
          fVar10 = pfVar7[uVar8] - pfVar7[uVar8 - 1];
          if (fVar10 <= 0.0) {
            fVar10 = DAT_1808ac34c;
          }
          else {
            fVar10 = (param_2 - pfVar7[uVar8 - 1]) / fVar10;
          }
          fVar1 = *(float *)((longlong)puVar6 + uVar8 * 0xc + -4);
          uVar3 = *(undefined8 *)((longlong)puVar6 + uVar8 * 0xc + -0xc);
          fVar2 = *(float *)((longlong)puVar6 + uVar8 * 0xc + 8);
          uVar4 = *(undefined8 *)((longlong)puVar6 + uVar8 * 0xc);
          fVar11 = (float)uVar3;
          fVar12 = (float)((ulonglong)uVar3 >> 0x20);
          *param_3 = CONCAT44(fVar12 + ((float)((ulonglong)uVar4 >> 0x20) - fVar12) * fVar10,
                              fVar11 + ((float)uVar4 - fVar11) * fVar10);
          *(float *)(param_3 + 1) = fVar1 + (fVar2 - fVar1) * fVar10;
          return CONCAT71((int7)(uVar8 * 3 >> 8),1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



/* ===== 1802490c0 FUN_1802490c0 ===== */

uint FUN_1802490c0(char param_1)

{
  uint uVar1;
  
  if (param_1 != '\0') {
    if (DAT_1809f3030 == 0) {
      if (DAT_1809f3038 != '\0') {
        return DAT_1808acb0c;
      }
      DAT_1809f3030 = FUN_180264b70(PTR_s_inferno_max_range_ct_1809f3028);
      DAT_1809f3038 = DAT_1809f3030 == 0;
      if (DAT_1809f3030 == 0) {
        return DAT_1808acb0c;
      }
    }
    uVar1 = FUN_180264d70(DAT_1809f3030);
    if ((uVar1 & 0x7f800000) == 0x7f800000) {
      return DAT_1808acb0c;
    }
    return uVar1;
  }
  if (DAT_1809f30c8 == 0) {
    if (DAT_1809f30d0 != '\0') {
      return DAT_1808acb34;
    }
    DAT_1809f30c8 = FUN_180264b70(PTR_s_inferno_max_range_1809f30c0);
    DAT_1809f30d0 = DAT_1809f30c8 == 0;
    if (DAT_1809f30c8 == 0) {
      return DAT_1808acb34;
    }
  }
  uVar1 = FUN_180264d70(DAT_1809f30c8);
  if ((uVar1 & 0x7f800000) == 0x7f800000) {
    return DAT_1808acb34;
  }
  return uVar1;
}



/* ===== 1802491a0 FUN_1802491a0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802491a0(char param_1)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  unkuint10 Var4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [11];
  undefined1 auVar7 [13];
  undefined1 auVar8 [11];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  uint6 uVar11;
  undefined1 auVar12 [16];
  undefined8 *puVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  float *pfVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  longlong *plVar25;
  HMODULE hModule;
  longlong *plVar26;
  longlong lVar27;
  int iVar28;
  undefined8 *puVar29;
  byte *pbVar30;
  longlong *plVar31;
  ulonglong uVar32;
  longlong *plVar33;
  ulonglong uVar34;
  undefined1 *puVar35;
  longlong *plVar36;
  byte bVar37;
  float fVar38;
  uint uVar39;
  char *pcVar40;
  float *pfVar41;
  uint *puVar42;
  char *pcVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  int *piVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  longlong lVar49;
  char *pcVar50;
  float fVar51;
  int *piVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [12];
  float fVar56;
  ushort uVar61;
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  float fVar62;
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined8 uStack_1190;
  undefined1 auStack_1188 [8];
  undefined1 auStack_1180 [24];
  longlong **local_1168;
  undefined8 *local_1160;
  float *local_1158;
  undefined8 *local_1150;
  char *local_1148;
  char *local_1140;
  char *local_1138;
  double local_1130;
  double local_1128;
  char *local_1120;
  char *local_1118;
  char local_1108;
  byte local_1107;
  float local_1104;
  char local_1100;
  float local_10fc;
  char local_10f8;
  char local_10f7;
  float local_10f4;
  float local_10f0 [2];
  longlong local_10e8;
  longlong *local_10e0;
  longlong local_10d8;
  undefined4 uStack_10d0;
  uint uStack_10cc;
  float fStack_10c8;
  float fStack_10c4;
  undefined8 uStack_10c0;
  float local_10b8;
  undefined4 uStack_10b4;
  float fStack_10b0;
  undefined1 uStack_10ac;
  undefined1 uStack_10ab;
  undefined2 uStack_10aa;
  uint local_10a8;
  int local_10a4;
  float local_10a0;
  undefined8 local_1098;
  float local_1090;
  longlong *local_1088;
  longlong *plStack_1080;
  longlong *local_1078;
  longlong local_1070;
  longlong local_1068;
  longlong *plStack_1060;
  longlong *local_1058;
  ulonglong local_1050;
  ulonglong uStack_1048;
  longlong *local_1040;
  undefined8 local_1038;
  float local_1030;
  undefined8 local_1028;
  float local_1020;
  longlong *local_1018;
  longlong *plStack_1010;
  longlong local_1008;
  uint local_1000;
  undefined4 local_ffc;
  undefined8 local_ff8;
  float local_ff0;
  longlong local_fe8;
  longlong lStack_fe0;
  longlong local_fd8;
  longlong *local_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  float local_fb8;
  float local_fb4;
  float local_fb0;
  undefined8 local_fa8;
  longlong lStack_fa0;
  longlong local_f98;
  undefined8 local_f90;
  longlong lStack_f88;
  undefined8 local_f80;
  longlong *local_f78;
  undefined1 local_f70 [16];
  undefined1 local_f60 [16];
  undefined1 local_f50 [16];
  undefined1 local_f40 [24];
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined4 local_ee8;
  undefined4 uStack_ee4;
  undefined8 uStack_ee0;
  undefined4 local_ed8;
  undefined1 uStack_ed4;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined2 uStack_ec0;
  undefined8 uStack_ebc;
  undefined4 uStack_eb4;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined1 local_e98;
  undefined8 uStack_e94;
  undefined2 uStack_e8c;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined4 local_e50;
  undefined4 local_e4c;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined4 local_e30;
  undefined8 local_e28;
  undefined4 local_e20;
  undefined8 local_e18;
  undefined8 local_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined1 local_df8;
  undefined8 local_df0;
  undefined1 local_de8 [8];
  undefined1 local_de0 [8];
  undefined1 local_dd8 [8];
  undefined1 local_dd0 [8];
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined1 local_db8 [16];
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined1 local_d98 [16];
  undefined8 local_d88;
  longlong lStack_d80;
  longlong *local_d78;
  undefined4 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined4 uStack_d50;
  undefined8 uStack_d4c;
  undefined4 uStack_d44;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined4 local_d28;
  undefined2 uStack_d24;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined4 uStack_d10;
  undefined8 uStack_d0c;
  undefined8 uStack_d04;
  undefined1 local_cfc [16];
  undefined8 local_cec;
  undefined4 local_ce4;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  undefined2 local_cac;
  undefined4 local_ca8;
  undefined1 local_ca4;
  undefined4 local_ca0;
  undefined2 local_c9c;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined1 local_c88 [16];
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined1 local_c68;
  undefined8 local_c60;
  undefined4 local_c58;
  undefined8 local_c54;
  undefined8 local_c4c;
  undefined8 local_c44;
  undefined8 local_c3c;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined1 local_c18 [16];
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined1 local_bf8 [16];
  undefined8 local_be8;
  undefined8 uStack_be0;
  ulonglong local_bd8;
  ulonglong uStack_bd0;
  undefined8 local_bc8;
  undefined2 uStack_bc0;
  undefined2 uStack_bbe;
  undefined4 uStack_bbc;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  undefined4 local_ba8;
  undefined4 uStack_ba4;
  undefined8 uStack_ba0;
  uint local_b98;
  undefined4 uStack_b94;
  undefined4 uStack_b90;
  undefined2 uStack_b8c;
  undefined2 uStack_b8a;
  ulonglong local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 local_b68;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined8 local_b58;
  undefined4 local_b50;
  undefined4 local_b4c;
  undefined4 uStack_b48;
  undefined4 uStack_b44;
  undefined8 uStack_b40;
  undefined8 local_b38;
  ulonglong local_b30;
  undefined8 local_b28;
  ulonglong local_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  ulonglong local_b08;
  ulonglong local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined1 local_ae8 [16];
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined1 local_ac8;
  undefined8 local_ac0;
  undefined4 local_ab8;
  undefined8 local_ab4;
  undefined8 local_aac;
  undefined8 local_aa4;
  undefined8 local_a9c;
  longlong local_a88;
  longlong local_a80;
  longlong local_a68;
  undefined8 local_a60;
  byte local_a58;
  undefined1 local_a57;
  undefined1 local_a56;
  undefined8 local_a54;
  undefined8 local_a4c;
  undefined8 local_a44;
  undefined4 local_a3c;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
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
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined4 local_740;
  undefined4 local_73c;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined1 local_728 [16];
  undefined8 local_718;
  undefined8 uStack_710;
  undefined1 local_708 [16];
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined1 local_6e8 [16];
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6c8 [16];
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8 [16];
  undefined8 local_698;
  undefined8 uStack_690;
  undefined1 local_688 [16];
  undefined8 local_678;
  undefined8 uStack_670;
  undefined1 local_668 [16];
  undefined8 local_658;
  undefined8 uStack_650;
  undefined1 local_648 [16];
  undefined8 local_638;
  undefined8 uStack_630;
  undefined1 local_628 [16];
  undefined8 local_618;
  undefined8 uStack_610;
  undefined1 local_608 [16];
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8 [16];
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined1 local_5c8 [16];
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined1 local_5a8 [16];
  undefined8 local_598;
  undefined8 uStack_590;
  undefined1 local_588 [16];
  undefined8 local_578;
  undefined8 uStack_570;
  undefined1 local_568 [16];
  undefined8 local_558;
  undefined8 uStack_550;
  undefined1 local_548 [16];
  undefined8 local_538;
  undefined8 uStack_530;
  undefined1 local_528 [16];
  undefined8 local_518;
  undefined8 uStack_510;
  undefined1 local_508 [16];
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined1 local_4e8 [16];
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c8 [16];
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined1 local_4a8 [16];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined1 local_488 [16];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined1 local_468 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined4 local_440;
  undefined8 local_43c;
  undefined8 uStack_434;
  undefined8 local_42c;
  undefined8 uStack_424;
  undefined8 local_41c;
  undefined8 uStack_414;
  undefined8 local_40c;
  undefined8 uStack_404;
  undefined2 local_3fc;
  undefined4 local_3f8 [192];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_1188;
  fVar51 = 0.0;
  local_1104 = 0.0;
  if (param_1 == '\0') {
    iVar17 = FUN_1804e4d70(&DAT_1809f2e50);
    if (iVar17 != 0) goto LAB_18024c718;
    if (DAT_1809f2e9c == 0x7fffffff) {
      DAT_1809f2e9c = 0x7ffffffe;
      goto LAB_18024c70d;
    }
    if (DAT_180cf9ea0 != DAT_180cf9ea8) {
      DAT_180cf9ea8 = DAT_180cf9ea0;
    }
    FUN_1804e4e90(&DAT_1809f2e50);
    iVar17 = FUN_1804e4d70(&DAT_1809f2f40);
    if (iVar17 != 0) goto LAB_18024c718;
    if (DAT_1809f2f8c == 0x7fffffff) {
      DAT_1809f2f8c = 0x7ffffffe;
      goto LAB_18024c70d;
    }
    if (DAT_180cf9da8 != DAT_180cf9db0) {
      DAT_180cf9db0 = DAT_180cf9da8;
    }
    FUN_1804e4e90(&DAT_1809f2f40);
    FUN_18025bcc0(&DAT_180cf9d20);
    local_1018 = (longlong *)0x0;
    plStack_1010 = (longlong *)0x0;
    local_1008 = 0;
    FUN_1800d1530(&local_1018,0);
    puVar35 = auStack_1188;
    if (local_1018 == (longlong *)0x0) {
LAB_180249362:
      local_1018 = (longlong *)0x0;
      plStack_1010 = (longlong *)0x0;
      local_1008 = 0;
      FUN_1802406d0(&local_1018);
      puVar35 = auStack_1188;
      if (local_1018 != (longlong *)0x0) {
        uVar32 = (local_1008 - (longlong)local_1018 >> 4) * 0x10;
        if (uVar32 < 0x1000) {
          plVar36 = local_1018;
        }
        else {
          if (0x1f < (ulonglong)((longlong)local_1018 + (-8 - local_1018[-1]))) goto LAB_18024c6d3;
          uVar32 = uVar32 + 0x27;
          plVar36 = (longlong *)local_1018[-1];
        }
        thunk_FUN_1803d64e0(plVar36,uVar32);
      }
      iVar17 = FUN_1804e4d70(&DAT_1809f30e0);
      if (iVar17 != 0) {
LAB_18024c718:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f312c == 0x7fffffff) {
        DAT_1809f312c = 0x7ffffffe;
LAB_18024c70d:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if (DAT_180cf9d90 != DAT_180cf9d98) {
        FUN_18025c780();
        DAT_180cf9d98 = DAT_180cf9d90;
      }
      FUN_1804e4e90(&DAT_1809f30e0);
      puVar35 = auStack_1188;
      goto LAB_18024942d;
    }
    uVar32 = (local_1008 - (longlong)local_1018 >> 4) * 0x10;
    if (uVar32 < 0x1000) {
      plVar36 = local_1018;
LAB_18024935a:
      thunk_FUN_1803d64e0(plVar36,uVar32);
      goto LAB_180249362;
    }
    if ((ulonglong)((longlong)local_1018 + (-8 - local_1018[-1])) < 0x20) {
      uVar32 = uVar32 + 0x27;
      plVar36 = (longlong *)local_1018[-1];
      goto LAB_18024935a;
    }
LAB_18024c6d3:
    pcVar2 = (code *)swi(0x29);
    lVar27 = (*pcVar2)(5);
    puVar35 = puVar35 + 8;
  }
  else {
    FUN_180247e40();
    cVar14 = FUN_180241780();
    if ((((cVar14 == '\0') && (DAT_18095d281 == '\0')) && (DAT_1809213ac == '\0')) &&
       (DAT_180921338 == '\0')) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x01';
    }
    fVar38 = 0.0;
    local_1000 = 0;
    local_ffc = 1;
    puVar42 = &local_1000;
    do {
      lVar27 = 0;
      if (*puVar42 < 4) {
        lVar27 = (longlong)(int)*puVar42;
      }
      if (((&DAT_18091a1e0)[lVar27 * 0x192c] != '\0') && ((&DAT_18091a1e4)[lVar27 * 0x192c] != '\0')
         ) {
        fVar38 = (float)((uint)fVar38 | (&DAT_18091b31c)[lVar27 * 0x64b] & 0xc);
      }
      puVar42 = puVar42 + 1;
    } while (puVar42 != (uint *)&local_ff8);
    local_fe8 = 0;
    lStack_fe0 = 0;
    local_fd8 = 0;
    local_1108 = cVar14;
    local_10f0[0] = fVar38;
    if (cVar14 != '\0') {
      FUN_18023f6b0();
    }
    local_fa8 = 0;
    lStack_fa0 = 0;
    local_f98 = 0;
    if ((DAT_180961a50 == 0) || (lVar27 = FUN_18000f3a0(), lVar27 == 0)) {
      fVar53 = 0.0;
    }
    else {
      fVar53 = (float)FUN_18000f3d0(lVar27 + 0x30);
    }
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_10e0);
      DAT_181108a00 = local_10e0;
      DAT_1811089f8 = (longlong *)FUN_1803a0c50(&local_10e0);
      DAT_180cd1304 = '\x01';
    }
    plVar36 = DAT_1811089f8;
    local_1050 = 0;
    uStack_1048 = 0;
    local_1040 = (longlong *)0x0;
    local_1068 = 0;
    plStack_1060 = (longlong *)0x0;
    local_1058 = (longlong *)0x0;
    local_f90 = 0;
    lStack_f88 = 0;
    local_f80 = 0;
    local_10e0 = DAT_1811089f8;
    if ((DAT_1811089f8 == (longlong *)0x0) || (DAT_180ca09f0 == 0)) {
LAB_180249619:
      local_1100 = '\0';
    }
    else {
      iVar17 = FUN_180011200((ulonglong)DAT_180ca09f0 + (longlong)DAT_1811089f8);
      local_1100 = '\x01';
      if (999 < iVar17 - 1U) goto LAB_180249619;
    }
    local_1088 = (longlong *)0x0;
    plStack_1080 = (longlong *)0x0;
    local_1078 = (longlong *)0x0;
    local_10f7 = FUN_180241710();
    auVar12 = _DAT_1808ad5d0;
    fVar69 = DAT_1808ac34c;
    fVar68 = DAT_1808ac00c;
    local_f78 = DAT_180cf9d28;
    plVar33 = (longlong *)*DAT_180cf9d28;
    fVar75 = DAT_1808ac618;
    if (plVar33 != DAT_180cf9d28) {
      local_10f8 = plVar36 != (longlong *)0x0;
      local_10f4 = (float)((uint)fVar38 & 4);
      fVar38 = DAT_1808acda0;
      do {
        lVar49 = 0;
        lVar27 = plVar33[2];
        lVar20 = lVar49;
        local_10e8 = lVar27;
        if ((((lVar27 != 0) &&
             (lVar19 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar27), lVar19 != 0)) &&
            (lVar19 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar19), lVar19 != 0)) &&
           (lVar19 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar19), lVar19 != 0)) {
          lVar20 = FUN_18000f3a0((ulonglong)DAT_180961974 + lVar19);
          if (0x7ffffffefffe < lVar20 - 0x10000U) {
            lVar20 = lVar49;
          }
        }
        lVar49 = plVar33[3];
        iVar17 = FUN_180247d80(lVar20);
        if ((iVar17 == (int)lVar49) &&
           (((1 < (int)lVar49 - 0x2bU || (DAT_180cf9c84 == 0)) ||
            (iVar17 = FUN_180011200((ulonglong)DAT_180cf9c84 + plVar33[2]), iVar17 < 1)))) {
          if (((lVar27 == 0) || (DAT_180ca09f8 == 0)) ||
             ((lVar20 = FUN_18000f3a0(lVar27 + (ulonglong)DAT_180ca09f8), lVar20 == 0 ||
              (DAT_180ca0950 == 0)))) {
            fVar75 = 0.0;
            fVar76 = 0.0;
            local_ff0 = 0.0;
          }
          else {
            puVar21 = (undefined8 *)FUN_1800111b0(local_f70,lVar20 + (ulonglong)DAT_180ca0950);
            fVar75 = (float)*puVar21;
            fVar76 = (float)((ulonglong)*puVar21 >> 0x20);
            local_ff0 = *(float *)(puVar21 + 1);
          }
          fVar62 = local_ff0;
          local_ff8 = CONCAT44(fVar76,fVar75);
          if (DAT_180ca09bc == 0) {
            fVar56 = 0.0;
            fVar54 = 0.0;
            fVar74 = 0.0;
          }
          else {
            pfVar22 = (float *)FUN_1800111b0(local_f60,lVar27 + (ulonglong)DAT_180ca09bc);
            fVar74 = *pfVar22;
            fVar56 = pfVar22[1];
            fVar54 = pfVar22[2];
          }
          if ((((uint)fVar74 & 0x7f800000) == 0x7f800000) ||
             (fVar56 * fVar56 + fVar74 * fVar74 + fVar54 * fVar54 < fVar69)) {
            if ((lVar27 == 0) || (DAT_180ca0a1c == 0)) {
              fVar74 = 0.0;
              fVar56 = 0.0;
              fVar54 = 0.0;
            }
            else {
              puVar21 = (undefined8 *)FUN_1800111b0(local_f50,lVar27 + (ulonglong)DAT_180ca0a1c);
              local_fd0 = (longlong *)*puVar21;
              fVar74 = SUB84(local_fd0,0);
              fVar56 = (float)((ulonglong)local_fd0 >> 0x20);
              fVar54 = *(float *)(puVar21 + 1);
            }
          }
          if ((((uint)fVar74 & 0x7f800000) == 0x7f800000) ||
             (local_fb4 = fVar56, fVar56 * fVar56 + fVar74 * fVar74 + fVar54 * fVar54 < fVar69)) {
            if ((*(float *)(plVar33 + 5) < 0.0) ||
               (fVar54 = fVar53 - *(float *)(plVar33 + 5), fVar54 <= _DAT_1808abfec)) {
              fVar74 = 0.0;
              local_fb4 = 0.0;
              fVar54 = 0.0;
            }
            else {
              fVar54 = fVar69 / fVar54;
              fVar74 = (fVar75 - *(float *)((longlong)plVar33 + 0x2c)) * fVar54;
              local_fb4 = (fVar76 - *(float *)(plVar33 + 6)) * fVar54;
              fVar54 = fVar54 * (fVar62 - *(float *)((longlong)plVar33 + 0x34));
            }
          }
          *(ulonglong *)((longlong)plVar33 + 0x2c) = CONCAT44(fVar76,fVar75);
          *(float *)((longlong)plVar33 + 0x34) = fVar62;
          *(float *)(plVar33 + 5) = fVar53;
          local_fb8 = fVar74;
          local_fb0 = fVar54;
          if ((DAT_180cf9cb8 != 0) &&
             (iVar17 = FUN_180011200((ulonglong)DAT_180cf9cb8 + plVar33[2]), 0 < iVar17)) {
            fVar38 = (float)iVar17 * fVar68;
          }
          fVar74 = *(float *)(plVar33 + 4);
          if (fVar74 < 0.0) {
            if (fVar38 < 0.0) {
              fVar74 = fVar53;
            }
            else {
              fVar74 = fVar38;
            }
            *(float *)(plVar33 + 4) = fVar74;
          }
          fVar74 = fVar53 - fVar74;
          if ((((int)plVar33[3] == 0x2e) && (DAT_180cf9cb4 != 0)) &&
             (cVar15 = FUN_180011220((ulonglong)DAT_180cf9cb4 + plVar33[2]), cVar15 != '\0')) {
            bVar37 = 1;
          }
          else {
            bVar37 = 0;
          }
          local_1107 = bVar37;
          if (((cVar14 != '\0') && ((int)plVar33[3] == 0x2e)) && ((char)plVar33[0x33] == '\0')) {
            local_dc8 = 0;
            uStack_dc0 = 0;
            local_db8 = ZEXT816(0);
            local_da8 = 0;
            uStack_da0 = 0;
            local_d88 = 0;
            lStack_d80 = 0;
            local_d78 = (longlong *)0x0;
            uStack_d70 = 0;
            local_d68 = 0;
            uStack_d60 = 0;
            local_d58 = 0;
            uStack_d50 = 0x10000;
            uStack_d4c = 0;
            uStack_d44 = 0;
            uStack_d40 = 0;
            local_d38 = 0;
            uStack_d30 = 0;
            local_d28 = 0;
            uStack_d24 = 0;
            uStack_d20 = 0;
            local_d18 = 0;
            uStack_d10 = 0;
            uStack_d0c = 0;
            uStack_d04 = 0;
            local_cec = 0;
            local_ce4 = 0;
            local_ce0 = 0;
            local_cd8 = 0;
            local_cd0 = 0;
            local_cc8 = 0;
            local_cc0 = 0;
            local_cb8 = 0x3f800000;
            local_cb0 = 0;
            local_cac = 0x100;
            local_ca8 = 0;
            local_ca4 = 0;
            local_ca0 = 0;
            local_c9c = 0;
            local_c98 = 0;
            uStack_c90 = 0;
            local_c78 = 0;
            uStack_c70 = 0;
            local_c68 = 0;
            local_c60 = 0;
            local_c58 = 0xffffffff;
            local_c54 = 0;
            local_c4c = 0;
            local_c44 = 0;
            local_c3c = 0;
            local_d98 = local_db8;
            local_cfc = local_db8;
            local_c88 = local_db8;
            FUN_180247990(plVar33 + 7,&local_dc8);
            FUN_18025deb0(&uStack_d40);
            FUN_180042970(&local_d68);
            FUN_1800132b0(local_d98);
            FUN_180068f30(local_db8 + 8);
            FUN_180011610(&local_dc8);
          }
          plVar26 = plVar33 + 7;
          if ((ulonglong)((plVar33[8] - *plVar26 >> 2) * -0x5555555555555555) < 2) {
            local_c28 = 0;
            uStack_c20 = 0;
            local_c18 = ZEXT816(0);
            local_c08 = _DAT_1808ad960;
            uStack_c00 = _UNK_1808ad968;
            local_bf8._8_8_ = _UNK_1808ad2b8;
            local_bf8._0_8_ = _DAT_1808ad2b0;
            local_be8 = 0xbf80000000000000;
            uStack_be0 = 0;
            local_bd8 = local_bd8 & 0xffffff0000000000;
            uStack_bd0 = 0;
            local_bc8 = 0;
            uStack_bc0 = 0;
            uStack_bbc = 0;
            uStack_bb8 = 0;
            uStack_bb4 = 0;
            uStack_bb0 = 0;
            uStack_bac = 0;
            local_ba8 = 0;
            uStack_ba4 = 0;
            uStack_ba0 = 0;
            local_b98 = local_b98 & 0xffffff00;
            uStack_b94 = 0;
            uStack_b90 = 0;
            uStack_b8c = 0;
            local_b88 = 0;
            uStack_b80 = 0;
            local_b78 = 0;
            uStack_b70 = 0;
            uStack_b6c = 0;
            local_b68 = 0;
            uStack_b64 = 0;
            uStack_b60 = 0;
            uStack_b5c = 0;
            local_b58 = 0;
            local_b50 = 0xffffffff;
            local_b4c = 0;
            uStack_b48 = 0;
            uStack_b44 = 0;
            uStack_b40 = 0;
            local_b38 = 0;
            local_b30 = local_b30 & 0xffffffff00000000;
            local_b28 = 0;
            local_b20 = local_b20 & 0xffffffff00000000;
            local_b18 = 0;
            local_b10 = 0x200003001;
            local_b08 = 0x8000100000;
            local_b00 = 0;
            local_af8 = CONCAT71(local_af8._1_7_,0x10);
            uStack_af0 = 0;
            if (((0.0 <= fVar38) && (DAT_180cf9cbc != 0)) && (DAT_180cf9cc0 != 0)) {
              local_1150 = &local_c28;
              local_1158 = &local_fb8;
              local_1160 = &local_ff8;
              local_1168 = (longlong **)CONCAT44(local_1168._4_4_,fVar74);
              cVar14 = FUN_180248770(&local_10e8,(int)plVar33[3],bVar37);
              if (cVar14 != '\0') {
                lVar27 = 2;
                puVar21 = &local_dc8;
                puVar13 = &local_c28;
                do {
                  puVar29 = puVar13;
                  puVar23 = puVar21;
                  uVar24 = puVar29[1];
                  *puVar23 = *puVar29;
                  puVar23[1] = uVar24;
                  uVar24 = puVar29[3];
                  puVar23[2] = puVar29[2];
                  puVar23[3] = uVar24;
                  uVar24 = puVar29[5];
                  puVar23[4] = puVar29[4];
                  puVar23[5] = uVar24;
                  uVar24 = puVar29[7];
                  puVar23[6] = puVar29[6];
                  puVar23[7] = uVar24;
                  uVar24 = puVar29[9];
                  puVar23[8] = puVar29[8];
                  puVar23[9] = uVar24;
                  uVar24 = puVar29[0xb];
                  puVar23[10] = puVar29[10];
                  puVar23[0xb] = uVar24;
                  uVar24 = puVar29[0xd];
                  puVar23[0xc] = puVar29[0xc];
                  puVar23[0xd] = uVar24;
                  uVar24 = puVar29[0xf];
                  puVar23[0xe] = puVar29[0xe];
                  puVar23[0xf] = uVar24;
                  lVar27 = lVar27 + -1;
                  puVar21 = puVar23 + 0x10;
                  puVar13 = puVar29 + 0x10;
                } while (lVar27 != 0);
                uVar24 = puVar29[0x11];
                puVar23[0x10] = puVar29[0x10];
                puVar23[0x11] = uVar24;
                uVar24 = puVar29[0x13];
                puVar23[0x12] = puVar29[0x12];
                puVar23[0x13] = uVar24;
                uVar24 = puVar29[0x15];
                puVar23[0x14] = puVar29[0x14];
                puVar23[0x15] = uVar24;
                uVar24 = puVar29[0x17];
                puVar23[0x16] = puVar29[0x16];
                puVar23[0x17] = uVar24;
                uVar24 = FUN_1802464e0(&local_a68,&local_dc8);
                FUN_180247990(plVar26,uVar24);
                FUN_18025deb0(&uStack_9e0);
                FUN_180042970(&local_a08);
                FUN_1800132b0(&local_a38);
                FUN_180068f30((longlong)&local_a54 + 4);
                FUN_180011610(&local_a68);
                *(undefined1 *)((longlong)plVar33 + 0x24) = 1;
                FUN_180247260(plVar33[2],&local_c28,plVar26);
                local_1038 = 0;
                local_1030 = 0.0;
                cVar14 = FUN_180248fd0(plVar26);
                if (cVar14 != '\0') {
                  fVar54 = local_1030;
                  fVar56 = (float)local_1038;
                  fVar77 = local_1038._4_4_;
                  goto LAB_180249ef1;
                }
              }
            }
LAB_180249f2a:
            local_f28 = 0;
            uStack_f20 = 0;
            local_f18 = 0;
            uStack_f10 = 0;
            local_f08 = _DAT_1808ad960;
            uStack_f00 = _UNK_1808ad968;
            local_ef8 = _DAT_1808ad2b0;
            uStack_ef0 = _UNK_1808ad2b8;
            local_ee8 = 0;
            uStack_ee4 = 0xbf800000;
            uStack_ee0 = 0;
            local_ed8 = 0;
            uStack_ed4 = 0;
            uStack_ed0 = 0;
            local_ec8 = 0;
            uStack_ec0 = 0;
            uStack_ebc = 0;
            uStack_eb4 = 0;
            uStack_eb0 = 0;
            local_ea8 = 0;
            uStack_ea0 = 0;
            local_e98 = 0;
            uStack_e94 = 0;
            uStack_e8c = 0;
            local_e88 = 0;
            uStack_e80 = 0;
            local_e78 = 0;
            uStack_e70 = 0;
            local_e68 = 0;
            uStack_e60 = 0;
            local_e58 = 0;
            local_e50 = 0xffffffff;
            local_e4c = 0;
            local_e48 = 0;
            uStack_e40 = 0;
            local_e38 = 0;
            local_e30 = 0;
            local_e28 = 0;
            local_e20 = 0;
            local_e18 = 0;
            local_e10 = 0x200003001;
            local_e08 = 0x8000100000;
            local_e00 = 0;
            local_df8 = 0x10;
            local_df0 = 0;
            local_1150 = &local_f28;
            local_1158 = &local_fb8;
            local_1160 = &local_ff8;
            local_1168 = (longlong **)CONCAT44(local_1168._4_4_,fVar74);
            cVar14 = FUN_180248770(&local_10e8,(int)plVar33[3],bVar37);
            if (cVar14 == '\0') {
              local_c28 = 0;
              uStack_c20 = 0;
              local_c18 = ZEXT816(0);
              local_c08 = 0;
              uStack_c00 = 0;
              local_be8 = 0;
              uStack_be0 = 0;
              local_bd8 = 0;
              uStack_bd0 = uStack_bd0 & 0xffffffff00000000;
              local_bc8 = 0;
              uStack_bc0 = 0;
              uStack_bbe = 0;
              uStack_bbc = 0;
              uStack_bb8 = 0;
              uStack_bb4 = 0;
              uStack_bb0 = 0x10000;
              uStack_bac = 0;
              local_ba8 = 0;
              uStack_ba4 = 0;
              uStack_ba0 = 0;
              local_b98 = 0;
              uStack_b94 = 0;
              uStack_b90 = 0;
              uStack_b8c = 0;
              uStack_b8a = 0;
              local_b88 = local_b88 & 0xffff000000000000;
              uStack_b80 = 0;
              local_b78 = 0;
              uStack_b70 = 0;
              uStack_b6c = 0;
              local_b68 = 0;
              uStack_b64 = 0;
              uStack_b60 = 0;
              uStack_b5c = 0;
              local_b58 = local_c18._4_8_;
              local_b50 = 0;
              local_b4c = 0;
              uStack_b48 = 0;
              uStack_b44 = 0;
              uStack_b40 = 0;
              local_b38 = 0;
              local_b30 = 0;
              local_b28 = 0;
              local_b20 = 0;
              local_b18 = 0x3f800000;
              local_b10 = CONCAT26((short)((ulonglong)local_b10 >> 0x30),0x10000000000);
              local_b08 = local_b08 & 0xffffff0000000000;
              local_b00 = local_b00 & 0xffff000000000000;
              local_af8 = 0;
              uStack_af0 = 0;
              local_ad8 = 0;
              uStack_ad0 = 0;
              local_ac8 = 0;
              local_ac0 = 0;
              local_ab8 = 0xffffffff;
              local_ab4 = 0;
              local_aac = 0;
              local_aa4 = 0;
              local_a9c = 0;
              puVar21 = &local_c28;
              fVar51 = (float)((uint)fVar51 | 0x7e);
              local_bf8 = local_c18;
              local_ae8 = local_c18;
            }
            else {
              lVar27 = 2;
              puVar21 = &local_dc8;
              puVar13 = &local_f28;
              do {
                puVar29 = puVar13;
                puVar23 = puVar21;
                uVar24 = puVar29[1];
                *puVar23 = *puVar29;
                puVar23[1] = uVar24;
                uVar24 = puVar29[3];
                puVar23[2] = puVar29[2];
                puVar23[3] = uVar24;
                uVar24 = puVar29[5];
                puVar23[4] = puVar29[4];
                puVar23[5] = uVar24;
                uVar24 = puVar29[7];
                puVar23[6] = puVar29[6];
                puVar23[7] = uVar24;
                uVar24 = puVar29[9];
                puVar23[8] = puVar29[8];
                puVar23[9] = uVar24;
                uVar24 = puVar29[0xb];
                puVar23[10] = puVar29[10];
                puVar23[0xb] = uVar24;
                uVar24 = puVar29[0xd];
                puVar23[0xc] = puVar29[0xc];
                puVar23[0xd] = uVar24;
                uVar24 = puVar29[0xf];
                puVar23[0xe] = puVar29[0xe];
                puVar23[0xf] = uVar24;
                lVar27 = lVar27 + -1;
                puVar21 = puVar23 + 0x10;
                puVar13 = puVar29 + 0x10;
              } while (lVar27 != 0);
              uVar24 = puVar29[0x11];
              puVar23[0x10] = puVar29[0x10];
              puVar23[0x11] = uVar24;
              uVar24 = puVar29[0x13];
              puVar23[0x12] = puVar29[0x12];
              puVar23[0x13] = uVar24;
              uVar24 = puVar29[0x15];
              puVar23[0x14] = puVar29[0x14];
              puVar23[0x15] = uVar24;
              *(undefined1 (*) [16])(puVar23 + 0x16) = *(undefined1 (*) [16])(puVar29 + 0x16);
              puVar21 = (undefined8 *)FUN_1802464e0(&local_a68,&local_dc8);
              fVar51 = (float)((uint)fVar51 | 1);
            }
            local_1104 = fVar51;
            FUN_180247990(plVar33 + 7,puVar21);
            if (((uint)fVar51 & 0x40) != 0) {
              fVar51 = (float)((uint)fVar51 & 0xffffffbf);
              local_1104 = fVar51;
              FUN_18025deb0(&uStack_ba0);
              FUN_180042970(&local_bc8);
              FUN_1800132b0(local_bf8);
              FUN_180068f30(local_c18 + 8);
              FUN_180011610(&local_c28);
            }
            if (((uint)fVar51 & 1) != 0) {
              local_1104 = (float)((uint)fVar51 & 0xfffffffe);
              FUN_18025deb0(&uStack_9e0);
              FUN_180042970(&local_a08);
              FUN_1800132b0(&local_a38);
              FUN_180068f30((longlong)&local_a54 + 4);
              FUN_180011610(&local_a68);
            }
            *(undefined1 *)((longlong)plVar33 + 0x24) = 0;
          }
          else if ((plVar33[10] == plVar33[0xb]) || (fVar74 < *(float *)(plVar33[0xb] + -4))) {
            local_1028 = 0;
            local_1020 = 0.0;
            cVar14 = FUN_180248fd0(plVar26);
            if (cVar14 != '\0') {
              fVar54 = local_1020;
              fVar56 = (float)local_1028;
              fVar77 = local_1028._4_4_;
LAB_180249ef1:
              if ((fVar77 - fVar76) * (fVar77 - fVar76) + (fVar56 - fVar75) * (fVar56 - fVar75) +
                  (fVar54 - fVar62) * (fVar54 - fVar62) <= DAT_1808acab0) goto LAB_18024a38d;
            }
            goto LAB_180249f2a;
          }
LAB_18024a38d:
          FUN_180247140(plVar33 + 7);
          if ((((int)plVar33[3] == 0x2e) && (*(char *)((longlong)plVar33 + 0xdc) != '\0')) &&
             (iVar17 = (int)plVar33[0x1c], iVar17 != (int)plVar33[0x3c])) {
            *(int *)(plVar33 + 0x3c) = iVar17;
            local_1118 = "not drawn (sim invalid)";
            if (*(char *)((longlong)plVar33 + 0xb2) != '\0') {
              local_1118 = "drawn";
            }
            local_1120 = "resynced";
            if (*(char *)((longlong)plVar33 + 0x24) != '\0') {
              local_1120 = "from launch";
            }
            local_1128 = (double)*(float *)(plVar33 + 0x2e);
            local_1130 = (double)*(float *)((longlong)plVar33 + 0x16c);
            local_1138 = (char *)(double)*(float *)(plVar33 + 0x2d);
            if (iVar17 == 1) {
              local_1140 = "air burst: nothing within 128u below, no fire";
            }
            else {
              local_1140 = "fire spawns";
              if (iVar17 == 2) {
                local_1140 = "goes out in a smoke";
              }
            }
            local_1148 = (char *)(double)*(float *)(plVar33 + 0x1e);
            local_1150 = (undefined8 *)(double)*(float *)(plVar33 + 0x1b);
            local_1158 = (float *)(double)*(float *)((longlong)plVar33 + 0xec);
            local_1160 = (undefined8 *)(double)*(float *)(plVar33 + 0x1d);
            local_1168 = (longlong **)(double)*(float *)((longlong)plVar33 + 0xe4);
            pcVar43 = "molotov";
            if (bVar37 != 0) {
              pcVar43 = "incgrenade";
            }
            FUN_1802b2840("wl_grenade.log",
                          "[grenade trajectory] thrown %s %llx | detonation at %.1f %.1f %.1f t %.2fs (fuse %.2f) | %s | fire at %.1f %.1f %.1f | sim %s, line %s"
                          ,pcVar43);
          }
          if (((int)plVar33[3] == 0x2d) && ((char)plVar33[0x33] != '\0')) {
            uVar32 = 4;
            if (*(char *)((longlong)plVar33 + 0xb2) != '\0') {
              uVar32 = 0;
            }
            uVar32 = *(uint *)((longlong)plVar33 + 0x1ac) & 3 | uVar32 | plVar33[0x34];
            if (uVar32 != plVar33[0x3d]) {
              plVar33[0x3d] = uVar32;
              lVar27 = plVar33[8];
              if (*plVar26 == lVar27) {
                fVar51 = 0.0;
                fVar75 = 0.0;
                fVar76 = 0.0;
              }
              else {
                fVar51 = *(float *)(lVar27 + -0xc);
                fVar75 = *(float *)(lVar27 + -8);
                fVar76 = *(float *)(lVar27 + -4);
              }
              if ((*(uint *)((longlong)plVar33 + 0x1ac) != 1) ||
                 (pcVar43 = "on that inferno", *(char *)((longlong)plVar33 + 0xb2) == '\0')) {
                pcVar43 = "none";
              }
              pcVar40 = "Base, white end";
              if (plVar33[0x34] != 0) {
                pcVar40 = "Hit, green end";
              }
              pcVar50 = "resynced";
              if (*(char *)((longlong)plVar33 + 0x24) != '\0') {
                pcVar50 = "from launch";
              }
              fVar62 = *(float *)(plVar33 + 0x1b);
              FUN_180246ff0(&local_a88,plVar26);
              local_1158 = (float *)(double)fVar76;
              local_1160 = (undefined8 *)(double)fVar75;
              local_1168 = (longlong **)(double)fVar51;
              local_1150 = (undefined8 *)(double)fVar62;
              local_1148 = pcVar50;
              local_1140 = pcVar40;
              local_1138 = pcVar43;
              FUN_1802b2840("wl_grenade.log",
                            "[grenade trajectory] thrown smoke %llx | in flight (NL 0x3ef5e0): %s | ends at %.1f %.1f %.1f t %.2fs | sim %s | colour %s, warning SMOKE icon %s"
                            ,plVar33[2]);
              FUN_18000f890(&local_a88);
            }
          }
          if (plVar33[0x18] == plVar33[0x19]) {
            bVar37 = local_1107;
          }
          else {
            FUN_18024c730(&local_dc8,plVar26);
            lStack_d80 = plVar33[2];
            if (DAT_180cf9c80 == 0) {
              local_d78 = (longlong *)0x0;
            }
            else {
              uVar18 = FUN_180011200((ulonglong)DAT_180cf9c80 + lStack_d80);
              puVar21 = (undefined8 *)FUN_1803a0940(local_dd0,uVar18);
              local_d78 = (longlong *)*puVar21;
            }
            bVar37 = local_1107;
            uStack_d70 = 0x30;
            if (local_1107 == 0) {
              uStack_d70 = (undefined4)plVar33[3];
            }
            if ((local_10f8 == '\0') || (local_d78 != plVar36)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((((DAT_18095d281 != '\0') && (DAT_18095d2c8 != '\0')) && (bVar3)) ||
               ((DAT_18095d0cc != '\0' && (DAT_18095d0e6 != '\0')))) {
              local_1168 = (longlong **)CONCAT71(local_1168._1_7_,local_1107);
              FUN_180251f50(&local_dc8,plVar33[8] + -0xc);
            }
            FUN_180253830(plVar33[2],(int)plVar33[3],plVar26);
            local_1168 = (longlong **)((ulonglong)local_1168 & 0xffffffffffffff00);
            FUN_180252730(&local_dc8,0);
            if ((longlong *)uStack_1048 == local_1040) {
              FUN_18025e620(&local_1050,uStack_1048,&local_dc8);
            }
            else {
              FUN_180246d00(uStack_1048,&local_dc8);
              uStack_1048 = uStack_1048 + 0x198;
            }
            FUN_18025deb0(&uStack_d40);
            FUN_180042970(&local_d68);
            FUN_1800132b0(local_d98);
            FUN_180068f30(local_db8 + 8);
            FUN_180011610(&local_dc8);
          }
          if ((local_1108 != '\0') && ((int)plVar33[3] == 0x2e)) {
            local_a56 = 0;
            local_a54 = 0;
            local_a4c = 0;
            local_a44 = 0;
            FUN_180540170(&local_a3c,0,0x300);
            local_a3c = 0;
            local_a38 = 0;
            uStack_a30 = 0;
            local_a28 = 0;
            uStack_a20 = 0;
            local_a18 = 0;
            uStack_a10 = 0;
            local_a08 = 0;
            uStack_a00 = 0;
            local_9f8 = 0;
            uStack_9f0 = 0;
            local_9e8 = 0;
            uStack_9e0 = 0;
            local_9d8 = 0;
            uStack_9d0 = 0;
            local_9c8 = 0;
            uStack_9c0 = 0;
            local_9b8 = 0;
            uStack_9b0 = 0;
            local_9a8 = 0;
            uStack_9a0 = 0;
            local_998 = 0;
            uStack_990 = 0;
            local_988 = 0;
            uStack_980 = 0;
            local_978 = 0;
            uStack_970 = 0;
            local_968 = 0;
            uStack_960 = 0;
            local_958 = 0;
            uStack_950 = 0;
            local_948 = 0;
            uStack_940 = 0;
            local_938 = 0;
            uStack_930 = 0;
            local_928 = 0;
            uStack_920 = 0;
            local_918 = 0;
            uStack_910 = 0;
            local_908 = 0;
            uStack_900 = 0;
            local_8f8 = 0;
            uStack_8f0 = 0;
            local_8e8 = 0;
            uStack_8e0 = 0;
            local_8d8 = 0;
            uStack_8d0 = 0;
            local_8c8 = 0;
            uStack_8c0 = 0;
            local_8b8 = 0;
            uStack_8b0 = 0;
            local_8a8 = 0;
            uStack_8a0 = 0;
            local_898 = 0;
            uStack_890 = 0;
            local_888 = 0;
            uStack_880 = 0;
            local_878 = 0;
            uStack_870 = 0;
            local_868 = 0;
            uStack_860 = 0;
            local_858 = 0;
            uStack_850 = 0;
            local_848 = 0;
            uStack_840 = 0;
            local_838 = 0;
            uStack_830 = 0;
            local_828 = 0;
            uStack_820 = 0;
            local_818 = 0;
            uStack_810 = 0;
            local_808 = 0;
            uStack_800 = 0;
            local_7f8 = 0;
            uStack_7f0 = 0;
            local_7e8 = 0;
            uStack_7e0 = 0;
            local_7d8 = 0;
            uStack_7d0 = 0;
            local_7c8 = 0;
            uStack_7c0 = 0;
            local_7b8 = 0;
            uStack_7b0 = 0;
            local_7a8 = 0;
            uStack_7a0 = 0;
            local_798 = 0;
            uStack_790 = 0;
            local_788 = 0;
            uStack_780 = 0;
            local_778 = 0;
            uStack_770 = 0;
            local_768 = 0;
            uStack_760 = 0;
            local_758 = 0;
            uStack_750 = 0;
            local_748 = 0;
            local_740 = 0;
            FUN_180540170(&local_73c,0,0x300);
            local_73c = 0;
            local_738 = 0;
            uStack_730 = 0;
            local_728 = ZEXT816(0);
            local_718 = 0;
            uStack_710 = 0;
            local_6f8 = 0;
            uStack_6f0 = 0;
            local_6d8 = 0;
            uStack_6d0 = 0;
            local_6b8 = 0;
            uStack_6b0 = 0;
            local_698 = 0;
            uStack_690 = 0;
            local_678 = 0;
            uStack_670 = 0;
            local_658 = 0;
            uStack_650 = 0;
            local_638 = 0;
            uStack_630 = 0;
            local_618 = 0;
            uStack_610 = 0;
            local_5f8 = 0;
            uStack_5f0 = 0;
            local_5d8 = 0;
            uStack_5d0 = 0;
            local_5b8 = 0;
            uStack_5b0 = 0;
            local_598 = 0;
            uStack_590 = 0;
            local_578 = 0;
            uStack_570 = 0;
            local_558 = 0;
            uStack_550 = 0;
            local_538 = 0;
            uStack_530 = 0;
            local_518 = 0;
            uStack_510 = 0;
            local_4f8 = 0;
            uStack_4f0 = 0;
            local_4d8 = 0;
            uStack_4d0 = 0;
            local_4b8 = 0;
            uStack_4b0 = 0;
            local_498 = 0;
            uStack_490 = 0;
            local_478 = 0;
            uStack_470 = 0;
            local_458 = 0;
            uStack_450 = 0;
            local_448 = 0;
            local_440 = 0;
            local_43c = 0;
            uStack_434 = 0;
            local_42c = 0;
            uStack_424 = 0;
            local_41c = 0;
            uStack_414 = 0;
            local_40c = 0;
            uStack_404 = 0;
            local_3fc = 0;
            local_708 = local_728;
            local_6e8 = local_728;
            local_6c8 = local_728;
            local_6a8 = local_728;
            local_688 = local_728;
            local_668 = local_728;
            local_648 = local_728;
            local_628 = local_728;
            local_608 = local_728;
            local_5e8 = local_728;
            local_5c8 = local_728;
            local_5a8 = local_728;
            local_588 = local_728;
            local_568 = local_728;
            local_548 = local_728;
            local_528 = local_728;
            local_508 = local_728;
            local_4e8 = local_728;
            local_4c8 = local_728;
            local_4a8 = local_728;
            local_488 = local_728;
            local_468 = local_728;
            FUN_180540170(local_3f8,0,0x300);
            FUN_18025b490(local_3f8);
            local_a68 = plVar33[2];
            if (DAT_180cf9c80 == 0) {
              local_a60 = 0;
            }
            else {
              FUN_180011200(local_a68 + (ulonglong)DAT_180cf9c80);
              puVar21 = (undefined8 *)FUN_1803a0940(local_dd8);
              local_a60 = *puVar21;
            }
            local_a58 = bVar37;
            if (DAT_180cf9c84 == 0) {
LAB_18024ab5c:
              local_a57 = 1;
            }
            else {
              iVar17 = FUN_180011200((ulonglong)DAT_180cf9c84 + plVar33[2]);
              local_a57 = 0;
              if (iVar17 == 0) goto LAB_18024ab5c;
            }
            lVar27 = plVar33[8];
            if (*plVar26 != lVar27) {
              local_a54 = CONCAT44(*(undefined4 *)(lVar27 + -0xc),(undefined4)local_a54);
              local_a4c = *(undefined8 *)(lVar27 + -8);
            }
            if (DAT_180cf9cb8 == 0) {
              iVar17 = -1;
            }
            else {
              iVar17 = FUN_180011200((ulonglong)DAT_180cf9cb8 + plVar33[2]);
            }
            fVar51 = local_1104;
            if (((*(char *)((longlong)plVar33 + 0xb2) == '\0') ||
                (*(char *)((longlong)plVar33 + 0x164) == '\0')) || (iVar17 < 0)) {
              if (plVar33[0x3a] != 0) {
                FUN_180240070();
              }
            }
            else {
              if (plVar33[0x3a] == 0) {
                plVar25 = (longlong *)FUN_1804ecaa0(0x1f10);
                *plVar25 = 0;
                plVar25[1] = 0;
                *(undefined4 *)(plVar25 + 1) = 1;
                *(undefined4 *)((longlong)plVar25 + 0xc) = 1;
                *plVar25 = (longlong)std::_Ref_count_obj2<grenade_fire::simulation>::vftable;
                plVar26 = plVar25 + 2;
                local_fd0 = plVar25;
                FUN_180540170(plVar26,0,0x1f00);
                FUN_18025f440(plVar26);
                local_1104 = (float)((uint)local_1104 | 0x80);
                local_1018 = plVar26;
                plStack_1010 = plVar25;
                FUN_18025bd90(plVar33 + 0x3a);
                plVar26 = plStack_1010;
                if (plStack_1010 != (longlong *)0x0) {
                  LOCK();
                  plVar25 = plStack_1010 + 1;
                  lVar27 = *plVar25;
                  *(int *)plVar25 = (int)*plVar25 + -1;
                  UNLOCK();
                  if ((int)lVar27 == 1) {
                    (**(code **)*plStack_1010)(plStack_1010);
                    LOCK();
                    piVar46 = (int *)((longlong)plVar26 + 0xc);
                    iVar28 = *piVar46;
                    *piVar46 = *piVar46 + -1;
                    UNLOCK();
                    if (iVar28 == 1) {
                      (**(code **)(*plVar26 + 8))(plVar26);
                    }
                  }
                }
              }
              iVar28 = (int)(*(float *)(plVar33 + 0x2c) * DAT_1808acab0 + DAT_1808ac1f4);
              local_10d8 = plVar33[0x2d];
              uStack_10d0 = (undefined4)plVar33[0x2e];
              uStack_10cc = (uint)*(undefined8 *)((longlong)plVar33 + 0x174);
              fStack_10c8 = (float)((ulonglong)*(undefined8 *)((longlong)plVar33 + 0x174) >> 0x20);
              fStack_10c4 = *(float *)((longlong)plVar33 + 0x17c);
              uStack_10c0 = plVar33[0x30];
              local_10b8 = *(float *)(plVar33 + 0x31);
              uStack_10b4 = (undefined4)*(undefined8 *)((longlong)plVar33 + 0x18c);
              fStack_10b0 = (float)((ulonglong)*(undefined8 *)((longlong)plVar33 + 0x18c) >> 0x20);
              uVar18 = *(undefined4 *)((longlong)plVar33 + 0x194);
              uStack_10ac = (undefined1)uVar18;
              uStack_10ab = (undefined1)((uint)uVar18 >> 8);
              uStack_10aa = (undefined2)((uint)uVar18 >> 0x10);
              local_10a8 = (uint)local_1107;
              local_10a4 = iVar28 + iVar17;
              local_10a0 = *(float *)(plVar33 + 0x2c) - (float)iVar28 * fVar68;
              lVar27 = plVar33[0x3a];
              if (DAT_180cf9ba0 == '\0') {
                DAT_180cf9ba0 = '\x01';
                hModule = GetModuleHandleA("tier0.dll");
                if (hModule != (HMODULE)0x0) {
                  DAT_180cf9ba8 =
                       GetProcAddress(hModule,
                                      "?SetSeed@?$CUniformRandomStreamImpl@VCThreadNullMutex@@@@QEAAXH@Z"
                                     );
                  DAT_180cf9bb0 =
                       GetProcAddress(hModule,
                                      "?RandomFloat@?$CUniformRandomStreamImpl@VCThreadNullMutex@@@@QEAAMMM@Z"
                                     );
                  DAT_180cf9bb8 =
                       GetProcAddress(hModule,
                                      "?RandomInt@?$CUniformRandomStreamImpl@VCThreadNullMutex@@@@QEAAHHH@Z"
                                     );
                }
              }
              if (((DAT_180cf9ba8 != (FARPROC)0x0) && (DAT_180cf9bb0 != (FARPROC)0x0)) &&
                 ((DAT_180cf9bb8 != (FARPROC)0x0 && (cVar14 = FUN_18023e000(lVar27), cVar14 != '\0')
                  ))) {
                FUN_18023ee40(lVar27);
              }
              lVar27 = plVar33[0x3a];
              piVar52 = (int *)0x0;
              iVar17 = -1;
              for (piVar46 = *(int **)(lVar27 + 0x1e90); piVar46 != *(int **)(lVar27 + 0x1e98);
                  piVar46 = piVar46 + 0x193) {
                iVar28 = 0;
                pbVar30 = (byte *)(piVar46 + 0x182);
                lVar20 = 0;
                if (piVar46 + 0x192 < pbVar30) goto LAB_18024ae90;
                iVar28 = 0;
                iVar70 = 0;
                iVar71 = 0;
                iVar72 = 0;
                auVar73 = ZEXT816(0);
                do {
                  uVar18 = *(undefined4 *)pbVar30;
                  Var4 = CONCAT91((unkuint9)0,(char)((uint)uVar18 >> 0x18));
                  auVar6[10] = 0;
                  auVar6._0_10_ = Var4;
                  auVar59[4] = (char)((uint)uVar18 >> 0x10);
                  auVar59._0_4_ = uVar18;
                  auVar59._5_11_ = auVar6 << 8;
                  auVar5[0xc] = 0;
                  auVar5._0_12_ = auVar59._4_12_;
                  auVar58._0_2_ = (ushort)uVar18;
                  auVar58[2] = (char)((uint)uVar18 >> 8);
                  auVar58._3_13_ = auVar5 << 8;
                  auVar57._2_14_ = auVar58._2_14_;
                  auVar57._0_2_ = auVar58._0_2_ & 0xff;
                  uVar61 = (ushort)Var4;
                  auVar9._10_2_ = 0;
                  auVar9._0_10_ = auVar57._0_10_;
                  auVar9._12_2_ = uVar61;
                  uVar11 = CONCAT42(auVar9._10_4_,auVar59._4_2_);
                  auVar60._0_4_ = auVar57._0_4_;
                  auVar60._4_2_ = auVar58._2_2_;
                  auVar60._6_10_ = (unkuint10)uVar11 << 0x10;
                  iVar28 = iVar28 + (auVar60._0_4_ & 0xffff & auVar12._0_4_);
                  iVar70 = iVar70 + (auVar60._4_4_ & auVar12._4_4_);
                  iVar71 = iVar71 + ((uint)uVar11 & auVar12._8_4_);
                  iVar72 = iVar72 + ((uint)uVar61 & auVar12._12_4_);
                  uVar18 = *(undefined4 *)(pbVar30 + 4);
                  Var4 = CONCAT91((unkuint9)0,(char)((uint)uVar18 >> 0x18));
                  auVar8[10] = 0;
                  auVar8._0_10_ = Var4;
                  auVar65[4] = (char)((uint)uVar18 >> 0x10);
                  auVar65._0_4_ = uVar18;
                  auVar65._5_11_ = auVar8 << 8;
                  auVar7[0xc] = 0;
                  auVar7._0_12_ = auVar65._4_12_;
                  auVar64._0_2_ = (ushort)uVar18;
                  auVar64[2] = (char)((uint)uVar18 >> 8);
                  auVar64._3_13_ = auVar7 << 8;
                  auVar63._2_14_ = auVar64._2_14_;
                  auVar63._0_2_ = auVar64._0_2_ & 0xff;
                  uVar61 = (ushort)Var4;
                  auVar10._10_2_ = 0;
                  auVar10._0_10_ = auVar63._0_10_;
                  auVar10._12_2_ = uVar61;
                  uVar11 = CONCAT42(auVar10._10_4_,auVar65._4_2_);
                  auVar66._0_4_ = auVar63._0_4_;
                  auVar66._4_2_ = auVar64._2_2_;
                  auVar66._6_10_ = (unkuint10)uVar11 << 0x10;
                  auVar67._0_4_ = (auVar66._0_4_ & 0xffff & auVar12._0_4_) + auVar73._0_4_;
                  auVar67._4_4_ = (auVar66._4_4_ & auVar12._4_4_) + auVar73._4_4_;
                  auVar67._8_4_ = ((uint)uVar11 & auVar12._8_4_) + auVar73._8_4_;
                  auVar67._12_4_ = ((uint)uVar61 & auVar12._12_4_) + auVar73._12_4_;
                  pbVar30 = pbVar30 + 8;
                  lVar20 = lVar20 + 8;
                  auVar73 = auVar67;
                } while (lVar20 != 0x40);
                iVar28 = iVar28 + auVar67._0_4_ + iVar71 + auVar67._8_4_ +
                         iVar70 + auVar67._4_4_ + iVar72 + auVar67._12_4_;
                for (; pbVar30 != (byte *)(piVar46 + 0x192); pbVar30 = pbVar30 + 1) {
LAB_18024ae90:
                  iVar28 = iVar28 + (*pbVar30 & 1);
                }
                if (iVar17 < iVar28) {
                  piVar52 = piVar46;
                  iVar17 = iVar28;
                }
              }
              if (piVar52 != (int *)0x0) {
                local_a56 = 1;
                FUN_180540530(&local_a44);
                local_a54 = CONCAT44(local_a54._4_4_,*(undefined4 *)(lVar27 + 4));
                uVar32 = 0;
                do {
                  iVar17 = (int)uVar32;
                  if (iVar17 < *(int *)(lVar27 + 4)) {
                    lVar20 = uVar32 * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  local_3f8[uVar32 * 3] = uVar45;
                  local_3f8[uVar32 * 3 + 1] = uVar44;
                  local_3f8[uVar32 * 3 + 2] = uVar18;
                  if (iVar17 + 1 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 1) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 1);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 2 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 2) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 2);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 3 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 3) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 3);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 4 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 4) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 4);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 5 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 5) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 5);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 6 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 6) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 6);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 7 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 7) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 7);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 8 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 8) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 8);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 9 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 9) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 9);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 10 < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 10) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 10);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 0xb < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 0xb) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 0xb);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 0xc < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 0xc) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 0xc);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 0xd < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 0xd) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 0xd);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 0xe < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 0xe) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 0xe);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  if (iVar17 + 0xf < *(int *)(lVar27 + 4)) {
                    lVar20 = (longlong)(iVar17 + 0xf) * 0x54;
                    uVar18 = *(undefined4 *)(lVar27 + 0x88 + lVar20);
                    uVar44 = *(undefined4 *)(lVar27 + 0x84 + lVar20);
                    uVar45 = *(undefined4 *)(lVar27 + 0x80 + lVar20);
                  }
                  else {
                    uVar18 = 0;
                    uVar44 = 0;
                    uVar45 = 0xffffffff;
                  }
                  lVar20 = (longlong)(iVar17 + 0xf);
                  local_3f8[lVar20 * 3] = uVar45;
                  local_3f8[lVar20 * 3 + 1] = uVar44;
                  local_3f8[lVar20 * 3 + 2] = uVar18;
                  uVar32 = (ulonglong)(iVar17 + 0x10U);
                } while ((int)(iVar17 + 0x10U) < 0x40);
                if (((local_10f4 != 0.0) && ((char)piVar52[0x192] == '\0')) &&
                   ((*(char *)((longlong)piVar52 + 0x649) == '\0' &&
                    (iVar17 = piVar52[1], 0 < iVar17)))) {
                  iVar28 = 0x40;
                  if (iVar17 < 0x40) {
                    iVar28 = iVar17;
                  }
                  local_fd0 = (longlong *)0x0;
                  uStack_fc8 = 0;
                  local_fc0 = 0;
                  uVar32 = 0;
                  do {
                    if (*(char *)((longlong)piVar52 + uVar32 + 0x608) == '\x01') {
                      FUN_180011250(&local_fd0);
                    }
                    uVar39 = (int)uVar32 + 1;
                    uVar32 = (ulonglong)uVar39;
                  } while ((int)uVar39 < iVar28);
                  if (DAT_180961fa8 == 0) {
LAB_18024b541:
                    fVar51 = 0.0;
                  }
                  else {
                    lVar20 = FUN_18000f3a0();
                    lVar27 = 0;
                    if (lVar20 - 0x10000U < 0x7ffffffeffff) {
                      lVar27 = lVar20;
                    }
                    if ((((lVar27 == 0) || (DAT_180cfa190 == 0)) ||
                        (0x7ffffffefffe < (lVar27 + (ulonglong)DAT_180cfa190) - 0x10000)) ||
                       (iVar17 = FUN_180011200(), iVar17 < 0)) goto LAB_18024b541;
                    fVar51 = (float)(local_10a4 - iVar17) * fVar68 + (float)*piVar52 * fVar68;
                  }
                  fVar75 = 0.0;
                  if (0.0 <= fVar51) {
                    fVar75 = fVar51;
                  }
                  local_1160 = (undefined8 *)CONCAT44(local_1160._4_4_,fVar75);
                  local_1168 = &local_fd0;
                  FUN_1802510c0(&local_fe8,local_a60,local_1107);
                  FUN_180011610(&local_fd0);
                }
              }
              fVar51 = local_1104;
            }
            if (lStack_fa0 == local_f98) {
              FUN_18025f230(&local_fa8,lStack_fa0,&local_a68);
              local_1104 = fVar51;
            }
            else {
              FUN_180540530(lStack_fa0,&local_a68,0x970);
              lStack_fa0 = lStack_fa0 + 0x970;
            }
          }
          if ((*(char *)((longlong)plVar33 + 0xb2) == '\0') ||
             (lVar27 = plVar33[8], plVar33[7] == lVar27)) {
            fVar75 = DAT_1808ac618;
          }
          else {
            if (fVar38 < 0.0) {
              fVar38 = *(float *)(plVar33 + 4);
            }
            fVar75 = *(float *)(plVar33 + 0x1b);
            local_1098 = *(undefined8 *)(lVar27 + -0xc);
            local_1090 = *(float *)(lVar27 + -4);
            if (DAT_180cf9c80 == 0) {
              local_fd0 = (longlong *)0x0;
            }
            else {
              FUN_180011200((ulonglong)DAT_180cf9c80 + plVar33[2]);
              puVar21 = (undefined8 *)FUN_1803a0940(local_de0);
              local_fd0 = (longlong *)*puVar21;
            }
            if ((((int)plVar33[3] == 0x2d) && (lVar27 = plVar33[0x34], lVar27 != 0)) &&
               (((int)plVar33[0x35] != -1 &&
                (plVar26 = (longlong *)FUN_1803a0940(local_de8), *plVar26 == lVar27)))) {
              FUN_1800242d0(&local_f90);
            }
            if ((local_10f7 != '\0') && ((int)plVar33[3] == 0x2c)) {
              FUN_1803a13a0(&local_a88);
              local_1070 = local_a88;
              if (local_a88 != local_a80) {
                do {
                  plVar26 = (longlong *)(local_1070 + 8);
                  if (*plVar26 != 0) {
                    if (DAT_180ca09f0 != 0) {
                      iVar17 = FUN_180011200(*plVar26 + (ulonglong)DAT_180ca09f0);
                      if (iVar17 - 1U < 1000) {
                        if (DAT_180cf9c78 != 0) {
                          cVar14 = FUN_180011220((ulonglong)DAT_180cf9c78 + *plVar26);
                          if (cVar14 == '\0') goto LAB_18024b89a;
                        }
                        local_10fc = 0.0;
                        FUN_18024ffd0(plVar26,&local_1098,&local_10e8);
                        plVar25 = plStack_1080;
                        fVar51 = local_10fc;
                        if (0.0 < local_10fc) {
                          local_10e8 = *plVar26;
                          if (plStack_1080 == local_1078) {
                            uVar32 = (longlong)plStack_1080 - (longlong)local_1088;
                            lVar27 = (longlong)uVar32 >> 4;
                            if (lVar27 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              FUN_1800118d0();
                            }
                            uVar48 = lVar27 + 1;
                            uVar34 = (longlong)local_1078 - (longlong)local_1088 >> 4;
                            if (0xfffffffffffffff - (uVar34 >> 1) < uVar34) {
                              uVar47 = 0xfffffffffffffff;
                            }
                            else {
                              uVar34 = (uVar34 >> 1) + uVar34;
                              uVar47 = uVar48;
                              if (uVar48 <= uVar34) {
                                uVar47 = uVar34;
                              }
                              if (0xfffffffffffffff < uVar47) {
                    /* WARNING: Subroutine does not return */
                                FUN_18000d840();
                              }
                            }
                            plVar26 = (longlong *)FUN_18000fb70(uVar47 * 0x10);
                            uVar32 = uVar32 & 0xfffffffffffffff0;
                            *(longlong *)(uVar32 + (longlong)plVar26) = local_10e8;
                            *(float *)(uVar32 + 8 + (longlong)plVar26) = fVar51;
                            if (plVar25 == plStack_1080) {
                              lVar27 = (longlong)plStack_1080 - (longlong)local_1088;
                              plVar31 = plVar26;
                              plVar25 = local_1088;
                            }
                            else {
                              FUN_180540530(plVar26,local_1088,
                                            (longlong)plVar25 - (longlong)local_1088);
                              lVar27 = (longlong)plStack_1080 - (longlong)plVar25;
                              plVar31 = (longlong *)(uVar32 + 0x10 + (longlong)plVar26);
                            }
                            FUN_180540530(plVar31,plVar25,lVar27);
                            if (local_1088 != (longlong *)0x0) {
                              uVar32 = (longlong)local_1078 - (longlong)local_1088 &
                                       0xfffffffffffffff0;
                              if (uVar32 < 0x1000) {
                                plVar25 = local_1088;
                              }
                              else {
                                if (0x1f < (ulonglong)((longlong)local_1088 + (-8 - local_1088[-1]))
                                   ) {
                                  pcVar2 = (code *)swi(0x29);
                                  (*pcVar2)(5);
                                  puVar35 = auStack_1180;
                                  goto LAB_18024bd9d;
                                }
                                uVar32 = uVar32 + 0x27;
                                plVar25 = (longlong *)local_1088[-1];
                              }
                              thunk_FUN_1803d64e0(plVar25,uVar32);
                            }
                            plStack_1080 = plVar26 + uVar48 * 2;
                            local_1078 = plVar26 + uVar47 * 2;
                            local_1088 = plVar26;
                          }
                          else {
                            *plStack_1080 = local_10e8;
                            *(float *)(plStack_1080 + 1) = local_10fc;
                            plStack_1080 = plStack_1080 + 2;
                          }
                        }
                      }
                    }
                  }
LAB_18024b89a:
                  local_1070 = local_1070 + 0x10;
                } while (local_1070 != local_a80);
              }
              FUN_1800244c0(&local_a88);
            }
            bVar37 = local_1107;
            fVar51 = 0.0;
            if (0.0 <= fVar75) {
              fVar51 = fVar75;
            }
            fVar38 = (fVar51 + fVar38) - fVar53;
            fVar51 = 0.0;
            if (0.0 <= fVar38) {
              fVar51 = fVar38;
            }
            uStack_10cc = uStack_10cc & 0xffffff00;
            local_10b8 = 0.0;
            uStack_10b4 = 100;
            fStack_10b0 = 0.0;
            uStack_10ac = 0;
            uStack_10ab = 0;
            local_10d8 = plVar33[2];
            if (local_1107 == 0) {
              uStack_10d0 = (undefined4)plVar33[3];
            }
            else {
              uStack_10d0 = 0x30;
            }
            fStack_10c8 = (float)local_1098;
            fStack_10c4 = local_1098._4_4_;
            uStack_10c0 = CONCAT44(fVar51,local_1090);
            if (local_1100 != '\0') {
              iVar17 = (int)plVar33[3];
              if (iVar17 == 0x2c) {
                local_10fc = 0.0;
                FUN_18024ffd0(&local_10e0,&local_1098,&local_10e8);
                fVar51 = local_10fc;
                local_10b8 = local_10fc;
                if ((plVar36 == (longlong *)0x0) || (DAT_180ca09f0 == 0)) {
                  uStack_10b4 = 0;
                }
                else {
                  uStack_10b4 = FUN_180011200((longlong)plVar36 + (ulonglong)DAT_180ca09f0);
                }
                uStack_10cc = CONCAT31(uStack_10cc._1_3_,fVar69 <= fVar51);
              }
              else if (iVar17 == 0x2b) {
                fStack_10b0 = (float)FUN_1802504e0(&local_10e0);
                uStack_10cc = CONCAT31(uStack_10cc._1_3_,0.0 < fStack_10b0);
              }
              else if ((iVar17 == 0x2e) &&
                      ((DAT_180cf9c78 == 0 ||
                       (cVar14 = FUN_180011220((longlong)plVar36 + (ulonglong)DAT_180cf9c78),
                       cVar14 != '\0')))) {
                plVar26 = local_fd0;
                if ((local_fd0 != (longlong *)0x0) &&
                   ((local_fd0 != plVar36 &&
                    (((DAT_1811160e8 == 0 &&
                      (DAT_1811160e8 = FUN_180264b70("mp_teammates_are_enemies"), DAT_1811160e8 == 0
                      )) || (cVar14 = FUN_180264d70(DAT_1811160e8), cVar14 == '\0')))))) {
                  if (DAT_180ca09f4 == 0) {
                    cVar14 = '\0';
                  }
                  else {
                    cVar14 = FUN_180011220((longlong)plVar26 + (ulonglong)DAT_180ca09f4);
                  }
                  if ((plVar36 == (longlong *)0x0) || (DAT_180ca09f4 == 0)) {
                    cVar15 = '\0';
                  }
                  else {
                    cVar15 = FUN_180011220((ulonglong)DAT_180ca09f4 + (longlong)plVar36);
                  }
                  if (cVar14 == cVar15) goto LAB_18024b9a3;
                }
                if (((plVar36 == (longlong *)0x0) || (DAT_180ca09f8 == 0)) ||
                   ((lVar27 = FUN_18000f3a0((longlong)plVar36 + (ulonglong)DAT_180ca09f8),
                    lVar27 == 0 || (DAT_180ca0950 == 0)))) {
                  fVar38 = 0.0;
                  fVar75 = 0.0;
                  fVar51 = 0.0;
                }
                else {
                  pfVar22 = (float *)FUN_1800111b0(local_f40);
                  fVar38 = *pfVar22;
                  fVar75 = pfVar22[1];
                  local_fd0 = *(longlong **)pfVar22;
                  fVar51 = pfVar22[2];
                }
                fVar51 = (local_1098._4_4_ - fVar75) * (local_1098._4_4_ - fVar75) +
                         ((float)local_1098 - fVar38) * ((float)local_1098 - fVar38) +
                         (local_1090 - fVar51) * (local_1090 - fVar51);
                if (fVar51 < 0.0) {
                  fVar51 = (float)FUN_18051af10();
                }
                else {
                  fVar51 = SQRT(fVar51);
                }
                fVar38 = (float)FUN_1802490c0(bVar37);
                uStack_10cc = CONCAT31(uStack_10cc._1_3_,fVar51 <= fVar38 * DAT_1808ac618);
                uStack_10ac = fVar51 <= fVar38 + fVar38;
              }
            }
LAB_18024b9a3:
            fVar75 = DAT_1808ac618;
            if ((((int)plVar33[3] - 0x2bU & 0xfffffffc) == 0) && ((int)plVar33[3] != 0x2d)) {
              if (plStack_1060 == local_1058) {
                FUN_18025eda0(&local_1068,plStack_1060,&local_10d8);
              }
              else {
                *plStack_1060 = local_10d8;
                plStack_1060[1] = CONCAT44(uStack_10cc,uStack_10d0);
                plStack_1060[2] = CONCAT44(fStack_10c4,fStack_10c8);
                plStack_1060[3] = uStack_10c0;
                plStack_1060[4] = CONCAT44(uStack_10b4,local_10b8);
                plStack_1060[5] =
                     CONCAT26(uStack_10aa,CONCAT15(uStack_10ab,CONCAT14(uStack_10ac,fStack_10b0)));
                plStack_1060 = plStack_1060 + 6;
              }
            }
          }
          cVar14 = local_1108;
          fVar51 = local_1104;
          fVar38 = DAT_1808acda0;
        }
        else {
          local_dc8 = 0;
          uStack_dc0 = 0;
          local_db8 = ZEXT816(0);
          local_da8 = 0;
          uStack_da0 = 0;
          local_d98 = ZEXT816(0);
          local_d88 = 0;
          lStack_d80 = 0;
          local_d78 = (longlong *)0x0;
          uStack_d70 = 0;
          local_d68 = 0;
          uStack_d60 = 0;
          local_d58 = 0;
          uStack_d50 = 0x10000;
          uStack_d4c = 0;
          uStack_d44 = 0;
          uStack_d40 = 0;
          local_d38 = 0;
          uStack_d30 = 0;
          local_d28 = 0;
          uStack_d24 = 0;
          uStack_d20 = 0;
          local_d18 = 0;
          uStack_d10 = 0;
          uStack_d0c = 0;
          uStack_d04 = 0;
          local_cfc = ZEXT816(0);
          local_cec = 0;
          local_ce4 = 0;
          local_ce0 = 0;
          local_cd8 = 0;
          local_cd0 = 0;
          local_cc8 = 0;
          local_cc0 = 0;
          local_cb8 = 0x3f800000;
          local_cb0 = 0;
          local_cac = 0x100;
          local_ca8 = 0;
          local_ca4 = 0;
          local_ca0 = 0;
          local_c9c = 0;
          local_c98 = 0;
          uStack_c90 = 0;
          local_c88 = ZEXT816(0);
          local_c78 = 0;
          uStack_c70 = 0;
          local_c68 = 0;
          local_c60 = 0;
          local_c58 = 0xffffffff;
          local_c54 = 0;
          local_c4c = 0;
          local_c44 = 0;
          local_c3c = 0;
          FUN_180247990(plVar33 + 7,&local_dc8);
          FUN_18025deb0(&uStack_d40);
          FUN_180042970(&local_d68);
          FUN_1800132b0(local_d98);
          FUN_180068f30(local_db8 + 8);
          FUN_180011610(&local_dc8);
        }
        plVar33 = (longlong *)*plVar33;
      } while (plVar33 != local_f78);
    }
    uVar48 = 0xffffffff;
    uVar18 = 0xffffffff;
    puVar35 = auStack_1188;
    if (DAT_180961a50 == 0) {
LAB_18024bd9d:
      uVar18 = (undefined4)uVar48;
      local_10f4 = 0.0;
    }
    else {
      lVar27 = FUN_18000f3a0();
      puVar35 = auStack_1188;
      if (lVar27 == 0) goto LAB_18024bd9d;
      local_10f4 = (float)FUN_18000f3d0(lVar27 + 0x30);
      puVar35 = auStack_1188;
    }
    cVar14 = local_1100;
    plVar33 = DAT_180cf9c08;
    plVar26 = DAT_180cf9c00;
    if (DAT_180cf9c00 != DAT_180cf9c08) {
      do {
        fVar51 = 0.0;
        uStack_10cc = uStack_10cc & 0xffffff00;
        local_10b8 = 0.0;
        uStack_10b4 = 100;
        fStack_10b0 = 0.0;
        uStack_10ac = 0;
        local_10d8 = *plVar26;
        uStack_10d0 = 0x231;
        if (*(float *)(plVar26 + 8) <= 0.0) {
          uStack_10c0._4_4_ = 0;
        }
        else {
          fVar38 = *(float *)(plVar26 + 8) - local_10f4;
          auVar55 = ZEXT812(0);
          if (0.0 <= fVar38) {
            auVar55._4_8_ = auVar55._4_8_;
            auVar55._0_4_ = fVar38;
          }
          uStack_10c0._4_4_ = auVar55._0_4_;
        }
        fStack_10c8 = *(float *)(plVar26 + 1);
        fStack_10c4 = *(float *)((longlong)plVar26 + 0xc);
        uStack_10c0 = CONCAT44(uStack_10c0._4_4_,(int)plVar26[2]);
        if (cVar14 != '\0') {
          if (DAT_180cf9c78 != 0) {
            *(undefined8 *)(puVar35 + -8) = 0x18024be4a;
            cVar15 = FUN_180011220((longlong)plVar36 + (ulonglong)DAT_180cf9c78);
            if (cVar15 == '\0') goto LAB_18024c1a3;
          }
          plVar25 = (longlong *)plVar26[7];
          if ((plVar25 != (longlong *)0x0) && (plVar25 != plVar36)) {
            if (DAT_1811160e8 == 0) {
              *(undefined8 *)(puVar35 + -8) = 0x18024be76;
              DAT_1811160e8 = FUN_180264b70("mp_teammates_are_enemies");
              if (DAT_1811160e8 != 0) goto LAB_18024be82;
            }
            else {
LAB_18024be82:
              *(undefined8 *)(puVar35 + -8) = 0x18024be8e;
              cVar15 = FUN_180264d70(DAT_1811160e8);
              if (cVar15 != '\0') goto LAB_18024bed4;
            }
            if (DAT_180ca09f4 == 0) {
              cVar15 = '\0';
            }
            else {
              *(undefined8 *)(puVar35 + -8) = 0x18024bea5;
              cVar15 = FUN_180011220((longlong)plVar25 + (ulonglong)DAT_180ca09f4);
            }
            if ((plVar36 == (longlong *)0x0) || (DAT_180ca09f4 == 0)) {
              cVar16 = '\0';
            }
            else {
              *(undefined8 *)(puVar35 + -8) = 0x18024bec5;
              cVar16 = FUN_180011220((ulonglong)DAT_180ca09f4 + (longlong)plVar36);
            }
            if (cVar15 == cVar16) goto LAB_18024c1a3;
          }
LAB_18024bed4:
          if ((plVar36 == (longlong *)0x0) || (DAT_180ca09f8 == 0)) {
LAB_18024bf1d:
            fVar38 = 0.0;
            fVar53 = 0.0;
            fVar68 = fVar51;
          }
          else {
            *(undefined8 *)(puVar35 + -8) = 0x18024beec;
            lVar27 = FUN_18000f3a0((longlong)plVar36 + (ulonglong)DAT_180ca09f8);
            if ((lVar27 == 0) || (DAT_180ca0950 == 0)) goto LAB_18024bf1d;
            *(undefined8 *)(puVar35 + -8) = 0x18024bf0b;
            pfVar22 = (float *)FUN_1800111b0(local_f40,lVar27 + (ulonglong)DAT_180ca0950);
            fVar38 = *pfVar22;
            fVar53 = pfVar22[1];
            fVar68 = pfVar22[2];
          }
          fVar53 = *(float *)((longlong)plVar26 + 0xc) - fVar53;
          fVar38 = fVar53 * fVar53 +
                   (*(float *)(plVar26 + 1) - fVar38) * (*(float *)(plVar26 + 1) - fVar38) +
                   (*(float *)(plVar26 + 2) - fVar68) * (*(float *)(plVar26 + 2) - fVar68);
          if (fVar38 < 0.0) {
            *(undefined8 *)(puVar35 + -8) = 0x18024bf74;
            fVar38 = (float)FUN_18051af10();
          }
          else {
            fVar38 = SQRT(fVar38);
          }
          lVar27 = plVar26[6];
          *(undefined8 *)(puVar35 + -8) = 0x18024bf81;
          fVar53 = (float)FUN_1802490c0((char)lVar27);
          uStack_10cc = CONCAT31(uStack_10cc._1_3_,fVar38 <= fVar53 * fVar75);
          uStack_10ac = fVar38 <= fVar53 + fVar53;
          if ((plVar36 == (longlong *)0x0) || (DAT_180ca09f8 == 0)) {
LAB_18024bfe4:
            fVar38 = 0.0;
            fVar53 = 0.0;
          }
          else {
            *(undefined8 *)(puVar35 + -8) = 0x18024bfb2;
            lVar27 = FUN_18000f3a0((longlong)plVar36 + (ulonglong)DAT_180ca09f8);
            if ((lVar27 == 0) || (DAT_180ca0950 == 0)) goto LAB_18024bfe4;
            *(undefined8 *)(puVar35 + -8) = 0x18024bfd1;
            pfVar22 = (float *)FUN_1800111b0(local_f60,lVar27 + (ulonglong)DAT_180ca0950);
            fVar38 = *pfVar22;
            fVar53 = pfVar22[1];
            fVar51 = pfVar22[2];
          }
          *(undefined8 *)(puVar35 + -8) = 0x18024c000;
          pfVar22 = (float *)FUN_180242430(local_f70,&local_10e0);
          if ((char)plVar26[6] == '\0') {
            fVar68 = DAT_1808acaa8;
          }
          else {
            fVar68 = DAT_1808aca80;
          }
          local_10fc = *(float *)(plVar26 + 1);
          local_1104 = *(float *)((longlong)plVar26 + 0xc);
          fVar69 = *(float *)(plVar26 + 2);
          local_1070 = CONCAT44(local_1070._4_4_,fVar69);
          pfVar1 = (float *)plVar26[4];
          pfVar41 = (float *)plVar26[3];
          if (pfVar41 != pfVar1) {
            local_10e8 = CONCAT44(local_10e8._4_4_,fVar68 * fVar68);
            fVar75 = DAT_1808acd08;
            fVar76 = fVar68 * fVar68;
            do {
              fVar62 = *pfVar41;
              fVar54 = *pfVar22 - fVar62;
              fVar74 = pfVar41[1];
              fVar77 = pfVar22[1] - fVar74;
              fVar69 = pfVar41[2];
              fVar56 = fVar77 * fVar77 + fVar54 * fVar54;
              if (fVar56 <= fVar76) {
                fVar76 = fVar51;
                if (fVar51 <= fVar69) {
                  fVar76 = fVar69;
                }
                fVar69 = fVar76;
                fVar76 = fVar38;
                fVar62 = fVar53;
              }
              else {
                fVar56 = fVar56 + (pfVar22[2] - fVar69) * (pfVar22[2] - fVar69);
                if (fVar56 < 0.0) {
                  *(undefined8 *)(puVar35 + -8) = 0x18024c0d7;
                  fVar56 = (float)FUN_18051af10();
                }
                else {
                  fVar56 = SQRT(fVar56);
                }
                if (fVar56 <= 0.0) {
                  fVar56 = 0.0;
                }
                else {
                  fVar56 = fVar68 / fVar56;
                }
                fVar76 = fVar56 * fVar54 + fVar62;
                fVar62 = fVar56 * fVar77 + fVar74;
              }
              fVar74 = (fVar62 - fVar53) * (fVar62 - fVar53) + (fVar76 - fVar38) * (fVar76 - fVar38)
                       + (fVar69 - fVar51) * (fVar69 - fVar51);
              if (fVar75 <= fVar74) {
                fVar69 = (float)local_1070;
              }
              else {
                local_1070 = CONCAT44(local_1070._4_4_,fVar69);
                fVar75 = fVar74;
                local_1104 = fVar62;
                local_10fc = fVar76;
              }
              pfVar41 = pfVar41 + 4;
              fVar76 = (float)local_10e8;
            } while (pfVar41 != pfVar1);
            fVar75 = DAT_1808ac618;
          }
          uStack_10c0 = CONCAT44(uStack_10c0._4_4_,fVar69);
          fStack_10c8 = local_10fc;
          fStack_10c4 = local_1104;
        }
LAB_18024c1a3:
        if (DAT_180cf9cd4 == 0) {
LAB_18024c1bb:
          lVar27 = *plVar26;
          *(undefined8 *)(puVar35 + -8) = 0x18024c1d1;
          lVar27 = thunk_FUN_1804e6f30(local_f90,lStack_f88,lVar27);
          uStack_10ab = 1;
          if (lVar27 == lStack_f88) goto LAB_18024c1de;
        }
        else {
          lVar27 = *plVar26;
          *(undefined8 *)(puVar35 + -8) = 0x18024c1b7;
          cVar15 = FUN_180011220((ulonglong)DAT_180cf9cd4 + lVar27);
          if (cVar15 == '\0') goto LAB_18024c1bb;
LAB_18024c1de:
          uStack_10ab = 0;
        }
        if (plStack_1060 == local_1058) {
          *(undefined8 *)(puVar35 + -8) = 0x18024c217;
          FUN_18025eda0(&local_1068,plStack_1060,&local_10d8);
        }
        else {
          *plStack_1060 = local_10d8;
          plStack_1060[1] = CONCAT44(uStack_10cc,uStack_10d0);
          plStack_1060[2] = CONCAT44(fStack_10c4,fStack_10c8);
          plStack_1060[3] = uStack_10c0;
          plStack_1060[4] = CONCAT44(uStack_10b4,local_10b8);
          plStack_1060[5] =
               CONCAT26(uStack_10aa,CONCAT15(uStack_10ab,CONCAT14(uStack_10ac,fStack_10b0)));
          plStack_1060 = plStack_1060 + 6;
        }
        plVar26 = plVar26 + 9;
      } while (plVar26 != plVar33);
      uVar18 = 0xffffffff;
    }
    *(undefined8 *)(puVar35 + -8) = 0x18024c23f;
    FUN_1800d1530(&local_1068,DAT_180921338);
    *(undefined8 *)(puVar35 + -8) = 0x18024c24b;
    FUN_1802406d0(&local_fa8);
    *(undefined8 *)(puVar35 + -8) = 0x18024c257;
    iVar17 = FUN_1804e4d70(&DAT_1809f2e50);
    if (iVar17 != 0) goto LAB_18024c6fa;
    if (DAT_1809f2e9c == 0x7fffffff) {
      DAT_1809f2e9c = 0x7ffffffe;
      goto LAB_18024c6ef;
    }
    if (DAT_180cf9ea0 == (longlong *)0x0) {
LAB_18024c2bf:
      DAT_180cf9ea0 = local_1088;
      DAT_180cf9ea8 = plStack_1080;
      DAT_180cf9eb0 = local_1078;
      local_1088 = (longlong *)0x0;
      plStack_1080 = (longlong *)0x0;
      plVar26 = (longlong *)0x0;
      local_1078 = (longlong *)0x0;
      *(undefined8 *)(puVar35 + -8) = 0x18024c2f2;
      FUN_1804e4e90(&DAT_1809f2e50);
      fVar51 = local_10f0[0];
      plVar36 = (longlong *)(ulonglong)(uint)local_10f0[0];
      if (((uint)local_10f0[0] & 8) != 0) {
        *(undefined8 *)(puVar35 + -8) = 0x18024c307;
        FUN_1802513d0(&local_fe8);
      }
      if (fVar51 != 0.0) {
        local_10f0[0] = 0.0;
        local_10f4 = 0.0;
        fVar38 = local_10f0[0];
        fVar53 = local_10f4;
        lVar27 = local_fe8;
        while( true ) {
          local_10f4 = fVar53;
          local_10f0[0] = fVar38;
          if (lVar27 == lStack_fe0) break;
          pfVar22 = local_10f0;
          if (*(int *)(lVar27 + 0xc) != 2) {
            pfVar22 = &local_10f4;
          }
          *pfVar22 = (float)((int)*pfVar22 + 1);
          lVar27 = lVar27 + 0x10;
          fVar38 = local_10f0[0];
          fVar53 = local_10f4;
        }
        uVar39 = ((int)fVar51 << 8 | (uint)fVar38) << 8 | (uint)fVar53;
        if (uVar39 != DAT_1809f278c) {
          DAT_1809f278c = uVar39;
          if (DAT_180961fa8 != 0) {
            *(undefined8 *)(puVar35 + -8) = 0x18024c37c;
            lVar20 = FUN_18000f3a0();
            lVar27 = 0;
            if (lVar20 - 0x10000U < 0x7ffffffeffff) {
              lVar27 = lVar20;
            }
            if (((lVar27 != 0) && (DAT_180cfa190 != 0)) &&
               ((lVar27 + (ulonglong)DAT_180cfa190) - 0x10000 < 0x7ffffffeffff)) {
              *(undefined8 *)(puVar35 + -8) = 0x18024c3bb;
              uVar18 = FUN_180011200();
            }
          }
          *(undefined4 *)(puVar35 + 0x20) = uVar18;
          *(undefined8 *)(puVar35 + -8) = 0x18024c3d7;
          FUN_1802b2560("[expected damage] fire feed | mask %x | molotov hits %d | inferno hits %d | server tick %d"
                        ,fVar51,fVar38,fVar53);
        }
      }
      *(undefined8 *)(puVar35 + -8) = 0x18024c3e3;
      iVar17 = FUN_1804e4d70(&DAT_1809f2f40);
      if (iVar17 != 0) goto LAB_18024c6fa;
      if (DAT_1809f2f8c == 0x7fffffff) {
        DAT_1809f2f8c = 0x7ffffffe;
        goto LAB_18024c6ef;
      }
      if (DAT_180cf9da8 != 0) {
        uVar32 = DAT_180cf9db8 - DAT_180cf9da8 & 0xfffffffffffffff0;
        if (uVar32 < 0x1000) {
          lVar27 = DAT_180cf9da8;
        }
        else {
          if (0x1f < (DAT_180cf9da8 - *(longlong *)(DAT_180cf9da8 + -8)) - 8U) goto LAB_18024c50e;
          uVar32 = uVar32 + 0x27;
          lVar27 = *(longlong *)(DAT_180cf9da8 + -8);
        }
        *(undefined8 *)(puVar35 + -8) = 0x18024c44b;
        thunk_FUN_1803d64e0(lVar27,uVar32);
      }
      DAT_180cf9da8 = local_fe8;
      DAT_180cf9db0 = lStack_fe0;
      DAT_180cf9db8 = local_fd8;
      local_fe8 = 0;
      lStack_fe0 = 0;
      local_fd8 = 0;
      *(undefined8 *)(puVar35 + -8) = 0x18024c487;
      FUN_1804e4e90(&DAT_1809f2f40);
      *(undefined8 *)(puVar35 + -8) = 0x18024c493;
      iVar17 = FUN_1804e4d70(&DAT_1809f30e0);
      if (iVar17 != 0) {
LAB_18024c6fa:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar35 + -8) = 0x18024c704;
        FUN_1804e4a90(5);
      }
      if (DAT_1809f312c == 0x7fffffff) {
        DAT_1809f312c = 0x7ffffffe;
LAB_18024c6ef:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar35 + -8) = &UNK_18024c6f9;
        FUN_1804e4a90(6);
      }
      plVar36 = (longlong *)0xfafafafafafafafb;
      if (DAT_180cf9d90 != 0) {
        *(undefined8 *)(puVar35 + -8) = 0x18024c4ce;
        FUN_18025c780(DAT_180cf9d90,DAT_180cf9d98);
        uVar32 = DAT_180cf9d90;
        if ((0xfff < (ulonglong)(((longlong)(DAT_180cf9da0 - DAT_180cf9d90) >> 3) * 8)) &&
           (uVar32 = *(ulonglong *)(DAT_180cf9d90 - 8), 0x1f < (DAT_180cf9d90 - uVar32) - 8))
        goto LAB_18024c50e;
        goto LAB_18024c518;
      }
    }
    else {
      uVar32 = (longlong)DAT_180cf9eb0 - (longlong)DAT_180cf9ea0 & 0xfffffffffffffff0;
      if (uVar32 < 0x1000) {
        plVar36 = DAT_180cf9ea0;
LAB_18024c2ba:
        *(undefined8 *)(puVar35 + -8) = 0x18024c2bf;
        thunk_FUN_1803d64e0(plVar36,uVar32);
        goto LAB_18024c2bf;
      }
      if ((ulonglong)((longlong)DAT_180cf9ea0 + (-8 - DAT_180cf9ea0[-1])) < 0x20) {
        uVar32 = uVar32 + 0x27;
        plVar36 = (longlong *)DAT_180cf9ea0[-1];
        goto LAB_18024c2ba;
      }
LAB_18024c50e:
      uVar32 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar35 = puVar35 + 8;
LAB_18024c518:
      *(undefined8 *)(puVar35 + -8) = 0x18024c520;
      thunk_FUN_1803d64e0(uVar32);
    }
    DAT_180cf9d90 = local_1050;
    DAT_180cf9d98 = uStack_1048;
    DAT_180cf9da0 = (ulonglong)local_1040;
    local_1050 = 0;
    uStack_1048 = 0;
    *(undefined8 *)(puVar35 + -8) = 0x18024c550;
    local_1040 = plVar26;
    FUN_1804e4e90(&DAT_1809f30e0);
    *(undefined8 *)(puVar35 + -8) = 0x18024c55a;
    FUN_1800244c0(&local_1088);
    *(undefined8 *)(puVar35 + -8) = 0x18024c567;
    FUN_1800132b0(&local_f90);
    if (local_1068 != 0) {
      lVar27 = local_1068;
      if ((0xfff < (ulonglong)(((longlong)local_1058 - local_1068 >> 4) << 4)) &&
         (lVar27 = *(longlong *)(local_1068 + -8), 0x1f < (local_1068 - lVar27) - 8U)) {
        lVar27 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar35 = puVar35 + 8;
      }
      *(undefined8 *)(puVar35 + -8) = 0x18024c5c4;
      thunk_FUN_1803d64e0(lVar27);
      local_1068 = 0;
      plStack_1060 = (longlong *)0x0;
      local_1058 = plVar26;
    }
    uVar34 = uStack_1048;
    uVar32 = local_1050;
    if (local_1050 != 0) {
      for (; uVar32 != uVar34; uVar32 = uVar32 + 0x198) {
        *(undefined8 *)(puVar35 + -8) = 0x18024c5fc;
        FUN_18025deb0(uVar32 + 0x88);
        *(undefined8 *)(puVar35 + -8) = 0x18024c605;
        FUN_180042970(uVar32 + 0x60);
        *(undefined8 *)(puVar35 + -8) = 0x18024c60e;
        FUN_1800132b0(uVar32 + 0x30);
        *(undefined8 *)(puVar35 + -8) = 0x18024c617;
        FUN_180068f30(uVar32 + 0x18);
        *(undefined8 *)(puVar35 + -8) = 0x18024c61f;
        FUN_180011610(uVar32);
      }
      uVar32 = local_1050;
      if (0xfff < (ulonglong)
                  (((longlong)((longlong)local_1040 - local_1050) >> 3) * (longlong)plVar36 * 0x198)
         ) {
        uVar32 = *(ulonglong *)(local_1050 - 8);
        uVar34 = (local_1050 - uVar32) - 8;
        if (0x1f < uVar34) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar35 = puVar35 + 8;
          uVar32 = uVar34;
        }
      }
      *(undefined8 *)(puVar35 + -8) = 0x18024c674;
      thunk_FUN_1803d64e0(uVar32);
      local_1050 = 0;
      uStack_1048 = 0;
      local_1040 = plVar26;
    }
    *(undefined8 *)(puVar35 + -8) = 0x18024c68c;
    FUN_180033d40(&local_fa8);
    if (local_fe8 == 0) goto LAB_18024942d;
    uVar32 = local_fd8 - local_fe8 & 0xfffffffffffffff0;
    lVar27 = local_fe8;
    if (0xfff < uVar32) {
      lVar27 = *(longlong *)(local_fe8 + -8);
      if ((local_fe8 - lVar27) - 8U < 0x20) {
        *(undefined8 *)(puVar35 + -8) = 0x18024c6ce;
        thunk_FUN_1803d64e0(lVar27,uVar32 + 0x27);
        goto LAB_18024942d;
      }
      goto LAB_18024c6d3;
    }
  }
  *(undefined8 *)(puVar35 + -8) = 0x18024c6e2;
  thunk_FUN_1803d64e0(lVar27);
LAB_18024942d:
  *(undefined8 *)(puVar35 + -8) = 0x18024943c;
  return;
}



/* ===== 18024c730 FUN_18024c730 ===== */

longlong * FUN_18024c730(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    lVar2 = param_2[1] - *param_2 >> 2;
    if (0x1555555555555555 < (ulonglong)(lVar2 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar2 = lVar2 * 4;
    lVar3 = FUN_18000fb70(lVar2);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar2 + lVar3;
    lVar2 = param_2[1] - *param_2;
    FUN_180540530(lVar3,*param_2,lVar2);
    param_1[1] = lVar3 + (lVar2 >> 2) * 4;
  }
  FUN_18006d740(param_1 + 3,param_2 + 3);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_2[7] - param_2[6] != 0) {
    uVar4 = param_2[7] - param_2[6] >> 3;
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar2 = uVar4 * 8;
    lVar3 = FUN_18000fb70(lVar2);
    param_1[6] = lVar3;
    param_1[7] = lVar3;
    param_1[8] = lVar3 + lVar2;
    lVar2 = param_1[6];
    uVar4 = param_2[7] - param_2[6];
    FUN_180540530(lVar2,param_2[6],uVar4);
    param_1[7] = (uVar4 & 0xfffffffffffffff8) + lVar2;
  }
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_2[0xd] - param_2[0xc] != 0) {
    lVar2 = param_2[0xd] - param_2[0xc] >> 3;
    if (0xaaaaaaaaaaaaaaa < (ulonglong)(lVar2 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_18000fb10();
    }
    lVar2 = lVar2 * 8;
    lVar3 = FUN_18000fb70(lVar2);
    param_1[0xc] = lVar3;
    param_1[0xd] = lVar3;
    param_1[0xe] = lVar3 + lVar2;
    lVar2 = param_1[0xc];
    lVar3 = param_2[0xd] - param_2[0xc];
    FUN_180540530(lVar2,param_2[0xc],lVar3);
    param_1[0xd] = lVar2 + (lVar3 >> 3) * 8;
  }
  *(char *)(param_1 + 0xf) = (char)param_2[0xf];
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x7b) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (param_2[0x12] - param_2[0x11] != 0) {
    lVar2 = param_2[0x12] - param_2[0x11] >> 2;
    if (0x71c71c71c71c71c < (ulonglong)(lVar2 * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar2 = lVar2 * 4;
    lVar3 = FUN_18000fb70(lVar2);
    param_1[0x11] = lVar3;
    param_1[0x12] = lVar3;
    param_1[0x13] = lVar3 + lVar2;
    lVar2 = param_1[0x11];
    lVar3 = param_2[0x12] - param_2[0x11];
    FUN_180540530(lVar2,param_2[0x11],lVar3);
    param_1[0x12] = lVar2 + (lVar3 >> 2) * 4;
  }
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  *(undefined1 *)((longlong)param_1 + 0xa5) = *(undefined1 *)((longlong)param_2 + 0xa5);
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(int *)(param_1 + 0x17) = (int)param_2[0x17];
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_2 + 0xbc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xd4);
  *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)((longlong)param_2 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0xd4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xdc) = *(undefined8 *)((longlong)param_2 + 0xdc);
  *(undefined8 *)((longlong)param_1 + 0xe4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)((longlong)param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x104);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 0x104) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x114);
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
  *(undefined8 *)((longlong)param_1 + 0x114) = uVar1;
  lVar2 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = lVar2;
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x134);
  *(undefined8 *)((longlong)param_1 + 300) = *(undefined8 *)((longlong)param_2 + 300);
  *(undefined8 *)((longlong)param_1 + 0x134) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined8 *)((longlong)param_1 + 0x144) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x154);
  *(undefined8 *)((longlong)param_1 + 0x14c) = *(undefined8 *)((longlong)param_2 + 0x14c);
  *(undefined8 *)((longlong)param_1 + 0x154) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(char *)(param_1 + 0x2c) = (char)param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  *(int *)(param_1 + 0x2e) = (int)param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x174);
  param_1[0x2f] = param_2[0x2f];
  *(int *)(param_1 + 0x30) = (int)param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(int *)(param_1 + 0x31) = (int)param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  *(int *)(param_1 + 0x32) = (int)param_2[0x32];
  return param_1;
}



/* ===== 18024cba0 FUN_18024cba0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18024cba0(char *param_1,char *param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (((*param_1 != '\0') && (*param_2 != '\0')) &&
     (in_RAX = (ulonglong)*(uint *)(param_2 + 4), *(uint *)(param_1 + 4) == *(uint *)(param_2 + 4)))
  {
    uVar1 = *(uint *)(param_2 + 8);
    in_RAX = (ulonglong)uVar1;
    if (*(uint *)(param_1 + 8) == uVar1) {
      if ((((float)((uint)(*(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc)) & _DAT_1808ade90)
            < DAT_1808abfbc) &&
          ((float)((uint)(*(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10)) & _DAT_1808ade90)
           < DAT_1808abfbc)) &&
         (((float)((uint)(*(float *)(param_1 + 0x14) - *(float *)(param_2 + 0x14)) & _DAT_1808ade90)
           < DAT_1808abfa0 &&
          (((*(float *)(param_1 + 0x1c) - *(float *)(param_2 + 0x1c)) *
            (*(float *)(param_1 + 0x1c) - *(float *)(param_2 + 0x1c)) +
            (*(float *)(param_1 + 0x18) - *(float *)(param_2 + 0x18)) *
            (*(float *)(param_1 + 0x18) - *(float *)(param_2 + 0x18)) +
            (*(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x20)) *
            (*(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x20)) < DAT_1808abfa0 &&
           ((*(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x28)) *
            (*(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x28)) +
            (*(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x24)) *
            (*(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x24)) +
            (*(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x2c)) *
            (*(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x2c)) < DAT_1808abfa0)))))) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 18024cca0 FUN_18024cca0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18024cca0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_fffffffffffffef8;
  double dVar10;
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar12;
  double dVar11;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar14;
  double dVar13;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar16;
  double dVar15;
  undefined2 local_a6;
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  iVar1 = param_1[3];
  if (iVar1 == param_2) {
    return;
  }
  fVar9 = 0.0;
  param_1[3] = param_2;
  if (param_2 == 1) {
    param_1[9] = param_1[9] + 1;
  }
  else if (param_2 == 2) {
    if ((DAT_180961a50 == 0) || (lVar5 = FUN_18000f3a0(), lVar5 == 0)) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)FUN_18000f3d0(lVar5 + 0x30);
    }
    fVar8 = (float)FUN_18053f0d0(fVar8 * DAT_1808acab0);
    param_1[4] = (int)fVar8;
    if ((int)param_1[5] < 0) {
      iVar3 = FUN_18043bb90();
      iVar4 = iVar3 + 1;
      if (iVar3 + 1 < DAT_1809f31d4) {
        iVar4 = DAT_1809f31d4;
      }
      param_1[5] = iVar4;
    }
    _DAT_1809f319a = local_a6;
    _DAT_1809f3198 = 0;
    _DAT_1809f319c = 0xffffffffffffffff;
    _DAT_1809f31a4 = 0;
    lRam00000001809f31ac = 0;
    _DAT_1809f31b4 = 0;
    _DAT_1809f31bc = 0;
    _DAT_1809f31c4 = 0;
    _DAT_1809f31cc = 0;
    if ((((iVar1 == 1) && (*(char *)((longlong)param_1 + 0x1e) != '\0')) &&
        (*(longlong *)(param_1 + 0x1a) != *(longlong *)(param_1 + 0x1c))) &&
       (lVar5 = *(longlong *)(param_1 + 0x3c), lVar5 != *(longlong *)(param_1 + 0x3e))) {
      _DAT_1809f3198 = 1;
      _DAT_1809f319c = CONCAT44(*param_1,param_1[4]);
      _DAT_1809f31a4 = *(undefined8 *)(param_1 + 0x11);
      lRam00000001809f31ac = (ulonglong)**(uint **)(param_1 + 0x1a) << 0x20;
      _DAT_1809f31b4 = *(undefined8 *)(*(uint **)(param_1 + 0x1a) + 1);
      _DAT_1809f31bc = *(undefined8 *)(lVar5 + 0xc);
      _DAT_1809f31c4 =
           CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x1c) + -0xc),
                    *(undefined4 *)(lVar5 + 0x14));
      _DAT_1809f31cc = *(undefined8 *)(*(longlong *)(param_1 + 0x1c) + -8);
    }
    if (DAT_180cf9c30 < 400) {
      DAT_180cf9c30 = DAT_180cf9c30 + 1;
      iVar4 = FUN_1804e4d70(&DAT_1809f3070);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f30bc == 0x7fffffff) {
        DAT_1809f30bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if ((DAT_1809f2f90 == '\0') || (DAT_1809f2fac == '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      FUN_1804e4e90(&DAT_1809f3070);
      puVar6 = &DAT_1806dfd84;
      if (DAT_1809f3198 != '\0') {
        puVar6 = &DAT_18070b3c4;
      }
      dVar15 = (double)DAT_1809f31b4;
      dVar13 = (double)DAT_1809f31b0;
      dVar11 = (double)DAT_1809f31a8;
      dVar10 = (double)DAT_1809f31a4;
      FUN_1802b2560("[grenade trajectory] handover | record %08x state %d -> 2 | frozen held path %s | ang %.2f %.2f launch %.1f %.1f %.1f vel %.1f %.1f %.1f end %.1f %.1f %.1f | launch history thrown at step 0: %d"
                    ,*param_1,iVar1,puVar6,dVar10,dVar11,dVar13,dVar15,(double)DAT_1809f31b8,
                    (double)DAT_1809f31bc,(double)DAT_1809f31c0,(double)DAT_1809f31c4,
                    (double)DAT_1809f31c8,(double)DAT_1809f31cc,(double)DAT_1809f31d0,uVar7);
      uVar7 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
      uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uVar16 = (undefined4)((ulonglong)dVar15 >> 0x20);
    }
    goto LAB_18024ccff;
  }
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = 0;
LAB_18024ccff:
  iVar4 = DAT_1809f31d4;
  uVar2 = param_1[5];
  if ((DAT_180961a50 != 0) && (lVar5 = FUN_18000f3a0(), lVar5 != 0)) {
    fVar9 = (float)FUN_18000f3d0(lVar5 + 0x30);
  }
  fVar9 = (float)FUN_18053f0d0(fVar9 * DAT_1808acab0);
  FUN_1802b2560("[grenade trajectory] record %08x (item %d) state %d -> %d | tick %d | release cmd %d | cmd %d"
                ,*param_1,param_1[2],iVar1,CONCAT44(uVar7,param_2),CONCAT44(uVar12,(int)fVar9),
                CONCAT44(uVar14,uVar2),CONCAT44(uVar16,iVar4));
  return;
}



/* ===== 18024d0f0 FUN_18024d0f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18024d0f0(longlong param_1)

{
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_208;
  *(undefined2 *)(param_1 + 0x39) = local_1e8._1_2_;
  *(undefined1 *)(param_1 + 0x3b) = local_1e8._3_1_;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  local_dc = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_58 = 0;
  local_3c = 0;
  local_34 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0x10000;
  local_13c = 0;
  local_134 = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_fc = 0;
  uStack_f4 = 0;
  local_a8 = 0x3f800000;
  local_ec = 0;
  uStack_e4 = 0;
  local_9c = 0x100;
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_2c = 0;
  FUN_180247990(param_1 + 0x68,&local_1b8);
  FUN_18025deb0(&local_130);
  FUN_180042970(&local_158);
  FUN_1800132b0(&local_188);
  FUN_180068f30(&uStack_1a0);
  FUN_180011610(&local_1b8);
  local_1d8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d0 = 0;
  FUN_18024d2d0(param_1 + 0x200,&local_1e8);
  FUN_18025bee0(&local_1e8);
  return;
}



/* ===== 18024d2d0 FUN_18024d2d0 ===== */

longlong * FUN_18024d2d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (param_1 == param_2) goto LAB_18024d377;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = lVar1;
    if ((ulonglong)((param_1[2] - lVar1 >> 4) << 4) < 0x1000) {
LAB_18024d340:
      puVar5 = puVar4;
    }
    else {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
        lVar3 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar4 = auStack_20;
        goto LAB_18024d340;
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x18024d34b;
    thunk_FUN_1803d64e0(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_18024d377:
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



/* ===== 18024d3a0 FUN_18024d3a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18024d3a0(undefined4 *param_1,char param_2)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_128 [32];
  char *local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  char *local_e0;
  char *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  uint local_b8;
  char *local_b0;
  char *local_a8;
  undefined1 local_98 [32];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_128;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  DAT_180cf9bfc = DAT_180cf9bfc + 1;
  param_1[8] = DAT_180cf9bfc;
  pcVar6 = "live view";
  fVar9 = 0.0;
  if (param_1[2] == 0x2d) {
    uVar3 = *(ulonglong *)(param_1 + 0x74);
    uVar5 = 4;
    if (*(char *)((longlong)param_1 + 0xe2) != '\0') {
      uVar5 = 0;
    }
    if ((param_1[0x77] & 3 | uVar3 | uVar5) != *(ulonglong *)(param_1 + 0xc)) {
      *(ulonglong *)(param_1 + 0xc) = param_1[0x77] & 3 | uVar3 | uVar5;
      lVar4 = *(longlong *)(param_1 + 0x1c);
      if (*(longlong *)(param_1 + 0x1a) == lVar4) {
        fVar10 = 0.0;
        fVar11 = 0.0;
        fVar12 = 0.0;
      }
      else {
        fVar10 = *(float *)(lVar4 + -0xc);
        fVar11 = *(float *)(lVar4 + -8);
        fVar12 = *(float *)(lVar4 + -4);
      }
      pcVar7 = "Base, white end";
      if (uVar3 != 0) {
        pcVar7 = "Hit, green end";
      }
      fVar1 = (float)param_1[0x42];
      local_108 = (char *)FUN_180246ff0(local_98);
      if (0xf < *(ulonglong *)((longlong)local_108 + 0x18)) {
        local_108 = *(char **)local_108;
      }
      local_f0 = (double)fVar12;
      local_f8 = (double)fVar11;
      local_100 = (double)fVar10;
      pcVar8 = "live view";
      if (param_2 != '\0') {
        pcVar8 = "look-ahead";
      }
      local_e8 = (double)fVar1;
      local_e0 = pcVar7;
      FUN_1802b2840("wl_grenade.log",
                    "[grenade trajectory] held smoke record %08x | launch %s | in flight (NL 0x3ef5e0): %s | ends at %.1f %.1f %.1f t %.2fs | colour %s"
                    ,*param_1,pcVar8);
      FUN_18000f890(local_98);
    }
  }
  if (((param_1[2] - 0x2e & 0xfffffffd) == 0) && (iVar2 = param_1[0x44], iVar2 != param_1[10])) {
    param_1[10] = iVar2;
    local_a8 = "invalid: alpha x0.35, Base colour, red end, no labels, AGR skips";
    if (*(char *)((longlong)param_1 + 0xe2) != '\0') {
      local_a8 = "valid (Hit colour when it reaches an enemy)";
    }
    local_b0 = "ground below the detonation";
    if (DAT_18095d2ca != '\0') {
      local_b0 = "fire start point";
    }
    lVar4 = *(longlong *)(param_1 + 0x1c);
    if (*(longlong *)(param_1 + 0x1a) == lVar4) {
      fVar10 = 0.0;
      fVar11 = 0.0;
    }
    else {
      fVar9 = *(float *)(lVar4 + -0xc);
      fVar10 = *(float *)(lVar4 + -8);
      fVar11 = *(float *)(lVar4 + -4);
    }
    if (iVar2 == 1) {
      local_d8 = "air burst: nothing within 128u below, no fire";
    }
    else {
      local_d8 = "fire spawns";
      if (iVar2 == 2) {
        local_d8 = "goes out in a smoke";
      }
    }
    local_c0 = (double)fVar11;
    local_c8 = (double)fVar10;
    local_d0 = (double)fVar9;
    local_e0 = (char *)(double)(float)param_1[0x48];
    local_e8 = (double)(float)param_1[0x42];
    local_f0 = (double)(float)param_1[0x47];
    local_f8 = (double)(float)param_1[0x46];
    local_100 = (double)(float)param_1[0x45];
    if (param_2 != '\0') {
      pcVar6 = "look-ahead";
    }
    pcVar7 = "molotov";
    if (param_1[2] == 0x30) {
      pcVar7 = "incgrenade";
    }
    local_b8 = (uint)(DAT_18095d2ca != '\0');
    local_108 = pcVar6;
    FUN_1802b2840("wl_grenade.log",
                  "[grenade trajectory] held %s record %08x | launch %s | detonation at %.1f %.1f %.1f t %.2fs (fuse %.2f) | %s | endpoint %.1f %.1f %.1f (precise %d: %s) | line %s"
                  ,pcVar7,*param_1);
  }
  return;
}



/* ===== 18024d6c0 FUN_18024d6c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18024d6c0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float fVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_428 [32];
  char *local_408;
  char *local_400;
  undefined8 *local_3f8;
  char local_3e8 [8];
  char local_3e0;
  undefined2 uStack_3df;
  undefined1 uStack_3dd;
  float fStack_3dc;
  float fStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  undefined1 local_398 [16];
  undefined8 local_388 [40];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined1 uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined2 uStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  undefined8 uStack_1b4;
  undefined2 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_428;
  local_3e0 = '\0';
  fStack_3dc = 0.0;
  fStack_3d8 = 0.0;
  local_238 = 0;
  uStack_230 = 0;
  uStack_3d4 = 0;
  uStack_3d0 = 0;
  uStack_3cc = 0;
  fStack_3c8 = 0.0;
  local_130 = 0x200003001;
  fStack_3c4 = 0.0;
  fStack_3c0 = 0.0;
  uStack_3bc = 0;
  uStack_3b8 = 0;
  local_128 = 0x8000100000;
  local_400 = local_3e8;
  local_228 = _DAT_1808ad960;
  uStack_220 = _UNK_1808ad968;
  local_218 = _DAT_1808ad2b0;
  uStack_210 = _UNK_1808ad2b8;
  local_408 = &local_3e0;
  local_3b4 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_208 = 0;
  uStack_204 = 0xbf800000;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1ac = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xffffffff;
  local_16c = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_120 = 0;
  local_118 = 0x10;
  local_110 = 0;
  local_3e8[0] = '\0';
  cVar7 = FUN_180255520(param_2,param_3,*(undefined4 *)(param_1 + 8),&local_248);
  if (cVar7 != '\0') {
    if (((*(char *)(param_1 + 0x1e) != '\0') &&
        (cVar7 = FUN_18024cba0(&local_3e0,param_1 + 0x38), cVar7 != '\0')) &&
       (*(char *)(param_1 + 0x218) == '\0')) {
      return;
    }
    *(ulonglong *)(param_1 + 0x38) =
         CONCAT44(fStack_3dc,CONCAT13(uStack_3dd,CONCAT21(uStack_3df,local_3e0)));
    *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_3d4,fStack_3d8);
    *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_3cc,uStack_3d0);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(fStack_3c4,fStack_3c8);
    *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_3bc,fStack_3c0);
    *(ulonglong *)(param_1 + 0x60) = CONCAT44(local_3b4,uStack_3b8);
    FUN_180263950();
    *(undefined1 *)(param_1 + 0x218) = 0;
    local_1c8 = param_1 + 0x200;
    lVar13 = 2;
    puVar5 = local_388;
    puVar6 = &local_248;
    do {
      puVar12 = puVar6;
      puVar11 = puVar5;
      uVar8 = puVar12[1];
      uVar2 = puVar12[2];
      uVar3 = puVar12[3];
      *puVar11 = *puVar12;
      puVar11[1] = uVar8;
      uVar8 = puVar12[4];
      uVar4 = puVar12[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar3;
      uVar2 = puVar12[6];
      uVar3 = puVar12[7];
      puVar11[4] = uVar8;
      puVar11[5] = uVar4;
      uVar8 = puVar12[8];
      uVar4 = puVar12[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar3;
      uVar2 = puVar12[10];
      uVar3 = puVar12[0xb];
      puVar11[8] = uVar8;
      puVar11[9] = uVar4;
      uVar8 = puVar12[0xc];
      uVar4 = puVar12[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar3;
      uVar2 = puVar12[0xe];
      uVar3 = puVar12[0xf];
      puVar11[0xc] = uVar8;
      puVar11[0xd] = uVar4;
      puVar11[0xe] = uVar2;
      puVar11[0xf] = uVar3;
      lVar13 = lVar13 + -1;
      puVar5 = puVar11 + 0x10;
      puVar6 = puVar12 + 0x10;
    } while (lVar13 != 0);
    uVar8 = puVar12[0x11];
    uVar2 = puVar12[0x12];
    uVar3 = puVar12[0x13];
    puVar11[0x10] = puVar12[0x10];
    puVar11[0x11] = uVar8;
    uVar8 = puVar12[0x14];
    uVar4 = puVar12[0x15];
    puVar11[0x12] = uVar2;
    puVar11[0x13] = uVar3;
    uVar2 = puVar12[0x16];
    uVar3 = puVar12[0x17];
    puVar11[0x14] = uVar8;
    puVar11[0x15] = uVar4;
    puVar11[0x16] = uVar2;
    puVar11[0x17] = uVar3;
    uVar8 = FUN_1802464e0(&local_248,local_388);
    FUN_180247990(param_1 + 0x68,uVar8);
    FUN_18025deb0(&uStack_1c0);
    FUN_180042970(&local_1e8);
    FUN_1800132b0(&local_218);
    FUN_180068f30(&uStack_230);
    FUN_180011610(&local_248);
    FUN_18024d3a0(param_1,1);
    return;
  }
  if (local_3e8[0] == '\0') {
    local_3e0 = '\0';
    fStack_3dc = 0.0;
    fStack_3d8 = 0.0;
    uStack_3d4 = 0;
    uStack_3d0 = 0;
    uStack_3cc = 0;
    fStack_3c8 = 0.0;
    local_3b4 = 0;
    fStack_3c4 = 0.0;
    fStack_3c0 = 0.0;
    uStack_3bc = 0;
    uStack_3b8 = 0;
    local_3e0 = FUN_1802425e0(param_2,&uStack_3d4,&uStack_3d0);
    if ((DAT_180961a50 == 0) || (lVar13 = FUN_18000f3a0(), lVar13 == 0)) {
      auVar15 = ZEXT816(0);
    }
    else {
      auVar15._0_8_ = FUN_18000f3d0(lVar13 + 0x30);
      auVar15._8_8_ = extraout_XMM0_Qb;
    }
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = auVar15._0_4_ * DAT_1808acab0;
    fVar14 = (float)FUN_18053f0d0(auVar16._0_8_);
    fStack_3dc = (float)(int)fVar14;
    fStack_3d8 = *(float *)(param_1 + 8);
    uStack_3cc = FUN_1802428c0(param_3);
    if (((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
       ((lVar13 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar13 == 0 ||
        (DAT_180ca0950 == 0)))) {
      fStack_3c8 = 0.0;
      fStack_3c4 = 0.0;
      fStack_3c0 = 0.0;
    }
    else {
      pfVar9 = (float *)FUN_1800111b0(&local_3a8,lVar13 + (ulonglong)DAT_180ca0950);
      fStack_3c8 = *pfVar9;
      fStack_3c4 = pfVar9[1];
      fStack_3c0 = pfVar9[2];
    }
    if (((*(char *)(param_1 + 0x1e) != '\0') &&
        (cVar7 = FUN_18024cba0(&local_3e0,param_1 + 0x38), cVar7 != '\0')) &&
       (*(char *)(param_1 + 0x218) == '\0')) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 8);
    *(ulonglong *)(param_1 + 0x38) =
         CONCAT44(fStack_3dc,CONCAT13(uStack_3dd,CONCAT21(uStack_3df,local_3e0)));
    *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_3d4,fStack_3d8);
    local_3ac = 0;
    local_3b0 = 0;
    *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_3cc,uStack_3d0);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(fStack_3c4,fStack_3c8);
    *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_3bc,fStack_3c0);
    *(ulonglong *)(param_1 + 0x60) = CONCAT44(local_3b4,uStack_3b8);
    cVar7 = FUN_1802425e0(param_2,&local_3ac,&local_3b0);
    if (cVar7 != '\0') {
      FUN_1803a0780(param_2,&local_3a8);
      if (DAT_180ca0a34 == 0) {
        fVar14 = local_3a8;
        fVar17 = local_3a4;
        fVar18 = local_3a0;
      }
      else {
        pfVar9 = (float *)FUN_1800111b0(local_398,(ulonglong)DAT_180ca0a34 + *param_2);
        fVar14 = local_3a8 + *pfVar9;
        fVar17 = local_3a4 + pfVar9[1];
        fVar18 = local_3a0 + pfVar9[2];
      }
      if ((*param_2 == 0) || (DAT_180ca0a1c == 0)) {
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
      }
      else {
        puVar10 = (undefined4 *)FUN_1800111b0(local_398,*param_2 + (ulonglong)DAT_180ca0a1c);
        uVar19 = *puVar10;
        uVar20 = puVar10[1];
        uVar21 = puVar10[2];
      }
      if ((DAT_180961a50 != 0) && (lVar13 = FUN_18000f3a0(), lVar13 != 0)) {
        FUN_18000f3d0(lVar13 + 0x30);
      }
      local_3e0 = SUB41(fVar14,0);
      uStack_3df = (undefined2)((uint)fVar14 >> 8);
      uStack_3dd = (undefined1)((uint)fVar14 >> 0x18);
      fStack_3dc = fVar17;
      fStack_3d8 = fVar18;
      uStack_3d4 = uVar19;
      uStack_3d0 = uVar20;
      uStack_3cc = uVar21;
      fVar14 = (float)FUN_18053f0d0();
      local_3f8 = &local_248;
      local_400 = &local_3e0;
      fStack_3c8 = fVar14 * DAT_1808ac00c + DAT_1808ac0c0;
      local_408 = (char *)CONCAT44(local_408._4_4_,local_3b0);
      cVar7 = FUN_1802433b0(param_2,param_3,uVar1,local_3ac);
      if (cVar7 != '\0') {
        FUN_180263950();
        *(undefined1 *)(param_1 + 0x218) = 0;
        local_1c8 = param_1 + 0x200;
        lVar13 = 2;
        puVar5 = local_388;
        puVar6 = &local_248;
        do {
          puVar12 = puVar6;
          puVar11 = puVar5;
          uVar8 = puVar12[1];
          uVar2 = puVar12[2];
          uVar3 = puVar12[3];
          *puVar11 = *puVar12;
          puVar11[1] = uVar8;
          uVar8 = puVar12[4];
          uVar4 = puVar12[5];
          puVar11[2] = uVar2;
          puVar11[3] = uVar3;
          uVar2 = puVar12[6];
          uVar3 = puVar12[7];
          puVar11[4] = uVar8;
          puVar11[5] = uVar4;
          uVar8 = puVar12[8];
          uVar4 = puVar12[9];
          puVar11[6] = uVar2;
          puVar11[7] = uVar3;
          uVar2 = puVar12[10];
          uVar3 = puVar12[0xb];
          puVar11[8] = uVar8;
          puVar11[9] = uVar4;
          uVar8 = puVar12[0xc];
          uVar4 = puVar12[0xd];
          puVar11[10] = uVar2;
          puVar11[0xb] = uVar3;
          uVar2 = puVar12[0xe];
          uVar3 = puVar12[0xf];
          puVar11[0xc] = uVar8;
          puVar11[0xd] = uVar4;
          puVar11[0xe] = uVar2;
          puVar11[0xf] = uVar3;
          lVar13 = lVar13 + -1;
          puVar5 = puVar11 + 0x10;
          puVar6 = puVar12 + 0x10;
        } while (lVar13 != 0);
        uVar8 = puVar12[0x11];
        uVar2 = puVar12[0x12];
        uVar3 = puVar12[0x13];
        puVar11[0x10] = puVar12[0x10];
        puVar11[0x11] = uVar8;
        uVar8 = puVar12[0x14];
        uVar4 = puVar12[0x15];
        puVar11[0x12] = uVar2;
        puVar11[0x13] = uVar3;
        uVar2 = puVar12[0x16];
        uVar3 = puVar12[0x17];
        puVar11[0x14] = uVar8;
        puVar11[0x15] = uVar4;
        puVar11[0x16] = uVar2;
        puVar11[0x17] = uVar3;
        uVar8 = FUN_1802464e0(&local_248,local_388);
        FUN_180247990(param_1 + 0x68,uVar8);
        FUN_18025deb0(&uStack_1c0);
        FUN_180042970(&local_1e8);
        FUN_1800132b0(&local_218);
        FUN_180068f30(&uStack_230);
        FUN_180011610(&local_248);
        FUN_18024d3a0(param_1,0);
        return;
      }
    }
  }
  FUN_18024d0f0(param_1);
  return;
}



/* ===== 18024de20 FUN_18024de20 ===== */

void FUN_18024de20(undefined4 *param_1,longlong *param_2,char param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  char *_Str1;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  float fVar9;
  longlong local_res8 [4];
  
  plVar5 = (longlong *)FUN_1803a0940(local_res8,*param_1);
  lVar1 = *plVar5;
  if ((lVar1 == 0) || (param_1[3] == 2)) {
    plVar5 = (longlong *)FUN_1803a0940(local_res8,param_1[1]);
    lVar6 = *plVar5;
    if (lVar6 == 0) goto LAB_18024deaf;
  }
  else {
    if (DAT_180cf9cb0 == 0) goto LAB_18024deaf;
    uVar3 = FUN_180011200(lVar1 + (ulonglong)DAT_180cf9cb0);
    plVar5 = (longlong *)FUN_1803a0940(local_res8,uVar3);
    lVar6 = *plVar5;
    if (((lVar6 == 0) ||
        (local_res8[0] = lVar6, _Str1 = (char *)FUN_1803a0710(local_res8), _Str1 == (char *)0x0)) ||
       (iVar4 = strcmp(_Str1,"C_CSPlayerPawn"), iVar4 != 0)) goto LAB_18024deaf;
  }
  if (*param_2 != 0) {
    if (DAT_180cf9cd4 == 0) {
      if ((DAT_180ca09f0 == 0) ||
         (iVar4 = FUN_180011200(lVar6 + (ulonglong)DAT_180ca09f0), 999 < iVar4 - 1U)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
    }
    else {
      cVar2 = FUN_180011220(lVar6 + (ulonglong)DAT_180cf9cd4);
      bVar7 = cVar2 == '\0';
    }
    if (((bVar7) && (lVar6 == *param_2)) && (param_3 != '\0')) {
      if (param_1[3] == 2) {
        if (param_4 != '\0') {
          return;
        }
      }
      else if (lVar1 != 0) {
        lVar6 = FUN_1803a08e0(param_2);
        if (DAT_180cf9c48 == 0) {
          fVar9 = 0.0;
        }
        else {
          fVar9 = (float)FUN_18000f3d0((ulonglong)DAT_180cf9c48 + lVar1);
        }
        if ((DAT_180cf9c4c == 0) ||
           (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180cf9c4c), cVar2 == '\0')) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((((DAT_180cf9c50 == 0) ||
             (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180cf9c50), cVar2 == '\0')) &&
            (fVar9 == 0.0)) && ((bVar7 || (-1 < (int)param_1[5])))) {
          uVar8 = 0;
          if (param_1[3] == 1) {
            uVar8 = 2;
          }
        }
        else {
          uVar8 = lVar6 == lVar1;
        }
        FUN_18024cca0(param_1,uVar8);
        return;
      }
    }
  }
LAB_18024deaf:
  FUN_18024cca0(param_1,0);
  return;
}



/* ===== 18024e010 FUN_18024e010 ===== */

undefined8 FUN_18024e010(undefined4 *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 local_res8 [8];
  
  if ((param_1[3] == 2) && (*(char *)((longlong)param_1 + 0x1e) != '\0')) {
    return 1;
  }
  plVar3 = (longlong *)FUN_1803a0940(local_res8,*param_1);
  lVar1 = *plVar3;
  if ((lVar1 != 0) && (param_1[3] == 1)) {
    if (-1 < (int)param_1[5]) {
      return 1;
    }
    if ((DAT_180cf9c44 != 0) &&
       (cVar2 = FUN_180011220(lVar1 + (ulonglong)DAT_180cf9c44), cVar2 != '\0')) {
      return 1;
    }
    if ((DAT_180cf9c48 != 0) &&
       (fVar4 = (float)FUN_18000f3d0(lVar1 + (ulonglong)DAT_180cf9c48), 0.0 < fVar4)) {
      return 1;
    }
  }
  return 0;
}



/* ===== 18024e0a0 FUN_18024e0a0 ===== */

void FUN_18024e0a0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  char *pcVar14;
  undefined4 extraout_XMM0_Da;
  float fVar15;
  longlong local_res18;
  undefined4 local_res20;
  undefined4 local_68 [2];
  longlong local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  
  if ((((DAT_180cf9c80 != 0) && (*param_2 != 0)) &&
      (iVar9 = FUN_180011200(param_1 + (ulonglong)DAT_180cf9c80), iVar9 != -1)) &&
     (plVar11 = (longlong *)FUN_1803a0940(&local_res18,iVar9), *plVar11 == *param_2)) {
    local_res18 = param_1;
    uVar12 = FUN_1803a0710(&local_res18);
    iVar10 = FUN_180247d80(uVar12);
    fVar15 = DAT_1808acab0;
    puVar4 = DAT_180cf9dc0;
    puVar5 = DAT_180cf9dc8;
    if (iVar10 == 0x2e) {
      if ((DAT_180cf9cb4 != 0) &&
         (cVar8 = FUN_180011220((ulonglong)DAT_180cf9cb4 + param_1), fVar15 = DAT_1808acab0,
         puVar4 = DAT_180cf9dc0, puVar5 = DAT_180cf9dc8, cVar8 != '\0')) {
        iVar10 = 0x30;
      }
    }
    else if (iVar10 == 0) {
      return;
    }
    for (; puVar7 = DAT_180cf9dc8, fVar6 = DAT_1808acab0, bVar3 = puVar4 != DAT_180cf9dc8,
        DAT_1808acab0 = fVar15, DAT_180cf9dc8 = puVar5, bVar3; puVar4 = puVar4 + 0x88) {
      if (((puVar4[1] == iVar9) && (puVar4[2] == iVar10)) &&
         (cVar8 = FUN_18024e010(puVar4), cVar8 != '\0')) {
        local_68[0] = *puVar4;
        local_50 = puVar4[9];
        local_60 = param_1;
        local_58 = iVar9;
        local_54 = iVar10;
        FUN_18025c2a0(extraout_XMM0_Da,local_68);
        cVar8 = *(char *)((longlong)puVar4 + 0x1e);
        uVar1 = puVar4[4];
        uVar2 = puVar4[9];
        local_res18 = CONCAT44(local_res18._4_4_,puVar4[3]);
        local_res20 = *puVar4;
        if ((DAT_180961a50 == 0) || (lVar13 = FUN_18000f3a0(), lVar13 == 0)) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = (float)FUN_18000f3d0(lVar13 + 0x30);
        }
        fVar15 = (float)FUN_18053f0d0(fVar15 * fVar6);
        switch(iVar10) {
        case 0x2b:
          pcVar14 = "flashbang";
          break;
        case 0x2c:
          pcVar14 = "hegrenade";
          break;
        case 0x2d:
          pcVar14 = "smoke";
          break;
        case 0x2e:
          pcVar14 = "molotov";
          break;
        case 0x2f:
          pcVar14 = "decoy";
          break;
        case 0x30:
          pcVar14 = "incgrenade";
          break;
        default:
          pcVar14 = "?";
        }
        FUN_1802b2840("wl_grenade.log",
                      "[grenade trajectory] handover key | own projectile %llx (%s) appeared at tick %d | held record %08x state %d count %d sim %d | released at tick %d"
                      ,param_1,pcVar14,(int)fVar15,local_res20,(undefined4)local_res18,uVar2,
                      cVar8 != '\0',uVar1);
      }
      fVar15 = DAT_1808acab0;
      puVar5 = DAT_180cf9dc8;
      DAT_180cf9dc8 = puVar7;
      DAT_1808acab0 = fVar6;
    }
  }
  return;
}



/* ===== 18024e340 FUN_18024e340 ===== */

byte FUN_18024e340(int *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  float fVar8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  undefined1 local_28 [16];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (DAT_180cf9dc0 != DAT_180cf9dc8) {
    piVar5 = DAT_180cf9dc0;
    do {
      if (*piVar5 == *param_1) break;
      piVar5 = piVar5 + 0x88;
    } while (piVar5 != DAT_180cf9dc8);
    if (piVar5 != DAT_180cf9dc8) {
      if (piVar5[9] != param_1[6]) {
        FUN_1802b2840("wl_grenade.log",
                      "[grenade trajectory] handover key dropped | projectile %llx | record %08x was held again (count %d, key %d)"
                      ,*(undefined8 *)(param_1 + 2),*piVar5,CONCAT44(uVar9,piVar5[9]),param_1[6]);
        return 1;
      }
      FUN_18024de20(piVar5);
      if ((((piVar5[3] != 2) || (*(char *)((longlong)piVar5 + 0x1e) == '\0')) ||
          (piVar5[1] != param_1[4])) || (piVar5[2] != param_1[5])) {
        bVar1 = FUN_18024e010();
        if (bVar1 == 0) {
          FUN_1802b2840("wl_grenade.log",
                        "[grenade trajectory] handover key dropped | projectile %llx | record %08x state %d sim %d no longer pending"
                        ,*(undefined8 *)(param_1 + 2),*piVar5,CONCAT44(uVar9,piVar5[3]),
                        *(char *)((longlong)piVar5 + 0x1e) != '\0');
        }
        return bVar1 ^ 1;
      }
      iVar4 = piVar5[4];
      FUN_18024cca0(piVar5,0);
      FUN_18024d0f0(piVar5);
      lVar2 = thunk_FUN_1804e6f30(DAT_180cf9e88,DAT_180cf9e90,*(undefined8 *)(param_1 + 2));
      lVar3 = DAT_180cf9e90;
      if (lVar2 != DAT_180cf9e90) {
        FUN_18025c4d0(&DAT_180ca1180,local_28,param_1 + 2);
      }
      pcVar6 = ", projectile already gone";
      if (lVar2 != lVar3) {
        pcVar6 = ", its line shown at once (no creation fade)";
      }
      if (iVar4 < 0) {
        iVar4 = -1;
      }
      else {
        if ((DAT_180961a50 == 0) || (lVar3 = FUN_18000f3a0(), lVar3 == 0)) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = (float)FUN_18000f3d0(lVar3 + 0x30);
        }
        fVar8 = (float)FUN_18053f0d0(fVar8 * DAT_1808acab0);
        iVar4 = (int)fVar8 - iVar4;
      }
      switch(piVar5[2]) {
      case 0x2b:
        pcVar7 = "flashbang";
        break;
      case 0x2c:
        pcVar7 = "hegrenade";
        break;
      case 0x2d:
        pcVar7 = "smoke";
        break;
      case 0x2e:
        pcVar7 = "molotov";
        break;
      case 0x2f:
        pcVar7 = "decoy";
        break;
      case 0x30:
        pcVar7 = "incgrenade";
        break;
      default:
        pcVar7 = "?";
      }
      FUN_1802b2840("wl_grenade.log",
                    "[grenade trajectory] held line reset | record %08x (%s) state 2 -> 0, frozen path freed | own projectile %llx took over %d ticks after the release%s"
                    ,*piVar5,pcVar7,*(undefined8 *)(param_1 + 2),iVar4,pcVar6);
      return 1;
    }
  }
  FUN_1802b2840("wl_grenade.log",
                "[grenade trajectory] handover key dropped | projectile %llx | held record %08x is gone"
                ,*(undefined8 *)(param_1 + 2),*param_1);
  return 1;
}



/* ===== 18024e5d0 FUN_18024e5d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18024e5d0(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulonglong *puVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong local_res20;
  undefined1 local_98 [16];
  undefined4 local_88 [2];
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  
  if (DAT_180ccf89b == '\0') {
    FUN_18025ba80(&DAT_180ca11c0);
    DAT_180962435 = 1;
    FUN_18025ba80(&DAT_180ca1180);
  }
  else {
    FUN_18025bb30(local_88);
    puVar10 = DAT_180cf9e90;
    plVar21 = DAT_180ca1188;
    for (puVar14 = DAT_180cf9e88; DAT_180ca1188 = plVar21, puVar14 != puVar10; puVar14 = puVar14 + 1
        ) {
      local_res20 = *puVar14;
      FUN_18025c4d0(local_88,local_98,&local_res20);
      if (DAT_180962435 == '\0') {
        uVar13 = ((((((((local_res20 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       local_res20 >> 8 & 0xff) * 0x100000001b3 ^ local_res20 >> 0x10 & 0xff) *
                      0x100000001b3 ^ local_res20 >> 0x18 & 0xff) * 0x100000001b3 ^
                    local_res20 >> 0x20 & 0xff) * 0x100000001b3 ^ local_res20 >> 0x28 & 0xff) *
                   0x100000001b3 ^ local_res20 >> 0x30 & 0xff) * 0x100000001b3 ^ local_res20 >> 0x38
                 ) * 0x100000001b3 & DAT_180ca11f0;
        lVar17 = *(longlong *)(DAT_180ca11d8 + 8 + uVar13 * 0x10);
        if (lVar17 == DAT_180ca11c8) {
LAB_18024e712:
          lVar17 = 0;
        }
        else {
          uVar1 = *(ulonglong *)(lVar17 + 0x10);
          while (local_res20 != uVar1) {
            if (lVar17 == *(longlong *)(DAT_180ca11d8 + uVar13 * 0x10)) goto LAB_18024e712;
            lVar17 = *(longlong *)(lVar17 + 8);
            uVar1 = *(ulonglong *)(lVar17 + 0x10);
          }
        }
        if (lVar17 == 0) {
          FUN_18024e0a0(local_res20,param_1);
        }
      }
      plVar21 = DAT_180ca1188;
    }
    plVar18 = (longlong *)*plVar21;
    if (plVar18 != plVar21) {
      do {
        plVar20 = plVar21;
        lVar12 = FUN_18025b9b0(local_88,plVar18 + 2);
        lVar17 = DAT_180ca1198;
        if (lVar12 == 0) {
          uVar13 = (((((((((ulonglong)*(byte *)(plVar18 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar18 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar18 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar18 + 0x13)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar18 + 0x14)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar18 + 0x15)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar18 + 0x16)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar18 + 0x17)) * 0x100000001b3 & _DAT_180ca11b0;
          plVar20 = *(longlong **)(DAT_180ca1198 + uVar13 * 0x10);
          if (*(longlong **)(DAT_180ca1198 + 8 + uVar13 * 0x10) == plVar18) {
            if (plVar20 == plVar18) {
              *(longlong **)(DAT_180ca1198 + uVar13 * 0x10) = plVar21;
              *(longlong **)(lVar17 + 8 + uVar13 * 0x10) = plVar21;
            }
            else {
              *(longlong *)(DAT_180ca1198 + 8 + uVar13 * 0x10) = plVar18[1];
            }
          }
          else if (plVar20 == plVar18) {
            *(longlong *)(DAT_180ca1198 + uVar13 * 0x10) = *plVar18;
          }
          plVar19 = (longlong *)*plVar18;
          _DAT_180ca1190 = _DAT_180ca1190 + -1;
          *(longlong **)plVar18[1] = plVar19;
          plVar19[1] = plVar18[1];
          thunk_FUN_1803d64e0(plVar18,0x18);
          plVar21 = DAT_180ca1188;
        }
        else {
          plVar19 = (longlong *)*plVar18;
          plVar21 = plVar20;
        }
        plVar18 = plVar19;
      } while (plVar19 != plVar21);
    }
    FUN_18025ba80(&DAT_180ca11c0);
    uVar8 = DAT_180ca11f8;
    uVar13 = DAT_180ca11f0;
    uVar7 = DAT_180ca11e8;
    uVar6 = DAT_180ca11e0;
    lVar12 = DAT_180ca11d8;
    uVar5 = DAT_180ca11d0;
    lVar17 = DAT_180ca11c8;
    _DAT_180ca11c0 = local_88[0];
    DAT_180ca11c8 = local_80;
    local_80 = lVar17;
    DAT_180ca11d0 = local_78;
    local_78 = uVar5;
    DAT_180ca11d8 = local_70;
    local_70 = lVar12;
    DAT_180ca11e0 = local_68;
    local_68 = uVar6;
    DAT_180ca11e8 = local_60;
    local_60 = uVar7;
    DAT_180ca11f0 = local_58;
    local_58 = uVar13;
    DAT_180ca11f8 = local_50;
    local_50 = uVar8;
    DAT_180962435 = 0;
    FUN_1800132b0(&local_70);
    FUN_18025b950(&local_80);
  }
  puVar9 = DAT_180cf9e78;
  puVar15 = DAT_180cf9e70;
  if (DAT_180cf9e70 != DAT_180cf9e78) {
    do {
      cVar11 = FUN_18024e340(puVar15,param_1,param_2,param_3);
      if (cVar11 != '\0') break;
      puVar15 = puVar15 + 8;
    } while (puVar15 != puVar9);
    if (puVar15 != puVar9) {
      puVar16 = puVar15 + 8;
      if (puVar16 != puVar9) {
        do {
          cVar11 = FUN_18024e340(puVar16,param_1,param_2,param_3);
          if (cVar11 == '\0') {
            uVar2 = puVar16[1];
            uVar3 = puVar16[2];
            uVar4 = puVar16[3];
            *puVar15 = *puVar16;
            puVar15[1] = uVar2;
            puVar15[2] = uVar3;
            puVar15[3] = uVar4;
            uVar5 = *(undefined8 *)(puVar16 + 6);
            *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar16 + 4);
            *(undefined8 *)(puVar15 + 6) = uVar5;
            puVar15 = puVar15 + 8;
          }
          puVar16 = puVar16 + 8;
        } while (puVar16 != puVar9);
        if (puVar15 == puVar9) {
          return;
        }
      }
      lVar17 = (longlong)DAT_180cf9e78 - (longlong)puVar9;
      FUN_180540530(puVar15,puVar9,lVar17);
      DAT_180cf9e78 = (undefined4 *)((longlong)puVar15 + lVar17);
    }
  }
  return;
}



/* ===== 18024e9d0 FUN_18024e9d0 ===== */

void FUN_18024e9d0(undefined4 *param_1,longlong *param_2,char param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  float fVar10;
  longlong local_res8;
  
  FUN_18024de20();
  if (param_1[3] == 2) {
    if ((DAT_180961a50 == 0) || (lVar4 = FUN_18000f3a0(), lVar4 == 0)) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (float)FUN_18000f3d0(lVar4 + 0x30);
    }
    fVar10 = (float)FUN_18053f0d0(fVar10 * DAT_1808acab0);
    if (((int)fVar10 < (int)param_1[4]) || (0x3f < (int)fVar10 - param_1[4])) {
      FUN_18024cca0(param_1,0);
    }
  }
  plVar5 = (longlong *)FUN_1803a0940(&local_res8,*param_1);
  lVar4 = *plVar5;
  if (param_1[3] != 2) goto LAB_18024eafb;
  if ((int)param_1[6] < (int)param_1[5]) {
    return;
  }
  if ((int)param_1[5] < 0) {
    return;
  }
  if (*(char *)(param_1 + 7) == '\0') {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x1d) == '\0') {
    return;
  }
  FUN_1803a0940(&local_res8,param_1[1]);
  if ((((local_res8 == 0) || (DAT_180ca0a0c == 0)) ||
      (uVar8 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)) ||
     (lVar6 = FUN_18000f3a0((ulonglong)DAT_180ca0a0c + local_res8), lVar6 == 0)) {
LAB_18024eaf1:
    uVar7 = 0;
  }
  else {
    uVar2 = FUN_180011200(lVar6 + uVar8);
    plVar5 = (longlong *)FUN_1803a0940(&local_res8,uVar2);
    if (*plVar5 != lVar4) goto LAB_18024eaf1;
    uVar7 = 1;
  }
  FUN_18024cca0(param_1,uVar7);
LAB_18024eafb:
  if (((param_1[3] != 0) && (param_3 != '\0')) &&
     ((param_4 != '\0' && ((lVar4 != 0 && (lVar6 = *param_2, lVar6 != 0)))))) {
    if (DAT_180cf9cd4 == 0) {
      if ((DAT_180ca09f0 == 0) ||
         (iVar3 = FUN_180011200((ulonglong)DAT_180ca09f0 + lVar6), 999 < iVar3 - 1U)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    else {
      cVar1 = FUN_180011220((ulonglong)DAT_180cf9cd4 + lVar6);
      bVar9 = cVar1 == '\0';
    }
    if (bVar9) {
      lVar6 = *param_2;
      iVar3 = FUN_1804e4d70(&DAT_1809f3070);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f30bc == 0x7fffffff) {
        DAT_1809f30bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if (((DAT_1809f2f90 == '\0') || (DAT_1809f2fa8 < DAT_1809f31d4 + -1)) ||
         ((DAT_1809f2f98 == lVar6 && (DAT_1809f2fa0 == lVar4)))) {
        FUN_1804e4e90(&DAT_1809f3070);
        if ((((*param_2 != 0) && (DAT_180ca0a0c != 0)) &&
            (uVar8 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0)) &&
           (lVar6 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca0a0c), lVar6 != 0)) {
          uVar2 = FUN_180011200(lVar6 + uVar8);
          plVar5 = (longlong *)FUN_1803a0940(&local_res8,uVar2);
          if (*plVar5 == lVar4) {
            FUN_18024d6c0(param_1,param_2,lVar4);
            return;
          }
        }
      }
      else {
        FUN_1804e4e90(&DAT_1809f3070);
      }
    }
  }
  FUN_18024d0f0(param_1);
  return;
}



/* ===== 18024ec70 FUN_18024ec70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18024ec70(void)

{
  bool bVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  uint local_2a0;
  undefined4 uStack_29c;
  longlong *local_298;
  undefined *local_290;
  uint local_288;
  uint local_284;
  uint local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined2 local_26c;
  char local_26a;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  char local_250;
  undefined8 local_24c;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_2a0);
    DAT_181108a00 = CONCAT44(uStack_29c,local_2a0);
    DAT_1811089f8 = FUN_1803a0c50(&local_2a0);
    DAT_180cd1304 = '\x01';
  }
  local_2a8 = DAT_1811089f8;
  if (DAT_181108a00 == 0) {
    uVar5 = 0xffffffff;
  }
  else if (DAT_180ca09fc == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_180011200((ulonglong)DAT_180ca09fc + DAT_181108a00);
  }
  if ((DAT_18095d281 == '\0') && (DAT_1809213ac == '\0')) {
    uVar17 = 0;
  }
  else {
    uVar17 = 1;
  }
  local_290 = &DAT_1809f2ea0;
  local_2a0 = uVar5;
  iVar6 = FUN_1804e4d70(&DAT_1809f2ea0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f2eec == 0x7fffffff) {
    DAT_1809f2eec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (((((DAT_180961f40 == 0) || (DAT_180961f48 == 0)) || (DAT_180961f50 == 0)) ||
      ((DAT_180961f60 == 0 || (DAT_180961f68 == 0)))) ||
     ((DAT_180cfee68 == 0 || ((DAT_180cfee80 == 0 || (DAT_1809619a0 == 0)))))) {
    if (DAT_180cf9dc0 != DAT_180cf9dc8) {
      FUN_18025c450();
      DAT_180cf9dc8 = DAT_180cf9dc0;
    }
    if (DAT_180cf9e70 != DAT_180cf9e78) {
      DAT_180cf9e78 = DAT_180cf9e70;
    }
    goto LAB_18024f616;
  }
  puVar15 = DAT_180cf9dc0;
  puVar14 = DAT_180cf9dc8;
  if (local_2a8 != 0) {
    if (DAT_180cf9cd4 == 0) {
      if ((DAT_180ca09f0 == 0) || (iVar6 = FUN_180011200(), 999 < iVar6 - 1U)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
    }
    else {
      cVar3 = FUN_180011220((ulonglong)DAT_180cf9cd4 + local_2a8);
      bVar19 = cVar3 == '\0';
    }
    uVar7 = DAT_180ca0a10;
    iVar6 = DAT_180ca0a0c;
    puVar15 = DAT_180cf9dc0;
    puVar14 = DAT_180cf9dc8;
    if (bVar19) {
      uVar13 = (ulonglong)DAT_180ca0a10;
      if ((((local_2a8 == 0) || (DAT_180ca0a0c == 0)) || (DAT_180ca0a10 == 0)) ||
         (lVar9 = FUN_18000f3a0(), lVar9 == 0)) {
        lVar9 = 0;
      }
      else {
        uVar8 = FUN_180011200(lVar9 + uVar13);
        plVar11 = (longlong *)FUN_1803a0940(&local_298,uVar8);
        lVar9 = *plVar11;
        iVar6 = DAT_180ca0a0c;
        uVar7 = DAT_180ca0a10;
      }
      if (((local_2a8 == 0) || (iVar6 == 0)) ||
         ((uVar7 == 0 || (lVar10 = FUN_18000f3a0(), lVar10 == 0)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_180011200();
      }
      if (((lVar9 == 0) || (DAT_1809619a4 == 0)) || ((DAT_1809619a8 == 0 || (DAT_180961998 == 0))))
      {
        uVar12 = 0;
        puVar15 = DAT_180cf9dc0;
      }
      else {
        uVar4 = FUN_180011440();
        uVar12 = (uint)uVar4;
        puVar15 = DAT_180cf9dc0;
      }
      for (; puVar15 != DAT_180cf9dc8; puVar15 = puVar15 + 0x88) {
        if (*puVar15 == uVar7) {
          cVar3 = '\x01';
          goto LAB_18024ef15;
        }
      }
      cVar3 = '\0';
LAB_18024ef15:
      puVar15 = DAT_180cf9dc0;
      puVar14 = DAT_180cf9dc8;
      if (((lVar9 != 0) && (uVar12 - 0x2b < 6)) && (cVar3 == '\0')) {
        local_27c = 0;
        local_278 = 0xffffffffffffffff;
        local_270 = 0xffffffff;
        local_26c = 0;
        local_268 = 0;
        local_260 = 0xffffffff;
        local_258 = 0xffffffffffffffff;
        local_24c = 0;
        local_244 = 0;
        local_23c = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        local_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0x10000;
        local_1a4 = 0;
        local_19c = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        local_180 = 0;
        local_17c = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_164 = 0;
        uStack_15c = 0;
        local_154 = 0;
        uStack_14c = 0;
        local_144 = 0;
        local_13c = 0;
        local_138 = 0;
        local_130 = 0;
        local_128 = 0;
        local_120 = 0;
        local_118 = 0;
        local_110 = 0x3f800000;
        local_108 = 0;
        local_104 = 0x100;
        local_100 = 0;
        local_fc = 0;
        local_f8 = 0;
        local_f4 = 0;
        local_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0xffffffff;
        local_ac = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_288 = uVar7;
        local_284 = uVar5;
        local_280 = uVar12;
        local_26a = cVar3;
        local_250 = cVar3;
        if (DAT_180cf9dc8 == DAT_180cf9dd0) {
          FUN_18025e340(0,DAT_180cf9dc8,&local_288);
        }
        else {
          FUN_180260180(DAT_180cf9dc8,&local_288);
          DAT_180cf9dc8 = DAT_180cf9dc8 + 0x88;
        }
        FUN_18025bee0(&local_88);
        FUN_18025deb0(&local_198);
        FUN_180042970(&local_1c0);
        FUN_1800132b0(&uStack_1f0);
        FUN_180068f30(&local_208);
        FUN_180011610(&local_220);
        puVar15 = DAT_180cf9dc0;
        puVar14 = DAT_180cf9dc8;
      }
    }
  }
  for (; puVar16 = DAT_180cf9dc8, puVar15 != DAT_180cf9dc8; puVar15 = puVar15 + 0x88) {
    DAT_180cf9dc8 = puVar14;
    FUN_18024e9d0(puVar15,&local_2a8,uVar17,DAT_18095d281);
    puVar14 = DAT_180cf9dc8;
    DAT_180cf9dc8 = puVar16;
  }
  DAT_180cf9dc8 = puVar14;
  FUN_18024e5d0(&local_2a8,uVar17,DAT_18095d281);
  if (((DAT_180961fa8 == 0) || (uVar13 = (ulonglong)DAT_180961fb0, DAT_180961fb0 == 0)) ||
     ((lVar9 = FUN_18000f3a0(), 0x7ffffffefffe < lVar9 - 0x10000U ||
      (0x7ffffffefffe < (lVar9 + uVar13) - 0x10000)))) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = FUN_180011200();
  }
  puVar15 = DAT_180cf9dc8;
  uVar12 = DAT_180cf9c50;
  iVar6 = DAT_180961944;
  uVar13 = (ulonglong)DAT_180961940;
  if (DAT_180cf9dc0 != DAT_180cf9dc8) {
    uVar18 = (ulonglong)DAT_180cf9c50;
    puVar14 = DAT_180cf9dc0;
    do {
      puVar14[6] = 0xffffffff;
      *(undefined1 *)(puVar14 + 7) = 0;
      uVar5 = *puVar14;
      if (((uVar5 - 1 < 0xfffffffe) && (lVar9 = FUN_18000f3a0(DAT_1809619d0), lVar9 != 0)) &&
         (lVar9 = FUN_18000f3a0((ulonglong)((uVar5 >> 9 & 0x3f) * iVar6) + lVar9 + uVar13),
         lVar9 - 0x10000U < 0xfffffffffffeffff)) {
        lVar10 = FUN_18000f3a0((ulonglong)((uVar5 & 0x1ff) * DAT_180961948) + lVar9);
        lVar9 = 0;
        if (lVar10 - 0x10000U < 0xfffffffffffeffff) {
          lVar9 = lVar10;
        }
      }
      else {
        lVar9 = 0;
      }
      if ((((-1 < (int)puVar14[5]) && (lVar9 != 0)) && ((int)puVar14[5] <= (int)uVar7)) &&
         ((uVar12 != 0 && (cVar3 = FUN_180011220(lVar9 + uVar18), cVar3 == '\x01')))) {
        puVar14[6] = uVar7;
      }
      puVar14 = puVar14 + 0x88;
    } while (puVar14 != puVar15);
    uVar5 = local_2a0;
  }
  puVar14 = DAT_180cf9dc8;
  puVar15 = DAT_180cf9dc0;
  if (DAT_180cf9dc0 == DAT_180cf9dc8) {
LAB_18024f35f:
    puVar2 = DAT_180cf9dc8;
    puVar16 = DAT_180cf9dc0;
    if (puVar15 != puVar14) goto joined_r0x00018024f367;
  }
  else {
    do {
      if ((puVar15[3] == 0) && (*(char *)((longlong)puVar15 + 0x1e) == '\0')) break;
      puVar15 = puVar15 + 0x88;
    } while (puVar15 != DAT_180cf9dc8);
    if (puVar15 == DAT_180cf9dc8) goto LAB_18024f35f;
    puVar16 = puVar15 + 0x88;
    puVar2 = DAT_180cf9dc8;
    if (puVar16 != DAT_180cf9dc8) {
      do {
        if ((puVar16[3] != 0) || (*(char *)((longlong)puVar16 + 0x1e) != '\0')) {
          FUN_18025b890(puVar15,puVar16);
          puVar15 = puVar15 + 0x88;
        }
        puVar16 = puVar16 + 0x88;
      } while (puVar16 != puVar14);
      uVar13 = (ulonglong)DAT_180961940;
      iVar6 = DAT_180961944;
      goto LAB_18024f35f;
    }
joined_r0x00018024f367:
    for (; puVar16 = DAT_180cf9dc8, puVar14 != DAT_180cf9dc8; puVar14 = puVar14 + 0x88) {
      DAT_180cf9dc8 = puVar2;
      FUN_18025b890(puVar15,puVar14);
      puVar15 = puVar15 + 0x88;
      puVar2 = DAT_180cf9dc8;
      DAT_180cf9dc8 = puVar16;
    }
    DAT_180cf9dc8 = puVar2;
    FUN_18025c450(puVar15,puVar2);
    uVar13 = (ulonglong)DAT_180961940;
    puVar16 = DAT_180cf9dc0;
    DAT_180cf9dc8 = puVar15;
    iVar6 = DAT_180961944;
  }
  for (; puVar16 != DAT_180cf9dc8; puVar16 = puVar16 + 0x88) {
    if ((puVar16[3] != 0) && (puVar16[1] == uVar5)) {
      if ((*(char *)((longlong)puVar16 + 0x1e) == '\0') || (local_2a8 == 0)) break;
      if ((DAT_18095d2c9 != '\0') && (puVar16[3] != 2)) {
        uVar5 = *puVar16;
        if ((uVar5 - 1 < 0xfffffffe) &&
           ((lVar9 = FUN_18000f3a0(DAT_1809619d0), lVar9 != 0 &&
            (lVar9 = FUN_18000f3a0(uVar13 + (ulonglong)((uVar5 >> 9 & 0x3f) * iVar6) + lVar9),
            lVar9 - 0x10000U < 0xfffffffffffeffff)))) {
          lVar10 = FUN_18000f3a0((ulonglong)((uVar5 & 0x1ff) * DAT_180961948) + lVar9);
          lVar9 = 0;
          if (lVar10 - 0x10000U < 0xfffffffffffeffff) {
            lVar9 = lVar10;
          }
          if (((lVar9 == 0) || (DAT_180cf9c44 == 0)) ||
             (cVar3 = FUN_180011220(lVar9 + (ulonglong)DAT_180cf9c44), cVar3 == '\0'))
          goto LAB_18024f4ac;
          bVar19 = true;
LAB_18024f4b4:
          if ((DAT_180cf9c48 == 0) ||
             (fVar20 = (float)FUN_18000f3d0(lVar9 + (ulonglong)DAT_180cf9c48), fVar20 == 0.0))
          goto LAB_18024f4d2;
          bVar1 = true;
        }
        else {
          lVar9 = 0;
LAB_18024f4ac:
          bVar19 = false;
          if (lVar9 != 0) goto LAB_18024f4b4;
LAB_18024f4d2:
          bVar1 = false;
          if (lVar9 == 0) goto LAB_18024f4e2;
        }
        if (!bVar19 && !bVar1) break;
      }
LAB_18024f4e2:
      DAT_180ccf89c = puVar16[3] == 2;
      if ((*puVar16 != DAT_1809f2e48) || (puVar16[8] != DAT_1809f2e4c)) {
        DAT_1809f2e4c = puVar16[8];
        uVar5 = puVar16[2];
        DAT_1809f2e48 = *puVar16;
        plVar11 = (longlong *)FUN_18024c730(&local_288,puVar16 + 0x1a);
        local_298 = plVar11;
        if ((ulonglong)((plVar11[1] - *plVar11 >> 2) * -0x5555555555555555) < 2) {
          FUN_1802477c0();
        }
        else {
          FUN_180247140(plVar11);
          iVar6 = FUN_1804e4d70(&DAT_1809f30e0);
          if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(5);
          }
          if (DAT_1809f312c == 0x7fffffff) {
            DAT_1809f312c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(6);
          }
          FUN_180247990(&DAT_1809f3380,plVar11);
          DAT_180cf9c38 = uVar5;
          FUN_1804e4e90(&DAT_1809f30e0);
        }
        FUN_18025deb0(plVar11 + 0x11);
        FUN_180042970(plVar11 + 0xc);
        FUN_1800132b0(plVar11 + 6);
        FUN_180068f30(plVar11 + 3);
        FUN_180011610(plVar11);
      }
      goto LAB_18024f637;
    }
  }
LAB_18024f616:
  DAT_180ccf89c = 0;
  DAT_1809f2e48 = 0xffffffff;
  DAT_1809f2e4c = 0xffffffff;
  FUN_1802477c0();
LAB_18024f637:
  FUN_1804e4e90(&DAT_1809f2ea0);
  return;
}



/* ===== 18024f6b0 FUN_18024f6b0 ===== */

void FUN_18024f6b0(longlong param_1)

{
  FUN_18025bee0(param_1 + 0x200);
  FUN_18025deb0(param_1 + 0xf0);
  FUN_180042970(param_1 + 200);
  FUN_1800132b0(param_1 + 0x98);
  FUN_180068f30(param_1 + 0x80);
  FUN_180011610(param_1 + 0x68);
  return;
}



/* ===== 18024f710 FUN_18024f710 ===== */

void FUN_18024f710(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong local_res10;
  
  DAT_1809f31d4 = param_1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = local_res10;
    DAT_1811089f8 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  if ((DAT_18095d281 != '\0') && (DAT_1811089f8 != 0)) {
    if (DAT_180cf9cd4 == 0) {
      if ((DAT_180ca09f0 == 0) ||
         (iVar7 = FUN_180011200((ulonglong)DAT_180ca09f0 + DAT_1811089f8), 999 < iVar7 - 1U)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
    }
    else {
      cVar5 = FUN_180011220((ulonglong)DAT_180cf9cd4 + DAT_1811089f8);
      bVar11 = cVar5 == '\0';
    }
    if ((bVar11) && (DAT_181108a00 != 0)) {
      if (DAT_180ca09fc == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_180011200((ulonglong)DAT_180ca09fc + DAT_181108a00);
      }
      iVar8 = FUN_1804e4d70(&DAT_1809f2ea0);
      puVar4 = DAT_180cf9dc8;
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      puVar2 = DAT_180cf9dc0;
      if (DAT_1809f2eec == 0x7fffffff) {
        DAT_1809f2eec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      for (; puVar2 != puVar4; puVar2 = puVar2 + 0x88) {
        if (puVar2[1] == iVar7) {
          plVar9 = (longlong *)FUN_1803a0940(&local_res10,*puVar2);
          uVar3 = DAT_180cf9c50;
          lVar1 = *plVar9;
          if ((((lVar1 != 0) && (puVar2[3] != 0)) && (-1 < (int)puVar2[6])) &&
             ((int)puVar2[6] < param_1)) {
            uVar10 = (ulonglong)DAT_180cf9c50;
            *(undefined1 *)(puVar2 + 7) = 1;
            if ((uVar3 == 0) || (cVar5 = FUN_180011220(lVar1 + uVar10), cVar5 == '\0')) {
              uVar6 = 0;
            }
            else {
              uVar6 = 1;
            }
            *(undefined1 *)((longlong)puVar2 + 0x1d) = uVar6;
          }
        }
      }
      FUN_1804e4e90(&DAT_1809f2ea0);
    }
  }
  return;
}



/* ===== 18024f8c0 FUN_18024f8c0 ===== */

float * FUN_18024f8c0(float *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_78 [112];
  
  if ((DAT_180ccf88e == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ccf88e = '\x01';
    DAT_180cf9bf8 = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMins");
    DAT_180cf9d04 = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMaxs");
  }
  uVar4 = DAT_180cf9d04;
  if ((((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar5 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_2), lVar5 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
  }
  else {
    pfVar6 = (float *)FUN_1800111b0(local_78,lVar5 + (ulonglong)DAT_180ca0950);
    fVar10 = *pfVar6;
    fVar11 = pfVar6[1];
    fVar12 = pfVar6[2];
  }
  if (((DAT_180ca0a3c == 0) || (DAT_180cf9bf8 == 0)) || (uVar4 == 0)) {
    puVar7 = (undefined8 *)FUN_180242430(local_78,param_2);
    fVar10 = *(float *)(puVar7 + 1);
    *(undefined8 *)param_1 = *puVar7;
    param_1[2] = fVar10;
  }
  else {
    lVar5 = FUN_18000f3a0((ulonglong)DAT_180ca0a3c + *param_2);
    if (lVar5 - 0x10000U < 0x7ffffffeffff) {
      pfVar6 = (float *)FUN_1800111b0(local_78,(ulonglong)DAT_180cf9bf8 + lVar5);
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      pfVar6 = (float *)FUN_1800111b0(local_78,(ulonglong)uVar4 + lVar5);
      if ((((uint)fVar1 & 0x7f800000) == 0x7f800000) || (((uint)*pfVar6 & 0x7f800000) == 0x7f800000)
         ) {
        puVar7 = (undefined8 *)FUN_180242430(local_78,param_2);
        fVar10 = *(float *)(puVar7 + 1);
        *(undefined8 *)param_1 = *puVar7;
        param_1[2] = fVar10;
      }
      else {
        fVar9 = (pfVar6[1] - fVar2) * DAT_1808ac1f4;
        fVar8 = (pfVar6[2] - fVar3) * DAT_1808ac1f4;
        *param_1 = (*pfVar6 - fVar1) * DAT_1808ac1f4 + fVar10 + fVar1;
        param_1[1] = fVar9 + fVar2 + fVar11;
        param_1[2] = fVar8 + fVar3 + fVar12;
      }
    }
    else {
      *param_1 = fVar10;
      param_1[1] = fVar11;
      param_1[2] = fVar12;
    }
  }
  return param_1;
}



/* ===== 18024fb60 FUN_18024fb60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18024fb60(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88;
  
  if ((((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar3 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar3 == 0)) ||
     (DAT_180ca0950 == 0)) {
    local_f8 = 0;
    local_f0 = 0.0;
  }
  else {
    puVar4 = (undefined8 *)FUN_1800111b0(&local_c8,lVar3 + (ulonglong)DAT_180ca0950);
    local_f8 = *puVar4;
    local_f0 = *(float *)(puVar4 + 1);
  }
  puVar4 = (undefined8 *)FUN_18024f8c0(&local_c8,param_2);
  local_d8 = *puVar4;
  local_d0 = *(undefined4 *)(puVar4 + 1);
  if ((*param_2 != 0) && (DAT_180ca0a20 != 0)) {
    FUN_1800111b0(&local_c8,*param_2 + (ulonglong)DAT_180ca0a20);
  }
  fVar5 = (float)FUN_180517790();
  fVar7 = DAT_1808ac918;
  fVar5 = fVar5 * DAT_1808ac918;
  uVar6 = FUN_180517200();
  uVar2 = _UNK_1808ad2c8;
  uVar1 = _DAT_1808ad2c0;
  local_88 = 0x3f800000;
  fVar7 = (float)(uVar6 ^ DAT_1808adec0) * fVar7;
  local_98 = 0;
  local_b8 = _DAT_1808ad2c0;
  uStack_b0 = _UNK_1808ad2c8;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_8c = 0;
  local_e8 = 0;
  local_e0 = 0;
  FUN_1802aed00(param_1,&local_d8,&local_e8,&local_e8,0,0x1c3003,4,0xf,&local_b8,0);
  local_c8 = (float)local_f8;
  local_c0 = local_f0 + _DAT_1808acac4;
  local_c4 = local_f8._4_4_;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_b8 = uVar1;
  uStack_b0 = uVar2;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x3f800000;
  local_e8 = 0;
  local_e0 = 0;
  FUN_1802aed00(param_1,&local_c8,&local_e8,&local_e8,0,0x1c3003,4,0xf,&local_b8,0);
  local_b8 = _DAT_1808ad2c0;
  uStack_b0 = _UNK_1808ad2c8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x3f800000;
  local_e8 = 0;
  local_e0 = 0;
  FUN_1802aed00(param_1,&local_f8,&local_e8,&local_e8,0,0x1c3003,4,0xf,&local_b8,0);
  local_c8 = (float)local_f8 + fVar5;
  local_c4 = local_f8._4_4_ + fVar7;
  local_c0 = (float)local_d0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_b8 = _DAT_1808ad2c0;
  uStack_b0 = _UNK_1808ad2c8;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x3f800000;
  local_e8 = 0;
  local_e0 = 0;
  FUN_1802aed00(param_1,&local_c8,&local_e8,&local_e8,0,0x1c3003,4,0xf,&local_b8,0);
  local_c8 = (float)local_f8 - fVar5;
  local_c4 = local_f8._4_4_ - fVar7;
  local_c0 = (float)local_d0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_b8 = _DAT_1808ad2c0;
  uStack_b0 = _UNK_1808ad2c8;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x3f800000;
  local_e8 = 0;
  local_e0 = 0;
  FUN_1802aed00(param_1,&local_c8,&local_e8,&local_e8,0,0x1c3003,4,0xf,&local_b8,0);
  return;
}



/* ===== 18024ffd0 FUN_18024ffd0 ===== */

undefined8 FUN_18024ffd0(longlong *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float extraout_XMM0_Da_00;
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
  float local_d8 [4];
  undefined1 local_c8 [176];
  
  *param_4 = 0.0;
  *param_3 = 0.0;
  FUN_18024fb60(param_2,param_1);
  if (extraout_XMM0_Da <= 0.0) {
    return 0;
  }
  if ((((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar4 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_1), lVar4 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar15 = 0.0;
    fVar14 = 0.0;
    fVar8 = 0.0;
  }
  else {
    pfVar5 = (float *)FUN_1800111b0(local_c8,lVar4 + (ulonglong)DAT_180ca0950);
    fVar15 = *pfVar5;
    fVar14 = pfVar5[1];
    fVar8 = pfVar5[2];
  }
  if (DAT_180ca0a34 == 0) {
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar11 = DAT_1808acab0;
  }
  else {
    pfVar5 = (float *)FUN_1800111b0(local_c8,(ulonglong)DAT_180ca0a34 + *param_1);
    fVar7 = *pfVar5;
    fVar9 = pfVar5[1];
    fVar11 = pfVar5[2];
  }
  if ((DAT_180ca0a3c == 0) ||
     (lVar4 = FUN_18000f3a0((ulonglong)DAT_180ca0a3c + *param_1), 0x7ffffffefffe < lVar4 - 0x10000U)
     ) {
    pfVar5 = (float *)FUN_18024f8c0(local_c8,param_1);
    fVar16 = *pfVar5;
    fVar13 = pfVar5[1];
    fVar17 = pfVar5[2];
    fVar14 = fVar13;
    fVar15 = fVar16;
    fVar8 = fVar17;
  }
  else {
    fVar16 = fVar15 + fVar7;
    fVar13 = fVar14 + fVar9;
    fVar17 = fVar8 + fVar11;
    fVar14 = fVar9 * DAT_1808ac254 + fVar14;
    fVar15 = fVar7 * DAT_1808ac254 + fVar15;
    fVar8 = fVar11 * DAT_1808ac254 + fVar8;
  }
  fVar11 = fVar16 - fVar15;
  fVar12 = fVar13 - fVar14;
  fVar18 = fVar17 - fVar8;
  fVar7 = 0.0;
  fVar9 = fVar12 * fVar12 + fVar11 * fVar11 + fVar18 * fVar18;
  if (0.0 < fVar9) {
    local_d8[2] = 1.0;
    local_d8[0] = 0.0;
    local_d8[1] = ((*param_2 - fVar15) * fVar11 + (param_2[1] - fVar14) * fVar12 +
                  (param_2[2] - fVar8) * fVar18) / fVar9;
    pfVar5 = local_d8;
    if (0.0 <= local_d8[1]) {
      pfVar5 = local_d8 + 1;
    }
    pfVar6 = local_d8 + 2;
    if (local_d8[1] <= DAT_1808ac34c) {
      pfVar6 = pfVar5;
    }
    fVar7 = *pfVar6;
  }
  fVar9 = *param_2;
  fVar1 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = (fVar15 + fVar11 * fVar7) - fVar9;
  fVar12 = (fVar14 + fVar12 * fVar7) - fVar1;
  fVar7 = (fVar8 + fVar18 * fVar7) - fVar10;
  fVar7 = fVar12 * fVar12 + fVar11 * fVar11 + fVar7 * fVar7;
  if (fVar7 < 0.0) {
    fVar7 = (float)FUN_18051af10(fVar7);
    fVar10 = param_2[2];
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  fVar15 = (fVar14 - fVar1) * (fVar14 - fVar1) + (fVar15 - fVar9) * (fVar15 - fVar9) +
           (fVar8 - fVar10) * (fVar8 - fVar10);
  if (fVar15 < 0.0) {
    fVar15 = (float)FUN_18051af10(fVar15);
  }
  else {
    fVar15 = SQRT(fVar15);
  }
  fVar14 = (fVar13 - fVar1) * (fVar13 - fVar1) + (fVar16 - fVar9) * (fVar16 - fVar9) +
           (fVar17 - fVar10) * (fVar17 - fVar10);
  if (fVar14 < 0.0) {
    fVar14 = (float)FUN_18051af10(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  if (fVar14 <= fVar15) {
    fVar14 = fVar15;
  }
  if (DAT_180ca0a14 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_180011200((ulonglong)DAT_180ca0a14 + *param_1);
  }
  if (DAT_1809f2788 < 0.0) {
    fVar15 = (float)FUN_18051af10(DAT_1809f2788);
  }
  else {
    fVar15 = SQRT(DAT_1809f2788);
  }
  uVar2 = DAT_1808adec0;
  fVar15 = fVar15 / DAT_1808ac658;
  fVar15 = (fVar15 + fVar15) * fVar15;
  fVar11 = (float)FUN_18051ab90((float)((uint)(fVar14 * fVar14) ^ DAT_1808adec0) / fVar15);
  fVar9 = DAT_1809f31f0;
  fVar8 = DAT_1809f30dc;
  fVar14 = DAT_1808ac1f4;
  fVar16 = fVar11 * DAT_1809f30dc * extraout_XMM0_Da;
  fVar11 = fVar16;
  if (0 < iVar3) {
    fVar11 = fVar16 * DAT_1809f31f0 * DAT_1808ac1f4;
    if ((float)iVar3 < fVar16 - fVar11) {
      fVar11 = fVar16 - (float)iVar3;
    }
  }
  fVar16 = 0.0;
  if (0.0 <= fVar11) {
    fVar16 = fVar11;
  }
  *param_3 = fVar16;
  FUN_18051ab90((float)((uint)(fVar7 * fVar7) ^ uVar2) / fVar15);
  fVar8 = extraout_XMM0_Da_00 * fVar8 * extraout_XMM0_Da;
  fVar15 = fVar8;
  if (0 < iVar3) {
    fVar15 = fVar8 * fVar9 * fVar14;
    if ((float)iVar3 < fVar8 - fVar15) {
      fVar15 = fVar8 - (float)iVar3;
    }
  }
  fVar14 = 0.0;
  if (0.0 <= fVar15) {
    fVar14 = fVar15;
  }
  *param_4 = fVar14;
  return 1;
}



/* ===== 1802504e0 FUN_1802504e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802504e0(longlong *param_1,float *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [112];
  
  if ((DAT_180ccf87f == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180ccf87f = '\x01';
    DAT_180cf9c18 = FUN_18038eaf0("C_CSPlayerPawn","m_iPlayerState");
    if (DAT_180cf9c18 == 0) {
      DAT_180cf9c18 = FUN_18038eaf0("C_CSPlayerPawnBase","m_iPlayerState");
    }
  }
  uVar1 = DAT_180cf9c18;
  if (((*param_1 != 0) && (DAT_180ca09f0 != 0)) &&
     (iVar3 = FUN_180011200((ulonglong)DAT_180ca09f0 + *param_1), iVar3 - 1U < 1000)) {
    if (((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
       ((lVar4 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + *param_1), lVar4 == 0 ||
        (DAT_180ca0950 == 0)))) {
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar9 = 0.0;
    }
    else {
      pfVar5 = (float *)FUN_1800111b0(&local_f8,lVar4 + (ulonglong)DAT_180ca0950);
      fVar7 = *pfVar5;
      fVar8 = pfVar5[1];
      fVar9 = pfVar5[2];
    }
    fVar7 = (param_2[1] - fVar8) * (param_2[1] - fVar8) + (*param_2 - fVar7) * (*param_2 - fVar7) +
            (param_2[2] - fVar9) * (param_2[2] - fVar9);
    if (fVar7 < 0.0) {
      fVar7 = (float)FUN_18051af10();
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    if ((fVar7 <= DAT_1808acc5c) &&
       ((uVar1 == 0 || (iVar3 = FUN_180011200((ulonglong)uVar1 + *param_1), iVar3 != 8)))) {
      FUN_1803a0780(param_1,&local_108);
      if (DAT_180ca0a34 == 0) {
      }
      else {
        pfVar5 = (float *)FUN_1800111b0(&local_f8,(ulonglong)DAT_180ca0a34 + *param_1);
        local_108._0_4_ = (float)local_108 + *pfVar5;
        local_108._4_4_ = local_108._4_4_ + pfVar5[1];
        local_100 = local_100 + pfVar5[2];
      }
      fVar7 = (*param_2 - (float)local_108) * (*param_2 - (float)local_108) +
              (param_2[1] - local_108._4_4_) * (param_2[1] - local_108._4_4_) +
              (param_2[2] - local_100) * (param_2[2] - local_100);
      local_e8 = (float)local_108;
      local_e4 = local_108._4_4_;
      local_e0 = local_100;
      if (fVar7 < 0.0) {
        fVar7 = (float)FUN_18051af10();
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      if (0.0 < DAT_1808ac658 - fVar7 * DAT_1808abfbc) {
        lVar4 = *param_1;
        local_a8 = 0x3f800000;
        local_d8 = _DAT_1808ad2c0;
        uStack_d0 = _UNK_1808ad2c8;
        local_b8 = 0;
        local_b0 = 0;
        local_ac = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        cVar2 = FUN_1802aed00(param_2,&local_e8,&local_f8,&local_f8,0,0x1c3003,4,0xf,&local_d8,0);
        if ((cVar2 != '\0') && ((DAT_1808ac308 <= (float)local_d8 || (local_b8 == lVar4)))) {
          local_108 = 0;
          local_100 = 0.0;
          if ((*param_1 == 0) || (DAT_180ca0a20 == 0)) {
            local_f8 = 0;
            local_f0 = 0;
          }
          else {
            puVar6 = (undefined8 *)FUN_1800111b0(local_a0,*param_1 + (ulonglong)DAT_180ca0a20);
            local_f8 = *puVar6;
            local_f0 = *(undefined4 *)(puVar6 + 1);
          }
          FUN_1803a19a0(&local_f8,&local_108,local_90,local_a0);
          if ((param_2[1] - local_e4) * (param_2[1] - local_e4) +
              (*param_2 - local_e8) * (*param_2 - local_e8) +
              (param_2[2] - local_e0) * (param_2[2] - local_e0) < 0.0) {
            FUN_18051af10();
          }
          if (local_108._4_4_ * local_108._4_4_ + (float)local_108 * (float)local_108 +
              local_100 * local_100 < 0.0) {
            FUN_18051af10();
          }
        }
      }
    }
  }
  return;
}



/* ===== 1802509f0 FUN_1802509f0 ===== */

bool FUN_1802509f0(longlong *param_1,float param_2)

{
  int iVar1;
  float extraout_XMM0_Da;
  
  if ((*param_1 == 0) || (DAT_180ca09f0 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_180011200(*param_1 + (ulonglong)DAT_180ca09f0);
  }
  if ((float)iVar1 <= param_2) {
    return true;
  }
  if (param_2 <= 0.0) {
    return false;
  }
  FUN_18051ab90();
  if (DAT_180ca0a14 != 0) {
    FUN_180011200((ulonglong)DAT_180ca0a14 + *param_1);
  }
  FUN_18053f0d0();
  return extraout_XMM0_Da <= param_2;
}



