/* ===== 1802ac1b0 FUN_1802ac1b0 ===== */

void FUN_1802ac1b0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1802ac0a0();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 0x18;
  if (param_5 < lVar3) {
    FUN_1802ac1b0(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_1802ac1b0(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffb8 >> 8);
    FUN_1802ac2d0();
    FUN_1802ac2d0(lVar1,param_2,uVar2,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1802ac4f0(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



/* ===== 1802ac2d0 FUN_1802ac2d0 ===== */

void FUN_1802ac2d0(undefined4 *param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  
  puVar9 = param_1;
  for (lVar12 = param_3; 0x20 < lVar12; lVar12 = lVar12 + -0x20) {
    puVar9 = (undefined4 *)FUN_1802ac0a0(puVar9,puVar9 + 0xc0);
  }
  FUN_1802ac0a0(puVar9,param_2);
  if (0x20 < param_3) {
    puVar9 = param_4;
    lVar12 = param_3;
    puVar15 = param_1;
    do {
      lVar1 = lVar12 + -0x20;
      puVar3 = puVar15 + 0xc0;
      lVar13 = lVar12 + -0x40;
      if (lVar1 < 0x20) {
        lVar13 = 0;
      }
      lVar10 = 0x600;
      if (lVar1 < 0x20) {
        lVar10 = lVar12 * 0x18;
      }
      puVar14 = (undefined4 *)(lVar10 + (longlong)puVar15);
      puVar4 = puVar15 + 0xba;
      lVar10 = 0x5e8;
      if (lVar1 < 0x20) {
        lVar10 = lVar12 * 0x18 + -0x18;
      }
      puVar5 = (undefined4 *)(lVar10 + (longlong)puVar15);
      puVar11 = puVar3;
      while( true ) {
        for (; puVar2 = puVar9 + 6,
            (float)puVar15[2] <= (float)puVar11[2] && (float)puVar11[2] != (float)puVar15[2];
            puVar11 = puVar11 + 6) {
          uVar6 = puVar11[1];
          uVar7 = puVar11[2];
          uVar8 = puVar11[3];
          *puVar9 = *puVar11;
          puVar9[1] = uVar6;
          puVar9[2] = uVar7;
          puVar9[3] = uVar8;
          *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar11 + 4);
          if (puVar11 == puVar5) {
            lVar12 = (longlong)puVar3 - (longlong)puVar15;
            puVar11 = puVar15;
            goto LAB_1802ac412;
          }
          puVar9 = puVar2;
        }
        uVar6 = puVar15[1];
        uVar7 = puVar15[2];
        uVar8 = puVar15[3];
        *puVar9 = *puVar15;
        puVar9[1] = uVar6;
        puVar9[2] = uVar7;
        puVar9[3] = uVar8;
        *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar15 + 4);
        if (puVar15 == puVar4) break;
        puVar15 = puVar15 + 6;
        puVar9 = puVar2;
      }
      lVar12 = (longlong)puVar14 - (longlong)puVar11;
LAB_1802ac412:
      FUN_180540530(puVar2,puVar11,lVar12);
      puVar9 = (undefined4 *)((longlong)puVar9 + lVar12 + 0x18);
      lVar12 = lVar13;
      puVar15 = puVar14;
    } while (0x20 < lVar13);
    FUN_180540530(puVar9,puVar14,param_2 - (longlong)puVar14);
    lVar12 = 0x40;
    FUN_1802ac610(param_4,param_4 + param_3 * 6,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1802ac610(param_1,param_2,param_4,lVar12 * 2,param_3,param_5);
        lVar12 = lVar12 * 4;
        FUN_1802ac610(param_4,param_4 + param_3 * 6,param_1,lVar12,param_3,param_5);
      } while (lVar12 <= (param_3 + -1) / 2);
    }
  }
  return;
}



/* ===== 1802ac4f0 FUN_1802ac4f0 ===== */

void FUN_1802ac4f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    while (*(float *)(param_2 + 1) < *(float *)(param_1 + 1) ||
           *(float *)(param_2 + 1) == *(float *)(param_1 + 1)) {
      param_1 = param_1 + 3;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    puVar6 = param_3 + -3;
    if (param_2 != puVar6) {
      fVar1 = *(float *)(param_2 + -2);
      do {
        puVar5 = puVar6;
        if (fVar1 < *(float *)(param_3 + -2)) {
          if (param_4 == 1) {
            uVar3 = *param_1;
            uVar4 = param_1[1];
            lVar7 = (longlong)param_3 - (longlong)param_2;
            uVar2 = param_1[2];
            FUN_180540530(param_1,fVar1,lVar7);
            *(undefined8 *)(lVar7 + (longlong)param_1) = uVar3;
            ((undefined8 *)(lVar7 + (longlong)param_1))[1] = uVar4;
            *(undefined8 *)(lVar7 + 0x10 + (longlong)param_1) = uVar2;
            return;
          }
          FUN_1802ac740(param_1,fVar1,param_3,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        param_5 = param_5 + -1;
        puVar6 = puVar5 + -3;
        param_3 = puVar5;
      } while (param_2 != puVar6);
    }
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar2 = param_2[2];
    FUN_180540530((longlong)puVar6 + (0x18 - ((longlong)param_2 - (longlong)param_1)),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar2;
  }
  return;
}



/* ===== 1802ac610 FUN_1802ac610 ===== */

void FUN_1802ac610(undefined4 *param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  
  if (param_5 <= param_4) {
LAB_1802ac716:
    FUN_180540530(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  puVar10 = param_1;
LAB_1802ac660:
  puVar2 = puVar10 + param_4 * 6;
  lVar8 = param_5 - param_4;
  lVar6 = param_4;
  if (lVar8 < param_4) {
    lVar6 = lVar8;
  }
  lVar9 = param_4 * 2;
  if (lVar8 < param_4) {
    lVar9 = param_5;
  }
  param_1 = puVar10 + lVar9 * 6;
  puVar7 = puVar2;
  do {
    if ((float)puVar7[2] < (float)puVar10[2] || (float)puVar7[2] == (float)puVar10[2]) {
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      *param_3 = *puVar10;
      param_3[1] = uVar3;
      param_3[2] = uVar4;
      param_3[3] = uVar5;
      puVar1 = (undefined8 *)(puVar10 + 4);
      puVar10 = puVar10 + 6;
      *(undefined8 *)(param_3 + 4) = *puVar1;
      if (puVar10 == puVar2) {
        lVar9 = (longlong)param_1 - (longlong)puVar7;
        goto LAB_1802ac6e7;
      }
    }
    else {
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *param_3 = *puVar7;
      param_3[1] = uVar3;
      param_3[2] = uVar4;
      param_3[3] = uVar5;
      puVar1 = (undefined8 *)(puVar7 + 4);
      puVar7 = puVar7 + 6;
      *(undefined8 *)(param_3 + 4) = *puVar1;
      if (puVar7 == param_1) break;
    }
    param_3 = param_3 + 6;
  } while( true );
  lVar9 = (longlong)puVar2 - (longlong)puVar10;
  puVar7 = puVar10;
LAB_1802ac6e7:
  FUN_180540530(param_3 + 6,puVar7,lVar9);
  param_3 = (undefined4 *)((longlong)param_3 + lVar9 + 0x18);
  param_5 = lVar8 - lVar6;
  puVar10 = param_1;
  if (lVar8 - lVar6 <= param_4) goto LAB_1802ac716;
  goto LAB_1802ac660;
}



/* ===== 1802ac740 FUN_1802ac740 ===== */

void FUN_1802ac740(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar15 = (longlong)param_2 - (longlong)param_1;
    FUN_180540530(param_6,param_1,lVar15);
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    puVar13 = param_2 + 3;
    param_1[2] = param_2[2];
    puVar10 = param_1 + 3;
    puVar11 = param_6;
    do {
      puVar1 = puVar10 + 3;
      if (*(float *)(puVar13 + 1) < *(float *)(puVar11 + 1) ||
          *(float *)(puVar13 + 1) == *(float *)(puVar11 + 1)) {
        uVar5 = *(undefined4 *)((longlong)puVar11 + 4);
        uVar6 = *(undefined4 *)(puVar11 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar11 + 0xc);
        *(undefined4 *)puVar10 = *(undefined4 *)puVar11;
        *(undefined4 *)((longlong)puVar10 + 4) = uVar5;
        *(undefined4 *)(puVar10 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uVar7;
        uVar3 = puVar11[2];
        puVar10[2] = uVar3;
        if (puVar11 == (undefined8 *)((longlong)param_6 + lVar15 + -0x30)) {
          lVar16 = (longlong)param_3 - (longlong)puVar13;
          uVar8 = *(undefined8 *)((longlong)param_6 + lVar15 + -0x18);
          uVar9 = *(undefined8 *)((longlong)param_6 + lVar15 + -0x10);
          uVar4 = *(undefined8 *)((longlong)param_6 + lVar15 + -8);
          FUN_180540530(puVar1,uVar3,lVar16);
          *(undefined8 *)(lVar16 + (longlong)puVar1) = uVar8;
          ((undefined8 *)(lVar16 + (longlong)puVar1))[1] = uVar9;
          *(undefined8 *)(lVar16 + 0x10 + (longlong)puVar1) = uVar4;
          return;
        }
        puVar11 = puVar11 + 3;
      }
      else {
        uVar5 = *(undefined4 *)((longlong)puVar13 + 4);
        uVar6 = *(undefined4 *)(puVar13 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar13 + 0xc);
        *(undefined4 *)puVar10 = *(undefined4 *)puVar13;
        *(undefined4 *)((longlong)puVar10 + 4) = uVar5;
        *(undefined4 *)(puVar10 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uVar7;
        puVar2 = puVar13 + 2;
        puVar13 = puVar13 + 3;
        puVar10[2] = *puVar2;
        if (puVar13 == param_3) {
          FUN_180540530(puVar1,puVar11,(longlong)param_6 + (lVar15 - (longlong)puVar11));
          return;
        }
      }
      puVar10 = puVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    if (param_5 < param_4) {
      lVar15 = param_5 >> 1;
      puVar10 = param_2 + lVar15 * 3;
      uVar12 = ((longlong)param_2 - (longlong)param_1 >> 3) * -0x5555555555555555;
      puVar13 = param_1;
      if (0 < (longlong)uVar12) {
        do {
          uVar14 = uVar12 >> 1;
          if (*(float *)(puVar10 + 1) < *(float *)(puVar13 + uVar14 * 3 + 1) ||
              *(float *)(puVar10 + 1) == *(float *)(puVar13 + uVar14 * 3 + 1)) {
            puVar13 = puVar13 + uVar14 * 3 + 3;
            uVar14 = uVar12 + (-1 - uVar14);
          }
          uVar12 = uVar14;
        } while (0 < (longlong)uVar14);
      }
      lVar16 = ((longlong)puVar13 - (longlong)param_1 >> 3) * -0x5555555555555555;
    }
    else {
      lVar16 = param_4 >> 1;
      puVar13 = param_1 + lVar16 * 3;
      uVar12 = ((longlong)param_3 - (longlong)param_2 >> 3) * -0x5555555555555555;
      puVar10 = param_2;
      if (0 < (longlong)uVar12) {
        do {
          uVar14 = uVar12 >> 1;
          if (*(float *)(puVar13 + 1) < *(float *)(puVar10 + uVar14 * 3 + 1)) {
            puVar10 = puVar10 + uVar14 * 3 + 3;
            uVar14 = uVar12 + (-1 - uVar14);
          }
          uVar12 = uVar14;
        } while (0 < (longlong)uVar14);
      }
      lVar15 = ((longlong)puVar10 - (longlong)param_2 >> 3) * -0x5555555555555555;
    }
    FUN_1802acad0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar13,puVar10,
                  lVar16,lVar15);
  }
  else {
    FUN_180540530(param_6,param_2,(longlong)param_3 - (longlong)param_2);
    uVar3 = param_2[-2];
    puVar13 = param_3 + -3;
    *puVar13 = param_2[-3];
    param_3[-2] = uVar3;
    puVar10 = param_2 + -6;
    puVar11 = (undefined8 *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0x18);
    param_3[-1] = param_2[-1];
    while( true ) {
      for (; *(float *)(puVar10 + 1) <= *(float *)(puVar11 + 1) &&
             *(float *)(puVar11 + 1) != *(float *)(puVar10 + 1); puVar10 = puVar10 + -3) {
        uVar3 = puVar10[1];
        puVar13[-3] = *puVar10;
        puVar13[-2] = uVar3;
        puVar13[-1] = puVar10[2];
        if (param_1 == puVar10) {
          uVar5 = *(undefined4 *)((longlong)puVar11 + 4);
          uVar6 = *(undefined4 *)(puVar11 + 1);
          uVar7 = *(undefined4 *)((longlong)puVar11 + 0xc);
          *(undefined4 *)(puVar13 + -6) = *(undefined4 *)puVar11;
          *(undefined4 *)((longlong)puVar13 + -0x2c) = uVar5;
          *(undefined4 *)(puVar13 + -5) = uVar6;
          *(undefined4 *)((longlong)puVar13 + -0x24) = uVar7;
          puVar13[-4] = puVar11[2];
          FUN_180540530((longlong)(puVar13 + -6) - ((longlong)puVar11 - (longlong)param_6),param_6,
                        (longlong)puVar11 - (longlong)param_6);
          return;
        }
        puVar13 = puVar13 + -3;
      }
      uVar3 = puVar11[1];
      puVar13[-3] = *puVar11;
      puVar13[-2] = uVar3;
      puVar1 = puVar11 + 2;
      puVar11 = puVar11 + -3;
      puVar13[-1] = *puVar1;
      if (param_6 == puVar11) break;
      puVar13 = puVar13 + -3;
    }
    uVar5 = *(undefined4 *)((longlong)puVar10 + 4);
    uVar6 = *(undefined4 *)(puVar10 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar10 + 0xc);
    *(undefined4 *)(puVar13 + -6) = *(undefined4 *)puVar10;
    *(undefined4 *)((longlong)puVar13 + -0x2c) = uVar5;
    *(undefined4 *)(puVar13 + -5) = uVar6;
    *(undefined4 *)((longlong)puVar13 + -0x24) = uVar7;
    puVar13[-4] = puVar10[2];
    FUN_180540530((longlong)(puVar13 + -6) - ((longlong)puVar10 - (longlong)param_1),param_1);
    uVar3 = param_6[1];
    *param_1 = *param_6;
    param_1[1] = uVar3;
    param_1[2] = param_6[2];
  }
  return;
}



/* ===== 1802acad0 FUN_1802acad0 ===== */

void FUN_1802acad0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined1 param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12)

{
  longlong lVar1;
  
  param_4 = param_4 - param_11;
  if (param_4 == 0) {
LAB_1802acbc9:
    lVar1 = param_10;
  }
  else {
    if (param_12 != 0) {
      if ((param_4 <= param_12) && (param_4 <= param_7)) {
        FUN_180540530(param_6,param_9,param_2 - param_9);
        FUN_180540530(param_9,param_2,param_10 - param_2);
        lVar1 = (param_10 - param_2) + param_9;
        FUN_180540530(lVar1,param_6,param_2 - param_9);
        goto LAB_1802acc03;
      }
      if (param_12 <= param_7) {
        lVar1 = param_10 - param_2;
        FUN_180540530(param_6,param_2,lVar1);
        FUN_180540530(param_10 - (param_2 - param_9),param_9,param_2 - param_9);
        FUN_180540530(param_9,param_6,lVar1);
        lVar1 = lVar1 + param_9;
        goto LAB_1802acc03;
      }
      if (param_9 == param_2) goto LAB_1802acbc9;
      if (param_2 != param_10) {
        FUN_1804ea090(param_9,param_2,param_10);
        lVar1 = param_9 + (param_10 - param_2 >> 3) * 8;
        goto LAB_1802acc03;
      }
    }
    lVar1 = param_9;
  }
LAB_1802acc03:
  FUN_1802ac4f0(param_1,param_9,lVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_1802ac4f0(lVar1,param_10,param_3,param_4);
  return;
}



/* ===== 1802acc90 FUN_1802acc90 ===== */

undefined8 FUN_1802acc90(void)

{
  (*DAT_180962030)();
  return 1;
}



/* ===== 1802accd0 FUN_1802accd0 ===== */

longlong * FUN_1802accd0(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int local_res18 [2];
  
  bVar3 = DAT_180cd037e == '\0';
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  local_res18[0] = param_3;
  if ((bVar3) && (DAT_1811089f0 != 0)) {
    DAT_180cd037e = '\x01';
    DAT_180cfedc4 = FUN_18038eaf0("C_CSWeaponBase","m_weaponMode");
  }
  if (((param_3 < 0) || (param_2 == 0)) || (DAT_180cfedc4 == 0)) {
    return param_1;
  }
  lVar2 = (ulonglong)DAT_180cfedc4 + param_2;
  if (lVar2 - 0x10000U < 0x7ffffffeffff) {
    *param_1 = param_2;
    iVar1 = FUN_180011200(lVar2);
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 != param_3) {
      FUN_180013280(lVar2,local_res18);
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    }
  }
  return param_1;
}



/* ===== 1802acde0 FUN_1802acde0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1802acde0(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                   int param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198 [2];
  ulonglong local_190;
  uint local_188;
  ulonglong local_180;
  longlong local_178;
  undefined1 local_170 [4];
  char local_16c;
  undefined1 local_168 [256];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  if (((param_1 == 0) || (*param_2 == 0)) || (DAT_180961cb8 == (code *)0x0)) {
    return DAT_1808acda0;
  }
  FUN_1802accd0(&local_178,param_1,param_4);
  if ((DAT_180cd037c == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cd037c = '\x01';
    _DAT_180cfee10 = FUN_18038eaf0("C_BaseEntity","m_iEFlags");
  }
  local_188 = DAT_1809619b0;
  if ((DAT_1809619b0 != 0) && (DAT_1809619b0 <= DAT_1809619ac)) {
    local_180 = (ulonglong)(DAT_1809619ac - DAT_1809619b0) + 4;
    if ((local_180 < 0x101) &&
       ((local_190 = (ulonglong)DAT_1809619b0 + param_1, local_190 - 0x10000 < 0x7ffffffeffff &&
        (((ulonglong)(DAT_1809619ac - DAT_1809619b0) - 0xfffc) + local_190 < 0x7ffffffeffff)))) {
      if (param_5 == 2) {
        uVar4 = (ulonglong)DAT_1809619bc;
        if ((((DAT_1809619bc != 0) && (DAT_1809619a0 != 0)) &&
            (lVar2 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + param_1),
            lVar2 != 0)) && ((uVar4 - 0xfffc) + lVar2 < 0x7ffffffeffff)) goto LAB_1802ad084;
      }
      else {
        if (param_5 == 1) {
          if ((DAT_180ca006e == '\0') && (DAT_1811089f0 != 0)) {
            DAT_180ca006e = '\x01';
            DAT_180ca0134 = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyStand");
            DAT_180ca0130 = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyCrouch");
            DAT_180ca0138 = FUN_18038eaf0("CCSWeaponBaseVData","m_flSpread");
          }
          uVar10 = (ulonglong)DAT_180ca0138;
          uVar4 = (ulonglong)DAT_180ca0134;
          if (((((DAT_180ca0134 == 0) || (uVar5 = (ulonglong)DAT_180ca0130, DAT_180ca0130 == 0)) ||
               ((DAT_180ca0138 == 0 ||
                (((uVar7 = (ulonglong)DAT_180cfedc4, DAT_180cfedc4 == 0 || (DAT_1809619a0 == 0)) ||
                 (lVar2 = FUN_18000f3a0((ulonglong)DAT_1809619a0 +
                                        (ulonglong)DAT_1809619c0 + param_1), lVar2 == 0)))))) ||
              ((0x7ffffffefffe < (uVar4 - 0x10000) + lVar2 ||
               (0x7ffffffefffe < (uVar5 - 0x10000) + lVar2)))) ||
             (0x7ffffffefffe < (uVar10 - 0x10000) + lVar2)) goto LAB_1802ad289;
          uVar1 = FUN_180011200(param_1 + uVar7);
          if (1 < uVar1) {
            uVar1 = 0;
          }
        }
        else {
          lVar2 = 0;
LAB_1802ad084:
          uVar1 = 0;
          uVar10 = (ulonglong)DAT_180ca0138;
          uVar4 = (ulonglong)DAT_180ca0134;
        }
        FUN_180540170(local_168,0,0x100);
        FUN_180540530(local_168,local_190,local_180);
        local_198[0] = 0;
        if (param_5 == 2) {
          lVar6 = (ulonglong)DAT_1809619bc + lVar2;
          local_198[0] = FUN_18000f3d0(lVar6 + 4);
          local_1a8 = FUN_18000f3d0(lVar6);
          FUN_180013280(lVar6 + 4,&local_1a8);
          local_1a0 = 0;
          local_19c = 0;
          local_1a8 = 0;
          uVar5 = (ulonglong)(uVar1 * 4);
        }
        else {
          local_1a0 = 0;
          local_19c = 0;
          local_1a8 = 0;
          uVar5 = (ulonglong)(uVar1 * 4);
          local_190 = CONCAT44(local_190._4_4_,uVar1 * 4);
          if (param_5 == 1) {
            lVar8 = uVar4 + uVar5 + lVar2;
            local_1a0 = FUN_18000f3d0(lVar8);
            lVar9 = DAT_180ca0130 + uVar5 + lVar2;
            local_19c = FUN_18000f3d0(lVar9);
            lVar6 = uVar5 + uVar10 + lVar2;
            local_1a8 = FUN_18000f3d0(lVar6);
            local_1a4 = 0;
            FUN_180013280(lVar8,&local_1a4);
            local_1a4 = 0;
            FUN_180013280(lVar9,&local_1a4);
            local_1a4 = 0;
            FUN_180013280(lVar6,&local_1a4);
            uVar5 = local_190 & 0xffffffff;
          }
        }
        if (DAT_180961cb0 != (code *)0x0) {
          (*DAT_180961cb0)(param_1);
        }
        fVar11 = (float)(*DAT_180961cb8)(param_1,0,0);
        if (param_5 == 2) {
          lVar6 = (ulonglong)DAT_1809619bc + 4;
          puVar3 = local_198;
LAB_1802ad250:
          FUN_180013280(lVar6 + lVar2,puVar3);
        }
        else if (param_5 == 1) {
          FUN_180013280(DAT_180ca0134 + uVar5 + lVar2,&local_1a0);
          FUN_180013280(DAT_180ca0130 + uVar5 + lVar2,&local_19c);
          lVar6 = DAT_180ca0138 + uVar5;
          puVar3 = &local_1a8;
          goto LAB_1802ad250;
        }
        FUN_180540530((ulonglong)local_188 + param_1,local_168,local_180);
        if (((uint)fVar11 & 0x7f800000) != 0x7f800000) {
          fVar12 = 0.0;
          if (0.0 <= fVar11) {
            fVar12 = fVar11;
          }
          goto LAB_1802ad291;
        }
      }
    }
  }
LAB_1802ad289:
  fVar12 = DAT_1808acda0;
LAB_1802ad291:
  if (local_16c != '\0') {
    FUN_180013280((ulonglong)DAT_180cfedc4 + local_178,local_170);
  }
  return fVar12;
}



/* ===== 1802ad2f0 FUN_1802ad2f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802ad2f0(longlong *param_1,undefined1 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined1 local_180 [4];
  char local_17c;
  undefined4 local_177;
  undefined2 local_173;
  undefined1 local_171;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = local_177;
  *(undefined2 *)(param_2 + 5) = local_173;
  param_2[7] = local_171;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 1;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  if (((((((*param_1 == 0) || (DAT_180961ca0 == 0)) || (DAT_180961ca8 == 0)) ||
        ((DAT_180961cb8 == (code *)0x0 || (DAT_180961cc0 == (code *)0x0)))) ||
       ((DAT_1809619a0 == 0 || ((DAT_1809619ac == 0 || (DAT_1809619b0 == 0)))))) ||
      (DAT_1809619b4 == 0)) || (lVar3 = FUN_1803a08e0(), lVar3 == 0)) {
    return 0;
  }
  FUN_1802accd0(&local_188,lVar3,0xffffffff);
  if ((DAT_1809619a0 == 0) ||
     (lVar4 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + lVar3 + (ulonglong)DAT_1809619c0), lVar4 == 0
     )) {
    uVar5 = 0;
    goto LAB_1802ad5bd;
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(longlong *)(param_2 + 8) = lVar3;
  *(longlong *)(param_2 + 0x10) = lVar4;
  if (((DAT_1809619a4 == 0) || (DAT_1809619a8 == 0)) || (DAT_180961998 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar1 = FUN_180011440((ulonglong)DAT_1809619a4 +
                          (ulonglong)DAT_1809619a8 + lVar3 + (ulonglong)DAT_180961998);
    uVar10 = (uint)uVar1;
  }
  *(uint *)(param_2 + 0x18) = uVar10;
  uVar2 = FUN_180011200((ulonglong)DAT_1809619b4 + lVar4);
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  uVar10 = DAT_1809619ac;
  uVar9 = FUN_18000f3d0(lVar3 + (ulonglong)DAT_1809619ac);
  *(uint *)(param_2 + 0x20) = uVar9;
  if (0x1f < *(int *)(param_2 + 0x1c) - 1U) {
    *(undefined4 *)(param_2 + 0x1c) = 1;
  }
  if ((uVar9 & 0x7f800000) == 0x7f800000) {
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  pcVar6 = DAT_180961cb8;
  if (((DAT_180961cb8 == (code *)0x0) || (DAT_1809619b0 == 0)) || (uVar10 < DAT_1809619b0)) {
LAB_1802ad585:
    uVar10 = 0;
  }
  else {
    uVar7 = (ulonglong)(uVar10 - DAT_1809619b0);
    uVar8 = uVar7 + 4;
    if (0x100 < uVar8) goto LAB_1802ad585;
    lVar4 = (ulonglong)DAT_1809619b0 + lVar3;
    if ((0x7ffffffefffe < lVar4 - 0x10000U) ||
       (0x7ffffffefffe < (uVar7 - 0xfffc) + (ulonglong)DAT_1809619b0 + lVar3)) goto LAB_1802ad585;
    FUN_180540170(local_148,0,0x100);
    FUN_180540530(local_148,lVar4,uVar8);
    if (DAT_180961cb0 != (code *)0x0) {
      (*DAT_180961cb0)(lVar3);
      pcVar6 = DAT_180961cb8;
    }
    uVar10 = (*pcVar6)(lVar3,0,0);
    FUN_180540530(lVar4,local_148,uVar8);
    if ((uVar10 & 0x7f800000) == 0x7f800000) goto LAB_1802ad585;
  }
  *(uint *)(param_2 + 0x24) = uVar10;
  uVar10 = (*DAT_180961cc0)(lVar3);
  *(uint *)(param_2 + 0x28) = uVar10;
  if ((uVar10 & 0x7f800000) == 0x7f800000) {
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  *param_2 = 1;
  uVar5 = 1;
LAB_1802ad5bd:
  if (local_17c != '\0') {
    FUN_180013280((ulonglong)DAT_180cfedc4 + local_188,local_180);
  }
  return uVar5;
}



/* ===== 1802ad610 FUN_1802ad610 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

uint FUN_1802ad610(undefined2 param_1,int param_2,undefined8 param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,uint *param_8,uint *param_9,uint param_10)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  uint *local_170;
  undefined8 *local_168;
  uint local_158 [8];
  uint local_138 [32];
  undefined8 local_b8;
  uint auStack_b0 [30];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  local_158[2] = param_2;
  if ((DAT_180961ca8 == (code *)0x0) || ((int)param_10 < 1)) {
    return 0;
  }
  local_158[4] = 0x20;
  local_158[0] = 1;
  local_138[0] = 0;
  local_138[1] = 0;
  local_138[2] = 0;
  local_138[3] = 0;
  local_138[4] = 0;
  local_138[5] = 0;
  local_138[6] = 0;
  local_138[7] = 0;
  puVar3 = local_158;
  if (0 < param_2) {
    puVar3 = local_158 + 2;
  }
  local_138[8] = 0;
  local_138[9] = 0;
  local_138[10] = 0;
  local_138[0xb] = 0;
  puVar2 = local_158 + 4;
  if (param_2 < 0x21) {
    puVar2 = puVar3;
  }
  local_138[0xc] = 0;
  local_138[0xd] = 0;
  local_138[0xe] = 0;
  local_138[0xf] = 0;
  local_138[0x10] = 0;
  local_138[0x11] = 0;
  local_138[0x12] = 0;
  local_138[0x13] = 0;
  uVar6 = *puVar2;
  local_168 = &local_b8;
  local_138[0x14] = 0;
  local_138[0x15] = 0;
  local_138[0x16] = 0;
  local_138[0x17] = 0;
  local_170 = local_138;
  local_138[0x18] = 0;
  local_138[0x19] = 0;
  local_138[0x1a] = 0;
  local_138[0x1b] = 0;
  local_138[0x1c] = 0;
  local_138[0x1d] = 0;
  local_138[0x1e] = 0;
  local_138[0x1f] = 0;
  local_178 = param_7;
  local_b8 = 0;
  auStack_b0[0] = 0;
  auStack_b0[1] = 0;
  auStack_b0[2] = 0;
  auStack_b0[3] = 0;
  auStack_b0[4] = 0;
  auStack_b0[5] = 0;
  auStack_b0[6] = 0;
  auStack_b0[7] = 0;
  auStack_b0[8] = 0;
  auStack_b0[9] = 0;
  auStack_b0[10] = 0;
  auStack_b0[0xb] = 0;
  auStack_b0[0xc] = 0;
  auStack_b0[0xd] = 0;
  auStack_b0[0xe] = 0;
  auStack_b0[0xf] = 0;
  auStack_b0[0x10] = 0;
  auStack_b0[0x11] = 0;
  auStack_b0[0x12] = 0;
  auStack_b0[0x13] = 0;
  auStack_b0[0x14] = 0;
  auStack_b0[0x15] = 0;
  auStack_b0[0x16] = 0;
  auStack_b0[0x17] = 0;
  auStack_b0[0x18] = 0;
  auStack_b0[0x19] = 0;
  auStack_b0[0x1a] = 0;
  auStack_b0[0x1b] = 0;
  auStack_b0[0x1c] = 0;
  auStack_b0[0x1d] = 0;
  local_180 = param_6;
  local_188 = param_5;
  (*DAT_180961ca8)(param_1,uVar6,param_3,param_4 + 1);
  if ((int)param_10 < (int)uVar6) {
    uVar6 = param_10;
  }
  if (0 < (int)uVar6) {
    iVar5 = 0;
    if (3 < uVar6) {
      lVar4 = (longlong)(int)(uVar6 - 1);
      puVar3 = (uint *)((longlong)&local_b8 + lVar4 * 4);
      puVar2 = param_9 + lVar4;
      if ((((((puVar3 < param_9) || (puVar2 < &local_b8)) &&
            ((local_158 + lVar4 + 8 < param_9 || (puVar2 < local_138)))) &&
           ((puVar1 = param_8 + lVar4, puVar1 < param_9 || (puVar2 < param_8)))) &&
          ((puVar3 < param_8 || (puVar1 < &local_b8)))) &&
         ((local_158 + lVar4 + 8 < param_8 || (puVar1 < local_138)))) {
        FUN_180540530(param_8,local_138,(longlong)(int)uVar6 * 4);
        FUN_180540530(param_9,&local_b8,(longlong)(int)uVar6 * 4);
        return uVar6;
      }
    }
    if (3 < (int)uVar6) {
      do {
        lVar4 = (longlong)iVar5;
        iVar5 = iVar5 + 4;
        param_8[lVar4] = local_158[lVar4 + 8];
        param_9[lVar4] = *(uint *)((longlong)&local_b8 + lVar4 * 4);
        param_8[lVar4 + 1] = local_158[lVar4 + 9];
        param_9[lVar4 + 1] = *(uint *)((longlong)&local_b8 + lVar4 * 4 + 4);
        param_8[lVar4 + 2] = local_138[lVar4 + 2];
        param_9[lVar4 + 2] = auStack_b0[lVar4];
        param_8[lVar4 + 3] = local_138[lVar4 + 3];
        param_9[lVar4 + 3] = auStack_b0[lVar4 + 1];
      } while (iVar5 < (int)(uVar6 - 3));
      if ((int)uVar6 <= iVar5) {
        return uVar6;
      }
    }
    do {
      lVar4 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      param_8[lVar4] = local_158[lVar4 + 8];
      param_9[lVar4] = *(uint *)((longlong)&local_b8 + lVar4 * 4);
    } while (iVar5 < (int)uVar6);
  }
  return uVar6;
}



/* ===== 1802ad890 FUN_1802ad890 ===== */

float * FUN_1802ad890(float *param_1,longlong *param_2,int param_3,float param_4)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined4 uVar9;
  float local_res8 [2];
  float local_res10 [2];
  int local_res18;
  float local_res20 [2];
  int local_c8;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar4 = (ulonglong)DAT_180ca0a40;
  lVar5 = *param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  if ((((lVar5 == 0) || (DAT_180962030 == 0)) || (DAT_180ca0a40 == 0)) || (param_3 < 1)) {
    local_c0 = 0;
    local_b8 = 0.0;
    if (((lVar5 == 0) || (DAT_180961cc8 == (code *)0x0)) || (DAT_180ca0a40 == 0)) {
LAB_1802aded2:
      param_1[2] = 0.0;
      *param_1 = 0.0;
      param_1[1] = 0.0;
      return param_1;
    }
    lVar5 = FUN_18000f3a0(lVar5 + uVar4);
    if (lVar5 == 0) {
    }
    else {
      (*DAT_180961cc8)(lVar5,&local_c0,0);
      if ((((uint)(float)local_c0 & 0x7f800000) == 0x7f800000) ||
         (((uint)local_c0._4_4_ & 0x7f800000) == 0x7f800000)) goto LAB_1802aded2;
    }
    param_1[2] = local_b8;
    *param_1 = (float)local_c0;
    param_1[1] = local_c0._4_4_;
    return param_1;
  }
  if ((DAT_180cd037d == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cd037d = '\x01';
    DAT_180cfedc0 = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_predictableBaseTick");
    DAT_180cfedcc = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_predictableBaseTickInterpAmount");
    DAT_180cfedc8 = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_predictableBaseAngle");
    DAT_180cfedbc = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_predictableBaseAngleVel");
    DAT_180cfedb8 = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_unpredictableBaseTick");
    DAT_180cfee14 = FUN_18038eaf0("CCSPlayer_AimPunchServices","m_unpredictableBaseAngle");
    uVar4 = (ulonglong)DAT_180ca0a40;
  }
  uVar1 = DAT_180cfee14;
  if ((((DAT_180cfedc0 == 0) || (DAT_180cfedcc == 0)) || (DAT_180cfedc8 == 0)) ||
     (((DAT_180cfedbc == 0 || (DAT_180cfedb8 == 0)) || (DAT_180cfee14 == 0)))) {
    local_c0 = 0;
    local_b8 = 0.0;
    if (((*param_2 == 0) || (DAT_180961cc8 == (code *)0x0)) || ((int)uVar4 == 0)) {
LAB_1802ade1c:
      param_1[2] = 0.0;
      *param_1 = 0.0;
      param_1[1] = 0.0;
      return param_1;
    }
    lVar5 = FUN_18000f3a0(uVar4 + *param_2);
    if (lVar5 == 0) {
    }
    else {
      (*DAT_180961cc8)(lVar5,&local_c0,0);
      if ((((uint)(float)local_c0 & 0x7f800000) == 0x7f800000) ||
         (((uint)local_c0._4_4_ & 0x7f800000) == 0x7f800000)) goto LAB_1802ade1c;
    }
    param_1[2] = local_b8;
    *param_1 = (float)local_c0;
    param_1[1] = local_c0._4_4_;
    return param_1;
  }
  lVar5 = FUN_18000f3a0(uVar4 + *param_2);
  if (lVar5 == 0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return param_1;
  }
  local_c8 = local_res18;
  local_res10[0] = 1.0;
  local_res8[0] = 0.0;
  local_90 = 0;
  local_88 = 0;
  pfVar8 = local_res8;
  if (0.0 <= param_4) {
    pfVar8 = local_res20;
  }
  pfVar6 = local_res10;
  if (param_4 <= DAT_1808ac34c) {
    pfVar6 = pfVar8;
  }
  local_c4 = *pfVar6;
  puVar7 = (undefined8 *)FUN_1800111b0(&local_c0,(ulonglong)DAT_180cfedc8 + lVar5);
  local_70 = *puVar7;
  local_68 = *(undefined4 *)(puVar7 + 1);
  puVar7 = (undefined8 *)FUN_1800111b0(&local_c0,(ulonglong)DAT_180cfedbc + lVar5);
  local_80 = *puVar7;
  local_78 = *(undefined4 *)(puVar7 + 1);
  puVar7 = (undefined8 *)FUN_1800111b0(&local_c0,(ulonglong)uVar1 + lVar5);
  local_60 = *puVar7;
  local_58 = *(undefined4 *)(puVar7 + 1);
  local_a0 = 0;
  local_98 = 0.0;
  local_b0 = 0;
  local_a8 = 0.0;
  uVar9 = FUN_18000f3d0((ulonglong)DAT_180cfedcc + lVar5);
  uVar3 = FUN_180011200((ulonglong)DAT_180cfedc0 + lVar5);
  cVar2 = FUN_1802acc90(&DAT_180cfedd0,&local_a0,uVar3,uVar9,&local_70,&local_80,&local_c8);
  if (cVar2 == '\0') {
LAB_1802adb91:
    local_c0 = 0;
    local_b8 = 0.0;
    if (((*param_2 == 0) || (DAT_180961cc8 == (code *)0x0)) || (DAT_180ca0a40 == 0)) {
LAB_1802add62:
      param_1[2] = 0.0;
      *param_1 = 0.0;
      param_1[1] = 0.0;
      return param_1;
    }
    lVar5 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca0a40);
    if (lVar5 != 0) {
      (*DAT_180961cc8)(lVar5,&local_c0,0);
      if ((((uint)(float)local_c0 & 0x7f800000) != 0x7f800000) &&
         (((uint)local_c0._4_4_ & 0x7f800000) != 0x7f800000)) {
        param_1[2] = local_b8;
        *param_1 = (float)local_c0;
        param_1[1] = local_c0._4_4_;
        return param_1;
      }
      goto LAB_1802add62;
    }
  }
  else {
    uVar3 = FUN_180011200((ulonglong)DAT_180cfedb8 + lVar5);
    cVar2 = FUN_1802acc90(&DAT_180cfee20,&local_b0,uVar3,0,&local_60,&local_90,&local_c8);
    if (cVar2 == '\0') goto LAB_1802adb91;
    if (((uint)((float)local_b0 + (float)local_a0) & 0x7f800000) != 0x7f800000) {
      if (((uint)(local_b0._4_4_ + local_a0._4_4_) & 0x7f800000) != 0x7f800000) {
        *param_1 = (float)local_b0 + (float)local_a0;
        param_1[1] = local_b0._4_4_ + local_a0._4_4_;
        param_1[2] = local_a8 + local_98;
        return param_1;
      }
    }
    local_c0 = 0;
    local_b8 = 0.0;
    if (((*param_2 == 0) || (DAT_180961cc8 == (code *)0x0)) || (DAT_180ca0a40 == 0))
    goto LAB_1802add62;
    lVar5 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca0a40);
    if (lVar5 != 0) {
      (*DAT_180961cc8)(lVar5,&local_c0,0);
      if ((((uint)(float)local_c0 & 0x7f800000) == 0x7f800000) ||
         (((uint)local_c0._4_4_ & 0x7f800000) == 0x7f800000)) goto LAB_1802add62;
      goto LAB_1802add06;
    }
  }
LAB_1802add06:
  param_1[2] = local_b8;
  *param_1 = (float)local_c0;
  param_1[1] = local_c0._4_4_;
  return param_1;
}



/* ===== 1802adef0 FUN_1802adef0 ===== */

ulonglong FUN_1802adef0(longlong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RAX;
  uint uVar6;
  undefined1 local_18 [16];
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    in_RAX = (uint *)(lVar2 - 0x10000);
    if ((uint *)0x7ffffffefffe < in_RAX) goto LAB_1802ae095;
    if ((*(byte *)(lVar2 + 0x10) & 4) != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x40);
      in_RAX = (uint *)(lVar2 - 0x10000);
      if ((in_RAX < (uint *)0x7ffffffeffff) && ((*(byte *)(lVar2 + 0x10) & 3) != 0)) {
        uVar6 = *(uint *)(lVar2 + 0x18);
        uVar4 = uVar6 & 0x7f800000;
        in_RAX = (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),uVar4 != 0x7f800000);
        if (uVar4 != 0x7f800000) {
          uVar4 = *(uint *)(lVar2 + 0x1c);
          uVar5 = uVar4 & 0x7f800000;
          in_RAX = (uint *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),uVar5 != 0x7f800000);
          if (uVar5 != 0x7f800000) goto LAB_1802adf77;
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0x30);
    if (0 < iVar1) {
      piVar3 = *(int **)(param_1 + 0x38);
      in_RAX = (uint *)(piVar3 + -0x4000);
      if ((in_RAX < (uint *)0x7ffffffeffff) && (iVar1 <= *piVar3)) {
        lVar2 = *(longlong *)(piVar3 + (longlong)iVar1 * 2);
        in_RAX = (uint *)(lVar2 - 0x10000);
        if ((in_RAX < (uint *)0x7ffffffeffff) && ((*(byte *)(lVar2 + 0x10) & 1) != 0)) {
          lVar2 = *(longlong *)(lVar2 + 0x18);
          in_RAX = (uint *)(lVar2 - 0x10000);
          if (in_RAX < (uint *)0x7ffffffeffff) {
            uVar6 = *(uint *)(lVar2 + 0x18);
            uVar4 = uVar6 & 0x7f800000;
            in_RAX = (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),uVar4 != 0x7f800000);
            if (uVar4 != 0x7f800000) {
              uVar4 = *(uint *)(lVar2 + 0x1c);
              uVar5 = uVar4 & 0x7f800000;
              in_RAX = (uint *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),uVar5 != 0x7f800000);
              if (uVar5 != 0x7f800000) {
LAB_1802adf77:
                *param_2 = uVar6;
                param_2[1] = uVar4;
                param_2[2] = 0;
                return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
              }
            }
          }
        }
      }
    }
    if ((DAT_180962170 != 0) && (DAT_180961a38 != 0)) {
      in_RAX = (uint *)FUN_180264580();
      if (in_RAX + -0x4000 < (uint *)0x7ffffffeffff) {
        in_RAX = (uint *)FUN_1800111b0(local_18,in_RAX);
        uVar6 = *in_RAX;
        if ((uVar6 & 0x7f800000) != 0x7f800000) {
          uVar4 = in_RAX[1];
          uVar5 = uVar4 & 0x7f800000;
          in_RAX = (uint *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),uVar5 != 0x7f800000);
          if (uVar5 != 0x7f800000) {
            *param_2 = uVar6;
            param_2[1] = uVar4;
            param_2[2] = 0;
            return 1;
          }
        }
      }
    }
  }
