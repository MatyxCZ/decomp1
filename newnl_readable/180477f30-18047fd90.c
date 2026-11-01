/* ===== 180477f30 FUN_180477f30 ===== */

longlong FUN_180477f30(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar5 = param_1[1];
  if (lVar5 != param_1[2]) {
    FUN_180540170(lVar5,0,0xac);
    *(undefined8 *)(lVar5 + 0x2c) = 0xffffffffffffffff;
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined4 *)(lVar5 + 0x1c) = 0;
    *(undefined4 *)(lVar5 + 0x24) = 0;
    *(undefined4 *)(lVar5 + 0x34) = 0;
    *(undefined4 *)(lVar5 + 0x44) = 0;
    *(undefined4 *)(lVar5 + 0x54) = 0;
    *(undefined8 *)(lVar5 + 0x3c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0x4c) = 0xffffffffffffffff;
    *(undefined4 *)(lVar5 + 100) = 0xffffffff;
    lVar5 = param_1[1];
    param_1[1] = lVar5 + 0xac;
    return lVar5;
  }
  lVar3 = lVar5 - *param_1;
  lVar3 = lVar3 / 0x56 + (lVar3 >> 0x3f);
  uVar6 = 0x17d05f417d05f41;
  lVar3 = (lVar3 >> 1) - (lVar3 >> 0x3f);
  if (lVar3 == 0x17d05f417d05f41) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar8 = (param_1[2] - *param_1 >> 2) * -0x7d05f417d05f417d;
  if (uVar8 <= 0x17d05f417d05f41 - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar6 = uVar1;
    if (uVar1 <= uVar8) {
      uVar6 = uVar8;
    }
    if (0x17d05f417d05f41 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar2 = FUN_18000fb70(uVar6 * 0xac);
  lVar7 = lVar3 * 0xac + lVar2;
  FUN_180540170(lVar7,0,0xac);
  FUN_1804794f0(lVar7);
  lVar3 = *param_1;
  if (lVar5 == param_1[1]) {
    lVar9 = param_1[1] - lVar3;
    lVar4 = lVar2;
    lVar5 = lVar3;
  }
  else {
    FUN_180540530(lVar2,lVar3,lVar5 - lVar3);
    lVar4 = lVar7 + 0xac;
    lVar9 = param_1[1] - lVar5;
  }
  FUN_180540530(lVar4,lVar5,lVar9);
  FUN_1802691a0(param_1,lVar2,uVar1,uVar6);
  return lVar7;
}



/* ===== 1804780e0 FUN_1804780e0 ===== */

void FUN_1804780e0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_58;
  puVar7 = auStack_58;
  uVar9 = *param_1;
  uVar2 = ((longlong)(param_1[2] - uVar9) >> 2) * -0x7d05f417d05f417d;
  if (param_3 <= uVar2) {
    lVar5 = (longlong)(param_1[1] - uVar9) >> 2;
    if ((ulonglong)(lVar5 * -0x7d05f417d05f417d) < param_3) {
      FUN_180540530(uVar9,param_2,lVar5 * 4);
      uVar9 = param_1[1];
      lVar4 = (param_3 + lVar5 * 0x7d05f417d05f417d) * 0xac;
      FUN_180540530(uVar9,lVar5 * 4 + param_2,lVar4);
    }
    else {
      lVar4 = param_3 * 0xac;
      FUN_180540530(uVar9,param_2,lVar4);
    }
    goto LAB_18047823a;
  }
  if (0x17d05f417d05f41 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x17d05f417d05f41 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x17d05f417d05f41;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  puVar8 = auStack_58;
  if (uVar9 != 0) {
    uVar3 = uVar9;
    if ((ulonglong)(((longlong)(param_1[2] - uVar9) >> 2) * 4) < 0x1000) {
LAB_180478190:
      puVar7 = puVar6;
    }
    else {
      uVar3 = *(ulonglong *)(uVar9 - 8);
      uVar9 = (uVar9 - uVar3) - 8;
      if (0x1f < uVar9) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_50;
        uVar3 = uVar9;
        goto LAB_180478190;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x180478198;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar8 = puVar7;
  }
  if (0x17d05f417d05f41 < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_180478254;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x1804781bd;
  uVar9 = FUN_18000fb70(uVar2 * 0xac);
  *param_1 = uVar9;
  param_1[1] = uVar9;
  lVar4 = param_3 * 0xac;
  param_1[2] = uVar2 * 0xac + uVar9;
  *(undefined8 *)(puVar8 + -8) = 0x1804781e4;
  FUN_180540530(uVar9,param_2,lVar4);
LAB_18047823a:
  param_1[1] = lVar4 + uVar9;
  return;
}



/* ===== 180478270 FUN_180478270 ===== */

undefined8 FUN_180478270(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  
  lVar5 = param_1[2];
  param_1[2] = 0;
  if (lVar5 == 0) {
    lVar15 = *(longlong *)(param_1[1] + 0x20);
  }
  else {
    LOCK();
    plVar1 = (longlong *)(param_1[1] + 0x20);
    lVar15 = *plVar1;
    *plVar1 = *plVar1 - lVar5;
    UNLOCK();
    lVar15 = lVar15 - lVar5;
  }
  if (lVar15 == 0) {
    uVar12 = 2;
  }
  else {
    lVar5 = *(longlong *)(param_1[1] + 0x18);
    lVar15 = *param_1;
    while( true ) {
      if (lVar15 == 0) {
        lVar15 = lVar5 + 1;
      }
      lVar15 = lVar15 + -1;
      if (lVar15 == *param_1) break;
      lVar16 = lVar15 * 0x80;
      lVar6 = *(longlong *)param_1[1];
      uVar14 = *(ulonglong *)(lVar6 + 8 + lVar16);
      while (uVar14 < *(ulonglong *)(lVar6 + lVar16)) {
        iVar11 = FUN_1804e4d70(lVar6 + lVar16 + 0x18);
        if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(5);
        }
        if (*(int *)(lVar6 + 100 + lVar16) == 0x7fffffff) {
          *(undefined4 *)(lVar6 + 100 + lVar16) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1804e4a90(6);
        }
        puVar7 = *(undefined8 **)(lVar6 + 0x10 + lVar16);
        LOCK();
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
        UNLOCK();
        FUN_1804e4e90(lVar6 + lVar16 + 0x18);
        uVar13 = (1L << ((byte)*puVar7 & 0x3f)) - 1U & uVar14;
        puVar3 = puVar7 + uVar13 * 3 + 2;
        uVar8 = *(undefined4 *)((longlong)puVar3 + 4);
        uVar9 = *(undefined4 *)(puVar3 + 1);
        uVar10 = *(undefined4 *)((longlong)puVar3 + 0xc);
        *param_2 = *(undefined4 *)puVar3;
        param_2[1] = uVar8;
        param_2[2] = uVar9;
        param_2[3] = uVar10;
        *(undefined8 *)(param_2 + 4) = puVar7[uVar13 * 3 + 4];
        LOCK();
        piVar2 = (int *)(puVar7 + 1);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FUN_1803d64e0(puVar7);
        }
        puVar4 = (ulonglong *)(lVar6 + 8 + lVar16);
        LOCK();
        uVar13 = *puVar4;
        bVar17 = uVar14 == uVar13;
        if (bVar17) {
          *puVar4 = uVar14 + 1;
        }
        else {
          uVar14 = uVar13;
        }
        UNLOCK();
        if (bVar17) {
          return 0;
        }
      }
    }
    uVar12 = 1;
  }
  return uVar12;
}



/* ===== 1804783f0 FUN_1804783f0 ===== */

ulonglong * FUN_1804783f0(ulonglong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  bool bVar11;
  
  iVar3 = FUN_1804e4d70(param_1 + 0x28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)(param_1 + 0x74) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar1 = *(ulonglong **)(param_1 + 0x78);
  uVar2 = *puVar1;
  if (1 < *(longlong *)(param_1 + 0x80) - (longlong)puVar1 >> 3) {
    puVar9 = (ulonglong *)(*(longlong *)(param_1 + 0x80) + -8);
    uVar5 = *puVar9;
    *puVar9 = uVar2;
    uVar10 = (longlong)puVar9 - (longlong)puVar1;
    lVar8 = 0;
    lVar7 = ((longlong)uVar10 >> 3) + -1;
    lVar6 = lVar7 >> 1;
    lVar4 = lVar8;
    if (0 < lVar6) {
      do {
        lVar8 = (2 - (ulonglong)(puVar1[lVar4 * 2 + 1] < puVar1[lVar4 * 2 + 2])) + lVar4 * 2;
        puVar1[lVar4] = puVar1[lVar8];
        lVar4 = lVar8;
      } while (lVar8 < lVar6);
    }
    if ((lVar8 == lVar6) && ((uVar10 & 8) == 0)) {
      puVar1[lVar8] = *(ulonglong *)(((uVar10 & 0xfffffffffffffff8) - 8) + (longlong)puVar1);
      lVar8 = lVar7;
    }
    while (0 < lVar8) {
      lVar4 = lVar8 + -1 >> 1;
      if (puVar1[lVar4] <= uVar5) break;
      puVar1[lVar8] = puVar1[lVar4];
      lVar8 = lVar4;
    }
    puVar1[lVar8] = uVar5;
  }
  *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -8;
  FUN_1804e4e90(param_1 + 0x28);
  uVar5 = *(ulonglong *)(param_1 + 0x18);
  do {
    if (uVar2 <= uVar5) break;
    LOCK();
    uVar10 = *(ulonglong *)(param_1 + 0x18);
    bVar11 = uVar5 == uVar10;
    if (bVar11) {
      *(ulonglong *)(param_1 + 0x18) = uVar2;
    }
    else {
      uVar5 = uVar10;
    }
    UNLOCK();
  } while (!bVar11);
  *param_2 = uVar2;
  param_2[1] = param_1;
  param_2[2] = 0;
  return param_2;
}



/* ===== 180478540 FUN_180478540 ===== */

float * FUN_180478540(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar5 = param_1;
  if (param_1 != param_2) {
    while (pfVar4 = pfVar5 + 2, pfVar4 != param_2) {
      fVar1 = *pfVar4;
      fVar2 = pfVar5[3];
      if (*param_1 <= fVar1) {
        fVar3 = *pfVar5;
        pfVar5 = pfVar4;
        while (fVar1 < fVar3) {
          *pfVar5 = pfVar5[-2];
          pfVar5[1] = pfVar5[-1];
          fVar3 = pfVar5[-4];
          pfVar5 = pfVar5 + -2;
        }
        *pfVar5 = fVar1;
        pfVar5[1] = fVar2;
        pfVar5 = pfVar4;
      }
      else {
        pfVar5 = pfVar5 + 4;
        for (pfVar6 = pfVar4; pfVar6 != param_1; pfVar6 = pfVar6 + -2) {
          pfVar5[-2] = pfVar6[-2];
          pfVar5[-1] = pfVar6[-1];
          pfVar5 = pfVar5 + -2;
        }
        *param_1 = fVar1;
        param_1[1] = fVar2;
        pfVar5 = pfVar4;
      }
    }
  }
  return param_2;
}



/* ===== 180478610 FUN_180478610 ===== */

void FUN_180478610(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 - param_1 >> 4;
  while (0 < lVar1) {
    lVar1 = lVar1 + -1;
    FUN_180478c00(param_1,lVar1);
  }
  return;
}



/* ===== 180478680 FUN_180478680 ===== */

void FUN_180478680(undefined4 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 local_res8;
  
  lVar1 = param_2 - (longlong)param_1;
  while (0xf < lVar1) {
    if (1 < param_2 - (longlong)param_1 >> 3) {
      local_res8 = *(undefined8 *)(param_2 + -8);
      *(undefined4 *)(param_2 + -8) = *param_1;
      *(undefined4 *)(param_2 + -4) = param_1[1];
      FUN_180478c00(param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,&local_res8,param_3);
    }
    param_2 = param_2 + -8;
    lVar1 = param_2 - (longlong)param_1;
  }
  return;
}



/* ===== 180478720 FUN_180478720 ===== */

void FUN_180478720(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar3 = param_1[1];
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x80) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar4 + 0x10) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FUN_1803d64e0();
      }
    }
    FUN_1804ed520(*param_1,param_1[2] - *param_1 & 0xffffffffffffff80,0x40);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* ===== 1804787b0 FUN_1804787b0 ===== */

undefined8 * FUN_1804787b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x1ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    if (param_2 * 0x80 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)FUN_1804ed500(param_2 * 0x80,0x40,&DAT_1805757b2);
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180473c60();
      }
    }
    *param_1 = puVar9;
    param_1[1] = puVar9;
    param_1[2] = puVar9 + param_2 * 0x10;
    local_48 = puVar9;
    local_38 = param_1;
    for (uVar10 = param_2; local_40 = puVar9, uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      puVar9[0xf] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar6 = (undefined8 *)FUN_1804ecaa0(0x610);
      *puVar6 = 6;
      *(undefined4 *)(puVar6 + 1) = 1;
      puVar9[2] = puVar6;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(undefined4 *)(puVar9 + 0xc) = 0xffffffff;
      *(undefined4 *)(puVar9 + 3) = 2;
      *(undefined4 *)((longlong)puVar9 + 100) = 0;
      puVar9 = puVar9 + 0x10;
    }
    param_1[1] = puVar9;
  }
  param_1[3] = 0;
  param_1[4] = param_3;
  param_1[5] = 2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  plVar7 = (longlong *)FUN_180479340(&local_48,param_2);
  lVar2 = plVar7[2];
  plVar7[2] = 0;
  lVar3 = plVar7[1];
  plVar7[1] = 0;
  lVar4 = *plVar7;
  *plVar7 = 0;
  param_1[0xf] = lVar4;
  param_1[0x10] = lVar3;
  param_1[0x11] = lVar2;
  uVar10 = lVar3 - lVar4;
  uVar13 = (longlong)uVar10 >> 4;
  if (0 < (longlong)uVar13) {
    uVar11 = ((longlong)uVar10 >> 3) + -1 >> 1;
    do {
      uVar5 = *(ulonglong *)(lVar4 + -8 + uVar13 * 8);
      uVar13 = uVar13 - 1;
      uVar1 = uVar13;
      while ((longlong)uVar1 < (longlong)uVar11) {
        uVar12 = uVar1 * 2 | 1;
        if (*(ulonglong *)(lVar4 + 0x10 + uVar1 * 0x10) <= *(ulonglong *)(lVar4 + 8 + uVar1 * 0x10))
        {
          uVar12 = uVar1 * 2 + 2;
        }
        *(undefined8 *)(lVar4 + uVar1 * 8) = *(undefined8 *)(lVar4 + uVar12 * 8);
        uVar1 = uVar12;
      }
      if ((uVar1 == uVar11) && ((uVar10 & 8) == 0)) {
        *(undefined8 *)(lVar4 + uVar1 * 8) =
             *(undefined8 *)(lVar4 + -8 + (uVar10 & 0xfffffffffffffff8));
        uVar1 = ((longlong)uVar10 >> 3) - 1;
      }
      while ((longlong)uVar13 < (longlong)uVar1) {
        uVar8 = (longlong)(uVar1 - 1) >> 1;
        uVar12 = *(ulonglong *)(lVar4 + uVar8 * 8);
        if (uVar12 <= uVar5) break;
        *(ulonglong *)(lVar4 + uVar1 * 8) = uVar12;
        uVar1 = uVar8;
      }
      *(ulonglong *)(lVar4 + uVar1 * 8) = uVar5;
    } while (0 < (longlong)uVar13);
  }
  FUN_1800132b0(&local_48);
  return param_1;
}



/* ===== 180478a60 FUN_180478a60 ===== */

void FUN_180478a60(undefined8 param_1,undefined8 *param_2,PTP_WORK param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_res10;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_30 [24];
  
  uVar1 = *param_2;
  FUN_1804783f0(param_2 + 2,&local_48);
  while( true ) {
    while (iVar6 = FUN_180478270(&local_48,local_30), iVar6 == 0) {
      FUN_180477a30(uVar1,(undefined1)local_res10,&local_48,local_30);
    }
    if (iVar6 == 1) break;
    if (iVar6 == 2) {
      return;
    }
  }
  local_res10 = local_48;
  iVar6 = FUN_1804e4d70(local_40 + 0x28);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)(local_40 + 0x74) == 0x7fffffff) {
    *(undefined4 *)(local_40 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar2 = *(undefined8 **)(local_40 + 0x80);
  if (puVar2 == *(undefined8 **)(local_40 + 0x88)) {
    FUN_1804795f0(local_40 + 0x78,puVar2,&local_res10);
  }
  else {
    *puVar2 = local_48;
    *(longlong *)(local_40 + 0x80) = *(longlong *)(local_40 + 0x80) + 8;
  }
  lVar3 = *(longlong *)(local_40 + 0x78);
  lVar8 = *(longlong *)(local_40 + 0x80) - lVar3 >> 3;
  if (1 < lVar8) {
    uVar4 = *(ulonglong *)(*(longlong *)(local_40 + 0x80) + -8);
    lVar8 = lVar8 + -1;
    while (0 < lVar8) {
      lVar7 = lVar8 + -1 >> 1;
      uVar5 = *(ulonglong *)(lVar3 + lVar7 * 8);
      if (uVar5 <= uVar4) break;
      *(ulonglong *)(lVar3 + lVar8 * 8) = uVar5;
      lVar8 = lVar7;
    }
    *(ulonglong *)(lVar3 + lVar8 * 8) = uVar4;
  }
  FUN_1804e4e90(local_40 + 0x28);
  SubmitThreadpoolWork(param_3);
  return;
}



/* ===== 180478c00 FUN_180478c00 ===== */

void FUN_180478c00(longlong param_1,longlong param_2,ulonglong param_3,float *param_4)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  while (lVar6 < lVar5) {
    fVar3 = *(float *)(param_1 + 8 + lVar6 * 0x10);
    pfVar2 = (float *)(param_1 + 0x10 + lVar6 * 0x10);
    lVar1 = (ulonglong)(fVar3 < *pfVar2 || fVar3 == *pfVar2) + 1 + lVar6 * 2;
    *(undefined4 *)(param_1 + lVar6 * 8) = *(undefined4 *)(param_1 + lVar1 * 8);
    *(undefined4 *)(param_1 + 4 + lVar6 * 8) = *(undefined4 *)(param_1 + 4 + lVar1 * 8);
    lVar6 = lVar1;
  }
  if ((lVar6 == lVar5) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar6 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + lVar6 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
    lVar6 = param_3 - 1;
  }
  if (param_2 < lVar6) {
    fVar3 = *param_4;
    do {
      lVar5 = lVar6 + -1 >> 1;
      fVar4 = *(float *)(param_1 + lVar5 * 8);
      if (fVar3 <= fVar4) break;
      *(float *)(param_1 + lVar6 * 8) = fVar4;
      *(undefined4 *)(param_1 + 4 + lVar6 * 8) = *(undefined4 *)(param_1 + 4 + lVar5 * 8);
      lVar6 = lVar5;
    } while (param_2 < lVar5);
  }
  *(float *)(param_1 + lVar6 * 8) = *param_4;
  *(float *)(param_1 + 4 + lVar6 * 8) = param_4[1];
  return;
}



/* ===== 180478cd0 FUN_180478cd0 ===== */

void FUN_180478cd0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  
  fVar1 = *param_1;
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar3 < 0x29) {
    fVar2 = *param_2;
    if (fVar2 < fVar1) {
      *param_2 = fVar1;
      *param_1 = fVar2;
      fVar1 = param_2[1];
      param_2[1] = param_1[1];
      param_1[1] = fVar1;
    }
    fVar1 = *param_3;
    if (fVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = fVar1;
      fVar1 = param_3[1];
      param_3[1] = param_2[1];
      param_2[1] = fVar1;
      fVar1 = *param_2;
      if (fVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = fVar1;
        fVar1 = param_2[1];
        param_2[1] = param_1[1];
        param_1[1] = fVar1;
      }
    }
  }
  else {
    lVar3 = lVar3 + 1 >> 3;
    fVar2 = param_1[lVar3 * 2];
    if (fVar1 <= fVar2) {
      pfVar5 = (float *)((lVar3 * 8 | 4U) + (longlong)param_1);
    }
    else {
      param_1[lVar3 * 2] = fVar1;
      pfVar5 = param_1 + lVar3 * 2 + 1;
      *param_1 = fVar2;
      fVar1 = *pfVar5;
      *pfVar5 = param_1[1];
      param_1[1] = fVar1;
    }
    fVar1 = param_1[lVar3 * 4];
    if (fVar1 < param_1[lVar3 * 2]) {
      param_1[lVar3 * 4] = param_1[lVar3 * 2];
      fVar2 = *pfVar5;
      param_1[lVar3 * 2] = fVar1;
      fVar1 = param_1[lVar3 * 4 + 1];
      param_1[lVar3 * 4 + 1] = fVar2;
      *pfVar5 = fVar1;
      fVar1 = param_1[lVar3 * 2];
      if (fVar1 < *param_1) {
        param_1[lVar3 * 2] = *param_1;
        *param_1 = fVar1;
        fVar1 = *pfVar5;
        *pfVar5 = param_1[1];
        param_1[1] = fVar1;
      }
    }
    fVar1 = *param_2;
    pfVar4 = param_2 + lVar3 * -2;
    if (fVar1 < *pfVar4) {
      *param_2 = *pfVar4;
      *pfVar4 = fVar1;
      fVar1 = param_2[1];
      param_2[1] = pfVar4[1];
      pfVar4[1] = fVar1;
    }
    fVar1 = param_2[lVar3 * 2];
    if (fVar1 < *param_2) {
      param_2[lVar3 * 2] = *param_2;
      *param_2 = fVar1;
      fVar1 = param_2[lVar3 * 2 + 1];
      param_2[lVar3 * 2 + 1] = param_2[1];
      param_2[1] = fVar1;
      fVar1 = *param_2;
      if (fVar1 < *pfVar4) {
        *param_2 = *pfVar4;
        *pfVar4 = fVar1;
        fVar1 = param_2[1];
        param_2[1] = pfVar4[1];
        pfVar4[1] = fVar1;
      }
    }
    pfVar6 = param_3 + lVar3 * -4;
    pfVar4 = param_3 + lVar3 * -2;
    fVar1 = *pfVar4;
    if (fVar1 < *pfVar6) {
      *pfVar4 = *pfVar6;
      *pfVar6 = fVar1;
      fVar1 = pfVar4[1];
      pfVar4[1] = pfVar6[1];
      pfVar6[1] = fVar1;
    }
    fVar1 = *param_3;
    if (fVar1 < *pfVar4) {
      *param_3 = *pfVar4;
      *pfVar4 = fVar1;
      fVar1 = param_3[1];
      param_3[1] = pfVar4[1];
      pfVar4[1] = fVar1;
      fVar1 = *pfVar4;
      if (fVar1 < *pfVar6) {
        *pfVar4 = *pfVar6;
        *pfVar6 = fVar1;
        fVar1 = pfVar4[1];
        pfVar4[1] = pfVar6[1];
        pfVar6[1] = fVar1;
      }
    }
    fVar1 = *param_2;
    if (fVar1 < param_1[lVar3 * 2]) {
      *param_2 = param_1[lVar3 * 2];
      fVar2 = *pfVar5;
      param_1[lVar3 * 2] = fVar1;
      fVar1 = param_2[1];
      param_2[1] = fVar2;
      *pfVar5 = fVar1;
    }
    fVar1 = *pfVar4;
    if (fVar1 < *param_2) {
      *pfVar4 = *param_2;
      *param_2 = fVar1;
      fVar1 = pfVar4[1];
      pfVar4[1] = param_2[1];
      param_2[1] = fVar1;
      fVar1 = *param_2;
      if (fVar1 < param_1[lVar3 * 2]) {
        *param_2 = param_1[lVar3 * 2];
        fVar2 = *pfVar5;
        param_1[lVar3 * 2] = fVar1;
        fVar1 = param_2[1];
        param_2[1] = fVar2;
        *pfVar5 = fVar1;
        return;
      }
    }
  }
  return;
}



