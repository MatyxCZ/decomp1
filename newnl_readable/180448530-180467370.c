/* ===== 180448530 FUN_180448530 ===== */

void FUN_180448530(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  if ((ulonglong)((param_1[2] - lVar1 >> 3) * 0x34f72c234f72c235) < param_2) {
    if (0x11a7b9611a7b961 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar2 = param_1[1];
    lVar4 = FUN_18000fb70(param_2 * 0xe8);
    lVar3 = param_1[1];
    lVar6 = lVar4;
    for (lVar5 = *param_1; lVar5 != lVar3; lVar5 = lVar5 + 0xe8) {
      FUN_18043b470(lVar6,lVar5);
      lVar6 = lVar6 + 0xe8;
    }
    FUN_180448e10(lVar6,lVar6);
    FUN_180448d70(param_1,lVar4,(lVar2 - lVar1 >> 3) * 0x34f72c234f72c235,param_2);
  }
  return;
}



/* ===== 180448630 FUN_180448630 ===== */

void FUN_180448630(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar3 = *param_1;
  lVar8 = param_1[1] - lVar3 >> 3;
  if (param_2 < (ulonglong)(lVar8 * 0xfc0fc0fc0fc0fc1)) {
    param_1[1] = param_2 * 0x208 + lVar3;
    return;
  }
  if (param_2 <= (ulonglong)(lVar8 * 0xfc0fc0fc0fc0fc1)) {
    return;
  }
  uVar4 = (param_1[2] - lVar3 >> 3) * 0xfc0fc0fc0fc0fc1;
  if (param_2 <= uVar4) {
    lVar3 = FUN_180448b40(param_1[1],param_2 + lVar8 * -0xfc0fc0fc0fc0fc1);
    param_1[1] = lVar3;
    return;
  }
  if (0x7e07e07e07e07e < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar5 = 0x7e07e07e07e07e;
  if (uVar4 <= 0x7e07e07e07e07e - (uVar4 >> 1)) {
    uVar5 = (uVar4 >> 1) + uVar4;
    if (uVar5 < param_2) {
      uVar5 = param_2;
    }
    else if (0x7e07e07e07e07e < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar2 = FUN_18000fb70(uVar5 * 0x208);
  FUN_180448b40(lVar8 * 8 + lVar2,param_2 + lVar8 * -0xfc0fc0fc0fc0fc1);
  FUN_180540530(lVar2,*param_1,param_1[1] - *param_1);
  puVar6 = auStack_38;
  puVar7 = auStack_38;
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_180448772;
  lVar8 = lVar3;
  if ((ulonglong)((param_1[2] - lVar3 >> 3) * 8) < 0x1000) {
LAB_180448767:
    puVar7 = puVar6;
  }
  else {
    lVar8 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar6 = auStack_30;
      goto LAB_180448767;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180448772;
  thunk_FUN_1803d64e0(lVar8);
LAB_180448772:
  *param_1 = lVar2;
  param_1[1] = param_2 * 0x208 + lVar2;
  param_1[2] = uVar5 * 0x208 + lVar2;
  return;
}



/* ===== 1804487d0 FUN_1804487d0 ===== */

longlong FUN_1804487d0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar3 = *param_1;
  uVar15 = 0xccccccccccccccc;
  lVar8 = (param_1[1] - lVar3 >> 2) * -0x3333333333333333;
  if (lVar8 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar3 >> 2) * -0x3333333333333333;
  if (uVar10 <= 0xccccccccccccccc - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar15 = uVar1;
    if (uVar1 <= uVar10) {
      uVar15 = uVar10;
    }
    if (0xccccccccccccccc < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar9 = FUN_18000fb70(uVar15 * 0x14);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar3 = (param_2 - lVar3) / 0x14;
  puVar2 = (undefined4 *)(lVar9 + lVar3 * 0x14);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar3 = lVar9 + lVar3 * 0x14;
  *(undefined4 *)(lVar3 + 0x10) = param_3[4];
  lVar8 = *param_1;
  if (param_2 == param_1[1]) {
    lVar14 = param_1[1] - lVar8;
    lVar11 = lVar9;
    param_2 = lVar8;
  }
  else {
    FUN_180540530(lVar9,lVar8,param_2 - lVar8);
    lVar11 = lVar3 + 0x14;
    lVar14 = param_1[1] - param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_180540530(lVar11,param_2,lVar14);
  lVar8 = *param_1;
  if (lVar8 == 0) goto LAB_18044893a;
  lVar11 = lVar8;
  if ((ulonglong)((param_1[2] - lVar8 >> 2) * 4) < 0x1000) {
LAB_18044892f:
    puVar13 = puVar12;
  }
  else {
    lVar11 = *(longlong *)(lVar8 + -8);
    if (0x1f < (lVar8 - lVar11) - 8U) {
      lVar11 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar12 = auStack_40;
      goto LAB_18044892f;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18044893a;
  thunk_FUN_1803d64e0(lVar11);
LAB_18044893a:
  *param_1 = lVar9;
  param_1[1] = lVar9 + uVar1 * 0x14;
  param_1[2] = uVar15 * 0x14 + lVar9;
  return lVar3;
}



/* ===== 180448980 FUN_180448980 ===== */

longlong FUN_180448980(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar3 = *param_1;
  uVar16 = 0x666666666666666;
  lVar9 = (param_1[1] - lVar3 >> 3) * -0x3333333333333333;
  if (lVar9 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (param_1[2] - lVar3 >> 3) * -0x3333333333333333;
  if (uVar11 <= 0x666666666666666 - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar16 = uVar1;
    if (uVar1 <= uVar11) {
      uVar16 = uVar11;
    }
    if (0x666666666666666 < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar10 = FUN_18000fb70(uVar16 * 0x28);
  uVar8 = param_3[1];
  lVar3 = (param_2 - lVar3) / 0x28;
  puVar2 = (undefined8 *)(lVar10 + lVar3 * 0x28);
  *puVar2 = *param_3;
  puVar2[1] = uVar8;
  lVar3 = lVar10 + lVar3 * 0x28;
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar6 = *(undefined4 *)(param_3 + 3);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(lVar3 + 0x14) = uVar5;
  *(undefined4 *)(lVar3 + 0x18) = uVar6;
  *(undefined4 *)(lVar3 + 0x1c) = uVar7;
  *(undefined8 *)(lVar3 + 0x20) = param_3[4];
  lVar9 = *param_1;
  if (param_2 == param_1[1]) {
    lVar15 = param_1[1] - lVar9;
    lVar12 = lVar10;
    param_2 = lVar9;
  }
  else {
    FUN_180540530(lVar10,lVar9,param_2 - lVar9);
    lVar12 = lVar3 + 0x28;
    lVar15 = param_1[1] - param_2;
  }
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  FUN_180540530(lVar12,param_2,lVar15);
  lVar9 = *param_1;
  if (lVar9 == 0) goto LAB_180448af7;
  lVar12 = lVar9;
  if ((ulonglong)((param_1[2] - lVar9 >> 3) * 8) < 0x1000) {
LAB_180448aec:
    puVar14 = puVar13;
  }
  else {
    lVar12 = *(longlong *)(lVar9 + -8);
    if (0x1f < (lVar9 - lVar12) - 8U) {
      lVar12 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar13 = auStack_40;
      goto LAB_180448aec;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x180448af7;
  thunk_FUN_1803d64e0(lVar12);
LAB_180448af7:
  *param_1 = lVar10;
  param_1[1] = lVar10 + uVar1 * 0x28;
  param_1[2] = uVar16 * 0x28 + lVar10;
  return lVar3;
}



/* ===== 180448b40 FUN_180448b40 ===== */

longlong FUN_180448b40(longlong param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_180540170(param_1,0,0x200);
    FUN_180448e70(param_1);
    *(undefined4 *)(param_1 + 0x200) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x204) = 0;
    param_1 = param_1 + 0x208;
  }
  return param_1;
}



/* ===== 180448bb0 FUN_180448bb0 ===== */

undefined8 * FUN_180448bb0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  uVar14 = 0x2e8ba2e8ba2e8ba;
  lVar8 = (param_1[1] - lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if (lVar8 == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if (uVar10 <= 0x2e8ba2e8ba2e8ba - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar14 = uVar1;
    if (uVar1 <= uVar10) {
      uVar14 = uVar10;
    }
    if (0x2e8ba2e8ba2e8ba < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar14 * 0x58);
  uVar7 = param_3[1];
  puVar15 = puVar9 + ((param_2 - lVar2) / 0x58) * 0xb;
  *puVar15 = *param_3;
  puVar15[1] = uVar7;
  uVar7 = param_3[3];
  puVar15[2] = param_3[2];
  puVar15[3] = uVar7;
  uVar7 = param_3[5];
  puVar15[4] = param_3[4];
  puVar15[5] = uVar7;
  uVar7 = param_3[7];
  puVar15[6] = param_3[6];
  puVar15[7] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar5 = *(undefined4 *)(param_3 + 9);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x4c);
  *(undefined4 *)(puVar15 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((longlong)puVar15 + 0x44) = uVar4;
  *(undefined4 *)(puVar15 + 9) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar6;
  puVar15[10] = param_3[10];
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar2;
    puVar11 = puVar9;
    param_2 = lVar2;
  }
  else {
    FUN_180540530(puVar9,lVar2,param_2 - lVar2);
    puVar11 = puVar15 + 0xb;
    lVar8 = param_1[1] - param_2;
  }
  puVar12 = auStack_48;
  puVar13 = auStack_48;
  FUN_180540530(puVar11,param_2,lVar8);
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_180448d2d;
  lVar8 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 3) * 8) < 0x1000) {
LAB_180448d22:
    puVar13 = puVar12;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar8) - 8U) {
      lVar8 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar12 = auStack_40;
      goto LAB_180448d22;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180448d2d;
  thunk_FUN_1803d64e0(lVar8);
LAB_180448d2d:
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1 * 0xb);
  param_1[2] = (longlong)(puVar9 + uVar14 * 0xb);
  return puVar15;
}



/* ===== 180448d70 FUN_180448d70 ===== */

void FUN_180448d70(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  if (*param_1 == 0) goto LAB_180448de8;
  FUN_180448e10(*param_1,param_1[1]);
  puVar3 = auStack_48;
  puVar4 = auStack_48;
  uVar5 = *param_1;
  uVar2 = uVar5;
  if ((ulonglong)(((longlong)(param_1[2] - uVar5) >> 3) * 8) < 0x1000) {
LAB_180448de0:
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
      goto LAB_180448de0;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x180448de8;
  thunk_FUN_1803d64e0(uVar2);
LAB_180448de8:
  *param_1 = param_2;
  param_1[1] = param_3 * 0xe8 + param_2;
  param_1[2] = param_4 * 0xe8 + param_2;
  return;
}



/* ===== 180448e10 FUN_180448e10 ===== */

void FUN_180448e10(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_1802a9370(param_1 + 0xd0);
      FUN_1802a9370(param_1 + 0x98);
      FUN_180200b70(param_1 + 0x80);
      param_1 = param_1 + 0xe8;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 180448e70 FUN_180448e70 ===== */

void FUN_180448e70(undefined8 *param_1)

{
  *param_1 = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  return;
}



/* ===== 180449010 FUN_180449010 ===== */

ulonglong FUN_180449010(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5,
                       float *param_6,float *param_7)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  
  fVar6 = (float)param_4;
  if (fVar6 < 0.0) {
    uVar3 = FUN_18051af10(param_4);
    fVar9 = (float)uVar3;
    uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else {
    uVar10 = 0;
    fVar9 = SQRT(fVar6);
  }
  if ((fVar9 < DAT_1808abf54) || (DAT_1808accfc < fVar9)) {
    uVar4 = 0;
    if (fVar6 == 0.0) {
      *param_7 = 0.0;
      *param_6 = 0.0;
      *param_5 = 0.0;
    }
    else {
      dVar5 = (double)param_1;
      dVar1 = (double)param_2;
      dVar2 = (double)param_3;
      dVar7 = dVar5 * dVar5 + dVar1 * dVar1 + dVar2 * dVar2;
      if (dVar7 < 0.0) {
        dVar7 = (double)FUN_18051ff20(dVar7);
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      dVar8 = DAT_1808ac500 / dVar7;
      *param_5 = (float)(dVar5 * dVar8);
      *param_6 = (float)(dVar1 * dVar8);
      dVar5 = DAT_1808accc0;
      if (dVar7 <= DAT_1808accc0) {
        dVar5 = dVar7;
      }
      *param_7 = (float)(dVar2 * dVar8);
      uVar4 = (ulonglong)(uint)(float)dVar5;
    }
  }
  else {
    fVar6 = DAT_1808ac34c / fVar9;
    *param_5 = fVar6 * param_1;
    uVar4 = CONCAT44(uVar10,fVar9);
    *param_6 = fVar6 * param_2;
    *param_7 = fVar6 * param_3;
  }
  return uVar4;
}



/* ===== 1804491b0 FUN_1804491b0 ===== */

ulonglong FUN_1804491b0(float *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = (float)*(undefined8 *)param_1;
  fVar11 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  fVar1 = param_1[2];
  fVar9 = fVar1 * fVar1 + fVar11 * fVar11 + fVar10 * fVar10;
  if (fVar9 < 0.0) {
    uVar4 = FUN_18051af10(fVar9);
  }
  else {
    uVar4 = (ulonglong)(uint)SQRT(fVar9);
  }
  fVar6 = (float)uVar4;
  if ((fVar6 < DAT_1808abf54) || (DAT_1808accfc < fVar6)) {
    uVar4 = 0;
    if (fVar9 == 0.0) {
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      *param_1 = 0.0;
    }
    else {
      dVar5 = (double)fVar10;
      dVar2 = (double)fVar11;
      dVar3 = (double)fVar1;
      dVar7 = dVar2 * dVar2 + dVar5 * dVar5 + dVar3 * dVar3;
      if (dVar7 < 0.0) {
        dVar7 = (double)FUN_18051ff20(dVar7);
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      dVar8 = DAT_1808ac500 / dVar7;
      *param_1 = (float)(dVar8 * dVar5);
      param_1[2] = (float)(dVar8 * dVar3);
      param_1[1] = (float)(dVar8 * dVar2);
      dVar5 = DAT_1808accc0;
      if (dVar7 <= DAT_1808accc0) {
        dVar5 = dVar7;
      }
      uVar4 = (ulonglong)(uint)(float)dVar5;
    }
  }
  else {
    fVar6 = DAT_1808ac34c / fVar6;
    param_1[2] = fVar1 * fVar6;
    *(ulonglong *)param_1 = CONCAT44(fVar11 * fVar6,fVar10 * fVar6);
  }
  return uVar4;
}



/* ===== 180449330 FUN_180449330 ===== */

void FUN_180449330(void)

{
  int iVar1;
  char **ppcVar2;
  char **ppcVar3;
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
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  ppcVar3 = &local_28;
  if ((DAT_180c873c0 == '\0') && (DAT_1811089f0 != 0)) {
    ppcVar2 = &local_108;
    local_108 = "C_BaseEntity";
    DAT_180c873c0 = '\x01';
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_fFlags");
      if (iVar1 != 0) goto LAB_1804493a3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_100);
    iVar1 = 0;
LAB_1804493a3:
    ppcVar2 = &local_100;
    local_100 = "C_BaseEntity";
    DAT_180c873c4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hGroundEntity");
      if (iVar1 != 0) goto LAB_1804493e3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_f8);
    iVar1 = 0;
LAB_1804493e3:
    ppcVar2 = &local_f8;
    local_f8 = "C_BaseEntity";
    DAT_180c873c8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iTeamNum");
      if (iVar1 != 0) goto LAB_180449423;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_f0);
    iVar1 = 0;
LAB_180449423:
    ppcVar2 = &local_f0;
    local_f0 = "C_BaseEntity";
    DAT_180c873cc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nActualMoveType");
      if (iVar1 != 0) goto LAB_180449463;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_e8);
    iVar1 = 0;
LAB_180449463:
    ppcVar2 = &local_e8;
    local_e8 = "C_BaseEntity";
    DAT_180c873d0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pCollision");
      if (iVar1 != 0) goto LAB_1804494a3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_e0);
    iVar1 = 0;
LAB_1804494a3:
    ppcVar2 = &local_e0;
    local_e0 = "C_BaseEntity";
    DAT_180c873d4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iEFlags");
      if (iVar1 != 0) goto LAB_1804494e3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_d8);
    iVar1 = 0;
LAB_1804494e3:
    ppcVar2 = &local_d8;
    local_d8 = "C_BaseEntity";
    DAT_180c873d8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hOwnerEntity");
      if (iVar1 != 0) goto LAB_180449523;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_d0);
    iVar1 = 0;
LAB_180449523:
    ppcVar2 = &local_d0;
    local_d0 = "C_BaseEntity";
    DAT_180c873dc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecAbsVelocity");
      if (iVar1 != 0) goto LAB_180449563;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_c8);
    iVar1 = 0;
LAB_180449563:
    ppcVar2 = &local_c8;
    local_c8 = "C_BaseEntity";
    DAT_180c873e0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pGameSceneNode");
      if (iVar1 != 0) goto LAB_1804495a3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_c0);
    iVar1 = 0;
LAB_1804495a3:
    ppcVar2 = &local_c0;
    local_c0 = "CGameSceneNode";
    DAT_180c8743c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecAbsOrigin");
      if (iVar1 != 0) goto LAB_1804495e3;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_b8);
    iVar1 = 0;
LAB_1804495e3:
    local_b8 = "CCollisionProperty";
    ppcVar2 = &local_b8;
    DAT_180c87440 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_collisionAttribute");
      if (iVar1 != 0) goto LAB_180449623;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_b0);
    iVar1 = 0;
LAB_180449623:
    ppcVar2 = &local_b0;
    local_b0 = "CCollisionProperty";
    DAT_180c873e4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecMins");
      if (iVar1 != 0) goto LAB_180449662;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_a8);
    iVar1 = 0;
LAB_180449662:
    ppcVar2 = &local_a8;
    local_a8 = "CCollisionProperty";
    DAT_180c873e8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecMaxs");
      if (iVar1 != 0) goto LAB_180449692;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_a0);
    iVar1 = 0;
LAB_180449692:
    ppcVar2 = &local_a0;
    local_a0 = "CCollisionProperty";
    DAT_180c873ec = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_usSolidFlags");
      if (iVar1 != 0) goto LAB_1804496c2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_98);
    iVar1 = 0;
LAB_1804496c2:
    local_98 = "VPhysicsCollisionAttribute_t";
    ppcVar2 = &local_98;
    DAT_180c873f0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nInteractsWith");
      if (iVar1 != 0) {
        DAT_180c873f4 = iVar1;
        break;
      }
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_90);
    local_90 = "VPhysicsCollisionAttribute_t";
    ppcVar2 = &local_90;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nHierarchyId");
      if (iVar1 != 0) {
        DAT_180c873f8 = iVar1;
        break;
      }
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_88);
    local_88 = "VPhysicsCollisionAttribute_t";
    ppcVar2 = &local_88;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nCollisionGroup");
      if (iVar1 != 0) {
        DAT_180c873fc = iVar1;
        break;
      }
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_80);
    local_80 = "C_CSWeaponBase";
    ppcVar2 = &local_80;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_weaponMode");
      if (iVar1 != 0) goto LAB_1804497a2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_78);
    iVar1 = 0;
LAB_1804497a2:
    ppcVar2 = &local_78;
    local_78 = "C_CSWeaponBaseGun";
    DAT_180c87400 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_zoomLevel");
      if (iVar1 != 0) goto LAB_1804497e2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_70);
    iVar1 = 0;
LAB_1804497e2:
    ppcVar2 = &local_70;
    local_70 = "C_CSWeaponBase";
    DAT_180c87404 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bInReload");
      if (iVar1 != 0) goto LAB_180449812;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_68);
    iVar1 = 0;
LAB_180449812:
    ppcVar2 = &local_68;
    local_68 = "C_BasePlayerWeapon";
    DAT_180c87408 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iClip1");
      if (iVar1 != 0) goto LAB_180449852;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_60);
    iVar1 = 0;
LAB_180449852:
    local_60 = "CCSWeaponBaseVData";
    ppcVar2 = &local_60;
    DAT_180c8740c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flMaxSpeed");
      if (iVar1 != 0) goto LAB_180449892;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_58);
    iVar1 = 0;
LAB_180449892:
    ppcVar2 = &local_58;
    local_58 = "CCSWeaponBaseVData";
    DAT_180c87410 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nZoomLevels");
      if (iVar1 != 0) goto LAB_1804498c2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_50);
    iVar1 = 0;
LAB_1804498c2:
    ppcVar2 = &local_50;
    local_50 = "CCSWeaponBaseVData";
    DAT_180c87414 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flAttackMovespeedFactor");
      if (iVar1 != 0) goto LAB_1804498f2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_48);
    iVar1 = 0;
LAB_1804498f2:
    ppcVar2 = &local_48;
    local_48 = "CCSWeaponBaseVData";
    DAT_180c87418 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flInaccuracyLand");
      if (iVar1 != 0) goto LAB_180449922;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_40);
    iVar1 = 0;
LAB_180449922:
    ppcVar2 = &local_40;
    local_40 = "CCSWeaponBaseVData";
    DAT_180c8741c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bIsFullAuto");
      if (iVar1 != 0) goto LAB_180449952;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_38);
    iVar1 = 0;
LAB_180449952:
    ppcVar2 = &local_38;
    local_38 = "CCSWeaponBaseVData";
    DAT_180c87420 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_bHasBurstMode");
      if (iVar1 != 0) goto LAB_180449982;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_30);
    iVar1 = 0;
LAB_180449982:
    ppcVar2 = &local_30;
    local_30 = "CCSWeaponBaseVData";
    DAT_180c87424 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_eSilencerType");
      if (iVar1 != 0) goto LAB_1804499b2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != ppcVar3);
    iVar1 = 0;
LAB_1804499b2:
    local_28 = "CBasePlayerWeaponVData";
    DAT_180c87428 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nSecondaryAmmoType");
      if (iVar1 != 0) goto LAB_1804499f2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_20);
    iVar1 = 0;
LAB_1804499f2:
    ppcVar3 = &local_20;
    local_20 = "CBasePlayerWeaponVData";
    DAT_180c8742c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bTreatAsSingleClip");
      if (iVar1 != 0) goto LAB_180449a22;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_18);
    iVar1 = 0;
LAB_180449a22:
    local_18 = "CBasePlayerWeaponVData";
    ppcVar3 = &local_18;
    DAT_180c87430 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bLinkedCooldowns");
      if (iVar1 != 0) goto LAB_180449a62;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_10);
    iVar1 = 0;
LAB_180449a62:
    local_10 = "CCSWeaponBaseVData";
    ppcVar3 = &local_10;
    DAT_180c87434 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flCycleTime");
      if (iVar1 != 0) goto LAB_180449aa2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != (char **)((longlong)register0x00000020 + -8));
    iVar1 = 0;
LAB_180449aa2:
    DAT_180c87438 = iVar1;
  }
  return;
}



/* ===== 180449ac0 FUN_180449ac0 ===== */

ulonglong FUN_180449ac0(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  uint uVar5;
  char local_28 [32];
  
  uVar4 = 0;
  if (param_1 != 0) {
    lVar3 = FUN_18000f3a0((ulonglong)DAT_180961970 + param_1);
    uVar4 = 0;
    if (lVar3 != 0) {
      lVar3 = FUN_18000f3a0((ulonglong)DAT_180961974 + lVar3);
      uVar4 = 0x7ffffffefffe;
      if (lVar3 - 0x10000U < 0x7ffffffeffff) {
        local_28[0] = '\0';
        local_28[1] = '\0';
        local_28[2] = '\0';
        local_28[3] = '\0';
        local_28[4] = '\0';
        local_28[5] = '\0';
        local_28[6] = '\0';
        local_28[7] = '\0';
        local_28[8] = '\0';
        local_28[9] = '\0';
        local_28[10] = '\0';
        local_28[0xb] = '\0';
        local_28[0xc] = '\0';
        local_28[0xd] = '\0';
        local_28[0xe] = '\0';
        local_28[0xf] = '\0';
        uVar4 = 0;
        local_28[0x10] = '\0';
        local_28[0x11] = '\0';
        local_28[0x12] = '\0';
        local_28[0x13] = '\0';
        local_28[0x14] = '\0';
        local_28[0x15] = '\0';
        local_28[0x16] = '\0';
        local_28[0x17] = '\0';
        local_28[0x18] = '\0';
        local_28[0x19] = '\0';
        local_28[0x1a] = '\0';
        local_28[0x1b] = '\0';
        local_28[0x1c] = '\0';
        local_28[0x1d] = '\0';
        local_28[0x1e] = '\0';
        local_28[0x1f] = '\0';
        do {
          cVar1 = FUN_180011220(uVar4 + lVar3);
          local_28[uVar4] = cVar1;
          if (cVar1 == '\0') break;
          uVar5 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar5;
        } while ((int)uVar5 < 0x1f);
        iVar2 = strcmp(local_28,param_2);
        return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 180449b80 FUN_180449b80 ===== */

undefined4 * FUN_180449b80(undefined4 *param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  longlong lVar6;
  undefined4 uVar7;
  char *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  if (DAT_180cd1bf9 == '\0') {
    DAT_180cd1bf9 = '\x01';
    pHVar4 = GetModuleHandleA("client.dll");
    if (pHVar4 != (HMODULE)0x0) {
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      pvVar5 = GetCurrentProcess();
      iVar3 = K32GetModuleInformation(pvVar5,pHVar4,&local_28,0x18);
      if (((iVar3 != 0) && (uStack_20 = uStack_20 & 0xffffffff, local_28 != 0)) && (uStack_20 != 0))
      {
        local_30 = 0x37;
        local_38 = "48 63 41 10 48 8B 0D ? ? ? ? 48 C1 E0 05 48 03 41 28 C3";
        DAT_181111d20 = (code *)FUN_1801d1e00(&local_28,&local_38);
        goto LAB_180449c4a;
      }
    }
    DAT_181111d20 = (code *)0x0;
  }
LAB_180449c4a:
  pcVar1 = DAT_181111d20;
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  *(undefined1 *)(param_1 + 2) = 0;
  if ((param_2 != 0) && (pcVar1 != (code *)0x0)) {
    lVar6 = (*pcVar1)(param_2);
    uVar7 = FUN_18000f3d0(lVar6);
    *param_1 = uVar7;
    uVar7 = FUN_18000f3d0(lVar6 + 4);
    param_1[1] = uVar7;
    cVar2 = FUN_180011220(lVar6 + 0x18);
    *(bool *)(param_1 + 2) = cVar2 != '\0';
  }
  return param_1;
}



/* ===== 180449cb0 FUN_180449cb0 ===== */

undefined8 * FUN_180449cb0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  return param_1;
}



/* ===== 180449dc0 FUN_180449dc0 ===== */

undefined8 FUN_180449dc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 local_38;
  undefined4 local_30;
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x38) != '\v') {
      return 1;
    }
    if ((DAT_180c873d4 != 0) &&
       (lVar3 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180c873d4), lVar3 != 0)) {
      uVar4 = (ulonglong)DAT_180c873e4;
      cVar2 = FUN_180011220((ulonglong)DAT_180c873fc + uVar4 + lVar3);
      if (cVar2 != '\x10') {
        plVar1 = *(longlong **)(param_1 + 0x58);
        if (plVar1 == (longlong *)0x0) {
          return 1;
        }
        uVar6 = *(ulonglong *)(*plVar1 + 0x98) & 0x180000000;
        if (uVar6 == 0) {
          return 1;
        }
        uVar4 = FUN_18000f3a0((ulonglong)DAT_180c873f4 + uVar4 + lVar3);
        if (uVar6 != (uVar4 & 0x180000000)) {
          return 1;
        }
        if (((DAT_180c8743c == 0) ||
            (lVar3 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180c8743c), lVar3 == 0)) ||
           (DAT_180c87440 == 0)) {
          local_38 = 0;
          local_30 = 0;
          uVar5 = FUN_18044a750(plVar1,param_2);
          return uVar5;
        }
        FUN_1800111b0(&local_38,lVar3 + (ulonglong)DAT_180c87440);
        uVar5 = FUN_18044a750(plVar1,param_2,local_30);
        return uVar5;
      }
    }
  }
  return 0;
}



/* ===== 180449f00 FUN_180449f00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180449f00(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_98;
  uStack_5c = 0;
  uStack_58 = 0;
  fStack_54 = 0.0;
  uStack_50 = 0;
  local_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if (((param_4[3] == *param_4) && (param_4[4] == param_4[1])) && (param_4[5] == param_4[2])) {
    local_68 = *(undefined8 *)param_4;
    fStack_60 = param_4[2];
    uStack_40 = 0;
  }
  else {
    local_68 = *(undefined8 *)param_4;
    fStack_60 = param_4[2];
    fStack_54 = param_4[5];
    uStack_5c = (undefined4)*(undefined8 *)(param_4 + 3);
    uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20);
    uStack_40 = 2;
  }
  if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) && (lVar1 = FUN_18000f3a0(), lVar1 != 0)) {
    local_78 = param_1 + 0xe0;
    local_70 = param_5;
    FUN_180271700(lVar1,&local_68,param_2,param_3);
  }
  return;
}



/* ===== 18044a020 FUN_18044a020 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044a020(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 *param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined4 local_120;
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
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_158;
  bVar3 = false;
  uVar1 = *(ulonglong *)(param_5 + 8);
  local_128 = param_4;
  if ((((uVar1 & 0x10) == 0) ||
      (bVar3 = (*(ulonglong *)(param_5 + 0x10) & 0x10) == 0,
      (*(ulonglong *)(param_5 + 0x10) & 0x10) != 0)) || (*(char *)(*param_1 + 0x28e) == '\0')) {
    if ((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) {
      lVar2 = FUN_18000f3a0();
      if (lVar2 != 0) {
        local_130 = param_6;
        local_138 = param_5;
        FUN_180271700(lVar2,param_2,param_3,local_128);
      }
    }
    if ((bVar3) && ((*(byte *)(param_6 + 5) & 0x10) != 0)) {
      *(undefined1 *)(*param_1 + 0x28e) = 1;
      *(undefined1 *)(*param_1 + 0x28f) = 1;
    }
  }
  else {
    FUN_180540170(&local_118,0,0xc0);
    uStack_e0 = _UNK_1808adae8;
    local_e8 = _DAT_1808adae0;
    *(undefined8 *)(param_5 + 8) = 0x10;
    local_d8 = local_e8;
    uStack_d0 = uStack_e0;
    uStack_64 = 0xffffffff;
    uStack_60 = 0xffff;
    fStack_6c = 1.0;
    if ((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) {
      lVar2 = FUN_18000f3a0();
      if (lVar2 != 0) {
        local_130 = &local_118;
        local_138 = param_5;
        FUN_180271700(lVar2,param_2,param_3,local_128);
      }
    }
    *(ulonglong *)(param_5 + 8) = uVar1 & 0xffffffffffffffef;
    local_120 = uStack_8c;
    if ((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) {
      lVar2 = FUN_18000f3a0();
      if (lVar2 != 0) {
        local_130 = param_6;
        local_138 = param_5;
        FUN_180271700(lVar2,param_2,param_3,&local_128);
      }
    }
    if (*(float *)((longlong)param_6 + 0xac) < DAT_1808ac34c) {
      *(float *)((longlong)param_6 + 0xac) = *(float *)((longlong)param_6 + 0xac) * fStack_6c;
    }
    else {
      *param_6 = local_118;
      param_6[1] = uStack_110;
      param_6[2] = local_108;
      param_6[3] = uStack_100;
      param_6[4] = local_f8;
      param_6[5] = uStack_f0;
      param_6[6] = local_e8;
      param_6[7] = uStack_e0;
      param_6[8] = local_d8;
      param_6[9] = uStack_d0;
      param_6[10] = local_c8;
      param_6[0xb] = uStack_c0;
      param_6[0xc] = local_b8;
      param_6[0xd] = uStack_b0;
      param_6[0xe] = local_a8;
      param_6[0xf] = uStack_a0;
      param_6[0x10] = CONCAT44(uStack_94,local_98);
      param_6[0x11] = CONCAT44(uStack_8c,uStack_90);
      param_6[0x12] = local_88;
      param_6[0x13] = uStack_80;
      param_6[0x14] = local_78;
      param_6[0x15] = CONCAT44(fStack_6c,uStack_70);
      param_6[0x16] = CONCAT44(uStack_64,local_68);
      param_6[0x17] = CONCAT62(uStack_5e,uStack_60);
    }
    if ((*(byte *)(param_6 + 5) & 0x10) != 0) {
      *(undefined1 *)(*param_1 + 0x28e) = 1;
      *(undefined1 *)(*param_1 + 0x28f) = 1;
    }
    *(ulonglong *)(param_5 + 8) = uVar1;
  }
  return;
}



/* ===== 18044a2b0 FUN_18044a2b0 ===== */

void FUN_18044a2b0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float local_54;
  undefined4 local_50;
  
  lVar1 = *param_1;
  if (param_2 == (undefined8 *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_2[1];
  }
  if (*(int *)(lVar1 + 0x6c) == -1) {
    fVar5 = *(float *)(lVar1 + 0x18);
    fVar6 = *(float *)(lVar1 + 0x1c);
    uVar2 = *(undefined4 *)(lVar1 + 0x20);
LAB_18044a3ef:
    if (lVar4 == 0) {
LAB_18044a46f:
      *(float *)(lVar1 + 0x18) = fVar5;
      *(float *)(lVar1 + 0x1c) = fVar6;
      *(undefined4 *)(lVar1 + 0x20) = uVar2;
      if (lVar4 == 0) goto LAB_18044a39a;
    }
    else {
      if (DAT_180c873e0 == 0) {
        local_50 = 0;
        local_58 = 0.0;
        local_54 = 0.0;
      }
      else {
        FUN_1800111b0(&local_58,lVar4 + (ulonglong)DAT_180c873e0);
      }
      *(undefined1 *)(*param_1 + 0x288) = 1;
      *(undefined4 *)(lVar1 + 0x284) = *(undefined4 *)(lVar1 + 0x15c);
      *(float *)(lVar1 + 0x18) = fVar5 - local_58;
      *(float *)(lVar1 + 0x1c) = fVar6 - local_54;
      *(undefined4 *)(lVar1 + 0x20) = local_50;
    }
    uVar2 = FUN_180432130(lVar4);
    *(uint *)(lVar1 + 0x68) = *(uint *)(lVar1 + 0x68) | 1;
    *(undefined4 *)(lVar1 + 0x6c) = uVar2;
    *(undefined8 *)(lVar1 + 0x1f8) = *param_2;
    fVar5 = (float)FUN_18000f3d0();
    fVar5 = fVar5 * DAT_1808ac3d4;
    *(undefined4 *)(lVar1 + 0x124) = 0;
    if (DAT_1808ac34c <= fVar5) {
      fVar5 = DAT_1808ac34c;
    }
    *(float *)(lVar1 + 0x1f0) = fVar5;
    if (1 < (byte)(*(char *)(lVar1 + 0x70) - 7U)) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
  }
  else {
    lVar3 = FUN_1804320a0();
    fVar5 = *(float *)(lVar1 + 0x18);
    fVar6 = *(float *)(lVar1 + 0x1c);
    if ((lVar3 == 0) || (lVar4 != 0)) {
      uVar2 = *(undefined4 *)(lVar1 + 0x20);
      if (lVar3 == 0) goto LAB_18044a3ef;
      goto LAB_18044a46f;
    }
    if (DAT_180c873e0 == 0) {
      local_50 = 0;
      local_58 = 0.0;
      local_54 = 0.0;
    }
    else {
      FUN_1800111b0(&local_58,lVar3 + (ulonglong)DAT_180c873e0);
    }
    *(undefined4 *)(lVar1 + 0x20) = local_50;
    *(float *)(lVar1 + 0x18) = local_58 + fVar5;
    *(float *)(lVar1 + 0x1c) = local_54 + fVar6;
LAB_18044a39a:
    *(uint *)(lVar1 + 0x68) = *(uint *)(lVar1 + 0x68) & 0xfffffffe;
    *(undefined4 *)(lVar1 + 0x6c) = 0xffffffff;
  }
  return;
}



/* ===== 18044a4e0 FUN_18044a4e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044a4e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_1d8 [32];
  undefined ***local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  undefined **local_188;
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
  undefined1 local_e8 [40];
  uint local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_3c;
  undefined4 local_34;
  undefined2 local_30;
  char local_2d;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  lVar1 = *param_1;
  if ((*(byte *)(lVar1 + 0x158) & 0x10) != 0) {
    return;
  }
  if (*(char *)(lVar1 + 0x200) == '\0') {
    local_190 = DAT_1808acad0;
  }
  else {
    local_190 = DAT_1808aca88;
  }
  local_1a0 = *(float *)(param_1 + 7);
  local_1a8 = (undefined4)param_1[6];
  local_1a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  local_190 = local_1a0 + local_190;
  local_198 = local_1a8;
  local_194 = local_1a4;
  FUN_180540170(local_e8,0,0xc0);
  fVar6 = DAT_1808ac34c;
  local_b8 = _DAT_1808adae0;
  uStack_b0 = _UNK_1808adae8;
  local_a8 = _DAT_1808adae0;
  uStack_a0 = _UNK_1808adae8;
  local_34 = 0xffffffff;
  local_30 = 0xffff;
  local_178 = 0;
  uStack_170 = 0;
  local_3c = 1.0;
  local_148 = 0;
  uStack_140 = 0;
  local_188 = &PTR_FUN_180c87398;
  local_138 = 0;
  uStack_130 = 0;
  local_158 = 0xf00ffff00000000;
  local_168 = _DAT_1808adf90;
  uStack_160 = _UNK_1808adf98;
  uStack_180 = 0x18000;
  uStack_150 = 0x4d05;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) && (lVar2 = FUN_18000f3a0(), lVar2 != 0)) {
    local_1b0 = local_e8;
    local_1b8 = &local_188;
    FUN_180271700(lVar2,&local_128,&local_198,&local_1a8);
  }
  if ((local_2d == '\0') && (fVar6 <= local_3c)) {
    *(undefined4 *)(lVar1 + 0x78) = 0;
    uVar3 = 0;
    goto LAB_18044a701;
  }
  local_3c = fVar6 - local_3c;
  if (0.0 <= local_3c) {
    if (local_3c <= fVar6) {
      fVar6 = local_3c;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      if (fVar6 <= DAT_1808ac530) goto LAB_18044a699;
      fVar5 = DAT_1808ac530;
    }
  }
  else {
    fVar6 = 0.0;
LAB_18044a699:
    fVar6 = (float)((double)((longlong)((double)(fVar6 - 0.0) * _DAT_1808ac6b8 + DAT_1808ac4a8) &
                            0xffffffff) * _DAT_1808ac2d8 * _DAT_1808ac538 + 0.0);
    fVar5 = DAT_1808ac530;
    if (fVar6 <= DAT_1808ac530) {
      fVar5 = fVar6;
    }
  }
  *(float *)(lVar1 + 0x78) = fVar5;
  uVar4 = (ulonglong)(local_c0 >> 0xf & 1);
  uVar3 = uVar4 | 2;
  if ((local_c0 & 0x10000) == 0) {
    uVar3 = uVar4;
  }
LAB_18044a701:
  *(ulonglong *)(lVar1 + 0x80) = uVar3;
  return;
}



/* ===== 18044a750 FUN_18044a750 ===== */

bool FUN_18044a750(longlong *param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar6;
  
  lVar1 = *param_1;
  if ((param_2 != *(longlong *)(lVar1 + 0x148)) &&
     ((((param_2 == 0 || (cVar2 = FUN_180011220((ulonglong)DAT_180c873d0 + param_2), cVar2 != '\t'))
       && (*(char *)(lVar1 + 0x70) != '\t')) && ((param_2 != 0 && (DAT_180c873d4 != 0)))))) {
    lVar4 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180c873d4);
    if (lVar4 != 0) {
      if ((*(int *)(lVar1 + 0x6c) == -1) || (lVar5 = FUN_1804320a0(), lVar5 != param_2)) {
        uVar3 = FUN_180011200((ulonglong)DAT_180c873c8 + param_2);
        lVar5 = FUN_1804320a0(uVar3);
        if (lVar5 != *(longlong *)(lVar1 + 0x148)) {
          if (*(char *)(lVar1 + 0x200) == '\0') {
            fVar6 = DAT_1808acad0;
          }
          else {
            fVar6 = DAT_1808aca88;
          }
          FUN_18000f3d0((ulonglong)DAT_180c873e8 + 8 + lVar4);
          if (extraout_XMM0_Da + param_3 <= fVar6 + *(float *)(lVar1 + 8)) {
            FUN_18000f3d0((ulonglong)DAT_180c873ec + 8 + lVar4);
            return extraout_XMM0_Da_00 + param_3 < *(float *)(lVar1 + 8);
          }
        }
      }
      return true;
    }
  }
  return false;
}



/* ===== 18044a890 FUN_18044a890 ===== */

bool FUN_18044a890(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    return false;
  }
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x158) & 1) != 0) {
    return *(float *)(lVar2 + 0x300) <= *(float *)(param_2 + 0x98);
  }
  lVar6 = FUN_18000f3a0(lVar1 + 0x10);
  if (lVar6 != 0) {
    lVar6 = FUN_18000f3a0(lVar6 + 8);
    iVar7 = 0;
    if (lVar6 != 0) {
      lVar8 = DAT_181111d08;
      do {
        if (0x1f < iVar7) break;
        if (lVar8 == 0) {
          cVar9 = FUN_180449ac0(lVar6,"C_CSPlayerPawnBase");
          lVar8 = DAT_181111d08;
        }
        else {
          cVar9 = lVar6 == lVar8;
        }
        if (cVar9 != '\0') {
          DAT_181111d08 = lVar6;
          uVar5 = FUN_180011200((ulonglong)DAT_180c873c8 + lVar1);
          lVar6 = FUN_1804320a0(uVar5);
          if (lVar6 == *(longlong *)(lVar2 + 0x148)) {
            return false;
          }
          if ((*(longlong *)(lVar2 + 0x148) != lVar1) &&
             ((bVar3 = FUN_180011220((ulonglong)DAT_180c873cc + lVar1),
              *(uint *)(lVar2 + 0x74) != (uint)bVar3 || (*(char *)(lVar2 + 0x174) == '\0')))) {
            return true;
          }
          if (*(int *)(lVar2 + 0x340) == 0) {
            return false;
          }
          uVar4 = FUN_18044a750(param_1,lVar1,*(undefined4 *)(param_2 + 0x8c));
          return (bool)uVar4;
        }
        lVar6 = FUN_18000f3a0(lVar6 + 0x60);
        if (lVar6 == 0) break;
        lVar6 = FUN_18000f3a0(lVar6 + 0x18);
        iVar7 = iVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  return *(float *)(lVar2 + 0x300) <= *(float *)(param_2 + 0x98);
}



/* ===== 18044aa20 FUN_18044aa20 ===== */

longlong FUN_18044aa20(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong local_res8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  
  lVar1 = *param_1;
  if ((*(byte *)(lVar1 + 0x158) & 1) != 0) {
    return 0;
  }
  plVar6 = (longlong *)FUN_1800ad890(&local_res8);
  if (0.0 <= DAT_1809f9e88) {
    plVar9 = DAT_181111d30;
    plVar3 = DAT_181111d38;
    puVar12 = auStack_58;
    if ((double)*plVar6 / DAT_1808ac9a0 - DAT_1809f9e88 < DAT_1808ac2f8)
    goto joined_r0x00018044abc0;
  }
  if (DAT_181111d30 != DAT_181111d38) {
    DAT_181111d38 = DAT_181111d30;
  }
  DAT_1809f9e88 = (double)*plVar6 / DAT_1808ac9a0;
  FUN_1803a09f0(&local_38);
  puVar10 = auStack_58;
  puVar11 = auStack_58;
  plVar6 = local_38;
  if (local_38 != local_30) {
    do {
      lVar8 = *plVar6;
      local_res8 = lVar8;
      if (((lVar8 != 0) && (lVar7 = FUN_18000f3a0(lVar8 + 0x10), lVar7 != 0)) &&
         (lVar7 = FUN_18000f3a0(lVar7 + 8), lVar7 != 0)) {
        if (DAT_181111d28 == 0) {
          cVar4 = FUN_180449ac0(lVar7,"C_CSPlayerPawn");
          if (cVar4 != '\0') {
            DAT_181111d28 = lVar7;
            goto LAB_18044ab29;
          }
        }
        else if (lVar7 == DAT_181111d28) {
LAB_18044ab29:
          lVar8 = FUN_18000f3a0(lVar8 + 0x10);
          if ((lVar8 != 0) && (cVar4 = FUN_180011220(lVar8 + 0x30), -1 < cVar4)) {
            FUN_1800242d0(&DAT_181111d30,&local_res8);
          }
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_30);
  }
  plVar9 = DAT_181111d30;
  plVar3 = DAT_181111d38;
  puVar12 = auStack_58;
  if (local_38 == (longlong *)0x0) goto joined_r0x00018044abc0;
  plVar6 = local_38;
  if ((ulonglong)((local_28 - (longlong)local_38 >> 3) * 8) < 0x1000) {
LAB_18044aba7:
    puVar11 = puVar10;
  }
  else {
    plVar6 = (longlong *)local_38[-1];
    plVar9 = (longlong *)((longlong)local_38 + (-8 - (longlong)plVar6));
    if (&DAT_0000001f < plVar9) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar10 = auStack_50;
      plVar6 = plVar9;
      goto LAB_18044aba7;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x18044abaf;
  thunk_FUN_1803d64e0(plVar6);
  plVar9 = DAT_181111d30;
  plVar3 = DAT_181111d38;
  puVar12 = puVar11;
joined_r0x00018044abc0:
  while( true ) {
    plVar6 = DAT_181111d38;
    if (plVar9 == DAT_181111d38) {
      DAT_181111d38 = plVar3;
      return 0;
    }
    lVar8 = *plVar9;
    DAT_181111d38 = plVar3;
    if (lVar8 == 0) {
      uVar5 = 0;
    }
    else {
      *(undefined8 *)(puVar12 + -8) = 0x18044abdc;
      uVar5 = FUN_180011200((ulonglong)DAT_180c873c8 + lVar8);
    }
    *(undefined8 *)(puVar12 + -8) = 0x18044abe3;
    lVar7 = FUN_1804320a0(uVar5);
    if (lVar7 == *(longlong *)(lVar1 + 0x148)) break;
    plVar9 = plVar9 + 1;
    plVar3 = DAT_181111d38;
    DAT_181111d38 = plVar6;
  }
  return lVar8;
}



/* ===== 18044ac10 FUN_18044ac10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044ac10(longlong *param_1,char param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined1 *local_280;
  undefined4 local_278;
  undefined4 local_274;
  float local_270;
  undefined4 local_268;
  undefined4 local_264;
  float local_260;
  undefined4 local_258;
  undefined4 local_254;
  float local_250;
  undefined8 local_248;
  undefined1 auStack_240 [8];
  float local_238 [8];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_17f;
  undefined8 local_177;
  undefined4 local_16f;
  undefined2 local_16b;
  undefined1 local_169;
  undefined1 local_168 [8];
  longlong local_160;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d0;
  float local_bc;
  undefined4 local_b4;
  undefined2 local_b0;
  char local_ad;
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_2a8;
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x1f0) = 0x3f800000;
  FUN_18044a4e0();
  if (1 < (byte)(*(char *)(lVar2 + 0x70) - 7U)) {
    lVar6 = FUN_1804320a0(*(undefined4 *)(lVar2 + 0x6c));
    fVar4 = DAT_1808acb30;
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    local_270 = *(float *)(param_1 + 7) - DAT_1808ac540;
    local_278 = (undefined4)param_1[6];
    local_274 = *(undefined4 *)((longlong)param_1 + 0x34);
    bVar7 = DAT_1808acb30 < fVar1;
    if ((lVar6 != 0) && (bVar7)) {
      if (DAT_180c873e0 == 0) {
        fVar10 = 0.0;
      }
      else {
        FUN_1800111b0(&local_268,lVar6 + (ulonglong)DAT_180c873e0);
        fVar10 = local_260;
      }
      bVar7 = fVar4 < fVar1 - fVar10;
    }
    fVar4 = DAT_1808ac34c;
    if ((param_2 == '\0') &&
       (((*(char *)(lVar2 + 0x70) != '\x02' || (lVar6 == 0)) ||
        (*(float *)(lVar2 + 0x78) == DAT_1808ac34c)))) {
      bVar3 = false;
    }
    else {
      local_270 = local_270 - *(float *)(lVar2 + 0x2f0);
      bVar3 = true;
    }
    *(bool *)(*param_1 + 0x289) = bVar7;
    if ((bVar7 == false) && ((*(char *)(lVar2 + 0x70) != '\t' || (fVar1 <= DAT_1808ac01c)))) {
      FUN_180540170(local_168,0,0xc0);
      local_254 = *(undefined4 *)((longlong)param_1 + 0x34);
      local_138 = _DAT_1808adae0;
      uStack_130 = _UNK_1808adae8;
      local_128 = _DAT_1808adae0;
      uStack_120 = _UNK_1808adae8;
      local_258 = (undefined4)param_1[6];
      local_250 = *(float *)(param_1 + 7) + DAT_1808ac710;
      local_bc = 1.0;
      local_b4 = 0xffffffff;
      local_b0 = 0xffff;
      if (*(char *)(lVar2 + 0x200) == '\0') {
        local_194 = DAT_1808acabc;
      }
      else {
        local_194 = DAT_1808aca80;
      }
      local_280 = local_168;
      uVar9 = 0;
      local_190 = 0;
      local_188 = 0;
      local_17f = 0;
      local_177 = 0;
      local_16f = 0;
      local_16b = 0;
      local_169 = 0;
      local_1a8 = _DAT_1808addc0;
      uStack_1a0 = _UNK_1808addc8;
      local_198 = 0x41800000;
      local_180 = 2;
      local_288 = param_1 + 0x1c;
      FUN_18044a020(param_1,&local_1a8,&local_258,&local_278);
      cVar5 = FUN_18044a890(param_1,local_168);
      fVar1 = local_bc;
      if (cVar5 != '\0') {
LAB_18044b091:
        FUN_18044a2b0(param_1,local_168);
        if (!bVar3) {
          return;
        }
        if (local_ad != '\0') {
          return;
        }
        if (local_bc <= 0.0) {
          return;
        }
        if (fVar4 <= local_bc) {
          return;
        }
        *(undefined4 *)(param_1 + 6) = local_e4;
        *(undefined4 *)((longlong)param_1 + 0x34) = local_e0;
        *(undefined4 *)(param_1 + 7) = local_dc;
        return;
      }
      if ((local_ad != '\0') || (local_bc < fVar4)) {
        if (*(char *)(lVar2 + 0x200) == '\0') {
          local_238[1] = (float)DAT_1808acad0;
        }
        else {
          local_238[1] = (float)DAT_1808aca88;
        }
        local_248 = _DAT_1808ad370;
        auStack_240 = (undefined1  [8])_UNK_1808ad378;
        local_218 = _DAT_1808ad2e0;
        uStack_210 = _UNK_1808ad2e8;
        local_268 = (undefined4)param_1[6];
        local_260 = *(float *)(param_1 + 7);
        local_238[7] = local_238[1];
        local_204 = local_238[1];
        local_1ec = local_238[1];
        local_264 = *(undefined4 *)((longlong)param_1 + 0x34);
        local_238[0] = 0.0;
        local_238[2] = 0.0;
        local_238[3] = 0.0;
        local_238[4] = 0.0;
        local_238[5] = 16.0;
        local_238[6] = 16.0;
        local_208 = 0x41800000;
        local_200 = 0;
        local_1fc = 0xc1800000;
        local_1f8 = 0;
        local_1f4 = 0x41800000;
        do {
          local_1e8 = 0;
          uStack_1e0 = 0;
          uStack_1dc = 0;
          uStack_1d8 = 0;
          fStack_1d4 = 0.0;
          uStack_1d0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1b8 = 0;
          uStack_1b0 = 0;
          if (((*(float *)(auStack_240 + uVar9 * 0x18 + 4) ==
                *(float *)(auStack_240 + uVar9 * 0x18 + -8)) &&
              (local_238[uVar9 * 6] == *(float *)(auStack_240 + uVar9 * 0x18 + -4))) &&
             (local_238[uVar9 * 6 + 1] == *(float *)(auStack_240 + uVar9 * 0x18))) {
            local_1e8 = *(undefined8 *)(auStack_240 + uVar9 * 0x18 + -8);
            uStack_1e0 = *(undefined4 *)(auStack_240 + uVar9 * 0x18);
            uStack_1c0 = 0;
          }
          else {
            local_1e8 = *(undefined8 *)(auStack_240 + uVar9 * 0x18 + -8);
            uStack_1e0 = *(undefined4 *)(auStack_240 + uVar9 * 0x18);
            fStack_1d4 = local_238[uVar9 * 6 + 1];
            uStack_1dc = (undefined4)*(undefined8 *)(auStack_240 + uVar9 * 0x18 + 4);
            uStack_1d8 = (undefined4)
                         ((ulonglong)*(undefined8 *)(auStack_240 + uVar9 * 0x18 + 4) >> 0x20);
            uStack_1c0 = 2;
          }
          local_280 = local_168;
          local_288 = param_1 + 0x1c;
          FUN_18044a020(param_1,&local_1e8,&local_268,&local_278);
        } while (((((int)uVar9 == 3) || (local_160 == 0)) || (local_d0 < *(float *)(lVar2 + 0x300)))
                && (uVar8 = (int)uVar9 + 1, uVar9 = (ulonglong)uVar8, (int)uVar8 < 4));
        local_bc = fVar1;
        cVar5 = FUN_18044a890(param_1,local_168);
        if (cVar5 != '\0') goto LAB_18044b091;
      }
      FUN_18044a2b0(param_1,0);
      if (*(float *)((longlong)param_1 + 0x44) <= 0.0) {
        return;
      }
      *(undefined4 *)(lVar2 + 0x1f0) = 0x3e800000;
      return;
    }
  }
  FUN_18044a2b0(param_1,0);
  return;
}



/* ===== 18044b130 FUN_18044b130 ===== */

void FUN_18044b130(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(&DAT_1806cc1e0 +
                   (-(uint)((*(ulonglong *)(param_1 + 0x188) & param_2) != 0) & 0x20 |
                    -(uint)((*(ulonglong *)(param_1 + 0x180) & param_2) != 0) & 0x10 |
                   -(uint)((*(ulonglong *)(param_1 + 0x178) & param_2) != 0) & 8));
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar2 = param_2;
  }
  uVar3 = ~param_2;
  *(ulonglong *)(param_1 + 0x178) = uVar2 | *(ulonglong *)(param_1 + 0x178) & uVar3;
  uVar2 = 0;
  if ((uVar1 & 2) != 0) {
    uVar2 = param_2;
  }
  *(ulonglong *)(param_1 + 0x180) = uVar2 | *(ulonglong *)(param_1 + 0x180) & uVar3;
  uVar2 = 0;
  if ((uVar1 & 4) != 0) {
    uVar2 = param_2;
  }
  *(ulonglong *)(param_1 + 0x188) = uVar2 | *(ulonglong *)(param_1 + 0x188) & uVar3;
  return;
}



/* ===== 18044b1f0 FUN_18044b1f0 ===== */

void FUN_18044b1f0(longlong *param_1,ulonglong *param_2,ulonglong param_3,byte param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 0x188);
  uVar6 = *(ulonglong *)(lVar2 + 0x180);
  uVar5 = *(ulonglong *)(lVar2 + 0x178);
  uVar7 = uVar3 & param_3;
  uVar10 = uVar6 & param_3;
  uVar9 = uVar5 & param_3;
  if ((param_3 & *param_2) != 0) {
    uVar8 = ~param_3;
    uVar1 = *(uint *)(&DAT_1806cc280 +
                     (ulonglong)
                     ((-(uint)(uVar9 != 0) & 2 | -(uint)(uVar7 != 0) & 8 | -(uint)(uVar10 != 0) & 4)
                     + (uint)param_4) * 4);
    uVar7 = 0;
    if ((uVar1 & 1) != 0) {
      uVar7 = param_3;
    }
    uVar7 = uVar7 | uVar5 & uVar8;
    *(ulonglong *)(lVar2 + 0x178) = uVar7;
    uVar5 = 0;
    if ((uVar1 & 2) != 0) {
      uVar5 = param_3;
    }
    *(ulonglong *)(lVar2 + 0x180) = uVar5 | uVar6 & uVar8;
    uVar6 = 0;
    if ((uVar1 & 4) != 0) {
      uVar6 = param_3;
    }
    *(ulonglong *)(lVar2 + 0x1a0) = uVar7 & *(ulonglong *)(lVar2 + 0x118);
    *(ulonglong *)(lVar2 + 0x1a8) = *(ulonglong *)(lVar2 + 0x1a8) & uVar8;
    *(ulonglong *)(lVar2 + 0x188) = uVar6 | uVar3 & uVar8;
    return;
  }
  *param_2 = *param_2 | param_3;
  if ((param_3 & *(ulonglong *)(lVar2 + 0x118)) != 0) {
    if ((param_4 == 0) && ((uVar9 != 0) != 0)) {
      iVar4 = 8;
    }
    else {
      iVar4 = 0;
    }
    uVar8 = ~param_3;
    uVar1 = *(uint *)(&DAT_1806cc160 +
                     (ulonglong)
                     (iVar4 + (-(uint)(uVar7 != 0) & 4 | -(uint)(uVar10 != 0) & 2 |
                              (uint)(uVar9 != 0))) * 4);
    uVar7 = 0;
    if ((uVar1 & 1) != 0) {
      uVar7 = param_3;
    }
    *(ulonglong *)(lVar2 + 0x178) = uVar7 | uVar5 & uVar8;
    uVar5 = 0;
    if ((uVar1 & 2) != 0) {
      uVar5 = param_3;
    }
    *(ulonglong *)(lVar2 + 0x180) = uVar5 | uVar6 & uVar8;
    uVar6 = 0;
    if ((uVar1 & 4) != 0) {
      uVar6 = param_3;
    }
    *(ulonglong *)(lVar2 + 0x1a8) = *(ulonglong *)(lVar2 + 0x1a8) & uVar8;
    *(ulonglong *)(lVar2 + 0x188) = uVar6 | uVar3 & uVar8;
    return;
  }
  if ((char)param_1[0x28] == '\0') {
    *(ulonglong *)(lVar2 + 0x198) = *(ulonglong *)(lVar2 + 0x198) | param_3;
    if (param_4 == 0) {
      *(ulonglong *)(lVar2 + 400) = ~param_3 & *(ulonglong *)(lVar2 + 400);
    }
    else {
      *(ulonglong *)(lVar2 + 400) = *(ulonglong *)(lVar2 + 400) | param_3;
    }
  }
  else {
    uVar8 = ~param_3;
    uVar1 = *(uint *)(&DAT_1806cc1e0 +
                     (ulonglong)
                     ((-(uint)(uVar9 != 0) & 2 | -(uint)(uVar7 != 0) & 8 | -(uint)(uVar10 != 0) & 4)
                     + (uint)param_4) * 4);
    uVar7 = 0;
    if ((uVar1 & 1) != 0) {
      uVar7 = param_3;
    }
    uVar7 = uVar7 | uVar5 & uVar8;
    *(ulonglong *)(lVar2 + 0x178) = uVar7;
    uVar5 = 0;
    if ((uVar1 & 2) != 0) {
      uVar5 = param_3;
    }
    *(ulonglong *)(lVar2 + 0x180) = uVar5 | uVar6 & uVar8;
    uVar6 = 0;
    if ((uVar1 & 4) != 0) {
      uVar6 = param_3;
    }
    *(ulonglong *)(lVar2 + 0x188) = uVar6 | uVar3 & uVar8;
    *(ulonglong *)(lVar2 + 0x1a0) = uVar7 & *(ulonglong *)(lVar2 + 0x118);
    if (param_4 == 0) {
      *(ulonglong *)(lVar2 + 0x198) = *(ulonglong *)(lVar2 + 0x198) | param_3;
      *(ulonglong *)(lVar2 + 400) = *(ulonglong *)(lVar2 + 400) & uVar8;
    }
  }
  *(ulonglong *)(lVar2 + 0x1a8) = *(ulonglong *)(lVar2 + 0x1a8) & ~param_3;
  return;
}



/* ===== 18044b4a0 FUN_18044b4a0 ===== */

void FUN_18044b4a0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 0x178);
  uVar7 = (uint)*(ulonglong *)(lVar1 + 0x188) & 2;
  uVar6 = (uint)*(ulonglong *)(lVar1 + 0x180) & 2;
  uVar4 = (uint)(uVar2 >> 1) & 1;
  if (2 < (uVar7 * 2 | uVar6 | uVar4)) {
    if ((char)param_1[0x28] == '\0') {
      *(ulonglong *)(lVar1 + 0x198) = *(ulonglong *)(lVar1 + 0x198) | 2;
      if ((uVar2 & 2) == 0) {
        uVar2 = *(ulonglong *)(lVar1 + 400) & 0xfffffffffffffffd;
      }
      else {
        uVar2 = *(ulonglong *)(lVar1 + 400) | 2;
      }
      *(ulonglong *)(lVar1 + 400) = uVar2;
    }
    else {
      uVar4 = *(uint *)(&DAT_1806cc1e0 +
                       ((ulonglong)uVar4 +
                       ((ulonglong)uVar7 * 2 | (ulonglong)uVar6 | (ulonglong)uVar4) * 2) * 4);
      uVar5 = (ulonglong)uVar4;
      *(ulonglong *)(lVar1 + 0x180) =
           (*(ulonglong *)(lVar1 + 0x180) ^ uVar5) & 0xfffffffffffffffd ^ uVar5;
      uVar3 = (ulonglong)(uVar4 >> 1);
      uVar5 = (uVar5 * 2 ^ uVar2) & 0xfffffffffffffffd ^ uVar5 * 2;
      *(ulonglong *)(lVar1 + 0x178) = uVar5;
      *(ulonglong *)(lVar1 + 0x188) =
           (*(ulonglong *)(lVar1 + 0x188) ^ uVar3) & 0xfffffffffffffffd ^ uVar3;
      *(ulonglong *)(lVar1 + 0x1a0) = *(ulonglong *)(lVar1 + 0x118) & uVar5;
      if ((uVar2 & 2) == 0) {
        *(ulonglong *)(lVar1 + 400) = *(ulonglong *)(lVar1 + 400) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar1 + 0x198) = *(ulonglong *)(lVar1 + 0x198) | 2;
        *(ulonglong *)(lVar1 + 0x1a8) = *(ulonglong *)(lVar1 + 0x1a8) & 0xfffffffffffffffd;
        return;
      }
    }
    *(ulonglong *)(lVar1 + 0x1a8) = *(ulonglong *)(lVar1 + 0x1a8) & 0xfffffffffffffffd;
  }
  return;
}



/* ===== 18044b5c0 FUN_18044b5c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044b5c0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  ulonglong *puVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_a8 [32];
  float local_88;
  undefined1 local_80 [16];
  ulonglong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58 [8];
  
  local_58[0] = DAT_180919500 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 0x178);
  bVar13 = (uVar2 & 4) != 0;
  if ((bool)*(char *)(lVar1 + 0x202) != bVar13) {
    fVar14 = *(float *)(lVar1 + 0x208) - DAT_1808ac540;
    *(bool *)(lVar1 + 0x202) = bVar13;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    *(float *)(lVar1 + 0x208) = fVar14;
  }
  if (((((uVar2 & 4) == 0) && (*(byte *)(lVar1 + 0x201) == ((byte)uVar2 & 4))) &&
      ((uVar2 >> 0x10 & 1) != 0)) && ((*(byte *)(lVar1 + 0x68) & 2) == 0)) {
    fVar18 = *(float *)(param_1 + 2) * DAT_1808ac200;
    fVar14 = *(float *)(lVar1 + 0x14) * *(float *)(lVar1 + 0x14) +
             *(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x10) +
             *(float *)(lVar1 + 0xc) * *(float *)(lVar1 + 0xc);
    if (fVar14 < 0.0) {
      fVar14 = (float)FUN_18051af10();
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    if (fVar14 < fVar18 + DAT_1808ac988) {
      *(undefined1 *)(lVar1 + 0x72) = 1;
      *(float *)(param_1 + 2) = fVar18;
    }
  }
  else {
    *(undefined1 *)(lVar1 + 0x72) = 0;
  }
  fVar14 = DAT_1808ac34c;
  pbVar11 = (byte *)(lVar1 + 0x68);
  if (1 < (byte)(*(char *)(lVar1 + 0x70) - 7U)) {
    if (*(longlong *)(lVar1 + 0x1f8) == 0) {
      fVar18 = DAT_1808ac34c;
    }
    else {
      pfVar8 = (float *)FUN_180449b80(local_80);
      fVar18 = *pfVar8;
    }
    if ((*pbVar11 & 1) != 0) {
      fVar18 = fVar18 * *(float *)(lVar1 + 0x88);
    }
    lVar9 = *(longlong *)(lVar1 + 0x7a8);
    if (((lVar9 != 0) && ((*(byte *)(lVar1 + 0x178) & 1) != 0)) &&
       ((cVar5 = FUN_180011220((ulonglong)DAT_180c87408 + lVar9), cVar5 == '\0' &&
        ((iVar6 = FUN_180011200((ulonglong)DAT_180c8740c + lVar9), iVar6 != 0 &&
         (DAT_180c87418 != 0)))))) {
      fVar15 = (float)FUN_18000f3d0((ulonglong)DAT_180c87418 + *(longlong *)(lVar1 + 0x7b0));
      fVar18 = fVar18 * fVar15;
    }
    fVar15 = *(float *)(param_1 + 2);
    *(float *)(param_1 + 2) = fVar18 * fVar15;
    if (0.0 < *(float *)(lVar1 + 0x218)) {
      fVar17 = fVar14 - *(float *)(lVar1 + 0x218) / DAT_1808acb08;
      if (0.0 <= fVar17) {
        fVar16 = fVar14;
        if (fVar17 <= fVar14) {
          fVar16 = fVar17;
        }
      }
      else {
        fVar16 = 0.0;
      }
      *(float *)(param_1 + 2) = fVar16 * fVar16 * fVar18 * fVar15;
    }
    if ((*(char *)(lVar1 + 0x2cc) == '\0') && ((*pbVar11 & 1) != 0)) {
      fVar18 = *(float *)(param_1 + 0xd);
      iVar6 = *(int *)((longlong)param_1 + 100);
      if ((fVar18 < 0.0) || (fVar14 <= fVar18)) {
        local_88 = 0.0;
        fVar18 = (float)FUN_180512fd0();
        fVar15 = local_88;
        if (fVar18 < 0.0) {
          fVar18 = fVar18 + fVar14;
          if (fVar18 < fVar14) {
            fVar15 = local_88 + DAT_1808acda0;
          }
          else {
            fVar18 = 0.0;
          }
        }
        iVar6 = iVar6 + (int)fVar15;
      }
      fVar15 = *(float *)(lVar1 + 0x280) * _DAT_1808abfb4 + fVar14;
      if (fVar15 <= fVar14) {
        fVar17 = DAT_1808ac118;
        if (DAT_1808ac118 <= fVar15) {
          fVar17 = fVar15;
        }
      }
      else {
        fVar17 = fVar14;
      }
      fVar18 = fVar18 - *(float *)(lVar1 + 0x274);
      if ((0.0 <= fVar18) || (iVar7 = -1, fVar14 <= fVar18 + fVar14)) {
        iVar7 = 0;
      }
      fVar18 = (float)(iVar7 + (iVar6 - *(int *)(lVar1 + 0x270))) * DAT_1808ac00c * _DAT_1808ac398 +
               fVar17 * fVar17;
      if (fVar18 <= fVar14) {
        fVar14 = fVar18;
      }
      *(float *)(param_1 + 2) = fVar14 * *(float *)(param_1 + 2);
    }
  }
  if ((*pbVar11 & 0x20) != 0) {
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (((*(char *)(lVar1 + 0x70) != '\t') && (*(int *)(lVar1 + 0x6c) != -1)) &&
     (lVar9 = FUN_1804320a0(), lVar9 != 0)) {
    iVar6 = 0;
    while ((lVar10 = FUN_18000f3a0(lVar9 + 0x10), lVar10 != 0 &&
           (lVar10 = FUN_18000f3a0(lVar10 + 8), lVar10 != 0))) {
      if (DAT_181111d28 == 0) {
        cVar5 = FUN_180449ac0(lVar10,"C_CSPlayerPawn");
        if (cVar5 == '\0') break;
        DAT_181111d28 = lVar10;
      }
      else if (lVar10 != DAT_181111d28) break;
      if (2 < iVar6) goto LAB_18044b961;
      iVar6 = iVar6 + 1;
      iVar7 = FUN_180011200((ulonglong)DAT_180c873c8 + lVar9);
      if ((iVar7 == -1) || (lVar9 = FUN_1804320a0(iVar7), lVar9 == 0)) break;
    }
    if (1 < iVar6) {
LAB_18044b961:
      fVar14 = *(float *)(param_1 + 2) * DAT_1808ac658;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      *(float *)(param_1 + 3) = fVar14;
      uVar2 = *(ulonglong *)(lVar1 + 400);
      uVar3 = *(ulonglong *)(lVar1 + 0x198);
      uVar4 = *(ulonglong *)(lVar1 + 0x1a8);
      if ((char)param_1[0x28] != '\0') {
        puVar12 = &local_70;
        local_70 = _DAT_1808ad720;
        uStack_68 = _UNK_1808ad728;
        local_60 = 1;
        local_5c = 2;
        do {
          FUN_18044b130(lVar1,1L << ((byte)*puVar12 & 0x3f));
          puVar12 = (ulonglong *)((longlong)puVar12 + 4);
          *(ulonglong *)(lVar1 + 0x1a0) =
               *(ulonglong *)(lVar1 + 0x178) & *(ulonglong *)(lVar1 + 0x118);
        } while (puVar12 != local_58);
      }
      *(ulonglong *)(lVar1 + 0x198) = uVar3 | 0x61e;
      *(ulonglong *)(lVar1 + 0x1a8) = uVar4 & 0xfffffffffffff9e1;
      *(ulonglong *)(lVar1 + 400) = uVar2 & 0xfffffffffffff9e1;
    }
  }
  fVar14 = *(float *)(param_1 + 2);
  *(float *)(param_1 + 4) = fVar14 * *(float *)(param_1 + 4);
  param_1[3] = CONCAT44((float)((ulonglong)param_1[3] >> 0x20) * fVar14,(float)param_1[3] * fVar14);
  return;
}



/* ===== 18044ba80 FUN_18044ba80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044ba80(longlong *param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_318 [32];
  longlong *local_2f8;
  longlong *local_2f0;
  float local_2e8;
  float fStack_2e4;
  float local_2e0;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  float fStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  float fStack_284;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong local_258 [5];
  byte local_22f;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1ac;
  undefined4 local_1a4;
  undefined2 local_1a0;
  char local_19d;
  longlong local_198;
  longlong local_190;
  ulonglong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_114;
  float local_110;
  float local_10c;
  float local_100;
  float local_ec;
  undefined4 local_e4;
  undefined2 local_e0;
  char local_dd;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_318;
  lVar4 = *param_1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0.0 < *(float *)(lVar4 + 0x218)) {
    fVar20 = *(float *)(lVar4 + 0x218) - *(float *)(lVar4 + 0x2dc) * *(float *)(lVar4 + 0x160);
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *(float *)(lVar4 + 0x218) = fVar20;
  }
  fVar21 = *(float *)((longlong)param_1 + 0x54) * DAT_1808ac014;
  fVar22 = *(float *)(param_1 + 0xb) * DAT_1808ac014;
  fVar23 = *(float *)((longlong)param_1 + 0x5c) * DAT_1808ac014;
  fVar20 = (float)FUN_180517790(fVar21);
  fVar21 = (float)FUN_180517200(fVar21);
  fVar18 = (float)FUN_180517790(fVar22);
  fVar22 = (float)FUN_180517200(fVar22);
  fVar19 = (float)FUN_180517790(fVar23);
  fVar23 = (float)FUN_180517200(fVar23);
  uVar9 = DAT_1808adec0;
  *(float *)(param_1 + 0x29) = fVar18 * fVar21;
  *(float *)((longlong)param_1 + 0x144) = fVar22 * fVar21;
  *(uint *)((longlong)param_1 + 0x14c) = (uint)fVar20 ^ uVar9;
  *(float *)(param_1 + 0x2a) = fVar19 * fVar20 * fVar22 - fVar23 * fVar18;
  *(float *)((longlong)param_1 + 0x154) = fVar19 * fVar20 * fVar18 + fVar23 * fVar22;
  *(float *)(param_1 + 0x2b) = fVar19 * fVar21;
  *(float *)((longlong)param_1 + 0x164) = fVar23 * fVar21;
  *(float *)((longlong)param_1 + 0x15c) = fVar23 * fVar20 * fVar22 + fVar19 * fVar18;
  *(float *)(param_1 + 0x2c) = fVar23 * fVar20 * fVar18 - fVar19 * fVar22;
  if ((*(char *)(lVar4 + 0x2c9) == '\0') || (*(char *)(lVar4 + 0x70) != '\x02')) {
    FUN_18044ac10(param_1,0);
  }
  else if (DAT_1808acb90 < *(float *)((longlong)param_1 + 0x44)) {
    FUN_18044a2b0(param_1,0);
  }
  pfVar17 = (float *)((longlong)param_1 + 0x44);
  if ((*(byte *)(lVar4 + 0x68) & 1) == 0) {
    if (*(char *)(lVar4 + 0x70) == '\x02') {
      fVar21 = *(float *)(lVar4 + 0x1dc);
      fVar20 = (float)((uint)*pfVar17 ^ uVar9);
      if ((0.0 < fVar21) && (fVar20 <= fVar21)) {
        fVar20 = fVar21;
      }
    }
    else {
      fVar20 = 0.0;
    }
    *(float *)(lVar4 + 0x1dc) = fVar20;
  }
  cVar2 = *(char *)(lVar4 + 0x70);
  if ((byte)(cVar2 - 7U) < 2) {
    return;
  }
  if ((cVar2 != '\t') && ((*(byte *)(lVar4 + 0x158) & 0x10) != 0)) {
    return;
  }
  FUN_180540170(local_258,0,0xc0);
  uVar8 = _UNK_1808adae8;
  uVar7 = _DAT_1808adae0;
  fVar20 = DAT_1808ac34c;
  local_1a4 = 0xffffffff;
  local_1a0 = 0xffff;
  local_228 = _DAT_1808adae0;
  uStack_220 = _UNK_1808adae8;
  local_218 = _DAT_1808adae0;
  uStack_210 = _UNK_1808adae8;
  local_1ac = 1.0;
  if (cVar2 != '\t') {
    fVar21 = *(float *)(param_1 + 3);
    fVar18 = *(float *)((longlong)param_1 + 0x1c);
    if ((fVar21 != 0.0) || (fVar18 != 0.0)) {
      local_2e0 = fVar18 * *(float *)(param_1 + 0x2b) +
                  fVar21 * *(float *)((longlong)param_1 + 0x14c);
      local_2e8 = (float)param_1[0x2a] * fVar18 +
                  (float)*(undefined8 *)((longlong)param_1 + 0x144) * fVar21;
      fStack_2e4 = (float)((ulonglong)param_1[0x2a] >> 0x20) * fVar18 +
                   (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x144) >> 0x20) * fVar21;
      FUN_1804491b0(&local_2e8);
      fVar21 = local_2e0;
      fVar18 = DAT_1808ac540;
      goto LAB_18044bdfd;
    }
    goto LAB_18044c300;
  }
  local_2e8 = (float)((uint)*(undefined8 *)(lVar4 + 0x21c) ^ DAT_1808adec0);
  fStack_2e4 = (float)((uint)((ulonglong)*(undefined8 *)(lVar4 + 0x21c) >> 0x20) ^ _UNK_1808adec4);
  fVar21 = (float)(*(uint *)(lVar4 + 0x224) ^ uVar9);
  fVar18 = DAT_1808ac864;
LAB_18044bdfd:
  local_2d8 = *(float *)(param_1 + 6);
  puVar16 = &DAT_1806cc1a0;
  local_2d4 = *(float *)((longlong)param_1 + 0x34);
  local_2d0 = *(float *)(param_1 + 7);
  puVar14 = &DAT_1806cc1a0;
  lVar10 = param_1[0x1d];
  local_2c8 = local_2e8 * fVar18 + local_2d8;
  local_2c0 = fVar21 * fVar18 + local_2d0;
  local_2c4 = fStack_2e4 * fVar18 + local_2d4;
  cVar3 = *(char *)(*param_1 + 0x200);
  param_1[0x1d] = 0x100;
  if (cVar3 != '\0') {
    puVar14 = &DAT_1806cc260;
  }
  local_2f8 = local_258;
  FUN_180449f00(param_1,&local_2d8,&local_2c8,puVar14);
  param_1[0x1d] = lVar10;
  if (((local_1ac == fVar20) || (local_1c0 == fVar20)) ||
     (((local_22f & 1) == 0 &&
      ((local_258[0] == 0 || (lVar10 = FUN_180449b80(&local_2e8), *(char *)(lVar10 + 8) == '\0')))))
     ) {
    if (((cVar2 != '\t') &&
        ((((*(char *)(lVar4 + 0x1e0) != '\0' && ((*(byte *)(lVar4 + 0x68) & 1) == 0)) &&
          (local_2e0 = *pfVar17, local_2e0 <= 0.0)) &&
         ((DAT_1808ace5c < local_2e0 &&
          (local_2e8 = *(float *)((longlong)param_1 + 0x3c), local_2e8 != 0.0)))))) &&
       (fStack_2e4 = *(float *)(param_1 + 8), fStack_2e4 != 0.0)) {
      fVar21 = *(float *)(param_1 + 7);
      fVar18 = *(float *)(param_1 + 6);
      local_2c0 = fVar21 - DAT_1808ac7ac;
      fVar22 = *(float *)((longlong)param_1 + 0x34);
      local_2c8 = fVar18;
      local_2c4 = fVar22;
      FUN_1804491b0(&local_2e8);
      puVar14 = &DAT_1806cc1a0;
      lVar10 = param_1[0x1d];
      local_2d0 = fVar21 - local_2e0 * DAT_1808ac980;
      local_2d4 = fVar22 - fStack_2e4 * DAT_1808ac980;
      local_2d8 = fVar18 - local_2e8 * DAT_1808ac980;
      cVar2 = *(char *)(*param_1 + 0x200);
      param_1[0x1d] = 0x100;
      if (cVar2 != '\0') {
        puVar14 = &DAT_1806cc260;
      }
      local_2f8 = local_258;
      FUN_180449f00(param_1,&local_2c8,&local_2d8,puVar14);
      param_1[0x1d] = lVar10;
      if (((((local_1ac != fVar20) && (local_1c0 != fVar20)) &&
           (((local_22f & 1) != 0 ||
            ((local_258[0] != 0 &&
             (lVar10 = FUN_180449b80(local_2a8), *(char *)(lVar10 + 8) != '\0')))))) &&
          (local_1c0 != fVar20)) && (local_19d == '\0')) {
        *(undefined1 *)(lVar4 + 0x70) = 9;
        *(ulonglong *)(lVar4 + 0x21c) = CONCAT44(local_1c4,local_1c8);
        *(float *)(lVar4 + 0x224) = local_1c0;
        *pfVar17 = 0.0;
        *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
        *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0x16) = 0;
        param_1[0x18] = 0;
        *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
        FUN_180540170(&local_198,0,0xc0);
        local_168 = uVar7;
        uStack_160 = uVar8;
        local_158 = uVar7;
        uStack_150 = uVar8;
        local_e4 = 0xffffffff;
        pfVar15 = (float *)&DAT_1806cc1ac;
        local_e0 = 0xffff;
        pfVar13 = (float *)&DAT_1806cc1a0;
        local_ec = 1.0;
        uStack_28c = 0;
        cVar2 = *(char *)(*param_1 + 0x200);
        uStack_288 = 0;
        fStack_284 = 0.0;
        uStack_280 = 0;
        if (cVar2 != '\0') {
          pfVar15 = (float *)&DAT_1806cc26c;
          pfVar13 = (float *)&DAT_1806cc260;
        }
        local_278 = 0;
        local_268 = 0;
        uStack_260 = 0;
        if (*pfVar15 == *pfVar13) {
          pfVar12 = (float *)&DAT_1806cc1b0;
          if (cVar2 != '\0') {
            pfVar12 = (float *)&DAT_1806cc270;
          }
          pfVar11 = (float *)&DAT_1806cc1a4;
          if (cVar2 != '\0') {
            pfVar11 = (float *)&DAT_1806cc264;
          }
          if (*pfVar12 != *pfVar11) goto LAB_18044c1e3;
          pfVar12 = (float *)&DAT_1806cc1b4;
          if (cVar2 != '\0') {
            pfVar12 = (float *)&DAT_1806cc274;
          }
          pfVar11 = (float *)&DAT_1806cc1a8;
          if (cVar2 != '\0') {
            pfVar11 = (float *)&DAT_1806cc268;
          }
          if (*pfVar12 != *pfVar11) goto LAB_18044c1e3;
          local_298 = *(undefined8 *)pfVar13;
          fStack_290 = pfVar13[2];
          uStack_270 = 0;
        }
        else {
LAB_18044c1e3:
          local_298 = *(undefined8 *)pfVar13;
          fStack_290 = pfVar13[2];
          fStack_284 = pfVar15[2];
          uStack_28c = (undefined4)*(undefined8 *)pfVar15;
          uStack_288 = (undefined4)((ulonglong)*(undefined8 *)pfVar15 >> 0x20);
          uStack_270 = 2;
        }
        if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) &&
           (lVar10 = FUN_18000f3a0(), lVar10 != 0)) {
          local_2f0 = &local_198;
          local_2f8 = param_1 + 0x1c;
          FUN_180271700(lVar10,&local_298,&local_2c8,&local_2d8);
        }
        local_2e0 = local_10c;
        local_2e8 = local_114;
        fStack_2e4 = local_110;
        if (local_dd == '\0') {
          puVar14 = &DAT_1806cc1a0;
          local_2f8 = &local_198;
          if (*(char *)(*param_1 + 0x200) != '\0') {
            puVar14 = &DAT_1806cc260;
          }
          FUN_180449f00(param_1,&local_2e8,&local_2e8,puVar14);
          if (((local_170 & *(ulonglong *)(*param_1 + 0x98)) == 0) || (local_190 == 0)) {
            *(float *)(param_1 + 6) = local_2e8;
            *(float *)(param_1 + 7) = local_2e0;
            *(float *)((longlong)param_1 + 0x34) = fStack_2e4;
          }
        }
        goto LAB_18044c316;
      }
    }
LAB_18044c300:
    if (*(char *)(lVar4 + 0x70) == '\t') {
      *(undefined1 *)(lVar4 + 0x70) = 2;
    }
  }
  else {
LAB_18044c316:
    if (*(char *)(lVar4 + 0x70) != '\t') {
      *(float *)(lVar4 + 0x90) = *(float *)(lVar4 + 0x164) + DAT_1808ac118;
    }
    *(undefined1 *)(lVar4 + 0x70) = 9;
    bVar6 = true;
    *(ulonglong *)(lVar4 + 0x21c) = CONCAT44(local_1c4,local_1c8);
    *(float *)(lVar4 + 0x224) = local_1c0;
    if ((*(byte *)(lVar4 + 0x68) & 1) == 0) {
      fVar21 = *(float *)(param_1 + 7);
      fVar18 = *(float *)(param_1 + 6);
      fVar22 = *(float *)((longlong)param_1 + 0x34);
      local_2c0 = fVar21 - fVar20;
      local_2c8 = fVar18;
      local_2c4 = fVar22;
      FUN_180540170(&local_198,0,0xc0);
      local_168 = uVar7;
      uStack_160 = uVar8;
      local_e4 = 0xffffffff;
      local_e0 = 0xffff;
      local_158 = uVar7;
      uStack_150 = uVar8;
      local_ec = 1.0;
      if (*(char *)(*param_1 + 0x200) != '\0') {
        puVar16 = &DAT_1806cc260;
      }
      local_2f8 = &local_198;
      local_2d8 = fVar18;
      local_2d4 = fVar22;
      local_2d0 = fVar21;
      FUN_180449f00(param_1,&local_2d8,&local_2c8,puVar16);
      if (((local_dd != '\0') || (fVar20 <= local_ec)) ||
         (local_100 < *(float *)(lVar4 + 0x300) || local_100 == *(float *)(lVar4 + 0x300))) {
        bVar6 = false;
      }
    }
    uVar5 = *(ulonglong *)(lVar4 + 0x178);
    *(undefined4 *)(lVar4 + 0x7c) = 0x3f800000;
    fVar21 = DAT_1808acba8;
    fVar20 = DAT_1808acb60;
    if (((uVar5 & 2) == 0) &&
       (((*(uint *)(lVar4 + 0x188) & 2) * 2 | *(uint *)(lVar4 + 0x180) & 2) < 3)) {
      if ((uVar5 & 0x10004) == 0) {
        fVar21 = DAT_1808acb60;
      }
      else {
        fVar21 = DAT_1808acabc;
      }
      if ((uVar5 >> 9 & 1) == 0) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = fVar21;
      }
      if ((uVar5 >> 10 & 1) == 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = fVar21;
      }
      fVar18 = fVar18 - fVar22;
      if ((uVar5 & 8) == 0) {
        fVar22 = DAT_1808acd10;
      }
      else {
        fVar22 = fVar21;
      }
      if ((uVar5 & 0x10) == 0) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = (float)((uint)fVar21 ^ uVar9);
      }
      fVar21 = fVar21 + fVar22;
      if ((fVar18 == 0.0) && (fVar21 == 0.0)) {
        param_1[8] = 0;
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
        *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0x16) = 0;
        param_1[0x18] = 0;
        *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
      }
      else {
        fStack_2e4 = local_1c8 - local_1c0 * 0.0;
        local_2e8 = local_1c0 * 0.0 - local_1c4;
        local_2e0 = local_1c8 * DAT_1808acd10 + local_1c4 * 0.0;
        FUN_1804491b0(&local_2e8);
        local_2b8 = local_2e0 * local_1c4 - fStack_2e4 * local_1c0;
        local_2b4 = local_2e8 * local_1c0 - local_2e0 * local_1c8;
        local_2b0 = fStack_2e4 * local_1c8 - local_2e8 * local_1c4;
        fVar19 = fVar21 * *(float *)((longlong)param_1 + 0x144) +
                 fVar18 * *(float *)(param_1 + 0x2a);
        fVar22 = fVar21 * *(float *)((longlong)param_1 + 0x14c) +
                 fVar18 * *(float *)(param_1 + 0x2b);
        fVar21 = fVar21 * *(float *)(param_1 + 0x29) +
                 fVar18 * *(float *)((longlong)param_1 + 0x154);
        fVar18 = fVar21 * local_1c4 + fVar22 * local_1c0 + fVar19 * local_1c8;
        fVar21 = fVar21 - fVar18 * local_1c4;
        fVar22 = fVar22 - fVar18 * local_1c0;
        fVar19 = fVar19 - fVar18 * local_1c8;
        fVar23 = fVar22 * local_2e0 + fVar21 * fStack_2e4 + fVar19 * local_2e8;
        local_2d8 = fVar23 * local_2e8 + fVar18 * local_1c8;
        local_2d4 = fVar23 * fStack_2e4 + fVar18 * local_1c4;
        local_2d0 = fVar23 * local_2e0 + fVar18 * local_1c0;
        FUN_1804491b0(&local_2d8);
        if (local_2d4 * local_1c4 + local_2d0 * local_1c0 + local_2d8 * local_1c8 <
            *(float *)(lVar4 + 0x310)) {
          fVar1 = *(float *)(lVar4 + 0x314);
          fVar22 = fVar22 * local_2b0 + fVar21 * local_2b4 + fVar19 * local_2b8;
          fVar19 = fVar1 * local_2e8 * fVar23 + fVar22 * local_2b8;
          fVar21 = fVar1 * fStack_2e4 * fVar23 + fVar22 * local_2b4;
          fVar22 = fVar1 * local_2e0 * fVar23 + fVar22 * local_2b0;
        }
        fVar19 = fVar19 - fVar18 * local_2b8;
        fVar21 = fVar21 - fVar18 * local_2b4;
        fVar22 = fVar22 - fVar18 * local_2b0;
        *(float *)((longlong)param_1 + 0x3c) = fVar19;
        *(float *)(param_1 + 8) = fVar21;
        *(float *)((longlong)param_1 + 0x44) = fVar22;
        fVar23 = *(float *)(lVar4 + 0x318);
        if (0.0 < fVar23) {
          fVar19 = fVar23 * fVar19;
          fVar21 = fVar23 * fVar21;
          fVar22 = fVar23 * fVar22;
          *(float *)((longlong)param_1 + 0x3c) = fVar19;
          *(float *)(param_1 + 8) = fVar21;
          *(float *)((longlong)param_1 + 0x44) = fVar22;
        }
        if ((bVar6) && (0.0 < fVar18)) {
          *(float *)((longlong)param_1 + 0x3c) = local_1c8 * fVar20 + fVar19;
          *(float *)(param_1 + 8) = local_1c4 * fVar20 + fVar21;
          *(float *)((longlong)param_1 + 0x44) = local_1c0 * fVar20 + fVar22;
        }
      }
    }
    else if (((*(float *)(lVar4 + 0x90) <= *(float *)(lVar4 + 0x164)) &&
             (!NAN(*(float *)(lVar4 + 0x164)))) && (!NAN(*(float *)(lVar4 + 0x90)))) {
      *(undefined1 *)(lVar4 + 0x70) = 2;
      *(float *)((longlong)param_1 + 0x3c) = local_1c8 * fVar21;
      *(float *)(param_1 + 8) = local_1c4 * fVar21;
      *pfVar17 = local_1c0 * fVar21;
    }
  }
  return;
}



/* ===== 18044c950 FUN_18044c950 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044c950(longlong *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float *pfVar5;
  bool bVar6;
  ulonglong uVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_17f;
  undefined8 local_177;
  undefined4 local_16f;
  undefined2 local_16b;
  undefined1 local_169;
  undefined1 local_168 [8];
  longlong local_160;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_bc;
  undefined4 local_b4;
  undefined2 local_b0;
  char local_ad;
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  pfVar5 = (float *)*param_1;
  fVar1 = pfVar5[0x58];
  fVar14 = fVar1 * _DAT_1808ac7d4 * DAT_1808ace10;
  if (*(char *)((longlong)pfVar5 + 0x203) == '\0') {
    fVar14 = pfVar5[0x91] - fVar14;
    if (0.0 <= fVar14) {
      fVar14 = 0.0;
    }
  }
  else {
    fVar14 = pfVar5[0x91] + fVar14;
    if (fVar14 <= DAT_1808ace10) {
      fVar14 = DAT_1808ace10;
    }
  }
  fVar15 = pfVar5[0x82];
  bVar13 = DAT_1808ac428 <= fVar15;
  fVar4 = pfVar5[0x1a];
  pfVar5[0x91] = fVar14;
  uVar9 = DAT_1808adec0;
  fVar8 = DAT_1808ac838;
  fVar14 = DAT_1808ac34c;
  if (bVar13) {
    if (((uint)fVar4 & 2) == 0) {
      bVar13 = pfVar5[0xc3] + pfVar5[0x83] <= pfVar5[0x59];
    }
    else {
      bVar13 = true;
    }
  }
  else {
    bVar13 = false;
  }
  if (*(char *)((longlong)pfVar5 + 0x203) == '\0') {
    if ((((uint)pfVar5[0x5e] & 4) == 0) || (!bVar13)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
  }
  else {
    bVar13 = true;
  }
  fVar16 = fVar1 * DAT_1808ac658;
  if (DAT_1808ac838 - fVar15 <= fVar16) {
    if (DAT_1808ac838 - fVar15 < (float)((uint)fVar16 ^ DAT_1808adec0)) {
      fVar16 = fVar15 - fVar16;
      goto LAB_18044caa6;
    }
    pfVar5[0x82] = 8.0;
    fVar16 = fVar8;
LAB_18044cb73:
    pfVar5[0x84] = *pfVar5;
    pfVar5[0x85] = pfVar5[1];
  }
  else {
    fVar16 = fVar16 + fVar15;
LAB_18044caa6:
    bVar6 = DAT_1808ac838 <= fVar16;
    pfVar5[0x82] = fVar16;
    if (bVar6) goto LAB_18044cb73;
    if ((pfVar5[0x81] <= 0.0) || (fVar14 <= pfVar5[0x81])) {
      fVar15 = (pfVar5[0x85] - pfVar5[1]) * (pfVar5[0x85] - pfVar5[1]) +
               (pfVar5[0x84] - *pfVar5) * (pfVar5[0x84] - *pfVar5);
      if (fVar15 < 0.0) {
        fVar15 = (float)FUN_18051af10();
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      if (DAT_1808acab0 < fVar15) {
        fVar15 = fVar1 * DAT_1808ac7ac;
        if (fVar8 - fVar16 <= fVar15) {
          if ((float)((uint)fVar15 ^ uVar9) <= fVar8 - fVar16) {
            pfVar5[0x82] = fVar8;
            fVar16 = fVar8;
          }
          else {
            pfVar5[0x82] = fVar16 - fVar15;
            fVar16 = fVar16 - fVar15;
          }
        }
        else {
          pfVar5[0x82] = fVar16 + fVar15;
          fVar16 = fVar16 + fVar15;
        }
      }
    }
  }
  if (!bVar13) {
    if (*(char *)((longlong)pfVar5 + 0x201) == '\0') {
      fVar15 = pfVar5[0x81];
      if (pfVar5[0x81] <= 0.0) goto LAB_18044d133;
      *(undefined1 *)((longlong)pfVar5 + 0x201) = 1;
    }
    fVar8 = DAT_1808ac844;
    if (1 < (byte)(*(char *)(pfVar5 + 0x1c) - 7U)) {
      fVar15 = *(float *)(param_1 + 7);
      uVar2 = (undefined4)param_1[6];
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x34);
      local_1c0 = fVar15;
      if (((uint)fVar4 & 1) == 0) {
        local_1c0 = fVar15 - DAT_1808ac844;
      }
      local_1c8 = uVar2;
      local_1c4 = uVar3;
      FUN_180540170(local_168,0,0xc0);
      local_138 = _DAT_1808adae0;
      uStack_130 = _UNK_1808adae8;
      local_128 = _DAT_1808adae0;
      uStack_120 = _UNK_1808adae8;
      local_b4 = 0xffffffff;
      local_b0 = 0xffff;
      local_1a8 = _DAT_1806cc1a0;
      local_1a0 = DAT_1806cc1a8;
      local_19c = _DAT_1806cc1ac;
      local_bc = 1.0;
      local_190 = 0;
      local_188 = 0;
      local_17f = 0;
      local_177 = 0;
      local_16f = 0;
      local_16b = 0;
      local_169 = 0;
      local_194 = DAT_1806cc1b4;
      local_180 = 2;
      local_1b8 = uVar2;
      local_1b4 = uVar3;
      local_1b0 = fVar15;
      if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) && (lVar10 = FUN_18000f3a0(), lVar10 != 0))
      {
        local_1d0 = local_168;
        local_1d8 = param_1 + 0x1c;
        FUN_180271700(lVar10,&local_1a8,&local_1b8,&local_1c8);
      }
      if ((local_ad != '\0') || (local_bc != fVar14)) {
        pfVar5[0x1a] = (float)((uint)pfVar5[0x1a] | 2);
        pfVar5[0x81] = 1.0;
        *(undefined2 *)(pfVar5 + 0x80) = 1;
        fVar15 = fVar14;
        goto LAB_18044d133;
      }
      fVar16 = pfVar5[0x82];
    }
    if (fVar16 <= DAT_1808ac428) {
      fVar16 = DAT_1808ac428;
    }
    if (*(char *)((longlong)pfVar5 + 0x71) != '\0') {
      fVar16 = fVar16 * DAT_1808ac1b0;
    }
    fVar15 = pfVar5[0x81];
    fVar16 = fVar16 * fVar1;
    if (0.0 - fVar15 <= fVar16) {
      if (0.0 - fVar15 < (float)((uint)fVar16 ^ uVar9)) {
        fVar15 = fVar15 - fVar16;
        goto LAB_18044d09c;
      }
      pfVar5[0x81] = 0.0;
      *(undefined1 *)(pfVar5 + 0x80) = 0;
LAB_18044d0d5:
      if ((((uint)pfVar5[0x1a] & 1) == 0) && (*(char *)(pfVar5 + 0x1c) != '\t')) {
        *(float *)(param_1 + 7) = *(float *)(param_1 + 7) - fVar8;
        pfVar5[0x8f] = pfVar5[0x8f] + fVar8;
      }
      pfVar5[0x1a] = (float)((uint)pfVar5[0x1a] & 0xfffffffd);
      *(undefined1 *)(pfVar5 + 0x80) = 0;
      *(undefined1 *)((longlong)pfVar5 + 0x201) = 0;
      FUN_18044ac10(param_1,0);
      fVar15 = 0.0;
      pfVar5[0x81] = 0.0;
    }
    else {
      fVar15 = fVar15 + fVar16;
LAB_18044d09c:
      *(undefined1 *)(pfVar5 + 0x80) = 0;
      pfVar5[0x81] = fVar15;
      if ((fVar15 <= 0.0) || (((uint)fVar4 & 1) == 0)) goto LAB_18044d0d5;
      if (DAT_1808ac27c < fVar15) goto LAB_18044d133;
    }
    if (((uint)pfVar5[0x1a] & 2) != 0) {
      pfVar5[0x1a] = (float)((uint)pfVar5[0x1a] & 0xfffffffd);
    }
    goto LAB_18044d133;
  }
  fVar15 = pfVar5[0x81];
  if (*(char *)((longlong)pfVar5 + 0x201) == '\0') {
    if (fVar14 <= fVar15) goto LAB_18044d133;
    *(undefined1 *)((longlong)pfVar5 + 0x201) = 1;
  }
  fVar16 = fVar16 * DAT_1808ac294;
  if (*(char *)((longlong)pfVar5 + 0x71) != '\0') {
    fVar16 = fVar16 * DAT_1808ac1b0;
  }
  fVar16 = fVar16 * fVar1;
  if (fVar14 - fVar15 <= fVar16) {
    if (fVar14 - fVar15 < (float)((uint)fVar16 ^ uVar9)) {
      fVar15 = fVar15 - fVar16;
      goto LAB_18044cbed;
    }
    bVar13 = ((uint)pfVar5[0x1a] & 1) == 0;
    pfVar5[0x81] = 1.0;
LAB_18044cc19:
    if (bVar13) goto LAB_18044cc1b;
  }
  else {
    fVar15 = fVar15 + fVar16;
LAB_18044cbed:
    pfVar5[0x81] = fVar15;
    if (fVar14 <= fVar15) {
      bVar13 = ((uint)fVar4 & 1) == 0;
      goto LAB_18044cc19;
    }
    if (((uint)fVar4 & 1) != 0) goto LAB_18044d133;
LAB_18044cc1b:
    fVar1 = DAT_1808ac844;
    if ((*(char *)(pfVar5 + 0x1c) != '\t') &&
       ((pfVar5[0x1e] == 0.0 || ((int)(pfVar5[0x1e] * DAT_1808ac710 + fVar14) < 3)))) {
      param_1[6] = param_1[6];
      *(float *)(param_1 + 7) = *(float *)(param_1 + 7) + fVar1;
      pfVar5[0x8f] = pfVar5[0x8f] - fVar1;
    }
  }
  pfVar5[0x1a] = (float)((uint)pfVar5[0x1a] | 2);
  pfVar5[0x83] = pfVar5[0x59];
  *(undefined2 *)(pfVar5 + 0x80) = 1;
  FUN_180540170(local_168,0,0xc0);
  local_1c8 = (undefined4)param_1[6];
  local_1c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  local_138 = _DAT_1808adae0;
  uStack_130 = _UNK_1808adae8;
  local_b4 = 0xffffffff;
  local_b0 = 0xffff;
  puVar12 = &DAT_1806cc1a0;
  local_128 = _DAT_1808adae0;
  uStack_120 = _UNK_1808adae8;
  local_1c0 = *(float *)(param_1 + 7);
  local_bc = 1.0;
  local_1d8 = (longlong *)local_168;
  if (*(char *)(*param_1 + 0x200) != '\0') {
    puVar12 = &DAT_1806cc260;
  }
  local_1b8 = local_1c8;
  local_1b4 = local_1c4;
  local_1b0 = local_1c0;
  FUN_180449f00(param_1,&local_1b8,&local_1c8,puVar12);
  if (((local_140 & *(ulonglong *)(pfVar5 + 0x26)) != 0) && (local_160 != 0)) {
    fVar1 = *(float *)(param_1 + 7);
    uVar2 = (undefined4)param_1[6];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x34);
    local_1c0 = fVar1 + fVar14;
    puVar12 = &DAT_1806cc1a0;
    iVar11 = 0x24;
    *(float *)(param_1 + 7) = local_1c0;
    local_1d8 = (longlong *)local_168;
    if (*(char *)(*param_1 + 0x200) != '\0') {
      puVar12 = &DAT_1806cc260;
    }
    local_1c8 = uVar2;
    local_1c4 = uVar3;
    local_1b8 = uVar2;
    local_1b4 = uVar3;
    local_1b0 = local_1c0;
    FUN_180449f00(param_1,&local_1c8,&local_1b8,puVar12);
    uVar7 = local_140 & *(ulonglong *)(pfVar5 + 0x26);
    while( true ) {
      if ((uVar7 == 0) || (local_160 == 0)) goto LAB_18044ce7f;
      iVar11 = iVar11 + -1;
      if (iVar11 == 0) break;
      local_1c0 = *(float *)(param_1 + 7) + fVar14;
      puVar12 = &DAT_1806cc1a0;
      *(float *)(param_1 + 7) = local_1c0;
      local_1c8 = (undefined4)param_1[6];
      local_1c4 = *(undefined4 *)((longlong)param_1 + 0x34);
      local_1d8 = (longlong *)local_168;
      if (*(char *)(*param_1 + 0x200) != '\0') {
        puVar12 = &DAT_1806cc260;
      }
      local_1b8 = local_1c8;
      local_1b4 = local_1c4;
      local_1b0 = local_1c0;
      FUN_180449f00(param_1,&local_1c8,&local_1b8,puVar12);
      uVar7 = local_140 & *(ulonglong *)(pfVar5 + 0x26);
    }
    *(undefined4 *)(param_1 + 6) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
    *(float *)(param_1 + 7) = fVar1;
  }
LAB_18044ce7f:
  FUN_18044ac10(param_1,0);
  pfVar5[0x81] = 1.0;
  fVar15 = fVar14;
LAB_18044d133:
  if ((*(char *)(pfVar5 + 0xa4) == '\0') &&
     (((((uint)pfVar5[0x5e] & 4) != 0 || (*(char *)((longlong)pfVar5 + 0x201) != '\0')) ||
      (((uint)pfVar5[0x1a] & 2) != 0)))) {
    fVar15 = (fVar15 * DAT_1808ac16c + fVar14) - fVar15;
    param_1[3] = CONCAT44((float)((ulonglong)param_1[3] >> 0x20) * fVar15,(float)param_1[3] * fVar15
                         );
    *(float *)(param_1 + 4) = fVar15 * *(float *)(param_1 + 4);
    *(float *)(param_1 + 2) = fVar15 * *(float *)(param_1 + 2);
    *(undefined1 *)(pfVar5 + 0xa4) = 1;
  }
  return;
}



/* ===== 18044d200 FUN_18044d200 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044d200(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8 [2];
  undefined1 local_88 [112];
  
  fVar5 = DAT_1808ac34c;
  lVar3 = *param_1;
  fVar19 = *(float *)(lVar3 + 0x164);
  if ((*(float *)(lVar3 + 0x94) != 0.0) && (DAT_1808ac34c < *(float *)(lVar3 + 0x94) - fVar19)) {
    *(undefined4 *)(lVar3 + 0x268) = 0xfffffc00;
    return;
  }
  if (*(int *)(lVar3 + 0x6c) == -1) {
    return;
  }
  lVar10 = FUN_1804320a0();
  if (lVar10 == 0) {
    return;
  }
  lVar11 = FUN_18000f3a0(lVar10 + 0x10);
  if ((lVar11 == 0) || (lVar11 = FUN_18000f3a0(lVar11 + 8), lVar11 == 0)) {
LAB_18044d30b:
    bVar13 = false;
  }
  else {
    if (DAT_181111d28 == 0) {
      cVar6 = FUN_180449ac0(lVar11,"C_CSPlayerPawn");
      if (cVar6 == '\0') goto LAB_18044d30b;
      bVar13 = true;
      DAT_181111d28 = lVar11;
    }
    else {
      bVar13 = lVar11 == DAT_181111d28;
      if (!bVar13) goto LAB_18044d30e;
    }
    iVar8 = FUN_180011200((ulonglong)DAT_180c873c8 + lVar10);
    if ((iVar8 == -1) || (lVar10 = FUN_1804320a0(iVar8), lVar10 == 0)) goto LAB_18044d31b;
  }
LAB_18044d30e:
  lVar10 = FUN_18044aa20(param_1);
  if (lVar10 != 0) {
LAB_18044d31b:
    *(undefined4 *)(lVar3 + 0x268) = 0xfffffc00;
    return;
  }
  iVar8 = *(int *)((longlong)param_1 + 100);
  fVar14 = *(float *)(param_1 + 0xd);
  if ((fVar14 < 0.0) || (fVar5 <= fVar14)) {
    local_res8[0] = 0.0;
    fVar14 = (float)FUN_180512fd0(fVar14,local_res8);
    if (fVar14 < 0.0) {
      fVar14 = fVar14 + fVar5;
      if (fVar14 < fVar5) {
        local_res8[0] = local_res8[0] + DAT_1808acda0;
      }
      else {
        fVar14 = 0.0;
      }
    }
    iVar8 = iVar8 + (int)local_res8[0];
  }
  local_res8[0] = 0.0;
  fVar15 = (float)FUN_180512fd0(*(float *)(lVar3 + 0x2d0) * DAT_1808ac1f4 * DAT_1808acab0,local_res8
                               );
  fVar18 = local_res8[0];
  if (fVar15 < 0.0) {
    fVar15 = fVar15 + fVar5;
    if (fVar15 < fVar5) {
      fVar18 = local_res8[0] + DAT_1808acda0;
    }
    else {
      fVar15 = 0.0;
    }
  }
  fVar16 = *(float *)(lVar3 + 0x274);
  iVar1 = *(int *)(lVar3 + 0x270);
  iVar9 = iVar1 - (int)fVar18;
  fVar15 = (fVar15 + DAT_1808accc8) - DAT_1808accc8;
  fVar17 = fVar16 - fVar15;
  if (fVar17 < 0.0) {
    fVar17 = fVar17 + fVar5;
    if (fVar17 < fVar5) {
      iVar9 = iVar9 + -1;
    }
    else {
      fVar17 = 0.0;
    }
  }
  iVar12 = iVar1 + (int)fVar18;
  fVar15 = fVar16 + fVar15;
  if ((fVar5 <= fVar15) && (!NAN(fVar15))) {
    iVar12 = iVar12 + 1;
    fVar15 = fVar15 - fVar5;
  }
  iVar2 = *(int *)(lVar3 + 0x268);
  if (iVar2 == iVar9) {
    bVar4 = fVar17 < *(float *)(lVar3 + 0x26c);
  }
  else {
    bVar4 = iVar9 <= iVar2;
  }
  if (bVar4) {
    if (iVar2 == iVar12) {
      bVar4 = *(float *)(lVar3 + 0x26c) < fVar15;
    }
    else {
      bVar4 = iVar2 < iVar12;
    }
    if (!bVar4) goto LAB_18044d4cb;
    bVar7 = 1;
    if (*(char *)(lVar3 + 0x2ca) != '\0') goto LAB_18044d517;
    if (*(float *)(lVar3 + 0x27c) * *(float *)(lVar3 + 0x27c) +
        *(float *)(lVar3 + 0x278) * *(float *)(lVar3 + 0x278) <=
        *(float *)(param_1 + 2) * *(float *)(param_1 + 2)) goto LAB_18044d4b9;
  }
  else {
LAB_18044d4cb:
    if (*(char *)(lVar3 + 0x2ca) == '\0') {
LAB_18044d4b9:
      if (iVar8 == iVar1 + 1) {
        bVar4 = fVar14 < fVar16;
      }
      else {
        bVar4 = iVar8 <= iVar1;
      }
      if (bVar4) {
        return;
      }
      goto LAB_18044d54f;
    }
    if (iVar8 == iVar1 + 1) {
      if (fVar14 <= fVar16) {
        if (fVar14 == fVar16) {
          cVar6 = '\0';
        }
        else {
          cVar6 = -0x80;
          if (fVar14 < fVar16) {
            cVar6 = -1;
          }
        }
      }
      else {
        cVar6 = '\x01';
      }
    }
    else {
      cVar6 = '\x01';
      if (iVar8 < iVar1 + 1) {
        cVar6 = -1;
      }
    }
    bVar7 = (byte)(cVar6 - 1U) >> 7;
LAB_18044d517:
    if (bVar7 == 0) goto LAB_18044d54f;
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(lVar3 + 0x278);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar3 + 0x27c);
  *(undefined1 *)(*param_1 + 0x28d) = 1;
  fVar14 = fVar16;
  iVar8 = iVar1;
LAB_18044d54f:
  *(undefined4 *)(lVar3 + 0x268) = 0xfffffc00;
  if ((*(char *)(lVar3 + 0x2cb) == '\0') &&
     (fVar18 = *(float *)(lVar3 + 0x1b0) * DAT_1808ac394, 0.0 < fVar18)) {
    fVar15 = (float)*(undefined8 *)((longlong)param_1 + 0x3c);
    fVar17 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x3c) >> 0x20);
    fVar16 = *(float *)((longlong)param_1 + 0x44) * *(float *)((longlong)param_1 + 0x44) +
             fVar17 * fVar17 + fVar15 * fVar15;
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_18051af10(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    if (fVar18 < fVar16) {
      fVar18 = fVar18 / fVar16;
      *(float *)((longlong)param_1 + 0x44) = fVar18 * *(float *)((longlong)param_1 + 0x44);
      *(ulonglong *)((longlong)param_1 + 0x3c) = CONCAT44(fVar18 * fVar17,fVar18 * fVar15);
    }
  }
  FUN_18044a2b0(param_1,0);
  fVar18 = DAT_1808accd0;
  *(undefined1 *)(lVar3 + 0x1e0) = 0;
  *(undefined1 *)(lVar3 + 0xdc) = 0;
  fVar19 = (fVar19 - *(float *)(lVar3 + 0x160)) + DAT_1808ac0c0;
  *(float *)(lVar3 + 0x1ec) = fVar19;
  *(float *)(lVar3 + 0xe0) = fVar19;
  *(float *)(lVar3 + 0x1e8) =
       *(float *)(param_1 + 7) - ((*(float *)(param_1 + 7) + fVar18) - fVar18);
  if (*(longlong *)(lVar3 + 0x1f8) == 0) {
    fVar19 = fVar5;
  }
  else {
    lVar10 = FUN_180449b80(local_88);
    fVar19 = *(float *)(lVar10 + 4);
  }
  fVar18 = *(float *)(lVar3 + 0x2d4);
  if ((!bVar13 && *(char *)(lVar3 + 0x201) == '\0') && ((*(byte *)(lVar3 + 0x68) & 2) == 0)) {
    fVar18 = (float)((double)fVar18 -
                    (double)*(float *)(lVar3 + 0x2e8) * DAT_1808ac4a8 * _DAT_1808ac350);
  }
  fVar14 = fVar14 - *(float *)(lVar3 + 0x274);
  iVar8 = iVar8 - *(int *)(lVar3 + 0x270);
  if (fVar14 < 0.0) {
    fVar14 = fVar14 + fVar5;
    if (fVar14 < fVar5) {
      iVar8 = iVar8 + -1;
    }
    else {
      fVar14 = 0.0;
    }
  }
  fVar15 = *(float *)((longlong)param_1 + 0x44);
  fVar16 = *(float *)(lVar3 + 0x280) * _DAT_1808abfb4 + fVar5;
  if (fVar16 <= fVar5) {
    fVar17 = DAT_1808ac118;
    if (DAT_1808ac118 <= fVar16) {
      fVar17 = fVar16;
    }
  }
  else {
    fVar17 = fVar5;
  }
  fVar17 = ((float)(iVar8 + 1) * DAT_1808ac00c + fVar14 * DAT_1808ac00c) * DAT_1808ac21c + fVar17;
  fVar14 = fVar5;
  if (fVar17 <= fVar5) {
    fVar14 = fVar17;
  }
  if (0.0 < *(float *)(lVar3 + 0x218)) {
    fVar16 = fVar5 - *(float *)(lVar3 + 0x218) / DAT_1808acb08;
    if (fVar16 <= fVar5) {
      fVar17 = 0.0;
      if (0.0 <= fVar16) {
        fVar17 = fVar16;
      }
    }
    else {
      fVar17 = fVar5;
    }
    fVar14 = fVar14 * fVar17;
  }
  iVar8 = *(int *)((longlong)param_1 + 100);
  fVar14 = fVar14 * fVar18 * fVar19;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(float *)((longlong)param_1 + 0x44) = fVar14;
  *(float *)(param_1 + 10) = (fVar14 - fVar15) + *(float *)(param_1 + 10);
  fVar19 = *(float *)(param_1 + 0xd);
  if ((fVar19 < 0.0) || (fVar5 <= fVar19)) {
    local_res8[0] = 0.0;
    fVar19 = (float)FUN_180512fd0(fVar19,local_res8);
    if (fVar19 < 0.0) {
      fVar19 = fVar19 + fVar5;
      if (fVar19 < fVar5) {
        local_res8[0] = local_res8[0] + DAT_1808acda0;
      }
      else {
        fVar19 = 0.0;
      }
    }
    iVar8 = iVar8 + (int)local_res8[0];
  }
  *(float *)(lVar3 + 0x254) = fVar19;
  *(float *)(lVar3 + 0x1e4) = fVar14;
  *(int *)(lVar3 + 0x250) = iVar8;
  *(undefined1 *)(lVar3 + 0x1e1) = 1;
  *(undefined1 *)(*param_1 + 0x28c) = 1;
  return;
}



/* ===== 18044d860 FUN_18044d860 ===== */

void FUN_18044d860(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float local_res8 [2];
  undefined1 local_78 [80];
  
  fVar21 = DAT_1808acda0;
  fVar13 = DAT_1808ac34c;
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x2cc) != '\0') {
    if (((*(ulonglong *)(lVar2 + 0x178) & 2) == 0) && ((*(byte *)(lVar2 + 0x188) & 2) == 0)) {
      return;
    }
    if ((*(char *)(lVar2 + 600) != '\0') &&
       (*(float *)(lVar2 + 0x304) + *(float *)(lVar2 + 0x25c) < *(float *)(lVar2 + 0x164))) {
      *(undefined1 *)(lVar2 + 600) = 0;
    }
    if (*(char *)(lVar2 + 0x2ca) != '\0') {
      *(undefined1 *)(lVar2 + 600) = 0;
    }
    fVar13 = DAT_1808ac34c;
    if (((*(float *)(lVar2 + 0x94) != 0.0) &&
        (*(float *)(lVar2 + 0x164) + DAT_1808ac34c < *(float *)(lVar2 + 0x94))) ||
       ((*(char *)(lVar2 + 0x2ca) == '\0' &&
        ((byte)((char)*(undefined8 *)(lVar2 + 0x188) * '\x02' & 4U |
                (byte)(*(ulonglong *)(lVar2 + 0x178) >> 1) & 1 |
               (byte)*(undefined4 *)(lVar2 + 0x180) & 2) < 3)))) goto LAB_18044dd87;
    if (*(float *)(lVar2 + 0x124) != 0.0) {
      fVar13 = *(float *)(lVar2 + 0x124) - *(float *)(lVar2 + 0x160);
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      *(float *)(lVar2 + 0x124) = fVar13;
      goto LAB_18044dd87;
    }
    if ((*(float *)(lVar2 + 0x78) != 0.0) &&
       (2 < (int)(*(float *)(lVar2 + 0x78) * DAT_1808ac710 + DAT_1808ac34c))) {
      FUN_18044a2b0(param_1,0);
      if (*(longlong *)(lVar2 + 0x80) == 0x10000) {
        fVar13 = DAT_1808acae0;
      }
      else {
        if (*(longlong *)(lVar2 + 0x80) != 0x8000) goto LAB_18044dd87;
        fVar13 = DAT_1808acb08;
      }
      *(float *)((longlong)param_1 + 0x44) = fVar13;
      *(undefined4 *)(param_1 + 0x17) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
      goto LAB_18044dd87;
    }
    if ((*(int *)(lVar2 + 0x6c) == -1) || (lVar7 = FUN_1804320a0(), lVar7 == 0)) {
      *(undefined1 *)(lVar2 + 0x1e0) = 0;
      goto LAB_18044dd87;
    }
    bVar3 = false;
    bVar11 = false;
    lVar8 = FUN_18000f3a0(lVar7 + 0x10);
    if ((lVar8 == 0) || (lVar8 = FUN_18000f3a0(lVar8 + 8), lVar8 == 0)) {
LAB_18044da46:
      lVar8 = FUN_18000f3a0(lVar7 + 0x10);
      if ((lVar8 != 0) && (lVar8 = FUN_18000f3a0(lVar8 + 8), lVar8 != 0)) {
        if (DAT_181111d28 == 0) {
          cVar4 = FUN_180449ac0(lVar8,"C_CSPlayerPawn");
          if (cVar4 != '\0') {
            DAT_181111d28 = lVar8;
            goto LAB_18044dab2;
          }
        }
        else if (lVar8 == DAT_181111d28) {
LAB_18044dab2:
          iVar5 = FUN_180011200((ulonglong)DAT_180c873c8 + lVar7);
          if (iVar5 == -1) {
            lVar7 = 0;
          }
          else {
            lVar7 = FUN_1804320a0(iVar5);
          }
          bVar11 = lVar7 == 0;
          bVar3 = true;
        }
      }
    }
    else if (DAT_181111d10 == 0) {
      cVar4 = FUN_180449ac0(lVar8,"C_World");
      if (cVar4 == '\0') goto LAB_18044da46;
      DAT_181111d10 = lVar8;
    }
    else if (lVar8 != DAT_181111d10) goto LAB_18044da46;
    *(undefined1 *)(lVar2 + 0x1e0) = 0;
    if ((*(char *)(lVar2 + 600) == '\0') && (lVar7 = FUN_18044aa20(param_1), lVar7 == 0)) {
      if ((*(char *)(*param_1 + 0x2cb) == '\0') &&
         (fVar21 = *(float *)(*param_1 + 0x1b0) * DAT_1808ac394, 0.0 < fVar21)) {
        fVar12 = (float)*(undefined8 *)((longlong)param_1 + 0x3c);
        fVar17 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x3c) >> 0x20);
        fVar16 = *(float *)((longlong)param_1 + 0x44) * *(float *)((longlong)param_1 + 0x44) +
                 fVar17 * fVar17 + fVar12 * fVar12;
        if (fVar16 < 0.0) {
          fVar16 = (float)FUN_18051af10(fVar16);
        }
        else {
          fVar16 = SQRT(fVar16);
        }
        if (fVar21 < fVar16) {
          fVar21 = fVar21 / fVar16;
          *(float *)((longlong)param_1 + 0x44) = fVar21 * *(float *)((longlong)param_1 + 0x44);
          *(ulonglong *)((longlong)param_1 + 0x3c) = CONCAT44(fVar21 * fVar17,fVar21 * fVar12);
        }
      }
      FUN_18044a2b0(param_1,0);
      fVar21 = *(float *)(lVar2 + 0x2d4);
      *(undefined1 *)(lVar2 + 0xdc) = 0;
      fVar12 = (*(float *)(lVar2 + 0x164) - *(float *)(lVar2 + 0x160)) + DAT_1808ac0c0;
      *(float *)(lVar2 + 0x1ec) = fVar12;
      *(float *)(lVar2 + 0xe0) = fVar12;
      *(float *)(lVar2 + 0x1e8) =
           *(float *)(param_1 + 7) - ((*(float *)(param_1 + 7) + DAT_1808accd0) - DAT_1808accd0);
      fVar12 = fVar13;
      if (*(longlong *)(lVar2 + 0x1f8) != 0) {
        lVar7 = FUN_180449b80(local_78);
        fVar12 = *(float *)(lVar7 + 4);
      }
      if (bVar11) {
        fVar12 = 0.0;
      }
      else if ((bVar3 || *(char *)(lVar2 + 0x201) != '\0') || ((*(byte *)(lVar2 + 0x68) & 2) != 0))
      {
        fVar12 = fVar12 * fVar21;
      }
      else {
        fVar12 = (fVar21 - *(float *)(lVar2 + 0x2e8) * *(float *)(lVar2 + 0x7c) * DAT_1808ac1f4 *
                           DAT_1808abff4) * fVar12;
      }
      fVar21 = *(float *)((longlong)param_1 + 0x44);
      *(float *)((longlong)param_1 + 0x44) = fVar12;
      *(undefined4 *)(param_1 + 0x17) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
      fVar16 = *(float *)(lVar2 + 0x218);
      if (0.0 < fVar16) {
        fVar17 = fVar13 - fVar16 / DAT_1808acb08;
        if (0.0 <= fVar17) {
          fVar14 = fVar13;
          if (fVar17 <= fVar13) {
            fVar14 = fVar17;
          }
        }
        else {
          fVar14 = 0.0;
        }
        fVar12 = fVar12 * fVar14;
        *(float *)((longlong)param_1 + 0x44) = fVar12;
      }
      fVar21 = (fVar12 - fVar21) + *(float *)(param_1 + 10);
      *(float *)(param_1 + 10) = fVar21;
      fVar16 = fVar21 * *(float *)(lVar2 + 0x2e0) + fVar16;
      if (0.0 <= fVar16) {
        fVar21 = *(float *)(lVar2 + 0x2d8);
        if (fVar16 <= *(float *)(lVar2 + 0x2d8)) {
          fVar21 = fVar16;
        }
      }
      else {
        fVar21 = 0.0;
      }
      *(float *)(lVar2 + 0x218) = fVar21;
      fVar21 = *(float *)(param_1 + 0xd);
      lVar7 = *param_1;
      iVar5 = *(int *)((longlong)param_1 + 100);
      if ((fVar21 < 0.0) || (fVar13 <= fVar21)) {
        local_res8[0] = 0.0;
        fVar21 = (float)FUN_180512fd0(fVar21,local_res8);
        if (fVar21 < 0.0) {
          fVar21 = fVar21 + fVar13;
          if (fVar21 < fVar13) {
            local_res8[0] = local_res8[0] + DAT_1808acda0;
          }
          else {
            fVar21 = 0.0;
          }
        }
        iVar5 = iVar5 + (int)local_res8[0];
      }
      *(float *)(lVar7 + 0x254) = fVar21;
      *(int *)(lVar7 + 0x250) = iVar5;
      *(undefined4 *)(lVar7 + 0x1e4) = *(undefined4 *)((longlong)param_1 + 0x44);
      *(undefined1 *)(lVar7 + 0x1e1) = 1;
      *(undefined1 *)(*param_1 + 0x28c) = 1;
    }
LAB_18044dd87:
    *(undefined1 *)(lVar2 + 600) = 1;
    if ((byte)((char)*(undefined8 *)(lVar2 + 0x188) * '\x02' & 4U |
               (byte)(*(uint *)(lVar2 + 0x178) >> 1) & 1 | (byte)*(undefined4 *)(lVar2 + 0x180) & 2)
        < 3) {
      return;
    }
    *(float *)(lVar2 + 0x25c) = *(float *)(lVar2 + 0x164) - *(float *)(lVar2 + 0x160);
    return;
  }
  fVar12 = *(float *)(param_1 + 0xd);
  fVar16 = 0.0;
  iVar5 = *(int *)((longlong)param_1 + 100);
  if ((fVar12 < 0.0) || (DAT_1808ac34c <= fVar12)) {
    local_res8[0] = 0.0;
    fVar12 = (float)FUN_180512fd0(fVar12,local_res8);
    if (fVar12 < 0.0) {
      fVar12 = fVar12 + fVar13;
      if (fVar12 < fVar13) {
        local_res8[0] = local_res8[0] + fVar21;
      }
      else {
        fVar12 = 0.0;
      }
    }
    iVar5 = iVar5 + (int)local_res8[0];
  }
  local_res8[0] = 0.0;
  uVar15 = FUN_180512fd0(*(float *)(lVar2 + 0x2d0) * DAT_1808ac1f4 * DAT_1808acab0,local_res8);
  fVar17 = DAT_1808ac00c;
  auVar19._8_4_ = (int)extraout_XMM0_Qb;
  auVar19._0_8_ = uVar15;
  auVar19._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar14 = local_res8[0];
  if ((float)uVar15 < 0.0) {
    auVar19._0_4_ = (float)uVar15 + fVar13;
    if (auVar19._0_4_ < fVar13) {
      fVar14 = local_res8[0] + fVar21;
    }
    else {
      auVar19 = ZEXT816(0);
    }
  }
  fVar21 = *(float *)(lVar2 + 0x274);
  iVar1 = *(int *)(lVar2 + 0x270);
  iVar9 = iVar1 - (int)fVar14;
  fVar18 = (auVar19._0_4_ + DAT_1808accc8) - DAT_1808accc8;
  fVar20 = fVar21 - fVar18;
  if (fVar20 < 0.0) {
    fVar20 = fVar20 + fVar13;
    if (fVar20 < fVar13) {
      iVar9 = iVar9 + -1;
    }
    else {
      fVar20 = 0.0;
    }
  }
  iVar10 = iVar1 + (int)fVar14;
  fVar18 = fVar21 + fVar18;
  if ((fVar13 <= fVar18) && (!NAN(fVar18))) {
    iVar10 = iVar10 + 1;
    fVar18 = fVar18 - fVar13;
  }
  if (2 < (byte)((char)*(undefined8 *)(lVar2 + 0x188) * '\x02' & 4U |
                 (byte)(*(ulonglong *)(lVar2 + 0x178) >> 1) & 1 |
                (byte)*(undefined4 *)(lVar2 + 0x180) & 2)) {
    fVar14 = fVar12 - *(float *)(lVar2 + 0x264);
    iVar6 = iVar5 - *(int *)(lVar2 + 0x260);
    if (0.0 <= fVar14) {
LAB_18044df70:
      fVar16 = fVar14;
    }
    else if (fVar14 + fVar13 < fVar13) {
      iVar6 = iVar6 + -1;
      fVar14 = fVar14 + fVar13;
      goto LAB_18044df70;
    }
    *(int *)(lVar2 + 0x260) = iVar5;
    *(float *)(lVar2 + 0x264) = fVar12;
    fVar13 = (float)iVar6 * fVar17 + fVar16 * fVar17;
    if (*(float *)(lVar2 + 0x304) <= fVar13 && fVar13 != *(float *)(lVar2 + 0x304)) {
      iVar1 = *(int *)(lVar2 + 0x268);
      if (iVar1 == iVar9) {
        bVar11 = *(float *)(lVar2 + 0x26c) < fVar20;
      }
      else {
        bVar11 = iVar1 < iVar9;
      }
      if (bVar11) {
LAB_18044dfe4:
        *(float *)(lVar2 + 0x26c) = fVar12;
        *(int *)(lVar2 + 0x268) = iVar5;
        FUN_18044d200(param_1);
        return;
      }
      if (iVar1 == iVar10) {
        bVar11 = fVar18 < *(float *)(lVar2 + 0x26c);
      }
      else {
        bVar11 = iVar10 <= iVar1;
      }
      if (bVar11) goto LAB_18044dfe4;
      goto LAB_18044e08f;
    }
  }
  if (((*(ulonglong *)(lVar2 + 0x178) & 2) == 0) || (*(char *)(lVar2 + 0x2ca) == '\0')) {
    iVar5 = *(int *)(lVar2 + 0x268);
    fVar13 = *(float *)(lVar2 + 0x26c);
    if (iVar5 == iVar9) {
      if (((fVar13 < fVar20) || (NAN(fVar13))) || (NAN(fVar20))) goto LAB_18044e030;
    }
    else if (iVar5 < iVar9) goto LAB_18044e030;
    if (iVar5 == iVar10) {
      bVar11 = fVar13 < fVar18;
    }
    else {
      bVar11 = iVar5 < iVar10;
    }
    if (!bVar11) {
      if (iVar5 == iVar1 + 1) {
        bVar11 = fVar13 < fVar21;
      }
      else {
        bVar11 = iVar5 <= iVar1;
      }
      if (!bVar11) {
LAB_18044e030:
        *(undefined4 *)(lVar2 + 0x268) = 0xfffffc00;
        return;
      }
    }
  }
LAB_18044e08f:
  FUN_18044d200(param_1);
  return;
}



/* ===== 18044e0a0 FUN_18044e0a0 ===== */

void FUN_18044e0a0(longlong *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar17 = DAT_1808ac34c;
  lVar2 = *param_1;
  fVar15 = 0.0;
  if (*(float *)(lVar2 + 0x124) == 0.0) {
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar18 = *(float *)(param_1 + 8) * param_2[1] + fVar1 * param_2[2] +
             *(float *)((longlong)param_1 + 0x3c) * *param_2;
    fVar19 = param_3 - fVar18;
    if (0.0 < fVar19) {
      uVar3 = *(ulonglong *)(lVar2 + 0x178);
      if (((uVar3 & 4) == 0) && (*(char *)(lVar2 + 0x201) == '\0')) {
        bVar11 = (byte)(*(uint *)(lVar2 + 0x68) >> 1) & 1;
      }
      else {
        bVar11 = 1;
      }
      if ((*(float *)(lVar2 + 0x78) == 0.0) ||
         (bVar7 = true, (int)(*(float *)(lVar2 + 0x78) * DAT_1808ac710 + DAT_1808ac34c) < 2)) {
        bVar7 = false;
      }
      if (param_3 <= DAT_1808acb90) {
        param_3 = DAT_1808acb90;
      }
      bVar6 = false;
      if ((*(char *)(lVar2 + 0x349) == '\0') || (lVar4 = *(longlong *)(lVar2 + 0x7b0), lVar4 == 0))
      {
        fVar12 = DAT_1808ac34c;
        fVar16 = param_3;
      }
      else {
        lVar5 = *(longlong *)(lVar2 + 0x7a8);
        if (lVar5 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_180011200((ulonglong)DAT_180c87400 + lVar5);
        }
        if (DAT_180c87410 == 0) {
          fVar12 = 0.0;
        }
        else {
          uVar10 = 0;
          if (uVar8 < 2) {
            uVar10 = uVar8;
          }
          fVar12 = (float)FUN_18000f3d0((int)(uVar10 << 2) + lVar4 + (ulonglong)DAT_180c87410);
        }
        if ((((lVar5 != 0) && (iVar9 = FUN_180011200((ulonglong)DAT_180c87404 + lVar5), 0 < iVar9))
            && (iVar9 = FUN_180011200((ulonglong)DAT_180c87414 + lVar4), 1 < iVar9)) &&
           (fVar12 * DAT_1808ac200 < DAT_1808acb0c)) {
          bVar6 = true;
        }
        fVar16 = fVar12 / DAT_1808acb90;
        if (fVar17 <= fVar12 / DAT_1808acb90) {
          fVar16 = fVar17;
        }
        if (bVar11 == 0) {
          fVar12 = fVar16;
        }
        else {
          fVar12 = fVar17;
        }
        if ((uVar3 >> 0x10 & 1) != 0) {
          fVar12 = fVar17;
        }
        if (bVar6) {
          fVar12 = fVar16;
        }
        fVar16 = fVar16 * param_3;
      }
      fVar20 = fVar17;
      if (bVar7) {
        fVar20 = *(float *)(lVar2 + 0x2f4);
      }
      if (bVar11 == 0) {
        if ((uVar3 >> 0x10 & 1) == 0) {
          fVar18 = fVar12 * fVar20;
        }
        else {
          fVar14 = fVar12;
          if (*(char *)(lVar2 + 0x139) == '\0') {
            fVar14 = fVar12 * DAT_1808ac200;
          }
          fVar13 = 0.0;
          if (0.0 <= fVar18) {
            fVar13 = fVar18;
          }
          fVar18 = fVar12;
          if (!bVar6) {
            fVar18 = fVar14;
          }
          fVar13 = fVar13 - (fVar16 * fVar20 * DAT_1808ac200 - DAT_1808ac750);
          if (0.0 < fVar13) {
            fVar12 = fVar17 - fVar13 / DAT_1808ac750;
            if (0.0 <= fVar12) {
              if (fVar12 <= fVar17) {
                fVar17 = fVar12;
              }
              param_4 = param_4 * fVar17;
            }
            else {
              param_4 = param_4 * 0.0;
            }
          }
        }
      }
      else {
        fVar18 = DAT_1808ac16c;
        if (fVar12 <= DAT_1808ac16c) {
          fVar18 = fVar12;
        }
      }
      fVar17 = *(float *)(lVar2 + 0x160);
      if ((0.0 < fVar17) &&
         (fVar18 = param_3 * fVar18 * param_4 * *(float *)(lVar2 + 0x1f0) -
                   *(float *)(param_1 + 0xc) / fVar17, 0.0 < fVar18)) {
        fVar15 = fVar18 * fVar17;
        if (fVar19 < fVar15) {
          fVar18 = fVar19 / fVar17;
          fVar15 = fVar19;
        }
        *(float *)(param_1 + 0x16) = fVar18 * *param_2 + *(float *)(param_1 + 0x16);
        *(float *)((longlong)param_1 + 0xb4) =
             fVar18 * param_2[1] + *(float *)((longlong)param_1 + 0xb4);
        *(float *)(param_1 + 0x17) = fVar18 * param_2[2] + *(float *)(param_1 + 0x17);
      }
      *(float *)((longlong)param_1 + 0x3c) =
           fVar15 * *param_2 + *(float *)((longlong)param_1 + 0x3c);
      *(float *)(param_1 + 8) = fVar15 * param_2[1] + *(float *)(param_1 + 8);
      *(float *)((longlong)param_1 + 0x44) = fVar15 * param_2[2] + fVar1;
    }
  }
  return;
}



/* ===== 18044e4a0 FUN_18044e4a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044e4a0(longlong *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
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
  float fVar27;
  undefined1 auStack_288 [32];
  float *local_268;
  float *local_260;
  float *local_258;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  undefined4 local_1f8;
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
  float local_128 [16];
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_288;
  lVar2 = *param_1;
  FUN_180540170(&local_1e8,0,0xc0);
  fVar16 = *(float *)(param_1 + 8);
  fVar20 = *(float *)((longlong)param_1 + 0x44);
  fVar1 = *(float *)((longlong)param_1 + 0x3c);
  local_1b8 = _DAT_1808adae0;
  uStack_1b0 = _UNK_1808adae8;
  local_1a8 = _DAT_1808adae0;
  uStack_1a0 = _UNK_1808adae8;
  uStack_140 = CONCAT44(0x3f800000,(undefined4)uStack_140);
  local_138 = CONCAT44(0xffffffff,(undefined4)local_138);
  uStack_130 = CONCAT62(uStack_130._2_6_,0xffff);
  local_218 = fVar20 * fVar20 + fVar16 * fVar16 + fVar1 * fVar1;
  local_238 = fVar1;
  local_208 = fVar20;
  local_204 = fVar16;
  if (local_218 < 0.0) {
    local_218 = (float)FUN_18051af10();
  }
  else {
    local_218 = SQRT(local_218);
  }
  iVar14 = 0;
  local_244 = *(float *)(lVar2 + 0x160);
  uVar15 = *(uint *)(lVar2 + 0x68) & 1;
  fVar19 = fVar20;
  fVar21 = fVar1;
  fVar22 = fVar16;
  if ((uVar15 == 0) && (lVar6 = FUN_18044aa20(param_1), lVar6 != 0)) {
    param_1[8] = 0;
    fVar19 = 0.0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    fVar22 = 0.0;
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
    fVar21 = 0.0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    param_1[0x18] = 0;
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  local_128[8] = 0.0;
  local_128[9] = 0.0;
  local_128[10] = 0.0;
  local_128[0xb] = 0.0;
  local_128[0xc] = 0.0;
  local_128[0xd] = 0.0;
  local_128[0xe] = 0.0;
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  uVar3 = local_128._0_8_;
  local_128[2] = 0.0;
  local_128[3] = 0.0;
  uVar4 = local_128._8_8_;
  local_128[4] = 0.0;
  local_128[5] = 0.0;
  local_128[6] = 0.0;
  local_128[7] = 0.0;
  fVar18 = fVar19 * fVar19 + fVar22 * fVar22 + fVar21 * fVar21;
  if (fVar18 != 0.0) {
    if (local_218 <= DAT_1808ac34c) {
      local_218 = DAT_1808ac34c;
    }
    local_128[0] = 0.0;
    iVar9 = 0;
    local_128[2] = 0.0;
    local_128[1] = 0.0;
    local_248 = 0.0;
    fVar17 = local_128[0];
    fVar23 = local_238;
    fVar24 = local_238;
    fVar25 = local_238;
    fVar26 = local_128[2];
    fVar27 = local_128[1];
    local_240 = fVar16;
    local_23c = fVar20;
    local_234 = fVar1;
    local_128._0_8_ = uVar3;
    local_128._8_8_ = uVar4;
    do {
      fVar19 = fVar19 * local_244;
      if (((uVar15 == 0) && (*(char *)(lVar2 + 0x2cd) != '\0')) && (local_244 != 0.0)) {
        fVar16 = fVar19 + *(float *)(lVar2 + 0x1e8);
        fVar20 = (fVar19 + DAT_1808accd0) - DAT_1808accd0;
        local_220 = ((fVar16 - fVar20) + fVar20 + DAT_1808accd0 + *(float *)(param_1 + 7)) -
                    DAT_1808accd0;
        *(float *)(lVar2 + 0x1e8) = fVar16 - (local_220 - *(float *)(param_1 + 7));
      }
      else {
        local_220 = fVar19 + *(float *)(param_1 + 7);
      }
      fVar16 = DAT_1808ac040;
      local_228 = *(float *)(param_1 + 6) + fVar21 * local_244;
      local_224 = *(float *)((longlong)param_1 + 0x34) + fVar22 * local_244;
      if (iVar9 == 1) {
        local_220 = fVar26 * DAT_1808ac040 + local_220;
        local_224 = fVar27 * DAT_1808ac040 + local_224;
        local_228 = fVar17 * DAT_1808ac040 + local_228;
      }
      if (((param_2 == (float *)0x0) || (param_3 == (undefined8 *)0x0)) ||
         ((*param_2 != local_228 || ((param_2[1] != local_224 || (param_2[2] != local_220)))))) {
        puVar13 = &DAT_1806cc1a0;
        local_1f8 = (undefined4)param_1[7];
        local_268 = (float *)&local_1e8;
        if (*(char *)(*param_1 + 0x200) != '\0') {
          puVar13 = &DAT_1806cc260;
        }
        local_200 = *(float *)(param_1 + 6);
        local_1fc = *(float *)((longlong)param_1 + 0x34);
        FUN_180449f00(param_1,&local_200,&local_228,puVar13);
      }
      else {
        local_1e8 = *param_3;
        uStack_1e0 = param_3[1];
        local_1d8 = param_3[2];
        uStack_1d0 = param_3[3];
        local_1c8 = param_3[4];
        uStack_1c0 = param_3[5];
        local_1b8 = param_3[6];
        uStack_1b0 = param_3[7];
        local_1a8 = param_3[8];
        uStack_1a0 = param_3[9];
        local_198 = param_3[10];
        uStack_190 = param_3[0xb];
        local_188 = param_3[0xc];
        uStack_180 = param_3[0xd];
        local_178 = param_3[0xe];
        uStack_170 = param_3[0xf];
        local_168 = param_3[0x10];
        uStack_160 = param_3[0x11];
        local_158 = param_3[0x12];
        uStack_150 = param_3[0x13];
        local_148 = param_3[0x14];
        uStack_140 = param_3[0x15];
        local_138 = param_3[0x16];
        uStack_130 = param_3[0x17];
      }
      fVar20 = DAT_1808ac34c;
      local_230 = uStack_140._4_4_;
      if ((local_248 == 0.0) && (uStack_140._4_4_ < DAT_1808ac34c)) {
        if (fVar18 < 0.0) {
          fVar18 = (float)FUN_18051af10();
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        if ((fVar16 <= fVar18 * local_244) && (fVar18 * local_244 * local_230 < fVar16)) {
          uStack_140 = uStack_140 & 0xffffffff;
          local_230 = 0.0;
        }
      }
      if (fVar16 < local_230 * local_218) {
        iVar9 = 0;
        local_234 = *(float *)((longlong)param_1 + 0x3c);
        local_240 = *(float *)(param_1 + 8);
        local_23c = *(float *)((longlong)param_1 + 0x44);
        *(undefined4 *)(param_1 + 6) = local_168._4_4_;
        *(undefined4 *)((longlong)param_1 + 0x34) = (undefined4)uStack_160;
        *(undefined4 *)(param_1 + 7) = uStack_160._4_4_;
      }
      fVar18 = local_234;
      fVar1 = local_23c;
      fVar16 = local_240;
      local_248 = local_248 + local_230;
      if (local_230 == fVar20) break;
      if (4 < iVar9) {
        param_1[8] = 0;
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
        break;
      }
      fVar20 = (float)local_158;
      fVar19 = local_158._4_4_;
      fVar21 = (float)uStack_150;
      if ((((uVar15 == 0) &&
           (*(float *)((longlong)param_1 + 0x44) <= 0.0 &&
            *(float *)((longlong)param_1 + 0x44) != 0.0)) &&
          (*(float *)(lVar2 + 0x300) <= (float)uStack_150)) &&
         (cVar5 = FUN_18044a890(param_1,&local_1e8), cVar5 != '\0')) {
        fVar22 = *(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
                 *(float *)((longlong)param_1 + 0x3c) * *(float *)((longlong)param_1 + 0x3c);
        if (fVar22 < 0.0) {
          fVar22 = (float)FUN_18051af10();
        }
        else {
          fVar22 = SQRT(fVar22);
        }
        if (fVar22 < DAT_1808ac34c) {
          param_1[8] = 0;
          *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
          goto LAB_18044ef5d;
        }
      }
      lVar6 = (longlong)iVar9;
      local_128[lVar6 * 3] = fVar20;
      local_128[lVar6 * 3 + 1] = fVar19;
      local_128[lVar6 * 3 + 2] = fVar21;
      if (((iVar9 == 0) && (*(char *)(lVar2 + 0x70) == '\x02')) &&
         (lVar6 = FUN_1804320a0(*(undefined4 *)(lVar2 + 0x6c)), lVar6 == 0)) {
        if (local_128[2] < *(float *)(lVar2 + 0x2fc) || local_128[2] == *(float *)(lVar2 + 0x2fc)) {
          fVar16 = (DAT_1808ac34c - *(float *)(lVar2 + 0x1f0)) * *(float *)(lVar2 + 0x2ec) +
                   DAT_1808ac34c;
        }
        else {
          fVar16 = DAT_1808ac34c;
        }
        fVar16 = (local_128[1] * local_240 + local_128[2] * fVar1 + local_128[0] * fVar18) *
                 (float)((uint)fVar16 ^ DAT_1808adec0);
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar16 = fVar16 + DAT_1808ac040;
        fVar21 = local_128[0] * fVar16 + fVar18;
        fVar22 = local_128[1] * fVar16 + local_240;
        *(float *)((longlong)param_1 + 0x3c) = fVar21;
        fVar19 = local_128[2] * fVar16 + local_23c;
        *(float *)(param_1 + 8) = fVar22;
        *(float *)((longlong)param_1 + 0x44) = fVar19;
        fVar17 = local_128[0];
        fVar26 = local_128[2];
        fVar27 = local_128[1];
        iVar9 = 1;
        local_240 = fVar22;
        local_23c = fVar19;
        local_234 = fVar21;
      }
      else {
        iVar10 = iVar9 + 1;
        uVar12 = 0;
        fVar22 = fVar23;
        fVar21 = fVar24;
        fVar19 = fVar25;
        if (0 < iVar10) {
          do {
            iVar11 = (int)uVar12;
            iVar7 = 0;
            fVar20 = (float)((uint)(local_128[uVar12 * 3 + 2] * fVar1 +
                                    local_128[uVar12 * 3 + 1] * fVar16 +
                                   local_128[uVar12 * 3] * fVar18) ^ DAT_1808adec0);
            if (fVar20 <= 0.0) {
              fVar20 = 0.0;
            }
            fVar20 = fVar20 + DAT_1808ac040;
            fVar21 = local_128[uVar12 * 3] * fVar20 + fVar18;
            fVar22 = local_128[uVar12 * 3 + 1] * fVar20 + fVar16;
            fVar19 = local_128[uVar12 * 3 + 2] * fVar20 + fVar1;
            if (iVar10 < 4) goto LAB_18044ecf7;
            do {
              lVar6 = (longlong)iVar7;
              if ((((iVar7 != iVar11) &&
                   (iVar8 = iVar7,
                   fVar22 * local_128[lVar6 * 3 + 1] + fVar19 * local_128[lVar6 * 3 + 2] +
                   fVar21 * local_128[lVar6 * 3] < 0.0)) ||
                  (((iVar8 = iVar7 + 1, iVar8 != iVar11 &&
                    (fVar22 * local_128[lVar6 * 3 + 4] + fVar19 * local_128[lVar6 * 3 + 5] +
                     fVar21 * local_128[lVar6 * 3 + 3] < 0.0)) ||
                   ((iVar8 = iVar7 + 2, iVar8 != iVar11 &&
                    (fVar22 * local_128[lVar6 * 3 + 7] + fVar19 * local_128[lVar6 * 3 + 8] +
                     fVar21 * local_128[lVar6 * 3 + 6] < 0.0)))))) ||
                 ((iVar8 = iVar7 + 3, iVar8 != iVar11 &&
                  (fVar22 * local_128[lVar6 * 3 + 10] + fVar19 * local_128[lVar6 * 3 + 0xb] +
                   fVar21 * local_128[lVar6 * 3 + 9] < 0.0)))) goto LAB_18044ed37;
              iVar7 = iVar7 + 4;
            } while (iVar7 < iVar9 + -2);
            for (; iVar8 = iVar7, iVar7 < iVar10; iVar7 = iVar7 + 1) {
LAB_18044ecf7:
              if ((iVar7 != iVar11) &&
                 (lVar6 = (longlong)iVar7,
                 fVar22 * local_128[lVar6 * 3 + 1] + fVar19 * local_128[lVar6 * 3 + 2] +
                 fVar21 * local_128[lVar6 * 3] < 0.0)) goto LAB_18044ed39;
            }
LAB_18044ed37:
            if (iVar8 == iVar10) break;
LAB_18044ed39:
            uVar12 = (ulonglong)(iVar11 + 1U);
          } while ((int)(iVar11 + 1U) < iVar10);
        }
        fVar26 = local_128[2];
        fVar27 = local_128[1];
        local_22c = local_128[0];
        *(float *)((longlong)param_1 + 0x3c) = fVar21;
        *(float *)(param_1 + 8) = fVar22;
        *(float *)((longlong)param_1 + 0x44) = fVar19;
        iVar9 = iVar10;
        if ((int)uVar12 == iVar10) {
          if (iVar10 != 2) {
            param_1[8] = 0;
            *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
            *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
            *(undefined4 *)(param_1 + 0x16) = 0;
            param_1[0x18] = 0;
            *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
            goto LAB_18044ef5d;
          }
          fVar1 = local_128[5];
          local_258 = &local_210;
          fVar20 = local_128[4];
          fVar16 = local_128[3];
          local_260 = &local_214;
          local_268 = &local_20c;
          FUN_180449010();
          fVar19 = fVar22 * local_214 + fVar19 * local_210 + fVar21 * local_20c;
          fVar21 = fVar16 * 0.0 + local_22c * 0.0 + fVar19 * local_20c;
          *(float *)((longlong)param_1 + 0x3c) = fVar21;
          fVar22 = fVar20 * 0.0 + fVar27 * 0.0 + fVar19 * local_214;
          *(float *)(param_1 + 8) = fVar22;
          fVar19 = fVar1 * 0.0 + fVar26 * 0.0 + fVar19 * local_210;
          *(float *)((longlong)param_1 + 0x44) = fVar19;
        }
        fVar17 = local_22c;
        if (fVar19 * local_208 + fVar22 * local_204 + fVar21 * local_238 <= 0.0) {
          param_1[8] = 0;
          *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
          *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
          *(undefined4 *)(param_1 + 0x16) = 0;
          param_1[0x18] = 0;
          *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
          goto LAB_18044ef5d;
        }
      }
      if (iVar14 == 3) break;
      iVar14 = iVar14 + 1;
      local_244 = local_244 - local_230 * local_244;
      fVar18 = fVar19 * fVar19 + fVar22 * fVar22 + fVar21 * fVar21;
      fVar23 = fVar22;
      fVar24 = fVar21;
      fVar25 = fVar19;
    } while (fVar18 != 0.0);
LAB_18044ef5d:
    if ((local_248 == 0.0) && (0 < iVar9)) {
      param_1[8] = 0;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0x16) = 0;
      param_1[0x18] = 0;
      *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    }
  }
  return;
}



/* ===== 18044f0a0 FUN_18044f0a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18044f0a0(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 uVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined1 *local_220;
  float local_218;
  float local_214;
  float local_210;
  undefined4 local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  undefined8 local_1e8;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [48];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_110;
  float local_fc;
  undefined4 local_f4;
  undefined2 local_f0;
  char local_ed;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_248;
  lVar10 = *param_1;
  local_20c = (undefined4)param_1[7];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x3c);
  lVar11 = param_1[8];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x44);
  fVar6 = *(float *)(param_1 + 6);
  fVar7 = *(float *)((longlong)param_1 + 0x34);
  *(float *)((longlong)param_1 + 0x3c) = *param_3;
  *(float *)(param_1 + 8) = param_3[1];
  *(float *)((longlong)param_1 + 0x44) = param_3[2];
  *(float *)(param_1 + 6) = fVar2;
  *(float *)((longlong)param_1 + 0x34) = fVar3;
  *(float *)(param_1 + 7) = fVar4;
  FUN_180540170(local_1a8,0,0xc0);
  fVar8 = DAT_1808ac34c;
  pfVar15 = (float *)&DAT_1806cc1a0;
  local_178 = _DAT_1808adae0;
  uStack_170 = _UNK_1808adae8;
  local_168 = _DAT_1808adae0;
  uStack_160 = _UNK_1808adae8;
  local_f4 = 0xffffffff;
  puVar17 = &DAT_1806cc1a0;
  local_f0 = 0xffff;
  local_fc = 1.0;
  local_200 = *(float *)(lVar10 + 0x2f0) + DAT_1808ac040 + fVar4;
  local_228 = (longlong *)local_1a8;
  if (*(char *)(lVar10 + 0x200) != '\0') {
    puVar17 = &DAT_1806cc260;
  }
  local_218 = fVar2;
  local_214 = fVar3;
  local_210 = fVar4;
  local_208 = fVar2;
  local_204 = fVar3;
  FUN_180449f00(param_1,&local_218,&local_208,puVar17);
  if (0.0 < local_fc) {
    *(float *)(param_1 + 6) = local_124;
    *(float *)((longlong)param_1 + 0x34) = local_120;
    *(undefined4 *)(param_1 + 7) = local_11c;
  }
  uVar14 = 0;
  FUN_18044e4a0(param_1,0,0);
  local_210 = *(float *)(param_1 + 7);
  pfVar16 = (float *)&DAT_1806cc1ac;
  local_218 = *(float *)(param_1 + 6);
  local_214 = *(float *)((longlong)param_1 + 0x34);
  local_1f0 = local_210 - (*(float *)(lVar10 + 0x2f0) + DAT_1808ac040 + DAT_1808ac040);
  cVar9 = *(char *)(*param_1 + 0x200);
  uStack_1dc = 0;
  if (cVar9 != '\0') {
    pfVar16 = (float *)&DAT_1806cc26c;
    pfVar15 = (float *)&DAT_1806cc260;
  }
  uStack_1d8 = 0;
  fStack_1d4 = 0.0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  if (*pfVar16 == *pfVar15) {
    pfVar13 = (float *)&DAT_1806cc1b0;
    if (cVar9 != '\0') {
      pfVar13 = (float *)&DAT_1806cc270;
    }
    pfVar12 = (float *)&DAT_1806cc1a4;
    if (cVar9 != '\0') {
      pfVar12 = (float *)&DAT_1806cc264;
    }
    if (*pfVar13 != *pfVar12) goto LAB_18044f368;
    pfVar13 = (float *)&DAT_1806cc1b4;
    if (cVar9 != '\0') {
      pfVar13 = (float *)&DAT_1806cc274;
    }
    pfVar12 = (float *)&DAT_1806cc1a8;
    if (cVar9 != '\0') {
      pfVar12 = (float *)&DAT_1806cc268;
    }
    if (*pfVar13 != *pfVar12) goto LAB_18044f368;
    local_1e8 = *(undefined8 *)pfVar15;
    fStack_1e0 = pfVar15[2];
    uStack_1c0 = 0;
  }
  else {
LAB_18044f368:
    local_1e8 = *(undefined8 *)pfVar15;
    fStack_1e0 = pfVar15[2];
    fStack_1d4 = pfVar16[2];
    uStack_1dc = (undefined4)*(undefined8 *)pfVar16;
    uStack_1d8 = (undefined4)((ulonglong)*(undefined8 *)pfVar16 >> 0x20);
    uStack_1c0 = 2;
  }
  local_220 = local_1a8;
  local_228 = param_1 + 0x1c;
  local_1f8 = local_218;
  local_1f4 = local_214;
  FUN_18044a020(param_1,&local_1e8,&local_218,&local_1f8);
  if ((((local_ed != '\0') || (local_fc < fVar8)) && (*(float *)(lVar10 + 0x2fc) <= local_110)) &&
     (0.0 < local_fc)) {
    uVar14 = 1;
    fVar2 = param_2[1];
    fVar3 = param_3[1];
    fVar4 = *param_3;
    *(undefined4 *)(param_1 + 7) = local_11c;
    fVar8 = *param_2;
    *(float *)(param_1 + 6) = local_124;
    *(float *)((longlong)param_1 + 0x34) = local_120;
    if ((fVar7 - fVar2) * fVar3 + (fVar6 - fVar8) * fVar4 <=
        (local_120 - fVar2) * fVar3 + (local_124 - fVar8) * fVar4) goto LAB_18044f488;
  }
  *(undefined4 *)(param_1 + 7) = local_20c;
  *(float *)(param_1 + 6) = fVar6;
  *(float *)((longlong)param_1 + 0x34) = fVar7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(int *)(param_1 + 8) = (int)lVar11;
LAB_18044f488:
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  return uVar14;
}



/* ===== 18044f4f0 FUN_18044f4f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044f4f0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  undefined8 local_118;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [48];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_40;
  float local_2c;
  undefined4 local_24;
  undefined2 local_20;
  char local_1d;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_168;
  lVar2 = *param_1;
  if (((*(byte *)(lVar2 + 0x158) & 8) != 0) && (*(float *)(param_1 + 0xe) != DAT_1808ac34c)) {
    return;
  }
  FUN_180540170(local_d8,0,0xc0);
  pfVar5 = (float *)&DAT_1806cc1a0;
  pfVar6 = (float *)&DAT_1806cc1ac;
  local_138 = (undefined4)param_1[6];
  local_134 = *(undefined4 *)((longlong)param_1 + 0x34);
  local_a8 = _DAT_1808adae0;
  uStack_a0 = _UNK_1808adae8;
  local_98 = _DAT_1808adae0;
  uStack_90 = _UNK_1808adae8;
  local_120 = *(float *)(param_1 + 7) + DAT_1808ac540;
  local_24 = 0xffffffff;
  local_20 = 0xffff;
  local_2c = 1.0;
  local_130 = *(float *)(param_1 + 7) - *(float *)(lVar2 + 0x2f0);
  cVar1 = *(char *)(lVar2 + 0x200);
  uStack_10c = 0;
  if (cVar1 != '\0') {
    pfVar5 = (float *)&DAT_1806cc260;
    pfVar6 = (float *)&DAT_1806cc26c;
  }
  uStack_108 = 0;
  fStack_104 = 0.0;
  uStack_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  if (*pfVar6 == *pfVar5) {
    pfVar4 = (float *)&DAT_1806cc1b0;
    if (cVar1 != '\0') {
      pfVar4 = (float *)&DAT_1806cc270;
    }
    pfVar3 = (float *)&DAT_1806cc1a4;
    if (cVar1 != '\0') {
      pfVar3 = (float *)&DAT_1806cc264;
    }
    if (*pfVar4 == *pfVar3) {
      pfVar4 = (float *)&DAT_1806cc1b4;
      if (cVar1 != '\0') {
        pfVar4 = (float *)&DAT_1806cc274;
      }
      pfVar3 = (float *)&DAT_1806cc1a8;
      if (cVar1 != '\0') {
        pfVar3 = (float *)&DAT_1806cc268;
      }
      if (*pfVar4 == *pfVar3) {
        local_118 = *(undefined8 *)pfVar5;
        fStack_110 = pfVar5[2];
        uStack_f0 = 0;
        goto LAB_18044f6b4;
      }
    }
  }
  local_118 = *(undefined8 *)pfVar5;
  fStack_110 = pfVar5[2];
  fStack_104 = pfVar6[2];
  uStack_10c = (undefined4)*(undefined8 *)pfVar6;
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)pfVar6 >> 0x20);
  uStack_f0 = 2;
LAB_18044f6b4:
  local_140 = local_d8;
  local_148 = param_1 + 0x1c;
  local_128 = local_138;
  local_124 = local_134;
  FUN_18044a020(param_1,&local_118,&local_128,&local_138);
  if ((((0.0 < local_2c) && (local_2c < DAT_1808ac34c)) && (local_1d == '\0')) &&
     ((*(float *)(lVar2 + 0x2fc) <= local_40 &&
      (DAT_1808ac00c < (float)((uint)(*(float *)(param_1 + 7) - local_4c) & _DAT_1808ade90))))) {
    *(undefined4 *)(param_1 + 6) = local_54;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_50;
    *(float *)(param_1 + 7) = local_4c;
  }
  return;
}



/* ===== 18044f770 FUN_18044f770 ===== */

void FUN_18044f770(float param_1,float param_2,float *param_3,float *param_4)

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
    if (fVar5 == 0.0) {
      *param_3 = 0.0;
      *param_4 = 0.0;
    }
    else {
      dVar2 = (double)param_1;
      dVar1 = (double)param_2;
      dVar4 = dVar2 * dVar2 + dVar1 * dVar1;
      if (dVar4 < 0.0) {
        dVar4 = (double)FUN_18051ff20(dVar4);
      }
      else {
        dVar4 = SQRT(dVar4);
      }
      dVar4 = DAT_1808ac500 / dVar4;
      *param_3 = (float)(dVar2 * dVar4);
      *param_4 = (float)(dVar1 * dVar4);
    }
  }
  else {
    fVar3 = DAT_1808ac34c / fVar3;
    *param_3 = fVar3 * param_1;
    *param_4 = fVar3 * param_2;
  }
  return;
}



/* ===== 18044f8a0 FUN_18044f8a0 ===== */

void FUN_18044f8a0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  if (NAN(*(float *)((longlong)param_1 + 0x3c))) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (NAN(*(float *)(param_1 + 8))) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (NAN(*(float *)((longlong)param_1 + 0x44))) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  if (NAN(*(float *)(param_1 + 6))) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (NAN(*(float *)((longlong)param_1 + 0x34))) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  if (NAN(*(float *)(param_1 + 7))) {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  fVar1 = *(float *)(*param_1 + 0x308);
  fVar2 = (float)((uint)fVar1 ^ DAT_1808adec0);
  if (fVar2 <= *(float *)((longlong)param_1 + 0x3c)) {
    if (fVar1 < *(float *)((longlong)param_1 + 0x3c)) {
      *(float *)((longlong)param_1 + 0x3c) = fVar1;
    }
  }
  else {
    *(float *)((longlong)param_1 + 0x3c) = fVar2;
  }
  if (fVar2 <= *(float *)(param_1 + 8)) {
    if (fVar1 < *(float *)(param_1 + 8)) {
      *(float *)(param_1 + 8) = fVar1;
    }
  }
  else {
    *(float *)(param_1 + 8) = fVar2;
  }
  if (*(float *)((longlong)param_1 + 0x44) < fVar2) {
    *(float *)((longlong)param_1 + 0x44) = fVar2;
    return;
  }
  if (fVar1 < *(float *)((longlong)param_1 + 0x44)) {
    *(float *)((longlong)param_1 + 0x44) = fVar1;
  }
  return;
}



/* ===== 18044f960 FUN_18044f960 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18044f960(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
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
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_218 [32];
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float local_1d8 [2];
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8 [2];
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined1 local_188 [48];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_dc;
  undefined4 local_d4;
  undefined2 local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_218;
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x1e0) = 1;
  local_1a8[0] = *(float *)((longlong)param_1 + 0x144);
  local_1c0 = *(float *)(param_1 + 0x29);
  fVar19 = *(float *)(param_1 + 0x2a);
  fVar24 = *(float *)((longlong)param_1 + 0x154);
  local_1d8[0] = fVar24;
  local_1bc = fVar19;
  if (*(float *)((longlong)param_1 + 0x14c) != 0.0) {
    FUN_18044f770(param_1,local_1c0,local_1a8,&local_1c0);
  }
  fVar28 = local_1a8[0];
  fVar9 = local_1c0;
  if (*(float *)(param_1 + 0x2b) != 0.0) {
    FUN_18044f770();
    fVar19 = local_1bc;
    fVar24 = local_1d8[0];
  }
  fVar28 = *(float *)((longlong)param_1 + 0x1c) * fVar19 + *(float *)(param_1 + 3) * fVar28;
  fVar24 = *(float *)((longlong)param_1 + 0x1c) * fVar24 + *(float *)(param_1 + 3) * fVar9;
  *(float *)(param_1 + 0x15) = fVar28;
  fVar19 = *(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
           *(float *)((longlong)param_1 + 0x3c) * *(float *)((longlong)param_1 + 0x3c);
  *(float *)((longlong)param_1 + 0xac) = fVar24;
  if (fVar19 < 0.0) {
    fVar9 = (float)FUN_18051af10();
  }
  else {
    fVar9 = SQRT(fVar19);
  }
  fVar20 = DAT_1808ace94;
  fVar16 = DAT_1808acc90;
  dVar12 = DAT_1808ac7f0;
  dVar4 = DAT_1808ac7d8;
  dVar11 = DAT_1808ac650;
  dVar3 = DAT_1808ac4a8;
  dVar13 = DAT_1808ac178;
  if (*(char *)(lVar1 + 0x228) == '\0') {
    if (DAT_1808ace94 <= fVar9) {
      if (fVar9 <= DAT_1808acc90) {
        if (fVar19 == 0.0) {
          fVar27 = 0.0;
        }
        else {
          fVar19 = (float)((double)((longlong)
                                    ((double)(fVar9 - DAT_1808ace94) * DAT_1808ac650 + DAT_1808ac4a8
                                    ) & 0xffffffff) * DAT_1808ac178 * DAT_1808ac7f0 - DAT_1808ac7d8)
          ;
          fVar27 = DAT_1808acc90;
          if (fVar19 <= DAT_1808acc90) {
            fVar27 = fVar19;
          }
        }
      }
      else {
        fVar27 = DAT_1808acc90;
      }
    }
    else {
      fVar27 = DAT_1808ace94;
    }
    if ((*(float *)(lVar1 + 0x234) != fVar28) || (*(float *)(lVar1 + 0x238) != fVar24))
    goto LAB_18044fbe1;
LAB_18044fd1e:
    bVar2 = false;
  }
  else {
    if (*(float *)(lVar1 + 0x22c) == *(float *)(param_1 + 0xd)) {
      *(undefined1 *)(lVar1 + 0x228) = 0;
      if (fVar20 <= fVar9) {
        fVar27 = fVar16;
        if (fVar9 <= fVar16) {
          if (fVar19 == 0.0) {
            fVar27 = 0.0;
          }
          else {
            fVar19 = (float)((double)((longlong)((double)(fVar9 - fVar20) * dVar11 + dVar3) &
                                     0xffffffff) * dVar13 * dVar12 - dVar4);
            if (fVar19 <= fVar16) {
              fVar27 = fVar19;
            }
          }
        }
      }
      else {
        fVar27 = fVar20;
      }
      if (((*(float *)(lVar1 + 0x230) == fVar27) && (*(float *)(lVar1 + 0x234) == fVar28)) &&
         (*(float *)(lVar1 + 0x238) == fVar24)) goto LAB_18044fd1e;
LAB_18044fbe1:
      *(float *)(lVar1 + 0x230) = fVar27;
      *(undefined1 *)(lVar1 + 0x228) = 1;
      *(int *)(lVar1 + 0x22c) = (int)param_1[0xd];
      *(undefined1 *)((longlong)param_1 + 0xd5) = 1;
    }
    bVar2 = true;
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  bVar5 = false;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(lVar1 + 0x1dc) = 0;
  if (*(float *)(lVar1 + 0x124) == 0.0) {
    fVar19 = (float)*(undefined8 *)((longlong)param_1 + 0x3c);
    fVar9 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x3c) >> 0x20);
    local_1d8[0] = fVar19 * fVar19;
    fVar27 = fVar9 * fVar9 + local_1d8[0];
    local_1b8 = fVar9;
    fStack_1b4 = fVar9;
    fStack_1b0 = fVar9;
    fStack_1ac = fVar9;
    if (fVar27 < 0.0) {
      fVar22 = (float)FUN_18051af10();
      dVar13 = DAT_1808ac178;
      dVar11 = DAT_1808ac650;
    }
    else {
      fVar22 = SQRT(fVar27);
    }
    if (bVar2) {
      fVar20 = *(float *)(lVar1 + 0x230);
    }
    else if (fVar20 <= fVar22) {
      if (fVar22 <= fVar16) {
        if (fVar27 == 0.0) goto LAB_18044ff32;
        fVar21 = (float)((double)((longlong)((double)(fVar22 - fVar20) * dVar11 + DAT_1808ac4a8) &
                                 0xffffffff) * dVar13 * DAT_1808ac7f0 - DAT_1808ac7d8);
        fVar20 = fVar16;
        if (fVar21 <= fVar16) {
          fVar20 = fVar21;
        }
      }
      else {
        fVar20 = fVar16;
      }
    }
    if (DAT_1808ac0c0 <= fVar20) {
      if ((*(byte *)(lVar1 + 0x68) & 1) == 0) {
        fVar16 = 0.0;
      }
      else {
        if (fVar20 <= *(float *)(lVar1 + 0x328)) {
          fVar20 = *(float *)(lVar1 + 0x328);
        }
        fVar21 = *(float *)(lVar1 + 0x160);
        fVar20 = *(float *)(lVar1 + 800) * *(float *)(lVar1 + 0x1f0) * *(float *)(lVar1 + 0x8c) *
                 fVar20;
        fVar16 = fVar20 * fVar21 + 0.0;
        if ((0.0 < fVar27) && (0.0 < fVar21)) {
          if (fVar22 < fVar16) {
            fVar20 = fVar22 / fVar21;
          }
          local_1e8 = &local_1c0;
          local_1f0 = &local_1bc;
          local_1f8 = local_1d8;
          FUN_180449010();
          *(float *)(param_1 + 0x16) = *(float *)(param_1 + 0x16) - local_1d8[0] * fVar20;
          *(float *)((longlong)param_1 + 0xb4) =
               *(float *)((longlong)param_1 + 0xb4) - local_1bc * fVar20;
          *(float *)(param_1 + 0x17) = 0.0 - local_1c0 * fVar20;
        }
      }
      if (fVar16 <= fVar22) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = fVar16 - fVar22;
      }
      *(float *)(param_1 + 0xc) = fVar20;
      *(float *)((longlong)param_1 + 0x4c) = local_1b8;
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)((longlong)param_1 + 0x44);
      *(float *)(param_1 + 9) = fVar19;
      if (0.0 < fVar27) {
        fVar16 = fVar22 - fVar16;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar16 = fVar16 / fVar22;
        *(ulonglong *)((longlong)param_1 + 0x3c) = CONCAT44(fVar16 * fVar9,fVar16 * fVar19);
        if (NAN(fVar16 * 0.0)) {
          bVar5 = true;
        }
      }
    }
  }
LAB_18044ff32:
  fVar19 = *(float *)((longlong)param_1 + 0x3c);
  if (NAN(fVar19)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    fVar19 = 0.0;
  }
  fVar9 = *(float *)(param_1 + 8);
  if (NAN(fVar9)) {
    *(undefined4 *)(param_1 + 8) = 0;
    fVar9 = 0.0;
  }
  if (bVar5) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  if (NAN(*(float *)(param_1 + 6))) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (NAN(*(float *)((longlong)param_1 + 0x34))) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  if (NAN(*(float *)(param_1 + 7))) {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  fVar16 = *(float *)(*param_1 + 0x308);
  fVar20 = (float)((uint)fVar16 ^ DAT_1808adec0);
  if (fVar20 <= fVar19) {
    if (fVar16 < fVar19) {
      *(float *)((longlong)param_1 + 0x3c) = fVar16;
    }
  }
  else {
    *(float *)((longlong)param_1 + 0x3c) = fVar20;
  }
  if (fVar20 <= fVar9) {
    if (fVar16 < fVar9) {
      *(float *)(param_1 + 8) = fVar16;
    }
  }
  else {
    *(float *)(param_1 + 8) = fVar20;
  }
  fVar19 = fVar24 * fVar24 + 0.0 + fVar28 * fVar28;
  if (fVar19 < 0.0) {
    uVar10 = FUN_18051af10();
    fVar9 = (float)uVar10;
    uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
  }
  else {
    uVar23 = 0;
    fVar9 = SQRT(fVar19);
  }
  if ((fVar9 < DAT_1808abf54) || (DAT_1808accfc < fVar9)) {
    if (fVar19 == 0.0) {
      local_1c8 = 0.0;
      local_1cc = 0.0;
      fVar9 = 0.0;
      uVar23 = 0;
      local_1d0 = 0.0;
      goto LAB_18045011b;
    }
    dVar3 = (double)fVar24;
    dVar13 = (double)fVar28;
    dVar11 = dVar3 * dVar3 + dVar13 * dVar13;
    if (dVar11 < 0.0) {
      dVar11 = (double)FUN_18051ff20();
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    dVar12 = DAT_1808ac500 / dVar11;
    dVar4 = DAT_1808accc0;
    if (dVar11 <= DAT_1808accc0) {
      dVar4 = dVar11;
    }
    local_1d0 = (float)(dVar13 * dVar12);
    fVar9 = (float)dVar4;
    uVar23 = 0;
    local_1cc = (float)(dVar3 * dVar12);
    local_1c8 = (float)(dVar12 * 0.0);
  }
  else {
    local_1c8 = DAT_1808ac34c / fVar9;
    local_1d0 = local_1c8 * fVar28;
    local_1cc = local_1c8 * fVar24;
    local_1c8 = local_1c8 * 0.0;
  }
  if (fVar9 != 0.0) {
    fVar19 = *(float *)(param_1 + 2);
    if (fVar9 <= *(float *)(param_1 + 2)) {
      fVar19 = fVar9;
    }
    fVar9 = fVar19;
    uVar23 = 0;
  }
LAB_18045011b:
  fVar16 = local_1c8;
  fVar28 = local_1cc;
  fVar24 = local_1d0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  FUN_18044e0a0(param_1,&local_1d0,CONCAT44(uVar23,fVar9),*(undefined4 *)(lVar1 + 0x324));
  fVar20 = (float)*(undefined8 *)((longlong)param_1 + 0x3c);
  fVar27 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x3c) >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  fVar19 = *(float *)(param_1 + 2);
  local_1d8[0] = *(float *)(lVar1 + 0x160);
  local_1b8 = local_1d8[0];
  fStack_1b4 = local_1d8[0];
  fStack_1b0 = local_1d8[0];
  fStack_1ac = local_1d8[0];
  if (fVar27 * fVar27 + fVar20 * fVar20 <= fVar19 * fVar19) {
    fVar19 = 0.0;
    fVar22 = 0.0;
  }
  else {
    fVar22 = fVar27 * fVar27 + 0.0 + fVar20 * fVar20;
    if (fVar22 < 0.0) {
      fVar22 = (float)FUN_18051af10();
    }
    else {
      fVar22 = SQRT(fVar22);
    }
    fVar19 = fVar19 / fVar22;
    fVar21 = DAT_1808ac34c / local_1d8[0];
    fVar25 = fVar19 * fVar20;
    fVar26 = fVar19 * fVar27;
    fVar19 = fVar19 * 0.0;
    *(ulonglong *)((longlong)param_1 + 0x3c) = CONCAT44(fVar26,fVar25);
    *(float *)((longlong)param_1 + 0x44) = fVar19;
    fVar22 = fVar21 * fVar19 + 0.0;
    *(float *)(param_1 + 0x17) = fVar22;
    param_1[0x16] =
         CONCAT44((fVar26 - fVar27) * fVar21 + (float)((ulonglong)param_1[0x16] >> 0x20),
                  (fVar25 - fVar20) * fVar21 + (float)param_1[0x16]);
    fVar20 = fVar25;
    fVar27 = fVar26;
  }
  fVar25 = DAT_1808ac1f4;
  fVar21 = DAT_1808ac00c;
  fVar17 = (float)param_1[0x16];
  fVar18 = (float)((ulonglong)param_1[0x16] >> 0x20);
  fVar26 = fVar22 * local_1d8[0] * DAT_1808ac1f4;
  fVar14 = fVar17 * local_1b8 * _DAT_1808ad9f0;
  fVar15 = fVar18 * fStack_1b4 * _UNK_1808ad9f4;
  *(float *)((longlong)param_1 + 0xc4) = fVar26 + 0.0;
  *(ulonglong *)((longlong)param_1 + 0xbc) =
       CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xbc) >> 0x20) + fVar15,
                (float)*(undefined8 *)((longlong)param_1 + 0xbc) + fVar14);
  fVar14 = (fVar20 - fVar14) + *(float *)(lVar1 + 0x18);
  fVar21 = fVar21 - local_1d8[0] * fVar25;
  *(float *)((longlong)param_1 + 0x3c) = fVar14;
  fVar15 = (fVar27 - fVar15) + *(float *)(lVar1 + 0x1c);
  fVar20 = fVar21 * fVar17 + fVar14;
  *(float *)(param_1 + 8) = fVar15;
  fVar25 = (fVar19 - fVar26) + *(float *)(lVar1 + 0x20);
  fVar19 = fVar21 * fVar18 + fVar15;
  fVar27 = fVar21 * fVar22 + fVar25;
  *(float *)((longlong)param_1 + 0x44) = fVar25;
  if (DAT_1808ac34c <= fVar19 * fVar19 + fVar20 * fVar20 + fVar27 * fVar27) {
    fVar19 = *(float *)(param_1 + 6);
    fVar20 = *(float *)((longlong)param_1 + 0x34);
    lVar6 = param_1[7];
    local_1a0 = fVar14 * local_1d8[0] + fVar19;
    local_19c = fVar15 * local_1d8[0] + fVar20;
    local_198 = (int)lVar6;
    FUN_180540170(local_188,0,0xc0);
    puVar8 = &DAT_1806cc1a0;
    local_158 = _DAT_1808adae0;
    uStack_150 = _UNK_1808adae8;
    local_d4 = 0xffffffff;
    local_d0 = 0xffff;
    local_148 = _DAT_1808adae0;
    uStack_140 = _UNK_1808adae8;
    local_dc = 1.0;
    if (*(char *)(*param_1 + 0x200) != '\0') {
      puVar8 = &DAT_1806cc260;
    }
    local_1f8 = (float *)local_188;
    local_1b8 = fVar19;
    fStack_1b4 = fVar20;
    fStack_1b0 = (float)(int)lVar6;
    FUN_180449f00(param_1,&local_1b8,&local_1a0,puVar8);
    bVar5 = true;
    bVar2 = local_dc == DAT_1808ac34c;
    *(float *)(param_1 + 9) = fVar24 * fVar9 + *(float *)(param_1 + 9);
    *(float *)((longlong)param_1 + 0x4c) = fVar28 * fVar9 + *(float *)((longlong)param_1 + 0x4c);
    *(float *)(param_1 + 10) = fVar16 * fVar9 + *(float *)(param_1 + 10);
    if (bVar2) {
      *(undefined4 *)(param_1 + 6) = local_104;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_100;
      *(undefined4 *)(param_1 + 7) = local_fc;
    }
    else if (*(float *)(lVar1 + 0x124) == 0.0) {
      local_1d0 = *(float *)((longlong)param_1 + 0x3c);
      local_1cc = *(float *)(param_1 + 8);
      local_1c8 = *(float *)((longlong)param_1 + 0x44);
      local_1b8 = *(float *)(param_1 + 6);
      fStack_1b4 = *(float *)((longlong)param_1 + 0x34);
      fStack_1b0 = (float)param_1[7];
      FUN_18044e4a0(param_1,&local_1a0,local_188);
      cVar7 = FUN_18044f0a0(param_1,&local_1b8,&local_1d0);
      fVar9 = local_1c8;
      fVar24 = local_1cc;
      fVar19 = local_1d0;
      if ((cVar7 == '\0') &&
         (fVar28 = local_1c8 * local_1c8 + local_1cc * local_1cc + local_1d0 * local_1d0,
         0.0 < fVar28)) {
        if (fVar28 < 0.0) {
          fVar28 = (float)FUN_18051af10();
        }
        else {
          fVar28 = SQRT(fVar28);
        }
        if ((fVar28 < *(float *)(lVar1 + 0x32c)) &&
           ((*(float *)(param_1 + 3) != 0.0 || (*(float *)((longlong)param_1 + 0x1c) != 0.0)))) {
          fVar28 = *(float *)(lVar1 + 0x32c) / fVar28;
          local_1d0 = fVar19 * fVar28;
          local_1cc = fVar24 * fVar28;
          local_1c8 = fVar9 * fVar28;
          FUN_18044f0a0(param_1,&local_1b8,&local_1d0);
        }
      }
    }
    else {
      bVar5 = false;
    }
    *(float *)((longlong)param_1 + 0x3c) =
         (*(float *)((longlong)param_1 + 0x3c) - *(float *)(lVar1 + 0x18)) +
         *(float *)((longlong)param_1 + 0xbc);
    *(float *)(param_1 + 8) =
         (*(float *)(param_1 + 8) - *(float *)(lVar1 + 0x1c)) + *(float *)(param_1 + 0x18);
    *(float *)((longlong)param_1 + 0x44) =
         (*(float *)((longlong)param_1 + 0x44) - *(float *)(lVar1 + 0x20)) +
         *(float *)((longlong)param_1 + 0xc4);
    if (bVar5) {
      FUN_18044f4f0(param_1);
    }
  }
  else {
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    param_1[0x18] = 0;
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    *(float *)((longlong)param_1 + 0x3c) = 0.0 - *(float *)(lVar1 + 0x18);
    *(float *)(param_1 + 8) = 0.0 - *(float *)(lVar1 + 0x1c);
    *(float *)((longlong)param_1 + 0x44) = 0.0 - *(float *)(lVar1 + 0x20);
  }
  return;
}



/* ===== 1804506a0 FUN_1804506a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804506a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  longlong lVar8;
  float fVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar4 = *param_1;
  plVar10 = param_1;
  FUN_18044f8a0();
  bVar7 = false;
  if (((*(char *)(lVar4 + 0x1e1) != '\0') && ((*(byte *)(lVar4 + 0x68) & 1) == 0)) &&
     (fVar22 = *(float *)((longlong)plVar10 + 0x44), fVar22 <= 0.0)) {
    fVar11 = *(float *)(lVar4 + 0x2e8) * DAT_1808ac00c;
    *(undefined1 *)(lVar4 + 0x1e1) = 0;
    bVar7 = fVar11 * DAT_1808acd84 < fVar22;
  }
  fVar22 = *(float *)(plVar10 + 0x29);
  fVar11 = *(float *)((longlong)plVar10 + 0x144);
  fVar20 = fVar22 * fVar22 + 0.0 + fVar11 * fVar11;
  if (fVar20 < 0.0) {
    fVar12 = (float)FUN_18051af10(fVar20);
  }
  else {
    fVar12 = SQRT(fVar20);
  }
  fVar17 = DAT_1808accfc;
  dVar15 = DAT_1808ac500;
  fVar9 = DAT_1808ac34c;
  fVar18 = DAT_1808abf54;
  if ((fVar12 < DAT_1808abf54) || (DAT_1808accfc < fVar12)) {
    if (fVar20 == 0.0) {
      fVar22 = 0.0;
      fVar11 = 0.0;
    }
    else {
      dVar5 = (double)fVar11;
      dVar6 = (double)fVar22;
      dVar16 = dVar5 * dVar5 + dVar6 * dVar6;
      if (dVar16 < 0.0) {
        dVar16 = (double)FUN_18051ff20(dVar16);
      }
      else {
        dVar16 = SQRT(dVar16);
      }
      fVar11 = (float)(dVar5 * (dVar15 / dVar16));
      fVar22 = (float)(dVar6 * (dVar15 / dVar16));
    }
  }
  else {
    fVar22 = (DAT_1808ac34c / fVar12) * fVar22;
    fVar11 = (DAT_1808ac34c / fVar12) * fVar11;
  }
  fVar20 = *(float *)((longlong)param_1 + 0x154);
  fVar12 = *(float *)(param_1 + 0x2a);
  fVar21 = fVar20 * fVar20 + 0.0 + fVar12 * fVar12;
  if (fVar21 < 0.0) {
    fVar13 = (float)FUN_18051af10(fVar21);
  }
  else {
    fVar13 = SQRT(fVar21);
  }
  if ((fVar13 < fVar18) || (fVar17 < fVar13)) {
    if (fVar21 == 0.0) {
      fVar20 = 0.0;
      fVar12 = 0.0;
    }
    else {
      dVar5 = (double)fVar12;
      dVar6 = (double)fVar20;
      dVar16 = dVar5 * dVar5 + dVar6 * dVar6;
      if (dVar16 < 0.0) {
        dVar16 = (double)FUN_18051ff20(dVar16);
      }
      else {
        dVar16 = SQRT(dVar16);
      }
      fVar12 = (float)(dVar5 * (dVar15 / dVar16));
      fVar20 = (float)(dVar6 * (dVar15 / dVar16));
    }
  }
  else {
    fVar20 = (fVar9 / fVar13) * fVar20;
    fVar12 = (fVar9 / fVar13) * fVar12;
  }
  fVar12 = *(float *)((longlong)param_1 + 0x1c) * fVar12 + *(float *)(param_1 + 3) * fVar11;
  fVar11 = *(float *)((longlong)param_1 + 0x1c) * fVar20 + *(float *)(param_1 + 3) * fVar22;
  fVar22 = fVar11 * fVar11 + 0.0 + fVar12 * fVar12;
  if (fVar22 < 0.0) {
    fVar20 = (float)FUN_18051af10(fVar22);
  }
  else {
    fVar20 = SQRT(fVar22);
  }
  if ((fVar20 < fVar18) || (fVar17 < fVar20)) {
    if (fVar22 == 0.0) {
      fVar22 = 0.0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar20 = 0.0;
    }
    else {
      dVar6 = (double)fVar11;
      dVar5 = (double)fVar12;
      dVar16 = dVar6 * dVar6 + dVar5 * dVar5;
      if (dVar16 < 0.0) {
        dVar16 = (double)FUN_18051ff20(dVar16);
      }
      else {
        dVar16 = SQRT(dVar16);
      }
      dVar15 = dVar15 / dVar16;
      dVar14 = DAT_1808accc0;
      if (dVar16 <= DAT_1808accc0) {
        dVar14 = dVar16;
      }
      fVar12 = (float)(dVar5 * dVar15);
      fVar22 = (float)(dVar15 * 0.0);
      fVar11 = (float)(dVar6 * dVar15);
      fVar20 = (float)dVar14;
    }
  }
  else {
    fVar22 = fVar9 / fVar20;
    fVar12 = fVar22 * fVar12;
    fVar11 = fVar22 * fVar11;
    fVar22 = fVar22 * 0.0;
  }
  fVar18 = DAT_1808ac1f4;
  if (*(float *)(lVar4 + 0x124) == 0.0) {
    fVar17 = *(float *)(param_1 + 2);
    if (fVar20 <= *(float *)(param_1 + 2)) {
      fVar17 = fVar20;
    }
    fVar20 = *(float *)(lVar4 + 0x2f8);
    if (fVar17 <= *(float *)(lVar4 + 0x2f8)) {
      fVar20 = fVar17;
    }
    fVar20 = fVar20 - (*(float *)((longlong)param_1 + 0x44) * fVar22 +
                       *(float *)(param_1 + 8) * fVar11 +
                      *(float *)((longlong)param_1 + 0x3c) * fVar12);
    if (0.0 < fVar20) {
      if (*(float *)(lVar4 + 0x160) <= 0.0) {
        fVar20 = 0.0;
      }
      else {
        fVar21 = fVar17 * *(float *)(lVar4 + 0x330) * *(float *)(lVar4 + 0x1f0) *
                 *(float *)(lVar4 + 0x160);
        fVar17 = fVar21 * DAT_1808ac1f4;
        if (fVar17 <= fVar20) {
          if (fVar20 < fVar21) {
            fVar20 = fVar20 - fVar17;
          }
          else {
            fVar20 = fVar17;
          }
          *(float *)((longlong)param_1 + 0xbc) =
               fVar12 * fVar20 + *(float *)((longlong)param_1 + 0xbc);
          *(float *)(param_1 + 0x18) = fVar11 * fVar20 + *(float *)(param_1 + 0x18);
          *(float *)((longlong)param_1 + 0xc4) =
               fVar22 * fVar20 + *(float *)((longlong)param_1 + 0xc4);
          fVar20 = fVar17;
        }
      }
      *(float *)((longlong)param_1 + 0x3c) = *(float *)((longlong)param_1 + 0x3c) + fVar12 * fVar20;
      *(float *)(param_1 + 9) = fVar12 * fVar20 + *(float *)(param_1 + 9);
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + fVar11 * fVar20;
      *(float *)((longlong)param_1 + 0x4c) = fVar11 * fVar20 + *(float *)((longlong)param_1 + 0x4c);
      *(float *)((longlong)param_1 + 0x44) = *(float *)((longlong)param_1 + 0x44) + fVar22 * fVar20;
      *(float *)(param_1 + 10) = fVar22 * fVar20 + *(float *)(param_1 + 10);
    }
  }
  fVar20 = *(float *)(lVar4 + 0x160);
  fVar17 = fVar20;
  fVar21 = fVar20;
  if (*(float *)(lVar4 + 0x124) == 0.0) {
    fVar13 = *(float *)(lVar4 + 0x20);
    fVar19 = *(float *)(lVar4 + 0x2e8) * *(float *)(lVar4 + 0x7c);
    *(float *)((longlong)param_1 + 0x44) =
         (*(float *)((longlong)param_1 + 0x44) - fVar19 * fVar20) + fVar13 * fVar20;
    *(float *)(param_1 + 0x17) = (*(float *)(param_1 + 0x17) - fVar19) + fVar13;
    *(undefined4 *)(lVar4 + 0x20) = 0;
    FUN_18044f8a0(param_1);
  }
  fVar13 = *(float *)(param_1 + 0x17) * fVar20;
  fVar17 = (float)param_1[0x16] * fVar17 * _DAT_1808ad9f0;
  fVar21 = (float)((ulonglong)param_1[0x16] >> 0x20) * fVar21 * _UNK_1808ad9f4;
  fVar18 = fVar13 * fVar18;
  *(float *)((longlong)param_1 + 0xc4) = fVar18 + *(float *)((longlong)param_1 + 0xc4);
  *(ulonglong *)((longlong)param_1 + 0xbc) =
       CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xbc) >> 0x20) + fVar21,
                (float)*(undefined8 *)((longlong)param_1 + 0xbc) + fVar17);
  fVar17 = (*(float *)((longlong)param_1 + 0x3c) - fVar17) + *(float *)(lVar4 + 0x18);
  *(float *)((longlong)param_1 + 0x3c) = fVar17;
  fVar21 = (*(float *)(param_1 + 8) - fVar21) + *(float *)(lVar4 + 0x1c);
  *(float *)(param_1 + 8) = fVar21;
  fVar18 = (*(float *)((longlong)param_1 + 0x44) - fVar18) + *(float *)(lVar4 + 0x20);
  *(float *)((longlong)param_1 + 0x44) = fVar18;
  if (*(char *)(lVar4 + 0x2cc) == '\0') {
    *(int *)(param_1 + 0x19) = (int)param_1[7];
    dVar15 = (double)fVar13 * DAT_1808ac4a8;
    *(float *)(param_1 + 0x1a) = *(float *)(param_1 + 0x17);
    *(float *)((longlong)param_1 + 0xcc) = (float)((double)fVar18 - dVar15);
  }
  if ((!bVar7) || (fVar13 = fVar21 * fVar21 + fVar17 * fVar17, fVar13 <= 0.0)) {
    FUN_18044e4a0(param_1,0,0);
    fVar17 = *(float *)((longlong)param_1 + 0x3c);
    fVar21 = *(float *)(param_1 + 8);
    fVar18 = *(float *)((longlong)param_1 + 0x44);
  }
  else {
    lVar1 = param_1[0x16];
    lVar8 = param_1[0x17];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc4);
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    uVar2 = *(undefined8 *)((longlong)param_1 + 0xbc);
    if (fVar13 < 0.0) {
      fVar13 = (float)FUN_18051af10(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    if (fVar13 * fVar20 < DAT_1808ac0b0) {
      fVar20 = (fVar9 / fVar20) * DAT_1808ac0b0;
      *(float *)((longlong)param_1 + 0x3c) = fVar12 * fVar20;
      *(float *)(param_1 + 8) = fVar11 * fVar20;
      *(float *)((longlong)param_1 + 0x44) = fVar22 * fVar20;
    }
    FUN_18044e4a0(param_1,0,0);
    *(float *)((longlong)param_1 + 0x44) = fVar18;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    FUN_18044e4a0(param_1,0,0);
    *(undefined8 *)((longlong)param_1 + 0xbc) = uVar2;
    param_1[0x16] = lVar1;
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
    *(int *)(param_1 + 0x17) = (int)lVar8;
    *(float *)((longlong)param_1 + 0x3c) = fVar17;
    *(float *)(param_1 + 8) = fVar21;
    *(float *)((longlong)param_1 + 0x44) = fVar18;
  }
  *(float *)((longlong)param_1 + 0x3c) =
       (fVar17 - *(float *)(lVar4 + 0x18)) + *(float *)((longlong)param_1 + 0xbc);
  *(float *)(param_1 + 8) = (fVar21 - *(float *)(lVar4 + 0x1c)) + *(float *)(param_1 + 0x18);
  *(float *)((longlong)param_1 + 0x44) =
       (fVar18 - *(float *)(lVar4 + 0x20)) + *(float *)((longlong)param_1 + 0xc4);
  return;
}



/* ===== 180450e80 FUN_180450e80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180450e80(ulonglong param_1,float param_2,float *param_3,undefined8 param_4,int param_5,
                  float param_6,char param_7,float *param_8)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  float local_188 [2];
  undefined8 local_180;
  float local_178;
  uint local_170 [2];
  undefined8 local_168;
  float local_160;
  float local_158 [2];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  longlong local_f8;
  undefined8 *puStack_f0;
  undefined8 *local_e8;
  
  fVar21 = DAT_1808ac34c;
  local_170[0] = (uint)param_1;
  local_158[0] = param_2;
  if ((param_2 < 0.0) ||
     ((DAT_1808ac34c <= param_2 && ((param_2 < 0.0 || (DAT_1808ac34c <= param_2)))))) {
    local_188[0] = 0.0;
    local_158[0] = (float)FUN_180512fd0(param_1,local_188);
    fVar15 = local_188[0];
    if (local_158[0] < 0.0) {
      local_158[0] = local_158[0] + fVar21;
      if (local_158[0] < fVar21) {
        fVar15 = local_188[0] + DAT_1808acda0;
      }
      else {
        local_158[0] = 0.0;
      }
    }
    local_170[0] = local_170[0] + (int)fVar15;
    param_1 = (ulonglong)local_170[0];
  }
  param_5 = param_5 - (int)param_1;
  param_6 = param_6 - local_158[0];
  if (param_6 < 0.0) {
    param_6 = param_6 + fVar21;
    if (fVar21 <= param_6) {
      param_6 = 0.0;
    }
    else {
      param_5 = param_5 + -1;
    }
  }
  param_6 = (float)param_5 + param_6;
  if (param_6 <= 0.0) {
    param_6 = 0.0;
  }
  param_6 = param_6 * DAT_1808ac00c;
  local_138 = local_170;
  uStack_130 = local_158;
  local_f8 = 0;
  puStack_f0 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  local_180 = *(undefined8 *)param_3;
  local_178 = param_3[2];
  local_128 = param_4;
  FUN_18043af30(&local_f8,0,&local_180);
  fVar20 = DAT_1808ac2e0;
  fVar14 = DAT_1808ac0e0;
  puVar9 = auStack_1a8;
  puVar10 = auStack_1a8;
  local_188[0] = param_6 * DAT_1808acb28;
  iVar11 = (int)local_188[0];
  iVar1 = iVar11 + 1;
  fVar15 = *param_3;
  fVar17 = param_3[1];
  fVar19 = param_3[2];
  iVar8 = 0x80;
  if ((0x7f < iVar1) || (iVar8 = iVar1, 0 < iVar1)) {
    iVar7 = 0;
    while (iVar7 != iVar8) {
      fVar15 = fVar15 * fVar20;
      fVar17 = fVar17 * fVar20;
      fVar19 = fVar19 * fVar20;
      fVar13 = fVar17 * fVar17 + fVar15 * fVar15 + fVar19 * fVar19;
      if (fVar13 < 0.0) {
        fVar13 = (float)FUN_18051af10(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
      }
      if (fVar13 <= fVar14) {
        fVar17 = 0.0;
        fVar13 = 0.0;
        fVar15 = 0.0;
      }
      else {
        fVar13 = fVar21 - fVar14 / fVar13;
        fVar15 = fVar13 * fVar15;
        fVar17 = fVar13 * fVar17;
        fVar13 = fVar13 * fVar19;
      }
      FUN_180451750(&local_138,iVar7,&local_180);
      iVar7 = iVar7 + 1;
      FUN_180451750(&local_138,iVar7,&local_150);
      fVar15 = (float)local_180 + fVar15 + local_150;
      fVar17 = local_180._4_4_ + fVar17 + fStack_14c;
      fVar19 = local_178 + fVar13 + fStack_148;
      local_168 = CONCAT44(fVar17,fVar15);
      local_160 = fVar19;
      if (puStack_f0 == local_e8) {
        FUN_18043af30(&local_f8,puStack_f0,&local_168);
      }
      else {
        local_168 = CONCAT44(fVar17,fVar15);
        *puStack_f0 = CONCAT44(fVar17,fVar15);
        *(float *)(puStack_f0 + 1) = fVar19;
        puStack_f0 = (undefined8 *)((longlong)puStack_f0 + 0xc);
      }
    }
  }
  lVar6 = local_f8;
  fVar15 = local_188[0];
  iVar8 = (int)((longlong)puStack_f0 - local_f8 >> 2) * -0x55555555;
  lVar5 = (longlong)iVar8 + -1;
  if ((iVar11 < iVar8) && (-1 < iVar11)) {
    local_168 = *(undefined8 *)(local_f8 + (longlong)iVar11 * 0xc);
    local_160 = *(float *)(local_f8 + 8 + (longlong)iVar11 * 0xc);
  }
  else {
    local_160 = (float)FUN_18051afb0(fVar20);
    uVar2 = *(undefined8 *)(lVar6 + lVar5 * 0xc);
    local_168 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * local_160,(float)uVar2 * local_160);
    local_160 = local_160 * *(float *)(lVar6 + 8 + lVar5 * 0xc);
  }
  if ((iVar1 < iVar8) && (-1 < iVar1)) {
    local_180 = *(undefined8 *)(lVar6 + (longlong)iVar1 * 0xc);
    fVar17 = (float)local_180;
    local_178 = *(float *)(lVar6 + 8 + (longlong)iVar1 * 0xc);
  }
  else {
    fVar17 = (float)FUN_18051afb0(fVar20);
    uVar2 = *(undefined8 *)(lVar6 + lVar5 * 0xc);
    local_180 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar17,(float)uVar2 * fVar17);
    fVar17 = fVar17 * *(float *)(lVar6 + 8 + lVar5 * 0xc);
    local_178 = fVar17;
  }
  uVar12 = FUN_1804518c0(fVar17,&local_168,&local_138);
  FUN_1804518c0(uVar12,&local_180,&local_150);
  fVar15 = fVar15 - (float)iVar11;
  fVar14 = (float)local_138 * local_150 + local_138._4_4_ * fStack_14c +
           (float)uStack_130 * fStack_148 + uStack_130._4_4_ * fStack_144;
  fVar17 = (float)((uint)fVar14 & _DAT_1808ade90);
  fVar19 = fVar15 - DAT_1808ac1f4;
  fVar15 = ((fVar17 * _DAT_1808ac128 - _DAT_1808ac384) * fVar17 +
            (((DAT_1808ac6c0 - fVar17 * _DAT_1808ac418) * fVar17 - _DAT_1808ac690) * fVar17 +
            DAT_1808ac390) * fVar19 * fVar19 + _DAT_1808ac2b0) * fVar19 * (fVar15 - fVar21) * fVar15
           + fVar15;
  if ((0.0 < fVar14) || (NAN(fVar14))) {
    fVar17 = fVar15;
  }
  else {
    fVar17 = (float)((uint)fVar15 ^ DAT_1808adec0);
  }
  fVar21 = fVar21 - fVar15;
  auVar16._0_4_ = local_150 * fVar17 + (float)local_138 * fVar21;
  auVar16._4_4_ = fStack_14c * fVar17 + local_138._4_4_ * fVar21;
  auVar16._8_4_ = fStack_148 * fVar17 + (float)uStack_130 * fVar21;
  auVar16._12_4_ = fStack_144 * fVar17 + uStack_130._4_4_ * fVar21;
  fVar21 = auVar16._0_4_ * auVar16._0_4_ + auVar16._4_4_ * auVar16._4_4_ +
           auVar16._8_4_ * auVar16._8_4_ + auVar16._12_4_ * auVar16._12_4_;
  if (fVar21 == 0.0) {
    auVar16 = _DAT_1808adae0;
  }
  else {
    if (fVar21 < 0.0) {
      fVar21 = (float)FUN_18051af10(fVar21);
    }
    else {
      fVar21 = SQRT(fVar21);
    }
    auVar4._4_4_ = fVar21;
    auVar4._0_4_ = fVar21;
    auVar4._8_4_ = fVar21;
    auVar4._12_4_ = fVar21;
    auVar16 = divps(auVar16,auVar4);
  }
  fVar17 = auVar16._0_4_;
  fVar21 = auVar16._4_4_;
  fVar19 = auVar16._8_4_;
  fVar14 = auVar16._12_4_;
  local_138 = (uint *)CONCAT44(fVar21,fVar21);
  uStack_130 = (float *)CONCAT44(fVar21,fVar21);
  local_108 = fVar14 * fVar14;
  local_10c = fVar21 * fVar21;
  local_188[0] = (float)((uint)fVar17 ^ DAT_1808adec0);
  local_110 = ((local_108 - fVar19 * fVar19) - local_10c) - local_188[0] * fVar17;
  local_104 = fVar14 * fVar19;
  local_100 = local_188[0] * fVar21;
  local_118 = ((local_104 + local_104) - local_100) - local_100;
  fVar20 = (float)((uint)fVar19 ^ DAT_1808adec0);
  fVar13 = (float)((uint)fVar21 ^ DAT_1808adec0);
  local_114 = fVar14 * fVar21;
  fVar15 = local_118 * local_118 + local_110 * local_110;
  if (fVar15 < 0.0) {
    fVar15 = (float)FUN_18051af10(fVar15);
    fVar21 = (float)local_138;
  }
  else {
    fVar15 = SQRT(fVar15);
  }
  uVar18 = (uint)(((fVar19 * fVar17 - local_114) - local_114) - local_188[0] * fVar19) ^
           DAT_1808adec0;
  if (fVar15 <= DAT_1808abfbc) {
    fVar15 = (float)FUN_180516b00((uint)(((fVar20 * fVar14 - local_104) + fVar21 * fVar17) -
                                        local_100) ^ DAT_1808adec0);
    fVar19 = (float)FUN_180516b00(uVar18);
    fVar21 = 0.0;
  }
  else {
    fVar13 = fVar13 * fVar19;
    fVar15 = (float)FUN_180516b00(local_118);
    fVar19 = (float)FUN_180516b00(uVar18);
    fVar21 = (float)FUN_180516b00(((fVar14 * fVar17 - fVar13) + fVar14 * fVar17) - fVar13);
    fVar21 = fVar21 * DAT_1808aca9c;
  }
  fVar17 = DAT_1808aca9c;
  fVar19 = fVar19 * DAT_1808aca9c;
  *param_8 = fVar19;
  fVar15 = fVar15 * fVar17;
  param_8[1] = fVar15;
  param_8[2] = fVar21;
  if (fVar19 * fVar19 + fVar15 * fVar15 + fVar21 * fVar21 < DAT_1808abfb8) {
    param_8[1] = 0.0;
    param_8[2] = 0.0;
    *param_8 = 0.0;
    fVar21 = 0.0;
  }
  if (param_7 != '\0') {
    fVar17 = (float)*(undefined8 *)param_8;
    fVar15 = (float)((ulonglong)*(undefined8 *)param_8 >> 0x20);
    *(ulonglong *)param_8 = CONCAT44(fVar15 + fVar15,fVar17 + fVar17);
    param_8[2] = fVar21 + fVar21;
  }
  if (local_f8 == 0) {
    return;
  }
  lVar6 = local_f8;
  if (0xfff < (ulonglong)(((longlong)local_e8 - local_f8 >> 2) * 4)) {
    lVar6 = *(longlong *)(local_f8 + -8);
    if ((local_f8 - lVar6) - 8U < 0x20) goto LAB_1804516eb;
    lVar6 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar9 = auStack_1a0;
  }
  puVar10 = puVar9;
LAB_1804516eb:
  *(undefined8 *)(puVar10 + -8) = 0x1804516f3;
  thunk_FUN_1803d64e0(lVar6);
  return;
}



/* ===== 180451750 FUN_180451750 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180451750(undefined8 *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  fVar6 = 0.0;
  fVar3 = (float)FUN_180512fd0((float)param_2 * DAT_1808abff4 * DAT_1808acab0,local_res10);
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + DAT_1808ac34c;
    if (fVar3 < DAT_1808ac34c) {
      local_res10[0] = local_res10[0] + DAT_1808acda0;
    }
    else {
      fVar3 = 0.0;
    }
  }
  iVar2 = (int)local_res10[0] + *(int *)*param_1;
  fVar3 = *(float *)param_1[1] + fVar3;
  if (DAT_1808ac34c <= fVar3) {
    fVar3 = fVar3 - DAT_1808ac34c;
    iVar2 = iVar2 + 1;
  }
  fVar3 = fVar3 - *(float *)param_1[1];
  iVar2 = iVar2 - *(int *)*param_1;
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + DAT_1808ac34c;
    if (DAT_1808ac34c <= fVar3) {
      fVar3 = 0.0;
    }
    else {
      iVar2 = iVar2 + -1;
    }
  }
  auVar4 = ZEXT416((uint)((float)iVar2 + fVar3));
  if ((float)iVar2 + fVar3 <= 0.0) {
    auVar4 = ZEXT816(0);
  }
  auVar4._0_4_ = auVar4._0_4_ * DAT_1808ac00c * _DAT_1808acde0;
  fVar3 = (float)FUN_18051ab90(auVar4._0_8_);
  pfVar1 = (float *)param_1[2];
  fVar7 = fVar3 * *pfVar1;
  fVar5 = fVar3 * pfVar1[1];
  fVar3 = fVar3 * pfVar1[2];
  if (DAT_1808abfb8 <= fVar5 * fVar5 + fVar7 * fVar7 + fVar3 * fVar3) {
    fVar6 = fVar7 * DAT_1808abfe0;
    fVar5 = fVar5 * DAT_1808abfe0;
    fVar3 = fVar3 * DAT_1808abfe0;
  }
  else {
    fVar5 = 0.0;
    fVar3 = 0.0;
  }
  param_3[2] = fVar3;
  param_3[1] = fVar5;
  *param_3 = fVar6;
  return;
}



/* ===== 1804518c0 FUN_1804518c0 ===== */

void FUN_1804518c0(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  if (fVar1 <= DAT_1808acaec) {
    fVar5 = DAT_1808ace64;
    if (DAT_1808ace64 <= fVar1) {
      fVar5 = fVar1;
    }
  }
  else {
    fVar5 = DAT_1808acaec;
  }
  fVar1 = param_2[1];
  fVar5 = fVar5 * DAT_1808abffc;
  if (fVar1 <= DAT_1808acaec) {
    fVar6 = DAT_1808ace64;
    if (DAT_1808ace64 <= fVar1) {
      fVar6 = fVar1;
    }
  }
  else {
    fVar6 = DAT_1808acaec;
  }
  fVar1 = param_2[2];
  fVar6 = fVar6 * DAT_1808abffc;
  if (fVar1 <= DAT_1808acaec) {
    fVar4 = DAT_1808ace64;
    if (DAT_1808ace64 <= fVar1) {
      fVar4 = fVar1;
    }
    fVar4 = fVar4 * DAT_1808abffc;
  }
  else {
    fVar4 = DAT_1808ac280;
  }
  fVar1 = (float)FUN_180517790(fVar5);
  fVar5 = (float)FUN_180517200(fVar5);
  fVar2 = (float)FUN_180517790(fVar6);
  fVar6 = (float)FUN_180517200(fVar6);
  fVar3 = (float)FUN_180517790(fVar4);
  fVar4 = (float)FUN_180517200(fVar4);
  *param_3 = fVar3 * fVar5 * fVar6 - fVar4 * fVar1 * fVar2;
  param_3[1] = fVar4 * fVar1 * fVar6 + fVar3 * fVar5 * fVar2;
  param_3[3] = fVar3 * fVar1 * fVar2 + fVar4 * fVar5 * fVar6;
  param_3[2] = fVar4 * fVar5 * fVar2 - fVar3 * fVar1 * fVar6;
  return;
}



/* ===== 180451a50 FUN_180451a50 ===== */

undefined8 FUN_180451a50(longlong param_1)

{
  int iVar1;
  float local_res8 [2];
  int local_res10;
  float fStackX_14;
  
  fStackX_14 = *(float *)(param_1 + 0x168);
  iVar1 = *(int *)(param_1 + 0x15c);
  local_res10 = iVar1;
  if ((fStackX_14 < 0.0) || (DAT_1808ac34c <= fStackX_14)) {
    local_res8[0] = 0.0;
    fStackX_14 = (float)FUN_180512fd0(fStackX_14,local_res8);
    if (fStackX_14 < 0.0) {
      fStackX_14 = fStackX_14 + DAT_1808ac34c;
      if (fStackX_14 < DAT_1808ac34c) {
        local_res8[0] = local_res8[0] + DAT_1808acda0;
      }
      else {
        fStackX_14 = 0.0;
      }
    }
    local_res10 = (int)local_res8[0] + iVar1;
  }
  return CONCAT44(fStackX_14,local_res10);
}



/* ===== 180451ae0 FUN_180451ae0 ===== */

undefined8 FUN_180451ae0(undefined8 param_1,float param_2)

{
  float fVar1;
  undefined8 local_res8;
  float local_res10 [6];
  
  local_res10[0] = param_2;
  fVar1 = (float)FUN_180512fd0(param_2,local_res10);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + DAT_1808ac34c;
    if (fVar1 < DAT_1808ac34c) {
      local_res10[0] = local_res10[0] + DAT_1808acda0;
    }
    else {
      fVar1 = 0.0;
    }
  }
  local_res8._0_4_ = (int)param_1;
  local_res8._4_4_ = (float)((ulonglong)param_1 >> 0x20);
  local_res8._0_4_ = (int)local_res8 + (int)local_res10[0];
  local_res8._4_4_ = local_res8._4_4_ + fVar1;
  if (DAT_1808ac34c <= local_res8._4_4_) {
    local_res8._0_4_ = (int)local_res8 + 1;
    local_res8._4_4_ = local_res8._4_4_ - DAT_1808ac34c;
  }
  return local_res8;
}



/* ===== 180451b60 FUN_180451b60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180451b60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  float fStackX_c;
  
  lVar2 = *param_1;
  cVar1 = *(char *)(lVar2 + 0x74c);
  if (((cVar1 != '\0') &&
      (((*(char *)(lVar2 + 0x16c) == '\0' || (*(float *)(lVar2 + 0x170) < *(float *)(lVar2 + 0x164))
        ) && (*(char *)(lVar2 + 899) != '\0')))) &&
     ((*(char *)(lVar2 + 0x380) == '\0' && (*(float *)(lVar2 + 0x38c) <= 0.0)))) {
    *(undefined4 *)(lVar2 + 0x388) = 0x3f800000;
    *(undefined1 *)(lVar2 + 0x380) = 1;
    uVar4 = FUN_180451a50(lVar2);
    fStackX_c = (float)((ulonglong)uVar4 >> 0x20);
    *(float *)(lVar2 + 0x394) = fStackX_c;
    *(int *)(lVar2 + 0x390) = (int)uVar4 + 1;
    *(undefined1 *)(lVar2 + 0x381) = 1;
  }
  uVar4 = FUN_180451a50(lVar2);
  fStackX_c = (float)((ulonglong)uVar4 >> 0x20);
  *(float *)(lVar2 + 0x78c) = fStackX_c * DAT_1808ac00c + (float)(int)uVar4 * DAT_1808ac00c;
  if (*(short *)(lVar2 + 0x7b8) == 0x40) {
    if ((*(longlong *)(lVar2 + 0x7b0) != 0) && (DAT_180c87438 != 0)) {
      FUN_18000f3d0(*(longlong *)(lVar2 + 0x7b0) + (ulonglong)DAT_180c87438 + 4);
    }
    uVar4 = FUN_180451a50(lVar2);
    uVar4 = FUN_180451ae0(uVar4);
    fStackX_c = (float)((ulonglong)uVar4 >> 0x20);
    *(float *)(lVar2 + 0x360) = fStackX_c;
    *(int *)(lVar2 + 0x35c) = (int)uVar4;
    if (((*(longlong *)(lVar2 + 0x7b0) != 0) && (DAT_180c87434 != 0)) &&
       (cVar3 = FUN_180011220(*(longlong *)(lVar2 + 0x7b0) + (ulonglong)DAT_180c87434),
       cVar3 == '\x01')) {
      uVar4 = FUN_180451a50(lVar2);
      uVar4 = FUN_180451ae0(uVar4);
      fStackX_c = (float)((ulonglong)uVar4 >> 0x20);
      *(float *)(lVar2 + 0x358) = fStackX_c;
      *(int *)(lVar2 + 0x354) = (int)uVar4;
    }
  }
  if (cVar1 == '\0') {
    lVar2 = *param_1;
    if ((char)param_1[0x28] != '\0') {
      FUN_18044b130(lVar2,1);
      *(ulonglong *)(lVar2 + 0x1a0) = *(ulonglong *)(lVar2 + 0x178) & *(ulonglong *)(lVar2 + 0x118);
    }
    *(ulonglong *)(lVar2 + 0x198) = *(ulonglong *)(lVar2 + 0x198) | 1;
    *(ulonglong *)(lVar2 + 400) = *(ulonglong *)(lVar2 + 400) & 0xfffffffffffffffe;
    *(ulonglong *)(lVar2 + 0x1a8) = *(ulonglong *)(lVar2 + 0x1a8) | 1;
  }
  return;
}



/* ===== 180451d70 FUN_180451d70 ===== */

void FUN_180451d70(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  char cVar10;
  ulonglong uVar11;
  float fVar12;
  float fStackX_c;
  
  uVar4 = DAT_180c87424;
  lVar2 = *param_1;
  uVar11 = (ulonglong)DAT_180c87424;
  if ((*(longlong *)(lVar2 + 0x7b0) == 0) || (DAT_180c87414 == 0)) {
    iVar6 = 0;
LAB_180451dbe:
    cVar10 = '\0';
    if (((((*(longlong *)(lVar2 + 0x7b0) == 0) || (uVar4 == 0)) ||
         (cVar5 = FUN_180011220(), cVar5 == '\0')) &&
        ((((*(longlong *)(lVar2 + 0x7b0) == 0 || (DAT_180c87428 == 0)) ||
          (iVar7 = FUN_180011200(), iVar7 != 1)) &&
         ((*(short *)(lVar2 + 0x7b8) != 0x40 && (*(longlong *)(lVar2 + 0x7b0) != 0)))))) &&
       ((DAT_180c8742c != 0 && (cVar5 = FUN_180011220(), cVar5 == -1)))) {
      return;
    }
  }
  else {
    iVar6 = FUN_180011200();
    if (iVar6 < 1) goto LAB_180451dbe;
    cVar10 = *(char *)(lVar2 + 0x744);
  }
  if ((*(longlong *)(lVar2 + 0x7b0) == 0) || (DAT_180c87430 == 0)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_180011220((ulonglong)DAT_180c87430 + *(longlong *)(lVar2 + 0x7b0));
  }
  lVar8 = 0x374;
  if (cVar5 != '\x01') {
    lVar8 = 0x378;
  }
  if (*(int *)(lVar8 + lVar2) != -1) {
    *(undefined1 *)(lVar2 + 0x37f) = 1;
  }
  if (*(char *)(lVar2 + 0x74c) != '\0') {
    if ((((*(char *)(lVar2 + 0x16c) == '\0') ||
         (*(float *)(lVar2 + 0x170) < *(float *)(lVar2 + 0x164))) &&
        (*(char *)(lVar2 + 899) != '\0')) &&
       ((*(char *)(lVar2 + 0x380) == '\0' && (*(float *)(lVar2 + 0x38c) <= 0.0)))) {
      *(undefined4 *)(lVar2 + 0x388) = 0;
      *(undefined1 *)(lVar2 + 0x380) = 1;
      uVar9 = FUN_180451a50(lVar2);
      fStackX_c = (float)((ulonglong)uVar9 >> 0x20);
      *(float *)(lVar2 + 0x394) = fStackX_c;
      *(int *)(lVar2 + 0x390) = (int)uVar9 + 1;
      *(undefined1 *)(lVar2 + 0x381) = 1;
    }
    goto LAB_180451fe2;
  }
  if (iVar6 < 1) {
    if (((*(longlong *)(lVar2 + 0x7b0) != 0) && (uVar4 != 0)) &&
       (cVar5 = FUN_180011220(*(longlong *)(lVar2 + 0x7b0) + uVar11), cVar5 == '\x01')) {
      cVar5 = *(char *)(lVar2 + 0x37d);
      *(bool *)(lVar2 + 0x37d) = cVar5 == '\0';
      *(uint *)(lVar2 + 0x790) = (uint)(cVar5 == '\0');
      goto LAB_180451f5a;
    }
    if (*(short *)(lVar2 + 0x7b8) != 0x40) goto LAB_180451f5a;
    uVar9 = FUN_180451a50(lVar2);
    if ((int)uVar9 == *(int *)(lVar2 + 0x35c)) {
      fStackX_c = (float)((ulonglong)uVar9 >> 0x20);
      bVar3 = *(float *)(lVar2 + 0x360) <= fStackX_c;
    }
    else {
      bVar3 = *(int *)(lVar2 + 0x35c) <= (int)uVar9;
    }
    if (!bVar3) goto LAB_180451f5a;
    if ((*(longlong *)(lVar2 + 0x7b0) == 0) || (DAT_180c87438 == 0)) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = (float)FUN_18000f3d0(*(longlong *)(lVar2 + 0x7b0) + (ulonglong)DAT_180c87438 + 4);
    }
    *(undefined4 *)(lVar2 + 0x758) = *(undefined4 *)(lVar2 + 0xc);
    *(undefined4 *)(lVar2 + 0x75c) = *(undefined4 *)(lVar2 + 0x10);
    *(undefined4 *)(lVar2 + 0x760) = *(undefined4 *)(lVar2 + 0x14);
    *(undefined4 *)(lVar2 + 0x764) = *(undefined4 *)(lVar2 + 0x68);
    *(undefined1 *)(lVar2 + 0x768) = *(undefined1 *)(lVar2 + 0x70);
    *(undefined1 *)(lVar2 + 0x769) = *(undefined1 *)(lVar2 + 0x72);
    *(undefined1 *)(lVar2 + 0x76a) = *(undefined1 *)(lVar2 + 0xaa);
    *(undefined4 *)(lVar2 + 0x76c) = *(undefined4 *)(lVar2 + 0x15c);
    *(undefined4 *)(lVar2 + 0x770) = *(undefined4 *)(lVar2 + 0x164);
    *(undefined4 *)(lVar2 + 0x774) = *(undefined4 *)(lVar2 + 0x168);
    *(undefined4 *)(lVar2 + 0x778) = *(undefined4 *)(lVar2 + 0x2d4);
    *(undefined4 *)(lVar2 + 0x790) = 1;
    FUN_18047d770(lVar2 + 0x758);
    uVar9 = FUN_180451a50(lVar2);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar12 = fVar12 * DAT_1808acab0;
    uVar9 = FUN_180451ae0(uVar9,fVar12);
  }
  else {
    if (*(char *)(lVar2 + 0x71) != '\0') goto LAB_180451fe2;
    iVar1 = *(int *)(lVar2 + 0x370);
    iVar7 = iVar1 + 1;
    *(int *)(lVar2 + 0x370) = iVar7;
    if (iVar6 <= iVar1) {
      *(undefined4 *)(lVar2 + 0x370) = 0;
      iVar7 = 0;
    }
    *(uint *)(lVar2 + 0x790) = (uint)(0 < iVar7);
    *(bool *)(lVar2 + 0xa9) = 0 < iVar7;
LAB_180451f5a:
    uVar9 = FUN_180451a50(lVar2);
    fVar12 = DAT_1808ac944;
    uVar9 = FUN_180451ae0(uVar9,DAT_1808ac944);
  }
  fStackX_c = (float)((ulonglong)uVar9 >> 0x20);
  *(float *)(lVar2 + 0x360) = fStackX_c;
  *(int *)(lVar2 + 0x35c) = (int)uVar9;
  if (((*(longlong *)(lVar2 + 0x7b0) != 0) && (DAT_180c87434 != 0)) &&
     (cVar5 = FUN_180011220(*(longlong *)(lVar2 + 0x7b0) + (ulonglong)DAT_180c87434),
     cVar5 == '\x01')) {
    uVar9 = FUN_180451a50(lVar2);
    uVar9 = FUN_180451ae0(uVar9,fVar12);
    fStackX_c = (float)((ulonglong)uVar9 >> 0x20);
    *(float *)(lVar2 + 0x358) = fStackX_c;
    *(int *)(lVar2 + 0x354) = (int)uVar9;
  }
LAB_180451fe2:
  if (cVar10 != '\0') {
    lVar2 = *param_1;
    if ((char)param_1[0x28] != '\0') {
      FUN_18044b130(lVar2,0x800);
      *(ulonglong *)(lVar2 + 0x1a0) = *(ulonglong *)(lVar2 + 0x178) & *(ulonglong *)(lVar2 + 0x118);
    }
    *(ulonglong *)(lVar2 + 0x198) = *(ulonglong *)(lVar2 + 0x198) | 0x800;
    *(ulonglong *)(lVar2 + 400) = *(ulonglong *)(lVar2 + 400) & 0xfffffffffffff7ff;
    *(ulonglong *)(lVar2 + 0x1a8) = *(ulonglong *)(lVar2 + 0x1a8) | 0x800;
  }
  return;
}



/* ===== 1804521c0 FUN_1804521c0 ===== */

void FUN_1804521c0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fStackX_c;
  
  lVar2 = *param_1;
  uVar7 = FUN_180451a50(lVar2);
  fStackX_c = (float)((ulonglong)uVar7 >> 0x20);
  fVar5 = fStackX_c;
  iVar8 = (int)uVar7;
  if (*(char *)(lVar2 + 0x37e) == '\0') {
    if (*(int *)(lVar2 + 0x354) == iVar8) {
      bVar3 = *(float *)(lVar2 + 0x358) <= fStackX_c && fStackX_c != *(float *)(lVar2 + 0x358);
    }
    else {
      bVar3 = *(int *)(lVar2 + 0x354) < iVar8;
    }
    if (bVar3) {
      *(float *)(lVar2 + 0x358) = fStackX_c;
      *(int *)(lVar2 + 0x354) = iVar8;
    }
    if (*(int *)(lVar2 + 0x35c) == iVar8) {
      bVar3 = *(float *)(lVar2 + 0x360) <= fStackX_c && fStackX_c != *(float *)(lVar2 + 0x360);
    }
    else {
      bVar3 = *(int *)(lVar2 + 0x35c) < iVar8;
    }
    if (bVar3) {
      *(float *)(lVar2 + 0x360) = fStackX_c;
      *(int *)(lVar2 + 0x35c) = iVar8;
    }
    fVar4 = DAT_1808ac34c;
    fVar9 = fStackX_c + 0.0;
    if (DAT_1808ac34c <= fStackX_c) {
      fVar9 = fVar9 - DAT_1808ac34c;
    }
    *(float *)(lVar2 + 0x368) = fVar9;
    *(uint *)(lVar2 + 0x364) = (fVar4 <= fStackX_c) + 0xd + iVar8;
  }
  if (*(char *)(lVar2 + 0x37f) == '\0') {
    uVar7 = FUN_180451a50(lVar2);
    uVar7 = FUN_180451ae0(uVar7,DAT_1808ac918);
    fStackX_c = (float)((ulonglong)uVar7 >> 0x20);
    *(float *)(lVar2 + 0x360) = fStackX_c;
    *(int *)(lVar2 + 0x35c) = (int)uVar7;
    if (((*(longlong *)(lVar2 + 0x7b0) != 0) && (DAT_180c87434 != 0)) &&
       (cVar6 = FUN_180011220(*(longlong *)(lVar2 + 0x7b0) + (ulonglong)DAT_180c87434),
       cVar6 == '\x01')) {
      uVar7 = FUN_180451a50(lVar2);
      uVar7 = FUN_180451ae0(uVar7,DAT_1808ac918);
      fStackX_c = (float)((ulonglong)uVar7 >> 0x20);
      *(float *)(lVar2 + 0x358) = fStackX_c;
      *(int *)(lVar2 + 0x354) = (int)uVar7;
    }
  }
  if (*(char *)(lVar2 + 0x37e) == '\0') {
    *(undefined1 *)(lVar2 + 0x37e) = 1;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x364);
    *(undefined4 *)(lVar2 + 0x790) = 0;
    if (iVar8 == iVar1) {
      if (fVar5 < *(float *)(lVar2 + 0x368)) {
        return;
      }
    }
    else if (iVar8 < iVar1) {
      return;
    }
    *(int *)(lVar2 + 0x354) = iVar1;
    *(undefined4 *)(lVar2 + 0x358) = *(undefined4 *)(lVar2 + 0x368);
    *(undefined1 *)(lVar2 + 0x37e) = 0;
    FUN_180451b60(param_1);
  }
  return;
}



/* ===== 1804523a0 FUN_1804523a0 ===== */

void FUN_1804523a0(longlong *param_1)

{
  float fVar1;
  short sVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  float fStackX_c;
  
  lVar3 = *param_1;
  sVar2 = *(short *)(lVar3 + 0x7b8);
  if (((*(byte *)(lVar3 + 0x178) & 1) != 0) || ((*(byte *)(lVar3 + 0x188) & 1) != 0)) {
    fVar1 = *(float *)(lVar3 + 0x358);
    iVar7 = *(int *)(lVar3 + 0x354);
    uVar6 = FUN_180451a50(lVar3);
    if ((int)uVar6 == iVar7) {
      fStackX_c = (float)((ulonglong)uVar6 >> 0x20);
      bVar4 = fVar1 <= fStackX_c;
    }
    else {
      bVar4 = iVar7 <= (int)uVar6;
    }
    if (bVar4) {
      if (*(int *)(lVar3 + 0x374) == 0) {
        *(undefined1 *)(lVar3 + 0x37f) = 1;
      }
      if ((*(char *)(lVar3 + 0x16c) != '\0') &&
         (*(float *)(lVar3 + 0x164) <= *(float *)(lVar3 + 0x170))) {
        return;
      }
      if (*(char *)(lVar3 + 0x71) != '\0') {
        return;
      }
      if (0 < *(int *)(lVar3 + 0xa4)) {
        if (*(longlong *)(lVar3 + 0x7b0) == 0) {
          return;
        }
        if (DAT_180c87420 == 0) {
          return;
        }
        cVar5 = FUN_180011220((ulonglong)DAT_180c87420 + *(longlong *)(lVar3 + 0x7b0));
        if (cVar5 != '\x01') {
          return;
        }
        if (*(int *)(lVar3 + 0x374) == 0) {
          return;
        }
        if (((*(longlong *)(lVar3 + 0x7b0) != 0) && (DAT_180c87424 != 0)) &&
           (cVar5 = FUN_180011220((ulonglong)DAT_180c87424 + *(longlong *)(lVar3 + 0x7b0)),
           cVar5 != '\0')) {
          return;
        }
      }
      if (*(char *)(lVar3 + 0xa8) != '\0') {
        return;
      }
      if (sVar2 == 0x40) {
        FUN_1804521c0();
        return;
      }
      FUN_180451b60(param_1);
      return;
    }
  }
  if (((*(ulonglong *)(lVar3 + 0x178) & 0x400000000) != 0) ||
     ((*(ulonglong *)(lVar3 + 0x188) & 0x400000000) != 0)) {
    fVar1 = *(float *)(lVar3 + 0x360);
    iVar7 = *(int *)(lVar3 + 0x35c);
    uVar6 = FUN_180451a50(lVar3);
    if ((int)uVar6 == iVar7) {
      fStackX_c = (float)((ulonglong)uVar6 >> 0x20);
      bVar4 = fVar1 <= fStackX_c;
    }
    else {
      bVar4 = iVar7 <= (int)uVar6;
    }
    if (bVar4) {
      return;
    }
  }
  if (((*(uint *)(lVar3 + 0x178) >> 0xb & 1) != 0) || ((*(uint *)(lVar3 + 0x188) >> 0xb & 1) != 0))
  {
    fVar1 = *(float *)(lVar3 + 0x360);
    iVar7 = *(int *)(lVar3 + 0x35c);
    uVar6 = FUN_180451a50(lVar3);
    if ((int)uVar6 == iVar7) {
      fStackX_c = (float)((ulonglong)uVar6 >> 0x20);
      bVar4 = fVar1 <= fStackX_c;
    }
    else {
      bVar4 = iVar7 <= (int)uVar6;
    }
    if (bVar4) {
      if (sVar2 == 0x40) {
        lVar3 = *param_1;
        if ((*(char *)(lVar3 + 0x16c) != '\0') &&
           (*(float *)(lVar3 + 0x164) <= *(float *)(lVar3 + 0x170))) {
          return;
        }
        if (*(char *)(lVar3 + 0x71) != '\0') {
          return;
        }
        *(undefined4 *)(lVar3 + 0x790) = 1;
        if (*(int *)(lVar3 + 0x374) == 0) {
          *(undefined1 *)(lVar3 + 0x37f) = 1;
        }
        else if (*(char *)(lVar3 + 0x37f) == '\0') {
          *(undefined8 *)(lVar3 + 0x364) = 0x7fffffff;
          if (*(char *)(lVar3 + 0x37e) != '\0') {
            *(undefined1 *)(lVar3 + 0x37e) = 0;
            return;
          }
          if (0 < *(int *)(lVar3 + 0xa4)) {
            return;
          }
          goto LAB_1804526a4;
        }
        if (0 < *(int *)(lVar3 + 0xa4)) {
          return;
        }
        if (*(char *)(lVar3 + 0x37e) == '\0') {
          *(undefined1 *)(lVar3 + 0x37e) = 1;
          *(undefined8 *)(lVar3 + 0x364) = 0x7fffffff;
          return;
        }
        uVar6 = FUN_180451a50(lVar3);
        if (*(int *)(lVar3 + 0x364) != (int)uVar6) {
          if (*(int *)(lVar3 + 0x364) < (int)uVar6) {
            FUN_180451d70(param_1);
            return;
          }
          return;
        }
        fStackX_c = (float)((ulonglong)uVar6 >> 0x20);
        if (fStackX_c < *(float *)(lVar3 + 0x368)) {
          return;
        }
      }
LAB_1804526a4:
      FUN_180451d70(param_1);
      return;
    }
  }
  uVar8 = *(ulonglong *)(lVar3 + 0x178);
  if (((uVar8 >> 0xd & 1) == 0) && ((*(uint *)(lVar3 + 0x188) >> 0xd & 1) == 0)) {
    if ((uVar8 & 0x400000801) != 0) {
      return;
    }
  }
  else {
    if ((uVar8 & 0x400000801) != 0) {
      return;
    }
    if (*(char *)(lVar3 + 0x794) == '\0') {
      return;
    }
  }
  iVar7 = 0;
  while ((uVar8 = 1L << ((byte)iVar7 & 0x3f), (uVar8 & 0x400000801) == 0 ||
         ((byte)(-((*(ulonglong *)(lVar3 + 0x180) & uVar8) != 0) & 2U |
                 -((*(ulonglong *)(lVar3 + 0x188) & uVar8) != 0) & 4U |
                (*(ulonglong *)(lVar3 + 0x178) & uVar8) != 0) < 3))) {
    iVar7 = iVar7 + 1;
    if (0x22 < iVar7) {
      if (sVar2 == 0x40) {
        *(undefined4 *)(lVar3 + 0x790) = 1;
        *(undefined8 *)(lVar3 + 0x364) = 0x7fffffff;
        *(undefined1 *)(lVar3 + 0x37e) = 0;
      }
      *(undefined1 *)(lVar3 + 0x37f) = 0;
      *(undefined1 *)(lVar3 + 0xa8) = 0;
      *(undefined4 *)(lVar3 + 0xa4) = 0;
      return;
    }
  }
  return;
}



/* ===== 1804527c0 FUN_1804527c0 ===== */

void FUN_1804527c0(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fStackX_c;
  
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x380) == '\0') {
    if (*(char *)(lVar3 + 0x382) != '\0') {
      return;
    }
LAB_1804528c8:
    FUN_1804523a0(param_1);
    return;
  }
  uVar6 = FUN_180451a50(lVar3);
  fStackX_c = (float)((ulonglong)uVar6 >> 0x20);
  iVar5 = (int)uVar6;
  if ((*(ushort *)(lVar3 + 0x178) & 0x801) == 0) {
    fVar7 = (*(float *)(lVar3 + 0x164) + DAT_1808ac0c0) - *(float *)(lVar3 + 0xe0);
    *(float *)(lVar3 + 0x38c) =
         (float)iVar5 * DAT_1808ac00c + fStackX_c * DAT_1808ac00c + DAT_1808ac0c0;
    if ((0.0 < fVar7) && (fVar7 <= DAT_1808ac118)) {
      *(undefined1 *)(lVar3 + 900) = 1;
    }
    *(undefined1 *)(lVar3 + 0x380) = 0;
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x390);
    if (iVar5 == iVar2) {
      bVar4 = *(float *)(lVar3 + 0x394) <= fStackX_c;
    }
    else {
      bVar4 = iVar2 <= iVar5;
    }
    if (bVar4) {
      if ((*(ulonglong *)(lVar3 + 0x178) & 1) == 0) {
        fVar7 = DAT_1808ac1f4;
      }
      else {
        fVar7 = DAT_1808ac34c;
      }
      if ((*(ulonglong *)(lVar3 + 0x178) >> 0xb & 1) != 0) {
        fVar7 = fVar7 + DAT_1808acd84;
      }
      if (*(char *)(lVar3 + 0x381) == '\0') {
        fVar1 = *(float *)(lVar3 + 0x388);
        if (fVar7 - fVar1 <= DAT_1808ac020) {
          if (fVar7 - fVar1 < DAT_1808acd30) {
            fVar7 = fVar1 - DAT_1808ac020;
          }
        }
        else {
          fVar7 = fVar1 + DAT_1808ac020;
        }
      }
      else {
        *(undefined1 *)(lVar3 + 0x381) = 0;
      }
      *(float *)(lVar3 + 0x388) = fVar7;
      *(int *)(lVar3 + 0x390) = iVar2 + 1;
    }
    if (*(char *)(lVar3 + 0x382) == '\0') goto LAB_1804528c8;
  }
  return;
}



/* ===== 180452950 FUN_180452950 ===== */

void FUN_180452950(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  if (((*(byte *)(lVar1 + 0x158) & 4) == 0) && (*(longlong *)(lVar1 + 0x7a8) != 0)) {
    *(undefined4 *)(lVar1 + 0x734) = *(undefined4 *)(lVar1 + 0x618);
    *(undefined4 *)(lVar1 + 0x738) = *(undefined4 *)(lVar1 + 0x72c);
    if (*(char *)(lVar1 + 0x74c) == '\0') {
      fVar7 = *(float *)(lVar1 + 0x358);
      iVar5 = *(int *)(lVar1 + 0x354);
      uVar3 = FUN_180451a50(lVar1);
      if ((int)uVar3 == iVar5) {
        local_res8._4_4_ = (float)(uVar3 >> 0x20);
        bVar2 = fVar7 <= local_res8._4_4_;
      }
      else {
        bVar2 = iVar5 <= (int)uVar3;
      }
      if ((bVar2) && (*(char *)(lVar1 + 0xaa) != '\0')) {
        if (*(int *)(lVar1 + 0x374) != 0) {
          *(undefined1 *)(lVar1 + 0xa9) = 1;
          *(undefined4 *)(lVar1 + 0x790) = 1;
        }
        *(undefined1 *)(lVar1 + 0xaa) = 0;
      }
      local_res8 = uVar3;
      if ((*(byte *)(lVar1 + 0x158) & 0x20) == 0) {
        FUN_1804523a0(param_1);
      }
      *(undefined4 *)(lVar1 + 0x77c) = *(undefined4 *)(lVar1 + 0x35c);
      *(undefined4 *)(lVar1 + 0x780) = *(undefined4 *)(lVar1 + 0x360);
      *(undefined1 *)(lVar1 + 0x76a) = *(undefined1 *)(lVar1 + 0xaa);
    }
    else {
      FUN_1804527c0();
    }
    fVar7 = *(float *)(lVar1 + 0x350) * DAT_1808acab0;
    if ((fVar7 < 0.0) || (iVar5 = 0, DAT_1808ac34c <= fVar7)) {
      local_res8 = local_res8 & 0xffffffff00000000;
      fVar7 = (float)FUN_180512fd0(fVar7,&local_res8);
      fVar6 = (float)local_res8;
      if (fVar7 < 0.0) {
        fVar7 = fVar7 + DAT_1808ac34c;
        if (fVar7 < DAT_1808ac34c) {
          fVar6 = (float)local_res8 + DAT_1808acda0;
        }
        else {
          fVar7 = 0.0;
        }
      }
      iVar5 = (int)fVar6;
    }
    uVar4 = FUN_180451a50(lVar1);
    if ((int)uVar4 == iVar5) {
      local_res8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
      bVar2 = fVar7 <= local_res8._4_4_;
    }
    else {
      bVar2 = iVar5 <= (int)uVar4;
    }
    if ((((bVar2) && (*(char *)(lVar1 + 0x74c) != '\0')) && (0.0 < *(float *)(lVar1 + 0x38c))) &&
       (*(float *)(lVar1 + 0x38c) < *(float *)(lVar1 + 0x164))) {
      fVar7 = *(float *)(lVar1 + 0x164) + DAT_1808ac0c0;
      fVar6 = fVar7 - *(float *)(lVar1 + 0xe0);
      if (((0.0 < fVar6) && (fVar6 <= DAT_1808ac118)) && (*(char *)(lVar1 + 900) == '\0')) {
        *(float *)(lVar1 + 0x38c) = fVar7;
        *(undefined1 *)(lVar1 + 900) = 1;
        return;
      }
      *(undefined2 *)(lVar1 + 0x382) = 1;
      *(undefined4 *)(lVar1 + 0x38c) = 0;
    }
  }
  return;
}



/* ===== 180452b80 FUN_180452b80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180452b80(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_d8 [32];
  int local_b8;
  float local_b0;
  undefined1 local_a8;
  float *local_a0;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  ulonglong local_80;
  
  local_80 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  FUN_18044ac10(param_1,*(byte *)(lVar2 + 0x68) & 1);
  FUN_18044f8a0(param_1);
  if ((*(byte *)(lVar2 + 0x68) & 1) != 0) {
    fVar19 = 0.0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    fVar5 = DAT_1808ac34c;
    if (0.0 < *(float *)(lVar2 + 0x1dc)) {
      bVar3 = DAT_1808acbc8 <= *(float *)(lVar2 + 0x1dc);
      *(undefined1 *)(*param_1 + 0x28a) = 1;
      if ((bVar3) &&
         ((*(float *)(lVar2 + 0x78) == 0.0 ||
          ((int)(*(float *)(lVar2 + 0x78) * DAT_1808ac710 + fVar5) == 0)))) {
        lVar7 = FUN_1804320a0(*(undefined4 *)(lVar2 + 0x6c));
        if ((lVar7 == 0) || (DAT_180c873e0 == 0)) {
          fVar16 = 0.0;
        }
        else {
          FUN_1800111b0(&local_90,lVar7 + (ulonglong)DAT_180c873e0);
          fVar16 = local_88;
        }
        fVar13 = *(float *)(lVar2 + 0x1dc);
        if (fVar16 < 0.0) {
          fVar13 = fVar13 + fVar16;
          if (fVar13 <= DAT_1808ac0c0) {
            fVar13 = DAT_1808ac0c0;
          }
          *(float *)(lVar2 + 0x1dc) = fVar13;
        }
        if ((DAT_1808acc10 < fVar13) &&
           (0.0 < (fVar13 - DAT_1808acc10) * *(float *)(lVar2 + 0x31c) * _DAT_1808ac130)) {
          *(undefined1 *)(*param_1 + 0x28b) = 1;
        }
      }
      fVar16 = DAT_1808acda0;
      if (*(char *)(lVar2 + 0x2cc) == '\0') {
        fVar13 = *(float *)(param_1 + 0xe);
        fVar20 = (float)((uint)*(float *)(lVar2 + 0x1dc) ^ DAT_1808adec0);
        if ((((*(float *)(param_1 + 7) - *(float *)(param_1 + 0x19) < 0.0) &&
             (fVar14 = *(float *)((longlong)param_1 + 0xcc), fVar14 < 0.0)) &&
            (fVar15 = *(float *)(param_1 + 0x1a), fVar15 < 0.0)) &&
           (fVar17 = (fVar15 + fVar15) * (*(float *)(param_1 + 7) - *(float *)(param_1 + 0x19)) +
                     fVar14 * fVar14, 0.0 <= fVar17)) {
          fVar13 = (float)((uint)fVar14 ^ DAT_1808adec0);
          if (fVar17 < 0.0) {
            fVar17 = (float)FUN_18051af10();
          }
          else {
            fVar17 = SQRT(fVar17);
          }
          fVar13 = (fVar13 - fVar17) / fVar15;
          if (0.0 <= fVar13) {
            fVar17 = *(float *)(lVar2 + 0x160);
            if (fVar13 <= *(float *)(lVar2 + 0x160)) {
              fVar17 = fVar13;
            }
          }
          else {
            fVar17 = 0.0;
          }
          fVar20 = fVar15 * fVar17 + fVar14;
          fVar13 = fVar17 * DAT_1808acab0 + *(float *)(param_1 + 0xd);
        }
        iVar10 = *(int *)((longlong)param_1 + 100);
        fVar13 = (fVar13 + DAT_1808accc8) - DAT_1808accc8;
        if ((fVar13 < 0.0) || (fVar5 <= fVar13)) {
          local_98 = 0.0;
          fVar13 = (float)FUN_180512fd0();
          fVar14 = local_98;
          if (fVar13 < 0.0) {
            fVar13 = fVar13 + fVar5;
            if (fVar13 < fVar5) {
              fVar14 = local_98 + fVar16;
            }
            else {
              fVar13 = 0.0;
            }
          }
          iVar10 = iVar10 + (int)fVar14;
        }
        fVar15 = DAT_1808ace94;
        fVar14 = DAT_1808acc90;
        dVar6 = DAT_1808ac650;
        dVar4 = DAT_1808ac178;
        *(float *)(lVar2 + 0x274) = fVar13;
        *(int *)(lVar2 + 0x270) = iVar10;
        fVar13 = *(float *)((longlong)param_1 + 0x3c);
        if (fVar15 <= fVar13) {
          fVar17 = fVar14;
          if (fVar13 <= fVar14) {
            if (fVar13 == 0.0) {
              fVar17 = 0.0;
            }
            else {
              fVar13 = (float)((double)((longlong)
                                        ((double)(fVar13 - fVar15) * dVar6 + DAT_1808ac4a8) &
                                       0xffffffff) * dVar4 * DAT_1808ac7f0 - DAT_1808ac7d8);
              if (fVar13 <= fVar14) {
                fVar17 = fVar13;
              }
            }
          }
        }
        else {
          fVar17 = fVar15;
        }
        fVar13 = *(float *)(param_1 + 8);
        if (fVar15 <= fVar13) {
          fVar18 = fVar14;
          if (fVar13 <= fVar14) {
            if (fVar13 == 0.0) {
              fVar18 = 0.0;
            }
            else {
              fVar13 = (float)((double)((longlong)
                                        ((double)(fVar13 - fVar15) * dVar6 + DAT_1808ac4a8) &
                                       0xffffffff) * dVar4 * DAT_1808ac7f0 - DAT_1808ac7d8);
              if (fVar13 <= fVar14) {
                fVar18 = fVar13;
              }
            }
          }
        }
        else {
          fVar18 = fVar15;
        }
        if (fVar15 <= fVar20) {
          if (fVar20 <= fVar14) {
            if (fVar20 == 0.0) {
              fVar15 = 0.0;
            }
            else {
              fVar13 = (float)((double)((longlong)
                                        ((double)(fVar20 - fVar15) * dVar6 + DAT_1808ac4a8) &
                                       0xffffffff) * dVar4 * DAT_1808ac7f0 - DAT_1808ac7d8);
              fVar15 = fVar14;
              if (fVar13 <= fVar14) {
                fVar15 = fVar13;
              }
            }
          }
          else {
            fVar15 = fVar14;
          }
        }
        *(float *)(lVar2 + 0x278) = fVar17;
        *(float *)(lVar2 + 0x27c) = fVar18;
        *(float *)(lVar2 + 0x280) = fVar15;
      }
      else {
        fVar13 = *(float *)(lVar2 + 0x1dc) * *(float *)(lVar2 + 0x2e4) + *(float *)(lVar2 + 0x218);
        if (0.0 <= fVar13) {
          fVar20 = *(float *)(lVar2 + 0x2d8);
          if (fVar13 <= *(float *)(lVar2 + 0x2d8)) {
            fVar20 = fVar13;
          }
          *(float *)(lVar2 + 0x218) = fVar20;
        }
        else {
          *(undefined4 *)(lVar2 + 0x218) = 0;
        }
      }
      *(undefined1 *)(lVar2 + 0x1e1) = 0;
      if (*(longlong *)(lVar2 + 0x7a8) != 0) {
        if ((*(longlong *)(lVar2 + 0x7b0) == 0) || (DAT_180c8741c == 0)) {
          fVar13 = 0.0;
        }
        else {
          uVar12 = 0;
          if (*(uint *)(lVar2 + 0x790) < 2) {
            uVar12 = *(uint *)(lVar2 + 0x790);
          }
          fVar13 = (float)FUN_18000f3d0((longlong)(int)(uVar12 << 2) + *(longlong *)(lVar2 + 0x7b0)
                                        + (ulonglong)DAT_180c8741c);
        }
        *(float *)(lVar2 + 0x788) = fVar13 * *(float *)(lVar2 + 0x1dc) + *(float *)(lVar2 + 0x788);
        fVar13 = (float)FUN_18051acf0();
        uVar12 = *(uint *)(param_1 + 0x2d);
        uVar8 = uVar12 & 0xff ^ 0xffffffff;
        fVar13 = fVar13 * DAT_1808aca94 * DAT_1808ac118;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = uVar12 >> 8 & 0xff ^ -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = uVar12 >> 0x10 & 0xff ^ -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar8 = -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar12 = uVar12 >> 0x18 ^ -(uVar8 & 1) & 0xedb88320 ^ uVar8 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar9 = 0;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        do {
          pbVar1 = (byte *)("LandPunchAngleYaw" + uVar9);
          uVar9 = uVar9 + 1;
          uVar12 = -((*pbVar1 ^ uVar12) & 1) & 0xedb88320 ^ (*pbVar1 ^ uVar12) >> 1;
          uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
          uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
          uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
          uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
          uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
          uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
          uVar12 = -(uVar12 & 1) & 0xedb88320 ^ uVar12 >> 1;
        } while (uVar9 < 0x11);
        fVar20 = 0.0;
        FUN_180273880();
        if (((DAT_180cfb2a8 != (code *)0x0) && (DAT_180cfb2b8 != (code *)0x0)) &&
           (DAT_180cfb2b0 != 0)) {
          FUN_180273880();
          if (DAT_180cfb2a8 == (code *)0x0) {
            DAT_1809f3584 = ~uVar12 | 1;
          }
          else {
            (*DAT_180cfb2a8)(~uVar12);
          }
          FUN_180273880();
          if (DAT_180cfb2b8 == (code *)0x0) {
            uVar12 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
            uVar12 = uVar12 >> 0x11 ^ uVar12;
            DAT_1809f3584 = uVar12 << 5 ^ uVar12;
            fVar20 = ((float)(DAT_1809f3584 & 0xffff) + (float)(DAT_1809f3584 & 0xffff)) /
                     DAT_1808accac - fVar5;
          }
          else {
            fVar20 = (float)(*DAT_180cfb2b8)();
          }
        }
        fVar14 = *(float *)(lVar2 + 0x168);
        iVar10 = *(int *)(lVar2 + 0x15c);
        fVar20 = fVar20 * fVar13 * DAT_1808ac0c0;
        if ((fVar14 < 0.0) || (fVar5 <= fVar14)) {
          local_98 = 0.0;
          fVar14 = (float)FUN_180512fd0();
          fVar15 = local_98;
          if (fVar14 < 0.0) {
            fVar14 = fVar14 + fVar5;
            if (fVar14 < fVar5) {
              fVar15 = local_98 + fVar16;
            }
            else {
              fVar14 = 0.0;
            }
          }
          iVar10 = iVar10 + (int)fVar15;
        }
        local_a0 = &local_90;
        iVar10 = iVar10 + 1;
        local_a8 = 0;
        local_b8 = iVar10;
        local_b0 = fVar14;
        FUN_180450e80(*(undefined4 *)(lVar2 + 0xac),*(undefined4 *)(lVar2 + 0xb0),lVar2 + 0xb4,
                      lVar2 + 0xc0);
        fVar15 = *(float *)(lVar2 + 0xb0);
        iVar11 = *(int *)(lVar2 + 0xac);
        if ((fVar15 < 0.0) || (fVar5 <= fVar15)) {
          local_98 = 0.0;
          fVar15 = (float)FUN_180512fd0();
          fVar17 = local_98;
          if (fVar15 < 0.0) {
            fVar15 = fVar15 + fVar5;
            if (fVar15 < fVar5) {
              fVar17 = local_98 + fVar16;
            }
            else {
              fVar15 = 0.0;
            }
          }
          iVar11 = iVar11 + (int)fVar17;
        }
        fVar15 = fVar14 - fVar15;
        iVar11 = iVar10 - iVar11;
        if (fVar15 < 0.0) {
          fVar15 = fVar15 + fVar5;
          if (fVar15 < fVar5) {
            iVar11 = iVar11 + -1;
          }
          else {
            fVar15 = 0.0;
          }
        }
        fVar15 = (float)iVar11 + fVar15;
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        fVar16 = (float)FUN_18051ab90(fVar15 * DAT_1808ac00c * _DAT_1808acde0);
        *(int *)(lVar2 + 0xac) = iVar10;
        *(float *)(lVar2 + 0xb0) = fVar14;
        *(float *)(lVar2 + 0xb4) = local_90 + fVar13;
        *(float *)(lVar2 + 0xb8) = local_8c + fVar20;
        *(float *)(lVar2 + 0xbc) = local_88 + 0.0;
        fVar13 = fVar16 * *(float *)(lVar2 + 0xc4);
        fVar20 = fVar16 * *(float *)(lVar2 + 0xc0);
        fVar16 = fVar16 * *(float *)(lVar2 + 200);
        if (fVar13 * fVar13 + fVar20 * fVar20 + fVar16 * fVar16 < DAT_1808abfb8) {
          fVar20 = 0.0;
          fVar13 = 0.0;
          fVar16 = 0.0;
        }
        *(float *)(lVar2 + 0xc0) = fVar20;
        *(float *)(lVar2 + 0xc4) = fVar13;
        *(float *)(lVar2 + 200) = fVar16;
      }
      *(undefined4 *)(lVar2 + 0x1dc) = 0;
      if ((*(byte *)(lVar2 + 0x68) & 1) == 0) {
        return;
      }
    }
    if (*(float *)(lVar2 + 0x88) < fVar5) {
      fVar16 = *(float *)(lVar2 + 0x160) * DAT_1808ac1b0 + *(float *)(lVar2 + 0x88);
      if ((0.0 <= fVar16) && (fVar19 = fVar5, fVar16 <= fVar5)) {
        fVar19 = fVar16;
      }
      *(float *)(lVar2 + 0x88) = fVar19;
    }
  }
  return;
}



/* ===== 1804538d0 FUN_1804538d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804538d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined1 *local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined8 local_1d8;
  float fStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [8];
  longlong local_190;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_108;
  float local_104;
  float local_100;
  float local_ec;
  undefined4 local_e4;
  undefined2 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_228;
  if (*(float *)((longlong)param_1 + 0x44) <= DAT_1808ace7c &&
      DAT_1808ace7c != *(float *)((longlong)param_1 + 0x44)) {
    return;
  }
  fVar26 = *(float *)((longlong)param_1 + 0x3c);
  fVar27 = *(float *)(param_1 + 8);
  fVar23 = fVar27 * fVar27 + 0.0 + fVar26 * fVar26;
  if (fVar23 < 0.0) {
    fVar19 = (float)FUN_18051af10();
  }
  else {
    fVar19 = SQRT(fVar23);
  }
  dVar4 = DAT_1808ac500;
  if ((fVar19 < DAT_1808abf54) || (DAT_1808accfc < fVar19)) {
    if (fVar23 == 0.0) {
      fVar19 = 0.0;
      fVar27 = 0.0;
      fVar26 = 0.0;
      bVar7 = false;
    }
    else {
      dVar5 = (double)fVar27;
      dVar3 = (double)fVar26;
      dVar22 = dVar5 * dVar5 + dVar3 * dVar3;
      if (dVar22 < 0.0) {
        dVar22 = (double)FUN_18051ff20();
      }
      else {
        dVar22 = SQRT(dVar22);
      }
      dVar21 = dVar4 / dVar22;
      dVar6 = DAT_1808accc0;
      if (dVar22 <= DAT_1808accc0) {
        dVar6 = dVar22;
      }
      fVar27 = (float)(dVar5 * dVar21);
      fVar19 = (float)(dVar21 * _DAT_1808abf48);
      fVar26 = (float)(dVar3 * dVar21);
      if ((float)dVar6 != 0.0) goto LAB_1804539d7;
      bVar7 = false;
    }
  }
  else {
    fVar19 = DAT_1808ac34c / fVar19;
    fVar26 = fVar19 * fVar26;
    fVar27 = fVar19 * fVar27;
    fVar19 = fVar19 * 0.0;
LAB_1804539d7:
    bVar7 = true;
  }
  fVar23 = *(float *)(param_1 + 0x29);
  fVar25 = *(float *)((longlong)param_1 + 0x144);
  fVar24 = fVar23 * fVar23 + 0.0 + fVar25 * fVar25;
  if (fVar24 < 0.0) {
    fVar20 = (float)FUN_18051af10();
  }
  else {
    fVar20 = SQRT(fVar24);
  }
  if ((fVar20 < DAT_1808abf54) || (DAT_1808accfc < fVar20)) {
    if (fVar24 == 0.0) {
      fVar23 = 0.0;
      fVar25 = 0.0;
      fVar20 = 0.0;
    }
    else {
      dVar5 = (double)fVar23;
      dVar3 = (double)fVar25;
      dVar22 = dVar5 * dVar5 + dVar3 * dVar3;
      if (dVar22 < 0.0) {
        dVar22 = (double)FUN_18051ff20();
      }
      else {
        dVar22 = SQRT(dVar22);
      }
      dVar4 = dVar4 / dVar22;
      fVar25 = (float)(dVar3 * dVar4);
      fVar20 = (float)(dVar4 * _DAT_1808abf48);
      fVar23 = (float)(dVar5 * dVar4);
    }
  }
  else {
    fVar20 = DAT_1808ac34c / fVar20;
    fVar25 = fVar20 * fVar25;
    fVar23 = fVar20 * fVar23;
    fVar20 = fVar20 * 0.0;
  }
  fVar24 = DAT_1808ac34c;
  if ((bVar7) && (fVar20 * fVar19 + fVar23 * fVar27 + fVar25 * fVar26 < 0.0)) {
    return;
  }
  lVar2 = *param_1;
  FUN_180540170(local_198,0,0xc0);
  pfVar13 = (float *)&DAT_1806cc1a0;
  local_e4 = 0xffffffff;
  local_1e4 = *(float *)((longlong)param_1 + 0x34) + 0.0;
  local_e0 = 0xffff;
  pfVar12 = (float *)&DAT_1806cc1a0;
  local_168 = _DAT_1808adae0;
  uStack_160 = _UNK_1808adae8;
  local_158 = _DAT_1808adae0;
  uStack_150 = _UNK_1808adae8;
  local_ec = 1.0;
  cVar1 = *(char *)(lVar2 + 0x200);
  if (cVar1 != '\0') {
    pfVar12 = (float *)&DAT_1806cc260;
  }
  local_1e8 = (*pfVar12 + DAT_1808ac918) * DAT_1808ac1f4 + *(float *)(param_1 + 6);
  if (*(char *)(lVar2 + 0x200) == '\0') {
    local_1e0 = DAT_1808aca34;
  }
  else {
    local_1e0 = DAT_1808ac9b4;
  }
  local_1e0 = local_1e0 + *(float *)(param_1 + 7);
  fVar25 = fVar25 * DAT_1808ac980;
  pfVar16 = (float *)&DAT_1806cc1ac;
  pfVar15 = (float *)&DAT_1806cc1b0;
  fVar23 = fVar23 * DAT_1808ac980;
  pfVar14 = (float *)&DAT_1806cc1ac;
  fVar20 = fVar20 * DAT_1808ac980;
  local_1f8 = local_1e8 + fVar25;
  if (cVar1 != '\0') {
    pfVar14 = (float *)&DAT_1806cc26c;
  }
  local_1f4 = local_1e4 + fVar23;
  local_1f0 = local_1e0 + fVar20;
  pfVar17 = (float *)&DAT_1806cc1b4;
  pfVar18 = (float *)&DAT_1806cc1a8;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  fStack_1c4 = 0.0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  if (*pfVar14 == *pfVar12) {
    pfVar11 = (float *)&DAT_1806cc1b0;
    if (cVar1 != '\0') {
      pfVar11 = (float *)&DAT_1806cc270;
    }
    pfVar8 = (float *)&DAT_1806cc1a4;
    if (cVar1 != '\0') {
      pfVar8 = (float *)&DAT_1806cc264;
    }
    if (*pfVar11 != *pfVar8) goto LAB_180453d8e;
    pfVar11 = (float *)&DAT_1806cc1b4;
    pfVar8 = (float *)&DAT_1806cc1a8;
    if (cVar1 != '\0') {
      pfVar11 = (float *)&DAT_1806cc274;
      pfVar8 = (float *)&DAT_1806cc268;
    }
    if (*pfVar11 != *pfVar8) goto LAB_180453d8e;
    local_1d8 = *(undefined8 *)pfVar12;
    fStack_1d0 = pfVar12[2];
    uStack_1b0 = 0;
  }
  else {
LAB_180453d8e:
    local_1d8 = *(undefined8 *)pfVar12;
    fStack_1d0 = pfVar12[2];
    fStack_1c4 = pfVar14[2];
    uStack_1cc = (undefined4)*(undefined8 *)pfVar14;
    uStack_1c8 = (undefined4)((ulonglong)*(undefined8 *)pfVar14 >> 0x20);
    uStack_1b0 = 2;
  }
  if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) && (lVar9 = FUN_18000f3a0(), lVar9 != 0)) {
    local_200 = local_198;
    local_208 = param_1 + 0x1c;
    FUN_180271700(lVar9,&local_1d8,&local_1e8,&local_1f8);
  }
  if (fVar24 <= local_ec) {
    return;
  }
  uVar10 = FUN_180011220((ulonglong)DAT_180c873d8 + local_190);
  if ((uVar10 & 0x20) != 0) {
    return;
  }
  pfVar12 = (float *)&DAT_1806cc1ac;
  pfVar14 = (float *)&DAT_1806cc1a0;
  local_104 = local_104 * DAT_1808ace5c;
  fVar26 = local_100 * DAT_1808ace5c;
  *(float *)(lVar2 + 0x128) = local_108 * DAT_1808ace5c;
  *(float *)(lVar2 + 300) = local_104;
  *(float *)(lVar2 + 0x130) = fVar26;
  local_1f8 = fVar25 + local_1e8;
  local_1f4 = fVar23 + local_1e4;
  uStack_1cc = 0;
  local_1e0 = *(float *)(lVar2 + 0x2c) + *(float *)(param_1 + 7) + DAT_1808ac838;
  uStack_1c8 = 0;
  fStack_1c4 = 0.0;
  uStack_1c0 = 0;
  local_1f0 = local_1e0 + fVar20;
  local_1b8 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  cVar1 = *(char *)(*param_1 + 0x200);
  if (cVar1 != '\0') {
    pfVar12 = (float *)&DAT_1806cc26c;
    pfVar14 = (float *)&DAT_1806cc260;
  }
  if (*pfVar12 == *pfVar14) {
    pfVar11 = (float *)&DAT_1806cc1b0;
    if (cVar1 != '\0') {
      pfVar11 = (float *)&DAT_1806cc270;
    }
    pfVar8 = (float *)&DAT_1806cc1a4;
    if (cVar1 != '\0') {
      pfVar8 = (float *)&DAT_1806cc264;
    }
    if (*pfVar11 != *pfVar8) goto LAB_180453f5e;
    pfVar11 = (float *)&DAT_1806cc1b4;
    if (cVar1 != '\0') {
      pfVar11 = (float *)&DAT_1806cc274;
    }
    pfVar8 = (float *)&DAT_1806cc1a8;
    if (cVar1 != '\0') {
      pfVar8 = (float *)&DAT_1806cc268;
    }
    if (*pfVar11 != *pfVar8) goto LAB_180453f5e;
    local_1d8 = *(undefined8 *)pfVar14;
    fStack_1d0 = pfVar14[2];
    uStack_1b0 = 0;
  }
  else {
LAB_180453f5e:
    local_1d8 = *(undefined8 *)pfVar14;
    fStack_1d0 = pfVar14[2];
    fStack_1c4 = pfVar12[2];
    uStack_1cc = (undefined4)*(undefined8 *)pfVar12;
    uStack_1c8 = (undefined4)((ulonglong)*(undefined8 *)pfVar12 >> 0x20);
    uStack_1b0 = 2;
  }
  fVar26 = local_1f0;
  if ((DAT_180961f48 != 0) && (fVar26 = local_1f0, DAT_180961f40 != 0)) {
    lVar9 = FUN_18000f3a0();
    if (lVar9 != 0) {
      local_200 = local_198;
      local_208 = param_1 + 0x1c;
      FUN_180271700(lVar9,&local_1d8,&local_1e8,&local_1f8);
    }
    fVar26 = local_1f0;
  }
  local_1e0 = fVar26;
  if (local_ec != fVar24) {
    return;
  }
  local_1e8 = local_1f8;
  local_1f0 = local_1e0 + _DAT_1808ace8c;
  local_1e4 = local_1f4;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  fStack_1c4 = 0.0;
  uStack_1c0 = 0;
  cVar1 = *(char *)(*param_1 + 0x200);
  local_1b8 = 0;
  if (cVar1 != '\0') {
    pfVar16 = (float *)&DAT_1806cc26c;
    pfVar13 = (float *)&DAT_1806cc260;
  }
  local_1a8 = 0;
  uStack_1a0 = 0;
  if (*pfVar16 == *pfVar13) {
    if (cVar1 != '\0') {
      pfVar15 = (float *)&DAT_1806cc270;
    }
    pfVar12 = (float *)&DAT_1806cc1a4;
    if (cVar1 != '\0') {
      pfVar12 = (float *)&DAT_1806cc264;
    }
    if (*pfVar15 == *pfVar12) {
      if (cVar1 != '\0') {
        pfVar17 = (float *)&DAT_1806cc274;
        pfVar18 = (float *)&DAT_1806cc268;
      }
      if (*pfVar17 == *pfVar18) {
        local_1d8 = *(undefined8 *)pfVar13;
        fStack_1d0 = pfVar13[2];
        uStack_1b0 = 0;
        goto LAB_1804540f9;
      }
    }
  }
  local_1d8 = *(undefined8 *)pfVar13;
  fStack_1d0 = pfVar13[2];
  fStack_1c4 = pfVar16[2];
  uStack_1cc = (undefined4)*(undefined8 *)pfVar16;
  uStack_1c8 = (undefined4)((ulonglong)*(undefined8 *)pfVar16 >> 0x20);
  uStack_1b0 = 2;
LAB_1804540f9:
  if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) && (lVar9 = FUN_18000f3a0(), lVar9 != 0)) {
    local_200 = local_198;
    local_208 = param_1 + 0x1c;
    FUN_180271700(lVar9,&local_1d8,&local_1e8,&local_1f8);
  }
  if ((local_ec < fVar24) && (*(float *)(lVar2 + 0x300) <= local_100)) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x43800000;
    *(uint *)(lVar2 + 0x68) = *(uint *)(lVar2 + 0x68) | 4;
    *(undefined4 *)(lVar2 + 0x124) = 0x44fa0000;
  }
  return;
}



/* ===== 180454200 FUN_180454200 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180454200(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_258 [32];
  float *local_238;
  float *local_230;
  float *local_228;
  float local_218;
  float local_214;
  float local_210 [2];
  float local_208;
  float local_204;
  float local_200;
  float local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  undefined8 local_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188 [12];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_dc;
  undefined4 local_d4;
  undefined2 local_d0;
  char local_cd;
  ulonglong local_c8;
  
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_258;
  fVar12 = *(float *)(param_1 + 3);
  fVar11 = fVar12 * *(float *)((longlong)param_1 + 0x14c);
  lVar2 = *param_1;
  fVar1 = *(float *)((longlong)param_1 + 0x1c);
  fVar15 = *(float *)(lVar2 + 0x160);
  if ((*(byte *)(lVar2 + 0x178) & 2) == 0) {
    if (((fVar12 == 0.0) && (fVar1 == 0.0)) && (*(float *)(param_1 + 4) == 0.0)) {
      fVar14 = DAT_1808ace60;
    }
    else {
      fVar10 = fVar11 + fVar11;
      if (0.0 <= fVar10) {
        fVar14 = *(float *)((longlong)param_1 + 0x14);
        if (fVar10 <= *(float *)((longlong)param_1 + 0x14)) {
          fVar14 = fVar10;
        }
      }
      else {
        fVar14 = 0.0;
      }
      fVar14 = fVar14 + *(float *)(param_1 + 4);
    }
  }
  else {
    fVar14 = *(float *)((longlong)param_1 + 0x14);
  }
  local_228 = local_210;
  local_230 = &local_214;
  local_238 = &local_218;
  fVar14 = fVar1 * *(float *)(param_1 + 0x2b) + fVar11 + fVar14;
  fVar11 = fVar1 * *(float *)((longlong)param_1 + 0x154) + fVar12 * *(float *)(param_1 + 0x29);
  fVar12 = fVar1 * *(float *)(param_1 + 0x2a) + fVar12 * *(float *)((longlong)param_1 + 0x144);
  local_1f8 = fVar15;
  local_214 = (float)FUN_180449010(param_1,fVar11,fVar14,
                                   fVar14 * fVar14 + fVar11 * fVar11 + fVar12 * fVar12);
  local_210[0] = *(float *)(param_1 + 2);
  fVar12 = local_210[0];
  if (local_214 <= local_210[0]) {
    fVar12 = local_214;
  }
  local_228 = &local_218;
  local_230 = &local_1cc;
  local_238 = &local_1d0;
  fVar12 = fVar12 * DAT_1808ac294;
  fVar11 = (float)FUN_180449010();
  fVar1 = DAT_1808ac0c0;
  *(float *)((longlong)param_1 + 0x3c) = local_1d0;
  *(float *)(param_1 + 8) = local_1cc;
  *(float *)((longlong)param_1 + 0x44) = local_218;
  if (fVar11 == 0.0) {
    fVar10 = 0.0;
    fVar14 = local_1d0;
    fVar13 = local_1cc;
    fVar11 = local_218;
  }
  else {
    fVar10 = fVar11 - *(float *)(lVar2 + 800) * *(float *)(lVar2 + 0x1f0) * fVar11 * fVar15;
    if (fVar10 < fVar1) {
      fVar10 = 0.0;
    }
    fVar11 = fVar10 / fVar11;
    fVar14 = local_1d0 * fVar11;
    fVar13 = local_1cc * fVar11;
    fVar11 = local_218 * fVar11;
    *(float *)((longlong)param_1 + 0x3c) = fVar14;
    *(float *)(param_1 + 8) = fVar13;
    *(float *)((longlong)param_1 + 0x44) = fVar11;
  }
  if (fVar1 <= fVar12) {
    fVar10 = fVar12 - fVar10;
    if (0.0 < fVar10) {
      local_228 = local_210;
      local_230 = &local_218;
      local_238 = &local_214;
      FUN_180449010();
      fVar12 = fVar12 * *(float *)(lVar2 + 0x324) * *(float *)(lVar2 + 0x1f0) * local_1f8;
      if (fVar10 <= fVar12) {
        fVar12 = fVar10;
      }
      fVar11 = fVar11 + fVar12 * local_210[0];
      fVar14 = fVar14 + fVar12 * local_214;
      fVar13 = fVar13 + fVar12 * local_218;
      *(float *)((longlong)param_1 + 0x44) = fVar11;
      *(float *)(param_1 + 10) = fVar12 * local_210[0] + *(float *)(param_1 + 10);
      *(float *)((longlong)param_1 + 0x3c) = fVar14;
      *(float *)(param_1 + 9) = fVar12 * local_214 + *(float *)(param_1 + 9);
      *(float *)(param_1 + 8) = fVar13;
      *(float *)((longlong)param_1 + 0x4c) =
           fVar12 * local_218 + *(float *)((longlong)param_1 + 0x4c);
    }
    fVar15 = local_1f8;
  }
  fVar14 = fVar14 + *(float *)(lVar2 + 0x18);
  *(float *)((longlong)param_1 + 0x3c) = fVar14;
  fVar13 = fVar13 + *(float *)(lVar2 + 0x1c);
  *(float *)(param_1 + 8) = fVar13;
  fVar11 = fVar11 + *(float *)(lVar2 + 0x20);
  *(float *)((longlong)param_1 + 0x44) = fVar11;
  FUN_180540170(local_188,0,0xc0);
  fVar12 = DAT_1808ac34c;
  pfVar7 = (float *)&DAT_1806cc1a0;
  local_208 = *(float *)(param_1 + 6);
  local_204 = *(float *)((longlong)param_1 + 0x34);
  local_158 = _DAT_1808adae0;
  uStack_150 = _UNK_1808adae8;
  local_148 = _DAT_1808adae0;
  uStack_140 = _UNK_1808adae8;
  puVar9 = &DAT_1806cc1a0;
  local_200 = *(float *)(param_1 + 7);
  local_d4 = 0xffffffff;
  local_d0 = 0xffff;
  local_dc = 1.0;
  local_1e0 = fVar14 * fVar15 + local_208;
  local_1dc = fVar13 * fVar15 + local_204;
  local_1d8 = fVar11 * fVar15 + local_200;
  local_238 = local_188;
  if (*(char *)(lVar2 + 0x200) != '\0') {
    puVar9 = &DAT_1806cc260;
  }
  FUN_180449f00(param_1,&local_208,&local_1e0,puVar9);
  if (local_dc != fVar12) {
    if ((*(byte *)(lVar2 + 0x68) & 1) == 0) {
      FUN_18044e4a0(param_1,0,0);
    }
    else {
      local_1f0 = *(float *)((longlong)param_1 + 0x3c);
      local_1ec = *(float *)(param_1 + 8);
      local_1e8 = *(float *)((longlong)param_1 + 0x44);
      local_208 = *(float *)(param_1 + 6);
      local_204 = *(float *)((longlong)param_1 + 0x34);
      local_200 = *(float *)(param_1 + 7);
      FUN_18044e4a0(param_1,&local_1e0,local_188);
      cVar3 = FUN_18044f0a0(param_1,&local_208,&local_1f0);
      fVar15 = local_1e8;
      fVar1 = local_1ec;
      fVar12 = local_1f0;
      if ((cVar3 == '\0') &&
         (fVar11 = local_1e8 * local_1e8 + local_1ec * local_1ec + local_1f0 * local_1f0,
         0.0 < fVar11)) {
        fVar10 = *(float *)(lVar2 + 0x32c);
        if (fVar11 < 0.0) {
          fVar11 = (float)FUN_18051af10();
        }
        else {
          fVar11 = SQRT(fVar11);
        }
        if ((fVar11 < fVar10) &&
           ((*(float *)(param_1 + 3) != 0.0 || (*(float *)((longlong)param_1 + 0x1c) != 0.0)))) {
          fVar10 = fVar10 / fVar11;
          local_1f0 = fVar12 * fVar10;
          local_1ec = fVar1 * fVar10;
          local_1e8 = fVar15 * fVar10;
          FUN_18044f0a0(param_1,&local_208,&local_1f0);
        }
      }
    }
    goto LAB_1804549b1;
  }
  pfVar8 = (float *)&DAT_1806cc1ac;
  local_208 = local_1e0;
  local_204 = local_1dc;
  local_200 = *(float *)(lVar2 + 0x2f0) + fVar12 + local_1d8;
  cVar3 = *(char *)(*param_1 + 0x200);
  uStack_1bc = 0;
  if (cVar3 != '\0') {
    pfVar8 = (float *)&DAT_1806cc26c;
    pfVar7 = (float *)&DAT_1806cc260;
  }
  uStack_1b8 = 0;
  fStack_1b4 = 0.0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  uStack_190 = 0;
  if (*pfVar8 == *pfVar7) {
    pfVar6 = (float *)&DAT_1806cc1b0;
    if (cVar3 != '\0') {
      pfVar6 = (float *)&DAT_1806cc270;
    }
    pfVar4 = (float *)&DAT_1806cc1a4;
    if (cVar3 != '\0') {
      pfVar4 = (float *)&DAT_1806cc264;
    }
    if (*pfVar6 != *pfVar4) goto LAB_1804547cd;
    pfVar6 = (float *)&DAT_1806cc1b4;
    if (cVar3 != '\0') {
      pfVar6 = (float *)&DAT_1806cc274;
    }
    pfVar4 = (float *)&DAT_1806cc1a8;
    if (cVar3 != '\0') {
      pfVar4 = (float *)&DAT_1806cc268;
    }
    if (*pfVar6 != *pfVar4) goto LAB_1804547cd;
    local_1c8 = *(undefined8 *)pfVar7;
    fStack_1c0 = pfVar7[2];
    uStack_1a0 = 0;
  }
  else {
LAB_1804547cd:
    local_1c8 = *(undefined8 *)pfVar7;
    fStack_1c0 = pfVar7[2];
    fStack_1b4 = pfVar8[2];
    uStack_1bc = (undefined4)*(undefined8 *)pfVar8;
    uStack_1b8 = (undefined4)((ulonglong)*(undefined8 *)pfVar8 >> 0x20);
    uStack_1a0 = 2;
  }
  if (((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) && (lVar5 = FUN_18000f3a0(), lVar5 != 0)) {
    local_230 = local_188;
    local_238 = (float *)(param_1 + 0x1c);
    FUN_180271700(lVar5,&local_1c8,&local_208,&local_1e0);
  }
  if (local_cd == '\0') {
    *(undefined4 *)(param_1 + 6) = local_104;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_100;
    *(undefined4 *)(param_1 + 7) = local_fc;
  }
  else {
    FUN_18044e4a0(param_1,0,0);
  }
LAB_1804549b1:
  *(float *)((longlong)param_1 + 0x3c) =
       *(float *)((longlong)param_1 + 0x3c) - *(float *)(lVar2 + 0x18);
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - *(float *)(lVar2 + 0x1c);
  *(float *)((longlong)param_1 + 0x44) =
       *(float *)((longlong)param_1 + 0x44) - *(float *)(lVar2 + 0x20);
  FUN_18044ac10(param_1,0);
  if ((*(byte *)(lVar2 + 0x68) & 1) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  return;
}



/* ===== 180454a60 FUN_180454a60 ===== */

void FUN_180454a60(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_res10;
  float local_res18;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [72];
  
  lVar1 = *param_1;
  FUN_18044b5c0();
  FUN_18044ba80(param_1);
  FUN_18044c950(param_1);
  fVar6 = *(float *)(lVar1 + 0x338);
  if (0.0 < *(float *)(lVar1 + 0x344)) {
    fVar6 = fVar6 / *(float *)(lVar1 + 0x344);
  }
  if ((*(uint *)(lVar1 + 0x178) >> 0x10 & 1) != 0) {
    fVar6 = fVar6 * DAT_1808ac1f4;
  }
  FUN_180449010();
  fVar7 = local_res10 * fVar6;
  fVar5 = local_res8 * fVar6;
  fVar8 = fVar7 * *(float *)(param_1 + 0x2b) + fVar5 * *(float *)((longlong)param_1 + 0x14c) +
          local_res18 * fVar6;
  fVar6 = fVar7 * *(float *)(param_1 + 0x2a) + fVar5 * *(float *)((longlong)param_1 + 0x144);
  fVar5 = fVar7 * *(float *)((longlong)param_1 + 0x154) + fVar5 * *(float *)(param_1 + 0x29);
  uVar2 = FUN_180449010(fVar6,fVar5,fVar8,fVar5 * fVar5 + fVar8 * fVar8 + fVar6 * fVar6,local_58,
                        local_54,local_50);
  if (0.0 < *(float *)(lVar1 + 0x334)) {
    FUN_18044e0a0(param_1,local_58,uVar2,*(undefined4 *)(lVar1 + 0x334));
    fVar6 = *(float *)((longlong)param_1 + 0x44);
    fVar5 = *(float *)(param_1 + 8);
    fVar7 = *(float *)((longlong)param_1 + 0x3c);
    fVar8 = fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7;
    if (fVar8 < 0.0) {
      fVar8 = (float)FUN_18051af10(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    if (DAT_1808ac34c <= fVar8) {
      fVar3 = *(float *)(lVar1 + 0x33c) * DAT_1808ac140;
      fVar4 = fVar8;
      if (fVar8 <= fVar3) {
        fVar4 = fVar3;
      }
      fVar4 = fVar8 - fVar4 * *(float *)(lVar1 + 800) * *(float *)(lVar1 + 0x1f0) *
                      *(float *)(lVar1 + 0x160);
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar4 = fVar4 / fVar8;
      *(float *)((longlong)param_1 + 0x44) = fVar6 * fVar4;
      *(float *)((longlong)param_1 + 0x3c) = fVar7 * fVar4;
      *(float *)(param_1 + 8) = fVar5 * fVar4;
      fVar8 = *(float *)(lVar1 + 0x160);
      *(float *)(param_1 + 6) = fVar7 * fVar4 * fVar8 + *(float *)(param_1 + 6);
      *(float *)((longlong)param_1 + 0x34) =
           fVar5 * fVar4 * fVar8 + *(float *)((longlong)param_1 + 0x34);
      *(float *)(param_1 + 7) = fVar6 * fVar4 * fVar8 + *(float *)(param_1 + 7);
    }
    else {
      param_1[8] = 0;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
  }
  else {
    *(float *)((longlong)param_1 + 0x3c) = fVar6;
    *(float *)(param_1 + 8) = fVar5;
    *(float *)((longlong)param_1 + 0x44) = fVar8;
  }
  return;
}



/* ===== 180454d50 FUN_180454d50 ===== */

void FUN_180454d50(longlong param_1,ulonglong param_2)

{
  ulonglong **ppuVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined1 *puVar11;
  ulonglong *puVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [37];
  undefined2 local_5b;
  undefined1 local_59;
  ulonglong *local_58;
  ulonglong *puStack_50;
  longlong local_48;
  
  local_58 = (ulonglong *)0x0;
  puStack_50 = (ulonglong *)0x0;
  local_48 = 0;
  ppuVar1 = (ulonglong **)(param_1 + 0x298);
  if (&local_58 != ppuVar1) {
    local_58 = *ppuVar1;
    *ppuVar1 = (ulonglong *)0x0;
    puStack_50 = *(ulonglong **)(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    local_48 = *(longlong *)(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  lVar5 = local_48;
  puVar4 = puStack_50;
  puVar12 = local_58;
  puVar10 = *ppuVar1;
  if ((ulonglong)(*(longlong *)(param_1 + 0x2a8) - (longlong)puVar10 >> 4) < param_2) {
    FUN_180200df0(ppuVar1,param_2);
    puVar9 = *ppuVar1;
    for (uVar6 = param_2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined1 *)((longlong)puVar9 + 0xc) = 0;
      *(undefined2 *)((longlong)puVar9 + 0xd) = local_5b;
      *(undefined1 *)((longlong)puVar9 + 0xf) = local_59;
      puVar9 = puVar9 + 2;
    }
  }
  else {
    puVar9 = *(ulonglong **)(param_1 + 0x2a0);
    uVar6 = (longlong)puVar9 - (longlong)puVar10 >> 4;
    if (uVar6 < param_2) {
      for (; puVar10 != puVar9; puVar10 = puVar10 + 2) {
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *(undefined1 *)((longlong)puVar10 + 0xc) = 0;
        *(undefined2 *)((longlong)puVar10 + 0xd) = local_5b;
        *(undefined1 *)((longlong)puVar10 + 0xf) = local_59;
      }
      puVar9 = *(ulonglong **)(param_1 + 0x2a0);
      for (lVar7 = param_2 - uVar6; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined1 *)((longlong)puVar9 + 0xc) = 0;
        *(undefined2 *)((longlong)puVar9 + 0xd) = local_5b;
        *(undefined1 *)((longlong)puVar9 + 0xf) = local_59;
        puVar9 = puVar9 + 2;
      }
    }
    else {
      puVar9 = puVar10 + param_2 * 2;
      if ((param_2 & 0xfffffffffffffff) != 0) {
        do {
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 1) = 0;
          *(undefined1 *)((longlong)puVar10 + 0xc) = 0;
          *(undefined2 *)((longlong)puVar10 + 0xd) = local_5b;
          *(undefined1 *)((longlong)puVar10 + 0xf) = local_59;
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar9);
      }
    }
  }
  puVar11 = auStack_88;
  *(ulonglong **)(param_1 + 0x2a0) = puVar9;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if (param_2 != 0) {
    for (puVar10 = puVar12; puVar10 != puVar4; puVar10 = puVar10 + 2) {
      if (*(char *)((longlong)puVar10 + 0xc) == '\x01') {
        uVar6 = *puVar10;
        uVar8 = (uVar6 >> 0x21 ^ uVar6) * -0xae502812aa7333;
        uVar8 = (uVar8 >> 0x21 ^ uVar8) & param_2 - 1;
        puVar9 = *ppuVar1;
        if (*(char *)((longlong)puVar9 + uVar8 * 0x10 + 0xc) == '\x01') {
          uVar2 = puVar9[uVar8 * 2];
          while ((uVar2 != uVar6 &&
                 (uVar8 = uVar8 + 1 & param_2 - 1,
                 *(char *)((longlong)puVar9 + uVar8 * 0x10 + 0xc) != '\0'))) {
            uVar2 = puVar9[uVar8 * 2];
          }
        }
        uVar2 = puVar10[1];
        puVar9[uVar8 * 2] = uVar6;
        *(int *)(puVar9 + uVar8 * 2 + 1) = (int)uVar2;
        *(undefined1 *)((longlong)puVar9 + uVar8 * 0x10 + 0xc) = 1;
        *(undefined2 *)((longlong)puVar9 + uVar8 * 0x10 + 0xd) = local_5b;
        *(undefined1 *)((longlong)puVar9 + uVar8 * 0x10 + 0xf) = local_59;
        *(longlong *)(param_1 + 0x2b0) = *(longlong *)(param_1 + 0x2b0) + 1;
      }
    }
  }
  if (puVar12 == (ulonglong *)0x0) {
    return;
  }
  uVar6 = lVar5 - (longlong)puVar12 & 0xfffffffffffffff0;
  puVar10 = puVar12;
  if (0xfff < uVar6) {
    puVar10 = (ulonglong *)puVar12[-1];
    puVar12 = (ulonglong *)((longlong)puVar12 + (-8 - (longlong)puVar10));
    if (&DAT_0000001f < puVar12) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar11 = auStack_80;
      puVar10 = puVar12;
    }
    else {
      uVar6 = uVar6 + 0x27;
      puVar11 = auStack_88;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x180454ff1;
  thunk_FUN_1803d64e0(puVar10,uVar6);
  return;
}



/* ===== 180455000 FUN_180455000 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180455000(longlong *param_1,float param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  ulonglong uVar18;
  float *pfVar19;
  undefined1 (*pauVar20) [16];
  int *piVar21;
  int unaff_R12D;
  undefined1 unaff_R13B;
  int iVar22;
  undefined2 unaff_R15W;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_XMM15_Da;
  undefined1 auStack_3d8 [8];
  undefined1 auStack_3d0 [40];
  longlong local_3a8;
  longlong lStack_3a0;
  longlong local_398;
  undefined2 local_390;
  float local_38c;
  undefined4 local_388;
  float local_384;
  uint local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  undefined4 local_35c;
  undefined4 local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  int local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  undefined4 local_328;
  undefined2 local_323;
  undefined1 local_321;
  float local_320;
  float local_318;
  float local_314;
  undefined4 local_310;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  longlong *local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined8 local_2af;
  undefined8 local_2a7;
  undefined4 local_29f;
  undefined2 local_29b;
  undefined1 local_299;
  undefined **local_298;
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
  undefined1 local_238 [48];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float local_1a0;
  float local_18c;
  undefined4 local_184;
  undefined2 local_180;
  char local_17d;
  undefined1 local_178 [16];
  int local_168 [28];
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_3d8;
  lVar10 = *param_1;
  plVar12 = param_1;
  if (0x200 < *(ulonglong *)(lVar10 + 0x2b0)) {
    plVar12 = *(longlong **)(lVar10 + 0x2a0);
    for (plVar8 = *(longlong **)(lVar10 + 0x298); plVar8 != plVar12; plVar8 = plVar8 + 2) {
      *plVar8 = 0;
      *(undefined4 *)(plVar8 + 1) = 0;
      *(undefined1 *)((longlong)plVar8 + 0xc) = 0;
      *(undefined2 *)((longlong)plVar8 + 0xd) = local_323;
      *(undefined1 *)((longlong)plVar8 + 0xf) = local_321;
    }
    *(undefined8 *)(lVar10 + 0x2b0) = 0;
  }
  fVar30 = DAT_1808ac984;
  fVar28 = *(float *)(lVar10 + 0x2f0);
  local_364 = param_3 + DAT_1808ac984;
  local_37c = fVar28;
  local_374 = param_4;
  local_33c = param_3;
  local_338 = param_2;
  local_2e8 = param_1;
  FUN_180519fe0(plVar12,DAT_1808ac838);
  fVar29 = DAT_1808ac918;
  fVar26 = DAT_1808ac710;
  fVar24 = (float)FUN_18051a9c0();
  iVar22 = (int)fVar24 + 8;
  if (param_2 <= 0.0) {
    iVar22 = (int)fVar24;
  }
  local_340 = iVar22;
  FUN_180519fe0();
  fVar24 = (float)FUN_18051a9c0();
  local_380 = (int)fVar24 + 8;
  if (param_3 <= 0.0) {
    local_380 = (int)fVar24;
  }
  uVar16 = (ulonglong)local_380;
  local_3a8 = 0;
  lStack_3a0 = 0;
  local_398 = 0;
  lVar9 = FUN_18000fb70(700);
  FUN_180540530(lVar9,local_3a8,lStack_3a0 - local_3a8);
  if (local_3a8 != 0) {
    uVar13 = (local_398 - local_3a8 >> 2) * 4;
    lVar14 = local_3a8;
    if (0xfff < uVar13) {
      lVar14 = *(longlong *)(local_3a8 + -8);
      if (0x1f < (local_3a8 - lVar14) - 8U) {
        pcVar2 = (code *)swi(0x29);
        uVar18 = (*pcVar2)(5);
        puVar15 = auStack_3d0;
        goto LAB_180455664;
      }
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar14,uVar13);
  }
  fVar24 = DAT_1808ac34c;
  local_398 = lVar9 + 700;
  local_168[0] = _DAT_1808adf90;
  local_168[1] = _UNK_1808adf94;
  local_168[2] = _UNK_1808adf98;
  local_168[3] = _UNK_1808adf9c;
  local_168[4] = _DAT_1808adf90;
  local_168[5] = _UNK_1808adf94;
  local_168[6] = _UNK_1808adf98;
  local_168[7] = _UNK_1808adf9c;
  local_168[8] = _DAT_1808adf90;
  local_168[9] = _UNK_1808adf94;
  local_168[10] = _UNK_1808adf98;
  local_168[0xb] = _UNK_1808adf9c;
  local_168[0xc] = _DAT_1808adf90;
  local_168[0xd] = _UNK_1808adf94;
  local_168[0xe] = _UNK_1808adf98;
  local_168[0xf] = _UNK_1808adf9c;
  local_168[0x10] = _DAT_1808adf90;
  local_168[0x11] = _UNK_1808adf94;
  local_168[0x12] = _UNK_1808adf98;
  local_168[0x13] = _UNK_1808adf9c;
  local_168[0x14] = _DAT_1808adf90;
  local_168[0x15] = _UNK_1808adf94;
  local_168[0x16] = _UNK_1808adf98;
  local_168[0x17] = _UNK_1808adf9c;
  local_168[0x18] = _DAT_1808adf90;
  local_320 = param_2 - fVar30;
  local_370 = param_3 - fVar30;
  local_334 = fVar28 + fVar28;
  local_36c = (DAT_1808acd40 - local_334) + param_4;
  local_368 = param_2 + fVar30;
  local_360 = ((fVar28 + DAT_1808ac34c) - DAT_1808ac090) + param_4;
  fVar28 = param_2 - fVar29;
  unaff_XMM15_Da = param_3 - fVar29;
  local_38c = param_2 + fVar29;
  local_34c = param_3 + fVar29;
  local_378 = param_4 - local_334;
  local_334 = local_334 + param_4;
  local_3a8 = lVar9;
  lStack_3a0 = lVar9;
  local_384 = fVar28;
  local_35c = FUN_18053f0d0();
  local_358 = FUN_18053f0d0();
  puVar15 = auStack_3d8;
  iVar23 = 0;
  local_388 = 0;
  local_390 = local_323;
  param_3 = DAT_1808aceb0;
  param_2 = DAT_1808acd08;
  param_4 = DAT_1808acd08;
  unaff_R13B = local_321;
  do {
    fVar30 = (float)(iVar22 + iVar23 * 8);
    local_354 = fVar30 + fVar26;
    local_350 = fVar30 - fVar26;
    local_348 = local_354;
    if (*(float *)(puVar15 + 0x4c) <= local_354) {
      local_348 = *(float *)(puVar15 + 0x4c);
    }
    fVar29 = local_350;
    if (local_350 <= fVar28) {
      fVar29 = fVar28;
    }
    local_348 = local_348 - fVar29;
    iVar22 = 0;
    unaff_R12D = iVar23 * 5;
    *(undefined8 *)(puVar15 + -8) = 0x1804553d2;
    local_344 = FUN_18053f0d0();
    unaff_R15W = *(undefined2 *)(puVar15 + 0x48);
    do {
      fVar29 = (float)((int)uVar16 + iVar22 * 8);
      *(undefined8 *)(puVar15 + -8) = 0x1804553f0;
      fVar28 = (float)FUN_18051a9c0();
      *(undefined8 *)(puVar15 + -8) = 0x1804553fc;
      FUN_18053f0d0();
      *(undefined8 *)(puVar15 + -8) = 0x180455401;
      fVar25 = (float)FUN_18051a9c0();
      uVar16 = CONCAT44((int)fVar28,(int)fVar25);
      lVar9 = *(longlong *)(lVar10 + 0x298);
      if (lVar9 == *(longlong *)(lVar10 + 0x2a0)) {
LAB_1804554d5:
        *(undefined8 *)(puVar15 + -8) = 0x1804554e9;
        FUN_180540170(local_238,0,0xc0);
        local_208 = _DAT_1808adae0;
        uStack_200 = _UNK_1808adae8;
        local_1f8 = _DAT_1808adae0;
        uStack_1f0 = _UNK_1808adae8;
        local_18c = 1.0;
        local_184 = 0xffffffff;
        local_180 = 0xffff;
        local_2c0 = 0;
        local_2b8 = 0;
        local_2af = 0;
        local_2a7 = 0;
        local_29f = 0;
        local_29b = 0;
        local_299 = 0;
        local_2d8 = _DAT_1808adcb0;
        uStack_2d0 = _UNK_1808adcb8;
        local_2c8 = 0x407f5c29;
        local_2b0 = 2;
        local_288 = 0;
        uStack_280 = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_298 = &PTR_FUN_180c87398;
        local_278 = CONCAT44(_UNK_1808adf94,_DAT_1808adf90);
        uStack_270 = CONCAT44(_UNK_1808adf9c,_UNK_1808adf98);
        local_268 = 0xf00ffff00000000;
        uStack_290 = 0x2011;
        uStack_260 = 0x490b;
        local_328 = *(undefined4 *)(puVar15 + 0x7c);
        local_310 = local_358;
        *(undefined1 **)(puVar15 + 0x28) = local_238;
        *(undefined ****)(puVar15 + 0x20) = &local_298;
        *(undefined8 *)(puVar15 + -8) = 0x180455603;
        local_330 = fVar30;
        local_32c = fVar29;
        local_318 = fVar30;
        local_314 = fVar29;
        FUN_18044a020(local_2e8,&local_2d8,&local_330,&local_318);
        if (((local_17d == '\0') && (local_18c < fVar24)) &&
           (*(float *)(lVar10 + 0x300) <= local_1a0 && local_1a0 != *(float *)(lVar10 + 0x300))) {
          uVar18 = *(ulonglong *)(lVar10 + 0x298);
          uVar13 = *(ulonglong *)(lVar10 + 0x2a0);
          fVar28 = fVar24;
          if (uVar18 == uVar13) {
            lVar9 = 0x40;
LAB_180455686:
            *(undefined8 *)(puVar15 + -8) = 0x18045568e;
            FUN_180454d50(lVar10,lVar9);
            fVar24 = fVar28;
          }
          else {
LAB_180455664:
            lVar9 = (longlong)(uVar13 - uVar18) >> 4;
            fVar24 = fVar28;
            if ((ulonglong)(lVar9 * 3) < *(longlong *)(lVar10 + 0x2b0) * 4 + 4U) {
              lVar9 = lVar9 * 2;
              goto LAB_180455686;
            }
          }
          lVar9 = *(longlong *)(lVar10 + 0x298);
          uVar18 = (*(longlong *)(lVar10 + 0x2a0) - lVar9 >> 4) - 1;
          uVar13 = (uVar16 >> 0x21 ^ uVar16) * -0xae502812aa7333;
          uVar13 = (uVar13 >> 0x21 ^ uVar13) & uVar18;
          if (*(char *)(lVar9 + 0xc + uVar13 * 0x10) == '\x01') {
            uVar1 = *(ulonglong *)(lVar9 + uVar13 * 0x10);
            while (uVar1 != uVar16) {
              uVar13 = uVar13 + 1 & uVar18;
              if (*(char *)(lVar9 + 0xc + uVar13 * 0x10) == '\0') goto LAB_180455702;
              uVar1 = *(ulonglong *)(lVar9 + uVar13 * 0x10);
            }
            lVar9 = uVar13 * 0x10 + lVar9;
          }
          else {
LAB_180455702:
            lVar14 = uVar13 * 0x10;
            *(ulonglong *)(lVar14 + lVar9) = uVar16;
            *(undefined4 *)(lVar14 + 8 + lVar9) = 0;
            *(undefined1 *)(lVar14 + 0xc + lVar9) = 1;
            *(undefined2 *)(lVar14 + 0xd + lVar9) = unaff_R15W;
            *(undefined1 *)(lVar14 + 0xf + lVar9) = unaff_R13B;
            *(longlong *)(lVar10 + 0x2b0) = *(longlong *)(lVar10 + 0x2b0) + 1;
            lVar9 = lVar14 + *(longlong *)(lVar10 + 0x298);
          }
          *(undefined8 *)(puVar15 + -8) = 0x180455738;
          fVar28 = (float)FUN_18053f0d0();
          fVar28 = fVar28 / DAT_1808ac864;
          *(float *)(lVar9 + 8) = fVar28;
          goto LAB_180455748;
        }
      }
      else {
        uVar18 = (*(longlong *)(lVar10 + 0x2a0) - lVar9 >> 4) - 1;
        uVar13 = ((uint)(int)fVar28 >> 1 ^ uVar16) * -0xae502812aa7333;
        uVar13 = (uVar13 >> 0x21 ^ uVar13) & uVar18;
        if (*(char *)(lVar9 + 0xc + uVar13 * 0x10) != '\x01') goto LAB_1804554d5;
        uVar1 = *(ulonglong *)(lVar9 + uVar13 * 0x10);
        while (uVar1 != uVar16) {
          uVar13 = uVar13 + 1 & uVar18;
          if (*(char *)(lVar9 + 0xc + uVar13 * 0x10) == '\0') goto LAB_1804554d5;
          uVar1 = *(ulonglong *)(lVar9 + uVar13 * 0x10);
        }
        lVar9 = lVar9 + uVar13 * 0x10;
        if ((((lVar9 == 0) || (fVar30 < local_320)) || (fVar29 < *(float *)(puVar15 + 0x68))) ||
           (((fVar28 = *(float *)(lVar9 + 8), fVar28 < *(float *)(puVar15 + 0x6c) ||
             (*(float *)(puVar15 + 0x70) < fVar30)) ||
            ((*(float *)(puVar15 + 0x74) < fVar29 || (*(float *)(puVar15 + 0x78) < fVar28))))))
        goto LAB_1804554d5;
LAB_180455748:
        if ((fVar28 != param_4) && (*(float *)(puVar15 + 0x54) < local_354)) {
          fVar25 = fVar29 + fVar26;
          if ((unaff_XMM15_Da < fVar25) && (local_350 < *(float *)(puVar15 + 0x4c))) {
            fVar27 = fVar29 - fVar26;
            if (fVar27 < local_34c) {
              if (fVar27 <= unaff_XMM15_Da) {
                fVar27 = unaff_XMM15_Da;
              }
              if (local_34c <= fVar25) {
                fVar25 = local_34c;
              }
              fVar25 = (fVar25 - fVar27) * local_348;
              if (0.0 < fVar25) {
                local_2f8 = (float)(unaff_R12D + iVar22);
                pfVar19 = *(float **)(puVar15 + 0x38);
                if (local_168[(int)local_2f8] < 0) {
                  local_168[(int)local_2f8] =
                       (int)((longlong)pfVar19 - *(longlong *)(puVar15 + 0x30) >> 2) * -0x49249249;
                }
                local_2f4 = 0xffffffff;
                local_2f0 = 0x3f800000;
                local_308 = fVar25;
                local_304 = fVar30;
                local_300 = fVar29;
                local_2fc = fVar28;
                if (pfVar19 == *(float **)(puVar15 + 0x40)) {
                  *(undefined8 *)(puVar15 + -8) = 0x180455858;
                  FUN_1802a6990(puVar15 + 0x30,pfVar19,&local_308);
                }
                else {
                  *pfVar19 = fVar25;
                  pfVar19[1] = fVar30;
                  pfVar19[2] = fVar29;
                  pfVar19[3] = fVar28;
                  pfVar19[4] = local_2f8;
                  pfVar19[5] = -NAN;
                  pfVar19[6] = 1.0;
                  *(longlong *)(puVar15 + 0x38) = *(longlong *)(puVar15 + 0x38) + 0x1c;
                }
                if (fVar28 <= param_2) {
                  param_2 = fVar28;
                }
                if (param_3 <= fVar28) {
                  param_3 = fVar28;
                }
              }
            }
          }
        }
      }
      iVar22 = iVar22 + 1;
      uVar16 = (ulonglong)*(uint *)(puVar15 + 0x58);
    } while (iVar22 < 5);
    iVar23 = *(int *)(puVar15 + 0x50) + 1;
    *(int *)(puVar15 + 0x50) = iVar23;
    fVar28 = *(float *)(puVar15 + 0x54);
    iVar22 = local_340;
  } while (iVar23 < 5);
  pauVar11 = *(undefined1 (**) [16])(puVar15 + 0x30);
  if (pauVar11 == *(undefined1 (**) [16])(puVar15 + 0x38)) goto LAB_180455cbc;
  fVar28 = *(float *)(puVar15 + 0x5c);
  if (fVar28 <= *(float *)(puVar15 + 100) - param_3) goto LAB_180455cbc;
  if (fVar28 <= param_3 - param_2) {
    uVar16 = 0;
    uVar13 = 0;
    uVar18 = ((longlong)*(undefined1 (**) [16])(puVar15 + 0x38) - (longlong)pauVar11 >> 2) *
             0x6db6db6db6db6db7;
    if (uVar18 != 0) {
      do {
        lVar10 = uVar13 * 0x1c;
        fVar29 = *(float *)(lVar10 + 4 + (longlong)pauVar11) - local_338;
        fVar30 = *(float *)(lVar10 + 8 + (longlong)pauVar11) - local_33c;
        fVar26 = *(float *)(lVar10 + 0xc + (longlong)pauVar11) - *(float *)(puVar15 + 100);
        fVar26 = fVar30 * fVar30 + fVar29 * fVar29 + fVar26 * fVar26;
        if (fVar26 < param_4) {
          param_4 = fVar26;
          uVar16 = uVar13;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar18);
    }
    lVar10 = uVar16 * 0x1c;
    *(undefined4 *)(lVar10 + 0x14 + (longlong)pauVar11) = 0;
    fVar30 = DAT_1808ac00c;
    fVar29 = DAT_1808ac000;
    fVar24 = *(float *)(lVar10 + *(longlong *)(puVar15 + 0x30)) * DAT_1808ac00c;
    fVar26 = DAT_1808ac000;
    if (DAT_1808ac000 <= fVar24) {
      fVar26 = fVar24;
    }
    *(float *)(lVar10 + 0x18 + *(longlong *)(puVar15 + 0x30)) = fVar26;
    uVar7 = _DAT_1808ade90;
    local_178 = _DAT_1808ad6b0;
    pauVar11 = *(undefined1 (**) [16])(puVar15 + 0x30);
    do {
      lVar10 = 0;
      bVar6 = false;
      do {
        pfVar19 = (float *)(lVar10 * 0x1c + (longlong)pauVar11);
        if (-1 < (int)pfVar19[5]) {
          piVar21 = (int *)local_178;
          do {
            iVar22 = *piVar21;
            if (iVar22 == -1) {
              if (pfVar19[4] != (float)(((int)pfVar19[4] / 5) * 5)) goto LAB_180455a54;
            }
            else if (iVar22 == 1) {
              if ((int)pfVar19[4] % 5 != 4) goto LAB_180455a54;
            }
            else if (iVar22 == -5) {
              if (4 < (int)pfVar19[4]) goto LAB_180455a54;
            }
            else if ((iVar22 != 5) || ((int)pfVar19[4] < 0x14)) {
LAB_180455a54:
              if (((uint)((int)pfVar19[4] + iVar22) < 0x19) &&
                 (((-1 < local_168[(int)pfVar19[4] + iVar22] &&
                   (lVar9 = (longlong)local_168[(int)pfVar19[4] + iVar22] * 0x1c,
                   *(int *)(lVar9 + 0x14 + (longlong)pauVar11) < 0)) &&
                  ((float)((uint)(pfVar19[3] - *(float *)(lVar9 + 0xc + (longlong)pauVar11)) & uVar7
                          ) < fVar28)))) {
                *(int *)(lVar9 + 0x14 + (longlong)pauVar11) = (int)pfVar19[5] + 1;
                fVar26 = *pfVar19;
                if (*(float *)(lVar9 + (longlong)pauVar11) <= *pfVar19) {
                  fVar26 = *(float *)(lVar9 + (longlong)pauVar11);
                }
                fVar24 = fVar26 * fVar30;
                if (fVar26 * fVar30 <= fVar29) {
                  fVar24 = fVar29;
                }
                fVar26 = pfVar19[6];
                if (fVar24 <= pfVar19[6]) {
                  fVar26 = fVar24;
                }
                *(float *)(lVar9 + 0x18 + (longlong)pauVar11) = fVar26;
                bVar6 = true;
                pauVar11 = *(undefined1 (**) [16])(puVar15 + 0x30);
              }
            }
            piVar21 = piVar21 + 1;
          } while (piVar21 != local_168);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != (*(longlong *)(puVar15 + 0x38) - (longlong)pauVar11 >> 2) *
                         0x6db6db6db6db6db7);
    } while (bVar6);
    pauVar20 = *(undefined1 (**) [16])(puVar15 + 0x38);
    pauVar17 = pauVar11;
    while ((pauVar17 != pauVar20 && (-1 < *(int *)(pauVar17[1] + 4)))) {
      pauVar17 = (undefined1 (*) [16])(pauVar17[1] + 0xc);
    }
    if (pauVar17 != pauVar20) {
      pauVar11 = (undefined1 (*) [16])(pauVar17[1] + 0xc);
      if (pauVar11 != pauVar20) {
        do {
          if (-1 < *(int *)(pauVar11[1] + 4)) {
            *pauVar17 = *pauVar11;
            uVar3 = *(undefined4 *)pauVar11[1];
            uVar4 = *(undefined4 *)(pauVar11[1] + 4);
            uVar5 = *(undefined4 *)(pauVar11[1] + 8);
            *(undefined4 *)(*pauVar17 + 0xc) = *(undefined4 *)(*pauVar11 + 0xc);
            *(undefined4 *)pauVar17[1] = uVar3;
            *(undefined4 *)(pauVar17[1] + 4) = uVar4;
            *(undefined4 *)(pauVar17[1] + 8) = uVar5;
            pauVar17 = (undefined1 (*) [16])(pauVar17[1] + 0xc);
          }
          pauVar11 = (undefined1 (*) [16])(pauVar11[1] + 0xc);
        } while (pauVar11 != pauVar20);
        pauVar11 = *(undefined1 (**) [16])(puVar15 + 0x30);
        if (pauVar17 == pauVar20) goto LAB_180455b86;
      }
      lVar10 = *(longlong *)(puVar15 + 0x38);
      *(undefined8 *)(puVar15 + -8) = 0x180455b72;
      FUN_180540530(pauVar17,pauVar20,lVar10 - (longlong)pauVar20);
      *(longlong *)(puVar15 + 0x38) = (longlong)pauVar17 + (lVar10 - (longlong)pauVar20);
      pauVar11 = *(undefined1 (**) [16])(puVar15 + 0x30);
    }
  }
LAB_180455b86:
  for (pauVar20 = pauVar11; pauVar20 != *(undefined1 (**) [16])(puVar15 + 0x38);
      pauVar20 = (undefined1 (*) [16])(pauVar20[1] + 0xc)) {
  }
LAB_180455cbc:
  if (pauVar11 != (undefined1 (*) [16])0x0) {
    uVar16 = (*(longlong *)(puVar15 + 0x40) - (longlong)pauVar11 >> 2) * 4;
    pauVar20 = pauVar11;
    if (0xfff < uVar16) {
      pauVar20 = *(undefined1 (**) [16])(pauVar11[-1] + 8);
      if (0x1f < (ulonglong)((longlong)pauVar11 + (-8 - (longlong)pauVar20))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar16 = uVar16 + 0x27;
    }
    *(undefined8 *)(puVar15 + -8) = 0x180455d08;
    thunk_FUN_1803d64e0(pauVar20,uVar16);
  }
  *(undefined8 *)(puVar15 + -8) = 0x180455d1b;
  return;
}



/* ===== 180455d80 FUN_180455d80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180455d80(undefined8 *param_1)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_138 [32];
  float local_118;
  float local_110;
  undefined1 local_108;
  float *local_100;
  float local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  ulonglong local_c8;
  
  fVar11 = DAT_1808acda0;
  fVar10 = DAT_1808acab0;
  fVar3 = DAT_1808ac34c;
  fVar16 = DAT_1808ac1f4;
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_138;
  pfVar2 = (float *)*param_1;
  if (((uint)pfVar2[0x56] & 2) != 0) goto LAB_1804562c0;
  fVar17 = pfVar2[0x8f];
  fVar15 = pfVar2[0x58];
  fVar18 = fVar15 * DAT_1808acaf4;
  if (0.0 - fVar17 <= fVar18) {
    if ((float)((uint)fVar18 ^ DAT_1808adec0) <= 0.0 - fVar17) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = fVar17 - fVar18;
    }
  }
  else {
    fVar17 = fVar17 + fVar18;
  }
  cVar6 = '\0';
  pfVar2[0x8f] = fVar17;
  fVar17 = fVar17 + 0.0;
  if (pfVar2[0x1b] != -NAN) {
    lVar5 = FUN_1804320a0();
    if (lVar5 != 0) {
      lVar5 = FUN_18000f3a0(lVar5 + 0x10);
      if (lVar5 != 0) {
        lVar5 = FUN_18000f3a0(lVar5 + 8);
        if (lVar5 != 0) {
          if (DAT_181111d10 == 0) {
            cVar4 = FUN_180449ac0(lVar5,"C_World");
            if (cVar4 != '\0') {
              DAT_181111d10 = lVar5;
              goto LAB_180455ef4;
            }
          }
          else if (lVar5 == DAT_181111d10) {
LAB_180455ef4:
            fVar16 = DAT_1808acb08;
            fVar10 = (float)FUN_18053f0d0(*pfVar2 * DAT_1808acb08);
            fVar10 = fVar10 / fVar16;
            fVar11 = (float)FUN_18053f0d0(pfVar2[1] * fVar16);
            fVar11 = fVar11 / fVar16;
            fVar12 = (float)FUN_18053f0d0(pfVar2[2] * fVar16);
            if (((fVar10 != pfVar2[0xae]) || (fVar11 != pfVar2[0xaf])) ||
               (fVar12 / fVar16 != pfVar2[0xb0])) {
              fVar13 = (float)FUN_180455000(param_1,fVar10,fVar11);
              pfVar2[0xb1] = fVar13;
              pfVar2[0xae] = fVar10;
              pfVar2[0xaf] = fVar11;
              pfVar2[0xb0] = fVar12 / fVar16;
            }
            fVar16 = pfVar2[0xb1];
            if (fVar16 == DAT_1808acd08) {
              fVar16 = 0.0;
            }
            fVar17 = fVar17 - fVar16;
            cVar6 = '\x01';
            fVar11 = DAT_1808acda0;
            fVar10 = DAT_1808acab0;
            fVar16 = DAT_1808ac1f4;
          }
        }
      }
    }
  }
  cVar4 = *(char *)(pfVar2 + 0x92);
  *(char *)(pfVar2 + 0x92) = cVar6;
  if (cVar4 == cVar6) {
    fVar12 = pfVar2[0x93];
  }
  else {
    fVar12 = pfVar2[0x51] - fVar17;
  }
  if (cVar6 == '\0') {
    fVar14 = (float)((uint)(pfVar2[5] * fVar16) & _DAT_1808ade90);
    fVar13 = pfVar2[0xba] * DAT_1808ac064;
    if (pfVar2[0xba] * DAT_1808ac064 <= fVar14) {
      fVar13 = fVar14;
    }
  }
  else if (*(char *)(pfVar2 + 0xb3) == '\0') {
    fVar13 = (float)((uint)pfVar2[0xa0] & _DAT_1808ade90);
    if (fVar13 <= DAT_1808acaa8) {
      fVar13 = DAT_1808acaa8;
    }
  }
  else {
    fVar13 = DAT_1808acb34;
  }
  fVar13 = fVar13 * fVar15;
  if (0.0 - fVar12 <= fVar13) {
    if ((float)((uint)fVar13 ^ DAT_1808adec0) <= 0.0 - fVar12) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = fVar12 - fVar13;
    }
  }
  else {
    fVar12 = fVar12 + fVar13;
  }
  pfVar2[0x93] = fVar12;
  fVar15 = DAT_1808acb28;
  fVar12 = fVar12 + fVar17;
  if (((pfVar2[0x4f] != 0.0) || (pfVar2[0x50] != 0.0)) || (fVar17 = pfVar2[0x51], fVar17 != fVar12))
  {
    fVar13 = DAT_1808ace78;
    if (DAT_1808ace78 <= fVar12) {
      fVar13 = fVar12;
    }
    pfVar2[0x4f] = 0.0;
    pfVar2[0x50] = 0.0;
    fVar17 = fVar15;
    if (fVar13 <= fVar15) {
      fVar17 = fVar13;
    }
    pfVar2[0x51] = fVar17;
  }
  fVar12 = DAT_1808accd0;
  fVar15 = pfVar2[0x90];
  fVar13 = pfVar2[0x81] * DAT_1808ace34 - pfVar2[0x8f];
  if (fVar13 - fVar15 <= fVar18) {
    if (fVar13 - fVar15 < (float)((uint)fVar18 ^ DAT_1808adec0)) {
      fVar13 = fVar15 - fVar18;
    }
  }
  else {
    fVar13 = fVar15 + fVar18;
  }
  pfVar2[0x90] = fVar13;
  pfVar2[9] = 0.0;
  pfVar2[10] = 0.0;
  pfVar2[0xb] = (fVar17 + fVar13 + pfVar2[0x91] + fVar10 + fVar12) - fVar12;
  if (((uint)pfVar2[0x56] & 6) == 0) {
    fVar17 = pfVar2[0x186];
    pfVar9 = (float *)0x0;
    if (0 < (int)fVar17) {
      iVar7 = (int)pfVar2[0x187] + (int)fVar17 + -1;
      pfVar9 = pfVar2 + ((longlong)
                         (int)(iVar7 - (((iVar7 >> 0x1f & 0x1fU) - 1) +
                                        (int)pfVar2[0x187] + (int)fVar17 & 0xffffffe0)) + 0x2e) * 5;
    }
    fVar15 = pfVar2[0x5a];
    fVar18 = pfVar2[0x57];
    if ((fVar15 < 0.0) || (fVar3 <= fVar15)) {
      local_f8 = 0.0;
      fVar15 = (float)FUN_180512fd0(fVar15,&local_f8);
      fVar12 = local_f8;
      if (fVar15 < 0.0) {
        fVar15 = fVar15 + fVar3;
        if (fVar15 < fVar3) {
          fVar12 = local_f8 + fVar11;
        }
        else {
          fVar15 = 0.0;
        }
      }
      fVar18 = (float)((int)fVar18 + (int)fVar12);
    }
    if (((pfVar9 == (float *)0x0) || (*pfVar9 != fVar18)) || (pfVar9[1] != fVar15)) {
      fVar12 = pfVar2[0x187];
      if ((int)fVar17 < 0x20) {
        pfVar2[0x186] = (float)((int)fVar17 + 1);
        fVar12 = (float)(((int)fVar17 + (int)fVar12) % 0x20);
      }
      else {
        pfVar2[0x187] =
             (float)(((int)fVar12 + 1) -
                    (((int)fVar12 + 1 >> 0x1f & 0x1fU) + 1 + (int)fVar12 & 0xffffffe0));
      }
      pfVar9 = pfVar2 + ((longlong)(int)fVar12 + 0x2e) * 5;
      pfVar9[1] = fVar15;
      *pfVar9 = fVar18;
    }
    fVar17 = pfVar2[0xb];
    fVar15 = pfVar2[2];
    *(ulonglong *)(pfVar9 + 2) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar2 + 9) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20),
                  (float)*(undefined8 *)(pfVar2 + 9) + (float)*(undefined8 *)pfVar2);
    pfVar9[4] = fVar17 + fVar15;
  }
LAB_1804562c0:
  fVar17 = pfVar2[0x7b];
  if (0.0 < fVar17) {
    fVar15 = *(float *)(param_1 + 0xe);
    iVar7 = *(int *)((longlong)param_1 + 100);
    if ((fVar15 < 0.0) || (fVar3 <= fVar15)) {
      local_f8 = 0.0;
      fVar15 = (float)FUN_180512fd0(fVar15,&local_f8);
      fVar18 = local_f8;
      if (fVar15 < 0.0) {
        fVar15 = fVar15 + fVar3;
        if (fVar15 < fVar3) {
          fVar18 = local_f8 + fVar11;
        }
        else {
          fVar15 = 0.0;
        }
      }
      iVar7 = iVar7 + (int)fVar18;
    }
    fVar18 = (float)FUN_180519fe0(fVar17,DAT_1808ac00c);
    fVar12 = fVar18 * fVar10;
    iVar8 = (int)((fVar17 - fVar18) * fVar10 + fVar16);
    if ((fVar12 < 0.0) || (fVar3 <= fVar12)) {
      local_f8 = 0.0;
      fVar12 = (float)FUN_180512fd0(fVar12,&local_f8);
      fVar16 = local_f8;
      if (fVar12 < 0.0) {
        fVar12 = fVar12 + fVar3;
        if (fVar12 < fVar3) {
          fVar16 = local_f8 + fVar11;
        }
        else {
          fVar12 = 0.0;
        }
      }
      iVar8 = iVar8 + (int)fVar16;
    }
    if ((iVar8 <= iVar7) && ((iVar7 != iVar8 || (fVar12 <= fVar15)))) {
      fVar16 = pfVar2[0x5a];
      fVar10 = pfVar2[0x57];
      *(undefined1 *)(pfVar2 + 0x37) = 1;
      if ((fVar16 < 0.0) || (fVar3 <= fVar16)) {
        local_f8 = 0.0;
        fVar16 = (float)FUN_180512fd0(fVar16,&local_f8);
        fVar17 = local_f8;
        if (fVar16 < 0.0) {
          fVar16 = fVar16 + fVar3;
          if (fVar16 < fVar3) {
            fVar17 = local_f8 + fVar11;
          }
          else {
            fVar16 = 0.0;
          }
        }
        fVar10 = (float)((int)fVar10 + (int)fVar17);
      }
      local_100 = &local_e8;
      local_108 = 1;
      local_118 = fVar10;
      local_110 = fVar16;
      FUN_180450e80(pfVar2[0x2b],pfVar2[0x2c],pfVar2 + 0x2d,pfVar2 + 0x30);
      local_100 = &local_d8;
      local_108 = 1;
      local_f4 = 0;
      local_ec = 0;
      local_118 = fVar10;
      local_110 = fVar16;
      FUN_180450e80(pfVar2[0x33],0,pfVar2 + 0x34,&local_f4);
      pfVar2[0x39] = local_e8 + local_d8 + pfVar2[0x14];
      pfVar2[0x3a] = local_d4 + local_e4 + pfVar2[0x15];
      pfVar2[0x3b] = local_d0 + local_e0 + pfVar2[0x16];
      uVar1 = *(undefined8 *)pfVar2;
      *(ulonglong *)(pfVar2 + 0x3c) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar2 + 9) >> 0x20) +
                    (float)((ulonglong)uVar1 >> 0x20),
                    (float)*(undefined8 *)(pfVar2 + 9) + (float)uVar1);
      pfVar2[0x3e] = pfVar2[2] + pfVar2[0xb];
      if (*(char *)(pfVar2 + 0x80) == '\0') {
        fVar16 = DAT_1808aca34;
      }
      else {
        fVar16 = DAT_1808ac9b4;
      }
      *(undefined8 *)(pfVar2 + 0x3f) = uVar1;
      pfVar2[0x41] = fVar16 + pfVar2[2];
      *(undefined8 *)(pfVar2 + 0x42) = *(undefined8 *)(pfVar2 + 3);
      pfVar2[0x44] = pfVar2[5];
      pfVar2[0x7b] = 0.0;
    }
  }
  return;
}



/* ===== 180456580 FUN_180456580 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180456580(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  HMODULE hModule;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar4 = (float *)*param_1;
  if (DAT_180cd1bfa == '\0') {
    DAT_180cd1bfa = '\x01';
    hModule = GetModuleHandleA("tier0.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_181111d18 = (float *)GetProcAddress(hModule,"g_flConfigMaxCoord");
    }
  }
  if ((DAT_181111d18 == (float *)0x0) || (fVar7 = *DAT_181111d18, *DAT_181111d18 <= 0.0)) {
    fVar7 = DAT_1808acc90;
  }
  fVar1 = *(float *)(param_1 + 6);
  fVar2 = *(float *)((longlong)param_1 + 0x34);
  fVar3 = *(float *)(param_1 + 7);
  fVar7 = DAT_1808abfe0 / fVar7;
  fVar5 = (float)((uint)*pfVar4 & _DAT_1808ade90);
  if (fVar5 <= (float)((uint)fVar1 & _DAT_1808ade90)) {
    fVar5 = (float)((uint)fVar1 & _DAT_1808ade90);
  }
  fVar6 = fVar5 * fVar7;
  if (fVar5 * fVar7 <= DAT_1808abfe0) {
    fVar6 = DAT_1808abfe0;
  }
  if ((float)((uint)(fVar1 - *pfVar4) & _DAT_1808ade90) <= fVar6) {
    fVar5 = (float)((uint)pfVar4[1] & _DAT_1808ade90);
    if (fVar5 <= (float)((uint)fVar2 & _DAT_1808ade90)) {
      fVar5 = (float)((uint)fVar2 & _DAT_1808ade90);
    }
    fVar6 = fVar5 * fVar7;
    if (fVar5 * fVar7 <= DAT_1808abfe0) {
      fVar6 = DAT_1808abfe0;
    }
    if ((float)((uint)(fVar2 - pfVar4[1]) & _DAT_1808ade90) <= fVar6) {
      fVar5 = (float)((uint)pfVar4[2] & _DAT_1808ade90);
      if (fVar5 <= (float)((uint)fVar3 & _DAT_1808ade90)) {
        fVar5 = (float)((uint)fVar3 & _DAT_1808ade90);
      }
      fVar6 = fVar5 * fVar7;
      if (fVar5 * fVar7 <= DAT_1808abfe0) {
        fVar6 = DAT_1808abfe0;
      }
      if ((float)((uint)(fVar3 - pfVar4[2]) & _DAT_1808ade90) <= fVar6) goto LAB_1804566c6;
    }
  }
  *pfVar4 = fVar1;
  pfVar4[1] = fVar2;
  pfVar4[2] = fVar3;
LAB_1804566c6:
  fVar7 = *(float *)(param_1 + 8);
  fVar1 = *(float *)((longlong)param_1 + 0x44);
  pfVar4[3] = *(float *)((longlong)param_1 + 0x3c);
  pfVar4[4] = fVar7;
  pfVar4[5] = fVar1;
  return;
}



/* ===== 180456700 FUN_180456700 ===== */

void FUN_180456700(longlong param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  pfVar2 = *(float **)(param_1 + 0x78);
  pfVar1 = *(float **)(param_1 + 0x80);
  while (((pfVar2 != pfVar1 && (*pfVar2 <= param_2)) && (!NAN(param_2)))) {
    if (param_2 == *pfVar2) {
      return;
    }
    pfVar2 = pfVar2 + 10;
  }
  uStack_30 = 0;
  local_28 = local_28 & 0xffffff00;
  uStack_24 = 0;
  uStack_20 = 0;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  uStack_14 = 0;
  if (pfVar2 != pfVar1) {
    fStack_1c = pfVar2[7];
    fStack_18 = pfVar2[8];
  }
  local_38 = param_2;
  if (pfVar1 == *(float **)(param_1 + 0x88)) {
    FUN_180448980(param_1 + 0x78,pfVar2,&local_38);
    return;
  }
  if (pfVar2 == pfVar1) {
    *(ulonglong *)pfVar1 = CONCAT44(uStack_34,param_2);
    pfVar1[2] = 0.0;
    pfVar1[3] = 0.0;
    *(ulonglong *)(pfVar1 + 4) = (ulonglong)local_28;
    *(ulonglong *)(pfVar1 + 6) = (ulonglong)(uint)fStack_1c << 0x20;
    *(ulonglong *)(pfVar1 + 8) = (ulonglong)(uint)fStack_18;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 0x28;
    return;
  }
  *(undefined8 *)pfVar1 = *(undefined8 *)(pfVar1 + -10);
  *(undefined8 *)(pfVar1 + 2) = *(undefined8 *)(pfVar1 + -8);
  pfVar1[4] = pfVar1[-6];
  pfVar1[5] = pfVar1[-5];
  pfVar1[6] = pfVar1[-4];
  pfVar1[7] = pfVar1[-3];
  *(undefined8 *)(pfVar1 + 8) = *(undefined8 *)(pfVar1 + -2);
  *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 0x28;
  FUN_180540530(pfVar2 + 10,pfVar2);
  *(ulonglong *)pfVar2 = CONCAT44(uStack_34,local_38);
  *(undefined8 *)(pfVar2 + 2) = uStack_30;
  *(ulonglong *)(pfVar2 + 4) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pfVar2 + 6) = CONCAT44(fStack_1c,uStack_20);
  *(ulonglong *)(pfVar2 + 8) = CONCAT44(uStack_14,fStack_18);
  return;
}



/* ===== 180456830 FUN_180456830 ===== */

void FUN_180456830(longlong *param_1,int param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  uint3 uVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  undefined1 local_res8 [32];
  float local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  if (param_3 != 0.0) {
    if (param_2 < *(int *)((longlong)param_1 + 0x6c)) {
      if (param_2 == *(int *)((longlong)param_1 + 100)) {
        if (param_3 < *(float *)(param_1 + 0xd) || param_3 == *(float *)(param_1 + 0xd)) {
          return;
        }
      }
      else if (param_2 < *(int *)((longlong)param_1 + 100)) {
        return;
      }
      if (param_3 != DAT_1808ac34c) {
        pfVar6 = (float *)param_1[0xf];
        pfVar3 = (float *)param_1[0x10];
        uVar4 = local_28._1_3_;
        for (; local_38 = param_3, pfVar6 != pfVar3; pfVar6 = pfVar6 + 10) {
          if ((param_3 < *pfVar6) || (NAN(param_3))) {
            fStack_1c = pfVar6[7];
            fStack_18 = pfVar6[8];
            uStack_30 = 0;
            local_28 = (uint)local_28._1_3_ << 8;
            uStack_24 = 0;
            uStack_20 = 0;
            uStack_14 = 0;
            FUN_18045d3f0(param_1 + 0xf,local_res8,pfVar6,&local_38);
            return;
          }
          if (param_3 == *pfVar6) {
            return;
          }
        }
        uStack_30 = 0;
        local_28 = (uint)local_28._1_3_ << 8;
        uStack_24 = 0;
        uStack_20 = 0;
        fStack_1c = 0.0;
        fStack_18 = 0.0;
        uStack_14 = 0;
        if (pfVar3 != (float *)param_1[0x11]) {
          *(ulonglong *)pfVar3 = CONCAT44(uStack_34,param_3);
          pfVar3[2] = 0.0;
          pfVar3[3] = 0.0;
          *(ulonglong *)(pfVar3 + 4) = (ulonglong)uVar4 << 8;
          pfVar3[6] = 0.0;
          pfVar3[7] = 0.0;
          pfVar3[8] = 0.0;
          pfVar3[9] = 0.0;
          param_1[0x10] = param_1[0x10] + 0x28;
          return;
        }
        FUN_180448980(param_1 + 0xf,pfVar3,&local_38);
      }
    }
    else {
      lVar2 = *param_1;
      fVar7 = (float)param_2 * DAT_1808ac00c + param_3 * DAT_1808ac00c;
      if (*(float *)(lVar2 + 0x1b4) != fVar7) {
        fVar1 = *(float *)(lVar2 + 0x164);
        lVar5 = 0;
        if ((*(float *)(lVar2 + 0x1b4) < fVar1) ||
           ((*(float *)(lVar2 + 0x1b8) != fVar7 &&
            ((lVar5 = 1, *(float *)(lVar2 + 0x1b8) < fVar1 ||
             ((*(float *)(lVar2 + 0x1bc) != fVar7 &&
              ((lVar5 = 2, *(float *)(lVar2 + 0x1bc) < fVar1 ||
               ((*(float *)(lVar2 + 0x1c0) != fVar7 &&
                (lVar5 = 3, *(float *)(lVar2 + 0x1c0) < fVar1)))))))))))) {
          *(float *)(lVar2 + 0x1b4 + lVar5 * 4) = fVar7;
          return;
        }
      }
    }
  }
  return;
}



/* ===== 180456a10 FUN_180456a10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180456a10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  longlong lVar16;
  int iVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_01;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float local_res8 [2];
  int local_res10 [2];
  float *local_108;
  int *piStack_100;
  longlong *local_f8;
  float local_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  uint local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  
  lVar3 = *param_1;
  if (param_1[0xf] != param_1[0x10]) {
    param_1[0x10] = param_1[0xf];
  }
  if (param_1[0x12] != param_1[0x13]) {
    param_1[0x13] = param_1[0x12];
  }
  fVar10 = DAT_1808acda0;
  fVar27 = DAT_1808accc8;
  fVar11 = DAT_1808ac34c;
  if ((*(byte *)(lVar3 + 0x68) & 0x20) == 0) {
    pfVar4 = *(float **)(param_2 + 0x48);
    pfVar18 = *(float **)(param_2 + 0x40);
    if (((ulonglong)(((longlong)pfVar4 - (longlong)pfVar18 >> 3) * -0x71c71c71c71c71c7) < 0x21) &&
       (pfVar18 != pfVar4)) {
      fVar25 = *(float *)(lVar3 + 0x1d0);
      fVar29 = *(float *)(lVar3 + 0x1d4);
      pfVar15 = pfVar18;
      do {
        if ((*pfVar15 < 0.0) || (DAT_1808ac34c < *pfVar15)) goto LAB_180456d96;
        uVar19 = *(ulonglong *)(pfVar15 + 2);
        if (uVar19 == 0) {
          if (*(char *)((longlong)pfVar15 + 0x42) == '\0') goto LAB_180456d96;
          if (*(char *)(pfVar15 + 0x10) != '\0') {
            fVar25 = fVar25 + pfVar15[0xd];
            fVar29 = fVar29 + pfVar15[0xe];
          }
        }
        else {
          if (((uVar19 & uVar19 - 1) != 0) || ((uVar19 & 0xe1f) == 0)) goto LAB_180456d96;
          cVar2 = *(char *)(pfVar15 + 4);
          if (uVar19 == 8) {
            if (cVar2 == '\0') {
              fVar25 = fVar25 + DAT_1808acda0;
            }
            else {
              fVar25 = fVar25 + DAT_1808ac34c;
            }
          }
          else if (uVar19 == 0x10) {
            if (cVar2 == '\0') {
              fVar25 = fVar25 + DAT_1808ac34c;
            }
            else {
              fVar25 = fVar25 + DAT_1808acda0;
            }
          }
          else if (uVar19 == 0x200) {
            if (cVar2 == '\0') {
              fVar29 = fVar29 + DAT_1808acda0;
            }
            else {
              fVar29 = fVar29 + DAT_1808ac34c;
            }
          }
          else if (uVar19 == 0x400) {
            if (cVar2 == '\0') {
              fVar29 = fVar29 + DAT_1808ac34c;
            }
            else {
              fVar29 = fVar29 + DAT_1808acda0;
            }
          }
        }
        if ((DAT_1808ac540 < (float)((uint)fVar25 & _DAT_1808ade90)) ||
           (DAT_1808ac540 < (float)((uint)fVar29 & _DAT_1808ade90))) goto LAB_180456d96;
        pfVar15 = pfVar15 + 0x12;
      } while (pfVar15 != pfVar4);
      fVar25 = *(float *)(param_2 + 0x20);
      fVar29 = *(float *)(param_2 + 0x24);
      do {
        fStack_dc = 0.0;
        fStack_d8 = 0.0;
        fStack_d4 = 0.0;
        fStack_d0 = 0.0;
        uStack_cc = 0;
        piVar5 = *(int **)(pfVar18 + 2);
        uVar8 = local_e0 >> 8;
        uVar9 = local_e0 >> 8;
        local_e0 = uVar8 << 8;
        local_f0 = (*pfVar18 + fVar27) - fVar27;
        piStack_e8 = piVar5;
        if (piVar5 == (int *)0x0) {
          if (*(char *)(pfVar18 + 0x10) != '\0') {
            fStack_dc = pfVar18[0xd];
            fStack_d8 = pfVar18[0xe];
          }
        }
        else {
          local_e0 = CONCAT31((int3)uVar9,*(char *)(pfVar18 + 4) != '\0');
          if (((ulonglong)piVar5 & 0x801) != 0) {
            plVar6 = (longlong *)param_1[0x13];
            local_108 = (float *)CONCAT44(local_108._4_4_,local_f0);
            local_f8 = (longlong *)CONCAT71(local_f8._1_7_,*(char *)(pfVar18 + 4) != '\0');
            piStack_100 = piVar5;
            if (plVar6 == (longlong *)param_1[0x14]) {
              FUN_18045d690(param_1 + 0x12,plVar6,&local_108);
              piStack_e8 = (int *)0x0;
              local_e0 = local_e0 & 0xffffff00;
            }
            else {
              piStack_e8 = (int *)0x0;
              *plVar6 = (longlong)local_108;
              plVar6[1] = (longlong)piVar5;
              local_e0 = uVar8 << 8;
              plVar6[2] = (longlong)local_f8;
              param_1[0x13] = param_1[0x13] + 0x18;
            }
          }
        }
        if (*(char *)(pfVar18 + 0xc) != '\0') {
          fVar25 = fVar25 + pfVar18[9];
          fVar29 = fVar29 + pfVar18[10];
        }
        puVar7 = (undefined8 *)param_1[0x10];
        if (puVar7 == (undefined8 *)param_1[0x11]) {
          fStack_d4 = fVar25;
          fStack_d0 = fVar29;
          FUN_180448980(param_1 + 0xf,puVar7,&local_f0);
        }
        else {
          *puVar7 = CONCAT44(uStack_ec,local_f0);
          puVar7[1] = piStack_e8;
          puVar7[2] = CONCAT44(fStack_dc,local_e0);
          puVar7[3] = CONCAT44(fVar25,fStack_d8);
          puVar7[4] = CONCAT44(uStack_cc,fVar29);
          param_1[0x10] = param_1[0x10] + 0x28;
        }
        pfVar18 = pfVar18 + 0x12;
      } while (pfVar18 != pfVar4);
    }
  }
LAB_180456d96:
  fStack_d4 = *(float *)(param_2 + 0x20);
  fStack_d0 = *(float *)(param_2 + 0x24);
  puVar7 = (undefined8 *)param_1[0x10];
  piStack_e8 = (int *)0x0;
  local_e0 = local_e0 & 0xffffff00;
  fStack_dc = 0.0;
  fStack_d8 = 0.0;
  uStack_cc = 0;
  local_f0 = 1.0;
  if (puVar7 == (undefined8 *)param_1[0x11]) {
    FUN_180448980(param_1 + 0xf,puVar7,&local_f0);
  }
  else {
    *puVar7 = CONCAT44(uStack_ec,0x3f800000);
    puVar7[1] = 0;
    puVar7[2] = (ulonglong)local_e0;
    puVar7[3] = (ulonglong)(uint)fStack_d4 << 0x20;
    puVar7[4] = (ulonglong)(uint)fStack_d0;
    param_1[0x10] = param_1[0x10] + 0x28;
  }
  lVar16 = param_1[0xf];
  uVar19 = (param_1[0x10] - lVar16 >> 3) * -0x3333333333333333;
  if ((1 < uVar19) && (1 < (longlong)uVar19)) {
    lVar20 = uVar19 - 2;
    do {
      lVar1 = lVar16 + lVar20 * 0x28;
      if ((((*(longlong *)(lVar16 + 8 + lVar20 * 0x28) == 0) && (*(float *)(lVar1 + 0x14) == 0.0))
          && (*(float *)(lVar1 + 0x18) == 0.0)) &&
         ((*(float *)(lVar1 + 0x1c) == *(float *)(lVar1 + 0x44) &&
          (*(float *)(lVar1 + 0x20) == *(float *)(lVar1 + 0x48))))) {
        FUN_180540530(lVar1,lVar1 + 0x28,param_1[0x10] - (lVar1 + 0x28));
        param_1[0x10] = param_1[0x10] + -0x28;
        lVar16 = param_1[0xf];
      }
      lVar20 = lVar20 + -1;
    } while (-1 < lVar20);
  }
  if (*(longlong *)(lVar3 + 0x7a8) != 0) {
    local_res10[0] = *(int *)(lVar3 + 0x15c);
    local_res8[0] = (float)(local_res10[0] + -1);
    local_108 = local_res8;
    piStack_100 = local_res10;
    local_f8 = param_1;
    FUN_180457420(&local_108,*(undefined4 *)(lVar3 + 0x354),*(undefined4 *)(lVar3 + 0x358));
    FUN_180457420(&local_108,*(undefined4 *)(lVar3 + 0x35c),*(undefined4 *)(lVar3 + 0x360));
    FUN_180457420(&local_108,*(undefined4 *)(lVar3 + 0x364),*(undefined4 *)(lVar3 + 0x368));
  }
  if (((*(char *)(lVar3 + 0x228) != '\0') && (*(float *)(lVar3 + 0x22c) != 0.0)) &&
     (*(float *)(lVar3 + 0x22c) != fVar11)) {
    FUN_180456700();
  }
  fVar30 = DAT_1808acab0;
  fVar29 = DAT_1808ac1f4;
  fVar25 = DAT_1808ac00c;
  if (*(char *)(lVar3 + 0x2cc) == '\0') {
    fVar21 = *(float *)(lVar3 + 0x280) * _DAT_1808abfb4 + fVar11;
    if (fVar21 <= fVar11) {
      fVar26 = DAT_1808ac118;
      if (DAT_1808ac118 <= fVar21) {
        fVar26 = fVar21;
      }
    }
    else {
      fVar26 = fVar11;
    }
    fVar21 = *(float *)(lVar3 + 0x274);
    if ((0.0 <= 0.0 - fVar21) || (fVar11 <= (0.0 - fVar21) + fVar11)) {
      iVar14 = 0;
    }
    else {
      iVar14 = -1;
    }
    if ((((float)((*(int *)((longlong)param_1 + 100) - *(int *)(lVar3 + 0x270)) + iVar14) *
          DAT_1808ac00c * _DAT_1808ac39c + fVar26 * fVar26 < fVar11) && (fVar21 != 0.0)) &&
       (fVar21 != fVar11)) {
      FUN_180456700(param_1,fVar21);
    }
    local_res8[0] = 0.0;
    uVar22 = FUN_180512fd0(*(float *)(lVar3 + 0x2d0) * fVar29 * fVar30);
    auVar28._8_4_ = (int)extraout_XMM0_Qb;
    auVar28._0_8_ = uVar22;
    auVar28._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    if ((float)uVar22 < 0.0) {
      auVar28._0_4_ = (float)uVar22 + fVar11;
      if (auVar28._0_4_ < fVar11) {
        local_res8[0] = local_res8[0] + fVar10;
      }
      else {
        auVar28 = ZEXT816(0);
      }
    }
    iVar17 = (int)local_res8[0];
    iVar14 = *(int *)(lVar3 + 0x270);
    iVar13 = iVar14 - iVar17;
    fVar27 = (auVar28._0_4_ + fVar27) - fVar27;
    fVar26 = fVar21 - fVar27;
    if (fVar26 < 0.0) {
      fVar26 = fVar26 + fVar11;
      if (fVar26 < fVar11) {
        iVar13 = iVar13 + -1;
      }
      else {
        fVar26 = 0.0;
      }
    }
    iVar12 = *(int *)((longlong)param_1 + 100);
    if (((iVar13 == iVar12) && (fVar26 != 0.0)) && (fVar26 != fVar11)) {
      FUN_180456700(param_1);
      iVar12 = *(int *)((longlong)param_1 + 100);
    }
    fVar27 = fVar27 + fVar21;
    iVar14 = iVar14 + iVar17;
    if (fVar11 <= fVar27) {
      iVar14 = iVar14 + (uint)!NAN(fVar27);
      fVar27 = fVar27 - fVar11;
    }
    if (((iVar14 == iVar12) && (fVar27 != 0.0)) && (fVar27 != fVar11)) {
      FUN_180456700(param_1,fVar27);
    }
  }
  fVar27 = *(float *)(lVar3 + 0x1ec);
  auVar23._0_8_ = FUN_180519fe0();
  auVar23._8_8_ = extraout_XMM0_Qb_00;
  auVar24._4_12_ = auVar23._4_12_;
  auVar24._0_4_ = (float)auVar23._0_8_ * fVar30;
  iVar14 = (int)((fVar27 - (float)auVar23._0_8_) * fVar30 + fVar29);
  if ((auVar24._0_4_ < 0.0) || (fVar11 <= auVar24._0_4_)) {
    local_res8[0] = 0.0;
    auVar24._0_8_ = FUN_180512fd0(auVar24._0_8_,local_res8);
    auVar24._8_8_ = extraout_XMM0_Qb_01;
    fVar29 = (float)auVar24._0_8_;
    fVar27 = local_res8[0];
    if (fVar29 < 0.0) {
      auVar24._0_4_ = fVar29 + fVar11;
      if (auVar24._0_4_ < fVar11) {
        fVar27 = local_res8[0] + fVar10;
      }
      else {
        auVar24 = ZEXT816(0);
      }
    }
    iVar14 = iVar14 + (int)fVar27;
  }
  if (((iVar14 == *(int *)(lVar3 + 0x15c) + -1) && (fVar27 = auVar24._0_4_, fVar27 != 0.0)) &&
     (fVar27 != fVar11)) {
    FUN_180456700(param_1,fVar27);
  }
  if (((*(char *)(lVar3 + 0x1e1) != '\0') && ((*(byte *)(lVar3 + 0x68) & 1) == 0)) &&
     ((((*(char *)(lVar3 + 0x70) == '\x02' &&
        ((fVar27 = *(float *)((longlong)param_1 + 0x44), 0.0 < fVar27 &&
         (fVar29 = *(float *)(lVar3 + 0x2e8) * *(float *)(lVar3 + 0x7c) * _DAT_1808acd28 +
                   *(float *)(lVar3 + 0x20) * fVar25, fVar27 + fVar29 <= 0.0)))) &&
       (fVar29 = (float)((uint)fVar27 ^ DAT_1808adec0) / fVar29, fVar29 != 0.0)) &&
      (fVar29 != fVar11)))) {
    iVar14 = *(int *)((longlong)param_1 + 100);
    if ((fVar29 < 0.0) || (fVar11 <= fVar29)) {
      local_res8[0] = 0.0;
      fVar29 = (float)FUN_180512fd0();
      fVar27 = local_res8[0];
      if (fVar29 < 0.0) {
        fVar29 = fVar29 + fVar11;
        if (fVar29 < fVar11) {
          fVar27 = local_res8[0] + fVar10;
        }
        else {
          fVar29 = 0.0;
        }
      }
      iVar14 = iVar14 + (int)fVar27;
    }
    FUN_180456830(param_1,iVar14,fVar29);
  }
  fVar10 = DAT_1808ac33c;
  fVar27 = DAT_1808abfbc;
  fVar30 = (float)*(int *)((longlong)param_1 + 0x6c) * fVar25;
  fVar25 = (float)*(int *)((longlong)param_1 + 100) * fVar25;
  fVar29 = fVar30 - fVar25;
  if (fVar29 != 0.0) {
    fVar21 = *(float *)(lVar3 + 0x1b4);
    if ((((fVar25 <= fVar21) && (fVar21 <= fVar30)) &&
        (fVar21 = (fVar21 - fVar25) / fVar29, fVar21 != fVar11)) &&
       ((DAT_1808abfbc < fVar21 && (fVar21 < DAT_1808ac33c)))) {
      FUN_180456700(param_1);
    }
    fVar21 = *(float *)(lVar3 + 0x1b8);
    if (((fVar25 <= fVar21) && (fVar21 <= fVar30)) &&
       ((fVar21 = (fVar21 - fVar25) / fVar29, fVar21 != fVar11 &&
        ((fVar27 < fVar21 && (fVar21 < fVar10)))))) {
      FUN_180456700(param_1);
    }
    fVar21 = *(float *)(lVar3 + 0x1bc);
    if ((((fVar25 <= fVar21) && (fVar21 <= fVar30)) &&
        (fVar21 = (fVar21 - fVar25) / fVar29, fVar21 != fVar11)) &&
       ((fVar27 < fVar21 && (fVar21 < fVar10)))) {
      FUN_180456700(param_1);
    }
    fVar21 = *(float *)(lVar3 + 0x1c0);
    if (((fVar25 <= fVar21) && (fVar21 <= fVar30)) &&
       ((fVar29 = (fVar21 - fVar25) / fVar29, fVar29 != fVar11 &&
        ((fVar27 < fVar29 && (fVar29 < fVar10)))))) {
      FUN_180456700(param_1);
    }
  }
  return;
}



/* ===== 180457420 FUN_180457420 ===== */

void FUN_180457420(undefined8 *param_1,int param_2,float param_3)

{
  longlong lVar1;
  float *pfVar2;
  bool bVar3;
  float *pfVar4;
  float local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined1 local_18;
  uint7 uStack_17;
  
  if (param_2 == *(int *)*param_1) {
    bVar3 = 0.0 < param_3;
  }
  else {
    bVar3 = *(int *)param_1[1] <= param_2;
  }
  if (bVar3) {
    if (param_2 == *(int *)param_1[1]) {
      bVar3 = param_3 <= 0.0;
    }
    else {
      bVar3 = param_2 < *(int *)param_1[1];
    }
    if (bVar3) {
      lVar1 = param_1[2];
      pfVar4 = *(float **)(lVar1 + 0x90);
      pfVar2 = *(float **)(lVar1 + 0x98);
      while (((pfVar4 != pfVar2 && (*pfVar4 <= param_3)) && (!NAN(param_3)))) {
        if (param_3 == *pfVar4) {
          return;
        }
        pfVar4 = pfVar4 + 6;
      }
      uStack_20 = 0;
      local_18 = 0;
      local_28 = param_3;
      if (pfVar2 != *(float **)(lVar1 + 0xa0)) {
        if (pfVar4 == pfVar2) {
          *(ulonglong *)pfVar2 = CONCAT44(uStack_24,param_3);
          pfVar2[2] = 0.0;
          pfVar2[3] = 0.0;
          *(ulonglong *)(pfVar2 + 4) = (ulonglong)uStack_17 << 8;
          *(longlong *)(lVar1 + 0x98) = *(longlong *)(lVar1 + 0x98) + 0x18;
          return;
        }
        *pfVar2 = pfVar2[-6];
        pfVar2[1] = pfVar2[-5];
        pfVar2[2] = pfVar2[-4];
        pfVar2[3] = pfVar2[-3];
        *(undefined8 *)(pfVar2 + 4) = *(undefined8 *)(pfVar2 + -2);
        *(longlong *)(lVar1 + 0x98) = *(longlong *)(lVar1 + 0x98) + 0x18;
        FUN_180540530(pfVar4 + 6,pfVar4);
        *(ulonglong *)pfVar4 = CONCAT44(uStack_24,local_28);
        *(undefined8 *)(pfVar4 + 2) = uStack_20;
        *(ulonglong *)(pfVar4 + 4) = CONCAT71(uStack_17,local_18);
        return;
      }
      FUN_18045d690(lVar1 + 0x90,pfVar4,&local_28);
    }
  }
  return;
}



/* ===== 180457560 FUN_180457560 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180457560(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  short sVar17;
  undefined2 uVar18;
  uint uVar19;
  undefined4 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte bVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  char cVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  uint uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  ulonglong local_res18;
  ulonglong local_res20;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  
  puVar9 = (uint *)*param_1;
  uVar20 = 0xffffffff;
  puVar9[0x57] = (int)((float)puVar9[0x59] * DAT_1808acab0 + DAT_1808ac1f4);
  uVar43 = *(ulonglong *)(puVar9 + 0x5e);
  uVar36 = *(ulonglong *)(puVar9 + 0x68);
  local_100 = *(undefined8 *)(puVar9 + 100);
  local_f8 = *(undefined8 *)(puVar9 + 0x66);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (((((puVar9[0x1a] & 1) != 0) && (puVar9[0x1b] != 0xffffffff)) &&
      (lVar21 = FUN_1804320a0(), lVar21 != 0)) &&
     (uVar22 = FUN_180011220((ulonglong)DAT_180c873c4 + 3 + lVar21), (uVar22 & 1) != 0)) {
    puVar9[0x1a] = puVar9[0x1a] | 0x800000;
  }
  uVar33 = puVar9[0x1a];
  fVar45 = (float)puVar9[5];
  if ((uVar33 >> 0x17 & 1) == 0) {
    fVar49 = (float)*(undefined8 *)(puVar9 + 6) * _DAT_1808adc40;
    fVar50 = (float)((ulonglong)*(undefined8 *)(puVar9 + 6) >> 0x20) * _UNK_1808adc44;
    puVar9[6] = 0;
    puVar9[7] = 0;
    fVar44 = (float)puVar9[8] * _DAT_1808ac358;
    puVar9[8] = 0;
    fVar45 = fVar44 + fVar45;
    *(ulonglong *)(puVar9 + 3) =
         CONCAT44(fVar50 + (float)((ulonglong)*(undefined8 *)(puVar9 + 3) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(puVar9 + 3));
    puVar9[5] = (uint)fVar45;
  }
  puVar9[0x1a] = uVar33 & 0xff7fffff;
  if ((uVar33 & 0x2001) == 0) {
    puVar9[0x77] = (uint)fVar45 ^ DAT_1808adec0;
  }
  fVar45 = DAT_1808ac34c;
  if (((puVar9[0x56] & 4) == 0) && (*(longlong *)(puVar9 + 0x1ea) != 0)) {
    if ((int)puVar9[0x1cb] < 1) {
      uVar33 = 0;
      fVar44 = 0.0;
    }
    else {
      iVar25 = puVar9[0x1cb] + puVar9[0x1cc];
      lVar21 = (longlong)
               (int)((iVar25 + -1) - (((iVar25 + -1 >> 0x1f & 0x1fU) - 1) + iVar25 & 0xffffffe0));
      fVar44 = (float)puVar9[lVar21 * 2 + 0x18c];
      uVar33 = puVar9[lVar21 * 2 + 0x18b];
      if ((fVar44 < 0.0) || (DAT_1808ac34c <= fVar44)) {
        local_res18 = local_res18 & 0xffffffff00000000;
        fVar44 = (float)FUN_180512fd0(iVar25,&local_res18);
        fVar49 = (float)local_res18;
        if (fVar44 < 0.0) {
          fVar44 = fVar44 + fVar45;
          if (fVar45 <= fVar44) {
            fVar44 = 0.0;
            uVar33 = uVar33 + (int)(float)local_res18;
            goto LAB_18045779d;
          }
          fVar49 = (float)local_res18 + DAT_1808acda0;
        }
        uVar33 = uVar33 + (int)fVar49;
      }
    }
LAB_18045779d:
    puVar10 = *(uint **)(param_2 + 0x60);
    for (puVar35 = *(uint **)(param_2 + 0x58); puVar35 != puVar10; puVar35 = puVar35 + 3) {
      if ((char)puVar35[2] == '\0') {
        uVar19 = 0;
        fVar49 = 0.0;
      }
      else {
        uVar19 = *puVar35;
        fVar49 = (float)puVar35[1];
      }
      if (uVar33 == uVar19) {
        if (fVar44 < fVar49) goto LAB_1804577d6;
      }
      else if ((int)uVar33 < (int)uVar19) {
LAB_1804577d6:
        uVar47 = puVar9[0x1cb];
        uVar52 = puVar9[0x1cc];
        if ((int)uVar47 < 0x20) {
          puVar9[0x1cb] = uVar47 + 1;
          uVar52 = (int)(uVar52 + uVar47) % 0x20;
        }
        else {
          puVar9[0x1cc] =
               (uVar52 + 1) - (((int)(uVar52 + 1) >> 0x1f & 0x1fU) + 1 + uVar52 & 0xffffffe0);
        }
        puVar9[(longlong)(int)uVar52 * 2 + 0x18b] = uVar19;
        puVar9[(longlong)(int)uVar52 * 2 + 0x18c] = (uint)fVar49;
      }
    }
  }
  puVar10 = (uint *)((longlong)puVar9 + 0x28e);
  *(uint *)((longlong)param_1 + 0x6c) = puVar9[0x57];
  uVar33 = puVar9[0x57];
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(uint *)((longlong)param_1 + 100) = uVar33 - 1;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined1 *)puVar10 = *(undefined1 *)((longlong)puVar9 + 0x28f);
  if ((((puVar9[0x1a] & 1) != 0) && (*(longlong *)(puVar9 + 0x7e) != 0)) &&
     (iVar25 = FUN_180011200(*(longlong *)(puVar9 + 0x7e) + 8), iVar25 == 0x75de364e)) {
    *(undefined1 *)puVar10 = 1;
  }
  *(undefined1 *)((longlong)puVar9 + 0x28f) = 0;
  if (puVar9 + 0xa2 <= puVar10) {
    FUN_180540170(puVar9 + 0xa2,0,6);
  }
  fVar50 = DAT_1808ace94;
  fVar49 = DAT_1808acc90;
  dVar16 = DAT_1808ac7f0;
  dVar15 = DAT_1808ac7d8;
  dVar14 = DAT_1808ac650;
  dVar13 = DAT_1808ac4a8;
  dVar12 = DAT_1808ac178;
  *(uint *)(param_1 + 6) = *puVar9;
  *(uint *)((longlong)param_1 + 0x34) = puVar9[1];
  *(uint *)(param_1 + 7) = puVar9[2];
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x28);
  fVar44 = (float)puVar9[3];
  if (fVar50 <= fVar44) {
    fVar55 = fVar49;
    if (fVar44 <= fVar49) {
      if (fVar44 == 0.0) {
        fVar55 = 0.0;
      }
      else {
        fVar44 = (float)((double)((longlong)((double)(fVar44 - fVar50) * dVar14 + dVar13) &
                                 0xffffffff) * dVar12 * dVar16 - dVar15);
        if (fVar44 <= fVar49) {
          fVar55 = fVar44;
        }
      }
    }
  }
  else {
    fVar55 = fVar50;
  }
  *(float *)((longlong)param_1 + 0x3c) = fVar55;
  fVar44 = (float)puVar9[4];
  if (fVar50 <= fVar44) {
    fVar55 = fVar49;
    if (fVar44 <= fVar49) {
      if (fVar44 == 0.0) {
        fVar55 = 0.0;
      }
      else {
        fVar44 = (float)((double)((longlong)((double)(fVar44 - fVar50) * dVar14 + dVar13) &
                                 0xffffffff) * dVar12 * dVar16 - dVar15);
        if (fVar44 <= fVar49) {
          fVar55 = fVar44;
        }
      }
    }
  }
  else {
    fVar55 = fVar50;
  }
  *(float *)(param_1 + 8) = fVar55;
  uVar33 = _DAT_1808ade90;
  fVar55 = DAT_1808ac864;
  fVar44 = (float)puVar9[5];
  if (fVar50 <= fVar44) {
    fVar51 = fVar49;
    if (fVar44 <= fVar49) {
      if (fVar44 == 0.0) {
        fVar51 = 0.0;
      }
      else {
        fVar44 = (float)((double)((longlong)((double)(fVar44 - fVar50) * dVar14 + dVar13) &
                                 0xffffffff) * dVar12 * dVar16 - dVar15);
        if (fVar44 <= fVar49) {
          fVar51 = fVar44;
        }
      }
    }
  }
  else {
    fVar51 = fVar50;
  }
  puVar10 = (uint *)(param_1 + 3);
  *puVar10 = 0;
  *(float *)((longlong)param_1 + 0x44) = fVar51;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if ((puVar9[0x5e] & 0x18) == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = puVar9[0x71];
    if ((0x7f7fffff < (uVar19 & 0x7fffffff)) || (fVar55 <= (float)(uVar19 & uVar33))) {
      uVar19 = 0;
    }
    *puVar10 = uVar19;
  }
  if ((puVar9[0x5e] & 0x600) == 0) {
    uVar47 = 0;
  }
  else {
    uVar47 = puVar9[0x72];
    if ((0x7f7fffff < (uVar47 & 0x7fffffff)) || (fVar55 <= (float)(uVar47 & uVar33))) {
      uVar47 = 0;
    }
    *(uint *)((longlong)param_1 + 0x1c) = uVar47;
  }
  uVar52 = puVar9[0x73];
  local_res18 = CONCAT44(local_res18._4_4_,uVar52);
  if ((0x7f7fffff < (uVar52 & 0x7fffffff)) || (fVar55 <= (float)(uVar52 & uVar33))) {
    uVar52 = 0;
  }
  puVar35 = (uint *)((longlong)param_1 + 0x24);
  *(uint *)(param_1 + 4) = uVar52;
  *puVar35 = uVar19;
  uVar22 = 1;
  *(uint *)(param_1 + 5) = uVar47;
  *(uint *)((longlong)param_1 + 0x2c) = uVar52;
  if ((puVar9[0x1a] & 0x20) != 0) {
    if (puVar10 <= puVar35) {
      puVar10[0] = 0;
      puVar10[1] = 0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (puVar35 <= param_1 + 6) {
      puVar35[0] = 0;
      puVar35[1] = 0;
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    if ((char)param_1[0x28] != '\0') {
      uVar42 = 1;
      iVar25 = 8;
      do {
        uVar19 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar42) != 0) & 0x20 |
                           -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar42) != 0) & 0x10 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x5e) & uVar42) != 0) & 8));
        uVar41 = 0;
        if ((uVar19 & 1) != 0) {
          uVar41 = uVar42;
        }
        uVar26 = ~uVar42;
        uVar37 = *(ulonglong *)(puVar9 + 0x5e) & uVar26;
        uVar31 = 0;
        if ((uVar19 & 2) != 0) {
          uVar31 = uVar42;
        }
        uVar38 = *(ulonglong *)(puVar9 + 0x60) & uVar26;
        uVar29 = 0;
        if ((uVar19 & 4) != 0) {
          uVar29 = uVar42;
        }
        uVar26 = *(ulonglong *)(puVar9 + 0x62) & uVar26;
        uVar28 = uVar42 << 1;
        uVar27 = ~uVar28;
        uVar19 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar26 & uVar28) != 0) & 0x20 |
                           -(uint)((uVar38 & uVar28) != 0) & 0x10 |
                          -(uint)((uVar37 & uVar28) != 0) & 8));
        uVar40 = 0;
        if ((uVar19 & 1) != 0) {
          uVar40 = uVar28;
        }
        uVar37 = (uVar41 | uVar37) & uVar27;
        uVar41 = 0;
        if ((uVar19 & 2) != 0) {
          uVar41 = uVar28;
        }
        uVar38 = (uVar31 | uVar38) & uVar27;
        uVar31 = 0;
        if ((uVar19 & 4) != 0) {
          uVar31 = uVar28;
        }
        uVar27 = (uVar29 | uVar26) & uVar27;
        uVar26 = uVar42 << 2;
        uVar28 = ~uVar26;
        uVar19 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar27 & uVar26) != 0) & 0x20 |
                           -(uint)((uVar38 & uVar26) != 0) & 0x10 |
                          -(uint)((uVar37 & uVar26) != 0) & 8));
        uVar29 = 0;
        if ((uVar19 & 1) != 0) {
          uVar29 = uVar26;
        }
        uVar40 = (uVar40 | uVar37) & uVar28;
        uVar37 = 0;
        if ((uVar19 & 2) != 0) {
          uVar37 = uVar26;
        }
        uVar38 = (uVar41 | uVar38) & uVar28;
        uVar41 = 0;
        if ((uVar19 & 4) != 0) {
          uVar41 = uVar26;
        }
        uVar28 = (uVar31 | uVar27) & uVar28;
        uVar31 = uVar42 << 3;
        uVar27 = ~uVar31;
        uVar19 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar28 & uVar31) != 0) & 0x20 |
                           -(uint)((uVar38 & uVar31) != 0) & 0x10 |
                          -(uint)((uVar40 & uVar31) != 0) & 8));
        uVar26 = 0;
        if ((uVar19 & 1) != 0) {
          uVar26 = uVar31;
        }
        uVar40 = (uVar29 | uVar40) & uVar27;
        uVar29 = 0;
        if ((uVar19 & 2) != 0) {
          uVar29 = uVar31;
        }
        uVar38 = (uVar37 | uVar38) & uVar27;
        uVar37 = 0;
        if ((uVar19 & 4) != 0) {
          uVar37 = uVar31;
        }
        uVar27 = (uVar41 | uVar28) & uVar27;
        uVar41 = uVar42 << 4;
        uVar28 = ~uVar41;
        uVar19 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar27 & uVar41) != 0) & 0x20 |
                           -(uint)((uVar38 & uVar41) != 0) & 0x10 |
                          -(uint)((uVar40 & uVar41) != 0) & 8));
        uVar31 = 0;
        if ((uVar19 & 1) != 0) {
          uVar31 = uVar41;
        }
        uVar40 = (uVar26 | uVar40) & uVar28;
        uVar26 = 0;
        if ((uVar19 & 2) != 0) {
          uVar26 = uVar41;
        }
        uVar38 = (uVar29 | uVar38) & uVar28;
        uVar29 = 0;
        if ((uVar19 & 4) != 0) {
          uVar29 = uVar41;
        }
        uVar28 = (uVar37 | uVar27) & uVar28;
        uVar41 = uVar42 << 5;
        uVar27 = ~uVar41;
        uVar19 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar28 & uVar41) != 0) & 0x20 |
                           -(uint)((uVar38 & uVar41) != 0) & 0x10 |
                          -(uint)((uVar40 & uVar41) != 0) & 8));
        uVar37 = 0;
        if ((uVar19 & 1) != 0) {
          uVar37 = uVar41;
        }
        uVar40 = (uVar31 | uVar40) & uVar27;
        uVar31 = 0;
        if ((uVar19 & 2) != 0) {
          uVar31 = uVar41;
        }
        uVar38 = (uVar26 | uVar38) & uVar27;
        uVar26 = 0;
        if ((uVar19 & 4) != 0) {
          uVar26 = uVar41;
        }
        uVar27 = (uVar29 | uVar28) & uVar27;
        uVar41 = uVar42 << 6;
        uVar19 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar27 & uVar41) != 0) & 0x20 |
                           -(uint)((uVar38 & uVar41) != 0) & 0x10 |
                          -(uint)((uVar40 & uVar41) != 0) & 8));
        uVar28 = ~uVar41;
        uVar29 = 0;
        if ((uVar19 & 1) != 0) {
          uVar29 = uVar41;
        }
        uVar40 = (uVar37 | uVar40) & uVar28;
        uVar37 = 0;
        if ((uVar19 & 2) != 0) {
          uVar37 = uVar41;
        }
        uVar38 = (uVar31 | uVar38) & uVar28;
        uVar31 = 0;
        if ((uVar19 & 4) != 0) {
          uVar31 = uVar41;
        }
        uVar28 = (uVar26 | uVar27) & uVar28;
        uVar41 = uVar42 << 7;
        uVar27 = ~uVar41;
        uVar19 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar28 & uVar41) != 0) & 0x20 |
                           -(uint)((uVar38 & uVar41) != 0) & 0x10 |
                          -(uint)((uVar40 & uVar41) != 0) & 8));
        uVar26 = 0;
        if ((uVar19 & 1) != 0) {
          uVar26 = uVar41;
        }
        uVar26 = uVar26 | (uVar29 | uVar40) & uVar27;
        *(ulonglong *)(puVar9 + 0x5e) = uVar26;
        uVar29 = 0;
        if ((uVar19 & 2) != 0) {
          uVar29 = uVar41;
        }
        *(ulonglong *)(puVar9 + 0x60) = uVar29 | (uVar37 | uVar38) & uVar27;
        uVar37 = 0;
        if ((uVar19 & 4) != 0) {
          uVar37 = uVar41;
        }
        uVar42 = uVar42 << 8 | uVar42 >> 0x38;
        *(ulonglong *)(puVar9 + 0x62) = uVar37 | (uVar31 | uVar28) & uVar27;
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
      *(ulonglong *)(puVar9 + 0x68) = uVar26 & *(ulonglong *)(puVar9 + 0x46);
    }
    puVar9[0x66] = 0xffffffff;
    puVar9[0x67] = 0xffffffff;
    puVar9[100] = 0;
    puVar9[0x65] = 0;
  }
  FUN_180456a10(param_1,param_2);
  if ((puVar9[0x1a] & 1) == 0) {
    fVar44 = 0.0 - (float)puVar9[0x95];
    iVar25 = *(int *)((longlong)param_1 + 100) - puVar9[0x94];
    if (fVar44 < 0.0) {
      fVar44 = fVar44 + fVar45;
      if (fVar44 < fVar45) {
        iVar25 = iVar25 + -1;
      }
      else {
        fVar44 = 0.0;
      }
    }
    fVar44 = (float)puVar9[0x79] -
             ((float)iVar25 * DAT_1808ac00c + fVar44 * DAT_1808ac00c) * (float)puVar9[0xba];
    if (fVar44 <= fVar49) {
      fVar55 = fVar50;
      if (fVar50 <= fVar44) {
        fVar55 = fVar44;
      }
      if (fVar50 <= fVar55) {
        if (fVar55 <= fVar49) {
          if (fVar55 != 0.0) goto LAB_18045809e;
          fVar50 = 0.0;
        }
        else {
          fVar50 = fVar49;
        }
      }
    }
    else {
      fVar55 = fVar49;
LAB_18045809e:
      fVar44 = (float)((double)((longlong)((double)(fVar55 - fVar50) * dVar14 + dVar13) & 0xffffffff
                               ) * dVar12 * dVar16 - dVar15);
      fVar50 = fVar49;
      if (fVar44 <= fVar49) {
        fVar50 = fVar44;
      }
    }
    if (*(float *)((longlong)param_1 + 0x44) == fVar50) {
      *(float *)((longlong)param_1 + 0x44) = fVar55;
    }
  }
  uVar47 = DAT_180c873d4;
  uVar19 = puVar9[0x1d];
  uVar41 = (ulonglong)DAT_180c873d4;
  uVar42 = 0xc3011;
  if (uVar19 == 3) {
    uVar42 = 0x1000c3011;
  }
  uVar31 = 0x800c3011;
  if (uVar19 != 2) {
    uVar31 = uVar42;
  }
  if (uVar19 < 2) {
    uVar31 = 0xc3011;
  }
  if (puVar9[0xd0] == 1) {
    uVar31 = 0xc3011;
  }
  *(ulonglong *)(puVar9 + 0x26) = *(ulonglong *)(puVar9 + 0x26) & 0xfffffffe7ff3cfee;
  *(ulonglong *)(puVar9 + 0x26) = *(ulonglong *)(puVar9 + 0x26) | uVar31;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1c] = (longlong)&PTR_FUN_180c873a8;
  lVar21 = _UNK_1808adf98;
  param_1[0x20] = _DAT_1808adf90;
  param_1[0x21] = lVar21;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x119) = 0x49;
  *(undefined2 *)((longlong)param_1 + 0x117) = 0xb0f;
  uVar19 = puVar9[0x56];
  param_1[0x1e] = (ulonglong)(uVar19 & 1) << 0x12;
  param_1[0x1f] = 0x40000;
  param_1[0x1d] = *(longlong *)(puVar9 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x119) = 0x4b;
  *(byte *)(param_1 + 0x24) = (byte)(uVar19 & 1) ^ 1;
  if (*(longlong *)(puVar9 + 0x52) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
LAB_1804582c0:
    uVar18 = 0;
  }
  else {
    lVar21 = FUN_18000f3a0(*(longlong *)(puVar9 + 0x52) + 0x10);
    if (lVar21 == 0) {
      uVar52 = 0xffffffff;
    }
    else {
      uVar19 = FUN_180011200(lVar21 + 0x10);
      sVar17 = FUN_180011200(lVar21 + 0x30);
      uVar52 = uVar19 - (ushort)(sVar17 << 0xf);
      uVar52 = (uVar19 ^ uVar52) & 0x7fff ^ uVar52;
    }
    *(uint *)(param_1 + 0x20) = uVar52;
    if (((*(longlong *)(puVar9 + 0x52) == 0) || (uVar47 == 0)) ||
       (lVar21 = FUN_18000f3a0(*(longlong *)(puVar9 + 0x52) + uVar41), lVar21 == 0))
    goto LAB_1804582c0;
    uVar18 = FUN_180011440((ulonglong)DAT_180c873e4 + lVar21 + (ulonglong)DAT_180c873f8);
  }
  *(undefined2 *)(param_1 + 0x22) = uVar18;
  lVar21 = *(longlong *)(puVar9 + 0x52);
  if ((((lVar21 != 0) && (uVar47 != 0)) &&
      ((lVar23 = FUN_18000f3a0(lVar21 + uVar41), lVar23 != 0 &&
       ((uVar42 = FUN_180011220((ulonglong)DAT_180c873f0 + lVar23), (uVar42 & 4) == 0 &&
        (iVar25 = FUN_180011200((ulonglong)DAT_180c873dc + lVar21), iVar25 != -1)))))) &&
     (lVar21 = FUN_1804320a0(iVar25), lVar21 != 0)) {
    uVar20 = FUN_180432130(lVar21);
  }
  fVar44 = DAT_1808ac00c;
  *(undefined4 *)(param_1 + 0x21) = uVar20;
  param_1[0x27] = (longlong)param_1;
  *(uint *)((longlong)param_1 + 0x14) = puVar9[0x6c];
  *(undefined1 *)((longlong)param_1 + 0xd5) = 0;
  puVar9[0x6a] = 0;
  fVar49 = DAT_1808ac710;
  puVar9[0x6b] = 0;
  lVar21 = param_1[0xf];
  cVar32 = (char)puVar9[0xd2];
  uVar20 = *(undefined4 *)((longlong)param_1 + 0x54);
  lVar23 = param_1[0xb];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_res18 = CONCAT71(local_res18._1_7_,cVar32);
  local_108 = 0;
  if ((param_1[0x10] - lVar21 >> 3) * -0x3333333333333333 != 0) {
    uVar19 = puVar9[0x58];
    uVar42 = 0;
    uVar41 = 0;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x2c);
    fVar50 = *(float *)((longlong)param_1 + 0x24);
    fVar55 = *(float *)(param_1 + 5);
    uVar47 = puVar9[0x59];
    local_res20 = CONCAT44(local_res20._4_4_,puVar9[0x57]);
    uVar52 = puVar9[0x5a];
    fVar54 = (float)(*(int *)((longlong)param_1 + 0x6c) - *(int *)((longlong)param_1 + 100)) *
             fVar44;
    uVar46 = uVar2;
    fVar51 = fVar54;
    do {
      fVar48 = *(float *)(lVar21 + uVar41 * 0x28);
      uVar31 = (ulonglong)(uint)fVar48;
      fVar53 = (float)uVar42;
      lVar11 = *(longlong *)(lVar21 + 8 + uVar41 * 0x28);
      cVar7 = *(char *)(lVar21 + 0x10 + uVar41 * 0x28);
      fVar3 = *(float *)(lVar21 + 0x14 + uVar41 * 0x28);
      fVar4 = *(float *)(lVar21 + 0x18 + uVar41 * 0x28);
      uVar5 = *(undefined4 *)(lVar21 + 0x1c + uVar41 * 0x28);
      uVar6 = *(undefined4 *)(lVar21 + 0x20 + uVar41 * 0x28);
      *(float *)(param_1 + 0xe) = fVar48;
      *(float *)(param_1 + 0xd) = fVar53;
      if (fVar53 != fVar48) {
        *(float *)(param_1 + 3) = fVar50;
        *(float *)((longlong)param_1 + 0x24) = fVar50;
        *(float *)((longlong)param_1 + 0x1c) = fVar55;
        *(float *)(param_1 + 5) = fVar55;
        *(undefined4 *)(param_1 + 4) = uVar46;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar46;
        local_108 = 0;
        if (cVar32 != '\0') {
          *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
          *(undefined4 *)(param_1 + 0xb) = uVar6;
        }
        uVar30 = *(int *)((longlong)param_1 + 100) + (uint)(fVar45 <= fVar48);
        puVar9[0x58] = (uint)((fVar48 - fVar53) * fVar51);
        if (fVar45 <= fVar48) {
          fVar48 = fVar48 - fVar45;
        }
        puVar9[0x5a] = (uint)fVar48;
        puVar9[0x57] = uVar30;
        puVar9[0x59] = (uint)(((float)(int)uVar30 + fVar48) * fVar44);
        *(undefined4 *)(param_1 + 0xc) = 0;
        param_1[0x15] = 0;
        *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0x16) = 0;
        param_1[0x18] = 0;
        *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
        *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
        *(undefined4 *)(param_1 + 0x19) = 0;
        *(byte *)((longlong)param_1 + 0xd4) = ~(byte)puVar9[0x1a] & 1;
        if ((char)puVar9[0xb2] != '\0') {
          fVar51 = *(float *)(param_1 + 3);
          uVar46 = FUN_18053fc00((float)(((uint)DAT_1808ac1f4 ^ (uint)fVar51) & uVar33 ^
                                        (uint)fVar51) + fVar51);
          fVar51 = *(float *)((longlong)param_1 + 0x1c);
          *(undefined4 *)(param_1 + 3) = uVar46;
          uVar46 = FUN_18053fc00((float)(((uint)DAT_1808ac1f4 ^ (uint)fVar51) & uVar33 ^
                                        (uint)fVar51) + fVar51);
          fVar51 = *(float *)(param_1 + 4);
          *(undefined4 *)((longlong)param_1 + 0x1c) = uVar46;
          uVar46 = FUN_18053fc00((float)(((uint)DAT_1808ac1f4 ^ (uint)fVar51) & uVar33 ^
                                        (uint)fVar51) + fVar51);
          *(undefined4 *)(param_1 + 4) = uVar46;
        }
        *(undefined1 *)(puVar9 + 0xa4) = 0;
        *(uint *)(param_1 + 2) = puVar9[0x4d];
        if ((((((char)puVar9[0x5b] != '\0') && ((float)puVar9[0x59] <= (float)puVar9[0x5c])) ||
             ((puVar9[0x1a] & 0x20) != 0)) ||
            ((*(char *)((longlong)puVar9 + 0x71) != '\0' ||
             (*(char *)((longlong)puVar9 + 0xab) != '\0')))) ||
           (((short)puVar9[0x1ee] == 0x31 && ((char)puVar9[0xdf] != '\0')))) {
          FUN_18044b5c0(param_1);
          *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 3) = 0;
          FUN_18044ba80(param_1);
          if ((puVar9[0x1a] & 1) == 0) {
            *(float *)((longlong)param_1 + 0x44) =
                 (*(float *)((longlong)param_1 + 0x44) -
                 (float)puVar9[0xba] * (float)puVar9[0x1f] * (float)puVar9[0x58] * DAT_1808ac1f4) +
                 (float)puVar9[0x58] * (float)puVar9[8];
            puVar9[8] = 0;
            FUN_18044f8a0();
            FUN_18044c950();
            if ((float)puVar9[0x49] == 0.0) {
              *(float *)((longlong)param_1 + 0x44) =
                   *(float *)((longlong)param_1 + 0x44) -
                   (float)puVar9[0xba] * (float)puVar9[0x58] * DAT_1808ac1f4;
            }
          }
          else {
            param_1[8] = 0;
            *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
            *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
            *(undefined4 *)(param_1 + 0x16) = 0;
            param_1[0x18] = 0;
            *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
            FUN_18044c950(param_1);
          }
          goto LAB_180458a8e;
        }
        if ((float)puVar9[0x49] == 0.0) {
          if ((((float)puVar9[0x1e] != 0.0) && (2 < (int)((float)puVar9[0x1e] * fVar49 + fVar45)))
             && ((char)puVar9[0x1c] == '\x02')) {
            FUN_18044b5c0(param_1);
            FUN_18044ba80(param_1);
            if ((((float)puVar9[0x1e] != 0.0) && ((int)((float)puVar9[0x1e] * fVar49 + fVar45) == 3)
                ) && ((float)puVar9[0x49] == 0.0)) {
              FUN_1804538d0(param_1);
            }
            if ((*(float *)((longlong)param_1 + 0x44) <= 0.0 &&
                 *(float *)((longlong)param_1 + 0x44) != 0.0) && ((float)puVar9[0x49] != 0.0)) {
              puVar9[0x49] = 0;
            }
            FUN_18044c950(param_1);
            FUN_18044d860(param_1);
            FUN_180454200(param_1);
            goto LAB_180458a8e;
          }
          cVar32 = (char)puVar9[0x1c];
          if ((byte)(cVar32 - 7U) < 2) {
            FUN_180454a60(param_1);
            goto LAB_180458a8e;
          }
          if (cVar32 == '\t') {
            FUN_18044b5c0(param_1);
            FUN_18044ba80(param_1);
            uVar30 = puVar9[0x1c];
            FUN_18044c950(param_1);
            if ((char)uVar30 == '\x02') {
              FUN_18044d860();
              if ((puVar9[0x1a] & 1) != 0) goto LAB_1804588d3;
LAB_180458783:
              FUN_1804506a0(param_1);
            }
            else {
              lVar21 = *param_1;
              FUN_18044a4e0(param_1);
              FUN_18044d860(param_1);
              fVar51 = *(float *)(lVar21 + 0x160);
              fVar53 = fVar51 * *(float *)(param_1 + 0x17) * DAT_1808ac1f4;
              fVar48 = (float)param_1[0x16] * fVar51 * _DAT_1808ad9f0;
              fVar51 = (float)((ulonglong)param_1[0x16] >> 0x20) * fVar51 * _UNK_1808ad9f4;
              *(float *)((longlong)param_1 + 0xc4) = fVar53 + *(float *)((longlong)param_1 + 0xc4);
              *(ulonglong *)((longlong)param_1 + 0xbc) =
                   CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xbc) >> 0x20) +
                            fVar51,(float)*(undefined8 *)((longlong)param_1 + 0xbc) + fVar48);
              *(float *)((longlong)param_1 + 0x3c) =
                   (*(float *)((longlong)param_1 + 0x3c) - fVar48) + *(float *)(lVar21 + 0x18);
              *(float *)(param_1 + 8) =
                   (*(float *)(param_1 + 8) - fVar51) + *(float *)(lVar21 + 0x1c);
              *(float *)((longlong)param_1 + 0x44) =
                   (*(float *)((longlong)param_1 + 0x44) - fVar53) + *(float *)(lVar21 + 0x20);
              FUN_18044e4a0(param_1,0,0);
              *(float *)((longlong)param_1 + 0x3c) =
                   (*(float *)((longlong)param_1 + 0x3c) - *(float *)(lVar21 + 0x18)) +
                   *(float *)((longlong)param_1 + 0xbc);
              *(float *)(param_1 + 8) =
                   (*(float *)(param_1 + 8) - *(float *)(lVar21 + 0x1c)) +
                   *(float *)(param_1 + 0x18);
              *(float *)((longlong)param_1 + 0x44) =
                   (*(float *)((longlong)param_1 + 0x44) - *(float *)(lVar21 + 0x20)) +
                   *(float *)((longlong)param_1 + 0xc4);
            }
            goto LAB_180458a8e;
          }
          if (cVar32 == '\x02') {
            FUN_18044b5c0(param_1);
            FUN_18044ba80(param_1);
            FUN_18044c950(param_1);
            FUN_18044d860(param_1);
            if ((puVar9[0x1a] & 1) == 0) goto LAB_180458783;
LAB_1804588d3:
            FUN_18044f960(param_1);
            goto LAB_180458a8e;
          }
        }
        else {
          FUN_18044b5c0(param_1);
          FUN_18044ba80(param_1);
          fVar51 = (float)puVar9[0x49];
          if (fVar51 <= DAT_1808acc88) {
            if (fVar51 != 0.0) goto LAB_180458912;
          }
          else {
            fVar51 = DAT_1808acc88;
LAB_180458912:
            fVar51 = fVar51 - (float)puVar9[0x58] * DAT_1808acc3c;
            puVar9[0x49] = (uint)fVar51;
            if (((fVar51 <= 0.0) || ((float)puVar9[0x1e] == 0.0)) ||
               ((int)((float)puVar9[0x1e] * fVar49 + fVar45) == 0)) {
              puVar9[0x1a] = puVar9[0x1a] & 0xfffffffb;
              puVar9[0x49] = 0;
            }
            *(uint *)((longlong)param_1 + 0x3c) = puVar9[0x4a];
            *(uint *)(param_1 + 8) = puVar9[0x4b];
            param_1[0x16] = 0;
            *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
          }
          FUN_18044e4a0(param_1,0,0);
          FUN_18044a4e0(param_1);
LAB_180458a8e:
          FUN_180452b80(param_1);
        }
        lVar21 = *param_1;
        uVar42 = *(ulonglong *)(lVar21 + 0x178);
        uVar34 = (uint)*(ulonglong *)(lVar21 + 0x188) & 2;
        uVar39 = (uint)*(ulonglong *)(lVar21 + 0x180) & 2;
        uVar30 = (uint)(uVar42 >> 1) & 1;
        if (2 < (uVar34 * 2 | uVar39 | uVar30)) {
          if ((char)param_1[0x28] == '\0') {
            *(ulonglong *)(lVar21 + 0x198) = *(ulonglong *)(lVar21 + 0x198) | 2;
            if ((uVar42 & 2) == 0) {
              uVar42 = *(ulonglong *)(lVar21 + 400) & 0xfffffffffffffffd;
            }
            else {
              uVar42 = *(ulonglong *)(lVar21 + 400) | 2;
            }
            *(ulonglong *)(lVar21 + 400) = uVar42;
          }
          else {
            uVar30 = *(uint *)(&DAT_1806cc1e0 +
                              ((ulonglong)uVar30 +
                              ((ulonglong)uVar34 * 2 | (ulonglong)uVar39 | (ulonglong)uVar30) * 2) *
                              4);
            uVar26 = (ulonglong)uVar30;
            *(ulonglong *)(lVar21 + 0x180) =
                 (*(ulonglong *)(lVar21 + 0x180) ^ uVar26) & 0xfffffffffffffffd ^ uVar26;
            uVar37 = (ulonglong)(uVar30 >> 1);
            uVar26 = (uVar26 * 2 ^ uVar42) & 0xfffffffffffffffd ^ uVar26 * 2;
            *(ulonglong *)(lVar21 + 0x178) = uVar26;
            *(ulonglong *)(lVar21 + 0x188) =
                 (*(ulonglong *)(lVar21 + 0x188) ^ uVar37) & 0xfffffffffffffffd ^ uVar37;
            *(ulonglong *)(lVar21 + 0x1a0) = uVar26 & *(ulonglong *)(lVar21 + 0x118);
            if ((uVar42 & 2) == 0) {
              *(ulonglong *)(lVar21 + 400) = *(ulonglong *)(lVar21 + 400) & 0xfffffffffffffffd;
              *(ulonglong *)(lVar21 + 0x198) = *(ulonglong *)(lVar21 + 0x198) | 2;
            }
          }
          *(ulonglong *)(lVar21 + 0x1a8) = *(ulonglong *)(lVar21 + 0x1a8) & 0xfffffffffffffffd;
        }
        FUN_180456580(param_1);
        FUN_180455d80(param_1);
        puVar9[0x8d] = *(uint *)(param_1 + 0x15);
        puVar9[0x8e] = *(uint *)((longlong)param_1 + 0xac);
        puVar9[0x58] = uVar19;
        puVar9[0x59] = uVar47;
        puVar9[0x5a] = uVar52;
        puVar9[0x57] = (uint)local_res20;
        uVar42 = uVar31;
        uVar46 = uVar2;
        fVar51 = fVar54;
        cVar32 = (char)local_res18;
      }
      if (lVar11 == 0) {
        fVar50 = fVar50 + fVar3;
        fVar55 = fVar55 + fVar4;
      }
      else {
        FUN_18044b1f0(param_1,&local_108);
        fVar48 = fVar45;
        if (cVar7 == '\0') {
          fVar48 = DAT_1808acda0;
        }
        if (lVar11 == 8) {
          fVar50 = fVar50 + fVar48;
        }
        else if (lVar11 == 0x10) {
          fVar50 = fVar50 - fVar48;
        }
        else if (lVar11 == 0x200) {
          fVar55 = fVar55 + fVar48;
        }
        else if (lVar11 == 0x400) {
          fVar55 = fVar55 - fVar48;
        }
      }
      lVar21 = param_1[0xf];
      uVar41 = uVar41 + 1;
    } while (uVar41 < (ulonglong)((param_1[0x10] - lVar21 >> 3) * -0x3333333333333333));
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  if (cVar32 != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar20;
    *(int *)(param_1 + 0xb) = (int)lVar23;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  }
  uVar33 = *(uint *)(param_1 + 5);
  uVar19 = *(uint *)((longlong)param_1 + 0x2c);
  puVar9[0x74] = *(uint *)((longlong)param_1 + 0x24);
  puVar9[0x75] = uVar33;
  puVar9[0x76] = uVar19;
  FUN_180456580(param_1);
  uVar47 = DAT_1808adec0;
  uVar33 = *(uint *)(param_1 + 0xb);
  uVar19 = *(uint *)((longlong)param_1 + 0x5c);
  puVar9[0x14] = *(uint *)((longlong)param_1 + 0x54);
  puVar9[0x15] = uVar33;
  puVar9[0x16] = uVar19;
  puVar9[0x77] = *(uint *)((longlong)param_1 + 0x44) ^ uVar47;
  puVar9[0x6c] = *(uint *)((longlong)param_1 + 0x14);
  *(undefined1 *)(puVar9 + 0x8a) = *(undefined1 *)((longlong)param_1 + 0xd5);
  puVar9[0x1d4] = puVar9[0x1e2];
  if ((puVar9[0x56] & 4) == 0) {
    lVar21 = param_1[0x12];
    if ((lVar21 != param_1[0x13]) &&
       (local_res18 = 0, (param_1[0x13] - lVar21 >> 3) * -0x5555555555555555 != 0)) {
      iVar25 = *(int *)((longlong)param_1 + 0x6c);
      iVar8 = *(int *)((longlong)param_1 + 100);
      uVar30 = puVar9[0x57];
      uVar42 = 0;
      uVar33 = puVar9[0x58];
      uVar19 = puVar9[0x59];
      uVar52 = puVar9[0x5a];
      fVar49 = 0.0;
      do {
        fVar50 = *(float *)(lVar21 + uVar42 * 0x18);
        lVar21 = *(longlong *)(lVar21 + 8 + uVar42 * 0x18);
        *(float *)(param_1 + 0xe) = fVar50;
        *(float *)(param_1 + 0xd) = fVar49;
        fVar55 = fVar49;
        if (fVar50 != fVar49) {
          local_res18 = 0;
          fVar55 = fVar50;
        }
        uVar34 = *(int *)((longlong)param_1 + 100) + (uint)(fVar45 <= fVar50);
        puVar9[0x58] = (uint)((fVar50 - fVar49) * (float)(iVar25 - iVar8) * fVar44);
        fVar49 = fVar50;
        if (fVar45 <= fVar50) {
          fVar49 = fVar50 - fVar45;
        }
        puVar9[0x5a] = (uint)fVar49;
        puVar9[0x57] = uVar34;
        puVar9[0x59] = (uint)(((float)(int)uVar34 + fVar49) * fVar44);
        if (lVar21 != 0) {
          FUN_18044b1f0(param_1);
        }
        uVar42 = uVar42 + 1;
        if (((ulonglong)((param_1[0x13] - param_1[0x12] >> 3) * -0x5555555555555555) <= uVar42) ||
           (*(float *)(param_1[0x12] + uVar42 * 0x18) != fVar50)) {
          if ((char)puVar9[0x1d3] == '\0') {
            FUN_180452950(param_1);
          }
          else if ((*(longlong *)(puVar9 + 0x1ea) != 0) && ((puVar9[0x56] & 4) == 0)) {
            FUN_1804527c0(param_1);
          }
        }
        puVar9[0x58] = uVar33;
        puVar9[0x59] = uVar19;
        puVar9[0x5a] = uVar52;
        puVar9[0x57] = uVar30;
        lVar21 = param_1[0x12];
        fVar49 = fVar55;
      } while (uVar42 < (ulonglong)((param_1[0x13] - lVar21 >> 3) * -0x5555555555555555));
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  }
  iVar25 = 0;
  local_res20 = *(ulonglong *)(puVar9 + 0x46);
  *(undefined8 *)(puVar9 + 100) = local_100;
  *(undefined8 *)(puVar9 + 0x66) = local_f8;
  *(ulonglong *)(puVar9 + 0x68) = uVar36;
  uVar42 = *(ulonglong *)(param_2 + 8);
  *(ulonglong *)(puVar9 + 0x5e) = uVar42;
  uVar41 = *(ulonglong *)(param_2 + 0x10);
  *(ulonglong *)(puVar9 + 0x60) = uVar41;
  uVar31 = *(ulonglong *)(param_2 + 0x18);
  do {
    bVar24 = (byte)iVar25;
    uVar26 = 1L << (bVar24 & 0x3f);
    if ((uVar26 & local_res20) == 0) {
      uVar33 = *(uint *)(&DAT_1806cc220 +
                        ((ulonglong)((uVar43 & uVar26) != 0) +
                        (ulonglong)
                        (-(uint)((uVar31 & uVar26) != 0) & 8 | -(uint)((uVar41 & uVar26) != 0) & 4 |
                        -(uint)((uVar26 & uVar42) != 0) & 2)) * 4);
    }
    else {
      uVar33 = *(uint *)(&DAT_1806cc160 +
                        (ulonglong)
                        ((-(uint)((uVar31 & uVar26) != 0) & 4 | -(uint)((uVar41 & uVar26) != 0) & 2
                         | (uint)((uVar26 & uVar42) != 0)) + (-(uint)((uVar26 & uVar36) != 0) & 8))
                        * 4);
    }
    uVar29 = ~uVar26;
    uVar37 = 0;
    if ((uVar33 & 1) != 0) {
      uVar37 = uVar26;
    }
    uVar37 = uVar37 | uVar29 & uVar42;
    uVar42 = 0;
    if ((uVar33 & 2) != 0) {
      uVar42 = uVar26;
    }
    uVar42 = uVar42 | uVar41 & uVar29;
    uVar41 = 0;
    if ((uVar33 & 4) != 0) {
      uVar41 = uVar26;
    }
    uVar41 = uVar41 | uVar31 & uVar29;
    uVar29 = 1L << (bVar24 + 1 & 0x3f);
    uVar31 = uVar41 & uVar29;
    uVar38 = uVar42 & uVar29;
    uVar26 = uVar29 & uVar37;
    if ((uVar29 & local_res20) == 0) {
      uVar33 = *(uint *)(&DAT_1806cc220 +
                        ((ulonglong)((uVar43 & uVar29) != 0) +
                        (ulonglong)
                        (-(uint)(uVar31 != 0) & 8 | -(uint)(uVar38 != 0) & 4 |
                        -(uint)(uVar26 != 0) & 2)) * 4);
    }
    else {
      uVar33 = *(uint *)(&DAT_1806cc160 +
                        (ulonglong)
                        ((-(uint)(uVar31 != 0) & 4 | -(uint)(uVar38 != 0) & 2 | (uint)(uVar26 != 0))
                        + (-(uint)((uVar29 & uVar36) != 0) & 8)) * 4);
    }
    uVar26 = ~uVar29;
    uVar31 = 0;
    if ((uVar33 & 1) != 0) {
      uVar31 = uVar29;
    }
    uVar31 = uVar31 | uVar26 & uVar37;
    uVar37 = 0;
    if ((uVar33 & 2) != 0) {
      uVar37 = uVar29;
    }
    uVar37 = uVar37 | uVar42 & uVar26;
    uVar42 = 0;
    if ((uVar33 & 4) != 0) {
      uVar42 = uVar29;
    }
    uVar42 = uVar42 | uVar41 & uVar26;
    uVar29 = 1L << (bVar24 + 2 & 0x3f);
    uVar41 = uVar42 & uVar29;
    uVar38 = uVar37 & uVar29;
    uVar26 = uVar29 & uVar31;
    if ((uVar29 & local_res20) == 0) {
      uVar33 = *(uint *)(&DAT_1806cc220 +
                        ((ulonglong)((uVar43 & uVar29) != 0) +
                        (ulonglong)
                        (-(uint)(uVar41 != 0) & 8 | -(uint)(uVar38 != 0) & 4 |
                        -(uint)(uVar26 != 0) & 2)) * 4);
    }
    else {
      uVar33 = *(uint *)(&DAT_1806cc160 +
                        (ulonglong)
                        ((-(uint)(uVar41 != 0) & 4 | -(uint)(uVar38 != 0) & 2 | (uint)(uVar26 != 0))
                        + (-(uint)((uVar29 & uVar36) != 0) & 8)) * 4);
    }
    uVar26 = ~uVar29;
    uVar41 = 0;
    if ((uVar33 & 1) != 0) {
      uVar41 = uVar29;
    }
    uVar41 = uVar41 | uVar26 & uVar31;
    uVar31 = 0;
    if ((uVar33 & 2) != 0) {
      uVar31 = uVar29;
    }
    uVar31 = uVar31 | uVar37 & uVar26;
    uVar37 = 0;
    if ((uVar33 & 4) != 0) {
      uVar37 = uVar29;
    }
    uVar37 = uVar37 | uVar42 & uVar26;
    uVar38 = 1L << (bVar24 + 3 & 0x3f);
    uVar42 = uVar37 & uVar38;
    uVar26 = uVar31 & uVar38;
    uVar29 = uVar38 & uVar41;
    if ((uVar38 & local_res20) == 0) {
      uVar33 = *(uint *)(&DAT_1806cc220 +
                        ((ulonglong)((uVar43 & uVar38) != 0) +
                        (ulonglong)
                        (-(uint)(uVar42 != 0) & 8 | -(uint)(uVar26 != 0) & 4 |
                        -(uint)(uVar29 != 0) & 2)) * 4);
    }
    else {
      uVar33 = *(uint *)(&DAT_1806cc160 +
                        (ulonglong)
                        ((-(uint)(uVar42 != 0) & 4 | -(uint)(uVar26 != 0) & 2 | (uint)(uVar29 != 0))
                        + (-(uint)((uVar38 & uVar36) != 0) & 8)) * 4);
    }
    uVar26 = ~uVar38;
    uVar42 = 0;
    if ((uVar33 & 1) != 0) {
      uVar42 = uVar38;
    }
    uVar42 = uVar42 | uVar26 & uVar41;
    uVar41 = 0;
    if ((uVar33 & 2) != 0) {
      uVar41 = uVar38;
    }
    uVar41 = uVar41 | uVar31 & uVar26;
    uVar31 = 0;
    if ((uVar33 & 4) != 0) {
      uVar31 = uVar38;
    }
    uVar31 = uVar31 | uVar37 & uVar26;
    uVar29 = 1L << (bVar24 + 4 & 0x3f);
    uVar26 = uVar31 & uVar29;
    uVar38 = uVar41 & uVar29;
    uVar37 = uVar29 & uVar42;
    if ((uVar29 & local_res20) == 0) {
      uVar33 = *(uint *)(&DAT_1806cc220 +
                        ((ulonglong)((uVar43 & uVar29) != 0) +
                        (ulonglong)
                        (-(uint)(uVar26 != 0) & 8 | -(uint)(uVar38 != 0) & 4 |
                        -(uint)(uVar37 != 0) & 2)) * 4);
    }
    else {
      uVar33 = *(uint *)(&DAT_1806cc160 +
                        (ulonglong)
                        ((-(uint)(uVar26 != 0) & 4 | -(uint)(uVar38 != 0) & 2 | (uint)(uVar37 != 0))
                        + (-(uint)((uVar29 & uVar36) != 0) & 8)) * 4);
    }
    uVar37 = ~uVar29;
    uVar26 = 0;
    if ((uVar33 & 1) != 0) {
      uVar26 = uVar29;
    }
    uVar26 = uVar26 | uVar37 & uVar42;
    uVar42 = 0;
    if ((uVar33 & 2) != 0) {
      uVar42 = uVar29;
    }
    uVar42 = uVar42 | uVar41 & uVar37;
    uVar41 = 0;
    if ((uVar33 & 4) != 0) {
      uVar41 = uVar29;
    }
    uVar41 = uVar41 | uVar31 & uVar37;
    uVar29 = 1L << (bVar24 + 5 & 0x3f);
    uVar31 = uVar41 & uVar29;
    uVar38 = uVar42 & uVar29;
    uVar37 = uVar29 & uVar26;
    if ((uVar29 & local_res20) == 0) {
      uVar33 = *(uint *)(&DAT_1806cc220 +
                        ((ulonglong)((uVar43 & uVar29) != 0) +
                        (ulonglong)
                        (-(uint)(uVar31 != 0) & 8 | -(uint)(uVar38 != 0) & 4 |
                        -(uint)(uVar37 != 0) & 2)) * 4);
    }
    else {
      uVar33 = *(uint *)(&DAT_1806cc160 +
                        (ulonglong)
                        ((-(uint)(uVar31 != 0) & 4 | -(uint)(uVar38 != 0) & 2 | (uint)(uVar37 != 0))
                        + (-(uint)((uVar29 & uVar36) != 0) & 8)) * 4);
    }
    uVar37 = ~uVar29;
    uVar31 = 0;
    if ((uVar33 & 1) != 0) {
      uVar31 = uVar29;
    }
    uVar31 = uVar31 | uVar37 & uVar26;
    uVar26 = 0;
    if ((uVar33 & 2) != 0) {
      uVar26 = uVar29;
    }
    uVar26 = uVar26 | uVar42 & uVar37;
    uVar42 = 0;
    if ((uVar33 & 4) != 0) {
      uVar42 = uVar29;
    }
    uVar42 = uVar42 | uVar41 & uVar37;
    uVar29 = 1L << (bVar24 + 6 & 0x3f);
    uVar41 = uVar42 & uVar29;
    uVar38 = uVar26 & uVar29;
    uVar37 = uVar29 & uVar31;
    if ((uVar29 & local_res20) == 0) {
      uVar33 = *(uint *)(&DAT_1806cc220 +
                        ((ulonglong)((uVar43 & uVar29) != 0) +
                        (ulonglong)
                        (-(uint)(uVar41 != 0) & 8 | -(uint)(uVar38 != 0) & 4 |
                        -(uint)(uVar37 != 0) & 2)) * 4);
    }
    else {
      uVar33 = *(uint *)(&DAT_1806cc160 +
                        (ulonglong)
                        ((-(uint)(uVar41 != 0) & 4 | -(uint)(uVar38 != 0) & 2 | (uint)(uVar37 != 0))
                        + (-(uint)((uVar29 & uVar36) != 0) & 8)) * 4);
    }
    uVar37 = ~uVar29;
    uVar41 = 0;
    if ((uVar33 & 1) != 0) {
      uVar41 = uVar29;
    }
    uVar41 = uVar41 | uVar37 & uVar31;
    uVar31 = 0;
    if ((uVar33 & 2) != 0) {
      uVar31 = uVar29;
    }
    uVar31 = uVar31 | uVar26 & uVar37;
    uVar26 = 0;
    if ((uVar33 & 4) != 0) {
      uVar26 = uVar29;
    }
    uVar26 = uVar26 | uVar42 & uVar37;
    uVar29 = 1L << (bVar24 + 7 & 0x3f);
    uVar42 = uVar26 & uVar29;
    uVar38 = uVar31 & uVar29;
    uVar37 = uVar29 & uVar41;
    if ((uVar29 & local_res20) == 0) {
      uVar33 = *(uint *)(&DAT_1806cc220 +
                        ((ulonglong)((uVar43 & uVar29) != 0) +
                        (ulonglong)
                        (-(uint)(uVar42 != 0) & 8 | -(uint)(uVar38 != 0) & 4 |
                        -(uint)(uVar37 != 0) & 2)) * 4);
    }
    else {
      uVar33 = *(uint *)(&DAT_1806cc160 +
                        (ulonglong)
                        ((-(uint)(uVar42 != 0) & 4 | -(uint)(uVar38 != 0) & 2 | (uint)(uVar37 != 0))
                        + (-(uint)((uVar29 & uVar36) != 0) & 8)) * 4);
    }
    uVar37 = ~uVar29;
    uVar42 = 0;
    if ((uVar33 & 1) != 0) {
      uVar42 = uVar29;
    }
    uVar42 = uVar42 | uVar37 & uVar41;
    uVar41 = 0;
    if ((uVar33 & 2) != 0) {
      uVar41 = uVar29;
    }
    uVar41 = uVar41 | uVar31 & uVar37;
    *(ulonglong *)(puVar9 + 0x60) = uVar41;
    uVar31 = 0;
    if ((uVar33 & 4) != 0) {
      uVar31 = uVar29;
    }
    uVar31 = uVar31 | uVar26 & uVar37;
    iVar25 = iVar25 + 8;
    *(ulonglong *)(puVar9 + 0x62) = uVar31;
  } while (iVar25 < 0x40);
  uVar43 = *(ulonglong *)(puVar9 + 100);
  uVar36 = *(ulonglong *)(puVar9 + 0x66);
  uVar41 = 1;
  local_res18._0_4_ = 1.12104e-44;
  do {
    if ((uVar36 & uVar41) != 0) {
      uVar33 = *(uint *)(&DAT_1806cc1e0 +
                        ((ulonglong)
                         (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar41) != 0) & 8 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar41) != 0) & 4 |
                         -(uint)((uVar41 & uVar42) != 0) & 2) + (ulonglong)((uVar43 & uVar41) != 0))
                        * 4);
      uVar31 = 0;
      if ((uVar33 & 1) != 0) {
        uVar31 = uVar41;
      }
      uVar26 = ~uVar41;
      uVar42 = uVar31 | uVar26 & uVar42;
      uVar31 = 0;
      if ((uVar33 & 2) != 0) {
        uVar31 = uVar41;
      }
      *(ulonglong *)(puVar9 + 0x60) = uVar31 | *(ulonglong *)(puVar9 + 0x60) & uVar26;
      uVar31 = 0;
      if ((uVar33 & 4) != 0) {
        uVar31 = uVar41;
      }
      *(ulonglong *)(puVar9 + 0x62) = uVar31 | *(ulonglong *)(puVar9 + 0x62) & uVar26;
    }
    uVar31 = uVar41 << 1;
    if ((uVar36 & uVar31) != 0) {
      uVar33 = *(uint *)(&DAT_1806cc1e0 +
                        ((ulonglong)
                         (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar31) != 0) & 8 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar31) != 0) & 4 |
                         -(uint)((uVar31 & uVar42) != 0) & 2) + (ulonglong)((uVar43 & uVar31) != 0))
                        * 4);
      uVar26 = 0;
      if ((uVar33 & 1) != 0) {
        uVar26 = uVar31;
      }
      uVar37 = ~uVar31;
      uVar42 = uVar26 | uVar37 & uVar42;
      uVar26 = 0;
      if ((uVar33 & 2) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x60) = uVar26 | *(ulonglong *)(puVar9 + 0x60) & uVar37;
      uVar26 = 0;
      if ((uVar33 & 4) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x62) = uVar26 | *(ulonglong *)(puVar9 + 0x62) & uVar37;
    }
    uVar31 = uVar41 << 2;
    if ((uVar36 & uVar31) != 0) {
      uVar33 = *(uint *)(&DAT_1806cc1e0 +
                        ((ulonglong)
                         (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar31) != 0) & 8 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar31) != 0) & 4 |
                         -(uint)((uVar31 & uVar42) != 0) & 2) + (ulonglong)((uVar43 & uVar31) != 0))
                        * 4);
      uVar26 = 0;
      if ((uVar33 & 1) != 0) {
        uVar26 = uVar31;
      }
      uVar37 = ~uVar31;
      uVar42 = uVar26 | uVar37 & uVar42;
      uVar26 = 0;
      if ((uVar33 & 2) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x60) = uVar26 | *(ulonglong *)(puVar9 + 0x60) & uVar37;
      uVar26 = 0;
      if ((uVar33 & 4) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x62) = uVar26 | *(ulonglong *)(puVar9 + 0x62) & uVar37;
    }
    uVar31 = uVar41 << 3;
    if ((uVar36 & uVar31) != 0) {
      uVar33 = *(uint *)(&DAT_1806cc1e0 +
                        ((ulonglong)
                         (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar31) != 0) & 8 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar31) != 0) & 4 |
                         -(uint)((uVar31 & uVar42) != 0) & 2) + (ulonglong)((uVar43 & uVar31) != 0))
                        * 4);
      uVar26 = 0;
      if ((uVar33 & 1) != 0) {
        uVar26 = uVar31;
      }
      uVar37 = ~uVar31;
      uVar42 = uVar26 | uVar37 & uVar42;
      uVar26 = 0;
      if ((uVar33 & 2) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x60) = uVar26 | *(ulonglong *)(puVar9 + 0x60) & uVar37;
      uVar26 = 0;
      if ((uVar33 & 4) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x62) = uVar26 | *(ulonglong *)(puVar9 + 0x62) & uVar37;
    }
    uVar31 = uVar41 << 4;
    if ((uVar36 & uVar31) != 0) {
      uVar33 = *(uint *)(&DAT_1806cc1e0 +
                        ((ulonglong)
                         (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar31) != 0) & 8 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar31) != 0) & 4 |
                         -(uint)((uVar31 & uVar42) != 0) & 2) + (ulonglong)((uVar43 & uVar31) != 0))
                        * 4);
      uVar26 = 0;
      if ((uVar33 & 1) != 0) {
        uVar26 = uVar31;
      }
      uVar37 = ~uVar31;
      uVar42 = uVar26 | uVar37 & uVar42;
      uVar26 = 0;
      if ((uVar33 & 2) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x60) = uVar26 | *(ulonglong *)(puVar9 + 0x60) & uVar37;
      uVar26 = 0;
      if ((uVar33 & 4) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x62) = uVar26 | *(ulonglong *)(puVar9 + 0x62) & uVar37;
    }
    uVar31 = uVar41 << 5;
    if ((uVar36 & uVar31) != 0) {
      uVar33 = *(uint *)(&DAT_1806cc1e0 +
                        ((ulonglong)
                         (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar31) != 0) & 8 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar31) != 0) & 4 |
                         -(uint)((uVar31 & uVar42) != 0) & 2) + (ulonglong)((uVar43 & uVar31) != 0))
                        * 4);
      uVar26 = 0;
      if ((uVar33 & 1) != 0) {
        uVar26 = uVar31;
      }
      uVar37 = ~uVar31;
      uVar42 = uVar26 | uVar37 & uVar42;
      uVar26 = 0;
      if ((uVar33 & 2) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x60) = uVar26 | *(ulonglong *)(puVar9 + 0x60) & uVar37;
      uVar26 = 0;
      if ((uVar33 & 4) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x62) = uVar26 | *(ulonglong *)(puVar9 + 0x62) & uVar37;
    }
    uVar31 = uVar41 << 6;
    if ((uVar36 & uVar31) != 0) {
      uVar33 = *(uint *)(&DAT_1806cc1e0 +
                        ((ulonglong)
                         (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar31) != 0) & 8 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar31) != 0) & 4 |
                         -(uint)((uVar31 & uVar42) != 0) & 2) + (ulonglong)((uVar43 & uVar31) != 0))
                        * 4);
      uVar26 = 0;
      if ((uVar33 & 1) != 0) {
        uVar26 = uVar31;
      }
      uVar37 = ~uVar31;
      uVar42 = uVar26 | uVar37 & uVar42;
      uVar26 = 0;
      if ((uVar33 & 2) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x60) = uVar26 | *(ulonglong *)(puVar9 + 0x60) & uVar37;
      uVar26 = 0;
      if ((uVar33 & 4) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x62) = uVar26 | *(ulonglong *)(puVar9 + 0x62) & uVar37;
    }
    uVar31 = uVar41 << 7;
    if ((uVar36 & uVar31) != 0) {
      uVar33 = *(uint *)(&DAT_1806cc1e0 +
                        ((ulonglong)
                         (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar31) != 0) & 8 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar31) != 0) & 4 |
                         -(uint)((uVar31 & uVar42) != 0) & 2) + (ulonglong)((uVar43 & uVar31) != 0))
                        * 4);
      uVar26 = 0;
      if ((uVar33 & 1) != 0) {
        uVar26 = uVar31;
      }
      uVar37 = ~uVar31;
      uVar42 = uVar26 | uVar37 & uVar42;
      uVar26 = 0;
      if ((uVar33 & 2) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x60) = uVar26 | *(ulonglong *)(puVar9 + 0x60) & uVar37;
      uVar26 = 0;
      if ((uVar33 & 4) != 0) {
        uVar26 = uVar31;
      }
      *(ulonglong *)(puVar9 + 0x62) = uVar26 | *(ulonglong *)(puVar9 + 0x62) & uVar37;
    }
    local_res18._0_4_ = (float)((int)(float)local_res18 + -1);
    uVar41 = uVar41 << 8 | uVar41 >> 0x38;
  } while ((float)local_res18 != 0.0);
  *(ulonglong *)(puVar9 + 0x5e) = uVar42;
  *(ulonglong *)(puVar9 + 0x68) = uVar42 & local_res20;
  uVar41 = *(ulonglong *)(param_2 + 8);
  puVar9[100] = 0;
  puVar9[0x65] = 0;
  *(ulonglong *)(puVar9 + 0x66) = uVar41 & ~uVar43 & uVar36;
  puVar9[0x71] = *(uint *)(param_2 + 0x2c);
  puVar9[0x72] = *(uint *)(param_2 + 0x30);
  puVar9[0x73] = *(uint *)(param_2 + 0x34);
  if ((puVar9[0x1a] & 0x20) != 0) {
    if ((char)param_1[0x28] != '\0') {
      uVar43 = 1;
      iVar25 = 8;
      do {
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar43) != 0) & 0x20 |
                           -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar43) != 0) & 0x10 |
                          -(uint)((uVar43 & uVar42) != 0) & 8));
        uVar36 = 0;
        if ((uVar33 & 1) != 0) {
          uVar36 = uVar43;
        }
        uVar31 = ~uVar43;
        uVar41 = 0;
        if ((uVar33 & 2) != 0) {
          uVar41 = uVar43;
        }
        uVar37 = *(ulonglong *)(puVar9 + 0x60) & uVar31;
        uVar26 = 0;
        if ((uVar33 & 4) != 0) {
          uVar26 = uVar43;
        }
        uVar29 = uVar43 << 1;
        uVar40 = *(ulonglong *)(puVar9 + 0x62) & uVar31;
        uVar28 = ~uVar29;
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar40 & uVar29) != 0) & 0x20 |
                           -(uint)((uVar37 & uVar29) != 0) & 0x10 |
                          -(uint)((uVar31 & uVar42 & uVar29) != 0) & 8));
        uVar38 = 0;
        if ((uVar33 & 1) != 0) {
          uVar38 = uVar29;
        }
        uVar42 = uVar28 & (uVar36 | uVar31 & uVar42);
        uVar36 = 0;
        if ((uVar33 & 2) != 0) {
          uVar36 = uVar29;
        }
        uVar31 = (uVar41 | uVar37) & uVar28;
        uVar41 = 0;
        if ((uVar33 & 4) != 0) {
          uVar41 = uVar29;
        }
        uVar28 = (uVar26 | uVar40) & uVar28;
        uVar26 = uVar43 << 2;
        uVar29 = ~uVar26;
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar28 & uVar26) != 0) & 0x20 |
                           -(uint)((uVar31 & uVar26) != 0) & 0x10 |
                          -(uint)((uVar42 & uVar26) != 0) & 8));
        uVar37 = 0;
        if ((uVar33 & 1) != 0) {
          uVar37 = uVar26;
        }
        uVar38 = uVar29 & (uVar38 | uVar42);
        uVar42 = 0;
        if ((uVar33 & 2) != 0) {
          uVar42 = uVar26;
        }
        uVar31 = (uVar36 | uVar31) & uVar29;
        uVar36 = 0;
        if ((uVar33 & 4) != 0) {
          uVar36 = uVar26;
        }
        uVar29 = (uVar41 | uVar28) & uVar29;
        uVar41 = uVar43 << 3;
        uVar28 = ~uVar41;
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar29 & uVar41) != 0) & 0x20 |
                           -(uint)((uVar31 & uVar41) != 0) & 0x10 |
                          -(uint)((uVar38 & uVar41) != 0) & 8));
        uVar26 = 0;
        if ((uVar33 & 1) != 0) {
          uVar26 = uVar41;
        }
        uVar38 = uVar28 & (uVar37 | uVar38);
        uVar37 = 0;
        if ((uVar33 & 2) != 0) {
          uVar37 = uVar41;
        }
        uVar31 = (uVar42 | uVar31) & uVar28;
        uVar42 = 0;
        if ((uVar33 & 4) != 0) {
          uVar42 = uVar41;
        }
        uVar28 = (uVar36 | uVar29) & uVar28;
        uVar36 = uVar43 << 4;
        uVar29 = ~uVar36;
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar28 & uVar36) != 0) & 0x20 |
                           -(uint)((uVar31 & uVar36) != 0) & 0x10 |
                          -(uint)((uVar38 & uVar36) != 0) & 8));
        uVar41 = 0;
        if ((uVar33 & 1) != 0) {
          uVar41 = uVar36;
        }
        uVar38 = uVar29 & (uVar26 | uVar38);
        uVar26 = 0;
        if ((uVar33 & 2) != 0) {
          uVar26 = uVar36;
        }
        uVar37 = (uVar37 | uVar31) & uVar29;
        uVar31 = 0;
        if ((uVar33 & 4) != 0) {
          uVar31 = uVar36;
        }
        uVar29 = (uVar42 | uVar28) & uVar29;
        uVar36 = uVar43 << 5;
        uVar28 = ~uVar36;
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar29 & uVar36) != 0) & 0x20 |
                           -(uint)((uVar37 & uVar36) != 0) & 0x10 |
                          -(uint)((uVar38 & uVar36) != 0) & 8));
        uVar42 = 0;
        if ((uVar33 & 1) != 0) {
          uVar42 = uVar36;
        }
        uVar38 = uVar28 & (uVar41 | uVar38);
        uVar41 = 0;
        if ((uVar33 & 2) != 0) {
          uVar41 = uVar36;
        }
        uVar37 = (uVar26 | uVar37) & uVar28;
        uVar26 = 0;
        if ((uVar33 & 4) != 0) {
          uVar26 = uVar36;
        }
        uVar28 = (uVar31 | uVar29) & uVar28;
        uVar36 = uVar43 << 6;
        uVar29 = ~uVar36;
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar28 & uVar36) != 0) & 0x20 |
                           -(uint)((uVar37 & uVar36) != 0) & 0x10 |
                          -(uint)((uVar38 & uVar36) != 0) & 8));
        uVar31 = 0;
        if ((uVar33 & 1) != 0) {
          uVar31 = uVar36;
        }
        uVar40 = uVar29 & (uVar42 | uVar38);
        uVar38 = 0;
        if ((uVar33 & 2) != 0) {
          uVar38 = uVar36;
        }
        uVar37 = (uVar41 | uVar37) & uVar29;
        uVar41 = 0;
        if ((uVar33 & 4) != 0) {
          uVar41 = uVar36;
        }
        uVar29 = (uVar26 | uVar28) & uVar29;
        uVar36 = uVar43 << 7;
        uVar26 = ~uVar36;
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((uVar29 & uVar36) != 0) & 0x20 |
                           -(uint)((uVar37 & uVar36) != 0) & 0x10 |
                          -(uint)((uVar40 & uVar36) != 0) & 8));
        uVar42 = 0;
        if ((uVar33 & 1) != 0) {
          uVar42 = uVar36;
        }
        uVar42 = uVar42 | uVar26 & (uVar31 | uVar40);
        uVar31 = 0;
        if ((uVar33 & 2) != 0) {
          uVar31 = uVar36;
        }
        *(ulonglong *)(puVar9 + 0x60) = uVar31 | (uVar38 | uVar37) & uVar26;
        uVar31 = 0;
        if ((uVar33 & 4) != 0) {
          uVar31 = uVar36;
        }
        uVar43 = uVar43 << 8 | uVar43 >> 0x38;
        *(ulonglong *)(puVar9 + 0x62) = uVar31 | (uVar41 | uVar29) & uVar26;
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
      *(ulonglong *)(puVar9 + 0x5e) = uVar42;
      *(ulonglong *)(puVar9 + 0x68) = uVar42 & local_res20;
    }
    puVar9[0x66] = 0xffffffff;
    puVar9[0x67] = 0xffffffff;
  }
  uVar43 = *(ulonglong *)(puVar9 + 0x6a);
  iVar25 = 0x10;
  do {
    if ((uVar22 & uVar43) != 0) {
      if ((char)param_1[0x28] != '\0') {
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar22) != 0) & 0x20 |
                           -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar22) != 0) & 0x10 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x5e) & uVar22) != 0) & 8));
        uVar36 = 0;
        if ((uVar33 & 1) != 0) {
          uVar36 = uVar22;
        }
        uVar41 = ~uVar22;
        uVar36 = uVar36 | *(ulonglong *)(puVar9 + 0x5e) & uVar41;
        *(ulonglong *)(puVar9 + 0x5e) = uVar36;
        uVar42 = 0;
        if ((uVar33 & 2) != 0) {
          uVar42 = uVar22;
        }
        *(ulonglong *)(puVar9 + 0x60) = uVar42 | *(ulonglong *)(puVar9 + 0x60) & uVar41;
        uVar42 = 0;
        if ((uVar33 & 4) != 0) {
          uVar42 = uVar22;
        }
        *(ulonglong *)(puVar9 + 0x62) = uVar42 | *(ulonglong *)(puVar9 + 0x62) & uVar41;
        *(ulonglong *)(puVar9 + 0x68) = uVar36 & local_res20;
      }
      *(ulonglong *)(puVar9 + 0x66) = *(ulonglong *)(puVar9 + 0x66) | uVar22;
      puVar9[100] = 0;
      puVar9[0x65] = 0;
      uVar43 = uVar43 & ~uVar22;
      *(ulonglong *)(puVar9 + 0x6a) = uVar43;
    }
    uVar36 = uVar22 << 1;
    if ((uVar36 & uVar43) != 0) {
      if ((char)param_1[0x28] != '\0') {
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar36) != 0) & 0x20 |
                           -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar36) != 0) & 0x10 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x5e) & uVar36) != 0) & 8));
        uVar42 = 0;
        if ((uVar33 & 1) != 0) {
          uVar42 = uVar36;
        }
        uVar31 = ~uVar36;
        uVar42 = uVar42 | *(ulonglong *)(puVar9 + 0x5e) & uVar31;
        *(ulonglong *)(puVar9 + 0x5e) = uVar42;
        uVar41 = 0;
        if ((uVar33 & 2) != 0) {
          uVar41 = uVar36;
        }
        *(ulonglong *)(puVar9 + 0x60) = uVar41 | *(ulonglong *)(puVar9 + 0x60) & uVar31;
        uVar41 = 0;
        if ((uVar33 & 4) != 0) {
          uVar41 = uVar36;
        }
        *(ulonglong *)(puVar9 + 0x62) = uVar41 | *(ulonglong *)(puVar9 + 0x62) & uVar31;
        *(ulonglong *)(puVar9 + 0x68) = uVar42 & local_res20;
      }
      *(ulonglong *)(puVar9 + 0x66) = *(ulonglong *)(puVar9 + 0x66) | uVar36;
      puVar9[100] = 0;
      puVar9[0x65] = 0;
      uVar43 = uVar43 & ~uVar36;
      *(ulonglong *)(puVar9 + 0x6a) = uVar43;
    }
    uVar36 = uVar22 << 2;
    if ((uVar36 & uVar43) != 0) {
      if ((char)param_1[0x28] != '\0') {
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar36) != 0) & 0x20 |
                           -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar36) != 0) & 0x10 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x5e) & uVar36) != 0) & 8));
        uVar42 = 0;
        if ((uVar33 & 1) != 0) {
          uVar42 = uVar36;
        }
        uVar31 = ~uVar36;
        uVar42 = uVar42 | *(ulonglong *)(puVar9 + 0x5e) & uVar31;
        *(ulonglong *)(puVar9 + 0x5e) = uVar42;
        uVar41 = 0;
        if ((uVar33 & 2) != 0) {
          uVar41 = uVar36;
        }
        *(ulonglong *)(puVar9 + 0x60) = uVar41 | *(ulonglong *)(puVar9 + 0x60) & uVar31;
        uVar41 = 0;
        if ((uVar33 & 4) != 0) {
          uVar41 = uVar36;
        }
        *(ulonglong *)(puVar9 + 0x62) = uVar41 | *(ulonglong *)(puVar9 + 0x62) & uVar31;
        *(ulonglong *)(puVar9 + 0x68) = uVar42 & local_res20;
      }
      *(ulonglong *)(puVar9 + 0x66) = *(ulonglong *)(puVar9 + 0x66) | uVar36;
      puVar9[100] = 0;
      puVar9[0x65] = 0;
      uVar43 = uVar43 & ~uVar36;
      *(ulonglong *)(puVar9 + 0x6a) = uVar43;
    }
    uVar36 = uVar22 << 3;
    if ((uVar36 & uVar43) != 0) {
      if ((char)param_1[0x28] != '\0') {
        uVar33 = *(uint *)(&DAT_1806cc1e0 +
                          (-(uint)((*(ulonglong *)(puVar9 + 0x62) & uVar36) != 0) & 0x20 |
                           -(uint)((*(ulonglong *)(puVar9 + 0x60) & uVar36) != 0) & 0x10 |
                          -(uint)((*(ulonglong *)(puVar9 + 0x5e) & uVar36) != 0) & 8));
        uVar42 = 0;
        if ((uVar33 & 1) != 0) {
          uVar42 = uVar36;
        }
        uVar31 = ~uVar36;
        uVar42 = uVar42 | *(ulonglong *)(puVar9 + 0x5e) & uVar31;
        *(ulonglong *)(puVar9 + 0x5e) = uVar42;
        uVar41 = 0;
        if ((uVar33 & 2) != 0) {
          uVar41 = uVar36;
        }
        *(ulonglong *)(puVar9 + 0x60) = uVar41 | *(ulonglong *)(puVar9 + 0x60) & uVar31;
        uVar41 = 0;
        if ((uVar33 & 4) != 0) {
          uVar41 = uVar36;
        }
        *(ulonglong *)(puVar9 + 0x62) = uVar41 | *(ulonglong *)(puVar9 + 0x62) & uVar31;
        *(ulonglong *)(puVar9 + 0x68) = uVar42 & local_res20;
      }
      *(ulonglong *)(puVar9 + 0x66) = *(ulonglong *)(puVar9 + 0x66) | uVar36;
      puVar9[100] = 0;
      puVar9[0x65] = 0;
      uVar43 = uVar43 & ~uVar36;
      *(ulonglong *)(puVar9 + 0x6a) = uVar43;
    }
    uVar22 = uVar22 << 4 | uVar22 >> 0x3c;
    iVar25 = iVar25 + -1;
  } while (iVar25 != 0);
  FUN_18044b4a0(param_1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  fVar44 = (float)puVar9[0x45];
  if (fVar44 < fVar45) {
    fVar49 = (float)puVar9[0x58] * DAT_1808ac188;
    if (fVar45 - fVar44 <= fVar49) {
      if ((float)((uint)fVar49 ^ uVar47) <= fVar45 - fVar44) goto LAB_18045a696;
      fVar44 = fVar44 - fVar49;
    }
    else {
      fVar44 = fVar49 + fVar44;
    }
  }
  fVar49 = DAT_1808ac0c0;
  if (DAT_1808ac0c0 <= fVar44) {
    fVar49 = fVar44;
  }
  if (fVar49 <= fVar45) {
    fVar45 = fVar49;
  }
LAB_18045a696:
  puVar9[0x45] = (uint)fVar45;
  if (((puVar9[0x56] & 4) == 0) && (*(longlong *)(puVar9 + 0x1ea) != 0)) {
    puVar9[0x1d6] = puVar9[3];
    puVar9[0x1d7] = puVar9[4];
    puVar9[0x1d8] = puVar9[5];
    puVar9[0x1d9] = puVar9[0x1a];
    *(char *)(puVar9 + 0x1da) = (char)puVar9[0x1c];
    *(undefined1 *)((longlong)puVar9 + 0x769) = *(undefined1 *)((longlong)puVar9 + 0x72);
    *(undefined1 *)((longlong)puVar9 + 0x76a) = *(undefined1 *)((longlong)puVar9 + 0xaa);
    puVar9[0x1db] = puVar9[0x57];
    puVar9[0x1dc] = puVar9[0x59];
    puVar9[0x1dd] = puVar9[0x5a];
    puVar9[0x1de] = puVar9[0xb5];
    FUN_18047d770();
  }
  *(undefined8 *)(puVar9 + 0x17) = *(undefined8 *)(puVar9 + 0x14);
  puVar9[0x19] = puVar9[0x16];
  if (*(longlong *)(puVar9 + 0x1ea) != 0) {
    FUN_180452950(param_1);
  }
  return;
}



/* ===== 18045a7d0 FUN_18045a7d0 ===== */

undefined4 *
FUN_18045a7d0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  plVar2 = (longlong *)(param_1 + 0x10);
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7e) = 1;
  *param_1 = param_4;
  *(undefined8 *)(param_1 + 2) = param_2[5];
  *(undefined8 *)(param_1 + 4) = param_2[6];
  *(undefined8 *)(param_1 + 6) = param_3;
  *(undefined8 *)(param_1 + 8) = *param_2;
  param_1[10] = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)((longlong)param_2 + 0xc);
  param_1[0xd] = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = param_2[3];
  param_1[0x1e] = *(undefined4 *)(param_2 + 4);
  if (plVar2 != param_2 + 7) {
    lVar1 = param_2[7];
    FUN_1802009d0(plVar2,lVar1,(param_2[8] - lVar1 >> 3) * -0x71c71c71c71c71c7,param_4,1);
  }
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x7e) = param_5;
  return param_1;
}



/* ===== 18045a8e0 FUN_18045a8e0 ===== */

void FUN_18045a8e0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  param_2[5] = *(undefined8 *)(param_1 + 8);
  param_2[6] = *(undefined8 *)(param_1 + 0x10);
  *param_3 = *(undefined8 *)(param_1 + 0x18);
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x34);
  param_2[3] = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x78);
  if (param_2 != (undefined8 *)(param_1 + 8)) {
    FUN_1802009d0(param_2 + 7,*(longlong *)(param_1 + 0x40),
                  (*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3) *
                  -0x71c71c71c71c71c7);
  }
  *(undefined1 *)((longlong)param_2 + 0x24) = *(undefined1 *)(param_1 + 0x7c);
  *(undefined1 *)((longlong)param_2 + 0x25) = *(undefined1 *)(param_1 + 0x7d);
  return;
}



/* ===== 18045a980 FUN_18045a980 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_18045a980(float *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  float *local_70;
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_70 = &local_58;
  local_78 = 1;
  local_88 = param_3;
  local_80 = param_4;
  FUN_180450e80(*(undefined4 *)(param_2 + 0xac),*(undefined4 *)(param_2 + 0xb0),param_2 + 0xb4,
                param_2 + 0xc0);
  local_70 = &local_48;
  local_78 = 1;
  local_68 = 0;
  local_60 = 0;
  local_88 = param_3;
  local_80 = param_4;
  FUN_180450e80(*(undefined4 *)(param_2 + 0xcc),0,param_2 + 0xd0,&local_68);
  *param_1 = local_58 + local_48;
  param_1[1] = local_54 + local_44;
  param_1[2] = local_50 + local_40;
  return param_1;
}



/* ===== 18045aa90 FUN_18045aa90 ===== */

ulonglong FUN_18045aa90(uint *param_1,uint *param_2)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar6 = (ulonglong)*param_2;
  if ((((((*param_1 == *param_2) && ((float)param_1[0x1c] == (float)param_2[0x1c])) &&
        ((float)param_1[0xb] == (float)param_2[0xb])) &&
       (((float)param_1[8] == (float)param_2[8] &&
        (uVar6 = *(ulonglong *)(param_2 + 2), *(ulonglong *)(param_1 + 2) == uVar6)))) &&
      ((float)param_1[0x1d] == (float)param_2[0x1d])) &&
     (((((float)param_1[0xc] == (float)param_2[0xc] && ((float)param_1[9] == (float)param_2[9])) &&
       ((uVar6 = *(ulonglong *)(param_2 + 4), *(ulonglong *)(param_1 + 4) == uVar6 &&
        ((((float)param_1[0x1e] == (float)param_2[0x1e] &&
          ((float)param_1[0xd] == (float)param_2[0xd])) &&
         ((float)param_1[10] == (float)param_2[10])))))) &&
      (uVar6 = *(ulonglong *)(param_2 + 6), *(ulonglong *)(param_1 + 6) == uVar6)))) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar5 = *(longlong *)(param_2 + 0x10);
    uVar6 = *(longlong *)(param_2 + 0x12) - lVar5;
    if (*(longlong *)(param_1 + 0x12) - lVar4 == uVar6) {
      uVar6 = 0x8e38e38e38e38e39;
      uVar8 = (*(longlong *)(param_1 + 0x12) - lVar4 >> 3) * -0x71c71c71c71c71c7;
      uVar7 = 0;
      if (uVar8 != 0) {
        do {
          if (((*(float *)(lVar4 + uVar7 * 0x48) != *(float *)(lVar5 + uVar7 * 0x48)) ||
              (uVar6 = *(ulonglong *)(lVar5 + 8 + uVar7 * 0x48),
              *(ulonglong *)(lVar4 + 8 + uVar7 * 0x48) != uVar6)) ||
             (uVar6 = 0,
             *(char *)(lVar4 + 0x10 + uVar7 * 0x48) != *(char *)(lVar5 + 0x10 + uVar7 * 0x48)))
          goto LAB_18045ac3d;
          cVar3 = *(char *)(lVar5 + 0x20 + uVar7 * 0x48);
          uVar6 = 0;
          if (*(char *)(lVar4 + 0x20 + uVar7 * 0x48) == '\0') {
            bVar9 = cVar3 == '\0';
          }
          else if (((cVar3 == '\0') ||
                   (*(float *)(lVar4 + 0x14 + uVar7 * 0x48) !=
                    *(float *)(lVar5 + 0x14 + uVar7 * 0x48))) ||
                  ((*(float *)(lVar4 + 0x18 + uVar7 * 0x48) !=
                    *(float *)(lVar5 + 0x18 + uVar7 * 0x48) ||
                   (fVar2 = *(float *)(lVar4 + 0x1c + uVar7 * 0x48),
                   pfVar1 = (float *)(lVar5 + 0x1c + uVar7 * 0x48), bVar9 = fVar2 == *pfVar1,
                   NAN(fVar2) || NAN(*pfVar1))))) goto LAB_18045ac3d;
          if (!bVar9) goto LAB_18045ac3d;
          cVar3 = *(char *)(lVar5 + 0x30 + uVar7 * 0x48);
          uVar6 = 0;
          if (*(char *)(lVar4 + 0x30 + uVar7 * 0x48) == '\0') {
            bVar9 = cVar3 == '\0';
          }
          else if ((((cVar3 == '\0') ||
                    (*(float *)(lVar4 + 0x24 + uVar7 * 0x48) !=
                     *(float *)(lVar5 + 0x24 + uVar7 * 0x48))) ||
                   (*(float *)(lVar4 + 0x28 + uVar7 * 0x48) !=
                    *(float *)(lVar5 + 0x28 + uVar7 * 0x48))) ||
                  (fVar2 = *(float *)(lVar4 + 0x2c + uVar7 * 0x48),
                  pfVar1 = (float *)(lVar5 + 0x2c + uVar7 * 0x48), bVar9 = fVar2 == *pfVar1,
                  NAN(fVar2) || NAN(*pfVar1))) goto LAB_18045ac3d;
          if (!bVar9) goto LAB_18045ac3d;
          cVar3 = *(char *)(lVar5 + 0x40 + uVar7 * 0x48);
          uVar6 = 0;
          if (*(char *)(lVar4 + 0x40 + uVar7 * 0x48) == '\0') {
            bVar9 = cVar3 == '\0';
          }
          else if (((cVar3 == '\0') ||
                   (*(float *)(lVar4 + 0x34 + uVar7 * 0x48) !=
                    *(float *)(lVar5 + 0x34 + uVar7 * 0x48))) ||
                  ((*(float *)(lVar4 + 0x38 + uVar7 * 0x48) !=
                    *(float *)(lVar5 + 0x38 + uVar7 * 0x48) ||
                   (fVar2 = *(float *)(lVar4 + 0x3c + uVar7 * 0x48),
                   pfVar1 = (float *)(lVar5 + 0x3c + uVar7 * 0x48), bVar9 = fVar2 == *pfVar1,
                   NAN(fVar2) || NAN(*pfVar1))))) goto LAB_18045ac3d;
          if (((!bVar9) ||
              (uVar6 = 0,
              *(char *)(lVar4 + 0x41 + uVar7 * 0x48) != *(char *)(lVar5 + 0x41 + uVar7 * 0x48))) ||
             (uVar6 = 0,
             *(char *)(lVar4 + 0x42 + uVar7 * 0x48) != *(char *)(lVar5 + 0x42 + uVar7 * 0x48)))
          goto LAB_18045ac3d;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
LAB_18045ac3d:
  return uVar6 & 0xffffffffffffff00;
}



/* ===== 18045ad20 FUN_18045ad20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18045ad20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  longlong lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [24];
  undefined1 local_388;
  float local_378;
  float local_374 [33];
  undefined1 local_2f0 [24];
  undefined1 local_2d8 [216];
  undefined4 local_200;
  char local_1f8;
  char local_1f7;
  char local_1f6;
  uint local_1f4;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  undefined8 local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined1 local_14a;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [64];
  undefined1 local_b8 [24];
  undefined1 local_a0 [40];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_3a8;
  FUN_180449330();
  puVar14 = auStack_3a8;
  local_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 0;
  local_194 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_168 = 0;
  lStack_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_14c = 0;
  local_14a = 1;
  if (*(char *)((longlong)param_2 + 0x7e) != '\0') goto LAB_18045b573;
  local_124 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_120 = param_2[1];
  local_118 = param_2[2];
  uVar1 = param_2[3];
  local_148 = param_2[4];
  local_140 = *(undefined4 *)(param_2 + 5);
  local_13c = *(undefined8 *)((longlong)param_2 + 0x2c);
  local_134 = *(undefined4 *)((longlong)param_2 + 0x34);
  local_130 = param_2[0xe];
  local_128 = *(undefined4 *)(param_2 + 0xf);
  lVar16 = -0x71c71c71c71c71c7;
  if (&local_110 != param_2 + 8) {
    lVar9 = param_2[8];
    FUN_1802009d0(&local_110,lVar9,(param_2[9] - lVar9 >> 3) * -0x71c71c71c71c71c7);
  }
  local_124 = *(undefined2 *)((longlong)param_2 + 0x7c);
  local_1f6 = 0;
  local_1f4 = 2;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 1;
  local_1f8 = *(char *)(param_1 + 0x2c8);
  local_1f7 = *(char *)(param_1 + 0x348);
  lVar9 = FUN_180266660();
  if (((lVar9 == 0) || (DAT_180cf9f80 == 0)) ||
     (cVar8 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar9), cVar8 == '\0')) {
    local_1f6 = '\0';
  }
  else {
    local_1f6 = '\x01';
  }
  local_1f4 = (uint)*(byte *)(param_1 + 0x70);
  local_1f0 = *(ulonglong *)(param_1 + 0x178);
  local_1e8 = *(undefined8 *)(param_1 + 0x1c4);
  local_1e0 = CONCAT44(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x1cc));
  local_1d8 = DAT_1809f35a8;
  FUN_1801ef820(&local_148,&local_1f8);
  fVar7 = DAT_1808acda0;
  fVar6 = DAT_1808ac34c;
  fVar5 = DAT_1808abfbc;
  if (local_110 != local_108) {
    if ((((local_1f0 & 0x18) == 0) || (((uint)(float)local_1e8 & 0x7f800000) == 0x7f800000)) ||
       (fVar21 = (float)local_1e8, DAT_1808ac864 <= (float)((uint)(float)local_1e8 & _DAT_1808ade90)
       )) {
      fVar21 = 0.0;
    }
    local_378 = fVar21;
    if ((((local_1f0 & 0x600) == 0) || (((uint)local_1e8._4_4_ & 0x7f800000) == 0x7f800000)) ||
       (fVar20 = local_1e8._4_4_, DAT_1808ac864 <= (float)((uint)local_1e8._4_4_ & _DAT_1808ade90)))
    {
      fVar20 = 0.0;
    }
    local_374[0] = fVar20;
    fVar18 = (float)local_148;
    fVar22 = local_148._4_4_;
    for (lVar9 = local_110; lVar9 != local_108; lVar9 = lVar9 + 0x48) {
      lVar2 = *(longlong *)(lVar9 + 8);
      fVar17 = fVar6;
      if (lVar2 == 8) {
        if (*(char *)(lVar9 + 0x10) == '\0') {
LAB_18045b0e2:
          fVar17 = fVar7;
        }
LAB_18045b0e5:
        pfVar10 = &local_378;
LAB_18045b0ea:
        *pfVar10 = fVar17 + *pfVar10;
        fVar20 = local_374[0];
        fVar21 = local_378;
      }
      else {
        if (lVar2 == 0x10) {
          if (*(char *)(lVar9 + 0x10) != '\0') goto LAB_18045b0e2;
          goto LAB_18045b0e5;
        }
        if (lVar2 == 0x200) {
          if (*(char *)(lVar9 + 0x10) == '\0') {
            pfVar10 = local_374;
            fVar17 = fVar7;
          }
          else {
            pfVar10 = local_374;
          }
          goto LAB_18045b0ea;
        }
        if (lVar2 == 0x400) {
          if (*(char *)(lVar9 + 0x10) == '\0') {
            pfVar10 = local_374;
          }
          else {
            pfVar10 = local_374;
            fVar17 = fVar7;
          }
          goto LAB_18045b0ea;
        }
      }
      if (*(char *)(lVar9 + 0x42) == '\0') {
        *(undefined1 *)(lVar9 + 0x42) = 1;
        if (lVar2 == 0) {
          if (*(char *)(lVar9 + 0x40) == '\0') {
LAB_18045b1b9:
            bVar4 = true;
          }
          else {
            fVar19 = *(float *)(lVar9 + 0x34) - fVar21;
            fVar17 = *(float *)(lVar9 + 0x38) - fVar20;
            if (fVar19 == 0.0) {
              fVar19 = 0.0;
            }
            else {
              fVar21 = fVar21 + fVar19;
              local_378 = fVar21;
            }
            if (fVar17 == 0.0) {
              fVar17 = 0.0;
            }
            else {
              fVar20 = fVar20 + fVar17;
              local_374[0] = fVar20;
            }
            *(float *)(lVar9 + 0x34) = fVar19;
            *(float *)(lVar9 + 0x38) = fVar17;
            *(undefined4 *)(lVar9 + 0x3c) = 0;
            if ((fVar19 == 0.0) && (fVar17 == 0.0)) goto LAB_18045b1b9;
            bVar4 = false;
          }
          if (*(char *)(lVar9 + 0x30) == '\0') {
            if ((bVar4) && (*(char *)(lVar9 + 0x41) != '\0')) {
              *(undefined8 *)(lVar9 + 0x28) = 0;
              *(undefined1 *)(lVar9 + 0x30) = 1;
              *(undefined4 *)(lVar9 + 0x24) = 0x3a83126f;
              fVar18 = fVar18 + fVar5;
            }
            goto LAB_18045b257;
          }
        }
        else {
          bVar4 = false;
          if (*(char *)(lVar9 + 0x30) == '\0') goto LAB_18045b257;
        }
        fVar17 = *(float *)(lVar9 + 0x24) - fVar18;
        if (fVar17 == 0.0) {
          fVar17 = 0.0;
        }
        else {
          fVar18 = fVar17 + fVar18;
        }
        *(float *)(lVar9 + 0x24) = fVar17;
        fVar19 = *(float *)(lVar9 + 0x28) - fVar22;
        *(undefined4 *)(lVar9 + 0x2c) = 0;
        if (fVar19 == 0.0) {
          *(undefined4 *)(lVar9 + 0x28) = 0;
          if (((fVar17 == 0.0) && (bVar4)) && (*(char *)(lVar9 + 0x41) != '\0')) {
            *(float *)(lVar9 + 0x24) = fVar17 + fVar5;
            fVar18 = fVar18 + fVar5;
          }
        }
        else {
          fVar22 = fVar22 + fVar19;
          *(float *)(lVar9 + 0x28) = fVar19;
        }
      }
      else {
        if ((lVar2 == 0) && (*(char *)(lVar9 + 0x40) != '\0')) {
          fVar21 = fVar21 + *(float *)(lVar9 + 0x34);
          local_378 = fVar21;
          fVar20 = fVar20 + *(float *)(lVar9 + 0x38);
          local_374[0] = fVar20;
        }
        if (*(char *)(lVar9 + 0x30) != '\0') {
          fVar18 = fVar18 + *(float *)(lVar9 + 0x24);
          fVar22 = fVar22 + *(float *)(lVar9 + 0x28);
        }
      }
LAB_18045b257:
    }
    if ((local_1f8 != '\0') && (local_1f6 != '\0')) {
      if (local_1f7 != '\0') {
        FUN_1801eed00(&local_148,&local_1f8);
      }
      FUN_1801ef060(&local_148,&local_1f8);
    }
  }
  FUN_1801f05d0(&local_148,&local_1f8);
  local_388 = 1;
  puVar11 = (undefined8 *)FUN_18045a7d0(local_f8,&local_148,uVar1,*(undefined4 *)param_2);
  local_1c8 = *puVar11;
  local_1c0 = puVar11[1];
  uStack_1b8 = puVar11[2];
  local_1b0 = puVar11[3];
  local_1a8 = puVar11[4];
  local_1a0 = *(undefined4 *)(puVar11 + 5);
  local_19c = *(undefined8 *)((longlong)puVar11 + 0x2c);
  local_194 = *(undefined8 *)((longlong)puVar11 + 0x34);
  plVar15 = puVar11 + 8;
  if (&local_188 == plVar15) {
LAB_18045b40c:
    puVar14 = auStack_3a8;
    puVar13 = auStack_3a8;
    plVar15 = puVar11 + 0xb;
    lVar16 = -0x5555555555555555;
    if (&lStack_170 != plVar15) {
      puVar14 = auStack_3a8;
      if (lStack_170 != 0) {
        lVar9 = lStack_170;
        if ((ulonglong)((lStack_160 - lStack_170 >> 2) * 4) < 0x1000) goto LAB_18045b47b;
        lVar9 = *(longlong *)(lStack_170 + -8);
        puVar14 = auStack_3a8;
        if (0x1f < (lStack_170 - lVar9) - 8U) goto LAB_18045b474;
        goto LAB_18045b47e;
      }
      goto LAB_18045b498;
    }
  }
  else {
    if (local_188 == 0) {
LAB_18045b3e1:
      local_188 = *plVar15;
      uStack_180 = puVar11[9];
      local_178 = puVar11[10];
      *plVar15 = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      goto LAB_18045b40c;
    }
    uVar12 = (local_178 - local_188 >> 3) * 8;
    if (uVar12 < 0x1000) {
      lVar16 = local_188;
LAB_18045b3c7:
      thunk_FUN_1803d64e0(lVar16,uVar12);
      goto LAB_18045b3e1;
    }
    if ((local_188 - *(longlong *)(local_188 + -8)) - 8U < 0x20) {
      uVar12 = uVar12 + 0x27;
      lVar16 = *(longlong *)(local_188 + -8);
      goto LAB_18045b3c7;
    }
LAB_18045b474:
    lVar9 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar13 = auStack_3a0;
LAB_18045b47b:
    puVar14 = puVar13;
LAB_18045b47e:
    *(undefined8 *)(puVar14 + -8) = 0x18045b486;
    thunk_FUN_1803d64e0(lVar9);
LAB_18045b498:
    lStack_170 = *plVar15;
    local_168 = puVar11[0xc];
    lStack_160 = puVar11[0xd];
    *plVar15 = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
  }
  local_158 = puVar11[0xe];
  local_150 = *(undefined4 *)(puVar11 + 0xf);
  local_14c = *(undefined2 *)((longlong)puVar11 + 0x7c);
  local_14a = *(undefined1 *)((longlong)puVar11 + 0x7e);
  *(undefined8 *)(puVar14 + -8) = 0x18045b514;
  FUN_180011610(local_a0);
  *(undefined8 *)(puVar14 + -8) = 0x18045b520;
  FUN_180200b70(local_b8);
  local_1c8 = CONCAT44(*(undefined4 *)((longlong)param_2 + 4),(undefined4)local_1c8);
  local_194 = CONCAT44(*(undefined4 *)(param_2 + 7),(undefined4)local_194);
  if (&lStack_170 != param_2 + 0xb) {
    lVar9 = param_2[0xb];
    lVar2 = param_2[0xc];
    *(undefined8 *)(puVar14 + -8) = 0x18045b560;
    FUN_18025ce80(&lStack_170,lVar9,(lVar2 - lVar9 >> 2) * lVar16);
  }
  param_2 = &local_1c8;
  *(undefined8 *)(puVar14 + -8) = 0x18045b573;
  FUN_180200b70(&local_110);
LAB_18045b573:
  *(undefined8 *)(puVar14 + -8) = 0x18045b580;
  FUN_180449cb0(puVar14 + 0x40,param_1);
  *(undefined8 **)(puVar14 + 0x48) = param_2;
  local_200 = *(undefined4 *)(param_2 + 7);
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x120);
  *(float *)(param_1 + 0x164) = (float)*(int *)(param_1 + 0x120) * DAT_1808ac00c;
  *(undefined4 *)(param_1 + 0x160) = 0x3c800000;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(puVar14 + -8) = 0x18045b5db;
  FUN_180457560(puVar14 + 0x40,param_2);
  *(undefined8 *)(puVar14 + -8) = 0x18045b5e5;
  FUN_180042970(local_2d8);
  *(undefined8 *)(puVar14 + -8) = 0x18045b5ee;
  FUN_1804484b0(local_2f0);
  *(undefined8 *)(puVar14 + -8) = 0x18045b5fb;
  FUN_180011610(&lStack_170);
  *(undefined8 *)(puVar14 + -8) = 0x18045b607;
  FUN_180200b70(&local_188);
  *(undefined8 *)(puVar14 + -8) = 0x18045b616;
  return;
}



/* ===== 18045b650 FUN_18045b650 ===== */

void FUN_18045b650(longlong param_1)

{
  FUN_180042970(param_1 + 0x90);
  FUN_1804484b0(param_1 + 0x78);
  return;
}



/* ===== 18045b680 FUN_18045b680 ===== */

void FUN_18045b680(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  param_1[4] = *(undefined4 *)(param_2 + 0x218);
  if (*(char *)(param_2 + 0x201) == '\0') {
    bVar2 = (byte)(*(uint *)(param_2 + 0x68) >> 1) & 1;
  }
  else {
    bVar2 = 1;
  }
  *(byte *)(param_1 + 5) = bVar2;
  param_1[6] = *(undefined4 *)(param_2 + 0x204);
  *param_1 = *(undefined4 *)(param_2 + 0x1f0);
  param_1[7] = *(undefined4 *)(param_2 + 0xc);
  param_1[8] = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = *(undefined4 *)(param_2 + 0x134);
  param_1[10] = *(float *)(param_2 + 800) * *(float *)(param_2 + 0x1f0) * *(float *)(param_2 + 0x8c)
  ;
  param_1[0xb] = *(undefined4 *)(param_2 + 0x328);
  fVar5 = *(float *)(param_2 + 0x324);
  fVar6 = *(float *)(param_2 + 0x1f0);
  param_1[0xc] = 0x3f800000;
  param_1[1] = fVar5 * fVar6;
  if ((*(char *)(param_2 + 0x349) != '\0') && (lVar1 = *(longlong *)(param_2 + 0x7b0), lVar1 != 0))
  {
    if (DAT_180c87410 == 0) {
      fVar5 = 0.0;
    }
    else {
      uVar4 = 0;
      if (*(uint *)(param_2 + 0x790) < 2) {
        uVar4 = *(uint *)(param_2 + 0x790);
      }
      fVar5 = (float)FUN_18000f3d0((int)(uVar4 << 2) + lVar1 + (ulonglong)DAT_180c87410);
    }
    iVar3 = FUN_180011200((ulonglong)DAT_180c87414 + lVar1);
    if (((1 < iVar3) && (fVar5 * DAT_1808ac200 < DAT_1808acb0c)) || (*(char *)(param_1 + 5) == '\0')
       ) {
      fVar6 = fVar5 / DAT_1808acb90;
      if (DAT_1808ac34c <= fVar5 / DAT_1808acb90) {
        fVar6 = DAT_1808ac34c;
      }
      param_1[0xc] = fVar6;
    }
  }
  return;
}



/* ===== 18045b7d0 FUN_18045b7d0 ===== */

void FUN_18045b7d0(longlong param_1,float param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_1 + 0x24) = param_2;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 0xc);
  if (*(float *)(param_1 + 0x10) <= 0.0) goto LAB_18045b8cf;
  fVar1 = DAT_1808ac34c - *(float *)(param_1 + 0x10) / DAT_1808acb08;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = DAT_1808ac34c;
  if (fVar2 <= DAT_1808ac34c) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 8) = fVar1 * fVar1 * *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_3 + 0x2dc);
  if (DAT_180c87370 == 0) {
    if (DAT_180c87378 == '\0') {
      DAT_180c87370 = FUN_180264b70(PTR_s_sv_staminarecoveryrate_180c87368);
      DAT_180c87378 = DAT_180c87370 == 0;
      if (DAT_180c87370 != 0) goto LAB_18045b881;
    }
  }
  else {
LAB_18045b881:
    fVar1 = (float)FUN_180264d70(DAT_180c87370);
    if (((uint)fVar1 & 0x7f800000) != 0x7f800000) {
      fVar2 = fVar1;
    }
  }
  fVar2 = *(float *)(param_1 + 0x10) - fVar2 * param_2;
  *(float *)(param_1 + 0x10) = fVar2;
  if (fVar2 < 0.0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
LAB_18045b8cf:
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(float *)(param_1 + 8) =
         ((*(float *)(param_1 + 0x18) * DAT_1808ac16c + DAT_1808ac34c) - *(float *)(param_1 + 0x18))
         * *(float *)(param_1 + 8);
  }
  return;
}



/* ===== 18045b910 FUN_18045b910 ===== */

float * FUN_18045b910(float *param_1,longlong param_2,longlong param_3)

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
  
  fVar4 = *(float *)(param_3 + 0x70) * DAT_1808ac014;
  fVar5 = *(float *)(param_3 + 0x74) * DAT_1808ac014;
  fVar6 = *(float *)(param_3 + 0x78) * DAT_1808ac014;
  fVar1 = (float)FUN_180517790(fVar4);
  fVar4 = (float)FUN_180517200(fVar4);
  fVar2 = (float)FUN_180517790(fVar5);
  fVar5 = (float)FUN_180517200(fVar5);
  fVar3 = (float)FUN_180517790(fVar6);
  fVar6 = (float)FUN_180517200(fVar6);
  local_res8[0] = fVar5 * fVar4;
  local_res20[0] = fVar2 * fVar4;
  fVar4 = fVar3 * fVar1 * fVar5 - fVar6 * fVar2;
  fVar1 = fVar3 * fVar1 * fVar2 + fVar6 * fVar5;
  local_res10[0] = fVar4;
  local_res18[0] = fVar1;
  FUN_18044f770(local_res8[0],local_res20[0],local_res8,local_res20);
  FUN_18044f770(fVar4,fVar1,local_res10,local_res18);
  fVar2 = *(float *)(param_3 + 0x30) * local_res10[0] + *(float *)(param_3 + 0x2c) * local_res8[0];
  fVar4 = *(float *)(param_3 + 0x30) * local_res18[0] + *(float *)(param_3 + 0x2c) * local_res20[0];
  fVar1 = fVar2 * fVar2 + fVar4 * fVar4;
  if (fVar1 < 0.0) {
    fVar5 = (float)FUN_18051af10(fVar1);
  }
  else {
    fVar5 = SQRT(fVar1);
  }
  fVar3 = DAT_1808ac34c;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    param_1[1] = (fVar3 / fVar5) * fVar4;
    *param_1 = (fVar3 / fVar5) * fVar2;
  }
  if (fVar3 <= fVar5) {
    fVar5 = fVar3;
  }
  param_1[2] = fVar5 * *(float *)(param_2 + 8);
  return param_1;
}



/* ===== 18045bb30 FUN_18045bb30 ===== */

void FUN_18045bb30(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  if (puVar7 != puVar1) {
    do {
      if (*(char *)(puVar7 + 8) != '\0') break;
      puVar7 = puVar7 + 9;
    } while (puVar7 != puVar1);
    if (puVar7 != puVar1) {
      puVar6 = puVar7 + 9;
      if (puVar6 != puVar1) {
        do {
          if (*(char *)(puVar6 + 8) == '\0') {
            uVar5 = puVar6[1];
            *puVar7 = *puVar6;
            puVar7[1] = uVar5;
            uVar5 = puVar6[3];
            puVar7[2] = puVar6[2];
            puVar7[3] = uVar5;
            uVar5 = puVar6[5];
            puVar7[4] = puVar6[4];
            puVar7[5] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar6 + 0x34);
            uVar3 = *(undefined4 *)(puVar6 + 7);
            uVar4 = *(undefined4 *)((longlong)puVar6 + 0x3c);
            *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar6 + 6);
            *(undefined4 *)((longlong)puVar7 + 0x34) = uVar2;
            *(undefined4 *)(puVar7 + 7) = uVar3;
            *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar4;
            puVar7[8] = puVar6[8];
            puVar7 = puVar7 + 9;
          }
          puVar6 = puVar6 + 9;
        } while (puVar6 != puVar1);
        if (puVar7 == puVar1) {
          return;
        }
      }
      lVar8 = *(longlong *)(param_1 + 0x48) - (longlong)puVar1;
      FUN_180540530(puVar7,puVar1,lVar8);
      *(longlong *)(param_1 + 0x48) = lVar8 + (longlong)puVar7;
    }
  }
  return;
}



/* ===== 18045bbe0 FUN_18045bbe0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18045bbe0(longlong param_1,longlong param_2,char param_3,char param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  float *pfVar11;
  longlong lVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  uint local_1a8;
  byte bStack_1a4;
  undefined2 uStack_1a3;
  undefined1 uStack_1a1;
  undefined4 uStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined2 uStack_177;
  undefined5 uStack_175;
  undefined4 local_170;
  float fStack_16c;
  undefined8 uStack_168;
  uint local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  undefined1 local_130;
  undefined2 uStack_12f;
  undefined5 uStack_12d;
  undefined1 local_128 [8];
  undefined8 uStack_120;
  ulonglong local_118;
  longlong lStack_110;
  ulonglong local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [12];
  float fStack_ec;
  longlong local_e8;
  undefined1 local_d8 [176];
  
  FUN_180449330();
  uVar2 = *(ulonglong *)(param_2 + 8);
  uVar3 = *(ulonglong *)(param_2 + 0x18);
  *(ulonglong *)(param_2 + 8) = uVar2 & 0xfffffffffffeffff;
  *(ulonglong *)(param_2 + 0x18) = uVar3 & 0xfffffffffffeffff;
  if (param_3 != '\0') {
    *(ulonglong *)(param_2 + 8) = uVar2 & 0xfffffffffffefffd;
    *(ulonglong *)(param_2 + 0x18) = uVar3 & 0xfffffffffffefffd;
    puVar4 = *(undefined8 **)(param_2 + 0x48);
    puVar13 = *(undefined8 **)(param_2 + 0x40);
    if (puVar13 != puVar4) {
      do {
        if ((*(byte *)(puVar13 + 1) & 2) != 0) break;
        puVar13 = puVar13 + 9;
      } while (puVar13 != puVar4);
      if (puVar13 != puVar4) {
        puVar10 = puVar13 + 9;
        if (puVar10 != puVar4) {
          do {
            if ((*(byte *)(puVar10 + 1) & 2) == 0) {
              uVar15 = puVar10[1];
              *puVar13 = *puVar10;
              puVar13[1] = uVar15;
              uVar15 = puVar10[3];
              puVar13[2] = puVar10[2];
              puVar13[3] = uVar15;
              uVar15 = puVar10[5];
              puVar13[4] = puVar10[4];
              puVar13[5] = uVar15;
              uVar15 = puVar10[7];
              puVar13[6] = puVar10[6];
              puVar13[7] = uVar15;
              puVar13[8] = puVar10[8];
              puVar13 = puVar13 + 9;
            }
            puVar10 = puVar10 + 9;
          } while (puVar10 != puVar4);
          if (puVar13 == puVar4) goto LAB_18045bcdd;
        }
        lVar12 = *(longlong *)(param_2 + 0x48) - (longlong)puVar4;
        FUN_180540530(puVar13,puVar4,lVar12);
        *(longlong *)(param_2 + 0x48) = lVar12 + (longlong)puVar13;
      }
    }
  }
LAB_18045bcdd:
  local_1a8 = 0;
  fVar39 = *(float *)(param_1 + 0x134) * DAT_1808ac16c * DAT_1808ac31c;
  bStack_1a4 = 0;
  local_1b8 = _DAT_1808ad2c0;
  uStack_1b0 = _UNK_1808ad2c8;
  uStack_1a0 = (undefined4)_DAT_1808ad8f0;
  fStack_19c = (float)((ulonglong)_DAT_1808ad8f0 >> 0x20);
  fStack_198 = (float)_UNK_1808ad8f8;
  fStack_194 = (float)((ulonglong)_UNK_1808ad8f8 >> 0x20);
  fStack_190 = 0.0;
  fStack_18c = 0.0;
  fStack_188 = 0.0;
  fStack_184 = 0.0;
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    FUN_18045b680(&local_1b8,param_1);
    fVar35 = DAT_1808ac00c;
    FUN_18045b7d0(&local_1b8,DAT_1808ac00c,param_1);
    fVar26 = fStack_194;
    fVar31 = fStack_198;
    fVar34 = fStack_19c;
    fVar23 = fStack_198 * fStack_198 + fStack_19c * fStack_19c;
    if (fVar23 < 0.0) {
      fVar23 = (float)FUN_18051af10();
    }
    else {
      fVar23 = SQRT(fVar23);
    }
    fVar32 = DAT_1808ac0c0;
    if (DAT_1808ac0c0 <= fVar23) {
      fVar25 = fVar23;
      if (fVar23 <= fStack_18c) {
        fVar25 = fStack_18c;
      }
      fVar25 = fVar23 - fVar25 * fVar26 * fStack_190;
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      fVar34 = fVar34 * (fVar25 / fVar23);
      fVar31 = fVar31 * (fVar25 / fVar23);
      fStack_19c = fVar34;
      fStack_198 = fVar31;
    }
    pfVar11 = (float *)FUN_18045b910(local_d8,&local_1b8,param_2);
    fVar25 = DAT_1808acb90;
    fVar23 = pfVar11[2];
    fVar28 = fVar23 - (*pfVar11 * fVar34 + pfVar11[1] * fVar31);
    if (0.0 < fVar28) {
      if (fVar23 <= DAT_1808acb90) {
        fVar23 = DAT_1808acb90;
      }
      fVar23 = fVar23 * local_1b8._4_4_ * fStack_188;
      if (0.0 < fVar23) {
        fVar23 = fVar23 * fVar26;
        if (fVar28 <= fVar23) {
          fVar23 = fVar28;
        }
        fVar31 = fVar31 + fVar23 * pfVar11[1];
        fVar34 = fVar34 + fVar23 * *pfVar11;
        fStack_19c = fVar34;
        fStack_198 = fVar31;
      }
    }
    if (fVar31 * fVar31 + fVar34 * fVar34 < fVar39 * fVar39) {
      return;
    }
    FUN_18045bb30(param_2);
    if ((*(float *)(param_2 + 0x2c) != 0.0) || (*(float *)(param_2 + 0x30) != 0.0)) {
      FUN_18045b680(&local_1b8,param_1);
      FUN_18045b7d0(&local_1b8,fVar35,param_1);
      if (param_4 == '\0') {
        pfVar11 = (float *)FUN_18045b910(local_d8,&local_1b8,param_2);
        fVar34 = fStack_198;
        fVar35 = fStack_19c;
        fVar31 = fStack_198 * fStack_198 + fStack_19c * fStack_19c;
        if (fVar31 < 0.0) {
          fVar31 = (float)FUN_18051af10();
        }
        else {
          fVar31 = SQRT(fVar31);
        }
        fVar28 = (float)*(undefined8 *)(param_2 + 0x2c);
        fVar33 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
        fVar26 = *pfVar11;
        fVar23 = pfVar11[1];
        fVar38 = fVar33 * fVar33 + fVar28 * fVar28;
        fVar32 = pfVar11[2];
        if (fVar38 < 0.0) {
          fVar38 = (float)FUN_18051af10();
        }
        else {
          fVar38 = SQRT(fVar38);
        }
        fVar29 = fStack_194;
        fVar30 = DAT_1808ac34c;
        fVar24 = DAT_1808ac34c;
        if (DAT_1808ac34c < fVar38) {
          fVar24 = DAT_1808ac34c / fVar38;
        }
        fVar24 = fVar24 * ((fVar34 * fVar23 + fVar35 * fVar26 + (fVar39 - fVar31)) / fVar32);
        *(ulonglong *)(param_2 + 0x2c) = CONCAT44(fVar33 * fVar24,fVar28 * fVar24);
        if (DAT_1808ac0c0 <= fVar31) {
          fVar26 = fVar31;
          if (fVar31 <= fStack_18c) {
            fVar26 = fStack_18c;
          }
          fVar26 = fVar31 - fVar26 * fStack_194 * fStack_190;
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          fVar35 = fVar35 * (fVar26 / fVar31);
          fVar34 = fVar34 * (fVar26 / fVar31);
          fStack_19c = fVar35;
          fStack_198 = fVar34;
        }
        pfVar11 = (float *)FUN_18045b910(local_d8,&local_1b8,param_2);
        fVar31 = pfVar11[2];
        fVar26 = fVar31 - (pfVar11[1] * fVar34 + *pfVar11 * fVar35);
        if (0.0 < fVar26) {
          if (fVar31 <= fVar25) {
            fVar31 = fVar25;
          }
          fVar31 = fVar31 * local_1b8._4_4_ * fStack_188;
          if (0.0 < fVar31) {
            fVar31 = fVar31 * fVar29;
            if (fVar26 <= fVar31) {
              fVar31 = fVar26;
            }
            fVar35 = fVar35 + *pfVar11 * fVar31;
            fVar34 = fVar34 + pfVar11[1] * fVar31;
          }
        }
        fVar35 = fVar34 * fVar34 + fVar35 * fVar35;
        if ((fVar35 <= fVar39 * fVar39 + fVar30) && (!NAN(fVar35))) {
          return;
        }
      }
      else {
        fVar34 = *(float *)(param_2 + 0x30) * *(float *)(param_2 + 0x30) +
                 *(float *)(param_2 + 0x2c) * *(float *)(param_2 + 0x2c);
        if (fVar34 < 0.0) {
          fVar34 = (float)FUN_18051af10();
        }
        else {
          fVar34 = SQRT(fVar34);
        }
        fVar31 = DAT_1808ac34c;
        if (DAT_1808ac34c <= fVar34) {
          fVar34 = DAT_1808ac34c;
        }
        fVar34 = fVar34 * (float)uStack_1b0;
        fVar26 = fStack_198 * fStack_198 + fStack_19c * fStack_19c;
        if (fVar26 < 0.0) {
          fVar26 = (float)FUN_18051af10();
        }
        else {
          fVar26 = SQRT(fVar26);
        }
        fVar23 = fStack_188;
        fVar28 = fVar34;
        if (fVar34 <= fVar25) {
          fVar28 = fVar25;
        }
        fVar38 = 0.0;
        fVar25 = fVar26;
        if (fVar26 <= fStack_18c) {
          fVar25 = fStack_18c;
        }
        iVar9 = 1;
        fVar33 = local_1b8._4_4_;
        fVar30 = fVar28 * fStack_188 * local_1b8._4_4_;
        fVar28 = DAT_1808acd08;
        do {
          fVar29 = (float)iVar9 * fVar35;
          if (fVar26 < fVar32) {
            fVar24 = fVar26;
          }
          else {
            fVar24 = fVar26 - fVar29 * fVar35 * fVar25 * fStack_190;
            if (fVar24 <= 0.0) {
              fVar24 = 0.0;
            }
            fVar24 = (fVar24 / fVar26) * fVar26;
          }
          fVar14 = fVar34 - fVar24;
          if ((0.0 < fVar14) && (0.0 < fVar30)) {
            fVar27 = fVar29 * fVar35 * fVar30;
            if (fVar14 <= fVar27) {
              fVar27 = fVar14;
            }
            fVar24 = fVar27 + fVar24;
          }
          fVar14 = (fVar31 - fVar29) * fVar35;
          if (fVar32 <= fVar24) {
            fVar27 = fVar24;
            if (fVar24 <= fStack_18c) {
              fVar27 = fStack_18c;
            }
            fVar27 = fVar24 - fVar27 * fVar14 * fStack_190;
            if (fVar27 <= 0.0) {
              fVar27 = 0.0;
            }
            fVar24 = (fVar27 / fVar24) * fVar24;
          }
          fVar27 = fVar24 + fVar34;
          if ((0.0 < fVar27) && (0.0 < fVar30)) {
            fVar14 = fVar14 * fVar30;
            if (fVar27 <= fVar14) {
              fVar14 = fVar27;
            }
            fVar24 = fVar24 - fVar14;
          }
          fVar14 = (float)((uint)(fVar24 - fVar39) & _DAT_1808ade90);
          if (fVar24 < fVar39) {
            if (fVar14 < fVar28) {
              fVar28 = fVar14;
              fVar38 = fVar29;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != 0x40);
        if (fVar28 < fVar31) {
          local_178 = 1;
          local_1b8 = (ulonglong)(uint)local_1b8._4_4_ << 0x20;
          bStack_1a4 = 0;
          uStack_1a3 = 0;
          uStack_1a1 = 0;
          uStack_1a0 = 0;
          fStack_19c = 0.0;
          fStack_198 = (float)((uint)fStack_198 & 0xffffff00);
          fStack_194 = 0.0;
          fStack_190 = 0.0;
          fStack_18c = 0.0;
          fStack_188 = (float)((uint)fStack_188 & 0xffffff00);
          fStack_184 = 0.0;
          uStack_180 = 0;
          local_17c = 0;
          uStack_177 = 0;
          uStack_1b0 = 0;
          local_1a8 = local_1a8 & 0xffffff00;
          local_118 = (ulonglong)local_1a8;
          auVar6._4_8_ = uStack_120;
          auVar6._0_4_ = fVar33;
          auVar6._12_4_ = 0;
          _local_128 = auVar6 << 0x20;
          uStack_120 = 0;
          local_108 = (ulonglong)(uint)fStack_198;
          lStack_110 = 0;
          uStack_100 = 0;
          local_e8 = CONCAT53(uStack_175,1);
          local_f8._0_8_ = CONCAT44(*(undefined4 *)(param_2 + 0x2c),fVar23) & 0xffffffffffffff00;
          local_f8._8_4_ = *(undefined4 *)(param_2 + 0x30);
          fStack_ec = (float)*(undefined4 *)(param_2 + 0x34);
          FUN_18045d4f0(param_2 + 0x40,local_128);
          fVar39 = local_140;
          uStack_13c = (uint)*(undefined8 *)(param_2 + 0x2c) ^ DAT_1808adec0;
          uStack_138 = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x2c) >> 0x20) ^
                       (uint)UNK_1808adec4;
          uStack_168 = 0;
          uStack_15c = 0;
          uStack_158 = 0;
          uStack_154 = 0;
          local_128._4_4_ = fStack_16c;
          local_128._0_4_ = fVar38;
          uStack_120 = 0;
          local_140 = (float)((uint)local_140 & 0xffffff00);
          uStack_134 = 0;
          local_150 = local_150 & 0xffffff00;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          uStack_12f = 0;
          local_160 = local_160 & 0xffffff00;
          local_118 = (ulonglong)local_160;
          local_130 = 1;
          local_108 = (ulonglong)local_150;
          uStack_100 = 0;
          lStack_110 = 0;
          auVar16._0_8_ = (CONCAT44(uStack_138,fVar39) & 0xffffffffffffff00) << 0x20;
          auVar16._8_4_ = uStack_13c;
          local_f8._0_8_ = auVar16._4_8_;
          local_f8._8_4_ = uStack_138;
          fStack_ec = (float)(*(uint *)(param_2 + 0x34) ^ DAT_1808adec0);
          local_e8 = CONCAT53(uStack_12d,1);
          FUN_18045d4f0(param_2 + 0x40,local_128);
          return;
        }
      }
    }
    fVar39 = (float)FUN_180516b00();
    fVar39 = fVar39 * DAT_1808aca98;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(float *)(param_2 + 0x74) = fVar39;
    goto LAB_18045cb89;
  }
  FUN_18045bb30(param_2);
  cVar1 = *(char *)(param_1 + 0x2c8);
  fVar35 = *(float *)(param_1 + 0x330);
  if (DAT_180c87388 == 0) {
    if (DAT_180c87390 == '\0') {
      DAT_180c87388 = FUN_180264b70(PTR_s_sv_airaccelerate_180c87380);
      DAT_180c87390 = DAT_180c87388 == 0;
      if (DAT_180c87388 != 0) goto LAB_18045c473;
    }
  }
  else {
LAB_18045c473:
    fVar34 = (float)FUN_180264d70(DAT_180c87388);
    if (((uint)fVar34 & 0x7f800000) != 0x7f800000) {
      fVar35 = fVar34;
    }
  }
  fVar34 = *(float *)(param_1 + 0x2f8);
  fStack_190 = fVar35;
  if (DAT_180c87358 == 0) {
    if (DAT_180c87360 == '\0') {
      DAT_180c87358 = FUN_180264b70(PTR_s_sv_air_max_wishspeed_180c87350);
      DAT_180c87360 = DAT_180c87358 == 0;
      if (DAT_180c87358 != 0) goto LAB_18045c4e6;
    }
  }
  else {
LAB_18045c4e6:
    fVar35 = (float)FUN_180264d70(DAT_180c87358);
    if (((uint)fVar35 & 0x7f800000) != 0x7f800000) {
      fVar34 = fVar35;
    }
  }
  fVar35 = DAT_1808ac00c;
  local_1a8 = *(undefined4 *)(param_1 + 0x218);
  if (*(char *)(param_1 + 0x201) == '\0') {
    bStack_1a4 = (byte)(*(uint *)(param_1 + 0x68) >> 1) & 1;
  }
  else {
    bStack_1a4 = 1;
  }
  fStack_19c = *(float *)(param_1 + 0xc);
  uStack_1a0 = *(undefined4 *)(param_1 + 0x204);
  local_1b8 = CONCAT44(local_1b8._4_4_,*(undefined4 *)(param_1 + 0x1f0));
  fStack_198 = *(float *)(param_1 + 0x10);
  uStack_1b0 = CONCAT44(*(undefined4 *)(param_1 + 0x134),(float)uStack_1b0);
  if (fStack_19c * fStack_19c + fStack_198 * fStack_198 < DAT_1808ac294) {
    return;
  }
  fVar31 = *(float *)(param_1 + 0x14);
  fStack_18c = fVar34;
  if (((0.0 < fVar31) && (param_4 != '\0')) &&
     (fVar34 = *(float *)(param_1 + 0x2e8) * DAT_1808ac00c, fVar31 < fVar34)) {
    fVar31 = fVar31 / fVar34;
    fVar34 = (fVar31 + DAT_1808accc8) - DAT_1808accc8;
    if (fVar34 < fVar31) {
      fVar34 = fVar34 + DAT_1808ac00c;
    }
    FUN_18045b7d0(&local_1b8,fVar34 * DAT_1808ac00c,param_1);
    fVar23 = fStack_18c;
    fVar26 = fStack_198;
    fVar31 = fStack_19c;
    fVar25 = (float)local_1b8 * fStack_190;
    local_1b8 = CONCAT44(fVar25,(float)local_1b8);
    fVar32 = fVar25 * (float)uStack_1b0 * fStack_194;
    if ((float)uStack_1b0 <= fStack_18c) {
      fStack_184 = (float)uStack_1b0;
    }
    else {
      fStack_184 = fStack_18c;
    }
    fVar28 = fStack_198 * fStack_198 + fStack_19c * fStack_19c;
    fStack_188 = fVar32;
    if (fVar28 < 0.0) {
      fVar28 = (float)FUN_18051af10();
    }
    else {
      fVar28 = SQRT(fVar28);
    }
    uVar37 = DAT_1808acda0;
    if (0.0 < fVar28 - fVar39) {
      fVar32 = (fVar28 - fVar39) / fVar32;
      uVar15 = FUN_180516b00();
      auVar17._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
      auVar17._8_4_ = (undefined4)extraout_XMM0_Qb;
      auVar17._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      fVar33 = (float)uVar15 * DAT_1808aca98;
      auVar17._0_4_ = fVar33;
      auVar18._4_12_ = auVar17._4_12_;
      auVar18._0_4_ = fVar33 * DAT_1808abfd0 + DAT_1808ac1f4;
      fVar38 = (float)FUN_18053f0d0(auVar18._0_8_);
      fVar28 = DAT_1808ac34c;
      *(float *)(param_2 + 0x74) = fVar33 - fVar38 * DAT_1808acbd0;
      if (fVar32 <= fVar28) {
        uVar36 = (uint)fVar32 ^ DAT_1808adec0;
      }
      else {
        uVar36 = uVar37;
      }
      *(uint *)(param_2 + 0x2c) = uVar36;
      *(undefined4 *)(param_2 + 0x30) = 0;
      if (cVar1 != '\0') {
        *(undefined4 *)(param_2 + 0x2c) = 0xbf800000;
      }
      pfVar11 = (float *)FUN_18045b910(local_d8,&local_1b8,param_2);
      fVar32 = pfVar11[2];
      if (fVar32 <= fVar23) {
        fVar23 = fVar32;
      }
      fVar23 = fVar23 - (pfVar11[1] * fVar26 + *pfVar11 * fVar31);
      if (0.0 < fVar23) {
        fVar32 = fVar25 * fVar32 * fStack_194;
        if (fVar32 <= fVar23) {
          fVar23 = fVar32;
        }
        fStack_19c = fVar31 + *pfVar11 * fVar23;
        fStack_198 = fVar26 + pfVar11[1] * fVar23;
      }
    }
    fVar31 = local_140;
    uVar8 = local_160;
    uStack_13c = *(undefined4 *)(param_2 + 0x2c);
    uStack_138 = *(undefined4 *)(param_2 + 0x30);
    uStack_134 = *(undefined4 *)(param_2 + 0x34);
    plVar5 = *(longlong **)(param_2 + 0x48);
    local_140 = (float)((uint)local_140 & 0xffffff00);
    local_160 = local_160 & 0xffffff00;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uVar36 = local_150 >> 8;
    local_150 = local_150 & 0xffffff00;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_12f = 0;
    local_130 = 1;
    uStack_100 = 0;
    uStack_168 = 0;
    local_170 = 0;
    local_108._1_7_ = (uint7)(uint3)uVar36;
    local_108 = CONCAT71(local_108._1_7_,1);
    local_118 = CONCAT44(*(undefined4 *)(param_2 + 0x70),uVar8) & 0xffffffffffffff00;
    lStack_110 = *(longlong *)(param_2 + 0x74);
    local_e8._2_6_ = (undefined6)(CONCAT53(uStack_12d,1) >> 0x10);
    local_e8 = CONCAT62(local_e8._2_6_,0x101);
    local_f8._0_8_ = CONCAT44(uStack_13c,fVar31) & 0xffffffffffffff00;
    local_f8._8_4_ = uStack_138;
    fStack_ec = (float)uStack_134;
    auVar7._4_8_ = uStack_120;
    auVar7._0_4_ = fStack_16c;
    auVar7._12_4_ = 0;
    _local_128 = auVar7 << 0x20;
    uStack_120 = 0;
    if (plVar5 == *(longlong **)(param_2 + 0x50)) {
      FUN_18008c530(param_2 + 0x40,plVar5,local_128);
    }
    else {
      *plVar5 = (ulonglong)(uint)fStack_16c << 0x20;
      plVar5[1] = 0;
      plVar5[2] = local_118;
      plVar5[3] = lStack_110;
      plVar5[4] = local_108;
      plVar5[5] = 0;
      *(float *)(plVar5 + 6) = local_140;
      *(uint *)((longlong)plVar5 + 0x34) = uStack_13c;
      *(uint *)(plVar5 + 7) = uStack_138;
      *(undefined4 *)((longlong)plVar5 + 0x3c) = uStack_134;
      plVar5[8] = local_e8;
      *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + 0x48;
    }
    fVar31 = DAT_1808ac34c;
    local_1b8 = CONCAT44(local_1b8._4_4_,0x3f800000);
    FUN_18045b7d0(&local_1b8,(DAT_1808ac34c - fVar34) * fVar35,param_1);
    fVar35 = fStack_198 * fStack_198 + fStack_19c * fStack_19c;
    if (fVar35 < 0.0) {
      fVar35 = (float)FUN_18051af10();
    }
    else {
      fVar35 = SQRT(fVar35);
    }
    if (0.0 < fVar35 - fVar39) {
      fVar26 = (fVar35 - fVar39) / ((float)local_1b8 * fStack_190 * (float)uStack_1b0 * fStack_194);
      uVar15 = FUN_180516b00();
      auVar19._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
      auVar19._8_4_ = (undefined4)extraout_XMM0_Qb_00;
      auVar19._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      fVar35 = (float)uVar15 * DAT_1808aca98;
      auVar19._0_4_ = fVar35;
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar35 * DAT_1808abfd0 + DAT_1808ac1f4;
      fVar39 = (float)FUN_18053f0d0(auVar20._0_8_);
      *(float *)(param_2 + 0x74) = fVar35 - fVar39 * DAT_1808acbd0;
      if (fVar26 <= fVar31) {
        uVar37 = (uint)fVar26 ^ DAT_1808adec0;
      }
      *(uint *)(param_2 + 0x2c) = uVar37;
      *(undefined4 *)(param_2 + 0x30) = 0;
      if (cVar1 != '\0') {
        *(undefined4 *)(param_2 + 0x2c) = 0xbf800000;
      }
    }
    fVar35 = local_140;
    uVar36 = local_160;
    fVar39 = *(float *)(param_2 + 0x2c);
    local_f8._8_4_ = *(float *)(param_2 + 0x30);
    fStack_ec = *(float *)(param_2 + 0x34);
    pfVar11 = *(float **)(param_2 + 0x48);
    local_140 = (float)((uint)local_140 & 0xffffff00);
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    local_160 = local_160 & 0xffffff00;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uVar37 = local_150 >> 8;
    local_150 = local_150 & 0xffffff00;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_168 = 0;
    uStack_12f = 0;
    uStack_100 = 0;
    local_130 = 1;
    local_118 = CONCAT44(*(undefined4 *)(param_2 + 0x70),uVar36) & 0xffffffffffffff00;
    lStack_110 = *(undefined8 *)(param_2 + 0x74);
    local_f8._0_8_ = CONCAT44(fVar39,fVar35) & 0xffffffffffffff00;
    local_128._4_4_ = fStack_16c;
    local_128._0_4_ = fVar34;
    uStack_120 = 0;
    local_108._1_7_ = (uint7)(uint3)uVar37;
    local_108 = CONCAT71(local_108._1_7_,1);
    local_e8._2_6_ = (undefined6)(CONCAT53(uStack_12d,1) >> 0x10);
    local_e8 = CONCAT62(local_e8._2_6_,0x101);
    if (pfVar11 == *(float **)(param_2 + 0x50)) {
      FUN_18008c530(param_2 + 0x40,pfVar11,local_128);
      return;
    }
    *pfVar11 = fVar34;
    pfVar11[1] = fStack_16c;
    pfVar11[2] = 0.0;
    pfVar11[3] = 0.0;
    *(ulonglong *)(pfVar11 + 4) = local_118;
    *(longlong *)(pfVar11 + 6) = lStack_110;
    *(ulonglong *)(pfVar11 + 8) = local_108;
    pfVar11[10] = 0.0;
    pfVar11[0xb] = 0.0;
    pfVar11[0xc] = local_140;
    pfVar11[0xd] = fVar39;
    pfVar11[0xe] = (float)local_f8._8_4_;
    pfVar11[0xf] = fStack_ec;
    *(longlong *)(pfVar11 + 0x10) = local_e8;
    *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + 0x48;
    return;
  }
  FUN_18045b7d0(&local_1b8,DAT_1808ac00c,param_1);
  fVar35 = fStack_198 * fStack_198 + fStack_19c * fStack_19c;
  if (fVar35 < 0.0) {
    fVar35 = (float)FUN_18051af10();
  }
  else {
    fVar35 = SQRT(fVar35);
  }
  fVar35 = fVar35 - fVar39;
  if ((fVar35 <= 0.0) && (!NAN(fVar35))) {
    return;
  }
  fVar35 = fVar35 / ((float)local_1b8 * fStack_190 * (float)uStack_1b0 * fStack_194);
  uVar15 = FUN_180516b00();
  auVar21._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
  auVar21._8_4_ = (undefined4)extraout_XMM0_Qb_01;
  auVar21._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  fVar31 = (float)uVar15 * DAT_1808aca98;
  auVar21._0_4_ = fVar31;
  auVar22._4_12_ = auVar21._4_12_;
  auVar22._0_4_ = fVar31 * DAT_1808abfd0 + DAT_1808ac1f4;
  fVar34 = (float)FUN_18053f0d0(auVar22._0_8_);
  fVar39 = DAT_1808ac34c;
  *(float *)(param_2 + 0x74) = fVar31 - fVar34 * DAT_1808acbd0;
  if (fVar35 <= fVar39) {
    uVar37 = (uint)fVar35 ^ DAT_1808adec0;
  }
  else {
    uVar37 = DAT_1808acda0;
  }
  *(uint *)(param_2 + 0x2c) = uVar37;
  *(undefined4 *)(param_2 + 0x30) = 0;
  if (cVar1 == '\0') {
    return;
  }
LAB_18045cb89:
  *(undefined4 *)(param_2 + 0x2c) = 0xbf800000;
  return;
}



/* ===== 18045cc00 FUN_18045cc00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18045cc00(undefined8 *param_1,longlong param_2,longlong param_3,int param_4,
                  longlong param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_168 [44];
  undefined4 local_13c;
  ulonglong local_138;
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  FUN_180449330();
  fVar7 = DAT_1808acb28;
  fVar6 = DAT_1808acab0;
  fVar5 = DAT_1808aca98;
  fVar4 = DAT_1808ac16c;
  fVar3 = DAT_1808ac00c;
  if ((*(int *)(param_3 + 0xf10) != 0) &&
     (iVar9 = *(int *)((longlong)param_1 + 0x15c), iVar9 < param_4)) {
    do {
      fVar13 = *(float *)((longlong)param_1 + 0xc);
      fVar14 = *(float *)(param_1 + 2);
      if ((fVar6 < fVar14 * fVar14 + fVar13 * fVar13) || ((*(uint *)(param_1 + 0xd) & 1) == 0)) {
        FUN_180435ca0(local_168,param_2);
        if (*(char *)(param_2 + 0x90) == '\0') {
          uVar11 = 1;
          if (*(int *)(param_2 + 0x8c) + *(int *)(param_2 + 0x80) <= iVar9) {
            FUN_18045bbe0(param_1,local_168,0,0);
          }
        }
        else {
          fVar13 = *(float *)((longlong)param_1 + 0x134);
          fVar14 = fVar13;
          if (fVar13 <= DAT_1808acb90) {
            fVar14 = DAT_1808acb90;
          }
          fVar15 = fVar14 * *(float *)((longlong)param_1 + 0x324) * *(float *)(param_1 + 0x3e);
          fVar14 = *(float *)((longlong)param_1 + 0xc);
          fVar1 = *(float *)(param_1 + 2);
          fVar12 = (float)FUN_180516b00();
          if (fVar13 <= fVar15) {
            fVar15 = fVar13;
          }
          fVar13 = fVar14 * fVar14 + fVar1 * fVar1;
          if (fVar13 < 0.0) {
            fVar13 = (float)FUN_18051af10();
          }
          else {
            fVar13 = SQRT(fVar13);
          }
          if (fVar13 <= fVar15) {
            local_138 = 0;
            local_13c = 0;
            uVar11 = 0;
          }
          else {
            local_f8 = 0;
            local_f4 = fVar12 * fVar5;
            local_f0 = 0;
            local_13c = 0xbf800000;
            local_138 = local_138 & 0xffffffff00000000;
            uVar11 = 1;
          }
        }
        fVar13 = *(float *)((longlong)param_1 + 0x134);
        FUN_18045ad20(param_1,local_168);
        fVar13 = fVar13 * fVar4;
        if (*(float *)(param_1 + 2) * *(float *)(param_1 + 2) +
            *(float *)((longlong)param_1 + 0xc) * *(float *)((longlong)param_1 + 0xc) <
            fVar13 * fVar13 + fVar7) {
          uVar11 = 0;
        }
        uVar10 = uVar11;
        if ((*(char *)(param_2 + 0x91) != '\0') && (uVar10 = 0, (*(byte *)(param_1 + 0xd) & 1) == 0)
           ) {
          uVar10 = uVar11;
        }
        FUN_180011610(local_110);
        FUN_180200b70(local_128);
      }
      else {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        iVar2 = *(int *)(param_1 + 0x24);
        *(int *)((longlong)param_1 + 0x15c) = iVar2;
        *(float *)((longlong)param_1 + 0x164) = (float)iVar2 * fVar3;
        *(float *)(param_1 + 0xeb) = fVar13;
        *(float *)((longlong)param_1 + 0x75c) = fVar14;
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)((longlong)param_1 + 0x14);
        *(uint *)((longlong)param_1 + 0x764) = *(uint *)(param_1 + 0xd);
        *(undefined1 *)(param_1 + 0xed) = *(undefined1 *)(param_1 + 0xe);
        *(undefined1 *)((longlong)param_1 + 0x769) = *(undefined1 *)((longlong)param_1 + 0x72);
        *(undefined1 *)((longlong)param_1 + 0x76a) = *(undefined1 *)((longlong)param_1 + 0xaa);
        *(int *)((longlong)param_1 + 0x76c) = iVar2;
        *(float *)(param_1 + 0xee) = (float)iVar2 * fVar3;
        *(undefined4 *)((longlong)param_1 + 0x774) = *(undefined4 *)(param_1 + 0x2d);
        *(undefined4 *)(param_1 + 0xef) = *(undefined4 *)((longlong)param_1 + 0x2d4);
        FUN_18047d770(param_1 + 0xeb);
        uVar10 = 0;
      }
      if ((param_5 != 0) && (*(int *)((longlong)param_1 + 0x15c) == *(int *)(param_2 + 0x88))) {
        FUN_180466580(param_5,param_1);
      }
      if (*(int *)((longlong)param_1 + 0x15c) == *(int *)(param_2 + 0x84)) {
        *(undefined8 *)(param_3 + 0x24) = *param_1;
        *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_1 + 1);
      }
      local_188 = *param_1;
      local_180 = *(undefined4 *)(param_1 + 1);
      local_17c = *(undefined4 *)((longlong)param_1 + 0x144);
      local_178 = *(undefined4 *)((longlong)param_1 + 0x15c);
      local_174 = *(undefined4 *)(param_1 + 0x2d);
      lVar8 = FUN_18046abb0(param_3,&local_188);
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0xd) = uVar10;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != param_4);
  }
  return;
}



/* ===== 18045d020 FUN_18045d020 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18045d020(char *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                  float param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [32];
  float local_128;
  int local_118 [16];
  undefined1 local_d8 [24];
  undefined1 local_c0 [40];
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_148;
  FUN_180449330();
  fVar4 = DAT_1808acda0;
  fVar3 = DAT_1808ac34c;
  fVar2 = DAT_1808ac00c;
  if (param_5 < 1) {
    *(undefined1 *)(param_2 + 0x28b) = 0;
    return;
  }
  bVar8 = 0;
  iVar7 = 0;
  do {
    FUN_180435ca0(local_118,param_3);
    local_118[0] = local_118[0] + iVar7;
    iVar6 = *(int *)(param_2 + 0x120) + 1;
    *(int *)(param_2 + 0x15c) = iVar6;
    *(float *)(param_2 + 0x164) = (float)iVar6 * fVar2;
    if ((((*param_1 != '\0') && (*(longlong *)(param_2 + 0x7b0) != 0)) &&
        (iVar6 = FUN_180011200((ulonglong)DAT_180c87414 + *(longlong *)(param_2 + 0x7b0)), 0 < iVar6
        )) && ((*(int *)(param_2 + 0x790) != 1 && (*(char *)(param_2 + 0xaa) == '\0')))) {
      iVar6 = *(int *)(param_2 + 0x15c);
      fVar9 = *(float *)(param_2 + 0x168);
      if ((fVar9 < 0.0) || (fVar3 <= fVar9)) {
        local_128 = 0.0;
        fVar9 = (float)FUN_180512fd0();
        fVar10 = local_128;
        if (fVar9 < 0.0) {
          fVar9 = fVar9 + fVar3;
          if (fVar9 < fVar3) {
            fVar10 = local_128 + fVar4;
          }
          else {
            fVar9 = 0.0;
          }
        }
        iVar6 = iVar6 + (int)fVar10;
      }
      if (((*(int *)(param_2 + 0x35c) < iVar6) ||
          ((iVar6 == *(int *)(param_2 + 0x35c) && (*(float *)(param_2 + 0x360) <= fVar9)))) &&
         (*(code **)(param_1 + 0x10) != (code *)0x0)) {
        (**(code **)(param_1 + 0x10))(local_118);
      }
    }
    if ((param_4 <= iVar7) && (param_1[1] != '\0')) {
      cVar5 = param_1[2];
      if ((param_1[3] != '\0') &&
         (((*(byte *)(param_2 + 0x68) & 1) != 0 &&
          (0x10 < *(int *)(param_2 + 0x15c) - *(int *)(param_2 + 0x284))))) {
        cVar5 = '\0';
      }
      FUN_18045bbe0(param_2,local_118,cVar5,param_1[5] == '\0');
    }
    if ((*(short *)(param_2 + 0x7b8) == 0x40) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
      (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 8),param_2,local_118);
    }
    if ((((*(longlong *)(param_1 + 0x20) == 0) ||
         (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 == 0)) ||
        (cVar5 = FUN_18045aa90(*(longlong *)(param_1 + 0x20),local_118), cVar5 == '\0')) ||
       (((*(uint *)(lVar1 + 0x158) & ~*(uint *)(param_2 + 0x158)) != 0 ||
        (*(int *)(lVar1 + 0x120) != *(int *)(param_2 + 0x120) + 1)))) {
      FUN_18045ad20(param_2,local_118);
    }
    else {
      FUN_180466580(param_2,lVar1);
    }
    bVar8 = bVar8 | *(byte *)(param_2 + 0x28b);
    if ((0.0 < param_6) &&
       ((param_1[2] == '\0' ||
        ((((*(int *)(param_2 + 0x284) == -1 || ((*(byte *)(param_2 + 0x68) & 1) == 0)) ||
          (0xf < *(int *)(param_2 + 0x15c) - *(int *)(param_2 + 0x284))) &&
         (((param_1[4] == '\0' || ((*(byte *)(param_2 + 0x68) & 1) != 0)) ||
          (0.0 < *(float *)(param_2 + 0x14) || *(float *)(param_2 + 0x14) == 0.0)))))))) {
      if ((*(short *)(param_2 + 0x7b8) == 0x40) &&
         (*(float *)(param_2 + 0x350) <= *(float *)(param_2 + 0x164) &&
          *(float *)(param_2 + 0x164) != *(float *)(param_2 + 0x350))) {
        iVar6 = *(int *)(param_2 + 0x15c);
        fVar9 = *(float *)(param_2 + 0x168);
        if ((fVar9 < 0.0) || (fVar3 <= fVar9)) {
          local_128 = 0.0;
          fVar9 = (float)FUN_180512fd0();
          fVar10 = local_128;
          if (fVar9 < 0.0) {
            fVar9 = fVar9 + fVar3;
            if (fVar9 < fVar3) {
              fVar10 = local_128 + fVar4;
            }
            else {
              fVar9 = 0.0;
            }
          }
          iVar6 = iVar6 + (int)fVar10;
        }
        if ((((iVar6 < *(int *)(param_2 + 0x354)) ||
             ((iVar6 == *(int *)(param_2 + 0x354) && (fVar9 < *(float *)(param_2 + 0x358))))) ||
            (iVar6 < *(int *)(param_2 + 0x364))) ||
           ((iVar6 == *(int *)(param_2 + 0x364) && (fVar9 < *(float *)(param_2 + 0x368)))))
        goto LAB_18045d368;
      }
      if (*(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc) +
          *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10) <= param_6) {
LAB_18045d38b:
        FUN_180011610(local_c0);
        FUN_180200b70(local_d8);
        *(byte *)(param_2 + 0x28b) = bVar8;
        return;
      }
    }
LAB_18045d368:
    iVar7 = iVar7 + 1;
    if (param_5 <= iVar7) goto LAB_18045d38b;
    FUN_180011610(local_c0);
    FUN_180200b70(local_d8);
  } while( true );
}



/* ===== 18045d3f0 FUN_18045d3f0 ===== */

undefined8 *
FUN_18045d3f0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    uVar6 = FUN_180448980(param_1,param_3,param_4);
    *param_2 = uVar6;
    return param_2;
  }
  if (param_3 == puVar1) {
    uVar6 = param_4[1];
    *puVar1 = *param_4;
    puVar1[1] = uVar6;
    uVar6 = param_4[3];
    puVar1[2] = param_4[2];
    puVar1[3] = uVar6;
    puVar1[4] = param_4[4];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    *param_2 = param_3;
    return param_2;
  }
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  *puVar1 = puVar1[-5];
  puVar1[1] = puVar1[-4];
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar1 + -3);
  *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)puVar1 + -0x14);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar1 + -2);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)((longlong)puVar1 + -0xc);
  puVar1[4] = puVar1[-1];
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
  FUN_180540530(param_3 + 5,param_3);
  *param_3 = uVar2;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  param_3[3] = uVar5;
  param_3[4] = uVar6;
  *param_2 = param_3;
  return param_2;
}



/* ===== 18045d4f0 FUN_18045d4f0 ===== */

void FUN_18045d4f0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
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
    puVar9[8] = param_2[8];
    param_1[1] = param_1[1] + 0x48;
    return;
  }
  lVar8 = (longlong)puVar9 - *param_1;
  lVar8 = lVar8 / 0x12 + (lVar8 >> 0x3f);
  uVar12 = 0x38e38e38e38e38e;
  lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  if (lVar8 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar10 = (param_1[2] - *param_1 >> 3) * -0x71c71c71c71c71c7;
  if (uVar10 <= 0x38e38e38e38e38e - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (0x38e38e38e38e38e < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar7 = FUN_18000fb70(uVar12 * 0x48);
  uVar6 = param_2[1];
  puVar2 = (undefined8 *)(lVar7 + lVar8 * 0x48);
  *puVar2 = *param_2;
  puVar2[1] = uVar6;
  lVar8 = lVar7 + lVar8 * 0x48;
  uVar6 = param_2[3];
  *(undefined8 *)(lVar8 + 0x10) = param_2[2];
  *(undefined8 *)(lVar8 + 0x18) = uVar6;
  uVar6 = param_2[5];
  *(undefined8 *)(lVar8 + 0x20) = param_2[4];
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(lVar8 + 0x34) = uVar3;
  *(undefined4 *)(lVar8 + 0x38) = uVar4;
  *(undefined4 *)(lVar8 + 0x3c) = uVar5;
  *(undefined8 *)(lVar8 + 0x40) = param_2[8];
  puVar2 = (undefined8 *)*param_1;
  if (puVar9 == (undefined8 *)param_1[1]) {
    lVar11 = param_1[1] - (longlong)puVar2;
    lVar8 = lVar7;
    puVar9 = puVar2;
  }
  else {
    FUN_180540530(lVar7,puVar2,(longlong)puVar9 - (longlong)puVar2);
    lVar8 = lVar8 + 0x48;
    lVar11 = param_1[1] - (longlong)puVar9;
  }
  FUN_180540530(lVar8,puVar9,lVar11);
  FUN_18008d2a0(param_1,lVar7,uVar1,uVar12);
  return;
}



/* ===== 18045d690 FUN_18045d690 ===== */

undefined4 * FUN_18045d690(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar4 = *param_1;
  uVar15 = 0xaaaaaaaaaaaaaaa;
  lVar9 = (param_1[1] - lVar4 >> 3) * -0x5555555555555555;
  if (lVar9 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar9 + 1;
  uVar11 = (param_1[2] - lVar4 >> 3) * -0x5555555555555555;
  if (uVar11 <= 0xaaaaaaaaaaaaaaa - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar15 = uVar1;
    if (uVar1 <= uVar11) {
      uVar15 = uVar11;
    }
    if (0xaaaaaaaaaaaaaaa < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined4 *)FUN_18000fb70(uVar15 * 0x18);
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar3 = *(undefined8 *)(param_3 + 4);
  puVar2 = puVar10 + ((param_2 - lVar4) / 0x18) * 6;
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined8 *)(puVar2 + 4) = uVar3;
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar9 = param_1[1] - lVar4;
    puVar12 = puVar10;
    param_2 = lVar4;
  }
  else {
    FUN_180540530(puVar10,lVar4,param_2 - lVar4);
    puVar12 = puVar2 + 6;
    lVar9 = param_1[1] - param_2;
  }
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  FUN_180540530(puVar12,param_2,lVar9);
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_18045d7ff;
  lVar9 = lVar4;
  if ((ulonglong)((param_1[2] - lVar4 >> 3) * 8) < 0x1000) {
LAB_18045d7f4:
    puVar14 = puVar13;
  }
  else {
    lVar9 = *(longlong *)(lVar4 + -8);
    if (0x1f < (lVar4 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar13 = auStack_40;
      goto LAB_18045d7f4;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x18045d7ff;
  thunk_FUN_1803d64e0(lVar9);
LAB_18045d7ff:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1 * 6);
  param_1[2] = (longlong)(puVar10 + uVar15 * 6);
  return puVar2;
}



/* ===== 18045d850 FUN_18045d850 ===== */

void FUN_18045d850(longlong param_1)

{
  FUN_1800244c0(param_1 + 0xa78);
  FUN_1800244c0(param_1 + 0x2b8);
  return;
}



/* ===== 18045d880 FUN_18045d880 ===== */

ulonglong FUN_18045d880(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  char *_Str1;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong local_res8;
  
  lVar6 = *param_1;
  if (lVar6 != param_2) {
    *param_1 = param_2;
  }
  lVar8 = 0;
  if (((param_2 != 0) && (DAT_181111d54 != 0)) &&
     (iVar4 = FUN_180011200(param_2 + (ulonglong)DAT_181111d54), iVar4 != -1)) {
    plVar5 = (longlong *)FUN_1803a0940(&local_res8,iVar4);
    lVar1 = *plVar5;
    if (lVar1 != 0) {
      local_res8 = lVar1;
      _Str1 = (char *)FUN_1803a0710(&local_res8);
      if ((_Str1 == (char *)0x0) || (iVar4 = strcmp(_Str1,"C_CSPlayerPawn"), iVar4 != 0)) {
        if ((DAT_181111d58 != 0) &&
           (iVar4 = FUN_180011200(param_2 + (ulonglong)DAT_181111d58), iVar4 != -1)) {
          plVar5 = (longlong *)FUN_1803a0940(&local_res8,iVar4);
          lVar8 = *plVar5;
        }
      }
      else {
        lVar8 = lVar1;
      }
    }
  }
  if (param_1[1] == lVar8) {
    if (lVar6 != param_2) goto LAB_18045d93e;
    bVar2 = false;
  }
  else {
    param_1[1] = lVar8;
LAB_18045d93e:
    bVar2 = true;
  }
  if (((lVar8 == 0) || (0x7ffffffefffe < lVar8 - 0x10000U)) ||
     (lVar6 = FUN_18000f3a0(lVar8 + 0x10), 0x7ffffffefffe < lVar6 - 0x10000U)) {
    iVar4 = -1;
  }
  else {
    iVar4 = FUN_180011200(lVar6 + 0x10);
  }
  if (*(int *)((longlong)param_1 + 0x14) == iVar4) {
    if ((((!bVar2) && (lVar8 != 0)) &&
        ((param_2 != 0 &&
         ((DAT_181111d5c == 0 ||
          (iVar4 = FUN_180011200(param_2 + (ulonglong)DAT_181111d5c), iVar4 == 0)))))) &&
       ((DAT_181111d60 != 0 && (lVar6 = FUN_18000f3a0(lVar8 + (ulonglong)DAT_181111d60), lVar6 != 0)
        ))) {
      if (((((param_3 != 0) && (lVar6 = param_1[1], lVar6 - 0x10000U < 0x7ffffffeffff)) &&
           (DAT_181111d64 != 0)) &&
          ((cVar3 = FUN_180011220(lVar6 + (ulonglong)DAT_181111d64), cVar3 == '\0' &&
           (lVar8 = FUN_18000f3a0(lVar6 + 0x10), lVar8 - 0x10000U < 0x7ffffffeffff)))) &&
         ((cVar3 = FUN_180011220(lVar8 + 0x30), -1 < cVar3 &&
          (cVar3 = FUN_180469a20(lVar6,param_3), cVar3 == '\0')))) {
        iVar4 = (int)param_1[2];
        if ((((-1 < iVar4) && (iVar4 < (int)(DAT_181112370 - DAT_181112368 >> 4) * -0x194be3ab)) &&
            (lVar6 = (longlong)iVar4 * 0xfd0, *(int *)(lVar6 + 0x10 + DAT_181112368) == iVar4)) &&
           (((*(int *)(lVar6 + 0x14 + DAT_181112368) == *(int *)((longlong)param_1 + 0x14) &&
             (*(longlong *)(lVar6 + DAT_181112368) == *param_1)) &&
            (*(longlong *)(lVar6 + 8 + DAT_181112368) == param_1[1])))) {
          *(undefined4 *)(param_1 + 3) = 2;
          return CONCAT71((int7)((ulonglong)param_1[1] >> 8),1);
        }
      }
      puVar7 = (undefined4 *)param_1[6];
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined4 *)(param_1 + 7) = 0x7f7fffff;
      *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
      if (puVar7 != (undefined4 *)0x0) {
        if (*(longlong *)(puVar7 + 2) != 0) {
          *(undefined8 *)(*(longlong *)(puVar7 + 2) + 0x30) = 0;
        }
        *(undefined8 *)(puVar7 + 2) = 0;
        *puVar7 = 0;
        puVar7[1] = 0xffffffff;
        puVar7[0x3fb] = 0;
      }
      *(undefined4 *)(param_1 + 3) = 1;
      goto LAB_18045d9d5;
    }
  }
  else {
    *(int *)((longlong)param_1 + 0x14) = iVar4;
  }
  puVar7 = (undefined4 *)param_1[6];
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  if (puVar7 != (undefined4 *)0x0) {
    if (*(longlong *)(puVar7 + 2) != 0) {
      *(undefined8 *)(*(longlong *)(puVar7 + 2) + 0x30) = 0;
    }
    puVar7[0x3fb] = 0;
    puVar7[1] = 0xffffffff;
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
LAB_18045d9d5:
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



/* ===== 18045db60 FUN_18045db60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18045db60(longlong *param_1,float param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  short sVar15;
  longlong lVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_408 [32];
  uint local_3e8;
  float local_3e0;
  float local_3dc;
  longlong *local_3d8;
  ulonglong local_3d0;
  float local_3c8;
  float local_3c0;
  float *local_3b8;
  float *local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined2 local_38e;
  undefined1 local_388 [16];
  float local_378;
  undefined8 uStack_374;
  float fStack_36c;
  undefined1 local_368 [16];
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 local_348 [16];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 local_328 [16];
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 local_308 [16];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined1 local_2e8 [16];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [16];
  float local_2b8 [3];
  undefined8 uStack_2ac;
  float afStack_2a4 [111];
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_408;
  lVar10 = (longlong)param_3;
  lVar27 = lVar10 * 0x1008;
  lVar11 = (&DAT_180c87458)[lVar10 * 0x201];
  if (lVar11 == 0) {
    return;
  }
  lVar21 = *(longlong *)(lVar11 + 0x20);
  if (lVar21 == 0) {
    return;
  }
  iVar22 = *(int *)(lVar21 + 0xf10);
  if (iVar22 == 0) {
    return;
  }
  if (iVar22 < 2) {
    local_3d0 = 0;
    local_3b8 = (float *)&DAT_00000038;
    local_3b0 = (float *)0x3c;
  }
  else {
    uVar8 = *(int *)(lVar21 + 0xf14) + 1U & 0x8000000f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
    }
    uVar8 = uVar8 + 0x10 & 0x8000000f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
    }
    lVar16 = (longlong)(int)uVar8 * 0xe8;
    local_3d0 = lVar21 + 0x90 + lVar16;
    local_3b8 = (float *)(lVar21 + 200 + lVar16);
    local_3b0 = (float *)(lVar21 + 0xcc + lVar16);
  }
  local_3a8 = *(longlong *)(lVar11 + 8);
  iVar23 = *(int *)(lVar11 + 0x10);
  local_3d8 = param_1;
  local_3c8 = (float)iVar23;
  local_3c0 = param_2;
  local_3a0 = lVar27;
  local_398 = lVar21;
  if ((*param_1 == 0) || (lVar11 = *(longlong *)(*param_1 + 0x150), lVar11 == 0)) {
    uVar8 = 0;
  }
  else if ((lVar11 - 0x10000U < 0x7ffffffeffff) &&
          (lVar11 = FUN_18000f3a0(lVar11 + 0x10), lVar11 - 0x10000U < 0x7ffffffeffff)) {
    uVar8 = FUN_180011200(lVar11 + 0x10);
    uVar8 = uVar8 & 0x7fff;
  }
  else {
    uVar8 = 0x7fff;
  }
  iVar26 = (int)param_1[4];
  (&DAT_180c88444)[lVar10 * 0x402] = iVar26;
  fVar29 = DAT_1808ac34c;
  lVar11 = 0;
  *(uint *)(&DAT_180c88440 + lVar27) = ((iVar23 < (int)uVar8) - 1) + iVar26;
  *(undefined4 *)(lVar21 + 0x68) = 0;
  *(undefined4 *)(lVar21 + 0x88) = 0;
  fVar32 = DAT_1808acab0;
  fVar34 = 0.0 - _DAT_180c8a80c;
  iVar23 = iVar26 - _DAT_180c8a808;
  if (fVar34 < 0.0) {
    fVar34 = fVar34 + fVar29;
    if (fVar34 < fVar29) {
      iVar23 = iVar23 + -1;
    }
    else {
      fVar34 = 0.0;
    }
  }
  local_3e0 = 0.0;
  local_3e8 = uVar8;
  local_3dc = fVar34;
  local_3dc = (float)FUN_180512fd0(DAT_180c8a7fc * DAT_1808acab0,&local_3e0);
  uVar6 = _DAT_1808ade90;
  fVar39 = DAT_1808acda0;
  fVar31 = DAT_1808ac1f4;
  fVar38 = DAT_1808ac00c;
  fVar28 = local_3e0;
  if (local_3dc < 0.0) {
    local_3dc = local_3dc + fVar29;
    if (local_3dc < fVar29) {
      fVar28 = local_3e0 + DAT_1808acda0;
    }
    else {
      local_3dc = 0.0;
    }
  }
  local_3dc = 0.0 - local_3dc;
  iVar25 = iVar26 - (int)fVar28;
  if (local_3dc < 0.0) {
    local_3dc = local_3dc + fVar29;
    if (local_3dc < fVar29) {
      iVar25 = iVar25 + -1;
    }
    else {
      local_3dc = 0.0;
    }
  }
  local_368 = ZEXT816(0);
  local_378 = 0.0;
  uStack_374._0_4_ = 0;
  uStack_374._4_4_ = 0;
  fStack_36c = 0.0;
  local_358 = 0;
  uStack_354 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  local_348 = local_368;
  local_338 = 0;
  uStack_334 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  local_328 = local_368;
  local_318 = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  local_308 = local_368;
  local_2f8 = 0;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  local_2e8 = local_368;
  local_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  local_2c8 = local_368;
  local_388 = local_368;
  uVar24 = 0;
  if (0 < iVar22) {
    do {
      if (0xf < uVar24) break;
      uVar9 = *(int *)(lVar21 + 0xf14) + uVar24 & 0x8000000f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
      }
      uVar9 = uVar9 + 0x10 & 0x8000000f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
      }
      lVar16 = (longlong)(int)uVar9 * 0xe8;
      fVar28 = DAT_180c8a800._4_4_ + *(float *)(lVar16 + 0x94 + lVar21);
      iVar18 = *(int *)(lVar16 + 0x90 + lVar21) + (int)DAT_180c8a800;
      if (fVar29 <= fVar28) {
        fVar28 = fVar28 - fVar29;
        iVar18 = iVar18 + 1;
      }
      fVar30 = fVar34 - fVar28;
      iVar19 = iVar23 - iVar18;
      if (fVar30 < 0.0) {
        fVar30 = fVar30 + fVar29;
        if (fVar30 < fVar29) {
          iVar19 = iVar19 + -1;
        }
        else {
          fVar30 = 0.0;
        }
      }
      if ((((uint)fVar28 & 0x7f800000) == 0x7f800000) ||
         (200 < (int)((float)((uint)(fVar30 * DAT_1808ac00c + (float)iVar19 * DAT_1808ac00c) &
                             _DAT_1808ade90) * DAT_1808acc3c))) {
LAB_18045dfc8:
        local_388[uVar24] = 0;
      }
      else {
        if (iVar18 == iVar25) {
          bVar4 = local_3dc <= fVar28;
        }
        else {
          bVar4 = iVar25 <= iVar18;
        }
        if (!bVar4) goto LAB_18045dfc8;
        if (iVar18 == iVar26) {
          bVar4 = fVar28 <= 0.0;
        }
        else {
          bVar4 = iVar18 < iVar26;
        }
        if (!bVar4) goto LAB_18045dfc8;
        pfVar20 = *(float **)(lVar16 + 0x128 + lVar21);
        pfVar17 = (float *)(lVar16 + 0xa8 + lVar21);
        fVar28 = *pfVar17;
        fVar30 = pfVar17[1];
        pfVar17 = (float *)(lVar21 + 0xa4 + lVar16);
        uVar12 = (ulonglong)uVar24;
        if (pfVar20 == *(float **)(lVar16 + 0x130 + lVar21)) {
          pfVar20 = pfVar17;
        }
        local_388[uVar12] = 1;
        uVar1 = *(undefined8 *)(pfVar20 + 1);
        *(float *)(local_388 + uVar12 * 0xc + 0x10) = *pfVar20 - *pfVar17;
        *(ulonglong *)(local_388 + uVar12 * 0xc + 0x14) =
             CONCAT44((float)((ulonglong)uVar1 >> 0x20) - fVar30,(float)uVar1 - fVar28);
      }
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < iVar22);
  }
  if (1 < iVar22) {
    fVar34 = 0.0;
    lVar16 = lVar11;
    uVar8 = 0;
    do {
      if (0xf < (int)uVar8) break;
      lVar13 = (longlong)(int)uVar8;
      uVar24 = uVar8;
      if (local_388[lVar13] != '\0') {
        while ((uVar24 = uVar24 + 1, (int)uVar24 < iVar22 && ((int)uVar24 < 0x10))) {
          lVar14 = (longlong)(int)uVar24;
          if (local_388[lVar14] != '\0') {
            fVar28 = (*(float *)(local_388 + lVar13 * 0xc + 0x14) -
                     *(float *)(local_388 + lVar14 * 0xc + 0x14)) *
                     (*(float *)(local_388 + lVar13 * 0xc + 0x14) -
                     *(float *)(local_388 + lVar14 * 0xc + 0x14)) +
                     (*(float *)(local_388 + lVar13 * 0xc + 0x10) -
                     *(float *)(local_388 + lVar14 * 0xc + 0x10)) *
                     (*(float *)(local_388 + lVar13 * 0xc + 0x10) -
                     *(float *)(local_388 + lVar14 * 0xc + 0x10)) +
                     (*(float *)(local_368 + lVar13 * 0xc + -8) -
                     *(float *)(local_368 + lVar14 * 0xc + -8)) *
                     (*(float *)(local_368 + lVar13 * 0xc + -8) -
                     *(float *)(local_368 + lVar14 * 0xc + -8));
            if (fVar34 < fVar28) {
              uVar9 = *(int *)(lVar21 + 0xf14) + uVar8 & 0x8000000f;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
              }
              uVar9 = uVar9 + 0x10 & 0x8000000f;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
              }
              lVar16 = (longlong)(int)uVar9 * 0xe8 + lVar21 + 0x90;
              uVar9 = *(int *)(lVar21 + 0xf14) + uVar24 & 0x8000000f;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
              }
              uVar9 = uVar9 + 0x10 & 0x8000000f;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
              }
              lVar11 = (longlong)(int)uVar9 * 0xe8 + lVar21 + 0x90;
              fVar34 = fVar28;
            }
          }
        }
      }
      iVar23 = uVar8 + 2;
      uVar8 = uVar8 + 1;
    } while (iVar23 < iVar22);
    if ((lVar16 != 0) && (lVar11 != 0)) {
      FUN_18046a660(lVar21,lVar16,lVar11,DAT_1808ac1f4);
    }
    uVar8 = local_3e8;
  }
  FUN_180463b50(&DAT_180c87470 + lVar27,local_3a8,0x11);
  *(undefined8 *)(&DAT_180c883f0 + lVar27) = 0;
  *(undefined8 *)(lVar27 + 0x180c883f8) = 0;
  *(undefined8 *)(&DAT_180c88400 + lVar27) = 0;
  *(undefined8 *)(lVar27 + 0x180c88408) = 0;
  *(undefined8 *)(&DAT_180c88410 + lVar27) = 0;
  *(undefined8 *)(lVar27 + 0x180c88418) = 0;
  *(undefined8 *)(&DAT_180c88420 + lVar27) = 0;
  *(undefined8 *)(lVar27 + 0x180c88428) = 0;
  *(undefined8 *)(&DAT_180c8842c + lVar27) = 0;
  *(undefined8 *)(lVar27 + 0x180c88434) = 0;
  *(undefined4 *)(&DAT_180c87d8c + lVar27) = 0xffffffff;
  lVar11 = *(longlong *)(&DAT_180c87c20 + lVar27);
  if (lVar11 == 0) {
    if ((&DAT_180c87458)[lVar10 * 0x201] != 0) {
      *(undefined8 *)((&DAT_180c87458)[lVar10 * 0x201] + 0x30) = 0;
    }
    (&DAT_180c87454)[lVar10 * 0x402] = 0xffffffff;
    (&DAT_180c87458)[lVar10 * 0x201] = 0;
    (&DAT_180c87450)[lVar10 * 0x402] = 0;
    (&DAT_180c8843c)[lVar10 * 0x402] = 0;
    return;
  }
  uVar24 = *(uint *)(lVar21 + 0xf14) & 0x8000000f;
  if ((int)uVar24 < 0) {
    uVar24 = (uVar24 - 1 | 0xfffffff0) + 1;
  }
  uVar24 = uVar24 + 0x10 & 0x8000000f;
  if ((int)uVar24 < 0) {
    uVar24 = (uVar24 - 1 | 0xfffffff0) + 1;
  }
  lVar16 = (longlong)(int)uVar24 * 0xe8;
  (&DAT_180c8843c)[lVar10 * 0x402] = *(undefined4 *)(lVar16 + 0x90 + lVar21);
  (&DAT_180c88453)[lVar27] = (int)uVar8 <= (int)local_3c8;
  uVar8 = DAT_181111d88;
  uVar12 = (ulonglong)DAT_181111d88;
  (&DAT_180c88454)[lVar27] = 1;
  if (uVar8 == 0) {
    sVar15 = *(short *)(&DAT_180c87c28 + lVar27);
LAB_18045e266:
    if (sVar15 == 0x1f) goto LAB_18045e270;
LAB_18045e328:
    (&DAT_180c88454)[lVar27] = 0;
  }
  else {
    iVar23 = FUN_180011200(lVar11 + uVar12);
    sVar15 = *(short *)(&DAT_180c87c28 + lVar27);
    if (5 < iVar23 - 1U) goto LAB_18045e266;
LAB_18045e270:
    if ((float)*(int *)(&DAT_180c88440 + lVar27) * fVar38 < *(float *)(&DAT_180c877c0 + lVar27))
    goto LAB_18045e328;
    if (sVar15 != 0x40) {
      fVar34 = *(float *)(&DAT_180c875d8 + lVar27);
      iVar23 = *(int *)(&DAT_180c875cc + lVar27);
      if ((fVar34 < 0.0) || (fVar29 <= fVar34)) {
        local_3e0 = 0.0;
        fVar34 = (float)FUN_180512fd0(sVar15,&local_3e0);
        fVar38 = local_3e0;
        if (fVar34 < 0.0) {
          fVar34 = fVar34 + fVar29;
          if (fVar34 < fVar29) {
            fVar38 = local_3e0 + fVar39;
          }
          else {
            fVar34 = 0.0;
          }
        }
        iVar23 = iVar23 + (int)fVar38;
      }
      if (iVar23 == *(int *)(&DAT_180c877c4 + lVar27)) {
        bVar4 = *(float *)(&DAT_180c877c8 + lVar27) <= fVar34;
      }
      else {
        bVar4 = *(int *)(&DAT_180c877c4 + lVar27) <= iVar23;
      }
      if ((!bVar4) || (*(int *)(&DAT_180c877e4 + lVar27) < 1)) goto LAB_18045e328;
    }
  }
  fVar38 = DAT_1808ac16c;
  bVar4 = true;
  fVar34 = *(float *)(&DAT_180c875a4 + lVar27);
  *(undefined2 *)(&DAT_180c88450 + lVar27) = 1;
  if (local_3d0 != 0) {
    fVar39 = *(float *)(lVar16 + 200 + lVar21);
    fVar30 = *local_3b0 * *local_3b0 + *local_3b8 * *local_3b8;
    fVar28 = *(float *)(lVar16 + 0xcc + lVar21);
    bVar5 = fVar28 * fVar28 + fVar39 * fVar39 + DAT_1808ac918 < fVar30;
    (&DAT_180c88450)[lVar27] = bVar5;
    if (bVar5) {
      if (fVar30 < fVar34 * fVar38 * fVar34 * fVar38) {
        (&DAT_180c88451)[lVar27] = 1;
      }
    }
    else {
      bVar4 = false;
    }
  }
  *(undefined8 *)(&DAT_180c8747c + lVar27) = *(undefined8 *)(lVar16 + 200 + lVar21);
  *(undefined4 *)(&DAT_180c87484 + lVar27) = *(undefined4 *)(lVar16 + 0xd0 + lVar21);
  *(undefined8 *)(&DAT_180c87470 + lVar27) = *(undefined8 *)(lVar16 + 0xa4 + lVar21);
  *(undefined4 *)(&DAT_180c87478 + lVar27) = *(undefined4 *)(lVar16 + 0xac + lVar21);
  fVar39 = *(float *)(lVar16 + 200 + lVar21);
  fVar28 = *(float *)(lVar16 + 0xcc + lVar21);
  fVar39 = fVar28 * fVar28 + fVar39 * fVar39;
  if (fVar39 <= DAT_1808ac864) {
    local_3c8 = 0.0;
    local_3d0 = local_3d0 & 0xffffffff00000000;
  }
  else {
    local_3c8 = (float)FUN_180516b00();
    local_3c8 = local_3c8 * DAT_1808aca9c;
    local_3d0 = CONCAT44(local_3d0._4_4_,fVar29);
  }
  plVar7 = local_3d8;
  fVar28 = 0.0;
  local_3e0 = 0.0;
  (&DAT_180c88452)[lVar27] = ~(&DAT_180c874d8)[lVar27] & 1;
  if ((!bVar4) && (fVar32 < fVar39)) {
    if (((&DAT_180c874d8)[lVar27] & 1) == 0) {
      if (*(int *)((longlong)local_3d8 + 0x2c) == 0) {
        fVar30 = *(float *)(lVar16 + 0xd0 + lVar21);
        if (fVar30 <= 0.0) goto LAB_18045e5a1;
        iVar23 = (int)((fVar30 / (*(float *)(&DAT_180c87758 + lVar27) *
                                 *(float *)(&DAT_180c874ec + lVar27))) * fVar32 + fVar31);
        if (iVar23 < 5) {
          iVar23 = 5;
        }
        fVar28 = (float)(iVar23 + -5);
      }
      else {
        fVar28 = 1.79366e-43;
      }
    }
    else {
      iVar23 = *(int *)((longlong)local_3d8 + 0x24) - (int)local_3d8[5];
      if (iVar23 < 0) {
        iVar23 = 0;
      }
      if (*local_3d8 != 0) {
        iVar26 = *(int *)(*local_3d8 + 0x15c);
      }
      iVar26 = iVar26 - (iVar23 + *(int *)(lVar16 + 0x90 + lVar21));
      fVar28 = (float)((int)local_3c0 + -2 + iVar26);
      if (iVar26 + -2 < 0) {
        fVar28 = local_3c0;
      }
      if (*(int *)((longlong)local_3d8 + 0x2c) != 0) {
        fVar28 = 1.79366e-43;
      }
      local_3e0 = fVar28;
      if (((DAT_181111d80 == 0) ||
          (lVar11 = FUN_18000f3a0((ulonglong)DAT_181111d80 + local_3a8),
          0x7ffffffefffe < lVar11 - 0x10000U)) || (DAT_181111d84 == 0)) goto LAB_18045e5a1;
      fVar32 = (float)FUN_18000f3d0((ulonglong)DAT_181111d84 + lVar11);
      if (DAT_1808ac294 < fVar32) {
        fVar28 = 0.0;
      }
    }
    local_3e0 = fVar28;
  }
LAB_18045e5a1:
  iVar23 = *(int *)((longlong)plVar7 + 0x24) + 4;
  if (iVar22 < iVar23) {
    iVar23 = iVar22;
  }
  FUN_180540170(local_2b8,0,0x1c8);
  FUN_18045f840();
  fVar32 = DAT_1808ac064;
  iVar22 = 0;
  local_3e8 = 0;
  if (0 < iVar23) {
    do {
      uVar8 = *(int *)(lVar21 + 0xf14) + iVar22 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      uVar8 = uVar8 + 0x10 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      lVar11 = (longlong)(int)uVar8 * 0xe8;
      fVar31 = *(float *)(lVar21 + 200 + lVar11);
      fVar28 = *(float *)(lVar21 + 0xcc + lVar11);
      fVar31 = fVar28 * fVar28 + fVar31 * fVar31;
      if (fVar31 < 0.0) {
        fVar31 = (float)FUN_18051af10();
      }
      else {
        fVar31 = SQRT(fVar31);
      }
      if ((fVar32 <= (float)((uint)(fVar31 / fVar34 - fVar38) & uVar6)) || (local_3e8 == -1)) {
        local_3e8 = -1;
      }
      else {
        local_3e8 = local_3e8 + 1;
      }
      uVar1 = *(undefined8 *)(lVar21 + 0xa4 + lVar11);
      lVar27 = *(longlong *)(lVar21 + 0x118 + lVar11);
      fVar38 = (float)uVar1;
      fVar31 = (float)((ulonglong)uVar1 >> 0x20);
      fVar28 = *(float *)(lVar21 + 0xec + lVar11) + *(float *)(lVar21 + 0xac + lVar11);
      for (lVar11 = *(longlong *)(lVar21 + 0x110 + lVar11); lVar11 != lVar27; lVar11 = lVar11 + 0x48
          ) {
        uVar12 = (ulonglong)*(byte *)(lVar11 + 0x38);
        if (*(byte *)(lVar11 + 0x38) < 0x13) {
          fVar30 = *(float *)(lVar11 + 0x10);
          fVar35 = *(float *)(lVar11 + 0x14);
          fVar33 = fVar29 / (float)iVar23;
          fVar36 = local_2b8[uVar12 * 6 + 1];
          fVar37 = local_2b8[uVar12 * 6 + 2];
          local_2b8[uVar12 * 6] =
               (*(float *)(lVar11 + 0xc) - fVar38) * fVar33 + local_2b8[uVar12 * 6];
          local_2b8[uVar12 * 6 + 1] = (fVar30 - fVar31) * fVar33 + fVar36;
          local_2b8[uVar12 * 6 + 2] = (fVar35 - fVar28) * fVar33 + fVar37;
          fVar30 = *(float *)(lVar11 + 0x20);
          uVar1 = *(undefined8 *)(lVar11 + 0x18);
          uVar2 = *(undefined8 *)(local_2b8 + uVar12 * 6 + 3);
          fVar35 = afStack_2a4[uVar12 * 6];
          local_2b8[uVar12 * 6 + 3] = (float)uVar2 + ((float)uVar1 - fVar38) * fVar33;
          afStack_2a4[uVar12 * 6 + -1] =
               (float)((ulonglong)uVar2 >> 0x20) +
               ((float)((ulonglong)uVar1 >> 0x20) - fVar31) * fVar33;
          afStack_2a4[uVar12 * 6] = (fVar30 - fVar28) * fVar33 + fVar35;
        }
      }
      iVar22 = iVar22 + 1;
      fVar38 = DAT_1808ac16c;
    } while (iVar22 < iVar23);
    iVar22 = 0;
    local_3d8 = (longlong *)((ulonglong)local_3d8 & 0xffffffff00000000);
    do {
      lVar11 = local_3a0;
      uVar8 = *(int *)(lVar21 + 0xf14) + iVar22 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      uVar8 = uVar8 + 0x10 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      lVar16 = (longlong)(int)uVar8 * 0xe8;
      lVar27 = *(longlong *)(lVar21 + 0x118 + lVar16);
      lVar10 = *(longlong *)(lVar21 + 0x110 + lVar16);
      fVar29 = *(float *)(lVar21 + 0xa4 + lVar16);
      fVar32 = *(float *)(lVar21 + 0xa8 + lVar16);
      fVar38 = *(float *)(lVar21 + 0xec + lVar16) + *(float *)(lVar21 + 0xac + lVar16);
      if (lVar10 != lVar27) {
        do {
          bVar3 = *(byte *)(lVar10 + 0x38);
          uVar12 = (ulonglong)bVar3;
          if (bVar3 < 0x13) {
            fVar30 = (*(float *)(lVar10 + 0x1c) - fVar32) - afStack_2a4[uVar12 * 6 + -1];
            fVar31 = (*(float *)(lVar10 + 0x20) - fVar38) - afStack_2a4[uVar12 * 6];
            fVar28 = (*(float *)(lVar10 + 0x18) - fVar29) - local_2b8[uVar12 * 6 + 3];
            fVar37 = (*(float *)(lVar10 + 0xc) - fVar29) - local_2b8[uVar12 * 6];
            fVar35 = (*(float *)(lVar10 + 0x10) - fVar32) - local_2b8[uVar12 * 6 + 1];
            fVar36 = (*(float *)(lVar10 + 0x14) - fVar38) - local_2b8[uVar12 * 6 + 2];
            fVar31 = fVar30 * fVar30 + fVar28 * fVar28 + fVar31 * fVar31;
            if (fVar31 < 0.0) {
              fVar31 = (float)FUN_18051af10();
            }
            else {
              fVar31 = SQRT(fVar31);
            }
            fVar28 = fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36;
            if (fVar28 < 0.0) {
              fVar28 = (float)FUN_18051af10();
            }
            else {
              fVar28 = SQRT(fVar28);
            }
            *(float *)(&DAT_180c883f0 + (ulonglong)bVar3 * 4 + lVar11) =
                 (fVar28 + fVar31) / (float)iVar23 +
                 *(float *)(&DAT_180c883f0 + (ulonglong)bVar3 * 4 + lVar11);
          }
          lVar10 = lVar10 + 0x48;
        } while (lVar10 != lVar27);
        lVar21 = local_398;
        iVar22 = (int)local_3d8;
      }
      iVar22 = iVar22 + 1;
      local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,iVar22);
    } while (iVar22 < iVar23);
    fVar28 = 0.0;
    if ((int)local_3e8 < 4) {
      fVar28 = local_3e0;
    }
    lVar27 = local_3a0;
    fVar38 = DAT_1808ac16c;
  }
  fVar29 = 0.0;
  if (fVar39 < 0.0) {
    fVar39 = (float)FUN_18051af10();
  }
  else {
    fVar39 = SQRT(fVar39);
  }
  if (fVar39 / fVar34 < DAT_1808ac1b0) {
    (&DAT_180c88454)[lVar27] = 0;
  }
  *(undefined2 *)(&DAT_180c87468 + lVar27) = 0x100;
  *(undefined4 *)(&DAT_180c87460 + lVar27) = (undefined4)local_3d0;
  fVar32 = (fVar39 / fVar34 - fVar38) / _DAT_1808ac238;
  *(undefined2 *)(&DAT_180c8746a + lVar27) = local_38e;
  *(undefined4 *)(&DAT_180c87464 + lVar27) = 0;
  (&DAT_180c87468)[lVar27] = local_388[0];
  (&DAT_180c87469)[lVar27] = 1;
  *(float *)(&DAT_180c88448 + lVar27) = fVar28;
  *(float *)(&DAT_180c87464 + lVar27) = local_3c8;
  if (0.0 <= fVar32) {
    if (DAT_1808ac34c <= fVar32) {
      fVar32 = DAT_1808ac34c;
    }
    if (0.0 <= fVar32 * DAT_1808ac750) {
      fVar29 = (float)FUN_18053f0d0();
    }
    else {
      uVar8 = FUN_18053f0d0();
      fVar29 = (float)(uVar8 ^ DAT_1808adec0);
    }
  }
  *(int *)(&DAT_180c8844c + lVar27) = (int)((float)(int)local_3c0 + fVar29);
  return;
}



/* ===== 18045eb10 FUN_18045eb10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18045eb10(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined7 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  char cVar12;
  undefined1 uVar13;
  undefined **ppuVar14;
  longlong lVar15;
  undefined *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  float *pfVar20;
  longlong *plVar21;
  longlong *in_RCX;
  undefined *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  longlong *plVar29;
  uint uVar30;
  ulonglong uVar31;
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  ulonglong uVar35;
  float fVar36;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar42;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  float fVar43;
  undefined4 unaff_XMM9_Db;
  undefined4 uVar44;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  float fVar45;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  float fVar46;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  float fVar47;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [112];
  float local_e0 [4];
  ulonglong local_d0;
  
  local_d0 = DAT_180919500 ^ (ulonglong)auStack_158;
  if ((DAT_181111d50 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181111d50 = '\x01';
    DAT_181111d54 = FUN_18038eaf0("CBasePlayerController","m_hPawn");
    DAT_181111d58 = FUN_18038eaf0("CCSPlayerController","m_hPlayerPawn");
    DAT_181111d5c = FUN_18038eaf0("CBasePlayerController","m_iConnected");
    DAT_181111d60 = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    DAT_181111d64 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_181111d68 = FUN_18038eaf0("C_BaseEntity","m_nActualMoveType");
    DAT_181111d6c = FUN_18038eaf0("C_CSPlayerPawn","m_bGunGameImmunity");
    if (DAT_181111d6c == 0) {
      DAT_181111d6c = FUN_18038eaf0("C_CSPlayerPawnBase","m_bGunGameImmunity");
    }
    DAT_181111d70 = FUN_18038eaf0("C_BaseEntity","m_pCollision");
    DAT_181111d74 = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMins");
    DAT_181111d78 = FUN_18038eaf0("CCollisionProperty","m_vecSurroundingMaxs");
    DAT_181111d7c = FUN_18038eaf0("CGameSceneNode","m_vecAbsOrigin");
    DAT_181111d80 = FUN_18038eaf0("C_BasePlayerPawn","m_pMovementServices");
    DAT_181111d84 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flDuckAmount");
    if (DAT_181111d84 == 0) {
      DAT_181111d84 = FUN_18038eaf0("CPlayer_MovementServices_Humanoid","m_flDuckAmount");
    }
    DAT_181111d88 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_181111d8c = FUN_18038eaf0("C_BasePlayerPawn","m_hController");
    param_1 = extraout_XMM0_Qa;
  }
  puVar28 = auStack_158;
  puVar27 = auStack_158;
  puVar26 = (undefined *)0x0;
  if (*in_RCX == 0) {
    uVar33 = 0;
  }
  else {
    uVar33 = *(undefined8 *)(*in_RCX + 0x148);
  }
  if (DAT_181111dd0 != DAT_181111dd8) {
    DAT_181111dd8 = DAT_181111dd0;
  }
  uVar35 = (longlong)DAT_181111da8 - (longlong)DAT_181111da0;
  uVar25 = (longlong)uVar35 >> 6;
  puVar22 = puVar26;
  if (0x40 < (int)uVar25) goto LAB_18045ef1f;
  if (uVar25 < 0x42) {
    puVar28 = auStack_158;
    if (uVar25 < 0x41) {
      uVar23 = (longlong)DAT_181111db0 - (longlong)DAT_181111da0 >> 6;
      if (uVar23 < 0x41) {
        uVar31 = 0x3ffffffffffffff;
        if (uVar23 <= 0x3ffffffffffffff - (uVar23 >> 1)) {
          uVar31 = (uVar23 >> 1) + uVar23;
          if (uVar31 < 0x41) {
            uVar31 = 0x41;
          }
          else if (0x3ffffffffffffff < uVar31) {
                    /* WARNING: Subroutine does not return */
            FUN_18000d840();
          }
        }
        puVar26 = (undefined *)FUN_18000fb70(uVar31 * 0x40);
        FUN_18045fb60(puVar26 + (uVar35 & 0xffffffffffffffc0),0x41 - uVar25);
        FUN_180540530(puVar26,DAT_181111da0,(longlong)DAT_181111da8 - (longlong)DAT_181111da0);
        if (DAT_181111da0 != (undefined *)0x0) {
          uVar35 = (longlong)DAT_181111db0 - (longlong)DAT_181111da0 & 0xffffffffffffffc0;
          puVar22 = DAT_181111da0;
          if (0xfff < uVar35) {
            puVar22 = *(undefined **)(DAT_181111da0 + -8);
            if ((undefined *)0x1f < DAT_181111da0 + (-8 - (longlong)puVar22)) {
              pcVar2 = (code *)swi(0x29);
              param_1 = (*pcVar2)(5);
              puVar27 = auStack_150;
              goto LAB_18045ee96;
            }
            uVar35 = uVar35 | 0x27;
          }
          thunk_FUN_1803d64e0(puVar22,uVar35);
        }
        DAT_181111da8 = puVar26 + 0x1040;
        DAT_181111db0 = puVar26 + uVar31 * 0x40;
        puVar28 = auStack_158;
        puVar22 = (undefined *)0x0;
        DAT_181111da0 = puVar26;
      }
      else {
LAB_18045ee96:
        *(undefined8 *)(puVar27 + -8) = 0x18045eea3;
        DAT_181111da8 = (undefined *)FUN_18045fb60(param_1,0x41 - uVar25);
        puVar28 = puVar27;
        puVar22 = puVar26;
      }
    }
  }
  else {
    DAT_181111da8 = DAT_181111da0 + 0x1040;
    puVar28 = auStack_158;
  }
  if (uVar25 < (ulonglong)((longlong)DAT_181111da8 - (longlong)DAT_181111da0 >> 6)) {
    do {
      *(int *)(DAT_181111da0 + uVar25 * 0x40 + 0x10) = (int)uVar25;
      uVar25 = uVar25 + 1;
    } while (uVar25 < (ulonglong)((longlong)DAT_181111da8 - (longlong)DAT_181111da0 >> 6));
  }
  ppuVar14 = (undefined **)&DAT_180c87450;
  do {
    ppuVar14[1] = puVar22;
    ppuVar14 = ppuVar14 + 0x201;
  } while (ppuVar14 != &PTR_s_sv_accelerate_180c8a468);
LAB_18045ef1f:
  *(undefined4 *)(puVar28 + 0x110) = unaff_XMM7_Da;
  *(undefined4 *)(puVar28 + 0x114) = unaff_XMM7_Db;
  *(undefined4 *)(puVar28 + 0x118) = unaff_XMM7_Dc;
  *(undefined4 *)(puVar28 + 0x11c) = unaff_XMM7_Dd;
  *(undefined4 *)(puVar28 + 0xc0) = unaff_XMM12_Da;
  *(undefined4 *)(puVar28 + 0xc4) = unaff_XMM12_Db;
  *(undefined4 *)(puVar28 + 200) = unaff_XMM12_Dc;
  *(undefined4 *)(puVar28 + 0xcc) = unaff_XMM12_Dd;
  *(undefined4 *)(puVar28 + 0xb0) = unaff_XMM13_Da;
  *(undefined4 *)(puVar28 + 0xb4) = unaff_XMM13_Db;
  *(undefined4 *)(puVar28 + 0xb8) = unaff_XMM13_Dc;
  *(undefined4 *)(puVar28 + 0xbc) = unaff_XMM13_Dd;
  *(undefined4 *)(puVar28 + 0xa0) = unaff_XMM14_Da;
  *(undefined4 *)(puVar28 + 0xa4) = unaff_XMM14_Db;
  *(undefined4 *)(puVar28 + 0xa8) = unaff_XMM14_Dc;
  *(undefined4 *)(puVar28 + 0xac) = unaff_XMM14_Dd;
  *(undefined4 *)(puVar28 + 0x90) = unaff_XMM15_Da;
  *(undefined4 *)(puVar28 + 0x94) = unaff_XMM15_Db;
  *(undefined4 *)(puVar28 + 0x98) = unaff_XMM15_Dc;
  *(undefined4 *)(puVar28 + 0x9c) = unaff_XMM15_Dd;
  if (DAT_181111db8 != DAT_181111dc0) {
    DAT_181111dc0 = DAT_181111db8;
  }
  uVar30 = 1;
  *(undefined4 *)(puVar28 + 0x20) = 1;
  do {
    puVar26 = puVar22;
    if (-1 < (int)uVar30) {
      *(undefined8 *)(puVar28 + -8) = 0x18045ef80;
      lVar15 = FUN_18000f3a0(DAT_1809619d0);
      if (lVar15 != 0) {
        *(undefined8 *)(puVar28 + -8) = 0x18045efa5;
        lVar15 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                               (ulonglong)(uint)(((int)uVar30 >> 9) * DAT_180961944) + lVar15);
        if (lVar15 - 0x10000U < 0xfffffffffffeffff) {
          *(undefined8 *)(puVar28 + -8) = 0x18045efcc;
          puVar16 = (undefined *)
                    FUN_18000f3a0((ulonglong)((uVar30 & 0x1ff) * DAT_180961948) + lVar15);
          if (puVar16 + -0x10000 < (undefined *)0xfffffffffffeffff) {
            puVar26 = puVar16;
          }
        }
      }
    }
    *(undefined8 *)(puVar28 + -8) = 0x18045effc;
    cVar12 = FUN_18045d880(DAT_181111da0 + (longlong)(int)uVar30 * 0x40,puVar26,uVar33);
    uVar37 = extraout_XMM0_Qa_00;
    if (cVar12 != '\0') {
      if (DAT_181111dc0 == DAT_181111dc8) {
        *(undefined8 *)(puVar28 + -8) = 0x18045f02d;
        uVar37 = FUN_18006a410(&DAT_181111db8,DAT_181111dc0,puVar28 + 0x20);
      }
      else {
        *DAT_181111dc0 = uVar30;
        DAT_181111dc0 = DAT_181111dc0 + 1;
      }
    }
    puVar11 = DAT_181111dc0;
    uVar30 = uVar30 + 1;
    *(uint *)(puVar28 + 0x20) = uVar30;
    fVar42 = DAT_1808ac34c;
    fVar36 = DAT_1808aceb0;
    uVar8 = DAT_180ca09f8;
    uVar9 = DAT_181111d60;
    puVar10 = DAT_181111db8;
    plVar29 = DAT_181111dd0;
    plVar21 = DAT_181111dd8;
  } while ((int)uVar30 < 0x41);
  while( true ) {
    DAT_1808ac34c = fVar42;
    DAT_1808aceb0 = fVar36;
    DAT_180ca09f8 = uVar8;
    DAT_181111d60 = uVar9;
    DAT_181111dd0 = plVar29;
    DAT_181111dd8 = plVar21;
    if (puVar10 == puVar11) break;
    uVar30 = *puVar10;
    puVar26 = DAT_181111da0 + (longlong)(int)uVar30 * 0x40;
    if ((int)uVar30 < (int)(DAT_181112370 - DAT_181112368 >> 4) * -0x194be3ab) {
      puVar16 = (undefined *)((longlong)(int)uVar30 * 0xfd0 + DAT_181112368);
    }
    else {
      puVar16 = puVar22;
    }
    *(undefined **)(puVar26 + 0x20) = puVar16;
    if (DAT_181111d68 == 0) {
LAB_18045f0bd:
      if (DAT_181111d6c != 0) {
        lVar15 = *(longlong *)(puVar26 + 8);
        *(undefined8 *)(puVar28 + -8) = 0x18045f0d2;
        cVar12 = FUN_180011220((ulonglong)DAT_181111d6c + lVar15);
        uVar37 = extraout_XMM0_Qa_02;
        if (cVar12 != '\0') goto LAB_18045f0d6;
      }
      uVar13 = 1;
    }
    else {
      lVar15 = *(longlong *)(puVar26 + 8);
      *(undefined8 *)(puVar28 + -8) = 0x18045f0b9;
      cVar12 = FUN_180011220((ulonglong)DAT_181111d68 + lVar15);
      uVar37 = extraout_XMM0_Qa_01;
      if (cVar12 != '\a') goto LAB_18045f0bd;
LAB_18045f0d6:
      uVar13 = 0;
    }
    puVar26[0x28] = uVar13;
    *(undefined **)(puVar28 + 0x20) = puVar26;
    *(undefined8 *)(puVar28 + -8) = 0x18045f0ee;
    uVar37 = FUN_18045f9b0(uVar37,puVar28 + 0x20);
    fVar42 = DAT_1808ac34c;
    fVar36 = DAT_1808aceb0;
    uVar8 = DAT_180ca09f8;
    uVar9 = DAT_181111d60;
    puVar10 = puVar10 + 1;
    plVar29 = DAT_181111dd0;
    plVar21 = DAT_181111dd8;
  }
  iVar34 = 2;
  *(float *)(puVar28 + 0x78) = fVar36;
  *(float *)(puVar28 + 0x7c) = fVar36;
  local_e0[2] = fVar36;
  *(undefined4 *)(puVar28 + 0x120) = unaff_XMM6_Da;
  *(undefined4 *)(puVar28 + 0x124) = unaff_XMM6_Db;
  *(undefined4 *)(puVar28 + 0x128) = unaff_XMM6_Dc;
  *(undefined4 *)(puVar28 + 300) = unaff_XMM6_Dd;
  _DAT_181111d90 = 0;
  DAT_181111d98 = (int)puVar22;
  *(longlong **)(puVar28 + 0x20) = plVar21;
  if (plVar29 != plVar21) {
    *(undefined4 *)(puVar28 + 0x100) = unaff_XMM8_Da;
    *(undefined4 *)(puVar28 + 0x104) = unaff_XMM8_Db;
    *(undefined4 *)(puVar28 + 0x108) = unaff_XMM8_Dc;
    *(undefined4 *)(puVar28 + 0x10c) = unaff_XMM8_Dd;
    *(undefined4 *)(puVar28 + 0xf0) = unaff_XMM9_Da;
    *(undefined4 *)(puVar28 + 0xf4) = unaff_XMM9_Db;
    *(undefined4 *)(puVar28 + 0xf8) = unaff_XMM9_Dc;
    *(undefined4 *)(puVar28 + 0xfc) = unaff_XMM9_Dd;
    *(undefined4 *)(puVar28 + 0xe0) = unaff_XMM10_Da;
    *(undefined4 *)(puVar28 + 0xe4) = unaff_XMM10_Db;
    *(undefined4 *)(puVar28 + 0xe8) = unaff_XMM10_Dc;
    *(undefined4 *)(puVar28 + 0xec) = unaff_XMM10_Dd;
    *(undefined8 *)(puVar28 + 0xd0) = unaff_XMM11_Qa;
    *(undefined8 *)(puVar28 + 0xd8) = unaff_XMM11_Qb;
    fVar38 = fVar36;
    fVar47 = fVar36;
    do {
      lVar15 = *plVar29;
      if (*(char *)(lVar15 + 0x28) != '\0') {
        lVar19 = *(longlong *)(lVar15 + 8);
        if (uVar9 == 0) {
LAB_18045f207:
          if ((lVar19 != 0) && (uVar8 != 0)) {
            *(undefined8 *)(puVar28 + -8) = 0x18045f21a;
            lVar19 = FUN_18000f3a0(lVar19 + (ulonglong)uVar8);
            if ((lVar19 != 0) && (DAT_180ca0950 != 0)) {
              *(undefined8 *)(puVar28 + -8) = 0x18045f237;
              puVar18 = (undefined8 *)
                        FUN_1800111b0(puVar28 + 0x48,lVar19 + (ulonglong)DAT_180ca0950);
              fVar43 = (float)*puVar18;
              uVar44 = (undefined4)((ulonglong)*puVar18 >> 0x20);
              fVar46 = *(float *)(puVar18 + 1);
              goto LAB_18045f24e;
            }
          }
          fVar43 = 0.0;
          fVar46 = 0.0;
          uVar44 = 0;
        }
        else {
          *(undefined8 *)(puVar28 + -8) = 0x18045f1cf;
          lVar17 = FUN_18000f3a0(lVar19 + (ulonglong)uVar9);
          if ((0x7ffffffefffe < lVar17 - 0x10000U) || (DAT_181111d7c == 0)) goto LAB_18045f207;
          *(undefined8 *)(puVar28 + -8) = 0x18045f1fd;
          puVar18 = (undefined8 *)FUN_1800111b0(puVar28 + 0x38,lVar17 + (ulonglong)DAT_181111d7c);
          fVar43 = (float)*puVar18;
          uVar44 = (undefined4)((ulonglong)*puVar18 >> 0x20);
          fVar46 = *(float *)(puVar18 + 1);
        }
LAB_18045f24e:
        *(ulonglong *)(puVar28 + 0x28) = CONCAT44(uVar44,fVar43);
        fVar45 = *(float *)(puVar28 + 0x2c);
        if (DAT_181111d70 != 0) {
          lVar19 = *(longlong *)(lVar15 + 8);
          *(undefined8 *)(puVar28 + -8) = 0x18045f27a;
          lVar19 = FUN_18000f3a0((ulonglong)DAT_181111d70 + lVar19);
          if (lVar19 - 0x10000U < 0x7ffffffeffff) {
            *(undefined8 *)(puVar28 + -8) = 0x18045f2aa;
            pfVar20 = (float *)FUN_1800111b0(puVar28 + 0x58,(ulonglong)DAT_181111d74 + lVar19);
            fVar42 = *pfVar20;
            fVar39 = pfVar20[1];
            fVar41 = pfVar20[2];
            *(undefined8 *)(puVar28 + -8) = 0x18045f2d8;
            pfVar20 = (float *)FUN_1800111b0(puVar28 + 0x68,(ulonglong)DAT_181111d78 + lVar19);
            fVar45 = ((fVar45 + pfVar20[1]) - (fVar45 + fVar39)) * DAT_1808ac1f4 + fVar45 + fVar39;
            fVar43 = ((fVar43 + *pfVar20) - (fVar43 + fVar42)) * DAT_1808ac1f4 + fVar43 + fVar42;
            fVar46 = ((fVar46 + pfVar20[2]) - (fVar46 + fVar41)) * DAT_1808ac1f4 + fVar46 + fVar41;
            fVar42 = DAT_1808ac34c;
          }
        }
        fVar43 = fVar43 - *(float *)(in_RCX + 1);
        fVar45 = fVar45 - *(float *)((longlong)in_RCX + 0xc);
        fVar46 = fVar46 - *(float *)(in_RCX + 2);
        fVar39 = fVar45 * fVar45 + fVar43 * fVar43 + fVar46 * fVar46;
        if (fVar39 < 0.0) {
          *(undefined8 *)(puVar28 + -8) = 0x18045f374;
          fVar39 = (float)FUN_18051af10(fVar39);
        }
        else {
          fVar39 = SQRT(fVar39);
        }
        if ((fVar39 < DAT_1808abf54) || (DAT_1808accfc < fVar39)) {
          fVar41 = 0.0;
          dVar4 = (double)fVar45;
          dVar3 = (double)fVar43;
          dVar5 = (double)fVar46;
          fVar45 = 0.0;
          fVar39 = 0.0;
          dVar40 = dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5;
          if (dVar40 != _DAT_1808abf48) {
            if (dVar40 < 0.0) {
              *(undefined8 *)(puVar28 + -8) = 0x18045f409;
              dVar40 = (double)FUN_18051ff20(dVar40);
            }
            else {
              dVar40 = SQRT(dVar40);
            }
            dVar40 = DAT_1808ac500 / dVar40;
            fVar41 = (float)(dVar3 * dVar40);
            fVar45 = (float)(dVar4 * dVar40);
            fVar39 = (float)(dVar5 * dVar40);
          }
          fVar42 = DAT_1808ac34c;
        }
        else {
          fVar39 = fVar42 / fVar39;
          fVar41 = fVar39 * fVar43;
          fVar45 = fVar39 * fVar45;
          fVar39 = fVar39 * fVar46;
        }
        lVar19 = 0;
        fVar46 = fVar45 * *(float *)(in_RCX + 3) + fVar41 * *(float *)((longlong)in_RCX + 0x14) +
                 fVar39 * *(float *)((longlong)in_RCX + 0x1c);
        if (((fVar36 < fVar46) || (lVar19 = 1, fVar38 < fVar46)) || (lVar19 = 2, fVar47 < fVar46)) {
          uVar30 = (uint)lVar19;
          if (uVar30 < 2) {
            iVar32 = 2;
            if (3 < (int)(2 - uVar30)) {
              do {
                lVar24 = (longlong)iVar32;
                *(undefined4 *)(puVar28 + (longlong)iVar32 * 4 + 0x78) =
                     *(undefined4 *)(puVar28 + lVar24 * 4 + 0x74);
                (&DAT_181111d90)[iVar32] = (&DAT_181111d8c)[lVar24];
                lVar17 = (longlong)iVar32;
                *(undefined4 *)(puVar28 + lVar24 * 4 + 0x74) =
                     *(undefined4 *)(puVar28 + lVar17 * 4 + 0x70);
                (&DAT_181111d8c)[lVar24] = (&DAT_181111d88)[lVar17];
                lVar24 = (longlong)iVar32;
                iVar32 = iVar32 + -4;
                *(undefined4 *)(puVar28 + lVar17 * 4 + 0x70) =
                     *(undefined4 *)(puVar28 + lVar24 * 4 + 0x6c);
                (&DAT_181111d88)[lVar17] = (&DAT_181111d84)[lVar24];
                *(undefined4 *)(puVar28 + lVar24 * 4 + 0x6c) =
                     *(undefined4 *)(puVar28 + (longlong)iVar32 * 4 + 0x78);
                (&DAT_181111d84)[lVar24] = (&DAT_181111d90)[iVar32];
              } while ((int)(uVar30 + 3) < iVar32);
              if (iVar32 <= (int)uVar30) goto LAB_18045f525;
            }
            do {
              iVar1 = iVar32 + -1;
              *(undefined4 *)(puVar28 + (longlong)iVar32 * 4 + 0x78) =
                   *(undefined4 *)(puVar28 + (longlong)iVar1 * 4 + 0x78);
              (&DAT_181111d90)[iVar32] = (&DAT_181111d90)[iVar1];
              iVar32 = iVar1;
            } while ((int)uVar30 < iVar1);
          }
LAB_18045f525:
          uVar44 = *(undefined4 *)(lVar15 + 0x10);
          *(float *)(puVar28 + lVar19 * 4 + 0x78) = fVar46;
          fVar38 = *(float *)(puVar28 + 0x7c);
          fVar36 = *(float *)(puVar28 + 0x78);
          (&DAT_181111d90)[lVar19] = uVar44;
          fVar47 = local_e0[2];
        }
        plVar21 = *(longlong **)(puVar28 + 0x20);
      }
      plVar29 = plVar29 + 1;
    } while (plVar29 != plVar21);
    puVar22 = (undefined *)0x0;
  }
  ppuVar14 = (undefined **)&DAT_180c87450;
  puVar26 = DAT_181111da0;
  do {
    iVar32 = *(int *)ppuVar14;
    if ((iVar32 < 0) || ((int)((longlong)DAT_181111da8 - (longlong)puVar26 >> 6) <= iVar32)) {
      puVar16 = puVar22;
    }
    else {
      puVar16 = puVar26 + (longlong)iVar32 * 0x40;
    }
    if (((iVar32 == DAT_181111d90) || (iVar32 == DAT_181111d94)) || (iVar32 == DAT_181111d98)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x18) != 2)) || (iVar32 == 0)) ||
       ((*(int *)(puVar16 + 0x14) != *(int *)((longlong)ppuVar14 + 4) || (!bVar7)))) {
      if (ppuVar14[1] != (undefined *)0x0) {
        *(undefined **)(ppuVar14[1] + 0x30) = puVar22;
        puVar26 = DAT_181111da0;
      }
      ppuVar14[1] = puVar22;
      *(int *)ppuVar14 = (int)puVar22;
      *(int *)((longlong)ppuVar14 + 4) = -1;
      *(int *)((longlong)ppuVar14 + 0xfec) = (int)puVar22;
    }
    else {
      ppuVar14[1] = puVar16;
      *(undefined ***)(puVar16 + 0x30) = ppuVar14;
      puVar26 = DAT_181111da0;
    }
    ppuVar14 = ppuVar14 + 0x201;
  } while (ppuVar14 != &PTR_s_sv_accelerate_180c8a468);
  uVar25 = (ulonglong)puVar22 & 0xffffffff;
  do {
    iVar32 = (&DAT_181111d90)[uVar25];
    uVar6 = (undefined7)((ulonglong)puVar22 >> 8);
    if ((uint)uVar25 < 2) {
      iVar1 = (int)CONCAT71(uVar6,iVar32 == 0);
    }
    else {
      iVar1 = (int)CONCAT71(uVar6,iVar32 < 1);
    }
    if (iVar1 != 0) break;
    if ((-1 < iVar32) && (iVar32 < (int)((longlong)DAT_181111da8 - (longlong)puVar26 >> 6))) {
      puVar16 = puVar26 + (longlong)iVar32 * 0x40;
      if ((*(int *)(puVar16 + 0x18) == 2) && (*(longlong *)(puVar16 + 0x30) == 0)) {
        ppuVar14 = (undefined **)&DAT_180c87450;
        do {
          if (ppuVar14[1] == (undefined *)0x0) {
            ppuVar14[1] = puVar16;
            *(undefined4 *)ppuVar14 = *(undefined4 *)(puVar16 + 0x10);
            *(undefined4 *)((longlong)ppuVar14 + 4) = *(undefined4 *)(puVar16 + 0x14);
            *(undefined ***)(puVar16 + 0x30) = ppuVar14;
            puVar26 = DAT_181111da0;
            break;
          }
          ppuVar14 = ppuVar14 + 0x201;
        } while (ppuVar14 != &PTR_s_sv_accelerate_180c8a468);
      }
    }
    uVar30 = (uint)uVar25 + 1;
    uVar25 = (ulonglong)uVar30;
  } while ((int)uVar30 < 3);
  if (DAT_180c89468 == 0) {
    if (DAT_180c88460 == 0) {
      iVar34 = (int)CONCAT71(uVar6,DAT_180c87458 != 0);
    }
  }
  else {
    iVar34 = 3;
  }
  uVar25 = (ulonglong)puVar22 & 0xffffffff;
  DAT_181111d9c = iVar34;
  if (((*(int *)((longlong)in_RCX + 0x2c) == 0) && (lVar15 = *in_RCX, lVar15 != 0)) &&
     (fVar36 = *(float *)(lVar15 + 0x134), 0.0 < fVar36)) {
    fVar38 = *(float *)(lVar15 + 0x10) * *(float *)(lVar15 + 0x10) +
             *(float *)(lVar15 + 0xc) * *(float *)(lVar15 + 0xc);
    if (fVar38 < 0.0) {
      *(undefined8 *)(puVar28 + -8) = 0x18045f78e;
      fVar38 = (float)FUN_18051af10(fVar38);
    }
    else {
      fVar38 = SQRT(fVar38);
    }
    fVar36 = (fVar38 / fVar36 - DAT_1808ac16c) / _DAT_1808ac238;
    if (0.0 <= fVar36) {
      if (fVar42 <= fVar36) {
        fVar36 = fVar42;
      }
      uVar25 = (ulonglong)(uint)(int)(fVar36 * DAT_1808ac750);
    }
  }
  uVar35 = (ulonglong)puVar22 & 0xffffffff;
  if (0 < iVar34) {
    do {
      *(undefined8 *)(puVar28 + -8) = 0x18045f7ed;
      FUN_18045db60(in_RCX,uVar25,uVar35);
      uVar30 = (int)uVar35 + 1;
      uVar35 = (ulonglong)uVar30;
    } while ((int)uVar30 < DAT_181111d9c);
  }
  *(undefined8 *)(puVar28 + -8) = 0x18045f81b;
  return;
}



/* ===== 18045f840 FUN_18045f840 ===== */

void FUN_18045f840(undefined8 *param_1)

{
  *param_1 = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return;
}



/* ===== 18045f9b0 FUN_18045f9b0 ===== */

undefined8 * FUN_18045f9b0(undefined8 param_1,undefined8 *param_2)

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
  
  puVar3 = DAT_181111dd8;
  if (DAT_181111dd8 != DAT_181111de0) {
    *DAT_181111dd8 = *param_2;
    puVar3 = DAT_181111dd8;
    DAT_181111dd8 = DAT_181111dd8 + 1;
    return puVar3;
  }
  uVar8 = 0x1fffffffffffffff;
  uVar11 = (longlong)DAT_181111dd8 - (longlong)DAT_181111dd0;
  lVar4 = (longlong)uVar11 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar6 = (longlong)DAT_181111de0 - (longlong)DAT_181111dd0 >> 3;
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
  if (puVar3 == DAT_181111dd8) {
    lVar4 = (longlong)DAT_181111dd8 - (longlong)DAT_181111dd0;
    puVar7 = puVar5;
    puVar3 = DAT_181111dd0;
  }
  else {
    FUN_180540530(puVar5,DAT_181111dd0,(longlong)puVar3 - (longlong)DAT_181111dd0);
    puVar7 = puVar12 + 1;
    lVar4 = (longlong)DAT_181111dd8 - (longlong)puVar3;
  }
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  FUN_180540530(puVar7,puVar3,lVar4);
  if (DAT_181111dd0 == (undefined8 *)0x0) goto LAB_18045fb0f;
  puVar3 = DAT_181111dd0;
  if ((ulonglong)(((longlong)DAT_181111de0 - (longlong)DAT_181111dd0 >> 3) * 8) < 0x1000) {
LAB_18045fb04:
    puVar10 = puVar9;
  }
  else {
    puVar3 = (undefined8 *)DAT_181111dd0[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_181111dd0 + (-8 - (longlong)puVar3))) {
      puVar3 = (undefined8 *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_30;
      goto LAB_18045fb04;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x18045fb0f;
  thunk_FUN_1803d64e0(puVar3);
LAB_18045fb0f:
  DAT_181111dd0 = puVar5;
  DAT_181111dd8 = puVar5 + uVar1;
  DAT_181111de0 = puVar5 + uVar8;
  return puVar12;
}



/* ===== 18045fb60 FUN_18045fb60 ===== */

undefined8 * FUN_18045fb60(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x29) = 0;
    *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
    *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
    *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
    *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0x7f7fffff;
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
    param_1 = param_1 + 8;
  }
  return param_1;
}



/* ===== 18045fbd0 FUN_18045fbd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18045fbd0(longlong param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_548 [32];
  int local_528 [320];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_548;
  if (DAT_181111df0 != param_1) {
    DAT_181111df8 = 0;
    DAT_181111df0 = param_1;
  }
  if (0 < param_3) {
    local_528[0x10] = 0;
    local_528[0x11] = 0;
    local_528[0x12] = 0;
    local_528[0x13] = 0;
    local_528[0x24] = 0;
    local_528[0x25] = 0;
    local_528[0x26] = 0;
    local_528[0x27] = 0;
    local_528[0x38] = 0;
    local_528[0x39] = 0;
    local_528[0x3a] = 0;
    local_528[0x3b] = 0;
    local_528[0x4c] = 0;
    local_528[0x4d] = 0;
    local_528[0x4e] = 0;
    local_528[0x4f] = 0;
    local_528[0x60] = 0;
    local_528[0x61] = 0;
    local_528[0x62] = 0;
    local_528[99] = 0;
    local_528[0x74] = 0;
    local_528[0x75] = 0;
    local_528[0x76] = 0;
    local_528[0x77] = 0;
    local_528[0x88] = 0;
    local_528[0x89] = 0;
    local_528[0x8a] = 0;
    local_528[0x8b] = 0;
    local_528[0x9c] = 0;
    local_528[0x9d] = 0;
    local_528[0x9e] = 0;
    local_528[0x9f] = 0;
    local_528[0] = 0;
    local_528[1] = 0;
    local_528[2] = 0;
    local_528[3] = 0;
    local_528[4] = 0;
    local_528[5] = 0;
    local_528[6] = 0;
    local_528[7] = 0;
    local_528[8] = 0;
    local_528[9] = 0;
    local_528[10] = 0;
    local_528[0xb] = 0;
    local_528[0xc] = 0;
    local_528[0xd] = 0;
    local_528[0xe] = 0;
    local_528[0xf] = 0;
    local_528[0x14] = 0;
    local_528[0x15] = 0;
    local_528[0x16] = 0;
    local_528[0x17] = 0;
    local_528[0x18] = 0;
    local_528[0x19] = 0;
    local_528[0x1a] = 0;
    local_528[0x1b] = 0;
    local_528[0x1c] = 0;
    local_528[0x1d] = 0;
    local_528[0x1e] = 0;
    local_528[0x1f] = 0;
    local_528[0x20] = 0;
    local_528[0x21] = 0;
    local_528[0x22] = 0;
    local_528[0x23] = 0;
    local_528[0x28] = 0;
    local_528[0x29] = 0;
    local_528[0x2a] = 0;
    local_528[0x2b] = 0;
    local_528[0x2c] = 0;
    local_528[0x2d] = 0;
    local_528[0x2e] = 0;
    local_528[0x2f] = 0;
    local_528[0x30] = 0;
    local_528[0x31] = 0;
    local_528[0x32] = 0;
    local_528[0x33] = 0;
    local_528[0x34] = 0;
    local_528[0x35] = 0;
    local_528[0x36] = 0;
    local_528[0x37] = 0;
    local_528[0x3c] = 0;
    local_528[0x3d] = 0;
    local_528[0x3e] = 0;
    local_528[0x3f] = 0;
    local_528[0x40] = 0;
    local_528[0x41] = 0;
    local_528[0x42] = 0;
    local_528[0x43] = 0;
    local_528[0x44] = 0;
    local_528[0x45] = 0;
    local_528[0x46] = 0;
    local_528[0x47] = 0;
    local_528[0x48] = 0;
    local_528[0x49] = 0;
    local_528[0x4a] = 0;
    local_528[0x4b] = 0;
    local_528[0x50] = 0;
    local_528[0x51] = 0;
    local_528[0x52] = 0;
    local_528[0x53] = 0;
    local_528[0x54] = 0;
    local_528[0x55] = 0;
    local_528[0x56] = 0;
    local_528[0x57] = 0;
    local_528[0x58] = 0;
    local_528[0x59] = 0;
    local_528[0x5a] = 0;
    local_528[0x5b] = 0;
    local_528[0x5c] = 0;
    local_528[0x5d] = 0;
    local_528[0x5e] = 0;
    local_528[0x5f] = 0;
    local_528[100] = 0;
    local_528[0x65] = 0;
    local_528[0x66] = 0;
    local_528[0x67] = 0;
    local_528[0x68] = 0;
    local_528[0x69] = 0;
    local_528[0x6a] = 0;
    local_528[0x6b] = 0;
    local_528[0x6c] = 0;
    local_528[0x6d] = 0;
    local_528[0x6e] = 0;
    local_528[0x6f] = 0;
    local_528[0x70] = 0;
    local_528[0x71] = 0;
    local_528[0x72] = 0;
    local_528[0x73] = 0;
    local_528[0x78] = 0;
    local_528[0x79] = 0;
    local_528[0x7a] = 0;
    local_528[0x7b] = 0;
    local_528[0x7c] = 0;
    local_528[0x7d] = 0;
    local_528[0x7e] = 0;
    local_528[0x7f] = 0;
    local_528[0x80] = 0;
    local_528[0x81] = 0;
    local_528[0x82] = 0;
    local_528[0x83] = 0;
    local_528[0x84] = 0;
    local_528[0x85] = 0;
    local_528[0x86] = 0;
    local_528[0x87] = 0;
    local_528[0x8c] = 0;
    local_528[0x8d] = 0;
    local_528[0x8e] = 0;
    local_528[0x8f] = 0;
    local_528[0x90] = 0;
    local_528[0x91] = 0;
    local_528[0x92] = 0;
    local_528[0x93] = 0;
    local_528[0x94] = 0;
    local_528[0x95] = 0;
    local_528[0x96] = 0;
    local_528[0x97] = 0;
    local_528[0x98] = 0;
    local_528[0x99] = 0;
    local_528[0x9a] = 0;
    local_528[0x9b] = 0;
    local_528[0xa0] = 0;
    local_528[0xa1] = 0;
    local_528[0xa2] = 0;
    local_528[0xa3] = 0;
    local_528[0xa4] = 0;
    local_528[0xa5] = 0;
    local_528[0xa6] = 0;
    local_528[0xa7] = 0;
    local_528[0xa8] = 0;
    local_528[0xa9] = 0;
    local_528[0xaa] = 0;
    local_528[0xab] = 0;
    local_528[0xac] = 0;
    local_528[0xad] = 0;
    local_528[0xae] = 0;
    local_528[0xaf] = 0;
    iVar10 = 0;
    local_528[0xb0] = 0;
    local_528[0xb1] = 0;
    local_528[0xb2] = 0;
    local_528[0xb3] = 0;
    local_528[0xb4] = 0;
    local_528[0xb5] = 0;
    local_528[0xb6] = 0;
    local_528[0xb7] = 0;
    local_528[0xb8] = 0;
    local_528[0xb9] = 0;
    local_528[0xba] = 0;
    local_528[0xbb] = 0;
    local_528[0xbc] = 0;
    local_528[0xbd] = 0;
    local_528[0xbe] = 0;
    local_528[0xbf] = 0;
    local_528[0xc0] = 0;
    local_528[0xc1] = 0;
    local_528[0xc2] = 0;
    local_528[0xc3] = 0;
    local_528[0xc4] = 0;
    local_528[0xc5] = 0;
    local_528[0xc6] = 0;
    local_528[199] = 0;
    local_528[200] = 0;
    local_528[0xc9] = 0;
    local_528[0xca] = 0;
    local_528[0xcb] = 0;
    local_528[0xcc] = 0;
    local_528[0xcd] = 0;
    local_528[0xce] = 0;
    local_528[0xcf] = 0;
    local_528[0xd0] = 0;
    local_528[0xd1] = 0;
    local_528[0xd2] = 0;
    local_528[0xd3] = 0;
    local_528[0xd4] = 0;
    local_528[0xd5] = 0;
    local_528[0xd6] = 0;
    local_528[0xd7] = 0;
    local_528[0xd8] = 0;
    local_528[0xd9] = 0;
    local_528[0xda] = 0;
    local_528[0xdb] = 0;
    local_528[0xdc] = 0;
    local_528[0xdd] = 0;
    local_528[0xde] = 0;
    local_528[0xdf] = 0;
    local_528[0xe0] = 0;
    local_528[0xe1] = 0;
    local_528[0xe2] = 0;
    local_528[0xe3] = 0;
    local_528[0xe4] = 0;
    local_528[0xe5] = 0;
    local_528[0xe6] = 0;
    local_528[0xe7] = 0;
    local_528[0xe8] = 0;
    local_528[0xe9] = 0;
    local_528[0xea] = 0;
    local_528[0xeb] = 0;
    local_528[0xec] = 0;
    local_528[0xed] = 0;
    local_528[0xee] = 0;
    local_528[0xef] = 0;
    local_528[0xf0] = 0;
    local_528[0xf1] = 0;
    local_528[0xf2] = 0;
    local_528[0xf3] = 0;
    local_528[0xf4] = 0;
    local_528[0xf5] = 0;
    local_528[0xf6] = 0;
    local_528[0xf7] = 0;
    local_528[0xf8] = 0;
    local_528[0xf9] = 0;
    local_528[0xfa] = 0;
    local_528[0xfb] = 0;
    local_528[0xfc] = 0;
    local_528[0xfd] = 0;
    local_528[0xfe] = 0;
    local_528[0xff] = 0;
    local_528[0x100] = 0;
    local_528[0x101] = 0;
    local_528[0x102] = 0;
    local_528[0x103] = 0;
    local_528[0x104] = 0;
    local_528[0x105] = 0;
    local_528[0x106] = 0;
    local_528[0x107] = 0;
    local_528[0x108] = 0;
    local_528[0x109] = 0;
    local_528[0x10a] = 0;
    local_528[0x10b] = 0;
    local_528[0x10c] = 0;
    local_528[0x10d] = 0;
    local_528[0x10e] = 0;
    local_528[0x10f] = 0;
    local_528[0x110] = 0;
    local_528[0x111] = 0;
    local_528[0x112] = 0;
    local_528[0x113] = 0;
    local_528[0x114] = 0;
    local_528[0x115] = 0;
    local_528[0x116] = 0;
    local_528[0x117] = 0;
    local_528[0x118] = 0;
    local_528[0x119] = 0;
    local_528[0x11a] = 0;
    local_528[0x11b] = 0;
    local_528[0x11c] = 0;
    local_528[0x11d] = 0;
    local_528[0x11e] = 0;
    local_528[0x11f] = 0;
    local_528[0x120] = 0;
    local_528[0x121] = 0;
    local_528[0x122] = 0;
    local_528[0x123] = 0;
    local_528[0x124] = 0;
    local_528[0x125] = 0;
    local_528[0x126] = 0;
    local_528[0x127] = 0;
    local_528[0x128] = 0;
    local_528[0x129] = 0;
    local_528[0x12a] = 0;
    local_528[299] = 0;
    local_528[300] = 0;
    local_528[0x12d] = 0;
    local_528[0x12e] = 0;
    local_528[0x12f] = 0;
    local_528[0x130] = 0;
    local_528[0x131] = 0;
    local_528[0x132] = 0;
    local_528[0x133] = 0;
    local_528[0x134] = 0;
    local_528[0x135] = 0;
    local_528[0x136] = 0;
    local_528[0x137] = 0;
    local_528[0x138] = 0;
    local_528[0x139] = 0;
    local_528[0x13a] = 0;
    local_528[0x13b] = 0;
    local_528[0x13c] = 0;
    local_528[0x13d] = 0;
    local_528[0x13e] = 0;
    local_528[0x13f] = 0;
    if (0 < DAT_181111df8) {
      iVar11 = *param_2;
      iVar9 = 0;
      do {
        lVar6 = (longlong)iVar9;
        if ((*(int *)(&DAT_181111dfc + lVar6 * 0x14) < iVar11) ||
           ((*(int *)(&DAT_181111dfc + lVar6 * 0x14) == iVar11 &&
            (*(float *)(&DAT_181111e00 + lVar6 * 0x14) <= (float)param_2[1] &&
             (float)param_2[1] != *(float *)(&DAT_181111e00 + lVar6 * 0x14))))) {
          lVar8 = lVar6 * 0x14;
          iVar3 = *(int *)(&DAT_181111e00 + lVar8);
          iVar4 = *(int *)(lVar8 + 0x181111e04);
          iVar5 = *(int *)(lVar8 + 0x181111e08);
          lVar7 = (longlong)iVar10;
          iVar10 = iVar10 + 1;
          iVar2 = *(int *)(&DAT_181111e0c + lVar6 * 0x14);
          local_528[lVar7 * 5] = *(int *)(&DAT_181111dfc + lVar8);
          local_528[lVar7 * 5 + 1] = iVar3;
          local_528[lVar7 * 5 + 2] = iVar4;
          local_528[lVar7 * 5 + 3] = iVar5;
          local_528[lVar7 * 5 + 4] = iVar2;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < DAT_181111df8);
    }
    iVar11 = 0;
    do {
      if (0x3f < iVar10) break;
      lVar6 = (longlong)iVar11;
      iVar11 = iVar11 + 1;
      lVar8 = (longlong)iVar10;
      piVar1 = param_2 + lVar6 * 5;
      iVar2 = piVar1[1];
      iVar3 = piVar1[2];
      iVar4 = piVar1[3];
      iVar10 = iVar10 + 1;
      iVar9 = param_2[lVar6 * 5 + 4];
      local_528[lVar8 * 5] = *piVar1;
      local_528[lVar8 * 5 + 1] = iVar2;
      local_528[lVar8 * 5 + 2] = iVar3;
      local_528[lVar8 * 5 + 3] = iVar4;
      local_528[lVar8 * 5 + 4] = iVar9;
    } while (iVar11 < param_3);
    iVar11 = iVar10;
    if (0x20 < iVar10) {
      iVar11 = 0x20;
    }
    if (0 < iVar11) {
      FUN_180540530(&DAT_181111dfc,local_528 + (longlong)(iVar10 - iVar11) * 5,
                    (ulonglong)((longlong)iVar11 * 0x14) / 4 << 2);
    }
    DAT_181111df8 = iVar11;
  }
  return;
}



/* ===== 1804600d0 FUN_1804600d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804600d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  char **ppcVar5;
  undefined1 auStack_348 [32];
  char *local_328;
  char *local_320;
  char *local_318;
  char *local_310;
  char *local_308;
  char *local_300;
  char *local_2f8;
  char *local_2f0;
  char *local_2e8;
  char *local_2e0;
  char *local_2d8;
  char *local_2d0;
  char *local_2c8;
  char *local_2c0;
  char *local_2b8;
  char *local_2b0;
  char *local_2a8;
  char *local_2a0;
  char *local_298;
  char *local_290;
  char *local_288;
  char *local_280;
  char *local_278;
  char *local_270;
  char *local_268;
  char *local_260;
  char *local_258;
  char *local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  char *local_230;
  char *local_228;
  char *local_220;
  char *local_218;
  char *local_210;
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  char *local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  char *local_138;
  char *local_130;
  char *local_128;
  char *local_120;
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
  char *local_58 [3];
  char *local_40 [5];
  char *local_18 [2];
  
  ppcVar5 = &local_248;
  local_18[0] = (char *)(DAT_180919500 ^ (ulonglong)auStack_348);
  if ((DAT_181112080 == '\0') && (DAT_1811089f0 != 0)) {
    ppcVar4 = &local_328;
    local_40[0] = "C_CSPlayerPawn";
    local_40[4] = "C_BaseEntity";
    local_328 = "C_BaseEntity";
    DAT_181112080 = '\x01';
    local_40[1] = "C_CSPlayerPawnBase";
    local_40[2] = "C_BasePlayerPawn";
    local_40[3] = "C_BaseModelEntity";
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_vecBaseVelocity");
      if (iVar1 != 0) goto LAB_1804601a3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_320);
    iVar1 = 0;
LAB_1804601a3:
    ppcVar4 = &local_320;
    local_320 = "C_BaseModelEntity";
    DAT_181112084 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_vecViewOffset");
      if (iVar1 != 0) goto LAB_1804601e3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_318);
    iVar1 = 0;
LAB_1804601e3:
    ppcVar4 = &local_318;
    local_318 = "C_BaseEntity";
    DAT_181112088 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_pGameSceneNode");
      if (iVar1 != 0) goto LAB_180460223;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_310);
    iVar1 = 0;
LAB_180460223:
    ppcVar4 = &local_310;
    local_310 = "CGameSceneNode";
    DAT_18111208c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_nodeToWorld");
      if (iVar1 != 0) goto LAB_180460263;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_308);
    iVar1 = 0;
LAB_180460263:
    ppcVar4 = &local_308;
    local_308 = "C_BasePlayerPawn";
    DAT_181112090 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"v_angle");
      if (iVar1 != 0) goto LAB_1804602a3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_300);
    iVar1 = 0;
LAB_1804602a3:
    ppcVar4 = local_58 + 3;
    DAT_181112094 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_angEyeAngles");
      if (iVar1 != 0) goto LAB_1804602d5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_1804602d5:
    ppcVar4 = &local_300;
    local_300 = "C_BaseEntity";
    DAT_181112098 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_fFlags");
      if (iVar1 != 0) goto LAB_180460313;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2f8);
    iVar1 = 0;
LAB_180460313:
    ppcVar4 = &local_2f8;
    local_2f8 = "C_BaseEntity";
    DAT_18111209c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_hGroundEntity");
      if (iVar1 != 0) goto LAB_180460353;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2f0);
    iVar1 = 0;
LAB_180460353:
    ppcVar4 = &local_2f0;
    local_2f0 = "C_BaseEntity";
    DAT_1811120a0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_nActualMoveType");
      if (iVar1 != 0) goto LAB_180460393;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2e8);
    iVar1 = 0;
LAB_180460393:
    ppcVar4 = local_58 + 3;
    DAT_1811120a4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bIsDefusing");
      if (iVar1 != 0) goto LAB_1804603c5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_1804603c5:
    ppcVar4 = local_58 + 3;
    DAT_1811120a8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bIsWalking");
      if (iVar1 != 0) goto LAB_180460405;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460405:
    ppcVar4 = local_58 + 3;
    DAT_1811120ac = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bOnGroundLastTick");
      if (iVar1 != 0) goto LAB_180460445;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460445:
    ppcVar4 = &local_2e8;
    local_2e8 = "C_BaseEntity";
    DAT_1811120b0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_iTeamNum");
      if (iVar1 != 0) goto LAB_180460483;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2e0);
    iVar1 = 0;
LAB_180460483:
    ppcVar4 = &local_2e0;
    local_2e0 = "C_BaseEntity";
    DAT_1811120b4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flWaterLevel");
      if (iVar1 != 0) goto LAB_1804604c3;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2d8);
    iVar1 = 0;
LAB_1804604c3:
    ppcVar4 = &local_2d8;
    local_2d8 = "C_BaseEntity";
    DAT_1811120b8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flGravityScale");
      if (iVar1 != 0) goto LAB_180460503;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2d0);
    iVar1 = 0;
LAB_180460503:
    ppcVar4 = &local_2d0;
    local_2d0 = "C_BaseEntity";
    DAT_1811120bc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_nWaterType");
      if (iVar1 != 0) goto LAB_180460542;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2c8);
    iVar1 = 0;
LAB_180460542:
    ppcVar4 = local_58 + 3;
    DAT_1811120c0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flVelocityModifier");
      if (iVar1 != 0) goto LAB_180460575;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460575:
    ppcVar4 = &local_2c8;
    local_2c8 = "C_BaseEntity";
    DAT_1811120c4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flFriction");
      if (iVar1 != 0) goto LAB_1804605b2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2c0);
    iVar1 = 0;
LAB_1804605b2:
    ppcVar4 = local_58 + 3;
    DAT_1811120c8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_ignoreLadderJumpTime");
      if (iVar1 != 0) goto LAB_1804605e5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_1804605e5:
    ppcVar4 = local_58 + 3;
    DAT_1811120cc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_fImmuneToGunGameDamageTime");
      if (iVar1 != 0) goto LAB_180460625;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460625:
    ppcVar4 = &local_2c0;
    local_2c0 = "C_BaseEntity";
    DAT_1811120d0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_pCollision");
      if (iVar1 != 0) goto LAB_180460662;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2b8);
    iVar1 = 0;
LAB_180460662:
    ppcVar4 = &local_2b8;
    local_2b8 = "CCollisionProperty";
    DAT_1811120d4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_collisionAttribute");
      if (iVar1 != 0) goto LAB_1804606a2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2b0);
    iVar1 = 0;
LAB_1804606a2:
    ppcVar4 = local_58 + 3;
    DAT_1811120d8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_lastLandTime");
      if (iVar1 != 0) goto LAB_1804606d5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_1804606d5:
    ppcVar4 = local_58 + 3;
    DAT_1811120dc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_iShotsFired");
      if (iVar1 != 0) goto LAB_180460715;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460715:
    ppcVar4 = local_58 + 3;
    DAT_1811120e0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bWaitForNoAttack");
      if (iVar1 != 0) goto LAB_180460755;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460755:
    ppcVar4 = local_58 + 3;
    DAT_1811120e4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bIsScoped");
      if (iVar1 != 0) goto LAB_180460795;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460795:
    ppcVar4 = local_58 + 3;
    DAT_1811120e8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bResumeZoom");
      if (iVar1 != 0) goto LAB_1804607d5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_1804607d5:
    ppcVar4 = local_58 + 3;
    DAT_1811120ec = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bIsGrabbingHostage");
      if (iVar1 != 0) goto LAB_180460815;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460815:
    ppcVar4 = local_58 + 3;
    DAT_1811120f0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bGrenadeParametersStashed");
      if (iVar1 != 0) goto LAB_180460855;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460855:
    ppcVar4 = local_58 + 3;
    DAT_1811120f4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_grenadeParameterStashTime");
      if (iVar1 != 0) goto LAB_180460895;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460895:
    ppcVar4 = local_58 + 3;
    DAT_1811120f8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_angStashedShootAngles");
      if (iVar1 != 0) goto LAB_1804608d5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_1804608d5:
    ppcVar4 = local_58 + 3;
    DAT_1811120fc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_vecStashedGrenadeThrowPosition");
      if (iVar1 != 0) goto LAB_180460915;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460915:
    ppcVar4 = local_58 + 3;
    DAT_181112100 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_vecStashedGrenadeThrowPawnCenter");
      if (iVar1 != 0) goto LAB_180460955;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460955:
    ppcVar4 = local_58 + 3;
    DAT_181112104 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_vecStashedVelocity");
      if (iVar1 != 0) goto LAB_180460995;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460995:
    ppcVar4 = local_58 + 3;
    DAT_181112108 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flFlinchStack");
      if (iVar1 != 0) goto LAB_1804609d5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_1804609d5:
    ppcVar4 = &local_2b0;
    local_2b0 = "C_BasePlayerPawn";
    DAT_18111210c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_hController");
      if (iVar1 != 0) goto LAB_180460a12;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2a8);
    iVar1 = 0;
LAB_180460a12:
    ppcVar4 = &local_2a8;
    local_2a8 = "C_BaseEntity";
    DAT_181112110 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_vecAbsVelocity");
      if (iVar1 != 0) goto LAB_180460a42;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_2a0);
    iVar1 = 0;
LAB_180460a42:
    ppcVar4 = local_58 + 3;
    DAT_181112114 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_iPlayerState");
      if (iVar1 != 0) goto LAB_180460a75;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460a75:
    ppcVar4 = local_58 + 3;
    DAT_181112118 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_iBlockingUseActionInProgress");
      if (iVar1 != 0) goto LAB_180460ab5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460ab5:
    ppcVar4 = local_58 + 3;
    DAT_18111211c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_bInHostageRescueZone");
      if (iVar1 != 0) goto LAB_180460af5;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460af5:
    ppcVar4 = local_58 + 3;
    DAT_181112120 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_pAimPunchServices");
      if (iVar1 != 0) goto LAB_180460b35;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460b35:
    local_2a0 = "CCSPlayer_AimPunchServices";
    ppcVar4 = &local_2a0;
    DAT_181112124 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_predictableBaseTick");
      if (iVar1 != 0) goto LAB_180460b72;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_298);
    iVar1 = 0;
LAB_180460b72:
    ppcVar4 = &local_298;
    local_298 = "CCSPlayer_AimPunchServices";
    DAT_181112128 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_predictableBaseTickInterpAmount");
      if (iVar1 != 0) goto LAB_180460ba2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_290);
    iVar1 = 0;
LAB_180460ba2:
    ppcVar4 = &local_290;
    local_290 = "CCSPlayer_AimPunchServices";
    DAT_18111212c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_predictableBaseAngle");
      if (iVar1 != 0) goto LAB_180460bd2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_288);
    iVar1 = 0;
LAB_180460bd2:
    ppcVar4 = &local_288;
    local_288 = "CCSPlayer_AimPunchServices";
    DAT_181112130 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_predictableBaseAngleVel");
      if (iVar1 != 0) goto LAB_180460c02;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_280);
    iVar1 = 0;
LAB_180460c02:
    ppcVar4 = &local_280;
    local_280 = "CCSPlayer_AimPunchServices";
    DAT_181112134 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_unpredictableBaseTick");
      if (iVar1 != 0) goto LAB_180460c32;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_278);
    iVar1 = 0;
LAB_180460c32:
    ppcVar4 = &local_278;
    local_278 = "CCSPlayer_AimPunchServices";
    DAT_181112138 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_unpredictableBaseAngle");
      if (iVar1 != 0) goto LAB_180460c62;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_270);
    iVar1 = 0;
LAB_180460c62:
    ppcVar4 = &local_270;
    local_270 = "C_BasePlayerPawn";
    DAT_18111213c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_pWaterServices");
      if (iVar1 != 0) goto LAB_180460c92;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_268);
    iVar1 = 0;
LAB_180460c92:
    local_268 = "CCSPlayer_WaterServices";
    ppcVar4 = &local_268;
    DAT_181112140 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_flWaterJumpTime");
      if (iVar1 != 0) goto LAB_180460cd2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_260);
    iVar1 = 0;
LAB_180460cd2:
    ppcVar4 = &local_260;
    local_260 = "CCSPlayer_WaterServices";
    DAT_181112144 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_vecWaterJumpVel");
      if (iVar1 != 0) goto LAB_180460d02;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_258);
    iVar1 = 0;
LAB_180460d02:
    ppcVar4 = local_58 + 3;
    DAT_181112148 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_pHostageServices");
      if (iVar1 != 0) goto LAB_180460d35;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != local_58 + 8);
    iVar1 = 0;
LAB_180460d35:
    ppcVar4 = &local_258;
    local_258 = "CCSPlayer_HostageServices";
    DAT_18111214c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_hCarriedHostage");
      if (iVar1 != 0) goto LAB_180460d72;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_250);
    iVar1 = 0;
LAB_180460d72:
    local_250 = "CBasePlayerController";
    ppcVar4 = &local_250;
    DAT_181112150 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_nInButtonsWhichAreToggles");
      if (iVar1 != 0) goto LAB_180460db2;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != ppcVar5);
    iVar1 = 0;
LAB_180460db2:
    local_248 = "CBasePlayerController";
    DAT_181112154 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nTickBase");
      if (iVar1 != 0) goto LAB_180460de2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_240);
    iVar1 = 0;
LAB_180460de2:
    ppcVar5 = &local_240;
    local_240 = "CBasePlayerController";
    DAT_181112158 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bIsLocalPlayerController");
      if (iVar1 != 0) goto LAB_180460e12;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_238);
    iVar1 = 0;
LAB_180460e12:
    ppcVar5 = &local_238;
    local_238 = "C_BaseEntity";
    DAT_18111215c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flSimulationTime");
      if (iVar1 != 0) goto LAB_180460e42;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_230);
    iVar1 = 0;
LAB_180460e42:
    ppcVar5 = &local_230;
    local_230 = "CBasePlayerController";
    DAT_181112160 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_hPawn");
      if (iVar1 != 0) goto LAB_180460e72;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_228);
    iVar1 = 0;
LAB_180460e72:
    ppcVar5 = &local_228;
    local_228 = "C_BasePlayerPawn";
    local_58[0] = "CCSPlayer_MovementServices";
    local_58[1] = "CPlayer_MovementServices_Humanoid";
    local_58[2] = "CPlayer_MovementServices";
    _DAT_181112164 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_pMovementServices");
      if (iVar1 != 0) goto LAB_180460ed2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_220);
    iVar1 = 0;
LAB_180460ed2:
    ppcVar5 = local_58;
    DAT_181112168 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nButtons");
      if (iVar1 != 0) goto LAB_180460f05;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180460f05:
    ppcVar5 = local_58;
    DAT_18111216c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nQueuedButtonDownMask");
      if (iVar1 != 0) goto LAB_180460f45;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180460f45:
    ppcVar5 = local_58;
    DAT_181112170 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nQueuedButtonChangeMask");
      if (iVar1 != 0) goto LAB_180460f85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180460f85:
    ppcVar5 = local_58;
    DAT_181112174 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nToggleButtonDownMask");
      if (iVar1 != 0) goto LAB_180460fc5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180460fc5:
    ppcVar5 = local_58;
    DAT_181112178 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flMaxspeed");
      if (iVar1 != 0) goto LAB_180461005;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461005:
    ppcVar5 = local_58;
    DAT_18111217c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_arrForceSubtickMoveWhen");
      if (iVar1 != 0) goto LAB_180461045;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461045:
    ppcVar5 = local_58;
    DAT_181112180 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flCmdForwardMove");
      if (iVar1 != 0) goto LAB_180461085;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461085:
    ppcVar5 = local_58;
    DAT_181112184 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_vecLastMovementImpulses");
      if (iVar1 != 0) goto LAB_1804610c5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_1804610c5:
    ppcVar5 = local_58;
    DAT_181112188 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flFallVelocity");
      if (iVar1 != 0) goto LAB_180461105;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461105:
    ppcVar5 = local_58;
    DAT_18111218c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bHasWalkMovedSinceLastJump");
      if (iVar1 != 0) goto LAB_180461145;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461145:
    ppcVar5 = local_58;
    DAT_181112190 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bJumpApexPending");
      if (iVar1 != 0) goto LAB_180461185;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461185:
    ppcVar5 = local_58;
    DAT_181112194 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flLastJumpVelocityZ");
      if (iVar1 != 0) goto LAB_1804611c5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_1804611c5:
    ppcVar5 = local_58;
    DAT_181112198 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flAccumulatedJumpError");
      if (iVar1 != 0) goto LAB_180461205;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461205:
    ppcVar5 = local_58;
    DAT_18111219c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_fStashGrenadeParameterWhen");
      if (iVar1 != 0) goto LAB_180461245;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461245:
    ppcVar5 = local_58;
    DAT_1811121a0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flSurfaceFriction");
      if (iVar1 != 0) goto LAB_180461285;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461285:
    ppcVar5 = local_58;
    DAT_1811121a4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_surfaceProps");
      if (iVar1 != 0) goto LAB_1804612c5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_1804612c5:
    ppcVar5 = local_58;
    DAT_1811121a8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bDucked");
      if (iVar1 != 0) goto LAB_180461305;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461305:
    ppcVar5 = local_58;
    DAT_1811121ac = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bDucking");
      if (iVar1 != 0) goto LAB_180461345;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461345:
    ppcVar5 = local_58;
    DAT_1811121b0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bDesiresDuck");
      if (iVar1 != 0) goto LAB_180461385;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461385:
    ppcVar5 = local_58;
    DAT_1811121b4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bDuckOverride");
      if (iVar1 != 0) goto LAB_1804613c5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_1804613c5:
    ppcVar5 = local_58;
    DAT_1811121b8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flDuckAmount");
      if (iVar1 != 0) goto LAB_180461405;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461405:
    ppcVar5 = local_58;
    DAT_1811121bc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flDuckSpeed");
      if (iVar1 != 0) goto LAB_180461445;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461445:
    ppcVar5 = local_58;
    DAT_1811121c0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flLastDuckTime");
      if (iVar1 != 0) goto LAB_180461485;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461485:
    ppcVar5 = local_58;
    DAT_1811121c4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_vecLastPositionAtFullCrouchSpeed");
      if (iVar1 != 0) goto LAB_1804614c5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_1804614c5:
    ppcVar5 = local_58;
    DAT_1811121c8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flStamina");
      if (iVar1 != 0) goto LAB_180461505;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461505:
    ppcVar5 = local_58;
    DAT_1811121cc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_vecLadderNormal");
      if (iVar1 != 0) goto LAB_180461545;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461545:
    ppcVar5 = local_58;
    DAT_1811121d0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bUseFrictionStashedSpeed");
      if (iVar1 != 0) goto LAB_180461585;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461585:
    ppcVar5 = local_58;
    DAT_1811121d4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flUseFrictionStashedSpeedUntilFrac");
      if (iVar1 != 0) goto LAB_1804615c5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_1804615c5:
    ppcVar5 = local_58;
    DAT_1811121d8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flFrictionStashedSpeed");
      if (iVar1 != 0) goto LAB_180461605;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461605:
    ppcVar5 = local_58;
    DAT_1811121dc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_vecWalkWishVel");
      if (iVar1 != 0) goto LAB_180461645;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461645:
    ppcVar5 = local_58;
    DAT_1811121e0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flDuckRootOffset");
      if (iVar1 != 0) goto LAB_180461685;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461685:
    ppcVar5 = local_58;
    DAT_1811121e4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flDuckViewOffset");
      if (iVar1 != 0) goto LAB_1804616c5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_1804616c5:
    ppcVar5 = local_58;
    DAT_1811121e8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flBombPlantViewOffset");
      if (iVar1 != 0) goto LAB_180461705;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461705:
    ppcVar5 = local_58;
    DAT_1811121ec = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bUsingGroundTopologyOffset");
      if (iVar1 != 0) goto LAB_180461745;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461745:
    ppcVar5 = local_58;
    DAT_1811121f0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flUsingGroundTopologyOffsetTransitionSmoothing");
      if (iVar1 != 0) goto LAB_180461785;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461785:
    ppcVar5 = local_58;
    DAT_1811121f4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nLastJumpTick");
      if (iVar1 != 0) goto LAB_1804617c5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_1804617c5:
    ppcVar5 = local_58;
    DAT_1811121f8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_LegacyJump");
      if (iVar1 != 0) goto LAB_180461805;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_180461805:
    local_220 = "CCSPlayerLegacyJump";
    ppcVar5 = &local_220;
    DAT_1811121fc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bOldJumpPressed");
      if (iVar1 != 0) goto LAB_180461842;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_218);
    iVar1 = 0;
LAB_180461842:
    ppcVar5 = &local_218;
    local_218 = "CCSPlayerLegacyJump";
    DAT_181112200 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flJumpPressedTime");
      if (iVar1 != 0) goto LAB_180461872;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_210);
    iVar1 = 0;
LAB_180461872:
    ppcVar5 = local_58;
    DAT_181112204 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_ModernJump");
      if (iVar1 != 0) goto LAB_1804618a5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58 + 3);
    iVar1 = 0;
LAB_1804618a5:
    local_210 = "CCSPlayerModernJump";
    ppcVar5 = &local_210;
    DAT_181112208 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nLastActualJumpPressTick");
      if (iVar1 != 0) goto LAB_1804618e2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_208);
    iVar1 = 0;
LAB_1804618e2:
    ppcVar5 = &local_208;
    local_208 = "CCSPlayerModernJump";
    DAT_18111220c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nLastUsableJumpPressTick");
      if (iVar1 != 0) goto LAB_180461912;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_200);
    iVar1 = 0;
LAB_180461912:
    ppcVar5 = &local_200;
    local_200 = "CCSPlayerModernJump";
    DAT_181112210 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nLastLandedTick");
      if (iVar1 != 0) goto LAB_180461942;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1f8);
    iVar1 = 0;
LAB_180461942:
    ppcVar5 = &local_1f8;
    local_1f8 = "CCSPlayerModernJump";
    DAT_181112214 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flLastLandedVelocityX");
      if (iVar1 != 0) goto LAB_180461972;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1f0);
    iVar1 = 0;
LAB_180461972:
    ppcVar5 = &local_1f0;
    local_1f0 = "C_BasePlayerPawn";
    DAT_181112218 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_pWeaponServices");
      if (iVar1 != 0) goto LAB_1804619a2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1e8);
    iVar1 = 0;
LAB_1804619a2:
    ppcVar5 = &local_1e8;
    local_1e8 = "CPlayer_WeaponServices";
    DAT_18111221c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_hActiveWeapon");
      if (iVar1 != 0) goto LAB_1804619e2;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1e0);
    iVar1 = 0;
LAB_1804619e2:
    local_1e0 = "CCSPlayer_WeaponServices";
    ppcVar5 = &local_1e0;
    DAT_181112220 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flNextAttack");
      if (iVar1 != 0) goto LAB_180461a22;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1d8);
    iVar1 = 0;
LAB_180461a22:
    ppcVar5 = &local_1d8;
    local_1d8 = "CCSPlayer_WeaponServices";
    DAT_181112224 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nOldTotalShootPositionHistoryCount");
      if (iVar1 != 0) goto LAB_180461a52;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1d0);
    iVar1 = 0;
LAB_180461a52:
    ppcVar5 = &local_1d0;
    local_1d0 = "CCSPlayer_WeaponServices";
    DAT_181112228 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nOldTotalInputHistoryCount");
      if (iVar1 != 0) goto LAB_180461a85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1c8);
    iVar1 = 0;
LAB_180461a85:
    local_1c8 = "C_BasePlayerWeapon";
    ppcVar5 = &local_1c8;
    DAT_18111222c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nNextPrimaryAttackTick");
      if (iVar1 != 0) goto LAB_180461ac5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1c0);
    iVar1 = 0;
LAB_180461ac5:
    ppcVar5 = &local_1c0;
    local_1c0 = "C_BasePlayerWeapon";
    DAT_181112230 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nNextSecondaryAttackTick");
      if (iVar1 != 0) goto LAB_180461b05;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1b8);
    iVar1 = 0;
LAB_180461b05:
    local_1b8 = "C_CSWeaponBase";
    ppcVar5 = &local_1b8;
    DAT_181112234 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nPostponeFireReadyTicks");
      if (iVar1 != 0) goto LAB_180461b45;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1b0);
    iVar1 = 0;
LAB_180461b45:
    ppcVar5 = &local_1b0;
    local_1b0 = "C_CSWeaponBase";
    DAT_181112238 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flWatTickOffset");
      if (iVar1 != 0) goto LAB_180461b85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1a8);
    iVar1 = 0;
LAB_180461b85:
    ppcVar5 = &local_1a8;
    local_1a8 = "C_CSWeaponBaseGun";
    DAT_18111223c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_zoomLevel");
      if (iVar1 != 0) goto LAB_180461bc5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_1a0);
    iVar1 = 0;
LAB_180461bc5:
    ppcVar5 = &local_1a0;
    local_1a0 = "C_BasePlayerWeapon";
    DAT_181112240 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_iClip1");
      if (iVar1 != 0) goto LAB_180461c05;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_198);
    iVar1 = 0;
LAB_180461c05:
    ppcVar5 = &local_198;
    local_198 = "C_BasePlayerWeapon";
    DAT_181112244 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_iClip2");
      if (iVar1 != 0) goto LAB_180461c45;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_190);
    iVar1 = 0;
LAB_180461c45:
    ppcVar5 = &local_190;
    local_190 = "C_CSWeaponBase";
    DAT_181112248 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flRecoilIndex");
      if (iVar1 != 0) goto LAB_180461c85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_188);
    iVar1 = 0;
LAB_180461c85:
    ppcVar5 = &local_188;
    local_188 = "C_CSWeaponBase";
    DAT_18111224c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_fAccuracyPenalty");
      if (iVar1 != 0) goto LAB_180461cc5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_180);
    iVar1 = 0;
LAB_180461cc5:
    ppcVar5 = &local_180;
    local_180 = "C_CSWeaponBase";
    DAT_181112250 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_fLastShotTime");
      if (iVar1 != 0) goto LAB_180461d05;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_178);
    iVar1 = 0;
LAB_180461d05:
    ppcVar5 = &local_178;
    local_178 = "C_CSWeaponBase";
    DAT_181112254 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_weaponMode");
      if (iVar1 != 0) goto LAB_180461d45;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_170);
    iVar1 = 0;
LAB_180461d45:
    ppcVar5 = &local_170;
    local_170 = "C_C4";
    DAT_181112258 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bStartedArming");
      if (iVar1 != 0) goto LAB_180461d85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_168);
    iVar1 = 0;
LAB_180461d85:
    ppcVar5 = &local_168;
    local_168 = "C_CSWeaponBase";
    DAT_18111225c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bBurstMode");
      if (iVar1 != 0) goto LAB_180461dc5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_160);
    iVar1 = 0;
LAB_180461dc5:
    ppcVar5 = &local_160;
    local_160 = "C_CSWeaponBase";
    DAT_181112260 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bIsHauledBack");
      if (iVar1 != 0) goto LAB_180461e05;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_158);
    iVar1 = 0;
LAB_180461e05:
    ppcVar5 = &local_158;
    local_158 = "C_CSWeaponBase";
    DAT_181112264 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bFireOnEmpty");
      if (iVar1 != 0) goto LAB_180461e45;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_150);
    iVar1 = 0;
LAB_180461e45:
    ppcVar5 = &local_150;
    local_150 = "C_CSWeaponBase";
    DAT_181112268 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bInReload");
      if (iVar1 != 0) goto LAB_180461e85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_148);
    iVar1 = 0;
LAB_180461e85:
    local_148 = "C_BaseCSGrenade";
    ppcVar5 = &local_148;
    DAT_18111226c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bPinPulled");
      if (iVar1 != 0) goto LAB_180461ec5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_140);
    iVar1 = 0;
LAB_180461ec5:
    ppcVar5 = &local_140;
    local_140 = "C_BaseCSGrenade";
    DAT_181112270 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bJustPulledPin");
      if (iVar1 != 0) goto LAB_180461f05;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_138);
    iVar1 = 0;
LAB_180461f05:
    ppcVar5 = &local_138;
    local_138 = "C_BaseCSGrenade";
    DAT_181112274 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bRedraw");
      if (iVar1 != 0) goto LAB_180461f45;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_130);
    iVar1 = 0;
LAB_180461f45:
    ppcVar5 = &local_130;
    local_130 = "C_BaseCSGrenade";
    DAT_181112278 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bIsHeldByPlayer");
      if (iVar1 != 0) goto LAB_180461f85;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_128);
    iVar1 = 0;
LAB_180461f85:
    ppcVar5 = &local_128;
    local_128 = "C_BaseCSGrenade";
    DAT_18111227c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bJumpThrow");
      if (iVar1 != 0) goto LAB_180461fc5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_120);
    iVar1 = 0;
LAB_180461fc5:
    ppcVar5 = &local_120;
    local_120 = "C_BaseCSGrenade";
    DAT_181112280 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flThrowStrength");
      if (iVar1 != 0) goto LAB_180462005;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_118);
    iVar1 = 0;
LAB_180462005:
    ppcVar5 = &local_118;
    local_118 = "C_BaseCSGrenade";
    DAT_181112284 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_fThrowTime");
      if (iVar1 != 0) goto LAB_180462045;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_110);
    iVar1 = 0;
LAB_180462045:
    ppcVar5 = &local_110;
    local_110 = "C_BaseCSGrenade";
    DAT_181112288 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nNextHoldTick");
      if (iVar1 != 0) goto LAB_180462085;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_108);
    iVar1 = 0;
LAB_180462085:
    local_108 = "C_BaseEntity";
    ppcVar5 = &local_108;
    DAT_18111228c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nSubclassID");
      if (iVar1 != 0) goto LAB_1804620c6;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_100);
    iVar1 = 0;
LAB_1804620c6:
    ppcVar5 = &local_100;
    local_100 = "C_EconEntity";
    DAT_181112290 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_AttributeManager");
      if (iVar1 != 0) break;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_f8);
    local_f8 = "C_AttributeContainer";
    ppcVar5 = &local_f8;
    do {
      iVar2 = FUN_18038eaf0(*ppcVar5,"m_Item");
      if (iVar2 != 0) break;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_f0);
    local_f0 = "C_EconItemView";
    ppcVar5 = &local_f0;
    do {
      iVar3 = FUN_18038eaf0(*ppcVar5,"m_iItemDefinitionIndex");
      if (iVar3 != 0) goto LAB_180462185;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_e8);
    iVar3 = 0;
LAB_180462185:
    if (((iVar1 == 0) || (iVar2 == 0)) || (iVar3 == 0)) {
      DAT_181112294 = 0;
    }
    else {
      DAT_181112294 = iVar3 + iVar2 + iVar1;
    }
    local_e8 = "CCSWeaponBaseVData";
    ppcVar5 = &local_e8;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flSpread");
      if (iVar1 != 0) goto LAB_1804621e5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_e0);
    iVar1 = 0;
LAB_1804621e5:
    ppcVar5 = &local_e0;
    local_e0 = "CCSWeaponBaseVData";
    DAT_181112298 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flMaxSpeed");
      if (iVar1 != 0) goto LAB_180462225;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_d8);
    iVar1 = 0;
LAB_180462225:
    ppcVar5 = &local_d8;
    local_d8 = "CSkeletonInstance";
    DAT_18111229c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_modelState");
      if (iVar1 != 0) goto LAB_180462265;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_d0);
    iVar1 = 0;
LAB_180462265:
    ppcVar5 = &local_d0;
    local_d0 = "CModelState";
    DAT_1811122a0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_flRootBoneOffset_x");
      if (iVar1 != 0) goto LAB_1804622a5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_c8);
    iVar1 = 0;
LAB_1804622a5:
    local_c8 = "C_CSGameRules";
    local_c0 = "C_GameRules";
    ppcVar5 = &local_c8;
    DAT_1811122a4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bFreezePeriod");
      if (iVar1 != 0) goto LAB_1804622f5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_b8);
    iVar1 = 0;
LAB_1804622f5:
    ppcVar5 = &local_b8;
    local_b8 = "C_CSGameRules";
    local_b0 = "C_GameRules";
    DAT_1811122a8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_fRoundStartTime");
      if (iVar1 != 0) goto LAB_180462335;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_a8);
    iVar1 = 0;
LAB_180462335:
    ppcVar5 = &local_a8;
    local_a8 = "C_CSGameRules";
    local_a0 = "C_GameRules";
    DAT_1811122ac = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bGamePaused");
      if (iVar1 != 0) goto LAB_180462375;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_98);
    iVar1 = 0;
LAB_180462375:
    ppcVar5 = &local_98;
    local_98 = "C_CSGameRules";
    local_90 = "C_GameRules";
    DAT_1811122b0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nPauseStartTick");
      if (iVar1 != 0) goto LAB_1804623b5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_88);
    iVar1 = 0;
LAB_1804623b5:
    ppcVar5 = &local_88;
    local_88 = "C_CSGameRules";
    local_80 = "C_GameRules";
    DAT_1811122b4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_nTotalPausedTicks");
      if (iVar1 != 0) goto LAB_1804623f5;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_78);
    iVar1 = 0;
LAB_1804623f5:
    local_78 = "C_CSGameRules";
    ppcVar5 = &local_78;
    local_70 = "C_GameRules";
    DAT_1811122b8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_RetakeRules");
      if (iVar1 != 0) goto LAB_180462445;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != &local_68);
    iVar1 = 0;
LAB_180462445:
    ppcVar5 = &local_68;
    local_68 = "C_RetakeGameRules";
    local_60 = "CRetakeGameRules";
    DAT_1811122bc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar5,"m_bBlockersPresent");
      if (iVar1 != 0) goto LAB_180462495;
      ppcVar5 = ppcVar5 + 1;
    } while (ppcVar5 != local_58);
    iVar1 = 0;
LAB_180462495:
    DAT_1811122c0 = iVar1;
  }
  return;
}



/* ===== 1804624c0 FUN_1804624c0 ===== */

void FUN_1804624c0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_180c8a520 == '\0') {
    DAT_180c8a520 = '\x01';
    DAT_180c8a518 = FUN_180264b70(PTR_s_sv_quantize_movement_input_180c8a510);
  }
  cVar1 = '\0';
  if (DAT_180c8a518 != 0) {
    cVar1 = FUN_180264d70(DAT_180c8a518);
  }
  *(bool *)(param_1 + 0x2c8) = cVar1 != '\0';
  if (DAT_180c8a5e0 == '\0') {
    DAT_180c8a5e0 = '\x01';
    DAT_180c8a5d8 = FUN_180264b70(PTR_s_sv_autobunnyhopping_180c8a5d0);
  }
  cVar1 = '\0';
  if (DAT_180c8a5d8 != 0) {
    cVar1 = FUN_180264d70(DAT_180c8a5d8);
  }
  *(bool *)(param_1 + 0x2c9) = cVar1 != '\0';
  if (DAT_180c8a700 == '\0') {
    DAT_180c8a700 = '\x01';
    DAT_180c8a6f8 = FUN_180264b70(PTR_s_sv_legacy_jump_180c8a6f0);
  }
  cVar1 = '\0';
  if (DAT_180c8a6f8 != 0) {
    cVar1 = FUN_180264d70(DAT_180c8a6f8);
  }
  *(bool *)(param_1 + 0x2cc) = cVar1 != '\0';
  if (DAT_180c8a4a8 == '\0') {
    DAT_180c8a4a8 = '\x01';
    DAT_180c8a4a0 = FUN_180264b70(PTR_s_sv_jump_precision_enable_180c8a498);
  }
  cVar1 = '\0';
  if (DAT_180c8a4a0 != 0) {
    cVar1 = FUN_180264d70(DAT_180c8a4a0);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2d0);
  *(bool *)(param_1 + 0x2cd) = cVar1 != '\0';
  if (DAT_180c8a6b8 == '\0') {
    DAT_180c8a6b8 = '\x01';
    DAT_180c8a6b0 = FUN_180264b70(PTR_s_sv_bhop_time_window_180c8a6a8);
  }
  if (DAT_180c8a6b0 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a6b0);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2d0) = uVar2;
  if (DAT_180c8a628 == '\0') {
    DAT_180c8a628 = '\x01';
    DAT_180c8a620 = FUN_180264b70(PTR_s_sv_jump_impulse_180c8a618);
  }
  if (DAT_180c8a620 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a620);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2d4) = uVar3;
  if (DAT_180c8a7a8 == '\0') {
    DAT_180c8a7a8 = '\x01';
    DAT_180c8a7a0 = FUN_180264b70(PTR_s_sv_staminamax_180c8a798);
  }
  if (DAT_180c8a7a0 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a7a0);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  if (DAT_180c8a580 == '\0') {
    DAT_180c8a580 = '\x01';
    DAT_180c8a578 = FUN_180264b70(PTR_s_sv_staminarecoveryrate_180c8a570);
  }
  if (DAT_180c8a578 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a578);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x2dc) = uVar3;
  if (DAT_180c8a4d8 == '\0') {
    DAT_180c8a4d8 = '\x01';
    DAT_180c8a4d0 = FUN_180264b70(PTR_s_sv_staminajumpcost_180c8a4c8);
  }
  if (DAT_180c8a4d0 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a4d0);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined4 *)(param_1 + 0x2e0) = uVar2;
  if (DAT_180c8a7d8 == '\0') {
    DAT_180c8a7d8 = '\x01';
    DAT_180c8a7d0 = FUN_180264b70(PTR_s_sv_staminalandcost_180c8a7c8);
  }
  if (DAT_180c8a7d0 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a7d0);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2e4) = uVar3;
  if (DAT_180c8a688 == '\0') {
    DAT_180c8a688 = '\x01';
    DAT_180c8a680 = FUN_180264b70(PTR_s_sv_gravity_180c8a678);
  }
  if (DAT_180c8a680 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a680);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(param_1 + 0x2e8) = uVar2;
  if (DAT_180c8a640 == '\0') {
    DAT_180c8a640 = '\x01';
    DAT_180c8a638 = FUN_180264b70(PTR_s_sv_bounce_180c8a630);
  }
  if (DAT_180c8a638 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a638);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2ec) = uVar3;
  if (DAT_180c8a748 == '\0') {
    DAT_180c8a748 = '\x01';
    DAT_180c8a740 = FUN_180264b70(PTR_s_sv_stepsize_180c8a738);
  }
  if (DAT_180c8a740 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a740);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  if (DAT_180c8a778 == '\0') {
    DAT_180c8a778 = '\x01';
    DAT_180c8a770 = FUN_180264b70(PTR_s_sv_water_slow_amount_180c8a768);
  }
  if (DAT_180c8a770 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a770);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2f4) = uVar3;
  if (DAT_180c8a538 == '\0') {
    DAT_180c8a538 = '\x01';
    DAT_180c8a530 = FUN_180264b70(PTR_s_sv_air_max_wishspeed_180c8a528);
  }
  if (DAT_180c8a530 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a530);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(param_1 + 0x2f8) = uVar2;
  if (DAT_180c8a490 == '\0') {
    DAT_180c8a490 = '\x01';
    DAT_180c8a488 = FUN_180264b70(PTR_s_sv_walkable_normal_180c8a480);
  }
  if (DAT_180c8a488 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a488);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x2fc) = uVar3;
  if (DAT_180c8a598 == '\0') {
    DAT_180c8a598 = '\x01';
    DAT_180c8a590 = FUN_180264b70(PTR_s_sv_standable_normal_180c8a588);
  }
  if (DAT_180c8a590 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a590);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x304);
  *(undefined4 *)(param_1 + 0x300) = uVar2;
  if (DAT_180c8a5c8 == '\0') {
    DAT_180c8a5c8 = '\x01';
    DAT_180c8a5c0 = FUN_180264b70(PTR_s_sv_jump_spam_penalty_time_180c8a5b8);
  }
  if (DAT_180c8a5c0 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a5c0);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x304) = uVar3;
  if (DAT_180c8a6e8 == '\0') {
    DAT_180c8a6e8 = '\x01';
    DAT_180c8a6e0 = FUN_180264b70(PTR_s_sv_maxvelocity_180c8a6d8);
  }
  if (DAT_180c8a6e0 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a6e0);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(param_1 + 0x308) = uVar2;
  if (DAT_180c8a670 == '\0') {
    DAT_180c8a670 = '\x01';
    DAT_180c8a668 = FUN_180264b70(PTR_s_sv_timebetweenducks_180c8a660);
  }
  if (DAT_180c8a668 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a668);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(param_1 + 0x30c) = uVar3;
  if (DAT_180c8a568 == '\0') {
    DAT_180c8a568 = '\x01';
    DAT_180c8a560 = FUN_180264b70(PTR_s_sv_ladder_angle_180c8a558);
  }
  if (DAT_180c8a560 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a560);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(param_1 + 0x310) = uVar2;
  if (DAT_180c8a4f0 == '\0') {
    DAT_180c8a4f0 = '\x01';
    DAT_180c8a4e8 = FUN_180264b70(PTR_s_sv_ladder_dampen_180c8a4e0);
  }
  if (DAT_180c8a4e8 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a4e8);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(param_1 + 0x314) = uVar3;
  if (DAT_180c8a508 == '\0') {
    DAT_180c8a508 = '\x01';
    DAT_180c8a500 = FUN_180264b70(PTR_s_sv_ladder_scale_speed_180c8a4f8);
  }
  if (DAT_180c8a500 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a500);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x318) = uVar2;
  if (DAT_180c8a550 == '\0') {
    DAT_180c8a550 = '\x01';
    DAT_180c8a548 = FUN_180264b70(PTR_s_sv_falldamage_scale_180c8a540);
  }
  if (DAT_180c8a548 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a548);
  }
  uVar2 = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x31c) = uVar3;
  if (DAT_180c8a7c0 == '\0') {
    DAT_180c8a7c0 = '\x01';
    DAT_180c8a7b8 = FUN_180264b70(PTR_s_sv_friction_180c8a7b0);
  }
  if (DAT_180c8a7b8 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a7b8);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x324);
  *(undefined4 *)(param_1 + 800) = uVar2;
  if (DAT_180c8a478 == '\0') {
    DAT_180c8a478 = '\x01';
    DAT_180c8a470 = FUN_180264b70(PTR_s_sv_accelerate_180c8a468);
  }
  if (DAT_180c8a470 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a470);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x328);
  *(undefined4 *)(param_1 + 0x324) = uVar3;
  if (DAT_180c8a658 == '\0') {
    DAT_180c8a658 = '\x01';
    DAT_180c8a650 = FUN_180264b70(PTR_s_sv_stopspeed_180c8a648);
  }
  if (DAT_180c8a650 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a650);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(param_1 + 0x328) = uVar2;
  if (DAT_180c8a6a0 == '\0') {
    DAT_180c8a6a0 = '\x01';
    DAT_180c8a698 = FUN_180264b70(PTR_s_sv_step_move_vel_min_180c8a690);
  }
  if (DAT_180c8a698 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a698);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x32c) = uVar3;
  if (DAT_180c8a730 == '\0') {
    DAT_180c8a730 = '\x01';
    DAT_180c8a728 = FUN_180264b70(PTR_s_sv_airaccelerate_180c8a720);
  }
  if (DAT_180c8a728 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a728);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(param_1 + 0x330) = uVar2;
  if (DAT_180c8a6d0 == '\0') {
    DAT_180c8a6d0 = '\x01';
    DAT_180c8a6c8 = FUN_180264b70(PTR_s_sv_noclipaccelerate_180c8a6c0);
  }
  if (DAT_180c8a6c8 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a6c8);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x334) = uVar3;
  if (DAT_180c8a718 == '\0') {
    DAT_180c8a718 = '\x01';
    DAT_180c8a710 = FUN_180264b70(PTR_s_sv_noclipspeed_180c8a708);
  }
  if (DAT_180c8a710 != 0) {
    uVar2 = FUN_180264d70(DAT_180c8a710);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x33c);
  *(undefined4 *)(param_1 + 0x338) = uVar2;
  if (DAT_180c8a4c0 == '\0') {
    DAT_180c8a4c0 = '\x01';
    DAT_180c8a4b8 = FUN_180264b70(PTR_s_sv_maxspeed_180c8a4b0);
  }
  if (DAT_180c8a4b8 != 0) {
    uVar3 = FUN_180264d70(DAT_180c8a4b8);
  }
  *(undefined4 *)(param_1 + 0x33c) = uVar3;
  if (DAT_180c8a5b0 == '\0') {
    DAT_180c8a5b0 = '\x01';
    DAT_180c8a5a8 = FUN_180264b70(PTR_s_sv_subtick_movement_view_angles_180c8a5a0);
  }
  if (DAT_180c8a5a8 == 0) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = FUN_180264d70(DAT_180c8a5a8);
  }
  *(bool *)(param_1 + 0x348) = cVar1 != '\0';
  if (DAT_180c8a790 == '\0') {
    DAT_180c8a790 = '\x01';
    DAT_180c8a788 = FUN_180264b70(PTR_s_sv_accelerate_use_weapon_speed_180c8a780);
  }
  cVar1 = '\0';
  if (DAT_180c8a788 != 0) {
    cVar1 = FUN_180264d70(DAT_180c8a788);
  }
  *(bool *)(param_1 + 0x349) = cVar1 != '\0';
  return;
}



/* ===== 180462ef0 FUN_180462ef0 ===== */

undefined8 FUN_180462ef0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_180961cb8 == (code *)0x0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_180961cb8)(param_1,0,0);
  }
  return uVar1;
}



/* ===== 180462f20 FUN_180462f20 ===== */

undefined8 FUN_180462f20(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_180962028 == (code *)0x0) || (0x7ffffffefffe < param_1 - 0x10000U)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_180962028)();
  }
  return uVar1;
}



/* ===== 180462f60 FUN_180462f60 ===== */

undefined4 FUN_180462f60(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  char *_Str1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  _Str1 = (char *)FUN_1803a0710(local_res8);
  if (_Str1 == (char *)0x0) {
    return 0;
  }
  lVar1 = FUN_1804ef120(_Str1,"Grenade");
  if ((((lVar1 == 0) && (iVar2 = strcmp(_Str1,"C_Flashbang"), iVar2 != 0)) &&
      (iVar2 = strcmp(_Str1,"C_DecoyGrenade"), iVar2 != 0)) &&
     (((iVar2 = strcmp(_Str1,"C_MolotovGrenade"), iVar2 != 0 &&
       (iVar2 = strcmp(_Str1,"C_IncendiaryGrenade"), iVar2 != 0)) &&
      ((iVar2 = strcmp(_Str1,"C_SmokeGrenade"), iVar2 != 0 &&
       (iVar2 = strcmp(_Str1,"C_HEGrenade"), iVar2 != 0)))))) {
    return 0;
  }
  return 1;
}



/* ===== 180463020 FUN_180463020 ===== */

void FUN_180463020(longlong param_1)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  float fVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  float local_res8 [2];
  
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x768) = *(undefined1 *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x769) = *(undefined1 *)(param_1 + 0x72);
  *(undefined1 *)(param_1 + 0x76a) = *(undefined1 *)(param_1 + 0xaa);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0x168);
  fVar1 = DAT_1808ac34c;
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(param_1 + 0x35c);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0x360);
  if (DAT_180c8e9e8 == 0) {
    if (DAT_180c8e9f0 == '\0') {
      DAT_180c8e9e8 = FUN_180264b70(PTR_s_weapon_air_spread_scale_180c8e9e0);
      DAT_180c8e9f0 = DAT_180c8e9e8 == 0;
      if (DAT_180c8e9e8 != 0) goto LAB_1804630fe;
    }
LAB_180463125:
    fVar5 = fVar1;
  }
  else {
LAB_1804630fe:
    local_res8[0] = (float)FUN_180264d70(DAT_180c8e9e8);
    fVar5 = local_res8[0];
    if (((uint)local_res8[0] & 0x7f800000) == 0x7f800000) goto LAB_180463125;
  }
  *(float *)(param_1 + 0x798) = fVar5;
  if (DAT_180c8e9b8 == 0) {
    if (DAT_180c8e9c0 == '\0') {
      DAT_180c8e9b8 = FUN_180264b70(PTR_s_weapon_accuracy_forcespread_180c8e9b0);
      DAT_180c8e9c0 = DAT_180c8e9b8 == 0;
      if (DAT_180c8e9b8 != 0) goto LAB_180463169;
    }
LAB_180463190:
    fVar5 = 0.0;
  }
  else {
LAB_180463169:
    fVar5 = (float)FUN_180264d70(DAT_180c8e9b8);
    local_res8[0] = fVar5;
    if (((uint)fVar5 & 0x7f800000) == 0x7f800000) goto LAB_180463190;
  }
  *(float *)(param_1 + 0x79c) = fVar5;
  if (DAT_180c8ea00 == 0) {
    if (DAT_180c8ea08 == '\0') {
      DAT_180c8ea00 = FUN_180264b70(PTR_s_weapon_accuracy_nospread_180c8e9f8);
      DAT_180c8ea08 = DAT_180c8ea00 == 0;
      if (DAT_180c8ea00 != 0) goto LAB_1804631d1;
    }
LAB_1804631e1:
    uVar3 = 0;
  }
  else {
LAB_1804631d1:
    cVar2 = FUN_180264d70(DAT_180c8ea00);
    if (cVar2 == '\0') goto LAB_1804631e1;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x7a0) = uVar3;
  if (DAT_180c8e9d0 == 0) {
    if (DAT_180c8e9d8 == '\0') {
      DAT_180c8e9d0 = FUN_180264b70(PTR_s_sv_jump_impulse_180c8e9c8);
      DAT_180c8e9d8 = DAT_180c8e9d0 == 0;
      if (DAT_180c8e9d0 != 0) goto LAB_18046321f;
    }
LAB_180463246:
    fVar5 = DAT_1808acbb8;
  }
  else {
LAB_18046321f:
    local_res8[0] = (float)FUN_180264d70(DAT_180c8e9d0);
    fVar5 = local_res8[0];
    if (((uint)local_res8[0] & 0x7f800000) == 0x7f800000) goto LAB_180463246;
  }
  *(float *)(param_1 + 0x778) = fVar5;
  if (DAT_180c8a5f8 == '\0') {
    DAT_180c8a5f8 = '\x01';
    DAT_180c8a5f0 = FUN_180264b70(PTR_s_cl_debounce_zoom_180c8a5e8);
  }
  cVar2 = '\0';
  if (DAT_180c8a5f0 != 0) {
    cVar2 = FUN_180264d70(DAT_180c8a5f0);
  }
  *(bool *)(param_1 + 0x744) = cVar2 != '\0';
  if (*(int *)(param_1 + 0x34c) - 1U < 0xfffffffe) {
    plVar6 = (longlong *)FUN_1803a0940(local_res8);
    lVar8 = *plVar6;
    *(longlong *)(param_1 + 0x7a8) = lVar8;
    if ((lVar8 == 0) || (DAT_181112290 == 0)) goto LAB_180463306;
    lVar7 = FUN_18000f3a0((ulonglong)DAT_181112290 + 8 + lVar8);
    *(longlong *)(param_1 + 0x7b0) = lVar7;
    if (0x7ffffffefffe < lVar7 - 0x10000U) goto LAB_180463314;
LAB_180463320:
    if (DAT_181112294 == 0) goto LAB_18046333c;
    uVar4 = FUN_180011440(lVar8 + (ulonglong)DAT_181112294);
    *(undefined2 *)(param_1 + 0x7b8) = uVar4;
LAB_18046334a:
    cVar2 = FUN_180462f60(lVar8);
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_18046335c;
    }
  }
  else {
    lVar8 = 0;
    *(undefined8 *)(param_1 + 0x7a8) = 0;
LAB_180463306:
    *(undefined8 *)(param_1 + 0x7b0) = 0;
LAB_180463314:
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    if (lVar8 != 0) goto LAB_180463320;
LAB_18046333c:
    *(undefined2 *)(param_1 + 0x7b8) = 0;
    if (lVar8 != 0) goto LAB_18046334a;
  }
  uVar3 = 0;
LAB_18046335c:
  *(undefined1 *)(param_1 + 0x74c) = uVar3;
  fVar5 = (float)FUN_180462f20(*(undefined8 *)(param_1 + 0x150));
  if (((((uint)fVar5 & 0x7f800000) != 0x7f800000) && (0.0 <= fVar5)) && (fVar5 < fVar1)) {
    *(float *)(param_1 + 0x748) = fVar5;
    return;
  }
  *(undefined4 *)(param_1 + 0x748) = 0;
  return;
}



/* ===== 1804633d0 FUN_1804633d0 ===== */

void FUN_1804633d0(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  char **ppcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res8 [2];
  char *local_78;
  char *local_70 [9];
  
  FUN_1804600d0();
  if (0x7ffffffefffe < param_1 - 0x10000U) {
    return;
  }
  if (DAT_1811120a4 == 0) {
    return;
  }
  if (0x7ffffffefffe < ((ulonglong)DAT_1811120a4 + param_1) - 0x10000) {
    return;
  }
  cVar3 = FUN_180011220();
  if (cVar3 == '\0') {
    return;
  }
  lVar8 = FUN_180266660();
  bVar1 = false;
  if (DAT_180c8a760 == '\0') {
    DAT_180c8a760 = '\x01';
    DAT_180c8a758 = FUN_180264b70(PTR_s_sv_skirmish_id_180c8a750);
  }
  iVar5 = 0;
  if (DAT_180c8a758 != 0) {
    iVar5 = FUN_180264d70(DAT_180c8a758);
  }
  if (((iVar5 == 0xc) && (lVar8 != 0)) && (DAT_1811122bc != 0)) {
    if (DAT_1811122c0 != 0) {
      if ((((ulonglong)DAT_1811122bc + lVar8 != 0) && (DAT_1811122c0 != 0)) &&
         (((ulonglong)DAT_1811122c0 + (ulonglong)DAT_1811122bc + lVar8) - 0x10000 < 0x7ffffffeffff))
      {
        cVar3 = FUN_180011220();
        if (cVar3 == '\x01') {
          if ((DAT_1811120b4 != 0) &&
             (((ulonglong)DAT_1811120b4 + param_1) - 0x10000 < 0x7ffffffeffff)) {
            cVar3 = FUN_180011220();
            if (cVar3 == '\x02') {
              bVar2 = true;
              if ((DAT_18111221c == 0) ||
                 (0x7ffffffefffe < ((ulonglong)DAT_18111221c + param_1) - 0x10000)) {
                lVar9 = 0;
              }
              else {
                lVar9 = FUN_18000f3a0();
              }
              local_78 = "CPlayer_WeaponServices";
              ppcVar12 = &local_78;
              do {
                uVar6 = FUN_18038eaf0(*ppcVar12,"m_hMyWeapons");
                if (uVar6 != 0) break;
                ppcVar12 = ppcVar12 + 1;
              } while (ppcVar12 != local_70);
              bVar1 = true;
              if ((lVar9 - 0x10000U < 0x7ffffffeffff) && (uVar6 != 0)) {
                iVar5 = FUN_180011200((ulonglong)uVar6 + lVar9);
                lVar9 = FUN_18000f3a0((ulonglong)uVar6 + lVar9 + 8);
                iVar11 = 0;
                bVar1 = bVar2;
                if (0 < iVar5) {
                  do {
                    if ((0x3f < iVar11) || (0x7ffffffefffe < lVar9 - 0x10000U)) break;
                    iVar7 = FUN_180011200(lVar9 + (longlong)iVar11 * 4);
                    if (iVar7 - 1U < 0xfffffffe) {
                      plVar10 = (longlong *)FUN_1803a0940(local_res8,iVar7);
                      if (((*plVar10 != 0) && (DAT_181112294 != 0)) &&
                         (sVar4 = FUN_180011440(*plVar10 + (ulonglong)DAT_181112294), sVar4 == 0x31)
                         ) {
                        bVar1 = false;
                        break;
                      }
                    }
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < iVar5);
                }
              }
            }
          }
        }
      }
    }
  }
  if (((DAT_181112118 != 0) && (((ulonglong)DAT_181112118 + param_1) - 0x10000 < 0x7ffffffeffff)) &&
     ((iVar5 = FUN_180011200(), iVar5 != 0 && (iVar5 != 6)))) {
    return;
  }
  if (((DAT_1811120a8 != 0) && (((ulonglong)DAT_1811120a8 + param_1) - 0x10000 < 0x7ffffffeffff)) &&
     (cVar3 = FUN_180011220(), cVar3 != '\0')) {
    return;
  }
  if (((DAT_1811120f0 != 0) && (((ulonglong)DAT_1811120f0 + param_1) - 0x10000 < 0x7ffffffeffff)) &&
     (cVar3 = FUN_180011220(), cVar3 != '\0')) {
    return;
  }
  if (((DAT_18111211c != 0) && (((ulonglong)DAT_18111211c + param_1) - 0x10000 < 0x7ffffffeffff)) &&
     (iVar5 = FUN_180011200(), iVar5 != 0)) {
    return;
  }
  if (((DAT_181112110 == 0) || (0x7ffffffefffe < ((ulonglong)DAT_181112110 + param_1) - 0x10000)) ||
     (iVar5 = FUN_180011200(), 0xfffffffd < iVar5 - 1U)) {
LAB_18046371d:
    iVar5 = 0;
  }
  else {
    plVar10 = (longlong *)FUN_1803a0940(local_res8,iVar5);
    if (((*plVar10 == 0) || (DAT_181112158 == 0)) ||
       (0x7ffffffefffe < (*plVar10 + (ulonglong)DAT_181112158) - 0x10000)) goto LAB_18046371d;
    iVar5 = FUN_180011200();
  }
  if (((DAT_180961a50 != 0) && (lVar9 = FUN_18000f3a0(), lVar9 - 0x10000U < 0x7ffffffeffff)) &&
     (((lVar8 != 0 &&
       ((DAT_1811122a8 != 0 && (((ulonglong)DAT_1811122a8 + lVar8) - 0x10000 < 0x7ffffffeffff)))) &&
      (cVar3 = FUN_180011220(), cVar3 == '\x01')))) {
    if ((DAT_1811122ac == 0) || (0x7ffffffefffe < (lVar8 + (ulonglong)DAT_1811122ac) - 0x10000)) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = (float)FUN_18000f3d0();
    }
    if (((uint)fVar13 & 0x7f800000) != 0x7f800000) {
      iVar11 = FUN_180011200(lVar9 + 0x44);
      fVar14 = DAT_1808ac00c;
      fVar15 = (float)((iVar5 - iVar11) + -1) * DAT_1808ac00c;
      if ((DAT_1811122b4 == 0) || (0x7ffffffefffe < (lVar8 + (ulonglong)DAT_1811122b4) - 0x10000)) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_180011200();
      }
      if ((DAT_1811122b8 == 0) || (0x7ffffffefffe < (lVar8 + (ulonglong)DAT_1811122b8) - 0x10000)) {
        iVar11 = 0;
      }
      else {
        iVar11 = FUN_180011200();
      }
      if ((((DAT_1811122b0 == 0) || (0x7ffffffefffe < (lVar8 + (ulonglong)DAT_1811122b0) - 0x10000))
          || (cVar3 = FUN_180011220(), cVar3 != '\x01')) ||
         ((iVar5 < 1 || (fVar13 < (float)iVar5 * fVar14)))) {
        fVar14 = fVar13 - (float)iVar11 * fVar14;
      }
      else {
        fVar14 = (float)(iVar5 - iVar11) * fVar14;
      }
      if (fVar13 <= fVar14 + fVar15) goto LAB_1804638b0;
    }
    if (!bVar1) {
      return;
    }
  }
LAB_1804638b0:
  if (DAT_180c8a4c0 == '\0') {
    DAT_180c8a4c0 = '\x01';
    DAT_180c8a4b8 = FUN_180264b70(PTR_s_sv_maxspeed_180c8a4b0);
  }
  if (DAT_180c8a4b8 == 0) {
    local_res8[0] = 320.0;
  }
  else {
    local_res8[0] = (float)FUN_180264d70(DAT_180c8a4b8);
  }
  if (((DAT_181112168 != 0) && (((ulonglong)DAT_181112168 + param_1) - 0x10000 < 0x7ffffffeffff)) &&
     ((lVar8 = FUN_18000f3a0(), lVar8 != 0 &&
      ((DAT_18111217c != 0 && (((ulonglong)DAT_18111217c + lVar8) - 0x10000 < 0x7ffffffeffff)))))) {
    FUN_18000f3d0();
  }
  if ((((((DAT_18111214c != 0) && (((ulonglong)DAT_18111214c + param_1) - 0x10000 < 0x7ffffffeffff))
        && (lVar8 = FUN_18000f3a0(), lVar8 != 0)) &&
       ((DAT_181112150 != 0 && (((ulonglong)DAT_181112150 + lVar8) - 0x10000 < 0x7ffffffeffff)))) &&
      ((iVar5 = FUN_180011200(), iVar5 - 1U < 0xfffffffe &&
       (plVar10 = (longlong *)FUN_1803a0940(local_res8,iVar5), *plVar10 != 0)))) &&
     (((DAT_181112120 == 0 || (0x7ffffffefffe < ((ulonglong)DAT_181112120 + param_1) - 0x10000)) ||
      (cVar3 = FUN_180011220(), cVar3 == '\0')))) {
    if (DAT_180c8a610 == '\0') {
      DAT_180c8a610 = '\x01';
      DAT_180c8a608 = FUN_180264b70(PTR_s_sv_cs_player_speed_has_hostage_180c8a600);
    }
    if (DAT_180c8a608 != 0) {
      FUN_180264d70(DAT_180c8a608);
    }
  }
  if ((((DAT_18111221c != 0) && (((ulonglong)DAT_18111221c + param_1) - 0x10000 < 0x7ffffffeffff))
      && (lVar8 = FUN_18000f3a0(), lVar8 != 0)) &&
     (((DAT_181112220 != 0 && (((ulonglong)DAT_181112220 + lVar8) - 0x10000 < 0x7ffffffeffff)) &&
      (iVar5 = FUN_180011200(), iVar5 - 1U < 0xfffffffe)))) {
    plVar10 = (longlong *)FUN_1803a0940(local_res8,iVar5);
    lVar8 = *plVar10;
    if (lVar8 != 0) {
      if (((DAT_181112258 == 0) || (0x7ffffffefffe < (lVar8 + (ulonglong)DAT_181112258) - 0x10000))
         || (uVar6 = FUN_180011200(), 1 < uVar6)) {
        uVar6 = 0;
      }
      if (((DAT_181112290 != 0) &&
          (lVar8 = FUN_18000f3a0((ulonglong)DAT_181112290 + 8 + lVar8),
          lVar8 - 0x10000U < 0x7ffffffeffff)) && (DAT_18111229c != 0)) {
        FUN_18000f3d0((ulonglong)(uVar6 * 4) + lVar8 + (ulonglong)DAT_18111229c);
      }
    }
  }
  return;
}



/* ===== 180463b50 FUN_180463b50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180463b50(undefined4 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint uVar22;
  int *piVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_8b8 [32];
  undefined8 local_898;
  undefined4 local_890;
  longlong local_888;
  int *local_880 [2];
  longlong local_870;
  undefined1 local_868 [16];
  undefined1 local_858 [32];
  undefined8 local_838 [2];
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
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined8 local_7b8;
  undefined4 local_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined2 uStack_700;
  undefined2 uStack_6fe;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 local_66c;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined2 local_658;
  undefined2 uStack_656;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 local_648;
  undefined8 local_640;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  uint uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 local_5fc;
  undefined4 uStack_5f8;
  undefined4 local_5f4;
  uint local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  uint local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 local_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 local_5b4;
  undefined8 local_5b0;
  undefined1 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined4 local_570;
  undefined2 local_56c;
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
  undefined2 local_4f0;
  undefined4 local_4ec;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined1 local_4b4;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined1 local_4a0 [640];
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
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
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_8b8;
  FUN_1804600d0();
  fVar4 = DAT_1808ac34c;
  local_7d8 = 0;
  local_838[0] = 0;
  local_838[1] = 0;
  local_828 = 0;
  uStack_820 = 0;
  uVar21 = 1;
  uVar31 = 0;
  local_808 = _DAT_1808adae0;
  uStack_800 = _UNK_1808adae8;
  local_7f8 = _DAT_1808adae0;
  uStack_7f0 = _UNK_1808adae8;
  local_748 = 0;
  uStack_740 = 0;
  uStack_684 = 0;
  uStack_680 = 0;
  uStack_67c = 0;
  uStack_678 = 0;
  local_7d0 = 0xffffffff00000000;
  local_818 = 0;
  uStack_810 = 0;
  local_7e8 = 0;
  uStack_7e0 = 0;
  local_7c8 = 2;
  uStack_7c4 = 0;
  uStack_7c0 = 0;
  uStack_7bc = 0x3f800000;
  local_7b8 = 0;
  local_7b0 = 0x3f800000;
  uStack_7ac = 0x3f800000;
  uStack_7a8 = 0;
  uStack_7a4 = 0;
  uStack_7a0 = 1;
  local_798 = 0;
  local_790 = 0;
  local_788 = 0;
  uStack_780 = 0;
  local_778 = 0;
  local_770 = 0;
  local_768 = 0;
  local_760 = (ulonglong)local_760._5_3_ << 0x28;
  local_758 = 0;
  uStack_750 = 0;
  local_738 = 0;
  uStack_730 = 0;
  local_728 = 0;
  local_720 = 0;
  local_718 = 0;
  local_710 = 0;
  local_708 = 0x4382000000000000;
  uStack_700 = 0;
  uStack_6fc = 0;
  uStack_6f8 = 0;
  uStack_6f4 = 0;
  local_6f0 = 0;
  local_6e8 = 0;
  local_6e0 = 0x11;
  local_6d8 = 0x3c800000;
  local_6d0 = (ulonglong)local_6d0._5_3_ << 0x28;
  local_6c8 = (ulonglong)local_6c8._5_3_ << 0x28;
  local_6c0 = 0;
  uStack_6b8 = 0;
  local_6b0 = 0;
  local_6a8 = 0;
  local_6a0 = 0;
  local_698 = 0;
  uStack_690 = 0;
  local_688 = 0;
  uStack_674 = 0;
  uStack_670 = 0;
  local_66c = 0;
  local_668 = 0;
  uStack_660 = 0;
  local_658 = 0;
  uStack_654 = 0;
  uStack_650 = 0;
  uStack_64c = 0;
  local_648 = CONCAT44(local_648._4_4_,0x3f800000);
  local_640 = 0;
  local_638 = 0;
  uStack_634 = 0;
  uStack_630 = 0;
  uStack_62c = 0;
  local_628 = 0;
  local_620 = 0;
  local_618 = 0;
  uStack_610 = uStack_610 & 0xffffff00;
  uStack_60c = 0;
  uStack_608 = 0;
  uStack_604 = 0;
  uStack_600 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_568 = _DAT_1808ade10;
  uStack_560 = _UNK_1808ade18;
  local_548 = _DAT_1808ada50;
  uStack_540 = _UNK_1808ada58;
  local_558 = _DAT_1808ad580;
  uStack_550 = _UNK_1808ad588;
  local_528 = _DAT_1808adbb0;
  uStack_520 = _UNK_1808adbb8;
  local_538 = _DAT_1808ad590;
  uStack_530 = _UNK_1808ad598;
  local_508 = _DAT_1808ade50;
  uStack_500 = _UNK_1808ade58;
  local_5fc = 0;
  uStack_5f8 = 0;
  local_5f4 = 0;
  local_5f0 = local_5f0 & 0xffffff00;
  uStack_5ec = 0;
  uStack_5e8 = 0;
  uStack_5e4 = 0;
  local_5e0 = local_5e0 & 0xffffff00;
  uStack_5dc = 0;
  uStack_5d8 = 0;
  uStack_5d4 = 0;
  uStack_5d0 = 0;
  local_5cc = 0;
  uStack_5c8 = 0;
  uStack_5c4 = 0;
  uStack_5c0 = 0;
  uStack_5bc = 0;
  uStack_5b8 = 0;
  local_5b4 = 0xffffffff;
  local_5b0 = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  local_588 = 0;
  local_580 = 0;
  local_578 = 0;
  local_570 = 0;
  local_56c = 0;
  local_518 = _DAT_1808ad570;
  uStack_510 = _UNK_1808ad578;
  local_4f8 = 0;
  local_4f0 = 1;
  local_4ec = 0xffffffff;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_4b4 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  FUN_180540170(local_4a0,0,0x280);
  FUN_18008b430(local_4a0);
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  FUN_180540170(&local_20c,0,0x100);
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
  local_19c = 0;
  local_194 = 0;
  local_18c = 0;
  local_184 = 0;
  local_17c = 0;
  local_174 = 0;
  local_16c = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_ce = 0;
  local_c4 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_164 = 0;
  local_15c = 0;
  local_154 = 0;
  local_14c = 0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_d0 = 2;
  local_cc = 0;
  local_c0 = 0x4396ff27;
  local_a8 = 0;
  local_a0 = 0x3f800000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_180466630(param_1,local_838);
  FUN_1800244c0(&local_5a0);
  plVar13 = (longlong *)(param_2 - 0x10000);
  param_1[0xa1] = 0xffffffff;
  if ((longlong *)0x7ffffffefffe < plVar13) {
LAB_180466542:
    return (ulonglong)plVar13 & 0xffffffffffffff00;
  }
  if ((((param_2 == 0) || (plVar13 = (longlong *)(ulonglong)DAT_181112110, DAT_181112110 == 0)) ||
      (plVar13 = (longlong *)((longlong)plVar13 + param_2 + -0x10000),
      (longlong *)0x7ffffffefffe < plVar13)) ||
     (plVar13 = (longlong *)FUN_180011200(), 0xfffffffd < (int)plVar13 - 1U)) {
    *(longlong *)(param_1 + 0x52) = param_2;
    *(undefined8 *)(param_1 + 0x54) = 0;
    param_1[0x56] = 0x11;
    goto LAB_180466542;
  }
  plVar13 = (longlong *)FUN_1803a0940(&local_898,(ulonglong)plVar13 & 0xffffffff);
  lVar19 = *plVar13;
  *(longlong *)(param_1 + 0x52) = param_2;
  *(longlong *)(param_1 + 0x54) = lVar19;
  param_1[0x56] = 0x11;
  if (lVar19 == 0) goto LAB_180466542;
  local_870 = lVar19;
  if (((DAT_180ca09f8 == 0) ||
      (lVar14 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180ca09f8), lVar14 == 0)) ||
     (DAT_180ca0950 == 0)) {
    uVar8 = 0;
    uVar28 = 0;
    uVar30 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_1800111b0(&local_898,lVar14 + (ulonglong)DAT_180ca0950);
    uVar8 = *puVar15;
    uVar28 = puVar15[1];
    uVar30 = puVar15[2];
  }
  uVar10 = DAT_181112114;
  uVar17 = (ulonglong)DAT_181112114;
  *param_1 = uVar8;
  param_1[1] = uVar28;
  param_1[2] = uVar30;
  if (uVar10 == 0) {
    if (DAT_180ca0a1c == 0) {
      local_898 = 0;
      local_890 = 0;
    }
    else {
      plVar13 = (longlong *)FUN_1800111b0(local_880,param_2 + (ulonglong)DAT_180ca0a1c);
      local_898 = *plVar13;
      local_890 = (undefined4)plVar13[1];
    }
  }
  else {
    if ((param_2 + uVar17) - 0x10000 < 0x7ffffffeffff) {
      puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
      uVar8 = *puVar15;
      uVar28 = puVar15[1];
      local_890 = puVar15[2];
    }
    else {
      uVar8 = 0;
      uVar28 = 0;
      local_890 = 0;
    }
    local_898 = CONCAT44(uVar28,uVar8);
  }
  *(longlong *)(param_1 + 3) = local_898;
  param_1[5] = local_890;
  if ((DAT_181112084 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_181112084) - 0x10000)) {
    uVar30 = 0;
    uVar28 = 0;
    uVar8 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
    uVar8 = puVar15[2];
    uVar28 = puVar15[1];
    uVar30 = *puVar15;
  }
  param_1[6] = uVar30;
  param_1[7] = uVar28;
  param_1[8] = uVar8;
  if ((DAT_181112088 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_181112088) - 0x10000)) {
    uVar30 = 0;
    uVar28 = 0;
    uVar8 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
    uVar8 = puVar15[2];
    uVar28 = puVar15[1];
    uVar30 = *puVar15;
  }
  param_1[9] = uVar30;
  param_1[10] = uVar28;
  param_1[0xb] = uVar8;
  if ((DAT_18111208c == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_18111208c) - 0x10000)) {
    lVar14 = 0;
  }
  else {
    lVar14 = FUN_18000f3a0();
    if ((lVar14 - 0x10000U < 0x7ffffffeffff) && (DAT_181112090 != 0)) {
      puVar16 = (undefined8 *)FUN_1804672f0(local_858,lVar14 + (ulonglong)DAT_181112090);
      uVar1 = puVar16[1];
      uVar2 = puVar16[2];
      uVar3 = puVar16[3];
      *(undefined8 *)(param_1 + 0xc) = *puVar16;
      *(undefined8 *)(param_1 + 0xe) = uVar1;
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      *(undefined8 *)(param_1 + 0x12) = uVar3;
    }
  }
  if ((DAT_181112094 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_181112094) - 0x10000)) {
    uVar30 = 0;
    uVar28 = 0;
    uVar8 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
    uVar8 = puVar15[2];
    uVar28 = puVar15[1];
    uVar30 = *puVar15;
  }
  param_1[0x14] = uVar30;
  param_1[0x15] = uVar28;
  param_1[0x16] = uVar8;
  if ((DAT_181112098 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_181112098) - 0x10000)) {
    uVar30 = 0;
    uVar28 = 0;
    uVar8 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
    uVar8 = puVar15[2];
    uVar28 = puVar15[1];
    uVar30 = *puVar15;
  }
  param_1[0x17] = uVar30;
  param_1[0x18] = uVar28;
  param_1[0x19] = uVar8;
  if ((DAT_18111209c == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_18111209c) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200();
  }
  param_1[0x1a] = uVar8;
  if ((DAT_1811120a0 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120a0) - 0x10000)) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = FUN_180011200();
  }
  param_1[0x1b] = uVar8;
  if ((DAT_1811120a4 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120a4) - 0x10000)) {
    uVar5 = 2;
  }
  else {
    uVar5 = FUN_180011220();
  }
  *(undefined1 *)(param_1 + 0x1c) = uVar5;
  if ((DAT_1811120a8 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120a8) - 0x10000)) {
    bVar24 = false;
  }
  else {
    cVar6 = FUN_180011220();
    bVar24 = cVar6 != '\0';
  }
  *(bool *)((longlong)param_1 + 0x71) = bVar24;
  if ((DAT_1811120ac == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120ac) - 0x10000)) {
    bVar24 = false;
  }
  else {
    cVar6 = FUN_180011220();
    bVar24 = cVar6 != '\0';
  }
  *(bool *)((longlong)param_1 + 0x72) = bVar24;
  if ((DAT_1811120b0 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120b0) - 0x10000)) {
    bVar24 = false;
  }
  else {
    cVar6 = FUN_180011220();
    bVar24 = cVar6 != '\0';
  }
  *(bool *)((longlong)param_1 + 0x73) = bVar24;
  if ((DAT_1811120b4 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120b4) - 0x10000)) {
    uVar10 = 0;
  }
  else {
    bVar7 = FUN_180011220();
    uVar10 = (uint)bVar7;
  }
  param_1[0x1d] = uVar10;
  if ((DAT_1811120b8 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120b8) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  param_1[0x1e] = uVar8;
  if ((DAT_1811120bc == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120bc) - 0x10000)) {
    fVar25 = fVar4;
  }
  else {
    fVar25 = (float)FUN_18000f3d0();
  }
  param_1[0x1f] = fVar25;
  if ((DAT_1811120c0 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120c0) - 0x10000)) {
    uVar17 = 0;
  }
  else {
    bVar7 = FUN_180011220();
    uVar17 = (ulonglong)bVar7;
  }
  *(ulonglong *)(param_1 + 0x20) = uVar17;
  if ((DAT_1811120c4 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120c4) - 0x10000)) {
    fVar25 = fVar4;
  }
  else {
    fVar25 = (float)FUN_18000f3d0();
  }
  param_1[0x22] = fVar25;
  if ((DAT_1811120c8 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120c8) - 0x10000)) {
    fVar25 = fVar4;
  }
  else {
    fVar25 = (float)FUN_18000f3d0();
  }
  param_1[0x23] = fVar25;
  if ((DAT_1811120cc == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120cc) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  param_1[0x24] = uVar8;
  if ((DAT_1811120d0 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120d0) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  param_1[0x25] = uVar8;
  if ((((DAT_1811120d4 != 0) && ((param_2 + (ulonglong)DAT_1811120d4) - 0x10000 < 0x7ffffffeffff))
      && (lVar18 = FUN_18000f3a0(), lVar18 - 0x10000U < 0x7ffffffeffff)) && (DAT_1811120d8 != 0)) {
    uVar21 = FUN_18000f3a0((ulonglong)DAT_1811120d8 + 0x10 + lVar18);
  }
  *(undefined8 *)(param_1 + 0x26) = uVar21;
  if ((DAT_1811120dc == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120dc) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  param_1[0x28] = uVar8;
  if ((DAT_1811120e0 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120e0) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200();
  }
  param_1[0x29] = uVar8;
  if ((DAT_1811120e4 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120e4) - 0x10000)) {
    bVar24 = false;
  }
  else {
    cVar6 = FUN_180011220();
    bVar24 = cVar6 != '\0';
  }
  *(bool *)(param_1 + 0x2a) = bVar24;
  if ((DAT_1811120e8 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120e8) - 0x10000)) {
    bVar24 = false;
  }
  else {
    cVar6 = FUN_180011220();
    bVar24 = cVar6 != '\0';
  }
  *(bool *)((longlong)param_1 + 0xa9) = bVar24;
  if ((DAT_1811120ec == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120ec) - 0x10000)) {
    bVar24 = false;
  }
  else {
    cVar6 = FUN_180011220();
    bVar24 = cVar6 != '\0';
  }
  *(bool *)((longlong)param_1 + 0xaa) = bVar24;
  if ((DAT_1811120f0 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120f0) - 0x10000)) {
    bVar24 = false;
  }
  else {
    cVar6 = FUN_180011220();
    bVar24 = cVar6 != '\0';
  }
  *(bool *)((longlong)param_1 + 0xab) = bVar24;
  if (((DAT_181112124 != 0) && ((param_2 + (ulonglong)DAT_181112124) - 0x10000 < 0x7ffffffeffff)) &&
     (lVar18 = FUN_18000f3a0(), lVar18 - 0x10000U < 0x7ffffffeffff)) {
    if (((lVar18 == 0) || (DAT_181112128 == 0)) ||
       (0x7ffffffefffe < (lVar18 + (ulonglong)DAT_181112128) - 0x10000)) {
      param_1[0x2b] = 0;
      if (lVar18 != 0) goto LAB_1804647db;
LAB_180464804:
      param_1[0x2c] = 0;
      if (lVar18 != 0) goto LAB_180464811;
LAB_180464859:
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      if (lVar18 != 0) goto LAB_180464876;
LAB_1804648be:
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      if (lVar18 != 0) goto LAB_1804648db;
LAB_180464902:
      param_1[0x33] = 0;
      if (lVar18 != 0) goto LAB_18046490e;
LAB_180464942:
      uVar8 = 0;
      uVar28 = 0;
      uVar30 = 0;
    }
    else {
      uVar8 = FUN_180011200();
      param_1[0x2b] = uVar8;
LAB_1804647db:
      if ((DAT_18111212c == 0) || (0x7ffffffefffe < (lVar18 + (ulonglong)DAT_18111212c) - 0x10000))
      goto LAB_180464804;
      uVar8 = FUN_18000f3d0();
      param_1[0x2c] = uVar8;
LAB_180464811:
      if ((DAT_181112130 == 0) || (0x7ffffffefffe < (lVar18 + (ulonglong)DAT_181112130) - 0x10000))
      goto LAB_180464859;
      puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
      uVar8 = puVar15[2];
      uVar28 = *puVar15;
      param_1[0x2e] = puVar15[1];
      param_1[0x2f] = uVar8;
      param_1[0x2d] = uVar28;
LAB_180464876:
      if ((DAT_181112134 == 0) || (0x7ffffffefffe < (lVar18 + (ulonglong)DAT_181112134) - 0x10000))
      goto LAB_1804648be;
      puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
      uVar8 = puVar15[2];
      uVar28 = *puVar15;
      param_1[0x31] = puVar15[1];
      param_1[0x32] = uVar8;
      param_1[0x30] = uVar28;
LAB_1804648db:
      if ((DAT_181112138 == 0) || (0x7ffffffefffe < (lVar18 + (ulonglong)DAT_181112138) - 0x10000))
      goto LAB_180464902;
      uVar8 = FUN_180011200();
      param_1[0x33] = uVar8;
LAB_18046490e:
      if ((DAT_18111213c == 0) || (0x7ffffffefffe < (lVar18 + (ulonglong)DAT_18111213c) - 0x10000))
      goto LAB_180464942;
      puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
      uVar8 = *puVar15;
      uVar28 = puVar15[1];
      uVar30 = puVar15[2];
    }
    param_1[0x34] = uVar8;
    param_1[0x35] = uVar28;
    param_1[0x36] = uVar30;
  }
  if ((DAT_1811120f4 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120f4) - 0x10000)) {
    bVar24 = false;
  }
  else {
    cVar6 = FUN_180011220();
    bVar24 = cVar6 != '\0';
  }
  *(bool *)(param_1 + 0x37) = bVar24;
  if ((DAT_1811120f8 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120f8) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  param_1[0x38] = uVar8;
  if ((DAT_1811120fc == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_1811120fc) - 0x10000)) {
    uVar30 = 0;
    uVar28 = 0;
    uVar8 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
    uVar8 = puVar15[2];
    uVar28 = puVar15[1];
    uVar30 = *puVar15;
  }
  param_1[0x39] = uVar30;
  param_1[0x3a] = uVar28;
  param_1[0x3b] = uVar8;
  if ((DAT_181112100 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_181112100) - 0x10000)) {
    uVar30 = 0;
    uVar28 = 0;
    uVar8 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
    uVar8 = puVar15[2];
    uVar28 = puVar15[1];
    uVar30 = *puVar15;
  }
  param_1[0x3c] = uVar30;
  param_1[0x3d] = uVar28;
  param_1[0x3e] = uVar8;
  if ((DAT_181112104 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_181112104) - 0x10000)) {
    uVar30 = 0;
    uVar28 = 0;
    uVar8 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
    uVar8 = puVar15[2];
    uVar28 = puVar15[1];
    uVar30 = *puVar15;
  }
  param_1[0x3f] = uVar30;
  param_1[0x40] = uVar28;
  param_1[0x41] = uVar8;
  if ((DAT_181112108 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_181112108) - 0x10000)) {
    uVar30 = 0;
    uVar28 = 0;
    uVar8 = 0;
  }
  else {
    puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
    uVar8 = puVar15[2];
    uVar28 = puVar15[1];
    uVar30 = *puVar15;
  }
  param_1[0x42] = uVar30;
  param_1[0x43] = uVar28;
  param_1[0x44] = uVar8;
  if ((DAT_18111210c == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_18111210c) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  uVar10 = DAT_181112154;
  uVar17 = (ulonglong)DAT_181112154;
  param_1[0x45] = uVar8;
  if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
    uVar21 = 0;
  }
  else {
    uVar21 = FUN_18000f3a0();
  }
  *(undefined8 *)(param_1 + 0x46) = uVar21;
  if (((DAT_18111215c == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_18111215c) - 0x10000)) ||
     (cVar6 = FUN_180011220(), cVar6 == '\0')) {
    if ((DAT_181112160 == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_181112160) - 0x10000)) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = (float)FUN_18000f3d0();
    }
    iVar9 = (int)(fVar25 * DAT_1808acab0 + DAT_1808ac1f4);
  }
  else if ((DAT_181112158 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112158) - 0x10000))
  {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_180011200();
  }
  param_1[0x48] = iVar9;
  if (((DAT_181112140 != 0) && ((param_2 + (ulonglong)DAT_181112140) - 0x10000 < 0x7ffffffeffff)) &&
     (lVar19 = FUN_18000f3a0(), lVar19 - 0x10000U < 0x7ffffffeffff)) {
    if (((lVar19 == 0) || (DAT_181112144 == 0)) ||
       (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112144) - 0x10000)) {
      param_1[0x49] = 0;
      if (lVar19 != 0) goto LAB_180464c64;
LAB_180464c98:
      uVar8 = 0;
      uVar28 = 0;
      uVar30 = 0;
    }
    else {
      uVar8 = FUN_18000f3d0();
      param_1[0x49] = uVar8;
LAB_180464c64:
      if ((DAT_181112148 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112148) - 0x10000))
      goto LAB_180464c98;
      puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
      uVar8 = *puVar15;
      uVar28 = puVar15[1];
      uVar30 = puVar15[2];
    }
    param_1[0x4a] = uVar8;
    param_1[0x4b] = uVar28;
    param_1[0x4c] = uVar30;
  }
  uVar8 = FUN_1804633d0(param_2);
  param_1[0x4d] = uVar8;
  if (((((DAT_18111214c == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_18111214c) - 0x10000))
       || (lVar19 = FUN_18000f3a0(), lVar19 == 0)) ||
      ((DAT_181112150 == 0 || (0x7ffffffefffe < ((ulonglong)DAT_181112150 + lVar19) - 0x10000)))) ||
     (iVar9 = FUN_180011200(), 0xfffffffd < iVar9 - 1U)) {
    lVar19 = 0;
  }
  else {
    plVar13 = (longlong *)FUN_1803a0940(&local_898,iVar9);
    lVar19 = *plVar13;
  }
  *(bool *)((longlong)param_1 + 0x139) = lVar19 != 0;
  if (((lVar14 - 0x10000U < 0x7ffffffeffff) && (DAT_1811122a0 != 0)) && (DAT_1811122a4 != 0)) {
    puVar16 = (undefined8 *)
              FUN_1800111b0(&local_898,lVar14 + (ulonglong)DAT_1811122a4 + (ulonglong)DAT_1811122a0)
    ;
    uVar8 = *(undefined4 *)(puVar16 + 1);
    *(undefined8 *)(param_1 + 0x4f) = *puVar16;
    param_1[0x51] = uVar8;
  }
  param_1[0x57] = param_1[0x48];
  param_1[0x58] = 0x3c800000;
  param_1[0x5a] = 0;
  param_1[0x59] = (float)(int)param_1[0x48] * DAT_1808ac00c;
  lVar19 = FUN_180266660();
  if (lVar19 != 0) {
    if ((DAT_1811122a8 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811122a8) - 0x10000)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = FUN_180011220();
    }
    *(bool *)(param_1 + 0x5b) = cVar6 != '\0';
    if ((DAT_1811122ac == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811122ac) - 0x10000)) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_18000f3d0();
    }
    param_1[0x5c] = uVar8;
  }
  FUN_1804624c0(param_1);
  if (((DAT_181112168 != 0) && ((param_2 + (ulonglong)DAT_181112168) - 0x10000 < 0x7ffffffeffff)) &&
     (lVar19 = FUN_18000f3a0(), lVar19 - 0x10000U < 0x7ffffffeffff)) {
    if (DAT_18111216c != 0) {
      uVar17 = (ulonglong)DAT_18111216c;
      uVar21 = FUN_18000f3a0((ulonglong)DAT_18111216c + 8 + lVar19);
      *(undefined8 *)(param_1 + 0x5e) = uVar21;
      uVar21 = FUN_18000f3a0(uVar17 + 0x10 + lVar19);
      *(undefined8 *)(param_1 + 0x60) = uVar21;
      uVar21 = FUN_18000f3a0(uVar17 + 0x18 + lVar19);
      *(undefined8 *)(param_1 + 0x62) = uVar21;
    }
    if (((lVar19 == 0) || (DAT_181112170 == 0)) ||
       (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112170) - 0x10000)) {
      *(undefined8 *)(param_1 + 100) = 0;
      if (lVar19 != 0) goto LAB_180464ed4;
LAB_180464ef5:
      uVar21 = 0;
    }
    else {
      uVar21 = FUN_18000f3a0();
      *(undefined8 *)(param_1 + 100) = uVar21;
LAB_180464ed4:
      if ((DAT_181112174 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112174) - 0x10000))
      goto LAB_180464ef5;
      uVar21 = FUN_18000f3a0();
    }
    *(undefined8 *)(param_1 + 0x66) = uVar21;
    uVar17 = (ulonglong)DAT_181112178;
    if (DAT_181112178 != 0) {
      uVar21 = FUN_18000f3a0(lVar19 + uVar17);
      *(undefined8 *)(param_1 + 0x68) = uVar21;
      uVar21 = FUN_18000f3a0(lVar19 + uVar17 + 8);
      *(undefined8 *)(param_1 + 0x6a) = uVar21;
    }
    if (((lVar19 == 0) || (DAT_18111217c == 0)) ||
       (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_18111217c) - 0x10000)) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_18000f3d0();
    }
    uVar10 = DAT_181112180;
    uVar17 = (ulonglong)DAT_181112180;
    param_1[0x6c] = uVar8;
    if (uVar10 != 0) {
      uVar21 = ((undefined8 *)(uVar17 + lVar19))[1];
      *(undefined8 *)(param_1 + 0x6d) = *(undefined8 *)(uVar17 + lVar19);
      *(undefined8 *)(param_1 + 0x6f) = uVar21;
    }
    uVar17 = (ulonglong)DAT_181112184;
    if (DAT_181112184 != 0) {
      *(undefined8 *)(param_1 + 0x71) = *(undefined8 *)(uVar17 + lVar19);
      param_1[0x73] = *(undefined4 *)(uVar17 + 8 + lVar19);
    }
    if (((lVar19 == 0) || (DAT_181112188 == 0)) ||
       (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112188) - 0x10000)) {
      param_1[0x74] = 0;
      param_1[0x75] = 0;
      param_1[0x76] = 0;
      if (lVar19 != 0) goto LAB_180464ffd;
LAB_180465026:
      param_1[0x77] = 0;
      if (lVar19 != 0) goto LAB_180465033;
LAB_18046505f:
      *(undefined1 *)(param_1 + 0x78) = 0;
      if (lVar19 != 0) goto LAB_18046506b;
LAB_180465097:
      *(undefined1 *)((longlong)param_1 + 0x1e1) = 0;
      if (lVar19 != 0) goto LAB_1804650a3;
LAB_1804650cc:
      param_1[0x79] = 0;
      if (lVar19 != 0) goto LAB_1804650d9;
LAB_180465102:
      param_1[0x7a] = 0;
      if (lVar19 != 0) goto LAB_18046510f;
LAB_180465138:
      param_1[0x7b] = 0;
      if (lVar19 != 0) goto LAB_180465145;
LAB_180465166:
      fVar25 = fVar4;
    }
    else {
      puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
      uVar8 = puVar15[2];
      uVar28 = *puVar15;
      param_1[0x75] = puVar15[1];
      param_1[0x76] = uVar8;
      param_1[0x74] = uVar28;
LAB_180464ffd:
      if ((DAT_18111218c == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_18111218c) - 0x10000))
      goto LAB_180465026;
      uVar8 = FUN_18000f3d0();
      param_1[0x77] = uVar8;
LAB_180465033:
      if ((DAT_181112190 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112190) - 0x10000))
      goto LAB_18046505f;
      cVar6 = FUN_180011220();
      *(bool *)(param_1 + 0x78) = cVar6 != '\0';
LAB_18046506b:
      if ((DAT_181112194 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112194) - 0x10000))
      goto LAB_180465097;
      cVar6 = FUN_180011220();
      *(bool *)((longlong)param_1 + 0x1e1) = cVar6 != '\0';
LAB_1804650a3:
      if ((DAT_181112198 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112198) - 0x10000))
      goto LAB_1804650cc;
      uVar8 = FUN_18000f3d0();
      param_1[0x79] = uVar8;
LAB_1804650d9:
      if ((DAT_18111219c == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_18111219c) - 0x10000))
      goto LAB_180465102;
      uVar8 = FUN_18000f3d0();
      param_1[0x7a] = uVar8;
LAB_18046510f:
      if ((DAT_1811121a0 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121a0) - 0x10000))
      goto LAB_180465138;
      uVar8 = FUN_18000f3d0();
      param_1[0x7b] = uVar8;
LAB_180465145:
      if ((DAT_1811121a4 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121a4) - 0x10000))
      goto LAB_180465166;
      fVar25 = (float)FUN_18000f3d0();
    }
    iVar9 = DAT_1811121a8;
    param_1[0x7c] = fVar25;
    if ((((iVar9 == 0) || (lVar19 == 0)) || (uVar10 = iVar9 + 8, uVar10 == 0)) ||
       (0x7ffffffefffe < ((ulonglong)uVar10 + lVar19) - 0x10000)) {
      uVar21 = 0;
    }
    else {
      uVar21 = FUN_18000f3a0();
    }
    *(undefined8 *)(param_1 + 0x7e) = uVar21;
    if (((lVar19 == 0) || (DAT_1811121ac == 0)) ||
       (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121ac) - 0x10000)) {
      *(undefined1 *)(param_1 + 0x80) = 0;
      if (lVar19 != 0) goto LAB_1804651e5;
LAB_180465211:
      *(undefined1 *)((longlong)param_1 + 0x201) = 0;
      if (lVar19 != 0) goto LAB_18046521d;
LAB_180465249:
      *(undefined1 *)((longlong)param_1 + 0x202) = 0;
      if (lVar19 != 0) goto LAB_180465255;
LAB_180465281:
      *(undefined1 *)((longlong)param_1 + 0x203) = 0;
      if (lVar19 != 0) goto LAB_18046528d;
LAB_1804652b6:
      param_1[0x81] = 0;
      if (lVar19 != 0) goto LAB_1804652c3;
LAB_1804652ec:
      param_1[0x82] = 0;
      if (lVar19 != 0) goto LAB_1804652f9;
LAB_18046531a:
      uVar8 = 0;
    }
    else {
      cVar6 = FUN_180011220();
      *(bool *)(param_1 + 0x80) = cVar6 != '\0';
LAB_1804651e5:
      if ((DAT_1811121b0 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121b0) - 0x10000))
      goto LAB_180465211;
      cVar6 = FUN_180011220();
      *(bool *)((longlong)param_1 + 0x201) = cVar6 != '\0';
LAB_18046521d:
      if ((DAT_1811121b4 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121b4) - 0x10000))
      goto LAB_180465249;
      cVar6 = FUN_180011220();
      *(bool *)((longlong)param_1 + 0x202) = cVar6 != '\0';
LAB_180465255:
      if ((DAT_1811121b8 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121b8) - 0x10000))
      goto LAB_180465281;
      cVar6 = FUN_180011220();
      *(bool *)((longlong)param_1 + 0x203) = cVar6 != '\0';
LAB_18046528d:
      if ((DAT_1811121bc == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121bc) - 0x10000))
      goto LAB_1804652b6;
      uVar8 = FUN_18000f3d0();
      param_1[0x81] = uVar8;
LAB_1804652c3:
      if ((DAT_1811121c0 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121c0) - 0x10000))
      goto LAB_1804652ec;
      uVar8 = FUN_18000f3d0();
      param_1[0x82] = uVar8;
LAB_1804652f9:
      if ((DAT_1811121c4 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121c4) - 0x10000))
      goto LAB_18046531a;
      uVar8 = FUN_18000f3d0();
    }
    uVar10 = DAT_1811121c8;
    uVar17 = (ulonglong)DAT_1811121c8;
    param_1[0x83] = uVar8;
    if (uVar10 != 0) {
      *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(uVar17 + lVar19);
    }
    if (((lVar19 == 0) || (DAT_1811121cc == 0)) ||
       (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121cc) - 0x10000)) {
      param_1[0x86] = 0;
      if (lVar19 != 0) goto LAB_180465375;
LAB_1804653bd:
      param_1[0x87] = 0;
      param_1[0x88] = 0;
      param_1[0x89] = 0;
      if (lVar19 != 0) goto LAB_1804653da;
LAB_180465406:
      *(undefined1 *)(param_1 + 0x8a) = 0;
      if (lVar19 != 0) goto LAB_180465412;
LAB_18046543b:
      param_1[0x8b] = 0;
      if (lVar19 != 0) goto LAB_180465448;
LAB_180465469:
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_18000f3d0();
      param_1[0x86] = uVar8;
LAB_180465375:
      if ((DAT_1811121d0 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121d0) - 0x10000))
      goto LAB_1804653bd;
      puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
      uVar8 = puVar15[2];
      uVar28 = *puVar15;
      param_1[0x88] = puVar15[1];
      param_1[0x89] = uVar8;
      param_1[0x87] = uVar28;
LAB_1804653da:
      if ((DAT_1811121d4 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121d4) - 0x10000))
      goto LAB_180465406;
      cVar6 = FUN_180011220();
      *(bool *)(param_1 + 0x8a) = cVar6 != '\0';
LAB_180465412:
      if ((DAT_1811121d8 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121d8) - 0x10000))
      goto LAB_18046543b;
      uVar8 = FUN_18000f3d0();
      param_1[0x8b] = uVar8;
LAB_180465448:
      if ((DAT_1811121dc == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121dc) - 0x10000))
      goto LAB_180465469;
      uVar8 = FUN_18000f3d0();
    }
    uVar10 = DAT_1811121e0;
    uVar17 = (ulonglong)DAT_1811121e0;
    param_1[0x8c] = uVar8;
    if (uVar10 != 0) {
      *(undefined8 *)(param_1 + 0x8d) = *(undefined8 *)(uVar17 + lVar19);
    }
    uVar10 = DAT_1811121f8;
    uVar17 = (ulonglong)DAT_1811121f8;
    if (((lVar19 == 0) || (DAT_1811121e4 == 0)) ||
       (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121e4) - 0x10000)) {
      param_1[0x8f] = 0;
      if (lVar19 != 0) goto LAB_1804654ca;
LAB_1804654f3:
      param_1[0x90] = 0;
      if (lVar19 != 0) goto LAB_180465500;
LAB_180465529:
      param_1[0x91] = 0;
      if (lVar19 != 0) goto LAB_180465536;
LAB_180465562:
      *(undefined1 *)(param_1 + 0x92) = 0;
      if (lVar19 != 0) goto LAB_18046556e;
LAB_180465597:
      param_1[0x93] = 0;
      if (lVar19 != 0) goto LAB_1804655a4;
LAB_1804655bf:
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_18000f3d0();
      param_1[0x8f] = uVar8;
LAB_1804654ca:
      if ((DAT_1811121e8 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121e8) - 0x10000))
      goto LAB_1804654f3;
      uVar8 = FUN_18000f3d0();
      param_1[0x90] = uVar8;
LAB_180465500:
      if ((DAT_1811121ec == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121ec) - 0x10000))
      goto LAB_180465529;
      uVar8 = FUN_18000f3d0();
      param_1[0x91] = uVar8;
LAB_180465536:
      if ((DAT_1811121f0 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121f0) - 0x10000))
      goto LAB_180465562;
      cVar6 = FUN_180011220();
      *(bool *)(param_1 + 0x92) = cVar6 != '\0';
LAB_18046556e:
      if ((DAT_1811121f4 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_1811121f4) - 0x10000))
      goto LAB_180465597;
      uVar8 = FUN_18000f3d0();
      param_1[0x93] = uVar8;
LAB_1804655a4:
      if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) goto LAB_1804655bf;
      uVar8 = FUN_180011200();
    }
    param_1[0x94] = uVar8;
    if ((((uVar10 == 0) || (lVar19 == 0)) || (uVar10 + 4 == 0)) ||
       (0x7ffffffefffe < ((ulonglong)(uVar10 + 4) + lVar19) - 0x10000)) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_18000f3d0();
    }
    uVar10 = DAT_1811121fc;
    param_1[0x95] = uVar8;
    if (uVar10 != 0) {
      lVar14 = (ulonglong)uVar10 + lVar19;
      if (((lVar14 == 0) || (DAT_181112200 == 0)) ||
         (0x7ffffffefffe < (lVar14 + (ulonglong)DAT_181112200) - 0x10000)) {
        *(undefined1 *)(param_1 + 0x96) = 0;
        if (lVar14 != 0) goto LAB_180465642;
LAB_180465663:
        uVar8 = 0;
      }
      else {
        cVar6 = FUN_180011220();
        *(bool *)(param_1 + 0x96) = cVar6 != '\0';
LAB_180465642:
        if ((DAT_181112204 == 0) || (0x7ffffffefffe < (lVar14 + (ulonglong)DAT_181112204) - 0x10000)
           ) goto LAB_180465663;
        uVar8 = FUN_18000f3d0();
      }
      param_1[0x97] = uVar8;
    }
    uVar10 = DAT_18111220c;
    if (DAT_181112208 != 0) {
      lVar19 = (ulonglong)DAT_181112208 + lVar19;
      if (((lVar19 == 0) || (DAT_18111220c == 0)) ||
         (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_18111220c) - 0x10000)) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_180011200();
      }
      param_1[0x98] = uVar8;
      if (((uVar10 == 0) || (lVar19 == 0)) ||
         ((uVar10 = uVar10 + 4, uVar10 == 0 ||
          (0x7ffffffefffe < ((ulonglong)uVar10 + lVar19) - 0x10000)))) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_18000f3d0();
      }
      uVar10 = DAT_181112210;
      uVar17 = (ulonglong)DAT_181112210;
      param_1[0x99] = uVar8;
      if (((lVar19 == 0) || (uVar10 == 0)) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_180011200();
      }
      param_1[0x9a] = uVar8;
      if ((((uVar10 == 0) || (lVar19 == 0)) || (uVar10 + 4 == 0)) ||
         (0x7ffffffefffe < ((ulonglong)(uVar10 + 4) + lVar19) - 0x10000)) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_18000f3d0();
      }
      uVar10 = DAT_181112214;
      uVar17 = (ulonglong)DAT_181112214;
      param_1[0x9b] = uVar8;
      if (((lVar19 == 0) || (uVar10 == 0)) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_180011200();
      }
      param_1[0x9c] = uVar8;
      if (((uVar10 == 0) || (lVar19 == 0)) ||
         ((uVar10 + 4 == 0 || (0x7ffffffefffe < ((ulonglong)(uVar10 + 4) + lVar19) - 0x10000)))) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_18000f3d0();
      }
      param_1[0x9d] = uVar8;
      if (((lVar19 == 0) || (DAT_181112218 == 0)) ||
         (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112218) - 0x10000)) {
        uVar8 = 0;
        uVar28 = 0;
        uVar30 = 0;
      }
      else {
        puVar15 = (undefined4 *)FUN_1800111b0(&local_898);
        uVar8 = *puVar15;
        uVar28 = puVar15[1];
        uVar30 = puVar15[2];
      }
      param_1[0x9e] = uVar8;
      param_1[0x9f] = uVar28;
      param_1[0xa0] = uVar30;
    }
  }
  if (((DAT_18111221c == 0) || (0x7ffffffefffe < (param_2 + (ulonglong)DAT_18111221c) - 0x10000)) ||
     (lVar19 = FUN_18000f3a0(), local_898 = lVar19, 0x7ffffffefffe < lVar19 - 0x10000U))
  goto LAB_18046650a;
  if (((lVar19 == 0) || (DAT_181112220 == 0)) ||
     (0x7ffffffefffe < ((ulonglong)DAT_181112220 + lVar19) - 0x10000)) {
    local_880[0] = param_1 + 0xd3;
    *local_880[0] = -1;
    if (lVar19 != 0) goto LAB_180465885;
LAB_1804658a6:
    uVar8 = 0;
  }
  else {
    local_880[0] = param_1 + 0xd3;
    iVar9 = FUN_180011200();
    param_1[0xd3] = iVar9;
LAB_180465885:
    if ((DAT_181112224 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112224) - 0x10000))
    goto LAB_1804658a6;
    uVar8 = FUN_18000f3d0();
  }
  uVar10 = DAT_181112228;
  uVar17 = (ulonglong)DAT_181112228;
  param_1[0xd4] = uVar8;
  if (uVar10 != 0) {
    lVar19 = lVar19 + uVar17;
    local_888 = lVar19;
    iVar9 = FUN_180011200(lVar19 + 0x298);
    uVar10 = FUN_180011200(lVar19 + 0x294);
    uVar10 = uVar10 & 0x8000001f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
    }
    iVar12 = iVar9;
    if (0x20 < iVar9) {
      iVar12 = 0x20;
    }
    param_1[0x186] = iVar12;
    param_1[0x187] = uVar10;
    if (iVar9 < 0x21) {
      iVar9 = 0;
      if (iVar12 < 1) {
        param_1[0x188] = iVar12;
      }
      else {
        do {
          uVar11 = iVar9 + uVar10 & 0x8000001f;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
          }
          uVar11 = uVar11 + 0x20 & 0x8000001f;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
          }
          uVar17 = (ulonglong)uVar11;
          lVar14 = (longlong)(int)uVar11;
          uVar8 = FUN_180011200(lVar19 + 0x14 + uVar17 * 0x14);
          param_1[lVar14 * 5 + 0xe6] = uVar8;
          uVar8 = FUN_18000f3d0(lVar19 + 0x18 + uVar17 * 0x14);
          param_1[lVar14 * 5 + 0xe7] = uVar8;
          puVar16 = (undefined8 *)FUN_1800111b0(local_868,lVar19 + 0x1c + uVar17 * 0x14);
          iVar9 = iVar9 + 1;
          uVar8 = *(undefined4 *)(puVar16 + 1);
          *(undefined8 *)(param_1 + lVar14 * 5 + 0xe8) = *puVar16;
          param_1[lVar14 * 5 + 0xea] = uVar8;
          iVar12 = param_1[0x186];
        } while (iVar9 < iVar12);
        param_1[0x188] = iVar12;
        if (0 < iVar12) {
          uVar11 = uVar10 & 0x8000001f;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
          }
          uVar11 = uVar11 + 0x20 & 0x8000001f;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
          }
          param_1[0x189] = param_1[((longlong)(int)uVar11 + 0x2e) * 5];
          param_1[0x18a] = param_1[((longlong)(int)uVar11 + 0x2e) * 5 + 1];
        }
        lVar19 = local_888;
      }
      piVar23 = param_1 + 0xd3;
      if ((((DAT_18111215c != 0) &&
           ((local_870 + (ulonglong)DAT_18111215c) - 0x10000 < 0x7ffffffeffff)) &&
          (cVar6 = FUN_180011220(), cVar6 != '\0')) && (iVar9 = param_1[0x186], 0 < iVar9)) {
        local_838[0] = 0;
        local_7f8 = 0;
        uStack_7f0 = 0;
        uStack_7a8 = 0;
        uStack_7a4 = 0;
        uStack_7a0 = 0;
        local_758 = 0;
        uStack_750 = 0;
        local_708 = 0;
        uStack_700 = 0;
        uStack_6fe = 0;
        uStack_6fc = 0;
        uStack_6b8 = 0;
        local_6b0 = 0;
        local_668 = 0;
        uStack_660 = 0;
        local_618 = 0;
        uStack_610 = 0;
        uStack_60c = 0;
        uStack_5c8 = 0;
        uStack_5c4 = 0;
        uStack_5c0 = 0;
        uStack_5bc = 0;
        local_838[1] = 0;
        local_828 = 0;
        uStack_820 = 0;
        local_818 = 0;
        uStack_810 = 0;
        local_808 = 0;
        uStack_800 = 0;
        local_7e8 = 0;
        uStack_7e0 = 0;
        local_7d8 = 0;
        local_7d0 = 0;
        local_7c8 = 0;
        uStack_7c4 = 0;
        uStack_7c0 = 0;
        uStack_7bc = 0;
        local_7b8 = 0;
        local_7b0 = 0;
        uStack_7ac = 0;
        local_798 = 0;
        local_790 = 0;
        local_788 = 0;
        uStack_780 = 0;
        local_778 = 0;
        local_770 = 0;
        local_768 = 0;
        local_760 = 0;
        local_748 = 0;
        uStack_740 = 0;
        local_738 = 0;
        uStack_730 = 0;
        local_728 = 0;
        local_720 = 0;
        local_718 = 0;
        local_710 = 0;
        uStack_6f8 = 0;
        uStack_6f4 = 0;
        local_6f0 = 0;
        local_6e8 = 0;
        local_6e0 = 0;
        local_6d8 = 0;
        local_6d0 = 0;
        local_6c8 = 0;
        local_6c0 = 0;
        local_6a8 = 0;
        local_6a0 = 0;
        local_698 = 0;
        uStack_690 = 0;
        local_688 = 0;
        uStack_684 = 0;
        uStack_680 = 0;
        uStack_67c = 0;
        uStack_678 = 0;
        uStack_674 = 0;
        uStack_670 = 0;
        local_66c = 0;
        local_658 = 0;
        uStack_656 = 0;
        uStack_654 = 0;
        uStack_650 = 0;
        uStack_64c = 0;
        local_648 = 0;
        local_640 = 0;
        local_638 = 0;
        uStack_634 = 0;
        uStack_630 = 0;
        uStack_62c = 0;
        local_628 = 0;
        local_620 = 0;
        uStack_608 = 0;
        uStack_604 = 0;
        uStack_600 = 0;
        local_5fc = 0;
        uStack_5f8 = 0;
        local_5f4 = 0;
        local_5f0 = 0;
        uStack_5ec = 0;
        uStack_5e8 = 0;
        uStack_5e4 = 0;
        local_5e0 = 0;
        uStack_5dc = 0;
        uStack_5d8 = 0;
        uStack_5d4 = 0;
        uStack_5d0 = 0;
        local_5cc = 0;
        uVar17 = 0;
        do {
          uVar11 = (int)uVar17 + uVar10 & 0x8000001f;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
          }
          uVar11 = uVar11 + 0x20 & 0x8000001f;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
          }
          uVar21 = *(undefined8 *)((longlong)(param_1 + (longlong)(int)uVar11 * 5 + 0xe6) + 8);
          uVar22 = (int)uVar17 + 1;
          uVar8 = param_1[(longlong)(int)uVar11 * 5 + 0xea];
          *(undefined8 *)((longlong)local_838 + uVar17 * 0x14) =
               *(undefined8 *)(param_1 + (longlong)(int)uVar11 * 5 + 0xe6);
          *(undefined8 *)((longlong)local_838 + uVar17 * 0x14 + 8) = uVar21;
          *(undefined4 *)((longlong)local_838 + uVar17 * 0x14 + 0x10) = uVar8;
          uVar17 = (ulonglong)uVar22;
        } while ((int)uVar22 < iVar9);
        FUN_18045fbd0(param_2,local_838);
        local_880[0] = piVar23;
        if ((DAT_181111df0 == param_2) && ((int)param_1[0x186] <= DAT_181111df8)) {
          iVar9 = 0;
          if (0 < DAT_181111df8) {
            do {
              lVar14 = (longlong)iVar9;
              iVar9 = iVar9 + 1;
              uVar8 = *(undefined4 *)(&DAT_181111e0c + lVar14 * 0x14);
              uVar21 = *(undefined8 *)(lVar14 * 0x14 + 0x181111e04);
              *(undefined8 *)(param_1 + lVar14 * 5 + 0xe6) =
                   *(undefined8 *)(&DAT_181111dfc + lVar14 * 0x14);
              *(undefined8 *)((longlong)(param_1 + lVar14 * 5 + 0xe6) + 8) = uVar21;
              param_1[lVar14 * 5 + 0xea] = uVar8;
            } while (iVar9 < DAT_181111df8);
          }
          param_1[0x186] = DAT_181111df8;
          param_1[0x187] = 0;
        }
      }
    }
    uVar8 = FUN_180011200(lVar19);
    param_1[0x1cd] = uVar8;
    lVar19 = local_898;
  }
  uVar17 = (ulonglong)DAT_18111222c;
  if (DAT_18111222c != 0) {
    lVar19 = lVar19 + uVar17;
    iVar9 = FUN_180011200(lVar19 + 0xf14);
    uVar10 = FUN_180011200(lVar19 + 0xf10);
    uVar10 = uVar10 & 0x8000001f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
    }
    iVar12 = iVar9;
    if (0x20 < iVar9) {
      iVar12 = 0x20;
    }
    param_1[0x1cb] = iVar12;
    param_1[0x1cc] = uVar10;
    fVar25 = DAT_1808acda0;
    if ((iVar9 < 0x21) && (iVar9 = 0, 0 < iVar12)) {
      do {
        uVar11 = iVar9 + uVar10 & 0x8000001f;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
        }
        uVar11 = uVar11 + 0x20 & 0x8000001f;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
        }
        iVar12 = FUN_180011200((ulonglong)uVar11 * 0x78 + 0x78 + lVar19);
        uVar21 = FUN_18000f3d0((ulonglong)uVar11 * 0x78 + 0x7c + lVar19);
        fVar26 = (float)uVar21;
        if ((fVar26 < 0.0) || (fVar4 <= fVar26)) {
          auVar27._0_8_ = FUN_180512fd0(uVar21,&local_888);
          auVar27._8_8_ = extraout_XMM0_Qb;
          fVar26 = (float)auVar27._0_8_;
          fVar29 = (float)local_888;
          if (fVar26 < 0.0) {
            fVar29 = (float)local_888 + fVar25;
            auVar27._0_4_ = fVar26 + fVar4;
            local_888 = CONCAT44(local_888._4_4_,fVar29);
          }
          fVar26 = auVar27._0_4_;
          iVar12 = iVar12 + (int)fVar29;
        }
        iVar9 = iVar9 + 1;
        param_1[(longlong)(int)uVar11 * 2 + 0x18b] = iVar12;
        param_1[(longlong)(int)uVar11 * 2 + 0x18c] = fVar26;
      } while (iVar9 < (int)param_1[0x1cb]);
      uVar17 = (ulonglong)DAT_18111222c;
    }
    uVar8 = FUN_180011200(uVar17 + local_898);
    param_1[0x1ce] = uVar8;
  }
  if (0xfffffffd < *local_880[0] - 1U) goto LAB_18046650a;
  plVar13 = (longlong *)FUN_1803a0940(&local_898);
  uVar10 = DAT_181112230;
  lVar19 = *plVar13;
  if (lVar19 == 0) goto LAB_18046650a;
  if ((DAT_181112230 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112230) - 0x10000)) {
    param_1[0xd5] = 0;
    if (uVar10 != 0) goto LAB_180465fa3;
LAB_180465fc0:
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200();
    param_1[0xd5] = uVar8;
LAB_180465fa3:
    uVar10 = uVar10 + 4;
    if ((uVar10 == 0) || (0x7ffffffefffe < ((ulonglong)uVar10 + lVar19) - 0x10000))
    goto LAB_180465fc0;
    uVar8 = FUN_18000f3d0();
  }
  uVar10 = DAT_181112234;
  uVar17 = (ulonglong)DAT_181112234;
  param_1[0xd6] = uVar8;
  if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
    param_1[0xd7] = 0;
    if (uVar10 != 0) goto LAB_180465ffd;
LAB_18046601a:
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200();
    param_1[0xd7] = uVar8;
LAB_180465ffd:
    if ((uVar10 + 4 == 0) || (0x7ffffffefffe < ((ulonglong)(uVar10 + 4) + lVar19) - 0x10000))
    goto LAB_18046601a;
    uVar8 = FUN_18000f3d0();
  }
  uVar10 = DAT_181112238;
  uVar17 = (ulonglong)DAT_181112238;
  param_1[0xd8] = uVar8;
  if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
    param_1[0xd9] = 0;
    if (uVar10 != 0) goto LAB_180466057;
LAB_180466074:
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200();
    param_1[0xd9] = uVar8;
LAB_180466057:
    if ((uVar10 + 4 == 0) || (0x7ffffffefffe < ((ulonglong)(uVar10 + 4) + lVar19) - 0x10000))
    goto LAB_180466074;
    uVar8 = FUN_18000f3d0();
  }
  uVar10 = DAT_18111223c;
  uVar17 = (ulonglong)DAT_18111223c;
  param_1[0xda] = uVar8;
  if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  uVar10 = DAT_181112240;
  uVar17 = (ulonglong)DAT_181112240;
  param_1[0xdb] = uVar8;
  if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200();
  }
  param_1[0xdc] = uVar8;
  if ((DAT_181112244 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112244) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200();
  }
  param_1[0xdd] = uVar8;
  if ((DAT_181112248 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112248) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200();
  }
  param_1[0xde] = uVar8;
  if ((DAT_18111224c == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_18111224c) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  uVar10 = DAT_181112250;
  uVar17 = (ulonglong)DAT_181112250;
  param_1[0x1e1] = uVar8;
  if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  uVar10 = DAT_181112254;
  uVar17 = (ulonglong)DAT_181112254;
  param_1[0x1e2] = uVar8;
  if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3d0();
  }
  uVar10 = DAT_181112258;
  uVar17 = (ulonglong)DAT_181112258;
  param_1[0x1e3] = uVar8;
  if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_180011200();
  }
  param_1[0x1e4] = uVar8;
  if ((DAT_18111226c == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_18111226c) - 0x10000)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = FUN_180011220();
  }
  *(bool *)(param_1 + 0x1e5) = cVar6 != '\0';
  local_898 = lVar19;
  lVar14 = FUN_1803a0710(&local_898);
  if (lVar14 != 0) {
    lVar18 = 0;
    do {
      lVar20 = lVar18 + 1;
      if (*(char *)(lVar14 + lVar18) != (&DAT_1806d4100)[lVar18]) goto LAB_180466272;
      lVar18 = lVar20;
    } while (lVar20 != 5);
    if ((DAT_18111225c == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_18111225c) - 0x10000)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = FUN_180011220();
    }
    *(bool *)(param_1 + 0xdf) = cVar6 != '\0';
  }
LAB_180466272:
  if ((DAT_181112260 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112260) - 0x10000)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = FUN_180011220();
  }
  *(bool *)((longlong)param_1 + 0x37d) = cVar6 != '\0';
  if ((DAT_181112264 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112264) - 0x10000)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = FUN_180011220();
  }
  *(bool *)((longlong)param_1 + 0x37e) = cVar6 != '\0';
  if ((DAT_181112268 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112268) - 0x10000)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = FUN_180011220();
  }
  *(bool *)((longlong)param_1 + 0x37f) = cVar6 != '\0';
  if ((DAT_181112270 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112270) - 0x10000)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = FUN_180011220();
  }
  *(bool *)(param_1 + 0xe0) = cVar6 != '\0';
  cVar6 = FUN_180462f60(lVar19);
  if (cVar6 != '\0') {
    if ((DAT_181112274 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112274) - 0x10000)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = FUN_180011220();
    }
    *(bool *)((longlong)param_1 + 0x381) = cVar6 != '\0';
    if ((DAT_181112278 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112278) - 0x10000)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = FUN_180011220();
    }
    *(bool *)((longlong)param_1 + 0x382) = cVar6 != '\0';
    if ((DAT_18111227c == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_18111227c) - 0x10000)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = FUN_180011220();
    }
    *(bool *)((longlong)param_1 + 899) = cVar6 != '\0';
    if ((DAT_181112280 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112280) - 0x10000)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = FUN_180011220();
    }
    *(bool *)(param_1 + 0xe1) = cVar6 != '\0';
    if ((DAT_181112284 == 0) || (0x7ffffffefffe < (lVar19 + (ulonglong)DAT_181112284) - 0x10000)) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_18000f3d0();
    }
    uVar10 = DAT_181112288;
    uVar17 = (ulonglong)DAT_181112288;
    param_1[0xe2] = uVar8;
    if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_18000f3d0();
    }
    uVar10 = DAT_18111228c;
    uVar17 = (ulonglong)DAT_18111228c;
    param_1[0xe3] = uVar8;
    if ((uVar10 == 0) || (0x7ffffffefffe < (lVar19 + uVar17) - 0x10000)) {
      param_1[0xe4] = 0;
      if (uVar10 != 0) goto LAB_18046647c;
    }
    else {
      uVar8 = FUN_180011200();
      param_1[0xe4] = uVar8;
LAB_18046647c:
      if ((uVar10 + 4 != 0) && (((ulonglong)(uVar10 + 4) + lVar19) - 0x10000 < 0x7ffffffeffff)) {
        uVar31 = FUN_18000f3d0();
      }
    }
    param_1[0xe5] = uVar31;
  }
  uVar31 = FUN_180462ef0(lVar19);
  uVar10 = DAT_181112290;
  uVar17 = (ulonglong)DAT_181112290;
  param_1[0x1cf] = uVar31;
  if (((uVar10 != 0) &&
      (lVar19 = FUN_18000f3a0(uVar17 + 8 + lVar19), lVar19 - 0x10000U < 0x7ffffffeffff)) &&
     (DAT_181112298 != 0)) {
    uVar10 = param_1[0x1e4];
    if (1 < uVar10) {
      uVar10 = 0;
    }
    uVar31 = FUN_18000f3d0((ulonglong)(uVar10 * 4) + lVar19 + (ulonglong)DAT_181112298);
    param_1[0x1d0] = uVar31;
  }
LAB_18046650a:
  FUN_180463020(param_1);
  param_1[0x1d4] = param_1[0x1e2];
  return CONCAT71((uint7)(uint3)((uint)param_1[0x1e2] >> 8),1);
}



/* ===== 180466580 FUN_180466580 ===== */

void FUN_180466580(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1801fd810();
  *(undefined4 *)(param_1 + 0x158) = param_3;
  if (*(longlong *)(param_1 + 0x148) == 0) goto LAB_1804665f9;
  if ((DAT_181112110 == 0) ||
     (0x7ffffffefffe < (*(longlong *)(param_1 + 0x148) + (ulonglong)DAT_181112110) - 0x10000)) {
LAB_1804665f0:
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_180011200();
    if (0xfffffffd < iVar1 - 1U) goto LAB_1804665f0;
    puVar2 = (undefined8 *)FUN_1803a0940(local_res8,iVar1);
    uVar3 = *puVar2;
  }
  *(undefined8 *)(param_1 + 0x150) = uVar3;
LAB_1804665f9:
  FUN_1804624c0(param_1);
  FUN_180463020(param_1);
  *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_2 + 0x750);
  return;
}



/* ===== 180466630 FUN_180466630 ===== */

undefined8 * FUN_180466630(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar10 = auStack_28;
  puVar11 = auStack_28;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 9);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x73) = *(undefined1 *)((longlong)param_2 + 0x73);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)((longlong)param_2 + 0xa9);
  *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)((longlong)param_2 + 0xaa);
  *(undefined1 *)((longlong)param_1 + 0xab) = *(undefined1 *)((longlong)param_2 + 0xab);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_1[0x1a] = param_2[0x1a];
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined1 *)((longlong)param_1 + 0xdc) = *(undefined1 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  param_1[0x1e] = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  param_1[0x21] = param_2[0x21];
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  param_1[0x23] = param_2[0x23];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  param_1[0x25] = param_2[0x25];
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x139) = *(undefined1 *)((longlong)param_2 + 0x139);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x144);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0x16c) = *(undefined1 *)((longlong)param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x174) = *(undefined1 *)((longlong)param_2 + 0x174);
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)((longlong)param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)((longlong)param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_2 + 0x1cc);
  param_1[0x3a] = param_2[0x3a];
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = *(undefined4 *)((longlong)param_2 + 0x1dc);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0x1e1) = *(undefined1 *)((longlong)param_2 + 0x1e1);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)((longlong)param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x3d);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)((longlong)param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  param_1[0x3f] = param_2[0x3f];
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)((longlong)param_1 + 0x201) = *(undefined1 *)((longlong)param_2 + 0x201);
  *(undefined1 *)((longlong)param_1 + 0x202) = *(undefined1 *)((longlong)param_2 + 0x202);
  *(undefined1 *)((longlong)param_1 + 0x203) = *(undefined1 *)((longlong)param_2 + 0x203);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)((longlong)param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)((longlong)param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)((longlong)param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x43);
  *(undefined8 *)((longlong)param_1 + 0x21c) = *(undefined8 *)((longlong)param_2 + 0x21c);
  *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)((longlong)param_2 + 0x224);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
  *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)((longlong)param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x234) = *(undefined4 *)((longlong)param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)((longlong)param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)((longlong)param_2 + 0x244);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)((longlong)param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_2 + 0x4a);
  *(undefined4 *)((longlong)param_1 + 0x254) = *(undefined4 *)((longlong)param_2 + 0x254);
  *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_2 + 0x4b);
  *(undefined4 *)((longlong)param_1 + 0x25c) = *(undefined4 *)((longlong)param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x264) = *(undefined4 *)((longlong)param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(param_2 + 0x4d);
  *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)((longlong)param_2 + 0x26c);
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)(param_2 + 0x4e);
  *(undefined4 *)((longlong)param_1 + 0x274) = *(undefined4 *)((longlong)param_2 + 0x274);
  param_1[0x4f] = param_2[0x4f];
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)((longlong)param_2 + 0x284);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x289) = *(undefined1 *)((longlong)param_2 + 0x289);
  *(undefined1 *)((longlong)param_1 + 0x28a) = *(undefined1 *)((longlong)param_2 + 0x28a);
  *(undefined1 *)((longlong)param_1 + 0x28b) = *(undefined1 *)((longlong)param_2 + 0x28b);
  *(undefined1 *)((longlong)param_1 + 0x28c) = *(undefined1 *)((longlong)param_2 + 0x28c);
  *(undefined1 *)((longlong)param_1 + 0x28d) = *(undefined1 *)((longlong)param_2 + 0x28d);
  *(undefined1 *)((longlong)param_1 + 0x28e) = *(undefined1 *)((longlong)param_2 + 0x28e);
  *(undefined1 *)((longlong)param_1 + 0x28f) = *(undefined1 *)((longlong)param_2 + 0x28f);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  if (param_1 == param_2) goto LAB_180466da6;
  lVar9 = param_1[0x53];
  if (lVar9 != 0) {
    if ((param_1[0x55] - lVar9 & 0xfffffffffffffff0U) < 0x1000) {
LAB_180466d4a:
      lVar7 = lVar9;
      puVar11 = puVar10;
    }
    else {
      lVar7 = *(longlong *)(lVar9 + -8);
      if (0x1f < (lVar9 - lVar7) - 8U) {
        pcVar1 = (code *)swi(0x29);
        lVar9 = (*pcVar1)(5);
        puVar10 = auStack_20;
        goto LAB_180466d4a;
      }
    }
    *(undefined8 *)(puVar11 + -8) = 0x180466d52;
    thunk_FUN_1803d64e0(lVar7);
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
  }
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = param_2[0x55];
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
LAB_180466da6:
  param_1[0x56] = param_2[0x56];
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x57);
  *(undefined4 *)((longlong)param_1 + 700) = *(undefined4 *)((longlong)param_2 + 700);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = *(undefined4 *)((longlong)param_2 + 0x2c4);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)((longlong)param_1 + 0x2c9) = *(undefined1 *)((longlong)param_2 + 0x2c9);
  *(undefined1 *)((longlong)param_1 + 0x2ca) = *(undefined1 *)((longlong)param_2 + 0x2ca);
  *(undefined1 *)((longlong)param_1 + 0x2cb) = *(undefined1 *)((longlong)param_2 + 0x2cb);
  *(undefined1 *)((longlong)param_1 + 0x2cc) = *(undefined1 *)((longlong)param_2 + 0x2cc);
  *(undefined1 *)((longlong)param_1 + 0x2cd) = *(undefined1 *)((longlong)param_2 + 0x2cd);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x5a);
  *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)((longlong)param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)((longlong)param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)((longlong)param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x5d);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)((longlong)param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x5e);
  *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)((longlong)param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x5f);
  *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)((longlong)param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_2 + 0x61);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0x62);
  *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)((longlong)param_2 + 0x314);
  *(undefined4 *)(param_1 + 99) = *(undefined4 *)(param_2 + 99);
  *(undefined4 *)((longlong)param_1 + 0x31c) = *(undefined4 *)((longlong)param_2 + 0x31c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)((longlong)param_1 + 0x324) = *(undefined4 *)((longlong)param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x65) = *(undefined4 *)(param_2 + 0x65);
  *(undefined4 *)((longlong)param_1 + 0x32c) = *(undefined4 *)((longlong)param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)((longlong)param_1 + 0x334) = *(undefined4 *)((longlong)param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x67);
  *(undefined4 *)((longlong)param_1 + 0x33c) = *(undefined4 *)((longlong)param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x344) = *(undefined4 *)((longlong)param_2 + 0x344);
  lVar9 = 5;
  *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
  *(undefined1 *)((longlong)param_1 + 0x349) = *(undefined1 *)((longlong)param_2 + 0x349);
  *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)((longlong)param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_2 + 0x6a);
  *(undefined4 *)((longlong)param_1 + 0x354) = *(undefined4 *)((longlong)param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_2 + 0x6b);
  *(undefined4 *)((longlong)param_1 + 0x35c) = *(undefined4 *)((longlong)param_2 + 0x35c);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x364) = *(undefined4 *)((longlong)param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(param_2 + 0x6d);
  *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)((longlong)param_2 + 0x36c);
  *(undefined4 *)(param_1 + 0x6e) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined4 *)((longlong)param_1 + 0x374) = *(undefined4 *)((longlong)param_2 + 0x374);
  *(undefined4 *)(param_1 + 0x6f) = *(undefined4 *)(param_2 + 0x6f);
  *(undefined1 *)((longlong)param_1 + 0x37c) = *(undefined1 *)((longlong)param_2 + 0x37c);
  *(undefined1 *)((longlong)param_1 + 0x37d) = *(undefined1 *)((longlong)param_2 + 0x37d);
  *(undefined1 *)((longlong)param_1 + 0x37e) = *(undefined1 *)((longlong)param_2 + 0x37e);
  *(undefined1 *)((longlong)param_1 + 0x37f) = *(undefined1 *)((longlong)param_2 + 0x37f);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)((longlong)param_1 + 0x381) = *(undefined1 *)((longlong)param_2 + 0x381);
  *(undefined1 *)((longlong)param_1 + 0x382) = *(undefined1 *)((longlong)param_2 + 0x382);
  *(undefined1 *)((longlong)param_1 + 899) = *(undefined1 *)((longlong)param_2 + 899);
  *(undefined1 *)((longlong)param_1 + 900) = *(undefined1 *)((longlong)param_2 + 900);
  *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(param_2 + 0x71);
  *(undefined4 *)((longlong)param_1 + 0x38c) = *(undefined4 *)((longlong)param_2 + 0x38c);
  *(undefined4 *)(param_1 + 0x72) = *(undefined4 *)(param_2 + 0x72);
  *(undefined4 *)((longlong)param_1 + 0x394) = *(undefined4 *)((longlong)param_2 + 0x394);
  puVar6 = param_1 + 0x73;
  puVar8 = param_2 + 0x73;
  do {
    uVar5 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar5;
    uVar5 = puVar8[3];
    puVar6[2] = puVar8[2];
    puVar6[3] = uVar5;
    uVar5 = puVar8[5];
    puVar6[4] = puVar8[4];
    puVar6[5] = uVar5;
    uVar5 = puVar8[7];
    puVar6[6] = puVar8[6];
    puVar6[7] = uVar5;
    uVar5 = puVar8[9];
    puVar6[8] = puVar8[8];
    puVar6[9] = uVar5;
    uVar5 = puVar8[0xb];
    puVar6[10] = puVar8[10];
    puVar6[0xb] = uVar5;
    uVar5 = puVar8[0xd];
    puVar6[0xc] = puVar8[0xc];
    puVar6[0xd] = uVar5;
    uVar5 = puVar8[0xf];
    puVar6[0xe] = puVar8[0xe];
    puVar6[0xf] = uVar5;
    lVar9 = lVar9 + -1;
    puVar6 = puVar6 + 0x10;
    puVar8 = puVar8 + 0x10;
  } while (lVar9 != 0);
  *(undefined4 *)(param_1 + 0xc3) = *(undefined4 *)(param_2 + 0xc3);
  lVar9 = 2;
  *(undefined4 *)((longlong)param_1 + 0x61c) = *(undefined4 *)((longlong)param_2 + 0x61c);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)((longlong)param_1 + 0x624) = *(undefined4 *)((longlong)param_2 + 0x624);
  *(undefined4 *)(param_1 + 0xc5) = *(undefined4 *)(param_2 + 0xc5);
  puVar6 = (undefined8 *)((longlong)param_1 + 0x62c);
  puVar8 = (undefined8 *)((longlong)param_2 + 0x62c);
  do {
    uVar5 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar5;
    uVar5 = puVar8[3];
    puVar6[2] = puVar8[2];
    puVar6[3] = uVar5;
    uVar5 = puVar8[5];
    puVar6[4] = puVar8[4];
    puVar6[5] = uVar5;
    uVar5 = puVar8[7];
    puVar6[6] = puVar8[6];
    puVar6[7] = uVar5;
    uVar5 = puVar8[9];
    puVar6[8] = puVar8[8];
    puVar6[9] = uVar5;
    uVar5 = puVar8[0xb];
    puVar6[10] = puVar8[10];
    puVar6[0xb] = uVar5;
    uVar5 = puVar8[0xd];
    puVar6[0xc] = puVar8[0xc];
    puVar6[0xd] = uVar5;
    uVar5 = puVar8[0xf];
    puVar6[0xe] = puVar8[0xe];
    puVar6[0xf] = uVar5;
    lVar9 = lVar9 + -1;
    puVar6 = puVar6 + 0x10;
    puVar8 = puVar8 + 0x10;
  } while (lVar9 != 0);
  *(undefined4 *)((longlong)param_1 + 0x72c) = *(undefined4 *)((longlong)param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0xe6) = *(undefined4 *)(param_2 + 0xe6);
  *(undefined4 *)((longlong)param_1 + 0x734) = *(undefined4 *)((longlong)param_2 + 0x734);
  *(undefined4 *)(param_1 + 0xe7) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)((longlong)param_1 + 0x73c) = *(undefined4 *)((longlong)param_2 + 0x73c);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined1 *)((longlong)param_1 + 0x744) = *(undefined1 *)((longlong)param_2 + 0x744);
  *(undefined4 *)(param_1 + 0xe9) = *(undefined4 *)(param_2 + 0xe9);
  *(undefined1 *)((longlong)param_1 + 0x74c) = *(undefined1 *)((longlong)param_2 + 0x74c);
  *(undefined4 *)(param_1 + 0xea) = *(undefined4 *)(param_2 + 0xea);
  uVar5 = param_2[0xec];
  param_1[0xeb] = param_2[0xeb];
  param_1[0xec] = uVar5;
  uVar5 = param_2[0xee];
  param_1[0xed] = param_2[0xed];
  param_1[0xee] = uVar5;
  uVar5 = param_2[0xf0];
  param_1[0xef] = param_2[0xef];
  param_1[0xf0] = uVar5;
  uVar5 = param_2[0xf2];
  param_1[0xf1] = param_2[0xf1];
  param_1[0xf2] = uVar5;
  uVar5 = param_2[0xf4];
  param_1[0xf3] = param_2[0xf3];
  param_1[0xf4] = uVar5;
  uVar5 = param_2[0xf6];
  param_1[0xf5] = param_2[0xf5];
  param_1[0xf6] = uVar5;
  param_1[0xf7] = param_2[0xf7];
  return param_1;
}



/* ===== 1804672f0 FUN_1804672f0 ===== */

undefined8 * FUN_1804672f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  return param_1;
}



/* ===== 180467370 FUN_180467370 ===== */

void FUN_180467370(void)

{
  int iVar1;
  
  if ((DAT_181112330 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181112330 = '\x01';
    DAT_1811122d0 = FUN_18038eaf0("CBasePlayerController","m_hPawn");
    DAT_1811122d4 = FUN_18038eaf0("CBasePlayerController","m_iConnected");
    DAT_1811122d8 = FUN_18038eaf0("CCSPlayerController","m_hPlayerPawn");
    DAT_1811122dc = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_1811122e0 = FUN_18038eaf0("C_BaseEntity","m_flSimulationTime");
    DAT_1811122e4 = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    DAT_1811122e8 = FUN_18038eaf0("C_BaseEntity","m_fFlags");
    DAT_1811122ec = FUN_18038eaf0("C_BaseEntity","m_iEFlags");
    DAT_1811122f0 = FUN_18038eaf0("C_BaseEntity","m_nNoInterpolationTick");
    DAT_1811122f4 = FUN_18038eaf0("C_BaseEntity","m_vecVelocity");
    DAT_1811122f8 = FUN_18038eaf0("C_BaseEntity","m_vecAbsVelocity");
    DAT_1811122fc = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_181112300 = FUN_18038eaf0("C_BaseModelEntity","m_Collision");
    DAT_181112304 = FUN_18038eaf0("CCollisionProperty","m_vecMins");
    DAT_181112308 = FUN_18038eaf0("CCollisionProperty","m_vecMaxs");
    DAT_18111230c = FUN_18038eaf0("CGameSceneNode","m_vecOrigin");
    DAT_181112310 = FUN_18038eaf0("CGameSceneNode","m_nodeToWorld");
    DAT_181112314 = FUN_18038eaf0("CGameSceneNode","m_angAbsRotation");
    DAT_181112318 = FUN_18038eaf0("CSkeletonInstance","m_modelState");
    iVar1 = FUN_18038eaf0("CModelState","m_flRootBoneOffset_x");
    if (iVar1 == 0) {
      DAT_18111231c = 0;
    }
    else {
      DAT_18111231c = iVar1 + 8;
    }
    DAT_181112320 = FUN_18038eaf0("C_BasePlayerPawn","m_pMovementServices");
    DAT_181112324 = FUN_18038eaf0("CCSPlayer_MovementServices","m_flDuckAmount");
    if (DAT_181112324 == 0) {
      DAT_181112324 = FUN_18038eaf0("CPlayer_MovementServices_Humanoid","m_flDuckAmount");
    }
    DAT_181112328 = FUN_18038eaf0("C_CSPlayerPawn","m_angEyeAngles");
    DAT_18111232c = FUN_18038eaf0("C_BaseModelEntity","m_vecViewOffset");
  }
  return;
}