LAB_1802ae095:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



/* ===== 1802ae0b0 FUN_1802ae0b0 ===== */

undefined8 FUN_1802ae0b0(void)

{
  (*DAT_180961f50)();
  return 1;
}



/* ===== 1802ae0d0 FUN_1802ae0d0 ===== */

undefined8
FUN_1802ae0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = (*DAT_180961f58)(param_1,param_2,0x18000);
  *param_5 = uVar1;
  return 1;
}



/* ===== 1802ae100 FUN_1802ae100 ===== */

bool FUN_1802ae100(longlong param_1)

{
  int iVar1;
  undefined4 *in_stack_00000028;
  undefined4 in_stack_00000030;
  
  (*DAT_180961f60)();
  iVar1 = FUN_180011200(param_1 + 0x1c20);
  if (0 < iVar1) {
    LOCK();
    DAT_180cfee60 = DAT_180cfee60 + 1;
    UNLOCK();
    (*DAT_180961f68)(param_1,*in_stack_00000028,in_stack_00000028[1],in_stack_00000028[2],4,
                     in_stack_00000030,0);
    LOCK();
    DAT_180cfee60 = DAT_180cfee60 + -1;
    UNLOCK();
  }
  return 0 < iVar1;
}



/* ===== 1802ae180 FUN_1802ae180 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802ae180(longlong *param_1,float *param_2,undefined8 param_3,undefined8 *param_4,
                       longlong param_5)

{
  ulonglong uVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_128 [32];
  float *local_108;
  uint local_100;
  undefined4 local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_128;
  if ((((((DAT_180961f40 != 0) && (DAT_180961f48 != 0)) && (DAT_180961f50 != 0)) &&
       ((DAT_180961f60 != 0 && (DAT_180961f68 != 0)))) &&
      ((DAT_180cfee68 != 0 && ((DAT_180cfee80 != 0 && (DAT_1809619a0 != 0)))))) && (0.0 < *param_2))
  {
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_108 = (float *)CONCAT71(local_108._1_7_,0xf);
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
    local_68 = 0;
    uStack_60 = 0;
    cVar3 = FUN_1802ae0b0(&local_d8,*param_1,0x1c300b,3);
    if (cVar3 != '\0') {
      uStack_a0 = uStack_a0 | 0x200;
      local_c8 = local_c8 | 0x4000000000;
      FUN_180540170(&DAT_180cfee90,0,0x1d60);
      fVar2 = DAT_1808ac34c;
      _DAT_180cfeea0 = 0x80;
      _DAT_180cfeea4 = 0x80000000;
      _DAT_180d00ac0 = 8;
      _DAT_180d00ac4 = 0x80000000;
      local_f8 = 0x42500000;
      _DAT_180cfee94 = 0x42500000;
      _DAT_180cfee98 = &DAT_180cfeea8;
      _DAT_180d00ab8 = &DAT_180d00ac8;
      local_f0[0] = 0x3f800000;
      _DAT_180d00ba0 = 0x3f800000;
      fVar12 = param_2[3];
      local_e0 = fVar12 * *(float *)(param_4 + 1);
      local_e8 = CONCAT44((float)((ulonglong)*param_4 >> 0x20) * fVar12,(float)*param_4 * fVar12);
      if ((*param_1 == 0) || (DAT_180ca09f4 == 0)) {
        local_100 = 0;
      }
      else {
        bVar4 = FUN_180011220(*param_1 + (ulonglong)DAT_180ca09f4);
        local_100 = (uint)bVar4;
      }
      local_108 = param_2;
      cVar3 = FUN_1802ae100(&DAT_180cfee90,param_3,&local_e8,&local_d8);
      if (cVar3 != '\0') {
        iVar5 = FUN_180011200(&DAT_180d00ab0);
        lVar7 = FUN_18000f3a0(&DAT_180d00ab8);
        lVar8 = FUN_18000f3a0(&DAT_180cfee98);
        if ((0 < iVar5) && (lVar7 != 0)) {
          uVar11 = 0;
          while( true ) {
            if (0xf < (uint)uVar11) {
              return uVar11;
            }
            uVar1 = uVar11 * 0x18;
            fVar12 = (float)FUN_18000f3d0(lVar7 + 8 + uVar1);
            if (fVar12 <= 0.0) break;
            *(float *)(param_5 + 8 + uVar1) = fVar12;
            uVar10 = (uint)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            uVar13 = FUN_18000f3d0(uVar1 + lVar7);
            *(undefined4 *)(param_5 + 0xc + uVar1) = uVar13;
            uVar13 = FUN_18000f3d0((uVar1 | 4) + lVar7);
            *(undefined4 *)(param_5 + 0x10 + uVar1) = uVar13;
            bVar4 = FUN_180011220(lVar7 + 0x14 + uVar1);
            bVar4 = bVar4 & 1;
            *(byte *)(param_5 + 0x14 + uVar1) = bVar4;
            if ((bVar4 == 0) || (*(float *)(param_5 + 0x10 + uVar1) != fVar2)) {
              *(undefined1 *)(param_5 + 0x15 + uVar1) = 0;
              if ((bVar4 == 0) && (lVar8 != 0)) {
                uVar6 = FUN_180011440(lVar7 + 0x10 + uVar1);
                uVar13 = FUN_180011200((ulonglong)(uVar6 & 0x7fff) * 0x38 + 0x2c + lVar8);
                puVar9 = (undefined8 *)FUN_1803a0940(local_f0,uVar13);
                *(undefined8 *)(param_5 + uVar1) = *puVar9;
              }
            }
            else {
              *(undefined1 *)(param_5 + 0x15 + uVar1) = 1;
            }
            if (*(char *)(param_5 + 0x15 + uVar1) != '\0') {
              return uVar11;
            }
            if (iVar5 <= (int)uVar10) {
              return uVar11;
            }
          }
          return uVar11;
        }
      }
    }
  }
  return 0;
}



/* ===== 1802ae4f0 FUN_1802ae4f0 ===== */

bool FUN_1802ae4f0(undefined8 param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float extraout_XMM0_Da;
  
  if (((((DAT_180961f40 != 0) && (DAT_180961f48 != 0)) && (DAT_180961f50 != 0)) &&
      ((DAT_180961f60 != 0 && (DAT_180961f68 != 0)))) &&
     ((DAT_180cfee68 != 0 && ((DAT_180cfee80 != 0 && (DAT_1809619a0 != 0)))))) {
    lVar4 = FUN_1803a08e0();
    if (lVar4 != 0) {
      lVar4 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + lVar4 + (ulonglong)DAT_1809619c0);
      if (lVar4 != 0) {
        iVar3 = FUN_180011200((ulonglong)DAT_180cfee80 + lVar4);
        if (iVar3 - 1U < 6) {
          iVar3 = FUN_180011200((ulonglong)DAT_180cfee68 + lVar4);
          uVar2 = DAT_180cfee6c;
          uVar5 = (ulonglong)DAT_180cfee6c;
          *param_2 = (float)iVar3;
          if (uVar2 == 0) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = (float)FUN_18000f3d0(lVar4 + uVar5);
          }
          uVar2 = DAT_180cfee70;
          uVar5 = (ulonglong)DAT_180cfee70;
          param_2[1] = fVar6;
          if (uVar2 == 0) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = (float)FUN_18000f3d0(lVar4 + uVar5);
          }
          uVar2 = DAT_180cfee74;
          uVar5 = (ulonglong)DAT_180cfee74;
          param_2[2] = fVar6;
          if (uVar2 == 0) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = (float)FUN_18000f3d0(lVar4 + uVar5);
          }
          uVar2 = DAT_180cfee78;
          fVar1 = DAT_1808ac34c;
          uVar5 = (ulonglong)DAT_180cfee78;
          param_2[3] = fVar6;
          if (uVar2 == 0) {
            fVar6 = fVar1;
          }
          else {
            fVar6 = (float)FUN_18000f3d0(lVar4 + uVar5);
          }
          uVar2 = DAT_180cfee7c;
          uVar5 = (ulonglong)DAT_180cfee7c;
          param_2[4] = fVar6;
          if (uVar2 == 0) {
            fVar6 = DAT_1808ac710;
          }
          else {
            FUN_18000f3d0(lVar4 + uVar5);
            fVar6 = extraout_XMM0_Da;
          }
          param_2[5] = fVar6;
          if (param_2[3] <= fVar1) {
            param_2[3] = 8192.0;
          }
          return 0.0 < *param_2;
        }
      }
    }
  }
  return false;
}



/* ===== 1802ae6c0 FUN_1802ae6c0 ===== */

undefined1 FUN_1802ae6c0(void)

{
  (*DAT_180961f98)();
  return 1;
}



/* ===== 1802ae6f0 FUN_1802ae6f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802ae6f0(longlong *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  float *pfVar2;
  int local_res8;
  undefined4 local_resc;
  undefined8 local_28;
  float local_20;
  undefined1 local_18 [16];
  
  if (((*param_1 != 0) && (DAT_180961f98 != 0)) && (0 < param_2)) {
    local_28 = 0;
    local_20 = 0.0;
    local_res8 = param_2;
    local_resc = param_3;
    cVar1 = FUN_1802ae6c0(&local_28,*param_1,&local_res8);
    if (((cVar1 != '\0') && (((uint)(float)local_28 & 0x7f800000) != 0x7f800000)) &&
       ((((uint)local_28._4_4_ & 0x7f800000) != 0x7f800000 &&
        (((uint)local_20 & 0x7f800000) != 0x7f800000)))) {
      pfVar2 = (float *)FUN_1802ae9b0(local_18,param_1);
      if ((local_28._4_4_ - pfVar2[1]) * (local_28._4_4_ - pfVar2[1]) +
          ((float)local_28 - *pfVar2) * ((float)local_28 - *pfVar2) +
          (local_20 - pfVar2[2]) * (local_20 - pfVar2[2]) <= _DAT_1808acca0) {
        *param_4 = local_28;
        *(float *)(param_4 + 1) = local_20;
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 1802ae820 FUN_1802ae820 ===== */

void FUN_1802ae820(void)

{
  (*DAT_180962028)();
  return;
}



/* ===== 1802ae840 FUN_1802ae840 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1802ae840(int *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (((*param_2 != 0) && (DAT_180962018 != 0)) && (DAT_180962020 != 0)) {
    uVar2 = FUN_180011200();
    lVar1 = DAT_180962018;
    uVar4 = (ulonglong)(uVar2 % 10);
    if (DAT_180962018 + -0xffec + uVar4 * 0x28 < 0x7ffffffeffff) {
      iVar3 = FUN_180011200(DAT_180962018 + 0xc + uVar4 * 0x28);
      *param_1 = iVar3;
      iVar3 = FUN_18000f3d0(lVar1 + 0x10 + uVar4 * 0x28);
      bVar5 = DAT_180962028 != 0;
      param_1[1] = iVar3;
      if (bVar5) {
        fVar6 = (float)FUN_1802ae820(*param_2);
        if (((0 < *param_1) && (((uint)fVar6 & 0x7f800000) != 0x7f800000)) &&
           ((fVar8 = 0.0, 0.0 <= fVar6 && (fVar6 <= DAT_1808ac1f4)))) {
          fVar6 = fVar6 * DAT_1808acab0;
          fVar7 = (float)FUN_180519080(fVar6);
          if (DAT_1808abfa0 <= (float)((uint)(fVar6 - fVar7) & _DAT_1808ade90)) {
            fVar8 = (float)FUN_18053f0d0(fVar6);
            iVar3 = (int)fVar8;
            fVar8 = fVar6 - (float)iVar3;
          }
          else {
            iVar3 = (int)fVar7;
          }
          param_1[2] = iVar3;
          param_1[3] = (int)fVar8;
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
    }
  }
  return param_1;
}



/* ===== 1802ae9b0 FUN_1802ae9b0 ===== */