/* ===== 180478fb0 FUN_180478fb0 ===== */

undefined8 * FUN_180478fb0(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  pfVar4 = param_3 + 2;
  while (pfVar5 = param_3, param_2 < pfVar5) {
    if ((pfVar5[-2] < *pfVar5) || (param_3 = pfVar5 + -2, *pfVar5 < pfVar5[-2])) break;
  }
  if (pfVar4 < param_4) {
    do {
      if ((*pfVar4 < *pfVar5) || (*pfVar5 < *pfVar4)) break;
      pfVar4 = pfVar4 + 2;
    } while (pfVar4 < param_4);
  }
  pfVar7 = pfVar4;
  pfVar8 = pfVar5;
  do {
    pfVar6 = pfVar4;
    if (pfVar4 < param_4) {
      if (0x1f < (ulonglong)((longlong)param_4 + (7 - (longlong)pfVar4))) {
        do {
          fVar1 = *pfVar4;
          if (fVar1 <= *pfVar5) {
            pfVar6 = pfVar4;
            if (fVar1 < *pfVar5) goto joined_r0x0001804791bd;
            if (pfVar7 != pfVar4) {
              fVar2 = *pfVar7;
              *pfVar7 = fVar1;
              *pfVar4 = fVar2;
              fVar1 = pfVar7[1];
              pfVar7[1] = pfVar4[1];
              pfVar4[1] = fVar1;
            }
            pfVar7 = pfVar7 + 2;
          }
          fVar1 = pfVar4[2];
          pfVar6 = pfVar4 + 2;
          if (fVar1 <= *pfVar5) {
            if (fVar1 < *pfVar5) goto joined_r0x0001804791bd;
            if (pfVar7 != pfVar6) {
              fVar2 = *pfVar7;
              *pfVar7 = fVar1;
              *pfVar6 = fVar2;
              fVar1 = pfVar7[1];
              pfVar7[1] = pfVar4[3];
              pfVar4[3] = fVar1;
            }
            pfVar7 = pfVar7 + 2;
          }
          fVar1 = pfVar4[4];
          pfVar6 = pfVar4 + 4;
          if (fVar1 <= *pfVar5) {
            if (fVar1 < *pfVar5) goto joined_r0x0001804791bd;
            if (pfVar7 != pfVar6) {
              fVar2 = *pfVar7;
              *pfVar7 = fVar1;
              *pfVar6 = fVar2;
              fVar1 = pfVar7[1];
              pfVar7[1] = pfVar4[5];
              pfVar4[5] = fVar1;
            }
            pfVar7 = pfVar7 + 2;
          }
          fVar1 = pfVar4[6];
          pfVar6 = pfVar4 + 6;
          if (fVar1 <= *pfVar5) {
            if (fVar1 < *pfVar5) goto joined_r0x0001804791bd;
            if (pfVar7 != pfVar6) {
              fVar2 = *pfVar7;
              *pfVar7 = fVar1;
              *pfVar6 = fVar2;
              fVar1 = pfVar7[1];
              pfVar7[1] = pfVar4[7];
              pfVar4[7] = fVar1;
            }
            pfVar7 = pfVar7 + 2;
          }
          pfVar4 = pfVar4 + 8;
        } while (pfVar4 < param_4 + -6);
      }
      for (; pfVar6 = pfVar4, pfVar4 < param_4; pfVar4 = pfVar4 + 2) {
        fVar1 = *pfVar4;
        if (fVar1 <= *pfVar5) {
          if (fVar1 < *pfVar5) break;
          if (pfVar7 != pfVar4) {
            fVar2 = *pfVar7;
            *pfVar7 = fVar1;
            *pfVar4 = fVar2;
            fVar1 = pfVar7[1];
            pfVar7[1] = pfVar4[1];
            pfVar4[1] = fVar1;
          }
          pfVar7 = pfVar7 + 2;
        }
      }
    }
joined_r0x0001804791bd:
    pfVar4 = pfVar6;
    pfVar3 = pfVar8;
    if (param_2 < pfVar3) {
      fVar1 = pfVar3[-2];
      pfVar8 = pfVar3 + -2;
      pfVar6 = pfVar4;
      if (*pfVar5 <= fVar1) {
        if (*pfVar5 < fVar1) goto LAB_180479212;
        if (pfVar3 != pfVar5) {
          fVar2 = pfVar5[-2];
          pfVar5[-2] = fVar1;
          *pfVar8 = fVar2;
          fVar1 = pfVar5[-1];
          pfVar5[-1] = pfVar3[-1];
          pfVar3[-1] = fVar1;
        }
        pfVar5 = pfVar5 + -2;
      }
      goto joined_r0x0001804791bd;
    }
LAB_180479212:
    if (pfVar3 == param_2) {
      if (pfVar4 == param_4) {
        *param_1 = pfVar5;
        param_1[1] = pfVar7;
        return param_1;
      }
      if (pfVar7 != pfVar4) {
        fVar1 = *pfVar5;
        *pfVar5 = *pfVar7;
        *pfVar7 = fVar1;
        fVar1 = pfVar5[1];
        pfVar5[1] = pfVar7[1];
        pfVar7[1] = fVar1;
      }
      fVar1 = *pfVar5;
      *pfVar5 = *pfVar4;
      *pfVar4 = fVar1;
      fVar1 = pfVar5[1];
      pfVar5[1] = pfVar4[1];
      pfVar4[1] = fVar1;
      pfVar4 = pfVar4 + 2;
      pfVar5 = pfVar5 + 2;
      pfVar7 = pfVar7 + 2;
      pfVar8 = pfVar3;
    }
    else {
      pfVar8 = pfVar3 + -2;
      if (pfVar4 == param_4) {
        pfVar6 = pfVar5 + -2;
        if (pfVar5 != pfVar3) {
          fVar1 = *pfVar8;
          *pfVar8 = *pfVar6;
          *pfVar6 = fVar1;
          fVar1 = pfVar3[-1];
          pfVar3[-1] = pfVar5[-1];
          pfVar5[-1] = fVar1;
        }
        fVar1 = *pfVar6;
        *pfVar6 = pfVar7[-2];
        pfVar7[-2] = fVar1;
        fVar1 = pfVar5[-1];
        pfVar5[-1] = pfVar7[-1];
        pfVar7[-1] = fVar1;
        pfVar5 = pfVar6;
        pfVar7 = pfVar7 + -2;
      }
      else {
        fVar1 = *pfVar4;
        *pfVar4 = *pfVar8;
        *pfVar8 = fVar1;
        fVar1 = pfVar4[1];
        pfVar4[1] = pfVar3[-1];
        pfVar4 = pfVar4 + 2;
        pfVar3[-1] = fVar1;
      }
    }
  } while( true );
}



/* ===== 180479340 FUN_180479340 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_180479340(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    param_2 = param_2 * 8;
    if (param_2 == 0) {
      uVar5 = 0;
    }
    else if (param_2 < 0x1000) {
      uVar5 = FUN_1804ed030(param_2);
      if (uVar5 == 0) goto LAB_1804794de;
    }
    else {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
      lVar3 = FUN_1804ed030();
      if (lVar3 == 0) {
LAB_1804794de:
                    /* WARNING: Subroutine does not return */
        FUN_180473c60();
      }
      uVar5 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar3;
    }
    *param_1 = uVar5;
    param_1[2] = param_2 + uVar5;
    FUN_180540170(uVar5,0,param_2);
    param_2 = param_2 + uVar5;
    param_1[1] = param_2;
  }
  lVar2 = _UNK_1808ad398;
  lVar3 = _DAT_1808ad390;
  uVar5 = *param_1;
  uVar6 = (longlong)(param_2 - uVar5) >> 3;
  if (uVar6 != 0) {
    uVar4 = 0;
    if (7 < uVar6) {
      do {
        plVar1 = (longlong *)(uVar5 + uVar4 * 8);
        *plVar1 = uVar4 + lVar3;
        plVar1[1] = uVar4 + lVar2;
        plVar1 = (longlong *)(uVar5 + 0x10 + uVar4 * 8);
        *plVar1 = uVar4 + 2;
        plVar1[1] = uVar4 + 3;
        plVar1 = (longlong *)(uVar5 + 0x20 + uVar4 * 8);
        *plVar1 = uVar4 + 4;
        plVar1[1] = uVar4 + 5;
        plVar1 = (longlong *)(uVar5 + 0x30 + uVar4 * 8);
        *plVar1 = uVar4 + 6;
        plVar1[1] = uVar4 + 7;
        uVar4 = uVar4 + 8;
      } while (uVar4 != uVar6 - uVar6 % 8);
      if (uVar4 == uVar6) {
        return param_1;
      }
    }
    do {
      *(ulonglong *)(uVar5 + uVar4 * 8) = uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return param_1;
}



/* ===== 1804794f0 FUN_1804794f0 ===== */

undefined8 * FUN_1804794f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* ===== 1804795a0 FUN_1804795a0 ===== */

void FUN_1804795a0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar3; lVar4 = lVar4 + 0x80) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(lVar4 + 0x10) + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_1803d64e0();
    }
  }
  return;
}



/* ===== 1804795f0 FUN_1804795f0 ===== */

undefined8 * FUN_1804795f0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar4 = param_1[2] - lVar2 >> 3;
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
LAB_1804797b1:
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  uVar4 = (uVar4 >> 1) + uVar4;
  uVar1 = (param_1[1] - lVar2 >> 3) + 1;
  uVar9 = uVar1;
  if (uVar1 <= uVar4) {
    uVar9 = uVar4;
  }
  if (0x1fffffffffffffff < uVar9) goto LAB_1804797b1;
  uVar4 = uVar9 * 8;
  if (uVar4 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else if (uVar4 < 0x1000) {
    puVar6 = (undefined8 *)FUN_1804ed030(uVar4,&DAT_1805757b2);
    if (puVar6 == (undefined8 *)0x0) {
LAB_1804797ab:
                    /* WARNING: Subroutine does not return */
      FUN_180473c60();
    }
  }
  else {
    if (uVar4 + 0x27 <= uVar4) goto LAB_1804797b1;
    lVar10 = FUN_1804ed030(uVar4 + 0x27,&DAT_1805757b2);
    if (lVar10 == 0) goto LAB_1804797ab;
    puVar6 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
    puVar6[-1] = lVar10;
  }
  puVar7 = auStack_48;
  puVar8 = auStack_48;
  puVar11 = (undefined8 *)((param_2 - lVar2 & 0xfffffffffffffff8U) + (longlong)puVar6);
  *puVar11 = *param_3;
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar10 = param_1[1] - lVar2;
    puVar5 = puVar6;
    param_2 = lVar2;
  }
  else {
    FUN_180540530(puVar6,lVar2,param_2 - lVar2);
    puVar5 = puVar11 + 1;
    lVar10 = param_1[1] - param_2;
  }
  FUN_180540530(puVar5,param_2,lVar10);
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_180479770;
  lVar10 = lVar2;
  if ((ulonglong)((param_1[2] - lVar2 >> 3) * 8) < 0x1000) {
LAB_180479765:
    puVar8 = puVar7;
  }
  else {
    lVar10 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar7 = auStack_40;
      goto LAB_180479765;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180479770;
  thunk_FUN_1803d64e0(lVar10);
LAB_180479770:
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar1);
  param_1[2] = (longlong)(puVar6 + uVar9);
  return puVar11;
}



/* ===== 1804797c0 FUN_1804797c0 ===== */

void FUN_1804797c0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return;
}



/* ===== 1804797e0 FUN_1804797e0 ===== */

float * FUN_1804797e0(float *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = (float)*(undefined8 *)(param_2 + 1);
  fVar7 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar1 = *param_2;
  fVar9 = fVar7 * fVar7 + fVar5 * fVar5 + fVar1 * fVar1;
  if (fVar9 < 0.0) {
    fVar6 = (float)FUN_18051af10(CONCAT44(fVar7,fVar9));
  }
  else {
    fVar6 = SQRT(fVar9);
  }
  if ((fVar6 < DAT_1808abf54) || (DAT_1808accfc < fVar6)) {
    if (fVar9 == 0.0) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
    else {
      dVar2 = (double)fVar1;
      dVar3 = (double)fVar5;
      dVar4 = (double)fVar7;
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
  }
  else {
    fVar6 = DAT_1808ac34c / fVar6;
    *param_1 = fVar1 * fVar6;
    *(ulonglong *)(param_1 + 1) = CONCAT44(fVar7 * fVar6,fVar5 * fVar6);
  }
  return param_1;
}



/* ===== 180479940 FUN_180479940 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180479940(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined8 local_c4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_d8);
    lVar4 = local_d8[0];
  }
  else {
    lVar4 = DAT_181108a00;
  }
  lVar3 = FUN_180273f90(param_1,"userid");
  uVar2 = 0xffffffff;
  if (lVar3 - 0x10000U < 0x7ffffffeffff) {
    lVar3 = FUN_18000f3a0(lVar3 + 0x10);
    if (lVar3 - 0x10000U < 0x7ffffffeffff) {
      uVar1 = FUN_180011200(lVar3 + 0x10);
      uVar1 = uVar1 & 0x7fff;
      goto LAB_1804799ed;
    }
  }
  uVar1 = 0xffffffff;
LAB_1804799ed:
  uVar5 = FUN_180273cc0(param_1,&DAT_1806d23e4);
  uVar6 = FUN_180273cc0(param_1,&DAT_1806d23e8);
  uVar7 = FUN_180273cc0(param_1,&DAT_1806d23ec);
  uVar8 = (uint)_DAT_1808ade90;
  if ((((DAT_1808ac000 <= (float)(uVar5 & uVar8)) || (DAT_1808ac000 <= (float)(uVar6 & uVar8))) ||
      (DAT_1808ac000 <= (float)(uVar7 & uVar8))) && (lVar4 != 0)) {
    if (lVar4 - 0x10000U < 0x7ffffffeffff) {
      lVar4 = FUN_18000f3a0(lVar4 + 0x10);
      if (lVar4 - 0x10000U < 0x7ffffffeffff) {
        uVar2 = FUN_180011200(lVar4 + 0x10);
        uVar2 = uVar2 & 0x7fff;
      }
    }
    if (uVar1 == uVar2) {
      local_c4 = 0;
      local_b0 = 0;
      local_a8 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = 0xf;
      local_a0 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_68 = 0xf;
      local_80 = 0;
      local_c8 = 1;
      local_bc = uVar5;
      local_b8 = uVar6;
      local_b4 = uVar7;
      FUN_18047cc60(0,&local_c8);
      FUN_18000f890(&local_80);
      FUN_18000f890(&local_a0);
    }
  }
  return;
}



/* ===== 180479b60 FUN_180479b60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180479b60(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  ulonglong local_78;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_e8);
    lVar6 = local_e8[0];
  }
  else {
    lVar6 = DAT_181108a00;
  }
  if (lVar6 == 0) {
    return;
  }
  lVar5 = FUN_180273f90(param_1,"attacker");
  uVar4 = 0xffffffff;
  if ((lVar5 - 0x10000U < 0x7ffffffeffff) &&
     (lVar5 = FUN_18000f3a0(lVar5 + 0x10), lVar5 - 0x10000U < 0x7ffffffeffff)) {
    uVar2 = FUN_180011200(lVar5 + 0x10);
    uVar2 = uVar2 & 0x7fff;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if ((lVar6 - 0x10000U < 0x7ffffffeffff) &&
     (lVar6 = FUN_18000f3a0(lVar6 + 0x10), lVar6 - 0x10000U < 0x7ffffffeffff)) {
    uVar3 = FUN_180011200(lVar6 + 0x10);
    uVar3 = uVar3 & 0x7fff;
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (uVar2 == uVar3) {
    local_d4 = 0;
    local_cc = 0;
    local_c4 = 0;
    local_bc = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0xf;
    local_b0 = 0;
    lStack_88 = 0;
    local_80 = 0;
    local_78 = 0xf;
    local_90 = 0;
    local_d8 = 2;
    lVar6 = FUN_180273f90(param_1,"userid");
    if ((lVar6 - 0x10000U < 0x7ffffffeffff) &&
       (lVar6 = FUN_18000f3a0(lVar6 + 0x10), lVar6 - 0x10000U < 0x7ffffffeffff)) {
      uVar4 = FUN_180011200(lVar6 + 0x10);
      uVar4 = uVar4 & 0x7fff;
    }
    local_d4 = CONCAT44(local_d4._4_4_,uVar4);
    fVar10 = (float)FUN_180273cc0(param_1,"dmg_health");
    local_c4 = CONCAT44((int)fVar10,(undefined4)local_c4);
    fVar10 = (float)FUN_180273cc0(param_1,"health");
    local_bc = CONCAT44(local_bc._4_4_,(int)fVar10);
    fVar10 = (float)FUN_180273cc0(param_1,"hitgroup");
    local_bc = CONCAT44((int)fVar10,(undefined4)local_bc);
    puVar7 = (undefined8 *)FUN_180273d10(local_68,param_1,"weapon");
    if (&local_b0 != puVar7) {
      local_b0 = *puVar7;
      uStack_a8 = puVar7[1];
      local_a0 = puVar7[2];
      local_98 = puVar7[3];
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      *(undefined1 *)puVar7 = 0;
    }
    FUN_18000f890(local_68);
    plVar8 = (longlong *)FUN_1800aff60(local_68,&local_b0);
    if (&local_90 != plVar8) {
      if (0xf < local_78) {
        uVar9 = local_78 + 1;
        lVar6 = local_90;
        if (0xfff < uVar9) {
          lVar6 = *(longlong *)(local_90 + -8);
          if (0x1f < (local_90 - lVar6) - 8U) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar9 = local_78 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar6,uVar9);
      }
      local_90 = *plVar8;
      lStack_88 = plVar8[1];
      local_80 = plVar8[2];
      local_78 = plVar8[3];
      plVar8[2] = 0;
      plVar8[3] = 0xf;
      *(undefined1 *)plVar8 = 0;
    }
    uVar11 = FUN_18000f890(local_68);
    FUN_18047cc60(uVar11,&local_d8);
    FUN_18000f890(&local_90);
    FUN_18000f890(&local_b0);
  }
  return;
}



/* ===== 180479e20 FUN_180479e20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180479e20(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_b8);
  }
  else {
    local_b8[0] = DAT_181108a00;
  }
  if (local_b8[0] == 0) {
    return;
  }
  if (DAT_18111242c == 0) {
    return;
  }
  iVar1 = FUN_180011200((ulonglong)DAT_18111242c + local_b8[0]);
  if (iVar1 == -1) {
    return;
  }
  plVar4 = (longlong *)FUN_1803a0940(local_b8,iVar1);
  if (*plVar4 == 0) {
    return;
  }
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_60 = 0;
  local_a8 = 3;
  lVar5 = FUN_180273f90(param_1,"attacker");
  uVar3 = 0xffffffff;
  if ((lVar5 - 0x10000U < 0x7ffffffeffff) &&
     (lVar5 = FUN_18000f3a0(lVar5 + 0x10), lVar5 - 0x10000U < 0x7ffffffeffff)) {
    uVar2 = FUN_180011200(lVar5 + 0x10);
    uVar2 = uVar2 & 0x7fff;
  }
  else {
    uVar2 = 0xffffffff;
  }
  local_a4 = CONCAT44(local_a4._4_4_,uVar2);
  lVar5 = FUN_180273f90(param_1,"userid");
  uVar6 = extraout_XMM0_Da;
  if ((lVar5 - 0x10000U < 0x7ffffffeffff) &&
     (lVar5 = FUN_18000f3a0(lVar5 + 0x10), uVar6 = extraout_XMM0_Da_00,
     lVar5 - 0x10000U < 0x7ffffffeffff)) {
    uVar3 = FUN_180011200(lVar5 + 0x10);
    uVar3 = uVar3 & 0x7fff;
    uVar6 = extraout_XMM0_Da_01;
  }
  local_a4 = CONCAT44(uVar3,(undefined4)local_a4);
  FUN_18047cc60(uVar6,&local_a8);
  FUN_18000f890(&local_60);
  FUN_18000f890(&local_80);
  return;
}



/* ===== 180479fb0 FUN_180479fb0 ===== */

void FUN_180479fb0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  piVar10 = *(int **)(param_1 + 0x1ee8);
  piVar2 = *(int **)(param_1 + 0x1ef0);
  do {
    if (piVar10 == piVar2) {
      return;
    }
    if (((*piVar10 <= param_3) && (piVar10[0x55] < 1)) && (piVar10[3] != -1)) {
      plVar5 = (longlong *)FUN_1803a0940(local_res8);
      uVar1 = DAT_181112444;
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        uVar9 = (ulonglong)DAT_181112444;
        puVar6 = &DAT_180c8e990;
        if (0xf < DAT_180c8e9a8) {
          puVar6 = DAT_180c8e990;
        }
        DAT_180c8e9a0 = 0;
        *(undefined1 *)puVar6 = 0;
        if ((uVar1 != 0) && (DAT_181112448 != 0)) {
          lVar8 = lVar7 + (ulonglong)DAT_181112448 + uVar9;
          lVar7 = FUN_18000f3a0(lVar8);
          if ((lVar7 - 0x10000U < 0x7ffffffeffff) &&
             (lVar7 = FUN_1804797c0(lVar8), lVar7 - 0x10000U < 0x7ffffffeffff)) {
            lVar7 = FUN_18000f3a0(lVar7 + 0x248);
            if (lVar7 - 0x10000U < 0x7ffffffeffff) {
              uVar9 = 0;
              do {
                cVar3 = FUN_180011220(uVar9 + lVar7);
                if (cVar3 == '\0') break;
                FUN_1800690a0(&DAT_180c8e990,cVar3);
                uVar9 = uVar9 + 1;
              } while (uVar9 < 0x100);
            }
            uVar9 = *(ulonglong *)(param_2 + 0x38);
            if (uVar9 <= DAT_180c8e9a0) {
              if (uVar9 != 0) {
                if (*(ulonglong *)(param_2 + 0x40) < 0x10) {
                  lVar7 = param_2 + 0x28;
                }
                else {
                  lVar7 = *(longlong *)(param_2 + 0x28);
                }
                puVar6 = &DAT_180c8e990;
                if (0xf < DAT_180c8e9a8) {
                  puVar6 = DAT_180c8e990;
                }
                lVar7 = FUN_180068d80(puVar6,DAT_180c8e9a0,0,lVar7,uVar9);
                if (lVar7 == -1) goto LAB_18047a256;
              }
              *(undefined1 *)(piVar10 + 0x50) = 1;
              uVar1 = *(uint *)(param_2 + 4);
              if (((piVar10[2] == uVar1) && (-1 < (int)uVar1)) &&
                 ((lVar7 = FUN_18000f3a0(DAT_1809619d0), lVar7 != 0 &&
                  ((((lVar7 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                                            lVar7 + (ulonglong)
                                                    (uint)(((int)uVar1 >> 9) * DAT_180961944)),
                     lVar7 - 0x10000U < 0xfffffffffffeffff &&
                     (lVar7 = FUN_18000f3a0((ulonglong)((uVar1 & 0x1ff) * DAT_180961948) + lVar7),
                     lVar7 - 0x10000U < 0xfffffffffffeffff)) && (DAT_18111242c != 0)) &&
                   ((iVar4 = FUN_180011200((ulonglong)DAT_18111242c + lVar7), iVar4 != -1 &&
                    (plVar5 = (longlong *)FUN_1803a0940(local_res20,iVar4), *plVar5 != 0)))))))) {
                piVar10[0x55] = *(int *)(param_2 + 0x18);
                piVar10[0x56] = *(int *)(param_2 + 0x1c);
                piVar10[0x57] = *(int *)(param_2 + 0x20);
                if (piVar10 != (int *)(param_2 + -0x118)) {
                  if (*(ulonglong *)(param_2 + 0x60) < 0x10) {
                    lVar7 = param_2 + 0x48;
                  }
                  else {
                    lVar7 = *(longlong *)(param_2 + 0x48);
                  }
                  FUN_180029840(piVar10 + 0x58,lVar7);
                }
              }
            }
          }
        }
      }
    }
LAB_18047a256:
    piVar10 = piVar10 + 0x80;
  } while( true );
}



/* ===== 18047a290 FUN_18047a290 ===== */

bool FUN_18047a290(longlong param_1,float *param_2,float *param_3)

{
  bool bVar1;
  longlong lVar2;
  float *pfVar3;
  ulonglong uVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Da_01;
  double dVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res8;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_68 [80];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    DAT_1811089f8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  if ((((DAT_1811089f8 == 0) || (DAT_181112450 == 0)) ||
      (uVar4 = (ulonglong)DAT_181112454, DAT_181112454 == 0)) ||
     (lVar2 = FUN_18000f3a0((ulonglong)DAT_181112450 + DAT_1811089f8),
     0x7ffffffefffe < lVar2 - 0x10000U)) {
    fVar5 = 0.0;
    fVar11 = 0.0;
    fVar9 = 0.0;
  }
  else {
    pfVar3 = (float *)FUN_1800111b0(&local_78,lVar2 + uVar4);
    fVar9 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar5 = pfVar3[2];
  }
  if (((*(longlong *)(param_1 + 8) == 0) || (DAT_181112458 == 0)) ||
     ((lVar2 = FUN_18000f3a0(*(longlong *)(param_1 + 8) + (ulonglong)DAT_181112458),
      0x7ffffffefffe < lVar2 - 0x10000U || (DAT_18111245c == 0)))) {
    dVar10 = DAT_1808ac708;
  }
  else {
    FUN_18000f3d0((ulonglong)DAT_18111245c + lVar2);
    dVar10 = (double)extraout_XMM0_Da * DAT_1808ac518;
  }
  local_74 = param_3[1] - fVar11;
  local_70 = param_3[2] - fVar5;
  local_78 = *param_3 - fVar9;
  dVar8 = (double)DAT_180c8a7fc;
  fVar9 = local_70 * local_70 + local_74 * local_74 + local_78 * local_78;
  if (fVar9 < 0.0) {
    FUN_18051af10(fVar9);
    fVar9 = extraout_XMM0_Da_00;
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  if ((float)(dVar8 * dVar10) <= fVar9) {
    fVar11 = *param_2 * DAT_1808ac014;
    fVar12 = param_2[1] * DAT_1808ac014;
    fVar5 = (float)FUN_180517200(fVar11);
    pfVar3 = (float *)FUN_1804797e0(local_68,&local_78);
    fVar6 = (float)FUN_180517790(fVar12);
    fVar9 = pfVar3[1];
    fVar7 = (float)FUN_180517790(fVar11);
    fVar11 = pfVar3[2];
    FUN_180517200(fVar12);
    bVar1 = DAT_1808ac264 <=
            (fVar6 * fVar5 * fVar9 - fVar7 * fVar11) + extraout_XMM0_Da_01 * fVar5 * *pfVar3;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* ===== 18047a510 FUN_18047a510 ===== */

undefined1 FUN_18047a510(undefined8 param_1,undefined8 param_2)

{
  (*DAT_180961f50)(param_1,param_2,0x183009,3,0xf);
  return 1;
}



/* ===== 18047a540 FUN_18047a540 ===== */

undefined8 FUN_18047a540(undefined8 param_1)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  (*DAT_180961f60)();
  (*DAT_180961f68)(param_1,in_stack_00000028,in_stack_00000030,in_stack_00000038,4,0,0);
  return 1;
}



/* ===== 18047a5a0 FUN_18047a5a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18047a5a0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_res20;
  undefined8 local_58;
  float local_50;
  
  if (((DAT_180961f50 == 0) || (DAT_180961f60 == 0)) || (DAT_180961f68 == 0)) {
LAB_18047a95c:
    return (ulonglong)DAT_1808acda0;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res20);
    DAT_181108a00 = local_res20;
    DAT_1811089f8 = FUN_1803a0c50(&local_res20);
    DAT_180cd1304 = '\x01';
  }
  _DAT_1811141d0 = 0;
  uRam00000001811141d8 = 0;
  _DAT_1811141e0 = 0;
  uRam00000001811141e8 = 0;
  _DAT_1811141f0 = 0;
  uRam00000001811141f8 = 0;
  _DAT_181114200 = 0;
  uRam0000000181114208 = 0;
  _DAT_181114210 = 0;
  uRam0000000181114218 = 0;
  _DAT_181114220 = 0;
  uRam0000000181114228 = 0;
  _DAT_181114230 = 0;
  uRam0000000181114238 = 0;
  _DAT_181114240 = 0;
  uRam0000000181114248 = 0;
  cVar1 = FUN_18047a510(&DAT_1811141d0,DAT_1811089f8);
  if (cVar1 == '\0') goto LAB_18047a95c;
  _DAT_1811141e0 = 0x4000000000;
  _DAT_181112470 = 0;
  uRam0000000181114208._0_2_ = CONCAT11(0x4b,(undefined1)uRam0000000181114208);
  FUN_180540170(&DAT_181112488,0,0x1c10);
  FUN_180540170(&DAT_1811140a8,0,0x128);
  DAT_181112478 = &DAT_181112488;
  fVar9 = 0.0;
  uVar10 = 0;
  _DAT_181112480 = 0x8000000000000080;
  _DAT_1811140a0 = 0x8000000000000008;
  DAT_181114098 = &DAT_1811140a8;
  if (DAT_181112434 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)FUN_18000f3d0(param_3 + (ulonglong)DAT_181112434);
  }
  local_50 = fVar5 * *(float *)(param_2 + 1);
  local_58 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) * fVar5,(float)*param_2 * fVar5);
  if (DAT_181112440 == 0) {
    fVar5 = 0.0;
  }
  else {
    iVar2 = FUN_180011200(param_3 + (ulonglong)DAT_181112440);
    fVar5 = (float)iVar2;
  }
  if (DAT_18111243c == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_18000f3d0(param_3 + (ulonglong)DAT_18111243c);
  }
  if (DAT_181112438 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_18000f3d0(param_3 + (ulonglong)DAT_181112438);
  }
  cVar1 = FUN_18047a540(&DAT_181112470,param_1,&local_58,&DAT_1811141d0,fVar5,uVar6,uVar7);
  iVar2 = DAT_181114090;
  if (cVar1 == '\0') goto LAB_18047a95c;
  if (DAT_181114090 < 1) {
    return 0;
  }
  fVar5 = DAT_181114178 * DAT_181114178 + DAT_18111417c * DAT_18111417c +
          DAT_181114174 * DAT_181114174;
  if (fVar5 < 0.0) {
    uVar8 = FUN_18051af10(fVar5);
  }
  else {
    uVar8 = (ulonglong)(uint)SQRT(fVar5);
  }
  uVar6 = (undefined4)(uVar8 >> 0x20);
  fVar5 = (float)uVar8;
  if (DAT_181114098 == (undefined *)0x0) {
    return 0;
  }
  if (DAT_181112478 == (undefined *)0x0) {
    return 0;
  }
  iVar3 = 0;
  if (3 < iVar2) {
    do {
      lVar4 = (longlong)iVar3;
      if ((DAT_181114098[lVar4 * 0x18 + 0x14] & 1) == 0) {
        fVar9 = fVar5 * *(float *)(DAT_181112478 +
                                  (ulonglong)*(ushort *)(DAT_181114098 + lVar4 * 0x18 + 0x12) * 0x38
                                  + 0xc);
        uVar10 = uVar6;
      }
      if ((DAT_181114098[lVar4 * 0x18 + 0x2c] & 1) == 0) {
        fVar9 = fVar5 * *(float *)(DAT_181112478 +
                                  (ulonglong)*(ushort *)(DAT_181114098 + lVar4 * 0x18 + 0x2a) * 0x38
                                  + 0xc);
        uVar10 = uVar6;
      }
      if ((DAT_181114098[lVar4 * 0x18 + 0x44] & 1) == 0) {
        fVar9 = fVar5 * *(float *)(DAT_181112478 +
                                  (ulonglong)*(ushort *)(DAT_181114098 + lVar4 * 0x18 + 0x42) * 0x38
                                  + 0xc);
        uVar10 = uVar6;
      }
      if ((DAT_181114098[lVar4 * 0x18 + 0x5c] & 1) == 0) {
        fVar9 = fVar5 * *(float *)(DAT_181112478 +
                                  (ulonglong)*(ushort *)(DAT_181114098 + lVar4 * 0x18 + 0x5a) * 0x38
                                  + 0xc);
        uVar10 = uVar6;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < iVar2 + -3);
    if (iVar2 <= iVar3) goto LAB_18047a936;
  }
  do {
    if ((DAT_181114098[(longlong)iVar3 * 0x18 + 0x14] & 1) == 0) {
      fVar9 = fVar5 * *(float *)(DAT_181112478 +
                                (ulonglong)
                                *(ushort *)(DAT_181114098 + (longlong)iVar3 * 0x18 + 0x12) * 0x38 +
                                0xc);
      uVar10 = uVar6;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar2);
LAB_18047a936:
  return CONCAT44(uVar10,fVar9);
}



/* ===== 18047a980 FUN_18047a980 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18047a980(ulonglong param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  HMODULE pHVar14;
  HANDLE pvVar15;
  undefined8 *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulonglong local_res8;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  
  plVar19 = (longlong *)0x0;
  local_res8 = param_1;
  lVar8 = FUN_180474340(param_3,*param_2);
  uVar6 = param_2[2];
  if ((int)uVar6 < 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_18000f3a0(DAT_1809619d0);
    if ((lVar9 == 0) ||
       (lVar9 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                              (ulonglong)(uint)(((int)uVar6 >> 9) * DAT_180961944) + lVar9),
       0xfffffffffffefffe < lVar9 - 0x10000U)) {
      lVar9 = 0;
    }
    else {
      lVar10 = FUN_18000f3a0((ulonglong)((uVar6 & 0x1ff) * DAT_180961948) + lVar9);
      lVar9 = 0;
      if (lVar10 - 0x10000U < 0xfffffffffffeffff) {
        lVar9 = lVar10;
      }
    }
    if (((lVar9 != 0) && (DAT_18111242c != 0)) &&
       (iVar5 = FUN_180011200(lVar9 + (ulonglong)DAT_18111242c), iVar5 != -1)) {
      plVar11 = (longlong *)FUN_1803a0940(&local_res8,iVar5);
      lVar10 = *plVar11;
      goto LAB_18047aa6d;
    }
  }
  lVar10 = 0;
LAB_18047aa6d:
  if (lVar8 != 0) {
    if (((-1 < (int)param_2[2]) &&
        ((int)param_2[2] < (int)(DAT_181112370 - DAT_181112368 >> 4) * -0x194be3ab)) &&
       (lVar10 != 0)) {
      lVar12 = FUN_180469950(lVar9);
      if (lVar12 == lVar10) {
        plVar11 = (longlong *)((longlong)(int)param_2[2] * 0xfd0 + DAT_181112368);
        if (((int)plVar11[2] == param_2[2]) && (*plVar11 == lVar9)) {
          lVar9 = FUN_180264b70("sv_lagcomp_filterbyviewangle");
          plVar19 = plVar11;
          if (lVar9 != 0) {
            bVar3 = FUN_180264d70();
            local_res8 = (ulonglong)bVar3;
            if (((DAT_181112450 == 0) || (uVar18 = (ulonglong)DAT_181112454, DAT_181112454 == 0)) ||
               (lVar9 = FUN_18000f3a0(lVar10 + (ulonglong)DAT_181112450),
               0x7ffffffefffe < lVar9 - 0x10000U)) {
              local_c0 = 0.0;
              uVar22 = 0;
              uVar20 = 0;
            }
            else {
              puVar13 = (undefined4 *)FUN_1800111b0(&local_b8,lVar9 + uVar18);
              uVar20 = *puVar13;
              uVar22 = puVar13[1];
              local_c0 = (float)puVar13[2];
            }
            local_c8 = CONCAT44(uVar22,uVar20);
            if (DAT_180ce1e7d == '\0') {
              DAT_180ce1e7d = '\x01';
              pHVar14 = GetModuleHandleA("engine2.dll");
              if (pHVar14 != (HMODULE)0x0) {
                local_a8 = 0;
                uStack_a0 = 0;
                local_98 = 0;
                pvVar15 = GetCurrentProcess();
                iVar5 = K32GetModuleInformation(pvVar15,pHVar14,&local_a8,0x18);
                if (((iVar5 != 0) && (uStack_a0 = uStack_a0 & 0xffffffff, local_a8 != 0)) &&
                   (uStack_a0 != 0)) {
                  local_b0 = 4.34403e-44;
                  uStack_ac = 0;
                  local_b8 = -1.0637212e-38;
                  fStack_b4 = 1.4013e-45;
                  lVar9 = FUN_1801d1e00(&local_a8,&local_b8);
                  if (lVar9 != 0) {
                    DAT_181112460 = FUN_180011200();
                  }
                }
              }
            }
            uVar18 = (ulonglong)DAT_181112460;
            if ((((DAT_181112460 != 0) && (DAT_180cfa188 != 0)) &&
                ((DAT_180cfa190 != 0 &&
                 (((((DAT_180cfa198 != 0 && (DAT_180cfa188 != 0)) && (DAT_180961fa8 != 0)) &&
                   ((lVar9 = FUN_18000f3a0(), lVar9 - 0x10000U < 0x7ffffffeffff &&
                    ((uVar18 + lVar9) - 0x10000 < 0x7ffffffeffff)))) &&
                  (iVar5 = FUN_180011200(), -1 < iVar5)))))) &&
               ((iVar7 = (int)plVar11[0x1e2], iVar7 != 0 && (0 < iVar7)))) {
              iVar17 = 0;
              do {
                uVar6 = *(int *)((longlong)plVar11 + 0xf14) + iVar17 & 0x8000000f;
                if ((int)uVar6 < 0) {
                  uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
                }
                uVar6 = uVar6 + 0x10 & 0x8000000f;
                if ((int)uVar6 < 0) {
                  uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
                }
                lVar9 = (longlong)(int)uVar6 * 0xe8;
                if ((int)plVar11[(longlong)(int)uVar6 * 0x1d + 0x12] ==
                    iVar5 - (uint)(param_4 < (int)plVar11[2])) {
                  local_c8 = *(undefined8 *)((longlong)plVar11 + lVar9 + 0xa4);
                  local_c0 = *(float *)((longlong)plVar11 + lVar9 + 0xac);
                  break;
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 < iVar7);
            }
            local_b8 = 0.0;
            fStack_b4 = 0.0;
            local_b0 = 0.0;
            if ((*(longlong *)(lVar8 + 0x40) != 0) &&
               (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x40), lVar8 != 0)) {
              local_b8 = *(float *)(lVar8 + 0x18);
              fStack_b4 = *(float *)(lVar8 + 0x1c);
              local_b0 = *(float *)(lVar8 + 0x20);
            }
            if (local_res8 == 1) {
              cVar4 = FUN_18047a290(plVar11,&local_b8,&local_c8);
            }
            else {
              cVar4 = '\x01';
            }
            *(bool *)((longlong)param_2 + 0x13e) = ((float)param_2[0x48] != 0.0) != (bool)cVar4;
          }
        }
      }
    }
  }
  if ((param_2[3] == 0xffffffff) || (0x7ffffffe < (uint)param_2[3] >> 1)) {
    lVar8 = 0;
  }
  else {
    plVar11 = (longlong *)FUN_1803a0940(&local_res8);
    lVar8 = *plVar11;
  }
  param_2[0x4e] = 3;
  if (((0 < (int)param_2[0x7e]) && ((float)(int)param_2[0x55] < (float)param_2[0x4d])) &&
     (((int)param_2[0x55] < 1 || (0 < (int)param_2[0x56])))) {
    lVar9 = (longlong)(int)param_2[0x7e] + 0x1f;
    fVar25 = (float)*(undefined8 *)(param_2 + lVar9 * 3 + 1);
    fVar23 = (float)((ulonglong)*(undefined8 *)(param_2 + lVar9 * 3 + 1) >> 0x20);
    fVar24 = (float)param_2[lVar9 * 3];
    local_b8 = fVar24 - (float)param_2[0x52];
    fStack_b4 = fVar25 - (float)*(undefined8 *)(param_2 + 0x53);
    local_b0 = fVar23 - (float)((ulonglong)*(undefined8 *)(param_2 + 0x53) >> 0x20);
    puVar16 = (undefined8 *)FUN_1804797e0(&local_c8,&local_b8);
    uVar2 = _UNK_1808adae8;
    uVar1 = _DAT_1808adae0;
    local_98 = 0;
    local_b0 = *(float *)(puVar16 + 1);
    local_b8 = (float)*puVar16;
    fStack_b4 = (float)((ulonglong)*puVar16 >> 0x20);
    local_c0 = local_b0 * DAT_1808acc80;
    local_a8 = _DAT_1808adae0;
    uStack_a0 = _UNK_1808adae8;
    local_c8 = CONCAT44(fStack_b4 * DAT_1808acc80,local_b8 * DAT_1808acc80);
    cVar4 = FUN_18046dd40(&local_a8,param_2 + 0x52,&local_c8,&local_b8,param_2 + 0x2e);
    iVar5 = -1;
    if (((cVar4 == '\0') || (local_98 == 0)) || (*(longlong *)(local_98 + 0x40) == 0)) {
      iVar7 = -1;
    }
    else {
      iVar7 = FUN_180011200();
    }
    if (iVar7 != param_2[0x57]) {
      param_2[0x4e] = 4;
      if (((plVar19 != (longlong *)0x0) && (*(char *)(param_2 + 0x11) != '\0')) &&
         (0 < (int)plVar19[0x1e2])) {
        iVar7 = 0;
        do {
          uVar6 = *(int *)((longlong)plVar19 + 0xf14) + iVar7 & 0x8000000f;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
          }
          uVar6 = uVar6 + 0x10 & 0x8000000f;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
          }
          if ((int)plVar19[(longlong)(int)uVar6 * 0x1d + 0x12] == param_2[0xe]) {
            local_80 = 0;
            local_90 = uVar1;
            uStack_88 = uVar2;
            cVar4 = FUN_18046dd40(&local_90,param_2 + 0x52,&local_c8,&local_b8,
                                  plVar19 + (longlong)(int)uVar6 * 0x1d + 0x22);
            if (((cVar4 != '\0') && (local_80 != 0)) && (*(longlong *)(local_80 + 0x40) != 0)) {
              iVar5 = FUN_180011200((ulonglong)DAT_18111244c + *(longlong *)(local_80 + 0x40));
            }
            if (iVar5 == param_2[0x57]) {
              param_2[0x4e] = 5;
            }
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)plVar19[0x1e2]);
      }
      iVar7 = param_2[0x57];
    }
    if ((lVar8 == 0) || (DAT_181112430 == 0)) {
      lVar9 = 0;
      if (lVar8 == 0) {
        return;
      }
    }
    else {
      lVar8 = FUN_18000f3a0((ulonglong)DAT_181112430 + 8 + lVar8);
      lVar9 = 0;
      if (lVar8 - 0x10000U < 0x7ffffffeffff) {
        lVar9 = lVar8;
      }
    }
    if (((lVar9 != 0) && (iVar7 == -1)) &&
       (fVar21 = (float)FUN_18047a5a0(param_2 + 0x52,&local_b8), 0.0 <= fVar21)) {
      fVar24 = (float)param_2[0x52] - fVar24;
      fVar25 = (float)param_2[0x53] - fVar25;
      fVar23 = (float)param_2[0x54] - fVar23;
      fVar24 = fVar25 * fVar25 + fVar24 * fVar24 + fVar23 * fVar23;
      if (((param_2[0x57] != -1) || ((int)param_2[0x7e] < 3)) ||
         (fVar21 * fVar21 <= fVar24 + DAT_1808ac34c)) {
        fVar23 = (float)param_2[0x53] - local_a8._4_4_;
        local_a8._0_4_ = (float)param_2[0x52] - (float)local_a8;
        uStack_a0._0_4_ = (float)param_2[0x54] - (float)uStack_a0;
        if (fVar24 < fVar23 * fVar23 + (float)local_a8 * (float)local_a8 +
                     (float)uStack_a0 * (float)uStack_a0) {
          param_2[0x4e] = 3;
        }
      }
      else {
        *(undefined1 *)(param_2 + 0x4f) = 1;
      }
    }
  }
  return;
}



/* ===== 18047b190 FUN_18047b190 ===== */

undefined8 FUN_18047b190(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [48];
  
  uVar6 = *param_2 - param_3;
  uVar3 = -uVar6;
  if ((int)uVar3 < 0) {
    uVar3 = uVar6;
  }
  if (0x95 < uVar3) {
    param_2[0x4e] = 8;
    return 1;
  }
  if (param_2[0x4e] != 0) {
    return 1;
  }
  iVar1 = param_2[0x7e];
  if ((iVar1 < 1) && (param_2[0x57] == -1)) {
    if (*param_2 + 3 < param_3) {
      param_2[0x4e] = 9;
      return 1;
    }
    return 0;
  }
  if ((char)param_2[4] != '\0') {
    return 1;
  }
  param_2[0x52] = param_2[5];
  param_2[0x53] = param_2[6];
  param_2[0x54] = param_2[7];
  if (1 < iVar1) {
    fVar12 = (float)*(undefined8 *)(param_2 + 0x60);
    fVar14 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
    local_48 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + ((longlong)iVar1 + 0x1f) * 3)
                               >> 0x20) - fVar14,
                        (float)*(undefined8 *)(param_2 + ((longlong)iVar1 + 0x1f) * 3) - fVar12);
    local_40 = (float)param_2[((longlong)iVar1 + 0x1f) * 3 + 2] - (float)param_2[0x62];
    puVar4 = (undefined8 *)FUN_1804797e0(local_38,&local_48);
    fVar11 = (float)*puVar4;
    fVar13 = (float)((ulonglong)*puVar4 >> 0x20);
    fVar9 = ((float)param_2[0x54] - (float)param_2[0x62]) * *(float *)(puVar4 + 1) +
            ((float)param_2[0x53] - fVar14) * fVar13 + ((float)param_2[0x52] - fVar12) * fVar11;
    fVar10 = *(float *)(puVar4 + 1) * fVar9 + (float)param_2[0x62];
    fVar12 = fVar11 * fVar9 + fVar12;
    fVar14 = fVar13 * fVar9 + fVar14;
    param_2[0x54] = (int)fVar10;
    fVar10 = fVar10 - (float)param_2[7];
    *(ulonglong *)(param_2 + 0x52) = CONCAT44(fVar14,fVar12);
    fVar12 = fVar12 - (float)param_2[5];
    fVar14 = fVar14 - (float)param_2[6];
    if (DAT_1808ac0c0 < fVar14 * fVar14 + fVar12 * fVar12 + fVar10 * fVar10) {
      *(undefined1 *)((longlong)param_2 + 0x13d) = 1;
    }
  }
  pfVar2 = DAT_181114258;
  iVar8 = param_2[0x55];
  if (iVar8 == -1) {
    if ((((char)param_2[0x50] != '\0') || (DAT_181114250 == DAT_181114258)) ||
       (pfVar7 = DAT_181114250, iVar1 < 1)) goto LAB_18047b432;
    do {
      uVar3 = 0;
      do {
        uVar5 = (ulonglong)uVar3;
        if (((*pfVar7 == (float)param_2[uVar5 * 3 + 0x60]) &&
            (pfVar7[1] == (float)param_2[uVar5 * 3 + 0x61])) &&
           (pfVar7[2] == (float)param_2[uVar5 * 3 + 0x62])) {
          param_2[0x55] = 0;
          iVar8 = 0;
          break;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
      pfVar7 = pfVar7 + 3;
    } while (pfVar7 != pfVar2);
  }
  if (iVar8 == 0) {
    param_2[0x4e] = 10;
    return 1;
  }
LAB_18047b432:
  if (((float)iVar8 < (float)param_2[0x4d]) && ((iVar8 < 1 || (0 < param_2[0x56])))) {
    FUN_18047a980();
    return 1;
  }
  if (param_2[0x57] != -1) {
    param_2[0x4e] = 2;
  }
  return 1;
}



/* ===== 18047b4a0 FUN_18047b4a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18047b4a0(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  size_t sVar11;
  longlong *plVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulonglong *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  int iVar20;
  undefined8 ****ppppuVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  undefined1 uVar25;
  ulonglong uVar26;
  undefined2 *puVar27;
  char cVar28;
  char *pcVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar33;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [24];
  int local_1f8 [10];
  char local_1d0 [8];
  bool local_1c8;
  char local_1c7;
  bool local_1c6;
  char local_1c5;
  undefined1 local_1c4;
  undefined1 local_1c3;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulonglong local_1a8 [6];
  undefined8 ****local_178;
  longlong lStack_170;
  longlong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  char *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [4];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_218;
  uVar25 = 0;
  puVar24 = auStack_218;
  if (*(char *)(param_1 + 4) != '\0') goto LAB_18047c4db;
  uVar30 = param_1[0x4e];
  puVar24 = auStack_218;
  if (uVar30 == 1) goto LAB_18047c4db;
  puVar24 = auStack_218;
  switch(uVar30) {
  case 3:
    if ((int)param_1[0x51] < 1) {
      if (*(char *)((longlong)param_1 + 0x13d) == '\0') {
        if (((float)param_1[0x4b] == DAT_1808ac34c) && (*(char *)(param_1 + 0x4a) == '\0')) {
          pcVar29 = "hitchance misprediction";
        }
        else {
          pcVar29 = "spread";
        }
      }
      else {
        pcVar29 = "shootpos misprediction";
      }
    }
    else {
      pcVar29 = "prediction error";
    }
    break;
  case 4:
    if (*(char *)((longlong)param_1 + 0x13e) == '\0') {
      if (*(char *)((longlong)param_1 + 0x13f) == '\0') {
        pcVar29 = "occlusion";
        if (*(char *)(param_1 + 0x4f) == '\0') {
          pcVar29 = "unknown";
        }
      }
      else {
        pcVar29 = "lagcomp failure";
      }
    }
    else {
      pcVar29 = "lagcomp misprediction";
    }
    break;
  case 5:
    pcVar29 = "extrapolation";
    break;
  case 6:
    pcVar29 = "death";
    break;
  case 7:
    pcVar29 = "player death";
    break;
  case 8:
    pcVar29 = "event timeout";
    break;
  case 9:
    pcVar29 = "unregistered shot";
    break;
  case 10:
    pcVar29 = "damage rejection";
    break;
  default:
    goto switchD_18047b50d_default;
  }
  local_1f8[8] = param_1[0x55];
  if (((local_1f8[8] < 1) || ((float)param_1[0x4d] <= (float)local_1f8[8])) ||
     ((int)param_1[0x56] < 1)) {
    cVar28 = '\0';
  }
  else {
    cVar28 = '\x01';
  }
  local_1f8[6] = param_1[0x4c];
  local_1f8[4] = param_1[0x4b];
  local_1f8[2] = param_1[0x57];
  local_1f8[0] = param_1[0xd];
  local_1d0[0] = cVar28;
  FUN_180470370(*param_1,param_1[2],uVar30,pcVar29);
  bVar5 = false;
  local_1c4 = 0;
  bVar6 = false;
  local_1c8 = false;
  local_1c7 = '\0';
  local_1c5 = '\0';
  local_1c6 = false;
  local_1c0._0_4_ = 0;
  if (cVar28 != '\0') {
    if (param_1[0xd] == param_1[0x57]) {
      local_1c5 = '\x01';
    }
    else {
      local_1c7 = '\x01';
    }
  }
  if (uVar30 == 3) {
    bVar2 = (float)param_1[0x4b] != DAT_1808ac34c;
    if (bVar2) {
      fVar33 = (float)param_1[0x4b] * DAT_1808acb08;
      fVar33 = (float)FUN_18053fc00((float)((DAT_1808ac1f0 ^ (uint)fVar33) & _DAT_1808ade90 ^
                                           (uint)fVar33) + fVar33);
      local_1c0._0_4_ = (int)fVar33;
      local_1c6 = true;
    }
    local_1c8 = *(char *)(param_1 + 0x4a) != '\0';
    local_1c6 = bVar2;
    if (param_1[0x51] == 2) {
      bVar6 = true;
    }
    else {
    }
  }
  if ((*(char *)((longlong)param_1 + 0x141) != '\0') &&
     ((7 < (int)uVar30 || ((200 >> ((byte)uVar30 & 0x1f) & 1U) == 0)))) {
    bVar5 = true;
    local_1c4 = 1;
  }
  local_1c3 = *(undefined1 *)((longlong)param_1 + 0x129);
  if ((cVar28 == '\0') && ((uVar30 - 3 < 2 || (uVar30 - 9 < 2)))) {
    FUN_18026d7b0(4);
  }
  local_1a8[3] = 0;
  local_1a8[4] = 0;
  uVar26 = 0xf;
  local_1a8[5] = 0xf;
  local_1a8[2] = 0;
  if (bVar5) {
    local_138 = (char *)0x0;
    uStack_130 = 0;
    pcVar10 = (char *)FUN_18000fb70(0x20);
    uVar4 = s_prediction_error_18077de38._12_4_;
    uVar32 = s_prediction_error_18077de38._8_4_;
    uVar31 = s_prediction_error_18077de38._4_4_;
    local_128 = 0x10;
    uStack_120 = 0x1f;
    *(undefined4 *)pcVar10 = s_prediction_error_18077de38._0_4_;
    *(undefined4 *)(pcVar10 + 4) = uVar31;
    *(undefined4 *)(pcVar10 + 8) = uVar32;
    *(undefined4 *)(pcVar10 + 0xc) = uVar4;
    pcVar10[0x10] = '\0';
    local_138 = pcVar10;
    if (local_1a8[4] != 0) {
      FUN_1800134a0(local_1a8 + 2,&DAT_1806f0594,2);
    }
    FUN_1800134a0(local_1a8 + 2,pcVar10,0x10);
    FUN_18000f890(&local_138);
  }
  if (bVar6) {
    local_1a8[0] = 9;
    local_1a8[1] = 0xf;
    local_1b8._0_1_ = s_aim_punch_18077ddf8[0];
    local_1b8._1_1_ = s_aim_punch_18077ddf8[1];
    local_1b8._2_1_ = s_aim_punch_18077ddf8[2];
    local_1b8._3_1_ = s_aim_punch_18077ddf8[3];
    local_1b8._4_1_ = s_aim_punch_18077ddf8[4];
    local_1b8._5_1_ = s_aim_punch_18077ddf8[5];
    local_1b8._6_1_ = s_aim_punch_18077ddf8[6];
    local_1b8._7_1_ = s_aim_punch_18077ddf8[7];
    uStack_1b0 = (ulonglong)(byte)s_aim_punch_18077ddf8[8];
    if (local_1a8[4] != 0) {
      FUN_1800134a0(local_1a8 + 2,&DAT_1806f0594,2);
    }
    FUN_1800134a0(local_1a8 + 2,&local_1b8,9);
    puVar24 = auStack_218;
    if (local_1a8[1] < 0x10) goto LAB_18047b873;
    uVar22 = local_1a8[1] + 1;
    lVar17 = local_1b8;
    if (uVar22 < 0x1000) {
LAB_18047b86e:
      thunk_FUN_1803d64e0(lVar17,uVar22);
      goto LAB_18047b873;
    }
    lVar17 = *(longlong *)(local_1b8 + -8);
    if ((local_1b8 - lVar17) - 8U < 0x20) {
      uVar22 = local_1a8[1] + 0x28;
      goto LAB_18047b86e;
    }
LAB_18047c475:
    uVar25 = (undefined1)uVar26;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar24 = puVar24 + 8;
switchD_18047b50d_default:
    puVar27 = &DAT_1806eb0d8;
    if (uVar30 == 2) {
      puVar27 = (undefined2 *)&DAT_1806e0924;
    }
    puVar24[0x48] = uVar25;
    *(undefined4 *)(puVar24 + 0x40) = param_1[0x55];
    *(undefined4 *)(puVar24 + 0x38) = param_1[0x4c];
    *(undefined4 *)(puVar24 + 0x30) = param_1[0x4b];
    *(undefined4 *)(puVar24 + 0x28) = param_1[0x57];
    *(undefined4 *)(puVar24 + 0x20) = param_1[0xd];
    uVar31 = param_1[2];
    uVar32 = *param_1;
    *(undefined8 *)(puVar24 + -8) = 0x18047c4db;
    FUN_180470370(uVar32,uVar31,uVar30,puVar27);
  }
  else {
LAB_18047b873:
    if (local_1c7 == '\0') {
LAB_18047b9bc:
      puVar24 = auStack_218;
      if (local_1c5 != '\0') {
        uVar13 = FUN_18003a390(&local_118,(int)(float)param_1[0x4c]);
        pcVar14 = (char *)FUN_180066ab0(&local_138,"damage: ",uVar13);
        if (local_1a8[4] != 0) {
          FUN_1800134a0(local_1a8 + 2,&DAT_1806f0594,2);
        }
        puVar24 = auStack_218;
        pcVar10 = pcVar14;
        if (*(ulonglong *)(pcVar14 + 0x18) < 0x10) goto LAB_18047ba1b;
        pcVar10 = *(char **)pcVar14;
        puVar24 = auStack_218;
        goto LAB_18047ba1e;
      }
    }
    else {
      if ((uint)param_1[0xd] < 9) {
        pcVar10 = (&PTR_s_generic_18089faa0)[(int)param_1[0xd]];
      }
      else {
        pcVar10 = PTR_s_generic_18089faa0;
      }
      local_1a8[0] = 10;
      local_1a8[1] = 0xf;
      local_1b8._0_1_ = s_hitgroup__1808abd80[0];
      local_1b8._1_1_ = s_hitgroup__1808abd80[1];
      local_1b8._2_1_ = s_hitgroup__1808abd80[2];
      local_1b8._3_1_ = s_hitgroup__1808abd80[3];
      local_1b8._4_1_ = s_hitgroup__1808abd80[4];
      local_1b8._5_1_ = s_hitgroup__1808abd80[5];
      local_1b8._6_1_ = s_hitgroup__1808abd80[6];
      local_1b8._7_1_ = s_hitgroup__1808abd80[7];
      uStack_1b0 = (ulonglong)(ushort)s_hitgroup__1808abd80._8_2_;
      sVar11 = strlen(pcVar10);
      plVar12 = (longlong *)FUN_1800134a0(&local_1b8,pcVar10,sVar11);
      local_178 = (undefined8 ****)*plVar12;
      lStack_170 = plVar12[1];
      local_168 = plVar12[2];
      uStack_160 = plVar12[3];
      plVar12[2] = 0;
      plVar12[3] = 0xf;
      *(undefined1 *)plVar12 = 0;
      if (local_1a8[4] != 0) {
        FUN_1800134a0(local_1a8 + 2,&DAT_1806f0594,2);
      }
      ppppuVar21 = &local_178;
      if (0xf < uStack_160) {
        ppppuVar21 = local_178;
      }
      FUN_1800134a0(local_1a8 + 2,ppppuVar21,local_168);
      if (uStack_160 < 0x10) {
LAB_18047b97f:
        puVar24 = auStack_218;
        if (0xf < local_1a8[1]) {
          uVar22 = local_1a8[1] + 1;
          lVar17 = local_1b8;
          if (0xfff < uVar22) {
            lVar17 = *(longlong *)(local_1b8 + -8);
            if (0x1f < (local_1b8 - lVar17) - 8U) goto LAB_18047c475;
            uVar22 = local_1a8[1] + 0x28;
          }
          thunk_FUN_1803d64e0(lVar17,uVar22);
        }
        goto LAB_18047b9bc;
      }
      uVar22 = uStack_160 + 1;
      ppppuVar21 = local_178;
      if (uVar22 < 0x1000) {
LAB_18047b979:
        thunk_FUN_1803d64e0(ppppuVar21,uVar22);
        goto LAB_18047b97f;
      }
      ppppuVar21 = (undefined8 ****)local_178[-1];
      if ((ulonglong)((longlong)local_178 + (-8 - (longlong)ppppuVar21)) < 0x20) {
        uVar22 = uStack_160 + 0x28;
        goto LAB_18047b979;
      }
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar24 = auStack_210;
LAB_18047ba1b:
      pcVar14 = pcVar10;
LAB_18047ba1e:
      uVar13 = *(undefined8 *)(pcVar14 + 0x10);
      *(undefined8 *)(puVar24 + -8) = 0x18047ba2b;
      FUN_1800134a0(local_1a8 + 2,pcVar10,uVar13);
      *(undefined8 *)(puVar24 + -8) = 0x18047ba35;
      FUN_18000f890(&local_138);
      *(undefined8 *)(puVar24 + -8) = 0x18047ba3f;
      FUN_18000f890(&local_118);
    }
    if (puVar24[0x52] == '\0') {
LAB_18047bb27:
      cVar1 = puVar24[0x50];
      if (cVar1 != '\0') {
        *(undefined8 *)(puVar24 + 0x60) = 0;
        *(undefined8 *)(puVar24 + 0x68) = 0;
        *(undefined8 *)(puVar24 + 0x70) = 10;
        *(undefined8 *)(puVar24 + 0x78) = 0xf;
        *(undefined8 *)(puVar24 + 0x60) = s_force_shot_180763960._0_8_;
        *(undefined2 *)(puVar24 + 0x68) = s_force_shot_180763960._8_2_;
        puVar24[0x6a] = 0;
        if (local_1a8[4] != 0) {
          *(undefined8 *)(puVar24 + -8) = 0x18047bb86;
          FUN_1800134a0(local_1a8 + 2,&DAT_1806f0594,2);
        }
        *(undefined8 *)(puVar24 + -8) = 0x18047bb9a;
        FUN_1800134a0(local_1a8 + 2,puVar24 + 0x60,10);
        uVar22 = *(ulonglong *)(puVar24 + 0x78);
        if (0xf < uVar22) {
          uVar23 = uVar22 + 1;
          lVar17 = *(longlong *)(puVar24 + 0x60);
          lVar19 = lVar17;
          if (0xfff < uVar23) {
            lVar19 = *(longlong *)(lVar17 + -8);
            if (0x1f < (lVar17 - lVar19) - 8U) goto LAB_18047c475;
            uVar23 = uVar22 + 0x28;
          }
          *(undefined8 *)(puVar24 + -8) = 0x18047bbd8;
          thunk_FUN_1803d64e0(lVar19,uVar23);
        }
      }
      if (puVar24[0x55] != '\0') {
        *(undefined8 *)(puVar24 + 0x60) = 0;
        *(undefined8 *)(puVar24 + 0x68) = 0;
        *(undefined8 *)(puVar24 + 0x70) = 0xb;
        *(undefined8 *)(puVar24 + 0x78) = 0xf;
        *(ulonglong *)(puVar24 + 0x60) =
             CONCAT17(s_manual_shot_18077dde8[7],s_manual_shot_18077dde8._0_7_);
        *(undefined4 *)(puVar24 + 0x67) = s_manual_shot_18077dde8._7_4_;
        puVar24[0x6b] = 0;
        if (local_1a8[4] != 0) {
          *(undefined8 *)(puVar24 + -8) = 0x18047bc33;
          FUN_1800134a0(local_1a8 + 2,&DAT_1806f0594,2);
        }
        *(undefined8 *)(puVar24 + -8) = 0x18047bc47;
        FUN_1800134a0(local_1a8 + 2,puVar24 + 0x60,0xb);
        uVar22 = *(ulonglong *)(puVar24 + 0x78);
        if (0xf < uVar22) {
          uVar23 = uVar22 + 1;
          lVar17 = *(longlong *)(puVar24 + 0x60);
          lVar19 = lVar17;
          if (0xfff < uVar23) {
            lVar19 = *(longlong *)(lVar17 + -8);
            if (0x1f < (lVar17 - lVar19) - 8U) goto LAB_18047c475;
            uVar23 = uVar22 + 0x28;
          }
          *(undefined8 *)(puVar24 + -8) = 0x18047bc85;
          thunk_FUN_1803d64e0(lVar19,uVar23);
        }
      }
      uVar31 = 0;
      uVar32 = 0;
      local_d8[1] = 0;
      local_d8[2] = 1;
      local_d8[3] = 0xf;
      local_d8[0] = 7;
      pcVar10 = (char *)0x0;
      if ((puVar24[0x54] != '\0') ||
         (pcVar10 = (char *)0x0,
         (bVar6 || cVar1 != '\0') || (puVar24[0x51] != '\0' || puVar24[0x52] != '\0')))
      goto LAB_18047bcc1;
      bVar5 = false;
    }
    else {
      *(undefined8 *)(puVar24 + -8) = 0x18047ba57;
      uVar13 = FUN_18003a390(&local_118,*(undefined4 *)(puVar24 + 0x58));
      *(undefined8 *)(puVar24 + -8) = 0x18047ba6b;
      uVar13 = FUN_180066ab0(&local_138,"hit chance: ",uVar13);
      *(undefined8 *)(puVar24 + -8) = 0x18047ba81;
      plVar12 = (longlong *)FUN_1800134a0(uVar13,&DAT_1806de738,1);
      local_178 = (undefined8 ****)*plVar12;
      lStack_170 = plVar12[1];
      local_168 = plVar12[2];
      uStack_160 = plVar12[3];
      plVar12[2] = 0;
      plVar12[3] = 0xf;
      *(undefined1 *)plVar12 = 0;
      if (local_1a8[4] != 0) {
        *(undefined8 *)(puVar24 + -8) = 0x18047babc;
        FUN_1800134a0(local_1a8 + 2,&DAT_1806f0594,2);
      }
      ppppuVar21 = &local_178;
      if (0xf < uStack_160) {
        ppppuVar21 = local_178;
      }
      *(undefined8 *)(puVar24 + -8) = 0x18047bad7;
      FUN_1800134a0(local_1a8 + 2,ppppuVar21,local_168);
      if (uStack_160 < 0x10) {
LAB_18047bb14:
        *(undefined8 *)(puVar24 + -8) = 0x18047bb1d;
        FUN_18000f890(&local_138);
        *(undefined8 *)(puVar24 + -8) = 0x18047bb27;
        FUN_18000f890(&local_118);
        goto LAB_18047bb27;
      }
      uVar22 = uStack_160 + 1;
      ppppuVar21 = local_178;
      if (uVar22 < 0x1000) {
LAB_18047bb0e:
        *(undefined8 *)(puVar24 + -8) = 0x18047bb13;
        thunk_FUN_1803d64e0(ppppuVar21,uVar22);
        goto LAB_18047bb14;
      }
      ppppuVar21 = (undefined8 ****)local_178[-1];
      if ((ulonglong)((longlong)local_178 + (-8 - (longlong)ppppuVar21)) < 0x20) {
        uVar22 = uStack_160 + 0x28;
        goto LAB_18047bb0e;
      }
      pcVar3 = (code *)swi(0x29);
      pcVar10 = (char *)(*pcVar3)(5);
      puVar24 = puVar24 + 8;
      uVar31 = extraout_XMM0_Dc;
      uVar32 = extraout_XMM0_Dd;
LAB_18047bcc1:
      bVar5 = true;
    }
    pcVar14 = "miss";
    if (cVar28 != '\0') {
      pcVar14 = "mismatch";
    }
    if (bVar5) {
LAB_18047bdc2:
      if (cVar28 == '\0') {
        *(undefined8 *)(puVar24 + -8) = 0x18047bddf;
        uVar13 = FUN_180066a20(&local_158,"Missed shot due to",local_d8);
        *(undefined8 *)(puVar24 + -8) = 0x18047bdea;
        sVar11 = strlen(pcVar29);
        *(undefined8 *)(puVar24 + -8) = 0x18047bdf8;
        puVar18 = (undefined8 *)FUN_1800134a0(uVar13,pcVar29,sVar11);
        local_f8 = (char *)*puVar18;
        uStack_f0 = puVar18[1];
        local_e8 = puVar18[2];
        uStack_e0 = puVar18[3];
        puVar18[2] = 0;
        puVar18[3] = 0xf;
        *(undefined1 *)puVar18 = 0;
        *(undefined8 *)(puVar24 + -8) = 0x18047be36;
        uVar13 = FUN_1800667a0(puVar24 + 0x60,&local_f8,local_d8);
        *(undefined8 *)(puVar24 + -8) = 0x18047be4c;
        puVar18 = (undefined8 *)FUN_1800134a0(uVar13,&DAT_1808a9b38,1);
        local_118 = *puVar18;
        uStack_110 = puVar18[1];
        local_108 = puVar18[2];
        uStack_100 = puVar18[3];
        puVar18[2] = 0;
        puVar18[3] = 0xf;
        *(undefined1 *)puVar18 = 0;
        *(undefined8 *)(puVar24 + -8) = 0x18047be86;
        uVar13 = FUN_1800667a0(&local_178,&local_118,local_1a8 + 2);
        *(undefined8 *)(puVar24 + -8) = 0x18047be9c;
        puVar18 = (undefined8 *)FUN_1800134a0(uVar13,&DAT_1806e1ac0,1);
        local_138 = (char *)*puVar18;
        uStack_130 = puVar18[1];
        local_128 = puVar18[2];
        uStack_120 = puVar18[3];
        puVar18[2] = 0;
        puVar18[3] = 0xf;
        *(undefined1 *)puVar18 = 0;
        *(undefined8 *)(puVar24 + -8) = 0x18047bec7;
        FUN_1800b09f0(2,&local_138,pcVar14);
        if (0xf < uStack_120) {
          uVar22 = uStack_120 + 1;
          pcVar10 = local_138;
          if (0xfff < uVar22) {
            pcVar10 = *(char **)(local_138 + -8);
            if ((char *)0x1f < local_138 + (-8 - (longlong)pcVar10)) {
              pcVar3 = (code *)swi(0x29);
              pcVar10 = (char *)(*pcVar3)(5);
              puVar24 = puVar24 + 8;
              uVar31 = extraout_XMM0_Dc_01;
              uVar32 = extraout_XMM0_Dd_01;
              goto LAB_18047bf42;
            }
            uVar22 = uStack_120 + 0x28;
          }
          *(undefined8 *)(puVar24 + -8) = 0x18047beff;
          thunk_FUN_1803d64e0(pcVar10,uVar22);
        }
        *(undefined8 *)(puVar24 + -8) = 0x18047bf09;
        FUN_18000f890(&local_178);
        *(undefined8 *)(puVar24 + -8) = 0x18047bf13;
        FUN_18000f890(&local_118);
        *(undefined8 *)(puVar24 + -8) = 0x18047bf1e;
        FUN_18000f890(puVar24 + 0x60);
        *(undefined8 *)(puVar24 + -8) = 0x18047bf28;
        FUN_18000f890(&local_f8);
        *(undefined8 *)(puVar24 + -8) = 0x18047bf32;
        FUN_18000f890(&local_158);
        uVar26 = local_d8[3];
      }
      else {
LAB_18047bf42:
        if (DAT_180920e98 != '\0') {
          uStack_110 = CONCAT44(uVar32,uVar31);
          local_108 = 1;
          uStack_100 = 0xf;
          local_118 = CONCAT62((int6)((ulonglong)pcVar10 >> 0x10),2);
          uStack_f0 = CONCAT44(uVar32,uVar31);
          local_e8 = 0;
          uStack_e0 = 0;
          *(undefined8 *)(puVar24 + -8) = 0x18047bf7e;
          local_f8 = pcVar10;
          local_f8 = (char *)FUN_18000fb70(0x20);
          uVar4 = s_Mismatched_due_to_1808abd30._12_4_;
          uVar32 = s_Mismatched_due_to_1808abd30._8_4_;
          uVar31 = s_Mismatched_due_to_1808abd30._4_4_;
          local_e8 = 0x12;
          uStack_e0 = 0x1f;
          *(undefined4 *)local_f8 = s_Mismatched_due_to_1808abd30._0_4_;
          *(undefined4 *)(local_f8 + 4) = uVar31;
          *(undefined4 *)(local_f8 + 8) = uVar32;
          *(undefined4 *)(local_f8 + 0xc) = uVar4;
          *(undefined2 *)(local_f8 + 0x10) = s_Mismatched_due_to_1808abd30._16_2_;
          local_f8[0x12] = '\0';
          *(undefined8 *)(puVar24 + -8) = 0x18047bfbf;
          uVar13 = FUN_1800667a0(local_78,&local_f8,&local_118);
          *(undefined8 *)(puVar24 + -8) = 0x18047bfca;
          sVar11 = strlen(pcVar29);
          *(undefined8 *)(puVar24 + -8) = 0x18047bfd8;
          puVar16 = (undefined4 *)FUN_1800134a0(uVar13,pcVar29,sVar11);
          *(undefined8 *)(puVar24 + 0x60) = 0;
          *(undefined8 *)(puVar24 + 0x68) = 0;
          *(undefined8 *)(puVar24 + 0x70) = 0;
          *(undefined8 *)(puVar24 + 0x78) = 0;
          uVar31 = puVar16[1];
          uVar32 = puVar16[2];
          uVar4 = puVar16[3];
          *(undefined4 *)(puVar24 + 0x60) = *puVar16;
          *(undefined4 *)(puVar24 + 100) = uVar31;
          *(undefined4 *)(puVar24 + 0x68) = uVar32;
          *(undefined4 *)(puVar24 + 0x6c) = uVar4;
          uVar13 = *(undefined8 *)(puVar16 + 6);
          *(undefined8 *)(puVar24 + 0x70) = *(undefined8 *)(puVar16 + 4);
          *(undefined8 *)(puVar24 + 0x78) = uVar13;
          *(undefined8 *)(puVar16 + 4) = 0;
          *(undefined8 *)(puVar16 + 6) = 0xf;
          *(undefined1 *)puVar16 = 0;
          *(undefined8 *)(puVar24 + -8) = 0x18047c01b;
          uVar13 = FUN_1800667a0(local_98,puVar24 + 0x60,&local_118);
          *(undefined8 *)(puVar24 + -8) = 0x18047c031;
          puVar15 = (ulonglong *)FUN_1800134a0(uVar13,&DAT_1806e7944,2);
          local_158 = *puVar15;
          uStack_150 = puVar15[1];
          local_148 = puVar15[2];
          uStack_140 = puVar15[3];
          puVar15[2] = 0;
          puVar15[3] = 0xf;
          *(undefined1 *)puVar15 = 0;
          *(undefined8 *)(puVar24 + -8) = 0x18047c06b;
          uVar13 = FUN_1800667a0(local_b8,&local_158,local_1a8 + 2);
          *(undefined8 *)(puVar24 + -8) = 0x18047c081;
          puVar18 = (undefined8 *)FUN_1800134a0(uVar13,&DAT_1806e1ac0,1);
          local_138 = (char *)*puVar18;
          uStack_130 = puVar18[1];
          local_128 = puVar18[2];
          uStack_120 = puVar18[3];
          puVar18[2] = 0;
          puVar18[3] = 0xf;
          *(undefined1 *)puVar18 = 0;
          *(undefined8 *)(puVar24 + -8) = 0x18047c0a4;
          FUN_18000f890(local_b8);
          if (0xf < uStack_140) {
            uVar23 = uStack_140 + 1;
            uVar22 = local_158;
            if (uVar23 < 0x1000) {
LAB_18047c0db:
              *(undefined8 *)(puVar24 + -8) = 0x18047c0e0;
              thunk_FUN_1803d64e0(uVar22,uVar23);
              goto LAB_18047c0e0;
            }
            uVar22 = *(ulonglong *)(local_158 - 8);
            if ((local_158 - uVar22) - 8 < 0x20) {
              uVar23 = uStack_140 + 0x28;
              goto LAB_18047c0db;
            }
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar24 = puVar24 + 8;
LAB_18047c1f8:
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar24 = puVar24 + 8;
            goto LAB_18047c1ff;
          }
LAB_18047c0e0:
          local_148 = 0;
          uStack_140 = 0xf;
          local_158 = local_158 & 0xffffffffffffff00;
          *(undefined8 *)(puVar24 + -8) = 0x18047c0f8;
          FUN_18000f890(local_98);
          uVar22 = *(ulonglong *)(puVar24 + 0x78);
          if (0xf < uVar22) {
            uVar23 = uVar22 + 1;
            lVar17 = *(longlong *)(puVar24 + 0x60);
            lVar19 = lVar17;
            if (0xfff < uVar23) {
              lVar19 = *(longlong *)(lVar17 + -8);
              if (0x1f < (lVar17 - lVar19) - 8U) goto LAB_18047c1f8;
              uVar23 = uVar22 + 0x28;
            }
            *(undefined8 *)(puVar24 + -8) = 0x18047c136;
            thunk_FUN_1803d64e0(lVar19,uVar23);
          }
          *(undefined8 *)(puVar24 + 0x70) = 0;
          *(undefined8 *)(puVar24 + 0x78) = 0xf;
          puVar24[0x60] = 0;
          *(undefined8 *)(puVar24 + -8) = 0x18047c151;
          FUN_18000f890(local_78);
          *(undefined8 *)(puVar24 + -8) = 0x18047c15b;
          FUN_18000f890(&local_f8);
          if (DAT_180920e70 == '\0') {
            *(undefined8 *)(puVar24 + -8) = 0x18047c260;
            FUN_1800b09f0(2,&local_138,pcVar14);
          }
          else {
            uVar9 = param_1[2];
            if ((int)uVar9 < 0) {
LAB_18047c1ff:
              lStack_170 = 0;
              local_168 = 0;
              uStack_160 = 0xf;
              local_178 = (undefined8 ****)0x0;
            }
            else {
              *(undefined8 *)(puVar24 + -8) = 0x18047c17f;
              lVar17 = FUN_18000f3a0(DAT_1809619d0);
              if (lVar17 == 0) goto LAB_18047c1ff;
              *(undefined8 *)(puVar24 + -8) = 0x18047c1a1;
              lVar17 = FUN_18000f3a0((ulonglong)(uint)(((int)uVar9 >> 9) * DAT_180961944) + lVar17 +
                                     (ulonglong)DAT_180961940);
              if (0xfffffffffffefffe < lVar17 - 0x10000U) goto LAB_18047c1ff;
              *(undefined8 *)(puVar24 + -8) = 0x18047c1c8;
              lVar17 = FUN_18000f3a0((ulonglong)((uVar9 & 0x1ff) * DAT_180961948) + lVar17);
              if (0xfffffffffffefffe < lVar17 - 0x10000U) goto LAB_18047c1ff;
              *(longlong *)(puVar24 + 0x58) = lVar17;
              *(undefined8 *)(puVar24 + -8) = 0x18047c1eb;
              FUN_1803a0620(puVar24 + 0x58,&local_178);
            }
            if (local_168 == 0) {
              *(undefined8 *)(puVar24 + -8) = 0x18047c22f;
              FUN_180029840(&local_178,"someone",7);
            }
            *(undefined8 *)(puVar24 + -8) = 0x18047c243;
            FUN_1800afb50(&local_178,param_1 + 0x58,&local_138);
            *(undefined8 *)(puVar24 + -8) = 0x18047c24d;
            FUN_18000f890(&local_178);
          }
          if (0xf < uStack_120) {
            uVar22 = uStack_120 + 1;
            pcVar29 = local_138;
            if (0xfff < uVar22) {
              pcVar29 = *(char **)(local_138 + -8);
              if ((char *)0x1f < local_138 + (-8 - (longlong)pcVar29)) {
                pcVar3 = (code *)swi(0x29);
                (*pcVar3)(5);
                puVar24 = puVar24 + 8;
                goto LAB_18047c2ae;
              }
              uVar22 = uStack_120 + 0x28;
            }
            *(undefined8 *)(puVar24 + -8) = 0x18047c298;
            thunk_FUN_1803d64e0(pcVar29,uVar22);
          }
          *(undefined8 *)(puVar24 + -8) = 0x18047c2a2;
          FUN_18000f890(&local_118);
        }
      }
    }
    else {
      *(undefined8 *)(puVar24 + -8) = 0x18047bcf4;
      uVar13 = FUN_180066a20(&local_118,"Missed shot due to",local_d8);
      *(undefined8 *)(puVar24 + -8) = 0x18047bcff;
      sVar11 = strlen(pcVar29);
      *(undefined8 *)(puVar24 + -8) = 0x18047bd0d;
      puVar15 = (ulonglong *)FUN_1800134a0(uVar13,pcVar29,sVar11);
      cVar28 = '\0';
      local_158 = *puVar15;
      uStack_150 = puVar15[1];
      local_148 = puVar15[2];
      uStack_140 = puVar15[3];
      puVar15[2] = 0;
      puVar15[3] = 0xf;
      *(undefined1 *)puVar15 = 0;
      *(undefined8 *)(puVar24 + -8) = 0x18047bd4a;
      uVar13 = FUN_1800667a0(&local_138,&local_158,local_d8);
      *(undefined8 *)(puVar24 + -8) = 0x18047bd5b;
      FUN_1800b09f0(2,uVar13,pcVar14);
      *(undefined8 *)(puVar24 + -8) = 0x18047bd65;
      FUN_18000f890(&local_138);
      if (0xf < uStack_140) {
        uVar23 = uStack_140 + 1;
        uVar22 = local_158;
        if (0xfff < uVar23) {
          uVar22 = *(ulonglong *)(local_158 - 8);
          if (0x1f < (local_158 - uVar22) - 8) {
            pcVar3 = (code *)swi(0x29);
            pcVar10 = (char *)(*pcVar3)(5);
            puVar24 = puVar24 + 8;
            uVar31 = extraout_XMM0_Dc_00;
            uVar32 = extraout_XMM0_Dd_00;
            goto LAB_18047bdc2;
          }
          uVar23 = uStack_140 + 0x28;
        }
        *(undefined8 *)(puVar24 + -8) = 0x18047bd9d;
        thunk_FUN_1803d64e0(uVar22,uVar23);
      }
      local_148 = 0;
      uStack_140 = 0xf;
      local_158 = local_158 & 0xffffffffffffff00;
      *(undefined8 *)(puVar24 + -8) = 0x18047bdb2;
      FUN_18000f890(&local_118);
      uVar26 = local_d8[3];
    }
LAB_18047c2ae:
    bVar7 = DAT_18095cd7e;
    if (uVar30 == 10) {
      uVar30 = (uint)DAT_18095cd7e;
      iVar8 = param_1[3];
      *(undefined8 *)(puVar24 + -8) = 0x18047c2c8;
      FUN_18043b6a0();
      if (iVar8 != -1) {
        *(undefined8 *)(puVar24 + -8) = 0x18047c2dd;
        puVar18 = (undefined8 *)FUN_1803a0940(puVar24 + 0x58,iVar8);
        param_1 = (undefined4 *)*puVar18;
        if ((param_1 == (undefined4 *)0x0) || (DAT_181111cb8 == 0)) {
          lVar17 = 0;
          if (param_1 == (undefined4 *)0x0) goto LAB_18047c435;
        }
        else {
          *(undefined8 *)(puVar24 + -8) = 0x18047c2fb;
          lVar19 = FUN_18000f3a0((ulonglong)DAT_181111cb8 + 8 + (longlong)param_1);
          lVar17 = 0;
          if (lVar19 - 0x10000U < 0x7ffffffeffff) {
            lVar17 = lVar19;
          }
        }
        if (lVar17 != 0) {
          if (DAT_180cd1304 == '\0') {
            *(undefined8 *)(puVar24 + -8) = 0x18047c349;
            FUN_1803a0b60(puVar24 + 0x58);
            lVar19 = *(longlong *)(puVar24 + 0x58);
          }
          else {
            lVar19 = DAT_181108a00;
          }
          if ((lVar19 == 0) || (DAT_181111cc4 == 0)) {
            iVar8 = 0;
          }
          else {
            *(undefined8 *)(puVar24 + -8) = 0x18047c365;
            iVar8 = FUN_180011200((ulonglong)DAT_181111cc4 + lVar19);
          }
          if (DAT_181111cac == 0) {
            param_1 = (undefined4 *)0x0;
          }
          else {
            *(undefined8 *)(puVar24 + -8) = 0x18047c380;
            uVar9 = FUN_180011200((longlong)param_1 + (ulonglong)DAT_181111cac);
            param_1 = (undefined4 *)(ulonglong)uVar9;
          }
          if (DAT_181111cc0 == 0) {
            fVar33 = 0.0;
          }
          else {
            *(undefined8 *)(puVar24 + -8) = 0x18047c39a;
            fVar33 = (float)FUN_18000f3d0(lVar17 + (ulonglong)DAT_181111cc0);
          }
          fVar33 = fVar33 * DAT_1808acab0;
          *(undefined8 *)(puVar24 + -8) = 0x18047c3c8;
          fVar33 = (float)FUN_18053fc00((float)((DAT_1808ac1f0 ^ (uint)fVar33) & _DAT_1808ade90 ^
                                               (uint)fVar33) + fVar33);
          iVar20 = (int)fVar33 + (iVar8 - (int)param_1);
          iVar8 = -iVar20;
          if (iVar8 < 0) {
            iVar8 = iVar20;
          }
          if ((iVar8 < 5) && (bVar7 != 0)) {
            if (DAT_181111c59 == '\0') {
              if ((_DAT_181111c5c < 1) || (DAT_181111c5a != '\x02')) {
                _DAT_181111c58 = CONCAT12(2,_DAT_181111c58);
                _DAT_181111c5c = 1;
              }
              else {
                _DAT_181111c5c = _DAT_181111c5c + 1;
                _DAT_181111c58 = 0x20102;
              }
            }
          }
          else {
            _DAT_181111c58 = _DAT_181111c58 & 0xff;
            _DAT_181111c5c = 0;
          }
        }
      }
    }
LAB_18047c435:
    if (0xf < uVar26) {
      uVar22 = uVar26 + 1;
      lVar17 = local_d8[0];
      if (0xfff < uVar22) {
        lVar17 = *(longlong *)(local_d8[0] + -8);
        if (0x1f < (local_d8[0] - lVar17) - 8U) goto LAB_18047c475;
        uVar22 = uVar26 + 0x28;
      }
      *(undefined8 *)(puVar24 + -8) = 0x18047c469;
      thunk_FUN_1803d64e0(lVar17,uVar22);
    }
    *(undefined8 *)(puVar24 + -8) = 0x18047c473;
    FUN_18000f890(local_1a8 + 2);
  }
LAB_18047c4db:
  *(undefined8 *)(puVar24 + -8) = 0x18047c4ea;
  return;
}



/* ===== 18047c520 FUN_18047c520 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18047c520(void)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  float fVar8;
  int *piVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  char *pcVar17;
  int *piVar18;
  ulonglong uVar19;
  longlong local_res8;
  
  if ((DAT_181112428 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181112428 = '\x01';
    DAT_18111242c = FUN_18038eaf0("CBasePlayerController","m_hPawn");
    DAT_181112430 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_181112434 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRange");
    DAT_181112438 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRangeModifier");
    DAT_18111243c = FUN_18038eaf0("CCSWeaponBaseVData","m_flPenetration");
    DAT_181112440 = FUN_18038eaf0("CCSWeaponBaseVData","m_nDamage");
    DAT_181112444 = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
    DAT_181112448 = FUN_18038eaf0("C_AttributeContainer","m_Item");
    DAT_18111244c = FUN_18038eaf0("CHitBox","m_nGroupId");
    if (DAT_18111244c == 0) {
      DAT_18111244c = 0x38;
    }
    DAT_181112450 = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    DAT_181112454 = FUN_18038eaf0("CGameSceneNode","m_vecAbsOrigin");
    DAT_181112458 = FUN_18038eaf0("C_BasePlayerPawn","m_pMovementServices");
    DAT_18111245c = FUN_18038eaf0("CPlayer_MovementServices","m_flMaxspeed");
  }
  if ((DAT_1809620c0 != 0) && (lVar13 = FUN_18000f3a0(), lVar13 != 0)) {
    if (DAT_180ce1e7c == '\0') {
      DAT_180ce1e7c = FUN_180273b60("bullet_impact",FUN_180479940);
    }
    if (DAT_180ce1e7e == '\0') {
      DAT_180ce1e7e = FUN_180273b60("player_hurt",FUN_180479b60);
    }
    if (DAT_180cd1e27 == '\0') {
      DAT_180cd1e27 = FUN_180273b60("player_death",FUN_180479e20);
    }
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    lVar13 = local_res8;
  }
  else {
    lVar13 = DAT_181108a00;
  }
  if ((((lVar13 != 0) && (DAT_18111242c != 0)) &&
      (iVar11 = FUN_180011200((ulonglong)DAT_18111242c + lVar13), iVar11 != -1)) &&
     ((plVar14 = (longlong *)FUN_1803a0940(&local_res8,iVar11), *plVar14 != 0 &&
      (iVar11 = FUN_18043bb90(), -1 < iVar11)))) {
    if ((lVar13 - 0x10000U < 0x7ffffffeffff) &&
       (lVar15 = FUN_18000f3a0(lVar13 + 0x10), lVar15 - 0x10000U < 0x7ffffffeffff)) {
      uVar12 = FUN_180011200(lVar15 + 0x10);
      uVar12 = uVar12 & 0x7fff;
      fVar5 = DAT_1808ac00c;
      piVar18 = DAT_180c8cf50;
      piVar6 = DAT_181114268;
      piVar7 = DAT_181114270;
    }
    else {
      uVar12 = 0xffffffff;
      fVar5 = DAT_1808ac00c;
      piVar18 = DAT_180c8cf50;
      piVar6 = DAT_181114268;
      piVar7 = DAT_181114270;
    }
    for (; piVar9 = DAT_181114270, fVar8 = DAT_1808ac00c, DAT_1808ac00c = fVar5,
        DAT_180c8cf50 = piVar18, piVar6 != DAT_181114270; piVar6 = piVar6 + 0x1a) {
      iVar16 = *piVar6;
      piVar4 = DAT_180c8cf48;
      DAT_181114270 = piVar7;
      if (iVar16 == 1) {
        for (; piVar4 != piVar18; piVar4 = piVar4 + 0x80) {
          if ((*piVar4 <= iVar11) && (uVar2 = piVar4[0x7e], uVar2 < 10)) {
            *(undefined8 *)(piVar4 + (longlong)(int)uVar2 * 3 + 0x60) = *(undefined8 *)(piVar6 + 3);
            piVar4[(longlong)(int)uVar2 * 3 + 0x62] = piVar6[5];
            piVar4[0x7e] = piVar4[0x7e] + 1;
          }
        }
      }
      else if (iVar16 == 2) {
        FUN_180479fb0(&DAT_180c8b060,piVar6,iVar11);
      }
      else if (iVar16 == 3) {
        uVar2 = piVar6[1];
        uVar3 = piVar6[2];
        iVar16 = iVar11 - (uint)((int)uVar2 < (int)uVar12);
        if (uVar3 == uVar12) {
          for (; piVar4 != piVar18; piVar4 = piVar4 + 0x80) {
            if (iVar16 < *piVar4) {
              piVar4[0x4e] = 6;
            }
          }
        }
        else {
          for (; piVar4 != piVar18; piVar4 = piVar4 + 0x80) {
            if (piVar4[2] == uVar3) {
              if (uVar2 == uVar12) {
                _DAT_180c8d0f4 = (float)piVar4[1] * fVar8;
              }
              else if (iVar16 < *piVar4) {
                piVar4[0x4e] = 7;
              }
            }
          }
        }
      }
      fVar5 = DAT_1808ac00c;
      piVar18 = DAT_180c8cf50;
      piVar7 = DAT_181114270;
      DAT_181114270 = piVar9;
      DAT_1808ac00c = fVar8;
    }
    DAT_181114270 = piVar7;
    FUN_18047cc00();
    uVar19 = 0;
    if ((longlong)DAT_180c8cf50 - (longlong)DAT_180c8cf48 >> 9 != 0) {
      do {
        piVar18 = DAT_180c8cf48 + uVar19 * 0x80;
        cVar10 = FUN_18047b190(DAT_180c8cf48,piVar18,iVar11,lVar13,uVar12);
        if (cVar10 == '\0') {
          uVar19 = uVar19 + 1;
        }
        else {
          FUN_18047b4a0(piVar18);
          switch(piVar18[0x4e]) {
          case 3:
            if (piVar18[0x51] < 1) {
              if (*(char *)((longlong)piVar18 + 0x13d) == '\0') {
                if (((float)piVar18[0x4b] == DAT_1808ac34c) && ((char)piVar18[0x4a] == '\0')) {
                  pcVar17 = "hitchance misprediction";
                }
                else {
                  pcVar17 = "spread";
                }
              }
              else {
                pcVar17 = "shootpos misprediction";
              }
            }
            else {
              pcVar17 = "prediction error";
            }
            break;
          case 4:
            if (*(char *)((longlong)piVar18 + 0x13e) == '\0') {
              if (*(char *)((longlong)piVar18 + 0x13f) == '\0') {
                pcVar17 = "occlusion";
                if ((char)piVar18[0x4f] == '\0') {
                  pcVar17 = "unknown";
                }
              }
              else {
                pcVar17 = "lagcomp failure";
              }
            }
            else {
              pcVar17 = "lagcomp misprediction";
            }
            break;
          case 5:
            pcVar17 = "extrapolation";
            break;
          case 6:
            pcVar17 = "death";
            break;
          case 7:
            pcVar17 = "player death";
            break;
          case 8:
            pcVar17 = "event timeout";
            break;
          case 9:
            pcVar17 = "unregistered shot";
            break;
          case 10:
            pcVar17 = "damage rejection";
            break;
          default:
            pcVar17 = (char *)0x0;
          }
          FUN_18046f600(piVar18,pcVar17);
          piVar9 = DAT_180c8cf50;
          piVar18 = DAT_180c8cf48 + uVar19 * 0x80;
          piVar7 = DAT_180c8cf50;
          piVar6 = piVar18;
          while (piVar6 = piVar6 + 0x80, DAT_180c8cf50 = piVar7, piVar6 != piVar9) {
            FUN_1804736f0(piVar18,piVar6);
            piVar18 = piVar18 + 0x80;
            piVar7 = DAT_180c8cf50;
          }
          FUN_18000f890(piVar7 + -0x28);
          FUN_1802a9370(piVar7 + -0x3e);
          FUN_1802a9370(piVar7 + -0x4c);
          FUN_180200b70(piVar7 + -0x52);
          DAT_180c8cf50 = DAT_180c8cf50 + -0x80;
          if (uVar19 < (ulonglong)((DAT_180c8cf38 - DAT_180c8cf30 >> 2) * -0x5555555555555555)) {
            lVar1 = DAT_180c8cf30 + uVar19 * 0xc;
            lVar15 = lVar1 + 0xc;
            FUN_180540530(lVar1,lVar15,DAT_180c8cf38 - lVar15);
            DAT_180c8cf38 = DAT_180c8cf38 + -0xc;
          }
        }
      } while (uVar19 < (ulonglong)((longlong)DAT_180c8cf50 - (longlong)DAT_180c8cf48 >> 9));
    }
    if (DAT_181114250 != DAT_181114258) {
      DAT_181114258 = DAT_181114250;
    }
  }
  return;
}



/* ===== 18047cc00 FUN_18047cc00 ===== */

void FUN_18047cc00(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_181114270;
  lVar2 = DAT_181114268;
  if (DAT_181114268 != DAT_181114270) {
    do {
      FUN_18000f890(lVar2 + 0x48);
      FUN_18000f890(lVar2 + 0x28);
      lVar2 = lVar2 + 0x68;
    } while (lVar2 != lVar1);
    DAT_181114270 = DAT_181114268;
  }
  return;
}



/* ===== 18047cc60 FUN_18047cc60 ===== */

void FUN_18047cc60(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_181114270;
  if (DAT_181114270 == DAT_181114278) {
    FUN_18047cd30();
    return;
  }
  *DAT_181114270 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  *(undefined8 *)(puVar2 + 3) = *(undefined8 *)(param_2 + 3);
  puVar2[5] = param_2[5];
  puVar2[6] = param_2[6];
  puVar2[7] = param_2[7];
  puVar2[8] = param_2[8];
  *(undefined8 *)(puVar2 + 10) = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 0xe) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(puVar2 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0xf;
  *(undefined8 *)(puVar2 + 0x12) = 0;
  *(undefined8 *)(puVar2 + 0x14) = 0;
  *(undefined8 *)(puVar2 + 0x16) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(puVar2 + 0x14) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *(undefined1 *)(param_2 + 0x12) = 0;
  DAT_181114270 = DAT_181114270 + 0x1a;
  return;
}



/* ===== 18047cd30 FUN_18047cd30 ===== */

undefined4 * FUN_18047cd30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar10 = DAT_181114268;
  uVar11 = 0x276276276276276;
  lVar7 = (DAT_181114270 - DAT_181114268 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (lVar7 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = (DAT_181114278 - DAT_181114268 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (uVar9 <= 0x276276276276276 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar11 = uVar1;
    if (uVar1 <= uVar9) {
      uVar11 = uVar9;
    }
    if (0x276276276276276 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar8 = FUN_18000fb70(uVar11 * 0x68);
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  puVar16 = (undefined4 *)(((param_2 - lVar10) / 0x68) * 0x68 + lVar8);
  *puVar16 = *param_3;
  puVar16[1] = param_3[1];
  puVar16[2] = param_3[2];
  *(undefined8 *)(puVar16 + 3) = *(undefined8 *)(param_3 + 3);
  puVar16[5] = param_3[5];
  puVar16[6] = param_3[6];
  puVar16[7] = param_3[7];
  puVar16[8] = param_3[8];
  *(undefined8 *)(puVar16 + 10) = 0;
  *(undefined8 *)(puVar16 + 0xc) = 0;
  *(undefined8 *)(puVar16 + 0xe) = 0;
  *(undefined8 *)(puVar16 + 0x10) = 0;
  uVar6 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(puVar16 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(puVar16 + 0xc) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(puVar16 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(puVar16 + 0x10) = uVar6;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0xf;
  *(undefined1 *)(param_3 + 10) = 0;
  *(undefined8 *)(puVar16 + 0x12) = 0;
  *(undefined8 *)(puVar16 + 0x14) = 0;
  *(undefined8 *)(puVar16 + 0x16) = 0;
  *(undefined8 *)(puVar16 + 0x18) = 0;
  uVar17 = param_3[0x12];
  uVar3 = param_3[0x13];
  uVar4 = param_3[0x14];
  uVar5 = param_3[0x15];
  puVar16[0x12] = uVar17;
  puVar16[0x13] = uVar3;
  puVar16[0x14] = uVar4;
  puVar16[0x15] = uVar5;
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(puVar16 + 0x16) = *(undefined8 *)(param_3 + 0x16);
  *(undefined8 *)(puVar16 + 0x18) = uVar6;
  *(undefined8 *)(param_3 + 0x16) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0xf;
  *(undefined1 *)(param_3 + 0x12) = 0;
  lVar10 = lVar8;
  lVar7 = DAT_181114268;
  lVar15 = DAT_181114270;
  if (param_2 == DAT_181114270) {
    lVar10 = DAT_181114270;
    lVar7 = lVar8;
    lVar15 = DAT_181114268;
    if (DAT_181114268 != DAT_181114270) {
      do {
        uVar17 = FUN_18047cff0(uVar17,lVar7);
        lVar7 = lVar7 + 0x68;
        lVar15 = lVar15 + 0x68;
      } while (lVar15 != lVar10);
    }
  }
  else {
    for (; DAT_181114270 = lVar15, lVar7 != param_2; lVar7 = lVar7 + 0x68) {
      uVar17 = FUN_18047cff0(uVar17,lVar10);
      lVar10 = lVar10 + 0x68;
      lVar15 = DAT_181114270;
    }
    puVar12 = puVar16;
    if (param_2 != lVar15) {
      do {
        puVar12 = puVar12 + 0x1a;
        uVar17 = FUN_18047cff0(uVar17,puVar12,param_2);
        param_2 = param_2 + 0x68;
      } while (param_2 != lVar15);
    }
  }
  lVar7 = DAT_181114270;
  lVar10 = DAT_181114268;
  if (DAT_181114268 == 0) goto LAB_18047cf9a;
  for (; lVar10 != lVar7; lVar10 = lVar10 + 0x68) {
    FUN_18000f890(lVar10 + 0x48);
    FUN_18000f890(lVar10 + 0x28);
  }
  lVar10 = DAT_181114268;
  if ((ulonglong)((DAT_181114278 - DAT_181114268 >> 3) * 8) < 0x1000) {
LAB_18047cf8f:
    puVar14 = puVar13;
  }
  else {
    lVar10 = *(longlong *)(DAT_181114268 + -8);
    if (0x1f < (DAT_181114268 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar13 = auStack_40;
      goto LAB_18047cf8f;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x18047cf9a;
  thunk_FUN_1803d64e0(lVar10);
LAB_18047cf9a:
  DAT_181114270 = uVar1 * 0x68 + lVar8;
  DAT_181114268 = lVar8;
  DAT_181114278 = uVar11 * 0x68 + lVar8;
  return puVar16;
}



/* ===== 18047cff0 FUN_18047cff0 ===== */

void FUN_18047cff0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  *(undefined8 *)(param_2 + 3) = *(undefined8 *)(param_3 + 3);
  param_2[5] = param_3[5];
  param_2[6] = param_3[6];
  param_2[7] = param_3[7];
  param_2[8] = param_3[8];
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  *(undefined1 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0xf;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_3 + 0x14);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_3 + 0x12);
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_2 + 0x16) = *(undefined8 *)(param_3 + 0x16);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *(undefined1 *)(param_3 + 0x12) = 0;
  *(undefined8 *)(param_3 + 0x16) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0xf;
  return;
}



/* ===== 18047d090 FUN_18047d090 ===== */

void FUN_18047d090(void)

{
  if ((DAT_1811142d8 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_1811142d8 = '\x01';
    DAT_181114290 = FUN_18038eaf0("CCSWeaponBaseVData","m_flMaxSpeed");
    DAT_181114294 = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyMove");
    DAT_181114298 = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyJumpInitial");
    DAT_18111429c = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyJumpApex");
    DAT_1811142a0 = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyLadder");
    DAT_1811142a4 = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyStand");
    DAT_1811142a8 = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyJump");
    DAT_1811142ac = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyCrouch");
    DAT_1811142b0 = FUN_18038eaf0("CCSWeaponBaseVData","m_flInaccuracyReload");
    DAT_1811142b4 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRecoveryTimeCrouch");
    DAT_1811142b8 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRecoveryTimeStand");
    DAT_1811142bc = FUN_18038eaf0("CCSWeaponBaseVData","m_flRecoveryTimeStandFinal");
    DAT_1811142c0 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRecoveryTimeCrouchFinal");
    DAT_1811142c4 = FUN_18038eaf0("CCSWeaponBaseVData","m_nRecoveryTransitionStartBullet");
    DAT_1811142c8 = FUN_18038eaf0("CCSWeaponBaseVData","m_nRecoveryTransitionEndBullet");
    DAT_1811142cc = FUN_18038eaf0("CCSWeaponBaseVData","m_flCycleTime");
    DAT_1811142d0 = FUN_18038eaf0("CCSWeaponBaseVData","m_flSpread");
    DAT_1811142d4 = FUN_18038eaf0("CCSWeaponBaseVData","m_nZoomLevels");
  }
  return;
}



/* ===== 18047d280 FUN_18047d280 ===== */

void FUN_18047d280(void)

{
  HMODULE hModule;
  
  if (DAT_180ce1e7f == '\0') {
    DAT_180ce1e7f = '\x01';
    hModule = GetModuleHandleA("tier0.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_181114280 = GetProcAddress(hModule,"V_logf");
      DAT_1811142e0 = GetProcAddress(hModule,"V_expf");
      DAT_1811142e8 = GetProcAddress(hModule,"V_modff");
    }
  }
  return;
}



/* ===== 18047d300 FUN_18047d300 ===== */

ulonglong FUN_18047d300(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  
  uVar1 = DAT_1811142b4;
  if (*(char *)(param_1 + 0x10) == '\t') {
    if ((*(longlong *)(param_1 + 0x58) == 0) || (DAT_1811142b8 == 0)) {
      return 0;
    }
    uVar5 = FUN_18000f3d0(*(longlong *)(param_1 + 0x58) + (ulonglong)DAT_1811142b8);
    return uVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
    if ((lVar4 == 0) || (DAT_1811142b4 == 0)) {
      return (ulonglong)(uint)(DAT_1808ac710 * 0.0);
    }
    auVar7._0_8_ = FUN_18000f3d0((ulonglong)DAT_1811142b4 + lVar4);
    auVar7._8_8_ = extraout_XMM0_Qb;
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = (float)auVar7._0_8_ * DAT_1808ac710;
    return auVar8._0_8_;
  }
  uVar5 = (ulonglong)DAT_1811142b4;
  fVar13 = 0.0;
  uVar14 = 0;
  if ((*(uint *)(param_1 + 0xc) & 2) == 0) {
    if ((lVar4 == 0) || (DAT_1811142b8 == 0)) {
      fVar15 = 0.0;
      uVar16 = 0;
    }
    else {
      uVar6 = FUN_18000f3d0();
      lVar4 = *(longlong *)(param_1 + 0x58);
      fVar15 = (float)uVar6;
      uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    if (lVar4 != 0) {
      iVar2 = DAT_1811142bc;
      goto LAB_18047d3fb;
    }
  }
  else {
    if ((lVar4 == 0) || (DAT_1811142b4 == 0)) {
      fVar15 = 0.0;
      uVar16 = 0;
    }
    else {
      uVar6 = FUN_18000f3d0();
      lVar4 = *(longlong *)(param_1 + 0x58);
      fVar15 = (float)uVar6;
      uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    if (lVar4 != 0) {
      iVar2 = DAT_1811142c0;
LAB_18047d3fb:
      if (iVar2 != 0) {
        uVar6 = FUN_18000f3d0();
        lVar4 = *(longlong *)(param_1 + 0x58);
        fVar11 = (float)uVar6;
        uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
        goto LAB_18047d413;
      }
    }
  }
  fVar11 = 0.0;
  uVar12 = 0;
LAB_18047d413:
  if (fVar11 == DAT_1808acda0) {
    if ((lVar4 != 0) && (uVar1 != 0)) {
      uVar6 = FUN_18000f3d0(lVar4 + uVar5);
      fVar13 = (float)uVar6;
      uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    uVar5 = CONCAT44(uVar14,fVar13);
  }
  else {
    if ((lVar4 == 0) || (DAT_1811142c4 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_180011200();
    }
    if ((*(longlong *)(param_1 + 0x58) == 0) || (DAT_1811142c8 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_180011200((ulonglong)DAT_1811142c8 + *(longlong *)(param_1 + 0x58));
    }
    fVar10 = (float)iVar2;
    fVar9 = (float)iVar3;
    if (fVar10 == fVar9) {
      if ((float)(int)*(float *)(param_1 + 0x2c) < fVar9) {
        fVar11 = fVar15;
        uVar12 = uVar16;
      }
    }
    else {
      fVar9 = ((float)(int)*(float *)(param_1 + 0x2c) - fVar10) / (fVar9 - fVar10);
      if ((0.0 <= fVar9) && (fVar13 = fVar9, DAT_1808ac34c <= fVar9)) {
        fVar13 = DAT_1808ac34c;
      }
      fVar11 = (fVar11 - fVar15) * fVar13 + fVar15;
    }
    uVar5 = CONCAT44(uVar12,fVar11);
  }
  return uVar5;
}



/* ===== 18047d4f0 FUN_18047d4f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18047d4f0(float *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_18047d090();
  fVar9 = param_1[0x11];
  uVar6 = 0;
  if (0.0 < fVar9) goto LAB_18047d757;
  if (*(char *)(param_1 + 0x12) != '\0') {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x16);
  fVar9 = param_1[0xe];
  fVar2 = fVar9;
  if (1 < (uint)fVar9) {
    fVar2 = 0.0;
  }
  if ((lVar1 == 0) || (DAT_181114290 == 0)) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)FUN_18000f3d0((ulonglong)(uint)((int)fVar2 * 4) + lVar1 +
                                 (ulonglong)DAT_181114290);
    lVar1 = *(longlong *)(param_1 + 0x16);
  }
  if (1 < (uint)fVar9) {
    fVar9 = 0.0;
  }
  if ((lVar1 == 0) || (DAT_181114294 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_18000f3d0((ulonglong)DAT_181114294 + (ulonglong)(uint)((int)fVar9 * 4) + lVar1);
  }
  fVar3 = (float)FUN_18051af10(param_1[1] * param_1[1] + *param_1 * *param_1);
  fVar7 = fVar2 * DAT_1808ac2f0;
  fVar9 = 0.0;
  uVar6 = 0;
  fVar2 = fVar2 * DAT_1808ac16c;
  if (fVar2 == fVar7) {
    if (0.0 <= fVar3 - fVar7) {
      fVar2 = DAT_1808ac34c;
      goto LAB_18047d62a;
    }
  }
  else {
    fVar2 = (fVar3 - fVar2) / (fVar7 - fVar2);
    if (0.0 <= fVar2) {
      if (DAT_1808ac34c <= fVar2) {
        fVar2 = DAT_1808ac34c;
      }
    }
    else {
      fVar2 = 0.0;
    }
    if (0.0 < fVar2) {
LAB_18047d62a:
      if (*(char *)((longlong)param_1 + 0x11) == '\0') {
        fVar2 = (float)FUN_18051afb0(fVar2,DAT_1808ac140);
      }
      fVar9 = (float)uVar5 * fVar2;
      uVar6 = (int)((ulonglong)uVar5 >> 0x20);
    }
  }
  fVar9 = fVar9 + param_1[0xc];
  if (((uint)param_1[3] & 1) == 0) {
    if ((*(longlong *)(param_1 + 0x16) == 0) || (DAT_181114298 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_18000f3d0((ulonglong)DAT_181114298 + *(longlong *)(param_1 + 0x16));
    }
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    fVar2 = (float)uVar5 * param_1[0x10];
    if ((*(longlong *)(param_1 + 0x16) == 0) || (DAT_18111429c == 0)) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (float)FUN_18000f3d0(*(longlong *)(param_1 + 0x16) + (ulonglong)DAT_18111429c);
    }
    fVar3 = fVar3 * param_1[0x10];
    fVar7 = (float)FUN_18051af10((uint)param_1[2] & _DAT_1808ade90);
    fVar4 = (float)FUN_18051af10(param_1[8]);
    fVar8 = fVar4 * DAT_1808ac140;
    if (fVar8 == fVar4) {
      if (0.0 <= fVar7 - fVar4) {
        fVar3 = fVar2;
      }
    }
    else {
      fVar3 = ((fVar7 - fVar8) * (fVar2 - fVar3)) / (fVar4 - fVar8) + fVar3;
    }
    fVar7 = fVar2 + fVar2;
    if (fVar3 <= fVar2 + fVar2) {
      uVar6 = 0;
      fVar7 = 0.0;
      if (0.0 <= fVar3) {
        fVar7 = fVar3;
      }
    }
    fVar9 = fVar7 + fVar9;
    if (DAT_1808ac34c <= fVar9) {
      fVar9 = DAT_1808ac34c;
    }
  }
LAB_18047d757:
  return CONCAT44(uVar6,fVar9);
}



/* ===== 18047d770 FUN_18047d770 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18047d770(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_18047d090();
  uVar2 = DAT_1811142a0;
  uVar4 = *(uint *)(param_1 + 0x38);
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x10) == '\t') {
    uVar3 = (ulonglong)DAT_1811142a0;
    if ((lVar5 == 0) || (DAT_1811142a0 == 0)) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)FUN_18000f3d0(lVar5 + uVar3);
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    if (1 < uVar4) {
      uVar4 = 0;
    }
    if ((lVar5 == 0) || (uVar2 == 0)) {
      fVar7 = fVar6 + 0.0 + 0.0;
    }
    else {
      fVar7 = (float)FUN_18000f3d0((ulonglong)(uVar4 * 4) + lVar5 + uVar3);
      fVar7 = fVar6 + 0.0 + fVar7;
    }
  }
  else if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
    uVar2 = uVar4;
    if (1 < uVar4) {
      uVar2 = 0;
    }
    if ((lVar5 == 0) || (DAT_1811142a8 == 0)) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = (float)FUN_18000f3d0((ulonglong)DAT_1811142a8 + (ulonglong)(uVar2 * 4) + lVar5);
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    if (1 < uVar4) {
      uVar4 = 0;
    }
    if ((lVar5 == 0) || (DAT_1811142a4 == 0)) {
      fVar7 = fVar7 * *(float *)(param_1 + 0x40) + 0.0;
    }
    else {
      fVar6 = (float)FUN_18000f3d0((ulonglong)DAT_1811142a4 + (ulonglong)(uVar4 * 4) + lVar5);
      fVar7 = fVar7 * *(float *)(param_1 + 0x40) + fVar6 + 0.0;
    }
  }
  else {
    uVar2 = DAT_1811142a4;
    if ((*(uint *)(param_1 + 0xc) & 2) != 0) {
      uVar2 = DAT_1811142ac;
    }
    if (1 < uVar4) {
      uVar4 = 0;
    }
    if ((lVar5 == 0) || (uVar2 == 0)) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = (float)FUN_18000f3d0((ulonglong)uVar2 + (ulonglong)(uVar4 * 4) + lVar5);
    }
    fVar7 = fVar7 + 0.0;
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    if ((*(longlong *)(param_1 + 0x58) == 0) || (DAT_1811142b0 == 0)) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)FUN_18000f3d0((ulonglong)DAT_1811142b0 + *(longlong *)(param_1 + 0x58));
    }
    fVar7 = fVar7 + fVar6;
  }
  uVar1 = DAT_1808ac864;
  if (fVar7 < *(float *)(param_1 + 0x30) || fVar7 == *(float *)(param_1 + 0x30)) {
    FUN_18047d280();
    if (DAT_181114280 == (code *)0x0) {
      fVar6 = (float)FUN_18053f430(uVar1);
    }
    else {
      fVar6 = (float)(*DAT_181114280)();
    }
    fVar8 = (float)FUN_18047d300(param_1);
    fVar6 = (fVar6 / fVar8) * _DAT_1808acd28;
    FUN_18047d280();
    if (DAT_1811142e0 == (code *)0x0) {
      fVar6 = (float)FUN_18051ab90(fVar6);
    }
    else {
      fVar6 = (float)(*DAT_1811142e0)();
    }
    fVar7 = (*(float *)(param_1 + 0x30) - fVar7) * fVar6 + fVar7;
  }
  *(float *)(param_1 + 0x30) = fVar7;
  if (0.0 < *(float *)(param_1 + 0x2c)) {
    if ((*(longlong *)(param_1 + 0x58) == 0) || (DAT_1811142cc == 0)) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = (float)FUN_18000f3d0((ulonglong)DAT_1811142cc + *(longlong *)(param_1 + 0x58));
    }
    fVar6 = DAT_1808ac00c;
    if (fVar7 + *(float *)(param_1 + 0x34) + DAT_1808ac00c < *(float *)(param_1 + 0x18)) {
      FUN_18047d280();
      if (DAT_181114280 == (code *)0x0) {
        fVar7 = (float)FUN_18053f430(uVar1);
      }
      else {
        fVar7 = (float)(*DAT_181114280)();
      }
      fVar7 = fVar7 * DAT_1808acdc0;
      FUN_18047d280();
      if (DAT_1811142e0 == (code *)0x0) {
        fVar7 = (float)FUN_18051ab90(fVar7 * fVar6);
      }
      else {
        fVar7 = (float)(*DAT_1811142e0)();
      }
      fVar7 = fVar7 * *(float *)(param_1 + 0x2c);
      if ((DAT_1808ac0c0 < fVar7) || (fVar6 = 0.0, NAN(fVar7))) {
        fVar6 = fVar7;
      }
      *(float *)(param_1 + 0x2c) = fVar6;
    }
  }
  return;
}



/* ===== 18047da70 FUN_18047da70 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18047da70(float *param_1,longlong param_2,int param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint local_res8 [2];
  float local_res18 [4];
  longlong local_58;
  uint *local_50;
  
  FUN_18047d090();
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *(undefined1 *)(param_1 + 3) = 0;
  if ((param_3 == 2) && (*(short *)(param_2 + 0x60) == 0x40)) {
    *(undefined4 *)(param_2 + 0x38) = 1;
    FUN_18047d770(param_2);
  }
  if (*(short *)(param_2 + 0x60) == 0x1f) {
    *(undefined1 *)(param_1 + 3) = 1;
    return param_1;
  }
  fVar5 = (float)FUN_18047d4f0(param_2);
  uVar3 = *(uint *)(param_2 + 0x38);
  lVar4 = *(longlong *)(param_2 + 0x58);
  *param_1 = fVar5;
  fVar5 = 0.0;
  if (1 < uVar3) {
    uVar3 = 0;
  }
  if ((lVar4 == 0) || (DAT_1811142d0 == 0)) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)FUN_18000f3d0((ulonglong)(uVar3 * 4) + lVar4 + (ulonglong)DAT_1811142d0);
  }
  local_res8[0] = *(uint *)(param_2 + 0x38);
  param_1[1] = fVar6;
  if (((param_4 != '\0') && (*(longlong *)(param_2 + 0x58) != 0)) && (DAT_1811142d4 != 0)) {
    iVar2 = FUN_180011200(*(longlong *)(param_2 + 0x58) + (ulonglong)DAT_1811142d4);
    fVar6 = DAT_1808ac34c;
    if (((0 < iVar2) && (*(int *)(param_2 + 0x38) != 1)) && (*(char *)(param_2 + 0x12) == '\0')) {
      fVar7 = *(float *)(param_2 + 0x1c);
      iVar2 = *(int *)(param_2 + 0x14);
      if ((fVar7 < 0.0) || (DAT_1808ac34c <= fVar7)) {
        local_res18[0] = 0.0;
        FUN_18047d280();
        if (DAT_1811142e8 == (code *)0x0) {
          fVar7 = (float)FUN_180512fd0(fVar7,local_res18);
        }
        else {
          fVar7 = (float)(*DAT_1811142e8)();
        }
        fVar8 = local_res18[0];
        if (fVar7 < 0.0) {
          fVar7 = fVar7 + fVar6;
          if (fVar7 < fVar6) {
            fVar8 = local_res18[0] + DAT_1808acda0;
          }
          else {
            fVar7 = 0.0;
          }
        }
        iVar2 = iVar2 + (int)fVar8;
      }
      if (iVar2 == *(int *)(param_2 + 0x24)) {
        bVar1 = *(float *)(param_2 + 0x28) <= fVar7;
      }
      else {
        bVar1 = *(int *)(param_2 + 0x24) <= iVar2;
      }
      if (bVar1) {
        local_res8[0] = 1;
      }
    }
  }
  local_50 = local_res8;
  local_58 = param_2;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    lVar4 = *(longlong *)(param_2 + 0x58);
    uVar3 = local_res8[0];
    if (1 < local_res8[0]) {
      uVar3 = 0;
    }
    if ((lVar4 == 0) || (DAT_1811142a8 == 0)) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)FUN_18000f3d0((ulonglong)(uVar3 * 4) + lVar4 + (ulonglong)DAT_1811142a8);
      lVar4 = *(longlong *)(param_2 + 0x58);
    }
    uVar3 = local_res8[0];
    if (1 < local_res8[0]) {
      uVar3 = 0;
    }
    if ((lVar4 != 0) && (DAT_1811142a4 != 0)) {
      fVar5 = (float)FUN_18000f3d0((ulonglong)(uVar3 * 4) + lVar4 + (ulonglong)DAT_1811142a4);
    }
    fVar5 = fVar6 * *(float *)(param_2 + 0x40) + fVar5;
    if (fVar5 <= _DAT_1808ac08c) goto LAB_18047dcd1;
  }
  fVar5 = (float)FUN_18047dd10(&local_58);
LAB_18047dcd1:
  fVar6 = DAT_1808abfb0;
  param_1[2] = fVar5;
  *(bool *)(param_1 + 3) = *param_1 - fVar5 < fVar6;
  return param_1;
}



/* ===== 18047dd10 FUN_18047dd10 ===== */

float FUN_18047dd10(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = *(uint *)param_1[1];
  uVar3 = DAT_1811142a4;
  if ((*(byte *)(*param_1 + 0xc) & 2) != 0) {
    uVar3 = DAT_1811142ac;
  }
  lVar1 = *(longlong *)(*param_1 + 0x58);
  if (1 < uVar2) {
    uVar2 = 0;
  }
  if ((lVar1 == 0) || (uVar3 == 0)) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_18000f3d0((ulonglong)uVar3 + (ulonglong)(uVar2 * 4) + lVar1);
  }
  if ((*(short *)(*param_1 + 0x60) == 0x40) && (*(int *)param_1[1] == 0)) {
    lVar1 = *(longlong *)(*param_1 + 0x58);
    fVar5 = 0.0;
    if ((lVar1 != 0) && (fVar5 = 0.0, uVar3 != 0)) {
      fVar5 = (float)FUN_18000f3d0(lVar1 + 4 + (ulonglong)uVar3);
    }
    fVar4 = (fVar5 - fVar4) * DAT_1808ac154 + fVar4;
  }
  return fVar4;
}



/* ===== 18047dde0 FUN_18047dde0 ===== */

ulonglong * FUN_18047dde0(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  if (param_2 < 1) {
    if (-10000 < param_2) {
      return (ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 8);
    }
    if (param_2 == -0x2712) {
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xe8);
      *puVar1 = *(ulonglong *)(param_1 + 0x48) | 0xfffa000000000000;
      return puVar1;
    }
    if (param_2 == -10000) {
      return (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x110);
    }
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if (param_2 == -0x2711) {
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xe8);
      *puVar1 = *(ulonglong *)(uVar2 + 0x10) | 0xfffa000000000000;
      return puVar1;
    }
    if (-0x2712 - param_2 <= (int)(uint)*(byte *)(uVar2 + 0xb)) {
      return (ulonglong *)(uVar2 + ((longlong)(-0x2713 - param_2) + 6) * 8);
    }
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xf8);
  }
  else {
    puVar1 = (ulonglong *)((*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8) - 8);
    if (*(ulonglong **)(param_1 + 0x28) <= puVar1) {
      return (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xf8);
    }
  }
  return puVar1;
}



/* ===== 18047dec0 FUN_18047dec0 ===== */

undefined8 FUN_18047dec0(longlong param_1,undefined4 param_2,char *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  size_t sVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  puVar4 = (ulonglong *)FUN_18047dde0();
  uVar9 = *puVar4;
  uVar3 = (uint)((longlong)uVar9 >> 0x2f);
  if (uVar3 == 0xfffffff4) {
    uVar9 = *(ulonglong *)((uVar9 & 0x7fffffffffff) + 0x20);
  }
  else if (uVar3 == 0xfffffff3) {
    uVar9 = *(ulonglong *)((uVar9 & 0x7fffffffffff) + 0x20);
  }
  else {
    if (uVar3 < 0xfffffff3) {
      uVar3 = 0xd;
    }
    else {
      uVar3 = ~uVar3;
    }
    uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x1b0 + (ulonglong)(uVar3 + 0x16) * 8);
  }
  if (uVar9 != 0) {
    **(ulonglong **)(param_1 + 0x28) = uVar9 | 0xfffa000000000000;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
      FUN_18048ea20(param_1);
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    sVar5 = strlen(param_3);
    uVar9 = *(ulonglong *)(lVar1 + -8);
    uVar6 = FUN_180491d30(param_1,param_3,sVar5);
    plVar7 = (longlong *)FUN_180492860(uVar9 & 0x7fffffffffff,uVar6);
    if ((plVar7 != (longlong *)0x0) && (*plVar7 != -1)) {
      *(longlong *)(*(longlong *)(param_1 + 0x28) + -8) = *plVar7;
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x28) = puVar2 + -1;
      *puVar2 = 0xffffffffffffffff;
      puVar8 = (undefined8 *)FUN_18047dde0(param_1,param_2);
      puVar2[1] = *puVar8;
      *(undefined8 **)(param_1 + 0x28) = puVar2 + 2;
      FUN_1800032b0(param_1,puVar2 + 1,2);
      return 1;
    }
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
  }
  return 0;
}



/* ===== 18047e010 FUN_18047e010 ===== */

longlong FUN_18047e010(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  double local_res18 [2];
  
  pdVar2 = (double *)FUN_18047dde0();
  uVar3 = (uint)((longlong)*pdVar2 >> 0x2f);
  if (uVar3 < 0xfffffff2) {
    return (longlong)*pdVar2;
  }
  if (uVar3 == 0xfffffffb) {
    iVar1 = FUN_1804972a0((ulonglong)*pdVar2 & 0x7fffffffffff,local_res18);
    if (iVar1 != 0) {
      return (longlong)local_res18[0];
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,param_2,3);
}



/* ===== 18047e090 FUN_18047e090 ===== */

longlong FUN_18047e090(longlong param_1,undefined4 param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  puVar1 = (ulonglong *)FUN_18047dde0();
  uVar3 = (uint)((longlong)*puVar1 >> 0x2f);
  if (uVar3 == 0xfffffffb) {
    uVar2 = *puVar1 & 0x7fffffffffff;
  }
  else {
    if (0xfffffff2 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1804840e0(param_1,param_2,4);
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
      FUN_180491200(param_1);
    }
    puVar1 = (ulonglong *)FUN_18047dde0(param_1,param_2);
    uVar2 = thunk_FUN_1804b8f90(param_1,puVar1);
    *puVar1 = uVar2 | 0xfffd800000000000;
  }
  if (param_3 != (ulonglong *)0x0) {
    *param_3 = (ulonglong)*(uint *)(uVar2 + 0x14);
  }
  return uVar2 + 0x18;
}



/* ===== 18047e140 FUN_18047e140 ===== */

ulonglong FUN_18047e140(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong local_res18 [2];
  
  puVar2 = (ulonglong *)FUN_18047dde0();
  uVar3 = (uint)((longlong)*puVar2 >> 0x2f);
  if (uVar3 < 0xfffffff3) {
    return *puVar2;
  }
  if (uVar3 == 0xfffffffb) {
    iVar1 = FUN_1804972a0(*puVar2 & 0x7fffffffffff,local_res18);
    if (iVar1 != 0) {
      return local_res18[0];
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,param_2,3);
}



/* ===== 18047e1c0 FUN_18047e1c0 ===== */

void FUN_18047e1c0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  if (param_2 < 0x1f41) {
    if ((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + (longlong)param_2 <
        0x1f41) {
      if ((0 < param_2) &&
         (iVar1 = (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3),
         iVar1 < param_2)) {
        iVar1 = FUN_18048e860(param_1,param_2 - iVar1);
        if (iVar1 != 0) {
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
          goto LAB_18047e227;
        }
      }
      return;
    }
  }
LAB_18047e227:
                    /* WARNING: Subroutine does not return */
  FUN_1804842f0(param_1,0x77,param_3);
}



/* ===== 18047e240 FUN_18047e240 ===== */

void FUN_18047e240(longlong param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18047dde0();
  uVar1 = (uint)((longlong)*puVar2 >> 0x2f);
  if (uVar1 < 0xfffffff3) {
    uVar1 = 3;
  }
  else if (puVar2 == (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf8)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)(0x75a0698042110 >> ((byte)(~uVar1 << 2) & 0x3f)) & 0xf;
  }
  if (uVar1 != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1804840e0(param_1,param_2,param_3);
  }
  return;
}



/* ===== 18047e2c0 FUN_18047e2c0 ===== */

longlong FUN_18047e2c0(longlong param_1,undefined4 param_2,char *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  puVar2 = (ulonglong *)FUN_18047dde0();
  uVar5 = *puVar2;
  if ((int)((longlong)uVar5 >> 0x2f) == -0xd) {
    sVar3 = strlen(param_3);
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x110);
    uVar4 = FUN_180491d30(param_1,param_3,sVar3);
    puVar2 = (ulonglong *)FUN_180492860(uVar1 & 0x7fffffffffff,uVar4);
    if (((puVar2 != (ulonglong *)0x0) && ((int)((longlong)*puVar2 >> 0x2f) == -0xc)) &&
       (uVar5 = uVar5 & 0x7fffffffffff, (*puVar2 & 0x7fffffffffff) == *(ulonglong *)(uVar5 + 0x20)))
    {
      return uVar5 + 0x30;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180484100(param_1,param_2,param_3);
}



/* ===== 18047e380 FUN_18047e380 ===== */

undefined8 FUN_18047e380(longlong param_1,char *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x110) & 0x7fffffffffff;
  sVar3 = strlen(param_2);
  uVar4 = FUN_180491d30(param_1,param_2,sVar3);
  puVar5 = (ulonglong *)FUN_180493400(param_1,uVar7,uVar4);
  if (*puVar5 != 0xffffffffffffffff) {
    puVar2 = *(ulonglong **)(param_1 + 0x28);
    *(ulonglong **)(param_1 + 0x28) = puVar2 + 1;
    *puVar2 = *puVar5;
    return 0;
  }
  uVar6 = FUN_180492ab0(param_1,0,1);
  *puVar5 = uVar6 | 0xfffa000000000000;
  puVar5 = *(ulonglong **)(param_1 + 0x28);
  *(ulonglong **)(param_1 + 0x28) = puVar5 + 1;
  *puVar5 = uVar6 | 0xfffa000000000000;
  if ((*(byte *)(uVar7 + 8) & 4) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(byte *)(uVar7 + 8) = *(byte *)(uVar7 + 8) & 0xfb;
    *(undefined8 *)(uVar7 + 0x18) = *(undefined8 *)(lVar1 + 0x40);
    *(ulonglong *)(lVar1 + 0x40) = uVar7;
  }
  return 1;
}



/* ===== 18047e470 FUN_18047e470 ===== */

longlong FUN_18047e470(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  double local_res20;
  
  pdVar3 = (double *)FUN_18047dde0();
  dVar1 = *pdVar3;
  uVar4 = (uint)((longlong)dVar1 >> 0x2f);
  if (uVar4 < 0xfffffff2) {
    return (longlong)*pdVar3;
  }
  if (dVar1 == -NAN) {
    return param_3;
  }
  if (uVar4 == 0xfffffffb) {
    iVar2 = FUN_1804972a0((ulonglong)dVar1 & 0x7fffffffffff,&local_res20);
    if (iVar2 != 0) {
      return (longlong)local_res20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,param_2,3);
}



/* ===== 18047e510 FUN_18047e510 ===== */

char * FUN_18047e510(longlong param_1,undefined4 param_2,char *param_3,size_t *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  size_t sVar3;
  uint uVar4;
  
  puVar1 = (ulonglong *)FUN_18047dde0();
  uVar2 = *puVar1;
  uVar4 = (uint)((longlong)uVar2 >> 0x2f);
  if (uVar4 == 0xfffffffb) {
    uVar2 = uVar2 & 0x7fffffffffff;
  }
  else {
    if (uVar2 == 0xffffffffffffffff) {
      if (param_4 != (size_t *)0x0) {
        if (param_3 != (char *)0x0) {
          sVar3 = strlen(param_3);
          *param_4 = sVar3;
          return param_3;
        }
        *param_4 = 0;
      }
      return param_3;
    }
    if (0xfffffff2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1804840e0(param_1,param_2,4);
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
      FUN_180491200(param_1);
    }
    puVar1 = (ulonglong *)FUN_18047dde0(param_1,param_2);
    uVar2 = thunk_FUN_1804b8f90(param_1,puVar1);
    *puVar1 = uVar2 | 0xfffd800000000000;
  }
  if (param_4 != (size_t *)0x0) {
    *param_4 = (ulonglong)*(uint *)(uVar2 + 0x14);
  }
  return (char *)(uVar2 + 0x18);
}



/* ===== 18047e5f0 FUN_18047e5f0 ===== */

ulonglong FUN_18047e5f0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong local_res20;
  
  uVar6 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  puVar3 = (ulonglong *)FUN_18047dde0();
  uVar1 = *puVar3;
  uVar4 = (uint)((longlong)uVar1 >> 0x2f);
  if (uVar4 < 0xfffffff3) {
    return *puVar3;
  }
  if (uVar1 == 0xffffffffffffffff) {
    return CONCAT44(uVar6,uVar5);
  }
  if (uVar4 == 0xfffffffb) {
    iVar2 = FUN_1804972a0(uVar1 & 0x7fffffffffff,&local_res20);
    if (iVar2 != 0) {
      return local_res20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804840e0(param_1,param_2,3);
}



/* ===== 18047e680 FUN_18047e680 ===== */

longlong FUN_18047e680(longlong param_1,undefined8 param_2,char *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar2 = (ulonglong *)FUN_18047dde0();
  uVar6 = *puVar2;
  if ((int)((longlong)uVar6 >> 0x2f) == -0xd) {
    sVar3 = strlen(param_3);
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x110);
    uVar4 = FUN_180491d30(param_1,param_3,sVar3);
    puVar2 = (ulonglong *)FUN_180492860(uVar1 & 0x7fffffffffff,uVar4);
    if ((puVar2 != (ulonglong *)0x0) && ((int)((longlong)*puVar2 >> 0x2f) == -0xc)) {
      uVar6 = uVar6 & 0x7fffffffffff;
      lVar5 = 0;
      if ((*puVar2 & 0x7fffffffffff) == *(ulonglong *)(uVar6 + 0x20)) {
        lVar5 = uVar6 + 0x30;
      }
      return lVar5;
    }
  }
  return 0;
}



/* ===== 18047e730 FUN_18047e730 ===== */

void FUN_18047e730(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  puVar2 = puVar1 + -(longlong)param_2;
  *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
  for (; puVar2 < puVar1; puVar1 = puVar1 + -1) {
    *puVar1 = puVar1[-1];
  }
  *puVar1 = 0xffffffffffffffff;
  FUN_1800032b0(param_1,puVar1 + 1,param_3 + 1);
  return;
}



/* ===== 18047e780 FUN_18047e780 ===== */

undefined8 FUN_18047e780(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((8000 < param_2) ||
     (8000 < (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) +
             (longlong)param_2)) {
    return 0;
  }
  if ((param_2 < 1) ||
     ((iVar1 = (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3),
      param_2 <= iVar1 || (iVar1 = FUN_18048e860(param_1,param_2 - iVar1), iVar1 == 0)))) {
    return 1;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
  return 0;
}



/* ===== 18047e7f0 FUN_18047e7f0 ===== */

void FUN_18047e7f0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      **(ulonglong **)(param_1 + 0x28) = *(longlong *)(param_1 + 0x10) + 0x78U | 0xfffd800000000000;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
        FUN_18048ea20(param_1);
        return;
      }
    }
  }
  else {
    param_2 = param_2 + -1;
    do {
      lVar3 = FUN_180494370(param_1,*(longlong *)(param_1 + 0x28) + -8,-param_2);
      lVar1 = *(longlong *)(param_1 + 0x28);
      if (lVar3 == 0) {
        *(longlong *)(param_1 + 0x28) = lVar1 + (longlong)param_2 * -8;
        return;
      }
      *(longlong *)(param_1 + 0x28) = lVar3 + 0x10;
      FUN_1800032b0(param_1,lVar3,2);
      lVar2 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(param_1 + 0x28) = lVar2 + -0x10;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar2 + -8);
      param_2 = param_2 + (-1 - (int)((lVar1 - lVar3) + 0x10 >> 3));
    } while (0 < param_2);
  }
  return;
}



/* ===== 18047e8f0 FUN_18047e8f0 ===== */

void FUN_18047e8f0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200();
  }
  uVar1 = FUN_180492ba0(param_1,param_2,param_3);
  **(ulonglong **)(param_1 + 0x28) = uVar1 | 0xfffa000000000000;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
    FUN_18048ea20(param_1);
  }
  return;
}



/* ===== 18047e970 FUN_18047e970 ===== */

ulonglong FUN_18047e970(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_2 < 10) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    switch(param_2) {
    case 0:
      *(undefined8 *)(lVar2 + 0x18) = 0x800000000000;
      return 0;
    case 1:
      uVar3 = *(ulonglong *)(lVar2 + 0x10);
      if (param_3 == -1) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar3;
        lVar6 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar4,8);
        *(ulonglong *)(lVar2 + 0x18) =
             (ulonglong)*(uint *)(lVar2 + 0x6c) * ((uVar3 - lVar6 >> 1) + lVar6 >> 6);
        return 0;
      }
      *(ulonglong *)(lVar2 + 0x18) = uVar3;
      return 0;
    case 2:
      FUN_180490e30(param_1);
      return 0;
    case 3:
      return *(ulonglong *)(lVar2 + 0x10) >> 10 & 0xffffffff;
    case 4:
      return (ulonglong)(*(uint *)(lVar2 + 0x10) & 0x3ff);
    case 5:
      uVar3 = *(ulonglong *)(lVar2 + 0x10);
      uVar7 = uVar3 + (longlong)param_3 * -0x400;
      if (uVar3 < (ulonglong)((longlong)param_3 * 0x400)) {
        uVar7 = 0;
      }
      *(ulonglong *)(lVar2 + 0x18) = uVar7;
      if (uVar3 < uVar7) {
        return 0;
      }
      do {
        iVar5 = FUN_180491200(param_1);
        if (0 < iVar5) {
          return 1;
        }
      } while (*(ulonglong *)(lVar2 + 0x18) <= *(ulonglong *)(lVar2 + 0x10));
      return 0;
    case 6:
      uVar1 = *(uint *)(lVar2 + 0x6c);
      *(int *)(lVar2 + 0x6c) = param_3;
      return (ulonglong)uVar1;
    case 7:
      uVar1 = *(uint *)(lVar2 + 0x68);
      *(int *)(lVar2 + 0x68) = param_3;
      return (ulonglong)uVar1;
    case 9:
      return (ulonglong)(*(longlong *)(lVar2 + 0x18) != 0x800000000000);
    }
  }
  return 0xffffffff;
}