float * FUN_1802ae9b0(float *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_58 [80];
  
  if ((((*param_2 == 0) || (DAT_180ca09f8 == 0)) ||
      (lVar3 = FUN_18000f3a0(*param_2 + (ulonglong)DAT_180ca09f8), lVar3 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar5 = 0.0;
  }
  else {
    pfVar4 = (float *)FUN_1800111b0(local_58,lVar3 + (ulonglong)DAT_180ca0950);
    fVar6 = *pfVar4;
    fVar7 = pfVar4[1];
    fVar5 = pfVar4[2];
  }
  fVar2 = DAT_1808acab0;
  if (DAT_180ca0a34 != 0) {
    pfVar4 = (float *)FUN_1800111b0(local_58,(ulonglong)DAT_180ca0a34 + *param_2);
    fVar1 = pfVar4[2];
    fVar2 = DAT_1808acab0;
    if (((((uint)fVar1 & 0x7f800000) != 0x7f800000) && (0.0 < fVar1)) && (fVar1 < DAT_1808acb28)) {
      fVar7 = fVar7 + pfVar4[1];
      fVar6 = fVar6 + *pfVar4;
      fVar2 = fVar1;
    }
  }
  *param_1 = fVar6;
  param_1[1] = fVar7;
  param_1[2] = fVar5 + fVar2;
  return param_1;
}



/* ===== 1802aead0 FUN_1802aead0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1802aead0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             float *param_5)

{
  char cVar1;
  longlong lVar2;
  float extraout_XMM0_Da;
  float fVar3;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined1 *local_260;
  float local_258;
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
  undefined1 local_188 [132];
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  float local_f0;
  float local_dc;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_288;
  if (((((DAT_180961f40 != 0) && (DAT_180961f48 != 0)) && (DAT_180961f50 != 0)) &&
      ((DAT_180961f60 != 0 && (DAT_180961f68 != 0)))) &&
     ((DAT_180cfee68 != 0 && ((DAT_180cfee80 != 0 && (DAT_1809619a0 != 0)))))) {
    lVar2 = FUN_18000f3a0();
    if (lVar2 != 0) {
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
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      FUN_180540170(local_188,0,0x140);
      local_268 = (undefined8 *)CONCAT71(local_268._1_7_,7);
      cVar1 = FUN_1802ae0b0(&local_208,param_3,0x1c3003,4);
      if (cVar1 != '\0') {
        local_260 = local_188;
        local_268 = &local_208;
        cVar1 = FUN_180044180(lVar2,&local_248,param_1,param_2);
        if (cVar1 != '\0') {
          *param_4 = local_104;
          local_258 = local_dc;
          *(undefined4 *)(param_4 + 1) = local_fc;
          *(undefined8 *)param_5 = local_f8;
          fVar3 = DAT_1808ac34c;
          param_5[2] = local_f0;
          if (local_dc < fVar3) {
            fVar3 = param_5[1] * param_5[1] + *param_5 * *param_5 + param_5[2] * param_5[2];
            if (fVar3 < 0.0) {
              FUN_18051af10(fVar3);
              fVar3 = extraout_XMM0_Da;
            }
            else {
              fVar3 = SQRT(fVar3);
            }
            if (DAT_1808abfbc < fVar3) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



/* ===== 1802aed00 FUN_1802aed00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802aed00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,
                       undefined8 *param_4,undefined8 param_5,undefined8 param_6,undefined1 param_7,
                       undefined1 param_8,uint *param_9,undefined8 *param_10)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208 [7];
  undefined1 uStack_1d0;
  byte bStack_1cf;
  undefined6 uStack_1ce;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 local_180;
  uint local_138;
  undefined8 local_104;
  uint local_fc;
  undefined8 local_f8;
  uint local_f0;
  uint local_dc;
  char local_cd;
  ulonglong local_48;
  
  uVar4 = _UNK_1808ad2cc;
  uVar3 = _UNK_1808ad2c8;
  uVar2 = _DAT_1808ad2c0;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_278;
  param_9[1] = _UNK_1808ad2c4;
  *param_9 = uVar2;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  param_9[7] = 0;
  param_9[8] = 0;
  param_9[9] = 0;
  param_9[10] = 0;
  *(undefined2 *)(param_9 + 0xb) = 0;
  *(undefined2 *)((longlong)param_9 + 0x2e) = uStack_220._6_2_;
  uVar6 = (ulonglong)local_218._4_4_;
  param_9[0xd] = local_218._4_4_;
  param_9[2] = uVar3;
  param_9[3] = uVar4;
  param_9[4] = 0;
  param_9[5] = 0;
  param_9[6] = 0;
  param_9[0xc] = 0x3f800000;
  if ((((DAT_180961f40 != 0) && (DAT_180961f48 != 0)) && (DAT_180961f50 != 0)) &&
     (((DAT_180961f60 != 0 && (DAT_180961f68 != 0)) &&
      ((DAT_180cfee68 != 0 && ((DAT_180cfee80 != 0 && (DAT_1809619a0 != 0)))))))) {
    lVar5 = FUN_18000f3a0();
    uVar6 = 0;
    if (lVar5 != 0) {
      local_208[0] = 0;
      local_208[1] = 0;
      local_208[2] = 0;
      local_208[3] = 0;
      local_208[4] = 0;
      local_208[5] = 0;
      local_208[6] = 0;
      _uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_248 = 0;
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      FUN_180540170(&local_188,0,0x140);
      uStack_240 = *(undefined4 *)(param_3 + 1);
      local_248 = *param_3;
      uStack_234 = *(undefined4 *)(param_4 + 1);
      local_258 = (longlong *)CONCAT71(local_258._1_7_,param_8);
      uStack_23c = (undefined4)*param_4;
      uStack_238 = (undefined4)((ulonglong)*param_4 >> 0x20);
      uStack_220 = CONCAT71(uStack_220._1_7_,2);
      uVar6 = FUN_1802ae0b0(local_208,param_5,param_6,param_7);
      if ((char)uVar6 != '\0') {
        if (param_10 != (undefined8 *)0x0) {
          local_208[2] = *param_10;
          local_208[3] = param_10[1];
          bVar1 = bStack_1cf | *(byte *)(param_10 + 2);
          _uStack_1d0 = CONCAT11(bVar1,uStack_1d0);
          if (param_10[3] != 0) {
            local_1c8 = CONCAT71(local_1c8._1_7_,1);
            local_208[0] = param_10[3];
          }
        }
        local_250 = &local_188;
        local_258 = local_208;
        uVar6 = FUN_180044180(lVar5,&local_248,param_1,param_2);
        if ((char)uVar6 != '\0') {
          *param_9 = local_dc;
          *(undefined8 *)(param_9 + 1) = local_104;
          param_9[3] = local_fc;
          *(undefined8 *)(param_9 + 4) = local_f8;
          param_9[6] = local_f0;
          *(undefined8 *)(param_9 + 8) = local_180;
          param_9[10] = local_138;
          *(bool *)((longlong)param_9 + 0x2d) = local_cd != '\0';
          *(bool *)(param_9 + 0xb) = local_cd != '\0';
          if ((((local_188 - 0x10000U < 0x7ffffffeffff) &&
               (fVar7 = (float)FUN_18000f3d0(local_188 + 0x28),
               ((uint)fVar7 & 0x7f800000) != 0x7f800000)) && (0.0 < fVar7)) &&
             (fVar7 <= DAT_1808ac710)) {
            param_9[0xc] = (uint)fVar7;
          }
          return (ulonglong)
                 CONCAT31((int3)((*param_9 & 0x7f800000) >> 8),(*param_9 & 0x7f800000) == 0x7f800000
                         ) ^ 1;
        }
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



/* ===== 1802af020 FUN_1802af020 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802af020(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 param_6,undefined1 param_7,uint *param_8,
                       undefined8 *param_9)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_278 [32];
  longlong *local_258;
  undefined1 *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208 [7];
  undefined1 uStack_1d0;
  byte bStack_1cf;
  undefined6 uStack_1ce;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [8];
  undefined8 local_180;
  undefined8 local_104;
  uint local_fc;
  undefined8 local_f8;
  uint local_f0;
  uint local_dc;
  char local_cd;
  ulonglong local_48;
  
  uVar4 = _UNK_1808ad2cc;
  uVar3 = _UNK_1808ad2c8;
  uVar2 = _DAT_1808ad2c0;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_278;
  param_8[1] = _UNK_1808ad2c4;
  *param_8 = uVar2;
  local_238 = 0;
  uStack_230 = 0;
  param_8[7] = 0;
  param_8[8] = 0;
  param_8[9] = 0;
  param_8[10] = 0;
  *(undefined2 *)(param_8 + 0xb) = 0;
  *(undefined2 *)((longlong)param_8 + 0x2e) = uStack_220._6_2_;
  uVar6 = (ulonglong)local_218._4_4_;
  param_8[0xd] = local_218._4_4_;
  param_8[2] = uVar3;
  param_8[3] = uVar4;
  param_8[4] = 0;
  param_8[5] = 0;
  param_8[6] = 0;
  param_8[0xc] = 0x3f800000;
  if (((((DAT_180961f40 != 0) && (DAT_180961f48 != 0)) && (DAT_180961f50 != 0)) &&
      ((DAT_180961f60 != 0 && (DAT_180961f68 != 0)))) &&
     ((DAT_180cfee68 != 0 && ((DAT_180cfee80 != 0 && (DAT_1809619a0 != 0)))))) {
    lVar5 = FUN_18000f3a0();
    uVar6 = 0;
    if (lVar5 != 0) {
      local_208[0] = 0;
      local_208[1] = 0;
      local_208[2] = 0;
      local_208[3] = 0;
      local_208[4] = 0;
      local_208[5] = 0;
      local_208[6] = 0;
      _uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      FUN_180540170(local_188,0,0x140);
      uStack_240 = CONCAT44(param_3,(undefined4)uStack_240);
      local_258 = (longlong *)CONCAT71(local_258._1_7_,param_7);
      uStack_220 = CONCAT71(uStack_220._1_7_,1);
      uVar6 = FUN_1802ae0b0(local_208,param_4,param_5,param_6);
      if ((char)uVar6 != '\0') {
        if (param_9 != (undefined8 *)0x0) {
          local_208[2] = *param_9;
          local_208[3] = param_9[1];
          bVar1 = bStack_1cf | *(byte *)(param_9 + 2);
          _uStack_1d0 = CONCAT11(bVar1,uStack_1d0);
          if (param_9[3] != 0) {
            local_1c8 = CONCAT71(local_1c8._1_7_,1);
            local_208[0] = param_9[3];
          }
        }
        local_250 = local_188;
        local_258 = local_208;
        uVar6 = FUN_180044180(lVar5,&local_248,param_1,param_2);
        if ((char)uVar6 != '\0') {
          *param_8 = local_dc;
          *(undefined8 *)(param_8 + 1) = local_104;
          param_8[3] = local_fc;
          *(undefined8 *)(param_8 + 4) = local_f8;
          param_8[6] = local_f0;
          *(undefined8 *)(param_8 + 8) = local_180;
          *(bool *)((longlong)param_8 + 0x2d) = local_cd != '\0';
          *(bool *)(param_8 + 0xb) = local_cd != '\0';
          return (ulonglong)
                 CONCAT31((int3)((*param_8 & 0x7f800000) >> 8),(*param_8 & 0x7f800000) == 0x7f800000
                         ) ^ 1;
        }
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



/* ===== 1802af2c0 FUN_1802af2c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802af2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined1 *local_240;
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
  undefined1 local_168 [8];
  undefined8 local_160;
  float local_bc;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_268;
  if ((((((DAT_180961f40 != 0) && (DAT_180961f48 != 0)) && (DAT_180961f50 != 0)) &&
       ((DAT_180961f60 != 0 && (DAT_180961f68 != 0)))) &&
      ((DAT_180cfee68 != 0 && ((DAT_180cfee80 != 0 && (DAT_1809619a0 != 0)))))) &&
     (lVar2 = FUN_18000f3a0(), lVar2 != 0)) {
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
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    FUN_180540170(local_168,0,0x140);
    local_248 = (undefined8 *)CONCAT71(local_248._1_7_,7);
    cVar1 = FUN_1802ae0b0(&local_1e8,param_3,0x1c3003,4);
    if (cVar1 != '\0') {
      local_240 = local_168;
      local_248 = &local_1e8;
      cVar1 = FUN_180044180(lVar2,&local_228,param_1,param_2);
      if ((cVar1 != '\0') && (local_bc < DAT_1808ac34c)) {
        return local_160;
      }
    }
  }
  return 0;
}



/* ===== 1802af480 FUN_1802af480 ===== */

void FUN_1802af480(longlong *param_1,longlong param_2,float param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  if (param_4 == 1) {
    param_3 = param_3 * *(float *)(param_2 + 0x14);
  }
  else if (param_4 == 3) {
    param_3 = param_3 * DAT_1808ac3d4;
  }
  else if ((param_4 == 6) || (param_4 == 7)) {
    param_3 = param_3 * DAT_1808ac27c;
  }
  if ((*param_1 == 0) || (DAT_180ca0a14 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_180011200((ulonglong)DAT_180ca0a14 + *param_1);
  }
  if ((param_4 - 1U < 5) || (param_4 == 8)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((iVar3 < 1) || (!bVar1)) goto LAB_1802af58b;
  if (param_4 == 1) {
    if ((DAT_180cfee88 == 0) || (uVar5 = (ulonglong)DAT_180cfee8c, DAT_180cfee8c == 0)) {
LAB_1802af53b:
      if (DAT_180cfee84 == 0) goto LAB_1802af58b;
      lVar4 = (ulonglong)DAT_180cfee84 + *param_1;
    }
    else {
      lVar4 = FUN_18000f3a0((ulonglong)DAT_180cfee88 + *param_1);
      if (lVar4 == 0) goto LAB_1802af53b;
      lVar4 = lVar4 + uVar5;
    }
    cVar2 = FUN_180011220(lVar4);
    if (cVar2 == '\0') goto LAB_1802af58b;
  }
  fVar6 = (float)iVar3;
  fVar7 = param_3 * *(float *)(param_2 + 0x10) * DAT_1808ac1f4;
  if ((param_3 - fVar7) * DAT_1808ac1f4 <= fVar6) {
    param_3 = fVar7;
  }
  else {
    param_3 = param_3 - (fVar6 + fVar6);
  }
LAB_1802af58b:
  FUN_18053f0d0(param_3);
  return;
}



/* ===== 1802af5a0 FUN_1802af5a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1802af5a0(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,longlong *param_5,
             undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_228 [32];
  longlong *local_208;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  char acStack_1d4 [364];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_228;
  fVar7 = *param_4 - *param_3;
  fVar6 = param_4[1] - param_3[1];
  fVar8 = param_4[2] - param_3[2];
  fVar5 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
  if (fVar5 < 0.0) {
    fVar5 = (float)FUN_18051af10(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  if (DAT_1808abf8c <= fVar5) {
    fVar5 = DAT_1808ac34c / fVar5;
    local_1f0 = fVar8 * fVar5;
    local_1f4 = fVar6 * fVar5;
    local_1f8 = fVar7 * fVar5;
  }
  else {
    local_1f0 = 0.0;
    local_1f4 = 0.0;
    local_1f8 = 0.0;
  }
  if (((local_1f8 != 0.0) || (local_1f4 != 0.0)) || (local_1f0 != 0.0)) {
    FUN_180540170(&local_1e8,0,0x180);
    FUN_1802afd60(&local_1e8);
    local_208 = &local_1e8;
    iVar1 = FUN_1802ae180(param_1,param_2,param_3,&local_1f8);
    uVar3 = 0;
    if (0 < iVar1) {
      do {
        if (acStack_1d4[uVar3 * 0x18] == '\0') {
          if ((&lStack_1e0)[uVar3 * 3 + -1] == *param_5) {
            uVar4 = FUN_1802af480(param_5,param_2,(int)(&lStack_1e0)[uVar3 * 3],param_6);
            return uVar4;
          }
        }
        else if (acStack_1d4[uVar3 * 0x18 + 1] != '\0') {
          return 0;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while ((int)uVar2 < iVar1);
    }
  }
  return 0;
}



/* ===== 1802af770 FUN_1802af770 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1802af770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5,int param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b4 [4];
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [3];
  undefined1 auStack_19c [4];
  undefined8 uStack_198;
  undefined4 auStack_190 [3];
  undefined1 auStack_184 [4];
  undefined8 uStack_180;
  undefined4 auStack_178 [3];
  undefined1 auStack_16c [292];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  if ((param_5 == 0) || (param_6 < 1)) {
    iVar3 = 0;
  }
  else {
    FUN_180540170(&local_1c8,0,0x180);
    FUN_1802afd60(&local_1c8);
    local_1d8 = &local_1c8;
    iVar3 = FUN_1802ae180(param_1,param_2,param_3,param_4);
    if (param_6 < iVar3) {
      iVar3 = param_6;
    }
    iVar5 = 0;
    if (3 < iVar3) {
      do {
        lVar4 = (longlong)iVar5;
        iVar5 = iVar5 + 4;
        *(undefined4 *)(param_5 + lVar4 * 0x18) =
             *(undefined4 *)((longlong)&uStack_1c0 + (lVar4 * 6 + 1) * 4);
        *(undefined4 *)(param_5 + 4 + lVar4 * 0x18) = *(undefined4 *)(&uStack_1c0 + lVar4 * 3 + 1);
        *(undefined4 *)(param_5 + 8 + lVar4 * 0x18) = *(undefined4 *)(&uStack_1c0 + lVar4 * 3);
        *(undefined1 *)(param_5 + 0xc + lVar4 * 0x18) = auStack_1b4[lVar4 * 0x18];
        *(undefined1 *)(param_5 + 0xd + lVar4 * 0x18) = auStack_1b4[lVar4 * 0x18 + 1];
        *(undefined8 *)(param_5 + 0x10 + lVar4 * 0x18) = (&uStack_1c0)[lVar4 * 3 + -1];
        *(undefined4 *)(param_5 + 0x18 + lVar4 * 0x18) = auStack_1a8[lVar4 * 6 + 1];
        *(undefined4 *)(param_5 + 0x1c + lVar4 * 0x18) = auStack_1a8[lVar4 * 6 + 2];
        *(undefined4 *)(param_5 + 0x20 + lVar4 * 0x18) = auStack_1a8[lVar4 * 6];
        *(undefined1 *)(param_5 + 0x24 + lVar4 * 0x18) = auStack_19c[lVar4 * 0x18];
        *(undefined1 *)(param_5 + 0x25 + lVar4 * 0x18) = auStack_19c[lVar4 * 0x18 + 1];
        *(undefined8 *)(param_5 + 0x28 + lVar4 * 0x18) =
             *(undefined8 *)(auStack_1b4 + lVar4 * 0x18 + 4);
        *(undefined4 *)(param_5 + 0x30 + lVar4 * 0x18) = auStack_190[lVar4 * 6 + 1];
        *(undefined4 *)(param_5 + 0x34 + lVar4 * 0x18) = auStack_190[lVar4 * 6 + 2];
        *(undefined4 *)(param_5 + 0x38 + lVar4 * 0x18) = auStack_190[lVar4 * 6];
        *(undefined1 *)(param_5 + 0x3c + lVar4 * 0x18) = auStack_184[lVar4 * 0x18];
        *(undefined1 *)(param_5 + 0x3d + lVar4 * 0x18) = auStack_184[lVar4 * 0x18 + 1];
        *(undefined8 *)(param_5 + 0x40 + lVar4 * 0x18) =
             *(undefined8 *)(auStack_19c + lVar4 * 0x18 + 4);
        *(undefined4 *)(param_5 + 0x48 + lVar4 * 0x18) = auStack_178[lVar4 * 6 + 1];
        *(undefined4 *)(param_5 + 0x4c + lVar4 * 0x18) = auStack_178[lVar4 * 6 + 2];
        *(undefined4 *)(param_5 + 0x50 + lVar4 * 0x18) = auStack_178[lVar4 * 6];
        *(undefined1 *)(param_5 + 0x54 + lVar4 * 0x18) = auStack_16c[lVar4 * 0x18];
        *(undefined1 *)(param_5 + 0x55 + lVar4 * 0x18) = auStack_16c[lVar4 * 0x18 + 1];
        *(undefined8 *)(param_5 + 0x58 + lVar4 * 0x18) =
             *(undefined8 *)(auStack_184 + lVar4 * 0x18 + 4);
      } while (iVar5 < iVar3 + -3);
    }
    for (; iVar5 < iVar3; iVar5 = iVar5 + 1) {
      lVar4 = (longlong)iVar5;
      uVar1 = *(undefined4 *)((longlong)&uStack_1c0 + (lVar4 * 6 + 1) * 4);
      *(undefined4 *)(param_5 + 8 + lVar4 * 0x18) = *(undefined4 *)(&uStack_1c0 + lVar4 * 3);
      *(undefined1 *)(param_5 + 0xc + lVar4 * 0x18) = auStack_1b4[lVar4 * 0x18];
      *(undefined1 *)(param_5 + 0xd + lVar4 * 0x18) = auStack_1b4[lVar4 * 0x18 + 1];
      uVar2 = (&uStack_1c0)[lVar4 * 3 + -1];
      *(undefined4 *)(param_5 + lVar4 * 0x18) = uVar1;
      uVar1 = *(undefined4 *)(&uStack_1c0 + lVar4 * 3 + 1);
      *(undefined8 *)(param_5 + 0x10 + lVar4 * 0x18) = uVar2;
      *(undefined4 *)(param_5 + 4 + lVar4 * 0x18) = uVar1;
    }
  }
  return iVar3;
}



/* ===== 1802af980 FUN_1802af980 ===== */

undefined8 FUN_1802af980(undefined8 param_1)

{
  undefined4 *in_stack_00000028;
  undefined4 in_stack_00000030;
  
  (*DAT_180961f60)();
  LOCK();
  DAT_180cfee60 = DAT_180cfee60 + 1;
  UNLOCK();
  (*DAT_180961f68)(param_1,*in_stack_00000028,in_stack_00000028[1],in_stack_00000028[2],
                   in_stack_00000030,in_stack_00000028[3],0);
  LOCK();
  DAT_180cfee60 = DAT_180cfee60 + -1;
  UNLOCK();
  return 1;
}



/* ===== 1802afa00 FUN_1802afa00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1802afa00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,longlong param_6)

{
  ulonglong uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  int local_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined4 local_e8 [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_f0 = param_6;
  if ((((DAT_180961f40 != 0) && (DAT_180961f48 != 0)) && (DAT_180961f50 != 0)) &&
     ((((DAT_180961f60 != 0 && (DAT_180961f68 != 0)) &&
       ((DAT_180cfee68 != 0 && ((DAT_180cfee80 != 0 && (DAT_1809619a0 != 0)))))) && (param_1 != 0)))
     ) {
    local_108 = CONCAT71(local_108._1_7_,0xf);
    uVar14 = 0x1c200b;
    if (0 < param_5) {
      uVar14 = 0x1c300b;
    }
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
    local_68 = 0;
    uStack_60 = 0;
    cVar2 = FUN_1802ae0b0(&local_d8,param_1,uVar14,3);
    if (cVar2 != '\0') {
      uStack_a0 = uStack_a0 | 0x200;
      local_c8 = local_c8 | 0x4000000000;
      FUN_180540170(&DAT_180cfee90,0,0x1d60);
      local_f8 = 0x42500000;
      _DAT_180cfee94 = 0x42500000;
      local_e8[0] = 0x3f800000;
      _DAT_180cfee98 = &DAT_180cfeea8;
      local_100 = param_5;
      _DAT_180d00ab8 = &DAT_180d00ac8;
      _DAT_180d00ba0 = 0x3f800000;
      _DAT_180cfeea0 = 0x80;
      _DAT_180cfeea4 = 0x80000000;
      _DAT_180d00ac0 = 8;
      _DAT_180d00ac4 = 0x80000000;
      local_108 = param_2;
      cVar2 = FUN_1802af980(&DAT_180cfee90,param_3,param_4,&local_d8);
      if (cVar2 != '\0') {
        iVar4 = FUN_180011200(&DAT_180d00ab0);
        lVar6 = FUN_18000f3a0(&DAT_180d00ab8);
        lVar7 = FUN_18000f3a0(&DAT_180cfee98);
        if (((iVar4 < 1) || (lVar6 == 0)) || (lVar7 == 0)) {
          return 0;
        }
        iVar13 = 0;
        uVar12 = 0;
        do {
          if (0xf < iVar13) {
            return iVar13;
          }
          uVar1 = uVar12 * 0x18;
          uVar8 = FUN_180011220(lVar6 + 0x14 + uVar1);
          if ((uVar8 & 1) == 0) {
            uVar3 = FUN_180011440(lVar6 + 0x12 + uVar1);
            lVar15 = (ulonglong)uVar3 * 0x38;
            iVar5 = FUN_180011200(lVar7 + 0x2c + lVar15);
            if (iVar5 != -1) {
              puVar9 = (undefined8 *)FUN_1803a0940(local_e8,iVar5);
              lVar10 = (longlong)iVar13 * 0x20;
              *(undefined8 *)(local_f0 + lVar10) = *puVar9;
              uVar14 = FUN_18000f3a0(lVar7 + 0x10 + lVar15);
              *(undefined8 *)(local_f0 + 8 + lVar10) = uVar14;
              cVar2 = FUN_180011220(lVar15 + 0x33 + lVar7);
              lVar15 = local_f0;
              *(bool *)(local_f0 + 0x10 + lVar10) = cVar2 != '\0';
              uVar16 = FUN_18000f3d0(lVar6 + 8 + uVar1);
              *(undefined4 *)(lVar15 + 0x14 + lVar10) = uVar16;
              uVar16 = FUN_18000f3d0(lVar6 + (uVar1 | 4));
              *(undefined4 *)(lVar15 + 0x18 + lVar10) = uVar16;
              iVar13 = iVar13 + 1;
            }
          }
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while ((int)uVar11 < iVar4);
        return iVar13;
      }
    }
  }
  return -1;
}



/* ===== 1802afd60 FUN_1802afd60 ===== */

void FUN_1802afd60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined2 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 0;
  return;
}



/* ===== 1802afee0 FUN_1802afee0 ===== */

void FUN_1802afee0(longlong param_1,longlong *param_2,float param_3,float param_4,char param_5)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (0x7ffffffefffe < lVar2 - 0x10000U) {
    return;
  }
  if (0x7ffffffefffe < *(longlong *)(lVar2 + 0x40) - 0x10000U) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  local_78 = 0;
  local_70 = 0;
  local_4c = 0;
  local_6c = 0;
  uStack_64 = 0;
  local_48 = 0x3f800000;
  local_5c = 0;
  uStack_54 = 0;
  local_44 = 0x437a0000;
  FUN_1801ec0c0(param_2,&local_78);
  if (DAT_1809eea10 == 0) {
    if (DAT_1809eea18 == '\0') {
      DAT_1809eea10 = FUN_180264b70(PTR_s_sv_quantize_movement_input_1809eea08);
      DAT_1809eea18 = DAT_1809eea10 == 0;
      if (DAT_1809eea10 != 0) goto LAB_1802affc7;
    }
  }
  else {
LAB_1802affc7:
    cVar1 = FUN_180264d70(DAT_1809eea10);
    if (cVar1 != '\0') {
      uVar4 = FUN_18053e9f0(param_3,param_4);
      fVar5 = (float)FUN_180516b00(param_4,param_3);
      FUN_1801ecae0(param_1,lVar2,&local_78,
                    fVar5 / DAT_1808ac014 + *(float *)(*(longlong *)(lVar2 + 0x40) + 0x1c),uVar4);
      return;
    }
  }
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0xc0;
  *(float *)(lVar2 + 0x58) = param_3;
  *(float *)(lVar2 + 0x5c) = param_4;
  lVar2 = FUN_180265420(lVar2);
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0x7f;
    *(undefined4 *)(lVar2 + 0x24) = 0;
    *(undefined4 *)(lVar2 + 0x34) = 0;
    *(float *)(lVar2 + 0x28) = param_3 - (float)uStack_54;
    *(float *)(lVar2 + 0x2c) = param_4 - uStack_54._4_4_;
  }
  if (param_5 == '\0') {
    return;
  }
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffff9e7;
  uVar3 = *(ulonglong *)(param_1 + 0x60);
  if (param_3 <= 0.0) {
    if (0.0 <= param_3) goto LAB_1802b0091;
    uVar3 = uVar3 | 0x10;
  }
  else {
    uVar3 = uVar3 | 8;
  }
  *(ulonglong *)(param_1 + 0x60) = uVar3;
LAB_1802b0091:
  if (param_4 <= 0.0) {
    if (0.0 <= param_4) {
      return;
    }
    uVar3 = uVar3 | 0x400;
  }
  else {
    uVar3 = uVar3 | 0x200;
  }
  *(ulonglong *)(param_1 + 0x60) = uVar3;
  return;
}



/* ===== 1802b00e0 FUN_1802b00e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b00e0(void)

{
  if ((DAT_180d00bf8 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180d00bfc = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_nSmokeEffectTickBegin");
    DAT_180d00c00 = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_bDidSmokeEffect");
    DAT_180d00c04 = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_vSmokeDetonationPos");
    _DAT_180d00c08 = FUN_18038eaf0("C_CSPlayerPawnBase","m_flFlashOverlayAlpha");
    if (_DAT_180d00c08 == 0) {
      _DAT_180d00c08 = FUN_18038eaf0("C_CSPlayerPawn","m_flFlashOverlayAlpha");
    }
    _DAT_180d00c0c = FUN_18038eaf0("C_CSPlayerPawnBase","m_flFlashMaxAlpha");
    if (_DAT_180d00c0c == 0) {
      _DAT_180d00c0c = FUN_18038eaf0("C_CSPlayerPawn","m_flFlashMaxAlpha");
    }
    DAT_180d00bf8 = '\x01';
  }
  return;
}



/* ===== 1802b01d0 FUN_1802b01d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b01d0(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  char *_Str1;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  undefined1 local_78 [16];
  undefined8 local_68;
  float local_60;
  int local_5c;
  
  FUN_1802b00e0();
  if (((DAT_180d00bfc != 0) && (DAT_180d00c04 != 0)) &&
     (UVar6 = GetTickCount64(), 0xf9 < UVar6 - _DAT_180d00bf0)) {
    if (DAT_180d00c10 != DAT_180d00c18) {
      DAT_180d00c18 = DAT_180d00c10;
    }
    _DAT_180d00bf0 = UVar6;
    if ((DAT_1809619d0 != 0) &&
       (lVar7 = FUN_18000f3a0(), fVar2 = DAT_1808acaa8, fVar1 = DAT_1808ac34c,
       lVar7 - 0x10000U < 0x7ffffffeffff)) {
      iVar14 = 0;
      uVar13 = DAT_180d00c00;
      do {
        lVar8 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                              (ulonglong)(uint)(iVar14 * DAT_180961944) + lVar7);
        if (lVar8 - 0x10000U < 0x7ffffffeffff) {
          iVar12 = 0;
          do {
            if (((0x40 < iVar14 * 0x200 + iVar12) &&
                (lVar9 = FUN_18000f3a0((ulonglong)(uint)(iVar12 * DAT_180961948) + lVar8),
                lVar9 - 0x10000U < 0x7ffffffeffff)) &&
               ((lVar10 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar9), lVar10 != 0 &&
                ((((lVar10 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar10), lVar10 != 0 &&
                   (lVar10 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar10), lVar10 != 0)) &&
                  (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar10),
                  _Str1 + -0x10000 < (char *)0x7ffffffeffff)) &&
                 (fVar4 = (float)strcmp(_Str1,"C_SmokeGrenadeProjectile"), fVar4 == 0.0)))))) {
              local_68 = 0;
              local_60 = fVar4;
              iVar5 = FUN_180011200((ulonglong)DAT_180d00bfc + lVar9);
              local_5c = iVar5;
              if (((uVar13 != 0) &&
                  (cVar3 = FUN_180011220((ulonglong)uVar13 + lVar9), cVar3 != '\0')) || (0 < iVar5))
              {
                pfVar11 = (float *)FUN_1800111b0(local_78,(ulonglong)DAT_180d00c04 + lVar9);
                fVar4 = pfVar11[2];
                local_68 = *(undefined8 *)pfVar11;
                fVar15 = pfVar11[1] * pfVar11[1] + *pfVar11 * *pfVar11 + fVar4 * fVar4;
                local_60 = fVar4;
                if (fVar15 < 0.0) {
                  fVar15 = (float)FUN_18051af10(fVar15);
                }
                else {
                  fVar15 = SQRT(fVar15);
                }
                if (fVar1 <= fVar15) {
                  local_60 = fVar4 + fVar2;
                  FUN_1802b04f0(fVar15,&local_68);
                  uVar13 = DAT_180d00c00;
                }
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < 0x200);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < 0x40);
    }
  }
  return;
}



/* ===== 1802b04f0 FUN_1802b04f0 ===== */

undefined8 * FUN_1802b04f0(undefined8 param_1,undefined8 *param_2)

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
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = DAT_180d00c18;
  if (DAT_180d00c18 != DAT_180d00c20) {
    uVar5 = param_2[1];
    *DAT_180d00c18 = *param_2;
    puVar6[1] = uVar5;
    puVar6 = DAT_180d00c18;
    DAT_180d00c18 = DAT_180d00c18 + 2;
    return puVar6;
  }
  uVar14 = 0xfffffffffffffff;
  uVar15 = (longlong)DAT_180d00c18 - (longlong)DAT_180d00c10;
  lVar10 = (longlong)uVar15 >> 4;
  if (lVar10 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar11 = lVar10 + 1;
  uVar8 = (longlong)DAT_180d00c20 - (longlong)DAT_180d00c10 >> 4;
  if (uVar8 <= 0xfffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar14 = uVar11;
    if (uVar11 <= uVar8) {
      uVar14 = uVar8;
    }
    if (0xfffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar14 * 0x10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar16 = (undefined8 *)((uVar15 & 0xfffffffffffffff0) + (longlong)puVar7);
  *(undefined4 *)puVar16 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
  *(undefined4 *)(puVar16 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
  if (puVar6 == DAT_180d00c18) {
    lVar10 = (longlong)DAT_180d00c18 - (longlong)DAT_180d00c10;
    puVar9 = puVar7;
    puVar6 = DAT_180d00c10;
  }
  else {
    FUN_180540530(puVar7,DAT_180d00c10,(longlong)puVar6 - (longlong)DAT_180d00c10);
    puVar9 = puVar16 + 2;
    lVar10 = (longlong)DAT_180d00c18 - (longlong)puVar6;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar10);
  if (DAT_180d00c10 == (undefined8 *)0x0) goto LAB_1802b0641;
  puVar6 = DAT_180d00c10;
  if (((longlong)DAT_180d00c20 - (longlong)DAT_180d00c10 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1802b0639:
    puVar13 = puVar12;
  }
  else {
    puVar6 = (undefined8 *)DAT_180d00c10[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180d00c10 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar12 = auStack_30;
      goto LAB_1802b0639;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1802b0641;
  thunk_FUN_1803d64e0(puVar6);
LAB_1802b0641:
  DAT_180d00c18 = puVar7 + uVar11 * 2;
  DAT_180d00c10 = puVar7;
  DAT_180d00c20 = puVar7 + uVar14 * 2;
  return puVar16;
}



/* ===== 1802b0690 FUN_1802b0690 ===== */

uint FUN_1802b0690(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float local_48 [8];
  float local_28;
  float local_24;
  float local_20 [2];
  float local_18 [6];
  
  local_48[2] = *param_1;
  local_48[6] = param_1[1];
  local_20[0] = param_1[2];
  local_48[4] = 1.0;
  local_28 = 1.0;
  local_48[5] = 0.0;
  local_18[0] = 1.0;
  local_24 = 0.0;
  local_48[0] = 0.0;
  pfVar4 = local_48;
  if (0.0 <= local_48[2]) {
    pfVar4 = local_48 + 2;
  }
  pfVar1 = local_48 + 4;
  if (local_48[2] <= DAT_1808ac34c) {
    pfVar1 = pfVar4;
  }
  pfVar4 = local_48 + 5;
  if (0.0 <= local_48[6]) {
    pfVar4 = local_48 + 6;
  }
  pfVar2 = &local_28;
  if (local_48[6] <= DAT_1808ac34c) {
    pfVar2 = pfVar4;
  }
  pfVar4 = &local_24;
  if (0.0 <= local_20[0]) {
    pfVar4 = local_20;
  }
  pfVar3 = local_18;
  if (local_20[0] <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  return ((int)(longlong)(*pfVar3 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
         (uint)(longlong)(*pfVar2 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (uint)(longlong)(*pfVar1 * DAT_1808acb94 + DAT_1808ac1f4);
}



/* ===== 1802b07a0 FUN_1802b07a0 ===== */

uint FUN_1802b07a0(ulonglong param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float local_18 [2];
  float local_10;
  float local_c [3];
  
  local_c[0] = 1.0;
  local_10 = 0.0;
  local_18[0] = ((float)(param_1 & 0xff) / DAT_1808acb94) * *param_2;
  pfVar4 = &local_10;
  if (0.0 <= local_18[0]) {
    pfVar4 = local_18;
  }
  pfVar1 = local_c;
  if (local_18[0] <= DAT_1808ac34c) {
    pfVar1 = pfVar4;
  }
  local_18[0] = ((float)(param_1 >> 8 & 0xff) / DAT_1808acb94) * param_2[1];
  pfVar4 = &local_10;
  if (0.0 <= local_18[0]) {
    pfVar4 = local_18;
  }
  pfVar2 = local_c;
  if (local_18[0] <= DAT_1808ac34c) {
    pfVar2 = pfVar4;
  }
  local_18[0] = ((float)((uint)param_1 >> 0x10 & 0xff) / DAT_1808acb94) * param_2[2];
  pfVar4 = &local_10;
  if (0.0 <= local_18[0]) {
    pfVar4 = local_18;
  }
  pfVar3 = local_c;
  if (local_18[0] <= DAT_1808ac34c) {
    pfVar3 = pfVar4;
  }
  return (int)(longlong)(*pfVar3 * DAT_1808acb94 + DAT_1808ac1f4) << 0x10 |
         (int)(longlong)(*pfVar2 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
         (uint)(longlong)(*pfVar1 * DAT_1808acb94 + DAT_1808ac1f4) | (uint)param_1 & 0xff000000;
}



/* ===== 1802b08d0 FUN_1802b08d0 ===== */

bool FUN_1802b08d0(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ULONGLONG UVar11;
  int iVar12;
  undefined8 local_res10;
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = local_res10;
    DAT_1811089f8 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  lVar10 = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
LAB_1802b0b31:
    bVar1 = false;
  }
  else {
    if (((param_1 - 0x10000U < 0x7ffffffeffff) && (DAT_180961900 != 0)) &&
       (uVar2 = FUN_180011200(param_1 + (ulonglong)DAT_180961900), uVar2 - 1 < 0xfffffffe)) {
      if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
        DAT_1811161d8 = '\x01';
        DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
      }
      uVar5 = DAT_1811161dc;
      if (((DAT_1811161dc != 0) &&
          (lVar7 = FUN_18000f3a0(lVar10 + 0x10), lVar7 - 0x10000U < 0x7ffffffeffff)) &&
         (lVar8 = FUN_18000f3a0(lVar7), lVar8 == lVar10)) {
        iVar3 = FUN_180011200((ulonglong)uVar5 + lVar7);
        plVar9 = (longlong *)FUN_1803a0940(&local_res10,uVar2);
        lVar10 = *plVar9;
        if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
          DAT_1811161d8 = '\x01';
          DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
        }
        uVar5 = DAT_1811161dc;
        if ((((lVar10 != 0) && (DAT_1811161dc != 0)) &&
            (lVar7 = FUN_18000f3a0(lVar10 + 0x10), lVar7 - 0x10000U < 0x7ffffffeffff)) &&
           (lVar8 = FUN_18000f3a0(lVar7), lVar8 == lVar10)) {
          iVar4 = FUN_180011200((ulonglong)uVar5 + lVar7);
          lVar10 = FUN_18000f3a0(lVar10 + 0x10);
          uVar5 = FUN_180011200(lVar10 + 0x10);
          uVar6 = FUN_180011200(lVar10 + 0x30);
          uVar6 = uVar5 + (uVar6 & 1) * -0x8000;
          if (((uVar6 ^ uVar5) & 0x7fff ^ uVar6) == uVar2) {
            iVar12 = 0;
            if (0 < DAT_18111620c) {
              do {
                if ((&DAT_181116220)[iVar12] == iVar4) goto LAB_1802b0b25;
                iVar12 = iVar12 + 1;
              } while (iVar12 < DAT_18111620c);
            }
            if (DAT_18111620c < 0x10) {
              (&DAT_181116220)[DAT_18111620c] = iVar4;
              DAT_18111620c = DAT_18111620c + 1;
              UVar11 = GetTickCount64();
              FUN_1802b2870("wl_world.log","[%llu] world group %u (the match\'s %u)\n",UVar11,iVar4,
                            iVar3);
            }
LAB_1802b0b25:
            return iVar4 == iVar3;
          }
        }
        goto LAB_1802b0b31;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}



/* ===== 1802b0b60 FUN_1802b0b60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1802b0b60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (DAT_1809ebfb8 == 0xfffffffe) {
    puVar1 = &DAT_18093ce1c;
    puVar4 = &DAT_18093ce18;
    puVar5 = &DAT_18093ce14;
    puVar2 = &DAT_18093ce10;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar3 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    puVar1 = (undefined4 *)(&DAT_18093d430 + lVar3);
    puVar4 = (undefined4 *)(&DAT_18093d42c + lVar3);
    puVar5 = (undefined4 *)(&DAT_18093d428 + lVar3);
    puVar2 = (undefined4 *)(lVar3 + 0x18093d424);
  }
  else {
    puVar1 = &DAT_18093c848;
    puVar4 = &DAT_18093c844;
    puVar5 = &DAT_18093c840;
    puVar2 = &DAT_18093c83c;
  }
  _DAT_180d00ca0 = *puVar2;
  uRam0000000180d00ca4 = *puVar5;
  uRam0000000180d00ca8 = *puVar4;
  uRam0000000180d00cac = *puVar1;
  return &DAT_180d00ca0;
}



/* ===== 1802b0c10 FUN_1802b0c10 ===== */

undefined1 FUN_1802b0c10(undefined8 param_1)

{
  (*DAT_180961dd8)(&DAT_180ca0140,param_1);
  return 1;
}



/* ===== 1802b0c30 FUN_1802b0c30 ===== */

void FUN_1802b0c30(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  char *pcVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_a8;
  float local_a4;
  float local_a0 [26];
  
  uVar7 = DAT_180961de0;
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar10 = &DAT_18093ce20;
    pfVar19 = (float *)&DAT_18093ce40;
    pfVar16 = (float *)&DAT_18093ce30;
    pfVar17 = (float *)&DAT_18093ce3c;
    puVar15 = (undefined4 *)&DAT_18093ce38;
    pfVar18 = (float *)&DAT_18093ce34;
    pfVar14 = (float *)&DAT_18093ce24;
    pfVar20 = (float *)&DAT_18093ce28;
    pfVar21 = (float *)&DAT_18093ce2c;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar9 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    pcVar10 = &DAT_18093d434 + lVar9;
    pfVar19 = (float *)(&DAT_18093d454 + lVar9);
    pfVar16 = (float *)(&DAT_18093d444 + lVar9);
    pfVar17 = (float *)(&DAT_18093d450 + lVar9);
    puVar15 = (undefined4 *)(&DAT_18093d44c + lVar9);
    pfVar18 = (float *)(&DAT_18093d448 + lVar9);
    pfVar14 = (float *)(&DAT_18093d438 + lVar9);
    pfVar20 = (float *)(&DAT_18093d43c + lVar9);
    pfVar21 = (float *)(&DAT_18093d440 + lVar9);
  }
  else {
    pcVar10 = &DAT_18093c84c;
    pfVar19 = (float *)&DAT_18093c86c;
    pfVar16 = (float *)&DAT_18093c85c;
    pfVar17 = (float *)&DAT_18093c868;
    puVar15 = &DAT_18093c864;
    pfVar18 = (float *)&DAT_18093c860;
    pfVar14 = (float *)&DAT_18093c850;
    pfVar20 = (float *)&DAT_18093c854;
    pfVar21 = (float *)&DAT_18093c858;
  }
  uVar13 = (ulonglong)DAT_180961de0;
  if (((((&DAT_1809628e8)[(longlong)DAT_180ca3d60 * 0x90] == '\0') && (*pcVar10 != '\0')) &&
      (param_1 != 0)) &&
     (((DAT_180961dd8 != 0 && (0x32 < DAT_180961de0)) && (DAT_180961de0 + 0x30 < 0x801)))) {
    local_a8 = 1.0;
    local_res20[0] = 0.0;
    local_a0[0] = 1.0;
    local_a4 = 0.0;
    local_res18[0] = 1.0;
    local_res10[0] = 0.0;
    pfVar8 = local_res10;
    if (0.0 <= *pfVar16) {
      pfVar8 = pfVar16;
    }
    uVar1 = *puVar15;
    pfVar11 = local_res18;
    if (*pfVar16 <= DAT_1808ac34c) {
      pfVar11 = pfVar8;
    }
    fVar23 = 0.0;
    if (0.0 <= *pfVar19) {
      fVar23 = *pfVar19;
    }
    pfVar16 = local_res20;
    if (0.0 <= *pfVar18) {
      pfVar16 = pfVar18;
    }
    fVar2 = *pfVar14;
    pfVar14 = &local_a8;
    if (*pfVar18 <= DAT_1808ac34c) {
      pfVar14 = pfVar16;
    }
    fVar3 = *pfVar20;
    fVar4 = *pfVar21;
    fVar5 = *pfVar14;
    fVar6 = *pfVar11;
    pfVar14 = &local_a4;
    if (0.0 <= *pfVar17) {
      pfVar14 = pfVar17;
    }
    pfVar16 = local_a0;
    if (*pfVar17 <= DAT_1808ac34c) {
      pfVar16 = pfVar14;
    }
    fVar22 = *pfVar16 * DAT_1808ac838 + DAT_1808ac1f4;
    FUN_180540170(&DAT_180ca0140,0,0x800);
    *(undefined4 *)(&DAT_180ca0140 + uVar13) = 0;
    *(undefined4 *)(&DAT_180ca0144 + uVar13) = uVar1;
    *(undefined8 *)(&DAT_180ca0148 + uVar13) = 0;
    *(float *)(&DAT_180ca0150 + uVar13) = fVar5 * fVar6;
    *(float *)(&DAT_180ca0154 + uVar13) = fVar22;
    *(undefined4 *)(&DAT_180ca0158 + uVar13) = 0;
    *(float *)(&DAT_180ca015c + uVar13) = fVar23 * fVar2;
    *(float *)(&DAT_180ca0160 + uVar13) = fVar23 * fVar3;
    *(float *)(&DAT_180ca0164 + uVar13) = fVar23 * fVar4;
    uVar12 = uVar7 - 0x32;
    (&DAT_180ca0140)[uVar7 - 0x33] = 1;
    if (0x7ff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_1804ed0f0();
    }
    (&DAT_180ca0140)[uVar12] = 0;
    FUN_1802b0c10(param_1);
  }
  return;
}



/* ===== 1802b0f70 FUN_1802b0f70 ===== */

/* WARNING: Removing unreachable block (ram,0x0001802b18e1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b0f70(longlong *param_1,int param_2)

{
  float fVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  float *pfVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char *local_res20;
  int iVar16;
  float *local_78;
  char *local_70;
  undefined4 *local_68;
  float *local_60;
  
  if (DAT_1809ebfb8 == 0xfffffffe) {
    local_res20 = &DAT_18093cde4;
    local_60 = (float *)&DAT_18093cdfc;
    local_78 = (float *)&DAT_18093cde8;
    pcVar7 = &DAT_18093ce0c;
    local_70 = &DAT_18093cdf4;
    pcVar8 = &DAT_18093ce00;
    local_68 = (undefined4 *)&DAT_18093cdf8;
    puVar9 = (undefined4 *)&DAT_18093ce04;
    pcVar13 = &DAT_18093cdec;
    pfVar11 = (float *)&DAT_18093cdf0;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar4 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    local_res20 = &DAT_18093d3f8 + lVar4;
    pcVar7 = &DAT_18093d420 + lVar4;
    local_78 = (float *)(&DAT_18093d3fc + lVar4);
    pcVar8 = &DAT_18093d414 + lVar4;
    local_70 = &DAT_18093d408 + lVar4;
    local_68 = (undefined4 *)(&DAT_18093d40c + lVar4);
    puVar9 = (undefined4 *)(&DAT_18093d418 + lVar4);
    pcVar13 = &DAT_18093d400 + lVar4;
    pfVar11 = (float *)(&DAT_18093d404 + lVar4);
    local_60 = (float *)(lVar4 + 0x18093d410);
  }
  else {
    local_res20 = &DAT_18093c810;
    pcVar7 = &DAT_18093c838;
    local_78 = (float *)&DAT_18093c814;
    pcVar8 = &DAT_18093c82c;
    local_70 = &DAT_18093c820;
    local_68 = &DAT_18093c824;
    puVar9 = &DAT_18093c830;
    local_60 = (float *)&DAT_18093c828;
    pcVar13 = &DAT_18093c818;
    pfVar11 = (float *)&DAT_18093c81c;
  }
  lVar4 = (longlong)DAT_180ca3d60;
  if (((*pcVar7 != '\0') && ((&DAT_180962900)[lVar4 * 0x90] == '\0')) && (param_2 == 0x2acab07c)) {
    lVar5 = FUN_1802b0b60();
    *param_1 = lVar5;
  }
  if ((&DAT_180962901)[lVar4 * 0x90] == '\0') {
    if (*pcVar8 != '\0') {
      if (param_2 == 0xbb9ee08) {
        uVar14 = FUN_180517790();
        uVar15 = FUN_180517200();
        puVar9 = &DAT_180d00c50;
        _DAT_180d00c50 = CONCAT44(uVar14,uVar15);
        uRam0000000180d00c58 = 0;
        goto LAB_1802b121b;
      }
      if (param_2 == -0x14f26682) {
        _DAT_180d00c60 = *puVar9;
        goto LAB_1802b1203;
      }
    }
  }
  else {
    if (param_2 == 0xbb9ee08) {
      _DAT_180d00c50 = *(undefined8 *)(&DAT_180962904 + lVar4 * 0x90);
      puVar9 = &DAT_180d00c50;
      uRam0000000180d00c58 = 0;
    }
    else {
      if (param_2 != -0x14f26682) goto LAB_1802b121e;
      _DAT_180d00c60 = *(undefined4 *)(&DAT_18096290c + lVar4 * 0x90);
LAB_1802b1203:
      puVar9 = (undefined4 *)&DAT_180d00c60;
      uRam0000000180d00c64 = _DAT_1808ad330;
      uRam0000000180d00c6c = _UNK_1808ad334;
      uRam0000000180d00c68 = _DAT_180d00c60;
    }
LAB_1802b121b:
    *param_1 = (longlong)puVar9;
  }
LAB_1802b121e:
  if ((*pcVar13 != '\0') && ((&DAT_1809628fe)[lVar4 * 0x90] == '\0')) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      if (param_2 == 0x565eaf76) {
        DAT_181116210 = DAT_181116210 + 1;
        _DAT_1811161f8 = *puVar2;
        _DAT_181116200 = puVar2[1];
      }
      else if (param_2 == -0x496d6fd2) {
        DAT_1811161f0 = DAT_1811161f0 + 1;
        _DAT_1811161c8 = *puVar2;
        _DAT_1811161d0 = puVar2[1];
      }
      else if (param_2 == 0x1313a424) {
        DAT_181116208 = DAT_181116208 + 1;
        _DAT_181116280 = *puVar2;
        _DAT_181116288 = puVar2[1];
      }
      else if (param_2 == -0x45675650) {
        DAT_1811161c0 = DAT_1811161c0 + 1;
        _DAT_181116270 = *puVar2;
        _DAT_181116278 = puVar2[1];
      }
      else if (param_2 == 0x2ae72b37) {
        DAT_181116260 = DAT_181116260 + 1;
        _DAT_1811161e0 = *puVar2;
        _DAT_1811161e8 = puVar2[1];
      }
    }
    UVar6 = GetTickCount64();
    if (4999 < UVar6 - _DAT_181116268) {
      DAT_181116264 = DAT_181116264 + 1 & 0x80000003;
      if ((int)DAT_181116264 < 0) {
        DAT_181116264 = (DAT_181116264 - 1 | 0xfffffffc) + 1;
      }
      _DAT_181116268 = UVar6;
      snprintf(&DAT_181116330 + (longlong)(int)DAT_181116264 * 0x40,0x40,"%.3f %.3f %.3f %.3f",
               (double)DAT_181116280,(double)DAT_181116284,(double)DAT_181116288,
               (double)DAT_18111628c);
      iVar16 = DAT_181116208;
      puVar12 = &DAT_181116330 + (longlong)(int)DAT_181116264 * 0x40;
      DAT_181116264 = DAT_181116264 + 1 & 0x80000003;
      if ((int)DAT_181116264 < 0) {
        DAT_181116264 = (DAT_181116264 - 1 | 0xfffffffc) + 1;
      }
      snprintf(&DAT_181116330 + (longlong)(int)DAT_181116264 * 0x40,0x40,"%.3f %.3f %.3f %.3f",
               (double)DAT_1811161c8,(double)DAT_1811161cc,(double)DAT_1811161d0,
               (double)DAT_1811161d4);
      iVar3 = DAT_1811161f0;
      puVar10 = &DAT_181116330 + (longlong)(int)DAT_181116264 * 0x40;
      DAT_181116264 = DAT_181116264 + 1 & 0x80000003;
      if ((int)DAT_181116264 < 0) {
        DAT_181116264 = (DAT_181116264 - 1 | 0xfffffffc) + 1;
      }
      snprintf(&DAT_181116330 + (longlong)(int)DAT_181116264 * 0x40,0x40,"%.3f %.3f %.3f %.3f",
               (double)DAT_1811161f8,(double)DAT_1811161fc,(double)DAT_181116200,
               (double)DAT_181116204);
      FUN_1802b2870("wl_world.log",
                    "[%llu] bloom | slider %.2f | scale x%d (%s) | strength x%d (%s) | skybox x%d (%s)\n"
                    ,UVar6,(double)*pfVar11,DAT_181116210,
                    &DAT_181116330 + (longlong)(int)DAT_181116264 * 0x40,iVar3,puVar10,iVar16,
                    puVar12);
      DAT_181116264 = DAT_181116264 + 1 & 0x80000003;
      if ((int)DAT_181116264 < 0) {
        DAT_181116264 = (DAT_181116264 - 1 | 0xfffffffc) + 1;
      }
      snprintf(&DAT_181116330 + (longlong)(int)DAT_181116264 * 0x40,0x40,"%.3f %.3f %.3f %.3f",
               (double)DAT_1811161e0,(double)DAT_1811161e4,(double)DAT_1811161e8,
               (double)DAT_1811161ec);
      iVar3 = DAT_181116260;
      lVar5 = (longlong)(int)DAT_181116264;
      DAT_181116264 = DAT_181116264 + 1 & 0x80000003;
      if ((int)DAT_181116264 < 0) {
        DAT_181116264 = (DAT_181116264 - 1 | 0xfffffffc) + 1;
      }
      snprintf(&DAT_181116330 + (longlong)(int)DAT_181116264 * 0x40,0x40,"%.3f %.3f %.3f %.3f",
               (double)DAT_181116270,(double)DAT_181116274,(double)DAT_181116278,
               (double)DAT_18111627c);
      FUN_1802b2870("wl_world.log","[%llu] bloom | threshold x%d (%s) | width x%d (%s)\n",UVar6,
                    DAT_1811161c0,&DAT_181116330 + (longlong)(int)DAT_181116264 * 0x40,iVar3,
                    &DAT_181116330 + lVar5 * 0x40,puVar10,iVar16,puVar12);
      DAT_181116260 = 0;
      DAT_1811161c0 = 0;
      DAT_181116208 = 0;
      DAT_1811161f0 = 0;
      DAT_181116210 = 0;
    }
  }
  if ((*pcVar13 == '\0') || ((&DAT_1809628fe)[lVar4 * 0x90] != '\0')) {
LAB_1802b17b2:
    if ((param_2 != 0x24470a87) || ((float *)*param_1 == (float *)0x0)) goto LAB_1802b1828;
    fVar1 = *(float *)*param_1;
    if ((((uint)fVar1 & 0x7f800000) != 0x7f800000) && ((0.0 < fVar1 && (fVar1 < DAT_1808ac864)))) {
      DAT_180d00cb0 = fVar1;
    }
    if ((*local_res20 == '\0') || (fVar1 = *local_78, fVar1 <= 0.0)) goto LAB_1802b1828;
    puVar12 = &DAT_180d00c70;
    _DAT_180d00c70 = fVar1;
    fRam0000000180d00c74 = fVar1;
    fRam0000000180d00c78 = fVar1;
    fRam0000000180d00c7c = fVar1;
  }
  else {
    fVar1 = *pfVar11;
    if (param_2 == 0x1313a424) {
      puVar12 = &DAT_180d00cc0;
      _DAT_180d00cc0 = fVar1 * DAT_1808ac1b0 + DAT_1808ac0c0;
      fRam0000000180d00cc4 = _DAT_180d00cc0;
      fRam0000000180d00cc8 = _DAT_180d00cc0;
      fRam0000000180d00ccc = _DAT_180d00cc0;
    }
    else if (param_2 == 0x2ae72b37) {
      puVar12 = &DAT_180d00c80;
      _DAT_180d00c80 = fVar1 * DAT_1808ac428 + DAT_1808ac1f4;
      fRam0000000180d00c84 = _DAT_180d00c80;
      fRam0000000180d00c88 = _DAT_180d00c80;
      fRam0000000180d00c8c = _DAT_180d00c80;
    }
    else if (param_2 == 0x565eaf76) {
      puVar12 = &DAT_180d00ce0;
      _DAT_180d00ce0 = fVar1 * DAT_1808ac3c4 + DAT_1808ac154;
      fRam0000000180d00ce4 = _DAT_180d00ce0;
      fRam0000000180d00ce8 = _DAT_180d00ce0;
      fRam0000000180d00cec = _DAT_180d00ce0;
    }
    else if (param_2 == -0x496d6fd2) {
      puVar12 = &DAT_180d00c90;
      _DAT_180d00c90 = fVar1 * DAT_1808ac21c + DAT_1808ac118;
      fRam0000000180d00c94 = _DAT_180d00c90;
      fRam0000000180d00c98 = _DAT_180d00c90;
      fRam0000000180d00c9c = _DAT_180d00c90;
    }
    else {
      if (param_2 != -0x45675650) goto LAB_1802b17b2;
      puVar12 = &DAT_180d00cd0;
      _DAT_180d00cd0 = DAT_1808ac428 - fVar1 * DAT_1808ac3c4;
      fRam0000000180d00cd4 = _DAT_180d00cd0;
      fRam0000000180d00cd8 = _DAT_180d00cd0;
      fRam0000000180d00cdc = _DAT_180d00cd0;
    }
  }
  *param_1 = (longlong)puVar12;
LAB_1802b1828:
  if (*local_70 != '\0') {
    if (param_2 == 0x374c1b3c) {
      _DAT_180d00c40 = _DAT_1808adc30;
      uRam0000000180d00c48 = _UNK_1808adc38;
      *param_1 = (longlong)&DAT_180d00c40;
      return;
    }
    if (param_2 == 0xf592812) {
      _DAT_180d00cf0 = *local_68;
      uRam0000000180d00cf4 = _DAT_180d00cf0;
      uRam0000000180d00cf8 = _DAT_180d00cf0;
      uRam0000000180d00cfc = _DAT_180d00cf0;
      *param_1 = (longlong)&DAT_180d00cf0;
      return;
    }
    if (param_2 == 0x2dbee393) {
      UVar6 = GetTickCount64();
      _DAT_180d00c30 = (float)(UVar6 % 3600000) * DAT_1808abfbc * *local_60;
      fRam0000000180d00c34 = _DAT_180d00c30;
      fRam0000000180d00c38 = _DAT_180d00c30;
      fRam0000000180d00c3c = _DAT_180d00c30;
      *param_1 = (longlong)&DAT_180d00c30;
    }
  }
  return;
}



/* ===== 1802b1930 FUN_1802b1930 ===== */

void FUN_1802b1930(longlong param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined **ppuVar13;
  uint uVar14;
  ulonglong uVar15;
  char *pcVar16;
  char *pcVar17;
  undefined *puVar18;
  uint *puVar19;
  undefined *local_68;
  longlong local_58;
  
  FUN_1800211d0();
  lVar7 = (longlong)DAT_180ca3d60;
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar11 = &DAT_18093cdd0;
    puVar18 = &DAT_18093cdd4;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    pcVar11 = &DAT_18093d3e4 + (longlong)(int)DAT_1809ebfb8 * 0x614;
    puVar18 = &DAT_18093d3e8 + (longlong)(int)DAT_1809ebfb8 * 0x614;
  }
  else {
    pcVar11 = &DAT_18093c7fc;
    puVar18 = &DAT_18093c800;
  }
  if (DAT_1809ebfb8 == 0xfffffffe) {
    local_68 = &DAT_18093cfa8;
    pcVar16 = &DAT_18093cf90;
    puVar8 = &DAT_18093cf94;
    pcVar17 = &DAT_18093cfa4;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar9 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    local_68 = &DAT_18093d5bc + lVar9;
    pcVar16 = &DAT_18093d5a4 + lVar9;
    pcVar17 = &DAT_18093d5b8 + lVar9;
    puVar8 = &DAT_18093d5a8 + lVar9;
  }
  else {
    local_68 = &DAT_18093c9d4;
    pcVar16 = &DAT_18093c9bc;
    puVar8 = &DAT_18093c9c0;
    pcVar17 = &DAT_18093c9d0;
  }
  if ((*pcVar11 == '\0') || ((&DAT_180962880)[lVar7 * 0x90] != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*pcVar16 == '\0') || ((&DAT_1809628ac)[lVar7 * 0x90] != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*pcVar17 == '\0') || ((&DAT_1809628ac)[lVar7 * 0x90] != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((bVar3 || bVar1) || (bVar2)) && (param_1 != 0)) && (param_2 - 1U < 0x100000)) {
    uVar5 = FUN_1802b0690(puVar18);
    uVar15 = 0;
    local_58 = 0;
    cVar4 = '\x01';
    if (0 < param_2) {
LAB_1802b1af0:
      uVar12 = (ulonglong)DAT_180961910;
      lVar7 = uVar12 * uVar15 + param_1;
      lVar9 = FUN_18000f3a0((ulonglong)DAT_180961914 + lVar7);
      if (lVar9 != 0) {
        lVar10 = FUN_18000f3a0(param_1 + 0x18 + uVar12 * uVar15);
        if (lVar10 == local_58) {
LAB_1802b1b58:
          if (cVar4 == '\0') goto LAB_1802b1c77;
        }
        else {
          local_58 = lVar10;
          if (lVar10 - 0x10000U < 0x7ffffffeffff) {
            cVar4 = FUN_1802b08d0(lVar10);
            goto LAB_1802b1b58;
          }
          cVar4 = '\x01';
        }
        puVar19 = (uint *)((ulonglong)DAT_18096191c + lVar7);
        if (puVar19 + -0x4000 < (uint *)0x7ffffffeffff) {
          pcVar11 = (char *)FUN_1801d2840(lVar9);
          if (pcVar11 != (char *)0x0) {
            ppuVar13 = &PTR_s_materials_effects_clouds_001_vma_1806562e8;
            do {
              iVar6 = strcmp(pcVar11,*ppuVar13);
              if (iVar6 == 0) goto LAB_1802b1cc4;
              ppuVar13 = ppuVar13 + 1;
            } while (ppuVar13 != &PTR_s_materials_sun_overlay_vmat_180656310);
            ppuVar13 = &PTR_s_materials_sun_overlay_vmat_180656310;
            do {
              iVar6 = strcmp(pcVar11,*ppuVar13);
              if (iVar6 == 0) goto LAB_1802b1cad;
              ppuVar13 = ppuVar13 + 1;
            } while (ppuVar13 != &PTR_s__sun__180656340);
            ppuVar13 = &PTR_s__sun__180656340;
            do {
              lVar7 = FUN_1804ef120(pcVar11,*ppuVar13);
              if (lVar7 != 0) goto LAB_1802b1cad;
              ppuVar13 = ppuVar13 + 1;
            } while (ppuVar13 != (undefined **)&DAT_180656378);
            ppuVar13 = &PTR_s_cloud_1806562c0;
            do {
              lVar7 = FUN_1804ef120(pcVar11,*ppuVar13);
              if (lVar7 != 0) goto LAB_1802b1cc4;
              ppuVar13 = ppuVar13 + 1;
            } while (ppuVar13 != &PTR_s_materials_effects_clouds_001_vma_1806562e8);
          }
          if (bVar3) {
            *puVar19 = *puVar19 & 0xff000000;
            *puVar19 = *puVar19 | uVar5;
          }
        }
      }
      goto LAB_1802b1c77;
    }
  }
  return;
LAB_1802b1cad:
  if (bVar2) {
    uVar14 = FUN_1802b07a0(*puVar19,local_68);
    *puVar19 = uVar14;
  }
  goto LAB_1802b1c77;
LAB_1802b1cc4:
  if (bVar1) {
    uVar14 = FUN_1802b07a0(*puVar19,puVar8);
    *puVar19 = uVar14;
  }
LAB_1802b1c77:
  uVar14 = (int)uVar15 + 1;
  uVar15 = (ulonglong)uVar14;
  if (param_2 <= (int)uVar14) {
    return;
  }
  goto LAB_1802b1af0;
}



/* ===== 1802b1ce0 FUN_1802b1ce0 ===== */

void FUN_1802b1ce0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined *puVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if ((&DAT_180962880)[(longlong)DAT_180ca3d60 * 0x90] != '\0') {
    FUN_1800215d0();
    return;
  }
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar5 = &DAT_18093cdd0;
    puVar10 = &DAT_18093cdd4;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    pcVar5 = &DAT_18093d3e4 + (longlong)(int)DAT_1809ebfb8 * 0x614;
    puVar10 = &DAT_18093d3e8 + (longlong)(int)DAT_1809ebfb8 * 0x614;
  }
  else {
    pcVar5 = &DAT_18093c7fc;
    puVar10 = &DAT_18093c800;
  }
  if ((((*pcVar5 != '\0') && (param_1 != 0)) && (DAT_180961ce0 != 0)) &&
     ((lVar6 = FUN_18000f3a0((ulonglong)DAT_180961978 + param_1), lVar6 != 0 &&
      (lVar7 = FUN_18000f3a0(DAT_180961ce0), lVar7 != 0)))) {
    uVar8 = FUN_18000f3a0((ulonglong)DAT_180961984 + lVar7);
    uVar9 = FUN_18000f3a0((ulonglong)DAT_180961988 + lVar7);
    if ((uVar8 != 0) && (uVar8 < uVar9)) {
      iVar2 = FUN_180011200((ulonglong)DAT_18096197c + lVar6);
      iVar3 = FUN_180011200((ulonglong)DAT_180961980 + lVar6);
      lVar6 = (longlong)iVar3;
      if ((iVar2 - 1U < 0x100000) && (iVar3 - 1U < 0x400000)) {
        uVar4 = FUN_1802b0690(puVar10);
        uVar1 = DAT_18096198c;
        uVar12 = 0;
        if (0 < iVar2) {
          do {
            lVar7 = uVar12 + lVar6 << ((byte)uVar1 & 0x3f);
            if (uVar9 < (1L << ((byte)uVar1 & 0x3f)) + uVar8 + lVar7) {
              return;
            }
            *(uint *)(uVar8 + lVar7) = *(uint *)(uVar8 + lVar7) & 0xff000000;
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
            *(uint *)(uVar8 + lVar7) = *(uint *)(uVar8 + lVar7) | uVar4;
          } while ((int)uVar11 < iVar2);
        }
      }
    }
  }
  return;
}



/* ===== 1802b1ea0 FUN_1802b1ea0 ===== */

longlong * FUN_1802b1ea0(longlong *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  if (param_3 == 0) {
    return param_1;
  }
  cVar6 = (&DAT_180962880)[(longlong)DAT_180ca3d60 * 0x90];
  *(char *)((longlong)param_1 + 0x15) = cVar6;
  if (cVar6 == '\0') {
    if (DAT_1809ebfb8 == 0xfffffffe) {
      pcVar4 = &DAT_18093cdd0;
    }
    else if (DAT_1809ebfb8 < 0x30) {
      pcVar4 = &DAT_18093d3e4 + (longlong)(int)DAT_1809ebfb8 * 0x614;
    }
    else {
      pcVar4 = &DAT_18093c7fc;
    }
    if (*pcVar4 == '\0') goto LAB_1802b1f3d;
    bVar1 = true;
  }
  else {
LAB_1802b1f3d:
    bVar1 = false;
  }
  if ((*(char *)((longlong)param_1 + 0x15) == '\0') && (!bVar1)) {
    return param_1;
  }
  lVar5 = FUN_180021e60();
  param_1[1] = lVar5;
  if ((param_4 == '\0') || (*(char *)((longlong)param_1 + 0x15) == '\0')) {
    bVar2 = false;
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
    if (param_4 != '\0') goto LAB_1802b1f77;
  }
  else {
    bVar2 = true;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
LAB_1802b1f77:
    if (bVar1) {
      cVar6 = '\x01';
      goto LAB_1802b1f82;
    }
  }
  cVar6 = '\0';
LAB_1802b1f82:
  *(char *)((longlong)param_1 + 0x16) = cVar6;
  if ((lVar5 != 0 || bVar2) || (cVar6 != '\0')) {
    *param_1 = param_3;
    uVar3 = FUN_180011200(param_3 + 0xc);
    *(undefined4 *)(param_1 + 2) = uVar3;
  }
  return param_1;
}



/* ===== 1802b1fd0 FUN_1802b1fd0 ===== */

void FUN_1802b1fd0(longlong *param_1)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  
  if (*param_1 != 0) {
    if ((*(char *)((longlong)param_1 + 0x15) == '\0') &&
       ((param_1[1] != 0 ||
        ((*(char *)((longlong)param_1 + 0x16) != '\0' &&
         (cVar3 = FUN_180021bd0(*param_1,(int)param_1[2]), cVar3 != '\0')))))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((param_1[1] != 0) || (bVar2)) {
      if (*(char *)((longlong)param_1 + 0x15) == '\0') {
        if (bVar2) {
          lVar6 = FUN_18000f3a0(*param_1);
          iVar4 = FUN_180011200(*param_1 + 0xc);
          if ((((lVar6 != 0) && (iVar9 = (int)param_1[2], -1 < iVar9)) && (iVar9 < iVar4)) &&
             (iVar4 - iVar9 < 0x100001)) {
            if (DAT_1809ebfb8 == 0xfffffffe) {
              puVar7 = &DAT_18093cdd4;
            }
            else if (DAT_1809ebfb8 < 0x30) {
              puVar7 = &DAT_18093d3e8 + (longlong)(int)DAT_1809ebfb8 * 0x614;
            }
            else {
              puVar7 = &DAT_18093c800;
            }
            uVar5 = FUN_1802b0690(puVar7);
            for (iVar9 = (int)param_1[2];
                (iVar9 < iVar4 &&
                (lVar8 = (longlong)iVar9 * 0x70,
                (ulonglong)(lVar6 + -0xffb0 + lVar8) < 0x7ffffffeffff)); iVar9 = iVar9 + 1) {
              puVar1 = (uint *)(lVar8 + 0x50 + lVar6);
              *puVar1 = *puVar1 & 0xff000000;
              puVar1 = (uint *)(lVar8 + 0x50 + lVar6);
              *puVar1 = *puVar1 | uVar5;
            }
          }
        }
      }
      else {
        FUN_180022050(param_1[1],*param_1,(int)param_1[2]);
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) != '\0') {
      FUN_1800217f0(*param_1,(int)param_1[2]);
    }
  }
  return;
}



/* ===== 1802b2120 _vfprintf_l ===== */

int __cdecl _vfprintf_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x2b2120  62  _vfprintf_l */
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180500ea4(*puVar1,_File,_Format,_Locale,_ArgList);
  return iVar2;
}



/* ===== 1802b2160 fprintf ===== */

int __cdecl fprintf(FILE *_File,char *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x2b2160  127  fprintf */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)FUN_180013640();
  iVar2 = FUN_180500ea4(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 1802b21b0 FUN_1802b21b0 ===== */

void FUN_1802b21b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = &DAT_180d00d00;
    do {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(param_3);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)&DAT_180d00d40);
  }
  return;
}



/* ===== 1802b2210 FUN_1802b2210 ===== */

ulonglong * FUN_1802b2210(ulonglong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar3 = iVar4 + ((int)(param_1 >> 3) * -0x61c8864f & 0x1ffU) & 0x800001ff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffe00) + 1;
    }
    lVar1 = (longlong)(int)uVar3 * 0x28;
    puVar2 = (ulonglong *)(&DAT_181101d70 + lVar1);
    if (*(ulonglong *)(&DAT_181101d70 + (longlong)(int)uVar3 * 0x28) == param_1) {
      return puVar2;
    }
    if (*(ulonglong *)(&DAT_181101d70 + (longlong)(int)uVar3 * 0x28) == 0) {
      *puVar2 = 0;
      *(undefined8 *)(lVar1 + 0x181101d78) = 0;
      *(undefined8 *)(&DAT_181101d80 + lVar1) = 0;
      *(undefined8 *)(lVar1 + 0x181101d88) = 0;
      *(undefined8 *)(&DAT_181101d90 + lVar1) = 0;
      *puVar2 = param_1;
      return puVar2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return (ulonglong *)0x0;
}



/* ===== 1802b2280 FUN_1802b2280 ===== */

undefined8 FUN_1802b2280(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  DAT_180cd0409 = 1;
  hModule = GetModuleHandleA("tier0.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_181101d60 =
         GetProcAddress(hModule,
                        "?LoggingSystem_Log@@YA?AW4LoggingResponse_t@@HW4LoggingSeverity_t@@VColor@@PEBDZZ"
                       );
    pFVar1 = GetProcAddress(hModule,"LOG_GENERAL");
    if (pFVar1 == (FARPROC)0x0) {
      DAT_181101d60 = (FARPROC)0x0;
    }
    else {
      DAT_181100e28 = *(undefined4 *)pFVar1;
    }
    DAT_180d00d48 = GetProcAddress(hModule,"?ConColorMsg@@YAXAEBVColor@@PEBDZZ");
    DAT_181106d70 = GetProcAddress(hModule,"Msg");
    DAT_181100d60 = GetProcAddress(hModule,"LoggingSystem_GetChannelFlags");
    DAT_181106e48 = GetProcAddress(hModule,"LoggingSystem_SetChannelFlags");
    pFVar1 = GetProcAddress(hModule,"LoggingSystem_RegisterLoggingListener");
    DAT_181100e38 = GetProcAddress(hModule,"LoggingSystem_UnregisterLoggingListener");
    if (((pFVar1 != (FARPROC)0x0) && (DAT_181100e38 != (FARPROC)0x0)) && (DAT_180cd040a == '\0')) {
      (*pFVar1)(&PTR_PTR_1809f5130);
      DAT_180cd040a = '\x01';
    }
    if (DAT_181101d60 != (FARPROC)0x0) {
      return 1;
    }
    if ((DAT_180d00d48 != (FARPROC)0x0) || (DAT_181106d70 != (FARPROC)0x0)) {
      FUN_1802b2560("[error] export not found | tier0.dll:LoggingSystem_Log, using fallback");
      if (DAT_181101d60 != (FARPROC)0x0) {
        return 1;
      }
      if (DAT_180d00d48 != (FARPROC)0x0) {
        return 1;
      }
      if (DAT_181106d70 != (FARPROC)0x0) {
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 1802b2400 FUN_1802b2400 ===== */

void FUN_1802b2400(void)

{
  DWORD DVar1;
  int iVar2;
  
  if ((DAT_180cd040a != '\0') && (DAT_181100e38 != (code *)0x0)) {
    (*DAT_181100e38)(&PTR_PTR_1809f5130);
  }
  DAT_180cd040a = 0;
  iVar2 = 0;
  do {
    if (DAT_180d00cb4 != 1) break;
    Sleep(5);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 200);
  DAT_180d00cb4 = 3;
  DAT_180cd0408 = 1;
  if (DAT_181106e60 != (HANDLE)0x0) {
    SetEvent(DAT_181106e60);
  }
  if (DAT_180d00d50 != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject(DAT_180d00d50,5000);
    if (DVar1 != 0) {
      TerminateThread(DAT_180d00d50,0);
    }
    CloseHandle(DAT_180d00d50);
    DAT_180d00d50 = (HANDLE)0x0;
  }
  if (DAT_181106e60 != (HANDLE)0x0) {
    CloseHandle(DAT_181106e60);
  }
  DAT_181106e60 = (HANDLE)0x0;
  LOCK();
  DAT_180cd037f = 0;
  UNLOCK();
  iVar2 = FUN_1804e4d70(&DAT_1809f50e0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f512c == 0x7fffffff) {
    DAT_1809f512c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_181101d60 = 0;
  DAT_180d00d48 = 0;
  DAT_181106d70 = 0;
  FUN_1804e4e90(&DAT_1809f50e0);
  return;
}



/* ===== 1802b2560 FUN_1802b2560 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b2560(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  ulonglong *puVar7;
  uint uVar8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_658 [32];
  undefined8 local_638;
  undefined8 *local_630;
  byte local_628 [1536];
  ulonglong local_28;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  local_28 = DAT_180919500 ^ (ulonglong)auStack_658;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (DAT_180cd0409 == '\0') {
    FUN_1802b2280();
  }
  if (DAT_180cd037f == '\0') {
    return;
  }
  iVar3 = strncmp(param_1,"[error]",7);
  if (iVar3 == 0) {
LAB_1802b264d:
    puVar7 = (ulonglong *)FUN_180013640();
    local_638 = 0;
    local_630 = &local_res10;
    uVar4 = FUN_180501904(*puVar7 | 2,local_628,0x5ff,param_1);
    if ((int)uVar4 < 0) {
      uVar4 = 0xffffffff;
    }
    if ((int)uVar4 < 0) {
      return;
    }
    iVar3 = strncmp(param_1,"[error]",7);
    if (iVar3 != 0) {
      pbVar1 = local_628;
      uVar8 = 0x811c9dc5;
      while (local_628[0] != 0) {
        bVar2 = *pbVar1;
        pbVar1 = pbVar1 + 1;
        uVar8 = (bVar2 ^ uVar8) * 0x1000193;
        local_628[0] = *pbVar1;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_181100e10);
      lVar6 = FUN_1802b2210(param_1);
      if (lVar6 != 0) {
        if ((0x3f < *(uint *)(lVar6 + 0x18)) && (*(uint *)(lVar6 + 0x24) == uVar8))
        goto LAB_1802b270e;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        *(uint *)(lVar6 + 0x24) = uVar8;
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) + 1;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_181100e10);
    }
    lVar6 = (longlong)(int)uVar4;
    if (0x5fe < uVar4) {
      lVar6 = 0x5fe;
    }
    local_628[lVar6] = 10;
  }
  else {
    UVar5 = GetTickCount64();
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_181100e10);
    lVar6 = FUN_1802b2210(param_1);
    if (lVar6 == 0) {
LAB_1802b2638:
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_181100e10);
      goto LAB_1802b264d;
    }
    if (999 < UVar5 - *(longlong *)(lVar6 + 8)) {
      *(ULONGLONG *)(lVar6 + 8) = UVar5;
      *(undefined4 *)(lVar6 + 0x1c) = 0;
    }
    if ((*(uint *)(lVar6 + 0x18) < 0x40) || (*(uint *)(lVar6 + 0x1c) < 8)) goto LAB_1802b2638;
LAB_1802b270e:
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_181100e10);
  }
  return;
}



/* ===== 1802b2790 FUN_1802b2790 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b2790(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStack_1048 [32];
  undefined8 local_1028;
  undefined8 local_1020;
  undefined1 local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    uStack_10 = 0x1802b27a9;
    local_18 = DAT_180919500 ^ (ulonglong)auStack_1048;
    puVar2 = (ulonglong *)FUN_180013640();
    local_1028 = 0;
    local_1020 = param_3;
    uVar1 = FUN_180501904(*puVar2 | 2,local_1018,0xfff,param_2);
    if ((int)uVar1 < 0) {
      uVar1 = 0xffffffff;
    }
    if (-1 < (int)uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xffe < uVar1) {
        lVar3 = 0xffe;
      }
      local_1018[lVar3] = 10;
    }
  }
  return;
}



/* ===== 1802b2840 FUN_1802b2840 ===== */

void FUN_1802b2840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1802b2790(param_1,param_2,&local_res18);
  return;
}



/* ===== 1802b2870 FUN_1802b2870 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b2870(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1058 [32];
  undefined8 local_1038;
  undefined8 *local_1030;
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    uStack_18 = 0x1802b2894;
    local_28 = DAT_180919500 ^ (ulonglong)auStack_1058;
    local_res18 = param_3;
    local_res20 = param_4;
    puVar1 = (ulonglong *)FUN_180013640();
    local_1038 = 0;
    local_1030 = &local_res18;
    FUN_180501904(*puVar1 | 2,local_1028,0x1000,param_2);
  }
  return;
}



/* ===== 1802b2900 FUN_1802b2900 ===== */

void FUN_1802b2900(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if ((param_2 != 0) && (uVar3 = *(ulonglong *)(param_1 + 0x1000), uVar3 < 0xfff)) {
    local_res18 = param_3;
    local_res20 = param_4;
    puVar2 = (ulonglong *)FUN_180013640();
    iVar1 = FUN_180501904(*puVar2 | 2,uVar3 + param_1,0x1000 - uVar3,param_2,0,&local_res18);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    if (-1 < iVar1) {
      uVar3 = *(longlong *)(param_1 + 0x1000) + (longlong)iVar1;
      if (0xfff < uVar3) {
        uVar3 = 0xfff;
      }
      *(ulonglong *)(param_1 + 0x1000) = uVar3;
    }
  }
  return;
}



/* ===== 1802b29d0 FUN_1802b29d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1802b29d0(int *param_1,int param_2)

{
  _struct_19 _Var1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  LARGE_INTEGER local_res8;
  
  *param_1 = param_2;
  local_res8.QuadPart = 0;
  QueryPerformanceCounter(&local_res8);
  *(_struct_19 *)(param_1 + 2) = local_res8.s;
  _Var1 = DAT_181100e18;
  if (param_2 == 4) {
    LOCK();
    DAT_181100e18 = local_res8.s;
    UNLOCK();
    if ((_Var1 != (_struct_19)0x0) && ((ulonglong)_Var1 < (ulonglong)*(_struct_19 *)(param_1 + 2)))
    {
      uVar3 = (longlong)*(_struct_19 *)(param_1 + 2) - (longlong)_Var1;
      uVar2 = DAT_181106e50;
      do {
        if (uVar3 <= uVar2) break;
        LOCK();
        bVar4 = uVar2 == DAT_181106e50;
        if (bVar4) {
          DAT_181106e50 = uVar3;
        }
        else {
          uVar2 = DAT_181106e50;
        }
        UNLOCK();
      } while (!bVar4);
      LOCK();
      _DAT_181106e70 = _DAT_181106e70 + 1;
      UNLOCK();
      if ((0 < DAT_181106e58) &&
         (_DAT_1808ac640 <= ((double)uVar3 * DAT_1808ac730) / (double)DAT_181106e58)) {
        LOCK();
        _DAT_181100e50 = _DAT_181100e50 + 1;
        UNLOCK();
        return param_1;
      }
    }
  }
  return param_1;
}



/* ===== 1802b2ad0 FUN_1802b2ad0 ===== */

void FUN_1802b2ad0(uint *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  
  uVar2 = *param_1;
  if (uVar2 < 5) {
    *param_1 = 0xffffffff;
    local_res8.QuadPart = 0;
    QueryPerformanceCounter(&local_res8);
    uVar5 = local_res8.QuadPart - (longlong)*(_struct_19 *)(param_1 + 2);
    if ((ulonglong)local_res8.s <= (ulonglong)*(_struct_19 *)(param_1 + 2)) {
      uVar5 = 0;
    }
    lVar4 = (longlong)(int)uVar2 * 0x20;
    LOCK();
    *(longlong *)(&DAT_181100d68 + lVar4) = *(longlong *)(&DAT_181100d68 + lVar4) + 1;
    UNLOCK();
    LOCK();
    *(ulonglong *)(&DAT_181100d70 + lVar4) = *(longlong *)(&DAT_181100d70 + lVar4) + uVar5;
    UNLOCK();
    uVar3 = *(ulonglong *)(&DAT_181100d78 + lVar4);
    do {
      if (uVar5 <= uVar3) break;
      LOCK();
      uVar1 = *(ulonglong *)(&DAT_181100d78 + lVar4);
      bVar6 = uVar3 == uVar1;
      if (bVar6) {
        *(ulonglong *)(&DAT_181100d78 + lVar4) = uVar5;
      }
      else {
        uVar3 = uVar1;
      }
      UNLOCK();
    } while (!bVar6);
    if ((0 < DAT_181106e58) &&
       (DAT_1808ac548 <= ((double)uVar5 * DAT_1808ac730) / (double)DAT_181106e58)) {
      LOCK();
      *(longlong *)(&DAT_181100d80 + lVar4) = *(longlong *)(&DAT_181100d80 + lVar4) + 1;
      UNLOCK();
    }
  }
  return;
}



/* ===== 1802b2bb0 FUN_1802b2bb0 ===== */

void FUN_1802b2bb0(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_res10 [2];
  undefined *local_res18;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    if (DAT_181101d60 == (code *)0x0) {
      if ((DAT_180d00d48 == (code *)0x0) && (DAT_181106d70 == (code *)0x0)) {
        if (DAT_180cd0409 != '\0') {
          return;
        }
        FUN_1802b2280();
      }
      if (((DAT_181101d60 == (code *)0x0) && (DAT_180d00d48 == (code *)0x0)) &&
         (DAT_181106d70 == (code *)0x0)) {
        return;
      }
    }
    local_res18 = &DAT_1809f50e0;
    iVar3 = FUN_1804e4d70(&DAT_1809f50e0);
    uVar1 = DAT_181100e28;
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f512c == 0x7fffffff) {
      DAT_1809f512c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (DAT_181101d60 == (code *)0x0) {
      local_res10[0] = param_1;
      if (DAT_180d00d48 == (code *)0x0) {
        if (DAT_181106d70 != (code *)0x0) {
          (*DAT_181106d70)(&DAT_1806d3198,param_2);
        }
      }
      else {
        (*DAT_180d00d48)(local_res10,&DAT_1806d3198,param_2);
      }
    }
    else if ((DAT_181100d60 == (code *)0x0) || (DAT_181106e48 == (code *)0x0)) {
      (*DAT_181101d60)(DAT_181100e28,2,param_1,&DAT_1806d3198,param_2);
    }
    else {
      uVar4 = (*DAT_181100d60)(DAT_181100e28);
      pcVar2 = DAT_181106e48;
      if ((uVar4 >> 1 & 1) != 0) {
        uVar5 = (*DAT_181100d60)(uVar1);
        (*pcVar2)(uVar1,uVar5 & 0xfffffffd);
      }
      (*DAT_181101d60)(uVar1,2,param_1,&DAT_1806d3198,param_2);
      uVar5 = (*DAT_181100d60)(uVar1);
      if (uVar5 != ((uVar4 ^ uVar5) & 0xfffffffd ^ uVar4)) {
        (*DAT_181106e48)(uVar1);
      }
    }
    FUN_1804e4e90(&DAT_1809f50e0);
  }
  return;
}



/* ===== 1802b2d80 FUN_1802b2d80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b2d80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_668 [32];
  undefined8 local_648;
  undefined8 *local_640;
  undefined2 local_638 [8];
  undefined1 local_628 [512];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_668;
  if (((DAT_180961aa8 != (code *)0x0) && (DAT_180961d40 != (code *)0x0)) && (param_1 != 0)) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_628,0,0x200);
    puVar1 = (ulonglong *)FUN_180013640();
    local_648 = 0;
    local_640 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_628,0x200,param_1);
    uVar2 = (*DAT_180961aa8)("CCSGO_HudVoiceStatus");
    if (0x20 < uVar2) {
      FUN_180540170(local_428,0,0x400);
      snprintf(local_428,0x400,
               "<font color=\'#FCD9F0\'>[neverlose]</font> <font color=\'#FFFFFF\'>%s</font>",
               local_628);
      local_638[0] = 1;
      (*DAT_180961d40)(uVar2 - 0x20,local_428,0xffffffff,local_638);
    }
  }
  return;
}



/* ===== 1802b2ec0 FUN_1802b2ec0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802b2ec0(undefined8 param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  size_t sVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  undefined8 *local_1f0;
  ulonglong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  int local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  char local_158 [112];
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
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_218;
  if (param_2 < 1) {
    local_170 = param_1;
    FUN_180024b50(param_1,param_4);
  }
  else {
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
    local_170._0_4_ = *(undefined4 *)(param_3 + 0xc);
    local_170._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    local_1e0 = *(undefined4 *)(param_3 + 0x10);
    local_1e8._0_4_ = (undefined4)local_170;
    local_1f0._0_4_ = *(undefined4 *)(param_3 + 8);
    local_1f8._0_4_ = param_2;
    snprintf(&local_e8,0x60,"%s%d|%d|%08x|%d|",&DAT_1806f1fc8);
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    uStack_178 = 0;
    sVar6 = strlen((char *)&local_e8);
    FUN_1800133a0(&local_190,&local_e8,sVar6);
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    local_158[4] = '\0';
    local_158[5] = '\0';
    local_158[6] = '\0';
    local_158[7] = '\0';
    local_158[8] = '\0';
    local_158[9] = '\0';
    local_158[10] = '\0';
    local_158[0xb] = '\0';
    local_158[0xc] = '\0';
    local_158[0xd] = '\0';
    local_158[0xe] = '\0';
    local_158[0xf] = '\0';
    local_158[0x10] = '\0';
    local_158[0x11] = '\0';
    local_158[0x12] = '\0';
    local_158[0x13] = '\0';
    local_158[0x14] = '\0';
    local_158[0x15] = '\0';
    local_158[0x16] = '\0';
    local_158[0x17] = '\0';
    local_158[0x18] = '\0';
    local_158[0x19] = '\0';
    local_158[0x1a] = '\0';
    local_158[0x1b] = '\0';
    local_158[0x1c] = '\0';
    local_158[0x1d] = '\0';
    local_158[0x1e] = '\0';
    local_158[0x1f] = '\0';
    local_158[0x20] = '\0';
    local_158[0x21] = '\0';
    local_158[0x22] = '\0';
    local_158[0x23] = '\0';
    local_158[0x24] = '\0';
    local_158[0x25] = '\0';
    local_158[0x26] = '\0';
    local_158[0x27] = '\0';
    local_158[0x28] = '\0';
    local_158[0x29] = '\0';
    local_158[0x2a] = '\0';
    local_158[0x2b] = '\0';
    local_158[0x2c] = '\0';
    local_158[0x2d] = '\0';
    local_158[0x2e] = '\0';
    local_158[0x2f] = '\0';
    local_158[0x30] = '\0';
    local_158[0x31] = '\0';
    local_158[0x32] = '\0';
    local_158[0x33] = '\0';
    local_158[0x34] = '\0';
    local_158[0x35] = '\0';
    local_158[0x36] = '\0';
    local_158[0x37] = '\0';
    local_158[0x38] = '\0';
    local_158[0x39] = '\0';
    local_158[0x3a] = '\0';
    local_158[0x3b] = '\0';
    local_158[0x3c] = '\0';
    local_158[0x3d] = '\0';
    local_158[0x3e] = '\0';
    local_158[0x3f] = '\0';
    local_158[0x40] = '\0';
    local_158[0x41] = '\0';
    local_158[0x42] = '\0';
    local_158[0x43] = '\0';
    local_158[0x44] = '\0';
    local_158[0x45] = '\0';
    local_158[0x46] = '\0';
    local_158[0x47] = '\0';
    local_158[0x48] = '\0';
    local_158[0x49] = '\0';
    local_158[0x4a] = '\0';
    local_158[0x4b] = '\0';
    local_158[0x4c] = '\0';
    local_158[0x4d] = '\0';
    local_158[0x4e] = '\0';
    local_158[0x4f] = '\0';
    local_158[0x50] = '\0';
    local_158[0x51] = '\0';
    local_158[0x52] = '\0';
    local_158[0x53] = '\0';
    local_158[0x54] = '\0';
    local_158[0x55] = '\0';
    local_158[0x56] = '\0';
    local_158[0x57] = '\0';
    local_158[0x58] = '\0';
    local_158[0x59] = '\0';
    local_158[0x5a] = '\0';
    local_158[0x5b] = '\0';
    local_158[0x5c] = '\0';
    local_158[0x5d] = '\0';
    local_158[0x5e] = '\0';
    local_158[0x5f] = '\0';
    local_158[0x60] = '\0';
    local_158[0x61] = '\0';
    local_158[0x62] = '\0';
    local_158[99] = '\0';
    local_158[100] = '\0';
    local_158[0x65] = '\0';
    local_158[0x66] = '\0';
    local_158[0x67] = '\0';
    local_158[0x68] = '\0';
    local_158[0x69] = '\0';
    local_158[0x6a] = '\0';
    local_158[0x6b] = '\0';
    local_158[0x6c] = '\0';
    local_158[0x6d] = '\0';
    local_158[0x6e] = '\0';
    local_158[0x6f] = '\0';
    local_1c8 = *(int *)(param_3 + 0xf8);
    local_1d0 = *(undefined4 *)(param_3 + 0xf4);
    local_1d8 = *(undefined4 *)(param_3 + 0xf0);
    local_1e0 = *(undefined4 *)(param_3 + 0xec);
    local_1a0 = *(undefined4 *)(param_3 + 0xe8);
    local_170._0_4_ = *(undefined4 *)(param_3 + 0xe4);
    if (local_1c8 < 0) {
      local_1c8 = 0;
    }
    local_1f8._0_4_ = *(undefined4 *)(param_3 + 0xe0);
    local_1b8 = local_1d0;
    local_1b0 = local_1d8;
    local_1a8 = local_1e0;
    local_1e8._0_4_ = local_1a0;
    local_1f0._0_4_ = (undefined4)local_170;
    snprintf(local_158,0x70,"%s%d:%08x:%08x:%08x:%08x:%08x:%d",&DAT_18058b643);
    sVar6 = strlen(local_158);
    FUN_1800134a0(&local_190,local_158,sVar6);
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    local_158[4] = '\0';
    local_158[5] = '\0';
    local_158[6] = '\0';
    local_158[7] = '\0';
    local_158[8] = '\0';
    local_158[9] = '\0';
    local_158[10] = '\0';
    local_158[0xb] = '\0';
    local_158[0xc] = '\0';
    local_158[0xd] = '\0';
    local_158[0xe] = '\0';
    local_158[0xf] = '\0';
    local_158[0x10] = '\0';
    local_158[0x11] = '\0';
    local_158[0x12] = '\0';
    local_158[0x13] = '\0';
    local_158[0x14] = '\0';
    local_158[0x15] = '\0';
    local_158[0x16] = '\0';
    local_158[0x17] = '\0';
    local_158[0x18] = '\0';
    local_158[0x19] = '\0';
    local_158[0x1a] = '\0';
    local_158[0x1b] = '\0';
    local_158[0x1c] = '\0';
    local_158[0x1d] = '\0';
    local_158[0x1e] = '\0';
    local_158[0x1f] = '\0';
    local_158[0x20] = '\0';
    local_158[0x21] = '\0';
    local_158[0x22] = '\0';
    local_158[0x23] = '\0';
    local_158[0x24] = '\0';
    local_158[0x25] = '\0';
    local_158[0x26] = '\0';
    local_158[0x27] = '\0';
    local_158[0x28] = '\0';
    local_158[0x29] = '\0';
    local_158[0x2a] = '\0';
    local_158[0x2b] = '\0';
    local_158[0x2c] = '\0';
    local_158[0x2d] = '\0';
    local_158[0x2e] = '\0';
    local_158[0x2f] = '\0';
    local_158[0x30] = '\0';
    local_158[0x31] = '\0';
    local_158[0x32] = '\0';
    local_158[0x33] = '\0';
    local_158[0x34] = '\0';
    local_158[0x35] = '\0';
    local_158[0x36] = '\0';
    local_158[0x37] = '\0';
    local_158[0x38] = '\0';
    local_158[0x39] = '\0';
    local_158[0x3a] = '\0';
    local_158[0x3b] = '\0';
    local_158[0x3c] = '\0';
    local_158[0x3d] = '\0';
    local_158[0x3e] = '\0';
    local_158[0x3f] = '\0';
    local_158[0x40] = '\0';
    local_158[0x41] = '\0';
    local_158[0x42] = '\0';
    local_158[0x43] = '\0';
    local_158[0x44] = '\0';
    local_158[0x45] = '\0';
    local_158[0x46] = '\0';
    local_158[0x47] = '\0';
    local_158[0x48] = '\0';
    local_158[0x49] = '\0';
    local_158[0x4a] = '\0';
    local_158[0x4b] = '\0';
    local_158[0x4c] = '\0';
    local_158[0x4d] = '\0';
    local_158[0x4e] = '\0';
    local_158[0x4f] = '\0';
    local_158[0x50] = '\0';
    local_158[0x51] = '\0';
    local_158[0x52] = '\0';
    local_158[0x53] = '\0';
    local_158[0x54] = '\0';
    local_158[0x55] = '\0';
    local_158[0x56] = '\0';
    local_158[0x57] = '\0';
    local_158[0x58] = '\0';
    local_158[0x59] = '\0';
    local_158[0x5a] = '\0';
    local_158[0x5b] = '\0';
    local_158[0x5c] = '\0';
    local_158[0x5d] = '\0';
    local_158[0x5e] = '\0';
    local_158[0x5f] = '\0';
    local_158[0x60] = '\0';
    local_158[0x61] = '\0';
    local_158[0x62] = '\0';
    local_158[99] = '\0';
    local_158[100] = '\0';
    local_158[0x65] = '\0';
    local_158[0x66] = '\0';
    local_158[0x67] = '\0';
    local_158[0x68] = '\0';
    local_158[0x69] = '\0';
    local_158[0x6a] = '\0';
    local_158[0x6b] = '\0';
    local_158[0x6c] = '\0';
    local_158[0x6d] = '\0';
    local_158[0x6e] = '\0';
    local_158[0x6f] = '\0';
    local_1c8 = 1;
    if (-1 < *(int *)(param_3 + 0x114)) {
      local_1c8 = *(int *)(param_3 + 0x114);
    }
    local_1d0 = *(undefined4 *)(param_3 + 0x110);
    local_1d8 = *(undefined4 *)(param_3 + 0x10c);
    local_1e0 = *(undefined4 *)(param_3 + 0x108);
    local_1a0 = *(undefined4 *)(param_3 + 0x104);
    local_170._0_4_ = *(undefined4 *)(param_3 + 0x100);
    local_1f8._0_4_ = *(undefined4 *)(param_3 + 0xfc);
    local_1b8 = local_1d0;
    local_1b0 = local_1d8;
    local_1a8 = local_1e0;
    local_1e8._0_4_ = local_1a0;
    local_1f0._0_4_ = (undefined4)local_170;
    snprintf(local_158,0x70,"%s%d:%08x:%08x:%08x:%08x:%08x:%d",&DAT_1806f8e8c);
    sVar6 = strlen(local_158);
    FUN_1800134a0(&local_190,local_158,sVar6);
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    local_158[4] = '\0';
    local_158[5] = '\0';
    local_158[6] = '\0';
    local_158[7] = '\0';
    local_158[8] = '\0';
    local_158[9] = '\0';
    local_158[10] = '\0';
    local_158[0xb] = '\0';
    local_158[0xc] = '\0';
    local_158[0xd] = '\0';
    local_158[0xe] = '\0';
    local_158[0xf] = '\0';
    local_158[0x10] = '\0';
    local_158[0x11] = '\0';
    local_158[0x12] = '\0';
    local_158[0x13] = '\0';
    local_158[0x14] = '\0';
    local_158[0x15] = '\0';
    local_158[0x16] = '\0';
    local_158[0x17] = '\0';
    local_158[0x18] = '\0';
    local_158[0x19] = '\0';
    local_158[0x1a] = '\0';
    local_158[0x1b] = '\0';
    local_158[0x1c] = '\0';
    local_158[0x1d] = '\0';
    local_158[0x1e] = '\0';
    local_158[0x1f] = '\0';
    local_158[0x20] = '\0';
    local_158[0x21] = '\0';
    local_158[0x22] = '\0';
    local_158[0x23] = '\0';
    local_158[0x24] = '\0';
    local_158[0x25] = '\0';
    local_158[0x26] = '\0';
    local_158[0x27] = '\0';
    local_158[0x28] = '\0';
    local_158[0x29] = '\0';
    local_158[0x2a] = '\0';
    local_158[0x2b] = '\0';
    local_158[0x2c] = '\0';
    local_158[0x2d] = '\0';
    local_158[0x2e] = '\0';
    local_158[0x2f] = '\0';
    local_158[0x30] = '\0';
    local_158[0x31] = '\0';
    local_158[0x32] = '\0';
    local_158[0x33] = '\0';
    local_158[0x34] = '\0';
    local_158[0x35] = '\0';
    local_158[0x36] = '\0';
    local_158[0x37] = '\0';
    local_158[0x38] = '\0';
    local_158[0x39] = '\0';
    local_158[0x3a] = '\0';
    local_158[0x3b] = '\0';
    local_158[0x3c] = '\0';
    local_158[0x3d] = '\0';
    local_158[0x3e] = '\0';
    local_158[0x3f] = '\0';
    local_158[0x40] = '\0';
    local_158[0x41] = '\0';
    local_158[0x42] = '\0';
    local_158[0x43] = '\0';
    local_158[0x44] = '\0';
    local_158[0x45] = '\0';
    local_158[0x46] = '\0';
    local_158[0x47] = '\0';
    local_158[0x48] = '\0';
    local_158[0x49] = '\0';
    local_158[0x4a] = '\0';
    local_158[0x4b] = '\0';
    local_158[0x4c] = '\0';
    local_158[0x4d] = '\0';
    local_158[0x4e] = '\0';
    local_158[0x4f] = '\0';
    local_158[0x50] = '\0';
    local_158[0x51] = '\0';
    local_158[0x52] = '\0';
    local_158[0x53] = '\0';
    local_158[0x54] = '\0';
    local_158[0x55] = '\0';
    local_158[0x56] = '\0';
    local_158[0x57] = '\0';
    local_158[0x58] = '\0';
    local_158[0x59] = '\0';
    local_158[0x5a] = '\0';
    local_158[0x5b] = '\0';
    local_158[0x5c] = '\0';
    local_158[0x5d] = '\0';
    local_158[0x5e] = '\0';
    local_158[0x5f] = '\0';
    local_158[0x60] = '\0';
    local_158[0x61] = '\0';
    local_158[0x62] = '\0';
    local_158[99] = '\0';
    local_158[100] = '\0';
    local_158[0x65] = '\0';
    local_158[0x66] = '\0';
    local_158[0x67] = '\0';
    local_158[0x68] = '\0';
    local_158[0x69] = '\0';
    local_158[0x6a] = '\0';
    local_158[0x6b] = '\0';
    local_158[0x6c] = '\0';
    local_158[0x6d] = '\0';
    local_158[0x6e] = '\0';
    local_158[0x6f] = '\0';
    local_1c8 = 2;
    if (-1 < *(int *)(param_3 + 0x130)) {
      local_1c8 = *(int *)(param_3 + 0x130);
    }
    local_1d0 = *(undefined4 *)(param_3 + 300);
    local_1d8 = *(undefined4 *)(param_3 + 0x128);
    local_1e0 = *(undefined4 *)(param_3 + 0x124);
    local_1a0 = *(undefined4 *)(param_3 + 0x120);
    local_170._0_4_ = *(undefined4 *)(param_3 + 0x11c);
    local_1f8._0_4_ = *(undefined4 *)(param_3 + 0x118);
    local_1b8 = local_1d0;
    local_1b0 = local_1d8;
    local_1a8 = local_1e0;
    local_1e8._0_4_ = local_1a0;
    local_1f0._0_4_ = (undefined4)local_170;
    snprintf(local_158,0x70,"%s%d:%08x:%08x:%08x:%08x:%08x:%d",&DAT_1806f8e8c);
    sVar6 = strlen(local_158);
    FUN_1800134a0(&local_190,local_158,sVar6);
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    local_158[4] = '\0';
    local_158[5] = '\0';
    local_158[6] = '\0';
    local_158[7] = '\0';
    local_158[8] = '\0';
    local_158[9] = '\0';
    local_158[10] = '\0';
    local_158[0xb] = '\0';
    local_158[0xc] = '\0';
    local_158[0xd] = '\0';
    local_158[0xe] = '\0';
    local_158[0xf] = '\0';
    local_158[0x10] = '\0';
    local_158[0x11] = '\0';
    local_158[0x12] = '\0';
    local_158[0x13] = '\0';
    local_158[0x14] = '\0';
    local_158[0x15] = '\0';
    local_158[0x16] = '\0';
    local_158[0x17] = '\0';
    local_158[0x18] = '\0';
    local_158[0x19] = '\0';
    local_158[0x1a] = '\0';
    local_158[0x1b] = '\0';
    local_158[0x1c] = '\0';
    local_158[0x1d] = '\0';
    local_158[0x1e] = '\0';
    local_158[0x1f] = '\0';
    local_158[0x20] = '\0';
    local_158[0x21] = '\0';
    local_158[0x22] = '\0';
    local_158[0x23] = '\0';
    local_158[0x24] = '\0';
    local_158[0x25] = '\0';
    local_158[0x26] = '\0';
    local_158[0x27] = '\0';
    local_158[0x28] = '\0';
    local_158[0x29] = '\0';
    local_158[0x2a] = '\0';
    local_158[0x2b] = '\0';
    local_158[0x2c] = '\0';
    local_158[0x2d] = '\0';
    local_158[0x2e] = '\0';
    local_158[0x2f] = '\0';
    local_158[0x30] = '\0';
    local_158[0x31] = '\0';
    local_158[0x32] = '\0';
    local_158[0x33] = '\0';
    local_158[0x34] = '\0';
    local_158[0x35] = '\0';
    local_158[0x36] = '\0';
    local_158[0x37] = '\0';
    local_158[0x38] = '\0';
    local_158[0x39] = '\0';
    local_158[0x3a] = '\0';
    local_158[0x3b] = '\0';
    local_158[0x3c] = '\0';
    local_158[0x3d] = '\0';
    local_158[0x3e] = '\0';
    local_158[0x3f] = '\0';
    local_158[0x40] = '\0';
    local_158[0x41] = '\0';
    local_158[0x42] = '\0';
    local_158[0x43] = '\0';
    local_158[0x44] = '\0';
    local_158[0x45] = '\0';
    local_158[0x46] = '\0';
    local_158[0x47] = '\0';
    local_158[0x48] = '\0';
    local_158[0x49] = '\0';
    local_158[0x4a] = '\0';
    local_158[0x4b] = '\0';
    local_158[0x4c] = '\0';
    local_158[0x4d] = '\0';
    local_158[0x4e] = '\0';
    local_158[0x4f] = '\0';
    local_158[0x50] = '\0';
    local_158[0x51] = '\0';
    local_158[0x52] = '\0';
    local_158[0x53] = '\0';
    local_158[0x54] = '\0';
    local_158[0x55] = '\0';
    local_158[0x56] = '\0';
    local_158[0x57] = '\0';
    local_158[0x58] = '\0';
    local_158[0x59] = '\0';
    local_158[0x5a] = '\0';
    local_158[0x5b] = '\0';
    local_158[0x5c] = '\0';
    local_158[0x5d] = '\0';
    local_158[0x5e] = '\0';
    local_158[0x5f] = '\0';
    local_158[0x60] = '\0';
    local_158[0x61] = '\0';
    local_158[0x62] = '\0';
    local_158[99] = '\0';
    local_158[100] = '\0';
    local_158[0x65] = '\0';
    local_158[0x66] = '\0';
    local_158[0x67] = '\0';
    local_158[0x68] = '\0';
    local_158[0x69] = '\0';
    local_158[0x6a] = '\0';
    local_158[0x6b] = '\0';
    local_158[0x6c] = '\0';
    local_158[0x6d] = '\0';
    local_158[0x6e] = '\0';
    local_158[0x6f] = '\0';
    local_1c8 = 3;
    if (-1 < *(int *)(param_3 + 0x14c)) {
      local_1c8 = *(int *)(param_3 + 0x14c);
    }
    local_1d0 = *(undefined4 *)(param_3 + 0x148);
    local_1d8 = *(undefined4 *)(param_3 + 0x144);
    local_1e0 = *(undefined4 *)(param_3 + 0x140);
    local_1a0 = *(undefined4 *)(param_3 + 0x13c);
    local_170._0_4_ = *(undefined4 *)(param_3 + 0x138);
    local_1f8._0_4_ = *(undefined4 *)(param_3 + 0x134);
    local_1b8 = local_1d0;
    local_1b0 = local_1d8;
    local_1a8 = local_1e0;
    local_1e8._0_4_ = local_1a0;
    local_1f0._0_4_ = (undefined4)local_170;
    snprintf(local_158,0x70,"%s%d:%08x:%08x:%08x:%08x:%08x:%d",&DAT_1806f8e8c);
    sVar6 = strlen(local_158);
    FUN_1800134a0(&local_190,local_158,sVar6);
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    local_158[4] = '\0';
    local_158[5] = '\0';
    local_158[6] = '\0';
    local_158[7] = '\0';
    local_158[8] = '\0';
    local_158[9] = '\0';
    local_158[10] = '\0';
    local_158[0xb] = '\0';
    local_158[0xc] = '\0';
    local_158[0xd] = '\0';
    local_158[0xe] = '\0';
    local_158[0xf] = '\0';
    local_158[0x10] = '\0';
    local_158[0x11] = '\0';
    local_158[0x12] = '\0';
    local_158[0x13] = '\0';
    local_158[0x14] = '\0';
    local_158[0x15] = '\0';
    local_158[0x16] = '\0';
    local_158[0x17] = '\0';
    local_158[0x18] = '\0';
    local_158[0x19] = '\0';
    local_158[0x1a] = '\0';
    local_158[0x1b] = '\0';
    local_158[0x1c] = '\0';
    local_158[0x1d] = '\0';
    local_158[0x1e] = '\0';
    local_158[0x1f] = '\0';
    local_158[0x20] = '\0';
    local_158[0x21] = '\0';
    local_158[0x22] = '\0';
    local_158[0x23] = '\0';
    local_158[0x24] = '\0';
    local_158[0x25] = '\0';
    local_158[0x26] = '\0';
    local_158[0x27] = '\0';
    local_158[0x28] = '\0';
    local_158[0x29] = '\0';
    local_158[0x2a] = '\0';
    local_158[0x2b] = '\0';
    local_158[0x2c] = '\0';
    local_158[0x2d] = '\0';
    local_158[0x2e] = '\0';
    local_158[0x2f] = '\0';
    local_158[0x30] = '\0';
    local_158[0x31] = '\0';
    local_158[0x32] = '\0';
    local_158[0x33] = '\0';
    local_158[0x34] = '\0';
    local_158[0x35] = '\0';
    local_158[0x36] = '\0';
    local_158[0x37] = '\0';
    local_158[0x38] = '\0';
    local_158[0x39] = '\0';
    local_158[0x3a] = '\0';
    local_158[0x3b] = '\0';
    local_158[0x3c] = '\0';
    local_158[0x3d] = '\0';
    local_158[0x3e] = '\0';
    local_158[0x3f] = '\0';
    local_158[0x40] = '\0';
    local_158[0x41] = '\0';
    local_158[0x42] = '\0';
    local_158[0x43] = '\0';
    local_158[0x44] = '\0';
    local_158[0x45] = '\0';
    local_158[0x46] = '\0';
    local_158[0x47] = '\0';
    local_158[0x48] = '\0';
    local_158[0x49] = '\0';
    local_158[0x4a] = '\0';
    local_158[0x4b] = '\0';
    local_158[0x4c] = '\0';
    local_158[0x4d] = '\0';
    local_158[0x4e] = '\0';
    local_158[0x4f] = '\0';
    local_158[0x50] = '\0';
    local_158[0x51] = '\0';
    local_158[0x52] = '\0';
    local_158[0x53] = '\0';
    local_158[0x54] = '\0';
    local_158[0x55] = '\0';
    local_158[0x56] = '\0';
    local_158[0x57] = '\0';
    local_158[0x58] = '\0';
    local_158[0x59] = '\0';
    local_158[0x5a] = '\0';
    local_158[0x5b] = '\0';
    local_158[0x5c] = '\0';
    local_158[0x5d] = '\0';
    local_158[0x5e] = '\0';
    local_158[0x5f] = '\0';
    local_158[0x60] = '\0';
    local_158[0x61] = '\0';
    local_158[0x62] = '\0';
    local_158[99] = '\0';
    local_158[100] = '\0';
    local_158[0x65] = '\0';
    local_158[0x66] = '\0';
    local_158[0x67] = '\0';
    local_158[0x68] = '\0';
    local_158[0x69] = '\0';
    local_158[0x6a] = '\0';
    local_158[0x6b] = '\0';
    local_158[0x6c] = '\0';
    local_158[0x6d] = '\0';
    local_158[0x6e] = '\0';
    local_158[0x6f] = '\0';
    local_1c8 = 4;
    if (-1 < *(int *)(param_3 + 0x168)) {
      local_1c8 = *(int *)(param_3 + 0x168);
    }
    local_1d0 = *(undefined4 *)(param_3 + 0x164);
    local_1d8 = *(undefined4 *)(param_3 + 0x160);
    local_1e0 = *(undefined4 *)(param_3 + 0x15c);
    local_1a0 = *(undefined4 *)(param_3 + 0x158);
    local_170 = CONCAT44(local_170._4_4_,*(undefined4 *)(param_3 + 0x154));
    local_1e8 = CONCAT44(local_1e8._4_4_,local_1a0);
    local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,*(undefined4 *)(param_3 + 0x154));
    local_1f8 = CONCAT44(local_1f8._4_4_,*(undefined4 *)(param_3 + 0x150));
    local_1b8 = local_1d0;
    local_1b0 = local_1d8;
    local_1a8 = local_1e0;
    snprintf(local_158,0x70,"%s%d:%08x:%08x:%08x:%08x:%08x:%d",&DAT_1806f8e8c);
    sVar6 = strlen(local_158);
    FUN_1800134a0(&local_190,local_158,sVar6);
    FUN_1800690a0(&local_190,0x7c);
    fVar5 = DAT_1808acb94;
    fVar4 = DAT_1808ac34c;
    fVar3 = DAT_1808ac1f4;
    if (*(char *)(param_3 + 0x5c) == '\0') {
      FUN_1800690a0(&local_190,0x2d);
    }
    else {
      uVar8 = 0;
      do {
        local_170 = 0;
        uStack_168 = 0;
        fVar2 = *(float *)(param_3 + 0x60 + uVar8 * 0x10);
        if (0.0 <= fVar2) {
          fVar13 = fVar4;
          if (fVar2 <= fVar4) {
            fVar13 = fVar2;
          }
        }
        else {
          fVar13 = 0.0;
        }
        fVar2 = *(float *)(param_3 + 100 + uVar8 * 0x10);
        if (0.0 <= fVar2) {
          fVar10 = fVar4;
          if (fVar2 <= fVar4) {
            fVar10 = fVar2;
          }
        }
        else {
          fVar10 = 0.0;
        }
        fVar2 = *(float *)(param_3 + 0x68 + uVar8 * 0x10);
        if (0.0 <= fVar2) {
          fVar11 = fVar4;
          if (fVar2 <= fVar4) {
            fVar11 = fVar2;
          }
        }
        else {
          fVar11 = 0.0;
        }
        fVar2 = *(float *)(param_3 + 0x6c + uVar8 * 0x10);
        if (0.0 <= fVar2) {
          fVar12 = fVar4;
          if (fVar2 <= fVar4) {
            fVar12 = fVar2;
          }
        }
        else {
          fVar12 = 0.0;
        }
        puVar9 = &DAT_18058b643;
        if ((int)uVar8 != 0) {
          puVar9 = &DAT_18073ec98;
        }
        local_1f8 = CONCAT44(local_1f8._4_4_,
                             (uint)(longlong)(fVar13 * fVar5 + fVar3) |
                             (int)(longlong)(fVar10 * fVar5 + fVar3) << 8 |
                             (int)(longlong)(fVar11 * fVar5 + fVar3) << 0x10 |
                             (int)(longlong)(fVar12 * fVar5 + fVar3) << 0x18);
        snprintf(&local_170,0x10,"%s%08x",puVar9);
        sVar6 = strlen((char *)&local_170);
        FUN_1800134a0(&local_190,&local_170,sVar6);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < 8);
    }
    FUN_1800690a0(&local_190,0x7c);
    puVar1 = param_4 + 2;
    if (0x7fffffffffffffffU - local_180 < *puVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    local_1f8 = local_180;
    local_1f0 = param_4;
    local_1e8 = *puVar1;
    FUN_180069380(param_1);
    FUN_18000f890(&local_190);
  }
  return param_1;
}



/* ===== 1802b35e0 FUN_1802b35e0 ===== */

void FUN_1802b35e0(void)

{
  FUN_180364ab0();
  return;
}



/* ===== 1802b35f0 FUN_1802b35f0 ===== */

void FUN_1802b35f0(uint param_1,undefined4 param_2)

{
  uint local_res18 [4];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_2c = 0;
  local_res18[0] = param_1 ^ 0x5bd1e995;
  local_28 = 0xffffffff;
  local_38 = param_2;
  local_34 = param_2;
  local_30 = param_2;
  FUN_18034a380(local_res18[0],local_48,local_res18,&local_38);
  FUN_1802b3660(local_48[0] + 0x14,param_2,DAT_1808ac118,0);
  return;
}



/* ===== 1802b3660 FUN_1802b3660 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1802b3660(float *param_1,float param_2,float param_3,char param_4)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8 [2];
  float local_res10 [6];
  float local_58 [20];
  
  lVar2 = DAT_180ca0a50;
  fVar5 = DAT_1808abf80;
  fVar6 = param_1[2];
  if (fVar6 != param_2) {
    param_1[1] = *param_1;
    param_1[2] = param_2;
    param_1[3] = 0.0;
    return *param_1;
  }
  if (param_1[4] == *(float *)(DAT_180ca0a50 + 4)) {
    return *param_1;
  }
  param_1[4] = *(float *)(DAT_180ca0a50 + 4);
  if (fVar5 <= (float)((uint)(*param_1 - fVar6) & _DAT_1808ade90)) {
    local_58[2] = *(float *)(lVar2 + 0x40) + param_1[3];
    param_1[3] = local_58[2];
    fVar1 = DAT_1808ac34c;
    fVar5 = DAT_1808ac1f4;
    if ((0.0 < param_3) && (local_58[2] < param_3)) {
      local_58[2] = local_58[2] / param_3;
      if (param_4 == '\0') {
        local_58[5] = 1.0;
        pfVar4 = local_res10;
        if (0.0 <= local_58[2]) {
          pfVar4 = local_res8;
        }
        pfVar3 = local_58 + 5;
        if (local_58[2] <= DAT_1808ac34c) {
          pfVar3 = pfVar4;
        }
        fVar5 = DAT_1808ac34c - *pfVar3;
        fVar7 = DAT_1808ac34c - fVar5 * fVar5 * fVar5;
      }
      else {
        local_58[4] = 1.0;
        local_58[0] = 0.0;
        pfVar4 = local_58;
        if (0.0 <= local_58[2]) {
          pfVar4 = local_58 + 2;
        }
        pfVar3 = local_58 + 4;
        if (local_58[2] <= DAT_1808ac34c) {
          pfVar3 = pfVar4;
        }
        fVar7 = *pfVar3;
        if (DAT_1808ac1f4 <= fVar7) {
          fVar7 = (float)FUN_18051afb0(DAT_1808ac540 - (fVar7 + fVar7),DAT_1808ac658);
          fVar7 = fVar1 - fVar7 * fVar5;
        }
        else {
          fVar7 = fVar7 * DAT_1808ac710 * fVar7 * fVar7;
        }
      }
      fVar6 = (fVar6 - param_1[1]) * fVar7 + param_1[1];
      *param_1 = fVar6;
      return fVar6;
    }
  }
  *param_1 = fVar6;
  param_1[3] = 0.0;
  return fVar6;
}



/* ===== 1802b3850 FUN_1802b3850 ===== */

void FUN_1802b3850(undefined8 param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [6];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = 0;
  if (param_2 == '\0') {
    if (param_3 != '\0') {
      uVar1 = DAT_1808ac1f4;
    }
  }
  else {
    uVar1 = DAT_1808ac34c;
  }
  local_res10[0] = (undefined4)param_1;
  local_2c = 0;
  local_28 = 0xffffffff;
  local_38 = uVar1;
  local_34 = uVar1;
  local_30 = uVar1;
  FUN_18034a380(param_1,local_48,local_res10,&local_38);
  FUN_1802b3660(local_48[0] + 0x14,uVar1,DAT_1808ac118,0);
  return;
}



/* ===== 1802b38e0 FUN_1802b38e0 ===== */

uint FUN_1802b38e0(ulonglong param_1,uint param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)((uint)(param_1 >> 0x18) & 0xff);
  fVar2 = (float)((uint)(param_1 >> 0x10) & 0xff);
  fVar1 = (float)((uint)param_1 >> 8 & 0xff);
  return (((int)(longlong)(((float)(param_2 >> 0x18) - fVar3) * param_3 + fVar3 + DAT_1808ac1f4) <<
           8 | (uint)(longlong)
                     (((float)(param_2 >> 0x10 & 0xff) - fVar2) * param_3 + fVar2 + DAT_1808ac1f4))
          << 8 | (uint)(longlong)
                       (((float)(param_2 >> 8 & 0xff) - fVar1) * param_3 + fVar1 + DAT_1808ac1f4))
         << 8 | (uint)(longlong)
                      (((float)(param_2 & 0xff) - (float)(param_1 & 0xff)) * param_3 +
                       (float)(param_1 & 0xff) + DAT_1808ac1f4);
}



/* ===== 1802b39d0 FUN_1802b39d0 ===== */

undefined8 *
FUN_1802b39d0(undefined8 *param_1,undefined8 param_2,float *param_3,float param_4,uint param_5,
             char param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar8;
  undefined4 uVar9;
  float local_res8;
  float local_resc;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  *param_1 = 0x3f800000;
  if ((char)param_5 == '\0') goto LAB_1802b3b7e;
  uVar7 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8));
  fVar1 = *(float *)(DAT_180ca0a50 + 0x1200);
  fVar2 = *(float *)(DAT_180ca0a50 + 0xce0);
  uVar3 = *(uint *)(DAT_180ca0a50 + 0x1578);
  cVar5 = FUN_1803e7af0(0x80);
  uVar8 = extraout_XMM0_Da;
  if (cVar5 == '\0') {
LAB_1802b3a95:
    cVar6 = '\0';
  }
  else {
    local_res8 = param_4 + *param_3;
    cVar6 = '\x01';
    local_resc = fVar1 + fVar2 + fVar2 + param_3[1];
    cVar5 = FUN_1803e9740(param_3,&local_res8);
    uVar8 = extraout_XMM0_Da_00;
    if (cVar5 == '\0') goto LAB_1802b3a95;
  }
  uVar9 = 0;
  if (uVar3 == uVar7) {
    uVar9 = DAT_1808ac34c;
  }
  else if (cVar6 != '\0') {
    uVar9 = DAT_1808ac1f4;
  }
  param_5 = uVar7 ^ 0xf3d3244;
  local_4c = 0;
  local_48 = 0xffffffff;
  local_58 = uVar9;
  local_54 = uVar9;
  local_50 = uVar9;
  FUN_18034a380(uVar8,local_68,&param_5,&local_58);
  uVar8 = FUN_1802b3660(local_68[0] + 0x14,uVar9,DAT_1808ac118,0);
  uVar8 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4,uVar8);
  FUN_1803d8730(7,uVar8);
  FUN_1803d8730(8,uVar8);
  FUN_1803d8730(9,uVar8);
  FUN_1803d8730(5,DAT_180960eec);
  *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + 4;
LAB_1802b3b7e:
  if (param_6 != '\0') {
    FUN_1803d8730(0,DAT_180960ef8);
    *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + 1;
  }
  FUN_1803d8730(1,DAT_180960ec4);
  FUN_1803d8730(0x34,DAT_180960f54);
  FUN_1803d8730(0x22,DAT_180960ef8);
  lVar4 = DAT_180ca0a50;
  *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + 3;
  *(undefined4 *)param_1 = *(undefined4 *)(lVar4 + 0xd98);
  *(undefined4 *)(lVar4 + 0xd98) = 0x3f800000;
  return param_1;
}



/* ===== 1802b3c00 FUN_1802b3c00 ===== */

void FUN_1802b3c00(undefined4 *param_1)

{
  *(undefined4 *)(DAT_180ca0a50 + 0xd98) = *param_1;
  FUN_1803d87f0(param_1[1]);
  return;
}



/* ===== 1802b3c30 FUN_1802b3c30 ===== */

void FUN_1802b3c30(longlong param_1,int param_2,int param_3,float param_4)

{
  longlong *plVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  
  fVar3 = DAT_1808ac1f4;
  if (param_4 < DAT_1808ac34c) {
    if (*(int *)(param_1 + 0x20) < param_3) {
      param_3 = *(int *)(param_1 + 0x20);
    }
    if (param_2 < param_3) {
      plVar1 = (longlong *)(param_1 + 0x28);
      if (3 < param_3 - param_2) {
        do {
          lVar4 = (longlong)param_2;
          param_2 = param_2 + 4;
          uVar2 = *(uint *)(*plVar1 + 0x10 + lVar4 * 0x14);
          *(uint *)(*plVar1 + 0x10 + lVar4 * 0x14) =
               (int)(longlong)((float)(uVar2 >> 0x18) * param_4 + fVar3) << 0x18 | uVar2 & 0xffffff;
          uVar2 = *(uint *)(*plVar1 + 0x24 + lVar4 * 0x14);
          *(uint *)(*plVar1 + 0x24 + lVar4 * 0x14) =
               (int)(longlong)((float)(uVar2 >> 0x18) * param_4 + fVar3) << 0x18 | uVar2 & 0xffffff;
          uVar2 = *(uint *)(*plVar1 + 0x38 + lVar4 * 0x14);
          *(uint *)(*plVar1 + 0x38 + lVar4 * 0x14) =
               (int)(longlong)((float)(uVar2 >> 0x18) * param_4 + fVar3) << 0x18 | uVar2 & 0xffffff;
          uVar2 = *(uint *)(*plVar1 + 0x4c + lVar4 * 0x14);
          *(uint *)(*plVar1 + 0x4c + lVar4 * 0x14) =
               (int)(longlong)((float)(uVar2 >> 0x18) * param_4 + fVar3) << 0x18 | uVar2 & 0xffffff;
        } while (param_2 < param_3 + -3);
        if (param_3 <= param_2) {
          return;
        }
      }
      do {
        lVar4 = (longlong)param_2;
        param_2 = param_2 + 1;
        uVar2 = *(uint *)(*plVar1 + 0x10 + lVar4 * 0x14);
        *(uint *)(*plVar1 + 0x10 + lVar4 * 0x14) =
             (int)(longlong)((float)(uVar2 >> 0x18) * param_4 + fVar3) << 0x18 | uVar2 & 0xffffff;
      } while (param_2 < param_3);
    }
  }
  return;
}



/* ===== 1802b3db0 FUN_1802b3db0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802b3db0(undefined8 *param_1,LPCSTR param_2)

{
  LPWSTR ***ppppWVar1;
  WCHAR WVar2;
  int cchWideChar;
  LPWSTR ***ppppWVar3;
  int iVar4;
  LPCSTR pCVar5;
  undefined1 auStackY_88 [32];
  LPWSTR ***local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStackY_88;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    pCVar5 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pCVar5 = *(LPCSTR *)param_2;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,pCVar5,(int)*(longlong *)(param_2 + 0x10),(LPWSTR)0x0
                                      ,0);
    iVar4 = cchWideChar;
    if (cchWideChar < 0) {
      iVar4 = 0;
    }
    FUN_1800968c0(&local_48,(longlong)iVar4,0);
    if (0 < cchWideChar) {
      ppppWVar3 = (LPWSTR ***)&local_48;
      if (7 < uStack_30) {
        ppppWVar3 = local_48;
      }
      if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
        pCVar5 = param_2;
      }
      else {
        pCVar5 = *(LPCSTR *)param_2;
      }
      MultiByteToWideChar(0xfde9,0,pCVar5,*(int *)(param_2 + 0x10),(LPWSTR)ppppWVar3,cchWideChar);
    }
    ppppWVar3 = (LPWSTR ***)&local_48;
    if (7 < uStack_30) {
      ppppWVar3 = local_48;
    }
    ppppWVar1 = (LPWSTR ***)((longlong)ppppWVar3 + local_38 * 2);
    for (; ppppWVar3 != ppppWVar1; ppppWVar3 = (LPWSTR ***)((longlong)ppppWVar3 + 2)) {
      WVar2 = FUN_1805183a4(*(WCHAR *)ppppWVar3);
      *(WCHAR *)ppppWVar3 = WVar2;
    }
    *param_1 = local_48;
    param_1[1] = uStack_40;
    param_1[2] = local_38;
    param_1[3] = uStack_30;
  }
  return param_1;
}



/* ===== 1802b3ef0 FUN_1802b3ef0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1802b3ef0(undefined8 param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  if (DAT_1809f54e0 == 0) {
    return true;
  }
  puVar2 = (undefined8 *)FUN_1802b3db0(local_38,param_1);
  puVar5 = &DAT_1809f54d0;
  if (7 < DAT_1809f54e8) {
    puVar5 = DAT_1809f54d0;
  }
  puVar1 = puVar2 + 2;
  if (7 < (ulonglong)puVar2[3]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  if (DAT_1809f54e0 <= *puVar1) {
    if (DAT_1809f54e0 == 0) {
      lVar4 = 0;
      goto LAB_1802b3fa5;
    }
    lVar4 = (longlong)puVar2 + *puVar1 * 2;
    lVar3 = thunk_FUN_1804e94c0(puVar2,lVar4,puVar5);
    if (lVar3 != lVar4) {
      lVar4 = lVar3 - (longlong)puVar2 >> 1;
      goto LAB_1802b3fa5;
    }
  }
  lVar4 = -1;
LAB_1802b3fa5:
  FUN_1800289e0(local_38);
  return lVar4 != -1;
}



/* ===== 1802b3fe0 FUN_1802b3fe0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802b3fe0(undefined8 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  byte ****ppppbVar7;
  size_t sVar8;
  char ****ppppcVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  byte ****ppppbVar15;
  undefined **ppuVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte ****ppppbVar21;
  bool bVar22;
  undefined1 auStack_f8 [32];
  size_t local_d8;
  char local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  undefined8 *local_a8;
  undefined8 ****local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  byte ****local_80;
  char ***pppcStack_78;
  size_t local_70;
  ulonglong local_68;
  char ****local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if (param_2 == (char *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    pcVar17 = param_2;
    if (param_2 != (char *)0xffffffffffffffff) {
      while (*pcVar17 != '\0') {
        if (((*pcVar17 == '#') && (pcVar17[1] == '#')) ||
           (pcVar17 = pcVar17 + 1, pcVar17 == (char *)0xffffffffffffffff)) break;
      }
    }
    local_a0 = (undefined8 ****)0x0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a8 = param_1;
    if (param_2 == pcVar17) {
      local_90 = 0;
      uStack_88 = 0xf;
      local_a0 = (undefined8 ****)0x0;
    }
    else {
      local_b8 = param_1;
      FUN_1800133a0(&local_a0,param_2,(longlong)pcVar17 - (longlong)param_2);
    }
    if (DAT_180cd048f == '\0') {
      puVar13 = (undefined8 *)0x0;
      local_b8 = (undefined8 *)0x0;
      local_c8 = '\x01';
      if (local_90 != 0) {
        do {
          ppppuVar10 = &local_a0;
          if (0xf < uStack_88) {
            ppppuVar10 = local_a0;
          }
          if (((local_90 <= puVar13) ||
              (lVar14 = local_90 + (longlong)ppppuVar10,
              lVar6 = thunk_FUN_1804e6c50((longlong)ppppuVar10 + (longlong)puVar13,lVar14,0x20),
              lVar6 == lVar14)) ||
             (local_c0 = lVar6 - (longlong)ppppuVar10, local_c0 == 0xffffffffffffffff)) {
            local_c0 = local_90;
          }
          uVar18 = local_c0;
          local_60 = (char ****)0x0;
          uStack_58 = 0;
          local_50 = 0;
          local_48 = 0;
          if (local_90 < puVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          uVar19 = local_c0 - (longlong)puVar13;
          if (local_90 - (longlong)puVar13 < local_c0 - (longlong)puVar13) {
            uVar19 = local_90 - (longlong)puVar13;
          }
          ppppuVar10 = &local_a0;
          if (0xf < uStack_88) {
            ppppuVar10 = local_a0;
          }
          FUN_1800133a0(&local_60,(longlong)ppppuVar10 + (longlong)puVar13,uVar19);
          uVar19 = local_50;
          local_80 = (byte ****)0x0;
          pppcStack_78 = (char ***)0x0;
          local_70 = 0;
          local_68 = 0;
          ppppcVar9 = (char ****)&local_60;
          if (0xf < local_48) {
            ppppcVar9 = local_60;
          }
          if (0x7fffffffffffffff < local_50) {
                    /* WARNING: Subroutine does not return */
            FUN_180011990();
          }
          if (local_50 < 0x10) {
            local_70 = local_50;
            uVar20 = 0xf;
            local_68 = 0xf;
            ppppbVar7 = (byte ****)*ppppcVar9;
            local_80 = ppppbVar7;
            pppcStack_78 = ppppcVar9[1];
          }
          else {
            uVar20 = local_50 | 0xf;
            if (uVar20 < 0x8000000000000000) {
              if (uVar20 < 0x16) {
                uVar20 = 0x16;
              }
            }
            else {
              uVar20 = 0x7fffffffffffffff;
            }
            ppppbVar7 = (byte ****)FUN_18000fb70(uVar20 + 1);
            local_70 = uVar19;
            local_80 = ppppbVar7;
            local_68 = uVar20;
            FUN_180540530(ppppbVar7,ppppcVar9,uVar19 + 1);
          }
          ppppbVar15 = (byte ****)&local_80;
          if (0xf < uVar20) {
            ppppbVar15 = ppppbVar7;
          }
          ppppbVar21 = (byte ****)((longlong)ppppbVar15 + uVar19);
          if (ppppbVar15 != ppppbVar21) {
            do {
              iVar5 = tolower((uint)*(byte *)ppppbVar15);
              *(byte *)ppppbVar15 = (byte)iVar5;
              ppppbVar15 = (byte ****)((longlong)ppppbVar15 + 1);
            } while (ppppbVar15 != ppppbVar21);
            uVar19 = local_70;
            ppppbVar7 = local_80;
            uVar20 = local_68;
          }
          ppuVar16 = &PTR_DAT_180659190;
          do {
            pcVar17 = *ppuVar16;
            sVar8 = strlen(pcVar17);
            ppppbVar15 = (byte ****)&local_80;
            if (0xf < uVar20) {
              ppppbVar15 = ppppbVar7;
            }
            if ((uVar19 == sVar8) &&
               ((uVar19 == 0 || (iVar5 = memcmp(ppppbVar15,pcVar17,uVar19), iVar5 == 0)))) {
              pcVar17 = ppuVar16[1];
              local_d8 = strlen(pcVar17);
              FUN_1800d8750(&local_a0,puVar13,local_50,pcVar17);
              goto LAB_1802b4413;
            }
            ppuVar16 = ppuVar16 + 2;
          } while (ppuVar16 != (undefined **)&DAT_180659390);
          if (local_c8 == '\0') {
            bVar4 = false;
            ppuVar16 = &PTR_DAT_1806a08e0;
            do {
              pcVar17 = *ppuVar16;
              sVar8 = strlen(pcVar17);
              ppppbVar15 = (byte ****)&local_80;
              if (0xf < uVar20) {
                ppppbVar15 = ppppbVar7;
              }
              if (uVar19 == sVar8) {
                if (uVar19 == 0) {
                  bVar22 = true;
                }
                else {
                  iVar5 = memcmp(ppppbVar15,pcVar17,uVar19);
                  bVar22 = iVar5 == 0;
                }
              }
              else {
                bVar22 = false;
              }
              bVar4 = (bool)(bVar4 | bVar22);
              ppuVar16 = ppuVar16 + 1;
            } while (ppuVar16 != &PTR_s_<svg_xmlns__http:__www_w3_org_20_1806a0950);
            puVar13 = local_b8;
            uVar18 = local_c0;
            if (!bVar4) goto LAB_1802b432f;
          }
          else {
LAB_1802b432f:
            if (local_50 != 0) {
              ppppcVar9 = (char ****)&local_60;
              if (0xf < local_48) {
                ppppcVar9 = local_60;
              }
              if ('`' < *(char *)ppppcVar9) {
                ppppcVar9 = (char ****)&local_60;
                if (0xf < local_48) {
                  ppppcVar9 = local_60;
                }
                if (*(char *)ppppcVar9 < '{') {
                  ppppcVar9 = (char ****)&local_60;
                  if (0xf < local_48) {
                    ppppcVar9 = local_60;
                  }
                  ppppuVar10 = &local_a0;
                  if (0xf < uStack_88) {
                    ppppuVar10 = local_a0;
                  }
                  *(char *)((longlong)ppppuVar10 + (longlong)puVar13) = *(char *)ppppcVar9 + -0x20;
                }
              }
            }
            if ((longlong)puVar13 + 1U < uVar18) {
              uVar19 = uStack_88;
              do {
                ppppuVar10 = &local_a0;
                if (0xf < uVar19) {
                  ppppuVar10 = local_a0;
                }
                if (*(char *)((longlong)ppppuVar10 + (longlong)puVar13) == '-') {
                  ppppuVar10 = &local_a0;
                  if (0xf < uVar19) {
                    ppppuVar10 = local_a0;
                  }
                  if ('`' < *(char *)((longlong)ppppuVar10 + (longlong)puVar13 + 1U)) {
                    ppppuVar10 = &local_a0;
                    if (0xf < uVar19) {
                      ppppuVar10 = local_a0;
                    }
                    if (*(char *)((longlong)ppppuVar10 + (longlong)puVar13 + 1U) < '{') {
                      ppppuVar10 = &local_a0;
                      if (0xf < uVar19) {
                        ppppuVar10 = local_a0;
                      }
                      ppppuVar11 = &local_a0;
                      if (0xf < uVar19) {
                        ppppuVar11 = local_a0;
                      }
                      *(char *)((longlong)ppppuVar11 + (longlong)puVar13 + 1U) =
                           *(char *)((longlong)ppppuVar10 + (longlong)puVar13 + 1U) + -0x20;
                      uVar19 = uStack_88;
                    }
                  }
                }
                uVar20 = (longlong)puVar13 + 2;
                puVar13 = (undefined8 *)((longlong)puVar13 + 1);
              } while (uVar20 < uVar18);
            }
          }
LAB_1802b4413:
          local_c8 = '\0';
          puVar13 = (undefined8 *)(uVar18 + 1);
          local_b8 = puVar13;
          FUN_18000f890(&local_80);
          FUN_18000f890(&local_60);
        } while (puVar13 < local_90);
        param_1 = local_a8;
      }
      uVar18 = local_90;
      if (DAT_180cd040c == '\0') {
        FUN_18035eb30(param_1,&local_a0);
      }
      else {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        ppppuVar10 = &local_a0;
        if (0xf < uStack_88) {
          ppppuVar10 = local_a0;
        }
        if (0x7fffffffffffffff < local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_180011990();
        }
        if (local_90 < 0x10) {
          param_1[2] = local_90;
          param_1[3] = 0xf;
          uVar1 = *(undefined4 *)((longlong)ppppuVar10 + 4);
          uVar2 = *(undefined4 *)(ppppuVar10 + 1);
          uVar3 = *(undefined4 *)((longlong)ppppuVar10 + 0xc);
          *(undefined4 *)param_1 = *(undefined4 *)ppppuVar10;
          *(undefined4 *)((longlong)param_1 + 4) = uVar1;
          *(undefined4 *)(param_1 + 1) = uVar2;
          *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
        }
        else {
          uVar20 = local_90 | 0xf;
          uVar19 = 0x7fffffffffffffff;
          if ((uVar20 < 0x8000000000000000) && (uVar19 = uVar20, uVar20 < 0x16)) {
            uVar19 = 0x16;
          }
          uVar12 = FUN_18000fb70(uVar19 + 1);
          *param_1 = uVar12;
          param_1[2] = uVar18;
          param_1[3] = uVar19;
          FUN_180540530(uVar12,ppppuVar10,uVar18 + 1);
        }
      }
      FUN_18000f890(&local_a0);
    }
    else {
      *param_1 = local_a0;
      param_1[1] = uStack_98;
      param_1[2] = local_90;
      param_1[3] = uStack_88;
    }
  }
  return param_1;
}



/* ===== 1802b4530 FUN_1802b4530 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802b4530(undefined8 *param_1,char *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char *_Str;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  undefined8 *local_60;
  char ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  _Str = "";
  if (param_2 != (char *)0x0) {
    _Str = param_2;
  }
  local_58 = (char ****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_60 = param_1;
  sVar5 = strlen(_Str);
  FUN_1800133a0(&local_58,_Str,sVar5);
  uVar13 = local_40;
  uVar10 = local_48;
  ppppcVar6 = local_58;
  puVar11 = auStack_88;
  if (DAT_180cd048f == '\0') {
    if (local_48 != 0) {
      ppppcVar6 = (char ****)&local_58;
      if (0xf < local_40) {
        ppppcVar6 = local_58;
      }
      if ('`' < *(char *)ppppcVar6) {
        ppppcVar6 = (char ****)&local_58;
        if (0xf < local_40) {
          ppppcVar6 = local_58;
        }
        if (*(char *)ppppcVar6 < '{') {
          ppppcVar6 = (char ****)&local_58;
          if (0xf < local_40) {
            ppppcVar6 = local_58;
          }
          ppppcVar7 = (char ****)&local_58;
          if (0xf < local_40) {
            ppppcVar7 = local_58;
          }
          *(char *)ppppcVar7 = *(char *)ppppcVar6 + -0x20;
        }
      }
    }
    FUN_18035eb30(param_1,&local_58);
    ppppcVar6 = local_58;
    uVar13 = local_40;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    ppppcVar7 = (char ****)&local_58;
    if (0xf < local_40) {
      ppppcVar7 = local_58;
    }
    if (0x7fffffffffffffff < local_48) goto LAB_1802b4703;
    if (local_48 < 0x10) {
      param_1[2] = local_48;
      param_1[3] = 0xf;
      uVar2 = *(undefined4 *)((longlong)ppppcVar7 + 4);
      uVar3 = *(undefined4 *)(ppppcVar7 + 1);
      uVar4 = *(undefined4 *)((longlong)ppppcVar7 + 0xc);
      *(undefined4 *)param_1 = *(undefined4 *)ppppcVar7;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    }
    else {
      uVar8 = local_48 | 0xf;
      uVar12 = 0x7fffffffffffffff;
      if ((uVar8 < 0x8000000000000000) && (uVar12 = uVar8, uVar8 < 0x16)) {
        uVar12 = 0x16;
      }
      uVar9 = FUN_18000fb70(uVar12 + 1);
      *param_1 = uVar9;
      param_1[2] = uVar10;
      param_1[3] = uVar12;
      FUN_180540530(uVar9,ppppcVar7,uVar10 + 1);
    }
  }
  if (0xf < uVar13) {
    uVar10 = uVar13 + 1;
    ppppcVar7 = ppppcVar6;
    if (0xfff < uVar10) {
      ppppcVar7 = (char ****)ppppcVar6[-1];
      if ((char *)0x1f < (char *)((longlong)ppppcVar6 + (-8 - (longlong)ppppcVar7))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar11 = auStack_80;
LAB_1802b4703:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar11 + -8) = &UNK_1802b4708;
        FUN_180011990();
      }
      uVar10 = uVar13 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar7,uVar10);
  }
  return param_1;
}



/* ===== 1802b4710 FUN_1802b4710 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b4710(undefined8 param_1,char *param_2,undefined8 param_3,float *param_4,float param_5,
                  undefined4 param_6)

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
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_68 [8];
  
  local_68[4] = DAT_180919500 ^ (ulonglong)auStack_e8;
  fVar10 = DAT_1808ac34c;
  if (DAT_180cd0fd8 != '\0') {
    fVar10 = DAT_1809f7440;
  }
  fVar9 = fVar10 * DAT_1808ac3d4;
  if (fVar10 * DAT_1808ac3d4 <= DAT_1808ac540) {
    fVar9 = DAT_1808ac540;
  }
  fVar10 = fVar9 * param_5 + DAT_1808ac1f4;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  sVar5 = strlen(param_2);
  FUN_1800133a0(local_68,param_2,sVar5);
  plVar6 = (longlong *)FUN_18039ed80(&local_88,local_68,param_3,(int)fVar10);
  lVar2 = *plVar6;
  lVar4 = plVar6[1];
  iVar1 = *(int *)((longlong)plVar6 + 0xc);
  if (0xf < (ulonglong)local_68[3]) {
    uVar8 = local_68[3] + 1;
    lVar7 = local_68[0];
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(local_68[0] + -8);
      if (0x1f < (local_68[0] - lVar7) - 8U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = local_68[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar7,uVar8);
  }
  if (((lVar2 != 0) && (0 < (int)lVar4)) && (0 < iVar1)) {
    local_90 = *param_4 - param_5 * DAT_1808ac1f4;
    local_8c = param_4[1] - param_5 * DAT_1808ac1f4;
    local_a8 = 0x3f800000;
    local_a4 = 0x3f800000;
    local_a0 = 0;
    local_98 = local_90 + param_5;
    local_94 = local_8c + param_5;
    local_88 = 0;
    local_b8 = param_6;
    local_c0 = &local_a8;
    local_c8 = &local_a0;
    local_80 = lVar2;
    FUN_1803fea90(param_1,&local_88,&local_90,&local_98);
  }
  return;
}



/* ===== 1802b48f0 FUN_1802b48f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b48f0(longlong param_1,float *param_2,undefined8 *param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_res8;
  undefined8 local_res10;
  
  fVar13 = DAT_1808ac540;
  fVar5 = DAT_1808ac1f4;
  param_5 = param_5 * DAT_1808ac1f4;
  fVar12 = param_5 * DAT_1808ac658 + param_6;
  fVar10 = (float)((uint)fVar12 ^ DAT_1808adec0) - DAT_1808ac540;
  local_res10 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) + fVar12 + DAT_1808ac540,
                         (float)*param_3 + fVar12 + DAT_1808ac540);
  fVar8 = fVar10 + *param_2;
  local_res8 = CONCAT44(fVar10 + param_2[1],fVar8);
  FUN_1803fc200(fVar8,&local_res8,&local_res10,0);
  if (fVar5 < fVar12) {
    if (fVar13 < 0.0) {
      fVar13 = (float)FUN_18051af10(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    fVar10 = DAT_1808acb94;
    fVar8 = DAT_1808ac34c;
    fVar11 = fVar5;
    do {
      fVar9 = (float)FUN_1805189a0((fVar11 - param_6) / (fVar13 * param_5));
      iVar7 = (int)(fVar9 * param_7 * fVar5 * fVar10 + fVar5);
      if (0 < iVar7) {
        local_res8 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) + fVar11,(float)*param_3 + fVar11
                             );
        local_res10 = CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) - fVar11,
                               (float)*(undefined8 *)param_2 - fVar11);
        FUN_1803fe480(param_1,&local_res10,&local_res8,iVar7 << 0x18,fVar11 + param_4,fVar8,0);
      }
      fVar11 = fVar11 + fVar8;
    } while (fVar11 < fVar12);
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  iVar7 = iVar1 + -1;
  *(int *)(param_1 + 0xa0) = iVar7;
  if (iVar7 == 0) {
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
  }
  else {
    puVar6 = (undefined4 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
  }
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *(undefined4 *)(param_1 + 0x60) = *puVar6;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  FUN_1803fbff0(param_1);
  return;
}



/* ===== 1802b4b90 FUN_1802b4b90 ===== */