/* ===== 18047eb70 FUN_18047eb70 ===== */

void FUN_18047eb70(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  ulonglong local_res8;
  
  uVar2 = FUN_18047dde0();
  sVar3 = strlen(param_3);
  local_res8 = FUN_180491d30(param_1,param_3,sVar3);
  local_res8 = local_res8 | 0xfffd800000000000;
  puVar4 = (undefined8 *)FUN_180494ee0(param_1,uVar2,&local_res8);
  if (puVar4 == (undefined8 *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x28) = lVar1 + 0x10;
    FUN_1800032b0(param_1,lVar1,2);
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x28) = lVar1 + -0x18;
    puVar4 = (undefined8 *)(lVar1 + -8);
  }
  **(undefined8 **)(param_1 + 0x28) = *puVar4;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
    FUN_18048ea20(param_1);
  }
  return;
}



/* ===== 18047ec30 FUN_18047ec30 ===== */

undefined8 FUN_18047ec30(longlong param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar2 = (ulonglong *)FUN_18047dde0();
  uVar1 = (uint)((longlong)*puVar2 >> 0x2f);
  if ((uVar1 == 0xfffffff4) || (uVar1 == 0xfffffff3)) {
    uVar3 = *(ulonglong *)((*puVar2 & 0x7fffffffffff) + 0x20);
  }
  else {
    if (uVar1 < 0xfffffff3) {
      uVar1 = 0xd;
    }
    else {
      uVar1 = ~uVar1;
    }
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x1b0 + (ulonglong)(uVar1 + 0x16) * 8);
  }
  if (uVar3 == 0) {
    return 0;
  }
  **(ulonglong **)(param_1 + 0x28) = uVar3 | 0xfffa000000000000;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
    FUN_18048ea20(param_1);
  }
  return 1;
}



/* ===== 18047ecd0 FUN_18047ecd0 ===== */

void FUN_18047ecd0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_18047dde0();
  puVar3 = (undefined8 *)FUN_180494ee0(param_1,uVar2,*(longlong *)(param_1 + 0x28) + -8);
  if (puVar3 == (undefined8 *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x28) = lVar1 + 0x10;
    FUN_1800032b0(param_1,lVar1,2);
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x28) = lVar1 + -0x18;
    puVar3 = (undefined8 *)(lVar1 + -8);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) = *puVar3;
  return;
}



/* ===== 18047ed40 FUN_18047ed40 ===== */

longlong FUN_18047ed40(longlong param_1)

{
  return *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3;
}



/* ===== 18047ed50 FUN_18047ed50 ===== */

void FUN_18047ed50(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < 1) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    puVar3 = puVar2 + param_2;
LAB_18047ed87:
    if (puVar2 <= puVar3) goto LAB_18047eda3;
  }
  else {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + -8 + (longlong)param_2 * 8);
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if (puVar2 <= puVar3) {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf8);
      goto LAB_18047ed87;
    }
  }
  do {
    puVar1 = puVar2 + -1;
    *puVar2 = puVar2[-1];
    puVar2 = puVar1;
  } while (puVar3 < puVar1);