void FUN_1802b4b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,float param_7)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = DAT_1808ac34c;
  local_28 = param_6;
  uStack_24 = param_6;
  uStack_20 = param_6;
  uStack_1c = param_6;
  if (0xffffff < param_4) {
    FUN_18036b940();
  }
  if (0.0 < param_7) {
    FUN_18036bcb0(param_1,param_2,param_3,param_5,&local_28,uVar1,param_7);
  }
  return;
}



/* ===== 1802b4c40 FUN_1802b4c40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b4c40(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = param_5;
  local_44 = DAT_180960eec;
  local_3c = DAT_180960f58;
  local_40 = param_6;
  local_38 = 0x41900000;
  local_30 = 0x3f800000;
  local_34 = param_4;
  lVar6 = FUN_180368270();
  if (lVar6 != 0) {
    local_18 = 0x3f800000;
    local_20 = lVar6;
  }
  local_res8 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) + DAT_1808addf0._4_4_,
                        (float)*param_3 + (float)DAT_1808addf0);
  local_res10 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) - DAT_1808addf0._4_4_,
                         (float)*param_2 - (float)DAT_1808addf0);
  FUN_1803fc200(param_1,&local_res10,&local_res8,0);
  FUN_18036d070(param_1,param_2,param_3,&local_48);
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(param_1 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
  }
  else {
    puVar7 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
  }
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  uVar5 = puVar7[3];
  *(undefined4 *)(param_1 + 0x60) = *puVar7;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  FUN_1803fbff0(param_1);
  return;
}



/* ===== 1802b4d80 FUN_1802b4d80 ===== */

void FUN_1802b4d80(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined1 local_38 [48];
  
  lVar2 = DAT_180ca0a50;
  uVar3 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
  if ((*(byte *)(lVar2 + 0x28f4) & 8) != 0) {
    FUN_1803f5060("[popup] OpenPopup(\"%s\" -> 0x%08X)\n",param_1,uVar3);
  }
  FUN_1803ed9b0(uVar3,0);
  local_res10[0] = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
  uVar1 = *(undefined8 *)(DAT_180ca0a50 + 0x110);
  if (((float)uVar1 < DAT_1808ace9c) ||
     (local_res18._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_res18._4_4_ < DAT_1808ace9c)) {
    fVar5 = DAT_1808acd08;
    fVar6 = DAT_1808acd08;
  }
  else {
    fVar5 = local_res18._4_4_ + DAT_1808ac34c;
    fVar6 = (float)uVar1 + DAT_1808ac34c;
  }
  local_res18 = uVar1;
  plVar4 = (longlong *)FUN_18034f100(&DAT_180ca1840,local_38,local_res10);
  lVar2 = *plVar4;
  *(float *)(lVar2 + 0x14) = fVar6;
  *(float *)(lVar2 + 0x18) = fVar5;
  return;
}



/* ===== 1802b4e80 FUN_1802b4e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b4e80(undefined4 param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  byte local_28;
  byte local_27 [23];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_48;
  FUN_1803d7610(&local_28,0x18,"##Popup_%08x",param_1);
  uVar3 = 0xffffffff;
  uVar2 = 0xffffffff;
  pbVar1 = local_27;
  while (local_28 != 0) {
    if (((local_28 == 0x23) && (*pbVar1 == 0x23)) && (pbVar1[1] == 0x23)) {
      uVar3 = 0xffffffff;
      pbVar1 = pbVar1 + 2;
    }
    else {
      uVar3 = (ulonglong)
              ((uint)(uVar3 >> 8) ^
              *(uint *)(&DAT_1806c25c0 + (uVar3 & 0xff ^ (ulonglong)local_28) * 4));
    }
    uVar2 = (uint)uVar3;
    local_28 = *pbVar1;
    pbVar1 = pbVar1 + 1;
  }
  FUN_1803e1e50(~uVar2);
  return;
}



/* ===== 1802b4f20 FUN_1802b4f20 ===== */

float * FUN_1802b4f20(float *param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_1808ac864;
  fVar4 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
  fVar3 = ((*(float *)(param_2 + 4) + param_3[1]) * DAT_1808ac1f4 - param_4[1] * DAT_1808ac1f4) +
          param_4[1] * DAT_1808ac140;
  fVar1 = *(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14);
  fVar2 = *param_3 + DAT_1808ac7ec;
  param_1[1] = fVar3;
  *param_1 = fVar2;
  fVar4 = (fVar4 - *param_4) - fVar5;
  fVar5 = (fVar1 - param_4[1]) - fVar5;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if ((fVar2 <= fVar4) && (fVar4 = fVar2, fVar2 <= 0.0)) {
    fVar4 = 0.0;
  }
  *param_1 = fVar4;
  if (fVar5 < fVar3) {
    param_1[1] = fVar5;
    return param_1;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  param_1[1] = fVar3;
  return param_1;
}



/* ===== 1802b4fe0 FUN_1802b4fe0 ===== */

void FUN_1802b4fe0(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_48;
  
  uVar1 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
  lVar2 = FUN_1802b4e80(uVar1);
  if (lVar2 == 0) {
    local_48._4_4_ = 0.0;
    local_48._0_4_ = 0.0;
  }
  else {
    FUN_1803e2890(&local_48,lVar2);
  }
  lVar3 = FUN_1802b4e80(uVar1);
  lVar2 = DAT_180ca0a50;
  if (lVar3 == 0) {
    local_48 = 0;
  }
  else {
    fVar6 = *param_3 + DAT_1808ac7ec;
    fVar7 = (*(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10) - (float)local_48) -
            DAT_1808ac864;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar5 = ((*(float *)(param_2 + 4) + param_3[1]) * DAT_1808ac1f4 - local_48._4_4_ * DAT_1808ac1f4
            ) + local_48._4_4_ * DAT_1808ac140;
    fVar4 = (*(float *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x14) - local_48._4_4_) -
            DAT_1808ac864;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar6 <= fVar7) {
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
    }
    else {
      fVar6 = fVar7;
    }
    if (fVar5 <= fVar4) {
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      local_48 = CONCAT44(fVar5,fVar6);
    }
    else {
      local_48 = CONCAT44(fVar4,fVar6);
    }
  }
  *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
  *(undefined8 *)(lVar2 + 0x1f50) = 0;
  *(undefined8 *)(lVar2 + 0x1f48) = local_48;
  *(undefined4 *)(lVar2 + 0x1f3c) = 1;
  return;
}



/* ===== 1802b5160 FUN_1802b5160 ===== */

void FUN_1802b5160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res20;
  undefined1 local_18 [16];
  
  uVar2 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8));
  lVar3 = FUN_1802b4e80(uVar2);
  lVar4 = DAT_180ca0a50;
  if (lVar3 == 0) {
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(undefined4 *)(lVar4 + 0x1f3c) = 1;
    *(undefined8 *)(lVar4 + 0x1f48) = 0;
    *(undefined8 *)(lVar4 + 0x1f50) = 0;
    return;
  }
  if ((*(char *)(lVar3 + 0xcd) == '\0') || ('\0' < *(char *)(lVar3 + 0xec))) {
    lVar4 = FUN_1802b4e80(uVar2);
    if (lVar4 == 0) {
      local_res20 = 0;
    }
    else {
      FUN_1803e2890(&local_res20,lVar4);
    }
    puVar5 = (undefined8 *)FUN_1802b4f20(local_18,param_2,param_3,&local_res20);
    lVar4 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    uVar1 = *puVar5;
    *(undefined8 *)(lVar4 + 0x1f50) = 0;
    *(undefined8 *)(lVar4 + 0x1f48) = uVar1;
    *(undefined4 *)(lVar4 + 0x1f3c) = 1;
  }
  return;
}



/* ===== 1802b5260 FUN_1802b5260 ===== */

undefined8 FUN_1802b5260(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float local_res18;
  float local_res1c;
  undefined8 local_res20;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  uVar9 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
  cVar6 = DAT_180cd04ad;
  uVar5 = DAT_180cd04ac;
  cVar4 = DAT_180cd04ab;
  DAT_180cd04ac = 0;
  DAT_180cd04ad = 0;
  DAT_180cd04ab = 0;
  uVar11 = FUN_1802b4e80(uVar9);
  FUN_1802b6190(uVar9,uVar11);
  FUN_1803d89a0(2,param_2);
  FUN_1803d8870(10,0);
  FUN_1803d8730(4,0);
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    uVar10 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
    cVar8 = FUN_1803ee2d0(uVar10,0x15d);
    FUN_1803d87f0(1);
    FUN_1803d8a40(2);
    lVar3 = DAT_180ca0a50;
    fVar13 = DAT_1808ac34c;
    if (cVar8 == '\0') {
      uVar11 = 0;
    }
    else {
      lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      uVar11 = *(undefined8 *)(lVar1 + 0x28);
      local_res18 = (float)uVar11 + *(float *)(lVar1 + 0x30);
      local_res20._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
      local_res1c = local_res20._4_4_ + *(float *)(lVar1 + 0x34);
      *(undefined1 *)(lVar1 + 0xce) = 1;
      lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8);
      if (cVar4 == '\0') {
        if (DAT_180cd0fd8 == '\0') {
          fVar14 = fVar13;
        }
        else {
          fVar14 = DAT_1809f7440;
        }
        fVar2 = DAT_1808ac000;
        if (DAT_1808ac000 <= fVar14) {
          fVar2 = fVar14;
        }
        fVar13 = fVar13 / fVar2;
      }
      local_res20 = uVar11;
      FUN_1802b4c40(lVar1,&local_res20,&local_res18,*(undefined4 *)(lVar3 + 0xcd4),DAT_180960ee0,
                    fVar13);
      FUN_1802b6490(uVar9,1,uVar5,0);
      pfVar12 = (float *)&local_res20;
      if (cVar6 == '\0') {
        local_res18 = 6.0;
        local_res1c = 2.0;
        pfVar12 = &local_res18;
      }
      else {
        local_res20 = 0;
      }
      uVar11 = FUN_1803d89a0(0xe,pfVar12);
      puVar7 = DAT_1811074c0;
      uStack_34 = *(undefined4 *)(lVar1 + 0x20);
      local_30 = CONCAT31(local_30._1_3_,1);
      if (DAT_1811074c0 == DAT_1811074c8) {
        local_38 = uVar9;
        FUN_180354d50(uVar11,DAT_1811074c0,&local_38);
      }
      else {
        *DAT_1811074c0 = CONCAT44(uStack_34,uVar9);
        *(undefined4 *)(puVar7 + 1) = local_30;
        DAT_1811074c0 = (undefined8 *)((longlong)DAT_1811074c0 + 0xc);
      }
      uVar11 = 1;
    }
  }
  else {
    *(undefined4 *)(DAT_180ca0a50 + 0x1f38) = 0;
    FUN_1803d87f0(1);
    FUN_1803d8a40(2);
    uVar11 = 0;
  }
  return uVar11;
}



/* ===== 1802b54e0 FUN_1802b54e0 ===== */

void FUN_1802b54e0(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((param_1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x2c8), lVar2 != 0)) && (param_3 < 5)) {
    FUN_1802b3c30(lVar2,0,*(undefined4 *)(lVar2 + 0x20),param_2);
    if (((longlong)*(int *)(param_1 + 0x1b0) & 0x1fffffffffffffffU) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x1b8);
      plVar1 = plVar3 + *(int *)(param_1 + 0x1b0);
      do {
        lVar2 = *plVar3;
        if (((lVar2 != 0) && (*(char *)(lVar2 + 0xcc) != '\0')) && (*(char *)(lVar2 + 0xd4) == '\0')
           ) {
          FUN_1802b54e0(lVar2,param_2,param_3 + 1);
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
  }
  return;
}



/* ===== 1802b5590 FUN_1802b5590 ===== */

void FUN_1802b5590(void)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  
  uVar3 = *(undefined4 *)((longlong)DAT_1811074c0 + -0xc);
  cVar2 = *(char *)((longlong)DAT_1811074c0 + -4);
  DAT_1811074c0 = (undefined4 *)((longlong)DAT_1811074c0 + -0xc);
  FUN_1802b9bd0();
  FUN_1803d8a40(1);
  if (cVar2 != '\0') {
    FUN_1802b6cd0(uVar3);
  }
  lVar4 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x2030) < 1) {
    fVar7 = DAT_1808ac34c;
  }
  else {
    fVar7 = *(float *)(((longlong)*(int *)(DAT_180ca0a50 + 0x2030) + -1) * 0x58 + 0x38 +
                      *(longlong *)(DAT_180ca0a50 + 0x2038));
  }
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x14f8);
  if ((lVar4 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x2c8), lVar5 != 0)) {
    fVar7 = DAT_1811074e8 * fVar7;
    FUN_1802b3c30(lVar5,0,*(undefined4 *)(lVar5 + 0x20),fVar7);
    plVar6 = *(longlong **)(lVar4 + 0x1b8);
    plVar1 = plVar6 + *(int *)(lVar4 + 0x1b0);
    if (((longlong)*(int *)(lVar4 + 0x1b0) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar4 = *plVar6;
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0xcc) != '\0')) && (*(char *)(lVar4 + 0xd4) == '\0')
           ) {
          FUN_1802b54e0(lVar4,fVar7,1);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  FUN_1803ee480();
  return;
}