LAB_18047eda3:
  *puVar3 = **(undefined8 **)(param_1 + 0x28);
  return;
}



/* ===== 18047edb0 FUN_18047edb0 ===== */

undefined8 FUN_18047edb0(void)

{
  uint uVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined1 local_res18 [16];
  
  puVar3 = (ulonglong *)FUN_18047dde0();
  uVar1 = (uint)((longlong)*puVar3 >> 0x2f);
  if (uVar1 < 0xfffffff3) {
    return 1;
  }
  if ((uVar1 == 0xfffffffb) &&
     (iVar2 = FUN_1804972a0(*puVar3 & 0x7fffffffffff,local_res18), iVar2 != 0)) {
    return 1;
  }
  return 0;
}



/* ===== 18047ee00 FUN_18047ee00 ===== */

undefined8 FUN_18047ee00(void)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)FUN_18047dde0();
  uVar2 = (uint)((longlong)*puVar1 >> 0x2f);
  if ((uVar2 == 0xfffffffb) || (uVar2 < 0xfffffff3)) {
    return 1;
  }
  return 0;
}



/* ===== 18047ee30 FUN_18047ee30 ===== */

undefined8 FUN_18047ee30(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)FUN_18047dde0();
  iVar2 = (int)((longlong)*puVar1 >> 0x2f);
  if ((iVar2 == -0xd) || (iVar2 == -4)) {
    return 1;
  }
  return 0;
}