/* ===== 1802b56a0 FUN_1802b56a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b56a0(char *param_1,char *******param_2,byte param_3,longlong param_4,longlong param_5,
                  uint param_6)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined *puVar15;
  char *******pppppppcVar16;
  bool bVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  longlong lVar22;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  float local_198 [2];
  longlong local_190 [3];
  float local_178 [8];
  float local_158 [2];
  undefined8 local_150;
  uint local_148 [2];
  longlong local_140 [2];
  undefined8 local_130;
  ulonglong local_128;
  longlong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  char *******local_100;
  longlong lStack_f8;
  longlong local_f0;
  ulonglong uStack_e8;
  char *******local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  longlong local_c0 [4];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  local_80 = DAT_180919500 ^ (ulonglong)auStack_1b8;
  pppppppcVar16 = (char *******)(ulonglong)param_3;
  local_158[0] = 0.0;
  puVar13 = auStack_1b8;
  if (*param_1 == '\0') goto LAB_1802b60de;
  if (param_6 == 0) {
    param_6 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
  }
  local_148[0] = param_6;
  plVar7 = (longlong *)FUN_18034f760(&DAT_180ca1980,local_140,local_148);
  fVar27 = DAT_1808ac34c;
  lVar22 = *plVar7;
  uVar12 = local_148[0] ^ 0xf97d609;
  if (param_3 == 0) {
    *(undefined4 *)(lVar22 + 0x14) = 0;
    local_140[0] = 0;
    local_140[1] = 0;
    local_130 = CONCAT44(local_130._4_4_,0xffffffff);
    local_158[0] = (float)uVar12;
    FUN_18034a380(lVar22,&local_120,local_158);
    fVar18 = 0.0;
LAB_1802b589b:
    puVar15 = (undefined *)0x0;
    fVar18 = (float)FUN_1802b3660(local_120 + 0x14,fVar18,DAT_1808ac118);
  }
  else {
    if (DAT_1808ac154 <= *(float *)(lVar22 + 0x14)) {
      local_140[0] = _DAT_1808ad560;
      local_140[1] = _UNK_1808ad568;
      local_130 = CONCAT44(local_130._4_4_,0xffffffff);
      local_158[0] = (float)uVar12;
      FUN_18034a380(lVar22,&local_120,local_158);
      fVar18 = fVar27;
      goto LAB_1802b589b;
    }
    *(float *)(lVar22 + 0x14) = *(float *)(lVar22 + 0x14) + *(float *)(DAT_180ca0a50 + 0x40);
    uVar14 = (((((ulonglong)(uVar12 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(uVar12 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar12 >> 0x10 & 0xff)
              ) * 0x100000001b3 ^ (ulonglong)(uVar12 >> 0x18)) * 0x100000001b3 & DAT_181107640;
    puVar10 = *(undefined **)(DAT_181107628 + uVar14 * 0x10 + 8);
    puVar15 = DAT_181107628;
    if (puVar10 == DAT_181107618) {
LAB_1802b5820:
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar15 = *(undefined **)(DAT_181107628 + uVar14 * 0x10);
      uVar1 = *(uint *)(puVar10 + 0x10);
      while (uVar12 != uVar1) {
        if (puVar10 == puVar15) goto LAB_1802b5820;
        puVar10 = *(undefined **)(puVar10 + 8);
        uVar1 = *(uint *)(puVar10 + 0x10);
      }
    }
    puVar13 = auStack_1b8;
    if ((puVar10 == (undefined *)0x0) || (puVar13 = auStack_1b8, puVar10 == DAT_181107618))
    goto LAB_1802b60de;
    fVar18 = *(float *)(puVar10 + 0x14);
  }
  puVar13 = auStack_1b8;
  if (fVar18 <= 0.0) goto LAB_1802b60de;
  pbVar8 = (byte *)strlen(param_1);
  bVar17 = DAT_180cd048f == '\0';
  if (bVar17) {
    local_140[0] = 0;
    local_140[1] = 0;
    local_130 = 0;
    local_128 = 0;
    FUN_1800133a0(local_140,param_1);
    local_158[0] = 1.4013e-45;
    FUN_18035eb30(&local_e0,local_140);
  }
  else {
    local_e0 = (char *******)0x0;
    uStack_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    FUN_1800133a0(&local_e0,param_1);
  }
  uVar12 = (uint)bVar17;
  if ((bVar17) && (uVar12 = 0, 0xf < local_128)) {
    uVar14 = local_128 + 1;
    lVar22 = local_140[0];
    if (uVar14 < 0x1000) {
LAB_1802b595c:
      thunk_FUN_1803d64e0(lVar22,uVar14);
      goto LAB_1802b5961;
    }
    lVar22 = *(longlong *)(local_140[0] + -8);
    if ((local_140[0] - lVar22) - 8U < 0x20) {
      uVar14 = local_128 + 0x28;
      goto LAB_1802b595c;
    }
    pcVar2 = (code *)swi(0x29);
    lVar22 = (*pcVar2)(5);
    puVar13 = auStack_1b0;
    uVar23 = extraout_XMM0_Qb;
LAB_1802b59a5:
    local_110 = 0;
    local_108 = 0;
    *(undefined8 *)(puVar13 + -8) = 0x1802b59ba;
    local_120 = lVar22;
    uStack_118 = uVar23;
    FUN_1800133a0(&local_120);
    *(uint *)(puVar13 + 0x60) = uVar12 | 2;
    *(undefined8 *)(puVar13 + -8) = 0x1802b59cf;
    plVar7 = (longlong *)FUN_18035eb30(local_c0,&local_120);
    bVar4 = true;
    bVar3 = true;
    bVar17 = false;
  }
  else {
LAB_1802b5961:
    puVar13 = auStack_1b8;
    if (param_2 == (char *******)0x0) {
      local_140[1] = 0;
      local_130 = 0;
      local_128 = 0xf;
      local_140[0] = 0;
      plVar7 = local_140;
      bVar4 = false;
      bVar3 = false;
      bVar17 = true;
    }
    else {
      pbVar8 = (byte *)strlen((char *)param_2);
      puVar13 = auStack_1b8;
      lVar22 = 0;
      uVar23 = 0;
      if (DAT_180cd048f == '\0') goto LAB_1802b59a5;
      local_c0[0] = 0;
      local_c0[1] = 0;
      local_c0[2] = 0;
      local_c0[3] = 0;
      FUN_1800133a0(local_c0,param_2);
      puVar13 = auStack_1b8;
      plVar7 = local_c0;
      bVar4 = false;
      bVar3 = true;
      bVar17 = false;
    }
  }
  local_100 = (char *******)0x0;
  lStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = (char *******)*plVar7;
  lStack_f8 = plVar7[1];
  local_f0 = plVar7[2];
  uStack_e8 = plVar7[3];
  plVar7[2] = 0;
  plVar7[3] = 0xf;
  *(undefined1 *)plVar7 = 0;
  if ((bVar17) && (0xf < local_128)) {
    uVar14 = local_128 + 1;
    lVar22 = *(longlong *)(puVar13 + 0x78);
    lVar9 = lVar22;
    if (0xfff < uVar14) {
      lVar9 = *(longlong *)(lVar22 + -8);
      if (0x1f < (lVar22 - lVar9) - 8U) {
        uVar12 = 5;
        pcVar2 = (code *)swi(0x29);
        bVar5 = (*pcVar2)();
        puVar13 = puVar13 + 8;
        goto LAB_1802b5b05;
      }
      uVar14 = local_128 + 0x28;
    }
    *(undefined8 *)(puVar13 + -8) = 0x1802b5a66;
    thunk_FUN_1803d64e0(lVar9,uVar14);
  }
  if (bVar3) {
    *(undefined8 *)(puVar13 + -8) = 0x1802b5a77;
    FUN_18000f890(local_c0);
  }
  if (bVar4) {
    *(undefined8 *)(puVar13 + -8) = 0x1802b5a86;
    FUN_18000f890(&local_120);
  }
  pppppppcVar16 = (char *******)&local_e0;
  if (0xf < local_c8) {
    pppppppcVar16 = local_e0;
  }
  if ((param_2 != (char *******)0x0) && (param_2 = (char *******)&local_100, 0xf < uStack_e8)) {
    param_2 = local_100;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  *(undefined8 *)(puVar13 + -8) = 0x1802b5acc;
  snprintf(&local_a0,0x20,"##nl_tip_%08X",*(undefined4 *)(puVar13 + 0x70));
  uVar12 = 0xffffffff;
  pbVar8 = (byte *)((longlong)&local_a0 + 1);
  if ((byte)local_a0 != 0) {
    puVar15 = &DAT_1806c25c0;
    bVar5 = (byte)local_a0;
    do {
      if (((bVar5 == 0x23) && (*pbVar8 == 0x23)) && (pbVar8[1] == 0x23)) {
        uVar12 = 0xffffffff;
        pbVar8 = pbVar8 + 2;
      }
      else {
LAB_1802b5b05:
        uVar12 = uVar12 >> 8 ^ *(uint *)(puVar15 + (ulonglong)(byte)((byte)uVar12 ^ bVar5) * 4);
      }
      bVar5 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar5 != 0);
  }
  *(undefined8 *)(puVar13 + -8) = 0x1802b5b27;
  lVar9 = FUN_1803e1e50(~uVar12);
  lVar22 = DAT_180ca0a50;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0xcd) != '\0')) {
    if (*(char *)(lVar9 + 0xd3) == '\0') {
      *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
      *(undefined8 *)(lVar22 + 0x1f48) = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar22 + 0x1f50) = 0;
      *(undefined4 *)(lVar22 + 0x1f3c) = 1;
    }
    else {
      *(undefined8 *)(puVar13 + 0x60) = 0;
      *(undefined8 *)(puVar13 + -8) = 0x1802b5b67;
      lVar22 = lVar9;
      FUN_1803e24d0(lVar9,&local_120,puVar13 + 0x60);
      *(undefined8 *)(puVar13 + -8) = 0x1802b5b7f;
      FUN_1803e25f0(puVar13 + 0x68,lVar22,puVar13 + 0x60,0xffffffff);
      *(undefined8 *)(puVar13 + -8) = 0x1802b5b91;
      FUN_1803e2390(puVar13 + 0x60,lVar9,puVar13 + 0x68);
      lVar9 = DAT_180ca0a50;
      lVar22 = **(longlong **)(DAT_180ca0a50 + 0x2058);
      fVar24 = *(float *)(lVar22 + 0x14);
      fVar25 = DAT_1808ac658;
      if (fVar24 <= DAT_1808ac7ac) {
        fVar25 = 0.0;
      }
      fVar26 = (fVar24 - fVar25) - *(float *)(puVar13 + 100);
      fVar24 = ((*(float *)(param_4 + 4) + *(float *)(param_5 + 4)) - *(float *)(puVar13 + 100)) *
               DAT_1808ac1f4;
      if (fVar26 <= fVar24) {
        fVar24 = fVar26;
      }
      if (fVar24 < fVar25) {
        fVar24 = fVar25;
      }
      *(undefined8 *)(puVar13 + -8) = 0x1802b5c33;
      uVar19 = FUN_18053fc00(lVar22,fVar24);
      *(uint *)(lVar9 + 0x1f38) = *(uint *)(lVar9 + 0x1f38) | 1;
      *(undefined8 *)(puVar13 + -8) = 0x1802b5c45;
      uVar20 = FUN_18053fc00();
      *(undefined4 *)(lVar9 + 0x1f48) = uVar20;
      *(undefined4 *)(lVar9 + 0x1f4c) = uVar19;
      *(undefined8 *)(lVar9 + 0x1f50) = 0;
      *(undefined4 *)(lVar9 + 0x1f3c) = 1;
    }
  }
  uVar19 = DAT_1808ac864;
  *(undefined8 *)(puVar13 + -8) = 0x1802b5ca4;
  uVar20 = FUN_18053fc00();
  *(undefined4 *)(puVar13 + 0x60) = uVar20;
  *(undefined4 *)(puVar13 + 100) = uVar20;
  *(undefined8 *)(puVar13 + -8) = 0x1802b5cc2;
  FUN_1803d89a0(2,puVar13 + 0x60);
  *(undefined8 *)(puVar13 + -8) = 0x1802b5ccf;
  uVar21 = FUN_18053fc00();
  *(undefined4 *)(puVar13 + 0x60) = uVar21;
  *(undefined4 *)(puVar13 + 100) = uVar20;
  *(undefined8 *)(puVar13 + -8) = 0x1802b5cea;
  FUN_1803d89a0(0xe,puVar13 + 0x60);
  *(undefined8 *)(puVar13 + -8) = 0x1802b5cf7;
  FUN_1803d8870(3,uVar19);
  *(undefined8 *)(puVar13 + -8) = 0x1802b5d04;
  FUN_1803d8870(4,0);
  *(undefined8 *)(puVar13 + -8) = 0x1802b5d15;
  cVar6 = FUN_1803e4f20(&local_a0,0,0x20303c7);
  *(undefined8 *)(puVar13 + -8) = 0x1802b5d22;
  FUN_1803d8a40(4);
  lVar22 = DAT_180ca0a50;
  if (cVar6 != '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    lVar22 = *(longlong *)(lVar22 + 0x14f8);
    lVar9 = *(longlong *)(lVar22 + 0x2c8);
    uVar23 = *(undefined8 *)(lVar22 + 0x28);
    *(undefined8 *)(puVar13 + 0x60) = uVar23;
    *(float *)(puVar13 + 0x68) = (float)uVar23 + *(float *)(lVar22 + 0x30);
    *(float *)(puVar13 + 0x6c) = *(float *)(puVar13 + 100) + *(float *)(lVar22 + 0x34);
    fVar24 = fVar27;
    if (DAT_180cd0fd8 != '\0') {
      fVar24 = DAT_1809f7440;
    }
    fVar25 = DAT_1808ac000;
    if (DAT_1808ac000 <= fVar24) {
      fVar25 = fVar24;
    }
    *(float *)(puVar13 + 0x28) = fVar27 / fVar25;
    *(undefined4 *)(puVar13 + 0x20) = DAT_180960ee0;
    *(undefined8 *)(puVar13 + -8) = 0x1802b5dc4;
    FUN_1802b4c40(lVar9,puVar13 + 0x60,puVar13 + 0x68,uVar19);
    uVar20 = DAT_1808acd08;
    uVar19 = DAT_1808ac930;
    *(undefined8 *)(puVar13 + 0x68) = *(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118)
    ;
    if ((param_2 == (char *******)0x0) || (*(char *)param_2 == '\0')) {
      lVar22 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar22 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      *(undefined4 *)(puVar13 + 0x50) = 0;
      *(undefined8 *)(puVar13 + 0x40) = 0;
      *(undefined8 *)(puVar13 + 0x38) = 0;
      *(undefined8 *)(puVar13 + 0x30) = 0;
      *(char ********)(puVar13 + 0x28) = pppppppcVar16;
      *(undefined4 *)(puVar13 + 0x20) = 0;
      *(undefined8 *)(puVar13 + -8) = 0x1802b6022;
      FUN_18040a2f0(puVar13 + 0x60,lVar22,DAT_1808ac930,DAT_1808acd08);
      if ((((DAT_180960ec8 & 0xff000000) != 0) && (pppppppcVar16 != (char *******)0x0)) &&
         (*(char *)pppppppcVar16 != '\0')) {
        if (lVar22 == 0) {
          lVar22 = *(longlong *)(*(longlong *)(lVar9 + 0x38) + 0x18);
        }
        uVar23 = *(undefined8 *)(lVar9 + 0x68);
        *(undefined8 *)(puVar13 + 0x78) = *(undefined8 *)(lVar9 + 0x60);
        *(undefined8 *)(puVar13 + 0x80) = uVar23;
        *(undefined4 *)(puVar13 + 0x48) = 0;
        *(undefined4 *)(puVar13 + 0x40) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(char ********)(puVar13 + 0x30) = pppppppcVar16;
        *(undefined1 **)(puVar13 + 0x28) = puVar13 + 0x78;
        *(uint *)(puVar13 + 0x20) = DAT_180960ec8;
        *(undefined8 *)(puVar13 + -8) = 0x1802b6088;
        FUN_18040a900(lVar22,lVar9,uVar19,puVar13 + 0x68);
      }
      *(undefined4 *)(puVar13 + 0x68) = *(undefined4 *)(puVar13 + 0x60);
      *(undefined4 *)(puVar13 + 0x6c) = *(undefined4 *)(puVar13 + 100);
      puVar11 = puVar13 + 0x68;
    }
    else {
      lVar22 = DAT_1811079c0;
      if ((DAT_1811079c0 == 0) && (lVar22 = DAT_181107a08, DAT_181107a08 == 0)) {
        lVar22 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      *(undefined4 *)(puVar13 + 0x50) = 0;
      *(undefined8 *)(puVar13 + 0x40) = 0;
      *(undefined8 *)(puVar13 + 0x38) = 0;
      *(undefined8 *)(puVar13 + 0x30) = 0;
      *(char ********)(puVar13 + 0x28) = pppppppcVar16;
      *(undefined4 *)(puVar13 + 0x20) = 0;
      *(undefined8 *)(puVar13 + -8) = 0x1802b5e53;
      FUN_18040a2f0(&local_120,lVar22,DAT_1808ac930,DAT_1808acd08);
      if ((((DAT_180960ec8 & 0xff000000) != 0) && (pppppppcVar16 != (char *******)0x0)) &&
         (*(char *)pppppppcVar16 != '\0')) {
        if (lVar22 == 0) {
          lVar22 = *(longlong *)(*(longlong *)(lVar9 + 0x38) + 0x18);
        }
        uVar23 = *(undefined8 *)(lVar9 + 0x68);
        *(undefined8 *)(puVar13 + 0x78) = *(undefined8 *)(lVar9 + 0x60);
        *(undefined8 *)(puVar13 + 0x80) = uVar23;
        *(undefined4 *)(puVar13 + 0x48) = 0;
        *(undefined4 *)(puVar13 + 0x40) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(char ********)(puVar13 + 0x30) = pppppppcVar16;
        *(undefined1 **)(puVar13 + 0x28) = puVar13 + 0x78;
        *(uint *)(puVar13 + 0x20) = DAT_180960ec8;
        *(undefined8 *)(puVar13 + -8) = 0x1802b5eb9;
        FUN_18040a900(lVar22,lVar9,uVar19,puVar13 + 0x68);
      }
      *(undefined4 *)(puVar13 + 0x68) = (undefined4)local_120;
      *(undefined4 *)(puVar13 + 0x6c) = 0x418da5e3;
      *(undefined8 *)(puVar13 + -8) = 0x1802b5ed6;
      FUN_1804174f0(puVar13 + 0x68);
      local_120 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x118);
      fVar24 = DAT_1808acba0 - ((float)local_120 - *(float *)(puVar13 + 0x60));
      if (fVar27 <= fVar24) {
        fVar27 = fVar24;
      }
      lVar22 = DAT_181107a08;
      if (DAT_181107a08 == 0) {
        lVar22 = *(longlong *)(DAT_180ca0a50 + 0x11f0);
      }
      *(undefined4 *)(puVar13 + 0x50) = 0;
      *(undefined8 *)(puVar13 + 0x40) = 0;
      *(undefined8 *)(puVar13 + 0x38) = 0;
      *(undefined8 *)(puVar13 + 0x30) = 0;
      *(char ********)(puVar13 + 0x28) = param_2;
      *(float *)(puVar13 + 0x20) = fVar27;
      *(undefined8 *)(puVar13 + -8) = 0x1802b5f4e;
      FUN_18040a2f0(puVar13 + 0x68,lVar22,uVar19,uVar20);
      if (((DAT_180960ef8 & 0xff000000) != 0) && (*(char *)param_2 != '\0')) {
        if (lVar22 == 0) {
          lVar22 = *(longlong *)(*(longlong *)(lVar9 + 0x38) + 0x18);
        }
        uVar23 = *(undefined8 *)(lVar9 + 0x68);
        *(undefined8 *)(puVar13 + 0x78) = *(undefined8 *)(lVar9 + 0x60);
        *(undefined8 *)(puVar13 + 0x80) = uVar23;
        *(undefined4 *)(puVar13 + 0x48) = 0;
        *(float *)(puVar13 + 0x40) = fVar27;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(char ********)(puVar13 + 0x30) = param_2;
        *(undefined1 **)(puVar13 + 0x28) = puVar13 + 0x78;
        *(uint *)(puVar13 + 0x20) = DAT_180960ef8;
        *(undefined8 *)(puVar13 + -8) = 0x1802b5fad;
        FUN_18040a900(lVar22,lVar9,uVar19,&local_120);
      }
      *(undefined4 *)(puVar13 + 0x60) = *(undefined4 *)(puVar13 + 0x68);
      *(undefined4 *)(puVar13 + 100) = *(undefined4 *)(puVar13 + 0x6c);
      puVar11 = puVar13 + 0x60;
    }
    *(undefined8 *)(puVar13 + -8) = 0x1802b60aa;
    FUN_1804174f0(puVar11);
    uVar19 = *(undefined4 *)(lVar9 + 0x20);
    *(undefined8 *)(puVar13 + -8) = 0x1802b60c5;
    FUN_1802b3c30(lVar9,0,uVar19,DAT_1811074e8 * fVar18);
  }
  *(undefined8 *)(puVar13 + -8) = 0x1802b60ca;
  FUN_1803e75b0();
  *(undefined8 *)(puVar13 + -8) = 0x1802b60d4;
  FUN_18000f890(&local_100);
  *(undefined8 *)(puVar13 + -8) = 0x1802b60de;
  FUN_18000f890(&local_e0);
LAB_1802b60de:
  *(undefined8 *)(puVar13 + -8) = 0x1802b60ea;
  return;
}



/* ===== 1802b6120 FUN_1802b6120 ===== */

void FUN_1802b6120(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = *(undefined8 *)(DAT_180ca0a50 + 0x1efc);
  local_res20 = *(undefined8 *)(DAT_180ca0a50 + 0x1ef4);
  uVar1 = FUN_1803dd930(0);
  FUN_1802b56a0(param_1,param_2,uVar1,&local_res20,&local_res18,0);
  return;
}



/* ===== 1802b6190 FUN_1802b6190 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b6190(undefined8 param_1,longlong param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  BOOL BVar8;
  longlong *plVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_res8 [2];
  int local_res10 [2];
  undefined1 local_48 [48];
  
  local_res8[0] = (undefined4)param_1;
  plVar9 = (longlong *)FUN_18034ee00(param_1,local_48,local_res8);
  lVar7 = DAT_180ca0a50;
  if (param_2 != 0) {
    pfVar1 = (float *)(param_2 + 0xa4);
    lVar2 = *plVar9;
    *(longlong *)(lVar2 + 0x18) = param_2;
    fVar14 = DAT_1808acd08;
    fVar12 = *pfVar1;
    if (fVar12 != 0.0) {
      fVar13 = *(float *)(param_2 + 0x9c);
      fVar15 = *(float *)(lVar2 + 0x20);
      if ((fVar15 != fVar13) || (0.0 <= fVar13)) {
        bVar5 = false;
        fVar11 = fVar15;
      }
      else {
        bVar5 = true;
        fVar11 = 0.0;
      }
      if ((fVar11 != fVar13) || (fVar13 <= fVar12)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
        fVar11 = fVar12;
      }
      if ((bVar5) || (bVar6)) {
        *(float *)(lVar2 + 0x20) = fVar11;
        fVar15 = fVar11;
      }
      if (fVar13 != fVar15) {
        if (fVar13 == fVar14) {
          fVar13 = fVar15;
        }
        fVar11 = (float)((uint)(fVar15 - fVar13) & _DAT_1808ade90) * DAT_1808ac950 *
                 *(float *)(lVar7 + 0x40);
        fVar12 = DAT_1808ac0c0;
        if (DAT_1808ac0c0 <= fVar11) {
          fVar12 = fVar11;
        }
        if (fVar15 - fVar13 <= DAT_1808ac0c0) {
          if (DAT_1808ac0c0 < fVar13 - fVar15) {
            fVar15 = fVar13 - fVar12;
          }
        }
        else {
          fVar15 = fVar12 + fVar13;
        }
        fVar12 = *pfVar1;
        if ((fVar15 <= *pfVar1) && (fVar12 = fVar15, fVar15 <= 0.0)) {
          fVar12 = 0.0;
        }
        *(float *)(param_2 + 0x9c) = fVar12;
      }
    }
    if ((*(float *)(lVar7 + 0x120) != 0.0) && (*(char *)(lVar7 + 300) == '\0')) {
      lVar3 = *(longlong *)(lVar7 + 0x1500);
      while ((lVar3 != 0 && ((*(uint *)(lVar3 + 0x14) >> 0x18 & 1) != 0))) {
        for (puVar4 = (undefined8 *)*DAT_181107778; puVar4 != DAT_181107778;
            puVar4 = (undefined8 *)*puVar4) {
          if (puVar4[3] == lVar3) goto LAB_1802b632e;
        }
        if ((*(uint *)(lVar3 + 0x14) & 0x210) != 0x10) {
LAB_1802b632e:
          if (*(float *)(lVar3 + 0xa4) != 0.0) break;
        }
        lVar3 = *(longlong *)(lVar3 + 0x3b0);
      }
      if ((lVar3 == param_2) && ((*(uint *)(param_2 + 0x14) & 0x200) == 0)) {
        local_res10[0] = 3;
        BVar8 = SystemParametersInfoA(0x68,0,local_res10,0);
        if (BVar8 == 0) {
          local_res10[0] = 3;
        }
        fVar12 = *(float *)(param_2 + 0x234) - *(float *)(param_2 + 0x22c);
        if (local_res10[0] < 0x79) {
          fVar12 = (float)FUN_18053fc00();
        }
        lVar3 = DAT_180ca0a50;
        fVar13 = *(float *)(param_2 + 0x9c) - fVar12 * *(float *)(lVar7 + 0x120);
        fVar12 = *pfVar1;
        if ((fVar13 <= *pfVar1) && (fVar12 = fVar13, fVar13 <= 0.0)) {
          fVar12 = 0.0;
        }
        *(float *)(lVar2 + 0x20) = fVar12;
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar3 + 0x10);
      }
    }
    if (*(float *)(param_2 + 0xac) < fVar14) {
      fVar14 = *(float *)(param_2 + 0xac) -
               ((*(float *)(param_2 + 0x3c) - *(float *)(param_2 + 0x68)) -
               *(float *)(param_2 + 0xc4)) * *(float *)(param_2 + 0xb4);
      fVar12 = *pfVar1;
      if ((fVar14 <= *pfVar1) && (fVar12 = fVar14, fVar14 <= 0.0)) {
        fVar12 = 0.0;
      }
      *(float *)(lVar2 + 0x20) = fVar12;
      *(undefined4 *)(param_2 + 0xac) = 0x7f7fffff;
    }
    pfVar10 = (float *)(lVar2 + 0x20);
    if (*pfVar1 <= *(float *)(lVar2 + 0x20) && *(float *)(lVar2 + 0x20) != *pfVar1) {
      pfVar10 = pfVar1;
    }
    *(float *)(lVar2 + 0x20) = *pfVar10;
  }
  return;
}



/* ===== 1802b6490 FUN_1802b6490 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b6490(undefined8 param_1,char param_2,char param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  float *pfVar11;
  float *pfVar12;
  char cVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_res8 [2];
  char local_res10 [8];
  char local_res18 [8];
  float local_res20;
  float local_138 [4];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118 [4];
  float local_108;
  float local_104 [7];
  undefined1 local_e8 [176];
  
  local_res8[0] = (undefined4)param_1;
  plVar10 = (longlong *)FUN_18034ee00(param_1,local_e8,local_res8);
  lVar5 = DAT_180ca0a50;
  lVar1 = *plVar10;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar5 + 0x14f8);
  *(longlong *)(lVar1 + 0x18) = lVar2;
  *(char *)(lVar1 + 0x58) = param_2;
  *(char *)(lVar1 + 0x59) = param_3;
  *(undefined1 *)(lVar1 + 0x5a) = 0;
  bVar3 = *(float *)(lVar2 + 0xa4) <= 0.0;
  if (param_2 == '\0') {
    fVar19 = DAT_1808ac750;
  }
  else {
    fVar19 = DAT_1808ac710;
  }
  fVar19 = fVar19 + param_4 + *(float *)(lVar2 + 0x58);
  if (bVar3) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = fVar19;
  }
  if (*(char *)(lVar2 + 0xd3) == '\0') {
    fVar16 = *(float *)(lVar1 + 0x24);
    if (fVar16 != fVar20) {
      if (fVar16 == DAT_1808acd08) {
        *(float *)(lVar1 + 0x24) = fVar20;
        fVar16 = fVar20;
      }
      fVar15 = (float)((uint)(fVar20 - fVar16) & _DAT_1808ade90) * DAT_1808ac900 *
               *(float *)(lVar5 + 0x40);
      fVar21 = DAT_1808ac0c0;
      if (DAT_1808ac0c0 <= fVar15) {
        fVar21 = fVar15;
      }
      if (fVar20 - fVar16 <= DAT_1808ac0c0) {
        if (DAT_1808ac0c0 < fVar16 - fVar20) {
          fVar20 = fVar16 - fVar21;
        }
      }
      else {
        fVar20 = fVar16 + fVar21;
      }
      if (fVar20 <= fVar19) {
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
      }
      else {
        fVar20 = fVar19;
      }
      goto LAB_1802b65cd;
    }
    fVar20 = fVar16;
  }
  else {
LAB_1802b65cd:
    *(float *)(lVar1 + 0x24) = fVar20;
  }
  if (param_3 == '\0') {
    *(float *)(lVar2 + 0x250) = *(float *)(lVar2 + 0x250) - fVar20;
    *(float *)(lVar2 + 0x280) = *(float *)(lVar2 + 0x280) - *(float *)(lVar1 + 0x24);
  }
  fVar19 = DAT_1808ac34c;
  if (bVar3) {
    return;
  }
  if (param_2 == '\0') {
    fVar20 = 0.0;
  }
  else {
    fVar20 = DAT_1808ac34c;
  }
  fVar16 = *(float *)(lVar2 + 0x28) + *(float *)(lVar2 + 0x30);
  local_128 = *(float *)(lVar2 + 0x28) + param_4;
  local_11c = *(float *)(lVar2 + 0x234) - DAT_1808ac864;
  local_124 = *(float *)(lVar2 + 0x22c) + DAT_1808ac864;
  local_120 = fVar16 - *(float *)(lVar2 + 0x58);
  param_4 = ((fVar16 - fVar20) - *(float *)(lVar1 + 0x24)) + param_4;
  if (local_128 <= param_4) {
    local_128 = param_4;
  }
  if (local_120 - local_128 <= 0.0) {
    return;
  }
  fVar20 = local_11c - local_124;
  if (fVar20 <= 0.0) {
    return;
  }
  if (DAT_1808ac93c <= fVar20) {
    local_res20 = DAT_1808ac34c;
  }
  else {
    local_118[2] = 1.0;
    local_118[0] = 0.0;
    local_118[1] = (fVar20 - DAT_1808ac8d4) / DAT_1808ac7ac;
    pfVar11 = local_118;
    if (0.0 <= local_118[1]) {
      pfVar11 = local_118 + 1;
    }
    pfVar12 = local_118 + 2;
    if (local_118[1] <= DAT_1808ac34c) {
      pfVar12 = pfVar11;
    }
    local_res20 = *pfVar12;
    if (local_res20 <= 0.0) {
      return;
    }
  }
  fVar16 = *(float *)(lVar2 + 0x234) - *(float *)(lVar2 + 0x22c);
  local_108 = fVar16;
  fVar21 = *(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 0x44);
  local_118[3] = fVar21;
  pfVar11 = local_118 + 3;
  if (fVar21 <= fVar16) {
    pfVar11 = &local_108;
  }
  fVar15 = DAT_1808ac34c;
  if (DAT_1808ac34c <= *pfVar11) {
    fVar15 = *pfVar11;
  }
  fVar18 = (fVar16 / fVar15) * fVar20;
  fVar15 = DAT_1808ac864;
  if ((DAT_1808ac864 <= fVar18) && (fVar15 = fVar18, fVar20 <= fVar18)) {
    fVar15 = fVar20;
  }
  fVar18 = fVar15 / fVar20;
  iVar8 = FUN_1803e8900(lVar2,"#SCROLLY");
  lVar14 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1578) == iVar8) {
    *(int *)(DAT_180ca0a50 + 0x157c) = iVar8;
  }
  if (*(int *)(lVar14 + 0x15ac) == iVar8) {
    *(undefined1 *)(lVar14 + 0x15b5) = 1;
  }
  local_res18[0] = '\0';
  local_res10[0] = '\0';
  FUN_180415270(&local_128,iVar8,local_res18,local_res10,0x40000);
  lVar6 = DAT_180ca0a50;
  lVar14 = *(longlong *)(DAT_180ca0a50 + 0x1500);
  if ((lVar14 != 0) && (lVar14 == *(longlong *)(DAT_180ca0a50 + 0x14f8))) {
    cVar13 = '\0';
    cVar7 = FUN_1803dd8c0(lVar14);
    if ((cVar7 != '\0') &&
       ((((*(int *)(lVar6 + 0x1578) == 0 || (*(char *)(lVar6 + 0x1587) != cVar13)) ||
         (*(int *)(lVar6 + 0x1578) == *(int *)(lVar14 + 0x8c))) &&
        ((*(int *)(lVar5 + 0x1578) == 0 || (*(int *)(lVar5 + 0x1578) == iVar8)))))) {
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar6 + 0x10);
    }
  }
  fVar4 = DAT_1808ac1f4;
  local_104[2] = 1.0;
  local_104[0] = 0.0;
  fVar22 = fVar21 - fVar16;
  if (fVar21 - fVar16 <= fVar19) {
    fVar22 = fVar19;
  }
  local_104[1] = *(float *)(lVar2 + 0x9c) / fVar22;
  pfVar11 = local_104;
  if (0.0 <= local_104[1]) {
    pfVar11 = local_104 + 1;
  }
  pfVar12 = local_104 + 2;
  if (local_104[1] <= fVar19) {
    pfVar12 = pfVar11;
  }
  fVar16 = ((fVar20 - fVar15) * *pfVar12) / fVar20;
  if ((local_res10[0] != '\0') && (fVar18 < fVar19)) {
    local_104[5] = 1.0;
    local_104[3] = 0.0;
    local_104[4] = (*(float *)(lVar5 + 0x114) - local_124) / fVar20;
    pfVar11 = local_104 + 3;
    if (0.0 <= local_104[4]) {
      pfVar11 = local_104 + 4;
    }
    pfVar12 = local_104 + 5;
    if (local_104[4] <= fVar19) {
      pfVar12 = pfVar11;
    }
    bVar3 = false;
    fVar21 = *pfVar12;
    if (*(char *)(lVar5 + 0x1584) != '\0') {
      if ((fVar21 < fVar16) || (fVar18 + fVar16 < fVar21)) {
        bVar3 = true;
        fVar16 = 0.0;
      }
      else {
        fVar16 = (fVar21 - fVar16) - fVar18 * DAT_1808ac1f4;
        bVar3 = false;
      }
      *(float *)(lVar1 + 0x70) = fVar16;
    }
    local_138[2] = 1.0;
    local_104[6] = fVar18 * fVar4;
    local_138[0] = 0.0;
    local_138[1] = ((fVar21 - *(float *)(lVar1 + 0x70)) - local_104[6]) / (fVar19 - fVar18);
    pfVar11 = local_138;
    if (0.0 <= local_138[1]) {
      pfVar11 = local_138 + 1;
    }
    pfVar12 = local_138 + 2;
    if (local_138[1] <= fVar19) {
      pfVar12 = pfVar11;
    }
    local_138[1] = (float)FUN_18053fc00(fVar22 * *pfVar12 + fVar4);
    local_138[0] = 1.0;
    local_138[2] = 0.0;
    fVar16 = local_138[1] - *(float *)(lVar2 + 0x9c);
    *(float *)(lVar2 + 0x9c) = local_138[1];
    *(float *)(lVar2 + 0x11c) = *(float *)(lVar2 + 0x11c) - fVar16;
    *(float *)(lVar2 + 300) = *(float *)(lVar2 + 300) - fVar16;
    *(float *)(lVar2 + 0x13c) = *(float *)(lVar2 + 0x13c) - fVar16;
    *(float *)(lVar2 + 0x134) = *(float *)(lVar2 + 0x134) - fVar16;
    *(float *)(lVar2 + 0x124) = *(float *)(lVar2 + 0x124) - fVar16;
    *(float *)(lVar1 + 0x20) = local_138[1];
    local_138[1] = local_138[1] / fVar22;
    pfVar11 = local_138 + 2;
    if (0.0 <= local_138[1]) {
      pfVar11 = local_138 + 1;
    }
    pfVar12 = local_138;
    if (local_138[1] <= fVar19) {
      pfVar12 = pfVar11;
    }
    fVar16 = ((fVar20 - fVar15) * *pfVar12) / fVar20;
    if (bVar3) {
      *(float *)(lVar1 + 0x70) = (fVar21 - fVar16) - local_104[6];
    }
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar6 + 0x10);
  }
  uVar17 = DAT_1808ac118;
  if (param_3 == '\0') {
    if (fVar18 != fVar19) goto LAB_1802b6b72;
  }
  else if ((fVar18 != fVar19) &&
          (*(double *)(lVar6 + 0x10) - *(double *)(lVar1 + 0x28) < DAT_1808ac548)) {
LAB_1802b6b72:
    fVar21 = fVar19;
    goto LAB_1802b6b38;
  }
  fVar21 = 0.0;
LAB_1802b6b38:
  fVar21 = (float)FUN_1802b3660(lVar1 + 0x30,fVar21,DAT_1808ac118,0);
  if (local_res10[0] == '\0') {
    if (local_res18[0] == '\0') {
      fVar19 = 0.0;
    }
    else {
      fVar19 = DAT_1808ac294;
    }
  }
  uVar17 = FUN_1802b3660(lVar1 + 0x44,fVar19,uVar17,0);
  fVar19 = local_res20;
  if (param_3 == '\0') {
    FUN_1803fe590(*(undefined8 *)(lVar2 + 0x2c8),&local_128,&local_120,
                  (int)(longlong)((float)(DAT_180960f04 >> 0x18) * local_res20 + fVar4) << 0x18 |
                  DAT_180960f04 & 0xffffff,DAT_1808ac658,0);
  }
  uVar9 = FUN_1802b38e0(DAT_180960f08,DAT_180960f0c,uVar17);
  *(uint *)(lVar1 + 0x6c) =
       (int)(longlong)(fVar21 * fVar19 * (float)(uVar9 >> 0x18) + fVar4) << 0x18 | uVar9 & 0xffffff;
  local_124 = fVar16 * fVar20 + local_124;
  *(float *)(lVar1 + 0x5c) = local_128;
  *(float *)(lVar1 + 0x60) = local_124;
  *(float *)(lVar1 + 100) = local_120;
  *(undefined1 *)(lVar1 + 0x5a) = 1;
  *(float *)(lVar1 + 0x68) = fVar15 + local_124;
  return;
}



/* ===== 1802b6cd0 FUN_1802b6cd0 ===== */