/* ===== 18047ee60 FUN_18047ee60 ===== */

ulonglong FUN_18047ee60(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  ulonglong uVar4;
  double *pdVar5;
  
  param_3 = param_3 & 0xffffffff;
  pdVar2 = (double *)FUN_18047dde0();
  pdVar3 = (double *)FUN_18047dde0(param_1,param_3 & 0xffffffff);
  pdVar5 = (double *)(*(longlong *)(param_1 + 0x10) + 0xf8);
  if ((pdVar2 == pdVar5) || (pdVar3 == pdVar5)) {
    uVar4 = 0;
  }
  else {
    if (((uint)((longlong)*pdVar2 >> 0x2f) < 0xfffffff3) &&
       ((uint)((longlong)*pdVar3 >> 0x2f) < 0xfffffff3)) {
      return (ulonglong)(*pdVar2 <= *pdVar3 && *pdVar3 != *pdVar2);
    }
    uVar4 = FUN_180494740(param_1,pdVar2,pdVar3,0);
    if (1 < uVar4) {
      *(ulonglong *)(param_1 + 0x28) = uVar4 + 0x10;
      FUN_1800032b0(param_1,uVar4,2);
      lVar1 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(param_1 + 0x28) = lVar1 + -0x18;
      return (ulonglong)((uint)((longlong)*(undefined8 *)(lVar1 + -8) >> 0x2f) < 0xfffffffe);
    }
  }
  return uVar4;
}