void FUN_1802b6cd0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 local_res8 [8];
  undefined1 local_18 [24];
  
  local_res8[0] = (undefined4)param_1;
  plVar2 = (longlong *)FUN_18034ee00(param_1,local_18,local_res8);
  lVar1 = *plVar2;
  if (((*(char *)(lVar1 + 0x5a) != '\0') && (*(longlong *)(lVar1 + 0x18) != 0)) &&
     (*(char *)(lVar1 + 0x6f) != '\0')) {
    FUN_1803fe590(*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x2c8),lVar1 + 0x5c,lVar1 + 100,
                  *(undefined4 *)(lVar1 + 0x6c),DAT_1808ac658,0);
  }
  return;
}



/* ===== 1802b6d40 FUN_1802b6d40 ===== */

void FUN_1802b6d40(ulonglong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar4 = DAT_1811077a0 &
          ((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
            0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^
          (ulonglong)((uint)param_1 >> 0x18)) * 0x100000001b3;
  lVar3 = *(longlong *)(DAT_181107788 + 8 + uVar4 * 0x10);
  if (lVar3 != DAT_181107778) {
    uVar1 = *(uint *)(lVar3 + 0x10);
    while ((uint)param_1 != uVar1) {
      if (lVar3 == *(longlong *)(DAT_181107788 + uVar4 * 0x10)) goto LAB_1802b6dd4;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(uint *)(lVar3 + 0x10);
    }
    if (lVar3 != 0) goto LAB_1802b6dd7;
  }
LAB_1802b6dd4:
  lVar3 = DAT_181107778;
LAB_1802b6dd7:
  if (lVar3 != DAT_181107778) {
    *(undefined4 *)(lVar3 + 0x20) = 0;
    lVar2 = DAT_180ca0a50;
    lVar3 = *(longlong *)(lVar3 + 0x18);
    if (lVar3 != 0) {
      *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
      if (lVar3 == *(longlong *)(lVar2 + 0x14f8)) {
        fVar5 = (float)(*(uint *)(lVar3 + 0x9c) ^ DAT_1808adec0);
        *(float *)(lVar3 + 0x11c) = *(float *)(lVar3 + 0x11c) - fVar5;
        *(float *)(lVar3 + 300) = *(float *)(lVar3 + 300) - fVar5;
        *(float *)(lVar3 + 0x134) = *(float *)(lVar3 + 0x134) - fVar5;
        *(float *)(lVar3 + 0x124) = *(float *)(lVar3 + 0x124) - fVar5;
        *(float *)(lVar3 + 0x13c) = *(float *)(lVar3 + 0x13c) - fVar5;
      }
      *(undefined4 *)(lVar3 + 0x9c) = 0;
    }
  }
  return;
}



/* ===== 1802b6e90 FUN_1802b6e90 ===== */

void FUN_1802b6e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5,float param_6,undefined4 param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_6;
  fVar3 = (float)FUN_18053fc00(param_4 * DAT_1808abfc4 * param_6 + DAT_1808ac2f0);
  pfVar1 = (float *)CONCAT44(param_5._4_4_,(undefined4)param_5);
  param_5._0_4_ = FUN_18053fc00(*pfVar1 - fVar3 * DAT_1808ac1f4);
  param_5._4_4_ = FUN_18053fc00(pfVar1[1] - fVar2 * DAT_1808ac404 * DAT_1808ac1f4);
  FUN_180322fd0(param_1,param_2,param_3,param_4,&param_5,fVar2,param_7);
  return;
}



/* ===== 1802b6f70 FUN_1802b6f70 ===== */

void FUN_1802b6f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float *param_5,float *param_6,float param_7,undefined4 param_8)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_7;
  fVar5 = *param_5;
  fVar1 = param_5[1];
  fVar4 = (float)FUN_18053fc00(param_4 * DAT_1808abfc4 * param_7 + DAT_1808ac2f0);
  pfVar2 = param_6;
  fVar4 = (float)FUN_18053fc00(((*param_6 - fVar5) - fVar4) * DAT_1808ac1f4 + fVar5);
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  param_5._0_4_ = FUN_18053fc00(fVar4);
  fVar5 = (float)FUN_18053fc00(((pfVar2[1] - fVar1) - fVar3 * DAT_1808ac404) * DAT_1808ac1f4 + fVar1
                              );
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  param_5._4_4_ = FUN_18053fc00(fVar5);
  FUN_180322fd0(param_1,param_2,param_3,param_4,&param_5,fVar3,param_8);
  return;
}



/* ===== 1802b70b0 FUN_1802b70b0 ===== */

undefined1
FUN_1802b70b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,float param_6)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar19;
  longlong local_a8 [2];
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  
  lVar6 = DAT_180ca0a50;
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar6 + 0x14f8);
  uVar1 = *(undefined8 *)(lVar3 + 0x118);
  fVar15 = (float)uVar1;
  fVar16 = (float)((ulonglong)uVar1 >> 0x20);
  local_res20 = param_4;
  fVar10 = (float)FUN_18053fc00(param_5);
  fVar13 = *(float *)(lVar6 + 0xce0) + *(float *)(lVar6 + 0xce0) + *(float *)(lVar6 + 0x1200);
  iVar9 = FUN_1803e8900(lVar3,"##search");
  iVar2 = *(int *)(DAT_180ca0a50 + 0x1578);
  cVar7 = FUN_1803e7af0(0x80);
  fVar17 = DAT_1808ac34c;
  fVar11 = extraout_XMM0_Da;
  if (cVar7 != '\0') {
    lVar4 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    fVar11 = fVar15;
    if (fVar15 <= *(float *)(lVar4 + 0x268)) {
      fVar11 = *(float *)(lVar4 + 0x268);
    }
    fVar11 = fVar11 - *(float *)(DAT_180ca0a50 + 0xd04);
    if (fVar11 <= *(float *)(DAT_180ca0a50 + 0x110)) {
      fVar11 = fVar16;
      if (fVar16 <= *(float *)(lVar4 + 0x26c)) {
        fVar11 = *(float *)(lVar4 + 0x26c);
      }
      fVar11 = fVar11 - *(float *)(DAT_180ca0a50 + 0xd08);
      if (fVar11 <= *(float *)(DAT_180ca0a50 + 0x114)) {
        fVar11 = fVar15 + fVar10;
        if (*(float *)(lVar4 + 0x270) <= fVar15 + fVar10) {
          fVar11 = *(float *)(lVar4 + 0x270);
        }
        if (*(float *)(DAT_180ca0a50 + 0x110) < *(float *)(DAT_180ca0a50 + 0xd04) + fVar11) {
          fVar11 = fVar16 + fVar13;
          if (*(float *)(lVar4 + 0x274) <= fVar11) {
            fVar11 = *(float *)(lVar4 + 0x274);
          }
          if (*(float *)(DAT_180ca0a50 + 0x114) < *(float *)(DAT_180ca0a50 + 0xd08) + fVar11) {
            bVar5 = true;
            goto LAB_1802b71ff;
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_1802b71ff:
  fVar14 = 0.0;
  if (iVar2 == iVar9) {
    fVar14 = DAT_1808ac34c;
  }
  else if (bVar5) {
    fVar14 = DAT_1808ac1f4;
  }
  local_res20 = CONCAT44(local_res20._4_4_,iVar9) ^ 0xf3d3244;
  local_8c = 0;
  local_88 = 0xffffffff;
  local_98 = fVar14;
  local_94 = fVar14;
  local_90 = fVar14;
  FUN_18034a380(fVar11,local_a8,&local_res20,&local_98);
  uVar12 = FUN_1802b3660(local_a8[0] + 0x14,fVar14,DAT_1808ac118,0);
  uVar12 = FUN_1802b38e0(DAT_180960ef0,DAT_180960ef4,uVar12);
  FUN_1803d9cb0(uVar1,CONCAT44(fVar16 + fVar13,fVar15 + fVar10),uVar12,1,
                CONCAT44(uVar18,*(undefined4 *)(lVar6 + 0xce4)));
  local_res20 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0xcdc) >> 0x20) + fVar16,
                         (float)*(undefined8 *)(lVar6 + 0xcdc) + fVar15);
  FUN_180322fd0(*(undefined8 *)(lVar3 + 0x2c8),"nl_glyph_magnifying_glass",
                "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 512 512\" width=\"512\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M416 208C416 254 401 297 376 331L502 457C515 469 515 490 502 502C490 515 469 515 457 502L330 376C296 402 253 416 208 416C93 416 0 323 0 208C0 94 93 0 208 0C322 0 416 94 416 208ZM208 352C259 352 306 325 332 280C358 236 358 181 332 136C306 92 259 64 208 64C156 64 109 92 83 136C57 181 57 236 83 280C109 325 156 352 208 352Z\"/></svg>"
                ,DAT_1808acc00,&local_res20,DAT_1808ac8d4,CONCAT44(uVar19,DAT_180960ec4));
  fVar11 = (float)FUN_18053fc00(DAT_1808ac8e0);
  lVar4 = DAT_180ca0a50;
  fVar11 = fVar11 + *(float *)(lVar6 + 0xcdc);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar4 + 0x14f8);
  *(float *)(lVar3 + 0x118) = fVar11 + fVar15;
  *(float *)(lVar3 + 0x11c) = fVar16;
  *(undefined1 *)(lVar3 + 0x159) = 1;
  *(uint *)(lVar4 + 0x1eb0) = *(uint *)(lVar4 + 0x1eb0) | 1;
  param_6 = (fVar10 - fVar11) - param_6;
  if (fVar17 <= param_6) {
    fVar17 = param_6;
  }
  *(float *)(lVar4 + 0x1ec8) = fVar17;
  FUN_1803d8730(7,0);
  FUN_1803d8730(8,0);
  FUN_1803d8730(9,0);
  FUN_1803d8730(5,0);
  FUN_1803d8730(0,DAT_180960ef8);
  FUN_1803d8730(1,DAT_180960ec4);
  FUN_1803d8730(0x34,DAT_180960f54);
  FUN_1803d8730(0x22,DAT_180960ef8);
  uVar18 = *(undefined4 *)(DAT_180ca0a50 + 0xd98);
  *(undefined4 *)(DAT_180ca0a50 + 0xd98) = 0x3f800000;
  local_res20 = 0;
  uVar8 = FUN_18041c570("##search",param_2,&DAT_1811075b0,0x40,&local_res20,0,0,0);
  *(undefined4 *)(DAT_180ca0a50 + 0xd98) = uVar18;
  FUN_1803d87f0(4);
  FUN_1803d87f0(4);
  return uVar8;
}



/* ===== 1802b74f0 FUN_1802b74f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802b74f0(undefined8 param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  longlong lVar13;
  float *pfVar14;
  undefined4 *puVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  char *****pppppcVar19;
  longlong lVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  char *****local_1f0;
  char *****local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  char local_1b8;
  char local_1b7;
  char local_1b6;
  char local_1b5;
  char local_1b4;
  char local_1b3;
  float local_1b0 [2];
  float local_1a8 [2];
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined8 local_194;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  ulonglong local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158 [4];
  undefined8 local_148;
  char ****local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  longlong local_118;
  char *****local_110 [3];
  ulonglong local_f8;
  ulonglong local_f0;
  
  fVar11 = DAT_1811071a8;
  lVar20 = DAT_181106eb0;
  lVar4 = DAT_180ca0a50;
  iVar1 = DAT_1809f6f58;
  local_f0 = DAT_180919500 ^ (ulonglong)auStack_218;
  local_138 = DAT_181106ea8;
  local_118 = DAT_181106eb0;
  local_160 = DAT_181106eb8;
  DAT_181106ea8 = (char ****)0x0;
  DAT_181106eb0 = 0;
  DAT_181106eb8 = 0.0;
  _DAT_181106ebc = local_174;
  DAT_1809f6f58 = 0xffffffff;
  DAT_1811071a8 = 0.0;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  fVar30 = DAT_1808ac34c;
  lVar4 = *(longlong *)(lVar4 + 0x14f8);
  fVar31 = *(float *)(lVar4 + 0x58) + *(float *)(lVar4 + 0x28);
  fVar29 = *(float *)(lVar4 + 0x11c);
  fVar22 = *(float *)(lVar4 + 0x250) - fVar31;
  fVar25 = DAT_1808ac34c;
  if (DAT_1808ac34c <= fVar22) {
    fVar25 = fVar22;
  }
  local_1b5 = param_2;
  local_1b4 = param_3;
  local_1b3 = param_4;
  FUN_1803e89e0(param_1);
  if ((param_4 == '\0') || (param_3 == '\0')) {
    local_1b6 = '\0';
    bVar5 = false;
  }
  else {
    local_1b6 = '\x01';
    bVar5 = true;
  }
  if (-1 < iVar1) {
    bVar5 = 0 < iVar1;
  }
  if (bVar5) {
    fVar22 = fVar30;
  }
  else {
    fVar22 = 0.0;
  }
  local_1b0[0] = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##check");
  local_17c = 0;
  local_178 = 0xffffffff;
  local_188 = fVar22;
  local_184 = fVar22;
  local_180 = fVar22;
  FUN_18034a380(extraout_XMM0_Da,&local_148,local_1b0,&local_188);
  fVar22 = (float)FUN_1802b3660(local_148 + 0x14,fVar22,DAT_1808ac118,0);
  local_168 = fVar22;
  FUN_1802b3fe0(local_110,param_1);
  fVar23 = (float)FUN_18053fc00(DAT_1808ac86c);
  local_194._0_4_ = fVar11 + DAT_1808ac8b0;
  fVar22 = (fVar23 + DAT_1808ac8b0) * fVar22;
  fVar32 = fVar22 + (float)local_194;
  if (lVar20 == 0) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = DAT_1808ac9fc;
  }
  local_1a8[0] = fVar28 + fVar32;
  local_1f0 = (char *****)local_110;
  if (0xf < local_f8) {
    local_1f0 = local_110[0];
  }
  local_1c8 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = (char *****)0x0;
  local_1f8 = (float *)((ulonglong)local_1f8._4_4_ << 0x20);
  FUN_18040a2f0(&local_1a0,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),DAT_1808ac930,DAT_1808acd08);
  lVar16 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar20 = *(longlong *)(lVar16 + 0x14f8);
  local_148 = CONCAT44(fVar29,fVar31);
  *(ulonglong *)(lVar20 + 0x118) = CONCAT44(fVar29,fVar31);
  *(undefined1 *)(lVar20 + 0x159) = 1;
  fVar10 = (float)FUN_1803e8900(*(undefined8 *)(lVar16 + 0x14f8),"##item");
  local_1a0 = fVar11 + DAT_1808ac980 + local_1a0 + fVar22 + fVar28;
  local_19c = 31.706;
  local_198 = fVar10;
  FUN_1803ec550(&local_1a0,DAT_1808acda0);
  local_1b0[0] = fVar29 + DAT_1808ac9f8;
  local_1a0 = fVar31 + fVar25;
  local_1b7 = '\0';
  local_1b8 = '\0';
  local_128 = fVar31;
  local_124 = fVar29;
  local_120 = local_1a0;
  local_11c = local_1b0[0];
  cVar9 = FUN_1803ec2f0(&local_128,fVar10,0,0);
  if (cVar9 == '\0') {
LAB_1802b78a6:
    uVar21 = 0;
  }
  else {
    local_1f8 = (float *)((ulonglong)local_1f8 & 0xffffffff00000000);
    cVar9 = FUN_180415270(&local_128,fVar10,&local_1b7,&local_1b8);
    if (cVar9 == '\0') goto LAB_1802b78a6;
    uVar21 = 1;
  }
  fVar11 = (float)FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),"##lit");
  lVar20 = DAT_180ca0a50;
  local_170 = CONCAT44(local_170._4_4_,fVar11);
  iVar2 = *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108);
  if (iVar2 < 2) {
    FUN_1803ebc00("Calling PopID() too many times!");
    lVar20 = DAT_180ca0a50;
  }
  else {
    *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x108) = iVar2 + -1;
  }
  fVar22 = DAT_1808ac1f4;
  if (((local_1b5 != '\0') &&
      (lVar16 = *(longlong *)(lVar20 + 0x14f8), *(char *)(lVar16 + 0xd3) != '\0')) &&
     ((*(uint *)(lVar20 + 0x1ef0) & 0x100) == 0)) {
    fVar28 = *(float *)(lVar16 + 0x5c);
    fVar27 = fVar28;
    if (fVar28 <= *(float *)(lVar20 + 0xcf0)) {
      fVar27 = *(float *)(lVar20 + 0xcf0);
    }
    fVar24 = *(float *)(lVar16 + 0x124) - fVar27;
    *(float *)(lVar16 + 0xac) =
         (float)(int)(((((((*(float *)(lVar16 + 0x124) + *(float *)(lVar16 + 0x14c) + fVar27) -
                          fVar24) * DAT_1808ac1f4 + fVar24) - *(float *)(lVar16 + 0x2c)) -
                       *(float *)(lVar16 + 0x74)) - *(float *)(lVar16 + 0x84)) +
                     *(float *)(lVar16 + 0x9c));
    *(undefined4 *)(lVar16 + 0xb4) = 0x3f000000;
    fVar24 = 0.0;
    if (0.0 <= fVar28 - fVar27) {
      fVar24 = fVar28 - fVar27;
    }
    *(float *)(lVar16 + 0xbc) = fVar24;
  }
  uVar18 = (((((ulonglong)(uint)fVar10 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)local_198._1_1_) * 0x100000001b3 ^ (ulonglong)local_198._2_1_) *
            0x100000001b3 ^ (ulonglong)local_198._3_1_) * 0x100000001b3 & DAT_181107640;
  lVar16 = *(longlong *)(DAT_181107628 + 8 + uVar18 * 0x10);
  if (lVar16 == DAT_181107618) {
LAB_1802b7a44:
    lVar16 = DAT_181107618;
  }
  else {
    fVar28 = *(float *)(lVar16 + 0x10);
    while (fVar10 != fVar28) {
      if (lVar16 == *(longlong *)(DAT_181107628 + uVar18 * 0x10)) goto LAB_1802b7a44;
      lVar16 = *(longlong *)(lVar16 + 8);
      fVar28 = *(float *)(lVar16 + 0x10);
    }
    if (lVar16 == 0) goto LAB_1802b7a44;
  }
  uVar18 = (((((ulonglong)(uint)fVar11 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             local_170 >> 8 & 0xff) * 0x100000001b3 ^ local_170 >> 0x10 & 0xff) * 0x100000001b3 ^
           local_170 >> 0x18 & 0xff) * 0x100000001b3 & DAT_181107640;
  lVar13 = *(longlong *)(DAT_181107628 + 8 + uVar18 * 0x10);
  if (lVar13 != DAT_181107618) {
    fVar28 = *(float *)(lVar13 + 0x10);
    while (fVar11 != fVar28) {
      if (lVar13 == *(longlong *)(DAT_181107628 + uVar18 * 0x10)) goto LAB_1802b7aa4;
      lVar13 = *(longlong *)(lVar13 + 8);
      fVar28 = *(float *)(lVar13 + 0x10);
    }
    if (lVar13 != 0) goto LAB_1802b7aa7;
  }
LAB_1802b7aa4:
  lVar13 = DAT_181107618;
LAB_1802b7aa7:
  if (lVar16 == DAT_181107618) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = *(float *)(lVar16 + 0x14);
  }
  if (lVar13 == DAT_181107618) {
    uVar26 = 0;
  }
  else {
    uVar26 = *(undefined4 *)(lVar13 + 0x14);
  }
  *(undefined1 *)(*(longlong *)(lVar20 + 0x14f8) + 0xce) = 1;
  lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x14f8) + 0x2c8);
  if (0.0 < fVar28) {
    local_170 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x28) >> 0x20) +
                         (float)((ulonglong)*(undefined8 *)(lVar4 + 0x30) >> 0x20),
                         (float)*(undefined8 *)(lVar4 + 0x28) + (float)*(undefined8 *)(lVar4 + 0x30)
                        );
    FUN_1803fc200(lVar20,lVar4 + 0x28,&local_170,0);
    local_158[2] = 1.0;
    local_158[0] = 0.0;
    local_158[1] = fVar28 * DAT_1808ac1b0 * DAT_1808ac2cc;
    local_19c = local_1b0[0];
    pfVar17 = local_158;
    if (0.0 <= local_158[1]) {
      pfVar17 = local_158 + 1;
    }
    pfVar14 = local_158 + 2;
    if (local_158[1] <= fVar30) {
      pfVar14 = pfVar17;
    }
    local_1f0 = (char *****)((ulonglong)local_1f0 & 0xffffffff00000000);
    local_1f8 = (float *)CONCAT44(local_1f8._4_4_,DAT_1808ac854);
    FUN_1803fe590(lVar20,&local_148,&local_1a0,
                  DAT_180960f44 & 0xffffff |
                  (int)(longlong)(*pfVar14 * DAT_1808acb94 + fVar22) << 0x18);
    iVar3 = *(int *)(lVar20 + 0xa0);
    iVar2 = iVar3 + -1;
    *(int *)(lVar20 + 0xa0) = iVar2;
    if (iVar2 == 0) {
      puVar15 = (undefined4 *)(*(longlong *)(lVar20 + 0x38) + 0x34);
    }
    else {
      puVar15 = (undefined4 *)((longlong)(iVar3 + -2) * 0x10 + *(longlong *)(lVar20 + 0xa8));
    }
    uVar6 = puVar15[1];
    uVar7 = puVar15[2];
    uVar8 = puVar15[3];
    *(undefined4 *)(lVar20 + 0x60) = *puVar15;
    *(undefined4 *)(lVar20 + 100) = uVar6;
    *(undefined4 *)(lVar20 + 0x68) = uVar7;
    *(undefined4 *)(lVar20 + 0x6c) = uVar8;
    FUN_1803fbff0(lVar20);
  }
  uVar12 = FUN_1802b38e0(DAT_180960ef8,DAT_180960ec8,uVar26);
  if ((0.0 < local_168) && ((iVar1 < 0 || (local_1b6 != '\0')))) {
    local_194._0_4_ = fVar23 * fVar22 + (float)local_194 + fVar31;
    local_194._4_4_ = fVar29 + DAT_1808ac910;
    local_1e8 = (char *****)
                CONCAT44(local_1e8._4_4_,
                         (int)(longlong)((float)(DAT_180960ec0 >> 0x18) * local_168 + fVar22) <<
                         0x18 | DAT_180960ec0 & 0xffffff);
    local_1f0 = (char *****)CONCAT44(local_1f0._4_4_,DAT_1808ac880);
    local_1f8 = (float *)&local_194;
    FUN_1802b6e90(lVar20,"nl_glyph_check",
                  "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 448 512\" width=\"448\" height=\"512\"><path fill=\"white\" fill-rule=\"nonzero\" d=\"M438 106C451 118 451 139 438 151L182 407C170 420 149 420 137 407L9 279C-3 267 -3 246 9 234C21 221 42 221 54 234L160 339L393 106C405 93 426 93 438 106L438 106ZM438 106Z\"/></svg>"
                  ,DAT_1808acbe4);
  }
  if (local_118 != 0) {
    local_194._0_4_ = fVar32 + DAT_1808ac950 + fVar31;
    local_194._4_4_ = local_1b0[0];
    local_168 = fVar31 + fVar32;
    local_164 = fVar29 + 0.0;
    local_1e0 = CONCAT44(local_1e0._4_4_,uVar12);
    local_1e8 = (char *****)CONCAT44(local_1e8._4_4_,DAT_1808ac8d4);
    local_1f0 = (char *****)&local_194;
    local_1f8 = &local_168;
    FUN_1802b6f70(lVar20,local_138,local_118,local_160);
  }
  local_160 = fVar31 + (fVar25 - DAT_1808ac710);
  local_15c = local_1b0[0];
  FUN_1803fc200(lVar20,&local_148,&local_160,1);
  pppppcVar19 = (char *****)local_110;
  if (0xf < local_f8) {
    pppppcVar19 = local_110[0];
  }
  local_148 = CONCAT44(local_148._4_4_,fVar31 + local_1a8[0]);
  fVar25 = (float)FUN_18053f0d0(DAT_1808ac7ec);
  local_148 = CONCAT44(fVar25 + fVar29,(undefined4)local_148);
  if ((((uVar12 & 0xff000000) != 0) && (pppppcVar19 != (char *****)0x0)) &&
     (*(char *)pppppcVar19 != '\0')) {
    local_138 = *(char *****)(lVar20 + 0x60);
    uStack_130 = *(undefined4 *)(lVar20 + 0x68);
    uStack_12c = *(undefined4 *)(lVar20 + 0x6c);
    local_1d0 = 0;
    local_1d8 = local_1d8 & 0xffffffff00000000;
    local_1e0 = 0;
    local_1f0 = &local_138;
    local_1f8 = (float *)CONCAT44(local_1f8._4_4_,uVar12);
    local_1e8 = pppppcVar19;
    FUN_18040a900(*(undefined8 *)(*(longlong *)(lVar20 + 0x38) + 0x18),lVar20,DAT_1808ac930,
                  &local_148);
  }
  iVar2 = *(int *)(lVar20 + 0xa0);
  iVar1 = iVar2 + -1;
  *(int *)(lVar20 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar15 = (undefined4 *)(*(longlong *)(lVar20 + 0x38) + 0x34);
  }
  else {
    puVar15 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(lVar20 + 0xa8));
  }
  uVar26 = puVar15[1];
  uVar6 = puVar15[2];
  uVar7 = puVar15[3];
  *(undefined4 *)(lVar20 + 0x60) = *puVar15;
  *(undefined4 *)(lVar20 + 100) = uVar26;
  *(undefined4 *)(lVar20 + 0x68) = uVar6;
  *(undefined4 *)(lVar20 + 0x6c) = uVar7;
  uVar26 = FUN_1803fbff0(lVar20);
  if (local_1b8 == '\0') {
    if (local_1b7 == '\0') {
      fVar29 = 0.0;
    }
    else {
      fVar29 = fVar22;
    }
  }
  else {
    fVar29 = fVar30;
  }
  local_17c = 0;
  local_178 = 0xffffffff;
  local_1a8[0] = fVar10;
  local_188 = fVar29;
  local_184 = fVar29;
  local_180 = fVar29;
  FUN_18034a380(uVar26,&local_138,local_1a8,&local_188);
  uVar26 = DAT_1808ac118;
  FUN_1802b3660((longlong)local_138 + 0x14,fVar29,DAT_1808ac118,0);
  cVar9 = local_1b5;
  if (local_1b3 != '\0') {
    cVar9 = local_1b4;
  }
  if (((cVar9 == '\0') && (local_1b8 == '\0')) && (fVar30 = fVar22, local_1b7 == '\0')) {
    fVar30 = 0.0;
  }
  local_17c = 0;
  local_178 = 0xffffffff;
  local_1a8[0] = fVar11;
  local_188 = fVar30;
  local_184 = fVar30;
  local_180 = fVar30;
  FUN_18034a380(cVar9,&local_138,local_1a8,&local_188);
  FUN_1802b3660((longlong)local_138 + 0x14,fVar30,uVar26,0);
  FUN_18000f890(local_110);
  return uVar21;
}



/* ===== 1802b7f90 FUN_1802b7f90 ===== */

void FUN_1802b7f90(void)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  fVar1 = *(float *)(lVar3 + 0x118);
  fVar2 = *(float *)(lVar3 + 0x11c);
  if ((*(longlong *)(lVar3 + 0x1c8) != 0) ||
     (lVar4 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
    lVar4 = 0x250;
  }
  fVar5 = *(float *)(lVar4 + lVar3) - *(float *)(lVar3 + 0x118);
  local_resc = 7.0;
  local_res8 = fVar5;
  FUN_1804174f0(&local_res8);
  lVar3 = DAT_180ca0a50;
  local_res10 = DAT_1808ac7ac;
  local_resc = fVar2 + DAT_1808ac710;
  fVar5 = fVar5 - DAT_1808ac7ac;
  local_res14 = fVar2 + DAT_1808ac658;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  local_res8 = fVar5 + fVar1;
  local_res10 = fVar1 + local_res10;
  FUN_1803fe590(*(undefined8 *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8),&local_res10,&local_res8,
                DAT_180960f48,0,0);
  return;
}



/* ===== 1802b80b0 FUN_1802b80b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b80b0(longlong param_1,undefined4 param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5,float param_6,undefined4 param_7,undefined4 param_8,
                  uint param_9,char *param_10,char param_11)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float local_res8;
  undefined4 local_resc;
  undefined4 local_res10 [2];
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [64];
  
  uVar19 = (undefined4)(param_4 >> 0x20);
  fVar18 = (float)param_4;
  local_res10[0] = param_2;
  plVar10 = (longlong *)FUN_18034eb30(param_1,local_78,local_res10);
  pcVar8 = param_10;
  uVar21 = 0;
  lVar3 = *plVar10;
  uVar20 = 0;
  FUN_18040a2f0(&local_res8,param_3,param_4,DAT_1808acd08,0,param_10,0,0,0);
  fVar6 = local_res8;
  lVar12 = DAT_180ca0a50;
  dVar16 = DAT_1808acdb8;
  pfVar4 = (float *)CONCAT44(param_5._4_4_,(float)param_5);
  dVar1 = *(double *)(DAT_180ca0a50 + 0x10);
  fVar17 = local_res8 - (param_6 - *pfVar4);
  if (param_11 == '\0') {
    *(undefined8 *)(lVar3 + 0x38) = 0xbff0000000000000;
  }
  else {
    dVar16 = *(double *)(lVar3 + 0x38);
    if (*(double *)(lVar3 + 0x38) < 0.0) {
      *(double *)(lVar3 + 0x38) = dVar1;
      dVar16 = dVar1;
    }
  }
  uVar14 = DAT_1808ac140;
  if (((fVar17 <= 0.0) || (param_11 == '\0')) || (dVar1 - dVar16 <= _DAT_1808ac468)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (0.0 < fVar17) {
    if (bVar5) {
      iVar9 = *(int *)(lVar3 + 0x30);
      if (iVar9 < 5) {
        iVar9 = iVar9 + 1;
        *(int *)(lVar3 + 0x30) = iVar9;
      }
      if (iVar9 == 5) {
        local_res8 = local_res8 + DAT_1808ac950;
        fVar15 = *(float *)(lVar12 + 0x40) * DAT_1808aca54 + *(float *)(lVar3 + 0x2c);
        fVar17 = local_res8;
        if (fVar15 <= local_res8) {
          fVar17 = fVar15;
        }
        *(float *)(lVar3 + 0x2c) = fVar17;
        if (local_res8 <= fVar17) {
          *(undefined4 *)(lVar3 + 0x2c) = 0;
        }
      }
      uVar14 = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(lVar3 + 0x18) = uVar14;
      *(undefined4 *)(lVar3 + 0x1c) = uVar14;
      *(undefined4 *)(lVar3 + 0x20) = uVar14;
      *(undefined4 *)(lVar3 + 0x24) = 0;
      *(undefined4 *)(lVar3 + 0x28) = 0xffffffff;
    }
    else {
      *(undefined4 *)(lVar3 + 0x30) = 0;
      uVar14 = FUN_1802b3660(lVar3 + 0x18,0,uVar14,0);
      *(undefined4 *)(lVar3 + 0x2c) = uVar14;
    }
  }
  else {
    *(undefined8 *)(lVar3 + 0x2c) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined4 *)(lVar3 + 0x28) = 0xffffffff;
  }
  local_res8 = *pfVar4;
  param_5._0_4_ = local_res8;
  if (local_res8 <= param_6) {
    param_5._0_4_ = param_6;
  }
  local_resc = param_7;
  param_5._4_4_ = (float)param_8;
  FUN_1803fc200(param_1,&local_res8,&param_5,1);
  uVar7 = param_9;
  param_5._0_4_ = *pfVar4 - *(float *)(lVar3 + 0x2c);
  param_5._4_4_ = pfVar4[1];
  uVar13 = param_9 & 0xff000000;
  if (((uVar13 != 0) && (pcVar8 != (char *)0x0)) && (*pcVar8 != '\0')) {
    lVar12 = param_3;
    if (param_3 == 0) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    if (fVar18 == 0.0) {
      param_4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    local_88 = *(undefined4 *)(param_1 + 0x60);
    uStack_84 = *(undefined4 *)(param_1 + 100);
    uStack_80 = *(undefined4 *)(param_1 + 0x68);
    uStack_7c = *(undefined4 *)(param_1 + 0x6c);
    uVar20 = uVar20 & 0xffffffff00000000;
    FUN_18040a900(lVar12,param_1,param_4,&param_5,param_9,&local_88,pcVar8,0,uVar20,0,uVar21);
  }
  if (0.0 < *(float *)(lVar3 + 0x2c)) {
    param_5._0_4_ = (*pfVar4 - *(float *)(lVar3 + 0x2c)) + fVar6 + DAT_1808ac950;
    param_5._4_4_ = pfVar4[1];
    if (((uVar13 != 0) && (pcVar8 != (char *)0x0)) && (*pcVar8 != '\0')) {
      if (param_3 == 0) {
        param_3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      }
      if (fVar18 == 0.0) {
        fVar18 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        uVar19 = 0;
      }
      local_88 = *(undefined4 *)(param_1 + 0x60);
      uStack_84 = *(undefined4 *)(param_1 + 100);
      uStack_80 = *(undefined4 *)(param_1 + 0x68);
      uStack_7c = *(undefined4 *)(param_1 + 0x6c);
      FUN_18040a900(param_3,param_1,CONCAT44(uVar19,fVar18),&param_5,uVar7,&local_88,pcVar8,0,
                    uVar20 & 0xffffffff00000000,0,uVar21);
    }
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar9 = iVar2 + -1;
  *(int *)(param_1 + 0xa0) = iVar9;
  if (iVar9 == 0) {
    puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x34);
  }
  else {
    puVar11 = (undefined4 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
  }
  uVar19 = puVar11[1];
  uVar21 = puVar11[2];
  uVar14 = puVar11[3];
  *(undefined4 *)(param_1 + 0x60) = *puVar11;
  *(undefined4 *)(param_1 + 100) = uVar19;
  *(undefined4 *)(param_1 + 0x68) = uVar21;
  *(undefined4 *)(param_1 + 0x6c) = uVar14;
  FUN_1803fbff0(param_1);
  return;
}