/* ===== 18047ef40 FUN_18047ef40 ===== */

ulonglong FUN_18047ef40(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200();
  }
  uVar1 = FUN_18048ea30(param_1);
  **(ulonglong **)(param_1 + 0x28) = uVar1 | 0xfffc800000000000;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
    FUN_18048ea20(param_1);
  }
  return uVar1;
}



/* ===== 18047efb0 FUN_18047efb0 ===== */

longlong FUN_18047efb0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200();
  }
  if (0x7fffff00 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180484550(param_1,0x4f);
  }
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar1 + 9) == '\b') {
    uVar2 = *(undefined8 *)(uVar1 + 0x10);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
  }
  uVar1 = FUN_180493f30(param_1,param_2 & 0xffffffff,uVar2);
  **(ulonglong **)(param_1 + 0x28) = uVar1 | 0xfff9800000000000;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
    FUN_18048ea20(param_1);
  }
  return uVar1 + 0x30;
}



/* ===== 18047f060 FUN_18047f060 ===== */

int FUN_18047f060(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  puVar2 = (ulonglong *)FUN_18047dde0();
  lVar3 = *(longlong *)(param_1 + 0x28) + -8;
  iVar1 = FUN_180492e20(*puVar2 & 0x7fffffffffff,lVar3,lVar3);
  if (iVar1 < 1) {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180484550(param_1,0xc0);
    }
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
  }
  else {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
      FUN_18048ea20(param_1);
      return iVar1;
    }
  }
  return iVar1;
}



/* ===== 18047f0e0 FUN_18047f0e0 ===== */

undefined4 FUN_18047f0e0(undefined8 param_1)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  
  puVar2 = (ulonglong *)FUN_18047dde0();
  uVar3 = *puVar2;
  uVar4 = (uint)((longlong)uVar3 >> 0x2f);
  if (uVar4 == 0xfffffffb) {
    return *(undefined4 *)((uVar3 & 0x7fffffffffff) + 0x14);
  }
  if (uVar4 == 0xfffffff4) {
    uVar1 = FUN_1804929b0(uVar3 & 0x7fffffffffff);
    return uVar1;
  }
  if (uVar4 == 0xfffffff3) {
    return *(undefined4 *)((uVar3 & 0x7fffffffffff) + 0x18);
  }
  if (uVar4 < 0xfffffff3) {
    uVar3 = thunk_FUN_1804b8f90(param_1,puVar2);
    *puVar2 = uVar3 | 0xfffd800000000000;
    return *(undefined4 *)(uVar3 + 0x14);
  }
  return 0;
}



/* ===== 18047f190 FUN_18047f190 ===== */

void FUN_18047f190(longlong param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar7;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  bVar1 = *(byte *)(lVar2 + 0x91);
  if (param_4 == 0) {
    lVar6 = 0;
  }
  else {
    if (param_4 < 1) {
      uVar7 = *(longlong *)(param_1 + 0x28) + (longlong)param_4 * 8;
    }
    else {
      uVar7 = *(longlong *)(param_1 + 0x20) + ((longlong)param_4 + -1) * 8;
      if (*(ulonglong *)(param_1 + 0x28) <= uVar7) {
        uVar7 = lVar2 + 0xf8;
      }
    }
    lVar6 = uVar7 - *(longlong *)(param_1 + 0x38);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  puVar5 = puVar3 + -(longlong)param_2;
  *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
  for (; puVar5 < puVar3; puVar3 = puVar3 + -1) {
    *puVar3 = puVar3[-1];
  }
  *puVar3 = 0xffffffffffffffff;
  iVar4 = FUN_18000329c(param_1,puVar3 + 1,param_3 + 1,lVar6);
  if (iVar4 != 0) {
    *(byte *)(lVar2 + 0x91) = (bVar1 ^ *(byte *)(lVar2 + 0x91)) & 0xf ^ bVar1;
  }
  return;
}



/* ===== 18047f270 FUN_18047f270 ===== */

void FUN_18047f270(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffff7fffffffffff;
  if (param_2 != 0) {
    uVar1 = 0xfffeffffffffffff;
  }
  **(undefined8 **)(param_1 + 0x28) = uVar1;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
    return;
  }
  FUN_18048e920(param_1,1);
  return;
}



/* ===== 18047f2b0 FUN_18047f2b0 ===== */

void FUN_18047f2b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = (ulonglong)(int)param_3;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200(param_1);
  }
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar1 + 9) == '\b') {
    uVar3 = *(undefined8 *)(uVar1 + 0x10);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
  }
  uVar1 = FUN_180493b30(param_1,param_3,uVar3);
  *(undefined8 *)(uVar1 + 0x28) = param_2;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + uVar2 * -8;
  while (param_3 != 0) {
    param_3 = (int)uVar2 - 1;
    uVar2 = (ulonglong)param_3;
    *(undefined8 *)(uVar1 + 0x30 + (longlong)(int)param_3 * 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)param_3 * 8);
  }
  **(ulonglong **)(param_1 + 0x28) = uVar1 | 0xfffb800000000000;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
    FUN_18048ea20(param_1);
  }
  return;
}



/* ===== 18047f380 FUN_18047f380 ===== */

void FUN_18047f380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200();
  }
  FUN_180498660(param_1,param_2,&local_res18);
  return;
}



/* ===== 18047f3d0 FUN_18047f3d0 ===== */

void FUN_18047f3d0(longlong param_1,longlong param_2)

{
  **(double **)(param_1 + 0x28) = (double)param_2;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
    return;
  }
  FUN_18048e920((double)param_2,1);
  return;
}



/* ===== 18047f400 FUN_18047f400 ===== */

void FUN_18047f400(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180493e30();
  **(ulonglong **)(param_1 + 0x28) = uVar1 | 0xfffe000000000000;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
    return;
  }
  FUN_18048ea20(param_1);
  return;
}



/* ===== 18047f450 FUN_18047f450 ===== */

void FUN_18047f450(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    FUN_180491200();
  }
  uVar1 = FUN_180491d30(param_1,param_2,param_3);
  **(ulonglong **)(param_1 + 0x28) = uVar1 | 0xfffd800000000000;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
    FUN_18048ea20(param_1);
  }
  return;
}



/* ===== 18047f4d0 FUN_18047f4d0 ===== */

void FUN_18047f4d0(longlong param_1)

{
  **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
    return;
  }
  FUN_18048e920(param_1,1);
  return;
}



/* ===== 18047f4f0 FUN_18047f4f0 ===== */

void FUN_18047f4f0(longlong param_1,undefined8 param_2)

{
  double dVar1;
  
  **(undefined8 **)(param_1 + 0x28) = param_2;
  dVar1 = **(double **)(param_1 + 0x28);
  if (NAN(dVar1)) {
    **(double **)(param_1 + 0x28) = -NAN;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
    return;
  }
  FUN_18048e920(dVar1,1);
  return;
}



/* ===== 18047f530 FUN_18047f530 ===== */

void FUN_18047f530(longlong param_1,char *param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  
  if (param_2 == (char *)0x0) {
    **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  }
  else {
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
      FUN_180491200(param_1);
    }
    sVar1 = strlen(param_2);
    uVar2 = FUN_180491d30(param_1,param_2,sVar1);
    **(ulonglong **)(param_1 + 0x28) = uVar2 | 0xfffd800000000000;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
    FUN_18048ea20(param_1);
  }
  return;
}



/* ===== 18047f5c0 FUN_18047f5c0 ===== */

bool FUN_18047f5c0(ulonglong param_1)

{
  **(ulonglong **)(param_1 + 0x28) = param_1 | 0xfffc800000000000;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x28)) {
    FUN_18048ea20();
  }
  return *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xc0) == param_1;
}



/* ===== 18047f610 FUN_18047f610 ===== */

void FUN_18047f610(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18047dde0();
  **(undefined8 **)(param_1 + 0x28) = *puVar1;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
    return;
  }
  FUN_18048ea20(param_1);
  return;
}



/* ===== 18047f650 FUN_18047f650 ===== */

undefined8 FUN_18047f650(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_3;
  lVar1 = FUN_18047dde0();
  lVar2 = FUN_18047dde0(param_1,uVar5 & 0xffffffff);
  lVar4 = *(longlong *)(param_1 + 0x10) + 0xf8;
  if ((lVar1 == lVar4) || (lVar2 == lVar4)) {
    return 0;
  }
  uVar3 = FUN_18048f530(lVar1,lVar2);
  return uVar3;
}



/* ===== 18047f6b0 FUN_18047f6b0 ===== */

void FUN_18047f6b0(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (ulonglong *)FUN_18047dde0();
  puVar2 = (undefined8 *)
           FUN_1804926a0(param_1,*puVar1 & 0x7fffffffffff,*(longlong *)(param_1 + 0x28) + -8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8) = *puVar2;
  return;
}



/* ===== 18047f6f0 FUN_18047f6f0 ===== */

void FUN_18047f6f0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  puVar1 = (ulonglong *)FUN_18047dde0();
  uVar3 = *puVar1 & 0x7fffffffffff;
  if ((uint)uVar4 < *(uint *)(uVar3 + 0x30)) {
    puVar2 = (undefined8 *)(*(longlong *)(uVar3 + 0x10) + uVar4 * 8);
  }
  else {
    puVar2 = (undefined8 *)FUN_1804927e0(uVar3,uVar4 & 0xffffffff);
  }
  if (puVar2 == (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  }
  else {
    **(undefined8 **)(param_1 + 0x28) = *puVar2;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
    return;
  }
  FUN_18048ea20(param_1);
  return;
}



/* ===== 18047f770 FUN_18047f770 ===== */

void FUN_18047f770(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar3 = (ulonglong *)FUN_18047dde0();
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar5 = *puVar3 & 0x7fffffffffff;
  lVar1 = lVar2 + -0x10;
  puVar4 = (undefined8 *)FUN_1804931f0(param_1,uVar5,lVar1);
  *puVar4 = *(undefined8 *)(lVar2 + -8);
  if ((*(byte *)(uVar5 + 8) & 4) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    *(byte *)(uVar5 + 8) = *(byte *)(uVar5 + 8) & 0xfb;
    *(undefined8 *)(uVar5 + 0x18) = *(undefined8 *)(lVar2 + 0x40);
    *(ulonglong *)(lVar2 + 0x40) = uVar5;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return;
}



/* ===== 18047f7e0 FUN_18047f7e0 ===== */

void FUN_18047f7e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_3;
  puVar2 = (ulonglong *)FUN_18047dde0();
  uVar4 = *puVar2 & 0x7fffffffffff;
  if ((uint)uVar5 < *(uint *)(uVar4 + 0x30)) {
    puVar2 = (ulonglong *)(*(longlong *)(uVar4 + 0x10) + uVar5 * 8);
  }
  else {
    puVar2 = (ulonglong *)FUN_180493360(param_1,uVar4,uVar5 & 0xffffffff);
  }
  puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + -8);
  uVar5 = *puVar3;
  *puVar2 = uVar5;
  if (((0xfffffff6 < (int)((longlong)uVar5 >> 0x2f) + 4U) &&
      ((*(byte *)((uVar5 & 0x7fffffffffff) + 8) & 3) != 0)) && ((*(byte *)(uVar4 + 8) & 4) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(byte *)(uVar4 + 8) = *(byte *)(uVar4 + 8) & 0xfb;
    *(undefined8 *)(uVar4 + 0x18) = *(undefined8 *)(lVar1 + 0x40);
    *(ulonglong *)(lVar1 + 0x40) = uVar4;
  }
  *(ulonglong **)(param_1 + 0x28) = puVar3;
  return;
}



/* ===== 18047f880 FUN_18047f880 ===== */

void FUN_18047f880(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 < 1) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    puVar1 = puVar2 + param_2;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8 + -8);
    if (puVar2 <= puVar1) {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf8);
    }
  }
  puVar1 = puVar1 + 1;
  if (puVar1 < puVar2) {
    do {
      puVar1[-1] = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = *(undefined8 **)(param_1 + 0x28);
    } while (puVar1 < puVar2);
  }
  *(undefined8 **)(param_1 + 0x28) = puVar2 + -1;
  return;
}



/* ===== 18047f8e0 FUN_18047f8e0 ===== */

void FUN_18047f8e0(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  ulonglong local_res20;
  
  uVar2 = FUN_18047dde0();
  sVar3 = strlen(param_3);
  local_res20 = FUN_180491d30(param_1,param_3,sVar3);
  local_res20 = local_res20 | 0xfffd800000000000;
  puVar4 = (undefined8 *)FUN_1804950a0(param_1,uVar2,&local_res20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + -0x28);
    *(longlong *)(param_1 + 0x28) = lVar1 + 0x18;
    FUN_1800032b0(param_1,lVar1,1);
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -0x18;
    return;
  }
  *(undefined8 **)(param_1 + 0x28) = (undefined8 *)(lVar1 + -8);
  *puVar4 = *(undefined8 *)(lVar1 + -8);
  return;
}



/* ===== 18047f990 FUN_18047f990 ===== */

undefined8 FUN_18047f990(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar4 = (ulonglong *)FUN_18047dde0();
  uVar7 = *puVar4;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + -8);
  uVar8 = 0;
  if (uVar1 != 0xffffffffffffffff) {
    uVar8 = uVar1 & 0x7fffffffffff;
  }
  iVar3 = (int)((longlong)uVar7 >> 0x2f);
  if (iVar3 == -0xc) {
    *(ulonglong *)((uVar7 & 0x7fffffffffff) + 0x20) = uVar8;
    if ((uVar8 != 0) && ((*(byte *)(uVar8 + 8) & 3) != 0)) {
      uVar7 = *puVar4 & 0x7fffffffffff;
      if ((*(byte *)(uVar7 + 8) & 4) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        *(byte *)(uVar7 + 8) = *(byte *)(uVar7 + 8) & 0xfb;
        *(undefined8 *)(uVar7 + 0x18) = *(undefined8 *)(lVar2 + 0x40);
        *(ulonglong *)(lVar2 + 0x40) = uVar7;
      }
    }
  }
  else if (iVar3 == -0xd) {
    *(ulonglong *)((uVar7 & 0x7fffffffffff) + 0x20) = uVar8;
    if (((uVar8 != 0) && ((*(byte *)(uVar8 + 8) & 3) != 0)) &&
       ((*(byte *)((*puVar4 & 0x7fffffffffff) + 8) & 4) != 0)) {
      FUN_1804908e0(*(undefined8 *)(param_1 + 0x10),*puVar4 & 0x7fffffffffff,uVar8);
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar3 = FUN_1804958a0(param_1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180484220(param_1,0x381);
    }
    puVar5 = (undefined8 *)FUN_18047dde0(param_1,param_2);
    uVar6 = (uint)((longlong)*puVar5 >> 0x2f);
    if (uVar6 + 3 < 2) {
      *(ulonglong *)(lVar2 + 0x270) = uVar8;
      *(ulonglong *)(lVar2 + 0x268) = uVar8;
    }
    else if (uVar6 < 0xfffffff3) {
      *(ulonglong *)(lVar2 + 0x2c8) = uVar8;
    }
    else {
      *(ulonglong *)(lVar2 + 0x1b0 + (ulonglong)(~uVar6 + 0x16) * 8) = uVar8;
    }
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
  return 1;
}



/* ===== 18047fae0 FUN_18047fae0 ===== */

void FUN_18047fae0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_18047dde0();
  puVar3 = (undefined8 *)FUN_1804950a0(param_1,uVar2,*(longlong *)(param_1 + 0x28) + -0x10);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + -0x28);
    *(longlong *)(param_1 + 0x28) = lVar1 + 0x18;
    FUN_1800032b0(param_1,lVar1,1);
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -0x20;
    return;
  }
  *(longlong *)(param_1 + 0x28) = lVar1 + -0x10;
  *puVar3 = *(undefined8 *)(lVar1 + -8);
  return;
}



/* ===== 18047fb50 FUN_18047fb50 ===== */

void FUN_18047fb50(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  if (param_2 < 0) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (lVar2 + 1) * 8;
    return;
  }
  uVar1 = *(longlong *)(param_1 + 0x20) + lVar2 * 8;
  if (uVar1 <= *(ulonglong *)(param_1 + 0x28)) {
    *(ulonglong *)(param_1 + 0x28) = uVar1;
    return;
  }
  if (*(ulonglong *)(param_1 + 0x30) <= uVar1) {
    FUN_18048e920(param_1,param_2 - (int)((longlong)
                                          (*(ulonglong *)(param_1 + 0x28) -
                                          *(longlong *)(param_1 + 0x20)) >> 3));
  }
  do {
    **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
    uVar1 = *(longlong *)(param_1 + 0x28) + 8;
    *(ulonglong *)(param_1 + 0x28) = uVar1;
  } while (uVar1 < (ulonglong)(*(longlong *)(param_1 + 0x20) + lVar2 * 8));
  return;
}



/* ===== 18047fbf0 FUN_18047fbf0 ===== */

bool FUN_18047fbf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18047dde0();
  return (uint)((longlong)*puVar1 >> 0x2f) < 0xfffffffe;
}



/* ===== 18047fc10 FUN_18047fc10 ===== */

longlong FUN_18047fc10(void)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  double local_res18 [2];
  
  pdVar2 = (double *)FUN_18047dde0();
  uVar3 = (uint)((longlong)*pdVar2 >> 0x2f);
  if (uVar3 < 0xfffffff2) {
    return (longlong)*pdVar2;
  }
  if (uVar3 == 0xfffffffb) {
    iVar1 = FUN_1804972a0((ulonglong)*pdVar2 & 0x7fffffffffff,local_res18);
    if (iVar1 != 0) {
      return (longlong)local_res18[0];
    }
  }
  return 0;
}



/* ===== 18047fc70 FUN_18047fc70 ===== */

longlong FUN_18047fc70(longlong param_1,undefined4 param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  puVar1 = (ulonglong *)FUN_18047dde0();
  uVar3 = (uint)((longlong)*puVar1 >> 0x2f);
  if (uVar3 == 0xfffffffb) {
    uVar2 = *puVar1 & 0x7fffffffffff;
  }
  else {
    if (0xfffffff2 < uVar3) {
      if (param_3 != (ulonglong *)0x0) {
        *param_3 = 0;
      }
      return 0;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x18) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
      FUN_180491200(param_1);
    }
    puVar1 = (ulonglong *)FUN_18047dde0(param_1,param_2);
    uVar2 = thunk_FUN_1804b8f90(param_1,puVar1);
    *puVar1 = uVar2 | 0xfffd800000000000;
  }
  if (param_3 != (ulonglong *)0x0) {
    *param_3 = (ulonglong)*(uint *)(uVar2 + 0x14);
  }
  return uVar2 + 0x18;
}



/* ===== 18047fd30 FUN_18047fd30 ===== */

ulonglong FUN_18047fd30(void)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong local_res18 [2];
  
  puVar2 = (ulonglong *)FUN_18047dde0();
  uVar3 = (uint)((longlong)*puVar2 >> 0x2f);
  if (uVar3 < 0xfffffff3) {
    return *puVar2;
  }
  if (uVar3 == 0xfffffffb) {
    iVar1 = FUN_1804972a0(*puVar2 & 0x7fffffffffff,local_res18);
    if (iVar1 != 0) {
      return local_res18[0];
    }
  }
  return 0;
}



/* ===== 18047fd90 FUN_18047fd90 ===== */

ulonglong FUN_18047fd90(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  puVar3 = (ulonglong *)FUN_18047dde0();
  uVar1 = *puVar3;
  iVar2 = (int)((longlong)uVar1 >> 0x2f);
  if (iVar2 == -0xd) {
    return (uVar1 & 0x7fffffffffff) + 0x30;
  }
  if ((iVar2 == -4) && (uVar4 = uVar1 >> 0x27 & 0xff, uVar4 != 0xff)) {
    return (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70) + uVar4 * 4) <<
           0x20 | uVar1 & 0x7fffffffff;
  }
  return 0;
}



